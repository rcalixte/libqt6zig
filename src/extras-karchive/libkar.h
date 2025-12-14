#pragma once
#ifndef SRC_EXTRAS_KARCHIVEC_LIBKAR_H
#define SRC_EXTRAS_KARCHIVEC_LIBKAR_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KAr KAr;
typedef struct KArchive KArchive;
typedef struct KArchiveDirectory KArchiveDirectory;
typedef struct QDateTime QDateTime;
typedef struct QIODevice QIODevice;
#endif

KAr* KAr_new(const libqt_string filename);
KAr* KAr_new2(QIODevice* dev);
KAr* KAr_new3(const KAr* param1);
bool KAr_DoPrepareWriting(KAr* self, const libqt_string name, const libqt_string user, const libqt_string group, long long size, mode_t perm, const QDateTime* atime, const QDateTime* mtime, const QDateTime* ctime);
bool KAr_DoFinishWriting(KAr* self, long long size);
bool KAr_DoWriteDir(KAr* self, const libqt_string name, const libqt_string user, const libqt_string group, mode_t perm, const QDateTime* atime, const QDateTime* mtime, const QDateTime* ctime);
bool KAr_DoWriteSymLink(KAr* self, const libqt_string name, const libqt_string target, const libqt_string user, const libqt_string group, mode_t perm, const QDateTime* atime, const QDateTime* mtime, const QDateTime* ctime);
bool KAr_OpenArchive(KAr* self, int mode);
bool KAr_CloseArchive(KAr* self);
void KAr_VirtualHook(KAr* self, int id, void* data);
void KAr_OnDoPrepareWriting(KAr* self, intptr_t slot);
bool KAr_QBaseDoPrepareWriting(KAr* self, const libqt_string name, const libqt_string user, const libqt_string group, long long size, mode_t perm, const QDateTime* atime, const QDateTime* mtime, const QDateTime* ctime);
void KAr_OnDoFinishWriting(KAr* self, intptr_t slot);
bool KAr_QBaseDoFinishWriting(KAr* self, long long size);
void KAr_OnDoWriteDir(KAr* self, intptr_t slot);
bool KAr_QBaseDoWriteDir(KAr* self, const libqt_string name, const libqt_string user, const libqt_string group, mode_t perm, const QDateTime* atime, const QDateTime* mtime, const QDateTime* ctime);
void KAr_OnDoWriteSymLink(KAr* self, intptr_t slot);
bool KAr_QBaseDoWriteSymLink(KAr* self, const libqt_string name, const libqt_string target, const libqt_string user, const libqt_string group, mode_t perm, const QDateTime* atime, const QDateTime* mtime, const QDateTime* ctime);
void KAr_OnOpenArchive(KAr* self, intptr_t slot);
bool KAr_QBaseOpenArchive(KAr* self, int mode);
void KAr_OnCloseArchive(KAr* self, intptr_t slot);
bool KAr_QBaseCloseArchive(KAr* self);
void KAr_OnVirtualHook(KAr* self, intptr_t slot);
void KAr_QBaseVirtualHook(KAr* self, int id, void* data);
bool KAr_Open(KAr* self, int mode);
void KAr_OnOpen(KAr* self, intptr_t slot);
bool KAr_QBaseOpen(KAr* self, int mode);
bool KAr_Close(KAr* self);
void KAr_OnClose(KAr* self, intptr_t slot);
bool KAr_QBaseClose(KAr* self);
KArchiveDirectory* KAr_RootDir(KAr* self);
void KAr_OnRootDir(KAr* self, intptr_t slot);
KArchiveDirectory* KAr_QBaseRootDir(KAr* self);
bool KAr_DoWriteData(KAr* self, const char* data, long long size);
void KAr_OnDoWriteData(KAr* self, intptr_t slot);
bool KAr_QBaseDoWriteData(KAr* self, const char* data, long long size);
bool KAr_CreateDevice(KAr* self, int mode);
void KAr_OnCreateDevice(KAr* self, intptr_t slot);
bool KAr_QBaseCreateDevice(KAr* self, int mode);
void KAr_SetErrorString(KAr* self, const libqt_string errorStr);
void KAr_OnSetErrorString(KAr* self, intptr_t slot);
void KAr_QBaseSetErrorString(KAr* self, const libqt_string errorStr);
KArchiveDirectory* KAr_FindOrCreate(KAr* self, const libqt_string path);
void KAr_OnFindOrCreate(KAr* self, intptr_t slot);
KArchiveDirectory* KAr_QBaseFindOrCreate(KAr* self, const libqt_string path);
void KAr_SetDevice(KAr* self, QIODevice* dev);
void KAr_OnSetDevice(KAr* self, intptr_t slot);
void KAr_QBaseSetDevice(KAr* self, QIODevice* dev);
void KAr_SetRootDir(KAr* self, KArchiveDirectory* rootDir);
void KAr_OnSetRootDir(KAr* self, intptr_t slot);
void KAr_QBaseSetRootDir(KAr* self, KArchiveDirectory* rootDir);
void KAr_Delete(KAr* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
