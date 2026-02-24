#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_CHARTSC_LIBQCOLORAXIS_H
#define SRC_RESTRICTED_EXTRAS_CHARTSC_LIBQCOLORAXIS_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QAbstractAxis QAbstractAxis;
typedef struct QChildEvent QChildEvent;
typedef struct QColorAxis QColorAxis;
typedef struct QEvent QEvent;
typedef struct QLinearGradient QLinearGradient;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
#endif

QColorAxis* QColorAxis_new();
QColorAxis* QColorAxis_new2(QObject* parent);
QMetaObject* QColorAxis_MetaObject(const QColorAxis* self);
void* QColorAxis_Metacast(QColorAxis* self, const char* param1);
int QColorAxis_Metacall(QColorAxis* self, int param1, int param2, void** param3);
int QColorAxis_Type(const QColorAxis* self);
void QColorAxis_SetMin(QColorAxis* self, double min);
double QColorAxis_Min(const QColorAxis* self);
void QColorAxis_SetMax(QColorAxis* self, double max);
double QColorAxis_Max(const QColorAxis* self);
void QColorAxis_SetRange(QColorAxis* self, double min, double max);
void QColorAxis_SetTickCount(QColorAxis* self, int count);
int QColorAxis_TickCount(const QColorAxis* self);
void QColorAxis_SetSize(QColorAxis* self, const double size);
double QColorAxis_Size(const QColorAxis* self);
void QColorAxis_SetGradient(QColorAxis* self, const QLinearGradient* gradient);
QLinearGradient* QColorAxis_Gradient(const QColorAxis* self);
void QColorAxis_SetAutoRange(QColorAxis* self, bool autoRange);
bool QColorAxis_AutoRange(const QColorAxis* self);
void QColorAxis_MinChanged(QColorAxis* self, double min);
void QColorAxis_Connect_MinChanged(QColorAxis* self, intptr_t slot);
void QColorAxis_MaxChanged(QColorAxis* self, double max);
void QColorAxis_Connect_MaxChanged(QColorAxis* self, intptr_t slot);
void QColorAxis_RangeChanged(QColorAxis* self, double min, double max);
void QColorAxis_Connect_RangeChanged(QColorAxis* self, intptr_t slot);
void QColorAxis_TickCountChanged(QColorAxis* self, int tickCount);
void QColorAxis_Connect_TickCountChanged(QColorAxis* self, intptr_t slot);
void QColorAxis_GradientChanged(QColorAxis* self, const QLinearGradient* gradient);
void QColorAxis_Connect_GradientChanged(QColorAxis* self, intptr_t slot);
void QColorAxis_SizeChanged(QColorAxis* self, const double size);
void QColorAxis_Connect_SizeChanged(QColorAxis* self, intptr_t slot);
void QColorAxis_AutoRangeChanged(QColorAxis* self, bool autoRange);
void QColorAxis_Connect_AutoRangeChanged(QColorAxis* self, intptr_t slot);
void QColorAxis_OnMetaObject(const QColorAxis* self, intptr_t slot);
QMetaObject* QColorAxis_SuperMetaObject(const QColorAxis* self);
void QColorAxis_OnMetacast(QColorAxis* self, intptr_t slot);
void* QColorAxis_SuperMetacast(QColorAxis* self, const char* param1);
void QColorAxis_OnMetacall(QColorAxis* self, intptr_t slot);
int QColorAxis_SuperMetacall(QColorAxis* self, int param1, int param2, void** param3);
void QColorAxis_OnType(const QColorAxis* self, intptr_t slot);
int QColorAxis_SuperType(const QColorAxis* self);
bool QColorAxis_Event(QColorAxis* self, QEvent* event);
void QColorAxis_OnEvent(QColorAxis* self, intptr_t slot);
bool QColorAxis_SuperEvent(QColorAxis* self, QEvent* event);
bool QColorAxis_EventFilter(QColorAxis* self, QObject* watched, QEvent* event);
void QColorAxis_OnEventFilter(QColorAxis* self, intptr_t slot);
bool QColorAxis_SuperEventFilter(QColorAxis* self, QObject* watched, QEvent* event);
void QColorAxis_TimerEvent(QColorAxis* self, QTimerEvent* event);
void QColorAxis_OnTimerEvent(QColorAxis* self, intptr_t slot);
void QColorAxis_SuperTimerEvent(QColorAxis* self, QTimerEvent* event);
void QColorAxis_ChildEvent(QColorAxis* self, QChildEvent* event);
void QColorAxis_OnChildEvent(QColorAxis* self, intptr_t slot);
void QColorAxis_SuperChildEvent(QColorAxis* self, QChildEvent* event);
void QColorAxis_CustomEvent(QColorAxis* self, QEvent* event);
void QColorAxis_OnCustomEvent(QColorAxis* self, intptr_t slot);
void QColorAxis_SuperCustomEvent(QColorAxis* self, QEvent* event);
void QColorAxis_ConnectNotify(QColorAxis* self, const QMetaMethod* signal);
void QColorAxis_OnConnectNotify(QColorAxis* self, intptr_t slot);
void QColorAxis_SuperConnectNotify(QColorAxis* self, const QMetaMethod* signal);
void QColorAxis_DisconnectNotify(QColorAxis* self, const QMetaMethod* signal);
void QColorAxis_OnDisconnectNotify(QColorAxis* self, intptr_t slot);
void QColorAxis_SuperDisconnectNotify(QColorAxis* self, const QMetaMethod* signal);
QObject* QColorAxis_Sender(const QColorAxis* self);
void QColorAxis_OnSender(const QColorAxis* self, intptr_t slot);
QObject* QColorAxis_SuperSender(const QColorAxis* self);
int QColorAxis_SenderSignalIndex(const QColorAxis* self);
void QColorAxis_OnSenderSignalIndex(const QColorAxis* self, intptr_t slot);
int QColorAxis_SuperSenderSignalIndex(const QColorAxis* self);
int QColorAxis_Receivers(const QColorAxis* self, const char* signal);
void QColorAxis_OnReceivers(const QColorAxis* self, intptr_t slot);
int QColorAxis_SuperReceivers(const QColorAxis* self, const char* signal);
bool QColorAxis_IsSignalConnected(const QColorAxis* self, const QMetaMethod* signal);
void QColorAxis_OnIsSignalConnected(const QColorAxis* self, intptr_t slot);
bool QColorAxis_SuperIsSignalConnected(const QColorAxis* self, const QMetaMethod* signal);
void QColorAxis_Delete(QColorAxis* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
