typedef unsigned char __u_char;
typedef unsigned short int __u_short;
typedef unsigned int __u_int;
typedef unsigned long int __u_long;
typedef signed char __int8_t;
typedef unsigned char __uint8_t;
typedef signed short int __int16_t;
typedef unsigned short int __uint16_t;
typedef signed int __int32_t;
typedef unsigned int __uint32_t;
typedef signed long int __int64_t;
typedef unsigned long int __uint64_t;
typedef __int8_t __int_least8_t;
typedef __uint8_t __uint_least8_t;
typedef __int16_t __int_least16_t;
typedef __uint16_t __uint_least16_t;
typedef __int32_t __int_least32_t;
typedef __uint32_t __uint_least32_t;
typedef __int64_t __int_least64_t;
typedef __uint64_t __uint_least64_t;
typedef long int __quad_t;
typedef unsigned long int __u_quad_t;
typedef long int __intmax_t;
typedef unsigned long int __uintmax_t;
typedef unsigned long int __dev_t;
typedef unsigned int __uid_t;
typedef unsigned int __gid_t;
typedef unsigned long int __ino_t;
typedef unsigned long int __ino64_t;
typedef unsigned int __mode_t;
typedef unsigned long int __nlink_t;
typedef long int __off_t;
typedef long int __off64_t;
typedef int __pid_t;
typedef struct { int __val[2]; } __fsid_t;
typedef long int __clock_t;
typedef unsigned long int __rlim_t;
typedef unsigned long int __rlim64_t;
typedef unsigned int __id_t;
typedef long int __time_t;
typedef unsigned int __useconds_t;
typedef long int __suseconds_t;
typedef int __daddr_t;
typedef int __key_t;
typedef int __clockid_t;
typedef void * __timer_t;
typedef long int __blksize_t;
typedef long int __blkcnt_t;
typedef long int __blkcnt64_t;
typedef unsigned long int __fsblkcnt_t;
typedef unsigned long int __fsblkcnt64_t;
typedef unsigned long int __fsfilcnt_t;
typedef unsigned long int __fsfilcnt64_t;
typedef long int __fsword_t;
typedef long int __ssize_t;
typedef long int __syscall_slong_t;
typedef unsigned long int __syscall_ulong_t;
typedef __off64_t __loff_t;
typedef char *__caddr_t;
typedef long int __intptr_t;
typedef unsigned int __socklen_t;
typedef int __sig_atomic_t;
typedef __int8_t int8_t;
typedef __int16_t int16_t;
typedef __int32_t int32_t;
typedef __int64_t int64_t;
typedef __uint8_t uint8_t;
typedef __uint16_t uint16_t;
typedef __uint32_t uint32_t;
typedef __uint64_t uint64_t;
typedef __int_least8_t int_least8_t;
typedef __int_least16_t int_least16_t;
typedef __int_least32_t int_least32_t;
typedef __int_least64_t int_least64_t;
typedef __uint_least8_t uint_least8_t;
typedef __uint_least16_t uint_least16_t;
typedef __uint_least32_t uint_least32_t;
typedef __uint_least64_t uint_least64_t;
typedef signed char int_fast8_t;
typedef long int int_fast16_t;
typedef long int int_fast32_t;
typedef long int int_fast64_t;
typedef unsigned char uint_fast8_t;
typedef unsigned long int uint_fast16_t;
typedef unsigned long int uint_fast32_t;
typedef unsigned long int uint_fast64_t;
typedef long int intptr_t;
typedef unsigned long int uintptr_t;
typedef __intmax_t intmax_t;
typedef __uintmax_t uintmax_t;
typedef long int ptrdiff_t;
typedef long unsigned int size_t;
typedef int wchar_t;
unsigned long ulGetRunTimeCounterValue( void );
void vConfigureTimerForRunTimeStats( void );
extern void vAssertCalled( const char * pcFile,
                           uint32_t ulLine );
extern void vLoggingPrintf( const char * pcFormat,
                            ... );
extern void vLoggingPrint(const char* pcMessage);
extern uint32_t ulRand();
typedef __builtin_va_list __gnuc_va_list;
typedef __gnuc_va_list va_list;
typedef uint16_t traceString;
typedef uint8_t traceUBChannel;
typedef uint8_t traceObjectClass;
typedef uint8_t traceHandle;
void vTraceSetQueueName(void* object, const char* name);
void vTraceSetSemaphoreName(void* object, const char* name);
void vTraceSetMutexName(void* object, const char* name);
void* prvTraceGetCurrentTaskHandle(void);
unsigned char prvTraceIsSchedulerSuspended(void);
extern int uiInEventGroupSetBitsFromISR;
void vTraceInitObjectPropertyTable(void);
void vTraceInitObjectHandleStack(void);
const char* pszTraceGetErrorNotEnoughHandles(traceObjectClass objectclass);
traceHandle prvTraceGetObjectNumber(void* handle);
uint8_t prvTraceGetObjectType(void* handle);
traceHandle prvTraceGetTaskNumber(void* handle);
void* prvTraceGetCurrentTaskHandle(void);
uint8_t uiTraceIsObjectExcluded(traceObjectClass objectclass, traceHandle handle);
traceHandle prvTraceGetEventGroupNumber(void* handle);
extern traceObjectClass TraceObjectClassTable[5];
extern void vTraceStoreMemMangEvent(uint32_t ecode, uint32_t address, int32_t size);
void vTraceEnable(int startOption);
void vTracePrintF(traceString chn, const char* fmt, ...);
void vTracePrint(traceString chn, const char* str);
traceString xTraceRegisterString(const char* name);
traceHandle xTraceSetISRProperties(const char* name, uint8_t priority);
void vTraceStoreISRBegin(traceHandle handle);
void vTraceStoreISREnd(int isTaskSwitchRequired);
void vTraceInstanceFinishedNow(void);
void vTraceInstanceFinishedNext(void);
const char* xTraceGetLastError(void);
void vTraceClearError(void);
void vTraceStop(void);
void vTraceSetFrequency(uint32_t frequency);
typedef void(*TRACE_STOP_HOOK)(void);
extern TRACE_STOP_HOOK vTraceStopHookPtr;
void vTraceSetStopHook(TRACE_STOP_HOOK stopHookFunction);
uint32_t uiTraceStart(void);
void vTraceStart(void);
void vTraceClear(void);
 void prvTraceSetReadyEventsEnabled(int status);
 void prvTraceStoreTaskReady(traceHandle handle);
void prvTraceStoreLowPower(uint32_t flag);
void prvTraceStoreTaskswitch(traceHandle task_handle);
void prvTraceStoreKernelCall(uint32_t eventcode, traceObjectClass objectClass, uint32_t byteParam);
void prvTraceStoreKernelCallWithNumericParamOnly(uint32_t evtcode, uint32_t param);
void prvTraceStoreKernelCallWithParam(uint32_t evtcode, traceObjectClass objectClass,
         uint32_t objectNumber, uint32_t param);
void prvTraceSetTaskInstanceFinished(traceHandle handle);
void prvTraceSetPriorityProperty(uint8_t objectclass, traceHandle id, uint8_t value);
uint8_t prvTraceGetPriorityProperty(uint8_t objectclass, traceHandle id);
void prvTraceSetObjectState(uint8_t objectclass, traceHandle id, uint8_t value);
void prvMarkObjectAsUsed(traceObjectClass objectclass, traceHandle handle);
void prvTraceStoreObjectNameOnCloseEvent(traceHandle handle,
          traceObjectClass objectclass);
void prvTraceStoreObjectPropertiesOnCloseEvent(traceHandle handle,
            traceObjectClass objectclass);
