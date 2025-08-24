#pragma once
#ifndef SRC_EXTRAS_KCONFIGC_LIBKAUTHORIZED_H
#define SRC_EXTRAS_KCONFIGC_LIBKAUTHORIZED_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KAuthorized KAuthorized;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
#endif

QMetaObject* KAuthorized_MetaObject(const KAuthorized* self);
void* KAuthorized_Metacast(KAuthorized* self, const char* param1);
int KAuthorized_Metacall(KAuthorized* self, int param1, int param2, void** param3);
libqt_string KAuthorized_Tr(const char* s);
bool KAuthorized_Authorize(const libqt_string action);
bool KAuthorized_Authorize2(int action);
bool KAuthorized_AuthorizeAction(const libqt_string action);
bool KAuthorized_AuthorizeAction2(int action);
bool KAuthorized_AuthorizeControlModule(const libqt_string pluginId);
libqt_string KAuthorized_Tr2(const char* s, const char* c);
libqt_string KAuthorized_Tr3(const char* s, const char* c, int n);
void KAuthorized_Delete(KAuthorized* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
