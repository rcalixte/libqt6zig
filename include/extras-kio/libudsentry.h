#pragma once
#ifndef SRC_EXTRAS_KIOC_LIBUDSENTRY_H
#define SRC_EXTRAS_KIOC_LIBUDSENTRY_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
typedef KIO::UDSEntry KIO__UDSEntry;
#else
typedef struct KIO__UDSEntry KIO__UDSEntry;
#endif

KIO__UDSEntry* KIO__UDSEntry_new();
KIO__UDSEntry* KIO__UDSEntry_new2(const KIO__UDSEntry* param1);
void KIO__UDSEntry_OperatorAssign(KIO__UDSEntry* self, const KIO__UDSEntry* param1);
libqt_string KIO__UDSEntry_StringValue(const KIO__UDSEntry* self, unsigned int field);
long long KIO__UDSEntry_NumberValue(const KIO__UDSEntry* self, unsigned int field);
bool KIO__UDSEntry_IsDir(const KIO__UDSEntry* self);
bool KIO__UDSEntry_IsLink(const KIO__UDSEntry* self);
void KIO__UDSEntry_Reserve(KIO__UDSEntry* self, int size);
void KIO__UDSEntry_FastInsert(KIO__UDSEntry* self, unsigned int field, const libqt_string value);
void KIO__UDSEntry_FastInsert2(KIO__UDSEntry* self, unsigned int field, long long l);
int KIO__UDSEntry_Count(const KIO__UDSEntry* self);
bool KIO__UDSEntry_Contains(const KIO__UDSEntry* self, unsigned int field);
libqt_list /* of unsigned int */ KIO__UDSEntry_Fields(const KIO__UDSEntry* self);
void KIO__UDSEntry_Clear(KIO__UDSEntry* self);
void KIO__UDSEntry_Replace(KIO__UDSEntry* self, unsigned int field, const libqt_string value);
void KIO__UDSEntry_Replace2(KIO__UDSEntry* self, unsigned int field, long long l);
long long KIO__UDSEntry_NumberValue2(const KIO__UDSEntry* self, unsigned int field, long long defaultValue);
void KIO__UDSEntry_Delete(KIO__UDSEntry* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
