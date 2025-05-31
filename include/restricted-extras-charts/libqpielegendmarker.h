#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_CHARTSC_LIBQPIELEGENDMARKER_H
#define SRC_RESTRICTED_EXTRAS_CHARTSC_LIBQPIELEGENDMARKER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

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
void QPieLegendMarker_OnMetacall(QPieLegendMarker* self, intptr_t slot);
int QPieLegendMarker_QBaseMetacall(QPieLegendMarker* self, int param1, int param2, void** param3);
libqt_string QPieLegendMarker_Tr(const char* s);
int QPieLegendMarker_Type(QPieLegendMarker* self);
void QPieLegendMarker_OnType(QPieLegendMarker* self, intptr_t slot);
int QPieLegendMarker_QBaseType(QPieLegendMarker* self);
QPieSeries* QPieLegendMarker_Series(QPieLegendMarker* self);
void QPieLegendMarker_OnSeries(QPieLegendMarker* self, intptr_t slot);
QPieSeries* QPieLegendMarker_QBaseSeries(QPieLegendMarker* self);
QPieSlice* QPieLegendMarker_Slice(QPieLegendMarker* self);
libqt_string QPieLegendMarker_Tr2(const char* s, const char* c);
libqt_string QPieLegendMarker_Tr3(const char* s, const char* c, int n);
bool QPieLegendMarker_Event(QPieLegendMarker* self, QEvent* event);
void QPieLegendMarker_OnEvent(QPieLegendMarker* self, intptr_t slot);
bool QPieLegendMarker_QBaseEvent(QPieLegendMarker* self, QEvent* event);
bool QPieLegendMarker_EventFilter(QPieLegendMarker* self, QObject* watched, QEvent* event);
void QPieLegendMarker_OnEventFilter(QPieLegendMarker* self, intptr_t slot);
bool QPieLegendMarker_QBaseEventFilter(QPieLegendMarker* self, QObject* watched, QEvent* event);
void QPieLegendMarker_TimerEvent(QPieLegendMarker* self, QTimerEvent* event);
void QPieLegendMarker_OnTimerEvent(QPieLegendMarker* self, intptr_t slot);
void QPieLegendMarker_QBaseTimerEvent(QPieLegendMarker* self, QTimerEvent* event);
void QPieLegendMarker_ChildEvent(QPieLegendMarker* self, QChildEvent* event);
void QPieLegendMarker_OnChildEvent(QPieLegendMarker* self, intptr_t slot);
void QPieLegendMarker_QBaseChildEvent(QPieLegendMarker* self, QChildEvent* event);
void QPieLegendMarker_CustomEvent(QPieLegendMarker* self, QEvent* event);
void QPieLegendMarker_OnCustomEvent(QPieLegendMarker* self, intptr_t slot);
void QPieLegendMarker_QBaseCustomEvent(QPieLegendMarker* self, QEvent* event);
void QPieLegendMarker_ConnectNotify(QPieLegendMarker* self, const QMetaMethod* signal);
void QPieLegendMarker_OnConnectNotify(QPieLegendMarker* self, intptr_t slot);
void QPieLegendMarker_QBaseConnectNotify(QPieLegendMarker* self, const QMetaMethod* signal);
void QPieLegendMarker_DisconnectNotify(QPieLegendMarker* self, const QMetaMethod* signal);
void QPieLegendMarker_OnDisconnectNotify(QPieLegendMarker* self, intptr_t slot);
void QPieLegendMarker_QBaseDisconnectNotify(QPieLegendMarker* self, const QMetaMethod* signal);
QObject* QPieLegendMarker_Sender(const QPieLegendMarker* self);
void QPieLegendMarker_OnSender(const QPieLegendMarker* self, intptr_t slot);
QObject* QPieLegendMarker_QBaseSender(const QPieLegendMarker* self);
int QPieLegendMarker_SenderSignalIndex(const QPieLegendMarker* self);
void QPieLegendMarker_OnSenderSignalIndex(const QPieLegendMarker* self, intptr_t slot);
int QPieLegendMarker_QBaseSenderSignalIndex(const QPieLegendMarker* self);
int QPieLegendMarker_Receivers(const QPieLegendMarker* self, const char* signal);
void QPieLegendMarker_OnReceivers(const QPieLegendMarker* self, intptr_t slot);
int QPieLegendMarker_QBaseReceivers(const QPieLegendMarker* self, const char* signal);
bool QPieLegendMarker_IsSignalConnected(const QPieLegendMarker* self, const QMetaMethod* signal);
void QPieLegendMarker_OnIsSignalConnected(const QPieLegendMarker* self, intptr_t slot);
bool QPieLegendMarker_QBaseIsSignalConnected(const QPieLegendMarker* self, const QMetaMethod* signal);
void QPieLegendMarker_Delete(QPieLegendMarker* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
