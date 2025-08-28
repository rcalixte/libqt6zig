#pragma once
#ifndef SRC_MULTIMEDIAC_LIBQAUDIOBUFFEROUTPUT_H
#define SRC_MULTIMEDIAC_LIBQAUDIOBUFFEROUTPUT_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QAudioBuffer QAudioBuffer;
typedef struct QAudioBufferOutput QAudioBufferOutput;
typedef struct QAudioFormat QAudioFormat;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
#endif

QAudioBufferOutput* QAudioBufferOutput_new();
QAudioBufferOutput* QAudioBufferOutput_new2(const QAudioFormat* format);
QAudioBufferOutput* QAudioBufferOutput_new3(QObject* parent);
QAudioBufferOutput* QAudioBufferOutput_new4(const QAudioFormat* format, QObject* parent);
QMetaObject* QAudioBufferOutput_MetaObject(const QAudioBufferOutput* self);
void* QAudioBufferOutput_Metacast(QAudioBufferOutput* self, const char* param1);
int QAudioBufferOutput_Metacall(QAudioBufferOutput* self, int param1, int param2, void** param3);
libqt_string QAudioBufferOutput_Tr(const char* s);
QAudioFormat* QAudioBufferOutput_Format(const QAudioBufferOutput* self);
void QAudioBufferOutput_AudioBufferReceived(QAudioBufferOutput* self, const QAudioBuffer* buffer);
void QAudioBufferOutput_Connect_AudioBufferReceived(QAudioBufferOutput* self, intptr_t slot);
libqt_string QAudioBufferOutput_Tr2(const char* s, const char* c);
libqt_string QAudioBufferOutput_Tr3(const char* s, const char* c, int n);
void QAudioBufferOutput_OnMetacall(QAudioBufferOutput* self, intptr_t slot);
int QAudioBufferOutput_QBaseMetacall(QAudioBufferOutput* self, int param1, int param2, void** param3);
bool QAudioBufferOutput_Event(QAudioBufferOutput* self, QEvent* event);
void QAudioBufferOutput_OnEvent(QAudioBufferOutput* self, intptr_t slot);
bool QAudioBufferOutput_QBaseEvent(QAudioBufferOutput* self, QEvent* event);
bool QAudioBufferOutput_EventFilter(QAudioBufferOutput* self, QObject* watched, QEvent* event);
void QAudioBufferOutput_OnEventFilter(QAudioBufferOutput* self, intptr_t slot);
bool QAudioBufferOutput_QBaseEventFilter(QAudioBufferOutput* self, QObject* watched, QEvent* event);
void QAudioBufferOutput_TimerEvent(QAudioBufferOutput* self, QTimerEvent* event);
void QAudioBufferOutput_OnTimerEvent(QAudioBufferOutput* self, intptr_t slot);
void QAudioBufferOutput_QBaseTimerEvent(QAudioBufferOutput* self, QTimerEvent* event);
void QAudioBufferOutput_ChildEvent(QAudioBufferOutput* self, QChildEvent* event);
void QAudioBufferOutput_OnChildEvent(QAudioBufferOutput* self, intptr_t slot);
void QAudioBufferOutput_QBaseChildEvent(QAudioBufferOutput* self, QChildEvent* event);
void QAudioBufferOutput_CustomEvent(QAudioBufferOutput* self, QEvent* event);
void QAudioBufferOutput_OnCustomEvent(QAudioBufferOutput* self, intptr_t slot);
void QAudioBufferOutput_QBaseCustomEvent(QAudioBufferOutput* self, QEvent* event);
void QAudioBufferOutput_ConnectNotify(QAudioBufferOutput* self, const QMetaMethod* signal);
void QAudioBufferOutput_OnConnectNotify(QAudioBufferOutput* self, intptr_t slot);
void QAudioBufferOutput_QBaseConnectNotify(QAudioBufferOutput* self, const QMetaMethod* signal);
void QAudioBufferOutput_DisconnectNotify(QAudioBufferOutput* self, const QMetaMethod* signal);
void QAudioBufferOutput_OnDisconnectNotify(QAudioBufferOutput* self, intptr_t slot);
void QAudioBufferOutput_QBaseDisconnectNotify(QAudioBufferOutput* self, const QMetaMethod* signal);
QObject* QAudioBufferOutput_Sender(const QAudioBufferOutput* self);
void QAudioBufferOutput_OnSender(const QAudioBufferOutput* self, intptr_t slot);
QObject* QAudioBufferOutput_QBaseSender(const QAudioBufferOutput* self);
int QAudioBufferOutput_SenderSignalIndex(const QAudioBufferOutput* self);
void QAudioBufferOutput_OnSenderSignalIndex(const QAudioBufferOutput* self, intptr_t slot);
int QAudioBufferOutput_QBaseSenderSignalIndex(const QAudioBufferOutput* self);
int QAudioBufferOutput_Receivers(const QAudioBufferOutput* self, const char* signal);
void QAudioBufferOutput_OnReceivers(const QAudioBufferOutput* self, intptr_t slot);
int QAudioBufferOutput_QBaseReceivers(const QAudioBufferOutput* self, const char* signal);
bool QAudioBufferOutput_IsSignalConnected(const QAudioBufferOutput* self, const QMetaMethod* signal);
void QAudioBufferOutput_OnIsSignalConnected(const QAudioBufferOutput* self, intptr_t slot);
bool QAudioBufferOutput_QBaseIsSignalConnected(const QAudioBufferOutput* self, const QMetaMethod* signal);
void QAudioBufferOutput_Delete(QAudioBufferOutput* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
