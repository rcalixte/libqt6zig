#pragma once
#ifndef SRC_MULTIMEDIAC_LIBQMEDIACAPTURESESSION_H
#define SRC_MULTIMEDIAC_LIBQMEDIACAPTURESESSION_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QAudioBufferInput QAudioBufferInput;
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
typedef struct QScreenCapture QScreenCapture;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVideoFrameInput QVideoFrameInput;
typedef struct QVideoSink QVideoSink;
typedef struct QWindowCapture QWindowCapture;
#endif

QMediaCaptureSession* QMediaCaptureSession_new();
QMediaCaptureSession* QMediaCaptureSession_new2(QObject* parent);
QMetaObject* QMediaCaptureSession_MetaObject(const QMediaCaptureSession* self);
void* QMediaCaptureSession_Metacast(QMediaCaptureSession* self, const char* param1);
int QMediaCaptureSession_Metacall(QMediaCaptureSession* self, int param1, int param2, void** param3);
QAudioInput* QMediaCaptureSession_AudioInput(const QMediaCaptureSession* self);
void QMediaCaptureSession_SetAudioInput(QMediaCaptureSession* self, QAudioInput* input);
QAudioBufferInput* QMediaCaptureSession_AudioBufferInput(const QMediaCaptureSession* self);
void QMediaCaptureSession_SetAudioBufferInput(QMediaCaptureSession* self, QAudioBufferInput* input);
QCamera* QMediaCaptureSession_Camera(const QMediaCaptureSession* self);
void QMediaCaptureSession_SetCamera(QMediaCaptureSession* self, QCamera* camera);
QImageCapture* QMediaCaptureSession_ImageCapture(QMediaCaptureSession* self);
void QMediaCaptureSession_SetImageCapture(QMediaCaptureSession* self, QImageCapture* imageCapture);
QScreenCapture* QMediaCaptureSession_ScreenCapture(QMediaCaptureSession* self);
void QMediaCaptureSession_SetScreenCapture(QMediaCaptureSession* self, QScreenCapture* screenCapture);
QWindowCapture* QMediaCaptureSession_WindowCapture(QMediaCaptureSession* self);
void QMediaCaptureSession_SetWindowCapture(QMediaCaptureSession* self, QWindowCapture* windowCapture);
QVideoFrameInput* QMediaCaptureSession_VideoFrameInput(const QMediaCaptureSession* self);
void QMediaCaptureSession_SetVideoFrameInput(QMediaCaptureSession* self, QVideoFrameInput* input);
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
void QMediaCaptureSession_AudioBufferInputChanged(QMediaCaptureSession* self);
void QMediaCaptureSession_Connect_AudioBufferInputChanged(QMediaCaptureSession* self, intptr_t slot);
void QMediaCaptureSession_CameraChanged(QMediaCaptureSession* self);
void QMediaCaptureSession_Connect_CameraChanged(QMediaCaptureSession* self, intptr_t slot);
void QMediaCaptureSession_ScreenCaptureChanged(QMediaCaptureSession* self);
void QMediaCaptureSession_Connect_ScreenCaptureChanged(QMediaCaptureSession* self, intptr_t slot);
void QMediaCaptureSession_WindowCaptureChanged(QMediaCaptureSession* self);
void QMediaCaptureSession_Connect_WindowCaptureChanged(QMediaCaptureSession* self, intptr_t slot);
void QMediaCaptureSession_VideoFrameInputChanged(QMediaCaptureSession* self);
void QMediaCaptureSession_Connect_VideoFrameInputChanged(QMediaCaptureSession* self, intptr_t slot);
void QMediaCaptureSession_ImageCaptureChanged(QMediaCaptureSession* self);
void QMediaCaptureSession_Connect_ImageCaptureChanged(QMediaCaptureSession* self, intptr_t slot);
void QMediaCaptureSession_RecorderChanged(QMediaCaptureSession* self);
void QMediaCaptureSession_Connect_RecorderChanged(QMediaCaptureSession* self, intptr_t slot);
void QMediaCaptureSession_VideoOutputChanged(QMediaCaptureSession* self);
void QMediaCaptureSession_Connect_VideoOutputChanged(QMediaCaptureSession* self, intptr_t slot);
void QMediaCaptureSession_AudioOutputChanged(QMediaCaptureSession* self);
void QMediaCaptureSession_Connect_AudioOutputChanged(QMediaCaptureSession* self, intptr_t slot);
void QMediaCaptureSession_OnMetaObject(const QMediaCaptureSession* self, intptr_t slot);
QMetaObject* QMediaCaptureSession_SuperMetaObject(const QMediaCaptureSession* self);
void QMediaCaptureSession_OnMetacast(QMediaCaptureSession* self, intptr_t slot);
void* QMediaCaptureSession_SuperMetacast(QMediaCaptureSession* self, const char* param1);
void QMediaCaptureSession_OnMetacall(QMediaCaptureSession* self, intptr_t slot);
int QMediaCaptureSession_SuperMetacall(QMediaCaptureSession* self, int param1, int param2, void** param3);
bool QMediaCaptureSession_Event(QMediaCaptureSession* self, QEvent* event);
void QMediaCaptureSession_OnEvent(QMediaCaptureSession* self, intptr_t slot);
bool QMediaCaptureSession_SuperEvent(QMediaCaptureSession* self, QEvent* event);
bool QMediaCaptureSession_EventFilter(QMediaCaptureSession* self, QObject* watched, QEvent* event);
void QMediaCaptureSession_OnEventFilter(QMediaCaptureSession* self, intptr_t slot);
bool QMediaCaptureSession_SuperEventFilter(QMediaCaptureSession* self, QObject* watched, QEvent* event);
void QMediaCaptureSession_TimerEvent(QMediaCaptureSession* self, QTimerEvent* event);
void QMediaCaptureSession_OnTimerEvent(QMediaCaptureSession* self, intptr_t slot);
void QMediaCaptureSession_SuperTimerEvent(QMediaCaptureSession* self, QTimerEvent* event);
void QMediaCaptureSession_ChildEvent(QMediaCaptureSession* self, QChildEvent* event);
void QMediaCaptureSession_OnChildEvent(QMediaCaptureSession* self, intptr_t slot);
void QMediaCaptureSession_SuperChildEvent(QMediaCaptureSession* self, QChildEvent* event);
void QMediaCaptureSession_CustomEvent(QMediaCaptureSession* self, QEvent* event);
void QMediaCaptureSession_OnCustomEvent(QMediaCaptureSession* self, intptr_t slot);
void QMediaCaptureSession_SuperCustomEvent(QMediaCaptureSession* self, QEvent* event);
void QMediaCaptureSession_ConnectNotify(QMediaCaptureSession* self, const QMetaMethod* signal);
void QMediaCaptureSession_OnConnectNotify(QMediaCaptureSession* self, intptr_t slot);
void QMediaCaptureSession_SuperConnectNotify(QMediaCaptureSession* self, const QMetaMethod* signal);
void QMediaCaptureSession_DisconnectNotify(QMediaCaptureSession* self, const QMetaMethod* signal);
void QMediaCaptureSession_OnDisconnectNotify(QMediaCaptureSession* self, intptr_t slot);
void QMediaCaptureSession_SuperDisconnectNotify(QMediaCaptureSession* self, const QMetaMethod* signal);
QObject* QMediaCaptureSession_Sender(const QMediaCaptureSession* self);
void QMediaCaptureSession_OnSender(const QMediaCaptureSession* self, intptr_t slot);
QObject* QMediaCaptureSession_SuperSender(const QMediaCaptureSession* self);
int QMediaCaptureSession_SenderSignalIndex(const QMediaCaptureSession* self);
void QMediaCaptureSession_OnSenderSignalIndex(const QMediaCaptureSession* self, intptr_t slot);
int QMediaCaptureSession_SuperSenderSignalIndex(const QMediaCaptureSession* self);
int QMediaCaptureSession_Receivers(const QMediaCaptureSession* self, const char* signal);
void QMediaCaptureSession_OnReceivers(const QMediaCaptureSession* self, intptr_t slot);
int QMediaCaptureSession_SuperReceivers(const QMediaCaptureSession* self, const char* signal);
bool QMediaCaptureSession_IsSignalConnected(const QMediaCaptureSession* self, const QMetaMethod* signal);
void QMediaCaptureSession_OnIsSignalConnected(const QMediaCaptureSession* self, intptr_t slot);
bool QMediaCaptureSession_SuperIsSignalConnected(const QMediaCaptureSession* self, const QMetaMethod* signal);
void QMediaCaptureSession_Delete(QMediaCaptureSession* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
