/* Standard includes. */
#include <limits.h>
#include <stdint.h>
#include <stdio.h>

struct xDNSAnswerRecord {
  uint16_t usType;
  uint16_t usClass;
  uint32_t ulTTL;
  uint16_t usDataLength;
};

typedef struct xDNSAnswerRecord DNSAnswerRecord_t;

struct xDNSMessage {
  uint16_t usIdentifier;
  uint16_t usFlags;
  uint16_t usQuestions;
  uint16_t usAnswers;
  uint16_t usAuthorityRRs;
  uint16_t usAdditionalRRs;
};

typedef struct xDNSMessage DNSMessage_t;

#define dnsNAME_IS_OFFSET ((uint8_t)0xc0)
#define dnsPARSE_ERROR 0UL
#define ipconfigDNS_CACHE_ADDRESSES_PER_ENTRY (6)
#define pdFALSE ((BaseType_t)0)
#define pdTRUE ((BaseType_t)1)
#define ipSIZE_OF_IPv4_ADDRESS 4U
#define dnsTYPE_A_HOST 0x01U
#define dnsRX_FLAGS_MASK                                                       \
  0x0f80U /* The bits of interest in the flags field of incoming DNS messages. \
           */
#define dnsEXPECTED_RX_FLAGS                                                   \
  0x0080U /* Should be a response, without any errors. */
#define ipFALSE_BOOL (1 == 2)

#define FreeRTOS_printf(MSG)                                                   \
  do {                                                                         \
  } while (ipFALSE_BOOL)
#define ipconfigDNS_CACHE_NAME_LENGTH 254

// for now
#define ipconfigUSE_DNS_CACHE 1
#define ipconfigUSE_LLMNR 0

typedef long BaseType_t;

#define ipPOINTER_CAST(TYPE, pointer) ((TYPE)(pointer))
#define FreeRTOS_htons(x) ((uint16_t)(x))
#define FreeRTOS_ntohs(x) FreeRTOS_htons(x)

/*@
    predicate is_uint16(integer n) =
        0 <= n < 1 << 16;
*/

/*@
        assigns \nothing;
*/
static uint16_t usChar2u16(const uint8_t *apChr);
static uint16_t usChar2u16(const uint8_t *apChr) {
  return (uint16_t)((((uint32_t)apChr[0]) << 8) | (((uint32_t)apChr[1])));
}

/*@
        assigns \nothing;
*/
void *memcpy(void *dest, const void *src, size_t n);

/*@
    requires \valid(pucByte + (0 .. uxLength - 1));

        assigns \nothing;

        behavior zeroLength:
                assumes uxLength == 0;
                ensures \result == 0U;

        behavior nameIsOffset:
                assumes uxLength != 0 && (pucByte[0U] & dnsNAME_IS_OFFSET) ==
   dnsNAME_IS_OFFSET; ensures uxLength <= sizeof( uint16_t ) <==> \result == 0U;
                ensures uxLength > sizeof( uint16_t ) <==> \result == sizeof(
   uint16_t );

        behavior fullName:
                assumes uxLength != 0U && ( pucByte[0U] & dnsNAME_IS_OFFSET ) !=
   dnsNAME_IS_OFFSET; ensures \result == 0 ==> \exists size_t j; 0 <= j <
   uxLength ==> pucByte[j] != 0;

        complete behaviors;
        disjoint behaviors;
*/
static size_t prvSkipNameField(const uint8_t *pucByte, size_t uxLength) {
  size_t uxChunkLength;
  size_t uxSourceLenCpy = uxLength;
  size_t uxIndex = 0U;

  if (uxSourceLenCpy == 0U) {
    uxIndex = 0U;
  }
  /* Determine if the name is the fully coded name, or an offset to the name
  elsewhere in the message. */
  else if ((pucByte[uxIndex] & dnsNAME_IS_OFFSET) == dnsNAME_IS_OFFSET) {
    /* Jump over the two byte offset. */
    if (uxSourceLenCpy > sizeof(uint16_t)) {
      uxIndex += sizeof(uint16_t);
    } else {
      uxIndex = 0U;
    }
  } else {
    /* pucByte points to the full name. Walk over the string. */
    /*@
                    loop invariant uxIndex + uxSourceLenCpy == uxLength;
                    loop invariant 0 <= uxIndex < uxLength;
        loop assigns uxChunkLength, uxSourceLenCpy, uxIndex;
        loop variant uxSourceLenCpy;
    */
    while ((pucByte[uxIndex] != 0U) && (uxSourceLenCpy > 1U)) {
      /* Conversion to size_t causes addition to be done
      in size_t */
      uxChunkLength = ((size_t)pucByte[uxIndex]) + 1U;

      if (uxSourceLenCpy > uxChunkLength) {
        uxSourceLenCpy -= uxChunkLength;
        uxIndex += uxChunkLength;
      } else {
        uxIndex = 0U;
        break;
      }
    }

    /* Confirm that a fully formed name was found. */
    if (uxIndex > 0U) {
      if (pucByte[uxIndex] == 0U) {
        uxIndex++;
      } else {
        uxIndex = 0U;
      }
    }
  }

  return uxIndex;
}

