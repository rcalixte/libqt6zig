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
bool KAr_SuperDoPrepareWriting(KAr* self, const libqt_string name, const libqt_string user, const libqt_string group, long long size, mode_t perm, const QDateTime* atime, const QDateTime* mtime, const QDateTime* ctime);
void KAr_OnDoFinishWriting(KAr* self, intptr_t slot);
bool KAr_SuperDoFinishWriting(KAr* self, long long size);
void KAr_OnDoWriteDir(KAr* self, intptr_t slot);
bool KAr_SuperDoWriteDir(KAr* self, const libqt_string name, const libqt_string user, const libqt_string group, mode_t perm, const QDateTime* atime, const QDateTime* mtime, const QDateTime* ctime);
void KAr_OnDoWriteSymLink(KAr* self, intptr_t slot);
bool KAr_SuperDoWriteSymLink(KAr* self, const libqt_string name, const libqt_string target, const libqt_string user, const libqt_string group, mode_t perm, const QDateTime* atime, const QDateTime* mtime, const QDateTime* ctime);
void KAr_OnOpenArchive(KAr* self, intptr_t slot);
bool KAr_SuperOpenArchive(KAr* self, int mode);
void KAr_OnCloseArchive(KAr* self, intptr_t slot);
bool KAr_SuperCloseArchive(KAr* self);
void KAr_OnVirtualHook(KAr* self, intptr_t slot);
void KAr_SuperVirtualHook(KAr* self, int id, void* data);
bool KAr_Open(KAr* self, int mode);
void KAr_OnOpen(KAr* self, intptr_t slot);
bool KAr_SuperOpen(KAr* self, int mode);
bool KAr_Close(KAr* self);
void KAr_OnClose(KAr* self, intptr_t slot);
bool KAr_SuperClose(KAr* self);
KArchiveDirectory* KAr_RootDir(KAr* self);
void KAr_OnRootDir(KAr* self, intptr_t slot);
KArchiveDirectory* KAr_SuperRootDir(KAr* self);
bool KAr_DoWriteData(KAr* self, const char* data, long long size);
void KAr_OnDoWriteData(KAr* self, intptr_t slot);
bool KAr_SuperDoWriteData(KAr* self, const char* data, long long size);
bool KAr_CreateDevice(KAr* self, int mode);
void KAr_OnCreateDevice(KAr* self, intptr_t slot);
bool KAr_SuperCreateDevice(KAr* self, int mode);
void KAr_SetErrorString(KAr* self, const libqt_string errorStr);
void KAr_OnSetErrorString(KAr* self, intptr_t slot);
void KAr_SuperSetErrorString(KAr* self, const libqt_string errorStr);
KArchiveDirectory* KAr_FindOrCreate(KAr* self, const libqt_string path);
void KAr_OnFindOrCreate(KAr* self, intptr_t slot);
KArchiveDirectory* KAr_SuperFindOrCreate(KAr* self, const libqt_string path);
void KAr_SetDevice(KAr* self, QIODevice* dev);
void KAr_OnSetDevice(KAr* self, intptr_t slot);
void KAr_SuperSetDevice(KAr* self, QIODevice* dev);
void KAr_SetRootDir(KAr* self, KArchiveDirectory* rootDir);
void KAr_OnSetRootDir(KAr* self, intptr_t slot);
void KAr_SuperSetRootDir(KAr* self, KArchiveDirectory* rootDir);
void KAr_Delete(KAr* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
