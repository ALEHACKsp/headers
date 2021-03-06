typedef struct _PROC_PERF_CONSTRAINT
{
  /* 0x0000 */ struct _KPRCB* Prcb;
  /* 0x0008 */ unsigned __int64 PerfContext;
  /* 0x0010 */ unsigned long ProcCap;
  /* 0x0014 */ unsigned long ProcFloor;
  /* 0x0018 */ unsigned long PlatformCap;
  /* 0x001c */ unsigned long ThermalCap;
  /* 0x0020 */ unsigned long LimitReasons;
  /* 0x0028 */ unsigned __int64 PlatformCapStartTime;
  /* 0x0030 */ unsigned long TargetPercent;
  /* 0x0034 */ unsigned long SelectedPercent;
  /* 0x0038 */ unsigned long SelectedFrequency;
  /* 0x003c */ unsigned long PreviousFrequency;
  /* 0x0040 */ unsigned long PreviousPercent;
  /* 0x0044 */ unsigned long LatestFrequencyPercent;
  /* 0x0048 */ unsigned __int64 SelectedState;
  /* 0x0050 */ unsigned char Force;
  /* 0x0051 */ char __PADDING__[7];
} PROC_PERF_CONSTRAINT, *PPROC_PERF_CONSTRAINT; /* size: 0x0058 */

