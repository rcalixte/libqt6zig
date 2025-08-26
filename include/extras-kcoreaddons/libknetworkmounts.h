#pragma once
#ifndef SRC_EXTRAS_KCOREADDONSC_LIBKNETWORKMOUNTS_H
#define SRC_EXTRAS_KCOREADDONSC_LIBKNETWORKMOUNTS_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KNetworkMounts KNetworkMounts;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
#endif

QMetaObject* KNetworkMounts_MetaObject(const KNetworkMounts* self);
void* KNetworkMounts_Metacast(KNetworkMounts* self, const char* param1);
int KNetworkMounts_Metacall(KNetworkMounts* self, int param1, int param2, void** param3);
libqt_string KNetworkMounts_Tr(const char* s);
KNetworkMounts* KNetworkMounts_Self();
bool KNetworkMounts_IsSlowPath(KNetworkMounts* self, const libqt_string path);
bool KNetworkMounts_IsOptionEnabledForPath(KNetworkMounts* self, const libqt_string path, int option);
bool KNetworkMounts_IsEnabled(const KNetworkMounts* self);
void KNetworkMounts_SetEnabled(KNetworkMounts* self, bool value);
bool KNetworkMounts_IsOptionEnabled(const KNetworkMounts* self, const int option);
void KNetworkMounts_SetOption(KNetworkMounts* self, const int option, const bool value);
libqt_list /* of libqt_string */ KNetworkMounts_Paths(const KNetworkMounts* self);
void KNetworkMounts_SetPaths(KNetworkMounts* self, const libqt_list /* of libqt_string */ paths, int typeVal);
void KNetworkMounts_AddPath(KNetworkMounts* self, const libqt_string path, int typeVal);
libqt_string KNetworkMounts_CanonicalSymlinkPath(KNetworkMounts* self, const libqt_string path);
void KNetworkMounts_ClearCache(KNetworkMounts* self);
void KNetworkMounts_Sync(KNetworkMounts* self);
libqt_string KNetworkMounts_Tr2(const char* s, const char* c);
libqt_string KNetworkMounts_Tr3(const char* s, const char* c, int n);
bool KNetworkMounts_IsSlowPath2(KNetworkMounts* self, const libqt_string path, int typeVal);
bool KNetworkMounts_IsOptionEnabled2(const KNetworkMounts* self, const int option, const bool defaultValue);
libqt_list /* of libqt_string */ KNetworkMounts_Paths1(const KNetworkMounts* self, int typeVal);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
