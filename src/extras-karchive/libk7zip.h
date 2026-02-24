#pragma once
#ifndef SRC_EXTRAS_KARCHIVEC_LIBK7ZIP_H
#define SRC_EXTRAS_KARCHIVEC_LIBK7ZIP_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct K7Zip K7Zip;
typedef struct KArchive KArchive;
typedef struct KArchiveDirectory KArchiveDirectory;
typedef struct QDateTime QDateTime;
typedef struct QIODevice QIODevice;
#endif

K7Zip* K7Zip_new(const libqt_string filename);
K7Zip* K7Zip_new2(QIODevice* dev);
K7Zip* K7Zip_new3(const K7Zip* param1);
void K7Zip_SetPassword(K7Zip* self, const libqt_string password);
bool K7Zip_PasswordNeeded(const K7Zip* self);
bool K7Zip_DoWriteSymLink(K7Zip* self, const libqt_string name, const libqt_string target, const libqt_string user, const libqt_string group, mode_t perm, const QDateTime* atime, const QDateTime* mtime, const QDateTime* ctime);
bool K7Zip_DoWriteDir(K7Zip* self, const libqt_string name, const libqt_string user, const libqt_string group, mode_t perm, const QDateTime* atime, const QDateTime* mtime, const QDateTime* ctime);
bool K7Zip_DoPrepareWriting(K7Zip* self, const libqt_string name, const libqt_string user, const libqt_string group, long long size, mode_t perm, const QDateTime* atime, const QDateTime* mtime, const QDateTime* ctime);
bool K7Zip_DoFinishWriting(K7Zip* self, long long size);
bool K7Zip_DoWriteData(K7Zip* self, const char* data, long long size);
bool K7Zip_OpenArchive(K7Zip* self, int mode);
bool K7Zip_CloseArchive(K7Zip* self);
void K7Zip_VirtualHook(K7Zip* self, int id, void* data);
void K7Zip_OnDoWriteSymLink(K7Zip* self, intptr_t slot);
bool K7Zip_SuperDoWriteSymLink(K7Zip* self, const libqt_string name, const libqt_string target, const libqt_string user, const libqt_string group, mode_t perm, const QDateTime* atime, const QDateTime* mtime, const QDateTime* ctime);
void K7Zip_OnDoWriteDir(K7Zip* self, intptr_t slot);
bool K7Zip_SuperDoWriteDir(K7Zip* self, const libqt_string name, const libqt_string user, const libqt_string group, mode_t perm, const QDateTime* atime, const QDateTime* mtime, const QDateTime* ctime);
void K7Zip_OnDoPrepareWriting(K7Zip* self, intptr_t slot);
bool K7Zip_SuperDoPrepareWriting(K7Zip* self, const libqt_string name, const libqt_string user, const libqt_string group, long long size, mode_t perm, const QDateTime* atime, const QDateTime* mtime, const QDateTime* ctime);
void K7Zip_OnDoFinishWriting(K7Zip* self, intptr_t slot);
bool K7Zip_SuperDoFinishWriting(K7Zip* self, long long size);
void K7Zip_OnDoWriteData(K7Zip* self, intptr_t slot);
bool K7Zip_SuperDoWriteData(K7Zip* self, const char* data, long long size);
void K7Zip_OnOpenArchive(K7Zip* self, intptr_t slot);
bool K7Zip_SuperOpenArchive(K7Zip* self, int mode);
void K7Zip_OnCloseArchive(K7Zip* self, intptr_t slot);
bool K7Zip_SuperCloseArchive(K7Zip* self);
void K7Zip_OnVirtualHook(K7Zip* self, intptr_t slot);
void K7Zip_SuperVirtualHook(K7Zip* self, int id, void* data);
bool K7Zip_Open(K7Zip* self, int mode);
void K7Zip_OnOpen(K7Zip* self, intptr_t slot);
bool K7Zip_SuperOpen(K7Zip* self, int mode);
bool K7Zip_Close(K7Zip* self);
void K7Zip_OnClose(K7Zip* self, intptr_t slot);
bool K7Zip_SuperClose(K7Zip* self);
KArchiveDirectory* K7Zip_RootDir(K7Zip* self);
void K7Zip_OnRootDir(K7Zip* self, intptr_t slot);
KArchiveDirectory* K7Zip_SuperRootDir(K7Zip* self);
bool K7Zip_CreateDevice(K7Zip* self, int mode);
void K7Zip_OnCreateDevice(K7Zip* self, intptr_t slot);
bool K7Zip_SuperCreateDevice(K7Zip* self, int mode);
void K7Zip_SetErrorString(K7Zip* self, const libqt_string errorStr);
void K7Zip_OnSetErrorString(K7Zip* self, intptr_t slot);
void K7Zip_SuperSetErrorString(K7Zip* self, const libqt_string errorStr);
KArchiveDirectory* K7Zip_FindOrCreate(K7Zip* self, const libqt_string path);
void K7Zip_OnFindOrCreate(K7Zip* self, intptr_t slot);
KArchiveDirectory* K7Zip_SuperFindOrCreate(K7Zip* self, const libqt_string path);
void K7Zip_SetDevice(K7Zip* self, QIODevice* dev);
void K7Zip_OnSetDevice(K7Zip* self, intptr_t slot);
void K7Zip_SuperSetDevice(K7Zip* self, QIODevice* dev);
void K7Zip_SetRootDir(K7Zip* self, KArchiveDirectory* rootDir);
void K7Zip_OnSetRootDir(K7Zip* self, intptr_t slot);
void K7Zip_SuperSetRootDir(K7Zip* self, KArchiveDirectory* rootDir);
void K7Zip_Delete(K7Zip* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
