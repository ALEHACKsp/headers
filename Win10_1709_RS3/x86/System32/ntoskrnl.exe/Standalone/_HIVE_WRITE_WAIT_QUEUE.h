typedef struct _HIVE_WRITE_WAIT_QUEUE
{
  /* 0x0000 */ struct _ETHREAD* ActiveThread;
  /* 0x0004 */ struct _HIVE_WAIT_PACKET* WaitList;
  /* 0x0008 */ volatile unsigned long OwnerBoosted;
} HIVE_WRITE_WAIT_QUEUE, *PHIVE_WRITE_WAIT_QUEUE; /* size: 0x000c */

