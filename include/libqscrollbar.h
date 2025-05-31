#pragma once
#ifndef SRCC_LIBQSCROLLBAR_H
#define SRCC_LIBQSCROLLBAR_H

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
typedef struct QAbstractSlider QAbstractSlider;
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
typedef struct QResizeEvent QResizeEvent;
typedef struct QScrollBar QScrollBar;
typedef struct QShowEvent QShowEvent;
typedef struct QSize QSize;
typedef struct QStyleOptionSlider QStyleOptionSlider;
typedef struct QTabletEvent QTabletEvent;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
typedef struct QWheelEvent QWheelEvent;
typedef struct QWidget QWidget;
#endif

QScrollBar* QScrollBar_new(QWidget* parent);
QScrollBar* QScrollBar_new2();
QScrollBar* QScrollBar_new3(int param1);
QScrollBar* QScrollBar_new4(int param1, QWidget* parent);
QMetaObject* QScrollBar_MetaObject(const QScrollBar* self);
void* QScrollBar_Metacast(QScrollBar* self, const char* param1);
int QScrollBar_Metacall(QScrollBar* self, int param1, int param2, void** param3);
void QScrollBar_OnMetacall(QScrollBar* self, intptr_t slot);
int QScrollBar_QBaseMetacall(QScrollBar* self, int param1, int param2, void** param3);
libqt_string QScrollBar_Tr(const char* s);
QSize* QScrollBar_SizeHint(const QScrollBar* self);
void QScrollBar_OnSizeHint(const QScrollBar* self, intptr_t slot);
QSize* QScrollBar_QBaseSizeHint(const QScrollBar* self);
bool QScrollBar_Event(QScrollBar* self, QEvent* event);
void QScrollBar_OnEvent(QScrollBar* self, intptr_t slot);
bool QScrollBar_QBaseEvent(QScrollBar* self, QEvent* event);
void QScrollBar_WheelEvent(QScrollBar* self, QWheelEvent* param1);
void QScrollBar_OnWheelEvent(QScrollBar* self, intptr_t slot);
void QScrollBar_QBaseWheelEvent(QScrollBar* self, QWheelEvent* param1);
void QScrollBar_PaintEvent(QScrollBar* self, QPaintEvent* param1);
void QScrollBar_OnPaintEvent(QScrollBar* self, intptr_t slot);
void QScrollBar_QBasePaintEvent(QScrollBar* self, QPaintEvent* param1);
void QScrollBar_MousePressEvent(QScrollBar* self, QMouseEvent* param1);
void QScrollBar_OnMousePressEvent(QScrollBar* self, intptr_t slot);
void QScrollBar_QBaseMousePressEvent(QScrollBar* self, QMouseEvent* param1);
void QScrollBar_MouseReleaseEvent(QScrollBar* self, QMouseEvent* param1);
void QScrollBar_OnMouseReleaseEvent(QScrollBar* self, intptr_t slot);
void QScrollBar_QBaseMouseReleaseEvent(QScrollBar* self, QMouseEvent* param1);
void QScrollBar_MouseMoveEvent(QScrollBar* self, QMouseEvent* param1);
void QScrollBar_OnMouseMoveEvent(QScrollBar* self, intptr_t slot);
void QScrollBar_QBaseMouseMoveEvent(QScrollBar* self, QMouseEvent* param1);
void QScrollBar_HideEvent(QScrollBar* self, QHideEvent* param1);
void QScrollBar_OnHideEvent(QScrollBar* self, intptr_t slot);
void QScrollBar_QBaseHideEvent(QScrollBar* self, QHideEvent* param1);
void QScrollBar_SliderChange(QScrollBar* self, int change);
void QScrollBar_OnSliderChange(QScrollBar* self, intptr_t slot);
void QScrollBar_QBaseSliderChange(QScrollBar* self, int change);
void QScrollBar_ContextMenuEvent(QScrollBar* self, QContextMenuEvent* param1);
void QScrollBar_OnContextMenuEvent(QScrollBar* self, intptr_t slot);
void QScrollBar_QBaseContextMenuEvent(QScrollBar* self, QContextMenuEvent* param1);
void QScrollBar_InitStyleOption(const QScrollBar* self, QStyleOptionSlider* option);
void QScrollBar_OnInitStyleOption(const QScrollBar* self, intptr_t slot);
void QScrollBar_QBaseInitStyleOption(const QScrollBar* self, QStyleOptionSlider* option);
libqt_string QScrollBar_Tr2(const char* s, const char* c);
libqt_string QScrollBar_Tr3(const char* s, const char* c, int n);
void QScrollBar_KeyPressEvent(QScrollBar* self, QKeyEvent* ev);
void QScrollBar_OnKeyPressEvent(QScrollBar* self, intptr_t slot);
void QScrollBar_QBaseKeyPressEvent(QScrollBar* self, QKeyEvent* ev);
void QScrollBar_TimerEvent(QScrollBar* self, QTimerEvent* param1);
void QScrollBar_OnTimerEvent(QScrollBar* self, intptr_t slot);
void QScrollBar_QBaseTimerEvent(QScrollBar* self, QTimerEvent* param1);
void QScrollBar_ChangeEvent(QScrollBar* self, QEvent* e);
void QScrollBar_OnChangeEvent(QScrollBar* self, intptr_t slot);
void QScrollBar_QBaseChangeEvent(QScrollBar* self, QEvent* e);
int QScrollBar_DevType(const QScrollBar* self);
void QScrollBar_OnDevType(const QScrollBar* self, intptr_t slot);
int QScrollBar_QBaseDevType(const QScrollBar* self);
void QScrollBar_SetVisible(QScrollBar* self, bool visible);
void QScrollBar_OnSetVisible(QScrollBar* self, intptr_t slot);
void QScrollBar_QBaseSetVisible(QScrollBar* self, bool visible);
QSize* QScrollBar_MinimumSizeHint(const QScrollBar* self);
void QScrollBar_OnMinimumSizeHint(const QScrollBar* self, intptr_t slot);
QSize* QScrollBar_QBaseMinimumSizeHint(const QScrollBar* self);
int QScrollBar_HeightForWidth(const QScrollBar* self, int param1);
void QScrollBar_OnHeightForWidth(const QScrollBar* self, intptr_t slot);
int QScrollBar_QBaseHeightForWidth(const QScrollBar* self, int param1);
bool QScrollBar_HasHeightForWidth(const QScrollBar* self);
void QScrollBar_OnHasHeightForWidth(const QScrollBar* self, intptr_t slot);
bool QScrollBar_QBaseHasHeightForWidth(const QScrollBar* self);
QPaintEngine* QScrollBar_PaintEngine(const QScrollBar* self);
void QScrollBar_OnPaintEngine(const QScrollBar* self, intptr_t slot);
QPaintEngine* QScrollBar_QBasePaintEngine(const QScrollBar* self);
void QScrollBar_MouseDoubleClickEvent(QScrollBar* self, QMouseEvent* event);
void QScrollBar_OnMouseDoubleClickEvent(QScrollBar* self, intptr_t slot);
void QScrollBar_QBaseMouseDoubleClickEvent(QScrollBar* self, QMouseEvent* event);
void QScrollBar_KeyReleaseEvent(QScrollBar* self, QKeyEvent* event);
void QScrollBar_OnKeyReleaseEvent(QScrollBar* self, intptr_t slot);
void QScrollBar_QBaseKeyReleaseEvent(QScrollBar* self, QKeyEvent* event);
void QScrollBar_FocusInEvent(QScrollBar* self, QFocusEvent* event);
void QScrollBar_OnFocusInEvent(QScrollBar* self, intptr_t slot);
void QScrollBar_QBaseFocusInEvent(QScrollBar* self, QFocusEvent* event);
void QScrollBar_FocusOutEvent(QScrollBar* self, QFocusEvent* event);
void QScrollBar_OnFocusOutEvent(QScrollBar* self, intptr_t slot);
void QScrollBar_QBaseFocusOutEvent(QScrollBar* self, QFocusEvent* event);
void QScrollBar_EnterEvent(QScrollBar* self, QEnterEvent* event);
void QScrollBar_OnEnterEvent(QScrollBar* self, intptr_t slot);
void QScrollBar_QBaseEnterEvent(QScrollBar* self, QEnterEvent* event);
void QScrollBar_LeaveEvent(QScrollBar* self, QEvent* event);
void QScrollBar_OnLeaveEvent(QScrollBar* self, intptr_t slot);
void QScrollBar_QBaseLeaveEvent(QScrollBar* self, QEvent* event);
void QScrollBar_MoveEvent(QScrollBar* self, QMoveEvent* event);
void QScrollBar_OnMoveEvent(QScrollBar* self, intptr_t slot);
void QScrollBar_QBaseMoveEvent(QScrollBar* self, QMoveEvent* event);
void QScrollBar_ResizeEvent(QScrollBar* self, QResizeEvent* event);
void QScrollBar_OnResizeEvent(QScrollBar* self, intptr_t slot);
void QScrollBar_QBaseResizeEvent(QScrollBar* self, QResizeEvent* event);
void QScrollBar_CloseEvent(QScrollBar* self, QCloseEvent* event);
void QScrollBar_OnCloseEvent(QScrollBar* self, intptr_t slot);
void QScrollBar_QBaseCloseEvent(QScrollBar* self, QCloseEvent* event);
void QScrollBar_TabletEvent(QScrollBar* self, QTabletEvent* event);
void QScrollBar_OnTabletEvent(QScrollBar* self, intptr_t slot);
void QScrollBar_QBaseTabletEvent(QScrollBar* self, QTabletEvent* event);
void QScrollBar_ActionEvent(QScrollBar* self, QActionEvent* event);
void QScrollBar_OnActionEvent(QScrollBar* self, intptr_t slot);
void QScrollBar_QBaseActionEvent(QScrollBar* self, QActionEvent* event);
void QScrollBar_DragEnterEvent(QScrollBar* self, QDragEnterEvent* event);
void QScrollBar_OnDragEnterEvent(QScrollBar* self, intptr_t slot);
void QScrollBar_QBaseDragEnterEvent(QScrollBar* self, QDragEnterEvent* event);
void QScrollBar_DragMoveEvent(QScrollBar* self, QDragMoveEvent* event);
void QScrollBar_OnDragMoveEvent(QScrollBar* self, intptr_t slot);
void QScrollBar_QBaseDragMoveEvent(QScrollBar* self, QDragMoveEvent* event);
void QScrollBar_DragLeaveEvent(QScrollBar* self, QDragLeaveEvent* event);
void QScrollBar_OnDragLeaveEvent(QScrollBar* self, intptr_t slot);
void QScrollBar_QBaseDragLeaveEvent(QScrollBar* self, QDragLeaveEvent* event);
void QScrollBar_DropEvent(QScrollBar* self, QDropEvent* event);
void QScrollBar_OnDropEvent(QScrollBar* self, intptr_t slot);
void QScrollBar_QBaseDropEvent(QScrollBar* self, QDropEvent* event);
void QScrollBar_ShowEvent(QScrollBar* self, QShowEvent* event);
void QScrollBar_OnShowEvent(QScrollBar* self, intptr_t slot);
void QScrollBar_QBaseShowEvent(QScrollBar* self, QShowEvent* event);
bool QScrollBar_NativeEvent(QScrollBar* self, const libqt_string eventType, void* message, intptr_t* result);
void QScrollBar_OnNativeEvent(QScrollBar* self, intptr_t slot);
bool QScrollBar_QBaseNativeEvent(QScrollBar* self, const libqt_string eventType, void* message, intptr_t* result);
int QScrollBar_Metric(const QScrollBar* self, int param1);
void QScrollBar_OnMetric(const QScrollBar* self, intptr_t slot);
int QScrollBar_QBaseMetric(const QScrollBar* self, int param1);
void QScrollBar_InitPainter(const QScrollBar* self, QPainter* painter);
void QScrollBar_OnInitPainter(const QScrollBar* self, intptr_t slot);
void QScrollBar_QBaseInitPainter(const QScrollBar* self, QPainter* painter);
QPaintDevice* QScrollBar_Redirected(const QScrollBar* self, QPoint* offset);
void QScrollBar_OnRedirected(const QScrollBar* self, intptr_t slot);
QPaintDevice* QScrollBar_QBaseRedirected(const QScrollBar* self, QPoint* offset);
QPainter* QScrollBar_SharedPainter(const QScrollBar* self);
void QScrollBar_OnSharedPainter(const QScrollBar* self, intptr_t slot);
QPainter* QScrollBar_QBaseSharedPainter(const QScrollBar* self);
void QScrollBar_InputMethodEvent(QScrollBar* self, QInputMethodEvent* param1);
void QScrollBar_OnInputMethodEvent(QScrollBar* self, intptr_t slot);
void QScrollBar_QBaseInputMethodEvent(QScrollBar* self, QInputMethodEvent* param1);
QVariant* QScrollBar_InputMethodQuery(const QScrollBar* self, int param1);
void QScrollBar_OnInputMethodQuery(const QScrollBar* self, intptr_t slot);
QVariant* QScrollBar_QBaseInputMethodQuery(const QScrollBar* self, int param1);
bool QScrollBar_FocusNextPrevChild(QScrollBar* self, bool next);
void QScrollBar_OnFocusNextPrevChild(QScrollBar* self, intptr_t slot);
bool QScrollBar_QBaseFocusNextPrevChild(QScrollBar* self, bool next);
bool QScrollBar_EventFilter(QScrollBar* self, QObject* watched, QEvent* event);
void QScrollBar_OnEventFilter(QScrollBar* self, intptr_t slot);
bool QScrollBar_QBaseEventFilter(QScrollBar* self, QObject* watched, QEvent* event);
void QScrollBar_ChildEvent(QScrollBar* self, QChildEvent* event);
void QScrollBar_OnChildEvent(QScrollBar* self, intptr_t slot);
void QScrollBar_QBaseChildEvent(QScrollBar* self, QChildEvent* event);
void QScrollBar_CustomEvent(QScrollBar* self, QEvent* event);
void QScrollBar_OnCustomEvent(QScrollBar* self, intptr_t slot);
void QScrollBar_QBaseCustomEvent(QScrollBar* self, QEvent* event);
void QScrollBar_ConnectNotify(QScrollBar* self, const QMetaMethod* signal);
void QScrollBar_OnConnectNotify(QScrollBar* self, intptr_t slot);
void QScrollBar_QBaseConnectNotify(QScrollBar* self, const QMetaMethod* signal);
void QScrollBar_DisconnectNotify(QScrollBar* self, const QMetaMethod* signal);
void QScrollBar_OnDisconnectNotify(QScrollBar* self, intptr_t slot);
void QScrollBar_QBaseDisconnectNotify(QScrollBar* self, const QMetaMethod* signal);
void QScrollBar_SetRepeatAction(QScrollBar* self, int action);
void QScrollBar_OnSetRepeatAction(QScrollBar* self, intptr_t slot);
void QScrollBar_QBaseSetRepeatAction(QScrollBar* self, int action);
int QScrollBar_RepeatAction(const QScrollBar* self);
void QScrollBar_OnRepeatAction(const QScrollBar* self, intptr_t slot);
int QScrollBar_QBaseRepeatAction(const QScrollBar* self);
void QScrollBar_UpdateMicroFocus(QScrollBar* self);
void QScrollBar_OnUpdateMicroFocus(QScrollBar* self, intptr_t slot);
void QScrollBar_QBaseUpdateMicroFocus(QScrollBar* self);
void QScrollBar_Create(QScrollBar* self);
void QScrollBar_OnCreate(QScrollBar* self, intptr_t slot);
void QScrollBar_QBaseCreate(QScrollBar* self);
void QScrollBar_Destroy(QScrollBar* self);
void QScrollBar_OnDestroy(QScrollBar* self, intptr_t slot);
void QScrollBar_QBaseDestroy(QScrollBar* self);
bool QScrollBar_FocusNextChild(QScrollBar* self);
void QScrollBar_OnFocusNextChild(QScrollBar* self, intptr_t slot);
bool QScrollBar_QBaseFocusNextChild(QScrollBar* self);
bool QScrollBar_FocusPreviousChild(QScrollBar* self);
void QScrollBar_OnFocusPreviousChild(QScrollBar* self, intptr_t slot);
bool QScrollBar_QBaseFocusPreviousChild(QScrollBar* self);
QObject* QScrollBar_Sender(const QScrollBar* self);
void QScrollBar_OnSender(const QScrollBar* self, intptr_t slot);
QObject* QScrollBar_QBaseSender(const QScrollBar* self);
int QScrollBar_SenderSignalIndex(const QScrollBar* self);
void QScrollBar_OnSenderSignalIndex(const QScrollBar* self, intptr_t slot);
int QScrollBar_QBaseSenderSignalIndex(const QScrollBar* self);
int QScrollBar_Receivers(const QScrollBar* self, const char* signal);
void QScrollBar_OnReceivers(const QScrollBar* self, intptr_t slot);
int QScrollBar_QBaseReceivers(const QScrollBar* self, const char* signal);
bool QScrollBar_IsSignalConnected(const QScrollBar* self, const QMetaMethod* signal);
void QScrollBar_OnIsSignalConnected(const QScrollBar* self, intptr_t slot);
bool QScrollBar_QBaseIsSignalConnected(const QScrollBar* self, const QMetaMethod* signal);
void QScrollBar_Delete(QScrollBar* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