void* xTraceGetTraceBuffer(void);
uint32_t uiTraceGetTraceBufferSize(void);
extern uint8_t trcExcludedObjects[((90 + 90 + 90 + 150 + 90 + 250 + 90) + 7) / 8 + 1];
extern uint8_t trcExcludedEventCodes[0x100 / 8 + 1];
typedef struct
{
 uint16_t indexOfNextAvailableHandle[ 7 ];
 uint16_t lowestIndexOfClass[ 7 ];
 uint16_t highestIndexOfClass[ 7 ];
 uint16_t handleCountWaterMarksOfClass[ 7 ];
 traceHandle objectHandles[ (90 + 90 + 90 + 150 + 90 + 250 + 90) ];
} objectHandleStackType;
extern objectHandleStackType objectHandleStacks;
typedef struct
{
 uint32_t NumberOfObjectClasses;
 uint32_t ObjectPropertyTableSizeInBytes;
 traceHandle NumberOfObjectsPerClass[4*((7 +3)/4)];
 uint8_t NameLengthPerClass[ 4*((7 +3)/4) ];
 uint8_t TotalPropertyBytesPerClass[ 4*((7 +3)/4) ];
 uint16_t StartIndexOfClass[ 2*((7 +1)/2) ];
 uint8_t objbytes[ 4*((0 + 90 * (15 + 1) + 90 * (15 + 1) + 90 * (15 + 1) + 150 * (15 + 4) + 90 * (15 + 2) + 250 * (15 + 1) + 90 * (15 + 4)+3)/4) ];
} ObjectPropertyTableType;
typedef struct
{
 uint32_t symTableSize;
 uint32_t nextFreeSymbolIndex;
 uint8_t symbytes[4*((5000 +3)/4)];
 uint16_t latestEntryOfChecksum[64];
} symbolTableType;
typedef struct
{
 uint8_t type;
 uint8_t objHandle;
 uint16_t dts;
} TSEvent, TREvent;
typedef struct
{
 uint8_t type;
 uint8_t dummy;
 uint16_t dts;
} LPEvent;
typedef struct
{
 uint8_t type;
 uint8_t objHandle;
 uint16_t dts;
} KernelCall;
typedef struct
{
 uint8_t type;
 uint8_t objHandle;
 uint8_t param;
 uint8_t dts;
} KernelCallWithParamAndHandle;
typedef struct
{
 uint8_t type;
 uint8_t dts;
 uint16_t param;
} KernelCallWithParam16;
typedef struct
{
 uint8_t type;
 uint8_t objHandle;
 uint16_t symbolIndex;
} ObjCloseNameEvent;
typedef struct
{
 uint8_t type;
 uint8_t arg1;
 uint8_t arg2;
 uint8_t arg3;
} ObjClosePropEvent;
typedef struct
{
 uint8_t type;
 uint8_t unused1;
 uint8_t unused2;
 uint8_t dts;
} TaskInstanceStatusEvent;
typedef struct
{
 uint8_t type;
 uint8_t dts;
 uint16_t payload;
} UserEvent;
typedef struct
{
 uint8_t type;
 uint8_t xts_8;
 uint16_t xts_16;
} XTSEvent;
typedef struct
{
 uint8_t type;
 uint8_t xps_8;
 uint16_t xps_16;
} XPSEvent;
typedef struct{
 uint8_t type;
 uint8_t dts;
 uint16_t size;
} MemEventSize;
typedef struct{
 uint8_t type;
 uint8_t addr_high;
 uint16_t addr_low;
} MemEventAddr;
typedef struct
{
 volatile uint8_t startmarker0;
 volatile uint8_t startmarker1;
 volatile uint8_t startmarker2;
 volatile uint8_t startmarker3;
 volatile uint8_t startmarker4;
 volatile uint8_t startmarker5;
 volatile uint8_t startmarker6;
 volatile uint8_t startmarker7;
 volatile uint8_t startmarker8;
 volatile uint8_t startmarker9;
 volatile uint8_t startmarker10;
 volatile uint8_t startmarker11;
 uint16_t version;
 uint8_t minor_version;
 uint8_t irq_priority_order;
 uint32_t filesize;
 uint32_t numEvents;
 uint32_t maxEvents;
 uint32_t nextFreeIndex;
 uint32_t bufferIsFull;
 uint32_t frequency;
 uint32_t absTimeLastEvent;
 uint32_t absTimeLastEventSecond;
 uint32_t recorderActive;
 uint32_t isrTailchainingThreshold;
 uint8_t notused[24];
 uint32_t heapMemUsage;
 int32_t debugMarker0;
 uint32_t isUsing16bitHandles;
 ObjectPropertyTableType ObjectPropertyTable;
 int32_t debugMarker1;
 symbolTableType SymbolTable;
 uint32_t exampleFloatEncoding;
 uint32_t internalErrorOccured;
 int32_t debugMarker2;
 char systemInfo[80];
 int32_t debugMarker3;
 uint8_t eventData[ 15000 * 4 ];
 uint32_t endOfSecondaryBlocks;
 uint8_t endmarker0;
 uint8_t endmarker1;
 uint8_t endmarker2;
 uint8_t endmarker3;
 uint8_t endmarker4;
 uint8_t endmarker5;
 uint8_t endmarker6;
 uint8_t endmarker7;
 uint8_t endmarker8;
 uint8_t endmarker9;
 uint8_t endmarker10;
 uint8_t endmarker11;
} RecorderDataType;
extern RecorderDataType* RecorderDataPtr;
void prvTraceError(const char* msg);
void prvTracePortGetTimeStamp(uint32_t *puiTimestamp);
traceHandle prvTraceGetObjectHandle(traceObjectClass objectclass);
void prvTraceFreeObjectHandle(traceObjectClass objectclass,
       traceHandle handle);
void prvTraceSetObjectName(traceObjectClass objectclass,
       traceHandle handle,
       const char* name);
typedef void (*TaskFunction_t)( void * );
typedef size_t StackType_t;
typedef long BaseType_t;
typedef unsigned long UBaseType_t;
    typedef uint32_t TickType_t;
extern volatile BaseType_t xInsideInterrupt;
void vPortCloseRunningThread( void *pvTaskToDelete, volatile BaseType_t *pxPendYield );
void vPortDeleteThread( void *pvThreadToDelete );
void vPortEnterCritical( void );
void vPortExitCritical( void );
void vPortGenerateSimulatedInterrupt( uint32_t ulInterruptNumber );
void vPortSetInterruptHandler( uint32_t ulInterruptNumber, uint32_t (*pvHandler)( void ) );
  StackType_t *pxPortInitialiseStack( StackType_t *pxTopOfStack, TaskFunction_t pxCode, void *pvParameters ) ;
typedef struct HeapRegion
{
 uint8_t *pucStartAddress;
 size_t xSizeInBytes;
} HeapRegion_t;
typedef struct xHeapStats
{
 size_t xAvailableHeapSpaceInBytes;
 size_t xSizeOfLargestFreeBlockInBytes;
 size_t xSizeOfSmallestFreeBlockInBytes;
 size_t xNumberOfFreeBlocks;
 size_t xMinimumEverFreeBytesRemaining;
 size_t xNumberOfSuccessfulAllocations;
 size_t xNumberOfSuccessfulFrees;
} HeapStats_t;
void vPortDefineHeapRegions( const HeapRegion_t * const pxHeapRegions ) ;
void vPortGetHeapStats( HeapStats_t *pxHeapStats );
void *pvPortMalloc( size_t xSize ) ;
void vPortFree( void *pv ) ;
void vPortInitialiseBlocks( void ) ;
size_t xPortGetFreeHeapSize( void ) ;
size_t xPortGetMinimumEverFreeHeapSize( void ) ;
BaseType_t xPortStartScheduler( void ) ;
void vPortEndScheduler( void ) ;
struct xSTATIC_LIST_ITEM
{
 TickType_t xDummy2;
 void *pvDummy3[ 4 ];
};
typedef struct xSTATIC_LIST_ITEM StaticListItem_t;
struct xSTATIC_MINI_LIST_ITEM
{
 TickType_t xDummy2;
 void *pvDummy3[ 2 ];
};
typedef struct xSTATIC_MINI_LIST_ITEM StaticMiniListItem_t;
typedef struct xSTATIC_LIST
{
 UBaseType_t uxDummy2;
 void *pvDummy3;
 StaticMiniListItem_t xDummy4;
} StaticList_t;
typedef struct xSTATIC_TCB
{
 void *pxDummy1;
 StaticListItem_t xDummy3[ 2 ];
 UBaseType_t uxDummy5;
 void *pxDummy6;
 uint8_t ucDummy7[ ( 15 ) ];
  void *pxDummy8;
  UBaseType_t uxDummy10[ 2 ];
  UBaseType_t uxDummy12[ 2 ];
  void *pxDummy14;
  void *pvDummy15[ 3 ];
  uint32_t ulDummy16;
  uint32_t ulDummy18;
  uint8_t ucDummy19;
  uint8_t uxDummy20;
  uint8_t ucDummy21;
} StaticTask_t;
typedef struct xSTATIC_QUEUE
{
 void *pvDummy1[ 3 ];
 union
 {
  void *pvDummy2;
  UBaseType_t uxDummy2;
 } u;
 StaticList_t xDummy3[ 2 ];
 UBaseType_t uxDummy4[ 3 ];
 uint8_t ucDummy5[ 2 ];
  uint8_t ucDummy6;
  UBaseType_t uxDummy8;
  uint8_t ucDummy9;
} StaticQueue_t;
typedef StaticQueue_t StaticSemaphore_t;
typedef struct xSTATIC_EVENT_GROUP
{
 TickType_t xDummy1;
 StaticList_t xDummy2;
  UBaseType_t uxDummy3;
   uint8_t ucDummy4;
} StaticEventGroup_t;
typedef struct xSTATIC_TIMER
{
 void *pvDummy1;
 StaticListItem_t xDummy2;
 TickType_t xDummy3;
 void *pvDummy5;
 TaskFunction_t pvDummy6;
  UBaseType_t uxDummy7;
 uint8_t ucDummy8;
} StaticTimer_t;
typedef struct xSTATIC_STREAM_BUFFER
{
 size_t uxDummy1[ 4 ];
 void * pvDummy2[ 3 ];
 uint8_t ucDummy3;
  UBaseType_t uxDummy4;
} StaticStreamBuffer_t;
typedef StaticStreamBuffer_t StaticMessageBuffer_t;
struct xLIST;
struct xLIST_ITEM
{
 TickType_t xItemValue;
 struct xLIST_ITEM * pxNext;
 struct xLIST_ITEM * pxPrevious;
 void * pvOwner;
 struct xLIST * pvContainer;
};
typedef struct xLIST_ITEM ListItem_t;
struct xMINI_LIST_ITEM
{
 TickType_t xItemValue;
 struct xLIST_ITEM * pxNext;
 struct xLIST_ITEM * pxPrevious;
};
typedef struct xMINI_LIST_ITEM MiniListItem_t;
typedef struct xLIST
{
 volatile UBaseType_t uxNumberOfItems;
 ListItem_t * pxIndex;
 MiniListItem_t xListEnd;
} List_t;
void vListInitialise( List_t * const pxList ) ;
void vListInitialiseItem( ListItem_t * const pxItem ) ;
void vListInsert( List_t * const pxList, ListItem_t * const pxNewListItem ) ;
void vListInsertEnd( List_t * const pxList, ListItem_t * const pxNewListItem ) ;
UBaseType_t uxListRemove( ListItem_t * const pxItemToRemove ) ;
struct tskTaskControlBlock;
typedef struct tskTaskControlBlock* TaskHandle_t;
typedef BaseType_t (*TaskHookFunction_t)( void * );
typedef enum
{
 eRunning = 0,
 eReady,
 eBlocked,
 eSuspended,
 eDeleted,
 eInvalid
} eTaskState;
typedef enum
{
 eNoAction = 0,
 eSetBits,
 eIncrement,
 eSetValueWithOverwrite,
 eSetValueWithoutOverwrite
} eNotifyAction;
typedef struct xTIME_OUT
{
 BaseType_t xOverflowCount;
 TickType_t xTimeOnEntering;
} TimeOut_t;
typedef struct xMEMORY_REGION
{
 void *pvBaseAddress;
 uint32_t ulLengthInBytes;
 uint32_t ulParameters;
} MemoryRegion_t;
typedef struct xTASK_PARAMETERS
{
 TaskFunction_t pvTaskCode;
 const char * const pcName;
 uint16_t usStackDepth;
 void *pvParameters;
 UBaseType_t uxPriority;
 StackType_t *puxStackBuffer;
 MemoryRegion_t xRegions[ 1 ];
} TaskParameters_t;
typedef struct xTASK_STATUS
{
 TaskHandle_t xHandle;
 const char *pcTaskName;
 UBaseType_t xTaskNumber;
 eTaskState eCurrentState;
 UBaseType_t uxCurrentPriority;
 UBaseType_t uxBasePriority;
 uint32_t ulRunTimeCounter;
 StackType_t *pxStackBase;
 uint16_t usStackHighWaterMark;
} TaskStatus_t;
typedef enum
{
 eAbortSleep = 0,
 eStandardSleep,
 eNoTasksWaitingTimeout
} eSleepModeStatus;
 BaseType_t xTaskCreate( TaskFunction_t pxTaskCode,
       const char * const pcName,
       const uint16_t usStackDepth,
       void * const pvParameters,
       UBaseType_t uxPriority,
       TaskHandle_t * const pxCreatedTask ) ;
 TaskHandle_t xTaskCreateStatic( TaskFunction_t pxTaskCode,
         const char * const pcName,
         const uint32_t ulStackDepth,
         void * const pvParameters,
         UBaseType_t uxPriority,
         StackType_t * const puxStackBuffer,
         StaticTask_t * const pxTaskBuffer ) ;
