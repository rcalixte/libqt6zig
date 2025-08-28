#pragma once
#ifndef SRC_MULTIMEDIAC_LIBQSCREENCAPTURE_H
#define SRC_MULTIMEDIAC_LIBQSCREENCAPTURE_H

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
typedef struct QMediaCaptureSession QMediaCaptureSession;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QScreen QScreen;
typedef struct QScreenCapture QScreenCapture;
typedef struct QTimerEvent QTimerEvent;
#endif

QScreenCapture* QScreenCapture_new();
QScreenCapture* QScreenCapture_new2(QObject* parent);
QMetaObject* QScreenCapture_MetaObject(const QScreenCapture* self);
void* QScreenCapture_Metacast(QScreenCapture* self, const char* param1);
int QScreenCapture_Metacall(QScreenCapture* self, int param1, int param2, void** param3);
libqt_string QScreenCapture_Tr(const char* s);
QMediaCaptureSession* QScreenCapture_CaptureSession(const QScreenCapture* self);
void QScreenCapture_SetScreen(QScreenCapture* self, QScreen* screen);
QScreen* QScreenCapture_Screen(const QScreenCapture* self);
bool QScreenCapture_IsActive(const QScreenCapture* self);
int QScreenCapture_Error(const QScreenCapture* self);
libqt_string QScreenCapture_ErrorString(const QScreenCapture* self);
void QScreenCapture_SetActive(QScreenCapture* self, bool active);
void QScreenCapture_Start(QScreenCapture* self);
void QScreenCapture_Stop(QScreenCapture* self);
void QScreenCapture_ActiveChanged(QScreenCapture* self, bool param1);
void QScreenCapture_Connect_ActiveChanged(QScreenCapture* self, intptr_t slot);
void QScreenCapture_ErrorChanged(QScreenCapture* self);
void QScreenCapture_Connect_ErrorChanged(QScreenCapture* self, intptr_t slot);
void QScreenCapture_ScreenChanged(QScreenCapture* self, QScreen* param1);
void QScreenCapture_Connect_ScreenChanged(QScreenCapture* self, intptr_t slot);
void QScreenCapture_ErrorOccurred(QScreenCapture* self, int errorVal, const libqt_string errorString);
void QScreenCapture_Connect_ErrorOccurred(QScreenCapture* self, intptr_t slot);
libqt_string QScreenCapture_Tr2(const char* s, const char* c);
libqt_string QScreenCapture_Tr3(const char* s, const char* c, int n);
void QScreenCapture_OnMetacall(QScreenCapture* self, intptr_t slot);
int QScreenCapture_QBaseMetacall(QScreenCapture* self, int param1, int param2, void** param3);
bool QScreenCapture_Event(QScreenCapture* self, QEvent* event);
void QScreenCapture_OnEvent(QScreenCapture* self, intptr_t slot);
bool QScreenCapture_QBaseEvent(QScreenCapture* self, QEvent* event);
bool QScreenCapture_EventFilter(QScreenCapture* self, QObject* watched, QEvent* event);
void QScreenCapture_OnEventFilter(QScreenCapture* self, intptr_t slot);
bool QScreenCapture_QBaseEventFilter(QScreenCapture* self, QObject* watched, QEvent* event);
void QScreenCapture_TimerEvent(QScreenCapture* self, QTimerEvent* event);
void QScreenCapture_OnTimerEvent(QScreenCapture* self, intptr_t slot);
void QScreenCapture_QBaseTimerEvent(QScreenCapture* self, QTimerEvent* event);
void QScreenCapture_ChildEvent(QScreenCapture* self, QChildEvent* event);
void QScreenCapture_OnChildEvent(QScreenCapture* self, intptr_t slot);
void QScreenCapture_QBaseChildEvent(QScreenCapture* self, QChildEvent* event);
void QScreenCapture_CustomEvent(QScreenCapture* self, QEvent* event);
void QScreenCapture_OnCustomEvent(QScreenCapture* self, intptr_t slot);
void QScreenCapture_QBaseCustomEvent(QScreenCapture* self, QEvent* event);
void QScreenCapture_ConnectNotify(QScreenCapture* self, const QMetaMethod* signal);
void QScreenCapture_OnConnectNotify(QScreenCapture* self, intptr_t slot);
void QScreenCapture_QBaseConnectNotify(QScreenCapture* self, const QMetaMethod* signal);
void QScreenCapture_DisconnectNotify(QScreenCapture* self, const QMetaMethod* signal);
void QScreenCapture_OnDisconnectNotify(QScreenCapture* self, intptr_t slot);
void QScreenCapture_QBaseDisconnectNotify(QScreenCapture* self, const QMetaMethod* signal);
QObject* QScreenCapture_Sender(const QScreenCapture* self);
void QScreenCapture_OnSender(const QScreenCapture* self, intptr_t slot);
QObject* QScreenCapture_QBaseSender(const QScreenCapture* self);
int QScreenCapture_SenderSignalIndex(const QScreenCapture* self);
void QScreenCapture_OnSenderSignalIndex(const QScreenCapture* self, intptr_t slot);
int QScreenCapture_QBaseSenderSignalIndex(const QScreenCapture* self);
int QScreenCapture_Receivers(const QScreenCapture* self, const char* signal);
void QScreenCapture_OnReceivers(const QScreenCapture* self, intptr_t slot);
int QScreenCapture_QBaseReceivers(const QScreenCapture* self, const char* signal);
bool QScreenCapture_IsSignalConnected(const QScreenCapture* self, const QMetaMethod* signal);
void QScreenCapture_OnIsSignalConnected(const QScreenCapture* self, intptr_t slot);
bool QScreenCapture_QBaseIsSignalConnected(const QScreenCapture* self, const QMetaMethod* signal);
void QScreenCapture_Delete(QScreenCapture* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
