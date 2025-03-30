#pragma once
#ifndef SRC_CHARTSC_LIBQHORIZONTALPERCENTBARSERIES_H
#define SRC_CHARTSC_LIBQHORIZONTALPERCENTBARSERIES_H

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
typedef struct QHorizontalPercentBarSeries QHorizontalPercentBarSeries;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QMetaObject__Connection QMetaObject__Connection;
typedef struct QObject QObject;
typedef struct QThread QThread;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
#endif

QHorizontalPercentBarSeries* QHorizontalPercentBarSeries_new();
QHorizontalPercentBarSeries* QHorizontalPercentBarSeries_new2(QObject* parent);
QMetaObject* QHorizontalPercentBarSeries_MetaObject(const QHorizontalPercentBarSeries* self);
void* QHorizontalPercentBarSeries_Metacast(QHorizontalPercentBarSeries* self, const char* param1);
int QHorizontalPercentBarSeries_Metacall(QHorizontalPercentBarSeries* self, int param1, int param2, void** param3);
void QHorizontalPercentBarSeries_OnMetacall(QHorizontalPercentBarSeries* self, intptr_t slot);
int QHorizontalPercentBarSeries_QBaseMetacall(QHorizontalPercentBarSeries* self, int param1, int param2, void** param3);
libqt_string QHorizontalPercentBarSeries_Tr(const char* s);
int QHorizontalPercentBarSeries_Type(const QHorizontalPercentBarSeries* self);
void QHorizontalPercentBarSeries_OnType(const QHorizontalPercentBarSeries* self, intptr_t slot);
int QHorizontalPercentBarSeries_QBaseType(const QHorizontalPercentBarSeries* self);
libqt_string QHorizontalPercentBarSeries_Tr2(const char* s, const char* c);
libqt_string QHorizontalPercentBarSeries_Tr3(const char* s, const char* c, int n);
bool QHorizontalPercentBarSeries_Event(QHorizontalPercentBarSeries* self, QEvent* event);
void QHorizontalPercentBarSeries_OnEvent(QHorizontalPercentBarSeries* self, intptr_t slot);
bool QHorizontalPercentBarSeries_QBaseEvent(QHorizontalPercentBarSeries* self, QEvent* event);
bool QHorizontalPercentBarSeries_EventFilter(QHorizontalPercentBarSeries* self, QObject* watched, QEvent* event);
void QHorizontalPercentBarSeries_OnEventFilter(QHorizontalPercentBarSeries* self, intptr_t slot);
bool QHorizontalPercentBarSeries_QBaseEventFilter(QHorizontalPercentBarSeries* self, QObject* watched, QEvent* event);
void QHorizontalPercentBarSeries_TimerEvent(QHorizontalPercentBarSeries* self, QTimerEvent* event);
void QHorizontalPercentBarSeries_OnTimerEvent(QHorizontalPercentBarSeries* self, intptr_t slot);
void QHorizontalPercentBarSeries_QBaseTimerEvent(QHorizontalPercentBarSeries* self, QTimerEvent* event);
void QHorizontalPercentBarSeries_ChildEvent(QHorizontalPercentBarSeries* self, QChildEvent* event);
void QHorizontalPercentBarSeries_OnChildEvent(QHorizontalPercentBarSeries* self, intptr_t slot);
void QHorizontalPercentBarSeries_QBaseChildEvent(QHorizontalPercentBarSeries* self, QChildEvent* event);
void QHorizontalPercentBarSeries_CustomEvent(QHorizontalPercentBarSeries* self, QEvent* event);
void QHorizontalPercentBarSeries_OnCustomEvent(QHorizontalPercentBarSeries* self, intptr_t slot);
void QHorizontalPercentBarSeries_QBaseCustomEvent(QHorizontalPercentBarSeries* self, QEvent* event);
void QHorizontalPercentBarSeries_ConnectNotify(QHorizontalPercentBarSeries* self, QMetaMethod* signal);
void QHorizontalPercentBarSeries_OnConnectNotify(QHorizontalPercentBarSeries* self, intptr_t slot);
void QHorizontalPercentBarSeries_QBaseConnectNotify(QHorizontalPercentBarSeries* self, QMetaMethod* signal);
void QHorizontalPercentBarSeries_DisconnectNotify(QHorizontalPercentBarSeries* self, QMetaMethod* signal);
void QHorizontalPercentBarSeries_OnDisconnectNotify(QHorizontalPercentBarSeries* self, intptr_t slot);
void QHorizontalPercentBarSeries_QBaseDisconnectNotify(QHorizontalPercentBarSeries* self, QMetaMethod* signal);
QObject* QHorizontalPercentBarSeries_Sender(const QHorizontalPercentBarSeries* self);
void QHorizontalPercentBarSeries_OnSender(const QHorizontalPercentBarSeries* self, intptr_t slot);
QObject* QHorizontalPercentBarSeries_QBaseSender(const QHorizontalPercentBarSeries* self);
int QHorizontalPercentBarSeries_SenderSignalIndex(const QHorizontalPercentBarSeries* self);
void QHorizontalPercentBarSeries_OnSenderSignalIndex(const QHorizontalPercentBarSeries* self, intptr_t slot);
int QHorizontalPercentBarSeries_QBaseSenderSignalIndex(const QHorizontalPercentBarSeries* self);
int QHorizontalPercentBarSeries_Receivers(const QHorizontalPercentBarSeries* self, const char* signal);
void QHorizontalPercentBarSeries_OnReceivers(const QHorizontalPercentBarSeries* self, intptr_t slot);
int QHorizontalPercentBarSeries_QBaseReceivers(const QHorizontalPercentBarSeries* self, const char* signal);
bool QHorizontalPercentBarSeries_IsSignalConnected(const QHorizontalPercentBarSeries* self, QMetaMethod* signal);
void QHorizontalPercentBarSeries_OnIsSignalConnected(const QHorizontalPercentBarSeries* self, intptr_t slot);
bool QHorizontalPercentBarSeries_QBaseIsSignalConnected(const QHorizontalPercentBarSeries* self, QMetaMethod* signal);
void QHorizontalPercentBarSeries_Delete(QHorizontalPercentBarSeries* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
