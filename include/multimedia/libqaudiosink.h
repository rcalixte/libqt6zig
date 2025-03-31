#pragma once
#ifndef SRC_MULTIMEDIAC_LIBQAUDIOSINK_H
#define SRC_MULTIMEDIAC_LIBQAUDIOSINK_H

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
typedef struct QAudioFormat QAudioFormat;
typedef struct QAudioSink QAudioSink;
typedef struct QBindingStorage QBindingStorage;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QIODevice QIODevice;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QMetaObject__Connection QMetaObject__Connection;
typedef struct QObject QObject;
typedef struct QThread QThread;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
#endif

QAudioSink* QAudioSink_new();
QAudioSink* QAudioSink_new2(QAudioDevice* audioDeviceInfo);
QAudioSink* QAudioSink_new3(QAudioFormat* format);
QAudioSink* QAudioSink_new4(QAudioFormat* format, QObject* parent);
QAudioSink* QAudioSink_new5(QAudioDevice* audioDeviceInfo, QAudioFormat* format);
QAudioSink* QAudioSink_new6(QAudioDevice* audioDeviceInfo, QAudioFormat* format, QObject* parent);
QMetaObject* QAudioSink_MetaObject(const QAudioSink* self);
void* QAudioSink_Metacast(QAudioSink* self, const char* param1);
int QAudioSink_Metacall(QAudioSink* self, int param1, int param2, void** param3);
void QAudioSink_OnMetacall(QAudioSink* self, intptr_t slot);
int QAudioSink_QBaseMetacall(QAudioSink* self, int param1, int param2, void** param3);
libqt_string QAudioSink_Tr(const char* s);
bool QAudioSink_IsNull(const QAudioSink* self);
QAudioFormat* QAudioSink_Format(const QAudioSink* self);
void QAudioSink_Start(QAudioSink* self, QIODevice* device);
QIODevice* QAudioSink_Start2(QAudioSink* self);
void QAudioSink_Stop(QAudioSink* self);
void QAudioSink_Reset(QAudioSink* self);
void QAudioSink_Suspend(QAudioSink* self);
void QAudioSink_Resume(QAudioSink* self);
void QAudioSink_SetBufferSize(QAudioSink* self, ptrdiff_t bytes);
ptrdiff_t QAudioSink_BufferSize(const QAudioSink* self);
ptrdiff_t QAudioSink_BytesFree(const QAudioSink* self);
long long QAudioSink_ProcessedUSecs(const QAudioSink* self);
long long QAudioSink_ElapsedUSecs(const QAudioSink* self);
int QAudioSink_Error(const QAudioSink* self);
int QAudioSink_State(const QAudioSink* self);
void QAudioSink_SetVolume(QAudioSink* self, double volume);
double QAudioSink_Volume(const QAudioSink* self);
void QAudioSink_StateChanged(QAudioSink* self, int state);
void QAudioSink_Connect_StateChanged(QAudioSink* self, intptr_t slot);
libqt_string QAudioSink_Tr2(const char* s, const char* c);
libqt_string QAudioSink_Tr3(const char* s, const char* c, int n);
bool QAudioSink_Event(QAudioSink* self, QEvent* event);
void QAudioSink_OnEvent(QAudioSink* self, intptr_t slot);
bool QAudioSink_QBaseEvent(QAudioSink* self, QEvent* event);
bool QAudioSink_EventFilter(QAudioSink* self, QObject* watched, QEvent* event);
void QAudioSink_OnEventFilter(QAudioSink* self, intptr_t slot);
bool QAudioSink_QBaseEventFilter(QAudioSink* self, QObject* watched, QEvent* event);
void QAudioSink_TimerEvent(QAudioSink* self, QTimerEvent* event);
void QAudioSink_OnTimerEvent(QAudioSink* self, intptr_t slot);
void QAudioSink_QBaseTimerEvent(QAudioSink* self, QTimerEvent* event);
void QAudioSink_ChildEvent(QAudioSink* self, QChildEvent* event);
void QAudioSink_OnChildEvent(QAudioSink* self, intptr_t slot);
void QAudioSink_QBaseChildEvent(QAudioSink* self, QChildEvent* event);
void QAudioSink_CustomEvent(QAudioSink* self, QEvent* event);
void QAudioSink_OnCustomEvent(QAudioSink* self, intptr_t slot);
void QAudioSink_QBaseCustomEvent(QAudioSink* self, QEvent* event);
void QAudioSink_ConnectNotify(QAudioSink* self, QMetaMethod* signal);
void QAudioSink_OnConnectNotify(QAudioSink* self, intptr_t slot);
void QAudioSink_QBaseConnectNotify(QAudioSink* self, QMetaMethod* signal);
void QAudioSink_DisconnectNotify(QAudioSink* self, QMetaMethod* signal);
void QAudioSink_OnDisconnectNotify(QAudioSink* self, intptr_t slot);
void QAudioSink_QBaseDisconnectNotify(QAudioSink* self, QMetaMethod* signal);
QObject* QAudioSink_Sender(const QAudioSink* self);
void QAudioSink_OnSender(const QAudioSink* self, intptr_t slot);
QObject* QAudioSink_QBaseSender(const QAudioSink* self);
int QAudioSink_SenderSignalIndex(const QAudioSink* self);
void QAudioSink_OnSenderSignalIndex(const QAudioSink* self, intptr_t slot);
int QAudioSink_QBaseSenderSignalIndex(const QAudioSink* self);
int QAudioSink_Receivers(const QAudioSink* self, const char* signal);
void QAudioSink_OnReceivers(const QAudioSink* self, intptr_t slot);
int QAudioSink_QBaseReceivers(const QAudioSink* self, const char* signal);
bool QAudioSink_IsSignalConnected(const QAudioSink* self, QMetaMethod* signal);
void QAudioSink_OnIsSignalConnected(const QAudioSink* self, intptr_t slot);
bool QAudioSink_QBaseIsSignalConnected(const QAudioSink* self, QMetaMethod* signal);
void QAudioSink_Delete(QAudioSink* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
