#pragma once
#ifndef SRCC_LIBQSCROLLAREA_H
#define SRCC_LIBQSCROLLAREA_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QMetaObject__Connection)
typedef QMetaObject::Connection QMetaObject__Connection;
#endif
#else
typedef struct QAbstractScrollArea QAbstractScrollArea;
typedef struct QAction QAction;
typedef struct QActionEvent QActionEvent;
typedef struct QAnyStringView QAnyStringView;
typedef struct QBackingStore QBackingStore;
typedef struct QBindingStorage QBindingStorage;
typedef struct QBitmap QBitmap;
typedef struct QChildEvent QChildEvent;
typedef struct QCloseEvent QCloseEvent;
typedef struct QContextMenuEvent QContextMenuEvent;
typedef struct QCursor QCursor;
typedef struct QDragEnterEvent QDragEnterEvent;
typedef struct QDragLeaveEvent QDragLeaveEvent;
typedef struct QDragMoveEvent QDragMoveEvent;
typedef struct QDropEvent QDropEvent;
typedef struct QEnterEvent QEnterEvent;
typedef struct QEvent QEvent;
typedef struct QFocusEvent QFocusEvent;
typedef struct QFont QFont;
typedef struct QFontInfo QFontInfo;
typedef struct QFontMetrics QFontMetrics;
typedef struct QFrame QFrame;
typedef struct QGraphicsEffect QGraphicsEffect;
typedef struct QGraphicsProxyWidget QGraphicsProxyWidget;
typedef struct QHideEvent QHideEvent;
typedef struct QIcon QIcon;
typedef struct QInputMethodEvent QInputMethodEvent;
typedef struct QKeyEvent QKeyEvent;
typedef struct QKeySequence QKeySequence;
typedef struct QLayout QLayout;
typedef struct QLocale QLocale;
typedef struct QMargins QMargins;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QMetaObject__Connection QMetaObject__Connection;
typedef struct QMouseEvent QMouseEvent;
typedef struct QMoveEvent QMoveEvent;
typedef struct QObject QObject;
typedef struct QPaintDevice QPaintDevice;
typedef struct QPaintEngine QPaintEngine;
typedef struct QPaintEvent QPaintEvent;
typedef struct QPainter QPainter;
typedef struct QPalette QPalette;
typedef struct QPixmap QPixmap;
typedef struct QPoint QPoint;
typedef struct QPointF QPointF;
typedef struct QRect QRect;
typedef struct QRegion QRegion;
typedef struct QResizeEvent QResizeEvent;
typedef struct QScreen QScreen;
typedef struct QScrollArea QScrollArea;
typedef struct QScrollBar QScrollBar;
typedef struct QShowEvent QShowEvent;
typedef struct QSize QSize;
typedef struct QSizePolicy QSizePolicy;
typedef struct QStyle QStyle;
typedef struct QStyleOptionFrame QStyleOptionFrame;
typedef struct QTabletEvent QTabletEvent;
typedef struct QThread QThread;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
typedef struct QWheelEvent QWheelEvent;
typedef struct QWidget QWidget;
typedef struct QWindow QWindow;
#endif

