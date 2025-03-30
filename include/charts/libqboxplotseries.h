#pragma once
#ifndef SRC_CHARTSC_LIBQBOXPLOTSERIES_H
#define SRC_CHARTSC_LIBQBOXPLOTSERIES_H

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
typedef struct QBoxPlotSeries QBoxPlotSeries;
typedef struct QBoxSet QBoxSet;
typedef struct QBrush QBrush;
typedef struct QChart QChart;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QMetaObject__Connection QMetaObject__Connection;
typedef struct QObject QObject;
typedef struct QPen QPen;
typedef struct QThread QThread;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
#endif

QBoxPlotSeries* QBoxPlotSeries_new();
QBoxPlotSeries* QBoxPlotSeries_new2(QObject* parent);
QMetaObject* QBoxPlotSeries_MetaObject(const QBoxPlotSeries* self);
void* QBoxPlotSeries_Metacast(QBoxPlotSeries* self, const char* param1);
int QBoxPlotSeries_Metacall(QBoxPlotSeries* self, int param1, int param2, void** param3);
void QBoxPlotSeries_OnMetacall(QBoxPlotSeries* self, intptr_t slot);
int QBoxPlotSeries_QBaseMetacall(QBoxPlotSeries* self, int param1, int param2, void** param3);
libqt_string QBoxPlotSeries_Tr(const char* s);
bool QBoxPlotSeries_Append(QBoxPlotSeries* self, QBoxSet* box);
bool QBoxPlotSeries_Remove(QBoxPlotSeries* self, QBoxSet* box);
bool QBoxPlotSeries_Take(QBoxPlotSeries* self, QBoxSet* box);
bool QBoxPlotSeries_AppendWithBoxes(QBoxPlotSeries* self, libqt_list /* of QBoxSet* */ boxes);
bool QBoxPlotSeries_Insert(QBoxPlotSeries* self, int index, QBoxSet* box);
int QBoxPlotSeries_Count(const QBoxPlotSeries* self);
libqt_list /* of QBoxSet* */ QBoxPlotSeries_BoxSets(const QBoxPlotSeries* self);
void QBoxPlotSeries_Clear(QBoxPlotSeries* self);
int QBoxPlotSeries_Type(const QBoxPlotSeries* self);
void QBoxPlotSeries_OnType(const QBoxPlotSeries* self, intptr_t slot);
int QBoxPlotSeries_QBaseType(const QBoxPlotSeries* self);
void QBoxPlotSeries_SetBoxOutlineVisible(QBoxPlotSeries* self, bool visible);
bool QBoxPlotSeries_BoxOutlineVisible(QBoxPlotSeries* self);
void QBoxPlotSeries_SetBoxWidth(QBoxPlotSeries* self, double width);
double QBoxPlotSeries_BoxWidth(QBoxPlotSeries* self);
void QBoxPlotSeries_SetBrush(QBoxPlotSeries* self, QBrush* brush);
QBrush* QBoxPlotSeries_Brush(const QBoxPlotSeries* self);
void QBoxPlotSeries_SetPen(QBoxPlotSeries* self, QPen* pen);
QPen* QBoxPlotSeries_Pen(const QBoxPlotSeries* self);
void QBoxPlotSeries_Clicked(QBoxPlotSeries* self, QBoxSet* boxset);
void QBoxPlotSeries_Connect_Clicked(QBoxPlotSeries* self, intptr_t slot);
void QBoxPlotSeries_Hovered(QBoxPlotSeries* self, bool status, QBoxSet* boxset);
void QBoxPlotSeries_Connect_Hovered(QBoxPlotSeries* self, intptr_t slot);
void QBoxPlotSeries_Pressed(QBoxPlotSeries* self, QBoxSet* boxset);
void QBoxPlotSeries_Connect_Pressed(QBoxPlotSeries* self, intptr_t slot);
void QBoxPlotSeries_Released(QBoxPlotSeries* self, QBoxSet* boxset);
void QBoxPlotSeries_Connect_Released(QBoxPlotSeries* self, intptr_t slot);
void QBoxPlotSeries_DoubleClicked(QBoxPlotSeries* self, QBoxSet* boxset);
void QBoxPlotSeries_Connect_DoubleClicked(QBoxPlotSeries* self, intptr_t slot);
void QBoxPlotSeries_CountChanged(QBoxPlotSeries* self);
void QBoxPlotSeries_Connect_CountChanged(QBoxPlotSeries* self, intptr_t slot);
void QBoxPlotSeries_PenChanged(QBoxPlotSeries* self);
void QBoxPlotSeries_Connect_PenChanged(QBoxPlotSeries* self, intptr_t slot);
void QBoxPlotSeries_BrushChanged(QBoxPlotSeries* self);
void QBoxPlotSeries_Connect_BrushChanged(QBoxPlotSeries* self, intptr_t slot);
void QBoxPlotSeries_BoxOutlineVisibilityChanged(QBoxPlotSeries* self);
void QBoxPlotSeries_Connect_BoxOutlineVisibilityChanged(QBoxPlotSeries* self, intptr_t slot);
void QBoxPlotSeries_BoxWidthChanged(QBoxPlotSeries* self);
void QBoxPlotSeries_Connect_BoxWidthChanged(QBoxPlotSeries* self, intptr_t slot);
void QBoxPlotSeries_BoxsetsAdded(QBoxPlotSeries* self, libqt_list /* of QBoxSet* */ sets);
void QBoxPlotSeries_Connect_BoxsetsAdded(QBoxPlotSeries* self, intptr_t slot);
void QBoxPlotSeries_BoxsetsRemoved(QBoxPlotSeries* self, libqt_list /* of QBoxSet* */ sets);
void QBoxPlotSeries_Connect_BoxsetsRemoved(QBoxPlotSeries* self, intptr_t slot);
libqt_string QBoxPlotSeries_Tr2(const char* s, const char* c);
libqt_string QBoxPlotSeries_Tr3(const char* s, const char* c, int n);
bool QBoxPlotSeries_Event(QBoxPlotSeries* self, QEvent* event);
void QBoxPlotSeries_OnEvent(QBoxPlotSeries* self, intptr_t slot);
bool QBoxPlotSeries_QBaseEvent(QBoxPlotSeries* self, QEvent* event);
bool QBoxPlotSeries_EventFilter(QBoxPlotSeries* self, QObject* watched, QEvent* event);
void QBoxPlotSeries_OnEventFilter(QBoxPlotSeries* self, intptr_t slot);
bool QBoxPlotSeries_QBaseEventFilter(QBoxPlotSeries* self, QObject* watched, QEvent* event);
void QBoxPlotSeries_TimerEvent(QBoxPlotSeries* self, QTimerEvent* event);
void QBoxPlotSeries_OnTimerEvent(QBoxPlotSeries* self, intptr_t slot);
void QBoxPlotSeries_QBaseTimerEvent(QBoxPlotSeries* self, QTimerEvent* event);
void QBoxPlotSeries_ChildEvent(QBoxPlotSeries* self, QChildEvent* event);
void QBoxPlotSeries_OnChildEvent(QBoxPlotSeries* self, intptr_t slot);
void QBoxPlotSeries_QBaseChildEvent(QBoxPlotSeries* self, QChildEvent* event);
void QBoxPlotSeries_CustomEvent(QBoxPlotSeries* self, QEvent* event);
void QBoxPlotSeries_OnCustomEvent(QBoxPlotSeries* self, intptr_t slot);
void QBoxPlotSeries_QBaseCustomEvent(QBoxPlotSeries* self, QEvent* event);
void QBoxPlotSeries_ConnectNotify(QBoxPlotSeries* self, QMetaMethod* signal);
void QBoxPlotSeries_OnConnectNotify(QBoxPlotSeries* self, intptr_t slot);
void QBoxPlotSeries_QBaseConnectNotify(QBoxPlotSeries* self, QMetaMethod* signal);
void QBoxPlotSeries_DisconnectNotify(QBoxPlotSeries* self, QMetaMethod* signal);
void QBoxPlotSeries_OnDisconnectNotify(QBoxPlotSeries* self, intptr_t slot);
void QBoxPlotSeries_QBaseDisconnectNotify(QBoxPlotSeries* self, QMetaMethod* signal);
QObject* QBoxPlotSeries_Sender(const QBoxPlotSeries* self);
void QBoxPlotSeries_OnSender(const QBoxPlotSeries* self, intptr_t slot);
QObject* QBoxPlotSeries_QBaseSender(const QBoxPlotSeries* self);
int QBoxPlotSeries_SenderSignalIndex(const QBoxPlotSeries* self);
void QBoxPlotSeries_OnSenderSignalIndex(const QBoxPlotSeries* self, intptr_t slot);
int QBoxPlotSeries_QBaseSenderSignalIndex(const QBoxPlotSeries* self);
int QBoxPlotSeries_Receivers(const QBoxPlotSeries* self, const char* signal);
void QBoxPlotSeries_OnReceivers(const QBoxPlotSeries* self, intptr_t slot);
int QBoxPlotSeries_QBaseReceivers(const QBoxPlotSeries* self, const char* signal);
bool QBoxPlotSeries_IsSignalConnected(const QBoxPlotSeries* self, QMetaMethod* signal);
void QBoxPlotSeries_OnIsSignalConnected(const QBoxPlotSeries* self, intptr_t slot);
bool QBoxPlotSeries_QBaseIsSignalConnected(const QBoxPlotSeries* self, QMetaMethod* signal);
void QBoxPlotSeries_Delete(QBoxPlotSeries* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
