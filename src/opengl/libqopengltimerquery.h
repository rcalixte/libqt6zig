#pragma once
#ifndef SRC_OPENGLC_LIBQOPENGLTIMERQUERY_H
#define SRC_OPENGLC_LIBQOPENGLTIMERQUERY_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QOpenGLTimeMonitor QOpenGLTimeMonitor;
typedef struct QOpenGLTimerQuery QOpenGLTimerQuery;
typedef struct QTimerEvent QTimerEvent;
#endif

QOpenGLTimerQuery* QOpenGLTimerQuery_new();
QOpenGLTimerQuery* QOpenGLTimerQuery_new2(QObject* parent);
QMetaObject* QOpenGLTimerQuery_MetaObject(const QOpenGLTimerQuery* self);
void* QOpenGLTimerQuery_Metacast(QOpenGLTimerQuery* self, const char* param1);
int QOpenGLTimerQuery_Metacall(QOpenGLTimerQuery* self, int param1, int param2, void** param3);
libqt_string QOpenGLTimerQuery_Tr(const char* s);
bool QOpenGLTimerQuery_Create(QOpenGLTimerQuery* self);
void QOpenGLTimerQuery_Destroy(QOpenGLTimerQuery* self);
bool QOpenGLTimerQuery_IsCreated(const QOpenGLTimerQuery* self);
uint32_t QOpenGLTimerQuery_ObjectId(const QOpenGLTimerQuery* self);
void QOpenGLTimerQuery_Begin(QOpenGLTimerQuery* self);
void QOpenGLTimerQuery_End(QOpenGLTimerQuery* self);
uint64_t QOpenGLTimerQuery_WaitForTimestamp(const QOpenGLTimerQuery* self);
void QOpenGLTimerQuery_RecordTimestamp(QOpenGLTimerQuery* self);
bool QOpenGLTimerQuery_IsResultAvailable(const QOpenGLTimerQuery* self);
uint64_t QOpenGLTimerQuery_WaitForResult(const QOpenGLTimerQuery* self);
libqt_string QOpenGLTimerQuery_Tr2(const char* s, const char* c);
libqt_string QOpenGLTimerQuery_Tr3(const char* s, const char* c, int n);
void QOpenGLTimerQuery_OnMetacall(QOpenGLTimerQuery* self, intptr_t slot);
int QOpenGLTimerQuery_QBaseMetacall(QOpenGLTimerQuery* self, int param1, int param2, void** param3);
bool QOpenGLTimerQuery_Event(QOpenGLTimerQuery* self, QEvent* event);
void QOpenGLTimerQuery_OnEvent(QOpenGLTimerQuery* self, intptr_t slot);
bool QOpenGLTimerQuery_QBaseEvent(QOpenGLTimerQuery* self, QEvent* event);
bool QOpenGLTimerQuery_EventFilter(QOpenGLTimerQuery* self, QObject* watched, QEvent* event);
void QOpenGLTimerQuery_OnEventFilter(QOpenGLTimerQuery* self, intptr_t slot);
bool QOpenGLTimerQuery_QBaseEventFilter(QOpenGLTimerQuery* self, QObject* watched, QEvent* event);
void QOpenGLTimerQuery_TimerEvent(QOpenGLTimerQuery* self, QTimerEvent* event);
void QOpenGLTimerQuery_OnTimerEvent(QOpenGLTimerQuery* self, intptr_t slot);
void QOpenGLTimerQuery_QBaseTimerEvent(QOpenGLTimerQuery* self, QTimerEvent* event);
void QOpenGLTimerQuery_ChildEvent(QOpenGLTimerQuery* self, QChildEvent* event);
void QOpenGLTimerQuery_OnChildEvent(QOpenGLTimerQuery* self, intptr_t slot);
void QOpenGLTimerQuery_QBaseChildEvent(QOpenGLTimerQuery* self, QChildEvent* event);
void QOpenGLTimerQuery_CustomEvent(QOpenGLTimerQuery* self, QEvent* event);
void QOpenGLTimerQuery_OnCustomEvent(QOpenGLTimerQuery* self, intptr_t slot);
void QOpenGLTimerQuery_QBaseCustomEvent(QOpenGLTimerQuery* self, QEvent* event);
void QOpenGLTimerQuery_ConnectNotify(QOpenGLTimerQuery* self, const QMetaMethod* signal);
void QOpenGLTimerQuery_OnConnectNotify(QOpenGLTimerQuery* self, intptr_t slot);
void QOpenGLTimerQuery_QBaseConnectNotify(QOpenGLTimerQuery* self, const QMetaMethod* signal);
void QOpenGLTimerQuery_DisconnectNotify(QOpenGLTimerQuery* self, const QMetaMethod* signal);
void QOpenGLTimerQuery_OnDisconnectNotify(QOpenGLTimerQuery* self, intptr_t slot);
void QOpenGLTimerQuery_QBaseDisconnectNotify(QOpenGLTimerQuery* self, const QMetaMethod* signal);
QObject* QOpenGLTimerQuery_Sender(const QOpenGLTimerQuery* self);
void QOpenGLTimerQuery_OnSender(const QOpenGLTimerQuery* self, intptr_t slot);
QObject* QOpenGLTimerQuery_QBaseSender(const QOpenGLTimerQuery* self);
int QOpenGLTimerQuery_SenderSignalIndex(const QOpenGLTimerQuery* self);
void QOpenGLTimerQuery_OnSenderSignalIndex(const QOpenGLTimerQuery* self, intptr_t slot);
int QOpenGLTimerQuery_QBaseSenderSignalIndex(const QOpenGLTimerQuery* self);
int QOpenGLTimerQuery_Receivers(const QOpenGLTimerQuery* self, const char* signal);
void QOpenGLTimerQuery_OnReceivers(const QOpenGLTimerQuery* self, intptr_t slot);
int QOpenGLTimerQuery_QBaseReceivers(const QOpenGLTimerQuery* self, const char* signal);
bool QOpenGLTimerQuery_IsSignalConnected(const QOpenGLTimerQuery* self, const QMetaMethod* signal);
void QOpenGLTimerQuery_OnIsSignalConnected(const QOpenGLTimerQuery* self, intptr_t slot);
bool QOpenGLTimerQuery_QBaseIsSignalConnected(const QOpenGLTimerQuery* self, const QMetaMethod* signal);
void QOpenGLTimerQuery_Delete(QOpenGLTimerQuery* self);

