#pragma once
#ifndef RESTRICTED_EXTRAS_DATAVIS_LIBQ3DSCATTER_H
#define RESTRICTED_EXTRAS_DATAVIS_LIBQ3DSCATTER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct Q3DScatter Q3DScatter;
typedef struct QAbstract3DGraph QAbstract3DGraph;
typedef struct QAccessibleInterface QAccessibleInterface;
typedef struct QChildEvent QChildEvent;
typedef struct QCloseEvent QCloseEvent;
typedef struct QEvent QEvent;
typedef struct QExposeEvent QExposeEvent;
typedef struct QFocusEvent QFocusEvent;
typedef struct QHideEvent QHideEvent;
typedef struct QKeyEvent QKeyEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QMouseEvent QMouseEvent;
typedef struct QMoveEvent QMoveEvent;
typedef struct QObject QObject;
typedef struct QPaintEvent QPaintEvent;
typedef struct QResizeEvent QResizeEvent;
typedef struct QScatter3DSeries QScatter3DSeries;
typedef struct QShowEvent QShowEvent;
typedef struct QSize QSize;
typedef struct QSurface QSurface;
typedef struct QSurfaceFormat QSurfaceFormat;
typedef struct QTabletEvent QTabletEvent;
typedef struct QTimerEvent QTimerEvent;
typedef struct QTouchEvent QTouchEvent;
typedef struct QValue3DAxis QValue3DAxis;
typedef struct QWheelEvent QWheelEvent;
typedef struct QWindow QWindow;
#endif

