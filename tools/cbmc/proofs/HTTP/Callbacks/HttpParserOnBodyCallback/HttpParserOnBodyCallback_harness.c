/* HTTPS Client includes. */
#include "iot_https_client.h"
#include "iot_https_internal.h"

#include "global_state_HTTP.h"

int _httpParserOnBodyCallback( http_parser * pHttpParser,
                                             const char * pLoc,
                                             size_t length );

void harness()
{
  IotHttpsResponseHandle_t respHandle = allocate_IotResponseHandle();
  __CPROVER_assume(respHandle);
  initialize_IotResponseHandle(respHandle);
  __CPROVER_assume(is_valid_IotResponseHandle(respHandle));

  char * pLoc;
  size_t length;
  if( ( respHandle->bufferProcessingState == PROCESSING_STATE_FILLING_HEADER_BUFFER ) && ( respHandle->isAsync ) )
  {
    // pBodyInHeaderBuf can be NULL or any other value. The function under proof
    // will only copy to pBodyCurInHeaderBuf.
    // pBodyCurInHeaderBuf needs to be any location between pHeaders and pHeadersEnd.
    respHandle->pBodyCurInHeaderBuf = respHandle->pHeadersCur;
    //__CPROVER_assume( ( respHandle->pBodyCurInHeaderBuf >= respHandle->pHeaders ) &&
    //                  ( respHandle->pBodyCurInHeaderBuf < respHandle->pHeadersEnd ) );

    // pLoc needs to be any location between pHeaders and pHeadersEnd.
    pLoc = respHandle->pHeadersCur;
    //__CPROVER_assume( (pLoc >= respHandle->pHeaders ) && ( pLoc < respHandle->pHeadersEnd ) );
    __CPROVER_assume(length < (  respHandle->pHeadersEnd - respHandle->pHeadersCur ) );
  }
  else
  {
    // pLoc needs to be any location between pBody and pBodyEnd.
    pLoc = respHandle->pBodyCur;
    //__CPROVER_assume( (pLoc >= respHandle->pBodyCur ) && ( pLoc < respHandle->pBodyEnd ) );
    __CPROVER_assume(length < (  respHandle->pBodyEnd - respHandle->pBodyCur ) );
  }

  _httpParserOnBodyCallback( &(respHandle->httpParserInfo.responseParser), pLoc, length );
}