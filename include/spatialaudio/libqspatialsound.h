#pragma once
#ifndef SRC_SPATIALAUDIOC_LIBQSPATIALSOUND_H
#define SRC_SPATIALAUDIOC_LIBQSPATIALSOUND_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QAudioEngine QAudioEngine;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QQuaternion QQuaternion;
typedef struct QSpatialSound QSpatialSound;
typedef struct QTimerEvent QTimerEvent;
typedef struct QUrl QUrl;
typedef struct QVector3D QVector3D;
#endif

QSpatialSound* QSpatialSound_new(QAudioEngine* engine);
QMetaObject* QSpatialSound_MetaObject(const QSpatialSound* self);
void* QSpatialSound_Metacast(QSpatialSound* self, const char* param1);
int QSpatialSound_Metacall(QSpatialSound* self, int param1, int param2, void** param3);
void QSpatialSound_OnMetacall(QSpatialSound* self, intptr_t slot);
int QSpatialSound_QBaseMetacall(QSpatialSound* self, int param1, int param2, void** param3);
libqt_string QSpatialSound_Tr(const char* s);
void QSpatialSound_SetSource(QSpatialSound* self, const QUrl* url);
QUrl* QSpatialSound_Source(const QSpatialSound* self);
int QSpatialSound_Loops(const QSpatialSound* self);
void QSpatialSound_SetLoops(QSpatialSound* self, int loops);
bool QSpatialSound_AutoPlay(const QSpatialSound* self);
void QSpatialSound_SetAutoPlay(QSpatialSound* self, bool autoPlay);
void QSpatialSound_SetPosition(QSpatialSound* self, QVector3D* pos);
QVector3D* QSpatialSound_Position(const QSpatialSound* self);
void QSpatialSound_SetRotation(QSpatialSound* self, const QQuaternion* q);
QQuaternion* QSpatialSound_Rotation(const QSpatialSound* self);
void QSpatialSound_SetVolume(QSpatialSound* self, float volume);
float QSpatialSound_Volume(const QSpatialSound* self);
void QSpatialSound_SetDistanceModel(QSpatialSound* self, int model);
int QSpatialSound_DistanceModel(const QSpatialSound* self);
void QSpatialSound_SetSize(QSpatialSound* self, float size);
float QSpatialSound_Size(const QSpatialSound* self);
void QSpatialSound_SetDistanceCutoff(QSpatialSound* self, float cutoff);
float QSpatialSound_DistanceCutoff(const QSpatialSound* self);
void QSpatialSound_SetManualAttenuation(QSpatialSound* self, float attenuation);
float QSpatialSound_ManualAttenuation(const QSpatialSound* self);
void QSpatialSound_SetOcclusionIntensity(QSpatialSound* self, float occlusion);
float QSpatialSound_OcclusionIntensity(const QSpatialSound* self);
void QSpatialSound_SetDirectivity(QSpatialSound* self, float alpha);
float QSpatialSound_Directivity(const QSpatialSound* self);
void QSpatialSound_SetDirectivityOrder(QSpatialSound* self, float alpha);
float QSpatialSound_DirectivityOrder(const QSpatialSound* self);
void QSpatialSound_SetNearFieldGain(QSpatialSound* self, float gain);
float QSpatialSound_NearFieldGain(const QSpatialSound* self);
QAudioEngine* QSpatialSound_Engine(const QSpatialSound* self);
void QSpatialSound_SourceChanged(QSpatialSound* self);
void QSpatialSound_Connect_SourceChanged(QSpatialSound* self, intptr_t slot);
void QSpatialSound_LoopsChanged(QSpatialSound* self);
void QSpatialSound_Connect_LoopsChanged(QSpatialSound* self, intptr_t slot);
void QSpatialSound_AutoPlayChanged(QSpatialSound* self);
void QSpatialSound_Connect_AutoPlayChanged(QSpatialSound* self, intptr_t slot);
void QSpatialSound_PositionChanged(QSpatialSound* self);
void QSpatialSound_Connect_PositionChanged(QSpatialSound* self, intptr_t slot);
void QSpatialSound_RotationChanged(QSpatialSound* self);
void QSpatialSound_Connect_RotationChanged(QSpatialSound* self, intptr_t slot);
void QSpatialSound_VolumeChanged(QSpatialSound* self);
void QSpatialSound_Connect_VolumeChanged(QSpatialSound* self, intptr_t slot);
void QSpatialSound_DistanceModelChanged(QSpatialSound* self);
void QSpatialSound_Connect_DistanceModelChanged(QSpatialSound* self, intptr_t slot);
void QSpatialSound_SizeChanged(QSpatialSound* self);
void QSpatialSound_Connect_SizeChanged(QSpatialSound* self, intptr_t slot);
void QSpatialSound_DistanceCutoffChanged(QSpatialSound* self);
void QSpatialSound_Connect_DistanceCutoffChanged(QSpatialSound* self, intptr_t slot);
void QSpatialSound_ManualAttenuationChanged(QSpatialSound* self);
void QSpatialSound_Connect_ManualAttenuationChanged(QSpatialSound* self, intptr_t slot);
void QSpatialSound_OcclusionIntensityChanged(QSpatialSound* self);
void QSpatialSound_Connect_OcclusionIntensityChanged(QSpatialSound* self, intptr_t slot);
void QSpatialSound_DirectivityChanged(QSpatialSound* self);
void QSpatialSound_Connect_DirectivityChanged(QSpatialSound* self, intptr_t slot);
void QSpatialSound_DirectivityOrderChanged(QSpatialSound* self);
void QSpatialSound_Connect_DirectivityOrderChanged(QSpatialSound* self, intptr_t slot);
void QSpatialSound_NearFieldGainChanged(QSpatialSound* self);
void QSpatialSound_Connect_NearFieldGainChanged(QSpatialSound* self, intptr_t slot);
void QSpatialSound_Play(QSpatialSound* self);
void QSpatialSound_Pause(QSpatialSound* self);
void QSpatialSound_Stop(QSpatialSound* self);
libqt_string QSpatialSound_Tr2(const char* s, const char* c);
libqt_string QSpatialSound_Tr3(const char* s, const char* c, int n);
bool QSpatialSound_Event(QSpatialSound* self, QEvent* event);
void QSpatialSound_OnEvent(QSpatialSound* self, intptr_t slot);
bool QSpatialSound_QBaseEvent(QSpatialSound* self, QEvent* event);
bool QSpatialSound_EventFilter(QSpatialSound* self, QObject* watched, QEvent* event);
void QSpatialSound_OnEventFilter(QSpatialSound* self, intptr_t slot);
bool QSpatialSound_QBaseEventFilter(QSpatialSound* self, QObject* watched, QEvent* event);
void QSpatialSound_TimerEvent(QSpatialSound* self, QTimerEvent* event);
void QSpatialSound_OnTimerEvent(QSpatialSound* self, intptr_t slot);
void QSpatialSound_QBaseTimerEvent(QSpatialSound* self, QTimerEvent* event);
void QSpatialSound_ChildEvent(QSpatialSound* self, QChildEvent* event);
void QSpatialSound_OnChildEvent(QSpatialSound* self, intptr_t slot);
void QSpatialSound_QBaseChildEvent(QSpatialSound* self, QChildEvent* event);
void QSpatialSound_CustomEvent(QSpatialSound* self, QEvent* event);
void QSpatialSound_OnCustomEvent(QSpatialSound* self, intptr_t slot);
void QSpatialSound_QBaseCustomEvent(QSpatialSound* self, QEvent* event);
void QSpatialSound_ConnectNotify(QSpatialSound* self, const QMetaMethod* signal);
void QSpatialSound_OnConnectNotify(QSpatialSound* self, intptr_t slot);
void QSpatialSound_QBaseConnectNotify(QSpatialSound* self, const QMetaMethod* signal);
void QSpatialSound_DisconnectNotify(QSpatialSound* self, const QMetaMethod* signal);
void QSpatialSound_OnDisconnectNotify(QSpatialSound* self, intptr_t slot);
void QSpatialSound_QBaseDisconnectNotify(QSpatialSound* self, const QMetaMethod* signal);
QObject* QSpatialSound_Sender(const QSpatialSound* self);
void QSpatialSound_OnSender(const QSpatialSound* self, intptr_t slot);
QObject* QSpatialSound_QBaseSender(const QSpatialSound* self);
int QSpatialSound_SenderSignalIndex(const QSpatialSound* self);
void QSpatialSound_OnSenderSignalIndex(const QSpatialSound* self, intptr_t slot);
int QSpatialSound_QBaseSenderSignalIndex(const QSpatialSound* self);
int QSpatialSound_Receivers(const QSpatialSound* self, const char* signal);
void QSpatialSound_OnReceivers(const QSpatialSound* self, intptr_t slot);
int QSpatialSound_QBaseReceivers(const QSpatialSound* self, const char* signal);
bool QSpatialSound_IsSignalConnected(const QSpatialSound* self, const QMetaMethod* signal);
void QSpatialSound_OnIsSignalConnected(const QSpatialSound* self, intptr_t slot);
bool QSpatialSound_QBaseIsSignalConnected(const QSpatialSound* self, const QMetaMethod* signal);
void QSpatialSound_Delete(QSpatialSound* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
