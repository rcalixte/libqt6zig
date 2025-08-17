#pragma once
#ifndef SRCC_LIBQOFFSCREENSURFACE_H
#define SRCC_LIBQOFFSCREENSURFACE_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QOffscreenSurface QOffscreenSurface;
typedef struct QScreen QScreen;
typedef struct QSize QSize;
typedef struct QSurface QSurface;
typedef struct QSurfaceFormat QSurfaceFormat;
typedef struct QTimerEvent QTimerEvent;
#endif

QOffscreenSurface* QOffscreenSurface_new();
QOffscreenSurface* QOffscreenSurface_new2(QScreen* screen);
QOffscreenSurface* QOffscreenSurface_new3(QScreen* screen, QObject* parent);
QMetaObject* QOffscreenSurface_MetaObject(const QOffscreenSurface* self);
void* QOffscreenSurface_Metacast(QOffscreenSurface* self, const char* param1);
int QOffscreenSurface_Metacall(QOffscreenSurface* self, int param1, int param2, void** param3);
void QOffscreenSurface_OnMetacall(QOffscreenSurface* self, intptr_t slot);
int QOffscreenSurface_QBaseMetacall(QOffscreenSurface* self, int param1, int param2, void** param3);
libqt_string QOffscreenSurface_Tr(const char* s);
int QOffscreenSurface_SurfaceType(const QOffscreenSurface* self);
void QOffscreenSurface_OnSurfaceType(const QOffscreenSurface* self, intptr_t slot);
int QOffscreenSurface_QBaseSurfaceType(const QOffscreenSurface* self);
void QOffscreenSurface_Create(QOffscreenSurface* self);
void QOffscreenSurface_Destroy(QOffscreenSurface* self);
bool QOffscreenSurface_IsValid(const QOffscreenSurface* self);
void QOffscreenSurface_SetFormat(QOffscreenSurface* self, const QSurfaceFormat* format);
QSurfaceFormat* QOffscreenSurface_Format(const QOffscreenSurface* self);
void QOffscreenSurface_OnFormat(const QOffscreenSurface* self, intptr_t slot);
QSurfaceFormat* QOffscreenSurface_QBaseFormat(const QOffscreenSurface* self);
QSurfaceFormat* QOffscreenSurface_RequestedFormat(const QOffscreenSurface* self);
QSize* QOffscreenSurface_Size(const QOffscreenSurface* self);
void QOffscreenSurface_OnSize(const QOffscreenSurface* self, intptr_t slot);
QSize* QOffscreenSurface_QBaseSize(const QOffscreenSurface* self);
QScreen* QOffscreenSurface_Screen(const QOffscreenSurface* self);
void QOffscreenSurface_SetScreen(QOffscreenSurface* self, QScreen* screen);
void QOffscreenSurface_ScreenChanged(QOffscreenSurface* self, QScreen* screen);
void QOffscreenSurface_Connect_ScreenChanged(QOffscreenSurface* self, intptr_t slot);
libqt_string QOffscreenSurface_Tr2(const char* s, const char* c);
libqt_string QOffscreenSurface_Tr3(const char* s, const char* c, int n);
bool QOffscreenSurface_Event(QOffscreenSurface* self, QEvent* event);
void QOffscreenSurface_OnEvent(QOffscreenSurface* self, intptr_t slot);
bool QOffscreenSurface_QBaseEvent(QOffscreenSurface* self, QEvent* event);
bool QOffscreenSurface_EventFilter(QOffscreenSurface* self, QObject* watched, QEvent* event);
void QOffscreenSurface_OnEventFilter(QOffscreenSurface* self, intptr_t slot);
bool QOffscreenSurface_QBaseEventFilter(QOffscreenSurface* self, QObject* watched, QEvent* event);
void QOffscreenSurface_TimerEvent(QOffscreenSurface* self, QTimerEvent* event);
void QOffscreenSurface_OnTimerEvent(QOffscreenSurface* self, intptr_t slot);
void QOffscreenSurface_QBaseTimerEvent(QOffscreenSurface* self, QTimerEvent* event);
void QOffscreenSurface_ChildEvent(QOffscreenSurface* self, QChildEvent* event);
void QOffscreenSurface_OnChildEvent(QOffscreenSurface* self, intptr_t slot);
void QOffscreenSurface_QBaseChildEvent(QOffscreenSurface* self, QChildEvent* event);
void QOffscreenSurface_CustomEvent(QOffscreenSurface* self, QEvent* event);
void QOffscreenSurface_OnCustomEvent(QOffscreenSurface* self, intptr_t slot);
void QOffscreenSurface_QBaseCustomEvent(QOffscreenSurface* self, QEvent* event);
void QOffscreenSurface_ConnectNotify(QOffscreenSurface* self, const QMetaMethod* signal);
void QOffscreenSurface_OnConnectNotify(QOffscreenSurface* self, intptr_t slot);
void QOffscreenSurface_QBaseConnectNotify(QOffscreenSurface* self, const QMetaMethod* signal);
void QOffscreenSurface_DisconnectNotify(QOffscreenSurface* self, const QMetaMethod* signal);
void QOffscreenSurface_OnDisconnectNotify(QOffscreenSurface* self, intptr_t slot);
void QOffscreenSurface_QBaseDisconnectNotify(QOffscreenSurface* self, const QMetaMethod* signal);
void* QOffscreenSurface_ResolveInterface(const QOffscreenSurface* self, const char* name, int revision);
void QOffscreenSurface_OnResolveInterface(const QOffscreenSurface* self, intptr_t slot);
void* QOffscreenSurface_QBaseResolveInterface(const QOffscreenSurface* self, const char* name, int revision);
QObject* QOffscreenSurface_Sender(const QOffscreenSurface* self);
void QOffscreenSurface_OnSender(const QOffscreenSurface* self, intptr_t slot);
QObject* QOffscreenSurface_QBaseSender(const QOffscreenSurface* self);
int QOffscreenSurface_SenderSignalIndex(const QOffscreenSurface* self);
void QOffscreenSurface_OnSenderSignalIndex(const QOffscreenSurface* self, intptr_t slot);
int QOffscreenSurface_QBaseSenderSignalIndex(const QOffscreenSurface* self);
int QOffscreenSurface_Receivers(const QOffscreenSurface* self, const char* signal);
void QOffscreenSurface_OnReceivers(const QOffscreenSurface* self, intptr_t slot);
int QOffscreenSurface_QBaseReceivers(const QOffscreenSurface* self, const char* signal);
bool QOffscreenSurface_IsSignalConnected(const QOffscreenSurface* self, const QMetaMethod* signal);
void QOffscreenSurface_OnIsSignalConnected(const QOffscreenSurface* self, intptr_t slot);
bool QOffscreenSurface_QBaseIsSignalConnected(const QOffscreenSurface* self, const QMetaMethod* signal);
void QOffscreenSurface_Delete(QOffscreenSurface* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
