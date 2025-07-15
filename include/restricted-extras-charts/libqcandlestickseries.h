#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_CHARTSC_LIBQCANDLESTICKSERIES_H
#define SRC_RESTRICTED_EXTRAS_CHARTSC_LIBQCANDLESTICKSERIES_H

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
typedef struct QAbstractSeries QAbstractSeries;
typedef struct QBrush QBrush;
typedef struct QCandlestickSeries QCandlestickSeries;
typedef struct QCandlestickSet QCandlestickSet;
typedef struct QChildEvent QChildEvent;
typedef struct QColor QColor;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QPen QPen;
typedef struct QTimerEvent QTimerEvent;
#endif

QCandlestickSeries* QCandlestickSeries_new();
QCandlestickSeries* QCandlestickSeries_new2(QObject* parent);
QMetaObject* QCandlestickSeries_MetaObject(const QCandlestickSeries* self);
void* QCandlestickSeries_Metacast(QCandlestickSeries* self, const char* param1);
int QCandlestickSeries_Metacall(QCandlestickSeries* self, int param1, int param2, void** param3);
void QCandlestickSeries_OnMetacall(QCandlestickSeries* self, intptr_t slot);
int QCandlestickSeries_QBaseMetacall(QCandlestickSeries* self, int param1, int param2, void** param3);
libqt_string QCandlestickSeries_Tr(const char* s);
bool QCandlestickSeries_Append(QCandlestickSeries* self, QCandlestickSet* set);
bool QCandlestickSeries_Remove(QCandlestickSeries* self, QCandlestickSet* set);
bool QCandlestickSeries_Append2(QCandlestickSeries* self, const libqt_list /* of QCandlestickSet* */ sets);
bool QCandlestickSeries_Remove2(QCandlestickSeries* self, const libqt_list /* of QCandlestickSet* */ sets);
bool QCandlestickSeries_Insert(QCandlestickSeries* self, int index, QCandlestickSet* set);
bool QCandlestickSeries_Take(QCandlestickSeries* self, QCandlestickSet* set);
void QCandlestickSeries_Clear(QCandlestickSeries* self);
libqt_list /* of QCandlestickSet* */ QCandlestickSeries_Sets(const QCandlestickSeries* self);
int QCandlestickSeries_Count(const QCandlestickSeries* self);
int QCandlestickSeries_Type(const QCandlestickSeries* self);
void QCandlestickSeries_OnType(const QCandlestickSeries* self, intptr_t slot);
int QCandlestickSeries_QBaseType(const QCandlestickSeries* self);
void QCandlestickSeries_SetMaximumColumnWidth(QCandlestickSeries* self, double maximumColumnWidth);
double QCandlestickSeries_MaximumColumnWidth(const QCandlestickSeries* self);
void QCandlestickSeries_SetMinimumColumnWidth(QCandlestickSeries* self, double minimumColumnWidth);
double QCandlestickSeries_MinimumColumnWidth(const QCandlestickSeries* self);
void QCandlestickSeries_SetBodyWidth(QCandlestickSeries* self, double bodyWidth);
double QCandlestickSeries_BodyWidth(const QCandlestickSeries* self);
void QCandlestickSeries_SetBodyOutlineVisible(QCandlestickSeries* self, bool bodyOutlineVisible);
bool QCandlestickSeries_BodyOutlineVisible(const QCandlestickSeries* self);
void QCandlestickSeries_SetCapsWidth(QCandlestickSeries* self, double capsWidth);
double QCandlestickSeries_CapsWidth(const QCandlestickSeries* self);
void QCandlestickSeries_SetCapsVisible(QCandlestickSeries* self, bool capsVisible);
bool QCandlestickSeries_CapsVisible(const QCandlestickSeries* self);
void QCandlestickSeries_SetIncreasingColor(QCandlestickSeries* self, const QColor* increasingColor);
QColor* QCandlestickSeries_IncreasingColor(const QCandlestickSeries* self);
void QCandlestickSeries_SetDecreasingColor(QCandlestickSeries* self, const QColor* decreasingColor);
QColor* QCandlestickSeries_DecreasingColor(const QCandlestickSeries* self);
void QCandlestickSeries_SetBrush(QCandlestickSeries* self, const QBrush* brush);
QBrush* QCandlestickSeries_Brush(const QCandlestickSeries* self);
void QCandlestickSeries_SetPen(QCandlestickSeries* self, const QPen* pen);
QPen* QCandlestickSeries_Pen(const QCandlestickSeries* self);
void QCandlestickSeries_Clicked(QCandlestickSeries* self, QCandlestickSet* set);
void QCandlestickSeries_Connect_Clicked(QCandlestickSeries* self, intptr_t slot);
void QCandlestickSeries_Hovered(QCandlestickSeries* self, bool status, QCandlestickSet* set);
void QCandlestickSeries_Connect_Hovered(QCandlestickSeries* self, intptr_t slot);
void QCandlestickSeries_Pressed(QCandlestickSeries* self, QCandlestickSet* set);
void QCandlestickSeries_Connect_Pressed(QCandlestickSeries* self, intptr_t slot);
void QCandlestickSeries_Released(QCandlestickSeries* self, QCandlestickSet* set);
void QCandlestickSeries_Connect_Released(QCandlestickSeries* self, intptr_t slot);
void QCandlestickSeries_DoubleClicked(QCandlestickSeries* self, QCandlestickSet* set);
void QCandlestickSeries_Connect_DoubleClicked(QCandlestickSeries* self, intptr_t slot);
void QCandlestickSeries_CandlestickSetsAdded(QCandlestickSeries* self, const libqt_list /* of QCandlestickSet* */ sets);
void QCandlestickSeries_Connect_CandlestickSetsAdded(QCandlestickSeries* self, intptr_t slot);
void QCandlestickSeries_CandlestickSetsRemoved(QCandlestickSeries* self, const libqt_list /* of QCandlestickSet* */ sets);
void QCandlestickSeries_Connect_CandlestickSetsRemoved(QCandlestickSeries* self, intptr_t slot);
void QCandlestickSeries_CountChanged(QCandlestickSeries* self);
void QCandlestickSeries_Connect_CountChanged(QCandlestickSeries* self, intptr_t slot);
void QCandlestickSeries_MaximumColumnWidthChanged(QCandlestickSeries* self);
void QCandlestickSeries_Connect_MaximumColumnWidthChanged(QCandlestickSeries* self, intptr_t slot);
void QCandlestickSeries_MinimumColumnWidthChanged(QCandlestickSeries* self);
void QCandlestickSeries_Connect_MinimumColumnWidthChanged(QCandlestickSeries* self, intptr_t slot);
void QCandlestickSeries_BodyWidthChanged(QCandlestickSeries* self);
void QCandlestickSeries_Connect_BodyWidthChanged(QCandlestickSeries* self, intptr_t slot);
void QCandlestickSeries_BodyOutlineVisibilityChanged(QCandlestickSeries* self);
void QCandlestickSeries_Connect_BodyOutlineVisibilityChanged(QCandlestickSeries* self, intptr_t slot);
void QCandlestickSeries_CapsWidthChanged(QCandlestickSeries* self);
void QCandlestickSeries_Connect_CapsWidthChanged(QCandlestickSeries* self, intptr_t slot);
void QCandlestickSeries_CapsVisibilityChanged(QCandlestickSeries* self);
void QCandlestickSeries_Connect_CapsVisibilityChanged(QCandlestickSeries* self, intptr_t slot);
void QCandlestickSeries_IncreasingColorChanged(QCandlestickSeries* self);
void QCandlestickSeries_Connect_IncreasingColorChanged(QCandlestickSeries* self, intptr_t slot);
void QCandlestickSeries_DecreasingColorChanged(QCandlestickSeries* self);
void QCandlestickSeries_Connect_DecreasingColorChanged(QCandlestickSeries* self, intptr_t slot);
void QCandlestickSeries_BrushChanged(QCandlestickSeries* self);
void QCandlestickSeries_Connect_BrushChanged(QCandlestickSeries* self, intptr_t slot);
void QCandlestickSeries_PenChanged(QCandlestickSeries* self);
void QCandlestickSeries_Connect_PenChanged(QCandlestickSeries* self, intptr_t slot);
libqt_string QCandlestickSeries_Tr2(const char* s, const char* c);
libqt_string QCandlestickSeries_Tr3(const char* s, const char* c, int n);
bool QCandlestickSeries_Event(QCandlestickSeries* self, QEvent* event);
void QCandlestickSeries_OnEvent(QCandlestickSeries* self, intptr_t slot);
bool QCandlestickSeries_QBaseEvent(QCandlestickSeries* self, QEvent* event);
bool QCandlestickSeries_EventFilter(QCandlestickSeries* self, QObject* watched, QEvent* event);
void QCandlestickSeries_OnEventFilter(QCandlestickSeries* self, intptr_t slot);
bool QCandlestickSeries_QBaseEventFilter(QCandlestickSeries* self, QObject* watched, QEvent* event);
void QCandlestickSeries_TimerEvent(QCandlestickSeries* self, QTimerEvent* event);
void QCandlestickSeries_OnTimerEvent(QCandlestickSeries* self, intptr_t slot);
void QCandlestickSeries_QBaseTimerEvent(QCandlestickSeries* self, QTimerEvent* event);
void QCandlestickSeries_ChildEvent(QCandlestickSeries* self, QChildEvent* event);
void QCandlestickSeries_OnChildEvent(QCandlestickSeries* self, intptr_t slot);
void QCandlestickSeries_QBaseChildEvent(QCandlestickSeries* self, QChildEvent* event);
void QCandlestickSeries_CustomEvent(QCandlestickSeries* self, QEvent* event);
void QCandlestickSeries_OnCustomEvent(QCandlestickSeries* self, intptr_t slot);
void QCandlestickSeries_QBaseCustomEvent(QCandlestickSeries* self, QEvent* event);
void QCandlestickSeries_ConnectNotify(QCandlestickSeries* self, const QMetaMethod* signal);
void QCandlestickSeries_OnConnectNotify(QCandlestickSeries* self, intptr_t slot);
void QCandlestickSeries_QBaseConnectNotify(QCandlestickSeries* self, const QMetaMethod* signal);
void QCandlestickSeries_DisconnectNotify(QCandlestickSeries* self, const QMetaMethod* signal);
void QCandlestickSeries_OnDisconnectNotify(QCandlestickSeries* self, intptr_t slot);
void QCandlestickSeries_QBaseDisconnectNotify(QCandlestickSeries* self, const QMetaMethod* signal);
QObject* QCandlestickSeries_Sender(const QCandlestickSeries* self);
void QCandlestickSeries_OnSender(const QCandlestickSeries* self, intptr_t slot);
QObject* QCandlestickSeries_QBaseSender(const QCandlestickSeries* self);
int QCandlestickSeries_SenderSignalIndex(const QCandlestickSeries* self);
void QCandlestickSeries_OnSenderSignalIndex(const QCandlestickSeries* self, intptr_t slot);
int QCandlestickSeries_QBaseSenderSignalIndex(const QCandlestickSeries* self);
int QCandlestickSeries_Receivers(const QCandlestickSeries* self, const char* signal);
void QCandlestickSeries_OnReceivers(const QCandlestickSeries* self, intptr_t slot);
int QCandlestickSeries_QBaseReceivers(const QCandlestickSeries* self, const char* signal);
bool QCandlestickSeries_IsSignalConnected(const QCandlestickSeries* self, const QMetaMethod* signal);
void QCandlestickSeries_OnIsSignalConnected(const QCandlestickSeries* self, intptr_t slot);
bool QCandlestickSeries_QBaseIsSignalConnected(const QCandlestickSeries* self, const QMetaMethod* signal);
void QCandlestickSeries_Delete(QCandlestickSeries* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
