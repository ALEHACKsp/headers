typedef enum _KINTERRUPT_POLARITY
{
  InterruptPolarityUnknown = 0,
  InterruptActiveHigh = 1,
  InterruptRisingEdge = 1,
  InterruptActiveLow = 2,
  InterruptFallingEdge = 2,
  InterruptActiveBoth = 3,
} KINTERRUPT_POLARITY, *PKINTERRUPT_POLARITY;

typedef enum _KINTERRUPT_MODE
{
  LevelSensitive = 0,
  Latched = 1,
} KINTERRUPT_MODE, *PKINTERRUPT_MODE;

typedef struct _INTERRUPT_LINE
{
  /* 0x0000 */ unsigned long UnitId;
  /* 0x0004 */ long Line;
} INTERRUPT_LINE, *PINTERRUPT_LINE; /* size: 0x0008 */

typedef enum _INTERRUPT_TARGET_TYPE
{
  InterruptTargetInvalid = 0,
  InterruptTargetAllIncludingSelf = 1,
  InterruptTargetAllExcludingSelf = 2,
  InterruptTargetSelfOnly = 3,
  InterruptTargetPhysical = 4,
  InterruptTargetLogicalFlat = 5,
  InterruptTargetLogicalClustered = 6,
  InterruptTargetRemapIndex = 7,
  InterruptTargetHypervisor = 8,
} INTERRUPT_TARGET_TYPE, *PINTERRUPT_TARGET_TYPE;

typedef struct _INTERRUPT_TARGET
{
  /* 0x0000 */ enum _INTERRUPT_TARGET_TYPE Target;
  union
  {
    /* 0x0004 */ unsigned long PhysicalTarget;
    /* 0x0004 */ unsigned long LogicalFlatTarget;
    /* 0x0004 */ unsigned long RemapIndex;
    struct
    {
      /* 0x0004 */ unsigned long ClusterId;
      /* 0x0008 */ unsigned long ClusterMask;
    }; /* size: 0x0008 */
    struct // _TAG_UNNAMED_73
    {
      /* 0x0004 */ unsigned long Low32;
      /* 0x0008 */ unsigned long High32;
    } /* size: 0x0008 */ HypervisorTarget;
  }; /* size: 0x0008 */
} INTERRUPT_TARGET, *PINTERRUPT_TARGET; /* size: 0x000c */

typedef struct _INTERRUPT_LINE_STATE
{
  /* 0x0000 */ enum _KINTERRUPT_POLARITY Polarity;
  /* 0x0004 */ enum _KINTERRUPT_MODE TriggerMode;
  /* 0x0008 */ unsigned long Flags;
  /* 0x000c */ struct _INTERRUPT_LINE Routing;
  /* 0x0014 */ struct _INTERRUPT_TARGET ProcessorTarget;
  /* 0x0020 */ unsigned long Vector;
  /* 0x0024 */ unsigned long Priority;
} INTERRUPT_LINE_STATE, *PINTERRUPT_LINE_STATE; /* size: 0x0028 */

