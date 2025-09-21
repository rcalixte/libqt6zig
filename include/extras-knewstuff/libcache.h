#pragma once
#ifndef SRC_EXTRAS_KNEWSTUFFC_LIBCACHE_H
#define SRC_EXTRAS_KNEWSTUFFC_LIBCACHE_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KNSCore__Cache)
typedef KNSCore::Cache KNSCore__Cache;
#endif
typedef KNSCore::Entry KNSCore__Entry;
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KNSCore__Provider__SearchRequest)
typedef KNSCore::Provider::SearchRequest KNSCore__Provider__SearchRequest;
#endif
#else
typedef struct KNSCore__Cache KNSCore__Cache;
typedef struct KNSCore__Entry KNSCore__Entry;
typedef struct KNSCore__Provider__SearchRequest KNSCore__Provider__SearchRequest;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
#endif

QMetaObject* KNSCore__Cache_MetaObject(const KNSCore__Cache* self);
void* KNSCore__Cache_Metacast(KNSCore__Cache* self, const char* param1);
int KNSCore__Cache_Metacall(KNSCore__Cache* self, int param1, int param2, void** param3);
libqt_string KNSCore__Cache_Tr(const char* s);
void KNSCore__Cache_ReadRegistry(KNSCore__Cache* self);
libqt_list /* of KNSCore__Entry* */ KNSCore__Cache_RegistryForProvider(KNSCore__Cache* self, const libqt_string providerId);
libqt_list /* of KNSCore__Entry* */ KNSCore__Cache_Registry(const KNSCore__Cache* self);
void KNSCore__Cache_WriteRegistry(KNSCore__Cache* self);
void KNSCore__Cache_InsertRequest(KNSCore__Cache* self, const KNSCore__Provider__SearchRequest* param1, const libqt_list /* of KNSCore__Entry* */ entries);
libqt_list /* of KNSCore__Entry* */ KNSCore__Cache_RequestFromCache(KNSCore__Cache* self, const KNSCore__Provider__SearchRequest* param1);
void KNSCore__Cache_RemoveDeletedEntries(KNSCore__Cache* self);
KNSCore__Entry* KNSCore__Cache_EntryFromInstalledFile(const KNSCore__Cache* self, const libqt_string installedFile);
void KNSCore__Cache_EntryChanged(KNSCore__Cache* self, const KNSCore__Entry* entry);
void KNSCore__Cache_RegisterChangedEntry(KNSCore__Cache* self, const KNSCore__Entry* entry);
libqt_string KNSCore__Cache_Tr2(const char* s, const char* c);
libqt_string KNSCore__Cache_Tr3(const char* s, const char* c, int n);
void KNSCore__Cache_Delete(KNSCore__Cache* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
