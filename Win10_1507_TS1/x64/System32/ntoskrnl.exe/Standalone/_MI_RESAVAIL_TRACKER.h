typedef struct _MI_RESAVAIL_TRACKER
{
  /* 0x0000 */ unsigned __int64 AllocateKernelStack;
  /* 0x0008 */ unsigned __int64 AllocateGrowKernelStack;
  /* 0x0010 */ unsigned __int64 FreeKernelStack;
  /* 0x0018 */ unsigned __int64 FreeKernelStackError;
  /* 0x0020 */ unsigned __int64 FreeGrowKernelStackError;
  /* 0x0028 */ unsigned __int64 AllocateCreateProcess;
  /* 0x0030 */ unsigned __int64 FreeCreateProcessError;
  /* 0x0038 */ unsigned __int64 FreeDeleteProcess;
  /* 0x0040 */ unsigned __int64 FreeCleanProcess;
  /* 0x0048 */ unsigned __int64 FreeCleanProcessError;
  /* 0x0050 */ unsigned __int64 AllocateAddProcessWsMetaPage;
  /* 0x0058 */ unsigned __int64 AllocateWsIncrease;
  /* 0x0060 */ unsigned __int64 FreeWsIncreaseError;
  /* 0x0068 */ unsigned __int64 FreeWsIncreaseErrorMax;
  /* 0x0070 */ unsigned __int64 FreeWsDecrease;
  /* 0x0078 */ unsigned __int64 AllocateWorkingSetPage;
  /* 0x0080 */ unsigned __int64 FreeWorkingSetPageError;
  /* 0x0088 */ unsigned __int64 FreeDeletePteRange;
  /* 0x0090 */ unsigned __int64 AllocatePageTablesForProcessMetadata;
  /* 0x0098 */ unsigned __int64 FreePageTablesForProcessMetadataError2;
  /* 0x00a0 */ unsigned __int64 AllocatePageTablesForSystem;
  /* 0x00a8 */ unsigned __int64 FreePageTablesExcess;
  /* 0x00b0 */ unsigned __int64 FreeSystemVaPageTables;
  /* 0x00b8 */ unsigned __int64 FreeSessionVaPageTables;
  /* 0x00c0 */ unsigned __int64 AllocateCreateSession;
  /* 0x00c8 */ unsigned __int64 FreeSessionWsDereference;
  /* 0x00d0 */ unsigned __int64 FreeSessionDereference;
  /* 0x00d8 */ unsigned __int64 AllocateLockedSessionImage;
  /* 0x00e0 */ unsigned __int64 FreeLockedSessionImage;
  /* 0x00e8 */ unsigned __int64 FreeSessionImageConversion;
  /* 0x00f0 */ unsigned __int64 AllocateWsAdjustPageTable;
  /* 0x00f8 */ unsigned __int64 FreeWsAdjustPageTable;
  /* 0x0100 */ unsigned __int64 FreeWsAdjustPageTableError;
  /* 0x0108 */ unsigned __int64 AllocateNoLowMemory;
  /* 0x0110 */ unsigned __int64 AllocatePagedPoolLockedDown;
  /* 0x0118 */ unsigned __int64 FreePagedPoolLockedDown;
  /* 0x0120 */ unsigned __int64 AllocateSystemBitmaps;
  /* 0x0128 */ unsigned __int64 FreeSystemBitmapsError;
  /* 0x0130 */ unsigned __int64 AllocateForMdl;
  /* 0x0138 */ unsigned __int64 FreeFromMdl;
  /* 0x0140 */ unsigned __int64 AllocateForMdlPartition;
  /* 0x0148 */ unsigned __int64 FreeFromMdlPartition;
  /* 0x0150 */ unsigned __int64 FreeMdlExcess;
  /* 0x0158 */ unsigned __int64 AllocateExpansionNonPagedPool;
  /* 0x0160 */ unsigned __int64 FreeExpansionNonPagedPool;
  /* 0x0168 */ unsigned __int64 AllocateVad;
  /* 0x0170 */ unsigned __int64 RemoveVad;
  /* 0x0178 */ unsigned __int64 FreeVad;
  /* 0x0180 */ unsigned __int64 AllocateContiguous;
  /* 0x0188 */ unsigned __int64 FreeContiguousPages;
  /* 0x0190 */ unsigned __int64 FreeContiguousError;
  /* 0x0198 */ unsigned __int64 FreeLargePageMemory;
  /* 0x01a0 */ unsigned __int64 AllocateSystemWsles;
  /* 0x01a8 */ unsigned __int64 FreeSystemWsles;
  /* 0x01b0 */ unsigned __int64 AllocateSystemInitWs;
  /* 0x01b8 */ unsigned __int64 AllocateSessionInitWs;
  /* 0x01c0 */ unsigned __int64 FreeSessionInitWsError;
  /* 0x01c8 */ unsigned __int64 AllocateSystemImage;
  /* 0x01d0 */ unsigned __int64 AllocateSystemImageLoad;
  /* 0x01d8 */ unsigned __int64 AllocateSessionSharedImage;
  /* 0x01e0 */ unsigned __int64 FreeSystemImageInitCode;
  /* 0x01e8 */ unsigned __int64 FreeSystemImageLargePageConversion;
  /* 0x01f0 */ unsigned __int64 FreeSystemImageError;
  /* 0x01f8 */ unsigned __int64 FreeSystemImageLoadExcess;
  /* 0x0200 */ unsigned __int64 FreeUnloadSystemImage;
  /* 0x0208 */ unsigned __int64 FreeReloadBootImageLarge;
  /* 0x0210 */ unsigned __int64 FreeIndependent;
  /* 0x0218 */ unsigned __int64 AllocateHotAdd;
  /* 0x0220 */ unsigned __int64 AllocateHotRemove;
  /* 0x0228 */ unsigned __int64 FreeHotAdd;
  /* 0x0230 */ unsigned __int64 FreeHotAddEcc;
  /* 0x0238 */ unsigned __int64 FreeHotAddError;
  /* 0x0240 */ unsigned __int64 FreeHotAddUnmap;
  /* 0x0248 */ unsigned __int64 AllocateBoot;
  /* 0x0250 */ unsigned __int64 FreeLoaderBlock;
  /* 0x0258 */ unsigned __int64 AllocateNonPagedSpecialPool;
  /* 0x0260 */ unsigned __int64 FreeNonPagedSpecialPoolError;
  /* 0x0268 */ unsigned __int64 FreeNonPagedSpecialPool;
  /* 0x0270 */ unsigned __int64 AllocateSharedSegmentPage;
  /* 0x0278 */ unsigned __int64 FreeSharedSegmentPage;
  /* 0x0280 */ unsigned __int64 AllocateZeroPage;
  /* 0x0288 */ unsigned __int64 FreeZeroPage;
  /* 0x0290 */ unsigned __int64 AllocateForPo;
  /* 0x0298 */ unsigned __int64 AllocateForPoForce;
  /* 0x02a0 */ unsigned __int64 FreeForPo;
  /* 0x02a8 */ unsigned __int64 AllocateThreadHardFaultBehavior;
  /* 0x02b0 */ unsigned __int64 FreeThreadHardFaultBehavior;
  /* 0x02b8 */ unsigned __int64 ObtainFaultCharges;
  /* 0x02c0 */ unsigned __int64 FreeFaultCharges;
  /* 0x02c8 */ unsigned __int64 AllocateStoreCharges;
  /* 0x02d0 */ unsigned __int64 FreeStoreCharges;
  /* 0x0300 */ unsigned __int64 ObtainLockedPageCharge;
  /* 0x0340 */ unsigned __int64 FreeLockedPageCharge;
  /* 0x0348 */ unsigned __int64 AllocateStore;
  /* 0x0350 */ unsigned __int64 FreeStore;
  /* 0x0358 */ unsigned __int64 AllocateSystemImageProtos;
  /* 0x0360 */ unsigned __int64 FreeSystemImageProtos;
  /* 0x0368 */ unsigned __int64 AllocateModWriterCharge;
  /* 0x0370 */ unsigned __int64 FreeModWriterCharge;
  /* 0x0378 */ unsigned __int64 AllocateMappedWriterCharge;
  /* 0x0380 */ unsigned __int64 FreeMappedWriterCharge;
  /* 0x0388 */ unsigned __int64 AllocateRegistryCharges;
  /* 0x0390 */ unsigned __int64 FreeRegistryCharges;
  /* 0x0398 */ long __PADDING__[10];
} MI_RESAVAIL_TRACKER, *PMI_RESAVAIL_TRACKER; /* size: 0x03c0 */

