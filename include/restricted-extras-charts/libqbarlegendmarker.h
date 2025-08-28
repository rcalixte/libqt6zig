#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_CHARTSC_LIBQBARLEGENDMARKER_H
#define SRC_RESTRICTED_EXTRAS_CHARTSC_LIBQBARLEGENDMARKER_H

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
typedef struct QBarLegendMarker QBarLegendMarker;
typedef struct QBarSet QBarSet;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QLegend QLegend;
typedef struct QLegendMarker QLegendMarker;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
#endif

QBarLegendMarker* QBarLegendMarker_new(QAbstractBarSeries* series, QBarSet* barset, QLegend* legend);
QBarLegendMarker* QBarLegendMarker_new2(QAbstractBarSeries* series, QBarSet* barset, QLegend* legend, QObject* parent);
QMetaObject* QBarLegendMarker_MetaObject(const QBarLegendMarker* self);
void* QBarLegendMarker_Metacast(QBarLegendMarker* self, const char* param1);
int QBarLegendMarker_Metacall(QBarLegendMarker* self, int param1, int param2, void** param3);
libqt_string QBarLegendMarker_Tr(const char* s);
int QBarLegendMarker_Type(QBarLegendMarker* self);
QAbstractBarSeries* QBarLegendMarker_Series(QBarLegendMarker* self);
QBarSet* QBarLegendMarker_Barset(QBarLegendMarker* self);
libqt_string QBarLegendMarker_Tr2(const char* s, const char* c);
libqt_string QBarLegendMarker_Tr3(const char* s, const char* c, int n);
void QBarLegendMarker_OnMetacall(QBarLegendMarker* self, intptr_t slot);
int QBarLegendMarker_QBaseMetacall(QBarLegendMarker* self, int param1, int param2, void** param3);
void QBarLegendMarker_OnType(QBarLegendMarker* self, intptr_t slot);
int QBarLegendMarker_QBaseType(QBarLegendMarker* self);
void QBarLegendMarker_OnSeries(QBarLegendMarker* self, intptr_t slot);
QAbstractBarSeries* QBarLegendMarker_QBaseSeries(QBarLegendMarker* self);
bool QBarLegendMarker_Event(QBarLegendMarker* self, QEvent* event);
void QBarLegendMarker_OnEvent(QBarLegendMarker* self, intptr_t slot);
bool QBarLegendMarker_QBaseEvent(QBarLegendMarker* self, QEvent* event);
bool QBarLegendMarker_EventFilter(QBarLegendMarker* self, QObject* watched, QEvent* event);
void QBarLegendMarker_OnEventFilter(QBarLegendMarker* self, intptr_t slot);
bool QBarLegendMarker_QBaseEventFilter(QBarLegendMarker* self, QObject* watched, QEvent* event);
void QBarLegendMarker_TimerEvent(QBarLegendMarker* self, QTimerEvent* event);
void QBarLegendMarker_OnTimerEvent(QBarLegendMarker* self, intptr_t slot);
void QBarLegendMarker_QBaseTimerEvent(QBarLegendMarker* self, QTimerEvent* event);
void QBarLegendMarker_ChildEvent(QBarLegendMarker* self, QChildEvent* event);
void QBarLegendMarker_OnChildEvent(QBarLegendMarker* self, intptr_t slot);
void QBarLegendMarker_QBaseChildEvent(QBarLegendMarker* self, QChildEvent* event);
void QBarLegendMarker_CustomEvent(QBarLegendMarker* self, QEvent* event);
void QBarLegendMarker_OnCustomEvent(QBarLegendMarker* self, intptr_t slot);
void QBarLegendMarker_QBaseCustomEvent(QBarLegendMarker* self, QEvent* event);
void QBarLegendMarker_ConnectNotify(QBarLegendMarker* self, const QMetaMethod* signal);
void QBarLegendMarker_OnConnectNotify(QBarLegendMarker* self, intptr_t slot);
void QBarLegendMarker_QBaseConnectNotify(QBarLegendMarker* self, const QMetaMethod* signal);
void QBarLegendMarker_DisconnectNotify(QBarLegendMarker* self, const QMetaMethod* signal);
void QBarLegendMarker_OnDisconnectNotify(QBarLegendMarker* self, intptr_t slot);
void QBarLegendMarker_QBaseDisconnectNotify(QBarLegendMarker* self, const QMetaMethod* signal);
QObject* QBarLegendMarker_Sender(const QBarLegendMarker* self);
void QBarLegendMarker_OnSender(const QBarLegendMarker* self, intptr_t slot);
QObject* QBarLegendMarker_QBaseSender(const QBarLegendMarker* self);
int QBarLegendMarker_SenderSignalIndex(const QBarLegendMarker* self);
void QBarLegendMarker_OnSenderSignalIndex(const QBarLegendMarker* self, intptr_t slot);
int QBarLegendMarker_QBaseSenderSignalIndex(const QBarLegendMarker* self);
int QBarLegendMarker_Receivers(const QBarLegendMarker* self, const char* signal);
void QBarLegendMarker_OnReceivers(const QBarLegendMarker* self, intptr_t slot);
int QBarLegendMarker_QBaseReceivers(const QBarLegendMarker* self, const char* signal);
bool QBarLegendMarker_IsSignalConnected(const QBarLegendMarker* self, const QMetaMethod* signal);
void QBarLegendMarker_OnIsSignalConnected(const QBarLegendMarker* self, intptr_t slot);
bool QBarLegendMarker_QBaseIsSignalConnected(const QBarLegendMarker* self, const QMetaMethod* signal);
void QBarLegendMarker_Delete(QBarLegendMarker* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
