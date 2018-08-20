typedef struct _HARDWARE_PTE_X86PAE
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
} HARDWARE_PTE_X86PAE, *PHARDWARE_PTE_X86PAE; /* size: 0x0008 */

