typedef struct _SECTION_IMAGE_INFORMATION
{
  /* 0x0000 */ void* TransferAddress;
  /* 0x0004 */ unsigned long ZeroBits;
  /* 0x0008 */ unsigned long MaximumStackSize;
  /* 0x000c */ unsigned long CommittedStackSize;
  /* 0x0010 */ unsigned long SubSystemType;
  union
  {
    struct
    {
      /* 0x0014 */ unsigned short SubSystemMinorVersion;
      /* 0x0016 */ unsigned short SubSystemMajorVersion;
    }; /* size: 0x0004 */
    /* 0x0014 */ unsigned long SubSystemVersion;
  }; /* size: 0x0004 */
  /* 0x0018 */ unsigned long GpValue;
  /* 0x001c */ unsigned short ImageCharacteristics;
  /* 0x001e */ unsigned short DllCharacteristics;
  /* 0x0020 */ unsigned short Machine;
  /* 0x0022 */ unsigned char ImageContainsCode;
  union
  {
    /* 0x0023 */ unsigned char ImageFlags;
    struct /* bitfield */
    {
      /* 0x0023 */ unsigned char ComPlusNativeReady : 1; /* bit position: 0 */
      /* 0x0023 */ unsigned char ComPlusILOnly : 1; /* bit position: 1 */
      /* 0x0023 */ unsigned char ImageDynamicallyRelocated : 1; /* bit position: 2 */
      /* 0x0023 */ unsigned char ImageMappedFlat : 1; /* bit position: 3 */
      /* 0x0023 */ unsigned char BaseBelow4gb : 1; /* bit position: 4 */
      /* 0x0023 */ unsigned char Reserved : 3; /* bit position: 5 */
    }; /* bitfield */
  }; /* size: 0x0001 */
  /* 0x0024 */ unsigned long LoaderFlags;
  /* 0x0028 */ unsigned long ImageFileSize;
  /* 0x002c */ unsigned long CheckSum;
} SECTION_IMAGE_INFORMATION, *PSECTION_IMAGE_INFORMATION; /* size: 0x0030 */

