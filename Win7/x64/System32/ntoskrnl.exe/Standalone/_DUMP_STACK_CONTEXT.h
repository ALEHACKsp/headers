typedef union _LARGE_INTEGER
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ long HighPart;
    }; /* size: 0x0008 */
    struct // _TAG_UNNAMED_1
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ long HighPart;
    } /* size: 0x0008 */ u;
    /* 0x0000 */ __int64 QuadPart;
  }; /* size: 0x0008 */
} LARGE_INTEGER, *PLARGE_INTEGER; /* size: 0x0008 */

typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

typedef struct _DUMP_INITIALIZATION_CONTEXT
{
  /* 0x0000 */ unsigned long Length;
  /* 0x0004 */ unsigned long Reserved;
  /* 0x0008 */ void* MemoryBlock;
  /* 0x0010 */ void* CommonBuffer[2];
  /* 0x0020 */ union _LARGE_INTEGER PhysicalAddress[2];
  /* 0x0030 */ void* StallRoutine /* function */;
  /* 0x0038 */ void* OpenRoutine /* function */;
  /* 0x0040 */ void* WriteRoutine /* function */;
  /* 0x0048 */ void* FinishRoutine /* function */;
  /* 0x0050 */ struct _ADAPTER_OBJECT* AdapterObject;
  /* 0x0058 */ void* MappedRegisterBase;
  /* 0x0060 */ void* PortConfiguration;
  /* 0x0068 */ unsigned char CrashDump;
  /* 0x006c */ unsigned long MaximumTransferSize;
  /* 0x0070 */ unsigned long CommonBufferSize;
  /* 0x0078 */ void* TargetAddress;
  /* 0x0080 */ void* WritePendingRoutine /* function */;
  /* 0x0088 */ unsigned long PartitionStyle;
  union // _TAG_UNNAMED_71
  {
    union
    {
      struct // _TAG_UNNAMED_72
      {
        /* 0x008c */ unsigned long Signature;
        /* 0x0090 */ unsigned long CheckSum;
      } /* size: 0x0008 */ Mbr;
      struct // _TAG_UNNAMED_73
      {
        /* 0x008c */ struct _GUID DiskId;
      } /* size: 0x0010 */ Gpt;
    }; /* size: 0x0010 */
  } /* size: 0x0010 */ DiskInfo;
  /* 0x009c */ long __PADDING__[1];
} DUMP_INITIALIZATION_CONTEXT, *PDUMP_INITIALIZATION_CONTEXT; /* size: 0x00a0 */

typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _STRING
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ unsigned short MaximumLength;
  /* 0x0008 */ char* Buffer;
} STRING, *PSTRING; /* size: 0x0010 */

typedef enum _DEVICE_USAGE_NOTIFICATION_TYPE
{
  DeviceUsageTypeUndefined = 0,
  DeviceUsageTypePaging = 1,
  DeviceUsageTypeHibernation = 2,
  DeviceUsageTypeDumpFile = 3,
} DEVICE_USAGE_NOTIFICATION_TYPE, *PDEVICE_USAGE_NOTIFICATION_TYPE;

typedef struct _DUMP_STACK_CONTEXT
{
  /* 0x0000 */ struct _DUMP_INITIALIZATION_CONTEXT Init;
  /* 0x00a0 */ union _LARGE_INTEGER PartitionOffset;
  /* 0x00a8 */ void* DumpPointers;
  /* 0x00b0 */ unsigned long PointersLength;
  /* 0x00b8 */ unsigned short* ModulePrefix;
  /* 0x00c0 */ struct _LIST_ENTRY DriverList;
  /* 0x00d0 */ struct _STRING InitMsg;
  /* 0x00e0 */ struct _STRING ProgMsg;
  /* 0x00f0 */ struct _STRING DoneMsg;
  /* 0x0100 */ void* FileObject;
  /* 0x0108 */ enum _DEVICE_USAGE_NOTIFICATION_TYPE UsageType;
  /* 0x010c */ long __PADDING__[1];
} DUMP_STACK_CONTEXT, *PDUMP_STACK_CONTEXT; /* size: 0x0110 */

