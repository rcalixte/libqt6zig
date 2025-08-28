#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_CHARTSC_LIBQPERCENTBARSERIES_H
#define SRC_RESTRICTED_EXTRAS_CHARTSC_LIBQPERCENTBARSERIES_H

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
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QPercentBarSeries QPercentBarSeries;
typedef struct QTimerEvent QTimerEvent;
#endif

QPercentBarSeries* QPercentBarSeries_new();
QPercentBarSeries* QPercentBarSeries_new2(QObject* parent);
QMetaObject* QPercentBarSeries_MetaObject(const QPercentBarSeries* self);
void* QPercentBarSeries_Metacast(QPercentBarSeries* self, const char* param1);
int QPercentBarSeries_Metacall(QPercentBarSeries* self, int param1, int param2, void** param3);
libqt_string QPercentBarSeries_Tr(const char* s);
int QPercentBarSeries_Type(const QPercentBarSeries* self);
libqt_string QPercentBarSeries_Tr2(const char* s, const char* c);
libqt_string QPercentBarSeries_Tr3(const char* s, const char* c, int n);
void QPercentBarSeries_OnMetacall(QPercentBarSeries* self, intptr_t slot);
int QPercentBarSeries_QBaseMetacall(QPercentBarSeries* self, int param1, int param2, void** param3);
void QPercentBarSeries_OnType(const QPercentBarSeries* self, intptr_t slot);
int QPercentBarSeries_QBaseType(const QPercentBarSeries* self);
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
void QPercentBarSeries_ConnectNotify(QPercentBarSeries* self, const QMetaMethod* signal);
void QPercentBarSeries_OnConnectNotify(QPercentBarSeries* self, intptr_t slot);
void QPercentBarSeries_QBaseConnectNotify(QPercentBarSeries* self, const QMetaMethod* signal);
void QPercentBarSeries_DisconnectNotify(QPercentBarSeries* self, const QMetaMethod* signal);
void QPercentBarSeries_OnDisconnectNotify(QPercentBarSeries* self, intptr_t slot);
void QPercentBarSeries_QBaseDisconnectNotify(QPercentBarSeries* self, const QMetaMethod* signal);
QObject* QPercentBarSeries_Sender(const QPercentBarSeries* self);
void QPercentBarSeries_OnSender(const QPercentBarSeries* self, intptr_t slot);
QObject* QPercentBarSeries_QBaseSender(const QPercentBarSeries* self);
int QPercentBarSeries_SenderSignalIndex(const QPercentBarSeries* self);
void QPercentBarSeries_OnSenderSignalIndex(const QPercentBarSeries* self, intptr_t slot);
int QPercentBarSeries_QBaseSenderSignalIndex(const QPercentBarSeries* self);
int QPercentBarSeries_Receivers(const QPercentBarSeries* self, const char* signal);
void QPercentBarSeries_OnReceivers(const QPercentBarSeries* self, intptr_t slot);
int QPercentBarSeries_QBaseReceivers(const QPercentBarSeries* self, const char* signal);
bool QPercentBarSeries_IsSignalConnected(const QPercentBarSeries* self, const QMetaMethod* signal);
void QPercentBarSeries_OnIsSignalConnected(const QPercentBarSeries* self, intptr_t slot);
bool QPercentBarSeries_QBaseIsSignalConnected(const QPercentBarSeries* self, const QMetaMethod* signal);
void QPercentBarSeries_Delete(QPercentBarSeries* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
