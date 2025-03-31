#pragma once
#ifndef SRC_SPATIALAUDIOC_LIBQAUDIOENGINE_H
#define SRC_SPATIALAUDIOC_LIBQAUDIOENGINE_H

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
typedef struct QAudioEngine QAudioEngine;
typedef struct QBindingStorage QBindingStorage;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QMetaObject__Connection QMetaObject__Connection;
typedef struct QObject QObject;
typedef struct QThread QThread;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
#endif

#ifdef __cplusplus
typedef QAudioEngine::OutputMode OutputMode; // C++ enum
#else
typedef int OutputMode; // C ABI enum
#endif

QAudioEngine* QAudioEngine_new();
QAudioEngine* QAudioEngine_new2(QObject* parent);
QAudioEngine* QAudioEngine_new3(int sampleRate);
QAudioEngine* QAudioEngine_new4(int sampleRate, QObject* parent);
QMetaObject* QAudioEngine_MetaObject(const QAudioEngine* self);
void* QAudioEngine_Metacast(QAudioEngine* self, const char* param1);
int QAudioEngine_Metacall(QAudioEngine* self, int param1, int param2, void** param3);
void QAudioEngine_OnMetacall(QAudioEngine* self, intptr_t slot);
int QAudioEngine_QBaseMetacall(QAudioEngine* self, int param1, int param2, void** param3);
libqt_string QAudioEngine_Tr(const char* s);
void QAudioEngine_SetOutputMode(QAudioEngine* self, int mode);
int QAudioEngine_OutputMode(const QAudioEngine* self);
int QAudioEngine_SampleRate(const QAudioEngine* self);
void QAudioEngine_SetOutputDevice(QAudioEngine* self, QAudioDevice* device);
QAudioDevice* QAudioEngine_OutputDevice(const QAudioEngine* self);
void QAudioEngine_SetMasterVolume(QAudioEngine* self, float volume);
float QAudioEngine_MasterVolume(const QAudioEngine* self);
void QAudioEngine_SetPaused(QAudioEngine* self, bool paused);
bool QAudioEngine_Paused(const QAudioEngine* self);
void QAudioEngine_SetRoomEffectsEnabled(QAudioEngine* self, bool enabled);
bool QAudioEngine_RoomEffectsEnabled(const QAudioEngine* self);
void QAudioEngine_SetDistanceScale(QAudioEngine* self, float scale);
float QAudioEngine_DistanceScale(const QAudioEngine* self);
void QAudioEngine_OutputModeChanged(QAudioEngine* self);
void QAudioEngine_Connect_OutputModeChanged(QAudioEngine* self, intptr_t slot);
void QAudioEngine_OutputDeviceChanged(QAudioEngine* self);
void QAudioEngine_Connect_OutputDeviceChanged(QAudioEngine* self, intptr_t slot);
void QAudioEngine_MasterVolumeChanged(QAudioEngine* self);
void QAudioEngine_Connect_MasterVolumeChanged(QAudioEngine* self, intptr_t slot);
void QAudioEngine_PausedChanged(QAudioEngine* self);
void QAudioEngine_Connect_PausedChanged(QAudioEngine* self, intptr_t slot);
void QAudioEngine_DistanceScaleChanged(QAudioEngine* self);
void QAudioEngine_Connect_DistanceScaleChanged(QAudioEngine* self, intptr_t slot);
void QAudioEngine_Start(QAudioEngine* self);
void QAudioEngine_Stop(QAudioEngine* self);
void QAudioEngine_Pause(QAudioEngine* self);
void QAudioEngine_Resume(QAudioEngine* self);
libqt_string QAudioEngine_Tr2(const char* s, const char* c);
libqt_string QAudioEngine_Tr3(const char* s, const char* c, int n);
bool QAudioEngine_Event(QAudioEngine* self, QEvent* event);
void QAudioEngine_OnEvent(QAudioEngine* self, intptr_t slot);
bool QAudioEngine_QBaseEvent(QAudioEngine* self, QEvent* event);
bool QAudioEngine_EventFilter(QAudioEngine* self, QObject* watched, QEvent* event);
void QAudioEngine_OnEventFilter(QAudioEngine* self, intptr_t slot);
bool QAudioEngine_QBaseEventFilter(QAudioEngine* self, QObject* watched, QEvent* event);
void QAudioEngine_TimerEvent(QAudioEngine* self, QTimerEvent* event);
void QAudioEngine_OnTimerEvent(QAudioEngine* self, intptr_t slot);
void QAudioEngine_QBaseTimerEvent(QAudioEngine* self, QTimerEvent* event);
void QAudioEngine_ChildEvent(QAudioEngine* self, QChildEvent* event);
void QAudioEngine_OnChildEvent(QAudioEngine* self, intptr_t slot);
void QAudioEngine_QBaseChildEvent(QAudioEngine* self, QChildEvent* event);
void QAudioEngine_CustomEvent(QAudioEngine* self, QEvent* event);
void QAudioEngine_OnCustomEvent(QAudioEngine* self, intptr_t slot);
void QAudioEngine_QBaseCustomEvent(QAudioEngine* self, QEvent* event);
void QAudioEngine_ConnectNotify(QAudioEngine* self, QMetaMethod* signal);
void QAudioEngine_OnConnectNotify(QAudioEngine* self, intptr_t slot);
void QAudioEngine_QBaseConnectNotify(QAudioEngine* self, QMetaMethod* signal);
void QAudioEngine_DisconnectNotify(QAudioEngine* self, QMetaMethod* signal);
void QAudioEngine_OnDisconnectNotify(QAudioEngine* self, intptr_t slot);
void QAudioEngine_QBaseDisconnectNotify(QAudioEngine* self, QMetaMethod* signal);
QObject* QAudioEngine_Sender(const QAudioEngine* self);
void QAudioEngine_OnSender(const QAudioEngine* self, intptr_t slot);
QObject* QAudioEngine_QBaseSender(const QAudioEngine* self);
int QAudioEngine_SenderSignalIndex(const QAudioEngine* self);
void QAudioEngine_OnSenderSignalIndex(const QAudioEngine* self, intptr_t slot);
int QAudioEngine_QBaseSenderSignalIndex(const QAudioEngine* self);
int QAudioEngine_Receivers(const QAudioEngine* self, const char* signal);
void QAudioEngine_OnReceivers(const QAudioEngine* self, intptr_t slot);
int QAudioEngine_QBaseReceivers(const QAudioEngine* self, const char* signal);
bool QAudioEngine_IsSignalConnected(const QAudioEngine* self, QMetaMethod* signal);
void QAudioEngine_OnIsSignalConnected(const QAudioEngine* self, intptr_t slot);
bool QAudioEngine_QBaseIsSignalConnected(const QAudioEngine* self, QMetaMethod* signal);
void QAudioEngine_Delete(QAudioEngine* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
