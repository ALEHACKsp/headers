typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

typedef struct _OWNER_ENTRY
{
  /* 0x0000 */ unsigned long OwnerThread;
  union
  {
    /* 0x0004 */ long OwnerCount;
    /* 0x0004 */ unsigned long TableSize;
  }; /* size: 0x0004 */
} OWNER_ENTRY, *POWNER_ENTRY; /* size: 0x0008 */

typedef struct _ERESOURCE
{
  /* 0x0000 */ struct _LIST_ENTRY SystemResourcesList;
  /* 0x0008 */ struct _OWNER_ENTRY* OwnerTable;
  /* 0x000c */ short ActiveCount;
  /* 0x000e */ unsigned short Flag;
  /* 0x0010 */ struct _KSEMAPHORE* SharedWaiters;
  /* 0x0014 */ struct _KEVENT* ExclusiveWaiters;
  /* 0x0018 */ struct _OWNER_ENTRY OwnerThreads[2];
  /* 0x0028 */ unsigned long ContentionCount;
  /* 0x002c */ unsigned short NumberOfSharedWaiters;
  /* 0x002e */ unsigned short NumberOfExclusiveWaiters;
  union
  {
    /* 0x0030 */ void* Address;
    /* 0x0030 */ unsigned long CreatorBackTraceIndex;
  }; /* size: 0x0004 */
  /* 0x0034 */ unsigned long SpinLock;
} ERESOURCE, *PERESOURCE; /* size: 0x0038 */

typedef struct _UNICODE_STRING
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ unsigned short MaximumLength;
  /* 0x0004 */ unsigned short* Buffer;
} UNICODE_STRING, *PUNICODE_STRING; /* size: 0x0008 */

typedef struct _GENERIC_MAPPING
{
  /* 0x0000 */ unsigned long GenericRead;
  /* 0x0004 */ unsigned long GenericWrite;
  /* 0x0008 */ unsigned long GenericExecute;
  /* 0x000c */ unsigned long GenericAll;
} GENERIC_MAPPING, *PGENERIC_MAPPING; /* size: 0x0010 */

typedef enum _POOL_TYPE
{
  NonPagedPool = 0,
  PagedPool = 1,
  NonPagedPoolMustSucceed = 2,
  DontUseThisType = 3,
  NonPagedPoolCacheAligned = 4,
  PagedPoolCacheAligned = 5,
  NonPagedPoolCacheAlignedMustS = 6,
  MaxPoolType = 7,
  NonPagedPoolSession = 32,
  PagedPoolSession = 33,
  NonPagedPoolMustSucceedSession = 34,
  DontUseThisTypeSession = 35,
  NonPagedPoolCacheAlignedSession = 36,
  PagedPoolCacheAlignedSession = 37,
  NonPagedPoolCacheAlignedMustSSession = 38,
} POOL_TYPE, *PPOOL_TYPE;

typedef struct _OBJECT_TYPE_INITIALIZER
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ unsigned char UseDefaultObject;
  /* 0x0003 */ unsigned char CaseInsensitive;
  /* 0x0004 */ unsigned long InvalidAttributes;
  /* 0x0008 */ struct _GENERIC_MAPPING GenericMapping;
  /* 0x0018 */ unsigned long ValidAccessMask;
  /* 0x001c */ unsigned char SecurityRequired;
  /* 0x001d */ unsigned char MaintainHandleCount;
  /* 0x001e */ unsigned char MaintainTypeList;
  /* 0x0020 */ enum _POOL_TYPE PoolType;
  /* 0x0024 */ unsigned long DefaultPagedPoolCharge;
  /* 0x0028 */ unsigned long DefaultNonPagedPoolCharge;
  /* 0x002c */ void* DumpProcedure /* function */;
  /* 0x0030 */ void* OpenProcedure /* function */;
  /* 0x0034 */ void* CloseProcedure /* function */;
  /* 0x0038 */ void* DeleteProcedure /* function */;
  /* 0x003c */ void* ParseProcedure /* function */;
  /* 0x0040 */ void* SecurityProcedure /* function */;
  /* 0x0044 */ void* QueryNameProcedure /* function */;
  /* 0x0048 */ void* OkayToCloseProcedure /* function */;
} OBJECT_TYPE_INITIALIZER, *POBJECT_TYPE_INITIALIZER; /* size: 0x004c */

typedef struct _OBJECT_TYPE
{
  /* 0x0000 */ struct _ERESOURCE Mutex;
  /* 0x0038 */ struct _LIST_ENTRY TypeList;
  /* 0x0040 */ struct _UNICODE_STRING Name;
  /* 0x0048 */ void* DefaultObject;
  /* 0x004c */ unsigned long Index;
  /* 0x0050 */ unsigned long TotalNumberOfObjects;
  /* 0x0054 */ unsigned long TotalNumberOfHandles;
  /* 0x0058 */ unsigned long HighWaterNumberOfObjects;
  /* 0x005c */ unsigned long HighWaterNumberOfHandles;
  /* 0x0060 */ struct _OBJECT_TYPE_INITIALIZER TypeInfo;
  /* 0x00ac */ unsigned long Key;
  /* 0x00b0 */ struct _ERESOURCE ObjectLocks[4];
} OBJECT_TYPE, *POBJECT_TYPE; /* size: 0x0190 */

