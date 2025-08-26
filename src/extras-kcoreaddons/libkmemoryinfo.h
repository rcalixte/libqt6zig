#pragma once
#ifndef SRC_EXTRAS_KCOREADDONSC_LIBKMEMORYINFO_H
#define SRC_EXTRAS_KCOREADDONSC_LIBKMEMORYINFO_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KMemoryInfo KMemoryInfo;
#endif

KMemoryInfo* KMemoryInfo_new();
KMemoryInfo* KMemoryInfo_new2(const KMemoryInfo* other);
void KMemoryInfo_OperatorAssign(KMemoryInfo* self, const KMemoryInfo* other);
bool KMemoryInfo_OperatorEqual(const KMemoryInfo* self, const KMemoryInfo* other);
bool KMemoryInfo_OperatorNotEqual(const KMemoryInfo* self, const KMemoryInfo* other);
bool KMemoryInfo_IsNull(const KMemoryInfo* self);
unsigned long long KMemoryInfo_TotalPhysical(const KMemoryInfo* self);
unsigned long long KMemoryInfo_FreePhysical(const KMemoryInfo* self);
unsigned long long KMemoryInfo_AvailablePhysical(const KMemoryInfo* self);
unsigned long long KMemoryInfo_Cached(const KMemoryInfo* self);
unsigned long long KMemoryInfo_Buffers(const KMemoryInfo* self);
unsigned long long KMemoryInfo_TotalSwapFile(const KMemoryInfo* self);
unsigned long long KMemoryInfo_FreeSwapFile(const KMemoryInfo* self);
void KMemoryInfo_Delete(KMemoryInfo* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
