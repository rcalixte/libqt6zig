#pragma once
#ifndef SRCC_LIBQERRORMESSAGE_H
#define SRCC_LIBQERRORMESSAGE_H

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
typedef struct QDialog QDialog;
typedef struct QDragEnterEvent QDragEnterEvent;
typedef struct QDragLeaveEvent QDragLeaveEvent;
typedef struct QDragMoveEvent QDragMoveEvent;
typedef struct QDropEvent QDropEvent;
typedef struct QEnterEvent QEnterEvent;
typedef struct QErrorMessage QErrorMessage;
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

QErrorMessage* QErrorMessage_new(QWidget* parent);
QErrorMessage* QErrorMessage_new2();
QMetaObject* QErrorMessage_MetaObject(const QErrorMessage* self);
void* QErrorMessage_Metacast(QErrorMessage* self, const char* param1);
int QErrorMessage_Metacall(QErrorMessage* self, int param1, int param2, void** param3);
void QErrorMessage_OnMetacall(QErrorMessage* self, intptr_t slot);
int QErrorMessage_QBaseMetacall(QErrorMessage* self, int param1, int param2, void** param3);
libqt_string QErrorMessage_Tr(const char* s);
QErrorMessage* QErrorMessage_QtHandler();
void QErrorMessage_ShowMessage(QErrorMessage* self, const libqt_string message);
void QErrorMessage_ShowMessage2(QErrorMessage* self, const libqt_string message, const libqt_string typeVal);
void QErrorMessage_Done(QErrorMessage* self, int param1);
void QErrorMessage_OnDone(QErrorMessage* self, intptr_t slot);
void QErrorMessage_QBaseDone(QErrorMessage* self, int param1);
void QErrorMessage_ChangeEvent(QErrorMessage* self, QEvent* e);
void QErrorMessage_OnChangeEvent(QErrorMessage* self, intptr_t slot);
void QErrorMessage_QBaseChangeEvent(QErrorMessage* self, QEvent* e);
libqt_string QErrorMessage_Tr2(const char* s, const char* c);
libqt_string QErrorMessage_Tr3(const char* s, const char* c, int n);
void QErrorMessage_SetVisible(QErrorMessage* self, bool visible);
void QErrorMessage_OnSetVisible(QErrorMessage* self, intptr_t slot);
void QErrorMessage_QBaseSetVisible(QErrorMessage* self, bool visible);
QSize* QErrorMessage_SizeHint(const QErrorMessage* self);
void QErrorMessage_OnSizeHint(const QErrorMessage* self, intptr_t slot);
QSize* QErrorMessage_QBaseSizeHint(const QErrorMessage* self);
QSize* QErrorMessage_MinimumSizeHint(const QErrorMessage* self);
void QErrorMessage_OnMinimumSizeHint(const QErrorMessage* self, intptr_t slot);
QSize* QErrorMessage_QBaseMinimumSizeHint(const QErrorMessage* self);
void QErrorMessage_Open(QErrorMessage* self);
void QErrorMessage_OnOpen(QErrorMessage* self, intptr_t slot);
void QErrorMessage_QBaseOpen(QErrorMessage* self);
int QErrorMessage_Exec(QErrorMessage* self);
void QErrorMessage_OnExec(QErrorMessage* self, intptr_t slot);
int QErrorMessage_QBaseExec(QErrorMessage* self);
void QErrorMessage_Accept(QErrorMessage* self);
void QErrorMessage_OnAccept(QErrorMessage* self, intptr_t slot);
void QErrorMessage_QBaseAccept(QErrorMessage* self);
void QErrorMessage_Reject(QErrorMessage* self);
void QErrorMessage_OnReject(QErrorMessage* self, intptr_t slot);
void QErrorMessage_QBaseReject(QErrorMessage* self);
void QErrorMessage_KeyPressEvent(QErrorMessage* self, QKeyEvent* param1);
void QErrorMessage_OnKeyPressEvent(QErrorMessage* self, intptr_t slot);
void QErrorMessage_QBaseKeyPressEvent(QErrorMessage* self, QKeyEvent* param1);
void QErrorMessage_CloseEvent(QErrorMessage* self, QCloseEvent* param1);
void QErrorMessage_OnCloseEvent(QErrorMessage* self, intptr_t slot);
void QErrorMessage_QBaseCloseEvent(QErrorMessage* self, QCloseEvent* param1);
void QErrorMessage_ShowEvent(QErrorMessage* self, QShowEvent* param1);
void QErrorMessage_OnShowEvent(QErrorMessage* self, intptr_t slot);
void QErrorMessage_QBaseShowEvent(QErrorMessage* self, QShowEvent* param1);
void QErrorMessage_ResizeEvent(QErrorMessage* self, QResizeEvent* param1);
void QErrorMessage_OnResizeEvent(QErrorMessage* self, intptr_t slot);
void QErrorMessage_QBaseResizeEvent(QErrorMessage* self, QResizeEvent* param1);
void QErrorMessage_ContextMenuEvent(QErrorMessage* self, QContextMenuEvent* param1);
void QErrorMessage_OnContextMenuEvent(QErrorMessage* self, intptr_t slot);
void QErrorMessage_QBaseContextMenuEvent(QErrorMessage* self, QContextMenuEvent* param1);
bool QErrorMessage_EventFilter(QErrorMessage* self, QObject* param1, QEvent* param2);
void QErrorMessage_OnEventFilter(QErrorMessage* self, intptr_t slot);
bool QErrorMessage_QBaseEventFilter(QErrorMessage* self, QObject* param1, QEvent* param2);
int QErrorMessage_DevType(const QErrorMessage* self);
void QErrorMessage_OnDevType(const QErrorMessage* self, intptr_t slot);
int QErrorMessage_QBaseDevType(const QErrorMessage* self);
int QErrorMessage_HeightForWidth(const QErrorMessage* self, int param1);
void QErrorMessage_OnHeightForWidth(const QErrorMessage* self, intptr_t slot);
int QErrorMessage_QBaseHeightForWidth(const QErrorMessage* self, int param1);
bool QErrorMessage_HasHeightForWidth(const QErrorMessage* self);
void QErrorMessage_OnHasHeightForWidth(const QErrorMessage* self, intptr_t slot);
bool QErrorMessage_QBaseHasHeightForWidth(const QErrorMessage* self);
QPaintEngine* QErrorMessage_PaintEngine(const QErrorMessage* self);
void QErrorMessage_OnPaintEngine(const QErrorMessage* self, intptr_t slot);
QPaintEngine* QErrorMessage_QBasePaintEngine(const QErrorMessage* self);
bool QErrorMessage_Event(QErrorMessage* self, QEvent* event);
void QErrorMessage_OnEvent(QErrorMessage* self, intptr_t slot);
bool QErrorMessage_QBaseEvent(QErrorMessage* self, QEvent* event);
void QErrorMessage_MousePressEvent(QErrorMessage* self, QMouseEvent* event);
void QErrorMessage_OnMousePressEvent(QErrorMessage* self, intptr_t slot);
void QErrorMessage_QBaseMousePressEvent(QErrorMessage* self, QMouseEvent* event);
void QErrorMessage_MouseReleaseEvent(QErrorMessage* self, QMouseEvent* event);
void QErrorMessage_OnMouseReleaseEvent(QErrorMessage* self, intptr_t slot);
void QErrorMessage_QBaseMouseReleaseEvent(QErrorMessage* self, QMouseEvent* event);
void QErrorMessage_MouseDoubleClickEvent(QErrorMessage* self, QMouseEvent* event);
void QErrorMessage_OnMouseDoubleClickEvent(QErrorMessage* self, intptr_t slot);
void QErrorMessage_QBaseMouseDoubleClickEvent(QErrorMessage* self, QMouseEvent* event);
void QErrorMessage_MouseMoveEvent(QErrorMessage* self, QMouseEvent* event);
void QErrorMessage_OnMouseMoveEvent(QErrorMessage* self, intptr_t slot);
void QErrorMessage_QBaseMouseMoveEvent(QErrorMessage* self, QMouseEvent* event);
void QErrorMessage_WheelEvent(QErrorMessage* self, QWheelEvent* event);
void QErrorMessage_OnWheelEvent(QErrorMessage* self, intptr_t slot);
void QErrorMessage_QBaseWheelEvent(QErrorMessage* self, QWheelEvent* event);
void QErrorMessage_KeyReleaseEvent(QErrorMessage* self, QKeyEvent* event);
void QErrorMessage_OnKeyReleaseEvent(QErrorMessage* self, intptr_t slot);
void QErrorMessage_QBaseKeyReleaseEvent(QErrorMessage* self, QKeyEvent* event);
void QErrorMessage_FocusInEvent(QErrorMessage* self, QFocusEvent* event);
void QErrorMessage_OnFocusInEvent(QErrorMessage* self, intptr_t slot);
void QErrorMessage_QBaseFocusInEvent(QErrorMessage* self, QFocusEvent* event);
void QErrorMessage_FocusOutEvent(QErrorMessage* self, QFocusEvent* event);
void QErrorMessage_OnFocusOutEvent(QErrorMessage* self, intptr_t slot);
void QErrorMessage_QBaseFocusOutEvent(QErrorMessage* self, QFocusEvent* event);
void QErrorMessage_EnterEvent(QErrorMessage* self, QEnterEvent* event);
void QErrorMessage_OnEnterEvent(QErrorMessage* self, intptr_t slot);
void QErrorMessage_QBaseEnterEvent(QErrorMessage* self, QEnterEvent* event);
void QErrorMessage_LeaveEvent(QErrorMessage* self, QEvent* event);
void QErrorMessage_OnLeaveEvent(QErrorMessage* self, intptr_t slot);
void QErrorMessage_QBaseLeaveEvent(QErrorMessage* self, QEvent* event);
void QErrorMessage_PaintEvent(QErrorMessage* self, QPaintEvent* event);
void QErrorMessage_OnPaintEvent(QErrorMessage* self, intptr_t slot);
void QErrorMessage_QBasePaintEvent(QErrorMessage* self, QPaintEvent* event);
void QErrorMessage_MoveEvent(QErrorMessage* self, QMoveEvent* event);
void QErrorMessage_OnMoveEvent(QErrorMessage* self, intptr_t slot);
void QErrorMessage_QBaseMoveEvent(QErrorMessage* self, QMoveEvent* event);
void QErrorMessage_TabletEvent(QErrorMessage* self, QTabletEvent* event);
void QErrorMessage_OnTabletEvent(QErrorMessage* self, intptr_t slot);
void QErrorMessage_QBaseTabletEvent(QErrorMessage* self, QTabletEvent* event);
void QErrorMessage_ActionEvent(QErrorMessage* self, QActionEvent* event);
void QErrorMessage_OnActionEvent(QErrorMessage* self, intptr_t slot);
void QErrorMessage_QBaseActionEvent(QErrorMessage* self, QActionEvent* event);
void QErrorMessage_DragEnterEvent(QErrorMessage* self, QDragEnterEvent* event);
void QErrorMessage_OnDragEnterEvent(QErrorMessage* self, intptr_t slot);
void QErrorMessage_QBaseDragEnterEvent(QErrorMessage* self, QDragEnterEvent* event);
void QErrorMessage_DragMoveEvent(QErrorMessage* self, QDragMoveEvent* event);
void QErrorMessage_OnDragMoveEvent(QErrorMessage* self, intptr_t slot);
void QErrorMessage_QBaseDragMoveEvent(QErrorMessage* self, QDragMoveEvent* event);
void QErrorMessage_DragLeaveEvent(QErrorMessage* self, QDragLeaveEvent* event);
void QErrorMessage_OnDragLeaveEvent(QErrorMessage* self, intptr_t slot);
void QErrorMessage_QBaseDragLeaveEvent(QErrorMessage* self, QDragLeaveEvent* event);
void QErrorMessage_DropEvent(QErrorMessage* self, QDropEvent* event);
void QErrorMessage_OnDropEvent(QErrorMessage* self, intptr_t slot);
void QErrorMessage_QBaseDropEvent(QErrorMessage* self, QDropEvent* event);
void QErrorMessage_HideEvent(QErrorMessage* self, QHideEvent* event);
void QErrorMessage_OnHideEvent(QErrorMessage* self, intptr_t slot);
void QErrorMessage_QBaseHideEvent(QErrorMessage* self, QHideEvent* event);
bool QErrorMessage_NativeEvent(QErrorMessage* self, const libqt_string eventType, void* message, intptr_t* result);
void QErrorMessage_OnNativeEvent(QErrorMessage* self, intptr_t slot);
bool QErrorMessage_QBaseNativeEvent(QErrorMessage* self, const libqt_string eventType, void* message, intptr_t* result);
int QErrorMessage_Metric(const QErrorMessage* self, int param1);
void QErrorMessage_OnMetric(const QErrorMessage* self, intptr_t slot);
int QErrorMessage_QBaseMetric(const QErrorMessage* self, int param1);
void QErrorMessage_InitPainter(const QErrorMessage* self, QPainter* painter);
void QErrorMessage_OnInitPainter(const QErrorMessage* self, intptr_t slot);
void QErrorMessage_QBaseInitPainter(const QErrorMessage* self, QPainter* painter);
QPaintDevice* QErrorMessage_Redirected(const QErrorMessage* self, QPoint* offset);
void QErrorMessage_OnRedirected(const QErrorMessage* self, intptr_t slot);
QPaintDevice* QErrorMessage_QBaseRedirected(const QErrorMessage* self, QPoint* offset);
QPainter* QErrorMessage_SharedPainter(const QErrorMessage* self);
void QErrorMessage_OnSharedPainter(const QErrorMessage* self, intptr_t slot);
QPainter* QErrorMessage_QBaseSharedPainter(const QErrorMessage* self);
void QErrorMessage_InputMethodEvent(QErrorMessage* self, QInputMethodEvent* param1);
void QErrorMessage_OnInputMethodEvent(QErrorMessage* self, intptr_t slot);
void QErrorMessage_QBaseInputMethodEvent(QErrorMessage* self, QInputMethodEvent* param1);
QVariant* QErrorMessage_InputMethodQuery(const QErrorMessage* self, int param1);
void QErrorMessage_OnInputMethodQuery(const QErrorMessage* self, intptr_t slot);
QVariant* QErrorMessage_QBaseInputMethodQuery(const QErrorMessage* self, int param1);
bool QErrorMessage_FocusNextPrevChild(QErrorMessage* self, bool next);
void QErrorMessage_OnFocusNextPrevChild(QErrorMessage* self, intptr_t slot);
bool QErrorMessage_QBaseFocusNextPrevChild(QErrorMessage* self, bool next);
void QErrorMessage_TimerEvent(QErrorMessage* self, QTimerEvent* event);
void QErrorMessage_OnTimerEvent(QErrorMessage* self, intptr_t slot);
void QErrorMessage_QBaseTimerEvent(QErrorMessage* self, QTimerEvent* event);
void QErrorMessage_ChildEvent(QErrorMessage* self, QChildEvent* event);
void QErrorMessage_OnChildEvent(QErrorMessage* self, intptr_t slot);
void QErrorMessage_QBaseChildEvent(QErrorMessage* self, QChildEvent* event);
void QErrorMessage_CustomEvent(QErrorMessage* self, QEvent* event);
void QErrorMessage_OnCustomEvent(QErrorMessage* self, intptr_t slot);
void QErrorMessage_QBaseCustomEvent(QErrorMessage* self, QEvent* event);
void QErrorMessage_ConnectNotify(QErrorMessage* self, const QMetaMethod* signal);
void QErrorMessage_OnConnectNotify(QErrorMessage* self, intptr_t slot);
void QErrorMessage_QBaseConnectNotify(QErrorMessage* self, const QMetaMethod* signal);
void QErrorMessage_DisconnectNotify(QErrorMessage* self, const QMetaMethod* signal);
void QErrorMessage_OnDisconnectNotify(QErrorMessage* self, intptr_t slot);
void QErrorMessage_QBaseDisconnectNotify(QErrorMessage* self, const QMetaMethod* signal);
void QErrorMessage_AdjustPosition(QErrorMessage* self, QWidget* param1);
void QErrorMessage_OnAdjustPosition(QErrorMessage* self, intptr_t slot);
void QErrorMessage_QBaseAdjustPosition(QErrorMessage* self, QWidget* param1);
void QErrorMessage_UpdateMicroFocus(QErrorMessage* self);
void QErrorMessage_OnUpdateMicroFocus(QErrorMessage* self, intptr_t slot);
void QErrorMessage_QBaseUpdateMicroFocus(QErrorMessage* self);
void QErrorMessage_Create(QErrorMessage* self);
void QErrorMessage_OnCreate(QErrorMessage* self, intptr_t slot);
void QErrorMessage_QBaseCreate(QErrorMessage* self);
void QErrorMessage_Destroy(QErrorMessage* self);
void QErrorMessage_OnDestroy(QErrorMessage* self, intptr_t slot);
void QErrorMessage_QBaseDestroy(QErrorMessage* self);
bool QErrorMessage_FocusNextChild(QErrorMessage* self);
void QErrorMessage_OnFocusNextChild(QErrorMessage* self, intptr_t slot);
bool QErrorMessage_QBaseFocusNextChild(QErrorMessage* self);
bool QErrorMessage_FocusPreviousChild(QErrorMessage* self);
void QErrorMessage_OnFocusPreviousChild(QErrorMessage* self, intptr_t slot);
bool QErrorMessage_QBaseFocusPreviousChild(QErrorMessage* self);
QObject* QErrorMessage_Sender(const QErrorMessage* self);
void QErrorMessage_OnSender(const QErrorMessage* self, intptr_t slot);
QObject* QErrorMessage_QBaseSender(const QErrorMessage* self);
int QErrorMessage_SenderSignalIndex(const QErrorMessage* self);
void QErrorMessage_OnSenderSignalIndex(const QErrorMessage* self, intptr_t slot);
int QErrorMessage_QBaseSenderSignalIndex(const QErrorMessage* self);
int QErrorMessage_Receivers(const QErrorMessage* self, const char* signal);
void QErrorMessage_OnReceivers(const QErrorMessage* self, intptr_t slot);
int QErrorMessage_QBaseReceivers(const QErrorMessage* self, const char* signal);
bool QErrorMessage_IsSignalConnected(const QErrorMessage* self, const QMetaMethod* signal);
void QErrorMessage_OnIsSignalConnected(const QErrorMessage* self, intptr_t slot);
bool QErrorMessage_QBaseIsSignalConnected(const QErrorMessage* self, const QMetaMethod* signal);
double QErrorMessage_GetDecodedMetricF(const QErrorMessage* self, int metricA, int metricB);
void QErrorMessage_OnGetDecodedMetricF(const QErrorMessage* self, intptr_t slot);
double QErrorMessage_QBaseGetDecodedMetricF(const QErrorMessage* self, int metricA, int metricB);
void QErrorMessage_Delete(QErrorMessage* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
