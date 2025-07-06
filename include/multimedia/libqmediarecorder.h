#pragma once
#ifndef SRC_MULTIMEDIAC_LIBQMEDIARECORDER_H
#define SRC_MULTIMEDIAC_LIBQMEDIARECORDER_H

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
typedef struct QIODevice QIODevice;
typedef struct QMediaCaptureSession QMediaCaptureSession;
typedef struct QMediaFormat QMediaFormat;
typedef struct QMediaMetaData QMediaMetaData;
typedef struct QMediaRecorder QMediaRecorder;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QSize QSize;
typedef struct QTimerEvent QTimerEvent;
typedef struct QUrl QUrl;
#endif

QMediaRecorder* QMediaRecorder_new();
QMediaRecorder* QMediaRecorder_new2(QObject* parent);
QMetaObject* QMediaRecorder_MetaObject(const QMediaRecorder* self);
void* QMediaRecorder_Metacast(QMediaRecorder* self, const char* param1);
int QMediaRecorder_Metacall(QMediaRecorder* self, int param1, int param2, void** param3);
void QMediaRecorder_OnMetacall(QMediaRecorder* self, intptr_t slot);
int QMediaRecorder_QBaseMetacall(QMediaRecorder* self, int param1, int param2, void** param3);
libqt_string QMediaRecorder_Tr(const char* s);
bool QMediaRecorder_IsAvailable(const QMediaRecorder* self);
QUrl* QMediaRecorder_OutputLocation(const QMediaRecorder* self);
void QMediaRecorder_SetOutputLocation(QMediaRecorder* self, const QUrl* location);
void QMediaRecorder_SetOutputDevice(QMediaRecorder* self, QIODevice* device);
QIODevice* QMediaRecorder_OutputDevice(const QMediaRecorder* self);
QUrl* QMediaRecorder_ActualLocation(const QMediaRecorder* self);
int QMediaRecorder_RecorderState(const QMediaRecorder* self);
int QMediaRecorder_Error(const QMediaRecorder* self);
libqt_string QMediaRecorder_ErrorString(const QMediaRecorder* self);
long long QMediaRecorder_Duration(const QMediaRecorder* self);
QMediaFormat* QMediaRecorder_MediaFormat(const QMediaRecorder* self);
void QMediaRecorder_SetMediaFormat(QMediaRecorder* self, const QMediaFormat* format);
int QMediaRecorder_EncodingMode(const QMediaRecorder* self);
void QMediaRecorder_SetEncodingMode(QMediaRecorder* self, int encodingMode);
int QMediaRecorder_Quality(const QMediaRecorder* self);
void QMediaRecorder_SetQuality(QMediaRecorder* self, int quality);
QSize* QMediaRecorder_VideoResolution(const QMediaRecorder* self);
void QMediaRecorder_SetVideoResolution(QMediaRecorder* self, const QSize* videoResolution);
void QMediaRecorder_SetVideoResolution2(QMediaRecorder* self, int width, int height);
double QMediaRecorder_VideoFrameRate(const QMediaRecorder* self);
void QMediaRecorder_SetVideoFrameRate(QMediaRecorder* self, double frameRate);
int QMediaRecorder_VideoBitRate(const QMediaRecorder* self);
void QMediaRecorder_SetVideoBitRate(QMediaRecorder* self, int bitRate);
int QMediaRecorder_AudioBitRate(const QMediaRecorder* self);
void QMediaRecorder_SetAudioBitRate(QMediaRecorder* self, int bitRate);
int QMediaRecorder_AudioChannelCount(const QMediaRecorder* self);
void QMediaRecorder_SetAudioChannelCount(QMediaRecorder* self, int channels);
int QMediaRecorder_AudioSampleRate(const QMediaRecorder* self);
void QMediaRecorder_SetAudioSampleRate(QMediaRecorder* self, int sampleRate);
QMediaMetaData* QMediaRecorder_MetaData(const QMediaRecorder* self);
void QMediaRecorder_SetMetaData(QMediaRecorder* self, const QMediaMetaData* metaData);
void QMediaRecorder_AddMetaData(QMediaRecorder* self, const QMediaMetaData* metaData);
bool QMediaRecorder_AutoStop(const QMediaRecorder* self);
void QMediaRecorder_SetAutoStop(QMediaRecorder* self, bool autoStop);
QMediaCaptureSession* QMediaRecorder_CaptureSession(const QMediaRecorder* self);
void QMediaRecorder_Record(QMediaRecorder* self);
void QMediaRecorder_Pause(QMediaRecorder* self);
void QMediaRecorder_Stop(QMediaRecorder* self);
void QMediaRecorder_RecorderStateChanged(QMediaRecorder* self, int state);
void QMediaRecorder_Connect_RecorderStateChanged(QMediaRecorder* self, intptr_t slot);
void QMediaRecorder_DurationChanged(QMediaRecorder* self, long long duration);
void QMediaRecorder_Connect_DurationChanged(QMediaRecorder* self, intptr_t slot);
void QMediaRecorder_ActualLocationChanged(QMediaRecorder* self, const QUrl* location);
void QMediaRecorder_Connect_ActualLocationChanged(QMediaRecorder* self, intptr_t slot);
void QMediaRecorder_EncoderSettingsChanged(QMediaRecorder* self);
void QMediaRecorder_Connect_EncoderSettingsChanged(QMediaRecorder* self, intptr_t slot);
void QMediaRecorder_ErrorOccurred(QMediaRecorder* self, int errorVal, const libqt_string errorString);
void QMediaRecorder_Connect_ErrorOccurred(QMediaRecorder* self, intptr_t slot);
void QMediaRecorder_ErrorChanged(QMediaRecorder* self);
void QMediaRecorder_Connect_ErrorChanged(QMediaRecorder* self, intptr_t slot);
void QMediaRecorder_MetaDataChanged(QMediaRecorder* self);
void QMediaRecorder_Connect_MetaDataChanged(QMediaRecorder* self, intptr_t slot);
void QMediaRecorder_MediaFormatChanged(QMediaRecorder* self);
void QMediaRecorder_Connect_MediaFormatChanged(QMediaRecorder* self, intptr_t slot);
void QMediaRecorder_EncodingModeChanged(QMediaRecorder* self);
void QMediaRecorder_Connect_EncodingModeChanged(QMediaRecorder* self, intptr_t slot);
void QMediaRecorder_QualityChanged(QMediaRecorder* self);
void QMediaRecorder_Connect_QualityChanged(QMediaRecorder* self, intptr_t slot);
void QMediaRecorder_VideoResolutionChanged(QMediaRecorder* self);
void QMediaRecorder_Connect_VideoResolutionChanged(QMediaRecorder* self, intptr_t slot);
void QMediaRecorder_VideoFrameRateChanged(QMediaRecorder* self);
void QMediaRecorder_Connect_VideoFrameRateChanged(QMediaRecorder* self, intptr_t slot);
void QMediaRecorder_VideoBitRateChanged(QMediaRecorder* self);
void QMediaRecorder_Connect_VideoBitRateChanged(QMediaRecorder* self, intptr_t slot);
void QMediaRecorder_AudioBitRateChanged(QMediaRecorder* self);
void QMediaRecorder_Connect_AudioBitRateChanged(QMediaRecorder* self, intptr_t slot);
void QMediaRecorder_AudioChannelCountChanged(QMediaRecorder* self);
void QMediaRecorder_Connect_AudioChannelCountChanged(QMediaRecorder* self, intptr_t slot);
void QMediaRecorder_AudioSampleRateChanged(QMediaRecorder* self);
void QMediaRecorder_Connect_AudioSampleRateChanged(QMediaRecorder* self, intptr_t slot);
void QMediaRecorder_AutoStopChanged(QMediaRecorder* self);
void QMediaRecorder_Connect_AutoStopChanged(QMediaRecorder* self, intptr_t slot);
libqt_string QMediaRecorder_Tr2(const char* s, const char* c);
libqt_string QMediaRecorder_Tr3(const char* s, const char* c, int n);
bool QMediaRecorder_Event(QMediaRecorder* self, QEvent* event);
void QMediaRecorder_OnEvent(QMediaRecorder* self, intptr_t slot);
bool QMediaRecorder_QBaseEvent(QMediaRecorder* self, QEvent* event);
bool QMediaRecorder_EventFilter(QMediaRecorder* self, QObject* watched, QEvent* event);
void QMediaRecorder_OnEventFilter(QMediaRecorder* self, intptr_t slot);
bool QMediaRecorder_QBaseEventFilter(QMediaRecorder* self, QObject* watched, QEvent* event);
void QMediaRecorder_TimerEvent(QMediaRecorder* self, QTimerEvent* event);
void QMediaRecorder_OnTimerEvent(QMediaRecorder* self, intptr_t slot);
void QMediaRecorder_QBaseTimerEvent(QMediaRecorder* self, QTimerEvent* event);
void QMediaRecorder_ChildEvent(QMediaRecorder* self, QChildEvent* event);
void QMediaRecorder_OnChildEvent(QMediaRecorder* self, intptr_t slot);
void QMediaRecorder_QBaseChildEvent(QMediaRecorder* self, QChildEvent* event);
void QMediaRecorder_CustomEvent(QMediaRecorder* self, QEvent* event);
void QMediaRecorder_OnCustomEvent(QMediaRecorder* self, intptr_t slot);
void QMediaRecorder_QBaseCustomEvent(QMediaRecorder* self, QEvent* event);
void QMediaRecorder_ConnectNotify(QMediaRecorder* self, const QMetaMethod* signal);
void QMediaRecorder_OnConnectNotify(QMediaRecorder* self, intptr_t slot);
void QMediaRecorder_QBaseConnectNotify(QMediaRecorder* self, const QMetaMethod* signal);
void QMediaRecorder_DisconnectNotify(QMediaRecorder* self, const QMetaMethod* signal);
void QMediaRecorder_OnDisconnectNotify(QMediaRecorder* self, intptr_t slot);
void QMediaRecorder_QBaseDisconnectNotify(QMediaRecorder* self, const QMetaMethod* signal);
QObject* QMediaRecorder_Sender(const QMediaRecorder* self);
void QMediaRecorder_OnSender(const QMediaRecorder* self, intptr_t slot);
QObject* QMediaRecorder_QBaseSender(const QMediaRecorder* self);
int QMediaRecorder_SenderSignalIndex(const QMediaRecorder* self);
void QMediaRecorder_OnSenderSignalIndex(const QMediaRecorder* self, intptr_t slot);
int QMediaRecorder_QBaseSenderSignalIndex(const QMediaRecorder* self);
int QMediaRecorder_Receivers(const QMediaRecorder* self, const char* signal);
void QMediaRecorder_OnReceivers(const QMediaRecorder* self, intptr_t slot);
int QMediaRecorder_QBaseReceivers(const QMediaRecorder* self, const char* signal);
bool QMediaRecorder_IsSignalConnected(const QMediaRecorder* self, const QMetaMethod* signal);
void QMediaRecorder_OnIsSignalConnected(const QMediaRecorder* self, intptr_t slot);
bool QMediaRecorder_QBaseIsSignalConnected(const QMediaRecorder* self, const QMetaMethod* signal);
void QMediaRecorder_Delete(QMediaRecorder* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