void vTaskAllocateMPURegions( TaskHandle_t xTask, const MemoryRegion_t * const pxRegions ) ;
void vTaskDelete( TaskHandle_t xTaskToDelete ) ;
void vTaskDelay( const TickType_t xTicksToDelay ) ;
void vTaskDelayUntil( TickType_t * const pxPreviousWakeTime, const TickType_t xTimeIncrement ) ;
BaseType_t xTaskAbortDelay( TaskHandle_t xTask ) ;
UBaseType_t uxTaskPriorityGet( const TaskHandle_t xTask ) ;
UBaseType_t uxTaskPriorityGetFromISR( const TaskHandle_t xTask ) ;
eTaskState eTaskGetState( TaskHandle_t xTask ) ;
void vTaskGetInfo( TaskHandle_t xTask, TaskStatus_t *pxTaskStatus, BaseType_t xGetFreeStackSpace, eTaskState eState ) ;
void vTaskPrioritySet( TaskHandle_t xTask, UBaseType_t uxNewPriority ) ;
void vTaskSuspend( TaskHandle_t xTaskToSuspend ) ;
void vTaskResume( TaskHandle_t xTaskToResume ) ;
BaseType_t xTaskResumeFromISR( TaskHandle_t xTaskToResume ) ;
void vTaskStartScheduler( void ) ;
void vTaskEndScheduler( void ) ;
void vTaskSuspendAll( void ) ;
BaseType_t xTaskResumeAll( void ) ;
TickType_t xTaskGetTickCount( void ) ;
TickType_t xTaskGetTickCountFromISR( void ) ;
UBaseType_t uxTaskGetNumberOfTasks( void ) ;
char *pcTaskGetName( TaskHandle_t xTaskToQuery ) ;
TaskHandle_t xTaskGetHandle( const char *pcNameToQuery ) ;
UBaseType_t uxTaskGetStackHighWaterMark( TaskHandle_t xTask ) ;
uint16_t uxTaskGetStackHighWaterMark2( TaskHandle_t xTask ) ;
  void vTaskSetApplicationTaskTag( TaskHandle_t xTask, TaskHookFunction_t pxHookFunction ) ;
  TaskHookFunction_t xTaskGetApplicationTaskTag( TaskHandle_t xTask ) ;
  TaskHookFunction_t xTaskGetApplicationTaskTagFromISR( TaskHandle_t xTask ) ;
 void vTaskSetThreadLocalStoragePointer( TaskHandle_t xTaskToSet, BaseType_t xIndex, void *pvValue ) ;
 void *pvTaskGetThreadLocalStoragePointer( TaskHandle_t xTaskToQuery, BaseType_t xIndex ) ;
BaseType_t xTaskCallApplicationTaskHook( TaskHandle_t xTask, void *pvParameter ) ;
TaskHandle_t xTaskGetIdleTaskHandle( void ) ;
UBaseType_t uxTaskGetSystemState( TaskStatus_t * const pxTaskStatusArray, const UBaseType_t uxArraySize, uint32_t * const pulTotalRunTime ) ;
void vTaskList( char * pcWriteBuffer ) ;
void vTaskGetRunTimeStats( char *pcWriteBuffer ) ;
uint32_t ulTaskGetIdleRunTimeCounter( void ) ;
BaseType_t xTaskGenericNotify( TaskHandle_t xTaskToNotify, uint32_t ulValue, eNotifyAction eAction, uint32_t *pulPreviousNotificationValue ) ;
BaseType_t xTaskGenericNotifyFromISR( TaskHandle_t xTaskToNotify, uint32_t ulValue, eNotifyAction eAction, uint32_t *pulPreviousNotificationValue, BaseType_t *pxHigherPriorityTaskWoken ) ;
BaseType_t xTaskNotifyWait( uint32_t ulBitsToClearOnEntry, uint32_t ulBitsToClearOnExit, uint32_t *pulNotificationValue, TickType_t xTicksToWait ) ;
void vTaskNotifyGiveFromISR( TaskHandle_t xTaskToNotify, BaseType_t *pxHigherPriorityTaskWoken ) ;
uint32_t ulTaskNotifyTake( BaseType_t xClearCountOnExit, TickType_t xTicksToWait ) ;
BaseType_t xTaskNotifyStateClear( TaskHandle_t xTask );
uint32_t ulTaskNotifyValueClear( TaskHandle_t xTask, uint32_t ulBitsToClear ) ;
void vTaskSetTimeOutState( TimeOut_t * const pxTimeOut ) ;
BaseType_t xTaskCheckForTimeOut( TimeOut_t * const pxTimeOut, TickType_t * const pxTicksToWait ) ;
BaseType_t xTaskIncrementTick( void ) ;
void vTaskPlaceOnEventList( List_t * const pxEventList, const TickType_t xTicksToWait ) ;
void vTaskPlaceOnUnorderedEventList( List_t * pxEventList, const TickType_t xItemValue, const TickType_t xTicksToWait ) ;
void vTaskPlaceOnEventListRestricted( List_t * const pxEventList, TickType_t xTicksToWait, const BaseType_t xWaitIndefinitely ) ;
BaseType_t xTaskRemoveFromEventList( const List_t * const pxEventList ) ;
void vTaskRemoveFromUnorderedEventList( ListItem_t * pxEventListItem, const TickType_t xItemValue ) ;
 void vTaskSwitchContext( void ) ;
