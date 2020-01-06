/* HTTPS Client includes. */
#include "iot_https_client.h"
#include "iot_https_internal.h"

#include "global_state_HTTP.h"

int _httpParserOnMessageCompleteCallback( http_parser * pHttpParser );

void harness()
{
  IotHttpsResponseHandle_t respHandle = allocate_IotResponseHandle();
  __CPROVER_assume(respHandle);
  initialize_IotResponseHandle(respHandle);
  __CPROVER_assume(is_valid_IotResponseHandle(respHandle));

  _httpParserOnMessageCompleteCallback( &(respHandle->httpParserInfo.responseParser) );
}