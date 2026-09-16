#pragma once
#ifndef QUICK_LIBQQUICKIMAGEPROVIDER_H
#define QUICK_LIBQQUICKIMAGEPROVIDER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QImage QImage;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QPixmap QPixmap;
typedef struct QQmlImageProviderBase QQmlImageProviderBase;
typedef struct QQuickAsyncImageProvider QQuickAsyncImageProvider;
typedef struct QQuickImageProvider QQuickImageProvider;
typedef struct QQuickImageResponse QQuickImageResponse;
typedef struct QQuickTextureFactory QQuickTextureFactory;
typedef struct QQuickWindow QQuickWindow;
typedef struct QSGTexture QSGTexture;
typedef struct QSize QSize;
typedef struct QTimerEvent QTimerEvent;
#endif

QQuickTextureFactory* QQuickTextureFactory_new();
QMetaObject* QQuickTextureFactory_MetaObject(const QQuickTextureFactory* self);
void* QQuickTextureFactory_Metacast(QQuickTextureFactory* self, const char* param1);
int QQuickTextureFactory_Metacall(QQuickTextureFactory* self, int param1, int param2, void** param3);
libqt_string QQuickTextureFactory_Tr(const char* s);
QSGTexture* QQuickTextureFactory_CreateTexture(const QQuickTextureFactory* self, QQuickWindow* window);
QSize* QQuickTextureFactory_TextureSize(const QQuickTextureFactory* self);
int QQuickTextureFactory_TextureByteCount(const QQuickTextureFactory* self);
QImage* QQuickTextureFactory_Image(const QQuickTextureFactory* self);
QQuickTextureFactory* QQuickTextureFactory_TextureFactoryForImage(const QImage* image);
libqt_string QQuickTextureFactory_Tr2(const char* s, const char* c);
libqt_string QQuickTextureFactory_Tr3(const char* s, const char* c, int n);
void QQuickTextureFactory_OnMetaObject(const QQuickTextureFactory* self, intptr_t slot);
QMetaObject* QQuickTextureFactory_SuperMetaObject(const QQuickTextureFactory* self);
void QQuickTextureFactory_OnMetacast(QQuickTextureFactory* self, intptr_t slot);
void* QQuickTextureFactory_SuperMetacast(QQuickTextureFactory* self, const char* param1);
void QQuickTextureFactory_OnMetacall(QQuickTextureFactory* self, intptr_t slot);
int QQuickTextureFactory_SuperMetacall(QQuickTextureFactory* self, int param1, int param2, void** param3);
void QQuickTextureFactory_OnCreateTexture(const QQuickTextureFactory* self, intptr_t slot);
QSGTexture* QQuickTextureFactory_SuperCreateTexture(const QQuickTextureFactory* self, QQuickWindow* window);
void QQuickTextureFactory_OnTextureSize(const QQuickTextureFactory* self, intptr_t slot);
QSize* QQuickTextureFactory_SuperTextureSize(const QQuickTextureFactory* self);
void QQuickTextureFactory_OnTextureByteCount(const QQuickTextureFactory* self, intptr_t slot);
int QQuickTextureFactory_SuperTextureByteCount(const QQuickTextureFactory* self);
void QQuickTextureFactory_OnImage(const QQuickTextureFactory* self, intptr_t slot);
QImage* QQuickTextureFactory_SuperImage(const QQuickTextureFactory* self);
bool QQuickTextureFactory_Event(QQuickTextureFactory* self, QEvent* event);
void QQuickTextureFactory_OnEvent(QQuickTextureFactory* self, intptr_t slot);
bool QQuickTextureFactory_SuperEvent(QQuickTextureFactory* self, QEvent* event);
bool QQuickTextureFactory_EventFilter(QQuickTextureFactory* self, QObject* watched, QEvent* event);
void QQuickTextureFactory_OnEventFilter(QQuickTextureFactory* self, intptr_t slot);
bool QQuickTextureFactory_SuperEventFilter(QQuickTextureFactory* self, QObject* watched, QEvent* event);
void QQuickTextureFactory_TimerEvent(QQuickTextureFactory* self, QTimerEvent* event);
void QQuickTextureFactory_OnTimerEvent(QQuickTextureFactory* self, intptr_t slot);
void QQuickTextureFactory_SuperTimerEvent(QQuickTextureFactory* self, QTimerEvent* event);
void QQuickTextureFactory_ChildEvent(QQuickTextureFactory* self, QChildEvent* event);
void QQuickTextureFactory_OnChildEvent(QQuickTextureFactory* self, intptr_t slot);
void QQuickTextureFactory_SuperChildEvent(QQuickTextureFactory* self, QChildEvent* event);
void QQuickTextureFactory_CustomEvent(QQuickTextureFactory* self, QEvent* event);
void QQuickTextureFactory_OnCustomEvent(QQuickTextureFactory* self, intptr_t slot);
void QQuickTextureFactory_SuperCustomEvent(QQuickTextureFactory* self, QEvent* event);
void QQuickTextureFactory_ConnectNotify(QQuickTextureFactory* self, const QMetaMethod* signal);
void QQuickTextureFactory_OnConnectNotify(QQuickTextureFactory* self, intptr_t slot);
void QQuickTextureFactory_SuperConnectNotify(QQuickTextureFactory* self, const QMetaMethod* signal);
void QQuickTextureFactory_DisconnectNotify(QQuickTextureFactory* self, const QMetaMethod* signal);
void QQuickTextureFactory_OnDisconnectNotify(QQuickTextureFactory* self, intptr_t slot);
void QQuickTextureFactory_SuperDisconnectNotify(QQuickTextureFactory* self, const QMetaMethod* signal);
QObject* QQuickTextureFactory_Sender(const QQuickTextureFactory* self);
void QQuickTextureFactory_OnSender(const QQuickTextureFactory* self, intptr_t slot);
QObject* QQuickTextureFactory_SuperSender(const QQuickTextureFactory* self);
int QQuickTextureFactory_SenderSignalIndex(const QQuickTextureFactory* self);
void QQuickTextureFactory_OnSenderSignalIndex(const QQuickTextureFactory* self, intptr_t slot);
int QQuickTextureFactory_SuperSenderSignalIndex(const QQuickTextureFactory* self);
int QQuickTextureFactory_Receivers(const QQuickTextureFactory* self, const char* signal);
void QQuickTextureFactory_OnReceivers(const QQuickTextureFactory* self, intptr_t slot);
int QQuickTextureFactory_SuperReceivers(const QQuickTextureFactory* self, const char* signal);
bool QQuickTextureFactory_IsSignalConnected(const QQuickTextureFactory* self, const QMetaMethod* signal);
void QQuickTextureFactory_OnIsSignalConnected(const QQuickTextureFactory* self, intptr_t slot);
bool QQuickTextureFactory_SuperIsSignalConnected(const QQuickTextureFactory* self, const QMetaMethod* signal);
void QQuickTextureFactory_Delete(QQuickTextureFactory* self);