TickType_t uxTaskResetEventItemValue( void ) ;
TaskHandle_t xTaskGetCurrentTaskHandle( void ) ;
void vTaskMissedYield( void ) ;
BaseType_t xTaskGetSchedulerState( void ) ;
BaseType_t xTaskPriorityInherit( TaskHandle_t const pxMutexHolder ) ;
BaseType_t xTaskPriorityDisinherit( TaskHandle_t const pxMutexHolder ) ;
void vTaskPriorityDisinheritAfterTimeout( TaskHandle_t const pxMutexHolder, UBaseType_t uxHighestPriorityWaitingTask ) ;
UBaseType_t uxTaskGetTaskNumber( TaskHandle_t xTask ) ;
void vTaskSetTaskNumber( TaskHandle_t xTask, const UBaseType_t uxHandle ) ;
void vTaskStepTick( const TickType_t xTicksToJump ) ;
BaseType_t xTaskCatchUpTicks( TickType_t xTicksToCatchUp ) ;
eSleepModeStatus eTaskConfirmSleepModeStatus( void ) ;
TaskHandle_t pvTaskIncrementMutexHeldCount( void ) ;
void vTaskInternalSetTimeOutState( TimeOut_t * const pxTimeOut ) ;
struct QueueDefinition;
typedef struct QueueDefinition * QueueHandle_t;
typedef struct QueueDefinition * QueueSetHandle_t;
typedef struct QueueDefinition * QueueSetMemberHandle_t;
BaseType_t xQueueGenericSend( QueueHandle_t xQueue, const void * const pvItemToQueue, TickType_t xTicksToWait, const BaseType_t xCopyPosition ) ;
BaseType_t xQueuePeek( QueueHandle_t xQueue, void * const pvBuffer, TickType_t xTicksToWait ) ;
BaseType_t xQueuePeekFromISR( QueueHandle_t xQueue, void * const pvBuffer ) ;
BaseType_t xQueueReceive( QueueHandle_t xQueue, void * const pvBuffer, TickType_t xTicksToWait ) ;
UBaseType_t uxQueueMessagesWaiting( const QueueHandle_t xQueue ) ;
UBaseType_t uxQueueSpacesAvailable( const QueueHandle_t xQueue ) ;
void vQueueDelete( QueueHandle_t xQueue ) ;
BaseType_t xQueueGenericSendFromISR( QueueHandle_t xQueue, const void * const pvItemToQueue, BaseType_t * const pxHigherPriorityTaskWoken, const BaseType_t xCopyPosition ) ;
BaseType_t xQueueGiveFromISR( QueueHandle_t xQueue, BaseType_t * const pxHigherPriorityTaskWoken ) ;
BaseType_t xQueueReceiveFromISR( QueueHandle_t xQueue, void * const pvBuffer, BaseType_t * const pxHigherPriorityTaskWoken ) ;
BaseType_t xQueueIsQueueEmptyFromISR( const QueueHandle_t xQueue ) ;
BaseType_t xQueueIsQueueFullFromISR( const QueueHandle_t xQueue ) ;
UBaseType_t uxQueueMessagesWaitingFromISR( const QueueHandle_t xQueue ) ;
BaseType_t xQueueCRSendFromISR( QueueHandle_t xQueue, const void *pvItemToQueue, BaseType_t xCoRoutinePreviouslyWoken );
BaseType_t xQueueCRReceiveFromISR( QueueHandle_t xQueue, void *pvBuffer, BaseType_t *pxTaskWoken );
BaseType_t xQueueCRSend( QueueHandle_t xQueue, const void *pvItemToQueue, TickType_t xTicksToWait );
BaseType_t xQueueCRReceive( QueueHandle_t xQueue, void *pvBuffer, TickType_t xTicksToWait );
QueueHandle_t xQueueCreateMutex( const uint8_t ucQueueType ) ;
QueueHandle_t xQueueCreateMutexStatic( const uint8_t ucQueueType, StaticQueue_t *pxStaticQueue ) ;
QueueHandle_t xQueueCreateCountingSemaphore( const UBaseType_t uxMaxCount, const UBaseType_t uxInitialCount ) ;
QueueHandle_t xQueueCreateCountingSemaphoreStatic( const UBaseType_t uxMaxCount, const UBaseType_t uxInitialCount, StaticQueue_t *pxStaticQueue ) ;
BaseType_t xQueueSemaphoreTake( QueueHandle_t xQueue, TickType_t xTicksToWait ) ;
TaskHandle_t xQueueGetMutexHolder( QueueHandle_t xSemaphore ) ;
TaskHandle_t xQueueGetMutexHolderFromISR( QueueHandle_t xSemaphore ) ;
BaseType_t xQueueTakeMutexRecursive( QueueHandle_t xMutex, TickType_t xTicksToWait ) ;
BaseType_t xQueueGiveMutexRecursive( QueueHandle_t xMutex ) ;
 QueueHandle_t xQueueGenericCreate( const UBaseType_t uxQueueLength, const UBaseType_t uxItemSize, const uint8_t ucQueueType ) ;
 QueueHandle_t xQueueGenericCreateStatic( const UBaseType_t uxQueueLength, const UBaseType_t uxItemSize, uint8_t *pucQueueStorage, StaticQueue_t *pxStaticQueue, const uint8_t ucQueueType ) ;
QueueSetHandle_t xQueueCreateSet( const UBaseType_t uxEventQueueLength ) ;
BaseType_t xQueueAddToSet( QueueSetMemberHandle_t xQueueOrSemaphore, QueueSetHandle_t xQueueSet ) ;
BaseType_t xQueueRemoveFromSet( QueueSetMemberHandle_t xQueueOrSemaphore, QueueSetHandle_t xQueueSet ) ;
QueueSetMemberHandle_t xQueueSelectFromSet( QueueSetHandle_t xQueueSet, const TickType_t xTicksToWait ) ;
QueueSetMemberHandle_t xQueueSelectFromSetFromISR( QueueSetHandle_t xQueueSet ) ;
void vQueueWaitForMessageRestricted( QueueHandle_t xQueue, TickType_t xTicksToWait, const BaseType_t xWaitIndefinitely ) ;
BaseType_t xQueueGenericReset( QueueHandle_t xQueue, BaseType_t xNewQueue ) ;
void vQueueSetQueueNumber( QueueHandle_t xQueue, UBaseType_t uxQueueNumber ) ;
UBaseType_t uxQueueGetQueueNumber( QueueHandle_t xQueue ) ;
uint8_t ucQueueGetQueueType( QueueHandle_t xQueue ) ;
typedef QueueHandle_t SemaphoreHandle_t;
extern void vLoggingPrintf( const char * pcFormatString,
                            ... );
extern uint32_t ulRand();
void vApplicationMQTTGetKeys( const char ** ppcRootCA,
                              const char ** ppcClientCert,
                              const char ** ppcClientPrivateKey );
const char *FreeRTOS_strerror_r( BaseType_t xErrnum, char *pcBuffer, size_t uxLength );
extern uint32_t ulApplicationGetNextSequenceNumber( uint32_t ulSourceAddress,
             uint16_t usSourcePort,
             uint32_t ulDestinationAddress,
             uint16_t usDestinationPort );
typedef struct xNETWORK_BUFFER
{
 ListItem_t xBufferListItem;
 uint32_t ulIPAddress;
 uint8_t *pucEthernetBuffer;
 size_t xDataLength;
 uint16_t usPort;
 uint16_t usBoundPort;
} NetworkBufferDescriptor_t;
struct xMAC_ADDRESS
{
 uint8_t ucBytes[ ( 6 ) ];
}
;
typedef struct xMAC_ADDRESS MACAddress_t;
typedef enum eNETWORK_EVENTS
{
 eNetworkUp,
 eNetworkDown
} eIPCallbackEvent_t;
typedef enum ePING_REPLY_STATUS
{
 eSuccess = 0,
 eInvalidChecksum,
 eInvalidData
} ePingReplyStatus_t;
typedef struct xIP_TIMER
{
 uint32_t
  bActive : 1,
  bExpired : 1;
 TimeOut_t xTimeOut;
 TickType_t ulRemainingTime;
 TickType_t ulReloadTime;
} IPTimer_t;
 static __inline int32_t FreeRTOS_max_int32 (int32_t a, int32_t b);
 static __inline uint32_t FreeRTOS_max_uint32 (uint32_t a, uint32_t b);
 static __inline int32_t FreeRTOS_min_int32 (int32_t a, int32_t b);
 static __inline uint32_t FreeRTOS_min_uint32 (uint32_t a, uint32_t b);
 static __inline uint32_t FreeRTOS_round_up (uint32_t a, uint32_t d);
 static __inline uint32_t FreeRTOS_round_down (uint32_t a, uint32_t d);
 static __inline BaseType_t FreeRTOS_min_BaseType (BaseType_t a, BaseType_t b);
BaseType_t FreeRTOS_IPInit( const uint8_t ucIPAddress[ ( 4 ) ],
 const uint8_t ucNetMask[ ( 4 ) ],
 const uint8_t ucGatewayAddress[ ( 4 ) ],
 const uint8_t ucDNSServerAddress[ ( 4 ) ],
 const uint8_t ucMACAddress[ ( 6 ) ] );
void * FreeRTOS_GetUDPPayloadBuffer( size_t uxRequestedSizeBytes, TickType_t uxBlockTimeTicks );
void FreeRTOS_GetAddressConfiguration( uint32_t *pulIPAddress,
            uint32_t *pulNetMask,
            uint32_t *pulGatewayAddress,
            uint32_t *pulDNSServerAddress );
void FreeRTOS_SetAddressConfiguration( const uint32_t *pulIPAddress,
            const uint32_t *pulNetMask,
            const uint32_t *pulGatewayAddress,
            const uint32_t *pulDNSServerAddress );
BaseType_t FreeRTOS_SendPingRequest( uint32_t ulIPAddress, size_t uxNumberOfBytesToSend, TickType_t uxBlockTimeTicks );
void FreeRTOS_ReleaseUDPPayloadBuffer( void const * pvBuffer );
const uint8_t * FreeRTOS_GetMACAddress( void );
void FreeRTOS_UpdateMACAddress( const uint8_t ucMACAddress[( 6 )] );
 void vApplicationIPNetworkEventHook( eIPCallbackEvent_t eNetworkEvent );
uint32_t FreeRTOS_GetIPAddress( void );
void FreeRTOS_SetIPAddress( uint32_t ulIPAddress );
void FreeRTOS_SetNetmask( uint32_t ulNetmask );
void FreeRTOS_SetGatewayAddress( uint32_t ulGatewayAddress );
uint32_t FreeRTOS_GetGatewayAddress( void );
uint32_t FreeRTOS_GetDNSServerAddress( void );
uint32_t FreeRTOS_GetNetmask( void );
void FreeRTOS_OutputARPRequest( uint32_t ulIPAddress );
BaseType_t FreeRTOS_IsNetworkUp( void );
 extern void vPrintResourceStats( void );
const char *FreeRTOS_GetTCPStateName( UBaseType_t ulState);
void FreeRTOS_PrintARPCache( void );
void FreeRTOS_ClearARP( void );
BaseType_t xIsIPv4Multicast( uint32_t ulIPAddress );
void vSetMultiCastIPv4MacAddress( uint32_t ulIPAddress, MACAddress_t *pxMACAddress );
 const char *pcApplicationHostnameHook( void );
