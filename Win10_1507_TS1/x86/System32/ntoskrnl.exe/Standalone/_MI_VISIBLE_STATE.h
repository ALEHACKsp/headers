typedef struct _MMPTE_HIGHLOW
{
  /* 0x0000 */ unsigned long LowPart;
  /* 0x0004 */ unsigned long HighPart;
} MMPTE_HIGHLOW, *PMMPTE_HIGHLOW; /* size: 0x0008 */

typedef struct _HARDWARE_PTE
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned __int64 Valid : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned __int64 Write : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned __int64 Owner : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned __int64 WriteThrough : 1; /* bit position: 3 */
      /* 0x0000 */ unsigned __int64 CacheDisable : 1; /* bit position: 4 */
      /* 0x0000 */ unsigned __int64 Accessed : 1; /* bit position: 5 */
      /* 0x0000 */ unsigned __int64 Dirty : 1; /* bit position: 6 */
      /* 0x0000 */ unsigned __int64 LargePage : 1; /* bit position: 7 */
      /* 0x0000 */ unsigned __int64 Global : 1; /* bit position: 8 */
      /* 0x0000 */ unsigned __int64 CopyOnWrite : 1; /* bit position: 9 */
      /* 0x0000 */ unsigned __int64 Prototype : 1; /* bit position: 10 */
      /* 0x0000 */ unsigned __int64 reserved0 : 1; /* bit position: 11 */
      /* 0x0000 */ unsigned __int64 PageFrameNumber : 26; /* bit position: 12 */
      /* 0x0000 */ unsigned __int64 reserved1 : 26; /* bit position: 38 */
    }; /* bitfield */
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ unsigned long HighPart;
    }; /* size: 0x0008 */
  }; /* size: 0x0008 */
} HARDWARE_PTE, *PHARDWARE_PTE; /* size: 0x0008 */

typedef struct _MMPTE_HARDWARE
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned __int64 Valid : 1; /* bit position: 0 */
    /* 0x0000 */ unsigned __int64 Dirty1 : 1; /* bit position: 1 */
    /* 0x0000 */ unsigned __int64 Owner : 1; /* bit position: 2 */
    /* 0x0000 */ unsigned __int64 WriteThrough : 1; /* bit position: 3 */
    /* 0x0000 */ unsigned __int64 CacheDisable : 1; /* bit position: 4 */
    /* 0x0000 */ unsigned __int64 Accessed : 1; /* bit position: 5 */
    /* 0x0000 */ unsigned __int64 Dirty : 1; /* bit position: 6 */
    /* 0x0000 */ unsigned __int64 LargePage : 1; /* bit position: 7 */
    /* 0x0000 */ unsigned __int64 Global : 1; /* bit position: 8 */
    /* 0x0000 */ unsigned __int64 CopyOnWrite : 1; /* bit position: 9 */
    /* 0x0000 */ unsigned __int64 Unused : 1; /* bit position: 10 */
    /* 0x0000 */ unsigned __int64 Write : 1; /* bit position: 11 */
    /* 0x0000 */ unsigned __int64 PageFrameNumber : 26; /* bit position: 12 */
    /* 0x0000 */ unsigned __int64 reserved1 : 26; /* bit position: 38 */
  }; /* bitfield */
} MMPTE_HARDWARE, *PMMPTE_HARDWARE; /* size: 0x0008 */

typedef struct _MMPTE_PROTOTYPE
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned __int64 Valid : 1; /* bit position: 0 */
    /* 0x0000 */ unsigned __int64 DemandFillProto : 1; /* bit position: 1 */
    /* 0x0000 */ unsigned __int64 HiberVerifyConverted : 1; /* bit position: 2 */
    /* 0x0000 */ unsigned __int64 Unused1 : 5; /* bit position: 3 */
    /* 0x0000 */ unsigned __int64 ReadOnly : 1; /* bit position: 8 */
    /* 0x0000 */ unsigned __int64 Combined : 1; /* bit position: 9 */
    /* 0x0000 */ unsigned __int64 Prototype : 1; /* bit position: 10 */
    /* 0x0000 */ unsigned __int64 Protection : 5; /* bit position: 11 */
    /* 0x0000 */ unsigned __int64 Unused : 16; /* bit position: 16 */
    /* 0x0000 */ unsigned __int64 ProtoAddress : 32; /* bit position: 32 */
  }; /* bitfield */
} MMPTE_PROTOTYPE, *PMMPTE_PROTOTYPE; /* size: 0x0008 */