QQuickImageResponse* QQuickImageResponse_new();
QMetaObject* QQuickImageResponse_MetaObject(const QQuickImageResponse* self);
void* QQuickImageResponse_Metacast(QQuickImageResponse* self, const char* param1);
int QQuickImageResponse_Metacall(QQuickImageResponse* self, int param1, int param2, void** param3);
libqt_string QQuickImageResponse_Tr(const char* s);
QQuickTextureFactory* QQuickImageResponse_TextureFactory(const QQuickImageResponse* self);
libqt_string QQuickImageResponse_ErrorString(const QQuickImageResponse* self);
void QQuickImageResponse_Cancel(QQuickImageResponse* self);
void QQuickImageResponse_Finished(QQuickImageResponse* self);
void QQuickImageResponse_Connect_Finished(QQuickImageResponse* self, intptr_t slot);
libqt_string QQuickImageResponse_Tr2(const char* s, const char* c);
libqt_string QQuickImageResponse_Tr3(const char* s, const char* c, int n);
void QQuickImageResponse_OnMetaObject(const QQuickImageResponse* self, intptr_t slot);
QMetaObject* QQuickImageResponse_SuperMetaObject(const QQuickImageResponse* self);
void QQuickImageResponse_OnMetacast(QQuickImageResponse* self, intptr_t slot);
void* QQuickImageResponse_SuperMetacast(QQuickImageResponse* self, const char* param1);
void QQuickImageResponse_OnMetacall(QQuickImageResponse* self, intptr_t slot);
int QQuickImageResponse_SuperMetacall(QQuickImageResponse* self, int param1, int param2, void** param3);
void QQuickImageResponse_OnTextureFactory(const QQuickImageResponse* self, intptr_t slot);
QQuickTextureFactory* QQuickImageResponse_SuperTextureFactory(const QQuickImageResponse* self);
void QQuickImageResponse_OnErrorString(const QQuickImageResponse* self, intptr_t slot);
libqt_string QQuickImageResponse_SuperErrorString(const QQuickImageResponse* self);
void QQuickImageResponse_OnCancel(QQuickImageResponse* self, intptr_t slot);
void QQuickImageResponse_SuperCancel(QQuickImageResponse* self);
bool QQuickImageResponse_Event(QQuickImageResponse* self, QEvent* event);
void QQuickImageResponse_OnEvent(QQuickImageResponse* self, intptr_t slot);
bool QQuickImageResponse_SuperEvent(QQuickImageResponse* self, QEvent* event);
bool QQuickImageResponse_EventFilter(QQuickImageResponse* self, QObject* watched, QEvent* event);
void QQuickImageResponse_OnEventFilter(QQuickImageResponse* self, intptr_t slot);
bool QQuickImageResponse_SuperEventFilter(QQuickImageResponse* self, QObject* watched, QEvent* event);
void QQuickImageResponse_TimerEvent(QQuickImageResponse* self, QTimerEvent* event);
void QQuickImageResponse_OnTimerEvent(QQuickImageResponse* self, intptr_t slot);
void QQuickImageResponse_SuperTimerEvent(QQuickImageResponse* self, QTimerEvent* event);
void QQuickImageResponse_ChildEvent(QQuickImageResponse* self, QChildEvent* event);
void QQuickImageResponse_OnChildEvent(QQuickImageResponse* self, intptr_t slot);
void QQuickImageResponse_SuperChildEvent(QQuickImageResponse* self, QChildEvent* event);
void QQuickImageResponse_CustomEvent(QQuickImageResponse* self, QEvent* event);
void QQuickImageResponse_OnCustomEvent(QQuickImageResponse* self, intptr_t slot);
void QQuickImageResponse_SuperCustomEvent(QQuickImageResponse* self, QEvent* event);
void QQuickImageResponse_ConnectNotify(QQuickImageResponse* self, const QMetaMethod* signal);
void QQuickImageResponse_OnConnectNotify(QQuickImageResponse* self, intptr_t slot);
void QQuickImageResponse_SuperConnectNotify(QQuickImageResponse* self, const QMetaMethod* signal);
void QQuickImageResponse_DisconnectNotify(QQuickImageResponse* self, const QMetaMethod* signal);
void QQuickImageResponse_OnDisconnectNotify(QQuickImageResponse* self, intptr_t slot);
void QQuickImageResponse_SuperDisconnectNotify(QQuickImageResponse* self, const QMetaMethod* signal);
QObject* QQuickImageResponse_Sender(const QQuickImageResponse* self);
void QQuickImageResponse_OnSender(const QQuickImageResponse* self, intptr_t slot);
QObject* QQuickImageResponse_SuperSender(const QQuickImageResponse* self);
int QQuickImageResponse_SenderSignalIndex(const QQuickImageResponse* self);
void QQuickImageResponse_OnSenderSignalIndex(const QQuickImageResponse* self, intptr_t slot);
int QQuickImageResponse_SuperSenderSignalIndex(const QQuickImageResponse* self);
int QQuickImageResponse_Receivers(const QQuickImageResponse* self, const char* signal);
void QQuickImageResponse_OnReceivers(const QQuickImageResponse* self, intptr_t slot);
int QQuickImageResponse_SuperReceivers(const QQuickImageResponse* self, const char* signal);
bool QQuickImageResponse_IsSignalConnected(const QQuickImageResponse* self, const QMetaMethod* signal);
void QQuickImageResponse_OnIsSignalConnected(const QQuickImageResponse* self, intptr_t slot);
bool QQuickImageResponse_SuperIsSignalConnected(const QQuickImageResponse* self, const QMetaMethod* signal);
void QQuickImageResponse_Delete(QQuickImageResponse* self);

