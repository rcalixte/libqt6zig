#pragma once
#ifndef SRCC_LIBQTOOLBUTTON_H
#define SRCC_LIBQTOOLBUTTON_H

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
typedef struct QAbstractButton QAbstractButton;
typedef struct QAction QAction;
typedef struct QActionEvent QActionEvent;
typedef struct QAnyStringView QAnyStringView;
typedef struct QBackingStore QBackingStore;
typedef struct QBindingStorage QBindingStorage;
typedef struct QBitmap QBitmap;
typedef struct QButtonGroup QButtonGroup;
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
typedef struct QMenu QMenu;
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
typedef struct QStyleOptionToolButton QStyleOptionToolButton;
typedef struct QTabletEvent QTabletEvent;
typedef struct QThread QThread;
typedef struct QTimerEvent QTimerEvent;
typedef struct QToolButton QToolButton;
typedef struct QVariant QVariant;
typedef struct QWheelEvent QWheelEvent;
typedef struct QWidget QWidget;
typedef struct QWindow QWindow;
#endif

#ifdef __cplusplus
typedef QToolButton::ToolButtonPopupMode ToolButtonPopupMode; // C++ enum
#else
typedef int ToolButtonPopupMode; // C ABI enum
#endif

QToolButton* QToolButton_new(QWidget* parent);
QToolButton* QToolButton_new2();
QMetaObject* QToolButton_MetaObject(const QToolButton* self);
void* QToolButton_Metacast(QToolButton* self, const char* param1);
int QToolButton_Metacall(QToolButton* self, int param1, int param2, void** param3);
void QToolButton_OnMetacall(QToolButton* self, intptr_t slot);
int QToolButton_QBaseMetacall(QToolButton* self, int param1, int param2, void** param3);
libqt_string QToolButton_Tr(const char* s);
QSize* QToolButton_SizeHint(const QToolButton* self);
void QToolButton_OnSizeHint(const QToolButton* self, intptr_t slot);
QSize* QToolButton_QBaseSizeHint(const QToolButton* self);
QSize* QToolButton_MinimumSizeHint(const QToolButton* self);
void QToolButton_OnMinimumSizeHint(const QToolButton* self, intptr_t slot);
QSize* QToolButton_QBaseMinimumSizeHint(const QToolButton* self);
int QToolButton_ToolButtonStyle(const QToolButton* self);
int QToolButton_ArrowType(const QToolButton* self);
void QToolButton_SetArrowType(QToolButton* self, int typeVal);
void QToolButton_SetMenu(QToolButton* self, QMenu* menu);
QMenu* QToolButton_Menu(const QToolButton* self);
void QToolButton_SetPopupMode(QToolButton* self, int mode);
int QToolButton_PopupMode(const QToolButton* self);
QAction* QToolButton_DefaultAction(const QToolButton* self);
void QToolButton_SetAutoRaise(QToolButton* self, bool enable);
bool QToolButton_AutoRaise(const QToolButton* self);
void QToolButton_ShowMenu(QToolButton* self);
void QToolButton_SetToolButtonStyle(QToolButton* self, int style);
void QToolButton_SetDefaultAction(QToolButton* self, QAction* defaultAction);
void QToolButton_Triggered(QToolButton* self, QAction* param1);
void QToolButton_Connect_Triggered(QToolButton* self, intptr_t slot);
bool QToolButton_Event(QToolButton* self, QEvent* e);
void QToolButton_OnEvent(QToolButton* self, intptr_t slot);
bool QToolButton_QBaseEvent(QToolButton* self, QEvent* e);
void QToolButton_MousePressEvent(QToolButton* self, QMouseEvent* param1);
void QToolButton_OnMousePressEvent(QToolButton* self, intptr_t slot);
void QToolButton_QBaseMousePressEvent(QToolButton* self, QMouseEvent* param1);
void QToolButton_MouseReleaseEvent(QToolButton* self, QMouseEvent* param1);
void QToolButton_OnMouseReleaseEvent(QToolButton* self, intptr_t slot);
void QToolButton_QBaseMouseReleaseEvent(QToolButton* self, QMouseEvent* param1);
void QToolButton_PaintEvent(QToolButton* self, QPaintEvent* param1);
void QToolButton_OnPaintEvent(QToolButton* self, intptr_t slot);
void QToolButton_QBasePaintEvent(QToolButton* self, QPaintEvent* param1);
void QToolButton_ActionEvent(QToolButton* self, QActionEvent* param1);
void QToolButton_OnActionEvent(QToolButton* self, intptr_t slot);
void QToolButton_QBaseActionEvent(QToolButton* self, QActionEvent* param1);
void QToolButton_EnterEvent(QToolButton* self, QEnterEvent* param1);
void QToolButton_OnEnterEvent(QToolButton* self, intptr_t slot);
void QToolButton_QBaseEnterEvent(QToolButton* self, QEnterEvent* param1);
void QToolButton_LeaveEvent(QToolButton* self, QEvent* param1);
void QToolButton_OnLeaveEvent(QToolButton* self, intptr_t slot);
void QToolButton_QBaseLeaveEvent(QToolButton* self, QEvent* param1);
void QToolButton_TimerEvent(QToolButton* self, QTimerEvent* param1);
void QToolButton_OnTimerEvent(QToolButton* self, intptr_t slot);
void QToolButton_QBaseTimerEvent(QToolButton* self, QTimerEvent* param1);
void QToolButton_ChangeEvent(QToolButton* self, QEvent* param1);
void QToolButton_OnChangeEvent(QToolButton* self, intptr_t slot);
void QToolButton_QBaseChangeEvent(QToolButton* self, QEvent* param1);
bool QToolButton_HitButton(const QToolButton* self, QPoint* pos);
void QToolButton_OnHitButton(const QToolButton* self, intptr_t slot);
bool QToolButton_QBaseHitButton(const QToolButton* self, QPoint* pos);
void QToolButton_CheckStateSet(QToolButton* self);
void QToolButton_OnCheckStateSet(QToolButton* self, intptr_t slot);
void QToolButton_QBaseCheckStateSet(QToolButton* self);
void QToolButton_NextCheckState(QToolButton* self);
void QToolButton_OnNextCheckState(QToolButton* self, intptr_t slot);
void QToolButton_QBaseNextCheckState(QToolButton* self);
void QToolButton_InitStyleOption(const QToolButton* self, QStyleOptionToolButton* option);
void QToolButton_OnInitStyleOption(const QToolButton* self, intptr_t slot);
void QToolButton_QBaseInitStyleOption(const QToolButton* self, QStyleOptionToolButton* option);
libqt_string QToolButton_Tr2(const char* s, const char* c);
libqt_string QToolButton_Tr3(const char* s, const char* c, int n);
void QToolButton_KeyPressEvent(QToolButton* self, QKeyEvent* e);
void QToolButton_OnKeyPressEvent(QToolButton* self, intptr_t slot);
void QToolButton_QBaseKeyPressEvent(QToolButton* self, QKeyEvent* e);
void QToolButton_KeyReleaseEvent(QToolButton* self, QKeyEvent* e);
void QToolButton_OnKeyReleaseEvent(QToolButton* self, intptr_t slot);
void QToolButton_QBaseKeyReleaseEvent(QToolButton* self, QKeyEvent* e);
void QToolButton_MouseMoveEvent(QToolButton* self, QMouseEvent* e);
void QToolButton_OnMouseMoveEvent(QToolButton* self, intptr_t slot);
void QToolButton_QBaseMouseMoveEvent(QToolButton* self, QMouseEvent* e);
void QToolButton_FocusInEvent(QToolButton* self, QFocusEvent* e);
void QToolButton_OnFocusInEvent(QToolButton* self, intptr_t slot);
void QToolButton_QBaseFocusInEvent(QToolButton* self, QFocusEvent* e);
void QToolButton_FocusOutEvent(QToolButton* self, QFocusEvent* e);
void QToolButton_OnFocusOutEvent(QToolButton* self, intptr_t slot);
void QToolButton_QBaseFocusOutEvent(QToolButton* self, QFocusEvent* e);
int QToolButton_DevType(const QToolButton* self);
void QToolButton_OnDevType(const QToolButton* self, intptr_t slot);
int QToolButton_QBaseDevType(const QToolButton* self);
void QToolButton_SetVisible(QToolButton* self, bool visible);
void QToolButton_OnSetVisible(QToolButton* self, intptr_t slot);
void QToolButton_QBaseSetVisible(QToolButton* self, bool visible);
int QToolButton_HeightForWidth(const QToolButton* self, int param1);
void QToolButton_OnHeightForWidth(const QToolButton* self, intptr_t slot);
int QToolButton_QBaseHeightForWidth(const QToolButton* self, int param1);
bool QToolButton_HasHeightForWidth(const QToolButton* self);
void QToolButton_OnHasHeightForWidth(const QToolButton* self, intptr_t slot);
bool QToolButton_QBaseHasHeightForWidth(const QToolButton* self);
QPaintEngine* QToolButton_PaintEngine(const QToolButton* self);
void QToolButton_OnPaintEngine(const QToolButton* self, intptr_t slot);
QPaintEngine* QToolButton_QBasePaintEngine(const QToolButton* self);
void QToolButton_MouseDoubleClickEvent(QToolButton* self, QMouseEvent* event);
void QToolButton_OnMouseDoubleClickEvent(QToolButton* self, intptr_t slot);
void QToolButton_QBaseMouseDoubleClickEvent(QToolButton* self, QMouseEvent* event);
void QToolButton_WheelEvent(QToolButton* self, QWheelEvent* event);
void QToolButton_OnWheelEvent(QToolButton* self, intptr_t slot);
void QToolButton_QBaseWheelEvent(QToolButton* self, QWheelEvent* event);
void QToolButton_MoveEvent(QToolButton* self, QMoveEvent* event);
void QToolButton_OnMoveEvent(QToolButton* self, intptr_t slot);
void QToolButton_QBaseMoveEvent(QToolButton* self, QMoveEvent* event);
void QToolButton_ResizeEvent(QToolButton* self, QResizeEvent* event);
void QToolButton_OnResizeEvent(QToolButton* self, intptr_t slot);
void QToolButton_QBaseResizeEvent(QToolButton* self, QResizeEvent* event);
void QToolButton_CloseEvent(QToolButton* self, QCloseEvent* event);
void QToolButton_OnCloseEvent(QToolButton* self, intptr_t slot);
void QToolButton_QBaseCloseEvent(QToolButton* self, QCloseEvent* event);
void QToolButton_ContextMenuEvent(QToolButton* self, QContextMenuEvent* event);
void QToolButton_OnContextMenuEvent(QToolButton* self, intptr_t slot);
void QToolButton_QBaseContextMenuEvent(QToolButton* self, QContextMenuEvent* event);
void QToolButton_TabletEvent(QToolButton* self, QTabletEvent* event);
void QToolButton_OnTabletEvent(QToolButton* self, intptr_t slot);
void QToolButton_QBaseTabletEvent(QToolButton* self, QTabletEvent* event);
void QToolButton_DragEnterEvent(QToolButton* self, QDragEnterEvent* event);
void QToolButton_OnDragEnterEvent(QToolButton* self, intptr_t slot);
void QToolButton_QBaseDragEnterEvent(QToolButton* self, QDragEnterEvent* event);
void QToolButton_DragMoveEvent(QToolButton* self, QDragMoveEvent* event);
void QToolButton_OnDragMoveEvent(QToolButton* self, intptr_t slot);
void QToolButton_QBaseDragMoveEvent(QToolButton* self, QDragMoveEvent* event);
void QToolButton_DragLeaveEvent(QToolButton* self, QDragLeaveEvent* event);
void QToolButton_OnDragLeaveEvent(QToolButton* self, intptr_t slot);
void QToolButton_QBaseDragLeaveEvent(QToolButton* self, QDragLeaveEvent* event);
void QToolButton_DropEvent(QToolButton* self, QDropEvent* event);
void QToolButton_OnDropEvent(QToolButton* self, intptr_t slot);
void QToolButton_QBaseDropEvent(QToolButton* self, QDropEvent* event);
void QToolButton_ShowEvent(QToolButton* self, QShowEvent* event);
void QToolButton_OnShowEvent(QToolButton* self, intptr_t slot);
void QToolButton_QBaseShowEvent(QToolButton* self, QShowEvent* event);
void QToolButton_HideEvent(QToolButton* self, QHideEvent* event);
void QToolButton_OnHideEvent(QToolButton* self, intptr_t slot);
void QToolButton_QBaseHideEvent(QToolButton* self, QHideEvent* event);
bool QToolButton_NativeEvent(QToolButton* self, libqt_string eventType, void* message, intptr_t* result);
void QToolButton_OnNativeEvent(QToolButton* self, intptr_t slot);
bool QToolButton_QBaseNativeEvent(QToolButton* self, libqt_string eventType, void* message, intptr_t* result);
void QToolButton_InputMethodEvent(QToolButton* self, QInputMethodEvent* param1);
void QToolButton_OnInputMethodEvent(QToolButton* self, intptr_t slot);
void QToolButton_QBaseInputMethodEvent(QToolButton* self, QInputMethodEvent* param1);
QVariant* QToolButton_InputMethodQuery(const QToolButton* self, int param1);
void QToolButton_OnInputMethodQuery(const QToolButton* self, intptr_t slot);
QVariant* QToolButton_QBaseInputMethodQuery(const QToolButton* self, int param1);
bool QToolButton_FocusNextPrevChild(QToolButton* self, bool next);
void QToolButton_OnFocusNextPrevChild(QToolButton* self, intptr_t slot);
bool QToolButton_QBaseFocusNextPrevChild(QToolButton* self, bool next);
bool QToolButton_EventFilter(QToolButton* self, QObject* watched, QEvent* event);
void QToolButton_OnEventFilter(QToolButton* self, intptr_t slot);
bool QToolButton_QBaseEventFilter(QToolButton* self, QObject* watched, QEvent* event);
void QToolButton_ChildEvent(QToolButton* self, QChildEvent* event);
void QToolButton_OnChildEvent(QToolButton* self, intptr_t slot);
void QToolButton_QBaseChildEvent(QToolButton* self, QChildEvent* event);
void QToolButton_CustomEvent(QToolButton* self, QEvent* event);
void QToolButton_OnCustomEvent(QToolButton* self, intptr_t slot);
void QToolButton_QBaseCustomEvent(QToolButton* self, QEvent* event);
void QToolButton_ConnectNotify(QToolButton* self, QMetaMethod* signal);
void QToolButton_OnConnectNotify(QToolButton* self, intptr_t slot);
void QToolButton_QBaseConnectNotify(QToolButton* self, QMetaMethod* signal);
void QToolButton_DisconnectNotify(QToolButton* self, QMetaMethod* signal);
void QToolButton_OnDisconnectNotify(QToolButton* self, intptr_t slot);
void QToolButton_QBaseDisconnectNotify(QToolButton* self, QMetaMethod* signal);
int QToolButton_Metric(const QToolButton* self, int param1);
void QToolButton_OnMetric(const QToolButton* self, intptr_t slot);
int QToolButton_QBaseMetric(const QToolButton* self, int param1);
void QToolButton_InitPainter(const QToolButton* self, QPainter* painter);
void QToolButton_OnInitPainter(const QToolButton* self, intptr_t slot);
void QToolButton_QBaseInitPainter(const QToolButton* self, QPainter* painter);
QPaintDevice* QToolButton_Redirected(const QToolButton* self, QPoint* offset);
void QToolButton_OnRedirected(const QToolButton* self, intptr_t slot);
QPaintDevice* QToolButton_QBaseRedirected(const QToolButton* self, QPoint* offset);
QPainter* QToolButton_SharedPainter(const QToolButton* self);
void QToolButton_OnSharedPainter(const QToolButton* self, intptr_t slot);
QPainter* QToolButton_QBaseSharedPainter(const QToolButton* self);
void QToolButton_UpdateMicroFocus(QToolButton* self);
void QToolButton_OnUpdateMicroFocus(QToolButton* self, intptr_t slot);
void QToolButton_QBaseUpdateMicroFocus(QToolButton* self);
void QToolButton_Create(QToolButton* self);
void QToolButton_OnCreate(QToolButton* self, intptr_t slot);
void QToolButton_QBaseCreate(QToolButton* self);
void QToolButton_Destroy(QToolButton* self);
void QToolButton_OnDestroy(QToolButton* self, intptr_t slot);
void QToolButton_QBaseDestroy(QToolButton* self);
bool QToolButton_FocusNextChild(QToolButton* self);
void QToolButton_OnFocusNextChild(QToolButton* self, intptr_t slot);
bool QToolButton_QBaseFocusNextChild(QToolButton* self);
bool QToolButton_FocusPreviousChild(QToolButton* self);
void QToolButton_OnFocusPreviousChild(QToolButton* self, intptr_t slot);
bool QToolButton_QBaseFocusPreviousChild(QToolButton* self);
QObject* QToolButton_Sender(const QToolButton* self);
void QToolButton_OnSender(const QToolButton* self, intptr_t slot);
QObject* QToolButton_QBaseSender(const QToolButton* self);
int QToolButton_SenderSignalIndex(const QToolButton* self);
void QToolButton_OnSenderSignalIndex(const QToolButton* self, intptr_t slot);
int QToolButton_QBaseSenderSignalIndex(const QToolButton* self);
int QToolButton_Receivers(const QToolButton* self, const char* signal);
void QToolButton_OnReceivers(const QToolButton* self, intptr_t slot);
int QToolButton_QBaseReceivers(const QToolButton* self, const char* signal);
bool QToolButton_IsSignalConnected(const QToolButton* self, QMetaMethod* signal);
void QToolButton_OnIsSignalConnected(const QToolButton* self, intptr_t slot);
bool QToolButton_QBaseIsSignalConnected(const QToolButton* self, QMetaMethod* signal);
void QToolButton_Delete(QToolButton* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