typedef struct _MMPTE_SOFTWARE
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned __int64 Valid : 1; /* bit position: 0 */
    /* 0x0000 */ unsigned __int64 PageFileLow : 4; /* bit position: 1 */
    /* 0x0000 */ unsigned __int64 Protection : 5; /* bit position: 5 */
    /* 0x0000 */ unsigned __int64 Prototype : 1; /* bit position: 10 */
    /* 0x0000 */ unsigned __int64 Transition : 1; /* bit position: 11 */
    /* 0x0000 */ unsigned __int64 PageFileReserved : 1; /* bit position: 12 */
    /* 0x0000 */ unsigned __int64 PageFileAllocated : 1; /* bit position: 13 */
    /* 0x0000 */ unsigned __int64 Unused : 18; /* bit position: 14 */
    /* 0x0000 */ unsigned __int64 PageFileHigh : 32; /* bit position: 32 */
  }; /* bitfield */
} MMPTE_SOFTWARE, *PMMPTE_SOFTWARE; /* size: 0x0008 */

typedef struct _MMPTE_TIMESTAMP
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned __int64 MustBeZero : 1; /* bit position: 0 */
    /* 0x0000 */ unsigned __int64 PageFileLow : 4; /* bit position: 1 */
    /* 0x0000 */ unsigned __int64 Protection : 5; /* bit position: 5 */
    /* 0x0000 */ unsigned __int64 Prototype : 1; /* bit position: 10 */
    /* 0x0000 */ unsigned __int64 Transition : 1; /* bit position: 11 */
    /* 0x0000 */ unsigned __int64 Unused : 20; /* bit position: 12 */
    /* 0x0000 */ unsigned __int64 GlobalTimeStamp : 32; /* bit position: 32 */
  }; /* bitfield */
} MMPTE_TIMESTAMP, *PMMPTE_TIMESTAMP; /* size: 0x0008 */

typedef struct _MMPTE_TRANSITION
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned __int64 Valid : 1; /* bit position: 0 */
    /* 0x0000 */ unsigned __int64 Write : 1; /* bit position: 1 */
    /* 0x0000 */ unsigned __int64 Spare : 1; /* bit position: 2 */
    /* 0x0000 */ unsigned __int64 WriteThrough : 1; /* bit position: 3 */
    /* 0x0000 */ unsigned __int64 CacheDisable : 1; /* bit position: 4 */
    /* 0x0000 */ unsigned __int64 Protection : 5; /* bit position: 5 */
    /* 0x0000 */ unsigned __int64 Prototype : 1; /* bit position: 10 */
    /* 0x0000 */ unsigned __int64 Transition : 1; /* bit position: 11 */
    /* 0x0000 */ unsigned __int64 PageFrameNumber : 26; /* bit position: 12 */
    /* 0x0000 */ unsigned __int64 Unused : 26; /* bit position: 38 */
  }; /* bitfield */
} MMPTE_TRANSITION, *PMMPTE_TRANSITION; /* size: 0x0008 */

typedef struct _MMPTE_SUBSECTION
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned __int64 Valid : 1; /* bit position: 0 */
    /* 0x0000 */ unsigned __int64 Unused0 : 4; /* bit position: 1 */
    /* 0x0000 */ unsigned __int64 Protection : 5; /* bit position: 5 */
    /* 0x0000 */ unsigned __int64 Prototype : 1; /* bit position: 10 */
    /* 0x0000 */ unsigned __int64 Unused1 : 21; /* bit position: 11 */
    /* 0x0000 */ unsigned __int64 SubsectionAddress : 32; /* bit position: 32 */
  }; /* bitfield */
} MMPTE_SUBSECTION, *PMMPTE_SUBSECTION; /* size: 0x0008 */

