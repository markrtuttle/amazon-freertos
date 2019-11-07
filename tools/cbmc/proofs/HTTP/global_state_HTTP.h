#ifndef GLOBAL_STATE_HTTP
#define GLOBAL_STATE_HTTP

#include "iot_https_client.h"
#include "iot_https_internal.h"

/*****************************************************************/

void *safeMalloc(size_t xWantedSize);

/****************************************************************
 * IotHttpsConnectionHandle
 ****************************************************************/

IotHttpsConnectionHandle_t allocate_IotConnectionHandle ();
int is_valid_IotConnectionHandle(IotHttpsConnectionHandle_t handle);
void initialize_IotConnectionHandle (IotHttpsConnectionHandle_t
				     pConnectionHandle);

/****************************************************************
 * IotHttpsConnectionInfo
 ****************************************************************/

IotHttpsConnectionInfo_t * allocate_IotConnectionInfo();
int is_valid_IotConnectionInfo(IotHttpsConnectionInfo_t *pConnInfo);

/****************************************************************
 * IotHttpsResponseHandle
 ****************************************************************/

IotHttpsResponseHandle_t allocate_IotResponseHandle();
int is_valid_IotResponseHandle(IotHttpsResponseHandle_t pResponseHandle);
void initialize_IotResponseHandle(IotHttpsResponseHandle_t pResponseHandle);

/****************************************************************
 * IotHttpsResponseInfo
 ****************************************************************/

IotHttpsResponseInfo_t * allocate_IotResponseInfo();
int is_valid_IotResponseInfo(IotHttpsResponseInfo_t * pRespInfo);

/****************************************************************
 * IotHttpsRequestHandle
 ****************************************************************/

IotHttpsRequestHandle_t allocate_IotRequestHandle();
int is_valid_IotRequestHandle(IotHttpsRequestHandle_t pRequestHandle);
void initialize_IotRequestHandle(IotHttpsRequestHandle_t pRequestHandle);

/****************************************************************
 * IotHttpsRequestInfo
 ****************************************************************/

IotHttpsRequestInfo_t * allocate_IotRequestInfo();
int is_valid_IotRequestInfo(IotHttpsRequestInfo_t * pReqInfo);

/****************************************************************
 * IotNetworkInterface
 ****************************************************************/

IotNetworkInterface_t *allocate_NetworkInterface();
int is_valid_NetworkInterface(IotNetworkInterface_t *netif);
int is_stubbed_NetworkInterface(IotNetworkInterface_t *netif);


IotNetworkError_t
IotNetworkInterfaceCreate( void * pConnectionInfo,
			   void * pCredentialInfo,
			   void * pConnection );
size_t
IotNetworkInterfaceSend( void * pConnection,
			 const uint8_t * pMessage,
			 size_t messageLength );
IotNetworkError_t
IotNetworkInterfaceClose( void * pConnection );
size_t
IotNetworkInterfaceReceive( void * pConnection,
			    uint8_t * pBuffer,
			    size_t bytesRequested );
size_t
IotNetworkInterfaceReceiveUpto( void * pConnection,
				uint8_t * pBuffer,
				size_t bytesRequested );
IotNetworkError_t
IotNetworkInterfaceCallback( void * pConnection,
			     IotNetworkReceiveCallback_t receiveCallback,
			     void * pContext );
IotNetworkError_t
IotNetworkInterfaceDestroy( void * pConnection );

/*****************************************************************
 * Third-party http parser methods are stubbed out.
 ****************************************************************/

size_t http_parser_execute (http_parser *parser,
                            const http_parser_settings *settings,
                            const char *data,
                            size_t len);

#endif

