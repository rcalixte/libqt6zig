#pragma once
#ifndef SRC_MULTIMEDIAC_LIBQMEDIADEVICES_H
#define SRC_MULTIMEDIAC_LIBQMEDIADEVICES_H

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
typedef struct QAudioDevice QAudioDevice;
typedef struct QCameraDevice QCameraDevice;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMediaDevices QMediaDevices;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
#endif

QMediaDevices* QMediaDevices_new();
QMediaDevices* QMediaDevices_new2(QObject* parent);
QMetaObject* QMediaDevices_MetaObject(const QMediaDevices* self);
void* QMediaDevices_Metacast(QMediaDevices* self, const char* param1);
int QMediaDevices_Metacall(QMediaDevices* self, int param1, int param2, void** param3);
void QMediaDevices_OnMetacall(QMediaDevices* self, intptr_t slot);
int QMediaDevices_QBaseMetacall(QMediaDevices* self, int param1, int param2, void** param3);
libqt_string QMediaDevices_Tr(const char* s);
libqt_list /* of QAudioDevice* */ QMediaDevices_AudioInputs();
libqt_list /* of QAudioDevice* */ QMediaDevices_AudioOutputs();
libqt_list /* of QCameraDevice* */ QMediaDevices_VideoInputs();
QAudioDevice* QMediaDevices_DefaultAudioInput();
QAudioDevice* QMediaDevices_DefaultAudioOutput();
QCameraDevice* QMediaDevices_DefaultVideoInput();
void QMediaDevices_AudioInputsChanged(QMediaDevices* self);
void QMediaDevices_Connect_AudioInputsChanged(QMediaDevices* self, intptr_t slot);
void QMediaDevices_AudioOutputsChanged(QMediaDevices* self);
void QMediaDevices_Connect_AudioOutputsChanged(QMediaDevices* self, intptr_t slot);
void QMediaDevices_VideoInputsChanged(QMediaDevices* self);
void QMediaDevices_Connect_VideoInputsChanged(QMediaDevices* self, intptr_t slot);
libqt_string QMediaDevices_Tr2(const char* s, const char* c);
libqt_string QMediaDevices_Tr3(const char* s, const char* c, int n);
bool QMediaDevices_Event(QMediaDevices* self, QEvent* event);
void QMediaDevices_OnEvent(QMediaDevices* self, intptr_t slot);
bool QMediaDevices_QBaseEvent(QMediaDevices* self, QEvent* event);
bool QMediaDevices_EventFilter(QMediaDevices* self, QObject* watched, QEvent* event);
void QMediaDevices_OnEventFilter(QMediaDevices* self, intptr_t slot);
bool QMediaDevices_QBaseEventFilter(QMediaDevices* self, QObject* watched, QEvent* event);
void QMediaDevices_TimerEvent(QMediaDevices* self, QTimerEvent* event);
void QMediaDevices_OnTimerEvent(QMediaDevices* self, intptr_t slot);
void QMediaDevices_QBaseTimerEvent(QMediaDevices* self, QTimerEvent* event);
void QMediaDevices_ChildEvent(QMediaDevices* self, QChildEvent* event);
void QMediaDevices_OnChildEvent(QMediaDevices* self, intptr_t slot);
void QMediaDevices_QBaseChildEvent(QMediaDevices* self, QChildEvent* event);
void QMediaDevices_CustomEvent(QMediaDevices* self, QEvent* event);
void QMediaDevices_OnCustomEvent(QMediaDevices* self, intptr_t slot);
void QMediaDevices_QBaseCustomEvent(QMediaDevices* self, QEvent* event);
void QMediaDevices_ConnectNotify(QMediaDevices* self, const QMetaMethod* signal);
void QMediaDevices_OnConnectNotify(QMediaDevices* self, intptr_t slot);
void QMediaDevices_QBaseConnectNotify(QMediaDevices* self, const QMetaMethod* signal);
void QMediaDevices_DisconnectNotify(QMediaDevices* self, const QMetaMethod* signal);
void QMediaDevices_OnDisconnectNotify(QMediaDevices* self, intptr_t slot);
void QMediaDevices_QBaseDisconnectNotify(QMediaDevices* self, const QMetaMethod* signal);
QObject* QMediaDevices_Sender(const QMediaDevices* self);
void QMediaDevices_OnSender(const QMediaDevices* self, intptr_t slot);
QObject* QMediaDevices_QBaseSender(const QMediaDevices* self);
int QMediaDevices_SenderSignalIndex(const QMediaDevices* self);
void QMediaDevices_OnSenderSignalIndex(const QMediaDevices* self, intptr_t slot);
int QMediaDevices_QBaseSenderSignalIndex(const QMediaDevices* self);
int QMediaDevices_Receivers(const QMediaDevices* self, const char* signal);
void QMediaDevices_OnReceivers(const QMediaDevices* self, intptr_t slot);
int QMediaDevices_QBaseReceivers(const QMediaDevices* self, const char* signal);
bool QMediaDevices_IsSignalConnected(const QMediaDevices* self, const QMetaMethod* signal);
void QMediaDevices_OnIsSignalConnected(const QMediaDevices* self, intptr_t slot);
bool QMediaDevices_QBaseIsSignalConnected(const QMediaDevices* self, const QMetaMethod* signal);
void QMediaDevices_Delete(QMediaDevices* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