typedef struct _MMPTE_LIST
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned __int64 Valid : 1; /* bit position: 0 */
    /* 0x0000 */ unsigned __int64 OneEntry : 1; /* bit position: 1 */
    /* 0x0000 */ unsigned __int64 filler0 : 8; /* bit position: 2 */
    /* 0x0000 */ unsigned __int64 Prototype : 1; /* bit position: 10 */
    /* 0x0000 */ unsigned __int64 filler1 : 21; /* bit position: 11 */
    /* 0x0000 */ unsigned __int64 NextEntry : 32; /* bit position: 32 */
  }; /* bitfield */
} MMPTE_LIST, *PMMPTE_LIST; /* size: 0x0008 */

typedef struct _MMPTE
{
  union // _TAG_UNNAMED_6
  {
    union
    {
      /* 0x0000 */ unsigned __int64 Long;
      /* 0x0000 */ volatile unsigned __int64 VolatileLong;
      /* 0x0000 */ struct _MMPTE_HIGHLOW HighLow;
      /* 0x0000 */ struct _HARDWARE_PTE Flush;
      /* 0x0000 */ struct _MMPTE_HARDWARE Hard;
      /* 0x0000 */ struct _MMPTE_PROTOTYPE Proto;
      /* 0x0000 */ struct _MMPTE_SOFTWARE Soft;
      /* 0x0000 */ struct _MMPTE_TIMESTAMP TimeStamp;
      /* 0x0000 */ struct _MMPTE_TRANSITION Trans;
      /* 0x0000 */ struct _MMPTE_SUBSECTION Subsect;
      /* 0x0000 */ struct _MMPTE_LIST List;
    }; /* size: 0x0008 */
  } /* size: 0x0008 */ u;
} MMPTE, *PMMPTE; /* size: 0x0008 */

typedef struct _MI_PTE_CHAIN_HEAD
{
  /* 0x0000 */ struct _MMPTE Flink;
  /* 0x0008 */ struct _MMPTE Blink;
  /* 0x0010 */ struct _MMPTE* PteBase;
  /* 0x0014 */ long __PADDING__[1];
} MI_PTE_CHAIN_HEAD, *PMI_PTE_CHAIN_HEAD; /* size: 0x0018 */

typedef struct _RTL_BITMAP
{
  /* 0x0000 */ unsigned long SizeOfBitMap;
  /* 0x0004 */ unsigned long* Buffer;
} RTL_BITMAP, *PRTL_BITMAP; /* size: 0x0008 */

typedef struct _MI_SPECIAL_POOL
{
  /* 0x0000 */ unsigned long Lock;
  /* 0x0008 */ struct _MI_PTE_CHAIN_HEAD Paged;
  /* 0x0020 */ struct _MI_PTE_CHAIN_HEAD NonPaged;
  /* 0x0038 */ volatile unsigned long PagesInUse;
  /* 0x003c */ struct _RTL_BITMAP SpecialPoolPdes;
  /* 0x0044 */ long __PADDING__[1];
} MI_SPECIAL_POOL, *PMI_SPECIAL_POOL; /* size: 0x0048 */

typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

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

typedef struct _MM_PAGED_POOL_INFO
{
  /* 0x0000 */ struct _EX_PUSH_LOCK Lock;
  /* 0x0004 */ struct _RTL_BITMAP PagedPoolAllocationMap;
  /* 0x000c */ struct _MMPTE* FirstPteForPagedPool;
  /* 0x0010 */ unsigned long MaximumSize;
  /* 0x0014 */ unsigned long PagedPoolHint;
  /* 0x0018 */ unsigned long AllocatedPagedPool;
} MM_PAGED_POOL_INFO, *PMM_PAGED_POOL_INFO; /* size: 0x001c */

typedef enum _MI_SYSTEM_VA_TYPE
{
  MiVaUnused = 0,
  MiVaSessionSpace = 1,
  MiVaProcessSpace = 2,
  MiVaBootLoaded = 3,
  MiVaPfnDatabase = 4,
  MiVaNonPagedPool = 5,
  MiVaPagedPool = 6,
  MiVaSpecialPoolPaged = 7,
  MiVaSystemCache = 8,
  MiVaSystemPtes = 9,
  MiVaHal = 10,
  MiVaSessionGlobalSpace = 11,
  MiVaDriverImages = 12,
  MiVaSpecialPoolNonPaged = 13,
  MiVaPagedProtoPool = 14,
  MiVaMaximumType = 15,
  MiVaSystemPtesLarge = 16,
} MI_SYSTEM_VA_TYPE, *PMI_SYSTEM_VA_TYPE;

