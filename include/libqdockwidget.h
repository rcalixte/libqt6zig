#pragma once
#ifndef SRCC_LIBQDOCKWIDGET_H
#define SRCC_LIBQDOCKWIDGET_H

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
typedef struct QDockWidget QDockWidget;
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
typedef struct QShowEvent QShowEvent;
typedef struct QSize QSize;
typedef struct QSizePolicy QSizePolicy;
typedef struct QStyle QStyle;
typedef struct QStyleOptionDockWidget QStyleOptionDockWidget;
typedef struct QTabletEvent QTabletEvent;
typedef struct QThread QThread;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
typedef struct QWheelEvent QWheelEvent;
typedef struct QWidget QWidget;
typedef struct QWindow QWindow;
#endif

#ifdef __cplusplus
typedef QDockWidget::DockWidgetFeature DockWidgetFeature;   // C++ enum
typedef QDockWidget::DockWidgetFeatures DockWidgetFeatures; // C++ QFlags
#else
typedef int DockWidgetFeature;  // C ABI enum
typedef int DockWidgetFeatures; // C ABI QFlags
#endif

QDockWidget* QDockWidget_new(QWidget* parent);
QDockWidget* QDockWidget_new2(libqt_string title);
QDockWidget* QDockWidget_new3();
QDockWidget* QDockWidget_new4(libqt_string title, QWidget* parent);
QDockWidget* QDockWidget_new5(libqt_string title, QWidget* parent, int flags);
QDockWidget* QDockWidget_new6(QWidget* parent, int flags);
QMetaObject* QDockWidget_MetaObject(const QDockWidget* self);
void* QDockWidget_Metacast(QDockWidget* self, const char* param1);
int QDockWidget_Metacall(QDockWidget* self, int param1, int param2, void** param3);
void QDockWidget_OnMetacall(QDockWidget* self, intptr_t slot);
int QDockWidget_QBaseMetacall(QDockWidget* self, int param1, int param2, void** param3);
libqt_string QDockWidget_Tr(const char* s);
QWidget* QDockWidget_Widget(const QDockWidget* self);
void QDockWidget_SetWidget(QDockWidget* self, QWidget* widget);
void QDockWidget_SetFeatures(QDockWidget* self, int features);
int QDockWidget_Features(const QDockWidget* self);
void QDockWidget_SetFloating(QDockWidget* self, bool floating);
bool QDockWidget_IsFloating(const QDockWidget* self);
void QDockWidget_SetAllowedAreas(QDockWidget* self, int areas);
int QDockWidget_AllowedAreas(const QDockWidget* self);
void QDockWidget_SetTitleBarWidget(QDockWidget* self, QWidget* widget);
QWidget* QDockWidget_TitleBarWidget(const QDockWidget* self);
bool QDockWidget_IsAreaAllowed(const QDockWidget* self, int area);
QAction* QDockWidget_ToggleViewAction(const QDockWidget* self);
void QDockWidget_FeaturesChanged(QDockWidget* self, int features);
void QDockWidget_Connect_FeaturesChanged(QDockWidget* self, intptr_t slot);
void QDockWidget_TopLevelChanged(QDockWidget* self, bool topLevel);
void QDockWidget_Connect_TopLevelChanged(QDockWidget* self, intptr_t slot);
void QDockWidget_AllowedAreasChanged(QDockWidget* self, int allowedAreas);
void QDockWidget_Connect_AllowedAreasChanged(QDockWidget* self, intptr_t slot);
void QDockWidget_VisibilityChanged(QDockWidget* self, bool visible);
void QDockWidget_Connect_VisibilityChanged(QDockWidget* self, intptr_t slot);
void QDockWidget_DockLocationChanged(QDockWidget* self, int area);
void QDockWidget_Connect_DockLocationChanged(QDockWidget* self, intptr_t slot);
void QDockWidget_ChangeEvent(QDockWidget* self, QEvent* event);
void QDockWidget_OnChangeEvent(QDockWidget* self, intptr_t slot);
void QDockWidget_QBaseChangeEvent(QDockWidget* self, QEvent* event);
void QDockWidget_CloseEvent(QDockWidget* self, QCloseEvent* event);
void QDockWidget_OnCloseEvent(QDockWidget* self, intptr_t slot);
void QDockWidget_QBaseCloseEvent(QDockWidget* self, QCloseEvent* event);
void QDockWidget_PaintEvent(QDockWidget* self, QPaintEvent* event);
void QDockWidget_OnPaintEvent(QDockWidget* self, intptr_t slot);
void QDockWidget_QBasePaintEvent(QDockWidget* self, QPaintEvent* event);
bool QDockWidget_Event(QDockWidget* self, QEvent* event);
void QDockWidget_OnEvent(QDockWidget* self, intptr_t slot);
bool QDockWidget_QBaseEvent(QDockWidget* self, QEvent* event);
void QDockWidget_InitStyleOption(const QDockWidget* self, QStyleOptionDockWidget* option);
void QDockWidget_OnInitStyleOption(const QDockWidget* self, intptr_t slot);
void QDockWidget_QBaseInitStyleOption(const QDockWidget* self, QStyleOptionDockWidget* option);
libqt_string QDockWidget_Tr2(const char* s, const char* c);
libqt_string QDockWidget_Tr3(const char* s, const char* c, int n);
int QDockWidget_DevType(const QDockWidget* self);
void QDockWidget_OnDevType(const QDockWidget* self, intptr_t slot);
int QDockWidget_QBaseDevType(const QDockWidget* self);
void QDockWidget_SetVisible(QDockWidget* self, bool visible);
void QDockWidget_OnSetVisible(QDockWidget* self, intptr_t slot);
void QDockWidget_QBaseSetVisible(QDockWidget* self, bool visible);
QSize* QDockWidget_SizeHint(const QDockWidget* self);
void QDockWidget_OnSizeHint(const QDockWidget* self, intptr_t slot);
QSize* QDockWidget_QBaseSizeHint(const QDockWidget* self);
QSize* QDockWidget_MinimumSizeHint(const QDockWidget* self);
void QDockWidget_OnMinimumSizeHint(const QDockWidget* self, intptr_t slot);
QSize* QDockWidget_QBaseMinimumSizeHint(const QDockWidget* self);
int QDockWidget_HeightForWidth(const QDockWidget* self, int param1);
void QDockWidget_OnHeightForWidth(const QDockWidget* self, intptr_t slot);
int QDockWidget_QBaseHeightForWidth(const QDockWidget* self, int param1);
bool QDockWidget_HasHeightForWidth(const QDockWidget* self);
void QDockWidget_OnHasHeightForWidth(const QDockWidget* self, intptr_t slot);
bool QDockWidget_QBaseHasHeightForWidth(const QDockWidget* self);
QPaintEngine* QDockWidget_PaintEngine(const QDockWidget* self);
void QDockWidget_OnPaintEngine(const QDockWidget* self, intptr_t slot);
QPaintEngine* QDockWidget_QBasePaintEngine(const QDockWidget* self);
void QDockWidget_MousePressEvent(QDockWidget* self, QMouseEvent* event);
void QDockWidget_OnMousePressEvent(QDockWidget* self, intptr_t slot);
void QDockWidget_QBaseMousePressEvent(QDockWidget* self, QMouseEvent* event);
void QDockWidget_MouseReleaseEvent(QDockWidget* self, QMouseEvent* event);
void QDockWidget_OnMouseReleaseEvent(QDockWidget* self, intptr_t slot);
void QDockWidget_QBaseMouseReleaseEvent(QDockWidget* self, QMouseEvent* event);
void QDockWidget_MouseDoubleClickEvent(QDockWidget* self, QMouseEvent* event);
void QDockWidget_OnMouseDoubleClickEvent(QDockWidget* self, intptr_t slot);
void QDockWidget_QBaseMouseDoubleClickEvent(QDockWidget* self, QMouseEvent* event);
void QDockWidget_MouseMoveEvent(QDockWidget* self, QMouseEvent* event);
void QDockWidget_OnMouseMoveEvent(QDockWidget* self, intptr_t slot);
void QDockWidget_QBaseMouseMoveEvent(QDockWidget* self, QMouseEvent* event);
void QDockWidget_WheelEvent(QDockWidget* self, QWheelEvent* event);
void QDockWidget_OnWheelEvent(QDockWidget* self, intptr_t slot);
void QDockWidget_QBaseWheelEvent(QDockWidget* self, QWheelEvent* event);
void QDockWidget_KeyPressEvent(QDockWidget* self, QKeyEvent* event);
void QDockWidget_OnKeyPressEvent(QDockWidget* self, intptr_t slot);
void QDockWidget_QBaseKeyPressEvent(QDockWidget* self, QKeyEvent* event);
void QDockWidget_KeyReleaseEvent(QDockWidget* self, QKeyEvent* event);
void QDockWidget_OnKeyReleaseEvent(QDockWidget* self, intptr_t slot);
void QDockWidget_QBaseKeyReleaseEvent(QDockWidget* self, QKeyEvent* event);
void QDockWidget_FocusInEvent(QDockWidget* self, QFocusEvent* event);
void QDockWidget_OnFocusInEvent(QDockWidget* self, intptr_t slot);
void QDockWidget_QBaseFocusInEvent(QDockWidget* self, QFocusEvent* event);
void QDockWidget_FocusOutEvent(QDockWidget* self, QFocusEvent* event);
void QDockWidget_OnFocusOutEvent(QDockWidget* self, intptr_t slot);
void QDockWidget_QBaseFocusOutEvent(QDockWidget* self, QFocusEvent* event);
void QDockWidget_EnterEvent(QDockWidget* self, QEnterEvent* event);
void QDockWidget_OnEnterEvent(QDockWidget* self, intptr_t slot);
void QDockWidget_QBaseEnterEvent(QDockWidget* self, QEnterEvent* event);
void QDockWidget_LeaveEvent(QDockWidget* self, QEvent* event);
void QDockWidget_OnLeaveEvent(QDockWidget* self, intptr_t slot);
void QDockWidget_QBaseLeaveEvent(QDockWidget* self, QEvent* event);
void QDockWidget_MoveEvent(QDockWidget* self, QMoveEvent* event);
void QDockWidget_OnMoveEvent(QDockWidget* self, intptr_t slot);
void QDockWidget_QBaseMoveEvent(QDockWidget* self, QMoveEvent* event);
void QDockWidget_ResizeEvent(QDockWidget* self, QResizeEvent* event);
void QDockWidget_OnResizeEvent(QDockWidget* self, intptr_t slot);
void QDockWidget_QBaseResizeEvent(QDockWidget* self, QResizeEvent* event);
void QDockWidget_ContextMenuEvent(QDockWidget* self, QContextMenuEvent* event);
void QDockWidget_OnContextMenuEvent(QDockWidget* self, intptr_t slot);
void QDockWidget_QBaseContextMenuEvent(QDockWidget* self, QContextMenuEvent* event);
void QDockWidget_TabletEvent(QDockWidget* self, QTabletEvent* event);
void QDockWidget_OnTabletEvent(QDockWidget* self, intptr_t slot);
void QDockWidget_QBaseTabletEvent(QDockWidget* self, QTabletEvent* event);
void QDockWidget_ActionEvent(QDockWidget* self, QActionEvent* event);
void QDockWidget_OnActionEvent(QDockWidget* self, intptr_t slot);
void QDockWidget_QBaseActionEvent(QDockWidget* self, QActionEvent* event);
void QDockWidget_DragEnterEvent(QDockWidget* self, QDragEnterEvent* event);
void QDockWidget_OnDragEnterEvent(QDockWidget* self, intptr_t slot);
void QDockWidget_QBaseDragEnterEvent(QDockWidget* self, QDragEnterEvent* event);
void QDockWidget_DragMoveEvent(QDockWidget* self, QDragMoveEvent* event);
void QDockWidget_OnDragMoveEvent(QDockWidget* self, intptr_t slot);
void QDockWidget_QBaseDragMoveEvent(QDockWidget* self, QDragMoveEvent* event);
void QDockWidget_DragLeaveEvent(QDockWidget* self, QDragLeaveEvent* event);
void QDockWidget_OnDragLeaveEvent(QDockWidget* self, intptr_t slot);
void QDockWidget_QBaseDragLeaveEvent(QDockWidget* self, QDragLeaveEvent* event);
void QDockWidget_DropEvent(QDockWidget* self, QDropEvent* event);
void QDockWidget_OnDropEvent(QDockWidget* self, intptr_t slot);
void QDockWidget_QBaseDropEvent(QDockWidget* self, QDropEvent* event);
void QDockWidget_ShowEvent(QDockWidget* self, QShowEvent* event);
void QDockWidget_OnShowEvent(QDockWidget* self, intptr_t slot);
void QDockWidget_QBaseShowEvent(QDockWidget* self, QShowEvent* event);
void QDockWidget_HideEvent(QDockWidget* self, QHideEvent* event);
void QDockWidget_OnHideEvent(QDockWidget* self, intptr_t slot);
void QDockWidget_QBaseHideEvent(QDockWidget* self, QHideEvent* event);
bool QDockWidget_NativeEvent(QDockWidget* self, libqt_string eventType, void* message, intptr_t* result);
void QDockWidget_OnNativeEvent(QDockWidget* self, intptr_t slot);
bool QDockWidget_QBaseNativeEvent(QDockWidget* self, libqt_string eventType, void* message, intptr_t* result);
void QDockWidget_InputMethodEvent(QDockWidget* self, QInputMethodEvent* param1);
void QDockWidget_OnInputMethodEvent(QDockWidget* self, intptr_t slot);
void QDockWidget_QBaseInputMethodEvent(QDockWidget* self, QInputMethodEvent* param1);
QVariant* QDockWidget_InputMethodQuery(const QDockWidget* self, int param1);
void QDockWidget_OnInputMethodQuery(const QDockWidget* self, intptr_t slot);
QVariant* QDockWidget_QBaseInputMethodQuery(const QDockWidget* self, int param1);
bool QDockWidget_FocusNextPrevChild(QDockWidget* self, bool next);
void QDockWidget_OnFocusNextPrevChild(QDockWidget* self, intptr_t slot);
bool QDockWidget_QBaseFocusNextPrevChild(QDockWidget* self, bool next);
bool QDockWidget_EventFilter(QDockWidget* self, QObject* watched, QEvent* event);
void QDockWidget_OnEventFilter(QDockWidget* self, intptr_t slot);
bool QDockWidget_QBaseEventFilter(QDockWidget* self, QObject* watched, QEvent* event);
void QDockWidget_TimerEvent(QDockWidget* self, QTimerEvent* event);
void QDockWidget_OnTimerEvent(QDockWidget* self, intptr_t slot);
void QDockWidget_QBaseTimerEvent(QDockWidget* self, QTimerEvent* event);
void QDockWidget_ChildEvent(QDockWidget* self, QChildEvent* event);
void QDockWidget_OnChildEvent(QDockWidget* self, intptr_t slot);
void QDockWidget_QBaseChildEvent(QDockWidget* self, QChildEvent* event);
void QDockWidget_CustomEvent(QDockWidget* self, QEvent* event);
void QDockWidget_OnCustomEvent(QDockWidget* self, intptr_t slot);
void QDockWidget_QBaseCustomEvent(QDockWidget* self, QEvent* event);
void QDockWidget_ConnectNotify(QDockWidget* self, QMetaMethod* signal);
void QDockWidget_OnConnectNotify(QDockWidget* self, intptr_t slot);
void QDockWidget_QBaseConnectNotify(QDockWidget* self, QMetaMethod* signal);
void QDockWidget_DisconnectNotify(QDockWidget* self, QMetaMethod* signal);
void QDockWidget_OnDisconnectNotify(QDockWidget* self, intptr_t slot);
void QDockWidget_QBaseDisconnectNotify(QDockWidget* self, QMetaMethod* signal);
int QDockWidget_Metric(const QDockWidget* self, int param1);
void QDockWidget_OnMetric(const QDockWidget* self, intptr_t slot);
int QDockWidget_QBaseMetric(const QDockWidget* self, int param1);
void QDockWidget_InitPainter(const QDockWidget* self, QPainter* painter);
void QDockWidget_OnInitPainter(const QDockWidget* self, intptr_t slot);
void QDockWidget_QBaseInitPainter(const QDockWidget* self, QPainter* painter);
QPaintDevice* QDockWidget_Redirected(const QDockWidget* self, QPoint* offset);
void QDockWidget_OnRedirected(const QDockWidget* self, intptr_t slot);
QPaintDevice* QDockWidget_QBaseRedirected(const QDockWidget* self, QPoint* offset);
QPainter* QDockWidget_SharedPainter(const QDockWidget* self);
void QDockWidget_OnSharedPainter(const QDockWidget* self, intptr_t slot);
QPainter* QDockWidget_QBaseSharedPainter(const QDockWidget* self);
void QDockWidget_UpdateMicroFocus(QDockWidget* self);
void QDockWidget_OnUpdateMicroFocus(QDockWidget* self, intptr_t slot);
void QDockWidget_QBaseUpdateMicroFocus(QDockWidget* self);
void QDockWidget_Create(QDockWidget* self);
void QDockWidget_OnCreate(QDockWidget* self, intptr_t slot);
void QDockWidget_QBaseCreate(QDockWidget* self);
void QDockWidget_Destroy(QDockWidget* self);
void QDockWidget_OnDestroy(QDockWidget* self, intptr_t slot);
void QDockWidget_QBaseDestroy(QDockWidget* self);
bool QDockWidget_FocusNextChild(QDockWidget* self);
void QDockWidget_OnFocusNextChild(QDockWidget* self, intptr_t slot);
bool QDockWidget_QBaseFocusNextChild(QDockWidget* self);
bool QDockWidget_FocusPreviousChild(QDockWidget* self);
void QDockWidget_OnFocusPreviousChild(QDockWidget* self, intptr_t slot);
bool QDockWidget_QBaseFocusPreviousChild(QDockWidget* self);
QObject* QDockWidget_Sender(const QDockWidget* self);
void QDockWidget_OnSender(const QDockWidget* self, intptr_t slot);
QObject* QDockWidget_QBaseSender(const QDockWidget* self);
int QDockWidget_SenderSignalIndex(const QDockWidget* self);
void QDockWidget_OnSenderSignalIndex(const QDockWidget* self, intptr_t slot);
int QDockWidget_QBaseSenderSignalIndex(const QDockWidget* self);
int QDockWidget_Receivers(const QDockWidget* self, const char* signal);
void QDockWidget_OnReceivers(const QDockWidget* self, intptr_t slot);
int QDockWidget_QBaseReceivers(const QDockWidget* self, const char* signal);
bool QDockWidget_IsSignalConnected(const QDockWidget* self, QMetaMethod* signal);
void QDockWidget_OnIsSignalConnected(const QDockWidget* self, intptr_t slot);
bool QDockWidget_QBaseIsSignalConnected(const QDockWidget* self, QMetaMethod* signal);
void QDockWidget_Delete(QDockWidget* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
