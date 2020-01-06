/* HTTPS Client includes. */
#include "iot_https_client.h"
#include "iot_https_internal.h"

#include "global_state_HTTP.h"

int _httpParserOnStatusCallback( http_parser * pHttpParser,
                                 const char * pLoc,
                                 size_t length );

void harness()
{
  IotHttpsResponseHandle_t respHandle = allocate_IotResponseHandle();
  __CPROVER_assume(respHandle);
  initialize_IotResponseHandle(respHandle);
  __CPROVER_assume(is_valid_IotResponseHandle(respHandle));
  
  size_t length;
  __CPROVER_assume(length < CBMC_MAX_OBJECT_SIZE);

  char * pLoc = respHandle->pBodyCur;

  _httpParserOnStatusCallback( &(respHandle->httpParserInfo.responseParser), pLoc, length );
}