QOpenGLTimeMonitor* QOpenGLTimeMonitor_new();
QOpenGLTimeMonitor* QOpenGLTimeMonitor_new2(QObject* parent);
QMetaObject* QOpenGLTimeMonitor_MetaObject(const QOpenGLTimeMonitor* self);
void* QOpenGLTimeMonitor_Metacast(QOpenGLTimeMonitor* self, const char* param1);
int QOpenGLTimeMonitor_Metacall(QOpenGLTimeMonitor* self, int param1, int param2, void** param3);
libqt_string QOpenGLTimeMonitor_Tr(const char* s);
void QOpenGLTimeMonitor_SetSampleCount(QOpenGLTimeMonitor* self, int sampleCount);
int QOpenGLTimeMonitor_SampleCount(const QOpenGLTimeMonitor* self);
bool QOpenGLTimeMonitor_Create(QOpenGLTimeMonitor* self);
void QOpenGLTimeMonitor_Destroy(QOpenGLTimeMonitor* self);
bool QOpenGLTimeMonitor_IsCreated(const QOpenGLTimeMonitor* self);
libqt_list /* of uint32_t */ QOpenGLTimeMonitor_ObjectIds(const QOpenGLTimeMonitor* self);
int QOpenGLTimeMonitor_RecordSample(QOpenGLTimeMonitor* self);
bool QOpenGLTimeMonitor_IsResultAvailable(const QOpenGLTimeMonitor* self);
libqt_list /* of uint64_t */ QOpenGLTimeMonitor_WaitForSamples(const QOpenGLTimeMonitor* self);
libqt_list /* of uint64_t */ QOpenGLTimeMonitor_WaitForIntervals(const QOpenGLTimeMonitor* self);
void QOpenGLTimeMonitor_Reset(QOpenGLTimeMonitor* self);
libqt_string QOpenGLTimeMonitor_Tr2(const char* s, const char* c);
libqt_string QOpenGLTimeMonitor_Tr3(const char* s, const char* c, int n);
void QOpenGLTimeMonitor_OnMetacall(QOpenGLTimeMonitor* self, intptr_t slot);
int QOpenGLTimeMonitor_QBaseMetacall(QOpenGLTimeMonitor* self, int param1, int param2, void** param3);
bool QOpenGLTimeMonitor_Event(QOpenGLTimeMonitor* self, QEvent* event);
void QOpenGLTimeMonitor_OnEvent(QOpenGLTimeMonitor* self, intptr_t slot);
bool QOpenGLTimeMonitor_QBaseEvent(QOpenGLTimeMonitor* self, QEvent* event);
bool QOpenGLTimeMonitor_EventFilter(QOpenGLTimeMonitor* self, QObject* watched, QEvent* event);
void QOpenGLTimeMonitor_OnEventFilter(QOpenGLTimeMonitor* self, intptr_t slot);
bool QOpenGLTimeMonitor_QBaseEventFilter(QOpenGLTimeMonitor* self, QObject* watched, QEvent* event);
void QOpenGLTimeMonitor_TimerEvent(QOpenGLTimeMonitor* self, QTimerEvent* event);
void QOpenGLTimeMonitor_OnTimerEvent(QOpenGLTimeMonitor* self, intptr_t slot);
void QOpenGLTimeMonitor_QBaseTimerEvent(QOpenGLTimeMonitor* self, QTimerEvent* event);
void QOpenGLTimeMonitor_ChildEvent(QOpenGLTimeMonitor* self, QChildEvent* event);
void QOpenGLTimeMonitor_OnChildEvent(QOpenGLTimeMonitor* self, intptr_t slot);
void QOpenGLTimeMonitor_QBaseChildEvent(QOpenGLTimeMonitor* self, QChildEvent* event);
void QOpenGLTimeMonitor_CustomEvent(QOpenGLTimeMonitor* self, QEvent* event);
void QOpenGLTimeMonitor_OnCustomEvent(QOpenGLTimeMonitor* self, intptr_t slot);
void QOpenGLTimeMonitor_QBaseCustomEvent(QOpenGLTimeMonitor* self, QEvent* event);
void QOpenGLTimeMonitor_ConnectNotify(QOpenGLTimeMonitor* self, const QMetaMethod* signal);
void QOpenGLTimeMonitor_OnConnectNotify(QOpenGLTimeMonitor* self, intptr_t slot);
void QOpenGLTimeMonitor_QBaseConnectNotify(QOpenGLTimeMonitor* self, const QMetaMethod* signal);
void QOpenGLTimeMonitor_DisconnectNotify(QOpenGLTimeMonitor* self, const QMetaMethod* signal);
void QOpenGLTimeMonitor_OnDisconnectNotify(QOpenGLTimeMonitor* self, intptr_t slot);
void QOpenGLTimeMonitor_QBaseDisconnectNotify(QOpenGLTimeMonitor* self, const QMetaMethod* signal);
QObject* QOpenGLTimeMonitor_Sender(const QOpenGLTimeMonitor* self);
void QOpenGLTimeMonitor_OnSender(const QOpenGLTimeMonitor* self, intptr_t slot);
QObject* QOpenGLTimeMonitor_QBaseSender(const QOpenGLTimeMonitor* self);
int QOpenGLTimeMonitor_SenderSignalIndex(const QOpenGLTimeMonitor* self);
void QOpenGLTimeMonitor_OnSenderSignalIndex(const QOpenGLTimeMonitor* self, intptr_t slot);
int QOpenGLTimeMonitor_QBaseSenderSignalIndex(const QOpenGLTimeMonitor* self);
int QOpenGLTimeMonitor_Receivers(const QOpenGLTimeMonitor* self, const char* signal);
void QOpenGLTimeMonitor_OnReceivers(const QOpenGLTimeMonitor* self, intptr_t slot);
int QOpenGLTimeMonitor_QBaseReceivers(const QOpenGLTimeMonitor* self, const char* signal);
bool QOpenGLTimeMonitor_IsSignalConnected(const QOpenGLTimeMonitor* self, const QMetaMethod* signal);
void QOpenGLTimeMonitor_OnIsSignalConnected(const QOpenGLTimeMonitor* self, intptr_t slot);
bool QOpenGLTimeMonitor_QBaseIsSignalConnected(const QOpenGLTimeMonitor* self, const QMetaMethod* signal);
void QOpenGLTimeMonitor_Delete(QOpenGLTimeMonitor* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