/*@
    requires \valid(pucByte + (0 .. uxRemainingBytes - 1));
    requires \valid(pcName + (0 .. uxDestLen - 1));

    assigns pcName[0 .. uxDestLen - 1];

    ensures uxRemainingBytes == ( size_t ) 0U ==> \result == 0U;
*/
static size_t prvReadNameField(const uint8_t *pucByte, size_t uxRemainingBytes,
                               char *pcName, size_t uxDestLen) {
  size_t uxNameLen = 0U;
  size_t uxIndex = 0U;
  size_t uxSourceLen = uxRemainingBytes;

  /* uxCount gets the valus from pucByte and counts down to 0.
  No need to have a different type than that of pucByte */
  size_t uxCount;

  if (uxSourceLen == (size_t)0U) {
    /* Return 0 value in case of error. */
    uxIndex = 0U;
  }
  /* Determine if the name is the fully coded name, or an offset to the name
  elsewhere in the message. */
  else if ((pucByte[uxIndex] & dnsNAME_IS_OFFSET) == dnsNAME_IS_OFFSET) {
    /* Jump over the two byte offset. */
    if (uxSourceLen > sizeof(uint16_t)) {
      uxIndex += sizeof(uint16_t);
    } else {
      uxIndex = 0U;
    }
  } else {
    /* 'uxIndex' points to the full name. Walk over the string. */
    // loop variant uxSourceLen - uxIndex;
    /*@
         loop invariant 0 <= uxIndex <= uxSourceLen;
         loop invariant 0 <= uxNameLen <= uxDestLen;
         loop assigns pcName[0 .. uxDestLen - 1], uxNameLen, uxIndex, uxCount;
     */
    while ((uxIndex < uxSourceLen) && (pucByte[uxIndex] != (uint8_t)0x00U)) {
      /* If this is not the first time through the loop, then add a
      separator in the output. */
      if ((uxNameLen > 0U)) {
        if (uxNameLen >= uxDestLen) {
          uxIndex = 0U;
          /* coverity[break_stmt] : Break statement terminating the loop */
          break;
        }
        pcName[uxNameLen] = '.';
        uxNameLen++;
      }

      /* Process the first/next sub-string. */
      uxCount = (size_t)pucByte[uxIndex];
      uxIndex++;
      if ((uxIndex + uxCount) > uxSourceLen) {
        uxIndex = 0U;
        break;
      }

      /*@
          loop invariant 0 <= uxIndex <= uxSourceLen;
          loop invariant 0 <= uxNameLen <= uxDestLen;
          loop assigns pcName[0 .. uxDestLen - 1], uxNameLen, uxIndex, uxCount;
      */
      while ((uxCount-- != 0U) && (uxIndex < uxSourceLen)) {
        if (uxNameLen >= uxDestLen) {
          uxIndex = 0U;
          break;
          /* break out of inner loop here
          break out of outer loop at the test uxNameLen >= uxDestLen. */
        }
        pcName[uxNameLen] = (char)pucByte[uxIndex];
        uxNameLen++;
        uxIndex++;
      }
      // One of these two seems essential, but not both
      //@ assert \at(pcName, Pre) == \at(pcName, Here);
      //@ assert \at(pucByte, Pre) == \at(pucByte, Here);
    }

    /* Confirm that a fully formed name was found. */
    if (uxIndex > 0U) {
      if ((uxNameLen < uxDestLen) && (uxIndex < uxSourceLen) &&
          (pucByte[uxIndex] == 0U)) {
        pcName[uxNameLen] = '\0';
        uxIndex++;
      } else {
        uxIndex = 0U;
      }
    }
  }

  return uxIndex;
}

/*@
        assigns \nothing;
*/
static BaseType_t prvProcessDNSCache(const char *pcName, uint32_t *pulIP,
                                     uint32_t ulTTL, BaseType_t xLookUp);

