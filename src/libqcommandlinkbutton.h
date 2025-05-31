#pragma once
#ifndef SRCC_LIBQCOMMANDLINKBUTTON_H
#define SRCC_LIBQCOMMANDLINKBUTTON_H

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
typedef struct QChildEvent QChildEvent;
typedef struct QCloseEvent QCloseEvent;
typedef struct QCommandLinkButton QCommandLinkButton;
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
typedef struct QPushButton QPushButton;
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

QCommandLinkButton* QCommandLinkButton_new(QWidget* parent);
QCommandLinkButton* QCommandLinkButton_new2();
QCommandLinkButton* QCommandLinkButton_new3(const libqt_string text);
QCommandLinkButton* QCommandLinkButton_new4(const libqt_string text, const libqt_string description);
QCommandLinkButton* QCommandLinkButton_new5(const libqt_string text, QWidget* parent);
QCommandLinkButton* QCommandLinkButton_new6(const libqt_string text, const libqt_string description, QWidget* parent);
QMetaObject* QCommandLinkButton_MetaObject(const QCommandLinkButton* self);
void* QCommandLinkButton_Metacast(QCommandLinkButton* self, const char* param1);
int QCommandLinkButton_Metacall(QCommandLinkButton* self, int param1, int param2, void** param3);
void QCommandLinkButton_OnMetacall(QCommandLinkButton* self, intptr_t slot);
int QCommandLinkButton_QBaseMetacall(QCommandLinkButton* self, int param1, int param2, void** param3);
libqt_string QCommandLinkButton_Tr(const char* s);
libqt_string QCommandLinkButton_Description(const QCommandLinkButton* self);
void QCommandLinkButton_SetDescription(QCommandLinkButton* self, const libqt_string description);
QSize* QCommandLinkButton_SizeHint(const QCommandLinkButton* self);
void QCommandLinkButton_OnSizeHint(const QCommandLinkButton* self, intptr_t slot);
QSize* QCommandLinkButton_QBaseSizeHint(const QCommandLinkButton* self);
int QCommandLinkButton_HeightForWidth(const QCommandLinkButton* self, int param1);
void QCommandLinkButton_OnHeightForWidth(const QCommandLinkButton* self, intptr_t slot);
int QCommandLinkButton_QBaseHeightForWidth(const QCommandLinkButton* self, int param1);
QSize* QCommandLinkButton_MinimumSizeHint(const QCommandLinkButton* self);
void QCommandLinkButton_OnMinimumSizeHint(const QCommandLinkButton* self, intptr_t slot);
QSize* QCommandLinkButton_QBaseMinimumSizeHint(const QCommandLinkButton* self);
void QCommandLinkButton_InitStyleOption(const QCommandLinkButton* self, QStyleOptionButton* option);
void QCommandLinkButton_OnInitStyleOption(const QCommandLinkButton* self, intptr_t slot);
void QCommandLinkButton_QBaseInitStyleOption(const QCommandLinkButton* self, QStyleOptionButton* option);
bool QCommandLinkButton_Event(QCommandLinkButton* self, QEvent* e);
void QCommandLinkButton_OnEvent(QCommandLinkButton* self, intptr_t slot);
bool QCommandLinkButton_QBaseEvent(QCommandLinkButton* self, QEvent* e);
void QCommandLinkButton_PaintEvent(QCommandLinkButton* self, QPaintEvent* param1);
void QCommandLinkButton_OnPaintEvent(QCommandLinkButton* self, intptr_t slot);
void QCommandLinkButton_QBasePaintEvent(QCommandLinkButton* self, QPaintEvent* param1);
libqt_string QCommandLinkButton_Tr2(const char* s, const char* c);
libqt_string QCommandLinkButton_Tr3(const char* s, const char* c, int n);
void QCommandLinkButton_KeyPressEvent(QCommandLinkButton* self, QKeyEvent* param1);
void QCommandLinkButton_OnKeyPressEvent(QCommandLinkButton* self, intptr_t slot);
void QCommandLinkButton_QBaseKeyPressEvent(QCommandLinkButton* self, QKeyEvent* param1);
void QCommandLinkButton_FocusInEvent(QCommandLinkButton* self, QFocusEvent* param1);
void QCommandLinkButton_OnFocusInEvent(QCommandLinkButton* self, intptr_t slot);
void QCommandLinkButton_QBaseFocusInEvent(QCommandLinkButton* self, QFocusEvent* param1);
void QCommandLinkButton_FocusOutEvent(QCommandLinkButton* self, QFocusEvent* param1);
void QCommandLinkButton_OnFocusOutEvent(QCommandLinkButton* self, intptr_t slot);
void QCommandLinkButton_QBaseFocusOutEvent(QCommandLinkButton* self, QFocusEvent* param1);
void QCommandLinkButton_MouseMoveEvent(QCommandLinkButton* self, QMouseEvent* param1);
void QCommandLinkButton_OnMouseMoveEvent(QCommandLinkButton* self, intptr_t slot);
void QCommandLinkButton_QBaseMouseMoveEvent(QCommandLinkButton* self, QMouseEvent* param1);
bool QCommandLinkButton_HitButton(const QCommandLinkButton* self, const QPoint* pos);
void QCommandLinkButton_OnHitButton(const QCommandLinkButton* self, intptr_t slot);
bool QCommandLinkButton_QBaseHitButton(const QCommandLinkButton* self, const QPoint* pos);
void QCommandLinkButton_CheckStateSet(QCommandLinkButton* self);
void QCommandLinkButton_OnCheckStateSet(QCommandLinkButton* self, intptr_t slot);
void QCommandLinkButton_QBaseCheckStateSet(QCommandLinkButton* self);
void QCommandLinkButton_NextCheckState(QCommandLinkButton* self);
void QCommandLinkButton_OnNextCheckState(QCommandLinkButton* self, intptr_t slot);
void QCommandLinkButton_QBaseNextCheckState(QCommandLinkButton* self);
void QCommandLinkButton_KeyReleaseEvent(QCommandLinkButton* self, QKeyEvent* e);
void QCommandLinkButton_OnKeyReleaseEvent(QCommandLinkButton* self, intptr_t slot);
void QCommandLinkButton_QBaseKeyReleaseEvent(QCommandLinkButton* self, QKeyEvent* e);
void QCommandLinkButton_MousePressEvent(QCommandLinkButton* self, QMouseEvent* e);
void QCommandLinkButton_OnMousePressEvent(QCommandLinkButton* self, intptr_t slot);
void QCommandLinkButton_QBaseMousePressEvent(QCommandLinkButton* self, QMouseEvent* e);
void QCommandLinkButton_MouseReleaseEvent(QCommandLinkButton* self, QMouseEvent* e);
void QCommandLinkButton_OnMouseReleaseEvent(QCommandLinkButton* self, intptr_t slot);
void QCommandLinkButton_QBaseMouseReleaseEvent(QCommandLinkButton* self, QMouseEvent* e);
void QCommandLinkButton_ChangeEvent(QCommandLinkButton* self, QEvent* e);
void QCommandLinkButton_OnChangeEvent(QCommandLinkButton* self, intptr_t slot);
void QCommandLinkButton_QBaseChangeEvent(QCommandLinkButton* self, QEvent* e);
void QCommandLinkButton_TimerEvent(QCommandLinkButton* self, QTimerEvent* e);
void QCommandLinkButton_OnTimerEvent(QCommandLinkButton* self, intptr_t slot);
void QCommandLinkButton_QBaseTimerEvent(QCommandLinkButton* self, QTimerEvent* e);
int QCommandLinkButton_DevType(const QCommandLinkButton* self);
void QCommandLinkButton_OnDevType(const QCommandLinkButton* self, intptr_t slot);
int QCommandLinkButton_QBaseDevType(const QCommandLinkButton* self);
void QCommandLinkButton_SetVisible(QCommandLinkButton* self, bool visible);
void QCommandLinkButton_OnSetVisible(QCommandLinkButton* self, intptr_t slot);
void QCommandLinkButton_QBaseSetVisible(QCommandLinkButton* self, bool visible);
bool QCommandLinkButton_HasHeightForWidth(const QCommandLinkButton* self);
void QCommandLinkButton_OnHasHeightForWidth(const QCommandLinkButton* self, intptr_t slot);
bool QCommandLinkButton_QBaseHasHeightForWidth(const QCommandLinkButton* self);
QPaintEngine* QCommandLinkButton_PaintEngine(const QCommandLinkButton* self);
void QCommandLinkButton_OnPaintEngine(const QCommandLinkButton* self, intptr_t slot);
QPaintEngine* QCommandLinkButton_QBasePaintEngine(const QCommandLinkButton* self);
void QCommandLinkButton_MouseDoubleClickEvent(QCommandLinkButton* self, QMouseEvent* event);
void QCommandLinkButton_OnMouseDoubleClickEvent(QCommandLinkButton* self, intptr_t slot);
void QCommandLinkButton_QBaseMouseDoubleClickEvent(QCommandLinkButton* self, QMouseEvent* event);
void QCommandLinkButton_WheelEvent(QCommandLinkButton* self, QWheelEvent* event);
void QCommandLinkButton_OnWheelEvent(QCommandLinkButton* self, intptr_t slot);
void QCommandLinkButton_QBaseWheelEvent(QCommandLinkButton* self, QWheelEvent* event);
void QCommandLinkButton_EnterEvent(QCommandLinkButton* self, QEnterEvent* event);
void QCommandLinkButton_OnEnterEvent(QCommandLinkButton* self, intptr_t slot);
void QCommandLinkButton_QBaseEnterEvent(QCommandLinkButton* self, QEnterEvent* event);
void QCommandLinkButton_LeaveEvent(QCommandLinkButton* self, QEvent* event);
void QCommandLinkButton_OnLeaveEvent(QCommandLinkButton* self, intptr_t slot);
void QCommandLinkButton_QBaseLeaveEvent(QCommandLinkButton* self, QEvent* event);
void QCommandLinkButton_MoveEvent(QCommandLinkButton* self, QMoveEvent* event);
void QCommandLinkButton_OnMoveEvent(QCommandLinkButton* self, intptr_t slot);
void QCommandLinkButton_QBaseMoveEvent(QCommandLinkButton* self, QMoveEvent* event);
void QCommandLinkButton_ResizeEvent(QCommandLinkButton* self, QResizeEvent* event);
void QCommandLinkButton_OnResizeEvent(QCommandLinkButton* self, intptr_t slot);
void QCommandLinkButton_QBaseResizeEvent(QCommandLinkButton* self, QResizeEvent* event);
void QCommandLinkButton_CloseEvent(QCommandLinkButton* self, QCloseEvent* event);
void QCommandLinkButton_OnCloseEvent(QCommandLinkButton* self, intptr_t slot);
void QCommandLinkButton_QBaseCloseEvent(QCommandLinkButton* self, QCloseEvent* event);
void QCommandLinkButton_ContextMenuEvent(QCommandLinkButton* self, QContextMenuEvent* event);
void QCommandLinkButton_OnContextMenuEvent(QCommandLinkButton* self, intptr_t slot);
void QCommandLinkButton_QBaseContextMenuEvent(QCommandLinkButton* self, QContextMenuEvent* event);
void QCommandLinkButton_TabletEvent(QCommandLinkButton* self, QTabletEvent* event);
void QCommandLinkButton_OnTabletEvent(QCommandLinkButton* self, intptr_t slot);
void QCommandLinkButton_QBaseTabletEvent(QCommandLinkButton* self, QTabletEvent* event);
void QCommandLinkButton_ActionEvent(QCommandLinkButton* self, QActionEvent* event);
void QCommandLinkButton_OnActionEvent(QCommandLinkButton* self, intptr_t slot);
void QCommandLinkButton_QBaseActionEvent(QCommandLinkButton* self, QActionEvent* event);
void QCommandLinkButton_DragEnterEvent(QCommandLinkButton* self, QDragEnterEvent* event);
void QCommandLinkButton_OnDragEnterEvent(QCommandLinkButton* self, intptr_t slot);
void QCommandLinkButton_QBaseDragEnterEvent(QCommandLinkButton* self, QDragEnterEvent* event);
void QCommandLinkButton_DragMoveEvent(QCommandLinkButton* self, QDragMoveEvent* event);
void QCommandLinkButton_OnDragMoveEvent(QCommandLinkButton* self, intptr_t slot);
void QCommandLinkButton_QBaseDragMoveEvent(QCommandLinkButton* self, QDragMoveEvent* event);
void QCommandLinkButton_DragLeaveEvent(QCommandLinkButton* self, QDragLeaveEvent* event);
void QCommandLinkButton_OnDragLeaveEvent(QCommandLinkButton* self, intptr_t slot);
void QCommandLinkButton_QBaseDragLeaveEvent(QCommandLinkButton* self, QDragLeaveEvent* event);
void QCommandLinkButton_DropEvent(QCommandLinkButton* self, QDropEvent* event);
void QCommandLinkButton_OnDropEvent(QCommandLinkButton* self, intptr_t slot);
void QCommandLinkButton_QBaseDropEvent(QCommandLinkButton* self, QDropEvent* event);
void QCommandLinkButton_ShowEvent(QCommandLinkButton* self, QShowEvent* event);
void QCommandLinkButton_OnShowEvent(QCommandLinkButton* self, intptr_t slot);
void QCommandLinkButton_QBaseShowEvent(QCommandLinkButton* self, QShowEvent* event);
void QCommandLinkButton_HideEvent(QCommandLinkButton* self, QHideEvent* event);
void QCommandLinkButton_OnHideEvent(QCommandLinkButton* self, intptr_t slot);
void QCommandLinkButton_QBaseHideEvent(QCommandLinkButton* self, QHideEvent* event);
bool QCommandLinkButton_NativeEvent(QCommandLinkButton* self, const libqt_string eventType, void* message, intptr_t* result);
void QCommandLinkButton_OnNativeEvent(QCommandLinkButton* self, intptr_t slot);
bool QCommandLinkButton_QBaseNativeEvent(QCommandLinkButton* self, const libqt_string eventType, void* message, intptr_t* result);
int QCommandLinkButton_Metric(const QCommandLinkButton* self, int param1);
void QCommandLinkButton_OnMetric(const QCommandLinkButton* self, intptr_t slot);
int QCommandLinkButton_QBaseMetric(const QCommandLinkButton* self, int param1);
void QCommandLinkButton_InitPainter(const QCommandLinkButton* self, QPainter* painter);
void QCommandLinkButton_OnInitPainter(const QCommandLinkButton* self, intptr_t slot);
void QCommandLinkButton_QBaseInitPainter(const QCommandLinkButton* self, QPainter* painter);
QPaintDevice* QCommandLinkButton_Redirected(const QCommandLinkButton* self, QPoint* offset);
void QCommandLinkButton_OnRedirected(const QCommandLinkButton* self, intptr_t slot);
QPaintDevice* QCommandLinkButton_QBaseRedirected(const QCommandLinkButton* self, QPoint* offset);
QPainter* QCommandLinkButton_SharedPainter(const QCommandLinkButton* self);
void QCommandLinkButton_OnSharedPainter(const QCommandLinkButton* self, intptr_t slot);
QPainter* QCommandLinkButton_QBaseSharedPainter(const QCommandLinkButton* self);
void QCommandLinkButton_InputMethodEvent(QCommandLinkButton* self, QInputMethodEvent* param1);
void QCommandLinkButton_OnInputMethodEvent(QCommandLinkButton* self, intptr_t slot);
void QCommandLinkButton_QBaseInputMethodEvent(QCommandLinkButton* self, QInputMethodEvent* param1);
QVariant* QCommandLinkButton_InputMethodQuery(const QCommandLinkButton* self, int param1);
void QCommandLinkButton_OnInputMethodQuery(const QCommandLinkButton* self, intptr_t slot);
QVariant* QCommandLinkButton_QBaseInputMethodQuery(const QCommandLinkButton* self, int param1);
bool QCommandLinkButton_FocusNextPrevChild(QCommandLinkButton* self, bool next);
void QCommandLinkButton_OnFocusNextPrevChild(QCommandLinkButton* self, intptr_t slot);
bool QCommandLinkButton_QBaseFocusNextPrevChild(QCommandLinkButton* self, bool next);
bool QCommandLinkButton_EventFilter(QCommandLinkButton* self, QObject* watched, QEvent* event);
void QCommandLinkButton_OnEventFilter(QCommandLinkButton* self, intptr_t slot);
bool QCommandLinkButton_QBaseEventFilter(QCommandLinkButton* self, QObject* watched, QEvent* event);
void QCommandLinkButton_ChildEvent(QCommandLinkButton* self, QChildEvent* event);
void QCommandLinkButton_OnChildEvent(QCommandLinkButton* self, intptr_t slot);
void QCommandLinkButton_QBaseChildEvent(QCommandLinkButton* self, QChildEvent* event);
void QCommandLinkButton_CustomEvent(QCommandLinkButton* self, QEvent* event);
void QCommandLinkButton_OnCustomEvent(QCommandLinkButton* self, intptr_t slot);
void QCommandLinkButton_QBaseCustomEvent(QCommandLinkButton* self, QEvent* event);
void QCommandLinkButton_ConnectNotify(QCommandLinkButton* self, const QMetaMethod* signal);
void QCommandLinkButton_OnConnectNotify(QCommandLinkButton* self, intptr_t slot);
void QCommandLinkButton_QBaseConnectNotify(QCommandLinkButton* self, const QMetaMethod* signal);
void QCommandLinkButton_DisconnectNotify(QCommandLinkButton* self, const QMetaMethod* signal);
void QCommandLinkButton_OnDisconnectNotify(QCommandLinkButton* self, intptr_t slot);
void QCommandLinkButton_QBaseDisconnectNotify(QCommandLinkButton* self, const QMetaMethod* signal);
void QCommandLinkButton_UpdateMicroFocus(QCommandLinkButton* self);
void QCommandLinkButton_OnUpdateMicroFocus(QCommandLinkButton* self, intptr_t slot);
void QCommandLinkButton_QBaseUpdateMicroFocus(QCommandLinkButton* self);
void QCommandLinkButton_Create(QCommandLinkButton* self);
void QCommandLinkButton_OnCreate(QCommandLinkButton* self, intptr_t slot);
void QCommandLinkButton_QBaseCreate(QCommandLinkButton* self);
void QCommandLinkButton_Destroy(QCommandLinkButton* self);
void QCommandLinkButton_OnDestroy(QCommandLinkButton* self, intptr_t slot);
void QCommandLinkButton_QBaseDestroy(QCommandLinkButton* self);
bool QCommandLinkButton_FocusNextChild(QCommandLinkButton* self);
void QCommandLinkButton_OnFocusNextChild(QCommandLinkButton* self, intptr_t slot);
bool QCommandLinkButton_QBaseFocusNextChild(QCommandLinkButton* self);
bool QCommandLinkButton_FocusPreviousChild(QCommandLinkButton* self);
void QCommandLinkButton_OnFocusPreviousChild(QCommandLinkButton* self, intptr_t slot);
bool QCommandLinkButton_QBaseFocusPreviousChild(QCommandLinkButton* self);
QObject* QCommandLinkButton_Sender(const QCommandLinkButton* self);
void QCommandLinkButton_OnSender(const QCommandLinkButton* self, intptr_t slot);
QObject* QCommandLinkButton_QBaseSender(const QCommandLinkButton* self);
int QCommandLinkButton_SenderSignalIndex(const QCommandLinkButton* self);
void QCommandLinkButton_OnSenderSignalIndex(const QCommandLinkButton* self, intptr_t slot);
int QCommandLinkButton_QBaseSenderSignalIndex(const QCommandLinkButton* self);
int QCommandLinkButton_Receivers(const QCommandLinkButton* self, const char* signal);
void QCommandLinkButton_OnReceivers(const QCommandLinkButton* self, intptr_t slot);
int QCommandLinkButton_QBaseReceivers(const QCommandLinkButton* self, const char* signal);
bool QCommandLinkButton_IsSignalConnected(const QCommandLinkButton* self, const QMetaMethod* signal);
void QCommandLinkButton_OnIsSignalConnected(const QCommandLinkButton* self, intptr_t slot);
bool QCommandLinkButton_QBaseIsSignalConnected(const QCommandLinkButton* self, const QMetaMethod* signal);
void QCommandLinkButton_Delete(QCommandLinkButton* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