QQuickImageProvider* QQuickImageProvider_new(int typeVal);
QQuickImageProvider* QQuickImageProvider_new2(int typeVal, int flags);
QMetaObject* QQuickImageProvider_MetaObject(const QQuickImageProvider* self);
void* QQuickImageProvider_Metacast(QQuickImageProvider* self, const char* param1);
int QQuickImageProvider_Metacall(QQuickImageProvider* self, int param1, int param2, void** param3);
libqt_string QQuickImageProvider_Tr(const char* s);
int QQuickImageProvider_ImageType(const QQuickImageProvider* self);
int QQuickImageProvider_Flags(const QQuickImageProvider* self);
QImage* QQuickImageProvider_RequestImage(QQuickImageProvider* self, const libqt_string id, QSize* size, const QSize* requestedSize);
QPixmap* QQuickImageProvider_RequestPixmap(QQuickImageProvider* self, const libqt_string id, QSize* size, const QSize* requestedSize);
QQuickTextureFactory* QQuickImageProvider_RequestTexture(QQuickImageProvider* self, const libqt_string id, QSize* size, const QSize* requestedSize);
libqt_string QQuickImageProvider_Tr2(const char* s, const char* c);
libqt_string QQuickImageProvider_Tr3(const char* s, const char* c, int n);
void QQuickImageProvider_OnMetaObject(const QQuickImageProvider* self, intptr_t slot);
QMetaObject* QQuickImageProvider_SuperMetaObject(const QQuickImageProvider* self);
void QQuickImageProvider_OnMetacast(QQuickImageProvider* self, intptr_t slot);
void* QQuickImageProvider_SuperMetacast(QQuickImageProvider* self, const char* param1);
void QQuickImageProvider_OnMetacall(QQuickImageProvider* self, intptr_t slot);
int QQuickImageProvider_SuperMetacall(QQuickImageProvider* self, int param1, int param2, void** param3);
void QQuickImageProvider_OnImageType(const QQuickImageProvider* self, intptr_t slot);
int QQuickImageProvider_SuperImageType(const QQuickImageProvider* self);
void QQuickImageProvider_OnFlags(const QQuickImageProvider* self, intptr_t slot);
int QQuickImageProvider_SuperFlags(const QQuickImageProvider* self);
void QQuickImageProvider_OnRequestImage(QQuickImageProvider* self, intptr_t slot);
QImage* QQuickImageProvider_SuperRequestImage(QQuickImageProvider* self, const libqt_string id, QSize* size, const QSize* requestedSize);
void QQuickImageProvider_OnRequestPixmap(QQuickImageProvider* self, intptr_t slot);
QPixmap* QQuickImageProvider_SuperRequestPixmap(QQuickImageProvider* self, const libqt_string id, QSize* size, const QSize* requestedSize);
void QQuickImageProvider_OnRequestTexture(QQuickImageProvider* self, intptr_t slot);
QQuickTextureFactory* QQuickImageProvider_SuperRequestTexture(QQuickImageProvider* self, const libqt_string id, QSize* size, const QSize* requestedSize);
bool QQuickImageProvider_Event(QQuickImageProvider* self, QEvent* event);
void QQuickImageProvider_OnEvent(QQuickImageProvider* self, intptr_t slot);
bool QQuickImageProvider_SuperEvent(QQuickImageProvider* self, QEvent* event);
bool QQuickImageProvider_EventFilter(QQuickImageProvider* self, QObject* watched, QEvent* event);
void QQuickImageProvider_OnEventFilter(QQuickImageProvider* self, intptr_t slot);
bool QQuickImageProvider_SuperEventFilter(QQuickImageProvider* self, QObject* watched, QEvent* event);
void QQuickImageProvider_TimerEvent(QQuickImageProvider* self, QTimerEvent* event);
void QQuickImageProvider_OnTimerEvent(QQuickImageProvider* self, intptr_t slot);
void QQuickImageProvider_SuperTimerEvent(QQuickImageProvider* self, QTimerEvent* event);
void QQuickImageProvider_ChildEvent(QQuickImageProvider* self, QChildEvent* event);
void QQuickImageProvider_OnChildEvent(QQuickImageProvider* self, intptr_t slot);
void QQuickImageProvider_SuperChildEvent(QQuickImageProvider* self, QChildEvent* event);
void QQuickImageProvider_CustomEvent(QQuickImageProvider* self, QEvent* event);
void QQuickImageProvider_OnCustomEvent(QQuickImageProvider* self, intptr_t slot);
void QQuickImageProvider_SuperCustomEvent(QQuickImageProvider* self, QEvent* event);
void QQuickImageProvider_ConnectNotify(QQuickImageProvider* self, const QMetaMethod* signal);
void QQuickImageProvider_OnConnectNotify(QQuickImageProvider* self, intptr_t slot);
void QQuickImageProvider_SuperConnectNotify(QQuickImageProvider* self, const QMetaMethod* signal);
void QQuickImageProvider_DisconnectNotify(QQuickImageProvider* self, const QMetaMethod* signal);
void QQuickImageProvider_OnDisconnectNotify(QQuickImageProvider* self, intptr_t slot);
void QQuickImageProvider_SuperDisconnectNotify(QQuickImageProvider* self, const QMetaMethod* signal);
QObject* QQuickImageProvider_Sender(const QQuickImageProvider* self);
void QQuickImageProvider_OnSender(const QQuickImageProvider* self, intptr_t slot);
QObject* QQuickImageProvider_SuperSender(const QQuickImageProvider* self);
int QQuickImageProvider_SenderSignalIndex(const QQuickImageProvider* self);
void QQuickImageProvider_OnSenderSignalIndex(const QQuickImageProvider* self, intptr_t slot);
int QQuickImageProvider_SuperSenderSignalIndex(const QQuickImageProvider* self);
int QQuickImageProvider_Receivers(const QQuickImageProvider* self, const char* signal);
void QQuickImageProvider_OnReceivers(const QQuickImageProvider* self, intptr_t slot);
int QQuickImageProvider_SuperReceivers(const QQuickImageProvider* self, const char* signal);
bool QQuickImageProvider_IsSignalConnected(const QQuickImageProvider* self, const QMetaMethod* signal);
void QQuickImageProvider_OnIsSignalConnected(const QQuickImageProvider* self, intptr_t slot);
bool QQuickImageProvider_SuperIsSignalConnected(const QQuickImageProvider* self, const QMetaMethod* signal);
void QQuickImageProvider_Delete(QQuickImageProvider* self);

