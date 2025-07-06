#pragma once
#ifndef SRC_MULTIMEDIAC_LIBQAUDIOBUFFERINPUT_H
#define SRC_MULTIMEDIAC_LIBQAUDIOBUFFERINPUT_H

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
typedef struct QAudioBuffer QAudioBuffer;
typedef struct QAudioBufferInput QAudioBufferInput;
typedef struct QAudioFormat QAudioFormat;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMediaCaptureSession QMediaCaptureSession;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
#endif

QAudioBufferInput* QAudioBufferInput_new();
QAudioBufferInput* QAudioBufferInput_new2(const QAudioFormat* format);
QAudioBufferInput* QAudioBufferInput_new3(QObject* parent);
QAudioBufferInput* QAudioBufferInput_new4(const QAudioFormat* format, QObject* parent);
QMetaObject* QAudioBufferInput_MetaObject(const QAudioBufferInput* self);
void* QAudioBufferInput_Metacast(QAudioBufferInput* self, const char* param1);
int QAudioBufferInput_Metacall(QAudioBufferInput* self, int param1, int param2, void** param3);
void QAudioBufferInput_OnMetacall(QAudioBufferInput* self, intptr_t slot);
int QAudioBufferInput_QBaseMetacall(QAudioBufferInput* self, int param1, int param2, void** param3);
libqt_string QAudioBufferInput_Tr(const char* s);
bool QAudioBufferInput_SendAudioBuffer(QAudioBufferInput* self, const QAudioBuffer* audioBuffer);
QAudioFormat* QAudioBufferInput_Format(const QAudioBufferInput* self);
QMediaCaptureSession* QAudioBufferInput_CaptureSession(const QAudioBufferInput* self);
void QAudioBufferInput_ReadyToSendAudioBuffer(QAudioBufferInput* self);
void QAudioBufferInput_Connect_ReadyToSendAudioBuffer(QAudioBufferInput* self, intptr_t slot);
libqt_string QAudioBufferInput_Tr2(const char* s, const char* c);
libqt_string QAudioBufferInput_Tr3(const char* s, const char* c, int n);
bool QAudioBufferInput_Event(QAudioBufferInput* self, QEvent* event);
void QAudioBufferInput_OnEvent(QAudioBufferInput* self, intptr_t slot);
bool QAudioBufferInput_QBaseEvent(QAudioBufferInput* self, QEvent* event);
bool QAudioBufferInput_EventFilter(QAudioBufferInput* self, QObject* watched, QEvent* event);
void QAudioBufferInput_OnEventFilter(QAudioBufferInput* self, intptr_t slot);
bool QAudioBufferInput_QBaseEventFilter(QAudioBufferInput* self, QObject* watched, QEvent* event);
void QAudioBufferInput_TimerEvent(QAudioBufferInput* self, QTimerEvent* event);
void QAudioBufferInput_OnTimerEvent(QAudioBufferInput* self, intptr_t slot);
void QAudioBufferInput_QBaseTimerEvent(QAudioBufferInput* self, QTimerEvent* event);
void QAudioBufferInput_ChildEvent(QAudioBufferInput* self, QChildEvent* event);
void QAudioBufferInput_OnChildEvent(QAudioBufferInput* self, intptr_t slot);
void QAudioBufferInput_QBaseChildEvent(QAudioBufferInput* self, QChildEvent* event);
void QAudioBufferInput_CustomEvent(QAudioBufferInput* self, QEvent* event);
void QAudioBufferInput_OnCustomEvent(QAudioBufferInput* self, intptr_t slot);
void QAudioBufferInput_QBaseCustomEvent(QAudioBufferInput* self, QEvent* event);
void QAudioBufferInput_ConnectNotify(QAudioBufferInput* self, const QMetaMethod* signal);
void QAudioBufferInput_OnConnectNotify(QAudioBufferInput* self, intptr_t slot);
void QAudioBufferInput_QBaseConnectNotify(QAudioBufferInput* self, const QMetaMethod* signal);
void QAudioBufferInput_DisconnectNotify(QAudioBufferInput* self, const QMetaMethod* signal);
void QAudioBufferInput_OnDisconnectNotify(QAudioBufferInput* self, intptr_t slot);
void QAudioBufferInput_QBaseDisconnectNotify(QAudioBufferInput* self, const QMetaMethod* signal);
QObject* QAudioBufferInput_Sender(const QAudioBufferInput* self);
void QAudioBufferInput_OnSender(const QAudioBufferInput* self, intptr_t slot);
QObject* QAudioBufferInput_QBaseSender(const QAudioBufferInput* self);
int QAudioBufferInput_SenderSignalIndex(const QAudioBufferInput* self);
void QAudioBufferInput_OnSenderSignalIndex(const QAudioBufferInput* self, intptr_t slot);
int QAudioBufferInput_QBaseSenderSignalIndex(const QAudioBufferInput* self);
int QAudioBufferInput_Receivers(const QAudioBufferInput* self, const char* signal);
void QAudioBufferInput_OnReceivers(const QAudioBufferInput* self, intptr_t slot);
int QAudioBufferInput_QBaseReceivers(const QAudioBufferInput* self, const char* signal);
bool QAudioBufferInput_IsSignalConnected(const QAudioBufferInput* self, const QMetaMethod* signal);
void QAudioBufferInput_OnIsSignalConnected(const QAudioBufferInput* self, intptr_t slot);
bool QAudioBufferInput_QBaseIsSignalConnected(const QAudioBufferInput* self, const QMetaMethod* signal);
void QAudioBufferInput_Delete(QAudioBufferInput* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
