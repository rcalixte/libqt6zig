#pragma once
#ifndef SRC_EXTRAS_KIOC_LIBKSAMBASHARE_H
#define SRC_EXTRAS_KIOC_LIBKSAMBASHARE_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KSambaShare KSambaShare;
typedef struct KSambaShareData KSambaShareData;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
#endif

QMetaObject* KSambaShare_MetaObject(const KSambaShare* self);
void* KSambaShare_Metacast(KSambaShare* self, const char* param1);
int KSambaShare_Metacall(KSambaShare* self, int param1, int param2, void** param3);
libqt_string KSambaShare_Tr(const char* s);
KSambaShare* KSambaShare_Instance();
bool KSambaShare_IsDirectoryShared(const KSambaShare* self, const libqt_string path);
libqt_list /* of libqt_string */ KSambaShare_SharedDirectories(const KSambaShare* self);
bool KSambaShare_IsShareNameAvailable(const KSambaShare* self, const libqt_string name);
libqt_list /* of libqt_string */ KSambaShare_ShareNames(const KSambaShare* self);
KSambaShareData* KSambaShare_GetShareByName(const KSambaShare* self, const libqt_string name);
libqt_list /* of KSambaShareData* */ KSambaShare_GetSharesByPath(const KSambaShare* self, const libqt_string path);
libqt_string KSambaShare_LastSystemErrorString(const KSambaShare* self);
bool KSambaShare_AreGuestsAllowed(const KSambaShare* self);
void KSambaShare_Changed(KSambaShare* self);
void KSambaShare_Connect_Changed(KSambaShare* self, intptr_t slot);
libqt_string KSambaShare_Tr2(const char* s, const char* c);
libqt_string KSambaShare_Tr3(const char* s, const char* c, int n);
void KSambaShare_Delete(KSambaShare* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
