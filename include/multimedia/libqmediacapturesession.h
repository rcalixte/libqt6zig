#pragma once
#ifndef SRC_MULTIMEDIAC_LIBQMEDIACAPTURESESSION_H
#define SRC_MULTIMEDIAC_LIBQMEDIACAPTURESESSION_H

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
typedef struct QAudioInput QAudioInput;
typedef struct QAudioOutput QAudioOutput;
typedef struct QCamera QCamera;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QImageCapture QImageCapture;
typedef struct QMediaCaptureSession QMediaCaptureSession;
typedef struct QMediaRecorder QMediaRecorder;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVideoSink QVideoSink;
#endif

QMediaCaptureSession* QMediaCaptureSession_new();
QMediaCaptureSession* QMediaCaptureSession_new2(QObject* parent);
QMetaObject* QMediaCaptureSession_MetaObject(const QMediaCaptureSession* self);
void* QMediaCaptureSession_Metacast(QMediaCaptureSession* self, const char* param1);
int QMediaCaptureSession_Metacall(QMediaCaptureSession* self, int param1, int param2, void** param3);
void QMediaCaptureSession_OnMetacall(QMediaCaptureSession* self, intptr_t slot);
int QMediaCaptureSession_QBaseMetacall(QMediaCaptureSession* self, int param1, int param2, void** param3);
libqt_string QMediaCaptureSession_Tr(const char* s);
QAudioInput* QMediaCaptureSession_AudioInput(const QMediaCaptureSession* self);
void QMediaCaptureSession_SetAudioInput(QMediaCaptureSession* self, QAudioInput* input);
QCamera* QMediaCaptureSession_Camera(const QMediaCaptureSession* self);
void QMediaCaptureSession_SetCamera(QMediaCaptureSession* self, QCamera* camera);
QImageCapture* QMediaCaptureSession_ImageCapture(QMediaCaptureSession* self);
void QMediaCaptureSession_SetImageCapture(QMediaCaptureSession* self, QImageCapture* imageCapture);
QMediaRecorder* QMediaCaptureSession_Recorder(QMediaCaptureSession* self);
void QMediaCaptureSession_SetRecorder(QMediaCaptureSession* self, QMediaRecorder* recorder);
void QMediaCaptureSession_SetVideoOutput(QMediaCaptureSession* self, QObject* output);
QObject* QMediaCaptureSession_VideoOutput(const QMediaCaptureSession* self);
void QMediaCaptureSession_SetVideoSink(QMediaCaptureSession* self, QVideoSink* sink);
QVideoSink* QMediaCaptureSession_VideoSink(const QMediaCaptureSession* self);
void QMediaCaptureSession_SetAudioOutput(QMediaCaptureSession* self, QAudioOutput* output);
QAudioOutput* QMediaCaptureSession_AudioOutput(const QMediaCaptureSession* self);
void QMediaCaptureSession_AudioInputChanged(QMediaCaptureSession* self);
void QMediaCaptureSession_Connect_AudioInputChanged(QMediaCaptureSession* self, intptr_t slot);
void QMediaCaptureSession_CameraChanged(QMediaCaptureSession* self);
void QMediaCaptureSession_Connect_CameraChanged(QMediaCaptureSession* self, intptr_t slot);
void QMediaCaptureSession_ImageCaptureChanged(QMediaCaptureSession* self);
void QMediaCaptureSession_Connect_ImageCaptureChanged(QMediaCaptureSession* self, intptr_t slot);
void QMediaCaptureSession_RecorderChanged(QMediaCaptureSession* self);
void QMediaCaptureSession_Connect_RecorderChanged(QMediaCaptureSession* self, intptr_t slot);
void QMediaCaptureSession_VideoOutputChanged(QMediaCaptureSession* self);
void QMediaCaptureSession_Connect_VideoOutputChanged(QMediaCaptureSession* self, intptr_t slot);
void QMediaCaptureSession_AudioOutputChanged(QMediaCaptureSession* self);
void QMediaCaptureSession_Connect_AudioOutputChanged(QMediaCaptureSession* self, intptr_t slot);
libqt_string QMediaCaptureSession_Tr2(const char* s, const char* c);
libqt_string QMediaCaptureSession_Tr3(const char* s, const char* c, int n);
bool QMediaCaptureSession_Event(QMediaCaptureSession* self, QEvent* event);
void QMediaCaptureSession_OnEvent(QMediaCaptureSession* self, intptr_t slot);
bool QMediaCaptureSession_QBaseEvent(QMediaCaptureSession* self, QEvent* event);
bool QMediaCaptureSession_EventFilter(QMediaCaptureSession* self, QObject* watched, QEvent* event);
void QMediaCaptureSession_OnEventFilter(QMediaCaptureSession* self, intptr_t slot);
bool QMediaCaptureSession_QBaseEventFilter(QMediaCaptureSession* self, QObject* watched, QEvent* event);
void QMediaCaptureSession_TimerEvent(QMediaCaptureSession* self, QTimerEvent* event);
void QMediaCaptureSession_OnTimerEvent(QMediaCaptureSession* self, intptr_t slot);
void QMediaCaptureSession_QBaseTimerEvent(QMediaCaptureSession* self, QTimerEvent* event);
void QMediaCaptureSession_ChildEvent(QMediaCaptureSession* self, QChildEvent* event);
void QMediaCaptureSession_OnChildEvent(QMediaCaptureSession* self, intptr_t slot);
void QMediaCaptureSession_QBaseChildEvent(QMediaCaptureSession* self, QChildEvent* event);
void QMediaCaptureSession_CustomEvent(QMediaCaptureSession* self, QEvent* event);
void QMediaCaptureSession_OnCustomEvent(QMediaCaptureSession* self, intptr_t slot);
void QMediaCaptureSession_QBaseCustomEvent(QMediaCaptureSession* self, QEvent* event);
void QMediaCaptureSession_ConnectNotify(QMediaCaptureSession* self, const QMetaMethod* signal);
void QMediaCaptureSession_OnConnectNotify(QMediaCaptureSession* self, intptr_t slot);
void QMediaCaptureSession_QBaseConnectNotify(QMediaCaptureSession* self, const QMetaMethod* signal);
void QMediaCaptureSession_DisconnectNotify(QMediaCaptureSession* self, const QMetaMethod* signal);
void QMediaCaptureSession_OnDisconnectNotify(QMediaCaptureSession* self, intptr_t slot);
void QMediaCaptureSession_QBaseDisconnectNotify(QMediaCaptureSession* self, const QMetaMethod* signal);
QObject* QMediaCaptureSession_Sender(const QMediaCaptureSession* self);
void QMediaCaptureSession_OnSender(const QMediaCaptureSession* self, intptr_t slot);
QObject* QMediaCaptureSession_QBaseSender(const QMediaCaptureSession* self);
int QMediaCaptureSession_SenderSignalIndex(const QMediaCaptureSession* self);
void QMediaCaptureSession_OnSenderSignalIndex(const QMediaCaptureSession* self, intptr_t slot);
int QMediaCaptureSession_QBaseSenderSignalIndex(const QMediaCaptureSession* self);
int QMediaCaptureSession_Receivers(const QMediaCaptureSession* self, const char* signal);
void QMediaCaptureSession_OnReceivers(const QMediaCaptureSession* self, intptr_t slot);
int QMediaCaptureSession_QBaseReceivers(const QMediaCaptureSession* self, const char* signal);
bool QMediaCaptureSession_IsSignalConnected(const QMediaCaptureSession* self, const QMetaMethod* signal);
void QMediaCaptureSession_OnIsSignalConnected(const QMediaCaptureSession* self, intptr_t slot);
bool QMediaCaptureSession_QBaseIsSignalConnected(const QMediaCaptureSession* self, const QMetaMethod* signal);
void QMediaCaptureSession_Delete(QMediaCaptureSession* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
