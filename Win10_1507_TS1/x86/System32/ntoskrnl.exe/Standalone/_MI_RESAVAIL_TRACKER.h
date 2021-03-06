typedef struct _MI_RESAVAIL_TRACKER
{
  /* 0x0000 */ unsigned long AllocateKernelStack;
  /* 0x0004 */ unsigned long AllocateGrowKernelStack;
  /* 0x0008 */ unsigned long FreeKernelStack;
  /* 0x000c */ unsigned long FreeKernelStackError;
  /* 0x0010 */ unsigned long FreeGrowKernelStackError;
  /* 0x0014 */ unsigned long AllocateCreateProcess;
  /* 0x0018 */ unsigned long FreeCreateProcessError;
  /* 0x001c */ unsigned long FreeDeleteProcess;
  /* 0x0020 */ unsigned long FreeCleanProcess;
  /* 0x0024 */ unsigned long FreeCleanProcessError;
  /* 0x0028 */ unsigned long AllocateAddProcessWsMetaPage;
  /* 0x002c */ unsigned long AllocateWsIncrease;
  /* 0x0030 */ unsigned long FreeWsIncreaseError;
  /* 0x0034 */ unsigned long FreeWsIncreaseErrorMax;
  /* 0x0038 */ unsigned long FreeWsDecrease;
  /* 0x003c */ unsigned long AllocateWorkingSetPage;
  /* 0x0040 */ unsigned long FreeWorkingSetPageError;
  /* 0x0044 */ unsigned long FreeDeletePteRange;
  /* 0x0048 */ unsigned long AllocatePageTablesForProcessMetadata;
  /* 0x004c */ unsigned long FreePageTablesForProcessMetadataError2;
  /* 0x0050 */ unsigned long AllocatePageTablesForSystem;
  /* 0x0054 */ unsigned long FreePageTablesExcess;
  /* 0x0058 */ unsigned long FreeSystemVaPageTables;
  /* 0x005c */ unsigned long FreeSessionVaPageTables;
  /* 0x0060 */ unsigned long AllocateCreateSession;
  /* 0x0064 */ unsigned long FreeSessionWsDereference;
  /* 0x0068 */ unsigned long FreeSessionDereference;
  /* 0x006c */ unsigned long AllocateLockedSessionImage;
  /* 0x0070 */ unsigned long FreeLockedSessionImage;
  /* 0x0074 */ unsigned long FreeSessionImageConversion;
  /* 0x0078 */ unsigned long AllocateWsAdjustPageTable;
  /* 0x007c */ unsigned long FreeWsAdjustPageTable;
  /* 0x0080 */ unsigned long FreeWsAdjustPageTableError;
  /* 0x0084 */ unsigned long AllocateNoLowMemory;
  /* 0x0088 */ unsigned long AllocatePagedPoolLockedDown;
  /* 0x008c */ unsigned long FreePagedPoolLockedDown;
  /* 0x0090 */ unsigned long AllocateSystemBitmaps;
  /* 0x0094 */ unsigned long FreeSystemBitmapsError;
  /* 0x0098 */ unsigned long AllocateForMdl;
  /* 0x009c */ unsigned long FreeFromMdl;
  /* 0x00a0 */ unsigned long AllocateForMdlPartition;
  /* 0x00a4 */ unsigned long FreeFromMdlPartition;
  /* 0x00a8 */ unsigned long FreeMdlExcess;
  /* 0x00ac */ unsigned long AllocateExpansionNonPagedPool;
  /* 0x00b0 */ unsigned long FreeExpansionNonPagedPool;
  /* 0x00b4 */ unsigned long AllocateVad;
  /* 0x00b8 */ unsigned long RemoveVad;
  /* 0x00bc */ unsigned long FreeVad;
  /* 0x00c0 */ unsigned long AllocateContiguous;
  /* 0x00c4 */ unsigned long FreeContiguousPages;
  /* 0x00c8 */ unsigned long FreeContiguousError;
  /* 0x00cc */ unsigned long FreeLargePageMemory;
  /* 0x00d0 */ unsigned long AllocateSystemWsles;
  /* 0x00d4 */ unsigned long FreeSystemWsles;
  /* 0x00d8 */ unsigned long AllocateSystemInitWs;
  /* 0x00dc */ unsigned long AllocateSessionInitWs;
  /* 0x00e0 */ unsigned long FreeSessionInitWsError;
  /* 0x00e4 */ unsigned long AllocateSystemImage;
  /* 0x00e8 */ unsigned long AllocateSystemImageLoad;
  /* 0x00ec */ unsigned long AllocateSessionSharedImage;
  /* 0x00f0 */ unsigned long FreeSystemImageInitCode;
  /* 0x00f4 */ unsigned long FreeSystemImageLargePageConversion;
  /* 0x00f8 */ unsigned long FreeSystemImageError;
  /* 0x00fc */ unsigned long FreeSystemImageLoadExcess;
  /* 0x0100 */ unsigned long FreeUnloadSystemImage;
  /* 0x0104 */ unsigned long FreeReloadBootImageLarge;
  /* 0x0108 */ unsigned long FreeIndependent;
  /* 0x010c */ unsigned long AllocateHotAdd;
  /* 0x0110 */ unsigned long AllocateHotRemove;
  /* 0x0114 */ unsigned long FreeHotAdd;
  /* 0x0118 */ unsigned long FreeHotAddEcc;
  /* 0x011c */ unsigned long FreeHotAddError;
  /* 0x0120 */ unsigned long FreeHotAddUnmap;
  /* 0x0124 */ unsigned long AllocateBoot;
  /* 0x0128 */ unsigned long FreeLoaderBlock;
  /* 0x012c */ unsigned long AllocateNonPagedSpecialPool;
  /* 0x0130 */ unsigned long FreeNonPagedSpecialPoolError;
  /* 0x0134 */ unsigned long FreeNonPagedSpecialPool;
  /* 0x0138 */ unsigned long AllocateSharedSegmentPage;
  /* 0x013c */ unsigned long FreeSharedSegmentPage;
  /* 0x0140 */ unsigned long AllocateZeroPage;
  /* 0x0144 */ unsigned long FreeZeroPage;
  /* 0x0148 */ unsigned long AllocateForPo;
  /* 0x014c */ unsigned long AllocateForPoForce;
  /* 0x0150 */ unsigned long FreeForPo;
  /* 0x0154 */ unsigned long AllocateThreadHardFaultBehavior;
  /* 0x0158 */ unsigned long FreeThreadHardFaultBehavior;
  /* 0x015c */ unsigned long ObtainFaultCharges;
  /* 0x0160 */ unsigned long FreeFaultCharges;
  /* 0x0164 */ unsigned long AllocateStoreCharges;
  /* 0x0168 */ unsigned long FreeStoreCharges;
  /* 0x0180 */ unsigned long ObtainLockedPageCharge;
  /* 0x01c0 */ unsigned long FreeLockedPageCharge;
  /* 0x01c4 */ unsigned long AllocateStore;
  /* 0x01c8 */ unsigned long FreeStore;
  /* 0x01cc */ unsigned long AllocateSystemImageProtos;
  /* 0x01d0 */ unsigned long FreeSystemImageProtos;
  /* 0x01d4 */ unsigned long AllocateModWriterCharge;
  /* 0x01d8 */ unsigned long FreeModWriterCharge;
  /* 0x01dc */ unsigned long AllocateMappedWriterCharge;
  /* 0x01e0 */ unsigned long FreeMappedWriterCharge;
  /* 0x01e4 */ unsigned long AllocateRegistryCharges;
  /* 0x01e8 */ unsigned long FreeRegistryCharges;
  /* 0x01ec */ long __PADDING__[5];
} MI_RESAVAIL_TRACKER, *PMI_RESAVAIL_TRACKER; /* size: 0x0200 */

