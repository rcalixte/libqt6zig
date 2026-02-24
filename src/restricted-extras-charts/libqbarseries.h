#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_CHARTSC_LIBQBARSERIES_H
#define SRC_RESTRICTED_EXTRAS_CHARTSC_LIBQBARSERIES_H

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
typedef struct QBarSeries QBarSeries;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
#endif

QBarSeries* QBarSeries_new();
QBarSeries* QBarSeries_new2(QObject* parent);
QMetaObject* QBarSeries_MetaObject(const QBarSeries* self);
void* QBarSeries_Metacast(QBarSeries* self, const char* param1);
int QBarSeries_Metacall(QBarSeries* self, int param1, int param2, void** param3);
int QBarSeries_Type(const QBarSeries* self);
void QBarSeries_OnMetaObject(const QBarSeries* self, intptr_t slot);
QMetaObject* QBarSeries_SuperMetaObject(const QBarSeries* self);
void QBarSeries_OnMetacast(QBarSeries* self, intptr_t slot);
void* QBarSeries_SuperMetacast(QBarSeries* self, const char* param1);
void QBarSeries_OnMetacall(QBarSeries* self, intptr_t slot);
int QBarSeries_SuperMetacall(QBarSeries* self, int param1, int param2, void** param3);
void QBarSeries_OnType(const QBarSeries* self, intptr_t slot);
int QBarSeries_SuperType(const QBarSeries* self);
bool QBarSeries_Event(QBarSeries* self, QEvent* event);
void QBarSeries_OnEvent(QBarSeries* self, intptr_t slot);
bool QBarSeries_SuperEvent(QBarSeries* self, QEvent* event);
bool QBarSeries_EventFilter(QBarSeries* self, QObject* watched, QEvent* event);
void QBarSeries_OnEventFilter(QBarSeries* self, intptr_t slot);
bool QBarSeries_SuperEventFilter(QBarSeries* self, QObject* watched, QEvent* event);
void QBarSeries_TimerEvent(QBarSeries* self, QTimerEvent* event);
void QBarSeries_OnTimerEvent(QBarSeries* self, intptr_t slot);
void QBarSeries_SuperTimerEvent(QBarSeries* self, QTimerEvent* event);
void QBarSeries_ChildEvent(QBarSeries* self, QChildEvent* event);
void QBarSeries_OnChildEvent(QBarSeries* self, intptr_t slot);
void QBarSeries_SuperChildEvent(QBarSeries* self, QChildEvent* event);
void QBarSeries_CustomEvent(QBarSeries* self, QEvent* event);
void QBarSeries_OnCustomEvent(QBarSeries* self, intptr_t slot);
void QBarSeries_SuperCustomEvent(QBarSeries* self, QEvent* event);
void QBarSeries_ConnectNotify(QBarSeries* self, const QMetaMethod* signal);
void QBarSeries_OnConnectNotify(QBarSeries* self, intptr_t slot);
void QBarSeries_SuperConnectNotify(QBarSeries* self, const QMetaMethod* signal);
void QBarSeries_DisconnectNotify(QBarSeries* self, const QMetaMethod* signal);
void QBarSeries_OnDisconnectNotify(QBarSeries* self, intptr_t slot);
void QBarSeries_SuperDisconnectNotify(QBarSeries* self, const QMetaMethod* signal);
QObject* QBarSeries_Sender(const QBarSeries* self);
void QBarSeries_OnSender(const QBarSeries* self, intptr_t slot);
QObject* QBarSeries_SuperSender(const QBarSeries* self);
int QBarSeries_SenderSignalIndex(const QBarSeries* self);
void QBarSeries_OnSenderSignalIndex(const QBarSeries* self, intptr_t slot);
int QBarSeries_SuperSenderSignalIndex(const QBarSeries* self);
int QBarSeries_Receivers(const QBarSeries* self, const char* signal);
void QBarSeries_OnReceivers(const QBarSeries* self, intptr_t slot);
int QBarSeries_SuperReceivers(const QBarSeries* self, const char* signal);
bool QBarSeries_IsSignalConnected(const QBarSeries* self, const QMetaMethod* signal);
void QBarSeries_OnIsSignalConnected(const QBarSeries* self, intptr_t slot);
bool QBarSeries_SuperIsSignalConnected(const QBarSeries* self, const QMetaMethod* signal);
void QBarSeries_Delete(QBarSeries* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
