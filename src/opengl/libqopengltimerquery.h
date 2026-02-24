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
void QOpenGLTimerQuery_OnMetaObject(const QOpenGLTimerQuery* self, intptr_t slot);
QMetaObject* QOpenGLTimerQuery_SuperMetaObject(const QOpenGLTimerQuery* self);
void QOpenGLTimerQuery_OnMetacast(QOpenGLTimerQuery* self, intptr_t slot);
void* QOpenGLTimerQuery_SuperMetacast(QOpenGLTimerQuery* self, const char* param1);
void QOpenGLTimerQuery_OnMetacall(QOpenGLTimerQuery* self, intptr_t slot);
int QOpenGLTimerQuery_SuperMetacall(QOpenGLTimerQuery* self, int param1, int param2, void** param3);
bool QOpenGLTimerQuery_Event(QOpenGLTimerQuery* self, QEvent* event);
void QOpenGLTimerQuery_OnEvent(QOpenGLTimerQuery* self, intptr_t slot);
bool QOpenGLTimerQuery_SuperEvent(QOpenGLTimerQuery* self, QEvent* event);
bool QOpenGLTimerQuery_EventFilter(QOpenGLTimerQuery* self, QObject* watched, QEvent* event);
void QOpenGLTimerQuery_OnEventFilter(QOpenGLTimerQuery* self, intptr_t slot);
bool QOpenGLTimerQuery_SuperEventFilter(QOpenGLTimerQuery* self, QObject* watched, QEvent* event);
void QOpenGLTimerQuery_TimerEvent(QOpenGLTimerQuery* self, QTimerEvent* event);
void QOpenGLTimerQuery_OnTimerEvent(QOpenGLTimerQuery* self, intptr_t slot);
void QOpenGLTimerQuery_SuperTimerEvent(QOpenGLTimerQuery* self, QTimerEvent* event);
void QOpenGLTimerQuery_ChildEvent(QOpenGLTimerQuery* self, QChildEvent* event);
void QOpenGLTimerQuery_OnChildEvent(QOpenGLTimerQuery* self, intptr_t slot);
void QOpenGLTimerQuery_SuperChildEvent(QOpenGLTimerQuery* self, QChildEvent* event);
void QOpenGLTimerQuery_CustomEvent(QOpenGLTimerQuery* self, QEvent* event);
void QOpenGLTimerQuery_OnCustomEvent(QOpenGLTimerQuery* self, intptr_t slot);
void QOpenGLTimerQuery_SuperCustomEvent(QOpenGLTimerQuery* self, QEvent* event);
void QOpenGLTimerQuery_ConnectNotify(QOpenGLTimerQuery* self, const QMetaMethod* signal);
void QOpenGLTimerQuery_OnConnectNotify(QOpenGLTimerQuery* self, intptr_t slot);
void QOpenGLTimerQuery_SuperConnectNotify(QOpenGLTimerQuery* self, const QMetaMethod* signal);
void QOpenGLTimerQuery_DisconnectNotify(QOpenGLTimerQuery* self, const QMetaMethod* signal);
void QOpenGLTimerQuery_OnDisconnectNotify(QOpenGLTimerQuery* self, intptr_t slot);
void QOpenGLTimerQuery_SuperDisconnectNotify(QOpenGLTimerQuery* self, const QMetaMethod* signal);
QObject* QOpenGLTimerQuery_Sender(const QOpenGLTimerQuery* self);
void QOpenGLTimerQuery_OnSender(const QOpenGLTimerQuery* self, intptr_t slot);
QObject* QOpenGLTimerQuery_SuperSender(const QOpenGLTimerQuery* self);
int QOpenGLTimerQuery_SenderSignalIndex(const QOpenGLTimerQuery* self);
void QOpenGLTimerQuery_OnSenderSignalIndex(const QOpenGLTimerQuery* self, intptr_t slot);
int QOpenGLTimerQuery_SuperSenderSignalIndex(const QOpenGLTimerQuery* self);
int QOpenGLTimerQuery_Receivers(const QOpenGLTimerQuery* self, const char* signal);
void QOpenGLTimerQuery_OnReceivers(const QOpenGLTimerQuery* self, intptr_t slot);
int QOpenGLTimerQuery_SuperReceivers(const QOpenGLTimerQuery* self, const char* signal);
bool QOpenGLTimerQuery_IsSignalConnected(const QOpenGLTimerQuery* self, const QMetaMethod* signal);
void QOpenGLTimerQuery_OnIsSignalConnected(const QOpenGLTimerQuery* self, intptr_t slot);
bool QOpenGLTimerQuery_SuperIsSignalConnected(const QOpenGLTimerQuery* self, const QMetaMethod* signal);
void QOpenGLTimerQuery_Delete(QOpenGLTimerQuery* self);

