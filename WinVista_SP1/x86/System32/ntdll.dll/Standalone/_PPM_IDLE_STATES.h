typedef struct _PPM_IDLE_STATE
{
  /* 0x0000 */ void* IdleHandler /* function */;
  /* 0x0004 */ void* Context;
  /* 0x0008 */ unsigned long Latency;
  /* 0x000c */ unsigned long Power;
  /* 0x0010 */ unsigned long TimeCheck;
  /* 0x0014 */ unsigned long StateFlags;
  /* 0x0018 */ unsigned char PromotePercent;
  /* 0x0019 */ unsigned char DemotePercent;
  /* 0x001a */ unsigned char PromotePercentBase;
  /* 0x001b */ unsigned char DemotePercentBase;
  /* 0x001c */ unsigned char StateType;
  /* 0x001d */ char __PADDING__[3];
} PPM_IDLE_STATE, *PPPM_IDLE_STATE; /* size: 0x0020 */

typedef struct _PPM_IDLE_STATES
{
  /* 0x0000 */ unsigned long Type;
  /* 0x0004 */ unsigned long Count;
  union // _TAG_UNNAMED_16
  {
    union
    {
      /* 0x0008 */ unsigned long AsULONG;
      struct /* bitfield */
      {
        /* 0x0008 */ unsigned long AllowScaling : 1; /* bit position: 0 */
        /* 0x0008 */ unsigned long Disabled : 1; /* bit position: 1 */
        /* 0x0008 */ unsigned long Hypervisor : 2; /* bit position: 2 */
        /* 0x0008 */ unsigned long HvMaxCState : 4; /* bit position: 4 */
        /* 0x0008 */ unsigned long Reserved : 24; /* bit position: 8 */
      }; /* bitfield */
    }; /* size: 0x0004 */
  } /* size: 0x0004 */ Flags;
  /* 0x000c */ unsigned long TargetState;
  /* 0x0010 */ unsigned long ActualState;
  /* 0x0014 */ unsigned long OldState;
  /* 0x0018 */ unsigned long TargetProcessors;
  /* 0x001c */ struct _PPM_IDLE_STATE State[1];
} PPM_IDLE_STATES, *PPPM_IDLE_STATES; /* size: 0x003c */

