#!/usr/bin/python3
from ThunkHelpers import *

lib("libdrm", "2")

# FEX
fn("size_t FEX_usable_size(void*)"); no_unpack()
fn("void FEX_free_on_host(void*)"); no_unpack()

fn("int drmIoctl(int, unsigned long, void *)")
fn("void * drmGetHashTable()")
fn("drmHashEntry * drmGetEntry(int)")
fn("int drmAvailable()")
fn("int drmOpen(const char *, const char *)")
fn("int drmOpenWithType(const char *, const char *, int)")
fn("int drmOpenControl(int)")
fn("int drmOpenRender(int)")
fn("int drmClose(int)")
fn("drmVersionPtr drmGetVersion(int)")
fn("drmVersionPtr drmGetLibVersion(int)")
fn("int drmGetCap(int, uint64_t, uint64_t *)")
fn("void drmFreeVersion(drmVersionPtr)")
fn("int drmGetMagic(int, drm_magic_t*)")
fn("char * drmGetBusid(int)")
fn("int drmGetInterruptFromBusID(int, int, int, int)")
fn("int drmGetMap(int, int, drm_handle_t *, drmSize *, drmMapType *, drmMapFlags *, drm_handle_t *, int *)")
fn("int drmGetClient(int, int, int *, int *, int *, unsigned long *, unsigned long *)")
fn("int drmGetStats(int, drmStatsT *)")
fn("int drmSetInterfaceVersion(int, drmSetVersion *)")
fn("int drmCommandNone(int, unsigned long)")
fn("int drmCommandRead(int, unsigned long, void *, unsigned long)")
fn("int drmCommandWrite(int, unsigned long, void *, unsigned long)")
fn("int drmCommandWriteRead(int, unsigned long, void *, unsigned long)")
fn("void drmFreeBusid(const char *)")
fn("int drmSetBusid(int, const char *)")
fn("int drmAuthMagic(int, drm_magic_t)")
fn("int drmAddMap(int, drm_handle_t, drmSize, drmMapType, drmMapFlags, drm_handle_t *)")
fn("int drmRmMap(int, drm_handle_t)")
fn("int drmAddContextPrivateMapping(int, drm_context_t, drm_handle_t)")
fn("int drmAddBufs(int, int, int, drmBufDescFlags, int)")
fn("int drmMarkBufs(int, double, double)")
fn("int drmCreateContext(int, drm_context_t *)")
fn("int drmSetContextFlags(int, drm_context_t, drm_context_tFlags)")
fn("int drmGetContextFlags(int, drm_context_t, drm_context_tFlagsPtr)")
fn("int drmAddContextTag(int, drm_context_t, void *)")
fn("int drmDelContextTag(int, drm_context_t)")
fn("void * drmGetContextTag(int, drm_context_t)")
fn("drm_context_t * drmGetReservedContextList(int, int*)")
fn("void drmFreeReservedContextList(drm_context_t *)")
fn("int drmSwitchToContext(int, drm_context_t)")
fn("int drmDestroyContext(int, drm_context_t)")
fn("int drmCreateDrawable(int, drm_drawable_t *)")
fn("int drmDestroyDrawable(int, drm_drawable_t)")
fn("int drmUpdateDrawableInfo(int, drm_drawable_t, drm_drawable_info_type_t, unsigned int, void *)")
fn("int drmCtlInstHandler(int, int)")
fn("int drmCtlUninstHandler(int)")
fn("int drmSetClientCap(int, uint64_t, uint64_t)")
fn("int drmCrtcGetSequence(int, uint32_t, uint64_t *, uint64_t *)")
fn("int drmCrtcQueueSequence(int, uint32_t, uint32_t, uint64_t, uint64_t *, uint64_t)")
fn("int drmMap(int, drm_handle_t, drmSize, drmAddressPtr)")
fn("int drmUnmap(drmAddress, drmSize)")
fn("drmBufInfoPtr drmGetBufInfo(int)")
fn("drmBufMapPtr drmMapBufs(int)")
fn("int drmUnmapBufs(drmBufMapPtr)")
fn("int drmDMA(int, drmDMAReqPtr)")
fn("int drmFreeBufs(int, int, int *)")
fn("int drmGetLock(int, drm_context_t, drmLockFlags)")
fn("int drmUnlock(int, drm_context_t)")
fn("int drmFinish(int, int, drmLockFlags)")
fn("int drmGetContextPrivateMapping(int, drm_context_t, drm_handle_t*)")
#fn("int drmAgpAcquire(int)")
#fn("int drmAgpRelease(int)")
#fn("int drmAgpEnable(int, unsigned long)")
#fn("int drmAgpAlloc(int, unsigned long, unsigned long, unsigned long *, int *)")
#fn("int drmAgpFree(int, int)")
#fn("int drmAgpBind(int, int, unsigned long)")
#fn("int drmAgpUnbind(int, int)")
#fn("int drmAgpVersionMajor(int)")
#fn("int drmAgpVersionMinor(int)")
#fn("unsigned long drmAgpGetMode(int)")
#fn("unsigned long drmAgpBase(int)")
#fn("unsigned long drmAgpSize(int)")
#fn("unsigned long drmAgpMemoryUsed(int)")
#fn("unsigned long drmAgpMemoryAvail(int)")
#fn("unsigned int drmAgpVendorId(int)")
#fn("unsigned int drmAgpDeviceId(int)")
fn("int drmScatterGatherAlloc(int, unsigned long, drm_handle_t*)")
fn("int drmScatterGatherFree(int, drm_handle_t)")
fn("int drmWaitVBlank(int, drmVBlankPtr)")
fn("void drmSetServerInfo(drmServerInfoPtr)")
fn("int drmError(int, const char *)")
fn("void * drmMalloc(int)")
fn("void drmFree(void *)")
fn("void * drmHashCreate()")
fn("int drmHashDestroy(void *)")
fn("int drmHashLookup(void *, unsigned long, void **)")
fn("int drmHashInsert(void *, unsigned long, void *)")
fn("int drmHashDelete(void *, unsigned long)")
fn("int drmHashFirst(void *, unsigned long *, void **)")
fn("int drmHashNext(void *, unsigned long *, void **)")
fn("void * drmRandomCreate(unsigned long)")
fn("int drmRandomDestroy(void *)")
fn("unsigned long drmRandom(void *)")
fn("double drmRandomDouble(void *)")
fn("void * drmSLCreate()")
fn("int drmSLDestroy(void *)")
fn("int drmSLLookup(void *, unsigned long, void **)")
fn("int drmSLInsert(void *, unsigned long, void *)")
fn("int drmSLDelete(void *, unsigned long)")
fn("int drmSLNext(void *, unsigned long *, void **)")
fn("int drmSLFirst(void *, unsigned long *, void **)")
fn("void drmSLDump(void *)")
fn("int drmSLLookupNeighbors(void *, unsigned long, unsigned long *, void **, unsigned long *, void **)")
fn("int drmOpenOnce(void *, const char *, int *)")
fn("int drmOpenOnceWithType(const char *, int *, int)")
fn("void drmCloseOnce(int)")
fn("void drmMsg(const char *, ...)"); no_pack(); no_unpack(); no_tab_unpack()
fn("int drmSetMaster(int)")
fn("int drmDropMaster(int)")
fn("int drmIsMaster(int)")
fn("int drmHandleEvent(int, drmEventContextPtr)")
# Application has ownership of the returned pointers
fn("char * drmGetDeviceNameFromFd(int)"); no_pack()
fn("char * drmGetDeviceNameFromFd2(int)"); no_pack()

