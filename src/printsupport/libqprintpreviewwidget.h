#pragma once
#ifndef SRC_PRINTSUPPORTC_LIBQPRINTPREVIEWWIDGET_H
#define SRC_PRINTSUPPORTC_LIBQPRINTPREVIEWWIDGET_H

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
typedef struct QPrintPreviewWidget QPrintPreviewWidget;
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

#ifdef __cplusplus
typedef QPrintPreviewWidget::ViewMode ViewMode; // C++ enum
typedef QPrintPreviewWidget::ZoomMode ZoomMode; // C++ enum
#else
typedef int ViewMode; // C ABI enum
typedef int ZoomMode; // C ABI enum
#endif

QPrintPreviewWidget* QPrintPreviewWidget_new(QWidget* parent);
QPrintPreviewWidget* QPrintPreviewWidget_new2(QPrinter* printer);
QPrintPreviewWidget* QPrintPreviewWidget_new3();
QPrintPreviewWidget* QPrintPreviewWidget_new4(QPrinter* printer, QWidget* parent);
QPrintPreviewWidget* QPrintPreviewWidget_new5(QPrinter* printer, QWidget* parent, int flags);
QPrintPreviewWidget* QPrintPreviewWidget_new6(QWidget* parent, int flags);
QMetaObject* QPrintPreviewWidget_MetaObject(const QPrintPreviewWidget* self);
void* QPrintPreviewWidget_Metacast(QPrintPreviewWidget* self, const char* param1);
int QPrintPreviewWidget_Metacall(QPrintPreviewWidget* self, int param1, int param2, void** param3);
void QPrintPreviewWidget_OnMetacall(QPrintPreviewWidget* self, intptr_t slot);
int QPrintPreviewWidget_QBaseMetacall(QPrintPreviewWidget* self, int param1, int param2, void** param3);
libqt_string QPrintPreviewWidget_Tr(const char* s);
double QPrintPreviewWidget_ZoomFactor(const QPrintPreviewWidget* self);
int QPrintPreviewWidget_Orientation(const QPrintPreviewWidget* self);
int QPrintPreviewWidget_ViewMode(const QPrintPreviewWidget* self);
int QPrintPreviewWidget_ZoomMode(const QPrintPreviewWidget* self);
int QPrintPreviewWidget_CurrentPage(const QPrintPreviewWidget* self);
int QPrintPreviewWidget_PageCount(const QPrintPreviewWidget* self);
void QPrintPreviewWidget_SetVisible(QPrintPreviewWidget* self, bool visible);
void QPrintPreviewWidget_OnSetVisible(QPrintPreviewWidget* self, intptr_t slot);
void QPrintPreviewWidget_QBaseSetVisible(QPrintPreviewWidget* self, bool visible);
void QPrintPreviewWidget_Print(QPrintPreviewWidget* self);
void QPrintPreviewWidget_ZoomIn(QPrintPreviewWidget* self);
void QPrintPreviewWidget_ZoomOut(QPrintPreviewWidget* self);
void QPrintPreviewWidget_SetZoomFactor(QPrintPreviewWidget* self, double zoomFactor);
void QPrintPreviewWidget_SetOrientation(QPrintPreviewWidget* self, int orientation);
void QPrintPreviewWidget_SetViewMode(QPrintPreviewWidget* self, int viewMode);
void QPrintPreviewWidget_SetZoomMode(QPrintPreviewWidget* self, int zoomMode);
void QPrintPreviewWidget_SetCurrentPage(QPrintPreviewWidget* self, int pageNumber);
void QPrintPreviewWidget_FitToWidth(QPrintPreviewWidget* self);
void QPrintPreviewWidget_FitInView(QPrintPreviewWidget* self);
void QPrintPreviewWidget_SetLandscapeOrientation(QPrintPreviewWidget* self);
void QPrintPreviewWidget_SetPortraitOrientation(QPrintPreviewWidget* self);
void QPrintPreviewWidget_SetSinglePageViewMode(QPrintPreviewWidget* self);
void QPrintPreviewWidget_SetFacingPagesViewMode(QPrintPreviewWidget* self);
void QPrintPreviewWidget_SetAllPagesViewMode(QPrintPreviewWidget* self);
void QPrintPreviewWidget_UpdatePreview(QPrintPreviewWidget* self);
void QPrintPreviewWidget_PaintRequested(QPrintPreviewWidget* self, QPrinter* printer);
void QPrintPreviewWidget_Connect_PaintRequested(QPrintPreviewWidget* self, intptr_t slot);
void QPrintPreviewWidget_PreviewChanged(QPrintPreviewWidget* self);
void QPrintPreviewWidget_Connect_PreviewChanged(QPrintPreviewWidget* self, intptr_t slot);
libqt_string QPrintPreviewWidget_Tr2(const char* s, const char* c);
libqt_string QPrintPreviewWidget_Tr3(const char* s, const char* c, int n);
void QPrintPreviewWidget_ZoomIn1(QPrintPreviewWidget* self, double zoom);
void QPrintPreviewWidget_ZoomOut1(QPrintPreviewWidget* self, double zoom);
int QPrintPreviewWidget_DevType(const QPrintPreviewWidget* self);
void QPrintPreviewWidget_OnDevType(const QPrintPreviewWidget* self, intptr_t slot);
int QPrintPreviewWidget_QBaseDevType(const QPrintPreviewWidget* self);
QSize* QPrintPreviewWidget_SizeHint(const QPrintPreviewWidget* self);
void QPrintPreviewWidget_OnSizeHint(const QPrintPreviewWidget* self, intptr_t slot);
QSize* QPrintPreviewWidget_QBaseSizeHint(const QPrintPreviewWidget* self);
QSize* QPrintPreviewWidget_MinimumSizeHint(const QPrintPreviewWidget* self);
void QPrintPreviewWidget_OnMinimumSizeHint(const QPrintPreviewWidget* self, intptr_t slot);
QSize* QPrintPreviewWidget_QBaseMinimumSizeHint(const QPrintPreviewWidget* self);
int QPrintPreviewWidget_HeightForWidth(const QPrintPreviewWidget* self, int param1);
void QPrintPreviewWidget_OnHeightForWidth(const QPrintPreviewWidget* self, intptr_t slot);
int QPrintPreviewWidget_QBaseHeightForWidth(const QPrintPreviewWidget* self, int param1);
bool QPrintPreviewWidget_HasHeightForWidth(const QPrintPreviewWidget* self);
void QPrintPreviewWidget_OnHasHeightForWidth(const QPrintPreviewWidget* self, intptr_t slot);
bool QPrintPreviewWidget_QBaseHasHeightForWidth(const QPrintPreviewWidget* self);
QPaintEngine* QPrintPreviewWidget_PaintEngine(const QPrintPreviewWidget* self);
void QPrintPreviewWidget_OnPaintEngine(const QPrintPreviewWidget* self, intptr_t slot);
QPaintEngine* QPrintPreviewWidget_QBasePaintEngine(const QPrintPreviewWidget* self);
bool QPrintPreviewWidget_Event(QPrintPreviewWidget* self, QEvent* event);
void QPrintPreviewWidget_OnEvent(QPrintPreviewWidget* self, intptr_t slot);
bool QPrintPreviewWidget_QBaseEvent(QPrintPreviewWidget* self, QEvent* event);
void QPrintPreviewWidget_MousePressEvent(QPrintPreviewWidget* self, QMouseEvent* event);
void QPrintPreviewWidget_OnMousePressEvent(QPrintPreviewWidget* self, intptr_t slot);
void QPrintPreviewWidget_QBaseMousePressEvent(QPrintPreviewWidget* self, QMouseEvent* event);
void QPrintPreviewWidget_MouseReleaseEvent(QPrintPreviewWidget* self, QMouseEvent* event);
void QPrintPreviewWidget_OnMouseReleaseEvent(QPrintPreviewWidget* self, intptr_t slot);
void QPrintPreviewWidget_QBaseMouseReleaseEvent(QPrintPreviewWidget* self, QMouseEvent* event);
void QPrintPreviewWidget_MouseDoubleClickEvent(QPrintPreviewWidget* self, QMouseEvent* event);
void QPrintPreviewWidget_OnMouseDoubleClickEvent(QPrintPreviewWidget* self, intptr_t slot);
void QPrintPreviewWidget_QBaseMouseDoubleClickEvent(QPrintPreviewWidget* self, QMouseEvent* event);
void QPrintPreviewWidget_MouseMoveEvent(QPrintPreviewWidget* self, QMouseEvent* event);
void QPrintPreviewWidget_OnMouseMoveEvent(QPrintPreviewWidget* self, intptr_t slot);
void QPrintPreviewWidget_QBaseMouseMoveEvent(QPrintPreviewWidget* self, QMouseEvent* event);
void QPrintPreviewWidget_WheelEvent(QPrintPreviewWidget* self, QWheelEvent* event);
void QPrintPreviewWidget_OnWheelEvent(QPrintPreviewWidget* self, intptr_t slot);
void QPrintPreviewWidget_QBaseWheelEvent(QPrintPreviewWidget* self, QWheelEvent* event);
void QPrintPreviewWidget_KeyPressEvent(QPrintPreviewWidget* self, QKeyEvent* event);
void QPrintPreviewWidget_OnKeyPressEvent(QPrintPreviewWidget* self, intptr_t slot);
void QPrintPreviewWidget_QBaseKeyPressEvent(QPrintPreviewWidget* self, QKeyEvent* event);
void QPrintPreviewWidget_KeyReleaseEvent(QPrintPreviewWidget* self, QKeyEvent* event);
void QPrintPreviewWidget_OnKeyReleaseEvent(QPrintPreviewWidget* self, intptr_t slot);
void QPrintPreviewWidget_QBaseKeyReleaseEvent(QPrintPreviewWidget* self, QKeyEvent* event);
void QPrintPreviewWidget_FocusInEvent(QPrintPreviewWidget* self, QFocusEvent* event);
void QPrintPreviewWidget_OnFocusInEvent(QPrintPreviewWidget* self, intptr_t slot);
void QPrintPreviewWidget_QBaseFocusInEvent(QPrintPreviewWidget* self, QFocusEvent* event);
void QPrintPreviewWidget_FocusOutEvent(QPrintPreviewWidget* self, QFocusEvent* event);
void QPrintPreviewWidget_OnFocusOutEvent(QPrintPreviewWidget* self, intptr_t slot);
void QPrintPreviewWidget_QBaseFocusOutEvent(QPrintPreviewWidget* self, QFocusEvent* event);
void QPrintPreviewWidget_EnterEvent(QPrintPreviewWidget* self, QEnterEvent* event);
void QPrintPreviewWidget_OnEnterEvent(QPrintPreviewWidget* self, intptr_t slot);
void QPrintPreviewWidget_QBaseEnterEvent(QPrintPreviewWidget* self, QEnterEvent* event);
void QPrintPreviewWidget_LeaveEvent(QPrintPreviewWidget* self, QEvent* event);
void QPrintPreviewWidget_OnLeaveEvent(QPrintPreviewWidget* self, intptr_t slot);
void QPrintPreviewWidget_QBaseLeaveEvent(QPrintPreviewWidget* self, QEvent* event);
void QPrintPreviewWidget_PaintEvent(QPrintPreviewWidget* self, QPaintEvent* event);
void QPrintPreviewWidget_OnPaintEvent(QPrintPreviewWidget* self, intptr_t slot);
void QPrintPreviewWidget_QBasePaintEvent(QPrintPreviewWidget* self, QPaintEvent* event);
void QPrintPreviewWidget_MoveEvent(QPrintPreviewWidget* self, QMoveEvent* event);
void QPrintPreviewWidget_OnMoveEvent(QPrintPreviewWidget* self, intptr_t slot);
void QPrintPreviewWidget_QBaseMoveEvent(QPrintPreviewWidget* self, QMoveEvent* event);
void QPrintPreviewWidget_ResizeEvent(QPrintPreviewWidget* self, QResizeEvent* event);
void QPrintPreviewWidget_OnResizeEvent(QPrintPreviewWidget* self, intptr_t slot);
void QPrintPreviewWidget_QBaseResizeEvent(QPrintPreviewWidget* self, QResizeEvent* event);
void QPrintPreviewWidget_CloseEvent(QPrintPreviewWidget* self, QCloseEvent* event);
void QPrintPreviewWidget_OnCloseEvent(QPrintPreviewWidget* self, intptr_t slot);
void QPrintPreviewWidget_QBaseCloseEvent(QPrintPreviewWidget* self, QCloseEvent* event);
void QPrintPreviewWidget_ContextMenuEvent(QPrintPreviewWidget* self, QContextMenuEvent* event);
void QPrintPreviewWidget_OnContextMenuEvent(QPrintPreviewWidget* self, intptr_t slot);
void QPrintPreviewWidget_QBaseContextMenuEvent(QPrintPreviewWidget* self, QContextMenuEvent* event);
void QPrintPreviewWidget_TabletEvent(QPrintPreviewWidget* self, QTabletEvent* event);
void QPrintPreviewWidget_OnTabletEvent(QPrintPreviewWidget* self, intptr_t slot);
void QPrintPreviewWidget_QBaseTabletEvent(QPrintPreviewWidget* self, QTabletEvent* event);
void QPrintPreviewWidget_ActionEvent(QPrintPreviewWidget* self, QActionEvent* event);
void QPrintPreviewWidget_OnActionEvent(QPrintPreviewWidget* self, intptr_t slot);
void QPrintPreviewWidget_QBaseActionEvent(QPrintPreviewWidget* self, QActionEvent* event);
void QPrintPreviewWidget_DragEnterEvent(QPrintPreviewWidget* self, QDragEnterEvent* event);
void QPrintPreviewWidget_OnDragEnterEvent(QPrintPreviewWidget* self, intptr_t slot);
void QPrintPreviewWidget_QBaseDragEnterEvent(QPrintPreviewWidget* self, QDragEnterEvent* event);
void QPrintPreviewWidget_DragMoveEvent(QPrintPreviewWidget* self, QDragMoveEvent* event);
void QPrintPreviewWidget_OnDragMoveEvent(QPrintPreviewWidget* self, intptr_t slot);
void QPrintPreviewWidget_QBaseDragMoveEvent(QPrintPreviewWidget* self, QDragMoveEvent* event);
void QPrintPreviewWidget_DragLeaveEvent(QPrintPreviewWidget* self, QDragLeaveEvent* event);
void QPrintPreviewWidget_OnDragLeaveEvent(QPrintPreviewWidget* self, intptr_t slot);
void QPrintPreviewWidget_QBaseDragLeaveEvent(QPrintPreviewWidget* self, QDragLeaveEvent* event);
void QPrintPreviewWidget_DropEvent(QPrintPreviewWidget* self, QDropEvent* event);
void QPrintPreviewWidget_OnDropEvent(QPrintPreviewWidget* self, intptr_t slot);
void QPrintPreviewWidget_QBaseDropEvent(QPrintPreviewWidget* self, QDropEvent* event);
void QPrintPreviewWidget_ShowEvent(QPrintPreviewWidget* self, QShowEvent* event);
void QPrintPreviewWidget_OnShowEvent(QPrintPreviewWidget* self, intptr_t slot);
void QPrintPreviewWidget_QBaseShowEvent(QPrintPreviewWidget* self, QShowEvent* event);
void QPrintPreviewWidget_HideEvent(QPrintPreviewWidget* self, QHideEvent* event);
void QPrintPreviewWidget_OnHideEvent(QPrintPreviewWidget* self, intptr_t slot);
void QPrintPreviewWidget_QBaseHideEvent(QPrintPreviewWidget* self, QHideEvent* event);
bool QPrintPreviewWidget_NativeEvent(QPrintPreviewWidget* self, const libqt_string eventType, void* message, intptr_t* result);
void QPrintPreviewWidget_OnNativeEvent(QPrintPreviewWidget* self, intptr_t slot);
bool QPrintPreviewWidget_QBaseNativeEvent(QPrintPreviewWidget* self, const libqt_string eventType, void* message, intptr_t* result);
void QPrintPreviewWidget_ChangeEvent(QPrintPreviewWidget* self, QEvent* param1);
void QPrintPreviewWidget_OnChangeEvent(QPrintPreviewWidget* self, intptr_t slot);
void QPrintPreviewWidget_QBaseChangeEvent(QPrintPreviewWidget* self, QEvent* param1);
int QPrintPreviewWidget_Metric(const QPrintPreviewWidget* self, int param1);
void QPrintPreviewWidget_OnMetric(const QPrintPreviewWidget* self, intptr_t slot);
int QPrintPreviewWidget_QBaseMetric(const QPrintPreviewWidget* self, int param1);
void QPrintPreviewWidget_InitPainter(const QPrintPreviewWidget* self, QPainter* painter);
void QPrintPreviewWidget_OnInitPainter(const QPrintPreviewWidget* self, intptr_t slot);
void QPrintPreviewWidget_QBaseInitPainter(const QPrintPreviewWidget* self, QPainter* painter);
QPaintDevice* QPrintPreviewWidget_Redirected(const QPrintPreviewWidget* self, QPoint* offset);
void QPrintPreviewWidget_OnRedirected(const QPrintPreviewWidget* self, intptr_t slot);
QPaintDevice* QPrintPreviewWidget_QBaseRedirected(const QPrintPreviewWidget* self, QPoint* offset);
QPainter* QPrintPreviewWidget_SharedPainter(const QPrintPreviewWidget* self);
void QPrintPreviewWidget_OnSharedPainter(const QPrintPreviewWidget* self, intptr_t slot);
QPainter* QPrintPreviewWidget_QBaseSharedPainter(const QPrintPreviewWidget* self);
void QPrintPreviewWidget_InputMethodEvent(QPrintPreviewWidget* self, QInputMethodEvent* param1);
void QPrintPreviewWidget_OnInputMethodEvent(QPrintPreviewWidget* self, intptr_t slot);
void QPrintPreviewWidget_QBaseInputMethodEvent(QPrintPreviewWidget* self, QInputMethodEvent* param1);
QVariant* QPrintPreviewWidget_InputMethodQuery(const QPrintPreviewWidget* self, int param1);
void QPrintPreviewWidget_OnInputMethodQuery(const QPrintPreviewWidget* self, intptr_t slot);
QVariant* QPrintPreviewWidget_QBaseInputMethodQuery(const QPrintPreviewWidget* self, int param1);
bool QPrintPreviewWidget_FocusNextPrevChild(QPrintPreviewWidget* self, bool next);
void QPrintPreviewWidget_OnFocusNextPrevChild(QPrintPreviewWidget* self, intptr_t slot);
bool QPrintPreviewWidget_QBaseFocusNextPrevChild(QPrintPreviewWidget* self, bool next);
bool QPrintPreviewWidget_EventFilter(QPrintPreviewWidget* self, QObject* watched, QEvent* event);
void QPrintPreviewWidget_OnEventFilter(QPrintPreviewWidget* self, intptr_t slot);
bool QPrintPreviewWidget_QBaseEventFilter(QPrintPreviewWidget* self, QObject* watched, QEvent* event);
void QPrintPreviewWidget_TimerEvent(QPrintPreviewWidget* self, QTimerEvent* event);
void QPrintPreviewWidget_OnTimerEvent(QPrintPreviewWidget* self, intptr_t slot);
void QPrintPreviewWidget_QBaseTimerEvent(QPrintPreviewWidget* self, QTimerEvent* event);
void QPrintPreviewWidget_ChildEvent(QPrintPreviewWidget* self, QChildEvent* event);
void QPrintPreviewWidget_OnChildEvent(QPrintPreviewWidget* self, intptr_t slot);
void QPrintPreviewWidget_QBaseChildEvent(QPrintPreviewWidget* self, QChildEvent* event);
void QPrintPreviewWidget_CustomEvent(QPrintPreviewWidget* self, QEvent* event);
void QPrintPreviewWidget_OnCustomEvent(QPrintPreviewWidget* self, intptr_t slot);
void QPrintPreviewWidget_QBaseCustomEvent(QPrintPreviewWidget* self, QEvent* event);
void QPrintPreviewWidget_ConnectNotify(QPrintPreviewWidget* self, const QMetaMethod* signal);
void QPrintPreviewWidget_OnConnectNotify(QPrintPreviewWidget* self, intptr_t slot);
void QPrintPreviewWidget_QBaseConnectNotify(QPrintPreviewWidget* self, const QMetaMethod* signal);
void QPrintPreviewWidget_DisconnectNotify(QPrintPreviewWidget* self, const QMetaMethod* signal);
void QPrintPreviewWidget_OnDisconnectNotify(QPrintPreviewWidget* self, intptr_t slot);
void QPrintPreviewWidget_QBaseDisconnectNotify(QPrintPreviewWidget* self, const QMetaMethod* signal);
void QPrintPreviewWidget_UpdateMicroFocus(QPrintPreviewWidget* self);
void QPrintPreviewWidget_OnUpdateMicroFocus(QPrintPreviewWidget* self, intptr_t slot);
void QPrintPreviewWidget_QBaseUpdateMicroFocus(QPrintPreviewWidget* self);
void QPrintPreviewWidget_Create(QPrintPreviewWidget* self);
void QPrintPreviewWidget_OnCreate(QPrintPreviewWidget* self, intptr_t slot);
void QPrintPreviewWidget_QBaseCreate(QPrintPreviewWidget* self);
void QPrintPreviewWidget_Destroy(QPrintPreviewWidget* self);
void QPrintPreviewWidget_OnDestroy(QPrintPreviewWidget* self, intptr_t slot);
void QPrintPreviewWidget_QBaseDestroy(QPrintPreviewWidget* self);
bool QPrintPreviewWidget_FocusNextChild(QPrintPreviewWidget* self);
void QPrintPreviewWidget_OnFocusNextChild(QPrintPreviewWidget* self, intptr_t slot);
bool QPrintPreviewWidget_QBaseFocusNextChild(QPrintPreviewWidget* self);
bool QPrintPreviewWidget_FocusPreviousChild(QPrintPreviewWidget* self);
void QPrintPreviewWidget_OnFocusPreviousChild(QPrintPreviewWidget* self, intptr_t slot);
bool QPrintPreviewWidget_QBaseFocusPreviousChild(QPrintPreviewWidget* self);
QObject* QPrintPreviewWidget_Sender(const QPrintPreviewWidget* self);
void QPrintPreviewWidget_OnSender(const QPrintPreviewWidget* self, intptr_t slot);
QObject* QPrintPreviewWidget_QBaseSender(const QPrintPreviewWidget* self);
int QPrintPreviewWidget_SenderSignalIndex(const QPrintPreviewWidget* self);
void QPrintPreviewWidget_OnSenderSignalIndex(const QPrintPreviewWidget* self, intptr_t slot);
int QPrintPreviewWidget_QBaseSenderSignalIndex(const QPrintPreviewWidget* self);
int QPrintPreviewWidget_Receivers(const QPrintPreviewWidget* self, const char* signal);
void QPrintPreviewWidget_OnReceivers(const QPrintPreviewWidget* self, intptr_t slot);
int QPrintPreviewWidget_QBaseReceivers(const QPrintPreviewWidget* self, const char* signal);
bool QPrintPreviewWidget_IsSignalConnected(const QPrintPreviewWidget* self, const QMetaMethod* signal);
void QPrintPreviewWidget_OnIsSignalConnected(const QPrintPreviewWidget* self, intptr_t slot);
bool QPrintPreviewWidget_QBaseIsSignalConnected(const QPrintPreviewWidget* self, const QMetaMethod* signal);
void QPrintPreviewWidget_Delete(QPrintPreviewWidget* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
