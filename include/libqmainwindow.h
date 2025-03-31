#pragma once
#ifndef SRCC_LIBQMAINWINDOW_H
#define SRCC_LIBQMAINWINDOW_H

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
typedef struct QMainWindow QMainWindow;
typedef struct QMargins QMargins;
typedef struct QMenu QMenu;
typedef struct QMenuBar QMenuBar;
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
typedef struct QStatusBar QStatusBar;
typedef struct QStyle QStyle;
typedef struct QTabletEvent QTabletEvent;
typedef struct QThread QThread;
typedef struct QTimerEvent QTimerEvent;
typedef struct QToolBar QToolBar;
typedef struct QVariant QVariant;
typedef struct QWheelEvent QWheelEvent;
typedef struct QWidget QWidget;
typedef struct QWindow QWindow;
#endif

#ifdef __cplusplus
typedef QMainWindow::DockOption DockOption;   // C++ enum
typedef QMainWindow::DockOptions DockOptions; // C++ QFlags
#else
typedef int DockOption;  // C ABI enum
typedef int DockOptions; // C ABI QFlags
#endif

QMainWindow* QMainWindow_new(QWidget* parent);
QMainWindow* QMainWindow_new2();
QMainWindow* QMainWindow_new3(QWidget* parent, int flags);
QMetaObject* QMainWindow_MetaObject(const QMainWindow* self);
void* QMainWindow_Metacast(QMainWindow* self, const char* param1);
int QMainWindow_Metacall(QMainWindow* self, int param1, int param2, void** param3);
void QMainWindow_OnMetacall(QMainWindow* self, intptr_t slot);
int QMainWindow_QBaseMetacall(QMainWindow* self, int param1, int param2, void** param3);
libqt_string QMainWindow_Tr(const char* s);
QSize* QMainWindow_IconSize(const QMainWindow* self);
void QMainWindow_SetIconSize(QMainWindow* self, QSize* iconSize);
int QMainWindow_ToolButtonStyle(const QMainWindow* self);
void QMainWindow_SetToolButtonStyle(QMainWindow* self, int toolButtonStyle);
bool QMainWindow_IsAnimated(const QMainWindow* self);
bool QMainWindow_IsDockNestingEnabled(const QMainWindow* self);
bool QMainWindow_DocumentMode(const QMainWindow* self);
void QMainWindow_SetDocumentMode(QMainWindow* self, bool enabled);
int QMainWindow_TabShape(const QMainWindow* self);
void QMainWindow_SetTabShape(QMainWindow* self, int tabShape);
int QMainWindow_TabPosition(const QMainWindow* self, int area);
void QMainWindow_SetTabPosition(QMainWindow* self, int areas, int tabPosition);
void QMainWindow_SetDockOptions(QMainWindow* self, int options);
int QMainWindow_DockOptions(const QMainWindow* self);
bool QMainWindow_IsSeparator(const QMainWindow* self, QPoint* pos);
QMenuBar* QMainWindow_MenuBar(const QMainWindow* self);
void QMainWindow_SetMenuBar(QMainWindow* self, QMenuBar* menubar);
QWidget* QMainWindow_MenuWidget(const QMainWindow* self);
void QMainWindow_SetMenuWidget(QMainWindow* self, QWidget* menubar);
QStatusBar* QMainWindow_StatusBar(const QMainWindow* self);
void QMainWindow_SetStatusBar(QMainWindow* self, QStatusBar* statusbar);
QWidget* QMainWindow_CentralWidget(const QMainWindow* self);
void QMainWindow_SetCentralWidget(QMainWindow* self, QWidget* widget);
QWidget* QMainWindow_TakeCentralWidget(QMainWindow* self);
void QMainWindow_SetCorner(QMainWindow* self, int corner, int area);
int QMainWindow_Corner(const QMainWindow* self, int corner);
void QMainWindow_AddToolBarBreak(QMainWindow* self);
void QMainWindow_InsertToolBarBreak(QMainWindow* self, QToolBar* before);
void QMainWindow_AddToolBar(QMainWindow* self, int area, QToolBar* toolbar);
void QMainWindow_AddToolBarWithToolbar(QMainWindow* self, QToolBar* toolbar);
QToolBar* QMainWindow_AddToolBarWithTitle(QMainWindow* self, libqt_string title);
void QMainWindow_InsertToolBar(QMainWindow* self, QToolBar* before, QToolBar* toolbar);
void QMainWindow_RemoveToolBar(QMainWindow* self, QToolBar* toolbar);
void QMainWindow_RemoveToolBarBreak(QMainWindow* self, QToolBar* before);
bool QMainWindow_UnifiedTitleAndToolBarOnMac(const QMainWindow* self);
int QMainWindow_ToolBarArea(const QMainWindow* self, QToolBar* toolbar);
bool QMainWindow_ToolBarBreak(const QMainWindow* self, QToolBar* toolbar);
void QMainWindow_AddDockWidget(QMainWindow* self, int area, QDockWidget* dockwidget);
void QMainWindow_AddDockWidget2(QMainWindow* self, int area, QDockWidget* dockwidget, int orientation);
void QMainWindow_SplitDockWidget(QMainWindow* self, QDockWidget* after, QDockWidget* dockwidget, int orientation);
void QMainWindow_TabifyDockWidget(QMainWindow* self, QDockWidget* first, QDockWidget* second);
libqt_list /* of QDockWidget* */ QMainWindow_TabifiedDockWidgets(const QMainWindow* self, QDockWidget* dockwidget);
void QMainWindow_RemoveDockWidget(QMainWindow* self, QDockWidget* dockwidget);
bool QMainWindow_RestoreDockWidget(QMainWindow* self, QDockWidget* dockwidget);
int QMainWindow_DockWidgetArea(const QMainWindow* self, QDockWidget* dockwidget);
void QMainWindow_ResizeDocks(QMainWindow* self, libqt_list /* of QDockWidget* */ docks, libqt_list /* of int */ sizes, int orientation);
libqt_string QMainWindow_SaveState(const QMainWindow* self);
bool QMainWindow_RestoreState(QMainWindow* self, libqt_string state);
QMenu* QMainWindow_CreatePopupMenu(QMainWindow* self);
void QMainWindow_OnCreatePopupMenu(QMainWindow* self, intptr_t slot);
QMenu* QMainWindow_QBaseCreatePopupMenu(QMainWindow* self);
void QMainWindow_SetAnimated(QMainWindow* self, bool enabled);
void QMainWindow_SetDockNestingEnabled(QMainWindow* self, bool enabled);
void QMainWindow_SetUnifiedTitleAndToolBarOnMac(QMainWindow* self, bool set);
void QMainWindow_IconSizeChanged(QMainWindow* self, QSize* iconSize);
void QMainWindow_Connect_IconSizeChanged(QMainWindow* self, intptr_t slot);
void QMainWindow_ToolButtonStyleChanged(QMainWindow* self, int toolButtonStyle);
void QMainWindow_Connect_ToolButtonStyleChanged(QMainWindow* self, intptr_t slot);
void QMainWindow_TabifiedDockWidgetActivated(QMainWindow* self, QDockWidget* dockWidget);
void QMainWindow_Connect_TabifiedDockWidgetActivated(QMainWindow* self, intptr_t slot);
void QMainWindow_ContextMenuEvent(QMainWindow* self, QContextMenuEvent* event);
void QMainWindow_OnContextMenuEvent(QMainWindow* self, intptr_t slot);
void QMainWindow_QBaseContextMenuEvent(QMainWindow* self, QContextMenuEvent* event);
bool QMainWindow_Event(QMainWindow* self, QEvent* event);
void QMainWindow_OnEvent(QMainWindow* self, intptr_t slot);
bool QMainWindow_QBaseEvent(QMainWindow* self, QEvent* event);
libqt_string QMainWindow_Tr2(const char* s, const char* c);
libqt_string QMainWindow_Tr3(const char* s, const char* c, int n);
void QMainWindow_AddToolBarBreak1(QMainWindow* self, int area);
libqt_string QMainWindow_SaveState1(const QMainWindow* self, int version);
bool QMainWindow_RestoreState2(QMainWindow* self, libqt_string state, int version);
int QMainWindow_DevType(const QMainWindow* self);
void QMainWindow_OnDevType(const QMainWindow* self, intptr_t slot);
int QMainWindow_QBaseDevType(const QMainWindow* self);
void QMainWindow_SetVisible(QMainWindow* self, bool visible);
void QMainWindow_OnSetVisible(QMainWindow* self, intptr_t slot);
void QMainWindow_QBaseSetVisible(QMainWindow* self, bool visible);
QSize* QMainWindow_SizeHint(const QMainWindow* self);
void QMainWindow_OnSizeHint(const QMainWindow* self, intptr_t slot);
QSize* QMainWindow_QBaseSizeHint(const QMainWindow* self);
QSize* QMainWindow_MinimumSizeHint(const QMainWindow* self);
void QMainWindow_OnMinimumSizeHint(const QMainWindow* self, intptr_t slot);
QSize* QMainWindow_QBaseMinimumSizeHint(const QMainWindow* self);
int QMainWindow_HeightForWidth(const QMainWindow* self, int param1);
void QMainWindow_OnHeightForWidth(const QMainWindow* self, intptr_t slot);
int QMainWindow_QBaseHeightForWidth(const QMainWindow* self, int param1);
bool QMainWindow_HasHeightForWidth(const QMainWindow* self);
void QMainWindow_OnHasHeightForWidth(const QMainWindow* self, intptr_t slot);
bool QMainWindow_QBaseHasHeightForWidth(const QMainWindow* self);
QPaintEngine* QMainWindow_PaintEngine(const QMainWindow* self);
void QMainWindow_OnPaintEngine(const QMainWindow* self, intptr_t slot);
QPaintEngine* QMainWindow_QBasePaintEngine(const QMainWindow* self);
void QMainWindow_MousePressEvent(QMainWindow* self, QMouseEvent* event);
void QMainWindow_OnMousePressEvent(QMainWindow* self, intptr_t slot);
void QMainWindow_QBaseMousePressEvent(QMainWindow* self, QMouseEvent* event);
void QMainWindow_MouseReleaseEvent(QMainWindow* self, QMouseEvent* event);
void QMainWindow_OnMouseReleaseEvent(QMainWindow* self, intptr_t slot);
void QMainWindow_QBaseMouseReleaseEvent(QMainWindow* self, QMouseEvent* event);
void QMainWindow_MouseDoubleClickEvent(QMainWindow* self, QMouseEvent* event);
void QMainWindow_OnMouseDoubleClickEvent(QMainWindow* self, intptr_t slot);
void QMainWindow_QBaseMouseDoubleClickEvent(QMainWindow* self, QMouseEvent* event);
void QMainWindow_MouseMoveEvent(QMainWindow* self, QMouseEvent* event);
void QMainWindow_OnMouseMoveEvent(QMainWindow* self, intptr_t slot);
void QMainWindow_QBaseMouseMoveEvent(QMainWindow* self, QMouseEvent* event);
void QMainWindow_WheelEvent(QMainWindow* self, QWheelEvent* event);
void QMainWindow_OnWheelEvent(QMainWindow* self, intptr_t slot);
void QMainWindow_QBaseWheelEvent(QMainWindow* self, QWheelEvent* event);
void QMainWindow_KeyPressEvent(QMainWindow* self, QKeyEvent* event);
void QMainWindow_OnKeyPressEvent(QMainWindow* self, intptr_t slot);
void QMainWindow_QBaseKeyPressEvent(QMainWindow* self, QKeyEvent* event);
void QMainWindow_KeyReleaseEvent(QMainWindow* self, QKeyEvent* event);
void QMainWindow_OnKeyReleaseEvent(QMainWindow* self, intptr_t slot);
void QMainWindow_QBaseKeyReleaseEvent(QMainWindow* self, QKeyEvent* event);
void QMainWindow_FocusInEvent(QMainWindow* self, QFocusEvent* event);
void QMainWindow_OnFocusInEvent(QMainWindow* self, intptr_t slot);
void QMainWindow_QBaseFocusInEvent(QMainWindow* self, QFocusEvent* event);
void QMainWindow_FocusOutEvent(QMainWindow* self, QFocusEvent* event);
void QMainWindow_OnFocusOutEvent(QMainWindow* self, intptr_t slot);
void QMainWindow_QBaseFocusOutEvent(QMainWindow* self, QFocusEvent* event);
void QMainWindow_EnterEvent(QMainWindow* self, QEnterEvent* event);
void QMainWindow_OnEnterEvent(QMainWindow* self, intptr_t slot);
void QMainWindow_QBaseEnterEvent(QMainWindow* self, QEnterEvent* event);
void QMainWindow_LeaveEvent(QMainWindow* self, QEvent* event);
void QMainWindow_OnLeaveEvent(QMainWindow* self, intptr_t slot);
void QMainWindow_QBaseLeaveEvent(QMainWindow* self, QEvent* event);
void QMainWindow_PaintEvent(QMainWindow* self, QPaintEvent* event);
void QMainWindow_OnPaintEvent(QMainWindow* self, intptr_t slot);
void QMainWindow_QBasePaintEvent(QMainWindow* self, QPaintEvent* event);
void QMainWindow_MoveEvent(QMainWindow* self, QMoveEvent* event);
void QMainWindow_OnMoveEvent(QMainWindow* self, intptr_t slot);
void QMainWindow_QBaseMoveEvent(QMainWindow* self, QMoveEvent* event);
void QMainWindow_ResizeEvent(QMainWindow* self, QResizeEvent* event);
void QMainWindow_OnResizeEvent(QMainWindow* self, intptr_t slot);
void QMainWindow_QBaseResizeEvent(QMainWindow* self, QResizeEvent* event);
void QMainWindow_CloseEvent(QMainWindow* self, QCloseEvent* event);
void QMainWindow_OnCloseEvent(QMainWindow* self, intptr_t slot);
void QMainWindow_QBaseCloseEvent(QMainWindow* self, QCloseEvent* event);
void QMainWindow_TabletEvent(QMainWindow* self, QTabletEvent* event);
void QMainWindow_OnTabletEvent(QMainWindow* self, intptr_t slot);
void QMainWindow_QBaseTabletEvent(QMainWindow* self, QTabletEvent* event);
void QMainWindow_ActionEvent(QMainWindow* self, QActionEvent* event);
void QMainWindow_OnActionEvent(QMainWindow* self, intptr_t slot);
void QMainWindow_QBaseActionEvent(QMainWindow* self, QActionEvent* event);
void QMainWindow_DragEnterEvent(QMainWindow* self, QDragEnterEvent* event);
void QMainWindow_OnDragEnterEvent(QMainWindow* self, intptr_t slot);
void QMainWindow_QBaseDragEnterEvent(QMainWindow* self, QDragEnterEvent* event);
void QMainWindow_DragMoveEvent(QMainWindow* self, QDragMoveEvent* event);
void QMainWindow_OnDragMoveEvent(QMainWindow* self, intptr_t slot);
void QMainWindow_QBaseDragMoveEvent(QMainWindow* self, QDragMoveEvent* event);
void QMainWindow_DragLeaveEvent(QMainWindow* self, QDragLeaveEvent* event);
void QMainWindow_OnDragLeaveEvent(QMainWindow* self, intptr_t slot);
void QMainWindow_QBaseDragLeaveEvent(QMainWindow* self, QDragLeaveEvent* event);
void QMainWindow_DropEvent(QMainWindow* self, QDropEvent* event);
void QMainWindow_OnDropEvent(QMainWindow* self, intptr_t slot);
void QMainWindow_QBaseDropEvent(QMainWindow* self, QDropEvent* event);
void QMainWindow_ShowEvent(QMainWindow* self, QShowEvent* event);
void QMainWindow_OnShowEvent(QMainWindow* self, intptr_t slot);
void QMainWindow_QBaseShowEvent(QMainWindow* self, QShowEvent* event);
void QMainWindow_HideEvent(QMainWindow* self, QHideEvent* event);
void QMainWindow_OnHideEvent(QMainWindow* self, intptr_t slot);
void QMainWindow_QBaseHideEvent(QMainWindow* self, QHideEvent* event);
bool QMainWindow_NativeEvent(QMainWindow* self, libqt_string eventType, void* message, intptr_t* result);
void QMainWindow_OnNativeEvent(QMainWindow* self, intptr_t slot);
bool QMainWindow_QBaseNativeEvent(QMainWindow* self, libqt_string eventType, void* message, intptr_t* result);
void QMainWindow_ChangeEvent(QMainWindow* self, QEvent* param1);
void QMainWindow_OnChangeEvent(QMainWindow* self, intptr_t slot);
void QMainWindow_QBaseChangeEvent(QMainWindow* self, QEvent* param1);
void QMainWindow_InputMethodEvent(QMainWindow* self, QInputMethodEvent* param1);
void QMainWindow_OnInputMethodEvent(QMainWindow* self, intptr_t slot);
void QMainWindow_QBaseInputMethodEvent(QMainWindow* self, QInputMethodEvent* param1);
QVariant* QMainWindow_InputMethodQuery(const QMainWindow* self, int param1);
void QMainWindow_OnInputMethodQuery(const QMainWindow* self, intptr_t slot);
QVariant* QMainWindow_QBaseInputMethodQuery(const QMainWindow* self, int param1);
bool QMainWindow_FocusNextPrevChild(QMainWindow* self, bool next);
void QMainWindow_OnFocusNextPrevChild(QMainWindow* self, intptr_t slot);
bool QMainWindow_QBaseFocusNextPrevChild(QMainWindow* self, bool next);
bool QMainWindow_EventFilter(QMainWindow* self, QObject* watched, QEvent* event);
void QMainWindow_OnEventFilter(QMainWindow* self, intptr_t slot);
bool QMainWindow_QBaseEventFilter(QMainWindow* self, QObject* watched, QEvent* event);
void QMainWindow_TimerEvent(QMainWindow* self, QTimerEvent* event);
void QMainWindow_OnTimerEvent(QMainWindow* self, intptr_t slot);
void QMainWindow_QBaseTimerEvent(QMainWindow* self, QTimerEvent* event);
void QMainWindow_ChildEvent(QMainWindow* self, QChildEvent* event);
void QMainWindow_OnChildEvent(QMainWindow* self, intptr_t slot);
void QMainWindow_QBaseChildEvent(QMainWindow* self, QChildEvent* event);
void QMainWindow_CustomEvent(QMainWindow* self, QEvent* event);
void QMainWindow_OnCustomEvent(QMainWindow* self, intptr_t slot);
void QMainWindow_QBaseCustomEvent(QMainWindow* self, QEvent* event);
void QMainWindow_ConnectNotify(QMainWindow* self, QMetaMethod* signal);
void QMainWindow_OnConnectNotify(QMainWindow* self, intptr_t slot);
void QMainWindow_QBaseConnectNotify(QMainWindow* self, QMetaMethod* signal);
void QMainWindow_DisconnectNotify(QMainWindow* self, QMetaMethod* signal);
void QMainWindow_OnDisconnectNotify(QMainWindow* self, intptr_t slot);
void QMainWindow_QBaseDisconnectNotify(QMainWindow* self, QMetaMethod* signal);
int QMainWindow_Metric(const QMainWindow* self, int param1);
void QMainWindow_OnMetric(const QMainWindow* self, intptr_t slot);
int QMainWindow_QBaseMetric(const QMainWindow* self, int param1);
void QMainWindow_InitPainter(const QMainWindow* self, QPainter* painter);
void QMainWindow_OnInitPainter(const QMainWindow* self, intptr_t slot);
void QMainWindow_QBaseInitPainter(const QMainWindow* self, QPainter* painter);
QPaintDevice* QMainWindow_Redirected(const QMainWindow* self, QPoint* offset);
void QMainWindow_OnRedirected(const QMainWindow* self, intptr_t slot);
QPaintDevice* QMainWindow_QBaseRedirected(const QMainWindow* self, QPoint* offset);
QPainter* QMainWindow_SharedPainter(const QMainWindow* self);
void QMainWindow_OnSharedPainter(const QMainWindow* self, intptr_t slot);
QPainter* QMainWindow_QBaseSharedPainter(const QMainWindow* self);
void QMainWindow_UpdateMicroFocus(QMainWindow* self);
void QMainWindow_OnUpdateMicroFocus(QMainWindow* self, intptr_t slot);
void QMainWindow_QBaseUpdateMicroFocus(QMainWindow* self);
void QMainWindow_Create(QMainWindow* self);
void QMainWindow_OnCreate(QMainWindow* self, intptr_t slot);
void QMainWindow_QBaseCreate(QMainWindow* self);
void QMainWindow_Destroy(QMainWindow* self);
void QMainWindow_OnDestroy(QMainWindow* self, intptr_t slot);
void QMainWindow_QBaseDestroy(QMainWindow* self);
bool QMainWindow_FocusNextChild(QMainWindow* self);
void QMainWindow_OnFocusNextChild(QMainWindow* self, intptr_t slot);
bool QMainWindow_QBaseFocusNextChild(QMainWindow* self);
bool QMainWindow_FocusPreviousChild(QMainWindow* self);
void QMainWindow_OnFocusPreviousChild(QMainWindow* self, intptr_t slot);
bool QMainWindow_QBaseFocusPreviousChild(QMainWindow* self);
QObject* QMainWindow_Sender(const QMainWindow* self);
void QMainWindow_OnSender(const QMainWindow* self, intptr_t slot);
QObject* QMainWindow_QBaseSender(const QMainWindow* self);
int QMainWindow_SenderSignalIndex(const QMainWindow* self);
void QMainWindow_OnSenderSignalIndex(const QMainWindow* self, intptr_t slot);
int QMainWindow_QBaseSenderSignalIndex(const QMainWindow* self);
int QMainWindow_Receivers(const QMainWindow* self, const char* signal);
void QMainWindow_OnReceivers(const QMainWindow* self, intptr_t slot);
int QMainWindow_QBaseReceivers(const QMainWindow* self, const char* signal);
bool QMainWindow_IsSignalConnected(const QMainWindow* self, QMetaMethod* signal);
void QMainWindow_OnIsSignalConnected(const QMainWindow* self, intptr_t slot);
bool QMainWindow_QBaseIsSignalConnected(const QMainWindow* self, QMetaMethod* signal);
void QMainWindow_Delete(QMainWindow* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
