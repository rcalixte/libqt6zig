#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_CHARTSC_LIBQPIELEGENDMARKER_H
#define SRC_RESTRICTED_EXTRAS_CHARTSC_LIBQPIELEGENDMARKER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QLegend QLegend;
typedef struct QLegendMarker QLegendMarker;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QPieLegendMarker QPieLegendMarker;
typedef struct QPieSeries QPieSeries;
typedef struct QPieSlice QPieSlice;
typedef struct QTimerEvent QTimerEvent;
#endif

QPieLegendMarker* QPieLegendMarker_new(QPieSeries* series, QPieSlice* slice, QLegend* legend);
QPieLegendMarker* QPieLegendMarker_new2(QPieSeries* series, QPieSlice* slice, QLegend* legend, QObject* parent);
QMetaObject* QPieLegendMarker_MetaObject(const QPieLegendMarker* self);
void* QPieLegendMarker_Metacast(QPieLegendMarker* self, const char* param1);
int QPieLegendMarker_Metacall(QPieLegendMarker* self, int param1, int param2, void** param3);
int QPieLegendMarker_Type(QPieLegendMarker* self);
QPieSeries* QPieLegendMarker_Series(QPieLegendMarker* self);
QPieSlice* QPieLegendMarker_Slice(QPieLegendMarker* self);
void QPieLegendMarker_OnMetaObject(const QPieLegendMarker* self, intptr_t slot);
QMetaObject* QPieLegendMarker_SuperMetaObject(const QPieLegendMarker* self);
void QPieLegendMarker_OnMetacast(QPieLegendMarker* self, intptr_t slot);
void* QPieLegendMarker_SuperMetacast(QPieLegendMarker* self, const char* param1);
void QPieLegendMarker_OnMetacall(QPieLegendMarker* self, intptr_t slot);
int QPieLegendMarker_SuperMetacall(QPieLegendMarker* self, int param1, int param2, void** param3);
void QPieLegendMarker_OnType(QPieLegendMarker* self, intptr_t slot);
int QPieLegendMarker_SuperType(QPieLegendMarker* self);
void QPieLegendMarker_OnSeries(QPieLegendMarker* self, intptr_t slot);
QPieSeries* QPieLegendMarker_SuperSeries(QPieLegendMarker* self);
bool QPieLegendMarker_Event(QPieLegendMarker* self, QEvent* event);
void QPieLegendMarker_OnEvent(QPieLegendMarker* self, intptr_t slot);
bool QPieLegendMarker_SuperEvent(QPieLegendMarker* self, QEvent* event);
bool QPieLegendMarker_EventFilter(QPieLegendMarker* self, QObject* watched, QEvent* event);
void QPieLegendMarker_OnEventFilter(QPieLegendMarker* self, intptr_t slot);
bool QPieLegendMarker_SuperEventFilter(QPieLegendMarker* self, QObject* watched, QEvent* event);
void QPieLegendMarker_TimerEvent(QPieLegendMarker* self, QTimerEvent* event);
void QPieLegendMarker_OnTimerEvent(QPieLegendMarker* self, intptr_t slot);
void QPieLegendMarker_SuperTimerEvent(QPieLegendMarker* self, QTimerEvent* event);
void QPieLegendMarker_ChildEvent(QPieLegendMarker* self, QChildEvent* event);
void QPieLegendMarker_OnChildEvent(QPieLegendMarker* self, intptr_t slot);
void QPieLegendMarker_SuperChildEvent(QPieLegendMarker* self, QChildEvent* event);
void QPieLegendMarker_CustomEvent(QPieLegendMarker* self, QEvent* event);
void QPieLegendMarker_OnCustomEvent(QPieLegendMarker* self, intptr_t slot);
void QPieLegendMarker_SuperCustomEvent(QPieLegendMarker* self, QEvent* event);
void QPieLegendMarker_ConnectNotify(QPieLegendMarker* self, const QMetaMethod* signal);
void QPieLegendMarker_OnConnectNotify(QPieLegendMarker* self, intptr_t slot);
void QPieLegendMarker_SuperConnectNotify(QPieLegendMarker* self, const QMetaMethod* signal);
void QPieLegendMarker_DisconnectNotify(QPieLegendMarker* self, const QMetaMethod* signal);
void QPieLegendMarker_OnDisconnectNotify(QPieLegendMarker* self, intptr_t slot);
void QPieLegendMarker_SuperDisconnectNotify(QPieLegendMarker* self, const QMetaMethod* signal);
QObject* QPieLegendMarker_Sender(const QPieLegendMarker* self);
void QPieLegendMarker_OnSender(const QPieLegendMarker* self, intptr_t slot);
QObject* QPieLegendMarker_SuperSender(const QPieLegendMarker* self);
int QPieLegendMarker_SenderSignalIndex(const QPieLegendMarker* self);
void QPieLegendMarker_OnSenderSignalIndex(const QPieLegendMarker* self, intptr_t slot);
int QPieLegendMarker_SuperSenderSignalIndex(const QPieLegendMarker* self);
int QPieLegendMarker_Receivers(const QPieLegendMarker* self, const char* signal);
void QPieLegendMarker_OnReceivers(const QPieLegendMarker* self, intptr_t slot);
int QPieLegendMarker_SuperReceivers(const QPieLegendMarker* self, const char* signal);
bool QPieLegendMarker_IsSignalConnected(const QPieLegendMarker* self, const QMetaMethod* signal);
void QPieLegendMarker_OnIsSignalConnected(const QPieLegendMarker* self, intptr_t slot);
bool QPieLegendMarker_SuperIsSignalConnected(const QPieLegendMarker* self, const QMetaMethod* signal);
void QPieLegendMarker_Delete(QPieLegendMarker* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
