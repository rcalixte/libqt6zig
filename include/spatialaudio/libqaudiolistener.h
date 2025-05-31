#pragma once
#ifndef SRC_SPATIALAUDIOC_LIBQAUDIOLISTENER_H
#define SRC_SPATIALAUDIOC_LIBQAUDIOLISTENER_H

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
typedef struct QAudioEngine QAudioEngine;
typedef struct QAudioListener QAudioListener;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QObject QObject;
typedef struct QQuaternion QQuaternion;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVector3D QVector3D;
#endif

QAudioListener* QAudioListener_new(QAudioEngine* engine);
void QAudioListener_SetPosition(QAudioListener* self, QVector3D* pos);
QVector3D* QAudioListener_Position(const QAudioListener* self);
void QAudioListener_SetRotation(QAudioListener* self, const QQuaternion* q);
QQuaternion* QAudioListener_Rotation(const QAudioListener* self);
QAudioEngine* QAudioListener_Engine(const QAudioListener* self);
int QAudioListener_Metacall(QAudioListener* self, int param1, int param2, void** param3);
void QAudioListener_OnMetacall(QAudioListener* self, intptr_t slot);
int QAudioListener_QBaseMetacall(QAudioListener* self, int param1, int param2, void** param3);
bool QAudioListener_Event(QAudioListener* self, QEvent* event);
void QAudioListener_OnEvent(QAudioListener* self, intptr_t slot);
bool QAudioListener_QBaseEvent(QAudioListener* self, QEvent* event);
bool QAudioListener_EventFilter(QAudioListener* self, QObject* watched, QEvent* event);
void QAudioListener_OnEventFilter(QAudioListener* self, intptr_t slot);
bool QAudioListener_QBaseEventFilter(QAudioListener* self, QObject* watched, QEvent* event);
void QAudioListener_TimerEvent(QAudioListener* self, QTimerEvent* event);
void QAudioListener_OnTimerEvent(QAudioListener* self, intptr_t slot);
void QAudioListener_QBaseTimerEvent(QAudioListener* self, QTimerEvent* event);
void QAudioListener_ChildEvent(QAudioListener* self, QChildEvent* event);
void QAudioListener_OnChildEvent(QAudioListener* self, intptr_t slot);
void QAudioListener_QBaseChildEvent(QAudioListener* self, QChildEvent* event);
void QAudioListener_CustomEvent(QAudioListener* self, QEvent* event);
void QAudioListener_OnCustomEvent(QAudioListener* self, intptr_t slot);
void QAudioListener_QBaseCustomEvent(QAudioListener* self, QEvent* event);
void QAudioListener_ConnectNotify(QAudioListener* self, const QMetaMethod* signal);
void QAudioListener_OnConnectNotify(QAudioListener* self, intptr_t slot);
void QAudioListener_QBaseConnectNotify(QAudioListener* self, const QMetaMethod* signal);
void QAudioListener_DisconnectNotify(QAudioListener* self, const QMetaMethod* signal);
void QAudioListener_OnDisconnectNotify(QAudioListener* self, intptr_t slot);
void QAudioListener_QBaseDisconnectNotify(QAudioListener* self, const QMetaMethod* signal);
QObject* QAudioListener_Sender(const QAudioListener* self);
void QAudioListener_OnSender(const QAudioListener* self, intptr_t slot);
QObject* QAudioListener_QBaseSender(const QAudioListener* self);
int QAudioListener_SenderSignalIndex(const QAudioListener* self);
void QAudioListener_OnSenderSignalIndex(const QAudioListener* self, intptr_t slot);
int QAudioListener_QBaseSenderSignalIndex(const QAudioListener* self);
int QAudioListener_Receivers(const QAudioListener* self, const char* signal);
void QAudioListener_OnReceivers(const QAudioListener* self, intptr_t slot);
int QAudioListener_QBaseReceivers(const QAudioListener* self, const char* signal);
bool QAudioListener_IsSignalConnected(const QAudioListener* self, const QMetaMethod* signal);
void QAudioListener_OnIsSignalConnected(const QAudioListener* self, intptr_t slot);
bool QAudioListener_QBaseIsSignalConnected(const QAudioListener* self, const QMetaMethod* signal);
void QAudioListener_Delete(QAudioListener* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