QQuickAsyncImageProvider* QQuickAsyncImageProvider_new();
QQuickImageResponse* QQuickAsyncImageProvider_RequestImageResponse(QQuickAsyncImageProvider* self, const libqt_string id, const QSize* requestedSize);
void QQuickAsyncImageProvider_OnRequestImageResponse(QQuickAsyncImageProvider* self, intptr_t slot);
QQuickImageResponse* QQuickAsyncImageProvider_SuperRequestImageResponse(QQuickAsyncImageProvider* self, const libqt_string id, const QSize* requestedSize);
QMetaObject* QQuickAsyncImageProvider_MetaObject(const QQuickAsyncImageProvider* self);
void QQuickAsyncImageProvider_OnMetaObject(const QQuickAsyncImageProvider* self, intptr_t slot);
QMetaObject* QQuickAsyncImageProvider_SuperMetaObject(const QQuickAsyncImageProvider* self);
void* QQuickAsyncImageProvider_Metacast(QQuickAsyncImageProvider* self, const char* param1);
void QQuickAsyncImageProvider_OnMetacast(QQuickAsyncImageProvider* self, intptr_t slot);
void* QQuickAsyncImageProvider_SuperMetacast(QQuickAsyncImageProvider* self, const char* param1);
int QQuickAsyncImageProvider_Metacall(QQuickAsyncImageProvider* self, int param1, int param2, void** param3);
void QQuickAsyncImageProvider_OnMetacall(QQuickAsyncImageProvider* self, intptr_t slot);
int QQuickAsyncImageProvider_SuperMetacall(QQuickAsyncImageProvider* self, int param1, int param2, void** param3);
int QQuickAsyncImageProvider_ImageType(const QQuickAsyncImageProvider* self);
void QQuickAsyncImageProvider_OnImageType(const QQuickAsyncImageProvider* self, intptr_t slot);
int QQuickAsyncImageProvider_SuperImageType(const QQuickAsyncImageProvider* self);
int QQuickAsyncImageProvider_Flags(const QQuickAsyncImageProvider* self);
void QQuickAsyncImageProvider_OnFlags(const QQuickAsyncImageProvider* self, intptr_t slot);
int QQuickAsyncImageProvider_SuperFlags(const QQuickAsyncImageProvider* self);
QImage* QQuickAsyncImageProvider_RequestImage(QQuickAsyncImageProvider* self, const libqt_string id, QSize* size, const QSize* requestedSize);
void QQuickAsyncImageProvider_OnRequestImage(QQuickAsyncImageProvider* self, intptr_t slot);
QImage* QQuickAsyncImageProvider_SuperRequestImage(QQuickAsyncImageProvider* self, const libqt_string id, QSize* size, const QSize* requestedSize);
QPixmap* QQuickAsyncImageProvider_RequestPixmap(QQuickAsyncImageProvider* self, const libqt_string id, QSize* size, const QSize* requestedSize);
void QQuickAsyncImageProvider_OnRequestPixmap(QQuickAsyncImageProvider* self, intptr_t slot);
QPixmap* QQuickAsyncImageProvider_SuperRequestPixmap(QQuickAsyncImageProvider* self, const libqt_string id, QSize* size, const QSize* requestedSize);
QQuickTextureFactory* QQuickAsyncImageProvider_RequestTexture(QQuickAsyncImageProvider* self, const libqt_string id, QSize* size, const QSize* requestedSize);
void QQuickAsyncImageProvider_OnRequestTexture(QQuickAsyncImageProvider* self, intptr_t slot);
QQuickTextureFactory* QQuickAsyncImageProvider_SuperRequestTexture(QQuickAsyncImageProvider* self, const libqt_string id, QSize* size, const QSize* requestedSize);
bool QQuickAsyncImageProvider_Event(QQuickAsyncImageProvider* self, QEvent* event);
void QQuickAsyncImageProvider_OnEvent(QQuickAsyncImageProvider* self, intptr_t slot);
bool QQuickAsyncImageProvider_SuperEvent(QQuickAsyncImageProvider* self, QEvent* event);
bool QQuickAsyncImageProvider_EventFilter(QQuickAsyncImageProvider* self, QObject* watched, QEvent* event);
void QQuickAsyncImageProvider_OnEventFilter(QQuickAsyncImageProvider* self, intptr_t slot);
bool QQuickAsyncImageProvider_SuperEventFilter(QQuickAsyncImageProvider* self, QObject* watched, QEvent* event);
void QQuickAsyncImageProvider_TimerEvent(QQuickAsyncImageProvider* self, QTimerEvent* event);
void QQuickAsyncImageProvider_OnTimerEvent(QQuickAsyncImageProvider* self, intptr_t slot);
void QQuickAsyncImageProvider_SuperTimerEvent(QQuickAsyncImageProvider* self, QTimerEvent* event);
void QQuickAsyncImageProvider_ChildEvent(QQuickAsyncImageProvider* self, QChildEvent* event);
void QQuickAsyncImageProvider_OnChildEvent(QQuickAsyncImageProvider* self, intptr_t slot);
void QQuickAsyncImageProvider_SuperChildEvent(QQuickAsyncImageProvider* self, QChildEvent* event);
void QQuickAsyncImageProvider_CustomEvent(QQuickAsyncImageProvider* self, QEvent* event);
void QQuickAsyncImageProvider_OnCustomEvent(QQuickAsyncImageProvider* self, intptr_t slot);
void QQuickAsyncImageProvider_SuperCustomEvent(QQuickAsyncImageProvider* self, QEvent* event);
void QQuickAsyncImageProvider_ConnectNotify(QQuickAsyncImageProvider* self, const QMetaMethod* signal);
void QQuickAsyncImageProvider_OnConnectNotify(QQuickAsyncImageProvider* self, intptr_t slot);
void QQuickAsyncImageProvider_SuperConnectNotify(QQuickAsyncImageProvider* self, const QMetaMethod* signal);
void QQuickAsyncImageProvider_DisconnectNotify(QQuickAsyncImageProvider* self, const QMetaMethod* signal);
void QQuickAsyncImageProvider_OnDisconnectNotify(QQuickAsyncImageProvider* self, intptr_t slot);
void QQuickAsyncImageProvider_SuperDisconnectNotify(QQuickAsyncImageProvider* self, const QMetaMethod* signal);
QObject* QQuickAsyncImageProvider_Sender(const QQuickAsyncImageProvider* self);
void QQuickAsyncImageProvider_OnSender(const QQuickAsyncImageProvider* self, intptr_t slot);
QObject* QQuickAsyncImageProvider_SuperSender(const QQuickAsyncImageProvider* self);
int QQuickAsyncImageProvider_SenderSignalIndex(const QQuickAsyncImageProvider* self);
void QQuickAsyncImageProvider_OnSenderSignalIndex(const QQuickAsyncImageProvider* self, intptr_t slot);
int QQuickAsyncImageProvider_SuperSenderSignalIndex(const QQuickAsyncImageProvider* self);
int QQuickAsyncImageProvider_Receivers(const QQuickAsyncImageProvider* self, const char* signal);
void QQuickAsyncImageProvider_OnReceivers(const QQuickAsyncImageProvider* self, intptr_t slot);
int QQuickAsyncImageProvider_SuperReceivers(const QQuickAsyncImageProvider* self, const char* signal);
bool QQuickAsyncImageProvider_IsSignalConnected(const QQuickAsyncImageProvider* self, const QMetaMethod* signal);
void QQuickAsyncImageProvider_OnIsSignalConnected(const QQuickAsyncImageProvider* self, intptr_t slot);
bool QQuickAsyncImageProvider_SuperIsSignalConnected(const QQuickAsyncImageProvider* self, const QMetaMethod* signal);
void QQuickAsyncImageProvider_Delete(QQuickAsyncImageProvider* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
