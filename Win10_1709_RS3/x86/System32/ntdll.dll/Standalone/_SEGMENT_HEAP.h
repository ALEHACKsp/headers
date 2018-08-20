typedef struct _HEAP_RUNTIME_MEMORY_STATS
{
  /* 0x0000 */ volatile unsigned long TotalReservedPages;
  /* 0x0004 */ volatile unsigned long TotalCommittedPages;
  /* 0x0008 */ unsigned long FreeCommittedPages;
  /* 0x000c */ unsigned long LfhFreeCommittedPages;
} HEAP_RUNTIME_MEMORY_STATS, *PHEAP_RUNTIME_MEMORY_STATS; /* size: 0x0010 */

typedef struct _RTL_SRWLOCK
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
} RTL_SRWLOCK, *PRTL_SRWLOCK; /* size: 0x0004 */

typedef struct _RTL_RB_TREE
{
  /* 0x0000 */ struct _RTL_BALANCED_NODE* Root;
  union
  {
    /* 0x0004 */ unsigned char Encoded : 1; /* bit position: 0 */
    /* 0x0004 */ struct _RTL_BALANCED_NODE* Min;
  }; /* size: 0x0004 */
} RTL_RB_TREE, *PRTL_RB_TREE; /* size: 0x0008 */

typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

typedef struct _HEAP_SEG_CONTEXT
{
  /* 0x0000 */ unsigned long SegmentMask;
  /* 0x0004 */ unsigned char UnitShift;
  /* 0x0005 */ unsigned char PagesPerUnitShift;
  /* 0x0006 */ unsigned char FirstDescriptorIndex;
  /* 0x0007 */ unsigned char CachedCommitSoftShift;
  /* 0x0008 */ unsigned char CachedCommitHighShift;
  /* 0x000c */ unsigned long MaxAllocationSize;
  /* 0x0010 */ struct _RTL_SRWLOCK SegmentLock;
  /* 0x0014 */ struct _LIST_ENTRY SegmentListHead;
  /* 0x001c */ unsigned long SegmentCount;
  /* 0x0020 */ struct _RTL_RB_TREE FreePageRanges;
  /* 0x0028 */ struct _HEAP_RUNTIME_MEMORY_STATS* MemStats;
  /* 0x002c */ void* LfhContext;
  /* 0x0030 */ void* VsContext;
  /* 0x0034 */ void* Heap;
} HEAP_SEG_CONTEXT, *PHEAP_SEG_CONTEXT; /* size: 0x0038 */

typedef union _RTL_RUN_ONCE
{
  union
  {
    /* 0x0000 */ void* Ptr;
    /* 0x0000 */ unsigned long Value;
    /* 0x0000 */ unsigned long State : 2; /* bit position: 0 */
  }; /* size: 0x0004 */
} RTL_RUN_ONCE, *PRTL_RUN_ONCE; /* size: 0x0004 */

typedef struct _HEAP_SUBALLOCATOR_CALLBACKS
{
  /* 0x0000 */ unsigned long Allocate;
  /* 0x0004 */ unsigned long Free;
  /* 0x0008 */ unsigned long Commit;
  /* 0x000c */ unsigned long Decommit;
  /* 0x0010 */ unsigned long ExtendContext;
} HEAP_SUBALLOCATOR_CALLBACKS, *PHEAP_SUBALLOCATOR_CALLBACKS; /* size: 0x0014 */

typedef struct _HEAP_VS_CONTEXT
{
  /* 0x0000 */ struct _RTL_SRWLOCK Lock;
  /* 0x0004 */ struct _RTL_RB_TREE FreeChunkTree;
  /* 0x000c */ struct _LIST_ENTRY SubsegmentList;
  /* 0x0014 */ unsigned long TotalCommittedUnits;
  /* 0x0018 */ unsigned long FreeCommittedUnits;
  /* 0x001c */ void* BackendCtx;
  /* 0x0020 */ struct _HEAP_SUBALLOCATOR_CALLBACKS Callbacks;
  /* 0x0034 */ unsigned long Flags;
} HEAP_VS_CONTEXT, *PHEAP_VS_CONTEXT; /* size: 0x0038 */

typedef struct _HEAP_LFH_SUBSEGMENT_STAT
{
  /* 0x0000 */ unsigned char Index;
  /* 0x0001 */ unsigned char Count;
} HEAP_LFH_SUBSEGMENT_STAT, *PHEAP_LFH_SUBSEGMENT_STAT; /* size: 0x0002 */

