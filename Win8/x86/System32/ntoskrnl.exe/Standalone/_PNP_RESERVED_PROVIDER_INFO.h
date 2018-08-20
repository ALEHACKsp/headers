typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

typedef struct _UNICODE_STRING
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ unsigned short MaximumLength;
  /* 0x0004 */ unsigned short* Buffer;
} UNICODE_STRING, *PUNICODE_STRING; /* size: 0x0008 */

typedef struct _PNP_RESERVED_PROVIDER_INFO
{
  /* 0x0000 */ struct _LIST_ENTRY ListEntry;
  /* 0x0008 */ struct _LIST_ENTRY DependentList;
  /* 0x0010 */ struct _UNICODE_STRING ReservationId;
  /* 0x0018 */ volatile long ReferenceCount;
} PNP_RESERVED_PROVIDER_INFO, *PPNP_RESERVED_PROVIDER_INFO; /* size: 0x001c */

