#pragma once
#ifndef SRC_EXTRAS_KIOC_LIBKFILE_H
#define SRC_EXTRAS_KIOC_LIBKFILE_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KFile KFile;
#endif

KFile* KFile_new(const KFile* other);
KFile* KFile_new2(KFile* other);
void KFile_CopyAssign(KFile* self, KFile* other);
void KFile_MoveAssign(KFile* self, KFile* other);
bool KFile_IsSortByName(const int* sort);
bool KFile_IsSortBySize(const int* sort);
bool KFile_IsSortByDate(const int* sort);
bool KFile_IsSortByType(const int* sort);
bool KFile_IsSortDirsFirst(const int* sort);
bool KFile_IsSortCaseInsensitive(const int* sort);
bool KFile_IsDefaultView(const int* view);
bool KFile_IsSimpleView(const int* view);
bool KFile_IsDetailView(const int* view);
bool KFile_IsSeparateDirs(const int* view);
bool KFile_IsPreviewContents(const int* view);
bool KFile_IsPreviewInfo(const int* view);
bool KFile_IsTreeView(const int* view);
bool KFile_IsDetailTreeView(const int* view);
void KFile_Delete(KFile* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