extern BaseType_t xApplicationGetRandomNumber( uint32_t *pulNumber );
extern void *memcpy (void *__restrict __dest, const void *__restrict __src,
       size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern void *memmove (void *__dest, const void *__src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern void *memccpy (void *__restrict __dest, const void *__restrict __src,
        int __c, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern void *memset (void *__s, int __c, size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern int memcmp (const void *__s1, const void *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern void *memchr (const void *__s, int __c, size_t __n)
      __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern char *strcpy (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *strncpy (char *__restrict __dest,
        const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *strcat (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *strncat (char *__restrict __dest, const char *__restrict __src,
        size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int strcmp (const char *__s1, const char *__s2)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern int strncmp (const char *__s1, const char *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern int strcoll (const char *__s1, const char *__s2)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern size_t strxfrm (char *__restrict __dest,
         const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));
struct __locale_struct
{
  struct __locale_data *__locales[13];
  const unsigned short int *__ctype_b;
  const int *__ctype_tolower;
  const int *__ctype_toupper;
  const char *__names[13];
};
typedef struct __locale_struct *__locale_t;
typedef __locale_t locale_t;
extern int strcoll_l (const char *__s1, const char *__s2, locale_t __l)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 3)));
extern size_t strxfrm_l (char *__dest, const char *__src, size_t __n,
    locale_t __l) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 4)));
extern char *strdup (const char *__s)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) __attribute__ ((__nonnull__ (1)));
extern char *strndup (const char *__string, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) __attribute__ ((__nonnull__ (1)));
extern char *strchr (const char *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern char *strrchr (const char *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern size_t strcspn (const char *__s, const char *__reject)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern size_t strspn (const char *__s, const char *__accept)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *strpbrk (const char *__s, const char *__accept)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *strstr (const char *__haystack, const char *__needle)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *strtok (char *__restrict __s, const char *__restrict __delim)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));
extern char *__strtok_r (char *__restrict __s,
    const char *__restrict __delim,
    char **__restrict __save_ptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3)));
extern char *strtok_r (char *__restrict __s, const char *__restrict __delim,
         char **__restrict __save_ptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3)));
extern size_t strlen (const char *__s)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern size_t strnlen (const char *__string, size_t __maxlen)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern char *strerror (int __errnum) __attribute__ ((__nothrow__ , __leaf__));
extern int strerror_r (int __errnum, char *__buf, size_t __buflen) __asm__ ("" "__xpg_strerror_r") __attribute__ ((__nothrow__ , __leaf__))
                        __attribute__ ((__nonnull__ (2)));
extern char *strerror_l (int __errnum, locale_t __l) __attribute__ ((__nothrow__ , __leaf__));
extern int bcmp (const void *__s1, const void *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern void bcopy (const void *__src, void *__dest, size_t __n)
  __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern void bzero (void *__s, size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern char *index (const char *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern char *rindex (const char *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern int ffs (int __i) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern int ffsl (long int __l) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
__extension__ extern int ffsll (long long int __ll)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern int strcasecmp (const char *__s1, const char *__s2)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern int strncasecmp (const char *__s1, const char *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern int strcasecmp_l (const char *__s1, const char *__s2, locale_t __loc)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 3)));
extern int strncasecmp_l (const char *__s1, const char *__s2,
     size_t __n, locale_t __loc)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 4)));
