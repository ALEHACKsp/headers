typedef struct _SLIST_ENTRY
{
  /* 0x0000 */ struct _SLIST_ENTRY* Next;
  /* 0x0008 */ long __PADDING__[2];
} SLIST_ENTRY, *PSLIST_ENTRY; /* size: 0x0010 */

typedef struct _NBQUEUE_BLOCK
{
  /* 0x0000 */ struct _SLIST_ENTRY SListEntry;
  /* 0x0010 */ unsigned __int64 Next;
  /* 0x0018 */ unsigned __int64 Data;
} NBQUEUE_BLOCK, *PNBQUEUE_BLOCK; /* size: 0x0020 */

