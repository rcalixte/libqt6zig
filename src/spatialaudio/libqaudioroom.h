#pragma once
#ifndef SRC_SPATIALAUDIOC_LIBQAUDIOROOM_H
#define SRC_SPATIALAUDIOC_LIBQAUDIOROOM_H

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
typedef struct QAudioRoom QAudioRoom;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QQuaternion QQuaternion;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVector3D QVector3D;
#endif

QAudioRoom* QAudioRoom_new(QAudioEngine* engine);
QMetaObject* QAudioRoom_MetaObject(const QAudioRoom* self);
void* QAudioRoom_Metacast(QAudioRoom* self, const char* param1);
int QAudioRoom_Metacall(QAudioRoom* self, int param1, int param2, void** param3);
libqt_string QAudioRoom_Tr(const char* s);
void QAudioRoom_SetPosition(QAudioRoom* self, QVector3D* pos);
QVector3D* QAudioRoom_Position(const QAudioRoom* self);
void QAudioRoom_SetDimensions(QAudioRoom* self, QVector3D* dim);
QVector3D* QAudioRoom_Dimensions(const QAudioRoom* self);
void QAudioRoom_SetRotation(QAudioRoom* self, const QQuaternion* q);
QQuaternion* QAudioRoom_Rotation(const QAudioRoom* self);
void QAudioRoom_SetWallMaterial(QAudioRoom* self, int wall, int material);
int QAudioRoom_WallMaterial(const QAudioRoom* self, int wall);
void QAudioRoom_SetReflectionGain(QAudioRoom* self, float factor);
float QAudioRoom_ReflectionGain(const QAudioRoom* self);
void QAudioRoom_SetReverbGain(QAudioRoom* self, float factor);
float QAudioRoom_ReverbGain(const QAudioRoom* self);
void QAudioRoom_SetReverbTime(QAudioRoom* self, float factor);
float QAudioRoom_ReverbTime(const QAudioRoom* self);
void QAudioRoom_SetReverbBrightness(QAudioRoom* self, float factor);
float QAudioRoom_ReverbBrightness(const QAudioRoom* self);
void QAudioRoom_PositionChanged(QAudioRoom* self);
void QAudioRoom_Connect_PositionChanged(QAudioRoom* self, intptr_t slot);
void QAudioRoom_DimensionsChanged(QAudioRoom* self);
void QAudioRoom_Connect_DimensionsChanged(QAudioRoom* self, intptr_t slot);
void QAudioRoom_RotationChanged(QAudioRoom* self);
void QAudioRoom_Connect_RotationChanged(QAudioRoom* self, intptr_t slot);
void QAudioRoom_WallsChanged(QAudioRoom* self);
void QAudioRoom_Connect_WallsChanged(QAudioRoom* self, intptr_t slot);
void QAudioRoom_ReflectionGainChanged(QAudioRoom* self);
void QAudioRoom_Connect_ReflectionGainChanged(QAudioRoom* self, intptr_t slot);
void QAudioRoom_ReverbGainChanged(QAudioRoom* self);
void QAudioRoom_Connect_ReverbGainChanged(QAudioRoom* self, intptr_t slot);
void QAudioRoom_ReverbTimeChanged(QAudioRoom* self);
void QAudioRoom_Connect_ReverbTimeChanged(QAudioRoom* self, intptr_t slot);
void QAudioRoom_ReverbBrightnessChanged(QAudioRoom* self);
void QAudioRoom_Connect_ReverbBrightnessChanged(QAudioRoom* self, intptr_t slot);
libqt_string QAudioRoom_Tr2(const char* s, const char* c);
libqt_string QAudioRoom_Tr3(const char* s, const char* c, int n);
void QAudioRoom_OnMetacall(QAudioRoom* self, intptr_t slot);
int QAudioRoom_QBaseMetacall(QAudioRoom* self, int param1, int param2, void** param3);
bool QAudioRoom_Event(QAudioRoom* self, QEvent* event);
void QAudioRoom_OnEvent(QAudioRoom* self, intptr_t slot);
bool QAudioRoom_QBaseEvent(QAudioRoom* self, QEvent* event);
bool QAudioRoom_EventFilter(QAudioRoom* self, QObject* watched, QEvent* event);
void QAudioRoom_OnEventFilter(QAudioRoom* self, intptr_t slot);
bool QAudioRoom_QBaseEventFilter(QAudioRoom* self, QObject* watched, QEvent* event);
void QAudioRoom_TimerEvent(QAudioRoom* self, QTimerEvent* event);
void QAudioRoom_OnTimerEvent(QAudioRoom* self, intptr_t slot);
void QAudioRoom_QBaseTimerEvent(QAudioRoom* self, QTimerEvent* event);
void QAudioRoom_ChildEvent(QAudioRoom* self, QChildEvent* event);
void QAudioRoom_OnChildEvent(QAudioRoom* self, intptr_t slot);
void QAudioRoom_QBaseChildEvent(QAudioRoom* self, QChildEvent* event);
void QAudioRoom_CustomEvent(QAudioRoom* self, QEvent* event);
void QAudioRoom_OnCustomEvent(QAudioRoom* self, intptr_t slot);
void QAudioRoom_QBaseCustomEvent(QAudioRoom* self, QEvent* event);
void QAudioRoom_ConnectNotify(QAudioRoom* self, const QMetaMethod* signal);
void QAudioRoom_OnConnectNotify(QAudioRoom* self, intptr_t slot);
void QAudioRoom_QBaseConnectNotify(QAudioRoom* self, const QMetaMethod* signal);
void QAudioRoom_DisconnectNotify(QAudioRoom* self, const QMetaMethod* signal);
void QAudioRoom_OnDisconnectNotify(QAudioRoom* self, intptr_t slot);
void QAudioRoom_QBaseDisconnectNotify(QAudioRoom* self, const QMetaMethod* signal);
QObject* QAudioRoom_Sender(const QAudioRoom* self);
void QAudioRoom_OnSender(const QAudioRoom* self, intptr_t slot);
QObject* QAudioRoom_QBaseSender(const QAudioRoom* self);
int QAudioRoom_SenderSignalIndex(const QAudioRoom* self);
void QAudioRoom_OnSenderSignalIndex(const QAudioRoom* self, intptr_t slot);
int QAudioRoom_QBaseSenderSignalIndex(const QAudioRoom* self);
int QAudioRoom_Receivers(const QAudioRoom* self, const char* signal);
void QAudioRoom_OnReceivers(const QAudioRoom* self, intptr_t slot);
int QAudioRoom_QBaseReceivers(const QAudioRoom* self, const char* signal);
bool QAudioRoom_IsSignalConnected(const QAudioRoom* self, const QMetaMethod* signal);
void QAudioRoom_OnIsSignalConnected(const QAudioRoom* self, intptr_t slot);
bool QAudioRoom_QBaseIsSignalConnected(const QAudioRoom* self, const QMetaMethod* signal);
void QAudioRoom_Delete(QAudioRoom* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
