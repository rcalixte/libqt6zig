#pragma once
#ifndef SRC_CHARTSC_LIBQBARSET_H
#define SRC_CHARTSC_LIBQBARSET_H

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
typedef struct QAnyStringView QAnyStringView;
typedef struct QBarSet QBarSet;
typedef struct QBindingStorage QBindingStorage;
typedef struct QBrush QBrush;
typedef struct QChildEvent QChildEvent;
typedef struct QColor QColor;
typedef struct QEvent QEvent;
typedef struct QFont QFont;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QMetaObject__Connection QMetaObject__Connection;
typedef struct QObject QObject;
typedef struct QPen QPen;
typedef struct QThread QThread;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
#endif

QBarSet* QBarSet_new(libqt_string label);
QBarSet* QBarSet_new2(libqt_string label, QObject* parent);
QMetaObject* QBarSet_MetaObject(const QBarSet* self);
void* QBarSet_Metacast(QBarSet* self, const char* param1);
int QBarSet_Metacall(QBarSet* self, int param1, int param2, void** param3);
void QBarSet_OnMetacall(QBarSet* self, intptr_t slot);
int QBarSet_QBaseMetacall(QBarSet* self, int param1, int param2, void** param3);
libqt_string QBarSet_Tr(const char* s);
void QBarSet_SetLabel(QBarSet* self, libqt_string label);
libqt_string QBarSet_Label(const QBarSet* self);
void QBarSet_Append(QBarSet* self, const double value);
void QBarSet_AppendWithValues(QBarSet* self, libqt_list /* of double */ values);
QBarSet* QBarSet_OperatorShiftLeft(QBarSet* self, const double* value);
void QBarSet_Insert(QBarSet* self, const int index, const double value);
void QBarSet_Remove(QBarSet* self, const int index);
void QBarSet_Replace(QBarSet* self, const int index, const double value);
double QBarSet_At(const QBarSet* self, const int index);
double QBarSet_OperatorSubscript(const QBarSet* self, const int index);
int QBarSet_Count(const QBarSet* self);
double QBarSet_Sum(const QBarSet* self);
void QBarSet_SetPen(QBarSet* self, QPen* pen);
QPen* QBarSet_Pen(const QBarSet* self);
void QBarSet_SetBrush(QBarSet* self, QBrush* brush);
QBrush* QBarSet_Brush(const QBarSet* self);
void QBarSet_SetLabelBrush(QBarSet* self, QBrush* brush);
QBrush* QBarSet_LabelBrush(const QBarSet* self);
void QBarSet_SetLabelFont(QBarSet* self, QFont* font);
QFont* QBarSet_LabelFont(const QBarSet* self);
QColor* QBarSet_Color(QBarSet* self);
void QBarSet_SetColor(QBarSet* self, QColor* color);
QColor* QBarSet_BorderColor(QBarSet* self);
void QBarSet_SetBorderColor(QBarSet* self, QColor* color);
QColor* QBarSet_LabelColor(QBarSet* self);
void QBarSet_SetLabelColor(QBarSet* self, QColor* color);
QColor* QBarSet_SelectedColor(const QBarSet* self);
void QBarSet_SetSelectedColor(QBarSet* self, QColor* color);
bool QBarSet_IsBarSelected(const QBarSet* self, int index);
void QBarSet_SelectBar(QBarSet* self, int index);
void QBarSet_DeselectBar(QBarSet* self, int index);
void QBarSet_SetBarSelected(QBarSet* self, int index, bool selected);
void QBarSet_SelectAllBars(QBarSet* self);
void QBarSet_DeselectAllBars(QBarSet* self);
void QBarSet_SelectBars(QBarSet* self, libqt_list /* of int */ indexes);
void QBarSet_DeselectBars(QBarSet* self, libqt_list /* of int */ indexes);
void QBarSet_ToggleSelection(QBarSet* self, libqt_list /* of int */ indexes);
libqt_list /* of int */ QBarSet_SelectedBars(const QBarSet* self);
void QBarSet_Clicked(QBarSet* self, int index);
void QBarSet_Connect_Clicked(QBarSet* self, intptr_t slot);
void QBarSet_Hovered(QBarSet* self, bool status, int index);
void QBarSet_Connect_Hovered(QBarSet* self, intptr_t slot);
void QBarSet_Pressed(QBarSet* self, int index);
void QBarSet_Connect_Pressed(QBarSet* self, intptr_t slot);
void QBarSet_Released(QBarSet* self, int index);
void QBarSet_Connect_Released(QBarSet* self, intptr_t slot);
void QBarSet_DoubleClicked(QBarSet* self, int index);
void QBarSet_Connect_DoubleClicked(QBarSet* self, intptr_t slot);
void QBarSet_PenChanged(QBarSet* self);
void QBarSet_Connect_PenChanged(QBarSet* self, intptr_t slot);
void QBarSet_BrushChanged(QBarSet* self);
void QBarSet_Connect_BrushChanged(QBarSet* self, intptr_t slot);
void QBarSet_LabelChanged(QBarSet* self);
void QBarSet_Connect_LabelChanged(QBarSet* self, intptr_t slot);
void QBarSet_LabelBrushChanged(QBarSet* self);
void QBarSet_Connect_LabelBrushChanged(QBarSet* self, intptr_t slot);
void QBarSet_LabelFontChanged(QBarSet* self);
void QBarSet_Connect_LabelFontChanged(QBarSet* self, intptr_t slot);
void QBarSet_ColorChanged(QBarSet* self, QColor* color);
void QBarSet_Connect_ColorChanged(QBarSet* self, intptr_t slot);
void QBarSet_BorderColorChanged(QBarSet* self, QColor* color);
void QBarSet_Connect_BorderColorChanged(QBarSet* self, intptr_t slot);
void QBarSet_LabelColorChanged(QBarSet* self, QColor* color);
void QBarSet_Connect_LabelColorChanged(QBarSet* self, intptr_t slot);
void QBarSet_SelectedColorChanged(QBarSet* self, QColor* color);
void QBarSet_Connect_SelectedColorChanged(QBarSet* self, intptr_t slot);
void QBarSet_ValuesAdded(QBarSet* self, int index, int count);
void QBarSet_Connect_ValuesAdded(QBarSet* self, intptr_t slot);
void QBarSet_ValuesRemoved(QBarSet* self, int index, int count);
void QBarSet_Connect_ValuesRemoved(QBarSet* self, intptr_t slot);
void QBarSet_ValueChanged(QBarSet* self, int index);
void QBarSet_Connect_ValueChanged(QBarSet* self, intptr_t slot);
void QBarSet_SelectedBarsChanged(QBarSet* self, libqt_list /* of int */ indexes);
void QBarSet_Connect_SelectedBarsChanged(QBarSet* self, intptr_t slot);
libqt_string QBarSet_Tr2(const char* s, const char* c);
libqt_string QBarSet_Tr3(const char* s, const char* c, int n);
void QBarSet_Remove2(QBarSet* self, const int index, const int count);
bool QBarSet_Event(QBarSet* self, QEvent* event);
void QBarSet_OnEvent(QBarSet* self, intptr_t slot);
bool QBarSet_QBaseEvent(QBarSet* self, QEvent* event);
bool QBarSet_EventFilter(QBarSet* self, QObject* watched, QEvent* event);
void QBarSet_OnEventFilter(QBarSet* self, intptr_t slot);
bool QBarSet_QBaseEventFilter(QBarSet* self, QObject* watched, QEvent* event);
void QBarSet_TimerEvent(QBarSet* self, QTimerEvent* event);
void QBarSet_OnTimerEvent(QBarSet* self, intptr_t slot);
void QBarSet_QBaseTimerEvent(QBarSet* self, QTimerEvent* event);
void QBarSet_ChildEvent(QBarSet* self, QChildEvent* event);
void QBarSet_OnChildEvent(QBarSet* self, intptr_t slot);
void QBarSet_QBaseChildEvent(QBarSet* self, QChildEvent* event);
void QBarSet_CustomEvent(QBarSet* self, QEvent* event);
void QBarSet_OnCustomEvent(QBarSet* self, intptr_t slot);
void QBarSet_QBaseCustomEvent(QBarSet* self, QEvent* event);
void QBarSet_ConnectNotify(QBarSet* self, QMetaMethod* signal);
void QBarSet_OnConnectNotify(QBarSet* self, intptr_t slot);
void QBarSet_QBaseConnectNotify(QBarSet* self, QMetaMethod* signal);
void QBarSet_DisconnectNotify(QBarSet* self, QMetaMethod* signal);
void QBarSet_OnDisconnectNotify(QBarSet* self, intptr_t slot);
void QBarSet_QBaseDisconnectNotify(QBarSet* self, QMetaMethod* signal);
QObject* QBarSet_Sender(const QBarSet* self);
void QBarSet_OnSender(const QBarSet* self, intptr_t slot);
QObject* QBarSet_QBaseSender(const QBarSet* self);
int QBarSet_SenderSignalIndex(const QBarSet* self);
void QBarSet_OnSenderSignalIndex(const QBarSet* self, intptr_t slot);
int QBarSet_QBaseSenderSignalIndex(const QBarSet* self);
int QBarSet_Receivers(const QBarSet* self, const char* signal);
void QBarSet_OnReceivers(const QBarSet* self, intptr_t slot);
int QBarSet_QBaseReceivers(const QBarSet* self, const char* signal);
bool QBarSet_IsSignalConnected(const QBarSet* self, QMetaMethod* signal);
void QBarSet_OnIsSignalConnected(const QBarSet* self, intptr_t slot);
bool QBarSet_QBaseIsSignalConnected(const QBarSet* self, QMetaMethod* signal);
void QBarSet_Delete(QBarSet* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
