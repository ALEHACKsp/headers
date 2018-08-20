typedef struct _HEAP_LFH_CALLBACKS
{
  /* 0x0000 */ void* Allocate /* function */;
  /* 0x0004 */ void* Free /* function */;
  /* 0x0008 */ void* Commit /* function */;
  /* 0x000c */ void* Decommit /* function */;
} HEAP_LFH_CALLBACKS, *PHEAP_LFH_CALLBACKS; /* size: 0x0010 */

