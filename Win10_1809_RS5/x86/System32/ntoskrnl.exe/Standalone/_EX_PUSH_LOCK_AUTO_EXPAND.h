typedef struct _EX_PUSH_LOCK
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long Locked : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned long Waiting : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned long Waking : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned long MultipleShared : 1; /* bit position: 3 */
      /* 0x0000 */ unsigned long Shared : 28; /* bit position: 4 */
    }; /* bitfield */
    /* 0x0000 */ unsigned long Value;
    /* 0x0000 */ void* Ptr;
  }; /* size: 0x0004 */
} EX_PUSH_LOCK, *PEX_PUSH_LOCK; /* size: 0x0004 */

typedef struct _EX_PUSH_LOCK_AUTO_EXPAND_STATE
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long Expanded : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned long Transitioning : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned long Pageable : 1; /* bit position: 2 */
    }; /* bitfield */
    /* 0x0000 */ unsigned long Value;
  }; /* size: 0x0004 */
} EX_PUSH_LOCK_AUTO_EXPAND_STATE, *PEX_PUSH_LOCK_AUTO_EXPAND_STATE; /* size: 0x0004 */

typedef struct _EX_PUSH_LOCK_AUTO_EXPAND
{
  /* 0x0000 */ struct _EX_PUSH_LOCK LocalLock;
  /* 0x0004 */ struct _EX_PUSH_LOCK_AUTO_EXPAND_STATE State;
  /* 0x0008 */ unsigned long Stats;
} EX_PUSH_LOCK_AUTO_EXPAND, *PEX_PUSH_LOCK_AUTO_EXPAND; /* size: 0x000c */

