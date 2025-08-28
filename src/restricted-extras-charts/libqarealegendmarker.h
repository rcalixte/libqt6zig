#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_CHARTSC_LIBQAREALEGENDMARKER_H
#define SRC_RESTRICTED_EXTRAS_CHARTSC_LIBQAREALEGENDMARKER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QAreaLegendMarker QAreaLegendMarker;
typedef struct QAreaSeries QAreaSeries;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QLegend QLegend;
typedef struct QLegendMarker QLegendMarker;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
#endif

QAreaLegendMarker* QAreaLegendMarker_new(QAreaSeries* series, QLegend* legend);
QAreaLegendMarker* QAreaLegendMarker_new2(QAreaSeries* series, QLegend* legend, QObject* parent);
QMetaObject* QAreaLegendMarker_MetaObject(const QAreaLegendMarker* self);
void* QAreaLegendMarker_Metacast(QAreaLegendMarker* self, const char* param1);
int QAreaLegendMarker_Metacall(QAreaLegendMarker* self, int param1, int param2, void** param3);
libqt_string QAreaLegendMarker_Tr(const char* s);
int QAreaLegendMarker_Type(QAreaLegendMarker* self);
QAreaSeries* QAreaLegendMarker_Series(QAreaLegendMarker* self);
libqt_string QAreaLegendMarker_Tr2(const char* s, const char* c);
libqt_string QAreaLegendMarker_Tr3(const char* s, const char* c, int n);
void QAreaLegendMarker_OnMetacall(QAreaLegendMarker* self, intptr_t slot);
int QAreaLegendMarker_QBaseMetacall(QAreaLegendMarker* self, int param1, int param2, void** param3);
void QAreaLegendMarker_OnType(QAreaLegendMarker* self, intptr_t slot);
int QAreaLegendMarker_QBaseType(QAreaLegendMarker* self);
void QAreaLegendMarker_OnSeries(QAreaLegendMarker* self, intptr_t slot);
QAreaSeries* QAreaLegendMarker_QBaseSeries(QAreaLegendMarker* self);
bool QAreaLegendMarker_Event(QAreaLegendMarker* self, QEvent* event);
void QAreaLegendMarker_OnEvent(QAreaLegendMarker* self, intptr_t slot);
bool QAreaLegendMarker_QBaseEvent(QAreaLegendMarker* self, QEvent* event);
bool QAreaLegendMarker_EventFilter(QAreaLegendMarker* self, QObject* watched, QEvent* event);
void QAreaLegendMarker_OnEventFilter(QAreaLegendMarker* self, intptr_t slot);
bool QAreaLegendMarker_QBaseEventFilter(QAreaLegendMarker* self, QObject* watched, QEvent* event);
void QAreaLegendMarker_TimerEvent(QAreaLegendMarker* self, QTimerEvent* event);
void QAreaLegendMarker_OnTimerEvent(QAreaLegendMarker* self, intptr_t slot);
void QAreaLegendMarker_QBaseTimerEvent(QAreaLegendMarker* self, QTimerEvent* event);
void QAreaLegendMarker_ChildEvent(QAreaLegendMarker* self, QChildEvent* event);
void QAreaLegendMarker_OnChildEvent(QAreaLegendMarker* self, intptr_t slot);
void QAreaLegendMarker_QBaseChildEvent(QAreaLegendMarker* self, QChildEvent* event);
void QAreaLegendMarker_CustomEvent(QAreaLegendMarker* self, QEvent* event);
void QAreaLegendMarker_OnCustomEvent(QAreaLegendMarker* self, intptr_t slot);
void QAreaLegendMarker_QBaseCustomEvent(QAreaLegendMarker* self, QEvent* event);
void QAreaLegendMarker_ConnectNotify(QAreaLegendMarker* self, const QMetaMethod* signal);
void QAreaLegendMarker_OnConnectNotify(QAreaLegendMarker* self, intptr_t slot);
void QAreaLegendMarker_QBaseConnectNotify(QAreaLegendMarker* self, const QMetaMethod* signal);
void QAreaLegendMarker_DisconnectNotify(QAreaLegendMarker* self, const QMetaMethod* signal);
void QAreaLegendMarker_OnDisconnectNotify(QAreaLegendMarker* self, intptr_t slot);
void QAreaLegendMarker_QBaseDisconnectNotify(QAreaLegendMarker* self, const QMetaMethod* signal);
QObject* QAreaLegendMarker_Sender(const QAreaLegendMarker* self);
void QAreaLegendMarker_OnSender(const QAreaLegendMarker* self, intptr_t slot);
QObject* QAreaLegendMarker_QBaseSender(const QAreaLegendMarker* self);
int QAreaLegendMarker_SenderSignalIndex(const QAreaLegendMarker* self);
void QAreaLegendMarker_OnSenderSignalIndex(const QAreaLegendMarker* self, intptr_t slot);
int QAreaLegendMarker_QBaseSenderSignalIndex(const QAreaLegendMarker* self);
int QAreaLegendMarker_Receivers(const QAreaLegendMarker* self, const char* signal);
void QAreaLegendMarker_OnReceivers(const QAreaLegendMarker* self, intptr_t slot);
int QAreaLegendMarker_QBaseReceivers(const QAreaLegendMarker* self, const char* signal);
bool QAreaLegendMarker_IsSignalConnected(const QAreaLegendMarker* self, const QMetaMethod* signal);
void QAreaLegendMarker_OnIsSignalConnected(const QAreaLegendMarker* self, intptr_t slot);
bool QAreaLegendMarker_QBaseIsSignalConnected(const QAreaLegendMarker* self, const QMetaMethod* signal);
void QAreaLegendMarker_Delete(QAreaLegendMarker* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
