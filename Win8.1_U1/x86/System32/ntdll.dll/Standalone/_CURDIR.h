typedef struct _UNICODE_STRING
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ unsigned short MaximumLength;
  /* 0x0004 */ unsigned short* Buffer;
} UNICODE_STRING, *PUNICODE_STRING; /* size: 0x0008 */

typedef struct _CURDIR
{
  /* 0x0000 */ struct _UNICODE_STRING DosPath;
  /* 0x0008 */ void* Handle;
} CURDIR, *PCURDIR; /* size: 0x000c */

