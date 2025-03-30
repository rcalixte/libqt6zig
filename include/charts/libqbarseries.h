#pragma once
#ifndef SRC_CHARTSC_LIBQBARSERIES_H
#define SRC_CHARTSC_LIBQBARSERIES_H

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
typedef struct QBarSeries QBarSeries;
typedef struct QBarSet QBarSet;
typedef struct QBindingStorage QBindingStorage;
typedef struct QChart QChart;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QMetaObject__Connection QMetaObject__Connection;
typedef struct QObject QObject;
typedef struct QThread QThread;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
#endif

QBarSeries* QBarSeries_new();
QBarSeries* QBarSeries_new2(QObject* parent);
QMetaObject* QBarSeries_MetaObject(const QBarSeries* self);
void* QBarSeries_Metacast(QBarSeries* self, const char* param1);
int QBarSeries_Metacall(QBarSeries* self, int param1, int param2, void** param3);
void QBarSeries_OnMetacall(QBarSeries* self, intptr_t slot);
int QBarSeries_QBaseMetacall(QBarSeries* self, int param1, int param2, void** param3);
libqt_string QBarSeries_Tr(const char* s);
int QBarSeries_Type(const QBarSeries* self);
void QBarSeries_OnType(const QBarSeries* self, intptr_t slot);
int QBarSeries_QBaseType(const QBarSeries* self);
libqt_string QBarSeries_Tr2(const char* s, const char* c);
libqt_string QBarSeries_Tr3(const char* s, const char* c, int n);
bool QBarSeries_Event(QBarSeries* self, QEvent* event);
void QBarSeries_OnEvent(QBarSeries* self, intptr_t slot);
bool QBarSeries_QBaseEvent(QBarSeries* self, QEvent* event);
bool QBarSeries_EventFilter(QBarSeries* self, QObject* watched, QEvent* event);
void QBarSeries_OnEventFilter(QBarSeries* self, intptr_t slot);
bool QBarSeries_QBaseEventFilter(QBarSeries* self, QObject* watched, QEvent* event);
void QBarSeries_TimerEvent(QBarSeries* self, QTimerEvent* event);
void QBarSeries_OnTimerEvent(QBarSeries* self, intptr_t slot);
void QBarSeries_QBaseTimerEvent(QBarSeries* self, QTimerEvent* event);
void QBarSeries_ChildEvent(QBarSeries* self, QChildEvent* event);
void QBarSeries_OnChildEvent(QBarSeries* self, intptr_t slot);
void QBarSeries_QBaseChildEvent(QBarSeries* self, QChildEvent* event);
void QBarSeries_CustomEvent(QBarSeries* self, QEvent* event);
void QBarSeries_OnCustomEvent(QBarSeries* self, intptr_t slot);
void QBarSeries_QBaseCustomEvent(QBarSeries* self, QEvent* event);
void QBarSeries_ConnectNotify(QBarSeries* self, QMetaMethod* signal);
void QBarSeries_OnConnectNotify(QBarSeries* self, intptr_t slot);
void QBarSeries_QBaseConnectNotify(QBarSeries* self, QMetaMethod* signal);
void QBarSeries_DisconnectNotify(QBarSeries* self, QMetaMethod* signal);
void QBarSeries_OnDisconnectNotify(QBarSeries* self, intptr_t slot);
void QBarSeries_QBaseDisconnectNotify(QBarSeries* self, QMetaMethod* signal);
QObject* QBarSeries_Sender(const QBarSeries* self);
void QBarSeries_OnSender(const QBarSeries* self, intptr_t slot);
QObject* QBarSeries_QBaseSender(const QBarSeries* self);
int QBarSeries_SenderSignalIndex(const QBarSeries* self);
void QBarSeries_OnSenderSignalIndex(const QBarSeries* self, intptr_t slot);
int QBarSeries_QBaseSenderSignalIndex(const QBarSeries* self);
int QBarSeries_Receivers(const QBarSeries* self, const char* signal);
void QBarSeries_OnReceivers(const QBarSeries* self, intptr_t slot);
int QBarSeries_QBaseReceivers(const QBarSeries* self, const char* signal);
bool QBarSeries_IsSignalConnected(const QBarSeries* self, QMetaMethod* signal);
void QBarSeries_OnIsSignalConnected(const QBarSeries* self, intptr_t slot);
bool QBarSeries_QBaseIsSignalConnected(const QBarSeries* self, QMetaMethod* signal);
void QBarSeries_Delete(QBarSeries* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