QOpenGLTimeMonitor* QOpenGLTimeMonitor_new();
QOpenGLTimeMonitor* QOpenGLTimeMonitor_new2(QObject* parent);
QMetaObject* QOpenGLTimeMonitor_MetaObject(const QOpenGLTimeMonitor* self);
void* QOpenGLTimeMonitor_Metacast(QOpenGLTimeMonitor* self, const char* param1);
int QOpenGLTimeMonitor_Metacall(QOpenGLTimeMonitor* self, int param1, int param2, void** param3);
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
void QOpenGLTimeMonitor_OnMetaObject(const QOpenGLTimeMonitor* self, intptr_t slot);
QMetaObject* QOpenGLTimeMonitor_SuperMetaObject(const QOpenGLTimeMonitor* self);
void QOpenGLTimeMonitor_OnMetacast(QOpenGLTimeMonitor* self, intptr_t slot);
void* QOpenGLTimeMonitor_SuperMetacast(QOpenGLTimeMonitor* self, const char* param1);
void QOpenGLTimeMonitor_OnMetacall(QOpenGLTimeMonitor* self, intptr_t slot);
int QOpenGLTimeMonitor_SuperMetacall(QOpenGLTimeMonitor* self, int param1, int param2, void** param3);
bool QOpenGLTimeMonitor_Event(QOpenGLTimeMonitor* self, QEvent* event);
void QOpenGLTimeMonitor_OnEvent(QOpenGLTimeMonitor* self, intptr_t slot);
bool QOpenGLTimeMonitor_SuperEvent(QOpenGLTimeMonitor* self, QEvent* event);
bool QOpenGLTimeMonitor_EventFilter(QOpenGLTimeMonitor* self, QObject* watched, QEvent* event);
void QOpenGLTimeMonitor_OnEventFilter(QOpenGLTimeMonitor* self, intptr_t slot);
bool QOpenGLTimeMonitor_SuperEventFilter(QOpenGLTimeMonitor* self, QObject* watched, QEvent* event);
void QOpenGLTimeMonitor_TimerEvent(QOpenGLTimeMonitor* self, QTimerEvent* event);
void QOpenGLTimeMonitor_OnTimerEvent(QOpenGLTimeMonitor* self, intptr_t slot);
void QOpenGLTimeMonitor_SuperTimerEvent(QOpenGLTimeMonitor* self, QTimerEvent* event);
void QOpenGLTimeMonitor_ChildEvent(QOpenGLTimeMonitor* self, QChildEvent* event);
void QOpenGLTimeMonitor_OnChildEvent(QOpenGLTimeMonitor* self, intptr_t slot);
void QOpenGLTimeMonitor_SuperChildEvent(QOpenGLTimeMonitor* self, QChildEvent* event);
void QOpenGLTimeMonitor_CustomEvent(QOpenGLTimeMonitor* self, QEvent* event);
void QOpenGLTimeMonitor_OnCustomEvent(QOpenGLTimeMonitor* self, intptr_t slot);
void QOpenGLTimeMonitor_SuperCustomEvent(QOpenGLTimeMonitor* self, QEvent* event);
void QOpenGLTimeMonitor_ConnectNotify(QOpenGLTimeMonitor* self, const QMetaMethod* signal);
void QOpenGLTimeMonitor_OnConnectNotify(QOpenGLTimeMonitor* self, intptr_t slot);
void QOpenGLTimeMonitor_SuperConnectNotify(QOpenGLTimeMonitor* self, const QMetaMethod* signal);
void QOpenGLTimeMonitor_DisconnectNotify(QOpenGLTimeMonitor* self, const QMetaMethod* signal);
void QOpenGLTimeMonitor_OnDisconnectNotify(QOpenGLTimeMonitor* self, intptr_t slot);
void QOpenGLTimeMonitor_SuperDisconnectNotify(QOpenGLTimeMonitor* self, const QMetaMethod* signal);
QObject* QOpenGLTimeMonitor_Sender(const QOpenGLTimeMonitor* self);
void QOpenGLTimeMonitor_OnSender(const QOpenGLTimeMonitor* self, intptr_t slot);
QObject* QOpenGLTimeMonitor_SuperSender(const QOpenGLTimeMonitor* self);
int QOpenGLTimeMonitor_SenderSignalIndex(const QOpenGLTimeMonitor* self);
void QOpenGLTimeMonitor_OnSenderSignalIndex(const QOpenGLTimeMonitor* self, intptr_t slot);
int QOpenGLTimeMonitor_SuperSenderSignalIndex(const QOpenGLTimeMonitor* self);
int QOpenGLTimeMonitor_Receivers(const QOpenGLTimeMonitor* self, const char* signal);
void QOpenGLTimeMonitor_OnReceivers(const QOpenGLTimeMonitor* self, intptr_t slot);
int QOpenGLTimeMonitor_SuperReceivers(const QOpenGLTimeMonitor* self, const char* signal);
bool QOpenGLTimeMonitor_IsSignalConnected(const QOpenGLTimeMonitor* self, const QMetaMethod* signal);
void QOpenGLTimeMonitor_OnIsSignalConnected(const QOpenGLTimeMonitor* self, intptr_t slot);
bool QOpenGLTimeMonitor_SuperIsSignalConnected(const QOpenGLTimeMonitor* self, const QMetaMethod* signal);
void QOpenGLTimeMonitor_Delete(QOpenGLTimeMonitor* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
