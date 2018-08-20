typedef struct _CLIENT_ID
{
  /* 0x0000 */ void* UniqueProcess;
  /* 0x0004 */ void* UniqueThread;
} CLIENT_ID, *PCLIENT_ID; /* size: 0x0008 */

typedef struct _HANDLE_TRACE_DB_ENTRY
{
  /* 0x0000 */ struct _CLIENT_ID ClientId;
  /* 0x0008 */ void* Handle;
  /* 0x000c */ unsigned long Type;
  /* 0x0010 */ void* StackTrace[16];
} HANDLE_TRACE_DB_ENTRY, *PHANDLE_TRACE_DB_ENTRY; /* size: 0x0050 */

typedef struct _HANDLE_TRACE_DEBUG_INFO
{
  /* 0x0000 */ unsigned long CurrentStackIndex;
  /* 0x0004 */ struct _HANDLE_TRACE_DB_ENTRY TraceDb[4096];
} HANDLE_TRACE_DEBUG_INFO, *PHANDLE_TRACE_DEBUG_INFO; /* size: 0x50004 */

