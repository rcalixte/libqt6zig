#pragma once
#ifndef SRC_EXTRAS_KARCHIVEC_LIBKTAR_H
#define SRC_EXTRAS_KARCHIVEC_LIBKTAR_H

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
typedef struct KTar KTar;
typedef struct QDateTime QDateTime;
typedef struct QIODevice QIODevice;
#endif

KTar* KTar_new(const libqt_string filename);
KTar* KTar_new2(QIODevice* dev);
KTar* KTar_new3(const KTar* param1);
KTar* KTar_new4(const libqt_string filename, const libqt_string mimetype);
void KTar_SetOrigFileName(KTar* self, const libqt_string fileName);
bool KTar_DoWriteSymLink(KTar* self, const libqt_string name, const libqt_string target, const libqt_string user, const libqt_string group, mode_t perm, const QDateTime* atime, const QDateTime* mtime, const QDateTime* ctime);
bool KTar_DoWriteDir(KTar* self, const libqt_string name, const libqt_string user, const libqt_string group, mode_t perm, const QDateTime* atime, const QDateTime* mtime, const QDateTime* ctime);
bool KTar_DoPrepareWriting(KTar* self, const libqt_string name, const libqt_string user, const libqt_string group, long long size, mode_t perm, const QDateTime* atime, const QDateTime* mtime, const QDateTime* ctime);
bool KTar_DoFinishWriting(KTar* self, long long size);
bool KTar_OpenArchive(KTar* self, int mode);
bool KTar_CloseArchive(KTar* self);
bool KTar_CreateDevice(KTar* self, int mode);
void KTar_VirtualHook(KTar* self, int id, void* data);
void KTar_OnDoWriteSymLink(KTar* self, intptr_t slot);
bool KTar_QBaseDoWriteSymLink(KTar* self, const libqt_string name, const libqt_string target, const libqt_string user, const libqt_string group, mode_t perm, const QDateTime* atime, const QDateTime* mtime, const QDateTime* ctime);
void KTar_OnDoWriteDir(KTar* self, intptr_t slot);
bool KTar_QBaseDoWriteDir(KTar* self, const libqt_string name, const libqt_string user, const libqt_string group, mode_t perm, const QDateTime* atime, const QDateTime* mtime, const QDateTime* ctime);
void KTar_OnDoPrepareWriting(KTar* self, intptr_t slot);
bool KTar_QBaseDoPrepareWriting(KTar* self, const libqt_string name, const libqt_string user, const libqt_string group, long long size, mode_t perm, const QDateTime* atime, const QDateTime* mtime, const QDateTime* ctime);
void KTar_OnDoFinishWriting(KTar* self, intptr_t slot);
bool KTar_QBaseDoFinishWriting(KTar* self, long long size);
void KTar_OnOpenArchive(KTar* self, intptr_t slot);
bool KTar_QBaseOpenArchive(KTar* self, int mode);
void KTar_OnCloseArchive(KTar* self, intptr_t slot);
bool KTar_QBaseCloseArchive(KTar* self);
void KTar_OnCreateDevice(KTar* self, intptr_t slot);
bool KTar_QBaseCreateDevice(KTar* self, int mode);
void KTar_OnVirtualHook(KTar* self, intptr_t slot);
void KTar_QBaseVirtualHook(KTar* self, int id, void* data);
bool KTar_Open(KTar* self, int mode);
void KTar_OnOpen(KTar* self, intptr_t slot);
bool KTar_QBaseOpen(KTar* self, int mode);
bool KTar_Close(KTar* self);
void KTar_OnClose(KTar* self, intptr_t slot);
bool KTar_QBaseClose(KTar* self);
KArchiveDirectory* KTar_RootDir(KTar* self);
void KTar_OnRootDir(KTar* self, intptr_t slot);
KArchiveDirectory* KTar_QBaseRootDir(KTar* self);
bool KTar_DoWriteData(KTar* self, const char* data, long long size);
void KTar_OnDoWriteData(KTar* self, intptr_t slot);
bool KTar_QBaseDoWriteData(KTar* self, const char* data, long long size);
void KTar_SetErrorString(KTar* self, const libqt_string errorStr);
void KTar_OnSetErrorString(KTar* self, intptr_t slot);
void KTar_QBaseSetErrorString(KTar* self, const libqt_string errorStr);
KArchiveDirectory* KTar_FindOrCreate(KTar* self, const libqt_string path);
void KTar_OnFindOrCreate(KTar* self, intptr_t slot);
KArchiveDirectory* KTar_QBaseFindOrCreate(KTar* self, const libqt_string path);
void KTar_SetDevice(KTar* self, QIODevice* dev);
void KTar_OnSetDevice(KTar* self, intptr_t slot);
void KTar_QBaseSetDevice(KTar* self, QIODevice* dev);
void KTar_SetRootDir(KTar* self, KArchiveDirectory* rootDir);
void KTar_OnSetRootDir(KTar* self, intptr_t slot);
void KTar_QBaseSetRootDir(KTar* self, KArchiveDirectory* rootDir);
void KTar_Delete(KTar* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
