/* HTTPS Client includes. */
#include "iot_https_client.h"
#include "iot_https_internal.h"

#include "global_state_HTTP.h"

int _httpParserOnHeaderValueCallback( http_parser * pHttpParser,
                                             const char * pLoc,
                                             size_t length );

void harness()
{
  IotHttpsResponseHandle_t respHandle = allocate_IotResponseHandle();
  __CPROVER_assume(respHandle);
  initialize_IotResponseHandle(respHandle);
  __CPROVER_assume(is_valid_IotResponseHandle(respHandle));
  __CPROVER_assume(respHandle->pReadHeaderField);
  __CPROVER_assume(respHandle->readHeaderFieldLength < __CPROVER_OBJECT_SIZE(respHandle->pReadHeaderField));;

  // pLoc needs to be any location between pHeadersCur and pHeadersEnd
  char * pLoc = respHandle->pHeadersCur;
  //__CPROVER_assume( (pLoc > respHandle->pHeadersCur ) && ( pLoc < respHandle->pHeadersEnd ) )
  size_t length;
  __CPROVER_assume(length < ( respHandle->pHeadersEnd - respHandle->pHeadersCur ) );

  _httpParserOnHeaderValueCallback( &(respHandle->httpParserInfo.responseParser), pLoc, length );
}