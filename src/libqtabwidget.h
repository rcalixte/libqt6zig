#pragma once
#ifndef SRCC_LIBQTABWIDGET_H
#define SRCC_LIBQTABWIDGET_H

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
typedef struct QHideEvent QHideEvent;
typedef struct QIcon QIcon;
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
typedef struct QStyleOptionTabWidgetFrame QStyleOptionTabWidgetFrame;
typedef struct QTabBar QTabBar;
typedef struct QTabWidget QTabWidget;
typedef struct QTabletEvent QTabletEvent;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
typedef struct QWheelEvent QWheelEvent;
typedef struct QWidget QWidget;
#endif

#ifdef __cplusplus
typedef QTabWidget::TabPosition TabPosition; // C++ enum
typedef QTabWidget::TabShape TabShape;       // C++ enum
#else
typedef int TabPosition; // C ABI enum
typedef int TabShape;    // C ABI enum
#endif

QTabWidget* QTabWidget_new(QWidget* parent);
QTabWidget* QTabWidget_new2();
QMetaObject* QTabWidget_MetaObject(const QTabWidget* self);
void* QTabWidget_Metacast(QTabWidget* self, const char* param1);
int QTabWidget_Metacall(QTabWidget* self, int param1, int param2, void** param3);
void QTabWidget_OnMetacall(QTabWidget* self, intptr_t slot);
int QTabWidget_QBaseMetacall(QTabWidget* self, int param1, int param2, void** param3);
libqt_string QTabWidget_Tr(const char* s);
int QTabWidget_AddTab(QTabWidget* self, QWidget* widget, const libqt_string param2);
int QTabWidget_AddTab2(QTabWidget* self, QWidget* widget, const QIcon* icon, const libqt_string label);
int QTabWidget_InsertTab(QTabWidget* self, int index, QWidget* widget, const libqt_string param3);
int QTabWidget_InsertTab2(QTabWidget* self, int index, QWidget* widget, const QIcon* icon, const libqt_string label);
void QTabWidget_RemoveTab(QTabWidget* self, int index);
bool QTabWidget_IsTabEnabled(const QTabWidget* self, int index);
void QTabWidget_SetTabEnabled(QTabWidget* self, int index, bool enabled);
bool QTabWidget_IsTabVisible(const QTabWidget* self, int index);
void QTabWidget_SetTabVisible(QTabWidget* self, int index, bool visible);
libqt_string QTabWidget_TabText(const QTabWidget* self, int index);
void QTabWidget_SetTabText(QTabWidget* self, int index, const libqt_string text);
QIcon* QTabWidget_TabIcon(const QTabWidget* self, int index);
void QTabWidget_SetTabIcon(QTabWidget* self, int index, const QIcon* icon);
void QTabWidget_SetTabToolTip(QTabWidget* self, int index, const libqt_string tip);
libqt_string QTabWidget_TabToolTip(const QTabWidget* self, int index);
void QTabWidget_SetTabWhatsThis(QTabWidget* self, int index, const libqt_string text);
libqt_string QTabWidget_TabWhatsThis(const QTabWidget* self, int index);
int QTabWidget_CurrentIndex(const QTabWidget* self);
QWidget* QTabWidget_CurrentWidget(const QTabWidget* self);
QWidget* QTabWidget_Widget(const QTabWidget* self, int index);
int QTabWidget_IndexOf(const QTabWidget* self, const QWidget* widget);
int QTabWidget_Count(const QTabWidget* self);
int QTabWidget_TabPosition(const QTabWidget* self);
void QTabWidget_SetTabPosition(QTabWidget* self, int position);
bool QTabWidget_TabsClosable(const QTabWidget* self);
void QTabWidget_SetTabsClosable(QTabWidget* self, bool closeable);
bool QTabWidget_IsMovable(const QTabWidget* self);
void QTabWidget_SetMovable(QTabWidget* self, bool movable);
int QTabWidget_TabShape(const QTabWidget* self);
void QTabWidget_SetTabShape(QTabWidget* self, int s);
QSize* QTabWidget_SizeHint(const QTabWidget* self);
void QTabWidget_OnSizeHint(const QTabWidget* self, intptr_t slot);
QSize* QTabWidget_QBaseSizeHint(const QTabWidget* self);
QSize* QTabWidget_MinimumSizeHint(const QTabWidget* self);
void QTabWidget_OnMinimumSizeHint(const QTabWidget* self, intptr_t slot);
QSize* QTabWidget_QBaseMinimumSizeHint(const QTabWidget* self);
int QTabWidget_HeightForWidth(const QTabWidget* self, int width);
void QTabWidget_OnHeightForWidth(const QTabWidget* self, intptr_t slot);
int QTabWidget_QBaseHeightForWidth(const QTabWidget* self, int width);
bool QTabWidget_HasHeightForWidth(const QTabWidget* self);
void QTabWidget_OnHasHeightForWidth(const QTabWidget* self, intptr_t slot);
bool QTabWidget_QBaseHasHeightForWidth(const QTabWidget* self);
void QTabWidget_SetCornerWidget(QTabWidget* self, QWidget* w);
QWidget* QTabWidget_CornerWidget(const QTabWidget* self);
int QTabWidget_ElideMode(const QTabWidget* self);
void QTabWidget_SetElideMode(QTabWidget* self, int mode);
QSize* QTabWidget_IconSize(const QTabWidget* self);
void QTabWidget_SetIconSize(QTabWidget* self, const QSize* size);
bool QTabWidget_UsesScrollButtons(const QTabWidget* self);
void QTabWidget_SetUsesScrollButtons(QTabWidget* self, bool useButtons);
bool QTabWidget_DocumentMode(const QTabWidget* self);
void QTabWidget_SetDocumentMode(QTabWidget* self, bool set);
bool QTabWidget_TabBarAutoHide(const QTabWidget* self);
void QTabWidget_SetTabBarAutoHide(QTabWidget* self, bool enabled);
void QTabWidget_Clear(QTabWidget* self);
QTabBar* QTabWidget_TabBar(const QTabWidget* self);
void QTabWidget_SetCurrentIndex(QTabWidget* self, int index);
void QTabWidget_SetCurrentWidget(QTabWidget* self, QWidget* widget);
void QTabWidget_CurrentChanged(QTabWidget* self, int index);
void QTabWidget_Connect_CurrentChanged(QTabWidget* self, intptr_t slot);
void QTabWidget_TabCloseRequested(QTabWidget* self, int index);
void QTabWidget_Connect_TabCloseRequested(QTabWidget* self, intptr_t slot);
void QTabWidget_TabBarClicked(QTabWidget* self, int index);
void QTabWidget_Connect_TabBarClicked(QTabWidget* self, intptr_t slot);
void QTabWidget_TabBarDoubleClicked(QTabWidget* self, int index);
void QTabWidget_Connect_TabBarDoubleClicked(QTabWidget* self, intptr_t slot);
void QTabWidget_TabInserted(QTabWidget* self, int index);
void QTabWidget_OnTabInserted(QTabWidget* self, intptr_t slot);
void QTabWidget_QBaseTabInserted(QTabWidget* self, int index);
void QTabWidget_TabRemoved(QTabWidget* self, int index);
void QTabWidget_OnTabRemoved(QTabWidget* self, intptr_t slot);
void QTabWidget_QBaseTabRemoved(QTabWidget* self, int index);
void QTabWidget_ShowEvent(QTabWidget* self, QShowEvent* param1);
void QTabWidget_OnShowEvent(QTabWidget* self, intptr_t slot);
void QTabWidget_QBaseShowEvent(QTabWidget* self, QShowEvent* param1);
void QTabWidget_ResizeEvent(QTabWidget* self, QResizeEvent* param1);
void QTabWidget_OnResizeEvent(QTabWidget* self, intptr_t slot);
void QTabWidget_QBaseResizeEvent(QTabWidget* self, QResizeEvent* param1);
void QTabWidget_KeyPressEvent(QTabWidget* self, QKeyEvent* param1);
void QTabWidget_OnKeyPressEvent(QTabWidget* self, intptr_t slot);
void QTabWidget_QBaseKeyPressEvent(QTabWidget* self, QKeyEvent* param1);
void QTabWidget_PaintEvent(QTabWidget* self, QPaintEvent* param1);
void QTabWidget_OnPaintEvent(QTabWidget* self, intptr_t slot);
void QTabWidget_QBasePaintEvent(QTabWidget* self, QPaintEvent* param1);
void QTabWidget_ChangeEvent(QTabWidget* self, QEvent* param1);
void QTabWidget_OnChangeEvent(QTabWidget* self, intptr_t slot);
void QTabWidget_QBaseChangeEvent(QTabWidget* self, QEvent* param1);
bool QTabWidget_Event(QTabWidget* self, QEvent* param1);
void QTabWidget_OnEvent(QTabWidget* self, intptr_t slot);
bool QTabWidget_QBaseEvent(QTabWidget* self, QEvent* param1);
void QTabWidget_InitStyleOption(const QTabWidget* self, QStyleOptionTabWidgetFrame* option);
void QTabWidget_OnInitStyleOption(const QTabWidget* self, intptr_t slot);
void QTabWidget_QBaseInitStyleOption(const QTabWidget* self, QStyleOptionTabWidgetFrame* option);
libqt_string QTabWidget_Tr2(const char* s, const char* c);
libqt_string QTabWidget_Tr3(const char* s, const char* c, int n);
void QTabWidget_SetCornerWidget2(QTabWidget* self, QWidget* w, int corner);
QWidget* QTabWidget_CornerWidget1(const QTabWidget* self, int corner);
int QTabWidget_DevType(const QTabWidget* self);
void QTabWidget_OnDevType(const QTabWidget* self, intptr_t slot);
int QTabWidget_QBaseDevType(const QTabWidget* self);
void QTabWidget_SetVisible(QTabWidget* self, bool visible);
void QTabWidget_OnSetVisible(QTabWidget* self, intptr_t slot);
void QTabWidget_QBaseSetVisible(QTabWidget* self, bool visible);
QPaintEngine* QTabWidget_PaintEngine(const QTabWidget* self);
void QTabWidget_OnPaintEngine(const QTabWidget* self, intptr_t slot);
QPaintEngine* QTabWidget_QBasePaintEngine(const QTabWidget* self);
void QTabWidget_MousePressEvent(QTabWidget* self, QMouseEvent* event);
void QTabWidget_OnMousePressEvent(QTabWidget* self, intptr_t slot);
void QTabWidget_QBaseMousePressEvent(QTabWidget* self, QMouseEvent* event);
void QTabWidget_MouseReleaseEvent(QTabWidget* self, QMouseEvent* event);
void QTabWidget_OnMouseReleaseEvent(QTabWidget* self, intptr_t slot);
void QTabWidget_QBaseMouseReleaseEvent(QTabWidget* self, QMouseEvent* event);
void QTabWidget_MouseDoubleClickEvent(QTabWidget* self, QMouseEvent* event);
void QTabWidget_OnMouseDoubleClickEvent(QTabWidget* self, intptr_t slot);
void QTabWidget_QBaseMouseDoubleClickEvent(QTabWidget* self, QMouseEvent* event);
void QTabWidget_MouseMoveEvent(QTabWidget* self, QMouseEvent* event);
void QTabWidget_OnMouseMoveEvent(QTabWidget* self, intptr_t slot);
void QTabWidget_QBaseMouseMoveEvent(QTabWidget* self, QMouseEvent* event);
void QTabWidget_WheelEvent(QTabWidget* self, QWheelEvent* event);
void QTabWidget_OnWheelEvent(QTabWidget* self, intptr_t slot);
void QTabWidget_QBaseWheelEvent(QTabWidget* self, QWheelEvent* event);
void QTabWidget_KeyReleaseEvent(QTabWidget* self, QKeyEvent* event);
void QTabWidget_OnKeyReleaseEvent(QTabWidget* self, intptr_t slot);
void QTabWidget_QBaseKeyReleaseEvent(QTabWidget* self, QKeyEvent* event);
void QTabWidget_FocusInEvent(QTabWidget* self, QFocusEvent* event);
void QTabWidget_OnFocusInEvent(QTabWidget* self, intptr_t slot);
void QTabWidget_QBaseFocusInEvent(QTabWidget* self, QFocusEvent* event);
void QTabWidget_FocusOutEvent(QTabWidget* self, QFocusEvent* event);
void QTabWidget_OnFocusOutEvent(QTabWidget* self, intptr_t slot);
void QTabWidget_QBaseFocusOutEvent(QTabWidget* self, QFocusEvent* event);
void QTabWidget_EnterEvent(QTabWidget* self, QEnterEvent* event);
void QTabWidget_OnEnterEvent(QTabWidget* self, intptr_t slot);
void QTabWidget_QBaseEnterEvent(QTabWidget* self, QEnterEvent* event);
void QTabWidget_LeaveEvent(QTabWidget* self, QEvent* event);
void QTabWidget_OnLeaveEvent(QTabWidget* self, intptr_t slot);
void QTabWidget_QBaseLeaveEvent(QTabWidget* self, QEvent* event);
void QTabWidget_MoveEvent(QTabWidget* self, QMoveEvent* event);
void QTabWidget_OnMoveEvent(QTabWidget* self, intptr_t slot);
void QTabWidget_QBaseMoveEvent(QTabWidget* self, QMoveEvent* event);
void QTabWidget_CloseEvent(QTabWidget* self, QCloseEvent* event);
void QTabWidget_OnCloseEvent(QTabWidget* self, intptr_t slot);
void QTabWidget_QBaseCloseEvent(QTabWidget* self, QCloseEvent* event);
void QTabWidget_ContextMenuEvent(QTabWidget* self, QContextMenuEvent* event);
void QTabWidget_OnContextMenuEvent(QTabWidget* self, intptr_t slot);
void QTabWidget_QBaseContextMenuEvent(QTabWidget* self, QContextMenuEvent* event);
void QTabWidget_TabletEvent(QTabWidget* self, QTabletEvent* event);
void QTabWidget_OnTabletEvent(QTabWidget* self, intptr_t slot);
void QTabWidget_QBaseTabletEvent(QTabWidget* self, QTabletEvent* event);
void QTabWidget_ActionEvent(QTabWidget* self, QActionEvent* event);
void QTabWidget_OnActionEvent(QTabWidget* self, intptr_t slot);
void QTabWidget_QBaseActionEvent(QTabWidget* self, QActionEvent* event);
void QTabWidget_DragEnterEvent(QTabWidget* self, QDragEnterEvent* event);
void QTabWidget_OnDragEnterEvent(QTabWidget* self, intptr_t slot);
void QTabWidget_QBaseDragEnterEvent(QTabWidget* self, QDragEnterEvent* event);
void QTabWidget_DragMoveEvent(QTabWidget* self, QDragMoveEvent* event);
void QTabWidget_OnDragMoveEvent(QTabWidget* self, intptr_t slot);
void QTabWidget_QBaseDragMoveEvent(QTabWidget* self, QDragMoveEvent* event);
void QTabWidget_DragLeaveEvent(QTabWidget* self, QDragLeaveEvent* event);
void QTabWidget_OnDragLeaveEvent(QTabWidget* self, intptr_t slot);
void QTabWidget_QBaseDragLeaveEvent(QTabWidget* self, QDragLeaveEvent* event);
void QTabWidget_DropEvent(QTabWidget* self, QDropEvent* event);
void QTabWidget_OnDropEvent(QTabWidget* self, intptr_t slot);
void QTabWidget_QBaseDropEvent(QTabWidget* self, QDropEvent* event);
void QTabWidget_HideEvent(QTabWidget* self, QHideEvent* event);
void QTabWidget_OnHideEvent(QTabWidget* self, intptr_t slot);
void QTabWidget_QBaseHideEvent(QTabWidget* self, QHideEvent* event);
bool QTabWidget_NativeEvent(QTabWidget* self, const libqt_string eventType, void* message, intptr_t* result);
void QTabWidget_OnNativeEvent(QTabWidget* self, intptr_t slot);
bool QTabWidget_QBaseNativeEvent(QTabWidget* self, const libqt_string eventType, void* message, intptr_t* result);
int QTabWidget_Metric(const QTabWidget* self, int param1);
void QTabWidget_OnMetric(const QTabWidget* self, intptr_t slot);
int QTabWidget_QBaseMetric(const QTabWidget* self, int param1);
void QTabWidget_InitPainter(const QTabWidget* self, QPainter* painter);
void QTabWidget_OnInitPainter(const QTabWidget* self, intptr_t slot);
void QTabWidget_QBaseInitPainter(const QTabWidget* self, QPainter* painter);
QPaintDevice* QTabWidget_Redirected(const QTabWidget* self, QPoint* offset);
void QTabWidget_OnRedirected(const QTabWidget* self, intptr_t slot);
QPaintDevice* QTabWidget_QBaseRedirected(const QTabWidget* self, QPoint* offset);
QPainter* QTabWidget_SharedPainter(const QTabWidget* self);
void QTabWidget_OnSharedPainter(const QTabWidget* self, intptr_t slot);
QPainter* QTabWidget_QBaseSharedPainter(const QTabWidget* self);
void QTabWidget_InputMethodEvent(QTabWidget* self, QInputMethodEvent* param1);
void QTabWidget_OnInputMethodEvent(QTabWidget* self, intptr_t slot);
void QTabWidget_QBaseInputMethodEvent(QTabWidget* self, QInputMethodEvent* param1);
QVariant* QTabWidget_InputMethodQuery(const QTabWidget* self, int param1);
void QTabWidget_OnInputMethodQuery(const QTabWidget* self, intptr_t slot);
QVariant* QTabWidget_QBaseInputMethodQuery(const QTabWidget* self, int param1);
bool QTabWidget_FocusNextPrevChild(QTabWidget* self, bool next);
void QTabWidget_OnFocusNextPrevChild(QTabWidget* self, intptr_t slot);
bool QTabWidget_QBaseFocusNextPrevChild(QTabWidget* self, bool next);
bool QTabWidget_EventFilter(QTabWidget* self, QObject* watched, QEvent* event);
void QTabWidget_OnEventFilter(QTabWidget* self, intptr_t slot);
bool QTabWidget_QBaseEventFilter(QTabWidget* self, QObject* watched, QEvent* event);
void QTabWidget_TimerEvent(QTabWidget* self, QTimerEvent* event);
void QTabWidget_OnTimerEvent(QTabWidget* self, intptr_t slot);
void QTabWidget_QBaseTimerEvent(QTabWidget* self, QTimerEvent* event);
void QTabWidget_ChildEvent(QTabWidget* self, QChildEvent* event);
void QTabWidget_OnChildEvent(QTabWidget* self, intptr_t slot);
void QTabWidget_QBaseChildEvent(QTabWidget* self, QChildEvent* event);
void QTabWidget_CustomEvent(QTabWidget* self, QEvent* event);
void QTabWidget_OnCustomEvent(QTabWidget* self, intptr_t slot);
void QTabWidget_QBaseCustomEvent(QTabWidget* self, QEvent* event);
void QTabWidget_ConnectNotify(QTabWidget* self, const QMetaMethod* signal);
void QTabWidget_OnConnectNotify(QTabWidget* self, intptr_t slot);
void QTabWidget_QBaseConnectNotify(QTabWidget* self, const QMetaMethod* signal);
void QTabWidget_DisconnectNotify(QTabWidget* self, const QMetaMethod* signal);
void QTabWidget_OnDisconnectNotify(QTabWidget* self, intptr_t slot);
void QTabWidget_QBaseDisconnectNotify(QTabWidget* self, const QMetaMethod* signal);
void QTabWidget_SetTabBar(QTabWidget* self, QTabBar* tabBar);
void QTabWidget_OnSetTabBar(QTabWidget* self, intptr_t slot);
void QTabWidget_QBaseSetTabBar(QTabWidget* self, QTabBar* tabBar);
void QTabWidget_UpdateMicroFocus(QTabWidget* self);
void QTabWidget_OnUpdateMicroFocus(QTabWidget* self, intptr_t slot);
void QTabWidget_QBaseUpdateMicroFocus(QTabWidget* self);
void QTabWidget_Create(QTabWidget* self);
void QTabWidget_OnCreate(QTabWidget* self, intptr_t slot);
void QTabWidget_QBaseCreate(QTabWidget* self);
void QTabWidget_Destroy(QTabWidget* self);
void QTabWidget_OnDestroy(QTabWidget* self, intptr_t slot);
void QTabWidget_QBaseDestroy(QTabWidget* self);
bool QTabWidget_FocusNextChild(QTabWidget* self);
void QTabWidget_OnFocusNextChild(QTabWidget* self, intptr_t slot);
bool QTabWidget_QBaseFocusNextChild(QTabWidget* self);
bool QTabWidget_FocusPreviousChild(QTabWidget* self);
void QTabWidget_OnFocusPreviousChild(QTabWidget* self, intptr_t slot);
bool QTabWidget_QBaseFocusPreviousChild(QTabWidget* self);
QObject* QTabWidget_Sender(const QTabWidget* self);
void QTabWidget_OnSender(const QTabWidget* self, intptr_t slot);
QObject* QTabWidget_QBaseSender(const QTabWidget* self);
int QTabWidget_SenderSignalIndex(const QTabWidget* self);
void QTabWidget_OnSenderSignalIndex(const QTabWidget* self, intptr_t slot);
int QTabWidget_QBaseSenderSignalIndex(const QTabWidget* self);
int QTabWidget_Receivers(const QTabWidget* self, const char* signal);
void QTabWidget_OnReceivers(const QTabWidget* self, intptr_t slot);
int QTabWidget_QBaseReceivers(const QTabWidget* self, const char* signal);
bool QTabWidget_IsSignalConnected(const QTabWidget* self, const QMetaMethod* signal);
void QTabWidget_OnIsSignalConnected(const QTabWidget* self, intptr_t slot);
bool QTabWidget_QBaseIsSignalConnected(const QTabWidget* self, const QMetaMethod* signal);
void QTabWidget_Delete(QTabWidget* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
