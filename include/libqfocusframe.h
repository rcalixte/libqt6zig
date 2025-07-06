#pragma once
#ifndef SRCC_LIBQFOCUSFRAME_H
#define SRCC_LIBQFOCUSFRAME_H

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
typedef struct QFocusFrame QFocusFrame;
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
typedef struct QStyleOption QStyleOption;
typedef struct QTabletEvent QTabletEvent;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
typedef struct QWheelEvent QWheelEvent;
typedef struct QWidget QWidget;
#endif

QFocusFrame* QFocusFrame_new(QWidget* parent);
QFocusFrame* QFocusFrame_new2();
QMetaObject* QFocusFrame_MetaObject(const QFocusFrame* self);
void* QFocusFrame_Metacast(QFocusFrame* self, const char* param1);
int QFocusFrame_Metacall(QFocusFrame* self, int param1, int param2, void** param3);
void QFocusFrame_OnMetacall(QFocusFrame* self, intptr_t slot);
int QFocusFrame_QBaseMetacall(QFocusFrame* self, int param1, int param2, void** param3);
libqt_string QFocusFrame_Tr(const char* s);
void QFocusFrame_SetWidget(QFocusFrame* self, QWidget* widget);
QWidget* QFocusFrame_Widget(const QFocusFrame* self);
bool QFocusFrame_Event(QFocusFrame* self, QEvent* e);
void QFocusFrame_OnEvent(QFocusFrame* self, intptr_t slot);
bool QFocusFrame_QBaseEvent(QFocusFrame* self, QEvent* e);
bool QFocusFrame_EventFilter(QFocusFrame* self, QObject* param1, QEvent* param2);
void QFocusFrame_OnEventFilter(QFocusFrame* self, intptr_t slot);
bool QFocusFrame_QBaseEventFilter(QFocusFrame* self, QObject* param1, QEvent* param2);
void QFocusFrame_PaintEvent(QFocusFrame* self, QPaintEvent* param1);
void QFocusFrame_OnPaintEvent(QFocusFrame* self, intptr_t slot);
void QFocusFrame_QBasePaintEvent(QFocusFrame* self, QPaintEvent* param1);
void QFocusFrame_InitStyleOption(const QFocusFrame* self, QStyleOption* option);
void QFocusFrame_OnInitStyleOption(const QFocusFrame* self, intptr_t slot);
void QFocusFrame_QBaseInitStyleOption(const QFocusFrame* self, QStyleOption* option);
libqt_string QFocusFrame_Tr2(const char* s, const char* c);
libqt_string QFocusFrame_Tr3(const char* s, const char* c, int n);
int QFocusFrame_DevType(const QFocusFrame* self);
void QFocusFrame_OnDevType(const QFocusFrame* self, intptr_t slot);
int QFocusFrame_QBaseDevType(const QFocusFrame* self);
void QFocusFrame_SetVisible(QFocusFrame* self, bool visible);
void QFocusFrame_OnSetVisible(QFocusFrame* self, intptr_t slot);
void QFocusFrame_QBaseSetVisible(QFocusFrame* self, bool visible);
QSize* QFocusFrame_SizeHint(const QFocusFrame* self);
void QFocusFrame_OnSizeHint(const QFocusFrame* self, intptr_t slot);
QSize* QFocusFrame_QBaseSizeHint(const QFocusFrame* self);
QSize* QFocusFrame_MinimumSizeHint(const QFocusFrame* self);
void QFocusFrame_OnMinimumSizeHint(const QFocusFrame* self, intptr_t slot);
QSize* QFocusFrame_QBaseMinimumSizeHint(const QFocusFrame* self);
int QFocusFrame_HeightForWidth(const QFocusFrame* self, int param1);
void QFocusFrame_OnHeightForWidth(const QFocusFrame* self, intptr_t slot);
int QFocusFrame_QBaseHeightForWidth(const QFocusFrame* self, int param1);
bool QFocusFrame_HasHeightForWidth(const QFocusFrame* self);
void QFocusFrame_OnHasHeightForWidth(const QFocusFrame* self, intptr_t slot);
bool QFocusFrame_QBaseHasHeightForWidth(const QFocusFrame* self);
QPaintEngine* QFocusFrame_PaintEngine(const QFocusFrame* self);
void QFocusFrame_OnPaintEngine(const QFocusFrame* self, intptr_t slot);
QPaintEngine* QFocusFrame_QBasePaintEngine(const QFocusFrame* self);
void QFocusFrame_MousePressEvent(QFocusFrame* self, QMouseEvent* event);
void QFocusFrame_OnMousePressEvent(QFocusFrame* self, intptr_t slot);
void QFocusFrame_QBaseMousePressEvent(QFocusFrame* self, QMouseEvent* event);
void QFocusFrame_MouseReleaseEvent(QFocusFrame* self, QMouseEvent* event);
void QFocusFrame_OnMouseReleaseEvent(QFocusFrame* self, intptr_t slot);
void QFocusFrame_QBaseMouseReleaseEvent(QFocusFrame* self, QMouseEvent* event);
void QFocusFrame_MouseDoubleClickEvent(QFocusFrame* self, QMouseEvent* event);
void QFocusFrame_OnMouseDoubleClickEvent(QFocusFrame* self, intptr_t slot);
void QFocusFrame_QBaseMouseDoubleClickEvent(QFocusFrame* self, QMouseEvent* event);
void QFocusFrame_MouseMoveEvent(QFocusFrame* self, QMouseEvent* event);
void QFocusFrame_OnMouseMoveEvent(QFocusFrame* self, intptr_t slot);
void QFocusFrame_QBaseMouseMoveEvent(QFocusFrame* self, QMouseEvent* event);
void QFocusFrame_WheelEvent(QFocusFrame* self, QWheelEvent* event);
void QFocusFrame_OnWheelEvent(QFocusFrame* self, intptr_t slot);
void QFocusFrame_QBaseWheelEvent(QFocusFrame* self, QWheelEvent* event);
void QFocusFrame_KeyPressEvent(QFocusFrame* self, QKeyEvent* event);
void QFocusFrame_OnKeyPressEvent(QFocusFrame* self, intptr_t slot);
void QFocusFrame_QBaseKeyPressEvent(QFocusFrame* self, QKeyEvent* event);
void QFocusFrame_KeyReleaseEvent(QFocusFrame* self, QKeyEvent* event);
void QFocusFrame_OnKeyReleaseEvent(QFocusFrame* self, intptr_t slot);
void QFocusFrame_QBaseKeyReleaseEvent(QFocusFrame* self, QKeyEvent* event);
void QFocusFrame_FocusInEvent(QFocusFrame* self, QFocusEvent* event);
void QFocusFrame_OnFocusInEvent(QFocusFrame* self, intptr_t slot);
void QFocusFrame_QBaseFocusInEvent(QFocusFrame* self, QFocusEvent* event);
void QFocusFrame_FocusOutEvent(QFocusFrame* self, QFocusEvent* event);
void QFocusFrame_OnFocusOutEvent(QFocusFrame* self, intptr_t slot);
void QFocusFrame_QBaseFocusOutEvent(QFocusFrame* self, QFocusEvent* event);
void QFocusFrame_EnterEvent(QFocusFrame* self, QEnterEvent* event);
void QFocusFrame_OnEnterEvent(QFocusFrame* self, intptr_t slot);
void QFocusFrame_QBaseEnterEvent(QFocusFrame* self, QEnterEvent* event);
void QFocusFrame_LeaveEvent(QFocusFrame* self, QEvent* event);
void QFocusFrame_OnLeaveEvent(QFocusFrame* self, intptr_t slot);
void QFocusFrame_QBaseLeaveEvent(QFocusFrame* self, QEvent* event);
void QFocusFrame_MoveEvent(QFocusFrame* self, QMoveEvent* event);
void QFocusFrame_OnMoveEvent(QFocusFrame* self, intptr_t slot);
void QFocusFrame_QBaseMoveEvent(QFocusFrame* self, QMoveEvent* event);
void QFocusFrame_ResizeEvent(QFocusFrame* self, QResizeEvent* event);
void QFocusFrame_OnResizeEvent(QFocusFrame* self, intptr_t slot);
void QFocusFrame_QBaseResizeEvent(QFocusFrame* self, QResizeEvent* event);
void QFocusFrame_CloseEvent(QFocusFrame* self, QCloseEvent* event);
void QFocusFrame_OnCloseEvent(QFocusFrame* self, intptr_t slot);
void QFocusFrame_QBaseCloseEvent(QFocusFrame* self, QCloseEvent* event);
void QFocusFrame_ContextMenuEvent(QFocusFrame* self, QContextMenuEvent* event);
void QFocusFrame_OnContextMenuEvent(QFocusFrame* self, intptr_t slot);
void QFocusFrame_QBaseContextMenuEvent(QFocusFrame* self, QContextMenuEvent* event);
void QFocusFrame_TabletEvent(QFocusFrame* self, QTabletEvent* event);
void QFocusFrame_OnTabletEvent(QFocusFrame* self, intptr_t slot);
void QFocusFrame_QBaseTabletEvent(QFocusFrame* self, QTabletEvent* event);
void QFocusFrame_ActionEvent(QFocusFrame* self, QActionEvent* event);
void QFocusFrame_OnActionEvent(QFocusFrame* self, intptr_t slot);
void QFocusFrame_QBaseActionEvent(QFocusFrame* self, QActionEvent* event);
void QFocusFrame_DragEnterEvent(QFocusFrame* self, QDragEnterEvent* event);
void QFocusFrame_OnDragEnterEvent(QFocusFrame* self, intptr_t slot);
void QFocusFrame_QBaseDragEnterEvent(QFocusFrame* self, QDragEnterEvent* event);
void QFocusFrame_DragMoveEvent(QFocusFrame* self, QDragMoveEvent* event);
void QFocusFrame_OnDragMoveEvent(QFocusFrame* self, intptr_t slot);
void QFocusFrame_QBaseDragMoveEvent(QFocusFrame* self, QDragMoveEvent* event);
void QFocusFrame_DragLeaveEvent(QFocusFrame* self, QDragLeaveEvent* event);
void QFocusFrame_OnDragLeaveEvent(QFocusFrame* self, intptr_t slot);
void QFocusFrame_QBaseDragLeaveEvent(QFocusFrame* self, QDragLeaveEvent* event);
void QFocusFrame_DropEvent(QFocusFrame* self, QDropEvent* event);
void QFocusFrame_OnDropEvent(QFocusFrame* self, intptr_t slot);
void QFocusFrame_QBaseDropEvent(QFocusFrame* self, QDropEvent* event);
void QFocusFrame_ShowEvent(QFocusFrame* self, QShowEvent* event);
void QFocusFrame_OnShowEvent(QFocusFrame* self, intptr_t slot);
void QFocusFrame_QBaseShowEvent(QFocusFrame* self, QShowEvent* event);
void QFocusFrame_HideEvent(QFocusFrame* self, QHideEvent* event);
void QFocusFrame_OnHideEvent(QFocusFrame* self, intptr_t slot);
void QFocusFrame_QBaseHideEvent(QFocusFrame* self, QHideEvent* event);
bool QFocusFrame_NativeEvent(QFocusFrame* self, const libqt_string eventType, void* message, intptr_t* result);
void QFocusFrame_OnNativeEvent(QFocusFrame* self, intptr_t slot);
bool QFocusFrame_QBaseNativeEvent(QFocusFrame* self, const libqt_string eventType, void* message, intptr_t* result);
void QFocusFrame_ChangeEvent(QFocusFrame* self, QEvent* param1);
void QFocusFrame_OnChangeEvent(QFocusFrame* self, intptr_t slot);
void QFocusFrame_QBaseChangeEvent(QFocusFrame* self, QEvent* param1);
int QFocusFrame_Metric(const QFocusFrame* self, int param1);
void QFocusFrame_OnMetric(const QFocusFrame* self, intptr_t slot);
int QFocusFrame_QBaseMetric(const QFocusFrame* self, int param1);
void QFocusFrame_InitPainter(const QFocusFrame* self, QPainter* painter);
void QFocusFrame_OnInitPainter(const QFocusFrame* self, intptr_t slot);
void QFocusFrame_QBaseInitPainter(const QFocusFrame* self, QPainter* painter);
QPaintDevice* QFocusFrame_Redirected(const QFocusFrame* self, QPoint* offset);
void QFocusFrame_OnRedirected(const QFocusFrame* self, intptr_t slot);
QPaintDevice* QFocusFrame_QBaseRedirected(const QFocusFrame* self, QPoint* offset);
QPainter* QFocusFrame_SharedPainter(const QFocusFrame* self);
void QFocusFrame_OnSharedPainter(const QFocusFrame* self, intptr_t slot);
QPainter* QFocusFrame_QBaseSharedPainter(const QFocusFrame* self);
void QFocusFrame_InputMethodEvent(QFocusFrame* self, QInputMethodEvent* param1);
void QFocusFrame_OnInputMethodEvent(QFocusFrame* self, intptr_t slot);
void QFocusFrame_QBaseInputMethodEvent(QFocusFrame* self, QInputMethodEvent* param1);
QVariant* QFocusFrame_InputMethodQuery(const QFocusFrame* self, int param1);
void QFocusFrame_OnInputMethodQuery(const QFocusFrame* self, intptr_t slot);
QVariant* QFocusFrame_QBaseInputMethodQuery(const QFocusFrame* self, int param1);
bool QFocusFrame_FocusNextPrevChild(QFocusFrame* self, bool next);
void QFocusFrame_OnFocusNextPrevChild(QFocusFrame* self, intptr_t slot);
bool QFocusFrame_QBaseFocusNextPrevChild(QFocusFrame* self, bool next);
void QFocusFrame_TimerEvent(QFocusFrame* self, QTimerEvent* event);
void QFocusFrame_OnTimerEvent(QFocusFrame* self, intptr_t slot);
void QFocusFrame_QBaseTimerEvent(QFocusFrame* self, QTimerEvent* event);
void QFocusFrame_ChildEvent(QFocusFrame* self, QChildEvent* event);
void QFocusFrame_OnChildEvent(QFocusFrame* self, intptr_t slot);
void QFocusFrame_QBaseChildEvent(QFocusFrame* self, QChildEvent* event);
void QFocusFrame_CustomEvent(QFocusFrame* self, QEvent* event);
void QFocusFrame_OnCustomEvent(QFocusFrame* self, intptr_t slot);
void QFocusFrame_QBaseCustomEvent(QFocusFrame* self, QEvent* event);
void QFocusFrame_ConnectNotify(QFocusFrame* self, const QMetaMethod* signal);
void QFocusFrame_OnConnectNotify(QFocusFrame* self, intptr_t slot);
void QFocusFrame_QBaseConnectNotify(QFocusFrame* self, const QMetaMethod* signal);
void QFocusFrame_DisconnectNotify(QFocusFrame* self, const QMetaMethod* signal);
void QFocusFrame_OnDisconnectNotify(QFocusFrame* self, intptr_t slot);
void QFocusFrame_QBaseDisconnectNotify(QFocusFrame* self, const QMetaMethod* signal);
void QFocusFrame_UpdateMicroFocus(QFocusFrame* self);
void QFocusFrame_OnUpdateMicroFocus(QFocusFrame* self, intptr_t slot);
void QFocusFrame_QBaseUpdateMicroFocus(QFocusFrame* self);
void QFocusFrame_Create(QFocusFrame* self);
void QFocusFrame_OnCreate(QFocusFrame* self, intptr_t slot);
void QFocusFrame_QBaseCreate(QFocusFrame* self);
void QFocusFrame_Destroy(QFocusFrame* self);
void QFocusFrame_OnDestroy(QFocusFrame* self, intptr_t slot);
void QFocusFrame_QBaseDestroy(QFocusFrame* self);
bool QFocusFrame_FocusNextChild(QFocusFrame* self);
void QFocusFrame_OnFocusNextChild(QFocusFrame* self, intptr_t slot);
bool QFocusFrame_QBaseFocusNextChild(QFocusFrame* self);
bool QFocusFrame_FocusPreviousChild(QFocusFrame* self);
void QFocusFrame_OnFocusPreviousChild(QFocusFrame* self, intptr_t slot);
bool QFocusFrame_QBaseFocusPreviousChild(QFocusFrame* self);
QObject* QFocusFrame_Sender(const QFocusFrame* self);
void QFocusFrame_OnSender(const QFocusFrame* self, intptr_t slot);
QObject* QFocusFrame_QBaseSender(const QFocusFrame* self);
int QFocusFrame_SenderSignalIndex(const QFocusFrame* self);
void QFocusFrame_OnSenderSignalIndex(const QFocusFrame* self, intptr_t slot);
int QFocusFrame_QBaseSenderSignalIndex(const QFocusFrame* self);
int QFocusFrame_Receivers(const QFocusFrame* self, const char* signal);
void QFocusFrame_OnReceivers(const QFocusFrame* self, intptr_t slot);
int QFocusFrame_QBaseReceivers(const QFocusFrame* self, const char* signal);
bool QFocusFrame_IsSignalConnected(const QFocusFrame* self, const QMetaMethod* signal);
void QFocusFrame_OnIsSignalConnected(const QFocusFrame* self, intptr_t slot);
bool QFocusFrame_QBaseIsSignalConnected(const QFocusFrame* self, const QMetaMethod* signal);
double QFocusFrame_GetDecodedMetricF(const QFocusFrame* self, int metricA, int metricB);
void QFocusFrame_OnGetDecodedMetricF(const QFocusFrame* self, intptr_t slot);
double QFocusFrame_QBaseGetDecodedMetricF(const QFocusFrame* self, int metricA, int metricB);
void QFocusFrame_Delete(QFocusFrame* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
