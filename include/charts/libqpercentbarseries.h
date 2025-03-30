#pragma once
#ifndef SRC_CHARTSC_LIBQPERCENTBARSERIES_H
#define SRC_CHARTSC_LIBQPERCENTBARSERIES_H

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
typedef struct QPercentBarSeries QPercentBarSeries;
typedef struct QThread QThread;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
#endif

QPercentBarSeries* QPercentBarSeries_new();
QPercentBarSeries* QPercentBarSeries_new2(QObject* parent);
QMetaObject* QPercentBarSeries_MetaObject(const QPercentBarSeries* self);
void* QPercentBarSeries_Metacast(QPercentBarSeries* self, const char* param1);
int QPercentBarSeries_Metacall(QPercentBarSeries* self, int param1, int param2, void** param3);
void QPercentBarSeries_OnMetacall(QPercentBarSeries* self, intptr_t slot);
int QPercentBarSeries_QBaseMetacall(QPercentBarSeries* self, int param1, int param2, void** param3);
libqt_string QPercentBarSeries_Tr(const char* s);
int QPercentBarSeries_Type(const QPercentBarSeries* self);
void QPercentBarSeries_OnType(const QPercentBarSeries* self, intptr_t slot);
int QPercentBarSeries_QBaseType(const QPercentBarSeries* self);
libqt_string QPercentBarSeries_Tr2(const char* s, const char* c);
libqt_string QPercentBarSeries_Tr3(const char* s, const char* c, int n);
bool QPercentBarSeries_Event(QPercentBarSeries* self, QEvent* event);
void QPercentBarSeries_OnEvent(QPercentBarSeries* self, intptr_t slot);
bool QPercentBarSeries_QBaseEvent(QPercentBarSeries* self, QEvent* event);
bool QPercentBarSeries_EventFilter(QPercentBarSeries* self, QObject* watched, QEvent* event);
void QPercentBarSeries_OnEventFilter(QPercentBarSeries* self, intptr_t slot);
bool QPercentBarSeries_QBaseEventFilter(QPercentBarSeries* self, QObject* watched, QEvent* event);
void QPercentBarSeries_TimerEvent(QPercentBarSeries* self, QTimerEvent* event);
void QPercentBarSeries_OnTimerEvent(QPercentBarSeries* self, intptr_t slot);
void QPercentBarSeries_QBaseTimerEvent(QPercentBarSeries* self, QTimerEvent* event);
void QPercentBarSeries_ChildEvent(QPercentBarSeries* self, QChildEvent* event);
void QPercentBarSeries_OnChildEvent(QPercentBarSeries* self, intptr_t slot);
void QPercentBarSeries_QBaseChildEvent(QPercentBarSeries* self, QChildEvent* event);
void QPercentBarSeries_CustomEvent(QPercentBarSeries* self, QEvent* event);
void QPercentBarSeries_OnCustomEvent(QPercentBarSeries* self, intptr_t slot);
void QPercentBarSeries_QBaseCustomEvent(QPercentBarSeries* self, QEvent* event);
void QPercentBarSeries_ConnectNotify(QPercentBarSeries* self, QMetaMethod* signal);
void QPercentBarSeries_OnConnectNotify(QPercentBarSeries* self, intptr_t slot);
void QPercentBarSeries_QBaseConnectNotify(QPercentBarSeries* self, QMetaMethod* signal);
void QPercentBarSeries_DisconnectNotify(QPercentBarSeries* self, QMetaMethod* signal);
void QPercentBarSeries_OnDisconnectNotify(QPercentBarSeries* self, intptr_t slot);
void QPercentBarSeries_QBaseDisconnectNotify(QPercentBarSeries* self, QMetaMethod* signal);
QObject* QPercentBarSeries_Sender(const QPercentBarSeries* self);
void QPercentBarSeries_OnSender(const QPercentBarSeries* self, intptr_t slot);
QObject* QPercentBarSeries_QBaseSender(const QPercentBarSeries* self);
int QPercentBarSeries_SenderSignalIndex(const QPercentBarSeries* self);
void QPercentBarSeries_OnSenderSignalIndex(const QPercentBarSeries* self, intptr_t slot);
int QPercentBarSeries_QBaseSenderSignalIndex(const QPercentBarSeries* self);
int QPercentBarSeries_Receivers(const QPercentBarSeries* self, const char* signal);
void QPercentBarSeries_OnReceivers(const QPercentBarSeries* self, intptr_t slot);
int QPercentBarSeries_QBaseReceivers(const QPercentBarSeries* self, const char* signal);
bool QPercentBarSeries_IsSignalConnected(const QPercentBarSeries* self, QMetaMethod* signal);
void QPercentBarSeries_OnIsSignalConnected(const QPercentBarSeries* self, intptr_t slot);
bool QPercentBarSeries_QBaseIsSignalConnected(const QPercentBarSeries* self, QMetaMethod* signal);
void QPercentBarSeries_Delete(QPercentBarSeries* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
