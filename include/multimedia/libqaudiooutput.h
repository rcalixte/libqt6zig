#pragma once
#ifndef SRC_MULTIMEDIAC_LIBQAUDIOOUTPUT_H
#define SRC_MULTIMEDIAC_LIBQAUDIOOUTPUT_H

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
typedef struct QAudioOutput QAudioOutput;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
#endif

QAudioOutput* QAudioOutput_new();
QAudioOutput* QAudioOutput_new2(const QAudioDevice* device);
QAudioOutput* QAudioOutput_new3(QObject* parent);
QAudioOutput* QAudioOutput_new4(const QAudioDevice* device, QObject* parent);
QMetaObject* QAudioOutput_MetaObject(const QAudioOutput* self);
void* QAudioOutput_Metacast(QAudioOutput* self, const char* param1);
int QAudioOutput_Metacall(QAudioOutput* self, int param1, int param2, void** param3);
libqt_string QAudioOutput_Tr(const char* s);
QAudioDevice* QAudioOutput_Device(const QAudioOutput* self);
float QAudioOutput_Volume(const QAudioOutput* self);
bool QAudioOutput_IsMuted(const QAudioOutput* self);
void QAudioOutput_SetDevice(QAudioOutput* self, const QAudioDevice* device);
void QAudioOutput_SetVolume(QAudioOutput* self, float volume);
void QAudioOutput_SetMuted(QAudioOutput* self, bool muted);
void QAudioOutput_DeviceChanged(QAudioOutput* self);
void QAudioOutput_Connect_DeviceChanged(QAudioOutput* self, intptr_t slot);
void QAudioOutput_VolumeChanged(QAudioOutput* self, float volume);
void QAudioOutput_Connect_VolumeChanged(QAudioOutput* self, intptr_t slot);
void QAudioOutput_MutedChanged(QAudioOutput* self, bool muted);
void QAudioOutput_Connect_MutedChanged(QAudioOutput* self, intptr_t slot);
libqt_string QAudioOutput_Tr2(const char* s, const char* c);
libqt_string QAudioOutput_Tr3(const char* s, const char* c, int n);
void QAudioOutput_OnMetacall(QAudioOutput* self, intptr_t slot);
int QAudioOutput_QBaseMetacall(QAudioOutput* self, int param1, int param2, void** param3);
bool QAudioOutput_Event(QAudioOutput* self, QEvent* event);
void QAudioOutput_OnEvent(QAudioOutput* self, intptr_t slot);
bool QAudioOutput_QBaseEvent(QAudioOutput* self, QEvent* event);
bool QAudioOutput_EventFilter(QAudioOutput* self, QObject* watched, QEvent* event);
void QAudioOutput_OnEventFilter(QAudioOutput* self, intptr_t slot);
bool QAudioOutput_QBaseEventFilter(QAudioOutput* self, QObject* watched, QEvent* event);
void QAudioOutput_TimerEvent(QAudioOutput* self, QTimerEvent* event);
void QAudioOutput_OnTimerEvent(QAudioOutput* self, intptr_t slot);
void QAudioOutput_QBaseTimerEvent(QAudioOutput* self, QTimerEvent* event);
void QAudioOutput_ChildEvent(QAudioOutput* self, QChildEvent* event);
void QAudioOutput_OnChildEvent(QAudioOutput* self, intptr_t slot);
void QAudioOutput_QBaseChildEvent(QAudioOutput* self, QChildEvent* event);
void QAudioOutput_CustomEvent(QAudioOutput* self, QEvent* event);
void QAudioOutput_OnCustomEvent(QAudioOutput* self, intptr_t slot);
void QAudioOutput_QBaseCustomEvent(QAudioOutput* self, QEvent* event);
void QAudioOutput_ConnectNotify(QAudioOutput* self, const QMetaMethod* signal);
void QAudioOutput_OnConnectNotify(QAudioOutput* self, intptr_t slot);
void QAudioOutput_QBaseConnectNotify(QAudioOutput* self, const QMetaMethod* signal);
void QAudioOutput_DisconnectNotify(QAudioOutput* self, const QMetaMethod* signal);
void QAudioOutput_OnDisconnectNotify(QAudioOutput* self, intptr_t slot);
void QAudioOutput_QBaseDisconnectNotify(QAudioOutput* self, const QMetaMethod* signal);
QObject* QAudioOutput_Sender(const QAudioOutput* self);
void QAudioOutput_OnSender(const QAudioOutput* self, intptr_t slot);
QObject* QAudioOutput_QBaseSender(const QAudioOutput* self);
int QAudioOutput_SenderSignalIndex(const QAudioOutput* self);
void QAudioOutput_OnSenderSignalIndex(const QAudioOutput* self, intptr_t slot);
int QAudioOutput_QBaseSenderSignalIndex(const QAudioOutput* self);
int QAudioOutput_Receivers(const QAudioOutput* self, const char* signal);
void QAudioOutput_OnReceivers(const QAudioOutput* self, intptr_t slot);
int QAudioOutput_QBaseReceivers(const QAudioOutput* self, const char* signal);
bool QAudioOutput_IsSignalConnected(const QAudioOutput* self, const QMetaMethod* signal);
void QAudioOutput_OnIsSignalConnected(const QAudioOutput* self, intptr_t slot);
bool QAudioOutput_QBaseIsSignalConnected(const QAudioOutput* self, const QMetaMethod* signal);
void QAudioOutput_Delete(QAudioOutput* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
