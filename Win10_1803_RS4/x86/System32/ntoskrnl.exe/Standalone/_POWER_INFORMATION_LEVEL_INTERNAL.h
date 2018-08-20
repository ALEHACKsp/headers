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
  PowerInternalExternalMonitorConnected = 23,
  PowerInternalHighPrecisionBrightnessSettings = 24,
  PowerInternalWinrtScreenToggle = 25,
  PowerInternalPpmQosDisable = 26,
  PowerInternalTransitionCheckpoint = 27,
  PowerInternalInputControllerState = 28,
  PowerInternalFirmwareResetReason = 29,
  PowerInternalPpmSchedulerQosSupport = 30,
  PowerInternalBootStatGet = 31,
  PowerInternalBootStatSet = 32,
  PowerInternalCallHasNotReturnedWatchdog = 33,
  PowerInternalBootStatCheckIntegrity = 34,
  PowerInternalBootStatRestoreDefaults = 35,
  PowerInternalHostEsStateUpdate = 36,
  PowerInternalGetPowerActionState = 37,
  PowerInternalBootStatUnlock = 38,
  PowerInternalWakeOnVoiceState = 39,
  PowerInternalDeepSleepBlock = 40,
  PowerInternalIsPoFxDevice = 41,
  PowerInformationInternalMaximum = 42,
} POWER_INFORMATION_LEVEL_INTERNAL, *PPOWER_INFORMATION_LEVEL_INTERNAL;

