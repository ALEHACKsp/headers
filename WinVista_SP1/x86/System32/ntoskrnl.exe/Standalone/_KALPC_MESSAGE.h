typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

typedef struct _KALPC_MESSAGE_ATTRIBUTES
{
  /* 0x0000 */ void* ClientContext;
  /* 0x0004 */ void* ServerContext;
  /* 0x0008 */ void* PortContext;
  /* 0x000c */ void* CancelPortContext;
  /* 0x0010 */ struct _KALPC_SECURITY_DATA* SecurityData;
  /* 0x0014 */ struct _KALPC_VIEW* View;
  /* 0x0018 */ struct _KALPC_HANDLE_DATA* HandleData;
} KALPC_MESSAGE_ATTRIBUTES, *PKALPC_MESSAGE_ATTRIBUTES; /* size: 0x001c */

typedef struct _CLIENT_ID
{
  /* 0x0000 */ void* UniqueProcess;
  /* 0x0004 */ void* UniqueThread;
} CLIENT_ID, *PCLIENT_ID; /* size: 0x0008 */

typedef struct _PORT_MESSAGE
{
  union // _TAG_UNNAMED_31
  {
    union
    {
      struct // _TAG_UNNAMED_32
      {
        /* 0x0000 */ short DataLength;
        /* 0x0002 */ short TotalLength;
      } /* size: 0x0004 */ s1;
      /* 0x0000 */ unsigned long Length;
    }; /* size: 0x0004 */
  } /* size: 0x0004 */ u1;
  union // _TAG_UNNAMED_33
  {
    union
    {
      struct // _TAG_UNNAMED_34
      {
        /* 0x0004 */ short Type;
        /* 0x0006 */ short DataInfoOffset;
      } /* size: 0x0004 */ s2;
      /* 0x0004 */ unsigned long ZeroInit;
    }; /* size: 0x0004 */
  } /* size: 0x0004 */ u2;
  union
  {
    /* 0x0008 */ struct _CLIENT_ID ClientId;
    /* 0x0008 */ double DoNotUseThisField;
  }; /* size: 0x0008 */
  /* 0x0010 */ unsigned long MessageId;
  union
  {
    /* 0x0014 */ unsigned long ClientViewSize;
    /* 0x0014 */ unsigned long CallbackId;
  }; /* size: 0x0004 */
} PORT_MESSAGE, *PPORT_MESSAGE; /* size: 0x0018 */

typedef struct _KALPC_MESSAGE
{
  /* 0x0000 */ struct _LIST_ENTRY Entry;
  /* 0x0008 */ void* ExtensionBuffer;
  /* 0x000c */ unsigned long ExtensionBufferSize;
  union
  {
    /* 0x0010 */ struct _EPROCESS* QuotaProcess;
    /* 0x0010 */ void* QuotaBlock;
  }; /* size: 0x0004 */
  /* 0x0014 */ long SequenceNo;
  union // _TAG_UNNAMED_35
  {
    union
    {
      struct // _TAG_UNNAMED_36
      {
        struct /* bitfield */
        {
          /* 0x0018 */ unsigned long QueueType : 2; /* bit position: 0 */
          /* 0x0018 */ unsigned long QueuePortType : 4; /* bit position: 2 */
          /* 0x0018 */ unsigned long Canceled : 1; /* bit position: 6 */
          /* 0x0018 */ unsigned long Ready : 1; /* bit position: 7 */
          /* 0x0018 */ unsigned long ReleaseMessage : 1; /* bit position: 8 */
          /* 0x0018 */ unsigned long SharedQuota : 1; /* bit position: 9 */
          /* 0x0018 */ unsigned long ReplyWaitReply : 1; /* bit position: 10 */
          /* 0x0018 */ unsigned long OwnerPortReference : 1; /* bit position: 11 */
          /* 0x0018 */ unsigned long ReserveReference : 1; /* bit position: 12 */
          /* 0x0018 */ unsigned long ReceiverReference : 1; /* bit position: 13 */
        }; /* bitfield */
      } /* size: 0x0004 */ s1;
      /* 0x0018 */ unsigned long State;
    }; /* size: 0x0004 */
  } /* size: 0x0004 */ u1;
  /* 0x001c */ struct _ALPC_PORT* CancelSequencePort;
  /* 0x0020 */ struct _ALPC_PORT* CancelQueuePort;
  /* 0x0024 */ long CancelSequenceNo;
  /* 0x0028 */ struct _LIST_ENTRY CancelListEntry;
  /* 0x0030 */ struct _ETHREAD* WaitingThread;
  /* 0x0034 */ struct _KALPC_RESERVE* Reserve;
  /* 0x0038 */ struct _ALPC_PORT* volatile PortQueue;
  /* 0x003c */ struct _ALPC_PORT* OwnerPort;
  /* 0x0040 */ struct _HANDLE_TABLE_ENTRY* UniqueTableEntry;
  /* 0x0044 */ struct _KALPC_MESSAGE_ATTRIBUTES MessageAttributes;
  /* 0x0060 */ void* DataUserVa;
  /* 0x0064 */ void* DataSystemVa;
  /* 0x0068 */ struct _ALPC_COMMUNICATION_INFO* CommunicationInfo;
  /* 0x006c */ struct _ALPC_PORT* ConnectionPort;
  /* 0x0070 */ struct _ETHREAD* ServerThread;
  /* 0x0078 */ struct _PORT_MESSAGE PortMessage;
} KALPC_MESSAGE, *PKALPC_MESSAGE; /* size: 0x0090 */

