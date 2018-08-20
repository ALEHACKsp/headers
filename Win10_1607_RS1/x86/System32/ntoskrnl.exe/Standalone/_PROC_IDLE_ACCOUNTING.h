enum PPM_IDLE_BUCKET_TIME_TYPE
{
  PpmIdleBucketTimeInQpc = 0,
  PpmIdleBucketTimeIn100ns = 1,
  PpmIdleBucketTimeMaximum = 2,
};

typedef struct _PPM_SELECTION_STATISTICS
{
  /* 0x0000 */ unsigned __int64 SelectedCount;
  /* 0x0008 */ unsigned __int64 VetoCount;
  /* 0x0010 */ unsigned __int64 PreVetoCount;
  /* 0x0018 */ unsigned __int64 WrongProcessorCount;
  /* 0x0020 */ unsigned __int64 LatencyCount;
  /* 0x0028 */ unsigned __int64 IdleDurationCount;
  /* 0x0030 */ unsigned __int64 DeviceDependencyCount;
  /* 0x0038 */ unsigned __int64 ProcessorDependencyCount;
  /* 0x0040 */ unsigned __int64 PlatformOnlyCount;
  /* 0x0048 */ unsigned __int64 InterruptibleCount;
  /* 0x0050 */ unsigned __int64 LegacyOverrideCount;
  /* 0x0058 */ unsigned __int64 CstateCheckCount;
  /* 0x0060 */ unsigned __int64 NoCStateCount;
  /* 0x0068 */ unsigned __int64 CoordinatedDependencyCount;
  /* 0x0070 */ struct _PPM_VETO_ACCOUNTING* PreVetoAccounting;
  /* 0x0074 */ long __PADDING__[1];
} PPM_SELECTION_STATISTICS, *PPPM_SELECTION_STATISTICS; /* size: 0x0078 */

typedef struct _PROC_IDLE_STATE_BUCKET
{
  /* 0x0000 */ unsigned __int64 TotalTime;
  /* 0x0008 */ unsigned __int64 MinTime;
  /* 0x0010 */ unsigned __int64 MaxTime;
  /* 0x0018 */ unsigned long Count;
  /* 0x001c */ long __PADDING__[1];
} PROC_IDLE_STATE_BUCKET, *PPROC_IDLE_STATE_BUCKET; /* size: 0x0020 */

typedef struct _PROC_IDLE_STATE_ACCOUNTING
{
  /* 0x0000 */ unsigned __int64 TotalTime;
  /* 0x0008 */ unsigned long CancelCount;
  /* 0x000c */ unsigned long FailureCount;
  /* 0x0010 */ unsigned long SuccessCount;
  /* 0x0014 */ unsigned long InvalidBucketIndex;
  /* 0x0018 */ unsigned __int64 MinTime;
  /* 0x0020 */ unsigned __int64 MaxTime;
  /* 0x0028 */ struct _PPM_SELECTION_STATISTICS SelectionStatistics;
  /* 0x00a0 */ struct _PROC_IDLE_STATE_BUCKET IdleTimeBuckets[26];
} PROC_IDLE_STATE_ACCOUNTING, *PPROC_IDLE_STATE_ACCOUNTING; /* size: 0x03e0 */

typedef struct _PROC_IDLE_ACCOUNTING
{
  /* 0x0000 */ unsigned long StateCount;
  /* 0x0004 */ unsigned long TotalTransitions;
  /* 0x0008 */ unsigned long ResetCount;
  /* 0x000c */ unsigned long AbortCount;
  /* 0x0010 */ unsigned __int64 StartTime;
  /* 0x0018 */ unsigned __int64 PriorIdleTime;
  /* 0x0020 */ enum PPM_IDLE_BUCKET_TIME_TYPE TimeUnit;
  /* 0x0028 */ struct _PROC_IDLE_STATE_ACCOUNTING State[1];
} PROC_IDLE_ACCOUNTING, *PPROC_IDLE_ACCOUNTING; /* size: 0x0408 */

