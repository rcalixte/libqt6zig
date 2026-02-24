#pragma once
#ifndef SRC_EXTRAS_KARCHIVEC_LIBKARCHIVEDIRECTORY_H
#define SRC_EXTRAS_KARCHIVEC_LIBKARCHIVEDIRECTORY_H

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
typedef struct KArchiveEntry KArchiveEntry;
typedef struct KArchiveFile KArchiveFile;
typedef struct QDateTime QDateTime;
#endif

KArchiveDirectory* KArchiveDirectory_new(KArchive* archive, const libqt_string name, int access, const QDateTime* date, const libqt_string user, const libqt_string group, const libqt_string symlink);
KArchiveDirectory* KArchiveDirectory_new2(const KArchiveDirectory* param1);
libqt_list /* of libqt_string */ KArchiveDirectory_Entries(const KArchiveDirectory* self);
KArchiveEntry* KArchiveDirectory_Entry(const KArchiveDirectory* self, const libqt_string name);
KArchiveFile* KArchiveDirectory_File(const KArchiveDirectory* self, const libqt_string name);
void KArchiveDirectory_AddEntry(KArchiveDirectory* self, KArchiveEntry* param1);
bool KArchiveDirectory_AddEntryV2(KArchiveDirectory* self, KArchiveEntry* param1);
void KArchiveDirectory_RemoveEntry(KArchiveDirectory* self, KArchiveEntry* param1);
bool KArchiveDirectory_RemoveEntryV2(KArchiveDirectory* self, KArchiveEntry* param1);
bool KArchiveDirectory_IsDirectory(const KArchiveDirectory* self);
bool KArchiveDirectory_CopyTo(const KArchiveDirectory* self, const libqt_string dest);
void KArchiveDirectory_VirtualHook(KArchiveDirectory* self, int id, void* data);
bool KArchiveDirectory_CopyTo2(const KArchiveDirectory* self, const libqt_string dest, bool recursive);
void KArchiveDirectory_OnIsDirectory(const KArchiveDirectory* self, intptr_t slot);
bool KArchiveDirectory_SuperIsDirectory(const KArchiveDirectory* self);
void KArchiveDirectory_OnVirtualHook(KArchiveDirectory* self, intptr_t slot);
void KArchiveDirectory_SuperVirtualHook(KArchiveDirectory* self, int id, void* data);
bool KArchiveDirectory_IsFile(const KArchiveDirectory* self);
void KArchiveDirectory_OnIsFile(const KArchiveDirectory* self, intptr_t slot);
bool KArchiveDirectory_SuperIsFile(const KArchiveDirectory* self);
KArchive* KArchiveDirectory_Archive(const KArchiveDirectory* self);
void KArchiveDirectory_OnArchive(const KArchiveDirectory* self, intptr_t slot);
KArchive* KArchiveDirectory_SuperArchive(const KArchiveDirectory* self);
void KArchiveDirectory_Delete(KArchiveDirectory* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
