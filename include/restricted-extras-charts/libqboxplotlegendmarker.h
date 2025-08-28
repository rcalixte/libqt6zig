#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_CHARTSC_LIBQBOXPLOTLEGENDMARKER_H
#define SRC_RESTRICTED_EXTRAS_CHARTSC_LIBQBOXPLOTLEGENDMARKER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QBoxPlotLegendMarker QBoxPlotLegendMarker;
typedef struct QBoxPlotSeries QBoxPlotSeries;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QLegend QLegend;
typedef struct QLegendMarker QLegendMarker;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
#endif

QBoxPlotLegendMarker* QBoxPlotLegendMarker_new(QBoxPlotSeries* series, QLegend* legend);
QBoxPlotLegendMarker* QBoxPlotLegendMarker_new2(QBoxPlotSeries* series, QLegend* legend, QObject* parent);
QMetaObject* QBoxPlotLegendMarker_MetaObject(const QBoxPlotLegendMarker* self);
void* QBoxPlotLegendMarker_Metacast(QBoxPlotLegendMarker* self, const char* param1);
int QBoxPlotLegendMarker_Metacall(QBoxPlotLegendMarker* self, int param1, int param2, void** param3);
libqt_string QBoxPlotLegendMarker_Tr(const char* s);
int QBoxPlotLegendMarker_Type(QBoxPlotLegendMarker* self);
QBoxPlotSeries* QBoxPlotLegendMarker_Series(QBoxPlotLegendMarker* self);
libqt_string QBoxPlotLegendMarker_Tr2(const char* s, const char* c);
libqt_string QBoxPlotLegendMarker_Tr3(const char* s, const char* c, int n);
void QBoxPlotLegendMarker_OnMetacall(QBoxPlotLegendMarker* self, intptr_t slot);
int QBoxPlotLegendMarker_QBaseMetacall(QBoxPlotLegendMarker* self, int param1, int param2, void** param3);
void QBoxPlotLegendMarker_OnType(QBoxPlotLegendMarker* self, intptr_t slot);
int QBoxPlotLegendMarker_QBaseType(QBoxPlotLegendMarker* self);
void QBoxPlotLegendMarker_OnSeries(QBoxPlotLegendMarker* self, intptr_t slot);
QBoxPlotSeries* QBoxPlotLegendMarker_QBaseSeries(QBoxPlotLegendMarker* self);
bool QBoxPlotLegendMarker_Event(QBoxPlotLegendMarker* self, QEvent* event);
void QBoxPlotLegendMarker_OnEvent(QBoxPlotLegendMarker* self, intptr_t slot);
bool QBoxPlotLegendMarker_QBaseEvent(QBoxPlotLegendMarker* self, QEvent* event);
bool QBoxPlotLegendMarker_EventFilter(QBoxPlotLegendMarker* self, QObject* watched, QEvent* event);
void QBoxPlotLegendMarker_OnEventFilter(QBoxPlotLegendMarker* self, intptr_t slot);
bool QBoxPlotLegendMarker_QBaseEventFilter(QBoxPlotLegendMarker* self, QObject* watched, QEvent* event);
void QBoxPlotLegendMarker_TimerEvent(QBoxPlotLegendMarker* self, QTimerEvent* event);
void QBoxPlotLegendMarker_OnTimerEvent(QBoxPlotLegendMarker* self, intptr_t slot);
void QBoxPlotLegendMarker_QBaseTimerEvent(QBoxPlotLegendMarker* self, QTimerEvent* event);
void QBoxPlotLegendMarker_ChildEvent(QBoxPlotLegendMarker* self, QChildEvent* event);
void QBoxPlotLegendMarker_OnChildEvent(QBoxPlotLegendMarker* self, intptr_t slot);
void QBoxPlotLegendMarker_QBaseChildEvent(QBoxPlotLegendMarker* self, QChildEvent* event);
void QBoxPlotLegendMarker_CustomEvent(QBoxPlotLegendMarker* self, QEvent* event);
void QBoxPlotLegendMarker_OnCustomEvent(QBoxPlotLegendMarker* self, intptr_t slot);
void QBoxPlotLegendMarker_QBaseCustomEvent(QBoxPlotLegendMarker* self, QEvent* event);
void QBoxPlotLegendMarker_ConnectNotify(QBoxPlotLegendMarker* self, const QMetaMethod* signal);
void QBoxPlotLegendMarker_OnConnectNotify(QBoxPlotLegendMarker* self, intptr_t slot);
void QBoxPlotLegendMarker_QBaseConnectNotify(QBoxPlotLegendMarker* self, const QMetaMethod* signal);
void QBoxPlotLegendMarker_DisconnectNotify(QBoxPlotLegendMarker* self, const QMetaMethod* signal);
void QBoxPlotLegendMarker_OnDisconnectNotify(QBoxPlotLegendMarker* self, intptr_t slot);
void QBoxPlotLegendMarker_QBaseDisconnectNotify(QBoxPlotLegendMarker* self, const QMetaMethod* signal);
QObject* QBoxPlotLegendMarker_Sender(const QBoxPlotLegendMarker* self);
void QBoxPlotLegendMarker_OnSender(const QBoxPlotLegendMarker* self, intptr_t slot);
QObject* QBoxPlotLegendMarker_QBaseSender(const QBoxPlotLegendMarker* self);
int QBoxPlotLegendMarker_SenderSignalIndex(const QBoxPlotLegendMarker* self);
void QBoxPlotLegendMarker_OnSenderSignalIndex(const QBoxPlotLegendMarker* self, intptr_t slot);
int QBoxPlotLegendMarker_QBaseSenderSignalIndex(const QBoxPlotLegendMarker* self);
int QBoxPlotLegendMarker_Receivers(const QBoxPlotLegendMarker* self, const char* signal);
void QBoxPlotLegendMarker_OnReceivers(const QBoxPlotLegendMarker* self, intptr_t slot);
int QBoxPlotLegendMarker_QBaseReceivers(const QBoxPlotLegendMarker* self, const char* signal);
bool QBoxPlotLegendMarker_IsSignalConnected(const QBoxPlotLegendMarker* self, const QMetaMethod* signal);
void QBoxPlotLegendMarker_OnIsSignalConnected(const QBoxPlotLegendMarker* self, intptr_t slot);
bool QBoxPlotLegendMarker_QBaseIsSignalConnected(const QBoxPlotLegendMarker* self, const QMetaMethod* signal);
void QBoxPlotLegendMarker_Delete(QBoxPlotLegendMarker* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
