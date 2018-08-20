typedef struct _HAL_INTEL_ENLIGHTENMENT_INFORMATION
{
  /* 0x0000 */ unsigned long Enlightenments;
  /* 0x0004 */ unsigned long HypervisorConnected;
  /* 0x0008 */ void* EndOfInterrupt /* function */;
  /* 0x000c */ void* ApicWriteIcr /* function */;
  /* 0x0010 */ unsigned long Reserved0;
  /* 0x0014 */ unsigned long SpinCountMask;
  /* 0x0018 */ void* LongSpinWait /* function */;
  /* 0x001c */ void* GetReferenceTime /* function */;
  /* 0x0020 */ void* SetSystemSleepProperty /* function */;
  /* 0x0024 */ void* EnterSleepState /* function */;
  /* 0x0028 */ void* NotifyDebugDeviceAvailable /* function */;
  /* 0x002c */ void* MapDeviceInterrupt /* function */;
  /* 0x0030 */ void* UnmapDeviceInterrupt /* function */;
  /* 0x0034 */ void* SetHpetConfig /* function */;
  /* 0x0038 */ void* NotifyHpetEnabled /* function */;
  /* 0x003c */ void* QueryAssociatedProcessors /* function */;
  /* 0x0040 */ void* ReadMultipleMsr /* function */;
  /* 0x0044 */ void* WriteMultipleMsr /* function */;
  /* 0x0048 */ void* ReadCpuid /* function */;
  /* 0x004c */ void* LpWritebackInvalidate /* function */;
  /* 0x0050 */ void* GetMachineCheckContext /* function */;
  /* 0x0054 */ void* SuspendPartition /* function */;
  /* 0x0058 */ void* ResumePartition /* function */;
  /* 0x005c */ void* SetSystemMachineCheckProperty /* function */;
  /* 0x0060 */ void* WheaErrorNotification /* function */;
  /* 0x0064 */ void* GetProcessorIndexFromVpIndex /* function */;
  /* 0x0068 */ void* SyntheticClusterIpi /* function */;
  /* 0x006c */ void* VpStartEnabled /* function */;
  /* 0x0070 */ void* StartVirtualProcessor /* function */;
  /* 0x0074 */ void* GetVpIndexFromApicId /* function */;
  /* 0x0078 */ void* IumEfiRuntimeService /* function */;
  /* 0x007c */ void* SvmGetSystemCapabilities /* function */;
  /* 0x0080 */ void* SvmGetDeviceCapabilities /* function */;
  /* 0x0084 */ void* SvmCreatePasidSpace /* function */;
  /* 0x0088 */ void* SvmSetPasidAddressSpace /* function */;
  /* 0x008c */ void* SvmFlushPasid /* function */;
  /* 0x0090 */ void* SvmAttachPasidSpace /* function */;
  /* 0x0094 */ void* SvmDetachPasidSpace /* function */;
  /* 0x0098 */ void* SvmEnablePasid /* function */;
  /* 0x009c */ void* SvmDisablePasid /* function */;
  /* 0x00a0 */ void* SvmAcknowledgePageRequest /* function */;
  /* 0x00a4 */ void* SvmCreatePrQueue /* function */;
  /* 0x00a8 */ void* SvmDeletePrQueue /* function */;
  /* 0x00ac */ void* SvmClearPrqStalled /* function */;
  /* 0x00b0 */ void* SvmSetDeviceEnabled /* function */;
} HAL_INTEL_ENLIGHTENMENT_INFORMATION, *PHAL_INTEL_ENLIGHTENMENT_INFORMATION; /* size: 0x00b4 */

