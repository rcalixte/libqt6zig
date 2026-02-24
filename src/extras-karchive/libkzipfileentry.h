#pragma once
#ifndef SRC_EXTRAS_KARCHIVEC_LIBKZIPFILEENTRY_H
#define SRC_EXTRAS_KARCHIVEC_LIBKZIPFILEENTRY_H

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
typedef struct KZip KZip;
typedef struct KZipFileEntry KZipFileEntry;
typedef struct QDateTime QDateTime;
typedef struct QIODevice QIODevice;
#endif

KZipFileEntry* KZipFileEntry_new(KZip* zip, const libqt_string name, int access, const QDateTime* date, const libqt_string user, const libqt_string group, const libqt_string symlink, const libqt_string path, long long start, long long uncompressedSize, int encoding, long long compressedSize);
KZipFileEntry* KZipFileEntry_new2(const KZipFileEntry* param1);
int KZipFileEntry_Encoding(const KZipFileEntry* self);
long long KZipFileEntry_CompressedSize(const KZipFileEntry* self);
void KZipFileEntry_SetCompressedSize(KZipFileEntry* self, long long compressedSize);
void KZipFileEntry_SetHeaderStart(KZipFileEntry* self, long long headerstart);
long long KZipFileEntry_HeaderStart(const KZipFileEntry* self);
unsigned long KZipFileEntry_Crc32(const KZipFileEntry* self);
void KZipFileEntry_SetCRC32(KZipFileEntry* self, unsigned long crc32);
libqt_string KZipFileEntry_Path(const KZipFileEntry* self);
libqt_string KZipFileEntry_Data(const KZipFileEntry* self);
QIODevice* KZipFileEntry_CreateDevice(const KZipFileEntry* self);
void KZipFileEntry_OnData(const KZipFileEntry* self, intptr_t slot);
libqt_string KZipFileEntry_SuperData(const KZipFileEntry* self);
void KZipFileEntry_OnCreateDevice(const KZipFileEntry* self, intptr_t slot);
QIODevice* KZipFileEntry_SuperCreateDevice(const KZipFileEntry* self);
bool KZipFileEntry_IsFile(const KZipFileEntry* self);
void KZipFileEntry_OnIsFile(const KZipFileEntry* self, intptr_t slot);
bool KZipFileEntry_SuperIsFile(const KZipFileEntry* self);
void KZipFileEntry_VirtualHook(KZipFileEntry* self, int id, void* data);
void KZipFileEntry_OnVirtualHook(KZipFileEntry* self, intptr_t slot);
void KZipFileEntry_SuperVirtualHook(KZipFileEntry* self, int id, void* data);
bool KZipFileEntry_IsDirectory(const KZipFileEntry* self);
void KZipFileEntry_OnIsDirectory(const KZipFileEntry* self, intptr_t slot);
bool KZipFileEntry_SuperIsDirectory(const KZipFileEntry* self);
KArchive* KZipFileEntry_Archive(const KZipFileEntry* self);
void KZipFileEntry_OnArchive(const KZipFileEntry* self, intptr_t slot);
KArchive* KZipFileEntry_SuperArchive(const KZipFileEntry* self);
void KZipFileEntry_Delete(KZipFileEntry* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
