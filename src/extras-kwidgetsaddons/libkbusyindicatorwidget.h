#pragma once
#ifndef SRC_EXTRAS_KWIDGETSADDONSC_LIBKBUSYINDICATORWIDGET_H
#define SRC_EXTRAS_KWIDGETSADDONSC_LIBKBUSYINDICATORWIDGET_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KBusyIndicatorWidget KBusyIndicatorWidget;
typedef struct QActionEvent QActionEvent;
typedef struct QChildEvent QChildEvent;
typedef struct QCloseEvent QCloseEvent;
typedef struct QContextMenuEvent QContextMenuEvent;
typedef struct QDragEnterEvent QDragEnterEvent;
typedef struct QDragLeaveEvent QDragLeaveEvent;
typedef struct QDragMoveEvent QDragMoveEvent;
typedef struct QDropEvent QDropEvent;
typedef struct QEnterEvent QEnterEvent;
typedef struct QEvent QEvent;
typedef struct QFocusEvent QFocusEvent;
typedef struct QHideEvent QHideEvent;
typedef struct QInputMethodEvent QInputMethodEvent;
typedef struct QKeyEvent QKeyEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QMouseEvent QMouseEvent;
typedef struct QMoveEvent QMoveEvent;
typedef struct QObject QObject;
typedef struct QPaintDevice QPaintDevice;
typedef struct QPaintEngine QPaintEngine;
typedef struct QPaintEvent QPaintEvent;
typedef struct QPainter QPainter;
typedef struct QPoint QPoint;
typedef struct QResizeEvent QResizeEvent;
typedef struct QShowEvent QShowEvent;
typedef struct QSize QSize;
typedef struct QTabletEvent QTabletEvent;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
typedef struct QWheelEvent QWheelEvent;
typedef struct QWidget QWidget;
#endif

