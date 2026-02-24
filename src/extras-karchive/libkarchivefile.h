#pragma once
#ifndef SRC_EXTRAS_KARCHIVEC_LIBKARCHIVEFILE_H
#define SRC_EXTRAS_KARCHIVEC_LIBKARCHIVEFILE_H

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
typedef struct KArchiveEntry KArchiveEntry;
typedef struct KArchiveFile KArchiveFile;
typedef struct QDateTime QDateTime;
typedef struct QIODevice QIODevice;
#endif

KArchiveFile* KArchiveFile_new(KArchive* archive, const libqt_string name, int access, const QDateTime* date, const libqt_string user, const libqt_string group, const libqt_string symlink, long long pos, long long size);
KArchiveFile* KArchiveFile_new2(const KArchiveFile* param1);
long long KArchiveFile_Position(const KArchiveFile* self);
long long KArchiveFile_Size(const KArchiveFile* self);
void KArchiveFile_SetSize(KArchiveFile* self, long long s);
libqt_string KArchiveFile_Data(const KArchiveFile* self);
QIODevice* KArchiveFile_CreateDevice(const KArchiveFile* self);
bool KArchiveFile_IsFile(const KArchiveFile* self);
bool KArchiveFile_CopyTo(const KArchiveFile* self, const libqt_string dest);
void KArchiveFile_VirtualHook(KArchiveFile* self, int id, void* data);
void KArchiveFile_OnData(const KArchiveFile* self, intptr_t slot);
libqt_string KArchiveFile_SuperData(const KArchiveFile* self);
void KArchiveFile_OnCreateDevice(const KArchiveFile* self, intptr_t slot);
QIODevice* KArchiveFile_SuperCreateDevice(const KArchiveFile* self);
void KArchiveFile_OnIsFile(const KArchiveFile* self, intptr_t slot);
bool KArchiveFile_SuperIsFile(const KArchiveFile* self);
void KArchiveFile_OnVirtualHook(KArchiveFile* self, intptr_t slot);
void KArchiveFile_SuperVirtualHook(KArchiveFile* self, int id, void* data);
bool KArchiveFile_IsDirectory(const KArchiveFile* self);
void KArchiveFile_OnIsDirectory(const KArchiveFile* self, intptr_t slot);
bool KArchiveFile_SuperIsDirectory(const KArchiveFile* self);
KArchive* KArchiveFile_Archive(const KArchiveFile* self);
void KArchiveFile_OnArchive(const KArchiveFile* self, intptr_t slot);
KArchive* KArchiveFile_SuperArchive(const KArchiveFile* self);
void KArchiveFile_Delete(KArchiveFile* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
