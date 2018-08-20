typedef enum _POWER_INFORMATION_LEVEL_INTERNAL
{
  PowerInternalAcpiInterfaceRegister = 0,
  PowerInternalS0LowPowerIdleInfo = 1,
  PowerInternalReapplyBrightnessSettings = 2,
  PowerInternalUserAbsencePrediction = 3,
  PowerInternalUserAbsencePredictionCapability = 4,
  PowerInternalPoProcessorLatencyHint = 5,
  PowerInternalStandbyNetworkRequest = 6,
  PowerInternalDirtyTransitionInformation = 7,
  PowerInternalSetBackgroundTaskState = 8,
  PowerInternalTtmOpenTerminal = 9,
  PowerInformationInternalTtmFirst = 9,
  PowerInternalTtmCreateTerminal = 10,
  PowerInternalTtmEvacuateDevices = 11,
  PowerInternalTtmCreateTerminalEventQueue = 12,
  PowerInternalTtmGetTerminalEvent = 13,
  PowerInternalTtmSetDefaultDeviceAssignment = 14,
  PowerInternalTtmAssignDevice = 15,
  PowerInternalTtmSetDisplayState = 16,
  PowerInternalTtmSetDisplayTimeouts = 17,
  PowerInformationInternalTtmLast = 17,
  PowerInternalBootSessionStandbyActivationInformation = 18,
  PowerInternalSessionPowerState = 19,
  PowerInternalSessionTerminalInput = 20,
  PowerInternalSetWatchdog = 21,
  PowerInternalPhysicalPowerButtonPressInfoAtBoot = 22,
  PowerInformationInternalMaximum = 23,
} POWER_INFORMATION_LEVEL_INTERNAL, *PPOWER_INFORMATION_LEVEL_INTERNAL;