KBusyIndicatorWidget* KBusyIndicatorWidget_new(QWidget* parent);
KBusyIndicatorWidget* KBusyIndicatorWidget_new2();
QMetaObject* KBusyIndicatorWidget_MetaObject(const KBusyIndicatorWidget* self);
void* KBusyIndicatorWidget_Metacast(KBusyIndicatorWidget* self, const char* param1);
int KBusyIndicatorWidget_Metacall(KBusyIndicatorWidget* self, int param1, int param2, void** param3);
QSize* KBusyIndicatorWidget_MinimumSizeHint(const KBusyIndicatorWidget* self);
bool KBusyIndicatorWidget_IsRunning(const KBusyIndicatorWidget* self);
void KBusyIndicatorWidget_Start(KBusyIndicatorWidget* self);
void KBusyIndicatorWidget_Stop(KBusyIndicatorWidget* self);
void KBusyIndicatorWidget_SetRunning(KBusyIndicatorWidget* self);
void KBusyIndicatorWidget_ShowEvent(KBusyIndicatorWidget* self, QShowEvent* event);
void KBusyIndicatorWidget_HideEvent(KBusyIndicatorWidget* self, QHideEvent* event);
void KBusyIndicatorWidget_ResizeEvent(KBusyIndicatorWidget* self, QResizeEvent* event);
void KBusyIndicatorWidget_PaintEvent(KBusyIndicatorWidget* self, QPaintEvent* param1);
bool KBusyIndicatorWidget_Event(KBusyIndicatorWidget* self, QEvent* event);
void KBusyIndicatorWidget_SetRunning1(KBusyIndicatorWidget* self, const bool enable);
void KBusyIndicatorWidget_OnMetaObject(const KBusyIndicatorWidget* self, intptr_t slot);
QMetaObject* KBusyIndicatorWidget_SuperMetaObject(const KBusyIndicatorWidget* self);
void KBusyIndicatorWidget_OnMetacast(KBusyIndicatorWidget* self, intptr_t slot);
void* KBusyIndicatorWidget_SuperMetacast(KBusyIndicatorWidget* self, const char* param1);
void KBusyIndicatorWidget_OnMetacall(KBusyIndicatorWidget* self, intptr_t slot);
int KBusyIndicatorWidget_SuperMetacall(KBusyIndicatorWidget* self, int param1, int param2, void** param3);
void KBusyIndicatorWidget_OnMinimumSizeHint(const KBusyIndicatorWidget* self, intptr_t slot);
QSize* KBusyIndicatorWidget_SuperMinimumSizeHint(const KBusyIndicatorWidget* self);
void KBusyIndicatorWidget_OnShowEvent(KBusyIndicatorWidget* self, intptr_t slot);
void KBusyIndicatorWidget_SuperShowEvent(KBusyIndicatorWidget* self, QShowEvent* event);
void KBusyIndicatorWidget_OnHideEvent(KBusyIndicatorWidget* self, intptr_t slot);
void KBusyIndicatorWidget_SuperHideEvent(KBusyIndicatorWidget* self, QHideEvent* event);
void KBusyIndicatorWidget_OnResizeEvent(KBusyIndicatorWidget* self, intptr_t slot);
void KBusyIndicatorWidget_SuperResizeEvent(KBusyIndicatorWidget* self, QResizeEvent* event);
void KBusyIndicatorWidget_OnPaintEvent(KBusyIndicatorWidget* self, intptr_t slot);
void KBusyIndicatorWidget_SuperPaintEvent(KBusyIndicatorWidget* self, QPaintEvent* param1);
void KBusyIndicatorWidget_OnEvent(KBusyIndicatorWidget* self, intptr_t slot);
bool KBusyIndicatorWidget_SuperEvent(KBusyIndicatorWidget* self, QEvent* event);
int KBusyIndicatorWidget_DevType(const KBusyIndicatorWidget* self);
void KBusyIndicatorWidget_OnDevType(const KBusyIndicatorWidget* self, intptr_t slot);
int KBusyIndicatorWidget_SuperDevType(const KBusyIndicatorWidget* self);
void KBusyIndicatorWidget_SetVisible(KBusyIndicatorWidget* self, bool visible);
void KBusyIndicatorWidget_OnSetVisible(KBusyIndicatorWidget* self, intptr_t slot);
void KBusyIndicatorWidget_SuperSetVisible(KBusyIndicatorWidget* self, bool visible);
QSize* KBusyIndicatorWidget_SizeHint(const KBusyIndicatorWidget* self);
void KBusyIndicatorWidget_OnSizeHint(const KBusyIndicatorWidget* self, intptr_t slot);
QSize* KBusyIndicatorWidget_SuperSizeHint(const KBusyIndicatorWidget* self);
int KBusyIndicatorWidget_HeightForWidth(const KBusyIndicatorWidget* self, int param1);
void KBusyIndicatorWidget_OnHeightForWidth(const KBusyIndicatorWidget* self, intptr_t slot);
int KBusyIndicatorWidget_SuperHeightForWidth(const KBusyIndicatorWidget* self, int param1);
bool KBusyIndicatorWidget_HasHeightForWidth(const KBusyIndicatorWidget* self);
void KBusyIndicatorWidget_OnHasHeightForWidth(const KBusyIndicatorWidget* self, intptr_t slot);
bool KBusyIndicatorWidget_SuperHasHeightForWidth(const KBusyIndicatorWidget* self);
QPaintEngine* KBusyIndicatorWidget_PaintEngine(const KBusyIndicatorWidget* self);
void KBusyIndicatorWidget_OnPaintEngine(const KBusyIndicatorWidget* self, intptr_t slot);
QPaintEngine* KBusyIndicatorWidget_SuperPaintEngine(const KBusyIndicatorWidget* self);
void KBusyIndicatorWidget_MousePressEvent(KBusyIndicatorWidget* self, QMouseEvent* event);
void KBusyIndicatorWidget_OnMousePressEvent(KBusyIndicatorWidget* self, intptr_t slot);
void KBusyIndicatorWidget_SuperMousePressEvent(KBusyIndicatorWidget* self, QMouseEvent* event);
void KBusyIndicatorWidget_MouseReleaseEvent(KBusyIndicatorWidget* self, QMouseEvent* event);
void KBusyIndicatorWidget_OnMouseReleaseEvent(KBusyIndicatorWidget* self, intptr_t slot);
void KBusyIndicatorWidget_SuperMouseReleaseEvent(KBusyIndicatorWidget* self, QMouseEvent* event);
void KBusyIndicatorWidget_MouseDoubleClickEvent(KBusyIndicatorWidget* self, QMouseEvent* event);
void KBusyIndicatorWidget_OnMouseDoubleClickEvent(KBusyIndicatorWidget* self, intptr_t slot);
void KBusyIndicatorWidget_SuperMouseDoubleClickEvent(KBusyIndicatorWidget* self, QMouseEvent* event);
void KBusyIndicatorWidget_MouseMoveEvent(KBusyIndicatorWidget* self, QMouseEvent* event);
void KBusyIndicatorWidget_OnMouseMoveEvent(KBusyIndicatorWidget* self, intptr_t slot);
void KBusyIndicatorWidget_SuperMouseMoveEvent(KBusyIndicatorWidget* self, QMouseEvent* event);
void KBusyIndicatorWidget_WheelEvent(KBusyIndicatorWidget* self, QWheelEvent* event);
void KBusyIndicatorWidget_OnWheelEvent(KBusyIndicatorWidget* self, intptr_t slot);
void KBusyIndicatorWidget_SuperWheelEvent(KBusyIndicatorWidget* self, QWheelEvent* event);
void KBusyIndicatorWidget_KeyPressEvent(KBusyIndicatorWidget* self, QKeyEvent* event);
void KBusyIndicatorWidget_OnKeyPressEvent(KBusyIndicatorWidget* self, intptr_t slot);
void KBusyIndicatorWidget_SuperKeyPressEvent(KBusyIndicatorWidget* self, QKeyEvent* event);
void KBusyIndicatorWidget_KeyReleaseEvent(KBusyIndicatorWidget* self, QKeyEvent* event);
void KBusyIndicatorWidget_OnKeyReleaseEvent(KBusyIndicatorWidget* self, intptr_t slot);
void KBusyIndicatorWidget_SuperKeyReleaseEvent(KBusyIndicatorWidget* self, QKeyEvent* event);
void KBusyIndicatorWidget_FocusInEvent(KBusyIndicatorWidget* self, QFocusEvent* event);
void KBusyIndicatorWidget_OnFocusInEvent(KBusyIndicatorWidget* self, intptr_t slot);
void KBusyIndicatorWidget_SuperFocusInEvent(KBusyIndicatorWidget* self, QFocusEvent* event);
void KBusyIndicatorWidget_FocusOutEvent(KBusyIndicatorWidget* self, QFocusEvent* event);
void KBusyIndicatorWidget_OnFocusOutEvent(KBusyIndicatorWidget* self, intptr_t slot);
void KBusyIndicatorWidget_SuperFocusOutEvent(KBusyIndicatorWidget* self, QFocusEvent* event);
void KBusyIndicatorWidget_EnterEvent(KBusyIndicatorWidget* self, QEnterEvent* event);
void KBusyIndicatorWidget_OnEnterEvent(KBusyIndicatorWidget* self, intptr_t slot);
void KBusyIndicatorWidget_SuperEnterEvent(KBusyIndicatorWidget* self, QEnterEvent* event);
void KBusyIndicatorWidget_LeaveEvent(KBusyIndicatorWidget* self, QEvent* event);
void KBusyIndicatorWidget_OnLeaveEvent(KBusyIndicatorWidget* self, intptr_t slot);
void KBusyIndicatorWidget_SuperLeaveEvent(KBusyIndicatorWidget* self, QEvent* event);
void KBusyIndicatorWidget_MoveEvent(KBusyIndicatorWidget* self, QMoveEvent* event);
void KBusyIndicatorWidget_OnMoveEvent(KBusyIndicatorWidget* self, intptr_t slot);
void KBusyIndicatorWidget_SuperMoveEvent(KBusyIndicatorWidget* self, QMoveEvent* event);
void KBusyIndicatorWidget_CloseEvent(KBusyIndicatorWidget* self, QCloseEvent* event);
void KBusyIndicatorWidget_OnCloseEvent(KBusyIndicatorWidget* self, intptr_t slot);
void KBusyIndicatorWidget_SuperCloseEvent(KBusyIndicatorWidget* self, QCloseEvent* event);
void KBusyIndicatorWidget_ContextMenuEvent(KBusyIndicatorWidget* self, QContextMenuEvent* event);
void KBusyIndicatorWidget_OnContextMenuEvent(KBusyIndicatorWidget* self, intptr_t slot);
void KBusyIndicatorWidget_SuperContextMenuEvent(KBusyIndicatorWidget* self, QContextMenuEvent* event);
void KBusyIndicatorWidget_TabletEvent(KBusyIndicatorWidget* self, QTabletEvent* event);
void KBusyIndicatorWidget_OnTabletEvent(KBusyIndicatorWidget* self, intptr_t slot);
void KBusyIndicatorWidget_SuperTabletEvent(KBusyIndicatorWidget* self, QTabletEvent* event);
void KBusyIndicatorWidget_ActionEvent(KBusyIndicatorWidget* self, QActionEvent* event);
void KBusyIndicatorWidget_OnActionEvent(KBusyIndicatorWidget* self, intptr_t slot);
void KBusyIndicatorWidget_SuperActionEvent(KBusyIndicatorWidget* self, QActionEvent* event);
void KBusyIndicatorWidget_DragEnterEvent(KBusyIndicatorWidget* self, QDragEnterEvent* event);
void KBusyIndicatorWidget_OnDragEnterEvent(KBusyIndicatorWidget* self, intptr_t slot);
void KBusyIndicatorWidget_SuperDragEnterEvent(KBusyIndicatorWidget* self, QDragEnterEvent* event);
void KBusyIndicatorWidget_DragMoveEvent(KBusyIndicatorWidget* self, QDragMoveEvent* event);
void KBusyIndicatorWidget_OnDragMoveEvent(KBusyIndicatorWidget* self, intptr_t slot);
void KBusyIndicatorWidget_SuperDragMoveEvent(KBusyIndicatorWidget* self, QDragMoveEvent* event);
void KBusyIndicatorWidget_DragLeaveEvent(KBusyIndicatorWidget* self, QDragLeaveEvent* event);
void KBusyIndicatorWidget_OnDragLeaveEvent(KBusyIndicatorWidget* self, intptr_t slot);
void KBusyIndicatorWidget_SuperDragLeaveEvent(KBusyIndicatorWidget* self, QDragLeaveEvent* event);
void KBusyIndicatorWidget_DropEvent(KBusyIndicatorWidget* self, QDropEvent* event);
void KBusyIndicatorWidget_OnDropEvent(KBusyIndicatorWidget* self, intptr_t slot);
void KBusyIndicatorWidget_SuperDropEvent(KBusyIndicatorWidget* self, QDropEvent* event);
bool KBusyIndicatorWidget_NativeEvent(KBusyIndicatorWidget* self, const libqt_string eventType, void* message, intptr_t* result);
void KBusyIndicatorWidget_OnNativeEvent(KBusyIndicatorWidget* self, intptr_t slot);
bool KBusyIndicatorWidget_SuperNativeEvent(KBusyIndicatorWidget* self, const libqt_string eventType, void* message, intptr_t* result);
void KBusyIndicatorWidget_ChangeEvent(KBusyIndicatorWidget* self, QEvent* param1);
void KBusyIndicatorWidget_OnChangeEvent(KBusyIndicatorWidget* self, intptr_t slot);
void KBusyIndicatorWidget_SuperChangeEvent(KBusyIndicatorWidget* self, QEvent* param1);
int KBusyIndicatorWidget_Metric(const KBusyIndicatorWidget* self, int param1);
void KBusyIndicatorWidget_OnMetric(const KBusyIndicatorWidget* self, intptr_t slot);
int KBusyIndicatorWidget_SuperMetric(const KBusyIndicatorWidget* self, int param1);
void KBusyIndicatorWidget_InitPainter(const KBusyIndicatorWidget* self, QPainter* painter);
void KBusyIndicatorWidget_OnInitPainter(const KBusyIndicatorWidget* self, intptr_t slot);
void KBusyIndicatorWidget_SuperInitPainter(const KBusyIndicatorWidget* self, QPainter* painter);
QPaintDevice* KBusyIndicatorWidget_Redirected(const KBusyIndicatorWidget* self, QPoint* offset);
void KBusyIndicatorWidget_OnRedirected(const KBusyIndicatorWidget* self, intptr_t slot);
QPaintDevice* KBusyIndicatorWidget_SuperRedirected(const KBusyIndicatorWidget* self, QPoint* offset);
QPainter* KBusyIndicatorWidget_SharedPainter(const KBusyIndicatorWidget* self);
void KBusyIndicatorWidget_OnSharedPainter(const KBusyIndicatorWidget* self, intptr_t slot);
QPainter* KBusyIndicatorWidget_SuperSharedPainter(const KBusyIndicatorWidget* self);
void KBusyIndicatorWidget_InputMethodEvent(KBusyIndicatorWidget* self, QInputMethodEvent* param1);
void KBusyIndicatorWidget_OnInputMethodEvent(KBusyIndicatorWidget* self, intptr_t slot);
void KBusyIndicatorWidget_SuperInputMethodEvent(KBusyIndicatorWidget* self, QInputMethodEvent* param1);
QVariant* KBusyIndicatorWidget_InputMethodQuery(const KBusyIndicatorWidget* self, int param1);
void KBusyIndicatorWidget_OnInputMethodQuery(const KBusyIndicatorWidget* self, intptr_t slot);
QVariant* KBusyIndicatorWidget_SuperInputMethodQuery(const KBusyIndicatorWidget* self, int param1);
bool KBusyIndicatorWidget_FocusNextPrevChild(KBusyIndicatorWidget* self, bool next);
void KBusyIndicatorWidget_OnFocusNextPrevChild(KBusyIndicatorWidget* self, intptr_t slot);
bool KBusyIndicatorWidget_SuperFocusNextPrevChild(KBusyIndicatorWidget* self, bool next);
bool KBusyIndicatorWidget_EventFilter(KBusyIndicatorWidget* self, QObject* watched, QEvent* event);
void KBusyIndicatorWidget_OnEventFilter(KBusyIndicatorWidget* self, intptr_t slot);
bool KBusyIndicatorWidget_SuperEventFilter(KBusyIndicatorWidget* self, QObject* watched, QEvent* event);
void KBusyIndicatorWidget_TimerEvent(KBusyIndicatorWidget* self, QTimerEvent* event);
void KBusyIndicatorWidget_OnTimerEvent(KBusyIndicatorWidget* self, intptr_t slot);
void KBusyIndicatorWidget_SuperTimerEvent(KBusyIndicatorWidget* self, QTimerEvent* event);
void KBusyIndicatorWidget_ChildEvent(KBusyIndicatorWidget* self, QChildEvent* event);
void KBusyIndicatorWidget_OnChildEvent(KBusyIndicatorWidget* self, intptr_t slot);
void KBusyIndicatorWidget_SuperChildEvent(KBusyIndicatorWidget* self, QChildEvent* event);
void KBusyIndicatorWidget_CustomEvent(KBusyIndicatorWidget* self, QEvent* event);
void KBusyIndicatorWidget_OnCustomEvent(KBusyIndicatorWidget* self, intptr_t slot);
void KBusyIndicatorWidget_SuperCustomEvent(KBusyIndicatorWidget* self, QEvent* event);
void KBusyIndicatorWidget_ConnectNotify(KBusyIndicatorWidget* self, const QMetaMethod* signal);
void KBusyIndicatorWidget_OnConnectNotify(KBusyIndicatorWidget* self, intptr_t slot);
void KBusyIndicatorWidget_SuperConnectNotify(KBusyIndicatorWidget* self, const QMetaMethod* signal);
void KBusyIndicatorWidget_DisconnectNotify(KBusyIndicatorWidget* self, const QMetaMethod* signal);
void KBusyIndicatorWidget_OnDisconnectNotify(KBusyIndicatorWidget* self, intptr_t slot);
void KBusyIndicatorWidget_SuperDisconnectNotify(KBusyIndicatorWidget* self, const QMetaMethod* signal);
void KBusyIndicatorWidget_UpdateMicroFocus(KBusyIndicatorWidget* self);
void KBusyIndicatorWidget_OnUpdateMicroFocus(KBusyIndicatorWidget* self, intptr_t slot);
void KBusyIndicatorWidget_SuperUpdateMicroFocus(KBusyIndicatorWidget* self);
void KBusyIndicatorWidget_Create(KBusyIndicatorWidget* self);
void KBusyIndicatorWidget_OnCreate(KBusyIndicatorWidget* self, intptr_t slot);
void KBusyIndicatorWidget_SuperCreate(KBusyIndicatorWidget* self);
void KBusyIndicatorWidget_Destroy(KBusyIndicatorWidget* self);
void KBusyIndicatorWidget_OnDestroy(KBusyIndicatorWidget* self, intptr_t slot);
void KBusyIndicatorWidget_SuperDestroy(KBusyIndicatorWidget* self);
bool KBusyIndicatorWidget_FocusNextChild(KBusyIndicatorWidget* self);
void KBusyIndicatorWidget_OnFocusNextChild(KBusyIndicatorWidget* self, intptr_t slot);
bool KBusyIndicatorWidget_SuperFocusNextChild(KBusyIndicatorWidget* self);
bool KBusyIndicatorWidget_FocusPreviousChild(KBusyIndicatorWidget* self);
void KBusyIndicatorWidget_OnFocusPreviousChild(KBusyIndicatorWidget* self, intptr_t slot);
bool KBusyIndicatorWidget_SuperFocusPreviousChild(KBusyIndicatorWidget* self);
QObject* KBusyIndicatorWidget_Sender(const KBusyIndicatorWidget* self);
void KBusyIndicatorWidget_OnSender(const KBusyIndicatorWidget* self, intptr_t slot);
QObject* KBusyIndicatorWidget_SuperSender(const KBusyIndicatorWidget* self);
int KBusyIndicatorWidget_SenderSignalIndex(const KBusyIndicatorWidget* self);
void KBusyIndicatorWidget_OnSenderSignalIndex(const KBusyIndicatorWidget* self, intptr_t slot);
int KBusyIndicatorWidget_SuperSenderSignalIndex(const KBusyIndicatorWidget* self);
int KBusyIndicatorWidget_Receivers(const KBusyIndicatorWidget* self, const char* signal);
void KBusyIndicatorWidget_OnReceivers(const KBusyIndicatorWidget* self, intptr_t slot);
int KBusyIndicatorWidget_SuperReceivers(const KBusyIndicatorWidget* self, const char* signal);
bool KBusyIndicatorWidget_IsSignalConnected(const KBusyIndicatorWidget* self, const QMetaMethod* signal);
void KBusyIndicatorWidget_OnIsSignalConnected(const KBusyIndicatorWidget* self, intptr_t slot);
bool KBusyIndicatorWidget_SuperIsSignalConnected(const KBusyIndicatorWidget* self, const QMetaMethod* signal);
double KBusyIndicatorWidget_GetDecodedMetricF(const KBusyIndicatorWidget* self, int metricA, int metricB);
void KBusyIndicatorWidget_OnGetDecodedMetricF(const KBusyIndicatorWidget* self, intptr_t slot);
double KBusyIndicatorWidget_SuperGetDecodedMetricF(const KBusyIndicatorWidget* self, int metricA, int metricB);
void KBusyIndicatorWidget_Delete(KBusyIndicatorWidget* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
