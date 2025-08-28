#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_CHARTSC_LIBQCANDLESTICKLEGENDMARKER_H
#define SRC_RESTRICTED_EXTRAS_CHARTSC_LIBQCANDLESTICKLEGENDMARKER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QCandlestickLegendMarker QCandlestickLegendMarker;
typedef struct QCandlestickSeries QCandlestickSeries;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QLegend QLegend;
typedef struct QLegendMarker QLegendMarker;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
#endif

QCandlestickLegendMarker* QCandlestickLegendMarker_new(QCandlestickSeries* series, QLegend* legend);
QCandlestickLegendMarker* QCandlestickLegendMarker_new2(QCandlestickSeries* series, QLegend* legend, QObject* parent);
QMetaObject* QCandlestickLegendMarker_MetaObject(const QCandlestickLegendMarker* self);
void* QCandlestickLegendMarker_Metacast(QCandlestickLegendMarker* self, const char* param1);
int QCandlestickLegendMarker_Metacall(QCandlestickLegendMarker* self, int param1, int param2, void** param3);
libqt_string QCandlestickLegendMarker_Tr(const char* s);
int QCandlestickLegendMarker_Type(QCandlestickLegendMarker* self);
QCandlestickSeries* QCandlestickLegendMarker_Series(QCandlestickLegendMarker* self);
libqt_string QCandlestickLegendMarker_Tr2(const char* s, const char* c);
libqt_string QCandlestickLegendMarker_Tr3(const char* s, const char* c, int n);
void QCandlestickLegendMarker_OnMetacall(QCandlestickLegendMarker* self, intptr_t slot);
int QCandlestickLegendMarker_QBaseMetacall(QCandlestickLegendMarker* self, int param1, int param2, void** param3);
void QCandlestickLegendMarker_OnType(QCandlestickLegendMarker* self, intptr_t slot);
int QCandlestickLegendMarker_QBaseType(QCandlestickLegendMarker* self);
void QCandlestickLegendMarker_OnSeries(QCandlestickLegendMarker* self, intptr_t slot);
QCandlestickSeries* QCandlestickLegendMarker_QBaseSeries(QCandlestickLegendMarker* self);
bool QCandlestickLegendMarker_Event(QCandlestickLegendMarker* self, QEvent* event);
void QCandlestickLegendMarker_OnEvent(QCandlestickLegendMarker* self, intptr_t slot);
bool QCandlestickLegendMarker_QBaseEvent(QCandlestickLegendMarker* self, QEvent* event);
bool QCandlestickLegendMarker_EventFilter(QCandlestickLegendMarker* self, QObject* watched, QEvent* event);
void QCandlestickLegendMarker_OnEventFilter(QCandlestickLegendMarker* self, intptr_t slot);
bool QCandlestickLegendMarker_QBaseEventFilter(QCandlestickLegendMarker* self, QObject* watched, QEvent* event);
void QCandlestickLegendMarker_TimerEvent(QCandlestickLegendMarker* self, QTimerEvent* event);
void QCandlestickLegendMarker_OnTimerEvent(QCandlestickLegendMarker* self, intptr_t slot);
void QCandlestickLegendMarker_QBaseTimerEvent(QCandlestickLegendMarker* self, QTimerEvent* event);
void QCandlestickLegendMarker_ChildEvent(QCandlestickLegendMarker* self, QChildEvent* event);
void QCandlestickLegendMarker_OnChildEvent(QCandlestickLegendMarker* self, intptr_t slot);
void QCandlestickLegendMarker_QBaseChildEvent(QCandlestickLegendMarker* self, QChildEvent* event);
void QCandlestickLegendMarker_CustomEvent(QCandlestickLegendMarker* self, QEvent* event);
void QCandlestickLegendMarker_OnCustomEvent(QCandlestickLegendMarker* self, intptr_t slot);
void QCandlestickLegendMarker_QBaseCustomEvent(QCandlestickLegendMarker* self, QEvent* event);
void QCandlestickLegendMarker_ConnectNotify(QCandlestickLegendMarker* self, const QMetaMethod* signal);
void QCandlestickLegendMarker_OnConnectNotify(QCandlestickLegendMarker* self, intptr_t slot);
void QCandlestickLegendMarker_QBaseConnectNotify(QCandlestickLegendMarker* self, const QMetaMethod* signal);
void QCandlestickLegendMarker_DisconnectNotify(QCandlestickLegendMarker* self, const QMetaMethod* signal);
void QCandlestickLegendMarker_OnDisconnectNotify(QCandlestickLegendMarker* self, intptr_t slot);
void QCandlestickLegendMarker_QBaseDisconnectNotify(QCandlestickLegendMarker* self, const QMetaMethod* signal);
QObject* QCandlestickLegendMarker_Sender(const QCandlestickLegendMarker* self);
void QCandlestickLegendMarker_OnSender(const QCandlestickLegendMarker* self, intptr_t slot);
QObject* QCandlestickLegendMarker_QBaseSender(const QCandlestickLegendMarker* self);
int QCandlestickLegendMarker_SenderSignalIndex(const QCandlestickLegendMarker* self);
void QCandlestickLegendMarker_OnSenderSignalIndex(const QCandlestickLegendMarker* self, intptr_t slot);
int QCandlestickLegendMarker_QBaseSenderSignalIndex(const QCandlestickLegendMarker* self);
int QCandlestickLegendMarker_Receivers(const QCandlestickLegendMarker* self, const char* signal);
void QCandlestickLegendMarker_OnReceivers(const QCandlestickLegendMarker* self, intptr_t slot);
int QCandlestickLegendMarker_QBaseReceivers(const QCandlestickLegendMarker* self, const char* signal);
bool QCandlestickLegendMarker_IsSignalConnected(const QCandlestickLegendMarker* self, const QMetaMethod* signal);
void QCandlestickLegendMarker_OnIsSignalConnected(const QCandlestickLegendMarker* self, intptr_t slot);
bool QCandlestickLegendMarker_QBaseIsSignalConnected(const QCandlestickLegendMarker* self, const QMetaMethod* signal);
void QCandlestickLegendMarker_Delete(QCandlestickLegendMarker* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