// NB off by one error with uxBufferLength
/*@
  requires \valid(pucUDPPayloadBuffer + (0 .. uxBufferLength));
  requires (uxBufferLength > sizeof(DNSMessage_t)) ==> is_uint16(((DNSMessage_t *)pucUDPPayloadBuffer)->usIdentifier);
  requires (uxBufferLength > sizeof(DNSMessage_t)) ==> is_uint16(((DNSMessage_t *)pucUDPPayloadBuffer)->usFlags);
  requires (uxBufferLength > sizeof(DNSMessage_t)) ==> is_uint16(((DNSMessage_t *)pucUDPPayloadBuffer)->usQuestions);
  requires (uxBufferLength > sizeof(DNSMessage_t)) ==> is_uint16(((DNSMessage_t *)pucUDPPayloadBuffer)->usAnswers);
  requires (uxBufferLength > sizeof(DNSMessage_t)) ==> is_uint16(((DNSMessage_t *)pucUDPPayloadBuffer)->usAuthorityRRs);
  requires (uxBufferLength > sizeof(DNSMessage_t)) ==> is_uint16(((DNSMessage_t *)pucUDPPayloadBuffer)->usAdditionalRRs);
  assigns *(pucUDPPayloadBuffer + (0 .. uxBufferLength));
*/
static uint32_t prvParseDNSReply(uint8_t *pucUDPPayloadBuffer,
                                 size_t uxBufferLength, BaseType_t xExpected) {
  DNSMessage_t *pxDNSMessageHeader;
  /* This pointer is not used to modify anything */
  const DNSAnswerRecord_t *pxDNSAnswerRecord;
  uint32_t ulIPAddress = 0UL;
#if (ipconfigUSE_LLMNR == 1)
  char *pcRequestedName = NULL;
#endif
  uint8_t *pucByte;
  size_t uxSourceBytesRemaining;
  uint16_t x, usDataLength, usQuestions;
  uint16_t usType = 0U;
#if (ipconfigUSE_LLMNR == 1)
  uint16_t usClass = 0U;
#endif
#if (ipconfigUSE_DNS_CACHE == 1) || (ipconfigDNS_USE_CALLBACKS == 1)
  BaseType_t xDoStore = xExpected;
  char pcName[ipconfigDNS_CACHE_NAME_LENGTH] = "";
#endif

  /* Ensure that the buffer is of at least minimal DNS message length. */
  // changed the following line (from < to <=):
  if (uxBufferLength <= sizeof(DNSMessage_t)) {
    return dnsPARSE_ERROR;
  }

  uxSourceBytesRemaining = uxBufferLength;
  //@ assert uxSourceBytesRemaining == uxBufferLength ;

  /* Parse the DNS message header.
  MISRA c 2012 rule 11.3 relaxed to make byte by byte traversal easier */
  pxDNSMessageHeader = ipPOINTER_CAST(DNSMessage_t *, pucUDPPayloadBuffer);

  /* Introduce a do {} while (0) to allow the use of breaks. */
  // loop contract
  /*
          loop invariant uxSourceBytesRemaining <= uxBufferLength;
  */

  // do
  // {
  size_t uxBytesRead = 0U;
  size_t uxResult;

  /* Start at the first byte after the header. */
  pucByte = &(pucUDPPayloadBuffer[sizeof(DNSMessage_t)]);
  uxSourceBytesRemaining -= sizeof(DNSMessage_t);
  //@ assert uxSourceBytesRemaining == uxBufferLength - sizeof(DNSMessage_t);

  /* Skip any question records. */
  //@ assert is_uint16(pxDNSMessageHeader->usQuestions );
  usQuestions = FreeRTOS_ntohs(pxDNSMessageHeader->usQuestions);
  //@ assert is_uint16(usQuestions);

//  loop invariant uxBytesRead + uxSourceBytesRemaining == \at(uxBytesRead, LoopEntry) +  \at(uxSourceBytesRemaining, LoopEntry);
//   loop invariant \valid(pucByte + (0 .. uxSourceBytesRemaining - 1));

  /*@
    loop assigns uxResult;
    loop assigns x;
    loop assigns pcName[0 .. sizeof(pcName)];
    loop assigns pucByte;
    loop assigns uxBytesRead;
    loop assigns uxSourceBytesRemaining;
    loop assigns uxResult;
    loop invariant 0 <= x <= usQuestions;
    loop invariant sizeof(DNSMessage_t) <= uxBufferLength;
	  loop invariant \valid(pucUDPPayloadBuffer + (0 .. uxBufferLength));
    loop invariant \valid(pcName + (0 .. sizeof( pcName ) - 1));
    loop variant usQuestions - x;
  */
  for (x = 0U; x < usQuestions; x++) {
#if (ipconfigUSE_LLMNR == 1)
    {
      if (x == 0U) {
        pcRequestedName = (char *)pucByte;
      }
    }
#endif

#if (ipconfigUSE_DNS_CACHE == 1) || (ipconfigDNS_USE_CALLBACKS == 1)
    if (x == 0U) {
      //@ assert \valid(pcName + (0 .. sizeof(pcName) - 1));
      uxResult = prvReadNameField(pucByte, uxSourceBytesRemaining, pcName,
                                  sizeof(pcName));

      /* Check for a malformed response. */
      if (uxResult == 0U) {
        return dnsPARSE_ERROR;
      }
      uxBytesRead += uxResult;
      // assert \at(pucByte, LoopEntry) == \at(pucByte, Here);
      pucByte = &(pucByte[uxResult]);
      // assert \at(pucByte, LoopEntry) == \at(pucByte, Here);
      uxSourceBytesRemaining -= uxResult;
      // assert \valid(pucByte + (0 .. uxSourceBytesRemaining));

    } else
#endif /* ipconfigUSE_DNS_CACHE || ipconfigDNS_USE_CALLBACKS */
    {
      /* Skip the variable length pcName field. */
      uxResult = prvSkipNameField(pucByte, uxSourceBytesRemaining);

      /* Check for a malformed response. */
      if (uxResult == 0U) {
        return dnsPARSE_ERROR;
      }
      uxBytesRead += uxResult;
      pucByte = &(pucByte[uxResult]);
      // assert \at(pucByte, LoopEntry) == \at(pucByte, Here);
      uxSourceBytesRemaining -= uxResult;
      //@ assert uxSourceBytesRemaining >= 0;
    }

    /* Check the remaining buffer size. */
    if (uxSourceBytesRemaining >= sizeof(uint32_t)) {
#if (ipconfigUSE_LLMNR == 1)
      {
        /* usChar2u16 returns value in host endianness. */
        usType = usChar2u16(pucByte);
        usClass = usChar2u16(&(pucByte[2]));
      }
#endif /* ipconfigUSE_LLMNR */

      /* Skip the type and class fields. */
      pucByte = &(pucByte[sizeof(uint32_t)]);
      uxSourceBytesRemaining -= sizeof(uint32_t);

    } else {
      return dnsPARSE_ERROR;
    }
  }

  /* Search through the answer records. */
  pxDNSMessageHeader->usAnswers = FreeRTOS_ntohs(pxDNSMessageHeader->usAnswers);

  if ((pxDNSMessageHeader->usFlags & dnsRX_FLAGS_MASK) ==
      dnsEXPECTED_RX_FLAGS) {
    const uint16_t usCount = (uint16_t)ipconfigDNS_CACHE_ADDRESSES_PER_ENTRY;

    /*@
      loop assigns pucByte[0 .. uxSourceBytesRemaining-1];
      loop assigns pxDNSMessageHeader;
      loop assigns pxDNSAnswerRecord;
      loop assigns ulIPAddress;
      loop assigns pucByte;
      loop assigns uxSourceBytesRemaining;
      loop assigns usQuestions;
      loop assigns usType;
      loop assigns xDoStore;
      loop assigns uxBytesRead;
      loop assigns uxResult;
      loop assigns usDataLength;
      loop assigns x;
    */
    for (x = 0U; (x < pxDNSMessageHeader->usAnswers) && (x < usCount); x++) {
      BaseType_t xDoAccept;

    //@ assert \valid(pucByte + (0 .. uxSourceBytesRemaining - 1));
      uxResult = prvSkipNameField(pucByte, uxSourceBytesRemaining);

      /* Check for a malformed response. */
      if (uxResult == 0U) {
        return dnsPARSE_ERROR;
      }

      uxBytesRead += uxResult;
      pucByte = &(pucByte[uxResult]);
      uxSourceBytesRemaining -= uxResult;

      /* Is there enough data for an IPv4 A record answer and, if so,
      is this an A record? */
      if (uxSourceBytesRemaining < sizeof(uint16_t)) {
        return dnsPARSE_ERROR;
      }
      usType = usChar2u16(pucByte);

      if (usType == (uint16_t)dnsTYPE_A_HOST) {
        if (uxSourceBytesRemaining >=
            (sizeof(DNSAnswerRecord_t) + ipSIZE_OF_IPv4_ADDRESS)) {
          xDoAccept = pdTRUE;
        } else {
          xDoAccept = pdFALSE;
        }
      } else {
        /* Unknown host type. */
        xDoAccept = pdFALSE;
      }
      if (xDoAccept != pdFALSE) {
        /* This is the required record type and is of sufficient size. */
        /* MISRA c 2012 rule 11.3 relaxed. pucByte is used for byte-by-byte
        traversal. */
        pxDNSAnswerRecord = ipPOINTER_CAST(DNSAnswerRecord_t *, pucByte);

        /* Sanity check the data length of an IPv4 answer. */
        if (FreeRTOS_ntohs(pxDNSAnswerRecord->usDataLength) ==
            (uint16_t)sizeof(uint32_t)) {
          /* Copy the IP address out of the record. */
          /* MISRA c 2012 rule 21.15 relaxed here since this seems
          to be the least cumbersome way to get the IP address
          from the record. */
          (void)memcpy(&(ulIPAddress), &(pucByte[sizeof(DNSAnswerRecord_t)]),
                       sizeof(uint32_t));

#if (ipconfigDNS_USE_CALLBACKS == 1)
          {
            /* See if any asynchronous call was made to
             * FreeRTOS_gethostbyname_a() */
            if (xDNSDoCallback((TickType_t)pxDNSMessageHeader->usIdentifier,
                               pcName, ulIPAddress) != pdFALSE) {
              /* This device has requested this DNS look-up.
              The result may be stored in the DNS cache. */
              xDoStore = pdTRUE;
            }
          }
#endif /* ipconfigDNS_USE_CALLBACKS == 1 */
#if (ipconfigUSE_DNS_CACHE == 1)
          {
            /* The reply will only be stored in the DNS cache when the
            request was issued by this device. */
            if (xDoStore != pdFALSE) {
              (void)prvProcessDNSCache(pcName, &ulIPAddress,
                                       pxDNSAnswerRecord->ulTTL, pdFALSE);
            }

            /* Show what has happened. */
	    //@ loop assigns \nothing;
            FreeRTOS_printf(
                ("DNS[0x%04lX]: The answer to '%s' (%lxip) will%s be stored\n",
                 (UBaseType_t)pxDNSMessageHeader->usIdentifier, pcName,
                 (UBaseType_t)FreeRTOS_ntohl(ulIPAddress),
                 (xDoStore != 0) ? "" : " NOT"));
          }
#endif /* ipconfigUSE_DNS_CACHE */
        }

        pucByte = &(pucByte[sizeof(DNSAnswerRecord_t) + sizeof(uint32_t)]);
        uxSourceBytesRemaining -=
            (sizeof(DNSAnswerRecord_t) + sizeof(uint32_t));
      } else if (uxSourceBytesRemaining >= sizeof(DNSAnswerRecord_t)) {
        /* It's not an A record, so skip it. Get the header location
        and then jump over the header. */

        /* MISRA c 2012 rule 11.3 relaxed as pucByte is being used in
        various places to point to various parts of the DNS records */
        pxDNSAnswerRecord = ipPOINTER_CAST(DNSAnswerRecord_t *, pucByte);

        pucByte = &(pucByte[sizeof(DNSAnswerRecord_t)]);
        uxSourceBytesRemaining -= sizeof(DNSAnswerRecord_t);

        /* Determine the length of the answer data from the header. */
        usDataLength = FreeRTOS_ntohs(pxDNSAnswerRecord->usDataLength);

        /* Jump over the answer. */
        if (uxSourceBytesRemaining >= usDataLength) {
          pucByte = &(pucByte[usDataLength]);
          uxSourceBytesRemaining -= usDataLength;
        } else {
          /* Malformed response. */
          return dnsPARSE_ERROR;
        }
      } else {
        /* Do nothing */
      }
    }
  }

#if (ipconfigUSE_LLMNR == 1)
  else if ((usQuestions != (uint16_t)0U) && (usType == dnsTYPE_A_HOST) &&
           (usClass == dnsCLASS_IN) && (pcRequestedName != NULL)) {
    /* If this is not a reply to our DNS request, it might an LLMNR
    request. */
    if (xApplicationDNSQueryHook(&(pcRequestedName[1])) != pdFALSE) {
      int16_t usLength;
      NetworkBufferDescriptor_t *pxNewBuffer = NULL;
      NetworkBufferDescriptor_t *pxNetworkBuffer =
          pxUDPPayloadBuffer_to_NetworkBuffer(pucUDPPayloadBuffer);
      LLMNRAnswer_t *pxAnswer;
      uint8_t *pucNewBuffer = NULL;

      if ((xBufferAllocFixedSize == pdFALSE) && (pxNetworkBuffer != NULL)) {
        size_t uxDataLength = uxBufferLength + sizeof(UDPHeader_t) +
                              sizeof(EthernetHeader_t) + sizeof(IPHeader_t);

        /* Set the size of the outgoing packet. */
        pxNetworkBuffer->xDataLength = uxDataLength;
        pxNewBuffer = pxDuplicateNetworkBufferWithDescriptor(
            pxNetworkBuffer, uxDataLength + sizeof(LLMNRAnswer_t));

        if (pxNewBuffer != NULL) {
          BaseType_t xOffset1, xOffset2;

          xOffset1 = (BaseType_t)(pucByte - pucUDPPayloadBuffer);
          xOffset2 =
              (BaseType_t)(((uint8_t *)pcRequestedName) - pucUDPPayloadBuffer);

          pxNetworkBuffer = pxNewBuffer;
          pucNewBuffer =
              &(pxNetworkBuffer->pucEthernetBuffer[ipUDP_PAYLOAD_OFFSET_IPv4]);

          pucByte = &(pucNewBuffer[xOffset1]);
          pcRequestedName = (char *)&(pucNewBuffer[xOffset2]);
          pxDNSMessageHeader = ipPOINTER_CAST(DNSMessage_t *, pucNewBuffer);
        } else {
          /* Just to indicate that the message may not be answered. */
          pxNetworkBuffer = NULL;
        }
      }

      /* The test on 'pucNewBuffer' is only to satisfy lint. */
      if ((pxNetworkBuffer != NULL) && (pucNewBuffer != NULL)) {
        pxAnswer = ipPOINTER_CAST(LLMNRAnswer_t *, pucByte);

/* We leave 'usIdentifier' and 'usQuestions' untouched */
#ifndef _lint
        vSetField16(pxDNSMessageHeader, DNSMessage_t, usFlags,
                    dnsLLMNR_FLAGS_IS_REPONSE); /* Set the response flag */
        vSetField16(pxDNSMessageHeader, DNSMessage_t, usAnswers,
                    1); /* Provide a single answer */
        vSetField16(pxDNSMessageHeader, DNSMessage_t, usAuthorityRRs,
                    0); /* No authority */
        vSetField16(pxDNSMessageHeader, DNSMessage_t, usAdditionalRRs,
                    0); /* No additional info */
#endif                  /* lint */

        pxAnswer->ucNameCode = dnsNAME_IS_OFFSET;
        pxAnswer->ucNameOffset =
            (uint8_t)(pcRequestedName - (char *)pucNewBuffer);

#ifndef _lint
        vSetField16(pxAnswer, LLMNRAnswer_t, usType,
                    dnsTYPE_A_HOST); /* Type A: host */
        vSetField16(pxAnswer, LLMNRAnswer_t, usClass,
                    dnsCLASS_IN); /* 1: Class IN */
        vSetField32(pxAnswer, LLMNRAnswer_t, ulTTL, dnsLLMNR_TTL_VALUE);
        vSetField16(pxAnswer, LLMNRAnswer_t, usDataLength, 4);
        vSetField32(pxAnswer, LLMNRAnswer_t, ulIPAddress,
                    FreeRTOS_ntohl(*ipLOCAL_IP_ADDRESS_POINTER));
#endif /* lint */
        usLength =
            (int16_t)(sizeof(*pxAnswer) + (size_t)(pucByte - pucNewBuffer));

        prvReplyDNSMessage(pxNetworkBuffer, usLength);

        if (pxNewBuffer != NULL) {
          vReleaseNetworkBufferAndDescriptor(pxNewBuffer);
        }
      }
    }
  } else {
    /* Not an expected reply. */
  }
#endif /* ipconfigUSE_LLMNR == 1 */
  (void)uxBytesRead;
  //	} while( ipFALSE_BOOL );

  if (xExpected == pdFALSE) {
    /* Do not return a valid IP-address in case the reply was not expected. */
    ulIPAddress = 0UL;
  }
#if (ipconfigUSE_DNS_CACHE == 1) || (ipconfigDNS_USE_CALLBACKS == 1)
  (void)xDoStore;
#endif

  return ulIPAddress;
}