Q3DScatter* Q3DScatter_new();
Q3DScatter* Q3DScatter_new2(const QSurfaceFormat* format);
Q3DScatter* Q3DScatter_new3(const QSurfaceFormat* format, QWindow* parent);
QMetaObject* Q3DScatter_MetaObject(const Q3DScatter* self);
void* Q3DScatter_Metacast(Q3DScatter* self, const char* param1);
int Q3DScatter_Metacall(Q3DScatter* self, int param1, int param2, void** param3);
libqt_string Q3DScatter_Tr(const char* s);
void Q3DScatter_AddSeries(Q3DScatter* self, QScatter3DSeries* series);
void Q3DScatter_RemoveSeries(Q3DScatter* self, QScatter3DSeries* series);
libqt_list /* of QScatter3DSeries* */ Q3DScatter_SeriesList(const Q3DScatter* self);
void Q3DScatter_SetAxisX(Q3DScatter* self, QValue3DAxis* axis);
QValue3DAxis* Q3DScatter_AxisX(const Q3DScatter* self);
void Q3DScatter_SetAxisY(Q3DScatter* self, QValue3DAxis* axis);
QValue3DAxis* Q3DScatter_AxisY(const Q3DScatter* self);
void Q3DScatter_SetAxisZ(Q3DScatter* self, QValue3DAxis* axis);
QValue3DAxis* Q3DScatter_AxisZ(const Q3DScatter* self);
void Q3DScatter_AddAxis(Q3DScatter* self, QValue3DAxis* axis);
void Q3DScatter_ReleaseAxis(Q3DScatter* self, QValue3DAxis* axis);
libqt_list /* of QValue3DAxis* */ Q3DScatter_Axes(const Q3DScatter* self);
QScatter3DSeries* Q3DScatter_SelectedSeries(const Q3DScatter* self);
void Q3DScatter_AxisXChanged(Q3DScatter* self, QValue3DAxis* axis);
void Q3DScatter_Connect_AxisXChanged(Q3DScatter* self, intptr_t slot);
void Q3DScatter_AxisYChanged(Q3DScatter* self, QValue3DAxis* axis);
void Q3DScatter_Connect_AxisYChanged(Q3DScatter* self, intptr_t slot);
void Q3DScatter_AxisZChanged(Q3DScatter* self, QValue3DAxis* axis);
void Q3DScatter_Connect_AxisZChanged(Q3DScatter* self, intptr_t slot);
void Q3DScatter_SelectedSeriesChanged(Q3DScatter* self, QScatter3DSeries* series);
void Q3DScatter_Connect_SelectedSeriesChanged(Q3DScatter* self, intptr_t slot);
libqt_string Q3DScatter_Tr2(const char* s, const char* c);
libqt_string Q3DScatter_Tr3(const char* s, const char* c, int n);
void Q3DScatter_OnMetaObject(Q3DScatter* self, intptr_t slot);
QMetaObject* Q3DScatter_SuperMetaObject(const Q3DScatter* self);
void Q3DScatter_OnMetacast(Q3DScatter* self, intptr_t slot);
void* Q3DScatter_SuperMetacast(Q3DScatter* self, const char* param1);
void Q3DScatter_OnMetacall(Q3DScatter* self, intptr_t slot);
int Q3DScatter_SuperMetacall(Q3DScatter* self, int param1, int param2, void** param3);
bool Q3DScatter_ShadowsSupported(const Q3DScatter* self);
void Q3DScatter_OnShadowsSupported(Q3DScatter* self, intptr_t slot);
bool Q3DScatter_SuperShadowsSupported(const Q3DScatter* self);
bool Q3DScatter_Event(Q3DScatter* self, QEvent* event);
void Q3DScatter_OnEvent(Q3DScatter* self, intptr_t slot);
bool Q3DScatter_SuperEvent(Q3DScatter* self, QEvent* event);
void Q3DScatter_ResizeEvent(Q3DScatter* self, QResizeEvent* event);
void Q3DScatter_OnResizeEvent(Q3DScatter* self, intptr_t slot);
void Q3DScatter_SuperResizeEvent(Q3DScatter* self, QResizeEvent* event);
void Q3DScatter_ExposeEvent(Q3DScatter* self, QExposeEvent* event);
void Q3DScatter_OnExposeEvent(Q3DScatter* self, intptr_t slot);
void Q3DScatter_SuperExposeEvent(Q3DScatter* self, QExposeEvent* event);
void Q3DScatter_MouseDoubleClickEvent(Q3DScatter* self, QMouseEvent* event);
void Q3DScatter_OnMouseDoubleClickEvent(Q3DScatter* self, intptr_t slot);
void Q3DScatter_SuperMouseDoubleClickEvent(Q3DScatter* self, QMouseEvent* event);
void Q3DScatter_TouchEvent(Q3DScatter* self, QTouchEvent* event);
void Q3DScatter_OnTouchEvent(Q3DScatter* self, intptr_t slot);
void Q3DScatter_SuperTouchEvent(Q3DScatter* self, QTouchEvent* event);
void Q3DScatter_MousePressEvent(Q3DScatter* self, QMouseEvent* event);
void Q3DScatter_OnMousePressEvent(Q3DScatter* self, intptr_t slot);
void Q3DScatter_SuperMousePressEvent(Q3DScatter* self, QMouseEvent* event);
void Q3DScatter_MouseReleaseEvent(Q3DScatter* self, QMouseEvent* event);
void Q3DScatter_OnMouseReleaseEvent(Q3DScatter* self, intptr_t slot);
void Q3DScatter_SuperMouseReleaseEvent(Q3DScatter* self, QMouseEvent* event);
void Q3DScatter_MouseMoveEvent(Q3DScatter* self, QMouseEvent* event);
void Q3DScatter_OnMouseMoveEvent(Q3DScatter* self, intptr_t slot);
void Q3DScatter_SuperMouseMoveEvent(Q3DScatter* self, QMouseEvent* event);
void Q3DScatter_WheelEvent(Q3DScatter* self, QWheelEvent* event);
void Q3DScatter_OnWheelEvent(Q3DScatter* self, intptr_t slot);
void Q3DScatter_SuperWheelEvent(Q3DScatter* self, QWheelEvent* event);
int Q3DScatter_SurfaceType(const Q3DScatter* self);
void Q3DScatter_OnSurfaceType(Q3DScatter* self, intptr_t slot);
int Q3DScatter_SuperSurfaceType(const Q3DScatter* self);
QSurfaceFormat* Q3DScatter_Format(const Q3DScatter* self);
void Q3DScatter_OnFormat(Q3DScatter* self, intptr_t slot);
QSurfaceFormat* Q3DScatter_SuperFormat(const Q3DScatter* self);
QSize* Q3DScatter_Size(const Q3DScatter* self);
void Q3DScatter_OnSize(Q3DScatter* self, intptr_t slot);
QSize* Q3DScatter_SuperSize(const Q3DScatter* self);
QAccessibleInterface* Q3DScatter_AccessibleRoot(const Q3DScatter* self);
void Q3DScatter_OnAccessibleRoot(Q3DScatter* self, intptr_t slot);
QAccessibleInterface* Q3DScatter_SuperAccessibleRoot(const Q3DScatter* self);
QObject* Q3DScatter_FocusObject(const Q3DScatter* self);
void Q3DScatter_OnFocusObject(Q3DScatter* self, intptr_t slot);
QObject* Q3DScatter_SuperFocusObject(const Q3DScatter* self);
void Q3DScatter_PaintEvent(Q3DScatter* self, QPaintEvent* param1);
void Q3DScatter_OnPaintEvent(Q3DScatter* self, intptr_t slot);
void Q3DScatter_SuperPaintEvent(Q3DScatter* self, QPaintEvent* param1);
void Q3DScatter_MoveEvent(Q3DScatter* self, QMoveEvent* param1);
void Q3DScatter_OnMoveEvent(Q3DScatter* self, intptr_t slot);
void Q3DScatter_SuperMoveEvent(Q3DScatter* self, QMoveEvent* param1);
void Q3DScatter_FocusInEvent(Q3DScatter* self, QFocusEvent* param1);
void Q3DScatter_OnFocusInEvent(Q3DScatter* self, intptr_t slot);
void Q3DScatter_SuperFocusInEvent(Q3DScatter* self, QFocusEvent* param1);
void Q3DScatter_FocusOutEvent(Q3DScatter* self, QFocusEvent* param1);
void Q3DScatter_OnFocusOutEvent(Q3DScatter* self, intptr_t slot);
void Q3DScatter_SuperFocusOutEvent(Q3DScatter* self, QFocusEvent* param1);
void Q3DScatter_ShowEvent(Q3DScatter* self, QShowEvent* param1);
void Q3DScatter_OnShowEvent(Q3DScatter* self, intptr_t slot);
void Q3DScatter_SuperShowEvent(Q3DScatter* self, QShowEvent* param1);
void Q3DScatter_HideEvent(Q3DScatter* self, QHideEvent* param1);
void Q3DScatter_OnHideEvent(Q3DScatter* self, intptr_t slot);
void Q3DScatter_SuperHideEvent(Q3DScatter* self, QHideEvent* param1);
void Q3DScatter_CloseEvent(Q3DScatter* self, QCloseEvent* param1);
void Q3DScatter_OnCloseEvent(Q3DScatter* self, intptr_t slot);
void Q3DScatter_SuperCloseEvent(Q3DScatter* self, QCloseEvent* param1);
void Q3DScatter_KeyPressEvent(Q3DScatter* self, QKeyEvent* param1);
void Q3DScatter_OnKeyPressEvent(Q3DScatter* self, intptr_t slot);
void Q3DScatter_SuperKeyPressEvent(Q3DScatter* self, QKeyEvent* param1);
void Q3DScatter_KeyReleaseEvent(Q3DScatter* self, QKeyEvent* param1);
void Q3DScatter_OnKeyReleaseEvent(Q3DScatter* self, intptr_t slot);
void Q3DScatter_SuperKeyReleaseEvent(Q3DScatter* self, QKeyEvent* param1);
void Q3DScatter_TabletEvent(Q3DScatter* self, QTabletEvent* param1);
void Q3DScatter_OnTabletEvent(Q3DScatter* self, intptr_t slot);
void Q3DScatter_SuperTabletEvent(Q3DScatter* self, QTabletEvent* param1);
bool Q3DScatter_NativeEvent(Q3DScatter* self, const libqt_string eventType, void* message, intptr_t* result);
void Q3DScatter_OnNativeEvent(Q3DScatter* self, intptr_t slot);
bool Q3DScatter_SuperNativeEvent(Q3DScatter* self, const libqt_string eventType, void* message, intptr_t* result);
bool Q3DScatter_EventFilter(Q3DScatter* self, QObject* watched, QEvent* event);
void Q3DScatter_OnEventFilter(Q3DScatter* self, intptr_t slot);
bool Q3DScatter_SuperEventFilter(Q3DScatter* self, QObject* watched, QEvent* event);
void Q3DScatter_TimerEvent(Q3DScatter* self, QTimerEvent* event);
void Q3DScatter_OnTimerEvent(Q3DScatter* self, intptr_t slot);
void Q3DScatter_SuperTimerEvent(Q3DScatter* self, QTimerEvent* event);
void Q3DScatter_ChildEvent(Q3DScatter* self, QChildEvent* event);
void Q3DScatter_OnChildEvent(Q3DScatter* self, intptr_t slot);
void Q3DScatter_SuperChildEvent(Q3DScatter* self, QChildEvent* event);
void Q3DScatter_CustomEvent(Q3DScatter* self, QEvent* event);
void Q3DScatter_OnCustomEvent(Q3DScatter* self, intptr_t slot);
void Q3DScatter_SuperCustomEvent(Q3DScatter* self, QEvent* event);
void Q3DScatter_ConnectNotify(Q3DScatter* self, const QMetaMethod* signal);
void Q3DScatter_OnConnectNotify(Q3DScatter* self, intptr_t slot);
void Q3DScatter_SuperConnectNotify(Q3DScatter* self, const QMetaMethod* signal);
void Q3DScatter_DisconnectNotify(Q3DScatter* self, const QMetaMethod* signal);
void Q3DScatter_OnDisconnectNotify(Q3DScatter* self, intptr_t slot);
void Q3DScatter_SuperDisconnectNotify(Q3DScatter* self, const QMetaMethod* signal);
void* Q3DScatter_ResolveInterface(const Q3DScatter* self, const char* name, int revision);
QObject* Q3DScatter_Sender(const Q3DScatter* self);
int Q3DScatter_SenderSignalIndex(const Q3DScatter* self);
int Q3DScatter_Receivers(const Q3DScatter* self, const char* signal);
bool Q3DScatter_IsSignalConnected(const Q3DScatter* self, const QMetaMethod* signal);
void Q3DScatter_Delete(Q3DScatter* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