typedef union _HEAP_LFH_SUBSEGMENT_STATS
{
  union
  {
    /* 0x0000 */ struct _HEAP_LFH_SUBSEGMENT_STAT Buckets[2];
    /* 0x0000 */ void* AllStats;
  }; /* size: 0x0004 */
} HEAP_LFH_SUBSEGMENT_STATS, *PHEAP_LFH_SUBSEGMENT_STATS; /* size: 0x0004 */

typedef struct _SINGLE_LIST_ENTRY
{
  /* 0x0000 */ struct _SINGLE_LIST_ENTRY* Next;
} SINGLE_LIST_ENTRY, *PSINGLE_LIST_ENTRY; /* size: 0x0004 */

typedef union _SLIST_HEADER
{
  union
  {
    /* 0x0000 */ unsigned __int64 Alignment;
    struct
    {
      /* 0x0000 */ struct _SINGLE_LIST_ENTRY Next;
      /* 0x0004 */ unsigned short Depth;
      /* 0x0006 */ unsigned short CpuId;
    }; /* size: 0x0008 */
  }; /* size: 0x0008 */
} SLIST_HEADER, *PSLIST_HEADER; /* size: 0x0008 */

typedef struct _HEAP_LFH_SUBSEGMENT_CACHE
{
  /* 0x0000 */ union _SLIST_HEADER SLists[7];
} HEAP_LFH_SUBSEGMENT_CACHE, *PHEAP_LFH_SUBSEGMENT_CACHE; /* size: 0x0038 */

typedef struct _HEAP_LFH_CONTEXT
{
  /* 0x0000 */ void* BackendCtx;
  /* 0x0004 */ struct _HEAP_SUBALLOCATOR_CALLBACKS Callbacks;
  /* 0x0018 */ unsigned char MaxAffinity;
  /* 0x001c */ const unsigned char* AffinityModArray;
  /* 0x0020 */ struct _HEAP_RUNTIME_MEMORY_STATS* MemStats;
  /* 0x0024 */ struct _RTL_SRWLOCK SubsegmentCreationLock;
  /* 0x0028 */ union _HEAP_LFH_SUBSEGMENT_STATS BucketStats;
  /* 0x0030 */ struct _HEAP_LFH_SUBSEGMENT_CACHE SubsegmentCache;
  /* 0x0068 */ struct _HEAP_LFH_BUCKET* Buckets[129];
  /* 0x026c */ long __PADDING__[1];
} HEAP_LFH_CONTEXT, *PHEAP_LFH_CONTEXT; /* size: 0x0270 */

typedef struct _SEGMENT_HEAP
{
  /* 0x0000 */ void* Padding[2];
  /* 0x0008 */ unsigned long Signature;
  /* 0x000c */ unsigned long GlobalFlags;
  /* 0x0010 */ struct _HEAP_RUNTIME_MEMORY_STATS MemStats;
  /* 0x0020 */ unsigned long Interceptor;
  /* 0x0024 */ unsigned short ProcessHeapListIndex;
  /* 0x0026 */ unsigned short GlobalLockCount;
  /* 0x0028 */ unsigned long GlobalLockOwner;
  /* 0x002c */ struct _RTL_SRWLOCK LargeMetadataLock;
  /* 0x0030 */ struct _RTL_RB_TREE LargeAllocMetadata;
  /* 0x0038 */ volatile unsigned long LargeReservedPages;
  /* 0x003c */ volatile unsigned long LargeCommittedPages;
  /* 0x0040 */ struct _HEAP_SEG_CONTEXT SegContexts[2];
  /* 0x00b0 */ union _RTL_RUN_ONCE StackTraceInitVar;
  /* 0x00b4 */ struct _RTL_SRWLOCK ContextExtendLock;
  /* 0x00b8 */ unsigned char* AllocatedBase;
  /* 0x00bc */ unsigned char* UncommittedBase;
  /* 0x00c0 */ unsigned char* ReservedLimit;
  /* 0x00c4 */ struct _HEAP_VS_CONTEXT VsContext;
  /* 0x0100 */ struct _HEAP_LFH_CONTEXT LfhContext;
} SEGMENT_HEAP, *PSEGMENT_HEAP; /* size: 0x0370 */