typedef struct _MI_SYSTEM_PTE_TYPE
{
  /* 0x0000 */ struct _RTL_BITMAP Bitmap;
  /* 0x0008 */ struct _MMPTE* BasePte;
  /* 0x000c */ unsigned long Flags;
  /* 0x0010 */ enum _MI_SYSTEM_VA_TYPE VaType;
  /* 0x0014 */ unsigned long* FailureCount;
  /* 0x0018 */ unsigned long PteFailures;
  union
  {
    /* 0x001c */ unsigned long SpinLock;
    /* 0x001c */ struct _EX_PUSH_LOCK* GlobalPushLock;
  }; /* size: 0x0004 */
  /* 0x0020 */ struct _MMSUPPORT* Vm;
  /* 0x0024 */ volatile unsigned long TotalSystemPtes;
  /* 0x0028 */ unsigned long Hint;
  /* 0x002c */ volatile struct _MI_CACHED_PTES* CachedPtes;
  /* 0x0030 */ volatile unsigned long TotalFreeSystemPtes;
} MI_SYSTEM_PTE_TYPE, *PMI_SYSTEM_PTE_TYPE; /* size: 0x0034 */

typedef struct _MMSUPPORT_FLAGS
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned char WorkingSetType : 3; /* bit position: 0 */
    /* 0x0000 */ unsigned char ForceCredits : 3; /* bit position: 3 */
    /* 0x0000 */ unsigned char MaximumWorkingSetHard : 1; /* bit position: 6 */
    /* 0x0000 */ unsigned char MinimumWorkingSetHard : 1; /* bit position: 7 */
  }; /* bitfield */
  struct /* bitfield */
  {
    /* 0x0001 */ unsigned char SessionMaster : 1; /* bit position: 0 */
    /* 0x0001 */ unsigned char TrimmerState : 2; /* bit position: 1 */
    /* 0x0001 */ unsigned char Reserved : 1; /* bit position: 3 */
    /* 0x0001 */ unsigned char PageStealers : 4; /* bit position: 4 */
  }; /* bitfield */
  /* 0x0002 */ unsigned char MemoryPriority;
  struct /* bitfield */
  {
    /* 0x0003 */ unsigned char WsleDeleted : 1; /* bit position: 0 */
    /* 0x0003 */ unsigned char VmExiting : 1; /* bit position: 1 */
    /* 0x0003 */ unsigned char ExpansionFailed : 1; /* bit position: 2 */
    /* 0x0003 */ unsigned char SvmEnabled : 1; /* bit position: 3 */
    /* 0x0003 */ unsigned char ForceAge : 1; /* bit position: 4 */
    /* 0x0003 */ unsigned char NewMaximum : 1; /* bit position: 5 */
    /* 0x0003 */ unsigned char CommitReleaseState : 2; /* bit position: 6 */
  }; /* bitfield */
} MMSUPPORT_FLAGS, *PMMSUPPORT_FLAGS; /* size: 0x0004 */

