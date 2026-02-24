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
int QAreaLegendMarker_Type(QAreaLegendMarker* self);
QAreaSeries* QAreaLegendMarker_Series(QAreaLegendMarker* self);
void QAreaLegendMarker_OnMetaObject(const QAreaLegendMarker* self, intptr_t slot);
QMetaObject* QAreaLegendMarker_SuperMetaObject(const QAreaLegendMarker* self);
void QAreaLegendMarker_OnMetacast(QAreaLegendMarker* self, intptr_t slot);
void* QAreaLegendMarker_SuperMetacast(QAreaLegendMarker* self, const char* param1);
void QAreaLegendMarker_OnMetacall(QAreaLegendMarker* self, intptr_t slot);
int QAreaLegendMarker_SuperMetacall(QAreaLegendMarker* self, int param1, int param2, void** param3);
void QAreaLegendMarker_OnType(QAreaLegendMarker* self, intptr_t slot);
int QAreaLegendMarker_SuperType(QAreaLegendMarker* self);
void QAreaLegendMarker_OnSeries(QAreaLegendMarker* self, intptr_t slot);
QAreaSeries* QAreaLegendMarker_SuperSeries(QAreaLegendMarker* self);
bool QAreaLegendMarker_Event(QAreaLegendMarker* self, QEvent* event);
void QAreaLegendMarker_OnEvent(QAreaLegendMarker* self, intptr_t slot);
bool QAreaLegendMarker_SuperEvent(QAreaLegendMarker* self, QEvent* event);
bool QAreaLegendMarker_EventFilter(QAreaLegendMarker* self, QObject* watched, QEvent* event);
void QAreaLegendMarker_OnEventFilter(QAreaLegendMarker* self, intptr_t slot);
bool QAreaLegendMarker_SuperEventFilter(QAreaLegendMarker* self, QObject* watched, QEvent* event);
void QAreaLegendMarker_TimerEvent(QAreaLegendMarker* self, QTimerEvent* event);
void QAreaLegendMarker_OnTimerEvent(QAreaLegendMarker* self, intptr_t slot);
void QAreaLegendMarker_SuperTimerEvent(QAreaLegendMarker* self, QTimerEvent* event);
void QAreaLegendMarker_ChildEvent(QAreaLegendMarker* self, QChildEvent* event);
void QAreaLegendMarker_OnChildEvent(QAreaLegendMarker* self, intptr_t slot);
void QAreaLegendMarker_SuperChildEvent(QAreaLegendMarker* self, QChildEvent* event);
void QAreaLegendMarker_CustomEvent(QAreaLegendMarker* self, QEvent* event);
void QAreaLegendMarker_OnCustomEvent(QAreaLegendMarker* self, intptr_t slot);
void QAreaLegendMarker_SuperCustomEvent(QAreaLegendMarker* self, QEvent* event);
void QAreaLegendMarker_ConnectNotify(QAreaLegendMarker* self, const QMetaMethod* signal);
void QAreaLegendMarker_OnConnectNotify(QAreaLegendMarker* self, intptr_t slot);
void QAreaLegendMarker_SuperConnectNotify(QAreaLegendMarker* self, const QMetaMethod* signal);
void QAreaLegendMarker_DisconnectNotify(QAreaLegendMarker* self, const QMetaMethod* signal);
void QAreaLegendMarker_OnDisconnectNotify(QAreaLegendMarker* self, intptr_t slot);
void QAreaLegendMarker_SuperDisconnectNotify(QAreaLegendMarker* self, const QMetaMethod* signal);
QObject* QAreaLegendMarker_Sender(const QAreaLegendMarker* self);
void QAreaLegendMarker_OnSender(const QAreaLegendMarker* self, intptr_t slot);
QObject* QAreaLegendMarker_SuperSender(const QAreaLegendMarker* self);
int QAreaLegendMarker_SenderSignalIndex(const QAreaLegendMarker* self);
void QAreaLegendMarker_OnSenderSignalIndex(const QAreaLegendMarker* self, intptr_t slot);
int QAreaLegendMarker_SuperSenderSignalIndex(const QAreaLegendMarker* self);
int QAreaLegendMarker_Receivers(const QAreaLegendMarker* self, const char* signal);
void QAreaLegendMarker_OnReceivers(const QAreaLegendMarker* self, intptr_t slot);
int QAreaLegendMarker_SuperReceivers(const QAreaLegendMarker* self, const char* signal);
bool QAreaLegendMarker_IsSignalConnected(const QAreaLegendMarker* self, const QMetaMethod* signal);
void QAreaLegendMarker_OnIsSignalConnected(const QAreaLegendMarker* self, intptr_t slot);
bool QAreaLegendMarker_SuperIsSignalConnected(const QAreaLegendMarker* self, const QMetaMethod* signal);
void QAreaLegendMarker_Delete(QAreaLegendMarker* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
