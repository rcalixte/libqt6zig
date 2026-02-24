#pragma once
#ifndef SRC_MULTIMEDIAC_LIBQWINDOWCAPTURE_H
#define SRC_MULTIMEDIAC_LIBQWINDOWCAPTURE_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QCapturableWindow QCapturableWindow;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMediaCaptureSession QMediaCaptureSession;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
typedef struct QWindowCapture QWindowCapture;
#endif

QWindowCapture* QWindowCapture_new();
QWindowCapture* QWindowCapture_new2(QObject* parent);
QMetaObject* QWindowCapture_MetaObject(const QWindowCapture* self);
void* QWindowCapture_Metacast(QWindowCapture* self, const char* param1);
int QWindowCapture_Metacall(QWindowCapture* self, int param1, int param2, void** param3);
libqt_list /* of QCapturableWindow* */ QWindowCapture_CapturableWindows();
QMediaCaptureSession* QWindowCapture_CaptureSession(const QWindowCapture* self);
void QWindowCapture_SetWindow(QWindowCapture* self, QCapturableWindow* window);
QCapturableWindow* QWindowCapture_Window(const QWindowCapture* self);
bool QWindowCapture_IsActive(const QWindowCapture* self);
int QWindowCapture_Error(const QWindowCapture* self);
libqt_string QWindowCapture_ErrorString(const QWindowCapture* self);
void QWindowCapture_SetActive(QWindowCapture* self, bool active);
void QWindowCapture_Start(QWindowCapture* self);
void QWindowCapture_Stop(QWindowCapture* self);
void QWindowCapture_ActiveChanged(QWindowCapture* self, bool param1);
void QWindowCapture_Connect_ActiveChanged(QWindowCapture* self, intptr_t slot);
void QWindowCapture_WindowChanged(QWindowCapture* self, QCapturableWindow* window);
void QWindowCapture_Connect_WindowChanged(QWindowCapture* self, intptr_t slot);
void QWindowCapture_ErrorChanged(QWindowCapture* self);
void QWindowCapture_Connect_ErrorChanged(QWindowCapture* self, intptr_t slot);
void QWindowCapture_ErrorOccurred(QWindowCapture* self, int errorVal, const libqt_string errorString);
void QWindowCapture_Connect_ErrorOccurred(QWindowCapture* self, intptr_t slot);
void QWindowCapture_OnMetaObject(const QWindowCapture* self, intptr_t slot);
QMetaObject* QWindowCapture_SuperMetaObject(const QWindowCapture* self);
void QWindowCapture_OnMetacast(QWindowCapture* self, intptr_t slot);
void* QWindowCapture_SuperMetacast(QWindowCapture* self, const char* param1);
void QWindowCapture_OnMetacall(QWindowCapture* self, intptr_t slot);
int QWindowCapture_SuperMetacall(QWindowCapture* self, int param1, int param2, void** param3);
bool QWindowCapture_Event(QWindowCapture* self, QEvent* event);
void QWindowCapture_OnEvent(QWindowCapture* self, intptr_t slot);
bool QWindowCapture_SuperEvent(QWindowCapture* self, QEvent* event);
bool QWindowCapture_EventFilter(QWindowCapture* self, QObject* watched, QEvent* event);
void QWindowCapture_OnEventFilter(QWindowCapture* self, intptr_t slot);
bool QWindowCapture_SuperEventFilter(QWindowCapture* self, QObject* watched, QEvent* event);
void QWindowCapture_TimerEvent(QWindowCapture* self, QTimerEvent* event);
void QWindowCapture_OnTimerEvent(QWindowCapture* self, intptr_t slot);
void QWindowCapture_SuperTimerEvent(QWindowCapture* self, QTimerEvent* event);
void QWindowCapture_ChildEvent(QWindowCapture* self, QChildEvent* event);
void QWindowCapture_OnChildEvent(QWindowCapture* self, intptr_t slot);
void QWindowCapture_SuperChildEvent(QWindowCapture* self, QChildEvent* event);
void QWindowCapture_CustomEvent(QWindowCapture* self, QEvent* event);
void QWindowCapture_OnCustomEvent(QWindowCapture* self, intptr_t slot);
void QWindowCapture_SuperCustomEvent(QWindowCapture* self, QEvent* event);
void QWindowCapture_ConnectNotify(QWindowCapture* self, const QMetaMethod* signal);
void QWindowCapture_OnConnectNotify(QWindowCapture* self, intptr_t slot);
void QWindowCapture_SuperConnectNotify(QWindowCapture* self, const QMetaMethod* signal);
void QWindowCapture_DisconnectNotify(QWindowCapture* self, const QMetaMethod* signal);
void QWindowCapture_OnDisconnectNotify(QWindowCapture* self, intptr_t slot);
void QWindowCapture_SuperDisconnectNotify(QWindowCapture* self, const QMetaMethod* signal);
QObject* QWindowCapture_Sender(const QWindowCapture* self);
void QWindowCapture_OnSender(const QWindowCapture* self, intptr_t slot);
QObject* QWindowCapture_SuperSender(const QWindowCapture* self);
int QWindowCapture_SenderSignalIndex(const QWindowCapture* self);
void QWindowCapture_OnSenderSignalIndex(const QWindowCapture* self, intptr_t slot);
int QWindowCapture_SuperSenderSignalIndex(const QWindowCapture* self);
int QWindowCapture_Receivers(const QWindowCapture* self, const char* signal);
void QWindowCapture_OnReceivers(const QWindowCapture* self, intptr_t slot);
int QWindowCapture_SuperReceivers(const QWindowCapture* self, const char* signal);
bool QWindowCapture_IsSignalConnected(const QWindowCapture* self, const QMetaMethod* signal);
void QWindowCapture_OnIsSignalConnected(const QWindowCapture* self, intptr_t slot);
bool QWindowCapture_SuperIsSignalConnected(const QWindowCapture* self, const QMetaMethod* signal);
void QWindowCapture_Delete(QWindowCapture* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
