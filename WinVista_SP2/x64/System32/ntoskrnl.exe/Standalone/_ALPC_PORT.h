typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef enum _SECURITY_IMPERSONATION_LEVEL
{
  SecurityAnonymous = 0,
  SecurityIdentification = 1,
  SecurityImpersonation = 2,
  SecurityDelegation = 3,
} SECURITY_IMPERSONATION_LEVEL, *PSECURITY_IMPERSONATION_LEVEL;

typedef struct _SECURITY_QUALITY_OF_SERVICE
{
  /* 0x0000 */ unsigned long Length;
  /* 0x0004 */ enum _SECURITY_IMPERSONATION_LEVEL ImpersonationLevel;
  /* 0x0008 */ unsigned char ContextTrackingMode;
  /* 0x0009 */ unsigned char EffectiveOnly;
  /* 0x000a */ char __PADDING__[2];
} SECURITY_QUALITY_OF_SERVICE, *PSECURITY_QUALITY_OF_SERVICE; /* size: 0x000c */

typedef struct _LUID
{
  /* 0x0000 */ unsigned long LowPart;
  /* 0x0004 */ long HighPart;
} LUID, *PLUID; /* size: 0x0008 */

typedef struct _TOKEN_SOURCE
{
  /* 0x0000 */ char SourceName[8];
  /* 0x0008 */ struct _LUID SourceIdentifier;
} TOKEN_SOURCE, *PTOKEN_SOURCE; /* size: 0x0010 */

typedef struct _TOKEN_CONTROL
{
  /* 0x0000 */ struct _LUID TokenId;
  /* 0x0008 */ struct _LUID AuthenticationId;
  /* 0x0010 */ struct _LUID ModifiedId;
  /* 0x0018 */ struct _TOKEN_SOURCE TokenSource;
} TOKEN_CONTROL, *PTOKEN_CONTROL; /* size: 0x0028 */

typedef struct _SECURITY_CLIENT_CONTEXT
{
  /* 0x0000 */ struct _SECURITY_QUALITY_OF_SERVICE SecurityQos;
  /* 0x0010 */ void* ClientToken;
  /* 0x0018 */ unsigned char DirectlyAccessClientToken;
  /* 0x0019 */ unsigned char DirectAccessEffectiveOnly;
  /* 0x001a */ unsigned char ServerIsRemote;
  /* 0x001c */ struct _TOKEN_CONTROL ClientTokenControl;
  /* 0x0044 */ long __PADDING__[1];
} SECURITY_CLIENT_CONTEXT, *PSECURITY_CLIENT_CONTEXT; /* size: 0x0048 */

typedef struct _EX_PUSH_LOCK
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned __int64 Locked : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned __int64 Waiting : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned __int64 Waking : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned __int64 MultipleShared : 1; /* bit position: 3 */
      /* 0x0000 */ unsigned __int64 Shared : 60; /* bit position: 4 */
    }; /* bitfield */
    /* 0x0000 */ unsigned __int64 Value;
    /* 0x0000 */ void* Ptr;
  }; /* size: 0x0008 */
} EX_PUSH_LOCK, *PEX_PUSH_LOCK; /* size: 0x0008 */

typedef struct _ALPC_PORT_ATTRIBUTES
{
  /* 0x0000 */ unsigned long Flags;
  /* 0x0004 */ struct _SECURITY_QUALITY_OF_SERVICE SecurityQos;
  /* 0x0010 */ unsigned __int64 MaxMessageLength;
  /* 0x0018 */ unsigned __int64 MemoryBandwidth;
  /* 0x0020 */ unsigned __int64 MaxPoolUsage;
  /* 0x0028 */ unsigned __int64 MaxSectionSize;
  /* 0x0030 */ unsigned __int64 MaxViewSize;
  /* 0x0038 */ unsigned __int64 MaxTotalSectionSize;
  /* 0x0040 */ unsigned long DupObjectTypes;
  /* 0x0044 */ unsigned long Reserved;
} ALPC_PORT_ATTRIBUTES, *PALPC_PORT_ATTRIBUTES; /* size: 0x0048 */

