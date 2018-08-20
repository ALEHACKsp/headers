typedef union _MI_FLAGS
{
  union
  {
    /* 0x0000 */ long EntireFlags;
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long VerifierEnabled : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned long KernelVerifierEnabled : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned long LargePageKernel : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned long StopOn4d : 1; /* bit position: 3 */
      /* 0x0000 */ unsigned long InitializationPhase : 2; /* bit position: 4 */
      /* 0x0000 */ unsigned long PageKernelStacks : 1; /* bit position: 6 */
      /* 0x0000 */ unsigned long CheckZeroPages : 1; /* bit position: 7 */
      /* 0x0000 */ unsigned long ProcessorPrewalks : 1; /* bit position: 8 */
      /* 0x0000 */ unsigned long ProcessorPostwalks : 1; /* bit position: 9 */
      /* 0x0000 */ unsigned long CoverageBuild : 1; /* bit position: 10 */
      /* 0x0000 */ unsigned long AccessBitReplacementDisabled : 1; /* bit position: 11 */
      /* 0x0000 */ unsigned long CheckExecute : 1; /* bit position: 12 */
      /* 0x0000 */ unsigned long ProtectedPagesEnabled : 1; /* bit position: 13 */
      /* 0x0000 */ unsigned long SecureRelocations : 1; /* bit position: 14 */
      /* 0x0000 */ unsigned long StrongPageIdentity : 1; /* bit position: 15 */
      /* 0x0000 */ unsigned long StrongCodeGuarantees : 1; /* bit position: 16 */
      /* 0x0000 */ unsigned long HardCodeGuarantees : 1; /* bit position: 17 */
      /* 0x0000 */ unsigned long ExecutePagePrivilegeRequired : 1; /* bit position: 18 */
      /* 0x0000 */ unsigned long SecureKernelCfgEnabled : 1; /* bit position: 19 */
      /* 0x0000 */ unsigned long FullHvci : 1; /* bit position: 20 */
      /* 0x0000 */ unsigned long SlatKernelCodeProtected : 1; /* bit position: 21 */
      /* 0x0000 */ unsigned long BootDebuggerActive : 1; /* bit position: 22 */
    }; /* bitfield */
  }; /* size: 0x0004 */
} MI_FLAGS, *PMI_FLAGS; /* size: 0x0004 */

typedef struct _EXCEPTION_REGISTRATION_RECORD
{
  /* 0x0000 */ struct _EXCEPTION_REGISTRATION_RECORD* Next;
  /* 0x0004 */ void* Handler /* function */;
} EXCEPTION_REGISTRATION_RECORD, *PEXCEPTION_REGISTRATION_RECORD; /* size: 0x0008 */

typedef struct _MI_TRIAGE_DUMP_DATA
{
  /* 0x0000 */ unsigned long BadPageCount;
  /* 0x0004 */ long BadPagesDetected;
  /* 0x0008 */ long ZeroedPageSingleBitErrorsDetected;
  /* 0x000c */ long ScrubPasses;
  /* 0x0010 */ long ScrubBadPagesFound;
  /* 0x0014 */ unsigned long PageHashErrors;
  /* 0x0018 */ unsigned __int64 FeatureBits;
  /* 0x0020 */ unsigned long TimeZoneId;
  /* 0x0024 */ union _MI_FLAGS Flags;
  /* 0x0028 */ void* VsmConnection;
  /* 0x002c */ struct _EXCEPTION_REGISTRATION_RECORD* ExceptionChainTerminator;
  /* 0x0030 */ struct _EXCEPTION_REGISTRATION_RECORD ExceptionChainTerminatorRecord;
} MI_TRIAGE_DUMP_DATA, *PMI_TRIAGE_DUMP_DATA; /* size: 0x0038 */

