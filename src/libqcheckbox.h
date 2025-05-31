#pragma once
#ifndef SRCC_LIBQCHECKBOX_H
#define SRCC_LIBQCHECKBOX_H

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
typedef struct QAbstractButton QAbstractButton;
typedef struct QActionEvent QActionEvent;
typedef struct QCheckBox QCheckBox;
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
typedef struct QShowEvent QShowEvent;
typedef struct QSize QSize;
typedef struct QStyleOptionButton QStyleOptionButton;
typedef struct QTabletEvent QTabletEvent;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
typedef struct QWheelEvent QWheelEvent;
typedef struct QWidget QWidget;
#endif

QCheckBox* QCheckBox_new(QWidget* parent);
QCheckBox* QCheckBox_new2();
QCheckBox* QCheckBox_new3(const libqt_string text);
QCheckBox* QCheckBox_new4(const libqt_string text, QWidget* parent);
QMetaObject* QCheckBox_MetaObject(const QCheckBox* self);
void* QCheckBox_Metacast(QCheckBox* self, const char* param1);
int QCheckBox_Metacall(QCheckBox* self, int param1, int param2, void** param3);
void QCheckBox_OnMetacall(QCheckBox* self, intptr_t slot);
int QCheckBox_QBaseMetacall(QCheckBox* self, int param1, int param2, void** param3);
libqt_string QCheckBox_Tr(const char* s);
QSize* QCheckBox_SizeHint(const QCheckBox* self);
void QCheckBox_OnSizeHint(const QCheckBox* self, intptr_t slot);
QSize* QCheckBox_QBaseSizeHint(const QCheckBox* self);
QSize* QCheckBox_MinimumSizeHint(const QCheckBox* self);
void QCheckBox_OnMinimumSizeHint(const QCheckBox* self, intptr_t slot);
QSize* QCheckBox_QBaseMinimumSizeHint(const QCheckBox* self);
void QCheckBox_SetTristate(QCheckBox* self);
bool QCheckBox_IsTristate(const QCheckBox* self);
int QCheckBox_CheckState(const QCheckBox* self);
void QCheckBox_SetCheckState(QCheckBox* self, int state);
void QCheckBox_StateChanged(QCheckBox* self, int param1);
void QCheckBox_Connect_StateChanged(QCheckBox* self, intptr_t slot);
bool QCheckBox_Event(QCheckBox* self, QEvent* e);
void QCheckBox_OnEvent(QCheckBox* self, intptr_t slot);
bool QCheckBox_QBaseEvent(QCheckBox* self, QEvent* e);
bool QCheckBox_HitButton(const QCheckBox* self, const QPoint* pos);
void QCheckBox_OnHitButton(const QCheckBox* self, intptr_t slot);
bool QCheckBox_QBaseHitButton(const QCheckBox* self, const QPoint* pos);
void QCheckBox_CheckStateSet(QCheckBox* self);
void QCheckBox_OnCheckStateSet(QCheckBox* self, intptr_t slot);
void QCheckBox_QBaseCheckStateSet(QCheckBox* self);
void QCheckBox_NextCheckState(QCheckBox* self);
void QCheckBox_OnNextCheckState(QCheckBox* self, intptr_t slot);
void QCheckBox_QBaseNextCheckState(QCheckBox* self);
void QCheckBox_PaintEvent(QCheckBox* self, QPaintEvent* param1);
void QCheckBox_OnPaintEvent(QCheckBox* self, intptr_t slot);
void QCheckBox_QBasePaintEvent(QCheckBox* self, QPaintEvent* param1);
void QCheckBox_MouseMoveEvent(QCheckBox* self, QMouseEvent* param1);
void QCheckBox_OnMouseMoveEvent(QCheckBox* self, intptr_t slot);
void QCheckBox_QBaseMouseMoveEvent(QCheckBox* self, QMouseEvent* param1);
void QCheckBox_InitStyleOption(const QCheckBox* self, QStyleOptionButton* option);
void QCheckBox_OnInitStyleOption(const QCheckBox* self, intptr_t slot);
void QCheckBox_QBaseInitStyleOption(const QCheckBox* self, QStyleOptionButton* option);
libqt_string QCheckBox_Tr2(const char* s, const char* c);
libqt_string QCheckBox_Tr3(const char* s, const char* c, int n);
void QCheckBox_SetTristate1(QCheckBox* self, bool y);
void QCheckBox_KeyPressEvent(QCheckBox* self, QKeyEvent* e);
void QCheckBox_OnKeyPressEvent(QCheckBox* self, intptr_t slot);
void QCheckBox_QBaseKeyPressEvent(QCheckBox* self, QKeyEvent* e);
void QCheckBox_KeyReleaseEvent(QCheckBox* self, QKeyEvent* e);
void QCheckBox_OnKeyReleaseEvent(QCheckBox* self, intptr_t slot);
void QCheckBox_QBaseKeyReleaseEvent(QCheckBox* self, QKeyEvent* e);
void QCheckBox_MousePressEvent(QCheckBox* self, QMouseEvent* e);
void QCheckBox_OnMousePressEvent(QCheckBox* self, intptr_t slot);
void QCheckBox_QBaseMousePressEvent(QCheckBox* self, QMouseEvent* e);
void QCheckBox_MouseReleaseEvent(QCheckBox* self, QMouseEvent* e);
void QCheckBox_OnMouseReleaseEvent(QCheckBox* self, intptr_t slot);
void QCheckBox_QBaseMouseReleaseEvent(QCheckBox* self, QMouseEvent* e);
void QCheckBox_FocusInEvent(QCheckBox* self, QFocusEvent* e);
void QCheckBox_OnFocusInEvent(QCheckBox* self, intptr_t slot);
void QCheckBox_QBaseFocusInEvent(QCheckBox* self, QFocusEvent* e);
void QCheckBox_FocusOutEvent(QCheckBox* self, QFocusEvent* e);
void QCheckBox_OnFocusOutEvent(QCheckBox* self, intptr_t slot);
void QCheckBox_QBaseFocusOutEvent(QCheckBox* self, QFocusEvent* e);
void QCheckBox_ChangeEvent(QCheckBox* self, QEvent* e);
void QCheckBox_OnChangeEvent(QCheckBox* self, intptr_t slot);
void QCheckBox_QBaseChangeEvent(QCheckBox* self, QEvent* e);
void QCheckBox_TimerEvent(QCheckBox* self, QTimerEvent* e);
void QCheckBox_OnTimerEvent(QCheckBox* self, intptr_t slot);
void QCheckBox_QBaseTimerEvent(QCheckBox* self, QTimerEvent* e);
int QCheckBox_DevType(const QCheckBox* self);
void QCheckBox_OnDevType(const QCheckBox* self, intptr_t slot);
int QCheckBox_QBaseDevType(const QCheckBox* self);
void QCheckBox_SetVisible(QCheckBox* self, bool visible);
void QCheckBox_OnSetVisible(QCheckBox* self, intptr_t slot);
void QCheckBox_QBaseSetVisible(QCheckBox* self, bool visible);
int QCheckBox_HeightForWidth(const QCheckBox* self, int param1);
void QCheckBox_OnHeightForWidth(const QCheckBox* self, intptr_t slot);
int QCheckBox_QBaseHeightForWidth(const QCheckBox* self, int param1);
bool QCheckBox_HasHeightForWidth(const QCheckBox* self);
void QCheckBox_OnHasHeightForWidth(const QCheckBox* self, intptr_t slot);
bool QCheckBox_QBaseHasHeightForWidth(const QCheckBox* self);
QPaintEngine* QCheckBox_PaintEngine(const QCheckBox* self);
void QCheckBox_OnPaintEngine(const QCheckBox* self, intptr_t slot);
QPaintEngine* QCheckBox_QBasePaintEngine(const QCheckBox* self);
void QCheckBox_MouseDoubleClickEvent(QCheckBox* self, QMouseEvent* event);
void QCheckBox_OnMouseDoubleClickEvent(QCheckBox* self, intptr_t slot);
void QCheckBox_QBaseMouseDoubleClickEvent(QCheckBox* self, QMouseEvent* event);
void QCheckBox_WheelEvent(QCheckBox* self, QWheelEvent* event);
void QCheckBox_OnWheelEvent(QCheckBox* self, intptr_t slot);
void QCheckBox_QBaseWheelEvent(QCheckBox* self, QWheelEvent* event);
void QCheckBox_EnterEvent(QCheckBox* self, QEnterEvent* event);
void QCheckBox_OnEnterEvent(QCheckBox* self, intptr_t slot);
void QCheckBox_QBaseEnterEvent(QCheckBox* self, QEnterEvent* event);
void QCheckBox_LeaveEvent(QCheckBox* self, QEvent* event);
void QCheckBox_OnLeaveEvent(QCheckBox* self, intptr_t slot);
void QCheckBox_QBaseLeaveEvent(QCheckBox* self, QEvent* event);
void QCheckBox_MoveEvent(QCheckBox* self, QMoveEvent* event);
void QCheckBox_OnMoveEvent(QCheckBox* self, intptr_t slot);
void QCheckBox_QBaseMoveEvent(QCheckBox* self, QMoveEvent* event);
void QCheckBox_ResizeEvent(QCheckBox* self, QResizeEvent* event);
void QCheckBox_OnResizeEvent(QCheckBox* self, intptr_t slot);
void QCheckBox_QBaseResizeEvent(QCheckBox* self, QResizeEvent* event);
void QCheckBox_CloseEvent(QCheckBox* self, QCloseEvent* event);
void QCheckBox_OnCloseEvent(QCheckBox* self, intptr_t slot);
void QCheckBox_QBaseCloseEvent(QCheckBox* self, QCloseEvent* event);
void QCheckBox_ContextMenuEvent(QCheckBox* self, QContextMenuEvent* event);
void QCheckBox_OnContextMenuEvent(QCheckBox* self, intptr_t slot);
void QCheckBox_QBaseContextMenuEvent(QCheckBox* self, QContextMenuEvent* event);
void QCheckBox_TabletEvent(QCheckBox* self, QTabletEvent* event);
void QCheckBox_OnTabletEvent(QCheckBox* self, intptr_t slot);
void QCheckBox_QBaseTabletEvent(QCheckBox* self, QTabletEvent* event);
void QCheckBox_ActionEvent(QCheckBox* self, QActionEvent* event);
void QCheckBox_OnActionEvent(QCheckBox* self, intptr_t slot);
void QCheckBox_QBaseActionEvent(QCheckBox* self, QActionEvent* event);
void QCheckBox_DragEnterEvent(QCheckBox* self, QDragEnterEvent* event);
void QCheckBox_OnDragEnterEvent(QCheckBox* self, intptr_t slot);
void QCheckBox_QBaseDragEnterEvent(QCheckBox* self, QDragEnterEvent* event);
void QCheckBox_DragMoveEvent(QCheckBox* self, QDragMoveEvent* event);
void QCheckBox_OnDragMoveEvent(QCheckBox* self, intptr_t slot);
void QCheckBox_QBaseDragMoveEvent(QCheckBox* self, QDragMoveEvent* event);
void QCheckBox_DragLeaveEvent(QCheckBox* self, QDragLeaveEvent* event);
void QCheckBox_OnDragLeaveEvent(QCheckBox* self, intptr_t slot);
void QCheckBox_QBaseDragLeaveEvent(QCheckBox* self, QDragLeaveEvent* event);
void QCheckBox_DropEvent(QCheckBox* self, QDropEvent* event);
void QCheckBox_OnDropEvent(QCheckBox* self, intptr_t slot);
void QCheckBox_QBaseDropEvent(QCheckBox* self, QDropEvent* event);
void QCheckBox_ShowEvent(QCheckBox* self, QShowEvent* event);
void QCheckBox_OnShowEvent(QCheckBox* self, intptr_t slot);
void QCheckBox_QBaseShowEvent(QCheckBox* self, QShowEvent* event);
void QCheckBox_HideEvent(QCheckBox* self, QHideEvent* event);
void QCheckBox_OnHideEvent(QCheckBox* self, intptr_t slot);
void QCheckBox_QBaseHideEvent(QCheckBox* self, QHideEvent* event);
bool QCheckBox_NativeEvent(QCheckBox* self, const libqt_string eventType, void* message, intptr_t* result);
void QCheckBox_OnNativeEvent(QCheckBox* self, intptr_t slot);
bool QCheckBox_QBaseNativeEvent(QCheckBox* self, const libqt_string eventType, void* message, intptr_t* result);
int QCheckBox_Metric(const QCheckBox* self, int param1);
void QCheckBox_OnMetric(const QCheckBox* self, intptr_t slot);
int QCheckBox_QBaseMetric(const QCheckBox* self, int param1);
void QCheckBox_InitPainter(const QCheckBox* self, QPainter* painter);
void QCheckBox_OnInitPainter(const QCheckBox* self, intptr_t slot);
void QCheckBox_QBaseInitPainter(const QCheckBox* self, QPainter* painter);
QPaintDevice* QCheckBox_Redirected(const QCheckBox* self, QPoint* offset);
void QCheckBox_OnRedirected(const QCheckBox* self, intptr_t slot);
QPaintDevice* QCheckBox_QBaseRedirected(const QCheckBox* self, QPoint* offset);
QPainter* QCheckBox_SharedPainter(const QCheckBox* self);
void QCheckBox_OnSharedPainter(const QCheckBox* self, intptr_t slot);
QPainter* QCheckBox_QBaseSharedPainter(const QCheckBox* self);
void QCheckBox_InputMethodEvent(QCheckBox* self, QInputMethodEvent* param1);
void QCheckBox_OnInputMethodEvent(QCheckBox* self, intptr_t slot);
void QCheckBox_QBaseInputMethodEvent(QCheckBox* self, QInputMethodEvent* param1);
QVariant* QCheckBox_InputMethodQuery(const QCheckBox* self, int param1);
void QCheckBox_OnInputMethodQuery(const QCheckBox* self, intptr_t slot);
QVariant* QCheckBox_QBaseInputMethodQuery(const QCheckBox* self, int param1);
bool QCheckBox_FocusNextPrevChild(QCheckBox* self, bool next);
void QCheckBox_OnFocusNextPrevChild(QCheckBox* self, intptr_t slot);
bool QCheckBox_QBaseFocusNextPrevChild(QCheckBox* self, bool next);
bool QCheckBox_EventFilter(QCheckBox* self, QObject* watched, QEvent* event);
void QCheckBox_OnEventFilter(QCheckBox* self, intptr_t slot);
bool QCheckBox_QBaseEventFilter(QCheckBox* self, QObject* watched, QEvent* event);
void QCheckBox_ChildEvent(QCheckBox* self, QChildEvent* event);
void QCheckBox_OnChildEvent(QCheckBox* self, intptr_t slot);
void QCheckBox_QBaseChildEvent(QCheckBox* self, QChildEvent* event);
void QCheckBox_CustomEvent(QCheckBox* self, QEvent* event);
void QCheckBox_OnCustomEvent(QCheckBox* self, intptr_t slot);
void QCheckBox_QBaseCustomEvent(QCheckBox* self, QEvent* event);
void QCheckBox_ConnectNotify(QCheckBox* self, const QMetaMethod* signal);
void QCheckBox_OnConnectNotify(QCheckBox* self, intptr_t slot);
void QCheckBox_QBaseConnectNotify(QCheckBox* self, const QMetaMethod* signal);
void QCheckBox_DisconnectNotify(QCheckBox* self, const QMetaMethod* signal);
void QCheckBox_OnDisconnectNotify(QCheckBox* self, intptr_t slot);
void QCheckBox_QBaseDisconnectNotify(QCheckBox* self, const QMetaMethod* signal);
void QCheckBox_UpdateMicroFocus(QCheckBox* self);
void QCheckBox_OnUpdateMicroFocus(QCheckBox* self, intptr_t slot);
void QCheckBox_QBaseUpdateMicroFocus(QCheckBox* self);
void QCheckBox_Create(QCheckBox* self);
void QCheckBox_OnCreate(QCheckBox* self, intptr_t slot);
void QCheckBox_QBaseCreate(QCheckBox* self);
void QCheckBox_Destroy(QCheckBox* self);
void QCheckBox_OnDestroy(QCheckBox* self, intptr_t slot);
void QCheckBox_QBaseDestroy(QCheckBox* self);
bool QCheckBox_FocusNextChild(QCheckBox* self);
void QCheckBox_OnFocusNextChild(QCheckBox* self, intptr_t slot);
bool QCheckBox_QBaseFocusNextChild(QCheckBox* self);
bool QCheckBox_FocusPreviousChild(QCheckBox* self);
void QCheckBox_OnFocusPreviousChild(QCheckBox* self, intptr_t slot);
bool QCheckBox_QBaseFocusPreviousChild(QCheckBox* self);
QObject* QCheckBox_Sender(const QCheckBox* self);
void QCheckBox_OnSender(const QCheckBox* self, intptr_t slot);
QObject* QCheckBox_QBaseSender(const QCheckBox* self);
int QCheckBox_SenderSignalIndex(const QCheckBox* self);
void QCheckBox_OnSenderSignalIndex(const QCheckBox* self, intptr_t slot);
int QCheckBox_QBaseSenderSignalIndex(const QCheckBox* self);
int QCheckBox_Receivers(const QCheckBox* self, const char* signal);
void QCheckBox_OnReceivers(const QCheckBox* self, intptr_t slot);
int QCheckBox_QBaseReceivers(const QCheckBox* self, const char* signal);
bool QCheckBox_IsSignalConnected(const QCheckBox* self, const QMetaMethod* signal);
void QCheckBox_OnIsSignalConnected(const QCheckBox* self, intptr_t slot);
bool QCheckBox_QBaseIsSignalConnected(const QCheckBox* self, const QMetaMethod* signal);
void QCheckBox_Delete(QCheckBox* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
