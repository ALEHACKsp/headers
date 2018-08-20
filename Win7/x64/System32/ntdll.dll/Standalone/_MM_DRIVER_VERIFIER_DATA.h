typedef struct _UNICODE_STRING
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ unsigned short MaximumLength;
  /* 0x0008 */ unsigned short* Buffer;
} UNICODE_STRING, *PUNICODE_STRING; /* size: 0x0010 */

typedef struct _MM_DRIVER_VERIFIER_DATA
{
  /* 0x0000 */ volatile unsigned long Level;
  /* 0x0004 */ volatile unsigned long RaiseIrqls;
  /* 0x0008 */ volatile unsigned long AcquireSpinLocks;
  /* 0x000c */ volatile unsigned long SynchronizeExecutions;
  /* 0x0010 */ volatile unsigned long AllocationsAttempted;
  /* 0x0014 */ volatile unsigned long AllocationsSucceeded;
  /* 0x0018 */ volatile unsigned long AllocationsSucceededSpecialPool;
  /* 0x001c */ volatile unsigned long AllocationsWithNoTag;
  /* 0x0020 */ volatile unsigned long TrimRequests;
  /* 0x0024 */ volatile unsigned long Trims;
  /* 0x0028 */ volatile unsigned long AllocationsFailed;
  /* 0x002c */ volatile unsigned long AllocationsFailedDeliberately;
  /* 0x0030 */ volatile unsigned long Loads;
  /* 0x0034 */ volatile unsigned long Unloads;
  /* 0x0038 */ volatile unsigned long UnTrackedPool;
  /* 0x003c */ volatile unsigned long UserTrims;
  /* 0x0040 */ volatile unsigned long CurrentPagedPoolAllocations;
  /* 0x0044 */ volatile unsigned long CurrentNonPagedPoolAllocations;
  /* 0x0048 */ volatile unsigned long PeakPagedPoolAllocations;
  /* 0x004c */ volatile unsigned long PeakNonPagedPoolAllocations;
  /* 0x0050 */ volatile unsigned __int64 PagedBytes;
  /* 0x0058 */ volatile unsigned __int64 NonPagedBytes;
  /* 0x0060 */ volatile unsigned __int64 PeakPagedBytes;
  /* 0x0068 */ volatile unsigned __int64 PeakNonPagedBytes;
  /* 0x0070 */ volatile unsigned long BurstAllocationsFailedDeliberately;
  /* 0x0074 */ volatile unsigned long SessionTrims;
  /* 0x0078 */ volatile unsigned long OptionChanges;
  /* 0x007c */ volatile unsigned long VerifyMode;
  /* 0x0080 */ struct _UNICODE_STRING PreviousBucketName;
  /* 0x0090 */ volatile unsigned long ActivityCounter;
  /* 0x0094 */ volatile unsigned long PreviousActivityCounter;
  /* 0x0098 */ volatile unsigned long WorkerTrimRequests;
  /* 0x009c */ long __PADDING__[1];
} MM_DRIVER_VERIFIER_DATA, *PMM_DRIVER_VERIFIER_DATA; /* size: 0x00a0 */