fn("int drmGetNodeTypeFromFd(int)")
fn("int drmPrimeHandleToFD(int, uint32_t, uint32_t, int *)")
fn("int drmPrimeFDToHandle(int, int, uint32_t *)")
# Application has ownership of the returned pointers
fn("char * drmGetPrimaryDeviceNameFromFd(int)"); no_pack()
fn("char * drmGetRenderDeviceNameFromFd(int)"); no_pack()

fn("int drmGetDevice(int, drmDevicePtr *)")
fn("void drmFreeDevice(drmDevicePtr *)")
fn("int drmGetDevices(drmDevicePtr*, int)")
fn("void drmFreeDevices(drmDevicePtr*, int)")
fn("int drmGetDevice2(int, uint32_t, drmDevicePtr *)")
fn("int drmGetDevices2(uint32_t, drmDevicePtr*, int)")
fn("int drmDevicesEqual(drmDevicePtr, drmDevicePtr)")
fn("int drmSyncobjCreate(int, uint32_t, uint32_t *)")
fn("int drmSyncobjDestroy(int, uint32_t)")
fn("int drmSyncobjHandleToFD(int, uint32_t, int *)")
fn("int drmSyncobjFDToHandle(int, int, uint32_t *)")
fn("int drmSyncobjImportSyncFile(int, uint32_t, int)")
fn("int drmSyncobjExportSyncFile(int, uint32_t, int *)")
fn("int drmSyncobjWait(int, uint32_t *, unsigned int, int64_t, unsigned int, uint32_t *)")
fn("int drmSyncobjReset(int, const uint32_t *, uint32_t)")
fn("int drmSyncobjSignal(int, const uint32_t *, uint32_t)")
fn("int drmSyncobjTimelineSignal(int, const uint32_t *, uint64_t *, uint32_t)")
fn("int drmSyncobjTimelineWait(int, uint32_t *, uint64_t *, unsigned int, int64_t, unsigned int, uint32_t *)")
fn("int drmSyncobjQuery(int, uint32_t *, uint64_t *, uint32_t)")
fn("int drmSyncobjQuery2(int, uint32_t *, uint64_t *, uint32_t, uint32_t)")
fn("int drmSyncobjTransfer(int, uint32_t, uint64_t, uint32_t, uint64_t, uint32_t)")

Generate()
