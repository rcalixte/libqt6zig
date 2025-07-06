#pragma once
#ifndef SRC_WEBENGINEC_LIBQWEBENGINECLIENTHINTS_H
#define SRC_WEBENGINEC_LIBQWEBENGINECLIENTHINTS_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QVariant QVariant;
typedef struct QWebEngineClientHints QWebEngineClientHints;
#endif

QMetaObject* QWebEngineClientHints_MetaObject(const QWebEngineClientHints* self);
void* QWebEngineClientHints_Metacast(QWebEngineClientHints* self, const char* param1);
int QWebEngineClientHints_Metacall(QWebEngineClientHints* self, int param1, int param2, void** param3);
libqt_string QWebEngineClientHints_Tr(const char* s);
void QWebEngineClientHints_QmlMarkerUncreatable(QWebEngineClientHints* self);
libqt_string QWebEngineClientHints_Arch(const QWebEngineClientHints* self);
libqt_string QWebEngineClientHints_Platform(const QWebEngineClientHints* self);
libqt_string QWebEngineClientHints_Model(const QWebEngineClientHints* self);
bool QWebEngineClientHints_IsMobile(const QWebEngineClientHints* self);
libqt_string QWebEngineClientHints_FullVersion(const QWebEngineClientHints* self);
libqt_string QWebEngineClientHints_PlatformVersion(const QWebEngineClientHints* self);
libqt_string QWebEngineClientHints_Bitness(const QWebEngineClientHints* self);
libqt_map /* of libqt_string to QVariant* */ QWebEngineClientHints_FullVersionList(const QWebEngineClientHints* self);
bool QWebEngineClientHints_IsWow64(const QWebEngineClientHints* self);
void QWebEngineClientHints_SetArch(QWebEngineClientHints* self, const libqt_string arch);
void QWebEngineClientHints_SetPlatform(QWebEngineClientHints* self, const libqt_string platform);
void QWebEngineClientHints_SetModel(QWebEngineClientHints* self, const libqt_string model);
void QWebEngineClientHints_SetIsMobile(QWebEngineClientHints* self, bool isMobile);
void QWebEngineClientHints_SetFullVersion(QWebEngineClientHints* self, const libqt_string fullVersion);
void QWebEngineClientHints_SetPlatformVersion(QWebEngineClientHints* self, const libqt_string platformVersion);
void QWebEngineClientHints_SetBitness(QWebEngineClientHints* self, const libqt_string bitness);
void QWebEngineClientHints_SetFullVersionList(QWebEngineClientHints* self, const libqt_map /* of libqt_string to QVariant* */ fullVersionList);
void QWebEngineClientHints_SetIsWow64(QWebEngineClientHints* self, bool isWow64);
bool QWebEngineClientHints_IsAllClientHintsEnabled(QWebEngineClientHints* self);
void QWebEngineClientHints_SetAllClientHintsEnabled(QWebEngineClientHints* self, bool enabled);
void QWebEngineClientHints_ResetAll(QWebEngineClientHints* self);
libqt_string QWebEngineClientHints_Tr2(const char* s, const char* c);
libqt_string QWebEngineClientHints_Tr3(const char* s, const char* c, int n);
void QWebEngineClientHints_Delete(QWebEngineClientHints* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
