#pragma once
#ifndef QUICK_LIBQQUICKRENDERCONTROL_H
#define QUICK_LIBQQUICKRENDERCONTROL_H

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
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QPoint QPoint;
typedef struct QQuickRenderControl QQuickRenderControl;
typedef struct QQuickWindow QQuickWindow;
typedef struct QThread QThread;
typedef struct QTimerEvent QTimerEvent;
typedef struct QWindow QWindow;
#endif

QQuickRenderControl* QQuickRenderControl_new();
QQuickRenderControl* QQuickRenderControl_new2(QObject* parent);
QMetaObject* QQuickRenderControl_MetaObject(const QQuickRenderControl* self);
void* QQuickRenderControl_Metacast(QQuickRenderControl* self, const char* param1);
int QQuickRenderControl_Metacall(QQuickRenderControl* self, int param1, int param2, void** param3);
libqt_string QQuickRenderControl_Tr(const char* s);
void QQuickRenderControl_PrepareThread(QQuickRenderControl* self, QThread* targetThread);
void QQuickRenderControl_SetSamples(QQuickRenderControl* self, int sampleCount);
int QQuickRenderControl_Samples(const QQuickRenderControl* self);
bool QQuickRenderControl_Initialize(QQuickRenderControl* self);
void QQuickRenderControl_Invalidate(QQuickRenderControl* self);
void QQuickRenderControl_BeginFrame(QQuickRenderControl* self);
void QQuickRenderControl_EndFrame(QQuickRenderControl* self);
void QQuickRenderControl_PolishItems(QQuickRenderControl* self);
bool QQuickRenderControl_Sync(QQuickRenderControl* self);
void QQuickRenderControl_Render(QQuickRenderControl* self);
QWindow* QQuickRenderControl_RenderWindowFor(QQuickWindow* win);
QWindow* QQuickRenderControl_RenderWindow(QQuickRenderControl* self, QPoint* offset);
QQuickWindow* QQuickRenderControl_Window(const QQuickRenderControl* self);
void QQuickRenderControl_RenderRequested(QQuickRenderControl* self);
void QQuickRenderControl_Connect_RenderRequested(QQuickRenderControl* self, intptr_t slot);
void QQuickRenderControl_SceneChanged(QQuickRenderControl* self);
void QQuickRenderControl_Connect_SceneChanged(QQuickRenderControl* self, intptr_t slot);
libqt_string QQuickRenderControl_Tr2(const char* s, const char* c);
libqt_string QQuickRenderControl_Tr3(const char* s, const char* c, int n);
QWindow* QQuickRenderControl_RenderWindowFor2(QQuickWindow* win, QPoint* offset);
void QQuickRenderControl_OnMetaObject(const QQuickRenderControl* self, intptr_t slot);
QMetaObject* QQuickRenderControl_SuperMetaObject(const QQuickRenderControl* self);
void QQuickRenderControl_OnMetacast(QQuickRenderControl* self, intptr_t slot);
void* QQuickRenderControl_SuperMetacast(QQuickRenderControl* self, const char* param1);
void QQuickRenderControl_OnMetacall(QQuickRenderControl* self, intptr_t slot);
int QQuickRenderControl_SuperMetacall(QQuickRenderControl* self, int param1, int param2, void** param3);
void QQuickRenderControl_OnRenderWindow(QQuickRenderControl* self, intptr_t slot);
QWindow* QQuickRenderControl_SuperRenderWindow(QQuickRenderControl* self, QPoint* offset);
bool QQuickRenderControl_Event(QQuickRenderControl* self, QEvent* event);
void QQuickRenderControl_OnEvent(QQuickRenderControl* self, intptr_t slot);
bool QQuickRenderControl_SuperEvent(QQuickRenderControl* self, QEvent* event);
bool QQuickRenderControl_EventFilter(QQuickRenderControl* self, QObject* watched, QEvent* event);
void QQuickRenderControl_OnEventFilter(QQuickRenderControl* self, intptr_t slot);
bool QQuickRenderControl_SuperEventFilter(QQuickRenderControl* self, QObject* watched, QEvent* event);
void QQuickRenderControl_TimerEvent(QQuickRenderControl* self, QTimerEvent* event);
void QQuickRenderControl_OnTimerEvent(QQuickRenderControl* self, intptr_t slot);
void QQuickRenderControl_SuperTimerEvent(QQuickRenderControl* self, QTimerEvent* event);
void QQuickRenderControl_ChildEvent(QQuickRenderControl* self, QChildEvent* event);
void QQuickRenderControl_OnChildEvent(QQuickRenderControl* self, intptr_t slot);
void QQuickRenderControl_SuperChildEvent(QQuickRenderControl* self, QChildEvent* event);
void QQuickRenderControl_CustomEvent(QQuickRenderControl* self, QEvent* event);
void QQuickRenderControl_OnCustomEvent(QQuickRenderControl* self, intptr_t slot);
void QQuickRenderControl_SuperCustomEvent(QQuickRenderControl* self, QEvent* event);
void QQuickRenderControl_ConnectNotify(QQuickRenderControl* self, const QMetaMethod* signal);
void QQuickRenderControl_OnConnectNotify(QQuickRenderControl* self, intptr_t slot);
void QQuickRenderControl_SuperConnectNotify(QQuickRenderControl* self, const QMetaMethod* signal);
void QQuickRenderControl_DisconnectNotify(QQuickRenderControl* self, const QMetaMethod* signal);
void QQuickRenderControl_OnDisconnectNotify(QQuickRenderControl* self, intptr_t slot);
void QQuickRenderControl_SuperDisconnectNotify(QQuickRenderControl* self, const QMetaMethod* signal);
QObject* QQuickRenderControl_Sender(const QQuickRenderControl* self);
void QQuickRenderControl_OnSender(const QQuickRenderControl* self, intptr_t slot);
QObject* QQuickRenderControl_SuperSender(const QQuickRenderControl* self);
int QQuickRenderControl_SenderSignalIndex(const QQuickRenderControl* self);
void QQuickRenderControl_OnSenderSignalIndex(const QQuickRenderControl* self, intptr_t slot);
int QQuickRenderControl_SuperSenderSignalIndex(const QQuickRenderControl* self);
int QQuickRenderControl_Receivers(const QQuickRenderControl* self, const char* signal);
void QQuickRenderControl_OnReceivers(const QQuickRenderControl* self, intptr_t slot);
int QQuickRenderControl_SuperReceivers(const QQuickRenderControl* self, const char* signal);
bool QQuickRenderControl_IsSignalConnected(const QQuickRenderControl* self, const QMetaMethod* signal);
void QQuickRenderControl_OnIsSignalConnected(const QQuickRenderControl* self, intptr_t slot);
bool QQuickRenderControl_SuperIsSignalConnected(const QQuickRenderControl* self, const QMetaMethod* signal);
void QQuickRenderControl_Delete(QQuickRenderControl* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
