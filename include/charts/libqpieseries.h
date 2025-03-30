#pragma once
#ifndef SRC_CHARTSC_LIBQPIESERIES_H
#define SRC_CHARTSC_LIBQPIESERIES_H

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
typedef struct QChart QChart;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QMetaObject__Connection QMetaObject__Connection;
typedef struct QObject QObject;
typedef struct QPieSeries QPieSeries;
typedef struct QPieSlice QPieSlice;
typedef struct QThread QThread;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
#endif

QPieSeries* QPieSeries_new();
QPieSeries* QPieSeries_new2(QObject* parent);
QMetaObject* QPieSeries_MetaObject(const QPieSeries* self);
void* QPieSeries_Metacast(QPieSeries* self, const char* param1);
int QPieSeries_Metacall(QPieSeries* self, int param1, int param2, void** param3);
void QPieSeries_OnMetacall(QPieSeries* self, intptr_t slot);
int QPieSeries_QBaseMetacall(QPieSeries* self, int param1, int param2, void** param3);
libqt_string QPieSeries_Tr(const char* s);
int QPieSeries_Type(const QPieSeries* self);
void QPieSeries_OnType(const QPieSeries* self, intptr_t slot);
int QPieSeries_QBaseType(const QPieSeries* self);
bool QPieSeries_Append(QPieSeries* self, QPieSlice* slice);
bool QPieSeries_AppendWithSlices(QPieSeries* self, libqt_list /* of QPieSlice* */ slices);
QPieSeries* QPieSeries_OperatorShiftLeft(QPieSeries* self, QPieSlice* slice);
QPieSlice* QPieSeries_Append2(QPieSeries* self, libqt_string label, double value);
bool QPieSeries_Insert(QPieSeries* self, int index, QPieSlice* slice);
bool QPieSeries_Remove(QPieSeries* self, QPieSlice* slice);
bool QPieSeries_Take(QPieSeries* self, QPieSlice* slice);
void QPieSeries_Clear(QPieSeries* self);
libqt_list /* of QPieSlice* */ QPieSeries_Slices(const QPieSeries* self);
int QPieSeries_Count(const QPieSeries* self);
bool QPieSeries_IsEmpty(const QPieSeries* self);
double QPieSeries_Sum(const QPieSeries* self);
void QPieSeries_SetHoleSize(QPieSeries* self, double holeSize);
double QPieSeries_HoleSize(const QPieSeries* self);
void QPieSeries_SetHorizontalPosition(QPieSeries* self, double relativePosition);
double QPieSeries_HorizontalPosition(const QPieSeries* self);
void QPieSeries_SetVerticalPosition(QPieSeries* self, double relativePosition);
double QPieSeries_VerticalPosition(const QPieSeries* self);
void QPieSeries_SetPieSize(QPieSeries* self, double relativeSize);
double QPieSeries_PieSize(const QPieSeries* self);
void QPieSeries_SetPieStartAngle(QPieSeries* self, double startAngle);
double QPieSeries_PieStartAngle(const QPieSeries* self);
void QPieSeries_SetPieEndAngle(QPieSeries* self, double endAngle);
double QPieSeries_PieEndAngle(const QPieSeries* self);
void QPieSeries_SetLabelsVisible(QPieSeries* self);
void QPieSeries_SetLabelsPosition(QPieSeries* self, int position);
void QPieSeries_Added(QPieSeries* self, libqt_list /* of QPieSlice* */ slices);
void QPieSeries_Connect_Added(QPieSeries* self, intptr_t slot);
void QPieSeries_Removed(QPieSeries* self, libqt_list /* of QPieSlice* */ slices);
void QPieSeries_Connect_Removed(QPieSeries* self, intptr_t slot);
void QPieSeries_Clicked(QPieSeries* self, QPieSlice* slice);
void QPieSeries_Connect_Clicked(QPieSeries* self, intptr_t slot);
void QPieSeries_Hovered(QPieSeries* self, QPieSlice* slice, bool state);
void QPieSeries_Connect_Hovered(QPieSeries* self, intptr_t slot);
void QPieSeries_Pressed(QPieSeries* self, QPieSlice* slice);
void QPieSeries_Connect_Pressed(QPieSeries* self, intptr_t slot);
void QPieSeries_Released(QPieSeries* self, QPieSlice* slice);
void QPieSeries_Connect_Released(QPieSeries* self, intptr_t slot);
void QPieSeries_DoubleClicked(QPieSeries* self, QPieSlice* slice);
void QPieSeries_Connect_DoubleClicked(QPieSeries* self, intptr_t slot);
void QPieSeries_CountChanged(QPieSeries* self);
void QPieSeries_Connect_CountChanged(QPieSeries* self, intptr_t slot);
void QPieSeries_SumChanged(QPieSeries* self);
void QPieSeries_Connect_SumChanged(QPieSeries* self, intptr_t slot);
libqt_string QPieSeries_Tr2(const char* s, const char* c);
libqt_string QPieSeries_Tr3(const char* s, const char* c, int n);
void QPieSeries_SetLabelsVisible1(QPieSeries* self, bool visible);
bool QPieSeries_Event(QPieSeries* self, QEvent* event);
void QPieSeries_OnEvent(QPieSeries* self, intptr_t slot);
bool QPieSeries_QBaseEvent(QPieSeries* self, QEvent* event);
bool QPieSeries_EventFilter(QPieSeries* self, QObject* watched, QEvent* event);
void QPieSeries_OnEventFilter(QPieSeries* self, intptr_t slot);
bool QPieSeries_QBaseEventFilter(QPieSeries* self, QObject* watched, QEvent* event);
void QPieSeries_TimerEvent(QPieSeries* self, QTimerEvent* event);
void QPieSeries_OnTimerEvent(QPieSeries* self, intptr_t slot);
void QPieSeries_QBaseTimerEvent(QPieSeries* self, QTimerEvent* event);
void QPieSeries_ChildEvent(QPieSeries* self, QChildEvent* event);
void QPieSeries_OnChildEvent(QPieSeries* self, intptr_t slot);
void QPieSeries_QBaseChildEvent(QPieSeries* self, QChildEvent* event);
void QPieSeries_CustomEvent(QPieSeries* self, QEvent* event);
void QPieSeries_OnCustomEvent(QPieSeries* self, intptr_t slot);
void QPieSeries_QBaseCustomEvent(QPieSeries* self, QEvent* event);
void QPieSeries_ConnectNotify(QPieSeries* self, QMetaMethod* signal);
void QPieSeries_OnConnectNotify(QPieSeries* self, intptr_t slot);
void QPieSeries_QBaseConnectNotify(QPieSeries* self, QMetaMethod* signal);
void QPieSeries_DisconnectNotify(QPieSeries* self, QMetaMethod* signal);
void QPieSeries_OnDisconnectNotify(QPieSeries* self, intptr_t slot);
void QPieSeries_QBaseDisconnectNotify(QPieSeries* self, QMetaMethod* signal);
QObject* QPieSeries_Sender(const QPieSeries* self);
void QPieSeries_OnSender(const QPieSeries* self, intptr_t slot);
QObject* QPieSeries_QBaseSender(const QPieSeries* self);
int QPieSeries_SenderSignalIndex(const QPieSeries* self);
void QPieSeries_OnSenderSignalIndex(const QPieSeries* self, intptr_t slot);
int QPieSeries_QBaseSenderSignalIndex(const QPieSeries* self);
int QPieSeries_Receivers(const QPieSeries* self, const char* signal);
void QPieSeries_OnReceivers(const QPieSeries* self, intptr_t slot);
int QPieSeries_QBaseReceivers(const QPieSeries* self, const char* signal);
bool QPieSeries_IsSignalConnected(const QPieSeries* self, QMetaMethod* signal);
void QPieSeries_OnIsSignalConnected(const QPieSeries* self, intptr_t slot);
bool QPieSeries_QBaseIsSignalConnected(const QPieSeries* self, QMetaMethod* signal);
void QPieSeries_Delete(QPieSeries* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
