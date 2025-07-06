#pragma once
#ifndef SRCC_LIBQRADIOBUTTON_H
#define SRCC_LIBQRADIOBUTTON_H

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
typedef struct QRadioButton QRadioButton;
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

QRadioButton* QRadioButton_new(QWidget* parent);
QRadioButton* QRadioButton_new2();
QRadioButton* QRadioButton_new3(const libqt_string text);
QRadioButton* QRadioButton_new4(const libqt_string text, QWidget* parent);
QMetaObject* QRadioButton_MetaObject(const QRadioButton* self);
void* QRadioButton_Metacast(QRadioButton* self, const char* param1);
int QRadioButton_Metacall(QRadioButton* self, int param1, int param2, void** param3);
void QRadioButton_OnMetacall(QRadioButton* self, intptr_t slot);
int QRadioButton_QBaseMetacall(QRadioButton* self, int param1, int param2, void** param3);
libqt_string QRadioButton_Tr(const char* s);
QSize* QRadioButton_SizeHint(const QRadioButton* self);
void QRadioButton_OnSizeHint(const QRadioButton* self, intptr_t slot);
QSize* QRadioButton_QBaseSizeHint(const QRadioButton* self);
QSize* QRadioButton_MinimumSizeHint(const QRadioButton* self);
void QRadioButton_OnMinimumSizeHint(const QRadioButton* self, intptr_t slot);
QSize* QRadioButton_QBaseMinimumSizeHint(const QRadioButton* self);
bool QRadioButton_Event(QRadioButton* self, QEvent* e);
void QRadioButton_OnEvent(QRadioButton* self, intptr_t slot);
bool QRadioButton_QBaseEvent(QRadioButton* self, QEvent* e);
bool QRadioButton_HitButton(const QRadioButton* self, const QPoint* param1);
void QRadioButton_OnHitButton(const QRadioButton* self, intptr_t slot);
bool QRadioButton_QBaseHitButton(const QRadioButton* self, const QPoint* param1);
void QRadioButton_PaintEvent(QRadioButton* self, QPaintEvent* param1);
void QRadioButton_OnPaintEvent(QRadioButton* self, intptr_t slot);
void QRadioButton_QBasePaintEvent(QRadioButton* self, QPaintEvent* param1);
void QRadioButton_MouseMoveEvent(QRadioButton* self, QMouseEvent* param1);
void QRadioButton_OnMouseMoveEvent(QRadioButton* self, intptr_t slot);
void QRadioButton_QBaseMouseMoveEvent(QRadioButton* self, QMouseEvent* param1);
void QRadioButton_InitStyleOption(const QRadioButton* self, QStyleOptionButton* button);
void QRadioButton_OnInitStyleOption(const QRadioButton* self, intptr_t slot);
void QRadioButton_QBaseInitStyleOption(const QRadioButton* self, QStyleOptionButton* button);
libqt_string QRadioButton_Tr2(const char* s, const char* c);
libqt_string QRadioButton_Tr3(const char* s, const char* c, int n);
void QRadioButton_CheckStateSet(QRadioButton* self);
void QRadioButton_OnCheckStateSet(QRadioButton* self, intptr_t slot);
void QRadioButton_QBaseCheckStateSet(QRadioButton* self);
void QRadioButton_NextCheckState(QRadioButton* self);
void QRadioButton_OnNextCheckState(QRadioButton* self, intptr_t slot);
void QRadioButton_QBaseNextCheckState(QRadioButton* self);
void QRadioButton_KeyPressEvent(QRadioButton* self, QKeyEvent* e);
void QRadioButton_OnKeyPressEvent(QRadioButton* self, intptr_t slot);
void QRadioButton_QBaseKeyPressEvent(QRadioButton* self, QKeyEvent* e);
void QRadioButton_KeyReleaseEvent(QRadioButton* self, QKeyEvent* e);
void QRadioButton_OnKeyReleaseEvent(QRadioButton* self, intptr_t slot);
void QRadioButton_QBaseKeyReleaseEvent(QRadioButton* self, QKeyEvent* e);
void QRadioButton_MousePressEvent(QRadioButton* self, QMouseEvent* e);
void QRadioButton_OnMousePressEvent(QRadioButton* self, intptr_t slot);
void QRadioButton_QBaseMousePressEvent(QRadioButton* self, QMouseEvent* e);
void QRadioButton_MouseReleaseEvent(QRadioButton* self, QMouseEvent* e);
void QRadioButton_OnMouseReleaseEvent(QRadioButton* self, intptr_t slot);
void QRadioButton_QBaseMouseReleaseEvent(QRadioButton* self, QMouseEvent* e);
void QRadioButton_FocusInEvent(QRadioButton* self, QFocusEvent* e);
void QRadioButton_OnFocusInEvent(QRadioButton* self, intptr_t slot);
void QRadioButton_QBaseFocusInEvent(QRadioButton* self, QFocusEvent* e);
void QRadioButton_FocusOutEvent(QRadioButton* self, QFocusEvent* e);
void QRadioButton_OnFocusOutEvent(QRadioButton* self, intptr_t slot);
void QRadioButton_QBaseFocusOutEvent(QRadioButton* self, QFocusEvent* e);
void QRadioButton_ChangeEvent(QRadioButton* self, QEvent* e);
void QRadioButton_OnChangeEvent(QRadioButton* self, intptr_t slot);
void QRadioButton_QBaseChangeEvent(QRadioButton* self, QEvent* e);
void QRadioButton_TimerEvent(QRadioButton* self, QTimerEvent* e);
void QRadioButton_OnTimerEvent(QRadioButton* self, intptr_t slot);
void QRadioButton_QBaseTimerEvent(QRadioButton* self, QTimerEvent* e);
int QRadioButton_DevType(const QRadioButton* self);
void QRadioButton_OnDevType(const QRadioButton* self, intptr_t slot);
int QRadioButton_QBaseDevType(const QRadioButton* self);
void QRadioButton_SetVisible(QRadioButton* self, bool visible);
void QRadioButton_OnSetVisible(QRadioButton* self, intptr_t slot);
void QRadioButton_QBaseSetVisible(QRadioButton* self, bool visible);
int QRadioButton_HeightForWidth(const QRadioButton* self, int param1);
void QRadioButton_OnHeightForWidth(const QRadioButton* self, intptr_t slot);
int QRadioButton_QBaseHeightForWidth(const QRadioButton* self, int param1);
bool QRadioButton_HasHeightForWidth(const QRadioButton* self);
void QRadioButton_OnHasHeightForWidth(const QRadioButton* self, intptr_t slot);
bool QRadioButton_QBaseHasHeightForWidth(const QRadioButton* self);
QPaintEngine* QRadioButton_PaintEngine(const QRadioButton* self);
void QRadioButton_OnPaintEngine(const QRadioButton* self, intptr_t slot);
QPaintEngine* QRadioButton_QBasePaintEngine(const QRadioButton* self);
void QRadioButton_MouseDoubleClickEvent(QRadioButton* self, QMouseEvent* event);
void QRadioButton_OnMouseDoubleClickEvent(QRadioButton* self, intptr_t slot);
void QRadioButton_QBaseMouseDoubleClickEvent(QRadioButton* self, QMouseEvent* event);
void QRadioButton_WheelEvent(QRadioButton* self, QWheelEvent* event);
void QRadioButton_OnWheelEvent(QRadioButton* self, intptr_t slot);
void QRadioButton_QBaseWheelEvent(QRadioButton* self, QWheelEvent* event);
void QRadioButton_EnterEvent(QRadioButton* self, QEnterEvent* event);
void QRadioButton_OnEnterEvent(QRadioButton* self, intptr_t slot);
void QRadioButton_QBaseEnterEvent(QRadioButton* self, QEnterEvent* event);
void QRadioButton_LeaveEvent(QRadioButton* self, QEvent* event);
void QRadioButton_OnLeaveEvent(QRadioButton* self, intptr_t slot);
void QRadioButton_QBaseLeaveEvent(QRadioButton* self, QEvent* event);
void QRadioButton_MoveEvent(QRadioButton* self, QMoveEvent* event);
void QRadioButton_OnMoveEvent(QRadioButton* self, intptr_t slot);
void QRadioButton_QBaseMoveEvent(QRadioButton* self, QMoveEvent* event);
void QRadioButton_ResizeEvent(QRadioButton* self, QResizeEvent* event);
void QRadioButton_OnResizeEvent(QRadioButton* self, intptr_t slot);
void QRadioButton_QBaseResizeEvent(QRadioButton* self, QResizeEvent* event);
void QRadioButton_CloseEvent(QRadioButton* self, QCloseEvent* event);
void QRadioButton_OnCloseEvent(QRadioButton* self, intptr_t slot);
void QRadioButton_QBaseCloseEvent(QRadioButton* self, QCloseEvent* event);
void QRadioButton_ContextMenuEvent(QRadioButton* self, QContextMenuEvent* event);
void QRadioButton_OnContextMenuEvent(QRadioButton* self, intptr_t slot);
void QRadioButton_QBaseContextMenuEvent(QRadioButton* self, QContextMenuEvent* event);
void QRadioButton_TabletEvent(QRadioButton* self, QTabletEvent* event);
void QRadioButton_OnTabletEvent(QRadioButton* self, intptr_t slot);
void QRadioButton_QBaseTabletEvent(QRadioButton* self, QTabletEvent* event);
void QRadioButton_ActionEvent(QRadioButton* self, QActionEvent* event);
void QRadioButton_OnActionEvent(QRadioButton* self, intptr_t slot);
void QRadioButton_QBaseActionEvent(QRadioButton* self, QActionEvent* event);
void QRadioButton_DragEnterEvent(QRadioButton* self, QDragEnterEvent* event);
void QRadioButton_OnDragEnterEvent(QRadioButton* self, intptr_t slot);
void QRadioButton_QBaseDragEnterEvent(QRadioButton* self, QDragEnterEvent* event);
void QRadioButton_DragMoveEvent(QRadioButton* self, QDragMoveEvent* event);
void QRadioButton_OnDragMoveEvent(QRadioButton* self, intptr_t slot);
void QRadioButton_QBaseDragMoveEvent(QRadioButton* self, QDragMoveEvent* event);
void QRadioButton_DragLeaveEvent(QRadioButton* self, QDragLeaveEvent* event);
void QRadioButton_OnDragLeaveEvent(QRadioButton* self, intptr_t slot);
void QRadioButton_QBaseDragLeaveEvent(QRadioButton* self, QDragLeaveEvent* event);
void QRadioButton_DropEvent(QRadioButton* self, QDropEvent* event);
void QRadioButton_OnDropEvent(QRadioButton* self, intptr_t slot);
void QRadioButton_QBaseDropEvent(QRadioButton* self, QDropEvent* event);
void QRadioButton_ShowEvent(QRadioButton* self, QShowEvent* event);
void QRadioButton_OnShowEvent(QRadioButton* self, intptr_t slot);
void QRadioButton_QBaseShowEvent(QRadioButton* self, QShowEvent* event);
void QRadioButton_HideEvent(QRadioButton* self, QHideEvent* event);
void QRadioButton_OnHideEvent(QRadioButton* self, intptr_t slot);
void QRadioButton_QBaseHideEvent(QRadioButton* self, QHideEvent* event);
bool QRadioButton_NativeEvent(QRadioButton* self, const libqt_string eventType, void* message, intptr_t* result);
void QRadioButton_OnNativeEvent(QRadioButton* self, intptr_t slot);
bool QRadioButton_QBaseNativeEvent(QRadioButton* self, const libqt_string eventType, void* message, intptr_t* result);
int QRadioButton_Metric(const QRadioButton* self, int param1);
void QRadioButton_OnMetric(const QRadioButton* self, intptr_t slot);
int QRadioButton_QBaseMetric(const QRadioButton* self, int param1);
void QRadioButton_InitPainter(const QRadioButton* self, QPainter* painter);
void QRadioButton_OnInitPainter(const QRadioButton* self, intptr_t slot);
void QRadioButton_QBaseInitPainter(const QRadioButton* self, QPainter* painter);
QPaintDevice* QRadioButton_Redirected(const QRadioButton* self, QPoint* offset);
void QRadioButton_OnRedirected(const QRadioButton* self, intptr_t slot);
QPaintDevice* QRadioButton_QBaseRedirected(const QRadioButton* self, QPoint* offset);
QPainter* QRadioButton_SharedPainter(const QRadioButton* self);
void QRadioButton_OnSharedPainter(const QRadioButton* self, intptr_t slot);
QPainter* QRadioButton_QBaseSharedPainter(const QRadioButton* self);
void QRadioButton_InputMethodEvent(QRadioButton* self, QInputMethodEvent* param1);
void QRadioButton_OnInputMethodEvent(QRadioButton* self, intptr_t slot);
void QRadioButton_QBaseInputMethodEvent(QRadioButton* self, QInputMethodEvent* param1);
QVariant* QRadioButton_InputMethodQuery(const QRadioButton* self, int param1);
void QRadioButton_OnInputMethodQuery(const QRadioButton* self, intptr_t slot);
QVariant* QRadioButton_QBaseInputMethodQuery(const QRadioButton* self, int param1);
bool QRadioButton_FocusNextPrevChild(QRadioButton* self, bool next);
void QRadioButton_OnFocusNextPrevChild(QRadioButton* self, intptr_t slot);
bool QRadioButton_QBaseFocusNextPrevChild(QRadioButton* self, bool next);
bool QRadioButton_EventFilter(QRadioButton* self, QObject* watched, QEvent* event);
void QRadioButton_OnEventFilter(QRadioButton* self, intptr_t slot);
bool QRadioButton_QBaseEventFilter(QRadioButton* self, QObject* watched, QEvent* event);
void QRadioButton_ChildEvent(QRadioButton* self, QChildEvent* event);
void QRadioButton_OnChildEvent(QRadioButton* self, intptr_t slot);
void QRadioButton_QBaseChildEvent(QRadioButton* self, QChildEvent* event);
void QRadioButton_CustomEvent(QRadioButton* self, QEvent* event);
void QRadioButton_OnCustomEvent(QRadioButton* self, intptr_t slot);
void QRadioButton_QBaseCustomEvent(QRadioButton* self, QEvent* event);
void QRadioButton_ConnectNotify(QRadioButton* self, const QMetaMethod* signal);
void QRadioButton_OnConnectNotify(QRadioButton* self, intptr_t slot);
void QRadioButton_QBaseConnectNotify(QRadioButton* self, const QMetaMethod* signal);
void QRadioButton_DisconnectNotify(QRadioButton* self, const QMetaMethod* signal);
void QRadioButton_OnDisconnectNotify(QRadioButton* self, intptr_t slot);
void QRadioButton_QBaseDisconnectNotify(QRadioButton* self, const QMetaMethod* signal);
void QRadioButton_UpdateMicroFocus(QRadioButton* self);
void QRadioButton_OnUpdateMicroFocus(QRadioButton* self, intptr_t slot);
void QRadioButton_QBaseUpdateMicroFocus(QRadioButton* self);
void QRadioButton_Create(QRadioButton* self);
void QRadioButton_OnCreate(QRadioButton* self, intptr_t slot);
void QRadioButton_QBaseCreate(QRadioButton* self);
void QRadioButton_Destroy(QRadioButton* self);
void QRadioButton_OnDestroy(QRadioButton* self, intptr_t slot);
void QRadioButton_QBaseDestroy(QRadioButton* self);
bool QRadioButton_FocusNextChild(QRadioButton* self);
void QRadioButton_OnFocusNextChild(QRadioButton* self, intptr_t slot);
bool QRadioButton_QBaseFocusNextChild(QRadioButton* self);
bool QRadioButton_FocusPreviousChild(QRadioButton* self);
void QRadioButton_OnFocusPreviousChild(QRadioButton* self, intptr_t slot);
bool QRadioButton_QBaseFocusPreviousChild(QRadioButton* self);
QObject* QRadioButton_Sender(const QRadioButton* self);
void QRadioButton_OnSender(const QRadioButton* self, intptr_t slot);
QObject* QRadioButton_QBaseSender(const QRadioButton* self);
int QRadioButton_SenderSignalIndex(const QRadioButton* self);
void QRadioButton_OnSenderSignalIndex(const QRadioButton* self, intptr_t slot);
int QRadioButton_QBaseSenderSignalIndex(const QRadioButton* self);
int QRadioButton_Receivers(const QRadioButton* self, const char* signal);
void QRadioButton_OnReceivers(const QRadioButton* self, intptr_t slot);
int QRadioButton_QBaseReceivers(const QRadioButton* self, const char* signal);
bool QRadioButton_IsSignalConnected(const QRadioButton* self, const QMetaMethod* signal);
void QRadioButton_OnIsSignalConnected(const QRadioButton* self, intptr_t slot);
bool QRadioButton_QBaseIsSignalConnected(const QRadioButton* self, const QMetaMethod* signal);
double QRadioButton_GetDecodedMetricF(const QRadioButton* self, int metricA, int metricB);
void QRadioButton_OnGetDecodedMetricF(const QRadioButton* self, intptr_t slot);
double QRadioButton_QBaseGetDecodedMetricF(const QRadioButton* self, int metricA, int metricB);
void QRadioButton_Delete(QRadioButton* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
