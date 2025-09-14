#pragma once
#ifndef SRC_EXTRAS_KSERVICEC_LIBKSYCOCAENTRY_H
#define SRC_EXTRAS_KSERVICEC_LIBKSYCOCAENTRY_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KSycocaEntry KSycocaEntry;
typedef struct QSharedData QSharedData;
#endif

KSycocaEntry* KSycocaEntry_new();
bool KSycocaEntry_IsType(const KSycocaEntry* self, int t);
int KSycocaEntry_SycocaType(const KSycocaEntry* self);
libqt_string KSycocaEntry_Name(const KSycocaEntry* self);
libqt_string KSycocaEntry_EntryPath(const KSycocaEntry* self);
libqt_string KSycocaEntry_StorageId(const KSycocaEntry* self);
bool KSycocaEntry_IsValid(const KSycocaEntry* self);
bool KSycocaEntry_IsDeleted(const KSycocaEntry* self);
void KSycocaEntry_SetDeleted(KSycocaEntry* self, bool deleted);
bool KSycocaEntry_IsSeparator(const KSycocaEntry* self);
void KSycocaEntry_Delete(KSycocaEntry* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
