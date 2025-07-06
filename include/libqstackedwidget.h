#pragma once
#ifndef SRCC_LIBQSTACKEDWIDGET_H
#define SRCC_LIBQSTACKEDWIDGET_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

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
typedef struct QFrame QFrame;
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
typedef struct QStackedWidget QStackedWidget;
typedef struct QStyleOptionFrame QStyleOptionFrame;
typedef struct QTabletEvent QTabletEvent;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
typedef struct QWheelEvent QWheelEvent;
typedef struct QWidget QWidget;
#endif

QStackedWidget* QStackedWidget_new(QWidget* parent);
QStackedWidget* QStackedWidget_new2();
QMetaObject* QStackedWidget_MetaObject(const QStackedWidget* self);
void* QStackedWidget_Metacast(QStackedWidget* self, const char* param1);
int QStackedWidget_Metacall(QStackedWidget* self, int param1, int param2, void** param3);
void QStackedWidget_OnMetacall(QStackedWidget* self, intptr_t slot);
int QStackedWidget_QBaseMetacall(QStackedWidget* self, int param1, int param2, void** param3);
libqt_string QStackedWidget_Tr(const char* s);
int QStackedWidget_AddWidget(QStackedWidget* self, QWidget* w);
int QStackedWidget_InsertWidget(QStackedWidget* self, int index, QWidget* w);
void QStackedWidget_RemoveWidget(QStackedWidget* self, QWidget* w);
QWidget* QStackedWidget_CurrentWidget(const QStackedWidget* self);
int QStackedWidget_CurrentIndex(const QStackedWidget* self);
int QStackedWidget_IndexOf(const QStackedWidget* self, const QWidget* param1);
QWidget* QStackedWidget_Widget(const QStackedWidget* self, int param1);
int QStackedWidget_Count(const QStackedWidget* self);
void QStackedWidget_SetCurrentIndex(QStackedWidget* self, int index);
void QStackedWidget_SetCurrentWidget(QStackedWidget* self, QWidget* w);
void QStackedWidget_CurrentChanged(QStackedWidget* self, int param1);
void QStackedWidget_Connect_CurrentChanged(QStackedWidget* self, intptr_t slot);
void QStackedWidget_WidgetRemoved(QStackedWidget* self, int index);
void QStackedWidget_Connect_WidgetRemoved(QStackedWidget* self, intptr_t slot);
bool QStackedWidget_Event(QStackedWidget* self, QEvent* e);
void QStackedWidget_OnEvent(QStackedWidget* self, intptr_t slot);
bool QStackedWidget_QBaseEvent(QStackedWidget* self, QEvent* e);
libqt_string QStackedWidget_Tr2(const char* s, const char* c);
libqt_string QStackedWidget_Tr3(const char* s, const char* c, int n);
QSize* QStackedWidget_SizeHint(const QStackedWidget* self);
void QStackedWidget_OnSizeHint(const QStackedWidget* self, intptr_t slot);
QSize* QStackedWidget_QBaseSizeHint(const QStackedWidget* self);
void QStackedWidget_PaintEvent(QStackedWidget* self, QPaintEvent* param1);
void QStackedWidget_OnPaintEvent(QStackedWidget* self, intptr_t slot);
void QStackedWidget_QBasePaintEvent(QStackedWidget* self, QPaintEvent* param1);
void QStackedWidget_ChangeEvent(QStackedWidget* self, QEvent* param1);
void QStackedWidget_OnChangeEvent(QStackedWidget* self, intptr_t slot);
void QStackedWidget_QBaseChangeEvent(QStackedWidget* self, QEvent* param1);
void QStackedWidget_InitStyleOption(const QStackedWidget* self, QStyleOptionFrame* option);
void QStackedWidget_OnInitStyleOption(const QStackedWidget* self, intptr_t slot);
void QStackedWidget_QBaseInitStyleOption(const QStackedWidget* self, QStyleOptionFrame* option);
int QStackedWidget_DevType(const QStackedWidget* self);
void QStackedWidget_OnDevType(const QStackedWidget* self, intptr_t slot);
int QStackedWidget_QBaseDevType(const QStackedWidget* self);
void QStackedWidget_SetVisible(QStackedWidget* self, bool visible);
void QStackedWidget_OnSetVisible(QStackedWidget* self, intptr_t slot);
void QStackedWidget_QBaseSetVisible(QStackedWidget* self, bool visible);
QSize* QStackedWidget_MinimumSizeHint(const QStackedWidget* self);
void QStackedWidget_OnMinimumSizeHint(const QStackedWidget* self, intptr_t slot);
QSize* QStackedWidget_QBaseMinimumSizeHint(const QStackedWidget* self);
int QStackedWidget_HeightForWidth(const QStackedWidget* self, int param1);
void QStackedWidget_OnHeightForWidth(const QStackedWidget* self, intptr_t slot);
int QStackedWidget_QBaseHeightForWidth(const QStackedWidget* self, int param1);
bool QStackedWidget_HasHeightForWidth(const QStackedWidget* self);
void QStackedWidget_OnHasHeightForWidth(const QStackedWidget* self, intptr_t slot);
bool QStackedWidget_QBaseHasHeightForWidth(const QStackedWidget* self);
QPaintEngine* QStackedWidget_PaintEngine(const QStackedWidget* self);
void QStackedWidget_OnPaintEngine(const QStackedWidget* self, intptr_t slot);
QPaintEngine* QStackedWidget_QBasePaintEngine(const QStackedWidget* self);
void QStackedWidget_MousePressEvent(QStackedWidget* self, QMouseEvent* event);
void QStackedWidget_OnMousePressEvent(QStackedWidget* self, intptr_t slot);
void QStackedWidget_QBaseMousePressEvent(QStackedWidget* self, QMouseEvent* event);
void QStackedWidget_MouseReleaseEvent(QStackedWidget* self, QMouseEvent* event);
void QStackedWidget_OnMouseReleaseEvent(QStackedWidget* self, intptr_t slot);
void QStackedWidget_QBaseMouseReleaseEvent(QStackedWidget* self, QMouseEvent* event);
void QStackedWidget_MouseDoubleClickEvent(QStackedWidget* self, QMouseEvent* event);
void QStackedWidget_OnMouseDoubleClickEvent(QStackedWidget* self, intptr_t slot);
void QStackedWidget_QBaseMouseDoubleClickEvent(QStackedWidget* self, QMouseEvent* event);
void QStackedWidget_MouseMoveEvent(QStackedWidget* self, QMouseEvent* event);
void QStackedWidget_OnMouseMoveEvent(QStackedWidget* self, intptr_t slot);
void QStackedWidget_QBaseMouseMoveEvent(QStackedWidget* self, QMouseEvent* event);
void QStackedWidget_WheelEvent(QStackedWidget* self, QWheelEvent* event);
void QStackedWidget_OnWheelEvent(QStackedWidget* self, intptr_t slot);
void QStackedWidget_QBaseWheelEvent(QStackedWidget* self, QWheelEvent* event);
void QStackedWidget_KeyPressEvent(QStackedWidget* self, QKeyEvent* event);
void QStackedWidget_OnKeyPressEvent(QStackedWidget* self, intptr_t slot);
void QStackedWidget_QBaseKeyPressEvent(QStackedWidget* self, QKeyEvent* event);
void QStackedWidget_KeyReleaseEvent(QStackedWidget* self, QKeyEvent* event);
void QStackedWidget_OnKeyReleaseEvent(QStackedWidget* self, intptr_t slot);
void QStackedWidget_QBaseKeyReleaseEvent(QStackedWidget* self, QKeyEvent* event);
void QStackedWidget_FocusInEvent(QStackedWidget* self, QFocusEvent* event);
void QStackedWidget_OnFocusInEvent(QStackedWidget* self, intptr_t slot);
void QStackedWidget_QBaseFocusInEvent(QStackedWidget* self, QFocusEvent* event);
void QStackedWidget_FocusOutEvent(QStackedWidget* self, QFocusEvent* event);
void QStackedWidget_OnFocusOutEvent(QStackedWidget* self, intptr_t slot);
void QStackedWidget_QBaseFocusOutEvent(QStackedWidget* self, QFocusEvent* event);
void QStackedWidget_EnterEvent(QStackedWidget* self, QEnterEvent* event);
void QStackedWidget_OnEnterEvent(QStackedWidget* self, intptr_t slot);
void QStackedWidget_QBaseEnterEvent(QStackedWidget* self, QEnterEvent* event);
void QStackedWidget_LeaveEvent(QStackedWidget* self, QEvent* event);
void QStackedWidget_OnLeaveEvent(QStackedWidget* self, intptr_t slot);
void QStackedWidget_QBaseLeaveEvent(QStackedWidget* self, QEvent* event);
void QStackedWidget_MoveEvent(QStackedWidget* self, QMoveEvent* event);
void QStackedWidget_OnMoveEvent(QStackedWidget* self, intptr_t slot);
void QStackedWidget_QBaseMoveEvent(QStackedWidget* self, QMoveEvent* event);
void QStackedWidget_ResizeEvent(QStackedWidget* self, QResizeEvent* event);
void QStackedWidget_OnResizeEvent(QStackedWidget* self, intptr_t slot);
void QStackedWidget_QBaseResizeEvent(QStackedWidget* self, QResizeEvent* event);
void QStackedWidget_CloseEvent(QStackedWidget* self, QCloseEvent* event);
void QStackedWidget_OnCloseEvent(QStackedWidget* self, intptr_t slot);
void QStackedWidget_QBaseCloseEvent(QStackedWidget* self, QCloseEvent* event);
void QStackedWidget_ContextMenuEvent(QStackedWidget* self, QContextMenuEvent* event);
void QStackedWidget_OnContextMenuEvent(QStackedWidget* self, intptr_t slot);
void QStackedWidget_QBaseContextMenuEvent(QStackedWidget* self, QContextMenuEvent* event);
void QStackedWidget_TabletEvent(QStackedWidget* self, QTabletEvent* event);
void QStackedWidget_OnTabletEvent(QStackedWidget* self, intptr_t slot);
void QStackedWidget_QBaseTabletEvent(QStackedWidget* self, QTabletEvent* event);
void QStackedWidget_ActionEvent(QStackedWidget* self, QActionEvent* event);
void QStackedWidget_OnActionEvent(QStackedWidget* self, intptr_t slot);
void QStackedWidget_QBaseActionEvent(QStackedWidget* self, QActionEvent* event);
void QStackedWidget_DragEnterEvent(QStackedWidget* self, QDragEnterEvent* event);
void QStackedWidget_OnDragEnterEvent(QStackedWidget* self, intptr_t slot);
void QStackedWidget_QBaseDragEnterEvent(QStackedWidget* self, QDragEnterEvent* event);
void QStackedWidget_DragMoveEvent(QStackedWidget* self, QDragMoveEvent* event);
void QStackedWidget_OnDragMoveEvent(QStackedWidget* self, intptr_t slot);
void QStackedWidget_QBaseDragMoveEvent(QStackedWidget* self, QDragMoveEvent* event);
void QStackedWidget_DragLeaveEvent(QStackedWidget* self, QDragLeaveEvent* event);
void QStackedWidget_OnDragLeaveEvent(QStackedWidget* self, intptr_t slot);
void QStackedWidget_QBaseDragLeaveEvent(QStackedWidget* self, QDragLeaveEvent* event);
void QStackedWidget_DropEvent(QStackedWidget* self, QDropEvent* event);
void QStackedWidget_OnDropEvent(QStackedWidget* self, intptr_t slot);
void QStackedWidget_QBaseDropEvent(QStackedWidget* self, QDropEvent* event);
void QStackedWidget_ShowEvent(QStackedWidget* self, QShowEvent* event);
void QStackedWidget_OnShowEvent(QStackedWidget* self, intptr_t slot);
void QStackedWidget_QBaseShowEvent(QStackedWidget* self, QShowEvent* event);
void QStackedWidget_HideEvent(QStackedWidget* self, QHideEvent* event);
void QStackedWidget_OnHideEvent(QStackedWidget* self, intptr_t slot);
void QStackedWidget_QBaseHideEvent(QStackedWidget* self, QHideEvent* event);
bool QStackedWidget_NativeEvent(QStackedWidget* self, const libqt_string eventType, void* message, intptr_t* result);
void QStackedWidget_OnNativeEvent(QStackedWidget* self, intptr_t slot);
bool QStackedWidget_QBaseNativeEvent(QStackedWidget* self, const libqt_string eventType, void* message, intptr_t* result);
int QStackedWidget_Metric(const QStackedWidget* self, int param1);
void QStackedWidget_OnMetric(const QStackedWidget* self, intptr_t slot);
int QStackedWidget_QBaseMetric(const QStackedWidget* self, int param1);
void QStackedWidget_InitPainter(const QStackedWidget* self, QPainter* painter);
void QStackedWidget_OnInitPainter(const QStackedWidget* self, intptr_t slot);
void QStackedWidget_QBaseInitPainter(const QStackedWidget* self, QPainter* painter);
QPaintDevice* QStackedWidget_Redirected(const QStackedWidget* self, QPoint* offset);
void QStackedWidget_OnRedirected(const QStackedWidget* self, intptr_t slot);
QPaintDevice* QStackedWidget_QBaseRedirected(const QStackedWidget* self, QPoint* offset);
QPainter* QStackedWidget_SharedPainter(const QStackedWidget* self);
void QStackedWidget_OnSharedPainter(const QStackedWidget* self, intptr_t slot);
QPainter* QStackedWidget_QBaseSharedPainter(const QStackedWidget* self);
void QStackedWidget_InputMethodEvent(QStackedWidget* self, QInputMethodEvent* param1);
void QStackedWidget_OnInputMethodEvent(QStackedWidget* self, intptr_t slot);
void QStackedWidget_QBaseInputMethodEvent(QStackedWidget* self, QInputMethodEvent* param1);
QVariant* QStackedWidget_InputMethodQuery(const QStackedWidget* self, int param1);
void QStackedWidget_OnInputMethodQuery(const QStackedWidget* self, intptr_t slot);
QVariant* QStackedWidget_QBaseInputMethodQuery(const QStackedWidget* self, int param1);
bool QStackedWidget_FocusNextPrevChild(QStackedWidget* self, bool next);
void QStackedWidget_OnFocusNextPrevChild(QStackedWidget* self, intptr_t slot);
bool QStackedWidget_QBaseFocusNextPrevChild(QStackedWidget* self, bool next);
bool QStackedWidget_EventFilter(QStackedWidget* self, QObject* watched, QEvent* event);
void QStackedWidget_OnEventFilter(QStackedWidget* self, intptr_t slot);
bool QStackedWidget_QBaseEventFilter(QStackedWidget* self, QObject* watched, QEvent* event);
void QStackedWidget_TimerEvent(QStackedWidget* self, QTimerEvent* event);
void QStackedWidget_OnTimerEvent(QStackedWidget* self, intptr_t slot);
void QStackedWidget_QBaseTimerEvent(QStackedWidget* self, QTimerEvent* event);
void QStackedWidget_ChildEvent(QStackedWidget* self, QChildEvent* event);
void QStackedWidget_OnChildEvent(QStackedWidget* self, intptr_t slot);
void QStackedWidget_QBaseChildEvent(QStackedWidget* self, QChildEvent* event);
void QStackedWidget_CustomEvent(QStackedWidget* self, QEvent* event);
void QStackedWidget_OnCustomEvent(QStackedWidget* self, intptr_t slot);
void QStackedWidget_QBaseCustomEvent(QStackedWidget* self, QEvent* event);
void QStackedWidget_ConnectNotify(QStackedWidget* self, const QMetaMethod* signal);
void QStackedWidget_OnConnectNotify(QStackedWidget* self, intptr_t slot);
void QStackedWidget_QBaseConnectNotify(QStackedWidget* self, const QMetaMethod* signal);
void QStackedWidget_DisconnectNotify(QStackedWidget* self, const QMetaMethod* signal);
void QStackedWidget_OnDisconnectNotify(QStackedWidget* self, intptr_t slot);
void QStackedWidget_QBaseDisconnectNotify(QStackedWidget* self, const QMetaMethod* signal);
void QStackedWidget_DrawFrame(QStackedWidget* self, QPainter* param1);
void QStackedWidget_OnDrawFrame(QStackedWidget* self, intptr_t slot);
void QStackedWidget_QBaseDrawFrame(QStackedWidget* self, QPainter* param1);
void QStackedWidget_UpdateMicroFocus(QStackedWidget* self);
void QStackedWidget_OnUpdateMicroFocus(QStackedWidget* self, intptr_t slot);
void QStackedWidget_QBaseUpdateMicroFocus(QStackedWidget* self);
void QStackedWidget_Create(QStackedWidget* self);
void QStackedWidget_OnCreate(QStackedWidget* self, intptr_t slot);
void QStackedWidget_QBaseCreate(QStackedWidget* self);
void QStackedWidget_Destroy(QStackedWidget* self);
void QStackedWidget_OnDestroy(QStackedWidget* self, intptr_t slot);
void QStackedWidget_QBaseDestroy(QStackedWidget* self);
bool QStackedWidget_FocusNextChild(QStackedWidget* self);
void QStackedWidget_OnFocusNextChild(QStackedWidget* self, intptr_t slot);
bool QStackedWidget_QBaseFocusNextChild(QStackedWidget* self);
bool QStackedWidget_FocusPreviousChild(QStackedWidget* self);
void QStackedWidget_OnFocusPreviousChild(QStackedWidget* self, intptr_t slot);
bool QStackedWidget_QBaseFocusPreviousChild(QStackedWidget* self);
QObject* QStackedWidget_Sender(const QStackedWidget* self);
void QStackedWidget_OnSender(const QStackedWidget* self, intptr_t slot);
QObject* QStackedWidget_QBaseSender(const QStackedWidget* self);
int QStackedWidget_SenderSignalIndex(const QStackedWidget* self);
void QStackedWidget_OnSenderSignalIndex(const QStackedWidget* self, intptr_t slot);
int QStackedWidget_QBaseSenderSignalIndex(const QStackedWidget* self);
int QStackedWidget_Receivers(const QStackedWidget* self, const char* signal);
void QStackedWidget_OnReceivers(const QStackedWidget* self, intptr_t slot);
int QStackedWidget_QBaseReceivers(const QStackedWidget* self, const char* signal);
bool QStackedWidget_IsSignalConnected(const QStackedWidget* self, const QMetaMethod* signal);
void QStackedWidget_OnIsSignalConnected(const QStackedWidget* self, intptr_t slot);
bool QStackedWidget_QBaseIsSignalConnected(const QStackedWidget* self, const QMetaMethod* signal);
double QStackedWidget_GetDecodedMetricF(const QStackedWidget* self, int metricA, int metricB);
void QStackedWidget_OnGetDecodedMetricF(const QStackedWidget* self, intptr_t slot);
double QStackedWidget_QBaseGetDecodedMetricF(const QStackedWidget* self, int metricA, int metricB);
void QStackedWidget_Delete(QStackedWidget* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
