#pragma once
#ifndef SRC_PRINTSUPPORTC_LIBQPRINTPREVIEWDIALOG_H
#define SRC_PRINTSUPPORTC_LIBQPRINTPREVIEWDIALOG_H

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
typedef struct QPaintDevice QPaintDevice;
typedef struct QPaintEngine QPaintEngine;
typedef struct QPaintEvent QPaintEvent;
typedef struct QPainter QPainter;
typedef struct QPoint QPoint;
typedef struct QPrintPreviewDialog QPrintPreviewDialog;
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

QPrintPreviewDialog* QPrintPreviewDialog_new(QWidget* parent);
QPrintPreviewDialog* QPrintPreviewDialog_new2();
QPrintPreviewDialog* QPrintPreviewDialog_new3(QPrinter* printer);
QPrintPreviewDialog* QPrintPreviewDialog_new4(QWidget* parent, int flags);
QPrintPreviewDialog* QPrintPreviewDialog_new5(QPrinter* printer, QWidget* parent);
QPrintPreviewDialog* QPrintPreviewDialog_new6(QPrinter* printer, QWidget* parent, int flags);
QMetaObject* QPrintPreviewDialog_MetaObject(const QPrintPreviewDialog* self);
void* QPrintPreviewDialog_Metacast(QPrintPreviewDialog* self, const char* param1);
int QPrintPreviewDialog_Metacall(QPrintPreviewDialog* self, int param1, int param2, void** param3);
void QPrintPreviewDialog_OnMetacall(QPrintPreviewDialog* self, intptr_t slot);
int QPrintPreviewDialog_QBaseMetacall(QPrintPreviewDialog* self, int param1, int param2, void** param3);
libqt_string QPrintPreviewDialog_Tr(const char* s);
QPrinter* QPrintPreviewDialog_Printer(QPrintPreviewDialog* self);
void QPrintPreviewDialog_SetVisible(QPrintPreviewDialog* self, bool visible);
void QPrintPreviewDialog_OnSetVisible(QPrintPreviewDialog* self, intptr_t slot);
void QPrintPreviewDialog_QBaseSetVisible(QPrintPreviewDialog* self, bool visible);
void QPrintPreviewDialog_Done(QPrintPreviewDialog* self, int result);
void QPrintPreviewDialog_OnDone(QPrintPreviewDialog* self, intptr_t slot);
void QPrintPreviewDialog_QBaseDone(QPrintPreviewDialog* self, int result);
void QPrintPreviewDialog_PaintRequested(QPrintPreviewDialog* self, QPrinter* printer);
void QPrintPreviewDialog_Connect_PaintRequested(QPrintPreviewDialog* self, intptr_t slot);
libqt_string QPrintPreviewDialog_Tr2(const char* s, const char* c);
libqt_string QPrintPreviewDialog_Tr3(const char* s, const char* c, int n);
QSize* QPrintPreviewDialog_SizeHint(const QPrintPreviewDialog* self);
void QPrintPreviewDialog_OnSizeHint(const QPrintPreviewDialog* self, intptr_t slot);
QSize* QPrintPreviewDialog_QBaseSizeHint(const QPrintPreviewDialog* self);
QSize* QPrintPreviewDialog_MinimumSizeHint(const QPrintPreviewDialog* self);
void QPrintPreviewDialog_OnMinimumSizeHint(const QPrintPreviewDialog* self, intptr_t slot);
QSize* QPrintPreviewDialog_QBaseMinimumSizeHint(const QPrintPreviewDialog* self);
void QPrintPreviewDialog_Open(QPrintPreviewDialog* self);
void QPrintPreviewDialog_OnOpen(QPrintPreviewDialog* self, intptr_t slot);
void QPrintPreviewDialog_QBaseOpen(QPrintPreviewDialog* self);
int QPrintPreviewDialog_Exec(QPrintPreviewDialog* self);
void QPrintPreviewDialog_OnExec(QPrintPreviewDialog* self, intptr_t slot);
int QPrintPreviewDialog_QBaseExec(QPrintPreviewDialog* self);
void QPrintPreviewDialog_Accept(QPrintPreviewDialog* self);
void QPrintPreviewDialog_OnAccept(QPrintPreviewDialog* self, intptr_t slot);
void QPrintPreviewDialog_QBaseAccept(QPrintPreviewDialog* self);
void QPrintPreviewDialog_Reject(QPrintPreviewDialog* self);
void QPrintPreviewDialog_OnReject(QPrintPreviewDialog* self, intptr_t slot);
void QPrintPreviewDialog_QBaseReject(QPrintPreviewDialog* self);
void QPrintPreviewDialog_KeyPressEvent(QPrintPreviewDialog* self, QKeyEvent* param1);
void QPrintPreviewDialog_OnKeyPressEvent(QPrintPreviewDialog* self, intptr_t slot);
void QPrintPreviewDialog_QBaseKeyPressEvent(QPrintPreviewDialog* self, QKeyEvent* param1);
void QPrintPreviewDialog_CloseEvent(QPrintPreviewDialog* self, QCloseEvent* param1);
void QPrintPreviewDialog_OnCloseEvent(QPrintPreviewDialog* self, intptr_t slot);
void QPrintPreviewDialog_QBaseCloseEvent(QPrintPreviewDialog* self, QCloseEvent* param1);
void QPrintPreviewDialog_ShowEvent(QPrintPreviewDialog* self, QShowEvent* param1);
void QPrintPreviewDialog_OnShowEvent(QPrintPreviewDialog* self, intptr_t slot);
void QPrintPreviewDialog_QBaseShowEvent(QPrintPreviewDialog* self, QShowEvent* param1);
void QPrintPreviewDialog_ResizeEvent(QPrintPreviewDialog* self, QResizeEvent* param1);
void QPrintPreviewDialog_OnResizeEvent(QPrintPreviewDialog* self, intptr_t slot);
void QPrintPreviewDialog_QBaseResizeEvent(QPrintPreviewDialog* self, QResizeEvent* param1);
void QPrintPreviewDialog_ContextMenuEvent(QPrintPreviewDialog* self, QContextMenuEvent* param1);
void QPrintPreviewDialog_OnContextMenuEvent(QPrintPreviewDialog* self, intptr_t slot);
void QPrintPreviewDialog_QBaseContextMenuEvent(QPrintPreviewDialog* self, QContextMenuEvent* param1);
bool QPrintPreviewDialog_EventFilter(QPrintPreviewDialog* self, QObject* param1, QEvent* param2);
void QPrintPreviewDialog_OnEventFilter(QPrintPreviewDialog* self, intptr_t slot);
bool QPrintPreviewDialog_QBaseEventFilter(QPrintPreviewDialog* self, QObject* param1, QEvent* param2);
int QPrintPreviewDialog_DevType(const QPrintPreviewDialog* self);
void QPrintPreviewDialog_OnDevType(const QPrintPreviewDialog* self, intptr_t slot);
int QPrintPreviewDialog_QBaseDevType(const QPrintPreviewDialog* self);
int QPrintPreviewDialog_HeightForWidth(const QPrintPreviewDialog* self, int param1);
void QPrintPreviewDialog_OnHeightForWidth(const QPrintPreviewDialog* self, intptr_t slot);
int QPrintPreviewDialog_QBaseHeightForWidth(const QPrintPreviewDialog* self, int param1);
bool QPrintPreviewDialog_HasHeightForWidth(const QPrintPreviewDialog* self);
void QPrintPreviewDialog_OnHasHeightForWidth(const QPrintPreviewDialog* self, intptr_t slot);
bool QPrintPreviewDialog_QBaseHasHeightForWidth(const QPrintPreviewDialog* self);
QPaintEngine* QPrintPreviewDialog_PaintEngine(const QPrintPreviewDialog* self);
void QPrintPreviewDialog_OnPaintEngine(const QPrintPreviewDialog* self, intptr_t slot);
QPaintEngine* QPrintPreviewDialog_QBasePaintEngine(const QPrintPreviewDialog* self);
bool QPrintPreviewDialog_Event(QPrintPreviewDialog* self, QEvent* event);
void QPrintPreviewDialog_OnEvent(QPrintPreviewDialog* self, intptr_t slot);
bool QPrintPreviewDialog_QBaseEvent(QPrintPreviewDialog* self, QEvent* event);
void QPrintPreviewDialog_MousePressEvent(QPrintPreviewDialog* self, QMouseEvent* event);
void QPrintPreviewDialog_OnMousePressEvent(QPrintPreviewDialog* self, intptr_t slot);
void QPrintPreviewDialog_QBaseMousePressEvent(QPrintPreviewDialog* self, QMouseEvent* event);
void QPrintPreviewDialog_MouseReleaseEvent(QPrintPreviewDialog* self, QMouseEvent* event);
void QPrintPreviewDialog_OnMouseReleaseEvent(QPrintPreviewDialog* self, intptr_t slot);
void QPrintPreviewDialog_QBaseMouseReleaseEvent(QPrintPreviewDialog* self, QMouseEvent* event);
void QPrintPreviewDialog_MouseDoubleClickEvent(QPrintPreviewDialog* self, QMouseEvent* event);
void QPrintPreviewDialog_OnMouseDoubleClickEvent(QPrintPreviewDialog* self, intptr_t slot);
void QPrintPreviewDialog_QBaseMouseDoubleClickEvent(QPrintPreviewDialog* self, QMouseEvent* event);
void QPrintPreviewDialog_MouseMoveEvent(QPrintPreviewDialog* self, QMouseEvent* event);
void QPrintPreviewDialog_OnMouseMoveEvent(QPrintPreviewDialog* self, intptr_t slot);
void QPrintPreviewDialog_QBaseMouseMoveEvent(QPrintPreviewDialog* self, QMouseEvent* event);
void QPrintPreviewDialog_WheelEvent(QPrintPreviewDialog* self, QWheelEvent* event);
void QPrintPreviewDialog_OnWheelEvent(QPrintPreviewDialog* self, intptr_t slot);
void QPrintPreviewDialog_QBaseWheelEvent(QPrintPreviewDialog* self, QWheelEvent* event);
void QPrintPreviewDialog_KeyReleaseEvent(QPrintPreviewDialog* self, QKeyEvent* event);
void QPrintPreviewDialog_OnKeyReleaseEvent(QPrintPreviewDialog* self, intptr_t slot);
void QPrintPreviewDialog_QBaseKeyReleaseEvent(QPrintPreviewDialog* self, QKeyEvent* event);
void QPrintPreviewDialog_FocusInEvent(QPrintPreviewDialog* self, QFocusEvent* event);
void QPrintPreviewDialog_OnFocusInEvent(QPrintPreviewDialog* self, intptr_t slot);
void QPrintPreviewDialog_QBaseFocusInEvent(QPrintPreviewDialog* self, QFocusEvent* event);
void QPrintPreviewDialog_FocusOutEvent(QPrintPreviewDialog* self, QFocusEvent* event);
void QPrintPreviewDialog_OnFocusOutEvent(QPrintPreviewDialog* self, intptr_t slot);
void QPrintPreviewDialog_QBaseFocusOutEvent(QPrintPreviewDialog* self, QFocusEvent* event);
void QPrintPreviewDialog_EnterEvent(QPrintPreviewDialog* self, QEnterEvent* event);
void QPrintPreviewDialog_OnEnterEvent(QPrintPreviewDialog* self, intptr_t slot);
void QPrintPreviewDialog_QBaseEnterEvent(QPrintPreviewDialog* self, QEnterEvent* event);
void QPrintPreviewDialog_LeaveEvent(QPrintPreviewDialog* self, QEvent* event);
void QPrintPreviewDialog_OnLeaveEvent(QPrintPreviewDialog* self, intptr_t slot);
void QPrintPreviewDialog_QBaseLeaveEvent(QPrintPreviewDialog* self, QEvent* event);
void QPrintPreviewDialog_PaintEvent(QPrintPreviewDialog* self, QPaintEvent* event);
void QPrintPreviewDialog_OnPaintEvent(QPrintPreviewDialog* self, intptr_t slot);
void QPrintPreviewDialog_QBasePaintEvent(QPrintPreviewDialog* self, QPaintEvent* event);
void QPrintPreviewDialog_MoveEvent(QPrintPreviewDialog* self, QMoveEvent* event);
void QPrintPreviewDialog_OnMoveEvent(QPrintPreviewDialog* self, intptr_t slot);
void QPrintPreviewDialog_QBaseMoveEvent(QPrintPreviewDialog* self, QMoveEvent* event);
void QPrintPreviewDialog_TabletEvent(QPrintPreviewDialog* self, QTabletEvent* event);
void QPrintPreviewDialog_OnTabletEvent(QPrintPreviewDialog* self, intptr_t slot);
void QPrintPreviewDialog_QBaseTabletEvent(QPrintPreviewDialog* self, QTabletEvent* event);
void QPrintPreviewDialog_ActionEvent(QPrintPreviewDialog* self, QActionEvent* event);
void QPrintPreviewDialog_OnActionEvent(QPrintPreviewDialog* self, intptr_t slot);
void QPrintPreviewDialog_QBaseActionEvent(QPrintPreviewDialog* self, QActionEvent* event);
void QPrintPreviewDialog_DragEnterEvent(QPrintPreviewDialog* self, QDragEnterEvent* event);
void QPrintPreviewDialog_OnDragEnterEvent(QPrintPreviewDialog* self, intptr_t slot);
void QPrintPreviewDialog_QBaseDragEnterEvent(QPrintPreviewDialog* self, QDragEnterEvent* event);
void QPrintPreviewDialog_DragMoveEvent(QPrintPreviewDialog* self, QDragMoveEvent* event);
void QPrintPreviewDialog_OnDragMoveEvent(QPrintPreviewDialog* self, intptr_t slot);
void QPrintPreviewDialog_QBaseDragMoveEvent(QPrintPreviewDialog* self, QDragMoveEvent* event);
void QPrintPreviewDialog_DragLeaveEvent(QPrintPreviewDialog* self, QDragLeaveEvent* event);
void QPrintPreviewDialog_OnDragLeaveEvent(QPrintPreviewDialog* self, intptr_t slot);
void QPrintPreviewDialog_QBaseDragLeaveEvent(QPrintPreviewDialog* self, QDragLeaveEvent* event);
void QPrintPreviewDialog_DropEvent(QPrintPreviewDialog* self, QDropEvent* event);
void QPrintPreviewDialog_OnDropEvent(QPrintPreviewDialog* self, intptr_t slot);
void QPrintPreviewDialog_QBaseDropEvent(QPrintPreviewDialog* self, QDropEvent* event);
void QPrintPreviewDialog_HideEvent(QPrintPreviewDialog* self, QHideEvent* event);
void QPrintPreviewDialog_OnHideEvent(QPrintPreviewDialog* self, intptr_t slot);
void QPrintPreviewDialog_QBaseHideEvent(QPrintPreviewDialog* self, QHideEvent* event);
bool QPrintPreviewDialog_NativeEvent(QPrintPreviewDialog* self, const libqt_string eventType, void* message, intptr_t* result);
void QPrintPreviewDialog_OnNativeEvent(QPrintPreviewDialog* self, intptr_t slot);
bool QPrintPreviewDialog_QBaseNativeEvent(QPrintPreviewDialog* self, const libqt_string eventType, void* message, intptr_t* result);
void QPrintPreviewDialog_ChangeEvent(QPrintPreviewDialog* self, QEvent* param1);
void QPrintPreviewDialog_OnChangeEvent(QPrintPreviewDialog* self, intptr_t slot);
void QPrintPreviewDialog_QBaseChangeEvent(QPrintPreviewDialog* self, QEvent* param1);
int QPrintPreviewDialog_Metric(const QPrintPreviewDialog* self, int param1);
void QPrintPreviewDialog_OnMetric(const QPrintPreviewDialog* self, intptr_t slot);
int QPrintPreviewDialog_QBaseMetric(const QPrintPreviewDialog* self, int param1);
void QPrintPreviewDialog_InitPainter(const QPrintPreviewDialog* self, QPainter* painter);
void QPrintPreviewDialog_OnInitPainter(const QPrintPreviewDialog* self, intptr_t slot);
void QPrintPreviewDialog_QBaseInitPainter(const QPrintPreviewDialog* self, QPainter* painter);
QPaintDevice* QPrintPreviewDialog_Redirected(const QPrintPreviewDialog* self, QPoint* offset);
void QPrintPreviewDialog_OnRedirected(const QPrintPreviewDialog* self, intptr_t slot);
QPaintDevice* QPrintPreviewDialog_QBaseRedirected(const QPrintPreviewDialog* self, QPoint* offset);
QPainter* QPrintPreviewDialog_SharedPainter(const QPrintPreviewDialog* self);
void QPrintPreviewDialog_OnSharedPainter(const QPrintPreviewDialog* self, intptr_t slot);
QPainter* QPrintPreviewDialog_QBaseSharedPainter(const QPrintPreviewDialog* self);
void QPrintPreviewDialog_InputMethodEvent(QPrintPreviewDialog* self, QInputMethodEvent* param1);
void QPrintPreviewDialog_OnInputMethodEvent(QPrintPreviewDialog* self, intptr_t slot);
void QPrintPreviewDialog_QBaseInputMethodEvent(QPrintPreviewDialog* self, QInputMethodEvent* param1);
QVariant* QPrintPreviewDialog_InputMethodQuery(const QPrintPreviewDialog* self, int param1);
void QPrintPreviewDialog_OnInputMethodQuery(const QPrintPreviewDialog* self, intptr_t slot);
QVariant* QPrintPreviewDialog_QBaseInputMethodQuery(const QPrintPreviewDialog* self, int param1);
bool QPrintPreviewDialog_FocusNextPrevChild(QPrintPreviewDialog* self, bool next);
void QPrintPreviewDialog_OnFocusNextPrevChild(QPrintPreviewDialog* self, intptr_t slot);
bool QPrintPreviewDialog_QBaseFocusNextPrevChild(QPrintPreviewDialog* self, bool next);
void QPrintPreviewDialog_TimerEvent(QPrintPreviewDialog* self, QTimerEvent* event);
void QPrintPreviewDialog_OnTimerEvent(QPrintPreviewDialog* self, intptr_t slot);
void QPrintPreviewDialog_QBaseTimerEvent(QPrintPreviewDialog* self, QTimerEvent* event);
void QPrintPreviewDialog_ChildEvent(QPrintPreviewDialog* self, QChildEvent* event);
void QPrintPreviewDialog_OnChildEvent(QPrintPreviewDialog* self, intptr_t slot);
void QPrintPreviewDialog_QBaseChildEvent(QPrintPreviewDialog* self, QChildEvent* event);
void QPrintPreviewDialog_CustomEvent(QPrintPreviewDialog* self, QEvent* event);
void QPrintPreviewDialog_OnCustomEvent(QPrintPreviewDialog* self, intptr_t slot);
void QPrintPreviewDialog_QBaseCustomEvent(QPrintPreviewDialog* self, QEvent* event);
void QPrintPreviewDialog_ConnectNotify(QPrintPreviewDialog* self, const QMetaMethod* signal);
void QPrintPreviewDialog_OnConnectNotify(QPrintPreviewDialog* self, intptr_t slot);
void QPrintPreviewDialog_QBaseConnectNotify(QPrintPreviewDialog* self, const QMetaMethod* signal);
void QPrintPreviewDialog_DisconnectNotify(QPrintPreviewDialog* self, const QMetaMethod* signal);
void QPrintPreviewDialog_OnDisconnectNotify(QPrintPreviewDialog* self, intptr_t slot);
void QPrintPreviewDialog_QBaseDisconnectNotify(QPrintPreviewDialog* self, const QMetaMethod* signal);
void QPrintPreviewDialog_AdjustPosition(QPrintPreviewDialog* self, QWidget* param1);
void QPrintPreviewDialog_OnAdjustPosition(QPrintPreviewDialog* self, intptr_t slot);
void QPrintPreviewDialog_QBaseAdjustPosition(QPrintPreviewDialog* self, QWidget* param1);
void QPrintPreviewDialog_UpdateMicroFocus(QPrintPreviewDialog* self);
void QPrintPreviewDialog_OnUpdateMicroFocus(QPrintPreviewDialog* self, intptr_t slot);
void QPrintPreviewDialog_QBaseUpdateMicroFocus(QPrintPreviewDialog* self);
void QPrintPreviewDialog_Create(QPrintPreviewDialog* self);
void QPrintPreviewDialog_OnCreate(QPrintPreviewDialog* self, intptr_t slot);
void QPrintPreviewDialog_QBaseCreate(QPrintPreviewDialog* self);
void QPrintPreviewDialog_Destroy(QPrintPreviewDialog* self);
void QPrintPreviewDialog_OnDestroy(QPrintPreviewDialog* self, intptr_t slot);
void QPrintPreviewDialog_QBaseDestroy(QPrintPreviewDialog* self);
bool QPrintPreviewDialog_FocusNextChild(QPrintPreviewDialog* self);
void QPrintPreviewDialog_OnFocusNextChild(QPrintPreviewDialog* self, intptr_t slot);
bool QPrintPreviewDialog_QBaseFocusNextChild(QPrintPreviewDialog* self);
bool QPrintPreviewDialog_FocusPreviousChild(QPrintPreviewDialog* self);
void QPrintPreviewDialog_OnFocusPreviousChild(QPrintPreviewDialog* self, intptr_t slot);
bool QPrintPreviewDialog_QBaseFocusPreviousChild(QPrintPreviewDialog* self);
QObject* QPrintPreviewDialog_Sender(const QPrintPreviewDialog* self);
void QPrintPreviewDialog_OnSender(const QPrintPreviewDialog* self, intptr_t slot);
QObject* QPrintPreviewDialog_QBaseSender(const QPrintPreviewDialog* self);
int QPrintPreviewDialog_SenderSignalIndex(const QPrintPreviewDialog* self);
void QPrintPreviewDialog_OnSenderSignalIndex(const QPrintPreviewDialog* self, intptr_t slot);
int QPrintPreviewDialog_QBaseSenderSignalIndex(const QPrintPreviewDialog* self);
int QPrintPreviewDialog_Receivers(const QPrintPreviewDialog* self, const char* signal);
void QPrintPreviewDialog_OnReceivers(const QPrintPreviewDialog* self, intptr_t slot);
int QPrintPreviewDialog_QBaseReceivers(const QPrintPreviewDialog* self, const char* signal);
bool QPrintPreviewDialog_IsSignalConnected(const QPrintPreviewDialog* self, const QMetaMethod* signal);
void QPrintPreviewDialog_OnIsSignalConnected(const QPrintPreviewDialog* self, intptr_t slot);
bool QPrintPreviewDialog_QBaseIsSignalConnected(const QPrintPreviewDialog* self, const QMetaMethod* signal);
double QPrintPreviewDialog_GetDecodedMetricF(const QPrintPreviewDialog* self, int metricA, int metricB);
void QPrintPreviewDialog_OnGetDecodedMetricF(const QPrintPreviewDialog* self, intptr_t slot);
double QPrintPreviewDialog_QBaseGetDecodedMetricF(const QPrintPreviewDialog* self, int metricA, int metricB);
void QPrintPreviewDialog_Delete(QPrintPreviewDialog* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
