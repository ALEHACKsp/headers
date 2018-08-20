typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

typedef enum _PLUGPLAY_EVENT_CATEGORY
{
  HardwareProfileChangeEvent = 0,
  TargetDeviceChangeEvent = 1,
  DeviceClassChangeEvent = 2,
  CustomDeviceEvent = 3,
  DeviceInstallEvent = 4,
  DeviceArrivalEvent = 5,
  PowerEvent = 6,
  VetoEvent = 7,
  BlockedDriverEvent = 8,
  InvalidIDEvent = 9,
  PowerSettingChange = 10,
  MaxPlugEventCategory = 11,
} PLUGPLAY_EVENT_CATEGORY, *PPLUGPLAY_EVENT_CATEGORY;

typedef enum _PNP_VETO_TYPE
{
  PNP_VetoTypeUnknown = 0,
  PNP_VetoLegacyDevice = 1,
  PNP_VetoPendingClose = 2,
  PNP_VetoWindowsApp = 3,
  PNP_VetoWindowsService = 4,
  PNP_VetoOutstandingOpen = 5,
  PNP_VetoDevice = 6,
  PNP_VetoDriver = 7,
  PNP_VetoIllegalDeviceRequest = 8,
  PNP_VetoInsufficientPower = 9,
  PNP_VetoNonDisableable = 10,
  PNP_VetoLegacyDriver = 11,
  PNP_VetoInsufficientRights = 12,
} PNP_VETO_TYPE, *PPNP_VETO_TYPE;

typedef struct _PLUGPLAY_EVENT_BLOCK
{
  /* 0x0000 */ struct _GUID EventGuid;
  /* 0x0010 */ enum _PLUGPLAY_EVENT_CATEGORY EventCategory;
  /* 0x0018 */ unsigned long* Result;
  /* 0x0020 */ unsigned long Flags;
  /* 0x0024 */ unsigned long TotalSize;
  /* 0x0028 */ void* DeviceObject;
  union // _TAG_UNNAMED_167
  {
    union
    {
      struct // _TAG_UNNAMED_168
      {
        /* 0x0030 */ struct _GUID ClassGuid;
        /* 0x0040 */ wchar_t SymbolicLinkName[1];
        /* 0x0042 */ char __PADDING__[2];
      } /* size: 0x0014 */ DeviceClass;
      struct // _TAG_UNNAMED_169
      {
        /* 0x0030 */ wchar_t DeviceIds[1];
      } /* size: 0x0002 */ TargetDevice;
      struct // _TAG_UNNAMED_170
      {
        /* 0x0030 */ wchar_t DeviceId[1];
      } /* size: 0x0002 */ InstallDevice;
      struct // _TAG_UNNAMED_171
      {
        /* 0x0030 */ void* NotificationStructure;
        /* 0x0038 */ wchar_t DeviceIds[1];
        /* 0x003a */ char __PADDING__[6];
      } /* size: 0x0010 */ CustomNotification;
      struct // _TAG_UNNAMED_172
      {
        /* 0x0030 */ void* Notification;
      } /* size: 0x0008 */ ProfileNotification;
      struct // _TAG_UNNAMED_173
      {
        /* 0x0030 */ unsigned long NotificationCode;
        /* 0x0034 */ unsigned long NotificationData;
      } /* size: 0x0008 */ PowerNotification;
      struct // _TAG_UNNAMED_174
      {
        /* 0x0030 */ enum _PNP_VETO_TYPE VetoType;
        /* 0x0034 */ wchar_t DeviceIdVetoNameBuffer[1];
        /* 0x0036 */ char __PADDING__[2];
      } /* size: 0x0008 */ VetoNotification;
      struct // _TAG_UNNAMED_175
      {
        /* 0x0030 */ struct _GUID BlockedDriverGuid;
      } /* size: 0x0010 */ BlockedDriverNotification;
      struct // _TAG_UNNAMED_176
      {
        /* 0x0030 */ wchar_t ParentId[1];
      } /* size: 0x0002 */ InvalidIDNotification;
      struct // _TAG_UNNAMED_177
      {
        /* 0x0030 */ struct _GUID PowerSettingGuid;
        /* 0x0040 */ unsigned char PowerSettingChanged;
        /* 0x0044 */ unsigned long DataLength;
        /* 0x0048 */ unsigned char Data[1];
        /* 0x0049 */ char __PADDING__[3];
      } /* size: 0x001c */ PowerSettingNotification;
    }; /* size: 0x001c */
  } /* size: 0x0020 */ u;
} PLUGPLAY_EVENT_BLOCK, *PPLUGPLAY_EVENT_BLOCK; /* size: 0x0050 */

