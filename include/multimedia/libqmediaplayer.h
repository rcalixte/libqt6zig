#pragma once
#ifndef SRC_MULTIMEDIAC_LIBQMEDIAPLAYER_H
#define SRC_MULTIMEDIAC_LIBQMEDIAPLAYER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QMetaObject__Connection)
typedef QMetaObject::Connection QMetaObject__Connection;
#endif
#else
typedef struct QAnyStringView QAnyStringView;
typedef struct QAudioOutput QAudioOutput;
typedef struct QBindingStorage QBindingStorage;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QIODevice QIODevice;
typedef struct QMediaMetaData QMediaMetaData;
typedef struct QMediaPlayer QMediaPlayer;
typedef struct QMediaTimeRange QMediaTimeRange;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QMetaObject__Connection QMetaObject__Connection;
typedef struct QObject QObject;
typedef struct QThread QThread;
typedef struct QTimerEvent QTimerEvent;
typedef struct QUrl QUrl;
typedef struct QVariant QVariant;
typedef struct QVideoSink QVideoSink;
#endif

#ifdef __cplusplus
typedef QMediaPlayer::Error Error;                 // C++ enum
typedef QMediaPlayer::Loops Loops;                 // C++ enum
typedef QMediaPlayer::MediaStatus MediaStatus;     // C++ enum
typedef QMediaPlayer::PlaybackState PlaybackState; // C++ enum
#else
typedef int Error;         // C ABI enum
typedef int Loops;         // C ABI enum
typedef int MediaStatus;   // C ABI enum
typedef int PlaybackState; // C ABI enum
#endif

