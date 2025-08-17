#pragma once
#ifndef SRC_MULTIMEDIAC_LIBQAUDIOINPUT_H
#define SRC_MULTIMEDIAC_LIBQAUDIOINPUT_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QAudioDevice QAudioDevice;
typedef struct QAudioInput QAudioInput;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
#endif

QAudioInput* QAudioInput_new();
QAudioInput* QAudioInput_new2(const QAudioDevice* deviceInfo);
QAudioInput* QAudioInput_new3(QObject* parent);
QAudioInput* QAudioInput_new4(const QAudioDevice* deviceInfo, QObject* parent);
QMetaObject* QAudioInput_MetaObject(const QAudioInput* self);
void* QAudioInput_Metacast(QAudioInput* self, const char* param1);
int QAudioInput_Metacall(QAudioInput* self, int param1, int param2, void** param3);
void QAudioInput_OnMetacall(QAudioInput* self, intptr_t slot);
int QAudioInput_QBaseMetacall(QAudioInput* self, int param1, int param2, void** param3);
libqt_string QAudioInput_Tr(const char* s);
QAudioDevice* QAudioInput_Device(const QAudioInput* self);
float QAudioInput_Volume(const QAudioInput* self);
bool QAudioInput_IsMuted(const QAudioInput* self);
void QAudioInput_SetDevice(QAudioInput* self, const QAudioDevice* device);
void QAudioInput_SetVolume(QAudioInput* self, float volume);
void QAudioInput_SetMuted(QAudioInput* self, bool muted);
void QAudioInput_DeviceChanged(QAudioInput* self);
void QAudioInput_Connect_DeviceChanged(QAudioInput* self, intptr_t slot);
void QAudioInput_VolumeChanged(QAudioInput* self, float volume);
void QAudioInput_Connect_VolumeChanged(QAudioInput* self, intptr_t slot);
void QAudioInput_MutedChanged(QAudioInput* self, bool muted);
void QAudioInput_Connect_MutedChanged(QAudioInput* self, intptr_t slot);
libqt_string QAudioInput_Tr2(const char* s, const char* c);
libqt_string QAudioInput_Tr3(const char* s, const char* c, int n);
bool QAudioInput_Event(QAudioInput* self, QEvent* event);
void QAudioInput_OnEvent(QAudioInput* self, intptr_t slot);
bool QAudioInput_QBaseEvent(QAudioInput* self, QEvent* event);
bool QAudioInput_EventFilter(QAudioInput* self, QObject* watched, QEvent* event);
void QAudioInput_OnEventFilter(QAudioInput* self, intptr_t slot);
bool QAudioInput_QBaseEventFilter(QAudioInput* self, QObject* watched, QEvent* event);
void QAudioInput_TimerEvent(QAudioInput* self, QTimerEvent* event);
void QAudioInput_OnTimerEvent(QAudioInput* self, intptr_t slot);
void QAudioInput_QBaseTimerEvent(QAudioInput* self, QTimerEvent* event);
void QAudioInput_ChildEvent(QAudioInput* self, QChildEvent* event);
void QAudioInput_OnChildEvent(QAudioInput* self, intptr_t slot);
void QAudioInput_QBaseChildEvent(QAudioInput* self, QChildEvent* event);
void QAudioInput_CustomEvent(QAudioInput* self, QEvent* event);
void QAudioInput_OnCustomEvent(QAudioInput* self, intptr_t slot);
void QAudioInput_QBaseCustomEvent(QAudioInput* self, QEvent* event);
void QAudioInput_ConnectNotify(QAudioInput* self, const QMetaMethod* signal);
void QAudioInput_OnConnectNotify(QAudioInput* self, intptr_t slot);
void QAudioInput_QBaseConnectNotify(QAudioInput* self, const QMetaMethod* signal);
void QAudioInput_DisconnectNotify(QAudioInput* self, const QMetaMethod* signal);
void QAudioInput_OnDisconnectNotify(QAudioInput* self, intptr_t slot);
void QAudioInput_QBaseDisconnectNotify(QAudioInput* self, const QMetaMethod* signal);
QObject* QAudioInput_Sender(const QAudioInput* self);
void QAudioInput_OnSender(const QAudioInput* self, intptr_t slot);
QObject* QAudioInput_QBaseSender(const QAudioInput* self);
int QAudioInput_SenderSignalIndex(const QAudioInput* self);
void QAudioInput_OnSenderSignalIndex(const QAudioInput* self, intptr_t slot);
int QAudioInput_QBaseSenderSignalIndex(const QAudioInput* self);
int QAudioInput_Receivers(const QAudioInput* self, const char* signal);
void QAudioInput_OnReceivers(const QAudioInput* self, intptr_t slot);
int QAudioInput_QBaseReceivers(const QAudioInput* self, const char* signal);
bool QAudioInput_IsSignalConnected(const QAudioInput* self, const QMetaMethod* signal);
void QAudioInput_OnIsSignalConnected(const QAudioInput* self, intptr_t slot);
bool QAudioInput_QBaseIsSignalConnected(const QAudioInput* self, const QMetaMethod* signal);
void QAudioInput_Delete(QAudioInput* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
