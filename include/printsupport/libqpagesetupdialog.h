#pragma once
#ifndef SRC_PRINTSUPPORTC_LIBQPAGESETUPDIALOG_H
#define SRC_PRINTSUPPORTC_LIBQPAGESETUPDIALOG_H

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
typedef struct QPageSetupDialog QPageSetupDialog;
typedef struct QPaintDevice QPaintDevice;
typedef struct QPaintEngine QPaintEngine;
typedef struct QPaintEvent QPaintEvent;
typedef struct QPainter QPainter;
typedef struct QPoint QPoint;
typedef struct QPrinter QPrinter;
typedef struct QResizeEvent QResizeEvent;
typedef struct QShowEvent QShowEvent;
typedef struct QSize QSize;
typedef struct QTabletEvent QTabletEvent;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
typedef struct QWheelEvent QWheelEvent;
typedef struct QWidget QWidget;
#endif

QPageSetupDialog* QPageSetupDialog_new(QWidget* parent);
QPageSetupDialog* QPageSetupDialog_new2(QPrinter* printer);
QPageSetupDialog* QPageSetupDialog_new3();
QPageSetupDialog* QPageSetupDialog_new4(QPrinter* printer, QWidget* parent);
QMetaObject* QPageSetupDialog_MetaObject(const QPageSetupDialog* self);
void* QPageSetupDialog_Metacast(QPageSetupDialog* self, const char* param1);
int QPageSetupDialog_Metacall(QPageSetupDialog* self, int param1, int param2, void** param3);
void QPageSetupDialog_OnMetacall(QPageSetupDialog* self, intptr_t slot);
int QPageSetupDialog_QBaseMetacall(QPageSetupDialog* self, int param1, int param2, void** param3);
libqt_string QPageSetupDialog_Tr(const char* s);
int QPageSetupDialog_Exec(QPageSetupDialog* self);
void QPageSetupDialog_OnExec(QPageSetupDialog* self, intptr_t slot);
int QPageSetupDialog_QBaseExec(QPageSetupDialog* self);
void QPageSetupDialog_Done(QPageSetupDialog* self, int result);
void QPageSetupDialog_OnDone(QPageSetupDialog* self, intptr_t slot);
void QPageSetupDialog_QBaseDone(QPageSetupDialog* self, int result);
QPrinter* QPageSetupDialog_Printer(QPageSetupDialog* self);
libqt_string QPageSetupDialog_Tr2(const char* s, const char* c);
libqt_string QPageSetupDialog_Tr3(const char* s, const char* c, int n);
void QPageSetupDialog_SetVisible(QPageSetupDialog* self, bool visible);
void QPageSetupDialog_OnSetVisible(QPageSetupDialog* self, intptr_t slot);
void QPageSetupDialog_QBaseSetVisible(QPageSetupDialog* self, bool visible);
QSize* QPageSetupDialog_SizeHint(const QPageSetupDialog* self);
void QPageSetupDialog_OnSizeHint(const QPageSetupDialog* self, intptr_t slot);
QSize* QPageSetupDialog_QBaseSizeHint(const QPageSetupDialog* self);
QSize* QPageSetupDialog_MinimumSizeHint(const QPageSetupDialog* self);
void QPageSetupDialog_OnMinimumSizeHint(const QPageSetupDialog* self, intptr_t slot);
QSize* QPageSetupDialog_QBaseMinimumSizeHint(const QPageSetupDialog* self);
void QPageSetupDialog_Open(QPageSetupDialog* self);
void QPageSetupDialog_OnOpen(QPageSetupDialog* self, intptr_t slot);
void QPageSetupDialog_QBaseOpen(QPageSetupDialog* self);
void QPageSetupDialog_Accept(QPageSetupDialog* self);
void QPageSetupDialog_OnAccept(QPageSetupDialog* self, intptr_t slot);
void QPageSetupDialog_QBaseAccept(QPageSetupDialog* self);
void QPageSetupDialog_Reject(QPageSetupDialog* self);
void QPageSetupDialog_OnReject(QPageSetupDialog* self, intptr_t slot);
void QPageSetupDialog_QBaseReject(QPageSetupDialog* self);
void QPageSetupDialog_KeyPressEvent(QPageSetupDialog* self, QKeyEvent* param1);
void QPageSetupDialog_OnKeyPressEvent(QPageSetupDialog* self, intptr_t slot);
void QPageSetupDialog_QBaseKeyPressEvent(QPageSetupDialog* self, QKeyEvent* param1);
void QPageSetupDialog_CloseEvent(QPageSetupDialog* self, QCloseEvent* param1);
void QPageSetupDialog_OnCloseEvent(QPageSetupDialog* self, intptr_t slot);
void QPageSetupDialog_QBaseCloseEvent(QPageSetupDialog* self, QCloseEvent* param1);
void QPageSetupDialog_ShowEvent(QPageSetupDialog* self, QShowEvent* param1);
void QPageSetupDialog_OnShowEvent(QPageSetupDialog* self, intptr_t slot);
void QPageSetupDialog_QBaseShowEvent(QPageSetupDialog* self, QShowEvent* param1);
void QPageSetupDialog_ResizeEvent(QPageSetupDialog* self, QResizeEvent* param1);
void QPageSetupDialog_OnResizeEvent(QPageSetupDialog* self, intptr_t slot);
void QPageSetupDialog_QBaseResizeEvent(QPageSetupDialog* self, QResizeEvent* param1);
void QPageSetupDialog_ContextMenuEvent(QPageSetupDialog* self, QContextMenuEvent* param1);
void QPageSetupDialog_OnContextMenuEvent(QPageSetupDialog* self, intptr_t slot);
void QPageSetupDialog_QBaseContextMenuEvent(QPageSetupDialog* self, QContextMenuEvent* param1);
bool QPageSetupDialog_EventFilter(QPageSetupDialog* self, QObject* param1, QEvent* param2);
void QPageSetupDialog_OnEventFilter(QPageSetupDialog* self, intptr_t slot);
bool QPageSetupDialog_QBaseEventFilter(QPageSetupDialog* self, QObject* param1, QEvent* param2);
int QPageSetupDialog_DevType(const QPageSetupDialog* self);
void QPageSetupDialog_OnDevType(const QPageSetupDialog* self, intptr_t slot);
int QPageSetupDialog_QBaseDevType(const QPageSetupDialog* self);
int QPageSetupDialog_HeightForWidth(const QPageSetupDialog* self, int param1);
void QPageSetupDialog_OnHeightForWidth(const QPageSetupDialog* self, intptr_t slot);
int QPageSetupDialog_QBaseHeightForWidth(const QPageSetupDialog* self, int param1);
bool QPageSetupDialog_HasHeightForWidth(const QPageSetupDialog* self);
void QPageSetupDialog_OnHasHeightForWidth(const QPageSetupDialog* self, intptr_t slot);
bool QPageSetupDialog_QBaseHasHeightForWidth(const QPageSetupDialog* self);
QPaintEngine* QPageSetupDialog_PaintEngine(const QPageSetupDialog* self);
void QPageSetupDialog_OnPaintEngine(const QPageSetupDialog* self, intptr_t slot);
QPaintEngine* QPageSetupDialog_QBasePaintEngine(const QPageSetupDialog* self);
bool QPageSetupDialog_Event(QPageSetupDialog* self, QEvent* event);
void QPageSetupDialog_OnEvent(QPageSetupDialog* self, intptr_t slot);
bool QPageSetupDialog_QBaseEvent(QPageSetupDialog* self, QEvent* event);
void QPageSetupDialog_MousePressEvent(QPageSetupDialog* self, QMouseEvent* event);
void QPageSetupDialog_OnMousePressEvent(QPageSetupDialog* self, intptr_t slot);
void QPageSetupDialog_QBaseMousePressEvent(QPageSetupDialog* self, QMouseEvent* event);
void QPageSetupDialog_MouseReleaseEvent(QPageSetupDialog* self, QMouseEvent* event);
void QPageSetupDialog_OnMouseReleaseEvent(QPageSetupDialog* self, intptr_t slot);
void QPageSetupDialog_QBaseMouseReleaseEvent(QPageSetupDialog* self, QMouseEvent* event);
void QPageSetupDialog_MouseDoubleClickEvent(QPageSetupDialog* self, QMouseEvent* event);
void QPageSetupDialog_OnMouseDoubleClickEvent(QPageSetupDialog* self, intptr_t slot);
void QPageSetupDialog_QBaseMouseDoubleClickEvent(QPageSetupDialog* self, QMouseEvent* event);
void QPageSetupDialog_MouseMoveEvent(QPageSetupDialog* self, QMouseEvent* event);
void QPageSetupDialog_OnMouseMoveEvent(QPageSetupDialog* self, intptr_t slot);
void QPageSetupDialog_QBaseMouseMoveEvent(QPageSetupDialog* self, QMouseEvent* event);
void QPageSetupDialog_WheelEvent(QPageSetupDialog* self, QWheelEvent* event);
void QPageSetupDialog_OnWheelEvent(QPageSetupDialog* self, intptr_t slot);
void QPageSetupDialog_QBaseWheelEvent(QPageSetupDialog* self, QWheelEvent* event);
void QPageSetupDialog_KeyReleaseEvent(QPageSetupDialog* self, QKeyEvent* event);
void QPageSetupDialog_OnKeyReleaseEvent(QPageSetupDialog* self, intptr_t slot);
void QPageSetupDialog_QBaseKeyReleaseEvent(QPageSetupDialog* self, QKeyEvent* event);
void QPageSetupDialog_FocusInEvent(QPageSetupDialog* self, QFocusEvent* event);
void QPageSetupDialog_OnFocusInEvent(QPageSetupDialog* self, intptr_t slot);
void QPageSetupDialog_QBaseFocusInEvent(QPageSetupDialog* self, QFocusEvent* event);
void QPageSetupDialog_FocusOutEvent(QPageSetupDialog* self, QFocusEvent* event);
void QPageSetupDialog_OnFocusOutEvent(QPageSetupDialog* self, intptr_t slot);
void QPageSetupDialog_QBaseFocusOutEvent(QPageSetupDialog* self, QFocusEvent* event);
void QPageSetupDialog_EnterEvent(QPageSetupDialog* self, QEnterEvent* event);
void QPageSetupDialog_OnEnterEvent(QPageSetupDialog* self, intptr_t slot);
void QPageSetupDialog_QBaseEnterEvent(QPageSetupDialog* self, QEnterEvent* event);
void QPageSetupDialog_LeaveEvent(QPageSetupDialog* self, QEvent* event);
void QPageSetupDialog_OnLeaveEvent(QPageSetupDialog* self, intptr_t slot);
void QPageSetupDialog_QBaseLeaveEvent(QPageSetupDialog* self, QEvent* event);
void QPageSetupDialog_PaintEvent(QPageSetupDialog* self, QPaintEvent* event);
void QPageSetupDialog_OnPaintEvent(QPageSetupDialog* self, intptr_t slot);
void QPageSetupDialog_QBasePaintEvent(QPageSetupDialog* self, QPaintEvent* event);
void QPageSetupDialog_MoveEvent(QPageSetupDialog* self, QMoveEvent* event);
void QPageSetupDialog_OnMoveEvent(QPageSetupDialog* self, intptr_t slot);
void QPageSetupDialog_QBaseMoveEvent(QPageSetupDialog* self, QMoveEvent* event);
void QPageSetupDialog_TabletEvent(QPageSetupDialog* self, QTabletEvent* event);
void QPageSetupDialog_OnTabletEvent(QPageSetupDialog* self, intptr_t slot);
void QPageSetupDialog_QBaseTabletEvent(QPageSetupDialog* self, QTabletEvent* event);
void QPageSetupDialog_ActionEvent(QPageSetupDialog* self, QActionEvent* event);
void QPageSetupDialog_OnActionEvent(QPageSetupDialog* self, intptr_t slot);
void QPageSetupDialog_QBaseActionEvent(QPageSetupDialog* self, QActionEvent* event);
void QPageSetupDialog_DragEnterEvent(QPageSetupDialog* self, QDragEnterEvent* event);
void QPageSetupDialog_OnDragEnterEvent(QPageSetupDialog* self, intptr_t slot);
void QPageSetupDialog_QBaseDragEnterEvent(QPageSetupDialog* self, QDragEnterEvent* event);
void QPageSetupDialog_DragMoveEvent(QPageSetupDialog* self, QDragMoveEvent* event);
void QPageSetupDialog_OnDragMoveEvent(QPageSetupDialog* self, intptr_t slot);
void QPageSetupDialog_QBaseDragMoveEvent(QPageSetupDialog* self, QDragMoveEvent* event);
void QPageSetupDialog_DragLeaveEvent(QPageSetupDialog* self, QDragLeaveEvent* event);
void QPageSetupDialog_OnDragLeaveEvent(QPageSetupDialog* self, intptr_t slot);
void QPageSetupDialog_QBaseDragLeaveEvent(QPageSetupDialog* self, QDragLeaveEvent* event);
void QPageSetupDialog_DropEvent(QPageSetupDialog* self, QDropEvent* event);
void QPageSetupDialog_OnDropEvent(QPageSetupDialog* self, intptr_t slot);
void QPageSetupDialog_QBaseDropEvent(QPageSetupDialog* self, QDropEvent* event);
void QPageSetupDialog_HideEvent(QPageSetupDialog* self, QHideEvent* event);
void QPageSetupDialog_OnHideEvent(QPageSetupDialog* self, intptr_t slot);
void QPageSetupDialog_QBaseHideEvent(QPageSetupDialog* self, QHideEvent* event);
bool QPageSetupDialog_NativeEvent(QPageSetupDialog* self, const libqt_string eventType, void* message, intptr_t* result);
void QPageSetupDialog_OnNativeEvent(QPageSetupDialog* self, intptr_t slot);
bool QPageSetupDialog_QBaseNativeEvent(QPageSetupDialog* self, const libqt_string eventType, void* message, intptr_t* result);
void QPageSetupDialog_ChangeEvent(QPageSetupDialog* self, QEvent* param1);
void QPageSetupDialog_OnChangeEvent(QPageSetupDialog* self, intptr_t slot);
void QPageSetupDialog_QBaseChangeEvent(QPageSetupDialog* self, QEvent* param1);
int QPageSetupDialog_Metric(const QPageSetupDialog* self, int param1);
void QPageSetupDialog_OnMetric(const QPageSetupDialog* self, intptr_t slot);
int QPageSetupDialog_QBaseMetric(const QPageSetupDialog* self, int param1);
void QPageSetupDialog_InitPainter(const QPageSetupDialog* self, QPainter* painter);
void QPageSetupDialog_OnInitPainter(const QPageSetupDialog* self, intptr_t slot);
void QPageSetupDialog_QBaseInitPainter(const QPageSetupDialog* self, QPainter* painter);
QPaintDevice* QPageSetupDialog_Redirected(const QPageSetupDialog* self, QPoint* offset);
void QPageSetupDialog_OnRedirected(const QPageSetupDialog* self, intptr_t slot);
QPaintDevice* QPageSetupDialog_QBaseRedirected(const QPageSetupDialog* self, QPoint* offset);
QPainter* QPageSetupDialog_SharedPainter(const QPageSetupDialog* self);
void QPageSetupDialog_OnSharedPainter(const QPageSetupDialog* self, intptr_t slot);
QPainter* QPageSetupDialog_QBaseSharedPainter(const QPageSetupDialog* self);
void QPageSetupDialog_InputMethodEvent(QPageSetupDialog* self, QInputMethodEvent* param1);
void QPageSetupDialog_OnInputMethodEvent(QPageSetupDialog* self, intptr_t slot);
void QPageSetupDialog_QBaseInputMethodEvent(QPageSetupDialog* self, QInputMethodEvent* param1);
QVariant* QPageSetupDialog_InputMethodQuery(const QPageSetupDialog* self, int param1);
void QPageSetupDialog_OnInputMethodQuery(const QPageSetupDialog* self, intptr_t slot);
QVariant* QPageSetupDialog_QBaseInputMethodQuery(const QPageSetupDialog* self, int param1);
bool QPageSetupDialog_FocusNextPrevChild(QPageSetupDialog* self, bool next);
void QPageSetupDialog_OnFocusNextPrevChild(QPageSetupDialog* self, intptr_t slot);
bool QPageSetupDialog_QBaseFocusNextPrevChild(QPageSetupDialog* self, bool next);
void QPageSetupDialog_TimerEvent(QPageSetupDialog* self, QTimerEvent* event);
void QPageSetupDialog_OnTimerEvent(QPageSetupDialog* self, intptr_t slot);
void QPageSetupDialog_QBaseTimerEvent(QPageSetupDialog* self, QTimerEvent* event);
void QPageSetupDialog_ChildEvent(QPageSetupDialog* self, QChildEvent* event);
void QPageSetupDialog_OnChildEvent(QPageSetupDialog* self, intptr_t slot);
void QPageSetupDialog_QBaseChildEvent(QPageSetupDialog* self, QChildEvent* event);
void QPageSetupDialog_CustomEvent(QPageSetupDialog* self, QEvent* event);
void QPageSetupDialog_OnCustomEvent(QPageSetupDialog* self, intptr_t slot);
void QPageSetupDialog_QBaseCustomEvent(QPageSetupDialog* self, QEvent* event);
void QPageSetupDialog_ConnectNotify(QPageSetupDialog* self, const QMetaMethod* signal);
void QPageSetupDialog_OnConnectNotify(QPageSetupDialog* self, intptr_t slot);
void QPageSetupDialog_QBaseConnectNotify(QPageSetupDialog* self, const QMetaMethod* signal);
void QPageSetupDialog_DisconnectNotify(QPageSetupDialog* self, const QMetaMethod* signal);
void QPageSetupDialog_OnDisconnectNotify(QPageSetupDialog* self, intptr_t slot);
void QPageSetupDialog_QBaseDisconnectNotify(QPageSetupDialog* self, const QMetaMethod* signal);
void QPageSetupDialog_AdjustPosition(QPageSetupDialog* self, QWidget* param1);
void QPageSetupDialog_OnAdjustPosition(QPageSetupDialog* self, intptr_t slot);
void QPageSetupDialog_QBaseAdjustPosition(QPageSetupDialog* self, QWidget* param1);
void QPageSetupDialog_UpdateMicroFocus(QPageSetupDialog* self);
void QPageSetupDialog_OnUpdateMicroFocus(QPageSetupDialog* self, intptr_t slot);
void QPageSetupDialog_QBaseUpdateMicroFocus(QPageSetupDialog* self);
void QPageSetupDialog_Create(QPageSetupDialog* self);
void QPageSetupDialog_OnCreate(QPageSetupDialog* self, intptr_t slot);
void QPageSetupDialog_QBaseCreate(QPageSetupDialog* self);
void QPageSetupDialog_Destroy(QPageSetupDialog* self);
void QPageSetupDialog_OnDestroy(QPageSetupDialog* self, intptr_t slot);
void QPageSetupDialog_QBaseDestroy(QPageSetupDialog* self);
bool QPageSetupDialog_FocusNextChild(QPageSetupDialog* self);
void QPageSetupDialog_OnFocusNextChild(QPageSetupDialog* self, intptr_t slot);
bool QPageSetupDialog_QBaseFocusNextChild(QPageSetupDialog* self);
bool QPageSetupDialog_FocusPreviousChild(QPageSetupDialog* self);
void QPageSetupDialog_OnFocusPreviousChild(QPageSetupDialog* self, intptr_t slot);
bool QPageSetupDialog_QBaseFocusPreviousChild(QPageSetupDialog* self);
QObject* QPageSetupDialog_Sender(const QPageSetupDialog* self);
void QPageSetupDialog_OnSender(const QPageSetupDialog* self, intptr_t slot);
QObject* QPageSetupDialog_QBaseSender(const QPageSetupDialog* self);
int QPageSetupDialog_SenderSignalIndex(const QPageSetupDialog* self);
void QPageSetupDialog_OnSenderSignalIndex(const QPageSetupDialog* self, intptr_t slot);
int QPageSetupDialog_QBaseSenderSignalIndex(const QPageSetupDialog* self);
int QPageSetupDialog_Receivers(const QPageSetupDialog* self, const char* signal);
void QPageSetupDialog_OnReceivers(const QPageSetupDialog* self, intptr_t slot);
int QPageSetupDialog_QBaseReceivers(const QPageSetupDialog* self, const char* signal);
bool QPageSetupDialog_IsSignalConnected(const QPageSetupDialog* self, const QMetaMethod* signal);
void QPageSetupDialog_OnIsSignalConnected(const QPageSetupDialog* self, intptr_t slot);
bool QPageSetupDialog_QBaseIsSignalConnected(const QPageSetupDialog* self, const QMetaMethod* signal);
void QPageSetupDialog_Delete(QPageSetupDialog* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
