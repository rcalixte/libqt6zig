#pragma once
#ifndef SRCC_LIBQRUBBERBAND_H
#define SRCC_LIBQRUBBERBAND_H

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
typedef struct QRubberBand QRubberBand;
typedef struct QShowEvent QShowEvent;
typedef struct QSize QSize;
typedef struct QStyleOptionRubberBand QStyleOptionRubberBand;
typedef struct QTabletEvent QTabletEvent;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
typedef struct QWheelEvent QWheelEvent;
typedef struct QWidget QWidget;
#endif

QRubberBand* QRubberBand_new(int param1);
QRubberBand* QRubberBand_new2(int param1, QWidget* param2);
QMetaObject* QRubberBand_MetaObject(const QRubberBand* self);
void* QRubberBand_Metacast(QRubberBand* self, const char* param1);
int QRubberBand_Metacall(QRubberBand* self, int param1, int param2, void** param3);
void QRubberBand_OnMetacall(QRubberBand* self, intptr_t slot);
int QRubberBand_QBaseMetacall(QRubberBand* self, int param1, int param2, void** param3);
libqt_string QRubberBand_Tr(const char* s);
int QRubberBand_Shape(const QRubberBand* self);
void QRubberBand_SetGeometry(QRubberBand* self, const QRect* r);
void QRubberBand_SetGeometry2(QRubberBand* self, int x, int y, int w, int h);
void QRubberBand_Move(QRubberBand* self, int x, int y);
void QRubberBand_Move2(QRubberBand* self, const QPoint* p);
void QRubberBand_Resize(QRubberBand* self, int w, int h);
void QRubberBand_Resize2(QRubberBand* self, const QSize* s);
bool QRubberBand_Event(QRubberBand* self, QEvent* e);
void QRubberBand_OnEvent(QRubberBand* self, intptr_t slot);
bool QRubberBand_QBaseEvent(QRubberBand* self, QEvent* e);
void QRubberBand_PaintEvent(QRubberBand* self, QPaintEvent* param1);
void QRubberBand_OnPaintEvent(QRubberBand* self, intptr_t slot);
void QRubberBand_QBasePaintEvent(QRubberBand* self, QPaintEvent* param1);
void QRubberBand_ChangeEvent(QRubberBand* self, QEvent* param1);
void QRubberBand_OnChangeEvent(QRubberBand* self, intptr_t slot);
void QRubberBand_QBaseChangeEvent(QRubberBand* self, QEvent* param1);
void QRubberBand_ShowEvent(QRubberBand* self, QShowEvent* param1);
void QRubberBand_OnShowEvent(QRubberBand* self, intptr_t slot);
void QRubberBand_QBaseShowEvent(QRubberBand* self, QShowEvent* param1);
void QRubberBand_ResizeEvent(QRubberBand* self, QResizeEvent* param1);
void QRubberBand_OnResizeEvent(QRubberBand* self, intptr_t slot);
void QRubberBand_QBaseResizeEvent(QRubberBand* self, QResizeEvent* param1);
void QRubberBand_MoveEvent(QRubberBand* self, QMoveEvent* param1);
void QRubberBand_OnMoveEvent(QRubberBand* self, intptr_t slot);
void QRubberBand_QBaseMoveEvent(QRubberBand* self, QMoveEvent* param1);
void QRubberBand_InitStyleOption(const QRubberBand* self, QStyleOptionRubberBand* option);
void QRubberBand_OnInitStyleOption(const QRubberBand* self, intptr_t slot);
void QRubberBand_QBaseInitStyleOption(const QRubberBand* self, QStyleOptionRubberBand* option);
libqt_string QRubberBand_Tr2(const char* s, const char* c);
libqt_string QRubberBand_Tr3(const char* s, const char* c, int n);
int QRubberBand_DevType(const QRubberBand* self);
void QRubberBand_OnDevType(const QRubberBand* self, intptr_t slot);
int QRubberBand_QBaseDevType(const QRubberBand* self);
void QRubberBand_SetVisible(QRubberBand* self, bool visible);
void QRubberBand_OnSetVisible(QRubberBand* self, intptr_t slot);
void QRubberBand_QBaseSetVisible(QRubberBand* self, bool visible);
QSize* QRubberBand_SizeHint(const QRubberBand* self);
void QRubberBand_OnSizeHint(const QRubberBand* self, intptr_t slot);
QSize* QRubberBand_QBaseSizeHint(const QRubberBand* self);
QSize* QRubberBand_MinimumSizeHint(const QRubberBand* self);
void QRubberBand_OnMinimumSizeHint(const QRubberBand* self, intptr_t slot);
QSize* QRubberBand_QBaseMinimumSizeHint(const QRubberBand* self);
int QRubberBand_HeightForWidth(const QRubberBand* self, int param1);
void QRubberBand_OnHeightForWidth(const QRubberBand* self, intptr_t slot);
int QRubberBand_QBaseHeightForWidth(const QRubberBand* self, int param1);
bool QRubberBand_HasHeightForWidth(const QRubberBand* self);
void QRubberBand_OnHasHeightForWidth(const QRubberBand* self, intptr_t slot);
bool QRubberBand_QBaseHasHeightForWidth(const QRubberBand* self);
QPaintEngine* QRubberBand_PaintEngine(const QRubberBand* self);
void QRubberBand_OnPaintEngine(const QRubberBand* self, intptr_t slot);
QPaintEngine* QRubberBand_QBasePaintEngine(const QRubberBand* self);
void QRubberBand_MousePressEvent(QRubberBand* self, QMouseEvent* event);
void QRubberBand_OnMousePressEvent(QRubberBand* self, intptr_t slot);
void QRubberBand_QBaseMousePressEvent(QRubberBand* self, QMouseEvent* event);
void QRubberBand_MouseReleaseEvent(QRubberBand* self, QMouseEvent* event);
void QRubberBand_OnMouseReleaseEvent(QRubberBand* self, intptr_t slot);
void QRubberBand_QBaseMouseReleaseEvent(QRubberBand* self, QMouseEvent* event);
void QRubberBand_MouseDoubleClickEvent(QRubberBand* self, QMouseEvent* event);
void QRubberBand_OnMouseDoubleClickEvent(QRubberBand* self, intptr_t slot);
void QRubberBand_QBaseMouseDoubleClickEvent(QRubberBand* self, QMouseEvent* event);
void QRubberBand_MouseMoveEvent(QRubberBand* self, QMouseEvent* event);
void QRubberBand_OnMouseMoveEvent(QRubberBand* self, intptr_t slot);
void QRubberBand_QBaseMouseMoveEvent(QRubberBand* self, QMouseEvent* event);
void QRubberBand_WheelEvent(QRubberBand* self, QWheelEvent* event);
void QRubberBand_OnWheelEvent(QRubberBand* self, intptr_t slot);
void QRubberBand_QBaseWheelEvent(QRubberBand* self, QWheelEvent* event);
void QRubberBand_KeyPressEvent(QRubberBand* self, QKeyEvent* event);
void QRubberBand_OnKeyPressEvent(QRubberBand* self, intptr_t slot);
void QRubberBand_QBaseKeyPressEvent(QRubberBand* self, QKeyEvent* event);
void QRubberBand_KeyReleaseEvent(QRubberBand* self, QKeyEvent* event);
void QRubberBand_OnKeyReleaseEvent(QRubberBand* self, intptr_t slot);
void QRubberBand_QBaseKeyReleaseEvent(QRubberBand* self, QKeyEvent* event);
void QRubberBand_FocusInEvent(QRubberBand* self, QFocusEvent* event);
void QRubberBand_OnFocusInEvent(QRubberBand* self, intptr_t slot);
void QRubberBand_QBaseFocusInEvent(QRubberBand* self, QFocusEvent* event);
void QRubberBand_FocusOutEvent(QRubberBand* self, QFocusEvent* event);
void QRubberBand_OnFocusOutEvent(QRubberBand* self, intptr_t slot);
void QRubberBand_QBaseFocusOutEvent(QRubberBand* self, QFocusEvent* event);
void QRubberBand_EnterEvent(QRubberBand* self, QEnterEvent* event);
void QRubberBand_OnEnterEvent(QRubberBand* self, intptr_t slot);
void QRubberBand_QBaseEnterEvent(QRubberBand* self, QEnterEvent* event);
void QRubberBand_LeaveEvent(QRubberBand* self, QEvent* event);
void QRubberBand_OnLeaveEvent(QRubberBand* self, intptr_t slot);
void QRubberBand_QBaseLeaveEvent(QRubberBand* self, QEvent* event);
void QRubberBand_CloseEvent(QRubberBand* self, QCloseEvent* event);
void QRubberBand_OnCloseEvent(QRubberBand* self, intptr_t slot);
void QRubberBand_QBaseCloseEvent(QRubberBand* self, QCloseEvent* event);
void QRubberBand_ContextMenuEvent(QRubberBand* self, QContextMenuEvent* event);
void QRubberBand_OnContextMenuEvent(QRubberBand* self, intptr_t slot);
void QRubberBand_QBaseContextMenuEvent(QRubberBand* self, QContextMenuEvent* event);
void QRubberBand_TabletEvent(QRubberBand* self, QTabletEvent* event);
void QRubberBand_OnTabletEvent(QRubberBand* self, intptr_t slot);
void QRubberBand_QBaseTabletEvent(QRubberBand* self, QTabletEvent* event);
void QRubberBand_ActionEvent(QRubberBand* self, QActionEvent* event);
void QRubberBand_OnActionEvent(QRubberBand* self, intptr_t slot);
void QRubberBand_QBaseActionEvent(QRubberBand* self, QActionEvent* event);
void QRubberBand_DragEnterEvent(QRubberBand* self, QDragEnterEvent* event);
void QRubberBand_OnDragEnterEvent(QRubberBand* self, intptr_t slot);
void QRubberBand_QBaseDragEnterEvent(QRubberBand* self, QDragEnterEvent* event);
void QRubberBand_DragMoveEvent(QRubberBand* self, QDragMoveEvent* event);
void QRubberBand_OnDragMoveEvent(QRubberBand* self, intptr_t slot);
void QRubberBand_QBaseDragMoveEvent(QRubberBand* self, QDragMoveEvent* event);
void QRubberBand_DragLeaveEvent(QRubberBand* self, QDragLeaveEvent* event);
void QRubberBand_OnDragLeaveEvent(QRubberBand* self, intptr_t slot);
void QRubberBand_QBaseDragLeaveEvent(QRubberBand* self, QDragLeaveEvent* event);
void QRubberBand_DropEvent(QRubberBand* self, QDropEvent* event);
void QRubberBand_OnDropEvent(QRubberBand* self, intptr_t slot);
void QRubberBand_QBaseDropEvent(QRubberBand* self, QDropEvent* event);
void QRubberBand_HideEvent(QRubberBand* self, QHideEvent* event);
void QRubberBand_OnHideEvent(QRubberBand* self, intptr_t slot);
void QRubberBand_QBaseHideEvent(QRubberBand* self, QHideEvent* event);
bool QRubberBand_NativeEvent(QRubberBand* self, const libqt_string eventType, void* message, intptr_t* result);
void QRubberBand_OnNativeEvent(QRubberBand* self, intptr_t slot);
bool QRubberBand_QBaseNativeEvent(QRubberBand* self, const libqt_string eventType, void* message, intptr_t* result);
int QRubberBand_Metric(const QRubberBand* self, int param1);
void QRubberBand_OnMetric(const QRubberBand* self, intptr_t slot);
int QRubberBand_QBaseMetric(const QRubberBand* self, int param1);
void QRubberBand_InitPainter(const QRubberBand* self, QPainter* painter);
void QRubberBand_OnInitPainter(const QRubberBand* self, intptr_t slot);
void QRubberBand_QBaseInitPainter(const QRubberBand* self, QPainter* painter);
QPaintDevice* QRubberBand_Redirected(const QRubberBand* self, QPoint* offset);
void QRubberBand_OnRedirected(const QRubberBand* self, intptr_t slot);
QPaintDevice* QRubberBand_QBaseRedirected(const QRubberBand* self, QPoint* offset);
QPainter* QRubberBand_SharedPainter(const QRubberBand* self);
void QRubberBand_OnSharedPainter(const QRubberBand* self, intptr_t slot);
QPainter* QRubberBand_QBaseSharedPainter(const QRubberBand* self);
void QRubberBand_InputMethodEvent(QRubberBand* self, QInputMethodEvent* param1);
void QRubberBand_OnInputMethodEvent(QRubberBand* self, intptr_t slot);
void QRubberBand_QBaseInputMethodEvent(QRubberBand* self, QInputMethodEvent* param1);
QVariant* QRubberBand_InputMethodQuery(const QRubberBand* self, int param1);
void QRubberBand_OnInputMethodQuery(const QRubberBand* self, intptr_t slot);
QVariant* QRubberBand_QBaseInputMethodQuery(const QRubberBand* self, int param1);
bool QRubberBand_FocusNextPrevChild(QRubberBand* self, bool next);
void QRubberBand_OnFocusNextPrevChild(QRubberBand* self, intptr_t slot);
bool QRubberBand_QBaseFocusNextPrevChild(QRubberBand* self, bool next);
bool QRubberBand_EventFilter(QRubberBand* self, QObject* watched, QEvent* event);
void QRubberBand_OnEventFilter(QRubberBand* self, intptr_t slot);
bool QRubberBand_QBaseEventFilter(QRubberBand* self, QObject* watched, QEvent* event);
void QRubberBand_TimerEvent(QRubberBand* self, QTimerEvent* event);
void QRubberBand_OnTimerEvent(QRubberBand* self, intptr_t slot);
void QRubberBand_QBaseTimerEvent(QRubberBand* self, QTimerEvent* event);
void QRubberBand_ChildEvent(QRubberBand* self, QChildEvent* event);
void QRubberBand_OnChildEvent(QRubberBand* self, intptr_t slot);
void QRubberBand_QBaseChildEvent(QRubberBand* self, QChildEvent* event);
void QRubberBand_CustomEvent(QRubberBand* self, QEvent* event);
void QRubberBand_OnCustomEvent(QRubberBand* self, intptr_t slot);
void QRubberBand_QBaseCustomEvent(QRubberBand* self, QEvent* event);
void QRubberBand_ConnectNotify(QRubberBand* self, const QMetaMethod* signal);
void QRubberBand_OnConnectNotify(QRubberBand* self, intptr_t slot);
void QRubberBand_QBaseConnectNotify(QRubberBand* self, const QMetaMethod* signal);
void QRubberBand_DisconnectNotify(QRubberBand* self, const QMetaMethod* signal);
void QRubberBand_OnDisconnectNotify(QRubberBand* self, intptr_t slot);
void QRubberBand_QBaseDisconnectNotify(QRubberBand* self, const QMetaMethod* signal);
void QRubberBand_UpdateMicroFocus(QRubberBand* self);
void QRubberBand_OnUpdateMicroFocus(QRubberBand* self, intptr_t slot);
void QRubberBand_QBaseUpdateMicroFocus(QRubberBand* self);
void QRubberBand_Create(QRubberBand* self);
void QRubberBand_OnCreate(QRubberBand* self, intptr_t slot);
void QRubberBand_QBaseCreate(QRubberBand* self);
void QRubberBand_Destroy(QRubberBand* self);
void QRubberBand_OnDestroy(QRubberBand* self, intptr_t slot);
void QRubberBand_QBaseDestroy(QRubberBand* self);
bool QRubberBand_FocusNextChild(QRubberBand* self);
void QRubberBand_OnFocusNextChild(QRubberBand* self, intptr_t slot);
bool QRubberBand_QBaseFocusNextChild(QRubberBand* self);
bool QRubberBand_FocusPreviousChild(QRubberBand* self);
void QRubberBand_OnFocusPreviousChild(QRubberBand* self, intptr_t slot);
bool QRubberBand_QBaseFocusPreviousChild(QRubberBand* self);
QObject* QRubberBand_Sender(const QRubberBand* self);
void QRubberBand_OnSender(const QRubberBand* self, intptr_t slot);
QObject* QRubberBand_QBaseSender(const QRubberBand* self);
int QRubberBand_SenderSignalIndex(const QRubberBand* self);
void QRubberBand_OnSenderSignalIndex(const QRubberBand* self, intptr_t slot);
int QRubberBand_QBaseSenderSignalIndex(const QRubberBand* self);
int QRubberBand_Receivers(const QRubberBand* self, const char* signal);
void QRubberBand_OnReceivers(const QRubberBand* self, intptr_t slot);
int QRubberBand_QBaseReceivers(const QRubberBand* self, const char* signal);
bool QRubberBand_IsSignalConnected(const QRubberBand* self, const QMetaMethod* signal);
void QRubberBand_OnIsSignalConnected(const QRubberBand* self, intptr_t slot);
bool QRubberBand_QBaseIsSignalConnected(const QRubberBand* self, const QMetaMethod* signal);
double QRubberBand_GetDecodedMetricF(const QRubberBand* self, int metricA, int metricB);
void QRubberBand_OnGetDecodedMetricF(const QRubberBand* self, intptr_t slot);
double QRubberBand_QBaseGetDecodedMetricF(const QRubberBand* self, int metricA, int metricB);
void QRubberBand_Delete(QRubberBand* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
