#pragma once
#ifndef SRC_EXTRAS_KARCHIVEC_LIBKARCHIVEENTRY_H
#define SRC_EXTRAS_KARCHIVEC_LIBKARCHIVEENTRY_H

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
typedef struct QDateTime QDateTime;
#endif

KArchiveEntry* KArchiveEntry_new(KArchive* archive, const libqt_string name, int access, const QDateTime* date, const libqt_string user, const libqt_string group, const libqt_string symlink);
QDateTime* KArchiveEntry_Date(const KArchiveEntry* self);
libqt_string KArchiveEntry_Name(const KArchiveEntry* self);
mode_t KArchiveEntry_Permissions(const KArchiveEntry* self);
libqt_string KArchiveEntry_User(const KArchiveEntry* self);
libqt_string KArchiveEntry_Group(const KArchiveEntry* self);
libqt_string KArchiveEntry_SymLinkTarget(const KArchiveEntry* self);
bool KArchiveEntry_IsFile(const KArchiveEntry* self);
bool KArchiveEntry_IsDirectory(const KArchiveEntry* self);
void KArchiveEntry_VirtualHook(KArchiveEntry* self, int id, void* data);
void KArchiveEntry_OnIsFile(const KArchiveEntry* self, intptr_t slot);
bool KArchiveEntry_QBaseIsFile(const KArchiveEntry* self);
void KArchiveEntry_OnIsDirectory(const KArchiveEntry* self, intptr_t slot);
bool KArchiveEntry_QBaseIsDirectory(const KArchiveEntry* self);
void KArchiveEntry_OnVirtualHook(KArchiveEntry* self, intptr_t slot);
void KArchiveEntry_QBaseVirtualHook(KArchiveEntry* self, int id, void* data);
KArchive* KArchiveEntry_Archive(const KArchiveEntry* self);
void KArchiveEntry_OnArchive(const KArchiveEntry* self, intptr_t slot);
KArchive* KArchiveEntry_QBaseArchive(const KArchiveEntry* self);
void KArchiveEntry_Delete(KArchiveEntry* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
