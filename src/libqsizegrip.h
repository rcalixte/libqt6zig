#pragma once
#ifndef SRCC_LIBQSIZEGRIP_H
#define SRCC_LIBQSIZEGRIP_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
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
typedef struct QSizeGrip QSizeGrip;
typedef struct QTabletEvent QTabletEvent;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
typedef struct QWheelEvent QWheelEvent;
typedef struct QWidget QWidget;
#endif

QSizeGrip* QSizeGrip_new(QWidget* parent);
QMetaObject* QSizeGrip_MetaObject(const QSizeGrip* self);
void* QSizeGrip_Metacast(QSizeGrip* self, const char* param1);
int QSizeGrip_Metacall(QSizeGrip* self, int param1, int param2, void** param3);
QSize* QSizeGrip_SizeHint(const QSizeGrip* self);
void QSizeGrip_SetVisible(QSizeGrip* self, bool visible);
void QSizeGrip_PaintEvent(QSizeGrip* self, QPaintEvent* param1);
void QSizeGrip_MousePressEvent(QSizeGrip* self, QMouseEvent* param1);
void QSizeGrip_MouseMoveEvent(QSizeGrip* self, QMouseEvent* param1);
void QSizeGrip_MouseReleaseEvent(QSizeGrip* self, QMouseEvent* mouseEvent);
void QSizeGrip_MoveEvent(QSizeGrip* self, QMoveEvent* moveEvent);
void QSizeGrip_ShowEvent(QSizeGrip* self, QShowEvent* showEvent);
void QSizeGrip_HideEvent(QSizeGrip* self, QHideEvent* hideEvent);
bool QSizeGrip_EventFilter(QSizeGrip* self, QObject* param1, QEvent* param2);
bool QSizeGrip_Event(QSizeGrip* self, QEvent* param1);
void QSizeGrip_OnMetaObject(const QSizeGrip* self, intptr_t slot);
QMetaObject* QSizeGrip_SuperMetaObject(const QSizeGrip* self);
void QSizeGrip_OnMetacast(QSizeGrip* self, intptr_t slot);
void* QSizeGrip_SuperMetacast(QSizeGrip* self, const char* param1);
void QSizeGrip_OnMetacall(QSizeGrip* self, intptr_t slot);
int QSizeGrip_SuperMetacall(QSizeGrip* self, int param1, int param2, void** param3);
void QSizeGrip_OnSizeHint(const QSizeGrip* self, intptr_t slot);
QSize* QSizeGrip_SuperSizeHint(const QSizeGrip* self);
void QSizeGrip_OnSetVisible(QSizeGrip* self, intptr_t slot);
void QSizeGrip_SuperSetVisible(QSizeGrip* self, bool visible);
void QSizeGrip_OnPaintEvent(QSizeGrip* self, intptr_t slot);
void QSizeGrip_SuperPaintEvent(QSizeGrip* self, QPaintEvent* param1);
void QSizeGrip_OnMousePressEvent(QSizeGrip* self, intptr_t slot);
void QSizeGrip_SuperMousePressEvent(QSizeGrip* self, QMouseEvent* param1);
void QSizeGrip_OnMouseMoveEvent(QSizeGrip* self, intptr_t slot);
void QSizeGrip_SuperMouseMoveEvent(QSizeGrip* self, QMouseEvent* param1);
void QSizeGrip_OnMouseReleaseEvent(QSizeGrip* self, intptr_t slot);
void QSizeGrip_SuperMouseReleaseEvent(QSizeGrip* self, QMouseEvent* mouseEvent);
void QSizeGrip_OnMoveEvent(QSizeGrip* self, intptr_t slot);
void QSizeGrip_SuperMoveEvent(QSizeGrip* self, QMoveEvent* moveEvent);
void QSizeGrip_OnShowEvent(QSizeGrip* self, intptr_t slot);
void QSizeGrip_SuperShowEvent(QSizeGrip* self, QShowEvent* showEvent);
void QSizeGrip_OnHideEvent(QSizeGrip* self, intptr_t slot);
void QSizeGrip_SuperHideEvent(QSizeGrip* self, QHideEvent* hideEvent);
void QSizeGrip_OnEventFilter(QSizeGrip* self, intptr_t slot);
bool QSizeGrip_SuperEventFilter(QSizeGrip* self, QObject* param1, QEvent* param2);
void QSizeGrip_OnEvent(QSizeGrip* self, intptr_t slot);
bool QSizeGrip_SuperEvent(QSizeGrip* self, QEvent* param1);
int QSizeGrip_DevType(const QSizeGrip* self);
void QSizeGrip_OnDevType(const QSizeGrip* self, intptr_t slot);
int QSizeGrip_SuperDevType(const QSizeGrip* self);
QSize* QSizeGrip_MinimumSizeHint(const QSizeGrip* self);
void QSizeGrip_OnMinimumSizeHint(const QSizeGrip* self, intptr_t slot);
QSize* QSizeGrip_SuperMinimumSizeHint(const QSizeGrip* self);
int QSizeGrip_HeightForWidth(const QSizeGrip* self, int param1);
void QSizeGrip_OnHeightForWidth(const QSizeGrip* self, intptr_t slot);
int QSizeGrip_SuperHeightForWidth(const QSizeGrip* self, int param1);
bool QSizeGrip_HasHeightForWidth(const QSizeGrip* self);
void QSizeGrip_OnHasHeightForWidth(const QSizeGrip* self, intptr_t slot);
bool QSizeGrip_SuperHasHeightForWidth(const QSizeGrip* self);
QPaintEngine* QSizeGrip_PaintEngine(const QSizeGrip* self);
void QSizeGrip_OnPaintEngine(const QSizeGrip* self, intptr_t slot);
QPaintEngine* QSizeGrip_SuperPaintEngine(const QSizeGrip* self);
void QSizeGrip_MouseDoubleClickEvent(QSizeGrip* self, QMouseEvent* event);
void QSizeGrip_OnMouseDoubleClickEvent(QSizeGrip* self, intptr_t slot);
void QSizeGrip_SuperMouseDoubleClickEvent(QSizeGrip* self, QMouseEvent* event);
void QSizeGrip_WheelEvent(QSizeGrip* self, QWheelEvent* event);
void QSizeGrip_OnWheelEvent(QSizeGrip* self, intptr_t slot);
void QSizeGrip_SuperWheelEvent(QSizeGrip* self, QWheelEvent* event);
void QSizeGrip_KeyPressEvent(QSizeGrip* self, QKeyEvent* event);
void QSizeGrip_OnKeyPressEvent(QSizeGrip* self, intptr_t slot);
void QSizeGrip_SuperKeyPressEvent(QSizeGrip* self, QKeyEvent* event);
void QSizeGrip_KeyReleaseEvent(QSizeGrip* self, QKeyEvent* event);
void QSizeGrip_OnKeyReleaseEvent(QSizeGrip* self, intptr_t slot);
void QSizeGrip_SuperKeyReleaseEvent(QSizeGrip* self, QKeyEvent* event);
void QSizeGrip_FocusInEvent(QSizeGrip* self, QFocusEvent* event);
void QSizeGrip_OnFocusInEvent(QSizeGrip* self, intptr_t slot);
void QSizeGrip_SuperFocusInEvent(QSizeGrip* self, QFocusEvent* event);
void QSizeGrip_FocusOutEvent(QSizeGrip* self, QFocusEvent* event);
void QSizeGrip_OnFocusOutEvent(QSizeGrip* self, intptr_t slot);
void QSizeGrip_SuperFocusOutEvent(QSizeGrip* self, QFocusEvent* event);
void QSizeGrip_EnterEvent(QSizeGrip* self, QEnterEvent* event);
void QSizeGrip_OnEnterEvent(QSizeGrip* self, intptr_t slot);
void QSizeGrip_SuperEnterEvent(QSizeGrip* self, QEnterEvent* event);
void QSizeGrip_LeaveEvent(QSizeGrip* self, QEvent* event);
void QSizeGrip_OnLeaveEvent(QSizeGrip* self, intptr_t slot);
void QSizeGrip_SuperLeaveEvent(QSizeGrip* self, QEvent* event);
void QSizeGrip_ResizeEvent(QSizeGrip* self, QResizeEvent* event);
void QSizeGrip_OnResizeEvent(QSizeGrip* self, intptr_t slot);
void QSizeGrip_SuperResizeEvent(QSizeGrip* self, QResizeEvent* event);
void QSizeGrip_CloseEvent(QSizeGrip* self, QCloseEvent* event);
void QSizeGrip_OnCloseEvent(QSizeGrip* self, intptr_t slot);
void QSizeGrip_SuperCloseEvent(QSizeGrip* self, QCloseEvent* event);
void QSizeGrip_ContextMenuEvent(QSizeGrip* self, QContextMenuEvent* event);
void QSizeGrip_OnContextMenuEvent(QSizeGrip* self, intptr_t slot);
void QSizeGrip_SuperContextMenuEvent(QSizeGrip* self, QContextMenuEvent* event);
void QSizeGrip_TabletEvent(QSizeGrip* self, QTabletEvent* event);
void QSizeGrip_OnTabletEvent(QSizeGrip* self, intptr_t slot);
void QSizeGrip_SuperTabletEvent(QSizeGrip* self, QTabletEvent* event);
void QSizeGrip_ActionEvent(QSizeGrip* self, QActionEvent* event);
void QSizeGrip_OnActionEvent(QSizeGrip* self, intptr_t slot);
void QSizeGrip_SuperActionEvent(QSizeGrip* self, QActionEvent* event);
void QSizeGrip_DragEnterEvent(QSizeGrip* self, QDragEnterEvent* event);
void QSizeGrip_OnDragEnterEvent(QSizeGrip* self, intptr_t slot);
void QSizeGrip_SuperDragEnterEvent(QSizeGrip* self, QDragEnterEvent* event);
void QSizeGrip_DragMoveEvent(QSizeGrip* self, QDragMoveEvent* event);
void QSizeGrip_OnDragMoveEvent(QSizeGrip* self, intptr_t slot);
void QSizeGrip_SuperDragMoveEvent(QSizeGrip* self, QDragMoveEvent* event);
void QSizeGrip_DragLeaveEvent(QSizeGrip* self, QDragLeaveEvent* event);
void QSizeGrip_OnDragLeaveEvent(QSizeGrip* self, intptr_t slot);
void QSizeGrip_SuperDragLeaveEvent(QSizeGrip* self, QDragLeaveEvent* event);
void QSizeGrip_DropEvent(QSizeGrip* self, QDropEvent* event);
void QSizeGrip_OnDropEvent(QSizeGrip* self, intptr_t slot);
void QSizeGrip_SuperDropEvent(QSizeGrip* self, QDropEvent* event);
bool QSizeGrip_NativeEvent(QSizeGrip* self, const libqt_string eventType, void* message, intptr_t* result);
void QSizeGrip_OnNativeEvent(QSizeGrip* self, intptr_t slot);
bool QSizeGrip_SuperNativeEvent(QSizeGrip* self, const libqt_string eventType, void* message, intptr_t* result);
void QSizeGrip_ChangeEvent(QSizeGrip* self, QEvent* param1);
void QSizeGrip_OnChangeEvent(QSizeGrip* self, intptr_t slot);
void QSizeGrip_SuperChangeEvent(QSizeGrip* self, QEvent* param1);
int QSizeGrip_Metric(const QSizeGrip* self, int param1);
void QSizeGrip_OnMetric(const QSizeGrip* self, intptr_t slot);
int QSizeGrip_SuperMetric(const QSizeGrip* self, int param1);
void QSizeGrip_InitPainter(const QSizeGrip* self, QPainter* painter);
void QSizeGrip_OnInitPainter(const QSizeGrip* self, intptr_t slot);
void QSizeGrip_SuperInitPainter(const QSizeGrip* self, QPainter* painter);
QPaintDevice* QSizeGrip_Redirected(const QSizeGrip* self, QPoint* offset);
void QSizeGrip_OnRedirected(const QSizeGrip* self, intptr_t slot);
QPaintDevice* QSizeGrip_SuperRedirected(const QSizeGrip* self, QPoint* offset);
QPainter* QSizeGrip_SharedPainter(const QSizeGrip* self);
void QSizeGrip_OnSharedPainter(const QSizeGrip* self, intptr_t slot);
QPainter* QSizeGrip_SuperSharedPainter(const QSizeGrip* self);
void QSizeGrip_InputMethodEvent(QSizeGrip* self, QInputMethodEvent* param1);
void QSizeGrip_OnInputMethodEvent(QSizeGrip* self, intptr_t slot);
void QSizeGrip_SuperInputMethodEvent(QSizeGrip* self, QInputMethodEvent* param1);
QVariant* QSizeGrip_InputMethodQuery(const QSizeGrip* self, int param1);
void QSizeGrip_OnInputMethodQuery(const QSizeGrip* self, intptr_t slot);
QVariant* QSizeGrip_SuperInputMethodQuery(const QSizeGrip* self, int param1);
bool QSizeGrip_FocusNextPrevChild(QSizeGrip* self, bool next);
void QSizeGrip_OnFocusNextPrevChild(QSizeGrip* self, intptr_t slot);
bool QSizeGrip_SuperFocusNextPrevChild(QSizeGrip* self, bool next);
void QSizeGrip_TimerEvent(QSizeGrip* self, QTimerEvent* event);
void QSizeGrip_OnTimerEvent(QSizeGrip* self, intptr_t slot);
void QSizeGrip_SuperTimerEvent(QSizeGrip* self, QTimerEvent* event);
void QSizeGrip_ChildEvent(QSizeGrip* self, QChildEvent* event);
void QSizeGrip_OnChildEvent(QSizeGrip* self, intptr_t slot);
void QSizeGrip_SuperChildEvent(QSizeGrip* self, QChildEvent* event);
void QSizeGrip_CustomEvent(QSizeGrip* self, QEvent* event);
void QSizeGrip_OnCustomEvent(QSizeGrip* self, intptr_t slot);
void QSizeGrip_SuperCustomEvent(QSizeGrip* self, QEvent* event);
void QSizeGrip_ConnectNotify(QSizeGrip* self, const QMetaMethod* signal);
void QSizeGrip_OnConnectNotify(QSizeGrip* self, intptr_t slot);
void QSizeGrip_SuperConnectNotify(QSizeGrip* self, const QMetaMethod* signal);
void QSizeGrip_DisconnectNotify(QSizeGrip* self, const QMetaMethod* signal);
void QSizeGrip_OnDisconnectNotify(QSizeGrip* self, intptr_t slot);
void QSizeGrip_SuperDisconnectNotify(QSizeGrip* self, const QMetaMethod* signal);
void QSizeGrip_UpdateMicroFocus(QSizeGrip* self);
void QSizeGrip_OnUpdateMicroFocus(QSizeGrip* self, intptr_t slot);
void QSizeGrip_SuperUpdateMicroFocus(QSizeGrip* self);
void QSizeGrip_Create(QSizeGrip* self);
void QSizeGrip_OnCreate(QSizeGrip* self, intptr_t slot);
void QSizeGrip_SuperCreate(QSizeGrip* self);
void QSizeGrip_Destroy(QSizeGrip* self);
void QSizeGrip_OnDestroy(QSizeGrip* self, intptr_t slot);
void QSizeGrip_SuperDestroy(QSizeGrip* self);
bool QSizeGrip_FocusNextChild(QSizeGrip* self);
void QSizeGrip_OnFocusNextChild(QSizeGrip* self, intptr_t slot);
bool QSizeGrip_SuperFocusNextChild(QSizeGrip* self);
bool QSizeGrip_FocusPreviousChild(QSizeGrip* self);
void QSizeGrip_OnFocusPreviousChild(QSizeGrip* self, intptr_t slot);
bool QSizeGrip_SuperFocusPreviousChild(QSizeGrip* self);
QObject* QSizeGrip_Sender(const QSizeGrip* self);
void QSizeGrip_OnSender(const QSizeGrip* self, intptr_t slot);
QObject* QSizeGrip_SuperSender(const QSizeGrip* self);
int QSizeGrip_SenderSignalIndex(const QSizeGrip* self);
void QSizeGrip_OnSenderSignalIndex(const QSizeGrip* self, intptr_t slot);
int QSizeGrip_SuperSenderSignalIndex(const QSizeGrip* self);
int QSizeGrip_Receivers(const QSizeGrip* self, const char* signal);
void QSizeGrip_OnReceivers(const QSizeGrip* self, intptr_t slot);
int QSizeGrip_SuperReceivers(const QSizeGrip* self, const char* signal);
bool QSizeGrip_IsSignalConnected(const QSizeGrip* self, const QMetaMethod* signal);
void QSizeGrip_OnIsSignalConnected(const QSizeGrip* self, intptr_t slot);
bool QSizeGrip_SuperIsSignalConnected(const QSizeGrip* self, const QMetaMethod* signal);
double QSizeGrip_GetDecodedMetricF(const QSizeGrip* self, int metricA, int metricB);
void QSizeGrip_OnGetDecodedMetricF(const QSizeGrip* self, intptr_t slot);
double QSizeGrip_SuperGetDecodedMetricF(const QSizeGrip* self, int metricA, int metricB);
void QSizeGrip_Delete(QSizeGrip* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
