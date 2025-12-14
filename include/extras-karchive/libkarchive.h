#pragma once
#ifndef SRC_EXTRAS_KARCHIVEC_LIBKARCHIVE_H
#define SRC_EXTRAS_KARCHIVEC_LIBKARCHIVE_H

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
typedef struct QByteArrayView QByteArrayView;
typedef struct QDateTime QDateTime;
typedef struct QIODevice QIODevice;
#endif

bool KArchive_Open(KArchive* self, int mode);
bool KArchive_Close(KArchive* self);
libqt_string KArchive_ErrorString(const KArchive* self);
bool KArchive_IsOpen(const KArchive* self);
int KArchive_Mode(const KArchive* self);
QIODevice* KArchive_Device(const KArchive* self);
libqt_string KArchive_FileName(const KArchive* self);
KArchiveDirectory* KArchive_Directory(const KArchive* self);
bool KArchive_AddLocalFile(KArchive* self, const libqt_string fileName, const libqt_string destName);
bool KArchive_AddLocalDirectory(KArchive* self, const libqt_string path, const libqt_string destName);
bool KArchive_WriteDir(KArchive* self, const libqt_string name);
bool KArchive_WriteSymLink(KArchive* self, const libqt_string name, const libqt_string target);
bool KArchive_WriteFile(KArchive* self, const libqt_string name, libqt_string data);
bool KArchive_PrepareWriting(KArchive* self, const libqt_string name, const libqt_string user, const libqt_string group, long long size);
bool KArchive_WriteData(KArchive* self, const char* data, long long size);
bool KArchive_WriteData2(KArchive* self, libqt_string data);
bool KArchive_FinishWriting(KArchive* self, long long size);
bool KArchive_WriteDir2(KArchive* self, const libqt_string name, const libqt_string user);
bool KArchive_WriteDir3(KArchive* self, const libqt_string name, const libqt_string user, const libqt_string group);
bool KArchive_WriteDir4(KArchive* self, const libqt_string name, const libqt_string user, const libqt_string group, mode_t perm);
bool KArchive_WriteDir5(KArchive* self, const libqt_string name, const libqt_string user, const libqt_string group, mode_t perm, const QDateTime* atime);
bool KArchive_WriteDir6(KArchive* self, const libqt_string name, const libqt_string user, const libqt_string group, mode_t perm, const QDateTime* atime, const QDateTime* mtime);
bool KArchive_WriteDir7(KArchive* self, const libqt_string name, const libqt_string user, const libqt_string group, mode_t perm, const QDateTime* atime, const QDateTime* mtime, const QDateTime* ctime);
bool KArchive_WriteSymLink3(KArchive* self, const libqt_string name, const libqt_string target, const libqt_string user);
bool KArchive_WriteSymLink4(KArchive* self, const libqt_string name, const libqt_string target, const libqt_string user, const libqt_string group);
bool KArchive_WriteSymLink5(KArchive* self, const libqt_string name, const libqt_string target, const libqt_string user, const libqt_string group, mode_t perm);
bool KArchive_WriteSymLink6(KArchive* self, const libqt_string name, const libqt_string target, const libqt_string user, const libqt_string group, mode_t perm, const QDateTime* atime);
bool KArchive_WriteSymLink7(KArchive* self, const libqt_string name, const libqt_string target, const libqt_string user, const libqt_string group, mode_t perm, const QDateTime* atime, const QDateTime* mtime);
bool KArchive_WriteSymLink8(KArchive* self, const libqt_string name, const libqt_string target, const libqt_string user, const libqt_string group, mode_t perm, const QDateTime* atime, const QDateTime* mtime, const QDateTime* ctime);
bool KArchive_WriteFile3(KArchive* self, const libqt_string name, libqt_string data, mode_t perm);
bool KArchive_WriteFile4(KArchive* self, const libqt_string name, libqt_string data, mode_t perm, const libqt_string user);
bool KArchive_WriteFile5(KArchive* self, const libqt_string name, libqt_string data, mode_t perm, const libqt_string user, const libqt_string group);
bool KArchive_WriteFile6(KArchive* self, const libqt_string name, libqt_string data, mode_t perm, const libqt_string user, const libqt_string group, const QDateTime* atime);
bool KArchive_WriteFile7(KArchive* self, const libqt_string name, libqt_string data, mode_t perm, const libqt_string user, const libqt_string group, const QDateTime* atime, const QDateTime* mtime);
bool KArchive_WriteFile8(KArchive* self, const libqt_string name, libqt_string data, mode_t perm, const libqt_string user, const libqt_string group, const QDateTime* atime, const QDateTime* mtime, const QDateTime* ctime);
bool KArchive_PrepareWriting5(KArchive* self, const libqt_string name, const libqt_string user, const libqt_string group, long long size, mode_t perm);
bool KArchive_PrepareWriting6(KArchive* self, const libqt_string name, const libqt_string user, const libqt_string group, long long size, mode_t perm, const QDateTime* atime);
bool KArchive_PrepareWriting7(KArchive* self, const libqt_string name, const libqt_string user, const libqt_string group, long long size, mode_t perm, const QDateTime* atime, const QDateTime* mtime);
bool KArchive_PrepareWriting8(KArchive* self, const libqt_string name, const libqt_string user, const libqt_string group, long long size, mode_t perm, const QDateTime* atime, const QDateTime* mtime, const QDateTime* ctime);
void KArchive_Delete(KArchive* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