extern void explicit_bzero (void *__s, size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern char *strsep (char **__restrict __stringp,
       const char *__restrict __delim)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *strsignal (int __sig) __attribute__ ((__nothrow__ , __leaf__));
extern char *__stpcpy (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *stpcpy (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *__stpncpy (char *__restrict __dest,
   const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *stpncpy (char *__restrict __dest,
        const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
struct tmrTimerControl;
typedef struct tmrTimerControl * TimerHandle_t;
typedef void (*TimerCallbackFunction_t)( TimerHandle_t xTimer );
typedef void (*PendedFunction_t)( void *, uint32_t );
 TimerHandle_t xTimerCreate( const char * const pcTimerName,
        const TickType_t xTimerPeriodInTicks,
        const UBaseType_t uxAutoReload,
        void * const pvTimerID,
        TimerCallbackFunction_t pxCallbackFunction ) ;
 TimerHandle_t xTimerCreateStatic( const char * const pcTimerName,
          const TickType_t xTimerPeriodInTicks,
          const UBaseType_t uxAutoReload,
          void * const pvTimerID,
          TimerCallbackFunction_t pxCallbackFunction,
          StaticTimer_t *pxTimerBuffer ) ;
void *pvTimerGetTimerID( const TimerHandle_t xTimer ) ;
void vTimerSetTimerID( TimerHandle_t xTimer, void *pvNewID ) ;
BaseType_t xTimerIsTimerActive( TimerHandle_t xTimer ) ;
TaskHandle_t xTimerGetTimerDaemonTaskHandle( void ) ;
BaseType_t xTimerPendFunctionCallFromISR( PendedFunction_t xFunctionToPend, void *pvParameter1, uint32_t ulParameter2, BaseType_t *pxHigherPriorityTaskWoken ) ;
BaseType_t xTimerPendFunctionCall( PendedFunction_t xFunctionToPend, void *pvParameter1, uint32_t ulParameter2, TickType_t xTicksToWait ) ;
const char * pcTimerGetName( TimerHandle_t xTimer ) ;
void vTimerSetReloadMode( TimerHandle_t xTimer, const UBaseType_t uxAutoReload ) ;
UBaseType_t uxTimerGetReloadMode( TimerHandle_t xTimer ) ;
TickType_t xTimerGetPeriod( TimerHandle_t xTimer ) ;
TickType_t xTimerGetExpiryTime( TimerHandle_t xTimer ) ;
BaseType_t xTimerCreateTimerTask( void ) ;
BaseType_t xTimerGenericCommand( TimerHandle_t xTimer, const BaseType_t xCommandID, const TickType_t xOptionalValue, BaseType_t * const pxHigherPriorityTaskWoken, const TickType_t xTicksToWait ) ;
 void vTimerSetTimerNumber( TimerHandle_t xTimer, UBaseType_t uxTimerNumber ) ;
 UBaseType_t uxTimerGetTimerNumber( TimerHandle_t xTimer ) ;
struct EventGroupDef_t;
typedef struct EventGroupDef_t * EventGroupHandle_t;
typedef TickType_t EventBits_t;
 EventGroupHandle_t xEventGroupCreate( void ) ;
 EventGroupHandle_t xEventGroupCreateStatic( StaticEventGroup_t *pxEventGroupBuffer ) ;
EventBits_t xEventGroupWaitBits( EventGroupHandle_t xEventGroup, const EventBits_t uxBitsToWaitFor, const BaseType_t xClearOnExit, const BaseType_t xWaitForAllBits, TickType_t xTicksToWait ) ;
EventBits_t xEventGroupClearBits( EventGroupHandle_t xEventGroup, const EventBits_t uxBitsToClear ) ;
 BaseType_t xEventGroupClearBitsFromISR( EventGroupHandle_t xEventGroup, const EventBits_t uxBitsToClear ) ;
EventBits_t xEventGroupSetBits( EventGroupHandle_t xEventGroup, const EventBits_t uxBitsToSet ) ;
 BaseType_t xEventGroupSetBitsFromISR( EventGroupHandle_t xEventGroup, const EventBits_t uxBitsToSet, BaseType_t *pxHigherPriorityTaskWoken ) ;
EventBits_t xEventGroupSync( EventGroupHandle_t xEventGroup, const EventBits_t uxBitsToSet, const EventBits_t uxBitsToWaitFor, TickType_t xTicksToWait ) ;
EventBits_t xEventGroupGetBitsFromISR( EventGroupHandle_t xEventGroup ) ;
void vEventGroupDelete( EventGroupHandle_t xEventGroup ) ;
void vEventGroupSetBitsCallback( void *pvEventGroup, const uint32_t ulBitsToSet ) ;
void vEventGroupClearBitsCallback( void *pvEventGroup, const uint32_t ulBitsToClear ) ;
 UBaseType_t uxEventGroupGetNumber( void* xEventGroup ) ;
 void vEventGroupSetNumber( void* xEventGroup, UBaseType_t uxEventGroupNumber ) ;
typedef struct xWIN_PROPS {
 int32_t lTxBufSize;
 int32_t lTxWinSize;
 int32_t lRxBufSize;
 int32_t lRxWinSize;
} WinProperties_t;
typedef struct xLOW_HIGH_WATER {
 size_t uxLittleSpace;
 size_t uxEnoughSpace;
} LowHighWater_t;
struct freertos_sockaddr
{
 uint8_t sin_len;
 uint8_t sin_family;
 uint16_t sin_port;
 uint32_t sin_addr;
};
extern const char *FreeRTOS_inet_ntoa( uint32_t ulIPAddress, char *pcBuffer );
struct xSOCKET;
typedef struct xSOCKET *Socket_t;
Socket_t FreeRTOS_socket( BaseType_t xDomain, BaseType_t xType, BaseType_t xProtocol );
int32_t FreeRTOS_recvfrom( Socket_t xSocket, void *pvBuffer, size_t uxBufferLength, BaseType_t xFlags, struct freertos_sockaddr *pxSourceAddress, uint32_t *pxSourceAddressLength );
int32_t FreeRTOS_sendto( Socket_t xSocket, const void *pvBuffer, size_t uxTotalDataLength, BaseType_t xFlags, const struct freertos_sockaddr *pxDestinationAddress, uint32_t xDestinationAddressLength );
BaseType_t FreeRTOS_bind( Socket_t xSocket, struct freertos_sockaddr const * pxAddress, uint32_t xAddressLength );
size_t FreeRTOS_GetLocalAddress( Socket_t xSocket, struct freertos_sockaddr *pxAddress );
BaseType_t FreeRTOS_connect( Socket_t xClientSocket, struct freertos_sockaddr *pxAddress, uint32_t xAddressLength );
BaseType_t FreeRTOS_listen( Socket_t xSocket, BaseType_t xBacklog );
BaseType_t FreeRTOS_recv( Socket_t xSocket, void *pvBuffer, size_t uxBufferLength, BaseType_t xFlags );
BaseType_t FreeRTOS_send( Socket_t xSocket, const void *pvBuffer, size_t uxDataLength, BaseType_t xFlags );
Socket_t FreeRTOS_accept( Socket_t xServerSocket, struct freertos_sockaddr *pxAddress, uint32_t *pxAddressLength );
BaseType_t FreeRTOS_shutdown (Socket_t xSocket, BaseType_t xHow);
BaseType_t FreeRTOS_GetRemoteAddress( Socket_t xSocket, struct freertos_sockaddr *pxAddress );
 BaseType_t FreeRTOS_issocketconnected( Socket_t xSocket );
 BaseType_t FreeRTOS_mss( Socket_t xSocket );
BaseType_t FreeRTOS_connstatus( Socket_t xSocket );
BaseType_t FreeRTOS_maywrite( Socket_t xSocket );
 BaseType_t FreeRTOS_rx_size( Socket_t xSocket );
 BaseType_t FreeRTOS_tx_space( Socket_t xSocket );
 BaseType_t FreeRTOS_tx_size( Socket_t xSocket );
uint8_t *FreeRTOS_get_tx_head( Socket_t xSocket, BaseType_t *pxLength );
BaseType_t FreeRTOS_setsockopt( Socket_t xSocket, int32_t lLevel, int32_t lOptionName, const void *pvOptionValue, size_t uxOptionLength );
BaseType_t FreeRTOS_closesocket( Socket_t xSocket );
 uint32_t FreeRTOS_gethostbyname( const char *pcHostName );
BaseType_t FreeRTOS_inet_pton( BaseType_t xAddressFamily, const char *pcSource, void *pvDestination );
const char *FreeRTOS_inet_ntop( BaseType_t xAddressFamily, const void *pvSource, char *pcDestination, uint32_t uxSize );
uint32_t FreeRTOS_inet_addr( const char * pcIPAddress );
BaseType_t FreeRTOS_inet_pton4( const char *pcSource, void *pvDestination );
const char *FreeRTOS_inet_ntop4( const void *pvSource, char *pcDestination, uint32_t uxSize );
const struct xSTREAM_BUFFER *FreeRTOS_get_rx_buf( Socket_t xSocket );
void FreeRTOS_netstat( void );
typedef struct xSTREAM_BUFFER {
 volatile size_t uxTail;
 volatile size_t uxMid;
 volatile size_t uxHead;
 volatile size_t uxFront;
 size_t LENGTH;
 uint8_t ucArray[ sizeof( size_t ) ];
} StreamBuffer_t;
static __inline void vStreamBufferClear( StreamBuffer_t *pxBuffer );
static __inline size_t uxStreamBufferSpace( const StreamBuffer_t *pxBuffer, const size_t uxLower, const size_t uxUpper );
static __inline size_t uxStreamBufferDistance( const StreamBuffer_t *pxBuffer, const size_t uxLower, const size_t uxUpper );
static __inline size_t uxStreamBufferGetSpace( const StreamBuffer_t *pxBuffer );
static __inline size_t uxStreamBufferFrontSpace( const StreamBuffer_t *pxBuffer );
static __inline size_t uxStreamBufferGetSize( const StreamBuffer_t *pxBuffer );
static __inline size_t uxStreamBufferMidSpace( const StreamBuffer_t *pxBuffer );
static __inline void vStreamBufferMoveMid( StreamBuffer_t *pxBuffer, size_t uxCount );
static __inline BaseType_t xStreamBufferLessThenEqual( const StreamBuffer_t *pxBuffer, const size_t uxLeft, const size_t uxRight );
static __inline size_t uxStreamBufferGetPtr( StreamBuffer_t *pxBuffer, uint8_t **ppucData );
size_t uxStreamBufferAdd( StreamBuffer_t *pxBuffer, size_t uxOffset, const uint8_t *pucData, size_t uxByteCount );
size_t uxStreamBufferGet( StreamBuffer_t *pxBuffer, size_t uxOffset, uint8_t *pucData, size_t uxMaxCount, BaseType_t xPeek );
typedef struct xTCPTimerStruct
{
 uint32_t ulBorn;
} TCPTimer_t;
typedef struct xTCP_SEGMENT
{
 uint32_t ulSequenceNumber;
 int32_t lMaxLength;
 int32_t lDataLength;
 int32_t lStreamPos;
 TCPTimer_t xTransmitTimer;
 union
 {
  struct
  {
   uint32_t
    ucTransmitCount : 8,
    ucDupAckCount : 8,
    bOutstanding : 1,
    bAcked : 1,
    bIsForRx : 1;
  } bits;
  uint32_t ulFlags;
 } u;
 struct xLIST_ITEM xQueueItem;
 struct xLIST_ITEM xSegmentItem;
} TCPSegment_t;
typedef struct xTCP_WINSIZE
{
 uint32_t ulRxWindowLength;
 uint32_t ulTxWindowLength;
} TCPWinSize_t;
typedef struct xTCP_WINDOW
{
 union
 {
  struct
  {
   uint32_t
    bHasInit : 1,
    bSendFullSize : 1,
    bTimeStamps : 1;
  } bits;
  uint32_t ulFlags;
 } u;
 TCPWinSize_t xSize;
 struct
 {
  uint32_t ulFirstSequenceNumber;
  uint32_t ulCurrentSequenceNumber;
  uint32_t ulFINSequenceNumber;
  uint32_t ulHighestSequenceNumber;
 } rx, tx;
 uint32_t ulOurSequenceNumber;
 uint32_t ulUserDataLength;
 uint32_t ulNextTxSequenceNumber;
 int32_t lSRTT;
 uint8_t ucOptionLength;
 List_t xPriorityQueue;
 List_t xTxQueue;
 List_t xWaitQueue;
 TCPSegment_t *pxHeadSegment;
 uint32_t ulOptionsData[16U/sizeof(uint32_t)];
 List_t xTxSegments;
 List_t xRxSegments;
 uint16_t usOurPortNumber;
 uint16_t usPeerPortNumber;
 uint16_t usMSS;
 uint16_t usMSSInit;
} TCPWindow_t;
void vTCPWindowCreate( TCPWindow_t *pxWindow, uint32_t ulRxWindowLength,
 uint32_t ulTxWindowLength, uint32_t ulAckNumber, uint32_t ulSequenceNumber, uint32_t ulMSS );
void vTCPWindowDestroy( TCPWindow_t const * pxWindow );
void vTCPWindowInit( TCPWindow_t *pxWindow, uint32_t ulAckNumber, uint32_t ulSequenceNumber, uint32_t ulMSS );
void vTCPSegmentCleanup( void );
int32_t lTCPWindowRxCheck( TCPWindow_t *pxWindow, uint32_t ulSequenceNumber, uint32_t ulLength, uint32_t ulSpace );
BaseType_t xTCPWindowRxEmpty( const TCPWindow_t *pxWindow );
int32_t lTCPWindowTxAdd( TCPWindow_t *pxWindow, uint32_t ulLength, int32_t lPosition, int32_t lMax );
BaseType_t xTCPWindowTxHasData( TCPWindow_t const * pxWindow, uint32_t ulWindowSize, TickType_t *pulDelay );
BaseType_t xTCPWindowTxDone( const TCPWindow_t *pxWindow );
uint32_t ulTCPWindowTxGet( TCPWindow_t *pxWindow, uint32_t ulWindowSize, int32_t *plPosition );
uint32_t ulTCPWindowTxAck( TCPWindow_t *pxWindow, uint32_t ulSequenceNumber );
uint32_t ulTCPWindowTxSack( TCPWindow_t *pxWindow, uint32_t ulFirst, uint32_t ulLast );
BaseType_t xProcessReceivedTCPPacket( NetworkBufferDescriptor_t *pxDescriptor );
typedef enum eTCP_STATE {
 eCLOSED = 0U,
 eTCP_LISTEN,
 eCONNECT_SYN,
 eSYN_FIRST,
 eSYN_RECEIVED,
 eESTABLISHED,
 eFIN_WAIT_1,
 eFIN_WAIT_2,
 eCLOSE_WAIT,
 eCLOSING,
 eLAST_ACK,
 eTIME_WAIT,
} eIPTCPState_t;
typedef struct xNetworkAddressingParameters
{
 uint32_t ulDefaultIPAddress;
 uint32_t ulNetMask;
 uint32_t ulGatewayAddress;
 uint32_t ulDNSServerAddress;
 uint32_t ulBroadcastAddress;
} NetworkAddressingParameters_t;
extern BaseType_t xTCPWindowLoggingLevel;
extern QueueHandle_t xNetworkEventQueue;
struct xETH_HEADER
{
 MACAddress_t xDestinationAddress;
 MACAddress_t xSourceAddress;
 uint16_t usFrameType;
}
;
typedef struct xETH_HEADER EthernetHeader_t;
struct xARP_HEADER
{
 uint16_t usHardwareType;
 uint16_t usProtocolType;
 uint8_t ucHardwareAddressLength;
 uint8_t ucProtocolAddressLength;
 uint16_t usOperation;
 MACAddress_t xSenderHardwareAddress;
 uint8_t ucSenderProtocolAddress[ 4 ];
 MACAddress_t xTargetHardwareAddress;
 uint32_t ulTargetProtocolAddress;
}
;
typedef struct xARP_HEADER ARPHeader_t;
struct xIP_HEADER
{
 uint8_t ucVersionHeaderLength;
 uint8_t ucDifferentiatedServicesCode;
 uint16_t usLength;
 uint16_t usIdentification;
 uint16_t usFragmentOffset;
 uint8_t ucTimeToLive;
 uint8_t ucProtocol;
 uint16_t usHeaderChecksum;
 uint32_t ulSourceIPAddress;
 uint32_t ulDestinationIPAddress;
}
;
typedef struct xIP_HEADER IPHeader_t;
struct xICMP_HEADER
{
 uint8_t ucTypeOfMessage;
 uint8_t ucTypeOfService;
 uint16_t usChecksum;
 uint16_t usIdentifier;
 uint16_t usSequenceNumber;
}
;
typedef struct xICMP_HEADER ICMPHeader_t;
struct xUDP_HEADER
{
 uint16_t usSourcePort;
 uint16_t usDestinationPort;
 uint16_t usLength;
 uint16_t usChecksum;
}
;
typedef struct xUDP_HEADER UDPHeader_t;
struct xTCP_HEADER
{
 uint16_t usSourcePort;
 uint16_t usDestinationPort;
 uint32_t ulSequenceNumber;
 uint32_t ulAckNr;
 uint8_t ucTCPOffset;
 uint8_t ucTCPFlags;
 uint16_t usWindow;
 uint16_t usChecksum;
 uint16_t usUrgent;
 uint8_t ucOptdata[16U];
}
;
typedef struct xTCP_HEADER TCPHeader_t;
struct xARP_PACKET
{
 EthernetHeader_t xEthernetHeader;
 ARPHeader_t xARPHeader;
}
;
typedef struct xARP_PACKET ARPPacket_t;
struct xIP_PACKET
{
 EthernetHeader_t xEthernetHeader;
 IPHeader_t xIPHeader;
}
;
typedef struct xIP_PACKET IPPacket_t;
struct xICMP_PACKET
{
 EthernetHeader_t xEthernetHeader;
 IPHeader_t xIPHeader;
 ICMPHeader_t xICMPHeader;
}
;
typedef struct xICMP_PACKET ICMPPacket_t;
struct xUDP_PACKET
{
 EthernetHeader_t xEthernetHeader;
 IPHeader_t xIPHeader;
 UDPHeader_t xUDPHeader;
}
;
typedef struct xUDP_PACKET UDPPacket_t;
struct xTCP_PACKET
{
 EthernetHeader_t xEthernetHeader;
 IPHeader_t xIPHeader;
 TCPHeader_t xTCPHeader;
} 
;

typedef struct xTCP_PACKET TCPPacket_t;
typedef union XPROT_PACKET
{
 ARPPacket_t xARPPacket;
 TCPPacket_t xTCPPacket;
 UDPPacket_t xUDPPacket;
 ICMPPacket_t xICMPPacket;
} ProtocolPacket_t;
typedef union xPROT_HEADERS
{
 ICMPHeader_t xICMPHeader;
 UDPHeader_t xUDPHeader;
 TCPHeader_t xTCPHeader;
} ProtocolHeaders_t;
typedef enum
{
 eReleaseBuffer = 0,
 eProcessBuffer,
 eReturnEthernetFrame,
 eFrameConsumed
} eFrameProcessingResult_t;
typedef enum
{
 eNoEvent = -1,
 eNetworkDownEvent,
 eNetworkRxEvent,
 eNetworkTxEvent,
 eARPTimerEvent,
 eStackTxEvent,
 eDHCPEvent,
 eTCPTimerEvent,
 eTCPAcceptEvent,
 eTCPNetStat,
 eSocketBindEvent,
 eSocketCloseEvent,
 eSocketSelectEvent,
 eSocketSignalEvent,
} eIPEvent_t;
typedef struct IP_TASK_COMMANDS
{
 eIPEvent_t eEventType;
 void *pvData;
} IPStackEvent_t;
extern const MACAddress_t xBroadcastMACAddress;
extern uint16_t usPacketIdentifier;
typedef union xUDPPacketHeader
{
 uint8_t ucBytes[24];
 uint32_t ulWords[6];
} UDPPacketHeader_t;
extern UDPPacketHeader_t xDefaultPartUDPPacketHeader;
extern NetworkAddressingParameters_t xNetworkAddressing;
extern NetworkAddressingParameters_t xDefaultAddressing;
extern const BaseType_t xBufferAllocFixedSize;
 extern List_t xBoundTCPSocketsList;
BaseType_t FreeRTOS_ReleaseFreeNetworkBufferFromISR( void );
void FreeRTOS_NetworkDown( void );
BaseType_t FreeRTOS_NetworkDownFromISR( void );
eFrameProcessingResult_t eARPProcessPacket( ARPPacket_t * const pxARPFrame );
eFrameProcessingResult_t eConsiderFrameForProcessing( const uint8_t * const pucEthernetBuffer );
uint16_t usGenerateChecksum( uint16_t usSum, const uint8_t * pucNextData, size_t uxByteCount );
BaseType_t xProcessReceivedUDPPacket( NetworkBufferDescriptor_t *pxNetworkBuffer, uint16_t usPort );
void vNetworkSocketsInit( void );
BaseType_t xIPIsNetworkTaskReady( void );
 struct xSOCKET;
 typedef void (*SocketWakeupCallback_t)( struct xSOCKET * pxSocket );
 void vTCPNetStat( void );
 TickType_t xTCPTimerCheck( BaseType_t xWillSleep );
 typedef union
 {
  struct
  {
   uint64_t ullAlignmentWord;
  } a;
  struct
  {
   uint8_t ucFillPacket[ 2 ];
   uint8_t ucLastPacket[ sizeof( TCPPacket_t ) ];
  } u;
 } LastTCPPacket_t;
 typedef struct TCPSOCKET
 {
  uint32_t ulRemoteIP;
  uint16_t usRemotePort;
  struct {
   uint32_t
    bMssChange : 1,
    bPassAccept : 1,
    bPassQueued : 1,
    bReuseSocket : 1,
    bCloseAfterSend : 1,
    bUserShutdown : 1,
    bCloseRequested : 1,
    bLowWater : 1,
    bWinChange : 1,
    bSendKeepAlive : 1,
    bWaitKeepAlive : 1,
    bConnPrepared : 1,
    bFinAccepted : 1,
    bFinSent : 1,
    bFinRecv : 1,
    bFinAcked : 1,
    bFinLast : 1,
    bRxStopped : 1,
    bMallocError : 1,
    bWinScaling : 1;
  } bits;
  uint32_t ulHighestRxAllowed;
  uint16_t usTimeout;
  uint16_t usCurMSS;
  uint16_t usInitMSS;
  uint16_t usChildCount;
  uint16_t usBacklog;
  uint8_t ucRepCount;
  uint8_t ucTCPState;
  struct xSOCKET *pxPeerSocket;
   uint8_t ucKeepRepCount;
   TickType_t xLastAliveTime;
   TickType_t xLastActTime;
  size_t uxLittleSpace;
  size_t uxEnoughSpace;
  size_t uxRxStreamSize;
  size_t uxTxStreamSize;
  StreamBuffer_t *rxStream;
  StreamBuffer_t *txStream;
   NetworkBufferDescriptor_t *pxAckMessage;
  LastTCPPacket_t xPacket;
  uint8_t tcpflags;
   uint8_t ucMyWinScaleFactor;
   uint8_t ucPeerWinScaleFactor;
  uint32_t ulWindowSize;
  size_t uxRxWinSize;
  size_t uxTxWinSize;
  TCPWindow_t xTCPWindow;
 } IPTCPSocket_t;
typedef struct UDPSOCKET
{
 List_t xWaitingPacketsList;
} IPUDPSocket_t;
enum eSOCKET_EVENT {
 eSOCKET_RECEIVE = 0x0001,
 eSOCKET_SEND = 0x0002,
 eSOCKET_ACCEPT = 0x0004,
 eSOCKET_CONNECT = 0x0008,
 eSOCKET_BOUND = 0x0010,
 eSOCKET_CLOSED = 0x0020,
 eSOCKET_INTR = 0x0040,
 eSOCKET_ALL = 0x007F,
};
typedef struct xSOCKET
{
 EventBits_t xEventBits;
 EventGroupHandle_t xEventGroup;
 ListItem_t xBoundSocketListItem;
 TickType_t xReceiveBlockTime;
 TickType_t xSendBlockTime;
 uint16_t usLocalPort;
 uint8_t ucSocketOptions;
 uint8_t ucProtocol;
  SocketWakeupCallback_t pxUserWakeCallback;
 union
 {
  IPUDPSocket_t xUDP;
   IPTCPSocket_t xTCP;
   uint64_t ullTCPAlignment;
 } u;
} FreeRTOS_Socket_t;
 FreeRTOS_Socket_t *pxTCPSocketLookup( uint32_t ulLocalIP, UBaseType_t uxLocalPort, uint32_t ulRemoteIP, UBaseType_t uxRemotePort );
FreeRTOS_Socket_t *pxUDPSocketLookup( UBaseType_t uxLocalPort );
void vProcessGeneratedUDPPacket( NetworkBufferDescriptor_t * const pxNetworkBuffer );
uint16_t usGenerateProtocolChecksum( const uint8_t * const pucEthernetBuffer, size_t uxBufferLength, BaseType_t xOutgoingPacket );
void vReturnEthernetFrame( NetworkBufferDescriptor_t * pxNetworkBuffer, BaseType_t xReleaseAfterSend );
BaseType_t vSocketBind( FreeRTOS_Socket_t *pxSocket, struct freertos_sockaddr * pxBindAddress, size_t uxAddressLength, BaseType_t xInternal );
int32_t lTCPAddRxdata(FreeRTOS_Socket_t *pxSocket, size_t uxOffset, const uint8_t *pcData, uint32_t ulByteCount);
void vSocketWakeUpUser( FreeRTOS_Socket_t *pxSocket );
static __inline uint32_t ulChar2u32 (const uint8_t *apChr);
static __inline uint16_t usChar2u16 (const uint8_t *apChr);
BaseType_t xTCPSocketCheck( FreeRTOS_Socket_t *pxSocket );
BaseType_t xTCPCheckNewClient( FreeRTOS_Socket_t *pxSocket );
void *vSocketClose( FreeRTOS_Socket_t *pxSocket );
BaseType_t xSendEventToIPTask( eIPEvent_t eEvent );
BaseType_t xSendEventStructToIPTask( const IPStackEvent_t *pxEvent, TickType_t uxTimeout );
NetworkBufferDescriptor_t *pxUDPPayloadBuffer_to_NetworkBuffer( const void * pvBuffer );
 void vTCPStateChange( FreeRTOS_Socket_t *pxSocket, enum eTCP_STATE eTCPState );
BaseType_t xIsCallingFromIPTask( void );
void vIPSetDHCPTimerEnableState( BaseType_t xEnableState );
void vIPReloadDHCPTimer( uint32_t ulLeaseTime );
void vIPNetworkUpCalls( void );
typedef enum
{
 eWaitingSendFirstDiscover = 0,
 eWaitingOffer,
 eWaitingAcknowledge,
 eLeasedAddress,
 eNotUsingLeasedAddress
} eDHCPState_t;
struct xDHCP_DATA
{
 uint32_t ulTransactionId;
 uint32_t ulOfferedIPAddress;
 uint32_t ulDHCPServerAddress;
 uint32_t ulLeaseTime;
 TickType_t xDHCPTxTime;
 TickType_t xDHCPTxPeriod;
 BaseType_t xUseBroadcast;
 eDHCPState_t eDHCPState;
};
typedef struct xDHCP_DATA DHCPData_t;
void vDHCPProcess( BaseType_t xReset );
BaseType_t xIsDHCPSocket( Socket_t xSocket );
BaseType_t xNetworkInterfaceInitialise( void );
BaseType_t xNetworkInterfaceOutput( NetworkBufferDescriptor_t * const pxNetworkBuffer, BaseType_t xReleaseAfterSend );
void vNetworkInterfaceAllocateRAMToBuffers( NetworkBufferDescriptor_t pxNetworkBuffers[ 60 ] );
BaseType_t xGetPhyLinkStatus( void );
BaseType_t xNetworkBuffersInitialise( void );
NetworkBufferDescriptor_t *pxGetNetworkBufferWithDescriptor( size_t xRequestedSizeBytes, TickType_t xBlockTimeTicks );
NetworkBufferDescriptor_t *pxNetworkBufferGetFromISR( size_t xRequestedSizeBytes );
void vReleaseNetworkBufferAndDescriptor( NetworkBufferDescriptor_t * const pxNetworkBuffer );
BaseType_t vNetworkBufferReleaseFromISR( NetworkBufferDescriptor_t * const pxNetworkBuffer );
uint8_t *pucGetNetworkBuffer( size_t *pxRequestedSizeBytes );
void vReleaseNetworkBuffer( uint8_t *pucEthernetBuffer );
UBaseType_t uxGetNumberOfFreeNetworkBuffers( void );
UBaseType_t uxGetMinimumFreeNetworkBuffers( void );
NetworkBufferDescriptor_t *pxDuplicateNetworkBufferWithDescriptor( const NetworkBufferDescriptor_t * const pxNetworkBuffer,
 size_t uxNewLength);
NetworkBufferDescriptor_t *pxResizeNetworkBufferWithDescriptor( NetworkBufferDescriptor_t * pxNetworkBuffer,
 size_t xNewSizeBytes );
typedef struct xARP_CACHE_TABLE_ROW
{
 uint32_t ulIPAddress;
 MACAddress_t xMACAddress;
 uint8_t ucAge;
    uint8_t ucValid;
} ARPCacheRow_t;
typedef enum
{
 eARPCacheMiss = 0,
 eARPCacheHit,
 eCantSendPacket
} eARPLookupResult_t;
void vARPRefreshCacheEntry( const MACAddress_t * pxMACAddress, const uint32_t ulIPAddress );
eARPLookupResult_t eARPGetCacheEntry( uint32_t *pulIPAddress, MACAddress_t * const pxMACAddress );
void vARPAgeCache( void );
void vARPGenerateRequestPacket( NetworkBufferDescriptor_t * const pxNetworkBuffer );
void vARPSendGratuitous( void );
BaseType_t xCheckLoopback( NetworkBufferDescriptor_t * const pxDescriptor, BaseType_t bReleaseAfterSend );
/*@
	requires \valid(pucPtr + (0 .. uxTotalLength - 1));
	assigns \nothing;
	ensures 0 <= \result < uxTotalLength;
*/
static size_t prvSingleStepTCPHeaderOptions( const uint8_t * const pucPtr,
            size_t uxTotalLength,
            FreeRTOS_Socket_t * const pxSocket,
            BaseType_t xHasSYNFlag );
//     requires \valid(&(( ProtocolHeaders_t * ) ( &( pxNetworkBuffer->pucEthernetBuffer[ 14U + ( 20U ) ] ) )->xTCPHeader).ucOptdata);
//      requires \valid(((ProtocolHeaders_t)( pxNetworkBuffer->pucEthernetBuffer[ 14U + ( 20U ) ])).xTCPHeader.ucOptdata);
//  uint8_t *pucEthernetBuffer
//  ProtocolHeaders_t is a struct with many fields, trying to cast the address of a uint8 as a struct?
//     requires \valid(&( ( ProtocolHeaders_t * )(pxNetworkBuffer->pucEthernetBuffer + 34U)->xTCPHeader ));
 //    requires \valid(&( ( ProtocolHeaders_t * )(pxNetworkBuffer->pucEthernetBuffer + 34U)->xTCPHeader ->ucOptdata));

/*@
     requires \valid(pxSocket) && \valid(pxNetworkBuffer);
     requires \valid(pxNetworkBuffer->pucEthernetBuffer + 34U);
     requires \let pxProtocolHeaders = ( ProtocolHeaders_t * )pxNetworkBuffer->pucEthernetBuffer[ 14U + ( 20U ) ]; 
          \let pxTCPHeader = &( pxProtocolHeaders->xTCPHeader ); 
          \let  pucPtr = (uint8_t *)pxTCPHeader->ucOptdata;    
          \valid(pucPtr + (0 .. 15));
*/
static void prvCheckOptions( FreeRTOS_Socket_t *pxSocket, const NetworkBufferDescriptor_t *pxNetworkBuffer )
{
size_t uxTCPHeaderOffset = 14U + ( 20U );
const ProtocolHeaders_t *pxProtocolHeaders = ( ( ProtocolHeaders_t * ) ( &( pxNetworkBuffer->pucEthernetBuffer[ uxTCPHeaderOffset ] ) ) )
                                                               ;
const TCPHeader_t * pxTCPHeader;
const uint8_t *pucPtr;
BaseType_t xHasSYNFlag;
size_t uxOptionOffset = uxTCPHeaderOffset + ( sizeof( TCPHeader_t ) - sizeof( pxTCPHeader->ucOptdata ) );
size_t uxOptionsLength;
size_t uxResult;
uint8_t ucLength;
 pxTCPHeader = &( pxProtocolHeaders->xTCPHeader );
 pucPtr = pxTCPHeader->ucOptdata;
 if( pxTCPHeader->ucTCPOffset <= ( 5U << 4U ) )
 {
  return;
 }
 //ucLength = ( ( ( pxTCPHeader->ucTCPOffset >> 4U ) - 5U ) << 2U );
 ucLength = 6;
 uxOptionsLength = ( size_t ) ucLength;
 //@assert 0 <= uxOptionsLength <= ( size_t ) ucLength;
//@assert \valid(pucPtr );


 if( pxNetworkBuffer->xDataLength > uxOptionOffset )
 {
  if( ( pxNetworkBuffer->xDataLength > uxOptionOffset ) &&
   ( uxOptionsLength <= ( pxNetworkBuffer->xDataLength - uxOptionOffset ) ) )
  {
   if( ( pxTCPHeader->ucTCPFlags & ( ( uint8_t ) 0x02U ) ) != ( uint8_t ) 0U )
   {
    xHasSYNFlag = ( ( BaseType_t ) 1 );
   }
   else
   {
    xHasSYNFlag = ( ( BaseType_t ) 0 );
   }
    //@assert 0 <= uxOptionsLength <= ( size_t ) ucLength;
    //@assert \valid(pucPtr + (0..uxOptionsLength - 1));
     /*@
          loop invariant 0 <= uxOptionsLength <= ( size_t ) ucLength && \valid(pucPtr + (0..uxOptionsLength - 1));
          loop assigns uxResult, uxOptionsLength, pucPtr;
          loop variant uxOptionsLength;
     */
   for( ;; )
   {
    if( uxOptionsLength == 0U )
    {
     break;
    }
     //@assert \valid(pucPtr + (0..uxOptionsLength - 1));
    uxResult = prvSingleStepTCPHeaderOptions( pucPtr, uxOptionsLength, pxSocket, xHasSYNFlag );
    if( uxResult == 0UL )
    {
     break;
    }
    //@assert uxResult != 0;
    //@assert \valid(pucPtr + (0..uxOptionsLength - 1));
    uxOptionsLength -= uxResult;
    pucPtr = &( pucPtr[ uxResult ] );
    //@assert \valid(pucPtr + (0..uxOptionsLength - 1));

   }
  }
 }
}
