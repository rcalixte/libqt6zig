#pragma once
#ifndef SRC_EXTRAS_KNEWSTUFFC_LIBPROVIDERCORE_H
#define SRC_EXTRAS_KNEWSTUFFC_LIBPROVIDERCORE_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KNSCore__ProviderCore)
typedef KNSCore::ProviderCore KNSCore__ProviderCore;
#endif
#else
typedef struct KNSCore__ProviderCore KNSCore__ProviderCore;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QUrl QUrl;
#endif

QMetaObject* KNSCore__ProviderCore_MetaObject(const KNSCore__ProviderCore* self);
void* KNSCore__ProviderCore_Metacast(KNSCore__ProviderCore* self, const char* param1);
int KNSCore__ProviderCore_Metacall(KNSCore__ProviderCore* self, int param1, int param2, void** param3);
libqt_string KNSCore__ProviderCore_Tr(const char* s);
libqt_string KNSCore__ProviderCore_Version(const KNSCore__ProviderCore* self);
QUrl* KNSCore__ProviderCore_Website(const KNSCore__ProviderCore* self);
QUrl* KNSCore__ProviderCore_Host(const KNSCore__ProviderCore* self);
libqt_string KNSCore__ProviderCore_ContactEmail(const KNSCore__ProviderCore* self);
bool KNSCore__ProviderCore_SupportsSsl(const KNSCore__ProviderCore* self);
void KNSCore__ProviderCore_BasicsLoaded(KNSCore__ProviderCore* self);
void KNSCore__ProviderCore_Connect_BasicsLoaded(KNSCore__ProviderCore* self, intptr_t slot);
libqt_string KNSCore__ProviderCore_Tr2(const char* s, const char* c);
libqt_string KNSCore__ProviderCore_Tr3(const char* s, const char* c, int n);
void KNSCore__ProviderCore_Delete(KNSCore__ProviderCore* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
