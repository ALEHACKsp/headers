typedef enum _PS_ATTRIBUTE_NUM
{
  PsAttributeParentProcess = 0,
  PsAttributeDebugObject = 1,
  PsAttributeToken = 2,
  PsAttributeClientId = 3,
  PsAttributeTebAddress = 4,
  PsAttributeImageName = 5,
  PsAttributeImageInfo = 6,
  PsAttributeMemoryReserve = 7,
  PsAttributePriorityClass = 8,
  PsAttributeErrorMode = 9,
  PsAttributeStdHandleInfo = 10,
  PsAttributeHandleList = 11,
  PsAttributeGroupAffinity = 12,
  PsAttributePreferredNode = 13,
  PsAttributeIdealProcessor = 14,
  PsAttributeUmsThread = 15,
  PsAttributeMitigationOptions = 16,
  PsAttributeProtectionLevel = 17,
  PsAttributeSecureProcess = 18,
  PsAttributeJobList = 19,
  PsAttributeMax = 20,
} PS_ATTRIBUTE_NUM, *PPS_ATTRIBUTE_NUM;

