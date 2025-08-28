#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_CHARTSC_LIBQHORIZONTALBARSERIES_H
#define SRC_RESTRICTED_EXTRAS_CHARTSC_LIBQHORIZONTALBARSERIES_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QAbstractBarSeries QAbstractBarSeries;
typedef struct QAbstractSeries QAbstractSeries;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QHorizontalBarSeries QHorizontalBarSeries;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
#endif

QHorizontalBarSeries* QHorizontalBarSeries_new();
QHorizontalBarSeries* QHorizontalBarSeries_new2(QObject* parent);
QMetaObject* QHorizontalBarSeries_MetaObject(const QHorizontalBarSeries* self);
void* QHorizontalBarSeries_Metacast(QHorizontalBarSeries* self, const char* param1);
int QHorizontalBarSeries_Metacall(QHorizontalBarSeries* self, int param1, int param2, void** param3);
libqt_string QHorizontalBarSeries_Tr(const char* s);
int QHorizontalBarSeries_Type(const QHorizontalBarSeries* self);
libqt_string QHorizontalBarSeries_Tr2(const char* s, const char* c);
libqt_string QHorizontalBarSeries_Tr3(const char* s, const char* c, int n);
void QHorizontalBarSeries_OnMetacall(QHorizontalBarSeries* self, intptr_t slot);
int QHorizontalBarSeries_QBaseMetacall(QHorizontalBarSeries* self, int param1, int param2, void** param3);
void QHorizontalBarSeries_OnType(const QHorizontalBarSeries* self, intptr_t slot);
int QHorizontalBarSeries_QBaseType(const QHorizontalBarSeries* self);
bool QHorizontalBarSeries_Event(QHorizontalBarSeries* self, QEvent* event);
void QHorizontalBarSeries_OnEvent(QHorizontalBarSeries* self, intptr_t slot);
bool QHorizontalBarSeries_QBaseEvent(QHorizontalBarSeries* self, QEvent* event);
bool QHorizontalBarSeries_EventFilter(QHorizontalBarSeries* self, QObject* watched, QEvent* event);
void QHorizontalBarSeries_OnEventFilter(QHorizontalBarSeries* self, intptr_t slot);
bool QHorizontalBarSeries_QBaseEventFilter(QHorizontalBarSeries* self, QObject* watched, QEvent* event);
void QHorizontalBarSeries_TimerEvent(QHorizontalBarSeries* self, QTimerEvent* event);
void QHorizontalBarSeries_OnTimerEvent(QHorizontalBarSeries* self, intptr_t slot);
void QHorizontalBarSeries_QBaseTimerEvent(QHorizontalBarSeries* self, QTimerEvent* event);
void QHorizontalBarSeries_ChildEvent(QHorizontalBarSeries* self, QChildEvent* event);
void QHorizontalBarSeries_OnChildEvent(QHorizontalBarSeries* self, intptr_t slot);
void QHorizontalBarSeries_QBaseChildEvent(QHorizontalBarSeries* self, QChildEvent* event);
void QHorizontalBarSeries_CustomEvent(QHorizontalBarSeries* self, QEvent* event);
void QHorizontalBarSeries_OnCustomEvent(QHorizontalBarSeries* self, intptr_t slot);
void QHorizontalBarSeries_QBaseCustomEvent(QHorizontalBarSeries* self, QEvent* event);
void QHorizontalBarSeries_ConnectNotify(QHorizontalBarSeries* self, const QMetaMethod* signal);
void QHorizontalBarSeries_OnConnectNotify(QHorizontalBarSeries* self, intptr_t slot);
void QHorizontalBarSeries_QBaseConnectNotify(QHorizontalBarSeries* self, const QMetaMethod* signal);
void QHorizontalBarSeries_DisconnectNotify(QHorizontalBarSeries* self, const QMetaMethod* signal);
void QHorizontalBarSeries_OnDisconnectNotify(QHorizontalBarSeries* self, intptr_t slot);
void QHorizontalBarSeries_QBaseDisconnectNotify(QHorizontalBarSeries* self, const QMetaMethod* signal);
QObject* QHorizontalBarSeries_Sender(const QHorizontalBarSeries* self);
void QHorizontalBarSeries_OnSender(const QHorizontalBarSeries* self, intptr_t slot);
QObject* QHorizontalBarSeries_QBaseSender(const QHorizontalBarSeries* self);
int QHorizontalBarSeries_SenderSignalIndex(const QHorizontalBarSeries* self);
void QHorizontalBarSeries_OnSenderSignalIndex(const QHorizontalBarSeries* self, intptr_t slot);
int QHorizontalBarSeries_QBaseSenderSignalIndex(const QHorizontalBarSeries* self);
int QHorizontalBarSeries_Receivers(const QHorizontalBarSeries* self, const char* signal);
void QHorizontalBarSeries_OnReceivers(const QHorizontalBarSeries* self, intptr_t slot);
int QHorizontalBarSeries_QBaseReceivers(const QHorizontalBarSeries* self, const char* signal);
bool QHorizontalBarSeries_IsSignalConnected(const QHorizontalBarSeries* self, const QMetaMethod* signal);
void QHorizontalBarSeries_OnIsSignalConnected(const QHorizontalBarSeries* self, intptr_t slot);
bool QHorizontalBarSeries_QBaseIsSignalConnected(const QHorizontalBarSeries* self, const QMetaMethod* signal);
void QHorizontalBarSeries_Delete(QHorizontalBarSeries* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
