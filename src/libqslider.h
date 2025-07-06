#pragma once
#ifndef SRCC_LIBQSLIDER_H
#define SRCC_LIBQSLIDER_H

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
typedef struct QShowEvent QShowEvent;
typedef struct QSize QSize;
typedef struct QSlider QSlider;
typedef struct QStyleOptionSlider QStyleOptionSlider;
typedef struct QTabletEvent QTabletEvent;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
typedef struct QWheelEvent QWheelEvent;
typedef struct QWidget QWidget;
#endif

QSlider* QSlider_new(QWidget* parent);
QSlider* QSlider_new2();
QSlider* QSlider_new3(int orientation);
QSlider* QSlider_new4(int orientation, QWidget* parent);
QMetaObject* QSlider_MetaObject(const QSlider* self);
void* QSlider_Metacast(QSlider* self, const char* param1);
int QSlider_Metacall(QSlider* self, int param1, int param2, void** param3);
void QSlider_OnMetacall(QSlider* self, intptr_t slot);
int QSlider_QBaseMetacall(QSlider* self, int param1, int param2, void** param3);
libqt_string QSlider_Tr(const char* s);
QSize* QSlider_SizeHint(const QSlider* self);
void QSlider_OnSizeHint(const QSlider* self, intptr_t slot);
QSize* QSlider_QBaseSizeHint(const QSlider* self);
QSize* QSlider_MinimumSizeHint(const QSlider* self);
void QSlider_OnMinimumSizeHint(const QSlider* self, intptr_t slot);
QSize* QSlider_QBaseMinimumSizeHint(const QSlider* self);
void QSlider_SetTickPosition(QSlider* self, int position);
int QSlider_TickPosition(const QSlider* self);
void QSlider_SetTickInterval(QSlider* self, int ti);
int QSlider_TickInterval(const QSlider* self);
bool QSlider_Event(QSlider* self, QEvent* event);
void QSlider_OnEvent(QSlider* self, intptr_t slot);
bool QSlider_QBaseEvent(QSlider* self, QEvent* event);
void QSlider_PaintEvent(QSlider* self, QPaintEvent* ev);
void QSlider_OnPaintEvent(QSlider* self, intptr_t slot);
void QSlider_QBasePaintEvent(QSlider* self, QPaintEvent* ev);
void QSlider_MousePressEvent(QSlider* self, QMouseEvent* ev);
void QSlider_OnMousePressEvent(QSlider* self, intptr_t slot);
void QSlider_QBaseMousePressEvent(QSlider* self, QMouseEvent* ev);
void QSlider_MouseReleaseEvent(QSlider* self, QMouseEvent* ev);
void QSlider_OnMouseReleaseEvent(QSlider* self, intptr_t slot);
void QSlider_QBaseMouseReleaseEvent(QSlider* self, QMouseEvent* ev);
void QSlider_MouseMoveEvent(QSlider* self, QMouseEvent* ev);
void QSlider_OnMouseMoveEvent(QSlider* self, intptr_t slot);
void QSlider_QBaseMouseMoveEvent(QSlider* self, QMouseEvent* ev);
void QSlider_InitStyleOption(const QSlider* self, QStyleOptionSlider* option);
void QSlider_OnInitStyleOption(const QSlider* self, intptr_t slot);
void QSlider_QBaseInitStyleOption(const QSlider* self, QStyleOptionSlider* option);
libqt_string QSlider_Tr2(const char* s, const char* c);
libqt_string QSlider_Tr3(const char* s, const char* c, int n);
void QSlider_SliderChange(QSlider* self, int change);
void QSlider_OnSliderChange(QSlider* self, intptr_t slot);
void QSlider_QBaseSliderChange(QSlider* self, int change);
void QSlider_KeyPressEvent(QSlider* self, QKeyEvent* ev);
void QSlider_OnKeyPressEvent(QSlider* self, intptr_t slot);
void QSlider_QBaseKeyPressEvent(QSlider* self, QKeyEvent* ev);
void QSlider_TimerEvent(QSlider* self, QTimerEvent* param1);
void QSlider_OnTimerEvent(QSlider* self, intptr_t slot);
void QSlider_QBaseTimerEvent(QSlider* self, QTimerEvent* param1);
void QSlider_WheelEvent(QSlider* self, QWheelEvent* e);
void QSlider_OnWheelEvent(QSlider* self, intptr_t slot);
void QSlider_QBaseWheelEvent(QSlider* self, QWheelEvent* e);
void QSlider_ChangeEvent(QSlider* self, QEvent* e);
void QSlider_OnChangeEvent(QSlider* self, intptr_t slot);
void QSlider_QBaseChangeEvent(QSlider* self, QEvent* e);
int QSlider_DevType(const QSlider* self);
void QSlider_OnDevType(const QSlider* self, intptr_t slot);
int QSlider_QBaseDevType(const QSlider* self);
void QSlider_SetVisible(QSlider* self, bool visible);
void QSlider_OnSetVisible(QSlider* self, intptr_t slot);
void QSlider_QBaseSetVisible(QSlider* self, bool visible);
int QSlider_HeightForWidth(const QSlider* self, int param1);
void QSlider_OnHeightForWidth(const QSlider* self, intptr_t slot);
int QSlider_QBaseHeightForWidth(const QSlider* self, int param1);
bool QSlider_HasHeightForWidth(const QSlider* self);
void QSlider_OnHasHeightForWidth(const QSlider* self, intptr_t slot);
bool QSlider_QBaseHasHeightForWidth(const QSlider* self);
QPaintEngine* QSlider_PaintEngine(const QSlider* self);
void QSlider_OnPaintEngine(const QSlider* self, intptr_t slot);
QPaintEngine* QSlider_QBasePaintEngine(const QSlider* self);
void QSlider_MouseDoubleClickEvent(QSlider* self, QMouseEvent* event);
void QSlider_OnMouseDoubleClickEvent(QSlider* self, intptr_t slot);
void QSlider_QBaseMouseDoubleClickEvent(QSlider* self, QMouseEvent* event);
void QSlider_KeyReleaseEvent(QSlider* self, QKeyEvent* event);
void QSlider_OnKeyReleaseEvent(QSlider* self, intptr_t slot);
void QSlider_QBaseKeyReleaseEvent(QSlider* self, QKeyEvent* event);
void QSlider_FocusInEvent(QSlider* self, QFocusEvent* event);
void QSlider_OnFocusInEvent(QSlider* self, intptr_t slot);
void QSlider_QBaseFocusInEvent(QSlider* self, QFocusEvent* event);
void QSlider_FocusOutEvent(QSlider* self, QFocusEvent* event);
void QSlider_OnFocusOutEvent(QSlider* self, intptr_t slot);
void QSlider_QBaseFocusOutEvent(QSlider* self, QFocusEvent* event);
void QSlider_EnterEvent(QSlider* self, QEnterEvent* event);
void QSlider_OnEnterEvent(QSlider* self, intptr_t slot);
void QSlider_QBaseEnterEvent(QSlider* self, QEnterEvent* event);
void QSlider_LeaveEvent(QSlider* self, QEvent* event);
void QSlider_OnLeaveEvent(QSlider* self, intptr_t slot);
void QSlider_QBaseLeaveEvent(QSlider* self, QEvent* event);
void QSlider_MoveEvent(QSlider* self, QMoveEvent* event);
void QSlider_OnMoveEvent(QSlider* self, intptr_t slot);
void QSlider_QBaseMoveEvent(QSlider* self, QMoveEvent* event);
void QSlider_ResizeEvent(QSlider* self, QResizeEvent* event);
void QSlider_OnResizeEvent(QSlider* self, intptr_t slot);
void QSlider_QBaseResizeEvent(QSlider* self, QResizeEvent* event);
void QSlider_CloseEvent(QSlider* self, QCloseEvent* event);
void QSlider_OnCloseEvent(QSlider* self, intptr_t slot);
void QSlider_QBaseCloseEvent(QSlider* self, QCloseEvent* event);
void QSlider_ContextMenuEvent(QSlider* self, QContextMenuEvent* event);
void QSlider_OnContextMenuEvent(QSlider* self, intptr_t slot);
void QSlider_QBaseContextMenuEvent(QSlider* self, QContextMenuEvent* event);
void QSlider_TabletEvent(QSlider* self, QTabletEvent* event);
void QSlider_OnTabletEvent(QSlider* self, intptr_t slot);
void QSlider_QBaseTabletEvent(QSlider* self, QTabletEvent* event);
void QSlider_ActionEvent(QSlider* self, QActionEvent* event);
void QSlider_OnActionEvent(QSlider* self, intptr_t slot);
void QSlider_QBaseActionEvent(QSlider* self, QActionEvent* event);
void QSlider_DragEnterEvent(QSlider* self, QDragEnterEvent* event);
void QSlider_OnDragEnterEvent(QSlider* self, intptr_t slot);
void QSlider_QBaseDragEnterEvent(QSlider* self, QDragEnterEvent* event);
void QSlider_DragMoveEvent(QSlider* self, QDragMoveEvent* event);
void QSlider_OnDragMoveEvent(QSlider* self, intptr_t slot);
void QSlider_QBaseDragMoveEvent(QSlider* self, QDragMoveEvent* event);
void QSlider_DragLeaveEvent(QSlider* self, QDragLeaveEvent* event);
void QSlider_OnDragLeaveEvent(QSlider* self, intptr_t slot);
void QSlider_QBaseDragLeaveEvent(QSlider* self, QDragLeaveEvent* event);
void QSlider_DropEvent(QSlider* self, QDropEvent* event);
void QSlider_OnDropEvent(QSlider* self, intptr_t slot);
void QSlider_QBaseDropEvent(QSlider* self, QDropEvent* event);
void QSlider_ShowEvent(QSlider* self, QShowEvent* event);
void QSlider_OnShowEvent(QSlider* self, intptr_t slot);
void QSlider_QBaseShowEvent(QSlider* self, QShowEvent* event);
void QSlider_HideEvent(QSlider* self, QHideEvent* event);
void QSlider_OnHideEvent(QSlider* self, intptr_t slot);
void QSlider_QBaseHideEvent(QSlider* self, QHideEvent* event);
bool QSlider_NativeEvent(QSlider* self, const libqt_string eventType, void* message, intptr_t* result);
void QSlider_OnNativeEvent(QSlider* self, intptr_t slot);
bool QSlider_QBaseNativeEvent(QSlider* self, const libqt_string eventType, void* message, intptr_t* result);
int QSlider_Metric(const QSlider* self, int param1);
void QSlider_OnMetric(const QSlider* self, intptr_t slot);
int QSlider_QBaseMetric(const QSlider* self, int param1);
void QSlider_InitPainter(const QSlider* self, QPainter* painter);
void QSlider_OnInitPainter(const QSlider* self, intptr_t slot);
void QSlider_QBaseInitPainter(const QSlider* self, QPainter* painter);
QPaintDevice* QSlider_Redirected(const QSlider* self, QPoint* offset);
void QSlider_OnRedirected(const QSlider* self, intptr_t slot);
QPaintDevice* QSlider_QBaseRedirected(const QSlider* self, QPoint* offset);
QPainter* QSlider_SharedPainter(const QSlider* self);
void QSlider_OnSharedPainter(const QSlider* self, intptr_t slot);
QPainter* QSlider_QBaseSharedPainter(const QSlider* self);
void QSlider_InputMethodEvent(QSlider* self, QInputMethodEvent* param1);
void QSlider_OnInputMethodEvent(QSlider* self, intptr_t slot);
void QSlider_QBaseInputMethodEvent(QSlider* self, QInputMethodEvent* param1);
QVariant* QSlider_InputMethodQuery(const QSlider* self, int param1);
void QSlider_OnInputMethodQuery(const QSlider* self, intptr_t slot);
QVariant* QSlider_QBaseInputMethodQuery(const QSlider* self, int param1);
bool QSlider_FocusNextPrevChild(QSlider* self, bool next);
void QSlider_OnFocusNextPrevChild(QSlider* self, intptr_t slot);
bool QSlider_QBaseFocusNextPrevChild(QSlider* self, bool next);
bool QSlider_EventFilter(QSlider* self, QObject* watched, QEvent* event);
void QSlider_OnEventFilter(QSlider* self, intptr_t slot);
bool QSlider_QBaseEventFilter(QSlider* self, QObject* watched, QEvent* event);
void QSlider_ChildEvent(QSlider* self, QChildEvent* event);
void QSlider_OnChildEvent(QSlider* self, intptr_t slot);
void QSlider_QBaseChildEvent(QSlider* self, QChildEvent* event);
void QSlider_CustomEvent(QSlider* self, QEvent* event);
void QSlider_OnCustomEvent(QSlider* self, intptr_t slot);
void QSlider_QBaseCustomEvent(QSlider* self, QEvent* event);
void QSlider_ConnectNotify(QSlider* self, const QMetaMethod* signal);
void QSlider_OnConnectNotify(QSlider* self, intptr_t slot);
void QSlider_QBaseConnectNotify(QSlider* self, const QMetaMethod* signal);
void QSlider_DisconnectNotify(QSlider* self, const QMetaMethod* signal);
void QSlider_OnDisconnectNotify(QSlider* self, intptr_t slot);
void QSlider_QBaseDisconnectNotify(QSlider* self, const QMetaMethod* signal);
void QSlider_SetRepeatAction(QSlider* self, int action);
void QSlider_OnSetRepeatAction(QSlider* self, intptr_t slot);
void QSlider_QBaseSetRepeatAction(QSlider* self, int action);
int QSlider_RepeatAction(const QSlider* self);
void QSlider_OnRepeatAction(const QSlider* self, intptr_t slot);
int QSlider_QBaseRepeatAction(const QSlider* self);
void QSlider_UpdateMicroFocus(QSlider* self);
void QSlider_OnUpdateMicroFocus(QSlider* self, intptr_t slot);
void QSlider_QBaseUpdateMicroFocus(QSlider* self);
void QSlider_Create(QSlider* self);
void QSlider_OnCreate(QSlider* self, intptr_t slot);
void QSlider_QBaseCreate(QSlider* self);
void QSlider_Destroy(QSlider* self);
void QSlider_OnDestroy(QSlider* self, intptr_t slot);
void QSlider_QBaseDestroy(QSlider* self);
bool QSlider_FocusNextChild(QSlider* self);
void QSlider_OnFocusNextChild(QSlider* self, intptr_t slot);
bool QSlider_QBaseFocusNextChild(QSlider* self);
bool QSlider_FocusPreviousChild(QSlider* self);
void QSlider_OnFocusPreviousChild(QSlider* self, intptr_t slot);
bool QSlider_QBaseFocusPreviousChild(QSlider* self);
QObject* QSlider_Sender(const QSlider* self);
void QSlider_OnSender(const QSlider* self, intptr_t slot);
QObject* QSlider_QBaseSender(const QSlider* self);
int QSlider_SenderSignalIndex(const QSlider* self);
void QSlider_OnSenderSignalIndex(const QSlider* self, intptr_t slot);
int QSlider_QBaseSenderSignalIndex(const QSlider* self);
int QSlider_Receivers(const QSlider* self, const char* signal);
void QSlider_OnReceivers(const QSlider* self, intptr_t slot);
int QSlider_QBaseReceivers(const QSlider* self, const char* signal);
bool QSlider_IsSignalConnected(const QSlider* self, const QMetaMethod* signal);
void QSlider_OnIsSignalConnected(const QSlider* self, intptr_t slot);
bool QSlider_QBaseIsSignalConnected(const QSlider* self, const QMetaMethod* signal);
double QSlider_GetDecodedMetricF(const QSlider* self, int metricA, int metricB);
void QSlider_OnGetDecodedMetricF(const QSlider* self, intptr_t slot);
double QSlider_QBaseGetDecodedMetricF(const QSlider* self, int metricA, int metricB);
void QSlider_Delete(QSlider* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