QScrollArea* QScrollArea_new(QWidget* parent);
QScrollArea* QScrollArea_new2();
QMetaObject* QScrollArea_MetaObject(const QScrollArea* self);
void* QScrollArea_Metacast(QScrollArea* self, const char* param1);
int QScrollArea_Metacall(QScrollArea* self, int param1, int param2, void** param3);
void QScrollArea_OnMetacall(QScrollArea* self, intptr_t slot);
int QScrollArea_QBaseMetacall(QScrollArea* self, int param1, int param2, void** param3);
libqt_string QScrollArea_Tr(const char* s);
QWidget* QScrollArea_Widget(const QScrollArea* self);
void QScrollArea_SetWidget(QScrollArea* self, QWidget* widget);
QWidget* QScrollArea_TakeWidget(QScrollArea* self);
bool QScrollArea_WidgetResizable(const QScrollArea* self);
void QScrollArea_SetWidgetResizable(QScrollArea* self, bool resizable);
QSize* QScrollArea_SizeHint(const QScrollArea* self);
void QScrollArea_OnSizeHint(const QScrollArea* self, intptr_t slot);
QSize* QScrollArea_QBaseSizeHint(const QScrollArea* self);
bool QScrollArea_FocusNextPrevChild(QScrollArea* self, bool next);
void QScrollArea_OnFocusNextPrevChild(QScrollArea* self, intptr_t slot);
bool QScrollArea_QBaseFocusNextPrevChild(QScrollArea* self, bool next);
int QScrollArea_Alignment(const QScrollArea* self);
void QScrollArea_SetAlignment(QScrollArea* self, int alignment);
void QScrollArea_EnsureVisible(QScrollArea* self, int x, int y);
void QScrollArea_EnsureWidgetVisible(QScrollArea* self, QWidget* childWidget);
bool QScrollArea_Event(QScrollArea* self, QEvent* param1);
void QScrollArea_OnEvent(QScrollArea* self, intptr_t slot);
bool QScrollArea_QBaseEvent(QScrollArea* self, QEvent* param1);
bool QScrollArea_EventFilter(QScrollArea* self, QObject* param1, QEvent* param2);
void QScrollArea_OnEventFilter(QScrollArea* self, intptr_t slot);
bool QScrollArea_QBaseEventFilter(QScrollArea* self, QObject* param1, QEvent* param2);
void QScrollArea_ResizeEvent(QScrollArea* self, QResizeEvent* param1);
void QScrollArea_OnResizeEvent(QScrollArea* self, intptr_t slot);
void QScrollArea_QBaseResizeEvent(QScrollArea* self, QResizeEvent* param1);
void QScrollArea_ScrollContentsBy(QScrollArea* self, int dx, int dy);
void QScrollArea_OnScrollContentsBy(QScrollArea* self, intptr_t slot);
void QScrollArea_QBaseScrollContentsBy(QScrollArea* self, int dx, int dy);
QSize* QScrollArea_ViewportSizeHint(const QScrollArea* self);
void QScrollArea_OnViewportSizeHint(const QScrollArea* self, intptr_t slot);
QSize* QScrollArea_QBaseViewportSizeHint(const QScrollArea* self);
libqt_string QScrollArea_Tr2(const char* s, const char* c);
libqt_string QScrollArea_Tr3(const char* s, const char* c, int n);
void QScrollArea_EnsureVisible3(QScrollArea* self, int x, int y, int xmargin);
void QScrollArea_EnsureVisible4(QScrollArea* self, int x, int y, int xmargin, int ymargin);
void QScrollArea_EnsureWidgetVisible2(QScrollArea* self, QWidget* childWidget, int xmargin);
void QScrollArea_EnsureWidgetVisible3(QScrollArea* self, QWidget* childWidget, int xmargin, int ymargin);
QSize* QScrollArea_MinimumSizeHint(const QScrollArea* self);
void QScrollArea_OnMinimumSizeHint(const QScrollArea* self, intptr_t slot);
QSize* QScrollArea_QBaseMinimumSizeHint(const QScrollArea* self);
void QScrollArea_SetupViewport(QScrollArea* self, QWidget* viewport);
void QScrollArea_OnSetupViewport(QScrollArea* self, intptr_t slot);
void QScrollArea_QBaseSetupViewport(QScrollArea* self, QWidget* viewport);
bool QScrollArea_ViewportEvent(QScrollArea* self, QEvent* param1);
void QScrollArea_OnViewportEvent(QScrollArea* self, intptr_t slot);
bool QScrollArea_QBaseViewportEvent(QScrollArea* self, QEvent* param1);
void QScrollArea_PaintEvent(QScrollArea* self, QPaintEvent* param1);
void QScrollArea_OnPaintEvent(QScrollArea* self, intptr_t slot);
void QScrollArea_QBasePaintEvent(QScrollArea* self, QPaintEvent* param1);
void QScrollArea_MousePressEvent(QScrollArea* self, QMouseEvent* param1);
void QScrollArea_OnMousePressEvent(QScrollArea* self, intptr_t slot);
void QScrollArea_QBaseMousePressEvent(QScrollArea* self, QMouseEvent* param1);
void QScrollArea_MouseReleaseEvent(QScrollArea* self, QMouseEvent* param1);
void QScrollArea_OnMouseReleaseEvent(QScrollArea* self, intptr_t slot);
void QScrollArea_QBaseMouseReleaseEvent(QScrollArea* self, QMouseEvent* param1);
void QScrollArea_MouseDoubleClickEvent(QScrollArea* self, QMouseEvent* param1);
void QScrollArea_OnMouseDoubleClickEvent(QScrollArea* self, intptr_t slot);
void QScrollArea_QBaseMouseDoubleClickEvent(QScrollArea* self, QMouseEvent* param1);
void QScrollArea_MouseMoveEvent(QScrollArea* self, QMouseEvent* param1);
void QScrollArea_OnMouseMoveEvent(QScrollArea* self, intptr_t slot);
void QScrollArea_QBaseMouseMoveEvent(QScrollArea* self, QMouseEvent* param1);
void QScrollArea_WheelEvent(QScrollArea* self, QWheelEvent* param1);
void QScrollArea_OnWheelEvent(QScrollArea* self, intptr_t slot);
void QScrollArea_QBaseWheelEvent(QScrollArea* self, QWheelEvent* param1);
void QScrollArea_ContextMenuEvent(QScrollArea* self, QContextMenuEvent* param1);
void QScrollArea_OnContextMenuEvent(QScrollArea* self, intptr_t slot);
void QScrollArea_QBaseContextMenuEvent(QScrollArea* self, QContextMenuEvent* param1);
void QScrollArea_DragEnterEvent(QScrollArea* self, QDragEnterEvent* param1);
void QScrollArea_OnDragEnterEvent(QScrollArea* self, intptr_t slot);
void QScrollArea_QBaseDragEnterEvent(QScrollArea* self, QDragEnterEvent* param1);
void QScrollArea_DragMoveEvent(QScrollArea* self, QDragMoveEvent* param1);
void QScrollArea_OnDragMoveEvent(QScrollArea* self, intptr_t slot);
void QScrollArea_QBaseDragMoveEvent(QScrollArea* self, QDragMoveEvent* param1);
void QScrollArea_DragLeaveEvent(QScrollArea* self, QDragLeaveEvent* param1);
void QScrollArea_OnDragLeaveEvent(QScrollArea* self, intptr_t slot);
void QScrollArea_QBaseDragLeaveEvent(QScrollArea* self, QDragLeaveEvent* param1);
void QScrollArea_DropEvent(QScrollArea* self, QDropEvent* param1);
void QScrollArea_OnDropEvent(QScrollArea* self, intptr_t slot);
void QScrollArea_QBaseDropEvent(QScrollArea* self, QDropEvent* param1);
void QScrollArea_KeyPressEvent(QScrollArea* self, QKeyEvent* param1);
void QScrollArea_OnKeyPressEvent(QScrollArea* self, intptr_t slot);
void QScrollArea_QBaseKeyPressEvent(QScrollArea* self, QKeyEvent* param1);
void QScrollArea_ChangeEvent(QScrollArea* self, QEvent* param1);
void QScrollArea_OnChangeEvent(QScrollArea* self, intptr_t slot);
void QScrollArea_QBaseChangeEvent(QScrollArea* self, QEvent* param1);
int QScrollArea_DevType(const QScrollArea* self);
void QScrollArea_OnDevType(const QScrollArea* self, intptr_t slot);
int QScrollArea_QBaseDevType(const QScrollArea* self);
void QScrollArea_SetVisible(QScrollArea* self, bool visible);
void QScrollArea_OnSetVisible(QScrollArea* self, intptr_t slot);
void QScrollArea_QBaseSetVisible(QScrollArea* self, bool visible);
int QScrollArea_HeightForWidth(const QScrollArea* self, int param1);
void QScrollArea_OnHeightForWidth(const QScrollArea* self, intptr_t slot);
int QScrollArea_QBaseHeightForWidth(const QScrollArea* self, int param1);
bool QScrollArea_HasHeightForWidth(const QScrollArea* self);
void QScrollArea_OnHasHeightForWidth(const QScrollArea* self, intptr_t slot);
bool QScrollArea_QBaseHasHeightForWidth(const QScrollArea* self);
QPaintEngine* QScrollArea_PaintEngine(const QScrollArea* self);
void QScrollArea_OnPaintEngine(const QScrollArea* self, intptr_t slot);
QPaintEngine* QScrollArea_QBasePaintEngine(const QScrollArea* self);
void QScrollArea_KeyReleaseEvent(QScrollArea* self, QKeyEvent* event);
void QScrollArea_OnKeyReleaseEvent(QScrollArea* self, intptr_t slot);
void QScrollArea_QBaseKeyReleaseEvent(QScrollArea* self, QKeyEvent* event);
void QScrollArea_FocusInEvent(QScrollArea* self, QFocusEvent* event);
void QScrollArea_OnFocusInEvent(QScrollArea* self, intptr_t slot);
void QScrollArea_QBaseFocusInEvent(QScrollArea* self, QFocusEvent* event);
void QScrollArea_FocusOutEvent(QScrollArea* self, QFocusEvent* event);
void QScrollArea_OnFocusOutEvent(QScrollArea* self, intptr_t slot);
void QScrollArea_QBaseFocusOutEvent(QScrollArea* self, QFocusEvent* event);
void QScrollArea_EnterEvent(QScrollArea* self, QEnterEvent* event);
void QScrollArea_OnEnterEvent(QScrollArea* self, intptr_t slot);
void QScrollArea_QBaseEnterEvent(QScrollArea* self, QEnterEvent* event);
void QScrollArea_LeaveEvent(QScrollArea* self, QEvent* event);
void QScrollArea_OnLeaveEvent(QScrollArea* self, intptr_t slot);
void QScrollArea_QBaseLeaveEvent(QScrollArea* self, QEvent* event);
void QScrollArea_MoveEvent(QScrollArea* self, QMoveEvent* event);
void QScrollArea_OnMoveEvent(QScrollArea* self, intptr_t slot);
void QScrollArea_QBaseMoveEvent(QScrollArea* self, QMoveEvent* event);
void QScrollArea_CloseEvent(QScrollArea* self, QCloseEvent* event);
void QScrollArea_OnCloseEvent(QScrollArea* self, intptr_t slot);
void QScrollArea_QBaseCloseEvent(QScrollArea* self, QCloseEvent* event);
void QScrollArea_TabletEvent(QScrollArea* self, QTabletEvent* event);
void QScrollArea_OnTabletEvent(QScrollArea* self, intptr_t slot);
void QScrollArea_QBaseTabletEvent(QScrollArea* self, QTabletEvent* event);
void QScrollArea_ActionEvent(QScrollArea* self, QActionEvent* event);
void QScrollArea_OnActionEvent(QScrollArea* self, intptr_t slot);
void QScrollArea_QBaseActionEvent(QScrollArea* self, QActionEvent* event);
void QScrollArea_ShowEvent(QScrollArea* self, QShowEvent* event);
void QScrollArea_OnShowEvent(QScrollArea* self, intptr_t slot);
void QScrollArea_QBaseShowEvent(QScrollArea* self, QShowEvent* event);
void QScrollArea_HideEvent(QScrollArea* self, QHideEvent* event);
void QScrollArea_OnHideEvent(QScrollArea* self, intptr_t slot);
void QScrollArea_QBaseHideEvent(QScrollArea* self, QHideEvent* event);
bool QScrollArea_NativeEvent(QScrollArea* self, libqt_string eventType, void* message, intptr_t* result);
void QScrollArea_OnNativeEvent(QScrollArea* self, intptr_t slot);
bool QScrollArea_QBaseNativeEvent(QScrollArea* self, libqt_string eventType, void* message, intptr_t* result);
void QScrollArea_InputMethodEvent(QScrollArea* self, QInputMethodEvent* param1);
void QScrollArea_OnInputMethodEvent(QScrollArea* self, intptr_t slot);
void QScrollArea_QBaseInputMethodEvent(QScrollArea* self, QInputMethodEvent* param1);
QVariant* QScrollArea_InputMethodQuery(const QScrollArea* self, int param1);
void QScrollArea_OnInputMethodQuery(const QScrollArea* self, intptr_t slot);
QVariant* QScrollArea_QBaseInputMethodQuery(const QScrollArea* self, int param1);
void QScrollArea_TimerEvent(QScrollArea* self, QTimerEvent* event);
void QScrollArea_OnTimerEvent(QScrollArea* self, intptr_t slot);
void QScrollArea_QBaseTimerEvent(QScrollArea* self, QTimerEvent* event);
void QScrollArea_ChildEvent(QScrollArea* self, QChildEvent* event);
void QScrollArea_OnChildEvent(QScrollArea* self, intptr_t slot);
void QScrollArea_QBaseChildEvent(QScrollArea* self, QChildEvent* event);
void QScrollArea_CustomEvent(QScrollArea* self, QEvent* event);
void QScrollArea_OnCustomEvent(QScrollArea* self, intptr_t slot);
void QScrollArea_QBaseCustomEvent(QScrollArea* self, QEvent* event);
void QScrollArea_ConnectNotify(QScrollArea* self, QMetaMethod* signal);
void QScrollArea_OnConnectNotify(QScrollArea* self, intptr_t slot);
void QScrollArea_QBaseConnectNotify(QScrollArea* self, QMetaMethod* signal);
void QScrollArea_DisconnectNotify(QScrollArea* self, QMetaMethod* signal);
void QScrollArea_OnDisconnectNotify(QScrollArea* self, intptr_t slot);
void QScrollArea_QBaseDisconnectNotify(QScrollArea* self, QMetaMethod* signal);
void QScrollArea_InitStyleOption(const QScrollArea* self, QStyleOptionFrame* option);
void QScrollArea_OnInitStyleOption(const QScrollArea* self, intptr_t slot);
void QScrollArea_QBaseInitStyleOption(const QScrollArea* self, QStyleOptionFrame* option);
int QScrollArea_Metric(const QScrollArea* self, int param1);
void QScrollArea_OnMetric(const QScrollArea* self, intptr_t slot);
int QScrollArea_QBaseMetric(const QScrollArea* self, int param1);
void QScrollArea_InitPainter(const QScrollArea* self, QPainter* painter);
void QScrollArea_OnInitPainter(const QScrollArea* self, intptr_t slot);
void QScrollArea_QBaseInitPainter(const QScrollArea* self, QPainter* painter);
QPaintDevice* QScrollArea_Redirected(const QScrollArea* self, QPoint* offset);
void QScrollArea_OnRedirected(const QScrollArea* self, intptr_t slot);
QPaintDevice* QScrollArea_QBaseRedirected(const QScrollArea* self, QPoint* offset);
QPainter* QScrollArea_SharedPainter(const QScrollArea* self);
void QScrollArea_OnSharedPainter(const QScrollArea* self, intptr_t slot);
QPainter* QScrollArea_QBaseSharedPainter(const QScrollArea* self);
void QScrollArea_SetViewportMargins(QScrollArea* self, int left, int top, int right, int bottom);
void QScrollArea_OnSetViewportMargins(QScrollArea* self, intptr_t slot);
void QScrollArea_QBaseSetViewportMargins(QScrollArea* self, int left, int top, int right, int bottom);
QMargins* QScrollArea_ViewportMargins(const QScrollArea* self);
void QScrollArea_OnViewportMargins(const QScrollArea* self, intptr_t slot);
QMargins* QScrollArea_QBaseViewportMargins(const QScrollArea* self);
void QScrollArea_DrawFrame(QScrollArea* self, QPainter* param1);
void QScrollArea_OnDrawFrame(QScrollArea* self, intptr_t slot);
void QScrollArea_QBaseDrawFrame(QScrollArea* self, QPainter* param1);
void QScrollArea_UpdateMicroFocus(QScrollArea* self);
void QScrollArea_OnUpdateMicroFocus(QScrollArea* self, intptr_t slot);
void QScrollArea_QBaseUpdateMicroFocus(QScrollArea* self);
void QScrollArea_Create(QScrollArea* self);
void QScrollArea_OnCreate(QScrollArea* self, intptr_t slot);
void QScrollArea_QBaseCreate(QScrollArea* self);
void QScrollArea_Destroy(QScrollArea* self);
void QScrollArea_OnDestroy(QScrollArea* self, intptr_t slot);
void QScrollArea_QBaseDestroy(QScrollArea* self);
bool QScrollArea_FocusNextChild(QScrollArea* self);
void QScrollArea_OnFocusNextChild(QScrollArea* self, intptr_t slot);
bool QScrollArea_QBaseFocusNextChild(QScrollArea* self);
bool QScrollArea_FocusPreviousChild(QScrollArea* self);
void QScrollArea_OnFocusPreviousChild(QScrollArea* self, intptr_t slot);
bool QScrollArea_QBaseFocusPreviousChild(QScrollArea* self);
QObject* QScrollArea_Sender(const QScrollArea* self);
void QScrollArea_OnSender(const QScrollArea* self, intptr_t slot);
QObject* QScrollArea_QBaseSender(const QScrollArea* self);
int QScrollArea_SenderSignalIndex(const QScrollArea* self);
void QScrollArea_OnSenderSignalIndex(const QScrollArea* self, intptr_t slot);
int QScrollArea_QBaseSenderSignalIndex(const QScrollArea* self);
int QScrollArea_Receivers(const QScrollArea* self, const char* signal);
void QScrollArea_OnReceivers(const QScrollArea* self, intptr_t slot);
int QScrollArea_QBaseReceivers(const QScrollArea* self, const char* signal);
bool QScrollArea_IsSignalConnected(const QScrollArea* self, QMetaMethod* signal);
void QScrollArea_OnIsSignalConnected(const QScrollArea* self, intptr_t slot);
bool QScrollArea_QBaseIsSignalConnected(const QScrollArea* self, QMetaMethod* signal);
void QScrollArea_Delete(QScrollArea* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
