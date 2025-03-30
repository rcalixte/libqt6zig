#pragma once
#ifndef SRC_CHARTSC_LIBQAREASERIES_H
#define SRC_CHARTSC_LIBQAREASERIES_H

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
typedef struct QAreaSeries QAreaSeries;
typedef struct QBindingStorage QBindingStorage;
typedef struct QBrush QBrush;
typedef struct QChart QChart;
typedef struct QChildEvent QChildEvent;
typedef struct QColor QColor;
typedef struct QEvent QEvent;
typedef struct QFont QFont;
typedef struct QLineSeries QLineSeries;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QMetaObject__Connection QMetaObject__Connection;
typedef struct QObject QObject;
typedef struct QPen QPen;
typedef struct QPointF QPointF;
typedef struct QThread QThread;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
#endif

QAreaSeries* QAreaSeries_new();
QAreaSeries* QAreaSeries_new2(QLineSeries* upperSeries);
QAreaSeries* QAreaSeries_new3(QObject* parent);
QAreaSeries* QAreaSeries_new4(QLineSeries* upperSeries, QLineSeries* lowerSeries);
QMetaObject* QAreaSeries_MetaObject(const QAreaSeries* self);
void* QAreaSeries_Metacast(QAreaSeries* self, const char* param1);
int QAreaSeries_Metacall(QAreaSeries* self, int param1, int param2, void** param3);
void QAreaSeries_OnMetacall(QAreaSeries* self, intptr_t slot);
int QAreaSeries_QBaseMetacall(QAreaSeries* self, int param1, int param2, void** param3);
libqt_string QAreaSeries_Tr(const char* s);
int QAreaSeries_Type(const QAreaSeries* self);
void QAreaSeries_OnType(const QAreaSeries* self, intptr_t slot);
int QAreaSeries_QBaseType(const QAreaSeries* self);
void QAreaSeries_SetUpperSeries(QAreaSeries* self, QLineSeries* series);
QLineSeries* QAreaSeries_UpperSeries(const QAreaSeries* self);
void QAreaSeries_SetLowerSeries(QAreaSeries* self, QLineSeries* series);
QLineSeries* QAreaSeries_LowerSeries(const QAreaSeries* self);
void QAreaSeries_SetPen(QAreaSeries* self, QPen* pen);
QPen* QAreaSeries_Pen(const QAreaSeries* self);
void QAreaSeries_SetBrush(QAreaSeries* self, QBrush* brush);
QBrush* QAreaSeries_Brush(const QAreaSeries* self);
void QAreaSeries_SetColor(QAreaSeries* self, QColor* color);
QColor* QAreaSeries_Color(const QAreaSeries* self);
void QAreaSeries_SetBorderColor(QAreaSeries* self, QColor* color);
QColor* QAreaSeries_BorderColor(const QAreaSeries* self);
void QAreaSeries_SetPointsVisible(QAreaSeries* self);
bool QAreaSeries_PointsVisible(const QAreaSeries* self);
void QAreaSeries_SetPointLabelsFormat(QAreaSeries* self, libqt_string format);
libqt_string QAreaSeries_PointLabelsFormat(const QAreaSeries* self);
void QAreaSeries_SetPointLabelsVisible(QAreaSeries* self);
bool QAreaSeries_PointLabelsVisible(const QAreaSeries* self);
void QAreaSeries_SetPointLabelsFont(QAreaSeries* self, QFont* font);
QFont* QAreaSeries_PointLabelsFont(const QAreaSeries* self);
void QAreaSeries_SetPointLabelsColor(QAreaSeries* self, QColor* color);
QColor* QAreaSeries_PointLabelsColor(const QAreaSeries* self);
void QAreaSeries_SetPointLabelsClipping(QAreaSeries* self);
bool QAreaSeries_PointLabelsClipping(const QAreaSeries* self);
void QAreaSeries_Clicked(QAreaSeries* self, QPointF* point);
void QAreaSeries_Connect_Clicked(QAreaSeries* self, intptr_t slot);
void QAreaSeries_Hovered(QAreaSeries* self, QPointF* point, bool state);
void QAreaSeries_Connect_Hovered(QAreaSeries* self, intptr_t slot);
void QAreaSeries_Pressed(QAreaSeries* self, QPointF* point);
void QAreaSeries_Connect_Pressed(QAreaSeries* self, intptr_t slot);
void QAreaSeries_Released(QAreaSeries* self, QPointF* point);
void QAreaSeries_Connect_Released(QAreaSeries* self, intptr_t slot);
void QAreaSeries_DoubleClicked(QAreaSeries* self, QPointF* point);
void QAreaSeries_Connect_DoubleClicked(QAreaSeries* self, intptr_t slot);
void QAreaSeries_Selected(QAreaSeries* self);
void QAreaSeries_Connect_Selected(QAreaSeries* self, intptr_t slot);
void QAreaSeries_ColorChanged(QAreaSeries* self, QColor* color);
void QAreaSeries_Connect_ColorChanged(QAreaSeries* self, intptr_t slot);
void QAreaSeries_BorderColorChanged(QAreaSeries* self, QColor* color);
void QAreaSeries_Connect_BorderColorChanged(QAreaSeries* self, intptr_t slot);
void QAreaSeries_PointLabelsFormatChanged(QAreaSeries* self, libqt_string format);
void QAreaSeries_Connect_PointLabelsFormatChanged(QAreaSeries* self, intptr_t slot);
void QAreaSeries_PointLabelsVisibilityChanged(QAreaSeries* self, bool visible);
void QAreaSeries_Connect_PointLabelsVisibilityChanged(QAreaSeries* self, intptr_t slot);
void QAreaSeries_PointLabelsFontChanged(QAreaSeries* self, QFont* font);
void QAreaSeries_Connect_PointLabelsFontChanged(QAreaSeries* self, intptr_t slot);
void QAreaSeries_PointLabelsColorChanged(QAreaSeries* self, QColor* color);
void QAreaSeries_Connect_PointLabelsColorChanged(QAreaSeries* self, intptr_t slot);
void QAreaSeries_PointLabelsClippingChanged(QAreaSeries* self, bool clipping);
void QAreaSeries_Connect_PointLabelsClippingChanged(QAreaSeries* self, intptr_t slot);
libqt_string QAreaSeries_Tr2(const char* s, const char* c);
libqt_string QAreaSeries_Tr3(const char* s, const char* c, int n);
void QAreaSeries_SetPointsVisible1(QAreaSeries* self, bool visible);
void QAreaSeries_SetPointLabelsVisible1(QAreaSeries* self, bool visible);
void QAreaSeries_SetPointLabelsClipping1(QAreaSeries* self, bool enabled);
bool QAreaSeries_Event(QAreaSeries* self, QEvent* event);
void QAreaSeries_OnEvent(QAreaSeries* self, intptr_t slot);
bool QAreaSeries_QBaseEvent(QAreaSeries* self, QEvent* event);
bool QAreaSeries_EventFilter(QAreaSeries* self, QObject* watched, QEvent* event);
void QAreaSeries_OnEventFilter(QAreaSeries* self, intptr_t slot);
bool QAreaSeries_QBaseEventFilter(QAreaSeries* self, QObject* watched, QEvent* event);
void QAreaSeries_TimerEvent(QAreaSeries* self, QTimerEvent* event);
void QAreaSeries_OnTimerEvent(QAreaSeries* self, intptr_t slot);
void QAreaSeries_QBaseTimerEvent(QAreaSeries* self, QTimerEvent* event);
void QAreaSeries_ChildEvent(QAreaSeries* self, QChildEvent* event);
void QAreaSeries_OnChildEvent(QAreaSeries* self, intptr_t slot);
void QAreaSeries_QBaseChildEvent(QAreaSeries* self, QChildEvent* event);
void QAreaSeries_CustomEvent(QAreaSeries* self, QEvent* event);
void QAreaSeries_OnCustomEvent(QAreaSeries* self, intptr_t slot);
void QAreaSeries_QBaseCustomEvent(QAreaSeries* self, QEvent* event);
void QAreaSeries_ConnectNotify(QAreaSeries* self, QMetaMethod* signal);
void QAreaSeries_OnConnectNotify(QAreaSeries* self, intptr_t slot);
void QAreaSeries_QBaseConnectNotify(QAreaSeries* self, QMetaMethod* signal);
void QAreaSeries_DisconnectNotify(QAreaSeries* self, QMetaMethod* signal);
void QAreaSeries_OnDisconnectNotify(QAreaSeries* self, intptr_t slot);
void QAreaSeries_QBaseDisconnectNotify(QAreaSeries* self, QMetaMethod* signal);
QObject* QAreaSeries_Sender(const QAreaSeries* self);
void QAreaSeries_OnSender(const QAreaSeries* self, intptr_t slot);
QObject* QAreaSeries_QBaseSender(const QAreaSeries* self);
int QAreaSeries_SenderSignalIndex(const QAreaSeries* self);
void QAreaSeries_OnSenderSignalIndex(const QAreaSeries* self, intptr_t slot);
int QAreaSeries_QBaseSenderSignalIndex(const QAreaSeries* self);
int QAreaSeries_Receivers(const QAreaSeries* self, const char* signal);
void QAreaSeries_OnReceivers(const QAreaSeries* self, intptr_t slot);
int QAreaSeries_QBaseReceivers(const QAreaSeries* self, const char* signal);
bool QAreaSeries_IsSignalConnected(const QAreaSeries* self, QMetaMethod* signal);
void QAreaSeries_OnIsSignalConnected(const QAreaSeries* self, intptr_t slot);
bool QAreaSeries_QBaseIsSignalConnected(const QAreaSeries* self, QMetaMethod* signal);
void QAreaSeries_Delete(QAreaSeries* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
