#pragma once
#ifndef SRC_CHARTSC_LIBQXYLEGENDMARKER_H
#define SRC_CHARTSC_LIBQXYLEGENDMARKER_H

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
typedef struct QAbstractSeries QAbstractSeries;
typedef struct QAnyStringView QAnyStringView;
typedef struct QBindingStorage QBindingStorage;
typedef struct QBrush QBrush;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QFont QFont;
typedef struct QLegend QLegend;
typedef struct QLegendMarker QLegendMarker;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QMetaObject__Connection QMetaObject__Connection;
typedef struct QObject QObject;
typedef struct QPen QPen;
typedef struct QThread QThread;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
typedef struct QXYLegendMarker QXYLegendMarker;
typedef struct QXYSeries QXYSeries;
#endif

QXYLegendMarker* QXYLegendMarker_new(QXYSeries* series, QLegend* legend);
QXYLegendMarker* QXYLegendMarker_new2(QXYSeries* series, QLegend* legend, QObject* parent);
QMetaObject* QXYLegendMarker_MetaObject(const QXYLegendMarker* self);
void* QXYLegendMarker_Metacast(QXYLegendMarker* self, const char* param1);
int QXYLegendMarker_Metacall(QXYLegendMarker* self, int param1, int param2, void** param3);
void QXYLegendMarker_OnMetacall(QXYLegendMarker* self, intptr_t slot);
int QXYLegendMarker_QBaseMetacall(QXYLegendMarker* self, int param1, int param2, void** param3);
libqt_string QXYLegendMarker_Tr(const char* s);
int QXYLegendMarker_Type(QXYLegendMarker* self);
void QXYLegendMarker_OnType(QXYLegendMarker* self, intptr_t slot);
int QXYLegendMarker_QBaseType(QXYLegendMarker* self);
QXYSeries* QXYLegendMarker_Series(QXYLegendMarker* self);
void QXYLegendMarker_OnSeries(QXYLegendMarker* self, intptr_t slot);
QXYSeries* QXYLegendMarker_QBaseSeries(QXYLegendMarker* self);
libqt_string QXYLegendMarker_Tr2(const char* s, const char* c);
libqt_string QXYLegendMarker_Tr3(const char* s, const char* c, int n);
bool QXYLegendMarker_Event(QXYLegendMarker* self, QEvent* event);
void QXYLegendMarker_OnEvent(QXYLegendMarker* self, intptr_t slot);
bool QXYLegendMarker_QBaseEvent(QXYLegendMarker* self, QEvent* event);
bool QXYLegendMarker_EventFilter(QXYLegendMarker* self, QObject* watched, QEvent* event);
void QXYLegendMarker_OnEventFilter(QXYLegendMarker* self, intptr_t slot);
bool QXYLegendMarker_QBaseEventFilter(QXYLegendMarker* self, QObject* watched, QEvent* event);
void QXYLegendMarker_TimerEvent(QXYLegendMarker* self, QTimerEvent* event);
void QXYLegendMarker_OnTimerEvent(QXYLegendMarker* self, intptr_t slot);
void QXYLegendMarker_QBaseTimerEvent(QXYLegendMarker* self, QTimerEvent* event);
void QXYLegendMarker_ChildEvent(QXYLegendMarker* self, QChildEvent* event);
void QXYLegendMarker_OnChildEvent(QXYLegendMarker* self, intptr_t slot);
void QXYLegendMarker_QBaseChildEvent(QXYLegendMarker* self, QChildEvent* event);
void QXYLegendMarker_CustomEvent(QXYLegendMarker* self, QEvent* event);
void QXYLegendMarker_OnCustomEvent(QXYLegendMarker* self, intptr_t slot);
void QXYLegendMarker_QBaseCustomEvent(QXYLegendMarker* self, QEvent* event);
void QXYLegendMarker_ConnectNotify(QXYLegendMarker* self, QMetaMethod* signal);
void QXYLegendMarker_OnConnectNotify(QXYLegendMarker* self, intptr_t slot);
void QXYLegendMarker_QBaseConnectNotify(QXYLegendMarker* self, QMetaMethod* signal);
void QXYLegendMarker_DisconnectNotify(QXYLegendMarker* self, QMetaMethod* signal);
void QXYLegendMarker_OnDisconnectNotify(QXYLegendMarker* self, intptr_t slot);
void QXYLegendMarker_QBaseDisconnectNotify(QXYLegendMarker* self, QMetaMethod* signal);
QObject* QXYLegendMarker_Sender(const QXYLegendMarker* self);
void QXYLegendMarker_OnSender(const QXYLegendMarker* self, intptr_t slot);
QObject* QXYLegendMarker_QBaseSender(const QXYLegendMarker* self);
int QXYLegendMarker_SenderSignalIndex(const QXYLegendMarker* self);
void QXYLegendMarker_OnSenderSignalIndex(const QXYLegendMarker* self, intptr_t slot);
int QXYLegendMarker_QBaseSenderSignalIndex(const QXYLegendMarker* self);
int QXYLegendMarker_Receivers(const QXYLegendMarker* self, const char* signal);
void QXYLegendMarker_OnReceivers(const QXYLegendMarker* self, intptr_t slot);
int QXYLegendMarker_QBaseReceivers(const QXYLegendMarker* self, const char* signal);
bool QXYLegendMarker_IsSignalConnected(const QXYLegendMarker* self, QMetaMethod* signal);
void QXYLegendMarker_OnIsSignalConnected(const QXYLegendMarker* self, intptr_t slot);
bool QXYLegendMarker_QBaseIsSignalConnected(const QXYLegendMarker* self, QMetaMethod* signal);
void QXYLegendMarker_Delete(QXYLegendMarker* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
