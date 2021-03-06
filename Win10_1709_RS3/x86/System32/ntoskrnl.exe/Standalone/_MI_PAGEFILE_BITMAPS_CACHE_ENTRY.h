typedef struct _RTL_BALANCED_NODE
{
  union
  {
    /* 0x0000 */ struct _RTL_BALANCED_NODE* Children[2];
    struct
    {
      /* 0x0000 */ struct _RTL_BALANCED_NODE* Left;
      /* 0x0004 */ struct _RTL_BALANCED_NODE* Right;
    }; /* size: 0x0008 */
  }; /* size: 0x0008 */
  union
  {
    /* 0x0008 */ unsigned char Red : 1; /* bit position: 0 */
    /* 0x0008 */ unsigned char Balance : 2; /* bit position: 0 */
    /* 0x0008 */ unsigned long ParentValue;
  }; /* size: 0x0004 */
} RTL_BALANCED_NODE, *PRTL_BALANCED_NODE; /* size: 0x000c */

typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

typedef struct _MI_PAGEFILE_BITMAPS_CACHE_ENTRY
{
  union
  {
    /* 0x0000 */ struct _RTL_BALANCED_NODE LengthTreeNode;
    /* 0x0000 */ struct _LIST_ENTRY FreeListEntry;
  }; /* size: 0x000c */
  /* 0x000c */ struct _RTL_BALANCED_NODE LocationTreeNode;
  /* 0x0018 */ unsigned long StartingIndex;
  /* 0x001c */ unsigned long Length;
} MI_PAGEFILE_BITMAPS_CACHE_ENTRY, *PMI_PAGEFILE_BITMAPS_CACHE_ENTRY; /* size: 0x0020 */