QMediaPlayer* QMediaPlayer_new();
QMediaPlayer* QMediaPlayer_new2(QObject* parent);
QMetaObject* QMediaPlayer_MetaObject(const QMediaPlayer* self);
void* QMediaPlayer_Metacast(QMediaPlayer* self, const char* param1);
int QMediaPlayer_Metacall(QMediaPlayer* self, int param1, int param2, void** param3);
void QMediaPlayer_OnMetacall(QMediaPlayer* self, intptr_t slot);
int QMediaPlayer_QBaseMetacall(QMediaPlayer* self, int param1, int param2, void** param3);
libqt_string QMediaPlayer_Tr(const char* s);
libqt_list /* of QMediaMetaData* */ QMediaPlayer_AudioTracks(const QMediaPlayer* self);
libqt_list /* of QMediaMetaData* */ QMediaPlayer_VideoTracks(const QMediaPlayer* self);
libqt_list /* of QMediaMetaData* */ QMediaPlayer_SubtitleTracks(const QMediaPlayer* self);
int QMediaPlayer_ActiveAudioTrack(const QMediaPlayer* self);
int QMediaPlayer_ActiveVideoTrack(const QMediaPlayer* self);
int QMediaPlayer_ActiveSubtitleTrack(const QMediaPlayer* self);
void QMediaPlayer_SetActiveAudioTrack(QMediaPlayer* self, int index);
void QMediaPlayer_SetActiveVideoTrack(QMediaPlayer* self, int index);
void QMediaPlayer_SetActiveSubtitleTrack(QMediaPlayer* self, int index);
void QMediaPlayer_SetAudioOutput(QMediaPlayer* self, QAudioOutput* output);
QAudioOutput* QMediaPlayer_AudioOutput(const QMediaPlayer* self);
void QMediaPlayer_SetVideoOutput(QMediaPlayer* self, QObject* videoOutput);
QObject* QMediaPlayer_VideoOutput(const QMediaPlayer* self);
void QMediaPlayer_SetVideoSink(QMediaPlayer* self, QVideoSink* sink);
QVideoSink* QMediaPlayer_VideoSink(const QMediaPlayer* self);
QUrl* QMediaPlayer_Source(const QMediaPlayer* self);
QIODevice* QMediaPlayer_SourceDevice(const QMediaPlayer* self);
int QMediaPlayer_PlaybackState(const QMediaPlayer* self);
int QMediaPlayer_MediaStatus(const QMediaPlayer* self);
long long QMediaPlayer_Duration(const QMediaPlayer* self);
long long QMediaPlayer_Position(const QMediaPlayer* self);
bool QMediaPlayer_HasAudio(const QMediaPlayer* self);
bool QMediaPlayer_HasVideo(const QMediaPlayer* self);
float QMediaPlayer_BufferProgress(const QMediaPlayer* self);
QMediaTimeRange* QMediaPlayer_BufferedTimeRange(const QMediaPlayer* self);
bool QMediaPlayer_IsSeekable(const QMediaPlayer* self);
double QMediaPlayer_PlaybackRate(const QMediaPlayer* self);
int QMediaPlayer_Loops(const QMediaPlayer* self);
void QMediaPlayer_SetLoops(QMediaPlayer* self, int loops);
int QMediaPlayer_Error(const QMediaPlayer* self);
libqt_string QMediaPlayer_ErrorString(const QMediaPlayer* self);
bool QMediaPlayer_IsAvailable(const QMediaPlayer* self);
QMediaMetaData* QMediaPlayer_MetaData(const QMediaPlayer* self);
void QMediaPlayer_Play(QMediaPlayer* self);
void QMediaPlayer_Pause(QMediaPlayer* self);
void QMediaPlayer_Stop(QMediaPlayer* self);
void QMediaPlayer_SetPosition(QMediaPlayer* self, long long position);
void QMediaPlayer_SetPlaybackRate(QMediaPlayer* self, double rate);
void QMediaPlayer_SetSource(QMediaPlayer* self, QUrl* source);
void QMediaPlayer_SetSourceDevice(QMediaPlayer* self, QIODevice* device);
void QMediaPlayer_SourceChanged(QMediaPlayer* self, QUrl* media);
void QMediaPlayer_Connect_SourceChanged(QMediaPlayer* self, intptr_t slot);
void QMediaPlayer_PlaybackStateChanged(QMediaPlayer* self, int newState);
void QMediaPlayer_Connect_PlaybackStateChanged(QMediaPlayer* self, intptr_t slot);
void QMediaPlayer_MediaStatusChanged(QMediaPlayer* self, int status);
void QMediaPlayer_Connect_MediaStatusChanged(QMediaPlayer* self, intptr_t slot);
void QMediaPlayer_DurationChanged(QMediaPlayer* self, long long duration);
void QMediaPlayer_Connect_DurationChanged(QMediaPlayer* self, intptr_t slot);
void QMediaPlayer_PositionChanged(QMediaPlayer* self, long long position);
void QMediaPlayer_Connect_PositionChanged(QMediaPlayer* self, intptr_t slot);
void QMediaPlayer_HasAudioChanged(QMediaPlayer* self, bool available);
void QMediaPlayer_Connect_HasAudioChanged(QMediaPlayer* self, intptr_t slot);
void QMediaPlayer_HasVideoChanged(QMediaPlayer* self, bool videoAvailable);
void QMediaPlayer_Connect_HasVideoChanged(QMediaPlayer* self, intptr_t slot);
void QMediaPlayer_BufferProgressChanged(QMediaPlayer* self, float progress);
void QMediaPlayer_Connect_BufferProgressChanged(QMediaPlayer* self, intptr_t slot);
void QMediaPlayer_SeekableChanged(QMediaPlayer* self, bool seekable);
void QMediaPlayer_Connect_SeekableChanged(QMediaPlayer* self, intptr_t slot);
void QMediaPlayer_PlaybackRateChanged(QMediaPlayer* self, double rate);
void QMediaPlayer_Connect_PlaybackRateChanged(QMediaPlayer* self, intptr_t slot);
void QMediaPlayer_LoopsChanged(QMediaPlayer* self);
void QMediaPlayer_Connect_LoopsChanged(QMediaPlayer* self, intptr_t slot);
void QMediaPlayer_MetaDataChanged(QMediaPlayer* self);
void QMediaPlayer_Connect_MetaDataChanged(QMediaPlayer* self, intptr_t slot);
void QMediaPlayer_VideoOutputChanged(QMediaPlayer* self);
void QMediaPlayer_Connect_VideoOutputChanged(QMediaPlayer* self, intptr_t slot);
void QMediaPlayer_AudioOutputChanged(QMediaPlayer* self);
void QMediaPlayer_Connect_AudioOutputChanged(QMediaPlayer* self, intptr_t slot);
void QMediaPlayer_TracksChanged(QMediaPlayer* self);
void QMediaPlayer_Connect_TracksChanged(QMediaPlayer* self, intptr_t slot);
void QMediaPlayer_ActiveTracksChanged(QMediaPlayer* self);
void QMediaPlayer_Connect_ActiveTracksChanged(QMediaPlayer* self, intptr_t slot);
void QMediaPlayer_ErrorChanged(QMediaPlayer* self);
void QMediaPlayer_Connect_ErrorChanged(QMediaPlayer* self, intptr_t slot);
void QMediaPlayer_ErrorOccurred(QMediaPlayer* self, int errorVal, libqt_string errorString);
void QMediaPlayer_Connect_ErrorOccurred(QMediaPlayer* self, intptr_t slot);
libqt_string QMediaPlayer_Tr2(const char* s, const char* c);
libqt_string QMediaPlayer_Tr3(const char* s, const char* c, int n);
void QMediaPlayer_SetSourceDevice2(QMediaPlayer* self, QIODevice* device, QUrl* sourceUrl);
bool QMediaPlayer_Event(QMediaPlayer* self, QEvent* event);
void QMediaPlayer_OnEvent(QMediaPlayer* self, intptr_t slot);
bool QMediaPlayer_QBaseEvent(QMediaPlayer* self, QEvent* event);
bool QMediaPlayer_EventFilter(QMediaPlayer* self, QObject* watched, QEvent* event);
void QMediaPlayer_OnEventFilter(QMediaPlayer* self, intptr_t slot);
bool QMediaPlayer_QBaseEventFilter(QMediaPlayer* self, QObject* watched, QEvent* event);
void QMediaPlayer_TimerEvent(QMediaPlayer* self, QTimerEvent* event);
void QMediaPlayer_OnTimerEvent(QMediaPlayer* self, intptr_t slot);
void QMediaPlayer_QBaseTimerEvent(QMediaPlayer* self, QTimerEvent* event);
void QMediaPlayer_ChildEvent(QMediaPlayer* self, QChildEvent* event);
void QMediaPlayer_OnChildEvent(QMediaPlayer* self, intptr_t slot);
void QMediaPlayer_QBaseChildEvent(QMediaPlayer* self, QChildEvent* event);
void QMediaPlayer_CustomEvent(QMediaPlayer* self, QEvent* event);
void QMediaPlayer_OnCustomEvent(QMediaPlayer* self, intptr_t slot);
void QMediaPlayer_QBaseCustomEvent(QMediaPlayer* self, QEvent* event);
void QMediaPlayer_ConnectNotify(QMediaPlayer* self, QMetaMethod* signal);
void QMediaPlayer_OnConnectNotify(QMediaPlayer* self, intptr_t slot);
void QMediaPlayer_QBaseConnectNotify(QMediaPlayer* self, QMetaMethod* signal);
void QMediaPlayer_DisconnectNotify(QMediaPlayer* self, QMetaMethod* signal);
void QMediaPlayer_OnDisconnectNotify(QMediaPlayer* self, intptr_t slot);
void QMediaPlayer_QBaseDisconnectNotify(QMediaPlayer* self, QMetaMethod* signal);
QObject* QMediaPlayer_Sender(const QMediaPlayer* self);
void QMediaPlayer_OnSender(const QMediaPlayer* self, intptr_t slot);
QObject* QMediaPlayer_QBaseSender(const QMediaPlayer* self);
int QMediaPlayer_SenderSignalIndex(const QMediaPlayer* self);
void QMediaPlayer_OnSenderSignalIndex(const QMediaPlayer* self, intptr_t slot);
int QMediaPlayer_QBaseSenderSignalIndex(const QMediaPlayer* self);
int QMediaPlayer_Receivers(const QMediaPlayer* self, const char* signal);
void QMediaPlayer_OnReceivers(const QMediaPlayer* self, intptr_t slot);
int QMediaPlayer_QBaseReceivers(const QMediaPlayer* self, const char* signal);
bool QMediaPlayer_IsSignalConnected(const QMediaPlayer* self, QMetaMethod* signal);
void QMediaPlayer_OnIsSignalConnected(const QMediaPlayer* self, intptr_t slot);
bool QMediaPlayer_QBaseIsSignalConnected(const QMediaPlayer* self, QMetaMethod* signal);
void QMediaPlayer_Delete(QMediaPlayer* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
