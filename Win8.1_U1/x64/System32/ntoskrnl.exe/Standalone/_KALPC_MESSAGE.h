typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _KALPC_MESSAGE_ATTRIBUTES
{
  /* 0x0000 */ void* ClientContext;
  /* 0x0008 */ void* ServerContext;
  /* 0x0010 */ void* PortContext;
  /* 0x0018 */ void* CancelPortContext;
  /* 0x0020 */ struct _KALPC_SECURITY_DATA* SecurityData;
  /* 0x0028 */ struct _KALPC_VIEW* View;
  /* 0x0030 */ struct _KALPC_HANDLE_DATA* HandleData;
} KALPC_MESSAGE_ATTRIBUTES, *PKALPC_MESSAGE_ATTRIBUTES; /* size: 0x0038 */

typedef struct _CLIENT_ID
{
  /* 0x0000 */ void* UniqueProcess;
  /* 0x0008 */ void* UniqueThread;
} CLIENT_ID, *PCLIENT_ID; /* size: 0x0010 */

typedef struct _PORT_MESSAGE
{
  union // _TAG_UNNAMED_61
  {
    union
    {
      struct // _TAG_UNNAMED_62
      {
        /* 0x0000 */ short DataLength;
        /* 0x0002 */ short TotalLength;
      } /* size: 0x0004 */ s1;
      /* 0x0000 */ unsigned long Length;
    }; /* size: 0x0004 */
  } /* size: 0x0004 */ u1;
  union // _TAG_UNNAMED_63
  {
    union
    {
      struct // _TAG_UNNAMED_64
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
  }; /* size: 0x0010 */
  /* 0x0018 */ unsigned long MessageId;
  union
  {
    /* 0x0020 */ unsigned __int64 ClientViewSize;
    struct
    {
      /* 0x0020 */ unsigned long CallbackId;
      /* 0x0024 */ long __PADDING__[1];
    }; /* size: 0x0008 */
  }; /* size: 0x0008 */
} PORT_MESSAGE, *PPORT_MESSAGE; /* size: 0x0028 */

typedef struct _KALPC_MESSAGE
{
  /* 0x0000 */ struct _LIST_ENTRY Entry;
  /* 0x0010 */ struct _ALPC_PORT* PortQueue;
  /* 0x0018 */ struct _ALPC_PORT* OwnerPort;
  /* 0x0020 */ struct _ETHREAD* WaitingThread;
  union // _TAG_UNNAMED_79
  {
    union
    {
      struct // _TAG_UNNAMED_80
      {
        struct /* bitfield */
        {
          /* 0x0028 */ unsigned long QueueType : 2; /* bit position: 0 */
          /* 0x0028 */ unsigned long QueuePortType : 4; /* bit position: 2 */
          /* 0x0028 */ unsigned long Canceled : 1; /* bit position: 6 */
          /* 0x0028 */ unsigned long Ready : 1; /* bit position: 7 */
          /* 0x0028 */ unsigned long ReleaseMessage : 1; /* bit position: 8 */
          /* 0x0028 */ unsigned long SharedQuota : 1; /* bit position: 9 */
          /* 0x0028 */ unsigned long ReplyWaitReply : 1; /* bit position: 10 */
          /* 0x0028 */ unsigned long OwnerPortReference : 1; /* bit position: 11 */
          /* 0x0028 */ unsigned long ReserveReference : 1; /* bit position: 12 */
          /* 0x0028 */ unsigned long ReceiverReference : 1; /* bit position: 13 */
          /* 0x0028 */ unsigned long ViewAttributeRetrieved : 1; /* bit position: 14 */
          /* 0x0028 */ unsigned long InDispatch : 1; /* bit position: 15 */
        }; /* bitfield */
      } /* size: 0x0004 */ s1;
      /* 0x0028 */ unsigned long State;
    }; /* size: 0x0004 */
  } /* size: 0x0004 */ u1;
  /* 0x002c */ long SequenceNo;
  union
  {
    /* 0x0030 */ struct _EPROCESS* QuotaProcess;
    /* 0x0030 */ void* QuotaBlock;
  }; /* size: 0x0008 */
  /* 0x0038 */ struct _ALPC_PORT* CancelSequencePort;
  /* 0x0040 */ struct _ALPC_PORT* CancelQueuePort;
  /* 0x0048 */ long CancelSequenceNo;
  /* 0x0050 */ struct _LIST_ENTRY CancelListEntry;
  /* 0x0060 */ struct _KALPC_RESERVE* Reserve;
  /* 0x0068 */ struct _KALPC_MESSAGE_ATTRIBUTES MessageAttributes;
  /* 0x00a0 */ void* DataUserVa;
  /* 0x00a8 */ struct _ALPC_COMMUNICATION_INFO* CommunicationInfo;
  /* 0x00b0 */ struct _ALPC_PORT* ConnectionPort;
  /* 0x00b8 */ struct _ETHREAD* ServerThread;
  /* 0x00c0 */ void* WakeReference;
  /* 0x00c8 */ void* ExtensionBuffer;
  /* 0x00d0 */ unsigned __int64 ExtensionBufferSize;
  /* 0x00d8 */ struct _PORT_MESSAGE PortMessage;
} KALPC_MESSAGE, *PKALPC_MESSAGE; /* size: 0x0100 */

