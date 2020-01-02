/* HTTPS Client includes. */
#include "iot_https_client.h"
#include "iot_https_internal.h"

#include "global_state_HTTP.h"

int _httpParserOnMessageBeginCallback( http_parser * pHttpParser );

void harness() 
{
  http_parser* pHttpParser = allocate_http_parser();
  _httpParserOnMessageBeginCallback( pHttpParser );
}