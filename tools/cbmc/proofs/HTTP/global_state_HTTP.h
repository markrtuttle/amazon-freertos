#ifndef GLOBAL_STATE_HTTP
#define GLOBAL_STATE_HTTP

IotHttpsResponseHandle_t allocate_IotResponseHandle();
IotHttpsRequestHandle_t allocate_IotRequestHandle();

/****************************************************************
 * User call backs
 ****************************************************************/

void CBMCappendHeaderCallback( void * pPrivData,
			       IotHttpsRequestHandle_t reqHandle );
void CBMCwriteCallback( void * pPrivData,
			IotHttpsRequestHandle_t reqHandle );

void CBMCreadReadyCallback( void * pPrivData,
			    IotHttpsResponseHandle_t respHandle,
			    IotHttpsReturnCode_t rc,
			    uint16_t status );
void CBMCresponseCompleteCallback( void * pPrivData,
				   IotHttpsResponseHandle_t respHandle,
				   IotHttpsReturnCode_t rc,
				   uint16_t status );
void CBMCconnectionClosedCallback( void * pPrivData,
				   IotHttpsConnectionHandle_t connHandle,
				   IotHttpsReturnCode_t rc );
void CBMCerrorCallback( void * pPrivData,
			IotHttpsRequestHandle_t reqHandle,
			IotHttpsResponseHandle_t respHandle,
			IotHttpsReturnCode_t rc );

#endif
