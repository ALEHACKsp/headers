typedef enum _JOBOBJECTINFOCLASS
{
  JobObjectBasicAccountingInformation = 1,
  JobObjectBasicLimitInformation = 2,
  JobObjectBasicProcessIdList = 3,
  JobObjectBasicUIRestrictions = 4,
  JobObjectSecurityLimitInformation = 5,
  JobObjectEndOfJobTimeInformation = 6,
  JobObjectAssociateCompletionPortInformation = 7,
  JobObjectBasicAndIoAccountingInformation = 8,
  JobObjectExtendedLimitInformation = 9,
  JobObjectJobSetInformation = 10,
  JobObjectGroupInformation = 11,
  JobObjectNotificationLimitInformation = 12,
  JobObjectLimitViolationInformation = 13,
  JobObjectGroupInformationEx = 14,
  JobObjectCpuRateControlInformation = 15,
  JobObjectCompletionFilter = 16,
  JobObjectCompletionCounter = 17,
  JobObjectFreezeInformation = 18,
  JobObjectExtendedAccountingInformation = 19,
  JobObjectWakeInformation = 20,
  JobObjectBackgroundInformation = 21,
  JobObjectSchedulingRankBiasInformation = 22,
  JobObjectTimerVirtualizationInformation = 23,
  JobObjectCycleTimeNotification = 24,
  JobObjectClearEvent = 25,
  JobObjectInterferenceInformation = 26,
  JobObjectClearPeakJobMemoryUsed = 27,
  JobObjectMemoryUsageInformation = 28,
  JobObjectSharedCommit = 29,
  JobObjectContainerId = 30,
  JobObjectIoRateControlInformation = 31,
  JobObjectReserved1Information = 18,
  JobObjectReserved2Information = 19,
  JobObjectReserved3Information = 20,
  JobObjectReserved4Information = 21,
  JobObjectReserved5Information = 22,
  JobObjectReserved6Information = 23,
  JobObjectReserved7Information = 24,
  JobObjectReserved8Information = 25,
  JobObjectReserved9Information = 26,
  JobObjectReserved10Information = 27,
  JobObjectReserved11Information = 28,
  JobObjectReserved12Information = 29,
  JobObjectReserved13Information = 30,
  JobObjectReserved14Information = 31,
  JobObjectNetRateControlInformation = 32,
  JobObjectNotificationLimitInformation2 = 33,
  JobObjectLimitViolationInformation2 = 34,
  JobObjectCreateSilo = 35,
  JobObjectSiloBasicInformation = 36,
  JobObjectSiloRootDirectory = 37,
  JobObjectServerSiloBasicInformation = 38,
  JobObjectServerSiloServiceSessionId = 39,
  JobObjectServerSiloInitialize = 40,
  JobObjectServerSiloRunningState = 41,
  MaxJobObjectInfoClass = 42,
} JOBOBJECTINFOCLASS, *PJOBOBJECTINFOCLASS;

