typedef enum _PS_MITIGATION_OPTION
{
  PS_MITIGATION_OPTION_NX = 0,
  PS_MITIGATION_OPTION_SEHOP = 1,
  PS_MITIGATION_OPTION_FORCE_RELOCATE_IMAGES = 2,
  PS_MITIGATION_OPTION_HEAP_TERMINATE = 3,
  PS_MITIGATION_OPTION_BOTTOM_UP_ASLR = 4,
  PS_MITIGATION_OPTION_HIGH_ENTROPY_ASLR = 5,
  PS_MITIGATION_OPTION_STRICT_HANDLE_CHECKS = 6,
  PS_MITIGATION_OPTION_WIN32K_SYSTEM_CALL_DISABLE = 7,
  PS_MITIGATION_OPTION_EXTENSION_POINT_DISABLE = 8,
  PS_MITIGATION_OPTION_PROHIBIT_DYNAMIC_CODE = 9,
  PS_MITIGATION_OPTION_CONTROL_FLOW_GUARD = 10,
  PS_MITIGATION_OPTION_BLOCK_NON_MICROSOFT_BINARIES = 11,
  PS_MITIGATION_OPTION_FONT_DISABLE = 12,
  PS_MITIGATION_OPTION_IMAGE_LOAD_NO_REMOTE = 13,
  PS_MITIGATION_OPTION_IMAGE_LOAD_NO_LOW_LABEL = 14,
  PS_MITIGATION_OPTION_IMAGE_LOAD_PREFER_SYSTEM32 = 15,
  PS_MITIGATION_OPTION_RETURN_FLOW_GUARD = 16,
  PS_MITIGATION_OPTION_LOADER_INTEGRITY_CONTINUITY = 17,
  PS_MITIGATION_OPTION_STRICT_CONTROL_FLOW_GUARD = 18,
  PS_MITIGATION_OPTION_RESTRICT_SET_THREAD_CONTEXT = 19,
  PS_MITIGATION_OPTION_ROP_STACKPIVOT = 20,
  PS_MITIGATION_OPTION_ROP_CALLER_CHECK = 21,
  PS_MITIGATION_OPTION_ROP_SIMEXEC = 22,
  PS_MITIGATION_OPTION_EXPORT_ADDRESS_FILTER = 23,
  PS_MITIGATION_OPTION_EXPORT_ADDRESS_FILTER_PLUS = 24,
  PS_MITIGATION_OPTION_RESTRICT_CHILD_PROCESS_CREATION = 25,
  PS_MITIGATION_OPTION_IMPORT_ADDRESS_FILTER = 26,
  PS_MITIGATION_OPTION_MODULE_TAMPERING_PROTECTION = 27,
} PS_MITIGATION_OPTION, *PPS_MITIGATION_OPTION;

