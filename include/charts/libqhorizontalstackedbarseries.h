#pragma once
#ifndef SRC_CHARTSC_LIBQHORIZONTALSTACKEDBARSERIES_H
#define SRC_CHARTSC_LIBQHORIZONTALSTACKEDBARSERIES_H

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
typedef struct QHorizontalStackedBarSeries QHorizontalStackedBarSeries;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QMetaObject__Connection QMetaObject__Connection;
typedef struct QObject QObject;
typedef struct QThread QThread;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
#endif

QHorizontalStackedBarSeries* QHorizontalStackedBarSeries_new();
QHorizontalStackedBarSeries* QHorizontalStackedBarSeries_new2(QObject* parent);
QMetaObject* QHorizontalStackedBarSeries_MetaObject(const QHorizontalStackedBarSeries* self);
void* QHorizontalStackedBarSeries_Metacast(QHorizontalStackedBarSeries* self, const char* param1);
int QHorizontalStackedBarSeries_Metacall(QHorizontalStackedBarSeries* self, int param1, int param2, void** param3);
void QHorizontalStackedBarSeries_OnMetacall(QHorizontalStackedBarSeries* self, intptr_t slot);
int QHorizontalStackedBarSeries_QBaseMetacall(QHorizontalStackedBarSeries* self, int param1, int param2, void** param3);
libqt_string QHorizontalStackedBarSeries_Tr(const char* s);
int QHorizontalStackedBarSeries_Type(const QHorizontalStackedBarSeries* self);
void QHorizontalStackedBarSeries_OnType(const QHorizontalStackedBarSeries* self, intptr_t slot);
int QHorizontalStackedBarSeries_QBaseType(const QHorizontalStackedBarSeries* self);
libqt_string QHorizontalStackedBarSeries_Tr2(const char* s, const char* c);
libqt_string QHorizontalStackedBarSeries_Tr3(const char* s, const char* c, int n);
bool QHorizontalStackedBarSeries_Event(QHorizontalStackedBarSeries* self, QEvent* event);
void QHorizontalStackedBarSeries_OnEvent(QHorizontalStackedBarSeries* self, intptr_t slot);
bool QHorizontalStackedBarSeries_QBaseEvent(QHorizontalStackedBarSeries* self, QEvent* event);
bool QHorizontalStackedBarSeries_EventFilter(QHorizontalStackedBarSeries* self, QObject* watched, QEvent* event);
void QHorizontalStackedBarSeries_OnEventFilter(QHorizontalStackedBarSeries* self, intptr_t slot);
bool QHorizontalStackedBarSeries_QBaseEventFilter(QHorizontalStackedBarSeries* self, QObject* watched, QEvent* event);
void QHorizontalStackedBarSeries_TimerEvent(QHorizontalStackedBarSeries* self, QTimerEvent* event);
void QHorizontalStackedBarSeries_OnTimerEvent(QHorizontalStackedBarSeries* self, intptr_t slot);
void QHorizontalStackedBarSeries_QBaseTimerEvent(QHorizontalStackedBarSeries* self, QTimerEvent* event);
void QHorizontalStackedBarSeries_ChildEvent(QHorizontalStackedBarSeries* self, QChildEvent* event);
void QHorizontalStackedBarSeries_OnChildEvent(QHorizontalStackedBarSeries* self, intptr_t slot);
void QHorizontalStackedBarSeries_QBaseChildEvent(QHorizontalStackedBarSeries* self, QChildEvent* event);
void QHorizontalStackedBarSeries_CustomEvent(QHorizontalStackedBarSeries* self, QEvent* event);
void QHorizontalStackedBarSeries_OnCustomEvent(QHorizontalStackedBarSeries* self, intptr_t slot);
void QHorizontalStackedBarSeries_QBaseCustomEvent(QHorizontalStackedBarSeries* self, QEvent* event);
void QHorizontalStackedBarSeries_ConnectNotify(QHorizontalStackedBarSeries* self, QMetaMethod* signal);
void QHorizontalStackedBarSeries_OnConnectNotify(QHorizontalStackedBarSeries* self, intptr_t slot);
void QHorizontalStackedBarSeries_QBaseConnectNotify(QHorizontalStackedBarSeries* self, QMetaMethod* signal);
void QHorizontalStackedBarSeries_DisconnectNotify(QHorizontalStackedBarSeries* self, QMetaMethod* signal);
void QHorizontalStackedBarSeries_OnDisconnectNotify(QHorizontalStackedBarSeries* self, intptr_t slot);
void QHorizontalStackedBarSeries_QBaseDisconnectNotify(QHorizontalStackedBarSeries* self, QMetaMethod* signal);
QObject* QHorizontalStackedBarSeries_Sender(const QHorizontalStackedBarSeries* self);
void QHorizontalStackedBarSeries_OnSender(const QHorizontalStackedBarSeries* self, intptr_t slot);
QObject* QHorizontalStackedBarSeries_QBaseSender(const QHorizontalStackedBarSeries* self);
int QHorizontalStackedBarSeries_SenderSignalIndex(const QHorizontalStackedBarSeries* self);
void QHorizontalStackedBarSeries_OnSenderSignalIndex(const QHorizontalStackedBarSeries* self, intptr_t slot);
int QHorizontalStackedBarSeries_QBaseSenderSignalIndex(const QHorizontalStackedBarSeries* self);
int QHorizontalStackedBarSeries_Receivers(const QHorizontalStackedBarSeries* self, const char* signal);
void QHorizontalStackedBarSeries_OnReceivers(const QHorizontalStackedBarSeries* self, intptr_t slot);
int QHorizontalStackedBarSeries_QBaseReceivers(const QHorizontalStackedBarSeries* self, const char* signal);
bool QHorizontalStackedBarSeries_IsSignalConnected(const QHorizontalStackedBarSeries* self, QMetaMethod* signal);
void QHorizontalStackedBarSeries_OnIsSignalConnected(const QHorizontalStackedBarSeries* self, intptr_t slot);
bool QHorizontalStackedBarSeries_QBaseIsSignalConnected(const QHorizontalStackedBarSeries* self, QMetaMethod* signal);
void QHorizontalStackedBarSeries_Delete(QHorizontalStackedBarSeries* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
