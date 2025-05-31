#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_CHARTSC_LIBQPIESLICE_H
#define SRC_RESTRICTED_EXTRAS_CHARTSC_LIBQPIESLICE_H

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
typedef struct QBrush QBrush;
typedef struct QChildEvent QChildEvent;
typedef struct QColor QColor;
typedef struct QEvent QEvent;
typedef struct QFont QFont;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QPen QPen;
typedef struct QPieSeries QPieSeries;
typedef struct QPieSlice QPieSlice;
typedef struct QTimerEvent QTimerEvent;
#endif

#ifdef __cplusplus
typedef QPieSlice::LabelPosition LabelPosition; // C++ enum
#else
typedef int LabelPosition; // C ABI enum
#endif

QPieSlice* QPieSlice_new();
QPieSlice* QPieSlice_new2(libqt_string label, double value);
QPieSlice* QPieSlice_new3(QObject* parent);
QPieSlice* QPieSlice_new4(libqt_string label, double value, QObject* parent);
QMetaObject* QPieSlice_MetaObject(const QPieSlice* self);
void* QPieSlice_Metacast(QPieSlice* self, const char* param1);
int QPieSlice_Metacall(QPieSlice* self, int param1, int param2, void** param3);
void QPieSlice_OnMetacall(QPieSlice* self, intptr_t slot);
int QPieSlice_QBaseMetacall(QPieSlice* self, int param1, int param2, void** param3);
libqt_string QPieSlice_Tr(const char* s);
void QPieSlice_SetLabel(QPieSlice* self, libqt_string label);
libqt_string QPieSlice_Label(const QPieSlice* self);
void QPieSlice_SetValue(QPieSlice* self, double value);
double QPieSlice_Value(const QPieSlice* self);
void QPieSlice_SetLabelVisible(QPieSlice* self);
bool QPieSlice_IsLabelVisible(const QPieSlice* self);
int QPieSlice_LabelPosition(QPieSlice* self);
void QPieSlice_SetLabelPosition(QPieSlice* self, int position);
void QPieSlice_SetExploded(QPieSlice* self);
bool QPieSlice_IsExploded(const QPieSlice* self);
void QPieSlice_SetPen(QPieSlice* self, const QPen* pen);
QPen* QPieSlice_Pen(const QPieSlice* self);
QColor* QPieSlice_BorderColor(QPieSlice* self);
void QPieSlice_SetBorderColor(QPieSlice* self, QColor* color);
int QPieSlice_BorderWidth(QPieSlice* self);
void QPieSlice_SetBorderWidth(QPieSlice* self, int width);
void QPieSlice_SetBrush(QPieSlice* self, const QBrush* brush);
QBrush* QPieSlice_Brush(const QPieSlice* self);
QColor* QPieSlice_Color(QPieSlice* self);
void QPieSlice_SetColor(QPieSlice* self, QColor* color);
void QPieSlice_SetLabelBrush(QPieSlice* self, const QBrush* brush);
QBrush* QPieSlice_LabelBrush(const QPieSlice* self);
QColor* QPieSlice_LabelColor(QPieSlice* self);
void QPieSlice_SetLabelColor(QPieSlice* self, QColor* color);
void QPieSlice_SetLabelFont(QPieSlice* self, const QFont* font);
QFont* QPieSlice_LabelFont(const QPieSlice* self);
void QPieSlice_SetLabelArmLengthFactor(QPieSlice* self, double factor);
double QPieSlice_LabelArmLengthFactor(const QPieSlice* self);
void QPieSlice_SetExplodeDistanceFactor(QPieSlice* self, double factor);
double QPieSlice_ExplodeDistanceFactor(const QPieSlice* self);
double QPieSlice_Percentage(const QPieSlice* self);
double QPieSlice_StartAngle(const QPieSlice* self);
double QPieSlice_AngleSpan(const QPieSlice* self);
QPieSeries* QPieSlice_Series(const QPieSlice* self);
void QPieSlice_Clicked(QPieSlice* self);
void QPieSlice_Connect_Clicked(QPieSlice* self, intptr_t slot);
void QPieSlice_Hovered(QPieSlice* self, bool state);
void QPieSlice_Connect_Hovered(QPieSlice* self, intptr_t slot);
void QPieSlice_Pressed(QPieSlice* self);
void QPieSlice_Connect_Pressed(QPieSlice* self, intptr_t slot);
void QPieSlice_Released(QPieSlice* self);
void QPieSlice_Connect_Released(QPieSlice* self, intptr_t slot);
void QPieSlice_DoubleClicked(QPieSlice* self);
void QPieSlice_Connect_DoubleClicked(QPieSlice* self, intptr_t slot);
void QPieSlice_LabelChanged(QPieSlice* self);
void QPieSlice_Connect_LabelChanged(QPieSlice* self, intptr_t slot);
void QPieSlice_ValueChanged(QPieSlice* self);
void QPieSlice_Connect_ValueChanged(QPieSlice* self, intptr_t slot);
void QPieSlice_LabelVisibleChanged(QPieSlice* self);
void QPieSlice_Connect_LabelVisibleChanged(QPieSlice* self, intptr_t slot);
void QPieSlice_PenChanged(QPieSlice* self);
void QPieSlice_Connect_PenChanged(QPieSlice* self, intptr_t slot);
void QPieSlice_BrushChanged(QPieSlice* self);
void QPieSlice_Connect_BrushChanged(QPieSlice* self, intptr_t slot);
void QPieSlice_LabelBrushChanged(QPieSlice* self);
void QPieSlice_Connect_LabelBrushChanged(QPieSlice* self, intptr_t slot);
void QPieSlice_LabelFontChanged(QPieSlice* self);
void QPieSlice_Connect_LabelFontChanged(QPieSlice* self, intptr_t slot);
void QPieSlice_PercentageChanged(QPieSlice* self);
void QPieSlice_Connect_PercentageChanged(QPieSlice* self, intptr_t slot);
void QPieSlice_StartAngleChanged(QPieSlice* self);
void QPieSlice_Connect_StartAngleChanged(QPieSlice* self, intptr_t slot);
void QPieSlice_AngleSpanChanged(QPieSlice* self);
void QPieSlice_Connect_AngleSpanChanged(QPieSlice* self, intptr_t slot);
void QPieSlice_ColorChanged(QPieSlice* self);
void QPieSlice_Connect_ColorChanged(QPieSlice* self, intptr_t slot);
void QPieSlice_BorderColorChanged(QPieSlice* self);
void QPieSlice_Connect_BorderColorChanged(QPieSlice* self, intptr_t slot);
void QPieSlice_BorderWidthChanged(QPieSlice* self);
void QPieSlice_Connect_BorderWidthChanged(QPieSlice* self, intptr_t slot);
void QPieSlice_LabelColorChanged(QPieSlice* self);
void QPieSlice_Connect_LabelColorChanged(QPieSlice* self, intptr_t slot);
libqt_string QPieSlice_Tr2(const char* s, const char* c);
libqt_string QPieSlice_Tr3(const char* s, const char* c, int n);
void QPieSlice_SetLabelVisible1(QPieSlice* self, bool visible);
void QPieSlice_SetExploded1(QPieSlice* self, bool exploded);
bool QPieSlice_Event(QPieSlice* self, QEvent* event);
void QPieSlice_OnEvent(QPieSlice* self, intptr_t slot);
bool QPieSlice_QBaseEvent(QPieSlice* self, QEvent* event);
bool QPieSlice_EventFilter(QPieSlice* self, QObject* watched, QEvent* event);
void QPieSlice_OnEventFilter(QPieSlice* self, intptr_t slot);
bool QPieSlice_QBaseEventFilter(QPieSlice* self, QObject* watched, QEvent* event);
void QPieSlice_TimerEvent(QPieSlice* self, QTimerEvent* event);
void QPieSlice_OnTimerEvent(QPieSlice* self, intptr_t slot);
void QPieSlice_QBaseTimerEvent(QPieSlice* self, QTimerEvent* event);
void QPieSlice_ChildEvent(QPieSlice* self, QChildEvent* event);
void QPieSlice_OnChildEvent(QPieSlice* self, intptr_t slot);
void QPieSlice_QBaseChildEvent(QPieSlice* self, QChildEvent* event);
void QPieSlice_CustomEvent(QPieSlice* self, QEvent* event);
void QPieSlice_OnCustomEvent(QPieSlice* self, intptr_t slot);
void QPieSlice_QBaseCustomEvent(QPieSlice* self, QEvent* event);
void QPieSlice_ConnectNotify(QPieSlice* self, const QMetaMethod* signal);
void QPieSlice_OnConnectNotify(QPieSlice* self, intptr_t slot);
void QPieSlice_QBaseConnectNotify(QPieSlice* self, const QMetaMethod* signal);
void QPieSlice_DisconnectNotify(QPieSlice* self, const QMetaMethod* signal);
void QPieSlice_OnDisconnectNotify(QPieSlice* self, intptr_t slot);
void QPieSlice_QBaseDisconnectNotify(QPieSlice* self, const QMetaMethod* signal);
QObject* QPieSlice_Sender(const QPieSlice* self);
void QPieSlice_OnSender(const QPieSlice* self, intptr_t slot);
QObject* QPieSlice_QBaseSender(const QPieSlice* self);
int QPieSlice_SenderSignalIndex(const QPieSlice* self);
void QPieSlice_OnSenderSignalIndex(const QPieSlice* self, intptr_t slot);
int QPieSlice_QBaseSenderSignalIndex(const QPieSlice* self);
int QPieSlice_Receivers(const QPieSlice* self, const char* signal);
void QPieSlice_OnReceivers(const QPieSlice* self, intptr_t slot);
int QPieSlice_QBaseReceivers(const QPieSlice* self, const char* signal);
bool QPieSlice_IsSignalConnected(const QPieSlice* self, const QMetaMethod* signal);
void QPieSlice_OnIsSignalConnected(const QPieSlice* self, intptr_t slot);
bool QPieSlice_QBaseIsSignalConnected(const QPieSlice* self, const QMetaMethod* signal);
void QPieSlice_Delete(QPieSlice* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
