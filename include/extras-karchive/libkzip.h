#pragma once
#ifndef SRC_EXTRAS_KARCHIVEC_LIBKZIP_H
#define SRC_EXTRAS_KARCHIVEC_LIBKZIP_H

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
typedef struct KZip KZip;
typedef struct QDateTime QDateTime;
typedef struct QIODevice QIODevice;
#endif

KZip* KZip_new(const libqt_string filename);
KZip* KZip_new2(QIODevice* dev);
KZip* KZip_new3(const KZip* param1);
void KZip_SetExtraField(KZip* self, int ef);
int KZip_ExtraField(const KZip* self);
void KZip_SetCompression(KZip* self, int c);
int KZip_Compression(const KZip* self);
bool KZip_DoWriteSymLink(KZip* self, const libqt_string name, const libqt_string target, const libqt_string user, const libqt_string group, mode_t perm, const QDateTime* atime, const QDateTime* mtime, const QDateTime* ctime);
bool KZip_DoPrepareWriting(KZip* self, const libqt_string name, const libqt_string user, const libqt_string group, long long size, mode_t perm, const QDateTime* atime, const QDateTime* mtime, const QDateTime* creationTime);
bool KZip_DoFinishWriting(KZip* self, long long size);
bool KZip_DoWriteData(KZip* self, const char* data, long long size);
bool KZip_OpenArchive(KZip* self, int mode);
bool KZip_CloseArchive(KZip* self);
bool KZip_DoWriteDir(KZip* self, const libqt_string name, const libqt_string user, const libqt_string group, mode_t perm, const QDateTime* atime, const QDateTime* mtime, const QDateTime* ctime);
void KZip_VirtualHook(KZip* self, int id, void* data);
void KZip_OnDoWriteSymLink(KZip* self, intptr_t slot);
bool KZip_QBaseDoWriteSymLink(KZip* self, const libqt_string name, const libqt_string target, const libqt_string user, const libqt_string group, mode_t perm, const QDateTime* atime, const QDateTime* mtime, const QDateTime* ctime);
void KZip_OnDoPrepareWriting(KZip* self, intptr_t slot);
bool KZip_QBaseDoPrepareWriting(KZip* self, const libqt_string name, const libqt_string user, const libqt_string group, long long size, mode_t perm, const QDateTime* atime, const QDateTime* mtime, const QDateTime* creationTime);
void KZip_OnDoFinishWriting(KZip* self, intptr_t slot);
bool KZip_QBaseDoFinishWriting(KZip* self, long long size);
void KZip_OnDoWriteData(KZip* self, intptr_t slot);
bool KZip_QBaseDoWriteData(KZip* self, const char* data, long long size);
void KZip_OnOpenArchive(KZip* self, intptr_t slot);
bool KZip_QBaseOpenArchive(KZip* self, int mode);
void KZip_OnCloseArchive(KZip* self, intptr_t slot);
bool KZip_QBaseCloseArchive(KZip* self);
void KZip_OnDoWriteDir(KZip* self, intptr_t slot);
bool KZip_QBaseDoWriteDir(KZip* self, const libqt_string name, const libqt_string user, const libqt_string group, mode_t perm, const QDateTime* atime, const QDateTime* mtime, const QDateTime* ctime);
void KZip_OnVirtualHook(KZip* self, intptr_t slot);
void KZip_QBaseVirtualHook(KZip* self, int id, void* data);
bool KZip_Open(KZip* self, int mode);
void KZip_OnOpen(KZip* self, intptr_t slot);
bool KZip_QBaseOpen(KZip* self, int mode);
bool KZip_Close(KZip* self);
void KZip_OnClose(KZip* self, intptr_t slot);
bool KZip_QBaseClose(KZip* self);
KArchiveDirectory* KZip_RootDir(KZip* self);
void KZip_OnRootDir(KZip* self, intptr_t slot);
KArchiveDirectory* KZip_QBaseRootDir(KZip* self);
bool KZip_CreateDevice(KZip* self, int mode);
void KZip_OnCreateDevice(KZip* self, intptr_t slot);
bool KZip_QBaseCreateDevice(KZip* self, int mode);
void KZip_SetErrorString(KZip* self, const libqt_string errorStr);
void KZip_OnSetErrorString(KZip* self, intptr_t slot);
void KZip_QBaseSetErrorString(KZip* self, const libqt_string errorStr);
KArchiveDirectory* KZip_FindOrCreate(KZip* self, const libqt_string path);
void KZip_OnFindOrCreate(KZip* self, intptr_t slot);
KArchiveDirectory* KZip_QBaseFindOrCreate(KZip* self, const libqt_string path);
void KZip_SetDevice(KZip* self, QIODevice* dev);
void KZip_OnSetDevice(KZip* self, intptr_t slot);
void KZip_QBaseSetDevice(KZip* self, QIODevice* dev);
void KZip_SetRootDir(KZip* self, KArchiveDirectory* rootDir);
void KZip_OnSetRootDir(KZip* self, intptr_t slot);
void KZip_QBaseSetRootDir(KZip* self, KArchiveDirectory* rootDir);
void KZip_Delete(KZip* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