typedef struct _MMSUPPORT
{
  /* 0x0000 */ volatile long WorkingSetLock;
  /* 0x0004 */ struct _KGATE* ExitOutswapGate;
  /* 0x0008 */ void* AccessLog;
  /* 0x000c */ struct _LIST_ENTRY WorkingSetExpansionLinks;
  /* 0x0014 */ unsigned long AgeDistribution[7];
  /* 0x0030 */ unsigned long MinimumWorkingSetSize;
  /* 0x0034 */ unsigned long WorkingSetLeafSize;
  /* 0x0038 */ unsigned long WorkingSetLeafPrivateSize;
  /* 0x003c */ unsigned long WorkingSetSize;
  /* 0x0040 */ unsigned long WorkingSetPrivateSize;
  /* 0x0044 */ unsigned long MaximumWorkingSetSize;
  /* 0x0048 */ unsigned long ChargedWslePages;
  /* 0x004c */ unsigned long ActualWslePages;
  /* 0x0050 */ unsigned long WorkingSetSizeOverhead;
  /* 0x0054 */ unsigned long PeakWorkingSetSize;
  /* 0x0058 */ unsigned long HardFaultCount;
  /* 0x005c */ struct _MMWSL* VmWorkingSetList;
  /* 0x0060 */ unsigned short NextPageColor;
  /* 0x0062 */ unsigned short LastTrimStamp;
  /* 0x0064 */ unsigned long PageFaultCount;
  /* 0x0068 */ unsigned long TrimmedPageCount;
  /* 0x006c */ unsigned long ForceTrimPages;
  /* 0x0070 */ struct _MMSUPPORT_FLAGS Flags;
  /* 0x0074 */ unsigned long ReleasedCommitDebt;
  /* 0x0078 */ void* WsSwapSupport;
  /* 0x007c */ void* CommitReAcquireFailSupport;
} MMSUPPORT, *PMMSUPPORT; /* size: 0x0080 */

typedef struct _SYSPTES_HEADER
{
  /* 0x0000 */ struct _LIST_ENTRY ListHead[16];
  /* 0x0080 */ unsigned long Count;
  /* 0x0084 */ unsigned long NumberOfEntries;
  /* 0x0088 */ unsigned long NumberOfEntriesPeak;
} SYSPTES_HEADER, *PSYSPTES_HEADER; /* size: 0x008c */

typedef struct _MI_VISIBLE_STATE
{
  /* 0x0000 */ struct _MI_SPECIAL_POOL SpecialPool;
  /* 0x0048 */ struct _LIST_ENTRY SessionWsList;
  /* 0x0050 */ struct _RTL_BITMAP* SessionIdBitmap;
  /* 0x0054 */ struct _MM_PAGED_POOL_INFO PagedPoolInfo;
  /* 0x0070 */ unsigned long MaximumNonPagedPoolInPages;
  /* 0x0074 */ unsigned long SizeOfPagedPoolInPages;
  /* 0x0078 */ struct _MI_SYSTEM_PTE_TYPE SystemPteInfo;
  /* 0x00ac */ volatile unsigned long NonPagedPoolCommit;
  /* 0x00b0 */ volatile unsigned long BootCommit;
  /* 0x00b4 */ volatile unsigned long MdlPagesAllocated;
  /* 0x00b8 */ volatile unsigned long SystemPageTableCommit;
  /* 0x00bc */ volatile unsigned long SpecialPagesInUse;
  /* 0x00c0 */ volatile unsigned long WsOverheadPages;
  /* 0x00c4 */ volatile unsigned long VadBitmapPages;
  /* 0x00c8 */ volatile unsigned long ProcessCommit;
  /* 0x00cc */ volatile unsigned long SharedCommit;
  /* 0x00d0 */ volatile long DriverCommit;
  /* 0x0100 */ struct _MMSUPPORT SystemWs[3];
  /* 0x0280 */ unsigned long MapCacheFailures;
  /* 0x0284 */ unsigned long LastUnloadedDriver;
  /* 0x0288 */ struct _UNLOADED_DRIVERS* UnloadedDrivers;
  /* 0x028c */ unsigned long PagefileHashPages;
  /* 0x0290 */ struct _SYSPTES_HEADER PteHeader;
  /* 0x031c */ struct _MI_SPECIAL_POOL* SessionSpecialPool;
  /* 0x0320 */ unsigned long SystemVaTypeCount[15];
  /* 0x035c */ unsigned char SystemVaType[1024];
  /* 0x075c */ unsigned long SystemVaTypeCountFailures[15];
  /* 0x0798 */ unsigned long SystemVaTypeCountLimit[15];
  /* 0x07d4 */ unsigned long SystemVaTypeCountPeak[15];
  /* 0x0810 */ unsigned long SystemAvailableVa;
  /* 0x0814 */ long __PADDING__[11];
} MI_VISIBLE_STATE, *PMI_VISIBLE_STATE; /* size: 0x0840 */

