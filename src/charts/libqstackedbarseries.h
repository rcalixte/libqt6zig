#pragma once
#ifndef SRC_CHARTSC_LIBQSTACKEDBARSERIES_H
#define SRC_CHARTSC_LIBQSTACKEDBARSERIES_H

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
typedef struct QAbstractAxis QAbstractAxis;
typedef struct QAbstractBarSeries QAbstractBarSeries;
typedef struct QAbstractSeries QAbstractSeries;
typedef struct QAnyStringView QAnyStringView;
typedef struct QBarSet QBarSet;
typedef struct QBindingStorage QBindingStorage;
typedef struct QChart QChart;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QMetaObject__Connection QMetaObject__Connection;
typedef struct QObject QObject;
typedef struct QStackedBarSeries QStackedBarSeries;
typedef struct QThread QThread;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
#endif

QStackedBarSeries* QStackedBarSeries_new();
QStackedBarSeries* QStackedBarSeries_new2(QObject* parent);
QMetaObject* QStackedBarSeries_MetaObject(const QStackedBarSeries* self);
void* QStackedBarSeries_Metacast(QStackedBarSeries* self, const char* param1);
int QStackedBarSeries_Metacall(QStackedBarSeries* self, int param1, int param2, void** param3);
void QStackedBarSeries_OnMetacall(QStackedBarSeries* self, intptr_t slot);
int QStackedBarSeries_QBaseMetacall(QStackedBarSeries* self, int param1, int param2, void** param3);
libqt_string QStackedBarSeries_Tr(const char* s);
int QStackedBarSeries_Type(const QStackedBarSeries* self);
void QStackedBarSeries_OnType(const QStackedBarSeries* self, intptr_t slot);
int QStackedBarSeries_QBaseType(const QStackedBarSeries* self);
libqt_string QStackedBarSeries_Tr2(const char* s, const char* c);
libqt_string QStackedBarSeries_Tr3(const char* s, const char* c, int n);
bool QStackedBarSeries_Event(QStackedBarSeries* self, QEvent* event);
void QStackedBarSeries_OnEvent(QStackedBarSeries* self, intptr_t slot);
bool QStackedBarSeries_QBaseEvent(QStackedBarSeries* self, QEvent* event);
bool QStackedBarSeries_EventFilter(QStackedBarSeries* self, QObject* watched, QEvent* event);
void QStackedBarSeries_OnEventFilter(QStackedBarSeries* self, intptr_t slot);
bool QStackedBarSeries_QBaseEventFilter(QStackedBarSeries* self, QObject* watched, QEvent* event);
void QStackedBarSeries_TimerEvent(QStackedBarSeries* self, QTimerEvent* event);
void QStackedBarSeries_OnTimerEvent(QStackedBarSeries* self, intptr_t slot);
void QStackedBarSeries_QBaseTimerEvent(QStackedBarSeries* self, QTimerEvent* event);
void QStackedBarSeries_ChildEvent(QStackedBarSeries* self, QChildEvent* event);
void QStackedBarSeries_OnChildEvent(QStackedBarSeries* self, intptr_t slot);
void QStackedBarSeries_QBaseChildEvent(QStackedBarSeries* self, QChildEvent* event);
void QStackedBarSeries_CustomEvent(QStackedBarSeries* self, QEvent* event);
void QStackedBarSeries_OnCustomEvent(QStackedBarSeries* self, intptr_t slot);
void QStackedBarSeries_QBaseCustomEvent(QStackedBarSeries* self, QEvent* event);
void QStackedBarSeries_ConnectNotify(QStackedBarSeries* self, QMetaMethod* signal);
void QStackedBarSeries_OnConnectNotify(QStackedBarSeries* self, intptr_t slot);
void QStackedBarSeries_QBaseConnectNotify(QStackedBarSeries* self, QMetaMethod* signal);
void QStackedBarSeries_DisconnectNotify(QStackedBarSeries* self, QMetaMethod* signal);
void QStackedBarSeries_OnDisconnectNotify(QStackedBarSeries* self, intptr_t slot);
void QStackedBarSeries_QBaseDisconnectNotify(QStackedBarSeries* self, QMetaMethod* signal);
QObject* QStackedBarSeries_Sender(const QStackedBarSeries* self);
void QStackedBarSeries_OnSender(const QStackedBarSeries* self, intptr_t slot);
QObject* QStackedBarSeries_QBaseSender(const QStackedBarSeries* self);
int QStackedBarSeries_SenderSignalIndex(const QStackedBarSeries* self);
void QStackedBarSeries_OnSenderSignalIndex(const QStackedBarSeries* self, intptr_t slot);
int QStackedBarSeries_QBaseSenderSignalIndex(const QStackedBarSeries* self);
int QStackedBarSeries_Receivers(const QStackedBarSeries* self, const char* signal);
void QStackedBarSeries_OnReceivers(const QStackedBarSeries* self, intptr_t slot);
int QStackedBarSeries_QBaseReceivers(const QStackedBarSeries* self, const char* signal);
bool QStackedBarSeries_IsSignalConnected(const QStackedBarSeries* self, QMetaMethod* signal);
void QStackedBarSeries_OnIsSignalConnected(const QStackedBarSeries* self, intptr_t slot);
bool QStackedBarSeries_QBaseIsSignalConnected(const QStackedBarSeries* self, QMetaMethod* signal);
void QStackedBarSeries_Delete(QStackedBarSeries* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
