typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _KSHARED_READY_QUEUE
{
  /* 0x0000 */ unsigned __int64 Lock;
  /* 0x0008 */ unsigned long ReadySummary;
  /* 0x0010 */ struct _LIST_ENTRY ReadyListHead[32];
  /* 0x0210 */ char RunningSummary[64];
  /* 0x0250 */ unsigned long Span;
  /* 0x0254 */ unsigned long LowProcIndex;
  /* 0x0258 */ unsigned long QueueIndex;
  /* 0x025c */ unsigned long ProcCount;
  /* 0x0260 */ unsigned __int64 Affinity;
} KSHARED_READY_QUEUE, *PKSHARED_READY_QUEUE; /* size: 0x0268 */

