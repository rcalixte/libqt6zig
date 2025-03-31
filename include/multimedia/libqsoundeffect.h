#pragma once
#ifndef SRC_MULTIMEDIAC_LIBQSOUNDEFFECT_H
#define SRC_MULTIMEDIAC_LIBQSOUNDEFFECT_H

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
typedef struct QAudioDevice QAudioDevice;
typedef struct QBindingStorage QBindingStorage;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QMetaObject__Connection QMetaObject__Connection;
typedef struct QObject QObject;
typedef struct QSoundEffect QSoundEffect;
typedef struct QThread QThread;
typedef struct QTimerEvent QTimerEvent;
typedef struct QUrl QUrl;
typedef struct QVariant QVariant;
#endif

#ifdef __cplusplus
typedef QSoundEffect::Loop Loop;     // C++ enum
typedef QSoundEffect::Status Status; // C++ enum
#else
typedef int Loop;   // C ABI enum
typedef int Status; // C ABI enum
#endif

QSoundEffect* QSoundEffect_new();
QSoundEffect* QSoundEffect_new2(QAudioDevice* audioDevice);
QSoundEffect* QSoundEffect_new3(QObject* parent);
QSoundEffect* QSoundEffect_new4(QAudioDevice* audioDevice, QObject* parent);
QMetaObject* QSoundEffect_MetaObject(const QSoundEffect* self);
void* QSoundEffect_Metacast(QSoundEffect* self, const char* param1);
int QSoundEffect_Metacall(QSoundEffect* self, int param1, int param2, void** param3);
void QSoundEffect_OnMetacall(QSoundEffect* self, intptr_t slot);
int QSoundEffect_QBaseMetacall(QSoundEffect* self, int param1, int param2, void** param3);
libqt_string QSoundEffect_Tr(const char* s);
libqt_list /* of libqt_string */ QSoundEffect_SupportedMimeTypes();
QUrl* QSoundEffect_Source(const QSoundEffect* self);
void QSoundEffect_SetSource(QSoundEffect* self, QUrl* url);
int QSoundEffect_LoopCount(const QSoundEffect* self);
int QSoundEffect_LoopsRemaining(const QSoundEffect* self);
void QSoundEffect_SetLoopCount(QSoundEffect* self, int loopCount);
QAudioDevice* QSoundEffect_AudioDevice(QSoundEffect* self);
void QSoundEffect_SetAudioDevice(QSoundEffect* self, QAudioDevice* device);
float QSoundEffect_Volume(const QSoundEffect* self);
void QSoundEffect_SetVolume(QSoundEffect* self, float volume);
bool QSoundEffect_IsMuted(const QSoundEffect* self);
void QSoundEffect_SetMuted(QSoundEffect* self, bool muted);
bool QSoundEffect_IsLoaded(const QSoundEffect* self);
bool QSoundEffect_IsPlaying(const QSoundEffect* self);
int QSoundEffect_Status(const QSoundEffect* self);
void QSoundEffect_SourceChanged(QSoundEffect* self);
void QSoundEffect_Connect_SourceChanged(QSoundEffect* self, intptr_t slot);
void QSoundEffect_LoopCountChanged(QSoundEffect* self);
void QSoundEffect_Connect_LoopCountChanged(QSoundEffect* self, intptr_t slot);
void QSoundEffect_LoopsRemainingChanged(QSoundEffect* self);
void QSoundEffect_Connect_LoopsRemainingChanged(QSoundEffect* self, intptr_t slot);
void QSoundEffect_VolumeChanged(QSoundEffect* self);
void QSoundEffect_Connect_VolumeChanged(QSoundEffect* self, intptr_t slot);
void QSoundEffect_MutedChanged(QSoundEffect* self);
void QSoundEffect_Connect_MutedChanged(QSoundEffect* self, intptr_t slot);
void QSoundEffect_LoadedChanged(QSoundEffect* self);
void QSoundEffect_Connect_LoadedChanged(QSoundEffect* self, intptr_t slot);
void QSoundEffect_PlayingChanged(QSoundEffect* self);
void QSoundEffect_Connect_PlayingChanged(QSoundEffect* self, intptr_t slot);
void QSoundEffect_StatusChanged(QSoundEffect* self);
void QSoundEffect_Connect_StatusChanged(QSoundEffect* self, intptr_t slot);
void QSoundEffect_AudioDeviceChanged(QSoundEffect* self);
void QSoundEffect_Connect_AudioDeviceChanged(QSoundEffect* self, intptr_t slot);
void QSoundEffect_Play(QSoundEffect* self);
void QSoundEffect_Stop(QSoundEffect* self);
libqt_string QSoundEffect_Tr2(const char* s, const char* c);
libqt_string QSoundEffect_Tr3(const char* s, const char* c, int n);
bool QSoundEffect_Event(QSoundEffect* self, QEvent* event);
void QSoundEffect_OnEvent(QSoundEffect* self, intptr_t slot);
bool QSoundEffect_QBaseEvent(QSoundEffect* self, QEvent* event);
bool QSoundEffect_EventFilter(QSoundEffect* self, QObject* watched, QEvent* event);
void QSoundEffect_OnEventFilter(QSoundEffect* self, intptr_t slot);
bool QSoundEffect_QBaseEventFilter(QSoundEffect* self, QObject* watched, QEvent* event);
void QSoundEffect_TimerEvent(QSoundEffect* self, QTimerEvent* event);
void QSoundEffect_OnTimerEvent(QSoundEffect* self, intptr_t slot);
void QSoundEffect_QBaseTimerEvent(QSoundEffect* self, QTimerEvent* event);
void QSoundEffect_ChildEvent(QSoundEffect* self, QChildEvent* event);
void QSoundEffect_OnChildEvent(QSoundEffect* self, intptr_t slot);
void QSoundEffect_QBaseChildEvent(QSoundEffect* self, QChildEvent* event);
void QSoundEffect_CustomEvent(QSoundEffect* self, QEvent* event);
void QSoundEffect_OnCustomEvent(QSoundEffect* self, intptr_t slot);
void QSoundEffect_QBaseCustomEvent(QSoundEffect* self, QEvent* event);
void QSoundEffect_ConnectNotify(QSoundEffect* self, QMetaMethod* signal);
void QSoundEffect_OnConnectNotify(QSoundEffect* self, intptr_t slot);
void QSoundEffect_QBaseConnectNotify(QSoundEffect* self, QMetaMethod* signal);
void QSoundEffect_DisconnectNotify(QSoundEffect* self, QMetaMethod* signal);
void QSoundEffect_OnDisconnectNotify(QSoundEffect* self, intptr_t slot);
void QSoundEffect_QBaseDisconnectNotify(QSoundEffect* self, QMetaMethod* signal);
QObject* QSoundEffect_Sender(const QSoundEffect* self);
void QSoundEffect_OnSender(const QSoundEffect* self, intptr_t slot);
QObject* QSoundEffect_QBaseSender(const QSoundEffect* self);
int QSoundEffect_SenderSignalIndex(const QSoundEffect* self);
void QSoundEffect_OnSenderSignalIndex(const QSoundEffect* self, intptr_t slot);
int QSoundEffect_QBaseSenderSignalIndex(const QSoundEffect* self);
int QSoundEffect_Receivers(const QSoundEffect* self, const char* signal);
void QSoundEffect_OnReceivers(const QSoundEffect* self, intptr_t slot);
int QSoundEffect_QBaseReceivers(const QSoundEffect* self, const char* signal);
bool QSoundEffect_IsSignalConnected(const QSoundEffect* self, QMetaMethod* signal);
void QSoundEffect_OnIsSignalConnected(const QSoundEffect* self, intptr_t slot);
bool QSoundEffect_QBaseIsSignalConnected(const QSoundEffect* self, QMetaMethod* signal);
void QSoundEffect_Delete(QSoundEffect* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
