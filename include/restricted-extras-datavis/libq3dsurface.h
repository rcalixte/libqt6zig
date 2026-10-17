#pragma once
#ifndef RESTRICTED_EXTRAS_DATAVIS_LIBQ3DSURFACE_H
#define RESTRICTED_EXTRAS_DATAVIS_LIBQ3DSURFACE_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct Q3DSurface Q3DSurface;
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
typedef struct QShowEvent QShowEvent;
typedef struct QSize QSize;
typedef struct QSurface QSurface;
typedef struct QSurface3DSeries QSurface3DSeries;
typedef struct QSurfaceFormat QSurfaceFormat;
typedef struct QTabletEvent QTabletEvent;
typedef struct QTimerEvent QTimerEvent;
typedef struct QTouchEvent QTouchEvent;
typedef struct QValue3DAxis QValue3DAxis;
typedef struct QWheelEvent QWheelEvent;
typedef struct QWindow QWindow;
#endif

Q3DSurface* Q3DSurface_new();
Q3DSurface* Q3DSurface_new2(const QSurfaceFormat* format);
Q3DSurface* Q3DSurface_new3(const QSurfaceFormat* format, QWindow* parent);
QMetaObject* Q3DSurface_MetaObject(const Q3DSurface* self);
void* Q3DSurface_Metacast(Q3DSurface* self, const char* param1);
int Q3DSurface_Metacall(Q3DSurface* self, int param1, int param2, void** param3);
libqt_string Q3DSurface_Tr(const char* s);
void Q3DSurface_AddSeries(Q3DSurface* self, QSurface3DSeries* series);
void Q3DSurface_RemoveSeries(Q3DSurface* self, QSurface3DSeries* series);
libqt_list /* of QSurface3DSeries* */ Q3DSurface_SeriesList(const Q3DSurface* self);
void Q3DSurface_SetAxisX(Q3DSurface* self, QValue3DAxis* axis);
QValue3DAxis* Q3DSurface_AxisX(const Q3DSurface* self);
void Q3DSurface_SetAxisY(Q3DSurface* self, QValue3DAxis* axis);
QValue3DAxis* Q3DSurface_AxisY(const Q3DSurface* self);
void Q3DSurface_SetAxisZ(Q3DSurface* self, QValue3DAxis* axis);
QValue3DAxis* Q3DSurface_AxisZ(const Q3DSurface* self);
void Q3DSurface_AddAxis(Q3DSurface* self, QValue3DAxis* axis);
void Q3DSurface_ReleaseAxis(Q3DSurface* self, QValue3DAxis* axis);
libqt_list /* of QValue3DAxis* */ Q3DSurface_Axes(const Q3DSurface* self);
QSurface3DSeries* Q3DSurface_SelectedSeries(const Q3DSurface* self);
void Q3DSurface_SetFlipHorizontalGrid(Q3DSurface* self, bool flip);
bool Q3DSurface_FlipHorizontalGrid(const Q3DSurface* self);
void Q3DSurface_AxisXChanged(Q3DSurface* self, QValue3DAxis* axis);
void Q3DSurface_Connect_AxisXChanged(Q3DSurface* self, intptr_t slot);
void Q3DSurface_AxisYChanged(Q3DSurface* self, QValue3DAxis* axis);
void Q3DSurface_Connect_AxisYChanged(Q3DSurface* self, intptr_t slot);
void Q3DSurface_AxisZChanged(Q3DSurface* self, QValue3DAxis* axis);
void Q3DSurface_Connect_AxisZChanged(Q3DSurface* self, intptr_t slot);
void Q3DSurface_SelectedSeriesChanged(Q3DSurface* self, QSurface3DSeries* series);
void Q3DSurface_Connect_SelectedSeriesChanged(Q3DSurface* self, intptr_t slot);
void Q3DSurface_FlipHorizontalGridChanged(Q3DSurface* self, bool flip);
void Q3DSurface_Connect_FlipHorizontalGridChanged(Q3DSurface* self, intptr_t slot);
libqt_string Q3DSurface_Tr2(const char* s, const char* c);
libqt_string Q3DSurface_Tr3(const char* s, const char* c, int n);
void Q3DSurface_OnMetaObject(Q3DSurface* self, intptr_t slot);
QMetaObject* Q3DSurface_SuperMetaObject(const Q3DSurface* self);
void Q3DSurface_OnMetacast(Q3DSurface* self, intptr_t slot);
void* Q3DSurface_SuperMetacast(Q3DSurface* self, const char* param1);
void Q3DSurface_OnMetacall(Q3DSurface* self, intptr_t slot);
int Q3DSurface_SuperMetacall(Q3DSurface* self, int param1, int param2, void** param3);
bool Q3DSurface_ShadowsSupported(const Q3DSurface* self);
void Q3DSurface_OnShadowsSupported(Q3DSurface* self, intptr_t slot);
bool Q3DSurface_SuperShadowsSupported(const Q3DSurface* self);
bool Q3DSurface_Event(Q3DSurface* self, QEvent* event);
void Q3DSurface_OnEvent(Q3DSurface* self, intptr_t slot);
bool Q3DSurface_SuperEvent(Q3DSurface* self, QEvent* event);
void Q3DSurface_ResizeEvent(Q3DSurface* self, QResizeEvent* event);
void Q3DSurface_OnResizeEvent(Q3DSurface* self, intptr_t slot);
void Q3DSurface_SuperResizeEvent(Q3DSurface* self, QResizeEvent* event);
void Q3DSurface_ExposeEvent(Q3DSurface* self, QExposeEvent* event);
void Q3DSurface_OnExposeEvent(Q3DSurface* self, intptr_t slot);
void Q3DSurface_SuperExposeEvent(Q3DSurface* self, QExposeEvent* event);
void Q3DSurface_MouseDoubleClickEvent(Q3DSurface* self, QMouseEvent* event);
void Q3DSurface_OnMouseDoubleClickEvent(Q3DSurface* self, intptr_t slot);
void Q3DSurface_SuperMouseDoubleClickEvent(Q3DSurface* self, QMouseEvent* event);
void Q3DSurface_TouchEvent(Q3DSurface* self, QTouchEvent* event);
void Q3DSurface_OnTouchEvent(Q3DSurface* self, intptr_t slot);
void Q3DSurface_SuperTouchEvent(Q3DSurface* self, QTouchEvent* event);
void Q3DSurface_MousePressEvent(Q3DSurface* self, QMouseEvent* event);
void Q3DSurface_OnMousePressEvent(Q3DSurface* self, intptr_t slot);
void Q3DSurface_SuperMousePressEvent(Q3DSurface* self, QMouseEvent* event);
void Q3DSurface_MouseReleaseEvent(Q3DSurface* self, QMouseEvent* event);
void Q3DSurface_OnMouseReleaseEvent(Q3DSurface* self, intptr_t slot);
void Q3DSurface_SuperMouseReleaseEvent(Q3DSurface* self, QMouseEvent* event);
void Q3DSurface_MouseMoveEvent(Q3DSurface* self, QMouseEvent* event);
void Q3DSurface_OnMouseMoveEvent(Q3DSurface* self, intptr_t slot);
void Q3DSurface_SuperMouseMoveEvent(Q3DSurface* self, QMouseEvent* event);
void Q3DSurface_WheelEvent(Q3DSurface* self, QWheelEvent* event);
void Q3DSurface_OnWheelEvent(Q3DSurface* self, intptr_t slot);
void Q3DSurface_SuperWheelEvent(Q3DSurface* self, QWheelEvent* event);
int Q3DSurface_SurfaceType(const Q3DSurface* self);
void Q3DSurface_OnSurfaceType(Q3DSurface* self, intptr_t slot);
int Q3DSurface_SuperSurfaceType(const Q3DSurface* self);
QSurfaceFormat* Q3DSurface_Format(const Q3DSurface* self);
void Q3DSurface_OnFormat(Q3DSurface* self, intptr_t slot);
QSurfaceFormat* Q3DSurface_SuperFormat(const Q3DSurface* self);
QSize* Q3DSurface_Size(const Q3DSurface* self);
void Q3DSurface_OnSize(Q3DSurface* self, intptr_t slot);
QSize* Q3DSurface_SuperSize(const Q3DSurface* self);
QAccessibleInterface* Q3DSurface_AccessibleRoot(const Q3DSurface* self);
void Q3DSurface_OnAccessibleRoot(Q3DSurface* self, intptr_t slot);
QAccessibleInterface* Q3DSurface_SuperAccessibleRoot(const Q3DSurface* self);
QObject* Q3DSurface_FocusObject(const Q3DSurface* self);
void Q3DSurface_OnFocusObject(Q3DSurface* self, intptr_t slot);
QObject* Q3DSurface_SuperFocusObject(const Q3DSurface* self);
void Q3DSurface_PaintEvent(Q3DSurface* self, QPaintEvent* param1);
void Q3DSurface_OnPaintEvent(Q3DSurface* self, intptr_t slot);
void Q3DSurface_SuperPaintEvent(Q3DSurface* self, QPaintEvent* param1);
void Q3DSurface_MoveEvent(Q3DSurface* self, QMoveEvent* param1);
void Q3DSurface_OnMoveEvent(Q3DSurface* self, intptr_t slot);
void Q3DSurface_SuperMoveEvent(Q3DSurface* self, QMoveEvent* param1);
void Q3DSurface_FocusInEvent(Q3DSurface* self, QFocusEvent* param1);
void Q3DSurface_OnFocusInEvent(Q3DSurface* self, intptr_t slot);
void Q3DSurface_SuperFocusInEvent(Q3DSurface* self, QFocusEvent* param1);
void Q3DSurface_FocusOutEvent(Q3DSurface* self, QFocusEvent* param1);
void Q3DSurface_OnFocusOutEvent(Q3DSurface* self, intptr_t slot);
void Q3DSurface_SuperFocusOutEvent(Q3DSurface* self, QFocusEvent* param1);
void Q3DSurface_ShowEvent(Q3DSurface* self, QShowEvent* param1);
void Q3DSurface_OnShowEvent(Q3DSurface* self, intptr_t slot);
void Q3DSurface_SuperShowEvent(Q3DSurface* self, QShowEvent* param1);
void Q3DSurface_HideEvent(Q3DSurface* self, QHideEvent* param1);
void Q3DSurface_OnHideEvent(Q3DSurface* self, intptr_t slot);
void Q3DSurface_SuperHideEvent(Q3DSurface* self, QHideEvent* param1);
void Q3DSurface_CloseEvent(Q3DSurface* self, QCloseEvent* param1);
void Q3DSurface_OnCloseEvent(Q3DSurface* self, intptr_t slot);
void Q3DSurface_SuperCloseEvent(Q3DSurface* self, QCloseEvent* param1);
void Q3DSurface_KeyPressEvent(Q3DSurface* self, QKeyEvent* param1);
void Q3DSurface_OnKeyPressEvent(Q3DSurface* self, intptr_t slot);
void Q3DSurface_SuperKeyPressEvent(Q3DSurface* self, QKeyEvent* param1);
void Q3DSurface_KeyReleaseEvent(Q3DSurface* self, QKeyEvent* param1);
void Q3DSurface_OnKeyReleaseEvent(Q3DSurface* self, intptr_t slot);
void Q3DSurface_SuperKeyReleaseEvent(Q3DSurface* self, QKeyEvent* param1);
void Q3DSurface_TabletEvent(Q3DSurface* self, QTabletEvent* param1);
void Q3DSurface_OnTabletEvent(Q3DSurface* self, intptr_t slot);
void Q3DSurface_SuperTabletEvent(Q3DSurface* self, QTabletEvent* param1);
bool Q3DSurface_NativeEvent(Q3DSurface* self, const libqt_string eventType, void* message, intptr_t* result);
void Q3DSurface_OnNativeEvent(Q3DSurface* self, intptr_t slot);
bool Q3DSurface_SuperNativeEvent(Q3DSurface* self, const libqt_string eventType, void* message, intptr_t* result);
bool Q3DSurface_EventFilter(Q3DSurface* self, QObject* watched, QEvent* event);
void Q3DSurface_OnEventFilter(Q3DSurface* self, intptr_t slot);
bool Q3DSurface_SuperEventFilter(Q3DSurface* self, QObject* watched, QEvent* event);
void Q3DSurface_TimerEvent(Q3DSurface* self, QTimerEvent* event);
void Q3DSurface_OnTimerEvent(Q3DSurface* self, intptr_t slot);
void Q3DSurface_SuperTimerEvent(Q3DSurface* self, QTimerEvent* event);
void Q3DSurface_ChildEvent(Q3DSurface* self, QChildEvent* event);
void Q3DSurface_OnChildEvent(Q3DSurface* self, intptr_t slot);
void Q3DSurface_SuperChildEvent(Q3DSurface* self, QChildEvent* event);
void Q3DSurface_CustomEvent(Q3DSurface* self, QEvent* event);
void Q3DSurface_OnCustomEvent(Q3DSurface* self, intptr_t slot);
void Q3DSurface_SuperCustomEvent(Q3DSurface* self, QEvent* event);
void Q3DSurface_ConnectNotify(Q3DSurface* self, const QMetaMethod* signal);
void Q3DSurface_OnConnectNotify(Q3DSurface* self, intptr_t slot);
void Q3DSurface_SuperConnectNotify(Q3DSurface* self, const QMetaMethod* signal);
void Q3DSurface_DisconnectNotify(Q3DSurface* self, const QMetaMethod* signal);
void Q3DSurface_OnDisconnectNotify(Q3DSurface* self, intptr_t slot);
void Q3DSurface_SuperDisconnectNotify(Q3DSurface* self, const QMetaMethod* signal);
void* Q3DSurface_ResolveInterface(const Q3DSurface* self, const char* name, int revision);
QObject* Q3DSurface_Sender(const Q3DSurface* self);
int Q3DSurface_SenderSignalIndex(const Q3DSurface* self);
int Q3DSurface_Receivers(const Q3DSurface* self, const char* signal);
bool Q3DSurface_IsSignalConnected(const Q3DSurface* self, const QMetaMethod* signal);
void Q3DSurface_Delete(Q3DSurface* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
