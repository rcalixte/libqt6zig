#pragma once
#ifndef SRC_MULTIMEDIAC_LIBQVIDEOFRAMEINPUT_H
#define SRC_MULTIMEDIAC_LIBQVIDEOFRAMEINPUT_H

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
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMediaCaptureSession QMediaCaptureSession;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVideoFrame QVideoFrame;
typedef struct QVideoFrameFormat QVideoFrameFormat;
typedef struct QVideoFrameInput QVideoFrameInput;
#endif

QVideoFrameInput* QVideoFrameInput_new();
QVideoFrameInput* QVideoFrameInput_new2(const QVideoFrameFormat* format);
QVideoFrameInput* QVideoFrameInput_new3(QObject* parent);
QVideoFrameInput* QVideoFrameInput_new4(const QVideoFrameFormat* format, QObject* parent);
QMetaObject* QVideoFrameInput_MetaObject(const QVideoFrameInput* self);
void* QVideoFrameInput_Metacast(QVideoFrameInput* self, const char* param1);
int QVideoFrameInput_Metacall(QVideoFrameInput* self, int param1, int param2, void** param3);
void QVideoFrameInput_OnMetacall(QVideoFrameInput* self, intptr_t slot);
int QVideoFrameInput_QBaseMetacall(QVideoFrameInput* self, int param1, int param2, void** param3);
libqt_string QVideoFrameInput_Tr(const char* s);
bool QVideoFrameInput_SendVideoFrame(QVideoFrameInput* self, const QVideoFrame* frame);
QVideoFrameFormat* QVideoFrameInput_Format(const QVideoFrameInput* self);
QMediaCaptureSession* QVideoFrameInput_CaptureSession(const QVideoFrameInput* self);
void QVideoFrameInput_ReadyToSendVideoFrame(QVideoFrameInput* self);
void QVideoFrameInput_Connect_ReadyToSendVideoFrame(QVideoFrameInput* self, intptr_t slot);
libqt_string QVideoFrameInput_Tr2(const char* s, const char* c);
libqt_string QVideoFrameInput_Tr3(const char* s, const char* c, int n);
bool QVideoFrameInput_Event(QVideoFrameInput* self, QEvent* event);
void QVideoFrameInput_OnEvent(QVideoFrameInput* self, intptr_t slot);
bool QVideoFrameInput_QBaseEvent(QVideoFrameInput* self, QEvent* event);
bool QVideoFrameInput_EventFilter(QVideoFrameInput* self, QObject* watched, QEvent* event);
void QVideoFrameInput_OnEventFilter(QVideoFrameInput* self, intptr_t slot);
bool QVideoFrameInput_QBaseEventFilter(QVideoFrameInput* self, QObject* watched, QEvent* event);
void QVideoFrameInput_TimerEvent(QVideoFrameInput* self, QTimerEvent* event);
void QVideoFrameInput_OnTimerEvent(QVideoFrameInput* self, intptr_t slot);
void QVideoFrameInput_QBaseTimerEvent(QVideoFrameInput* self, QTimerEvent* event);
void QVideoFrameInput_ChildEvent(QVideoFrameInput* self, QChildEvent* event);
void QVideoFrameInput_OnChildEvent(QVideoFrameInput* self, intptr_t slot);
void QVideoFrameInput_QBaseChildEvent(QVideoFrameInput* self, QChildEvent* event);
void QVideoFrameInput_CustomEvent(QVideoFrameInput* self, QEvent* event);
void QVideoFrameInput_OnCustomEvent(QVideoFrameInput* self, intptr_t slot);
void QVideoFrameInput_QBaseCustomEvent(QVideoFrameInput* self, QEvent* event);
void QVideoFrameInput_ConnectNotify(QVideoFrameInput* self, const QMetaMethod* signal);
void QVideoFrameInput_OnConnectNotify(QVideoFrameInput* self, intptr_t slot);
void QVideoFrameInput_QBaseConnectNotify(QVideoFrameInput* self, const QMetaMethod* signal);
void QVideoFrameInput_DisconnectNotify(QVideoFrameInput* self, const QMetaMethod* signal);
void QVideoFrameInput_OnDisconnectNotify(QVideoFrameInput* self, intptr_t slot);
void QVideoFrameInput_QBaseDisconnectNotify(QVideoFrameInput* self, const QMetaMethod* signal);
QObject* QVideoFrameInput_Sender(const QVideoFrameInput* self);
void QVideoFrameInput_OnSender(const QVideoFrameInput* self, intptr_t slot);
QObject* QVideoFrameInput_QBaseSender(const QVideoFrameInput* self);
int QVideoFrameInput_SenderSignalIndex(const QVideoFrameInput* self);
void QVideoFrameInput_OnSenderSignalIndex(const QVideoFrameInput* self, intptr_t slot);
int QVideoFrameInput_QBaseSenderSignalIndex(const QVideoFrameInput* self);
int QVideoFrameInput_Receivers(const QVideoFrameInput* self, const char* signal);
void QVideoFrameInput_OnReceivers(const QVideoFrameInput* self, intptr_t slot);
int QVideoFrameInput_QBaseReceivers(const QVideoFrameInput* self, const char* signal);
bool QVideoFrameInput_IsSignalConnected(const QVideoFrameInput* self, const QMetaMethod* signal);
void QVideoFrameInput_OnIsSignalConnected(const QVideoFrameInput* self, intptr_t slot);
bool QVideoFrameInput_QBaseIsSignalConnected(const QVideoFrameInput* self, const QMetaMethod* signal);
void QVideoFrameInput_Delete(QVideoFrameInput* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
