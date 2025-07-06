#pragma once
#ifndef SRCC_LIBQLOCKFILE_H
#define SRCC_LIBQLOCKFILE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QLockFile QLockFile;
#endif

QLockFile* QLockFile_new(const libqt_string fileName);
libqt_string QLockFile_FileName(const QLockFile* self);
bool QLockFile_Lock(QLockFile* self);
bool QLockFile_TryLock(QLockFile* self, int timeout);
void QLockFile_Unlock(QLockFile* self);
void QLockFile_SetStaleLockTime(QLockFile* self, int staleLockTime);
int QLockFile_StaleLockTime(const QLockFile* self);
bool QLockFile_TryLock2(QLockFile* self);
bool QLockFile_IsLocked(const QLockFile* self);
bool QLockFile_RemoveStaleLockFile(QLockFile* self);
int QLockFile_Error(const QLockFile* self);
void QLockFile_Delete(QLockFile* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
