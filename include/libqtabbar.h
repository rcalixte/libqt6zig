#pragma once
#ifndef SRCC_LIBQTABBAR_H
#define SRCC_LIBQTABBAR_H

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
typedef struct QColor QColor;
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
typedef struct QRect QRect;
typedef struct QResizeEvent QResizeEvent;
typedef struct QShowEvent QShowEvent;
typedef struct QSize QSize;
typedef struct QStyleOptionTab QStyleOptionTab;
typedef struct QTabBar QTabBar;
typedef struct QTabletEvent QTabletEvent;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
typedef struct QWheelEvent QWheelEvent;
typedef struct QWidget QWidget;
#endif

#ifdef __cplusplus
typedef QTabBar::ButtonPosition ButtonPosition;       // C++ enum
typedef QTabBar::SelectionBehavior SelectionBehavior; // C++ enum
typedef QTabBar::Shape Shape;                         // C++ enum
#else
typedef int ButtonPosition;    // C ABI enum
typedef int SelectionBehavior; // C ABI enum
typedef int Shape;             // C ABI enum
#endif

QTabBar* QTabBar_new(QWidget* parent);
QTabBar* QTabBar_new2();
QMetaObject* QTabBar_MetaObject(const QTabBar* self);
void* QTabBar_Metacast(QTabBar* self, const char* param1);
int QTabBar_Metacall(QTabBar* self, int param1, int param2, void** param3);
void QTabBar_OnMetacall(QTabBar* self, intptr_t slot);
int QTabBar_QBaseMetacall(QTabBar* self, int param1, int param2, void** param3);
libqt_string QTabBar_Tr(const char* s);
int QTabBar_Shape(const QTabBar* self);
void QTabBar_SetShape(QTabBar* self, int shape);
int QTabBar_AddTab(QTabBar* self, const libqt_string text);
int QTabBar_AddTab2(QTabBar* self, const QIcon* icon, const libqt_string text);
int QTabBar_InsertTab(QTabBar* self, int index, const libqt_string text);
int QTabBar_InsertTab2(QTabBar* self, int index, const QIcon* icon, const libqt_string text);
void QTabBar_RemoveTab(QTabBar* self, int index);
void QTabBar_MoveTab(QTabBar* self, int from, int to);
bool QTabBar_IsTabEnabled(const QTabBar* self, int index);
void QTabBar_SetTabEnabled(QTabBar* self, int index, bool enabled);
bool QTabBar_IsTabVisible(const QTabBar* self, int index);
void QTabBar_SetTabVisible(QTabBar* self, int index, bool visible);
libqt_string QTabBar_TabText(const QTabBar* self, int index);
void QTabBar_SetTabText(QTabBar* self, int index, const libqt_string text);
QColor* QTabBar_TabTextColor(const QTabBar* self, int index);
void QTabBar_SetTabTextColor(QTabBar* self, int index, const QColor* color);
QIcon* QTabBar_TabIcon(const QTabBar* self, int index);
void QTabBar_SetTabIcon(QTabBar* self, int index, const QIcon* icon);
int QTabBar_ElideMode(const QTabBar* self);
void QTabBar_SetElideMode(QTabBar* self, int mode);
void QTabBar_SetTabToolTip(QTabBar* self, int index, const libqt_string tip);
libqt_string QTabBar_TabToolTip(const QTabBar* self, int index);
void QTabBar_SetTabWhatsThis(QTabBar* self, int index, const libqt_string text);
libqt_string QTabBar_TabWhatsThis(const QTabBar* self, int index);
void QTabBar_SetTabData(QTabBar* self, int index, const QVariant* data);
QVariant* QTabBar_TabData(const QTabBar* self, int index);
QRect* QTabBar_TabRect(const QTabBar* self, int index);
int QTabBar_TabAt(const QTabBar* self, const QPoint* pos);
int QTabBar_CurrentIndex(const QTabBar* self);
int QTabBar_Count(const QTabBar* self);
QSize* QTabBar_SizeHint(const QTabBar* self);
void QTabBar_OnSizeHint(const QTabBar* self, intptr_t slot);
QSize* QTabBar_QBaseSizeHint(const QTabBar* self);
QSize* QTabBar_MinimumSizeHint(const QTabBar* self);
void QTabBar_OnMinimumSizeHint(const QTabBar* self, intptr_t slot);
QSize* QTabBar_QBaseMinimumSizeHint(const QTabBar* self);
void QTabBar_SetDrawBase(QTabBar* self, bool drawTheBase);
bool QTabBar_DrawBase(const QTabBar* self);
QSize* QTabBar_IconSize(const QTabBar* self);
void QTabBar_SetIconSize(QTabBar* self, const QSize* size);
bool QTabBar_UsesScrollButtons(const QTabBar* self);
void QTabBar_SetUsesScrollButtons(QTabBar* self, bool useButtons);
bool QTabBar_TabsClosable(const QTabBar* self);
void QTabBar_SetTabsClosable(QTabBar* self, bool closable);
void QTabBar_SetTabButton(QTabBar* self, int index, int position, QWidget* widget);
QWidget* QTabBar_TabButton(const QTabBar* self, int index, int position);
int QTabBar_SelectionBehaviorOnRemove(const QTabBar* self);
void QTabBar_SetSelectionBehaviorOnRemove(QTabBar* self, int behavior);
bool QTabBar_Expanding(const QTabBar* self);
void QTabBar_SetExpanding(QTabBar* self, bool enabled);
bool QTabBar_IsMovable(const QTabBar* self);
void QTabBar_SetMovable(QTabBar* self, bool movable);
bool QTabBar_DocumentMode(const QTabBar* self);
void QTabBar_SetDocumentMode(QTabBar* self, bool set);
bool QTabBar_AutoHide(const QTabBar* self);
void QTabBar_SetAutoHide(QTabBar* self, bool hide);
bool QTabBar_ChangeCurrentOnDrag(const QTabBar* self);
void QTabBar_SetChangeCurrentOnDrag(QTabBar* self, bool change);
libqt_string QTabBar_AccessibleTabName(const QTabBar* self, int index);
void QTabBar_SetAccessibleTabName(QTabBar* self, int index, const libqt_string name);
void QTabBar_SetCurrentIndex(QTabBar* self, int index);
void QTabBar_CurrentChanged(QTabBar* self, int index);
void QTabBar_Connect_CurrentChanged(QTabBar* self, intptr_t slot);
void QTabBar_TabCloseRequested(QTabBar* self, int index);
void QTabBar_Connect_TabCloseRequested(QTabBar* self, intptr_t slot);
void QTabBar_TabMoved(QTabBar* self, int from, int to);
void QTabBar_Connect_TabMoved(QTabBar* self, intptr_t slot);
void QTabBar_TabBarClicked(QTabBar* self, int index);
void QTabBar_Connect_TabBarClicked(QTabBar* self, intptr_t slot);
void QTabBar_TabBarDoubleClicked(QTabBar* self, int index);
void QTabBar_Connect_TabBarDoubleClicked(QTabBar* self, intptr_t slot);
QSize* QTabBar_TabSizeHint(const QTabBar* self, int index);
void QTabBar_OnTabSizeHint(const QTabBar* self, intptr_t slot);
QSize* QTabBar_QBaseTabSizeHint(const QTabBar* self, int index);
QSize* QTabBar_MinimumTabSizeHint(const QTabBar* self, int index);
void QTabBar_OnMinimumTabSizeHint(const QTabBar* self, intptr_t slot);
QSize* QTabBar_QBaseMinimumTabSizeHint(const QTabBar* self, int index);
void QTabBar_TabInserted(QTabBar* self, int index);
void QTabBar_OnTabInserted(QTabBar* self, intptr_t slot);
void QTabBar_QBaseTabInserted(QTabBar* self, int index);
void QTabBar_TabRemoved(QTabBar* self, int index);
void QTabBar_OnTabRemoved(QTabBar* self, intptr_t slot);
void QTabBar_QBaseTabRemoved(QTabBar* self, int index);
void QTabBar_TabLayoutChange(QTabBar* self);
void QTabBar_OnTabLayoutChange(QTabBar* self, intptr_t slot);
void QTabBar_QBaseTabLayoutChange(QTabBar* self);
bool QTabBar_Event(QTabBar* self, QEvent* param1);
void QTabBar_OnEvent(QTabBar* self, intptr_t slot);
bool QTabBar_QBaseEvent(QTabBar* self, QEvent* param1);
void QTabBar_ResizeEvent(QTabBar* self, QResizeEvent* param1);
void QTabBar_OnResizeEvent(QTabBar* self, intptr_t slot);
void QTabBar_QBaseResizeEvent(QTabBar* self, QResizeEvent* param1);
void QTabBar_ShowEvent(QTabBar* self, QShowEvent* param1);
void QTabBar_OnShowEvent(QTabBar* self, intptr_t slot);
void QTabBar_QBaseShowEvent(QTabBar* self, QShowEvent* param1);
void QTabBar_HideEvent(QTabBar* self, QHideEvent* param1);
void QTabBar_OnHideEvent(QTabBar* self, intptr_t slot);
void QTabBar_QBaseHideEvent(QTabBar* self, QHideEvent* param1);
void QTabBar_PaintEvent(QTabBar* self, QPaintEvent* param1);
void QTabBar_OnPaintEvent(QTabBar* self, intptr_t slot);
void QTabBar_QBasePaintEvent(QTabBar* self, QPaintEvent* param1);
void QTabBar_MousePressEvent(QTabBar* self, QMouseEvent* param1);
void QTabBar_OnMousePressEvent(QTabBar* self, intptr_t slot);
void QTabBar_QBaseMousePressEvent(QTabBar* self, QMouseEvent* param1);
void QTabBar_MouseMoveEvent(QTabBar* self, QMouseEvent* param1);
void QTabBar_OnMouseMoveEvent(QTabBar* self, intptr_t slot);
void QTabBar_QBaseMouseMoveEvent(QTabBar* self, QMouseEvent* param1);
void QTabBar_MouseReleaseEvent(QTabBar* self, QMouseEvent* param1);
void QTabBar_OnMouseReleaseEvent(QTabBar* self, intptr_t slot);
void QTabBar_QBaseMouseReleaseEvent(QTabBar* self, QMouseEvent* param1);
void QTabBar_MouseDoubleClickEvent(QTabBar* self, QMouseEvent* param1);
void QTabBar_OnMouseDoubleClickEvent(QTabBar* self, intptr_t slot);
void QTabBar_QBaseMouseDoubleClickEvent(QTabBar* self, QMouseEvent* param1);
void QTabBar_WheelEvent(QTabBar* self, QWheelEvent* event);
void QTabBar_OnWheelEvent(QTabBar* self, intptr_t slot);
void QTabBar_QBaseWheelEvent(QTabBar* self, QWheelEvent* event);
void QTabBar_KeyPressEvent(QTabBar* self, QKeyEvent* param1);
void QTabBar_OnKeyPressEvent(QTabBar* self, intptr_t slot);
void QTabBar_QBaseKeyPressEvent(QTabBar* self, QKeyEvent* param1);
void QTabBar_ChangeEvent(QTabBar* self, QEvent* param1);
void QTabBar_OnChangeEvent(QTabBar* self, intptr_t slot);
void QTabBar_QBaseChangeEvent(QTabBar* self, QEvent* param1);
void QTabBar_TimerEvent(QTabBar* self, QTimerEvent* event);
void QTabBar_OnTimerEvent(QTabBar* self, intptr_t slot);
void QTabBar_QBaseTimerEvent(QTabBar* self, QTimerEvent* event);
void QTabBar_InitStyleOption(const QTabBar* self, QStyleOptionTab* option, int tabIndex);
void QTabBar_OnInitStyleOption(const QTabBar* self, intptr_t slot);
void QTabBar_QBaseInitStyleOption(const QTabBar* self, QStyleOptionTab* option, int tabIndex);
libqt_string QTabBar_Tr2(const char* s, const char* c);
libqt_string QTabBar_Tr3(const char* s, const char* c, int n);
int QTabBar_DevType(const QTabBar* self);
void QTabBar_OnDevType(const QTabBar* self, intptr_t slot);
int QTabBar_QBaseDevType(const QTabBar* self);
void QTabBar_SetVisible(QTabBar* self, bool visible);
void QTabBar_OnSetVisible(QTabBar* self, intptr_t slot);
void QTabBar_QBaseSetVisible(QTabBar* self, bool visible);
int QTabBar_HeightForWidth(const QTabBar* self, int param1);
void QTabBar_OnHeightForWidth(const QTabBar* self, intptr_t slot);
int QTabBar_QBaseHeightForWidth(const QTabBar* self, int param1);
bool QTabBar_HasHeightForWidth(const QTabBar* self);
void QTabBar_OnHasHeightForWidth(const QTabBar* self, intptr_t slot);
bool QTabBar_QBaseHasHeightForWidth(const QTabBar* self);
QPaintEngine* QTabBar_PaintEngine(const QTabBar* self);
void QTabBar_OnPaintEngine(const QTabBar* self, intptr_t slot);
QPaintEngine* QTabBar_QBasePaintEngine(const QTabBar* self);
void QTabBar_KeyReleaseEvent(QTabBar* self, QKeyEvent* event);
void QTabBar_OnKeyReleaseEvent(QTabBar* self, intptr_t slot);
void QTabBar_QBaseKeyReleaseEvent(QTabBar* self, QKeyEvent* event);
void QTabBar_FocusInEvent(QTabBar* self, QFocusEvent* event);
void QTabBar_OnFocusInEvent(QTabBar* self, intptr_t slot);
void QTabBar_QBaseFocusInEvent(QTabBar* self, QFocusEvent* event);
void QTabBar_FocusOutEvent(QTabBar* self, QFocusEvent* event);
void QTabBar_OnFocusOutEvent(QTabBar* self, intptr_t slot);
void QTabBar_QBaseFocusOutEvent(QTabBar* self, QFocusEvent* event);
void QTabBar_EnterEvent(QTabBar* self, QEnterEvent* event);
void QTabBar_OnEnterEvent(QTabBar* self, intptr_t slot);
void QTabBar_QBaseEnterEvent(QTabBar* self, QEnterEvent* event);
void QTabBar_LeaveEvent(QTabBar* self, QEvent* event);
void QTabBar_OnLeaveEvent(QTabBar* self, intptr_t slot);
void QTabBar_QBaseLeaveEvent(QTabBar* self, QEvent* event);
void QTabBar_MoveEvent(QTabBar* self, QMoveEvent* event);
void QTabBar_OnMoveEvent(QTabBar* self, intptr_t slot);
void QTabBar_QBaseMoveEvent(QTabBar* self, QMoveEvent* event);
void QTabBar_CloseEvent(QTabBar* self, QCloseEvent* event);
void QTabBar_OnCloseEvent(QTabBar* self, intptr_t slot);
void QTabBar_QBaseCloseEvent(QTabBar* self, QCloseEvent* event);
void QTabBar_ContextMenuEvent(QTabBar* self, QContextMenuEvent* event);
void QTabBar_OnContextMenuEvent(QTabBar* self, intptr_t slot);
void QTabBar_QBaseContextMenuEvent(QTabBar* self, QContextMenuEvent* event);
void QTabBar_TabletEvent(QTabBar* self, QTabletEvent* event);
void QTabBar_OnTabletEvent(QTabBar* self, intptr_t slot);
void QTabBar_QBaseTabletEvent(QTabBar* self, QTabletEvent* event);
void QTabBar_ActionEvent(QTabBar* self, QActionEvent* event);
void QTabBar_OnActionEvent(QTabBar* self, intptr_t slot);
void QTabBar_QBaseActionEvent(QTabBar* self, QActionEvent* event);
void QTabBar_DragEnterEvent(QTabBar* self, QDragEnterEvent* event);
void QTabBar_OnDragEnterEvent(QTabBar* self, intptr_t slot);
void QTabBar_QBaseDragEnterEvent(QTabBar* self, QDragEnterEvent* event);
void QTabBar_DragMoveEvent(QTabBar* self, QDragMoveEvent* event);
void QTabBar_OnDragMoveEvent(QTabBar* self, intptr_t slot);
void QTabBar_QBaseDragMoveEvent(QTabBar* self, QDragMoveEvent* event);
void QTabBar_DragLeaveEvent(QTabBar* self, QDragLeaveEvent* event);
void QTabBar_OnDragLeaveEvent(QTabBar* self, intptr_t slot);
void QTabBar_QBaseDragLeaveEvent(QTabBar* self, QDragLeaveEvent* event);
void QTabBar_DropEvent(QTabBar* self, QDropEvent* event);
void QTabBar_OnDropEvent(QTabBar* self, intptr_t slot);
void QTabBar_QBaseDropEvent(QTabBar* self, QDropEvent* event);
bool QTabBar_NativeEvent(QTabBar* self, const libqt_string eventType, void* message, intptr_t* result);
void QTabBar_OnNativeEvent(QTabBar* self, intptr_t slot);
bool QTabBar_QBaseNativeEvent(QTabBar* self, const libqt_string eventType, void* message, intptr_t* result);
int QTabBar_Metric(const QTabBar* self, int param1);
void QTabBar_OnMetric(const QTabBar* self, intptr_t slot);
int QTabBar_QBaseMetric(const QTabBar* self, int param1);
void QTabBar_InitPainter(const QTabBar* self, QPainter* painter);
void QTabBar_OnInitPainter(const QTabBar* self, intptr_t slot);
void QTabBar_QBaseInitPainter(const QTabBar* self, QPainter* painter);
QPaintDevice* QTabBar_Redirected(const QTabBar* self, QPoint* offset);
void QTabBar_OnRedirected(const QTabBar* self, intptr_t slot);
QPaintDevice* QTabBar_QBaseRedirected(const QTabBar* self, QPoint* offset);
QPainter* QTabBar_SharedPainter(const QTabBar* self);
void QTabBar_OnSharedPainter(const QTabBar* self, intptr_t slot);
QPainter* QTabBar_QBaseSharedPainter(const QTabBar* self);
void QTabBar_InputMethodEvent(QTabBar* self, QInputMethodEvent* param1);
void QTabBar_OnInputMethodEvent(QTabBar* self, intptr_t slot);
void QTabBar_QBaseInputMethodEvent(QTabBar* self, QInputMethodEvent* param1);
QVariant* QTabBar_InputMethodQuery(const QTabBar* self, int param1);
void QTabBar_OnInputMethodQuery(const QTabBar* self, intptr_t slot);
QVariant* QTabBar_QBaseInputMethodQuery(const QTabBar* self, int param1);
bool QTabBar_FocusNextPrevChild(QTabBar* self, bool next);
void QTabBar_OnFocusNextPrevChild(QTabBar* self, intptr_t slot);
bool QTabBar_QBaseFocusNextPrevChild(QTabBar* self, bool next);
bool QTabBar_EventFilter(QTabBar* self, QObject* watched, QEvent* event);
void QTabBar_OnEventFilter(QTabBar* self, intptr_t slot);
bool QTabBar_QBaseEventFilter(QTabBar* self, QObject* watched, QEvent* event);
void QTabBar_ChildEvent(QTabBar* self, QChildEvent* event);
void QTabBar_OnChildEvent(QTabBar* self, intptr_t slot);
void QTabBar_QBaseChildEvent(QTabBar* self, QChildEvent* event);
void QTabBar_CustomEvent(QTabBar* self, QEvent* event);
void QTabBar_OnCustomEvent(QTabBar* self, intptr_t slot);
void QTabBar_QBaseCustomEvent(QTabBar* self, QEvent* event);
void QTabBar_ConnectNotify(QTabBar* self, const QMetaMethod* signal);
void QTabBar_OnConnectNotify(QTabBar* self, intptr_t slot);
void QTabBar_QBaseConnectNotify(QTabBar* self, const QMetaMethod* signal);
void QTabBar_DisconnectNotify(QTabBar* self, const QMetaMethod* signal);
void QTabBar_OnDisconnectNotify(QTabBar* self, intptr_t slot);
void QTabBar_QBaseDisconnectNotify(QTabBar* self, const QMetaMethod* signal);
void QTabBar_UpdateMicroFocus(QTabBar* self);
void QTabBar_OnUpdateMicroFocus(QTabBar* self, intptr_t slot);
void QTabBar_QBaseUpdateMicroFocus(QTabBar* self);
void QTabBar_Create(QTabBar* self);
void QTabBar_OnCreate(QTabBar* self, intptr_t slot);
void QTabBar_QBaseCreate(QTabBar* self);
void QTabBar_Destroy(QTabBar* self);
void QTabBar_OnDestroy(QTabBar* self, intptr_t slot);
void QTabBar_QBaseDestroy(QTabBar* self);
bool QTabBar_FocusNextChild(QTabBar* self);
void QTabBar_OnFocusNextChild(QTabBar* self, intptr_t slot);
bool QTabBar_QBaseFocusNextChild(QTabBar* self);
bool QTabBar_FocusPreviousChild(QTabBar* self);
void QTabBar_OnFocusPreviousChild(QTabBar* self, intptr_t slot);
bool QTabBar_QBaseFocusPreviousChild(QTabBar* self);
QObject* QTabBar_Sender(const QTabBar* self);
void QTabBar_OnSender(const QTabBar* self, intptr_t slot);
QObject* QTabBar_QBaseSender(const QTabBar* self);
int QTabBar_SenderSignalIndex(const QTabBar* self);
void QTabBar_OnSenderSignalIndex(const QTabBar* self, intptr_t slot);
int QTabBar_QBaseSenderSignalIndex(const QTabBar* self);
int QTabBar_Receivers(const QTabBar* self, const char* signal);
void QTabBar_OnReceivers(const QTabBar* self, intptr_t slot);
int QTabBar_QBaseReceivers(const QTabBar* self, const char* signal);
bool QTabBar_IsSignalConnected(const QTabBar* self, const QMetaMethod* signal);
void QTabBar_OnIsSignalConnected(const QTabBar* self, intptr_t slot);
bool QTabBar_QBaseIsSignalConnected(const QTabBar* self, const QMetaMethod* signal);
void QTabBar_Delete(QTabBar* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
