#pragma once
#ifndef SRC_EXTRAS_KARCHIVEC_LIBKRCC_H
#define SRC_EXTRAS_KARCHIVEC_LIBKRCC_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KArchive KArchive;
typedef struct KArchiveDirectory KArchiveDirectory;
typedef struct KRcc KRcc;
typedef struct QDateTime QDateTime;
typedef struct QIODevice QIODevice;
#endif

KRcc* KRcc_new(const libqt_string filename);
KRcc* KRcc_new2(const KRcc* param1);
bool KRcc_DoPrepareWriting(KRcc* self, const libqt_string name, const libqt_string user, const libqt_string group, long long size, mode_t perm, const QDateTime* atime, const QDateTime* mtime, const QDateTime* ctime);
bool KRcc_DoFinishWriting(KRcc* self, long long size);
bool KRcc_DoWriteDir(KRcc* self, const libqt_string name, const libqt_string user, const libqt_string group, mode_t perm, const QDateTime* atime, const QDateTime* mtime, const QDateTime* ctime);
bool KRcc_DoWriteSymLink(KRcc* self, const libqt_string name, const libqt_string target, const libqt_string user, const libqt_string group, mode_t perm, const QDateTime* atime, const QDateTime* mtime, const QDateTime* ctime);
bool KRcc_OpenArchive(KRcc* self, int mode);
bool KRcc_CloseArchive(KRcc* self);
void KRcc_VirtualHook(KRcc* self, int id, void* data);
void KRcc_OnDoPrepareWriting(KRcc* self, intptr_t slot);
bool KRcc_SuperDoPrepareWriting(KRcc* self, const libqt_string name, const libqt_string user, const libqt_string group, long long size, mode_t perm, const QDateTime* atime, const QDateTime* mtime, const QDateTime* ctime);
void KRcc_OnDoFinishWriting(KRcc* self, intptr_t slot);
bool KRcc_SuperDoFinishWriting(KRcc* self, long long size);
void KRcc_OnDoWriteDir(KRcc* self, intptr_t slot);
bool KRcc_SuperDoWriteDir(KRcc* self, const libqt_string name, const libqt_string user, const libqt_string group, mode_t perm, const QDateTime* atime, const QDateTime* mtime, const QDateTime* ctime);
void KRcc_OnDoWriteSymLink(KRcc* self, intptr_t slot);
bool KRcc_SuperDoWriteSymLink(KRcc* self, const libqt_string name, const libqt_string target, const libqt_string user, const libqt_string group, mode_t perm, const QDateTime* atime, const QDateTime* mtime, const QDateTime* ctime);
void KRcc_OnOpenArchive(KRcc* self, intptr_t slot);
bool KRcc_SuperOpenArchive(KRcc* self, int mode);
void KRcc_OnCloseArchive(KRcc* self, intptr_t slot);
bool KRcc_SuperCloseArchive(KRcc* self);
void KRcc_OnVirtualHook(KRcc* self, intptr_t slot);
void KRcc_SuperVirtualHook(KRcc* self, int id, void* data);
bool KRcc_Open(KRcc* self, int mode);
void KRcc_OnOpen(KRcc* self, intptr_t slot);
bool KRcc_SuperOpen(KRcc* self, int mode);
bool KRcc_Close(KRcc* self);
void KRcc_OnClose(KRcc* self, intptr_t slot);
bool KRcc_SuperClose(KRcc* self);
KArchiveDirectory* KRcc_RootDir(KRcc* self);
void KRcc_OnRootDir(KRcc* self, intptr_t slot);
KArchiveDirectory* KRcc_SuperRootDir(KRcc* self);
bool KRcc_DoWriteData(KRcc* self, const char* data, long long size);
void KRcc_OnDoWriteData(KRcc* self, intptr_t slot);
bool KRcc_SuperDoWriteData(KRcc* self, const char* data, long long size);
bool KRcc_CreateDevice(KRcc* self, int mode);
void KRcc_OnCreateDevice(KRcc* self, intptr_t slot);
bool KRcc_SuperCreateDevice(KRcc* self, int mode);
void KRcc_SetErrorString(KRcc* self, const libqt_string errorStr);
void KRcc_OnSetErrorString(KRcc* self, intptr_t slot);
void KRcc_SuperSetErrorString(KRcc* self, const libqt_string errorStr);
KArchiveDirectory* KRcc_FindOrCreate(KRcc* self, const libqt_string path);
void KRcc_OnFindOrCreate(KRcc* self, intptr_t slot);
KArchiveDirectory* KRcc_SuperFindOrCreate(KRcc* self, const libqt_string path);
void KRcc_SetDevice(KRcc* self, QIODevice* dev);
void KRcc_OnSetDevice(KRcc* self, intptr_t slot);
void KRcc_SuperSetDevice(KRcc* self, QIODevice* dev);
void KRcc_SetRootDir(KRcc* self, KArchiveDirectory* rootDir);
void KRcc_OnSetRootDir(KRcc* self, intptr_t slot);
void KRcc_SuperSetRootDir(KRcc* self, KArchiveDirectory* rootDir);
void KRcc_Delete(KRcc* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
