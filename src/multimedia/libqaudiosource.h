#pragma once
#ifndef SRC_MULTIMEDIAC_LIBQAUDIOSOURCE_H
#define SRC_MULTIMEDIAC_LIBQAUDIOSOURCE_H

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
typedef struct QAudioFormat QAudioFormat;
typedef struct QAudioSource QAudioSource;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QIODevice QIODevice;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
#endif

QAudioSource* QAudioSource_new();
QAudioSource* QAudioSource_new2(const QAudioDevice* audioDeviceInfo);
QAudioSource* QAudioSource_new3(const QAudioFormat* format);
QAudioSource* QAudioSource_new4(const QAudioFormat* format, QObject* parent);
QAudioSource* QAudioSource_new5(const QAudioDevice* audioDeviceInfo, const QAudioFormat* format);
QAudioSource* QAudioSource_new6(const QAudioDevice* audioDeviceInfo, const QAudioFormat* format, QObject* parent);
QMetaObject* QAudioSource_MetaObject(const QAudioSource* self);
void* QAudioSource_Metacast(QAudioSource* self, const char* param1);
int QAudioSource_Metacall(QAudioSource* self, int param1, int param2, void** param3);
libqt_string QAudioSource_Tr(const char* s);
bool QAudioSource_IsNull(const QAudioSource* self);
QAudioFormat* QAudioSource_Format(const QAudioSource* self);
void QAudioSource_Start(QAudioSource* self, QIODevice* device);
QIODevice* QAudioSource_Start2(QAudioSource* self);
void QAudioSource_Stop(QAudioSource* self);
void QAudioSource_Reset(QAudioSource* self);
void QAudioSource_Suspend(QAudioSource* self);
void QAudioSource_Resume(QAudioSource* self);
void QAudioSource_SetBufferSize(QAudioSource* self, ptrdiff_t bytes);
ptrdiff_t QAudioSource_BufferSize(const QAudioSource* self);
ptrdiff_t QAudioSource_BytesAvailable(const QAudioSource* self);
void QAudioSource_SetVolume(QAudioSource* self, double volume);
double QAudioSource_Volume(const QAudioSource* self);
long long QAudioSource_ProcessedUSecs(const QAudioSource* self);
long long QAudioSource_ElapsedUSecs(const QAudioSource* self);
int QAudioSource_Error(const QAudioSource* self);
int QAudioSource_State(const QAudioSource* self);
void QAudioSource_StateChanged(QAudioSource* self, int state);
void QAudioSource_Connect_StateChanged(QAudioSource* self, intptr_t slot);
libqt_string QAudioSource_Tr2(const char* s, const char* c);
libqt_string QAudioSource_Tr3(const char* s, const char* c, int n);
void QAudioSource_OnMetacall(QAudioSource* self, intptr_t slot);
int QAudioSource_QBaseMetacall(QAudioSource* self, int param1, int param2, void** param3);
bool QAudioSource_Event(QAudioSource* self, QEvent* event);
void QAudioSource_OnEvent(QAudioSource* self, intptr_t slot);
bool QAudioSource_QBaseEvent(QAudioSource* self, QEvent* event);
bool QAudioSource_EventFilter(QAudioSource* self, QObject* watched, QEvent* event);
void QAudioSource_OnEventFilter(QAudioSource* self, intptr_t slot);
bool QAudioSource_QBaseEventFilter(QAudioSource* self, QObject* watched, QEvent* event);
void QAudioSource_TimerEvent(QAudioSource* self, QTimerEvent* event);
void QAudioSource_OnTimerEvent(QAudioSource* self, intptr_t slot);
void QAudioSource_QBaseTimerEvent(QAudioSource* self, QTimerEvent* event);
void QAudioSource_ChildEvent(QAudioSource* self, QChildEvent* event);
void QAudioSource_OnChildEvent(QAudioSource* self, intptr_t slot);
void QAudioSource_QBaseChildEvent(QAudioSource* self, QChildEvent* event);
void QAudioSource_CustomEvent(QAudioSource* self, QEvent* event);
void QAudioSource_OnCustomEvent(QAudioSource* self, intptr_t slot);
void QAudioSource_QBaseCustomEvent(QAudioSource* self, QEvent* event);
void QAudioSource_ConnectNotify(QAudioSource* self, const QMetaMethod* signal);
void QAudioSource_OnConnectNotify(QAudioSource* self, intptr_t slot);
void QAudioSource_QBaseConnectNotify(QAudioSource* self, const QMetaMethod* signal);
void QAudioSource_DisconnectNotify(QAudioSource* self, const QMetaMethod* signal);
void QAudioSource_OnDisconnectNotify(QAudioSource* self, intptr_t slot);
void QAudioSource_QBaseDisconnectNotify(QAudioSource* self, const QMetaMethod* signal);
QObject* QAudioSource_Sender(const QAudioSource* self);
void QAudioSource_OnSender(const QAudioSource* self, intptr_t slot);
QObject* QAudioSource_QBaseSender(const QAudioSource* self);
int QAudioSource_SenderSignalIndex(const QAudioSource* self);
void QAudioSource_OnSenderSignalIndex(const QAudioSource* self, intptr_t slot);
int QAudioSource_QBaseSenderSignalIndex(const QAudioSource* self);
int QAudioSource_Receivers(const QAudioSource* self, const char* signal);
void QAudioSource_OnReceivers(const QAudioSource* self, intptr_t slot);
int QAudioSource_QBaseReceivers(const QAudioSource* self, const char* signal);
bool QAudioSource_IsSignalConnected(const QAudioSource* self, const QMetaMethod* signal);
void QAudioSource_OnIsSignalConnected(const QAudioSource* self, intptr_t slot);
bool QAudioSource_QBaseIsSignalConnected(const QAudioSource* self, const QMetaMethod* signal);
void QAudioSource_Delete(QAudioSource* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
