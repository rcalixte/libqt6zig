#pragma once
#ifndef EXTRAS_KICONTHEMES_LIBKQUICKICONPROVIDER_H
#define EXTRAS_KICONTHEMES_LIBKQUICKICONPROVIDER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KQuickIconProvider KQuickIconProvider;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QImage QImage;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QPixmap QPixmap;
typedef struct QQmlImageProviderBase QQmlImageProviderBase;
typedef struct QQuickImageProvider QQuickImageProvider;
typedef struct QQuickTextureFactory QQuickTextureFactory;
typedef struct QSize QSize;
typedef struct QTimerEvent QTimerEvent;
#endif

KQuickIconProvider* KQuickIconProvider_new();
QPixmap* KQuickIconProvider_RequestPixmap(KQuickIconProvider* self, const libqt_string id, QSize* size, const QSize* requestedSize);
void KQuickIconProvider_OnRequestPixmap(KQuickIconProvider* self, intptr_t slot);
QPixmap* KQuickIconProvider_SuperRequestPixmap(KQuickIconProvider* self, const libqt_string id, QSize* size, const QSize* requestedSize);
QMetaObject* KQuickIconProvider_MetaObject(const KQuickIconProvider* self);
void KQuickIconProvider_OnMetaObject(const KQuickIconProvider* self, intptr_t slot);
QMetaObject* KQuickIconProvider_SuperMetaObject(const KQuickIconProvider* self);
void* KQuickIconProvider_Metacast(KQuickIconProvider* self, const char* param1);
void KQuickIconProvider_OnMetacast(KQuickIconProvider* self, intptr_t slot);
void* KQuickIconProvider_SuperMetacast(KQuickIconProvider* self, const char* param1);
int KQuickIconProvider_Metacall(KQuickIconProvider* self, int param1, int param2, void** param3);
void KQuickIconProvider_OnMetacall(KQuickIconProvider* self, intptr_t slot);
int KQuickIconProvider_SuperMetacall(KQuickIconProvider* self, int param1, int param2, void** param3);
int KQuickIconProvider_ImageType(const KQuickIconProvider* self);
void KQuickIconProvider_OnImageType(const KQuickIconProvider* self, intptr_t slot);
int KQuickIconProvider_SuperImageType(const KQuickIconProvider* self);
int KQuickIconProvider_Flags(const KQuickIconProvider* self);
void KQuickIconProvider_OnFlags(const KQuickIconProvider* self, intptr_t slot);
int KQuickIconProvider_SuperFlags(const KQuickIconProvider* self);
QImage* KQuickIconProvider_RequestImage(KQuickIconProvider* self, const libqt_string id, QSize* size, const QSize* requestedSize);
void KQuickIconProvider_OnRequestImage(KQuickIconProvider* self, intptr_t slot);
QImage* KQuickIconProvider_SuperRequestImage(KQuickIconProvider* self, const libqt_string id, QSize* size, const QSize* requestedSize);
QQuickTextureFactory* KQuickIconProvider_RequestTexture(KQuickIconProvider* self, const libqt_string id, QSize* size, const QSize* requestedSize);
void KQuickIconProvider_OnRequestTexture(KQuickIconProvider* self, intptr_t slot);
QQuickTextureFactory* KQuickIconProvider_SuperRequestTexture(KQuickIconProvider* self, const libqt_string id, QSize* size, const QSize* requestedSize);
bool KQuickIconProvider_Event(KQuickIconProvider* self, QEvent* event);
void KQuickIconProvider_OnEvent(KQuickIconProvider* self, intptr_t slot);
bool KQuickIconProvider_SuperEvent(KQuickIconProvider* self, QEvent* event);
bool KQuickIconProvider_EventFilter(KQuickIconProvider* self, QObject* watched, QEvent* event);
void KQuickIconProvider_OnEventFilter(KQuickIconProvider* self, intptr_t slot);
bool KQuickIconProvider_SuperEventFilter(KQuickIconProvider* self, QObject* watched, QEvent* event);
void KQuickIconProvider_TimerEvent(KQuickIconProvider* self, QTimerEvent* event);
void KQuickIconProvider_OnTimerEvent(KQuickIconProvider* self, intptr_t slot);
void KQuickIconProvider_SuperTimerEvent(KQuickIconProvider* self, QTimerEvent* event);
void KQuickIconProvider_ChildEvent(KQuickIconProvider* self, QChildEvent* event);
void KQuickIconProvider_OnChildEvent(KQuickIconProvider* self, intptr_t slot);
void KQuickIconProvider_SuperChildEvent(KQuickIconProvider* self, QChildEvent* event);
void KQuickIconProvider_CustomEvent(KQuickIconProvider* self, QEvent* event);
void KQuickIconProvider_OnCustomEvent(KQuickIconProvider* self, intptr_t slot);
void KQuickIconProvider_SuperCustomEvent(KQuickIconProvider* self, QEvent* event);
void KQuickIconProvider_ConnectNotify(KQuickIconProvider* self, const QMetaMethod* signal);
void KQuickIconProvider_OnConnectNotify(KQuickIconProvider* self, intptr_t slot);
void KQuickIconProvider_SuperConnectNotify(KQuickIconProvider* self, const QMetaMethod* signal);
void KQuickIconProvider_DisconnectNotify(KQuickIconProvider* self, const QMetaMethod* signal);
void KQuickIconProvider_OnDisconnectNotify(KQuickIconProvider* self, intptr_t slot);
void KQuickIconProvider_SuperDisconnectNotify(KQuickIconProvider* self, const QMetaMethod* signal);
QObject* KQuickIconProvider_Sender(const KQuickIconProvider* self);
void KQuickIconProvider_OnSender(const KQuickIconProvider* self, intptr_t slot);
QObject* KQuickIconProvider_SuperSender(const KQuickIconProvider* self);
int KQuickIconProvider_SenderSignalIndex(const KQuickIconProvider* self);
void KQuickIconProvider_OnSenderSignalIndex(const KQuickIconProvider* self, intptr_t slot);
int KQuickIconProvider_SuperSenderSignalIndex(const KQuickIconProvider* self);
int KQuickIconProvider_Receivers(const KQuickIconProvider* self, const char* signal);
void KQuickIconProvider_OnReceivers(const KQuickIconProvider* self, intptr_t slot);
int KQuickIconProvider_SuperReceivers(const KQuickIconProvider* self, const char* signal);
bool KQuickIconProvider_IsSignalConnected(const KQuickIconProvider* self, const QMetaMethod* signal);
void KQuickIconProvider_OnIsSignalConnected(const KQuickIconProvider* self, intptr_t slot);
bool KQuickIconProvider_SuperIsSignalConnected(const KQuickIconProvider* self, const QMetaMethod* signal);
void KQuickIconProvider_Delete(KQuickIconProvider* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
