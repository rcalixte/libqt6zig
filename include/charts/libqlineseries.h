#pragma once
#ifndef SRC_CHARTSC_LIBQLINESERIES_H
#define SRC_CHARTSC_LIBQLINESERIES_H

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
typedef struct QAbstractAxis QAbstractAxis;
typedef struct QAbstractSeries QAbstractSeries;
typedef struct QAnyStringView QAnyStringView;
typedef struct QBindingStorage QBindingStorage;
typedef struct QBrush QBrush;
typedef struct QChart QChart;
typedef struct QChildEvent QChildEvent;
typedef struct QColor QColor;
typedef struct QEvent QEvent;
typedef struct QFont QFont;
typedef struct QImage QImage;
typedef struct QLineSeries QLineSeries;
typedef struct QLinearGradient QLinearGradient;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QMetaObject__Connection QMetaObject__Connection;
typedef struct QObject QObject;
typedef struct QPen QPen;
typedef struct QPointF QPointF;
typedef struct QThread QThread;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
typedef struct QXYSeries QXYSeries;
#endif

QLineSeries* QLineSeries_new();
QLineSeries* QLineSeries_new2(QObject* parent);
QMetaObject* QLineSeries_MetaObject(const QLineSeries* self);
void* QLineSeries_Metacast(QLineSeries* self, const char* param1);
int QLineSeries_Metacall(QLineSeries* self, int param1, int param2, void** param3);
void QLineSeries_OnMetacall(QLineSeries* self, intptr_t slot);
int QLineSeries_QBaseMetacall(QLineSeries* self, int param1, int param2, void** param3);
libqt_string QLineSeries_Tr(const char* s);
int QLineSeries_Type(const QLineSeries* self);
void QLineSeries_OnType(const QLineSeries* self, intptr_t slot);
int QLineSeries_QBaseType(const QLineSeries* self);
libqt_string QLineSeries_Tr2(const char* s, const char* c);
libqt_string QLineSeries_Tr3(const char* s, const char* c, int n);
void QLineSeries_SetPen(QLineSeries* self, QPen* pen);
void QLineSeries_OnSetPen(QLineSeries* self, intptr_t slot);
void QLineSeries_QBaseSetPen(QLineSeries* self, QPen* pen);
void QLineSeries_SetBrush(QLineSeries* self, QBrush* brush);
void QLineSeries_OnSetBrush(QLineSeries* self, intptr_t slot);
void QLineSeries_QBaseSetBrush(QLineSeries* self, QBrush* brush);
void QLineSeries_SetColor(QLineSeries* self, QColor* color);
void QLineSeries_OnSetColor(QLineSeries* self, intptr_t slot);
void QLineSeries_QBaseSetColor(QLineSeries* self, QColor* color);
QColor* QLineSeries_Color(const QLineSeries* self);
void QLineSeries_OnColor(const QLineSeries* self, intptr_t slot);
QColor* QLineSeries_QBaseColor(const QLineSeries* self);
bool QLineSeries_Event(QLineSeries* self, QEvent* event);
void QLineSeries_OnEvent(QLineSeries* self, intptr_t slot);
bool QLineSeries_QBaseEvent(QLineSeries* self, QEvent* event);
bool QLineSeries_EventFilter(QLineSeries* self, QObject* watched, QEvent* event);
void QLineSeries_OnEventFilter(QLineSeries* self, intptr_t slot);
bool QLineSeries_QBaseEventFilter(QLineSeries* self, QObject* watched, QEvent* event);
void QLineSeries_TimerEvent(QLineSeries* self, QTimerEvent* event);
void QLineSeries_OnTimerEvent(QLineSeries* self, intptr_t slot);
void QLineSeries_QBaseTimerEvent(QLineSeries* self, QTimerEvent* event);
void QLineSeries_ChildEvent(QLineSeries* self, QChildEvent* event);
void QLineSeries_OnChildEvent(QLineSeries* self, intptr_t slot);
void QLineSeries_QBaseChildEvent(QLineSeries* self, QChildEvent* event);
void QLineSeries_CustomEvent(QLineSeries* self, QEvent* event);
void QLineSeries_OnCustomEvent(QLineSeries* self, intptr_t slot);
void QLineSeries_QBaseCustomEvent(QLineSeries* self, QEvent* event);
void QLineSeries_ConnectNotify(QLineSeries* self, QMetaMethod* signal);
void QLineSeries_OnConnectNotify(QLineSeries* self, intptr_t slot);
void QLineSeries_QBaseConnectNotify(QLineSeries* self, QMetaMethod* signal);
void QLineSeries_DisconnectNotify(QLineSeries* self, QMetaMethod* signal);
void QLineSeries_OnDisconnectNotify(QLineSeries* self, intptr_t slot);
void QLineSeries_QBaseDisconnectNotify(QLineSeries* self, QMetaMethod* signal);
QObject* QLineSeries_Sender(const QLineSeries* self);
void QLineSeries_OnSender(const QLineSeries* self, intptr_t slot);
QObject* QLineSeries_QBaseSender(const QLineSeries* self);
int QLineSeries_SenderSignalIndex(const QLineSeries* self);
void QLineSeries_OnSenderSignalIndex(const QLineSeries* self, intptr_t slot);
int QLineSeries_QBaseSenderSignalIndex(const QLineSeries* self);
int QLineSeries_Receivers(const QLineSeries* self, const char* signal);
void QLineSeries_OnReceivers(const QLineSeries* self, intptr_t slot);
int QLineSeries_QBaseReceivers(const QLineSeries* self, const char* signal);
bool QLineSeries_IsSignalConnected(const QLineSeries* self, QMetaMethod* signal);
void QLineSeries_OnIsSignalConnected(const QLineSeries* self, intptr_t slot);
bool QLineSeries_QBaseIsSignalConnected(const QLineSeries* self, QMetaMethod* signal);
void QLineSeries_Delete(QLineSeries* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