typedef struct _ALPC_PORT
{
  /* 0x0000 */ struct _LIST_ENTRY PortListEntry;
  /* 0x0010 */ struct _ALPC_COMMUNICATION_INFO* CommunicationInfo;
  /* 0x0018 */ struct _EPROCESS* OwnerProcess;
  /* 0x0020 */ unsigned long SequenceNo;
  /* 0x0028 */ void* CompletionPort;
  /* 0x0030 */ void* CompletionKey;
  /* 0x0038 */ struct _ALPC_COMPLETION_PACKET_LOOKASIDE* CompletionPacketLookaside;
  /* 0x0040 */ void* PortContext;
  /* 0x0048 */ struct _SECURITY_CLIENT_CONTEXT StaticSecurity;
  /* 0x0090 */ struct _LIST_ENTRY MainQueue;
  /* 0x00a0 */ struct _LIST_ENTRY PendingQueue;
  /* 0x00b0 */ struct _LIST_ENTRY LargeMessageQueue;
  /* 0x00c0 */ struct _LIST_ENTRY WaitQueue;
  union
  {
    /* 0x00d0 */ struct _KSEMAPHORE* Semaphore;
    /* 0x00d0 */ struct _KEVENT* DummyEvent;
  }; /* size: 0x0008 */
  /* 0x00d8 */ struct _EX_PUSH_LOCK Lock;
  /* 0x00e0 */ struct _ALPC_PORT_ATTRIBUTES PortAttributes;
  /* 0x0128 */ struct _EX_PUSH_LOCK ResourceListLock;
  /* 0x0130 */ struct _LIST_ENTRY ResourceListHead;
  /* 0x0140 */ struct _ALPC_COMPLETION_LIST* CompletionList;
  /* 0x0148 */ struct _ALPC_MESSAGE_ZONE* MessageZone;
  /* 0x0150 */ struct _LIST_ENTRY CanceledQueue;
  union // _TAG_UNNAMED_92
  {
    union
    {
      struct // _TAG_UNNAMED_93
      {
        struct /* bitfield */
        {
          /* 0x0160 */ unsigned long Initialized : 1; /* bit position: 0 */
          /* 0x0160 */ unsigned long Type : 2; /* bit position: 1 */
          /* 0x0160 */ unsigned long ConnectionPending : 1; /* bit position: 3 */
          /* 0x0160 */ unsigned long ConnectionRefused : 1; /* bit position: 4 */
          /* 0x0160 */ unsigned long Disconnected : 1; /* bit position: 5 */
          /* 0x0160 */ unsigned long Closed : 1; /* bit position: 6 */
          /* 0x0160 */ unsigned long NoFlushOnClose : 1; /* bit position: 7 */
          /* 0x0160 */ unsigned long ReturnExtendedInfo : 1; /* bit position: 8 */
          /* 0x0160 */ unsigned long Waitable : 1; /* bit position: 9 */
          /* 0x0160 */ unsigned long DynamicSecurity : 1; /* bit position: 10 */
          /* 0x0160 */ unsigned long Wow64CompletionList : 1; /* bit position: 11 */
          /* 0x0160 */ unsigned long Lpc : 1; /* bit position: 12 */
          /* 0x0160 */ unsigned long LpcToLpc : 1; /* bit position: 13 */
          /* 0x0160 */ unsigned long HasCompletionList : 1; /* bit position: 14 */
          /* 0x0160 */ unsigned long HadCompletionList : 1; /* bit position: 15 */
        }; /* bitfield */
      } /* size: 0x0004 */ s1;
      /* 0x0160 */ unsigned long State;
    }; /* size: 0x0004 */
  } /* size: 0x0004 */ u1;
  /* 0x0168 */ struct _ALPC_PORT* TargetQueuePort;
  /* 0x0170 */ struct _ALPC_PORT* TargetSequencePort;
  /* 0x0178 */ struct _KALPC_MESSAGE* Message;
  /* 0x0180 */ unsigned long MainQueueLength;
  /* 0x0184 */ unsigned long PendingQueueLength;
  /* 0x0188 */ unsigned long LargeMessageQueueLength;
  /* 0x018c */ unsigned long CanceledQueueLength;
  /* 0x0190 */ unsigned long WaitQueueLength;
  /* 0x0194 */ long __PADDING__[1];
} ALPC_PORT, *PALPC_PORT; /* size: 0x0198 */

