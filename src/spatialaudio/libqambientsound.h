#pragma once
#ifndef SRC_SPATIALAUDIOC_LIBQAMBIENTSOUND_H
#define SRC_SPATIALAUDIOC_LIBQAMBIENTSOUND_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QAmbientSound QAmbientSound;
typedef struct QAudioEngine QAudioEngine;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
typedef struct QUrl QUrl;
#endif

QAmbientSound* QAmbientSound_new(QAudioEngine* engine);
QMetaObject* QAmbientSound_MetaObject(const QAmbientSound* self);
void* QAmbientSound_Metacast(QAmbientSound* self, const char* param1);
int QAmbientSound_Metacall(QAmbientSound* self, int param1, int param2, void** param3);
void QAmbientSound_SetSource(QAmbientSound* self, const QUrl* url);
QUrl* QAmbientSound_Source(const QAmbientSound* self);
int QAmbientSound_Loops(const QAmbientSound* self);
void QAmbientSound_SetLoops(QAmbientSound* self, int loops);
bool QAmbientSound_AutoPlay(const QAmbientSound* self);
void QAmbientSound_SetAutoPlay(QAmbientSound* self, bool autoPlay);
void QAmbientSound_SetVolume(QAmbientSound* self, float volume);
float QAmbientSound_Volume(const QAmbientSound* self);
QAudioEngine* QAmbientSound_Engine(const QAmbientSound* self);
void QAmbientSound_SourceChanged(QAmbientSound* self);
void QAmbientSound_Connect_SourceChanged(QAmbientSound* self, intptr_t slot);
void QAmbientSound_LoopsChanged(QAmbientSound* self);
void QAmbientSound_Connect_LoopsChanged(QAmbientSound* self, intptr_t slot);
void QAmbientSound_AutoPlayChanged(QAmbientSound* self);
void QAmbientSound_Connect_AutoPlayChanged(QAmbientSound* self, intptr_t slot);
void QAmbientSound_VolumeChanged(QAmbientSound* self);
void QAmbientSound_Connect_VolumeChanged(QAmbientSound* self, intptr_t slot);
void QAmbientSound_Play(QAmbientSound* self);
void QAmbientSound_Pause(QAmbientSound* self);
void QAmbientSound_Stop(QAmbientSound* self);
void QAmbientSound_OnMetaObject(const QAmbientSound* self, intptr_t slot);
QMetaObject* QAmbientSound_SuperMetaObject(const QAmbientSound* self);
void QAmbientSound_OnMetacast(QAmbientSound* self, intptr_t slot);
void* QAmbientSound_SuperMetacast(QAmbientSound* self, const char* param1);
void QAmbientSound_OnMetacall(QAmbientSound* self, intptr_t slot);
int QAmbientSound_SuperMetacall(QAmbientSound* self, int param1, int param2, void** param3);
bool QAmbientSound_Event(QAmbientSound* self, QEvent* event);
void QAmbientSound_OnEvent(QAmbientSound* self, intptr_t slot);
bool QAmbientSound_SuperEvent(QAmbientSound* self, QEvent* event);
bool QAmbientSound_EventFilter(QAmbientSound* self, QObject* watched, QEvent* event);
void QAmbientSound_OnEventFilter(QAmbientSound* self, intptr_t slot);
bool QAmbientSound_SuperEventFilter(QAmbientSound* self, QObject* watched, QEvent* event);
void QAmbientSound_TimerEvent(QAmbientSound* self, QTimerEvent* event);
void QAmbientSound_OnTimerEvent(QAmbientSound* self, intptr_t slot);
void QAmbientSound_SuperTimerEvent(QAmbientSound* self, QTimerEvent* event);
void QAmbientSound_ChildEvent(QAmbientSound* self, QChildEvent* event);
void QAmbientSound_OnChildEvent(QAmbientSound* self, intptr_t slot);
void QAmbientSound_SuperChildEvent(QAmbientSound* self, QChildEvent* event);
void QAmbientSound_CustomEvent(QAmbientSound* self, QEvent* event);
void QAmbientSound_OnCustomEvent(QAmbientSound* self, intptr_t slot);
void QAmbientSound_SuperCustomEvent(QAmbientSound* self, QEvent* event);
void QAmbientSound_ConnectNotify(QAmbientSound* self, const QMetaMethod* signal);
void QAmbientSound_OnConnectNotify(QAmbientSound* self, intptr_t slot);
void QAmbientSound_SuperConnectNotify(QAmbientSound* self, const QMetaMethod* signal);
void QAmbientSound_DisconnectNotify(QAmbientSound* self, const QMetaMethod* signal);
void QAmbientSound_OnDisconnectNotify(QAmbientSound* self, intptr_t slot);
void QAmbientSound_SuperDisconnectNotify(QAmbientSound* self, const QMetaMethod* signal);
QObject* QAmbientSound_Sender(const QAmbientSound* self);
void QAmbientSound_OnSender(const QAmbientSound* self, intptr_t slot);
QObject* QAmbientSound_SuperSender(const QAmbientSound* self);
int QAmbientSound_SenderSignalIndex(const QAmbientSound* self);
void QAmbientSound_OnSenderSignalIndex(const QAmbientSound* self, intptr_t slot);
int QAmbientSound_SuperSenderSignalIndex(const QAmbientSound* self);
int QAmbientSound_Receivers(const QAmbientSound* self, const char* signal);
void QAmbientSound_OnReceivers(const QAmbientSound* self, intptr_t slot);
int QAmbientSound_SuperReceivers(const QAmbientSound* self, const char* signal);
bool QAmbientSound_IsSignalConnected(const QAmbientSound* self, const QMetaMethod* signal);
void QAmbientSound_OnIsSignalConnected(const QAmbientSound* self, intptr_t slot);
bool QAmbientSound_SuperIsSignalConnected(const QAmbientSound* self, const QMetaMethod* signal);
void QAmbientSound_Delete(QAmbientSound* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
