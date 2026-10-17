#pragma once
#ifndef RESTRICTED_EXTRAS_DATAVIS_LIBQ3DBARS_H
#define RESTRICTED_EXTRAS_DATAVIS_LIBQ3DBARS_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct Q3DBars Q3DBars;
typedef struct QAbstract3DAxis QAbstract3DAxis;
typedef struct QAbstract3DGraph QAbstract3DGraph;
typedef struct QAccessibleInterface QAccessibleInterface;
typedef struct QBar3DSeries QBar3DSeries;
typedef struct QCategory3DAxis QCategory3DAxis;
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
typedef struct QSizeF QSizeF;
typedef struct QSurface QSurface;
typedef struct QSurfaceFormat QSurfaceFormat;
typedef struct QTabletEvent QTabletEvent;
typedef struct QTimerEvent QTimerEvent;
typedef struct QTouchEvent QTouchEvent;
typedef struct QValue3DAxis QValue3DAxis;
typedef struct QWheelEvent QWheelEvent;
typedef struct QWindow QWindow;
#endif

Q3DBars* Q3DBars_new();
Q3DBars* Q3DBars_new2(const QSurfaceFormat* format);
Q3DBars* Q3DBars_new3(const QSurfaceFormat* format, QWindow* parent);
QMetaObject* Q3DBars_MetaObject(const Q3DBars* self);
void* Q3DBars_Metacast(Q3DBars* self, const char* param1);
int Q3DBars_Metacall(Q3DBars* self, int param1, int param2, void** param3);
libqt_string Q3DBars_Tr(const char* s);
void Q3DBars_SetPrimarySeries(Q3DBars* self, QBar3DSeries* series);
QBar3DSeries* Q3DBars_PrimarySeries(const Q3DBars* self);
void Q3DBars_AddSeries(Q3DBars* self, QBar3DSeries* series);
void Q3DBars_RemoveSeries(Q3DBars* self, QBar3DSeries* series);
void Q3DBars_InsertSeries(Q3DBars* self, int index, QBar3DSeries* series);
libqt_list /* of QBar3DSeries* */ Q3DBars_SeriesList(const Q3DBars* self);
void Q3DBars_SetMultiSeriesUniform(Q3DBars* self, bool uniform);
bool Q3DBars_IsMultiSeriesUniform(const Q3DBars* self);
void Q3DBars_SetBarThickness(Q3DBars* self, float thicknessRatio);
float Q3DBars_BarThickness(const Q3DBars* self);
void Q3DBars_SetBarSpacing(Q3DBars* self, const QSizeF* spacing);
QSizeF* Q3DBars_BarSpacing(const Q3DBars* self);
void Q3DBars_SetBarSpacingRelative(Q3DBars* self, bool relative);
bool Q3DBars_IsBarSpacingRelative(const Q3DBars* self);
void Q3DBars_SetBarSeriesMargin(Q3DBars* self, const QSizeF* margin);
QSizeF* Q3DBars_BarSeriesMargin(const Q3DBars* self);
void Q3DBars_SetRowAxis(Q3DBars* self, QCategory3DAxis* axis);
QCategory3DAxis* Q3DBars_RowAxis(const Q3DBars* self);
void Q3DBars_SetColumnAxis(Q3DBars* self, QCategory3DAxis* axis);
QCategory3DAxis* Q3DBars_ColumnAxis(const Q3DBars* self);
void Q3DBars_SetValueAxis(Q3DBars* self, QValue3DAxis* axis);
QValue3DAxis* Q3DBars_ValueAxis(const Q3DBars* self);
void Q3DBars_AddAxis(Q3DBars* self, QAbstract3DAxis* axis);
void Q3DBars_ReleaseAxis(Q3DBars* self, QAbstract3DAxis* axis);
libqt_list /* of QAbstract3DAxis* */ Q3DBars_Axes(const Q3DBars* self);
QBar3DSeries* Q3DBars_SelectedSeries(const Q3DBars* self);
void Q3DBars_SetFloorLevel(Q3DBars* self, float level);
float Q3DBars_FloorLevel(const Q3DBars* self);
void Q3DBars_MultiSeriesUniformChanged(Q3DBars* self, bool uniform);
void Q3DBars_Connect_MultiSeriesUniformChanged(Q3DBars* self, intptr_t slot);
void Q3DBars_BarThicknessChanged(Q3DBars* self, float thicknessRatio);
void Q3DBars_Connect_BarThicknessChanged(Q3DBars* self, intptr_t slot);
void Q3DBars_BarSpacingChanged(Q3DBars* self, const QSizeF* spacing);
void Q3DBars_Connect_BarSpacingChanged(Q3DBars* self, intptr_t slot);
void Q3DBars_BarSpacingRelativeChanged(Q3DBars* self, bool relative);
void Q3DBars_Connect_BarSpacingRelativeChanged(Q3DBars* self, intptr_t slot);
void Q3DBars_BarSeriesMarginChanged(Q3DBars* self, const QSizeF* margin);
void Q3DBars_Connect_BarSeriesMarginChanged(Q3DBars* self, intptr_t slot);
void Q3DBars_RowAxisChanged(Q3DBars* self, QCategory3DAxis* axis);
void Q3DBars_Connect_RowAxisChanged(Q3DBars* self, intptr_t slot);
void Q3DBars_ColumnAxisChanged(Q3DBars* self, QCategory3DAxis* axis);
void Q3DBars_Connect_ColumnAxisChanged(Q3DBars* self, intptr_t slot);
void Q3DBars_ValueAxisChanged(Q3DBars* self, QValue3DAxis* axis);
void Q3DBars_Connect_ValueAxisChanged(Q3DBars* self, intptr_t slot);
void Q3DBars_PrimarySeriesChanged(Q3DBars* self, QBar3DSeries* series);
void Q3DBars_Connect_PrimarySeriesChanged(Q3DBars* self, intptr_t slot);
void Q3DBars_SelectedSeriesChanged(Q3DBars* self, QBar3DSeries* series);
void Q3DBars_Connect_SelectedSeriesChanged(Q3DBars* self, intptr_t slot);
void Q3DBars_FloorLevelChanged(Q3DBars* self, float level);
void Q3DBars_Connect_FloorLevelChanged(Q3DBars* self, intptr_t slot);
libqt_string Q3DBars_Tr2(const char* s, const char* c);
libqt_string Q3DBars_Tr3(const char* s, const char* c, int n);
void Q3DBars_OnMetaObject(Q3DBars* self, intptr_t slot);
QMetaObject* Q3DBars_SuperMetaObject(const Q3DBars* self);
void Q3DBars_OnMetacast(Q3DBars* self, intptr_t slot);
void* Q3DBars_SuperMetacast(Q3DBars* self, const char* param1);
void Q3DBars_OnMetacall(Q3DBars* self, intptr_t slot);
int Q3DBars_SuperMetacall(Q3DBars* self, int param1, int param2, void** param3);
bool Q3DBars_ShadowsSupported(const Q3DBars* self);
void Q3DBars_OnShadowsSupported(Q3DBars* self, intptr_t slot);
bool Q3DBars_SuperShadowsSupported(const Q3DBars* self);
bool Q3DBars_Event(Q3DBars* self, QEvent* event);
void Q3DBars_OnEvent(Q3DBars* self, intptr_t slot);
bool Q3DBars_SuperEvent(Q3DBars* self, QEvent* event);
void Q3DBars_ResizeEvent(Q3DBars* self, QResizeEvent* event);
void Q3DBars_OnResizeEvent(Q3DBars* self, intptr_t slot);
void Q3DBars_SuperResizeEvent(Q3DBars* self, QResizeEvent* event);
void Q3DBars_ExposeEvent(Q3DBars* self, QExposeEvent* event);
void Q3DBars_OnExposeEvent(Q3DBars* self, intptr_t slot);
void Q3DBars_SuperExposeEvent(Q3DBars* self, QExposeEvent* event);
void Q3DBars_MouseDoubleClickEvent(Q3DBars* self, QMouseEvent* event);
void Q3DBars_OnMouseDoubleClickEvent(Q3DBars* self, intptr_t slot);
void Q3DBars_SuperMouseDoubleClickEvent(Q3DBars* self, QMouseEvent* event);
void Q3DBars_TouchEvent(Q3DBars* self, QTouchEvent* event);
void Q3DBars_OnTouchEvent(Q3DBars* self, intptr_t slot);
void Q3DBars_SuperTouchEvent(Q3DBars* self, QTouchEvent* event);
void Q3DBars_MousePressEvent(Q3DBars* self, QMouseEvent* event);
void Q3DBars_OnMousePressEvent(Q3DBars* self, intptr_t slot);
void Q3DBars_SuperMousePressEvent(Q3DBars* self, QMouseEvent* event);
void Q3DBars_MouseReleaseEvent(Q3DBars* self, QMouseEvent* event);
void Q3DBars_OnMouseReleaseEvent(Q3DBars* self, intptr_t slot);
void Q3DBars_SuperMouseReleaseEvent(Q3DBars* self, QMouseEvent* event);
void Q3DBars_MouseMoveEvent(Q3DBars* self, QMouseEvent* event);
void Q3DBars_OnMouseMoveEvent(Q3DBars* self, intptr_t slot);
void Q3DBars_SuperMouseMoveEvent(Q3DBars* self, QMouseEvent* event);
void Q3DBars_WheelEvent(Q3DBars* self, QWheelEvent* event);
void Q3DBars_OnWheelEvent(Q3DBars* self, intptr_t slot);
void Q3DBars_SuperWheelEvent(Q3DBars* self, QWheelEvent* event);
int Q3DBars_SurfaceType(const Q3DBars* self);
void Q3DBars_OnSurfaceType(Q3DBars* self, intptr_t slot);
int Q3DBars_SuperSurfaceType(const Q3DBars* self);
QSurfaceFormat* Q3DBars_Format(const Q3DBars* self);
void Q3DBars_OnFormat(Q3DBars* self, intptr_t slot);
QSurfaceFormat* Q3DBars_SuperFormat(const Q3DBars* self);
QSize* Q3DBars_Size(const Q3DBars* self);
void Q3DBars_OnSize(Q3DBars* self, intptr_t slot);
QSize* Q3DBars_SuperSize(const Q3DBars* self);
QAccessibleInterface* Q3DBars_AccessibleRoot(const Q3DBars* self);
void Q3DBars_OnAccessibleRoot(Q3DBars* self, intptr_t slot);
QAccessibleInterface* Q3DBars_SuperAccessibleRoot(const Q3DBars* self);
QObject* Q3DBars_FocusObject(const Q3DBars* self);
void Q3DBars_OnFocusObject(Q3DBars* self, intptr_t slot);
QObject* Q3DBars_SuperFocusObject(const Q3DBars* self);
void Q3DBars_PaintEvent(Q3DBars* self, QPaintEvent* param1);
void Q3DBars_OnPaintEvent(Q3DBars* self, intptr_t slot);
void Q3DBars_SuperPaintEvent(Q3DBars* self, QPaintEvent* param1);
void Q3DBars_MoveEvent(Q3DBars* self, QMoveEvent* param1);
void Q3DBars_OnMoveEvent(Q3DBars* self, intptr_t slot);
void Q3DBars_SuperMoveEvent(Q3DBars* self, QMoveEvent* param1);
void Q3DBars_FocusInEvent(Q3DBars* self, QFocusEvent* param1);
void Q3DBars_OnFocusInEvent(Q3DBars* self, intptr_t slot);
void Q3DBars_SuperFocusInEvent(Q3DBars* self, QFocusEvent* param1);
void Q3DBars_FocusOutEvent(Q3DBars* self, QFocusEvent* param1);
void Q3DBars_OnFocusOutEvent(Q3DBars* self, intptr_t slot);
void Q3DBars_SuperFocusOutEvent(Q3DBars* self, QFocusEvent* param1);
void Q3DBars_ShowEvent(Q3DBars* self, QShowEvent* param1);
void Q3DBars_OnShowEvent(Q3DBars* self, intptr_t slot);
void Q3DBars_SuperShowEvent(Q3DBars* self, QShowEvent* param1);
void Q3DBars_HideEvent(Q3DBars* self, QHideEvent* param1);
void Q3DBars_OnHideEvent(Q3DBars* self, intptr_t slot);
void Q3DBars_SuperHideEvent(Q3DBars* self, QHideEvent* param1);
void Q3DBars_CloseEvent(Q3DBars* self, QCloseEvent* param1);
void Q3DBars_OnCloseEvent(Q3DBars* self, intptr_t slot);
void Q3DBars_SuperCloseEvent(Q3DBars* self, QCloseEvent* param1);
void Q3DBars_KeyPressEvent(Q3DBars* self, QKeyEvent* param1);
void Q3DBars_OnKeyPressEvent(Q3DBars* self, intptr_t slot);
void Q3DBars_SuperKeyPressEvent(Q3DBars* self, QKeyEvent* param1);
void Q3DBars_KeyReleaseEvent(Q3DBars* self, QKeyEvent* param1);
void Q3DBars_OnKeyReleaseEvent(Q3DBars* self, intptr_t slot);
void Q3DBars_SuperKeyReleaseEvent(Q3DBars* self, QKeyEvent* param1);
void Q3DBars_TabletEvent(Q3DBars* self, QTabletEvent* param1);
void Q3DBars_OnTabletEvent(Q3DBars* self, intptr_t slot);
void Q3DBars_SuperTabletEvent(Q3DBars* self, QTabletEvent* param1);
bool Q3DBars_NativeEvent(Q3DBars* self, const libqt_string eventType, void* message, intptr_t* result);
void Q3DBars_OnNativeEvent(Q3DBars* self, intptr_t slot);
bool Q3DBars_SuperNativeEvent(Q3DBars* self, const libqt_string eventType, void* message, intptr_t* result);
bool Q3DBars_EventFilter(Q3DBars* self, QObject* watched, QEvent* event);
void Q3DBars_OnEventFilter(Q3DBars* self, intptr_t slot);
bool Q3DBars_SuperEventFilter(Q3DBars* self, QObject* watched, QEvent* event);
void Q3DBars_TimerEvent(Q3DBars* self, QTimerEvent* event);
void Q3DBars_OnTimerEvent(Q3DBars* self, intptr_t slot);
void Q3DBars_SuperTimerEvent(Q3DBars* self, QTimerEvent* event);
void Q3DBars_ChildEvent(Q3DBars* self, QChildEvent* event);
void Q3DBars_OnChildEvent(Q3DBars* self, intptr_t slot);
void Q3DBars_SuperChildEvent(Q3DBars* self, QChildEvent* event);
void Q3DBars_CustomEvent(Q3DBars* self, QEvent* event);
void Q3DBars_OnCustomEvent(Q3DBars* self, intptr_t slot);
void Q3DBars_SuperCustomEvent(Q3DBars* self, QEvent* event);
void Q3DBars_ConnectNotify(Q3DBars* self, const QMetaMethod* signal);
void Q3DBars_OnConnectNotify(Q3DBars* self, intptr_t slot);
void Q3DBars_SuperConnectNotify(Q3DBars* self, const QMetaMethod* signal);
void Q3DBars_DisconnectNotify(Q3DBars* self, const QMetaMethod* signal);
void Q3DBars_OnDisconnectNotify(Q3DBars* self, intptr_t slot);
void Q3DBars_SuperDisconnectNotify(Q3DBars* self, const QMetaMethod* signal);
void* Q3DBars_ResolveInterface(const Q3DBars* self, const char* name, int revision);
QObject* Q3DBars_Sender(const Q3DBars* self);
int Q3DBars_SenderSignalIndex(const Q3DBars* self);
int Q3DBars_Receivers(const Q3DBars* self, const char* signal);
bool Q3DBars_IsSignalConnected(const Q3DBars* self, const QMetaMethod* signal);
void Q3DBars_Delete(Q3DBars* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
