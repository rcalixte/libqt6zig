#pragma once
#ifndef SRC_MULTIMEDIAC_LIBQVIDEOWIDGET_H
#define SRC_MULTIMEDIAC_LIBQVIDEOWIDGET_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

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
typedef struct QResizeEvent QResizeEvent;
typedef struct QShowEvent QShowEvent;
typedef struct QSize QSize;
typedef struct QTabletEvent QTabletEvent;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
typedef struct QVideoSink QVideoSink;
typedef struct QVideoWidget QVideoWidget;
typedef struct QWheelEvent QWheelEvent;
typedef struct QWidget QWidget;
#endif

QVideoWidget* QVideoWidget_new(QWidget* parent);
QVideoWidget* QVideoWidget_new2();
QMetaObject* QVideoWidget_MetaObject(const QVideoWidget* self);
void* QVideoWidget_Metacast(QVideoWidget* self, const char* param1);
int QVideoWidget_Metacall(QVideoWidget* self, int param1, int param2, void** param3);
void QVideoWidget_OnMetacall(QVideoWidget* self, intptr_t slot);
int QVideoWidget_QBaseMetacall(QVideoWidget* self, int param1, int param2, void** param3);
libqt_string QVideoWidget_Tr(const char* s);
QVideoSink* QVideoWidget_VideoSink(const QVideoWidget* self);
int QVideoWidget_AspectRatioMode(const QVideoWidget* self);
QSize* QVideoWidget_SizeHint(const QVideoWidget* self);
void QVideoWidget_OnSizeHint(const QVideoWidget* self, intptr_t slot);
QSize* QVideoWidget_QBaseSizeHint(const QVideoWidget* self);
void QVideoWidget_SetFullScreen(QVideoWidget* self, bool fullScreen);
void QVideoWidget_SetAspectRatioMode(QVideoWidget* self, int mode);
void QVideoWidget_FullScreenChanged(QVideoWidget* self, bool fullScreen);
void QVideoWidget_Connect_FullScreenChanged(QVideoWidget* self, intptr_t slot);
void QVideoWidget_AspectRatioModeChanged(QVideoWidget* self, int mode);
void QVideoWidget_Connect_AspectRatioModeChanged(QVideoWidget* self, intptr_t slot);
bool QVideoWidget_Event(QVideoWidget* self, QEvent* event);
void QVideoWidget_OnEvent(QVideoWidget* self, intptr_t slot);
bool QVideoWidget_QBaseEvent(QVideoWidget* self, QEvent* event);
void QVideoWidget_ShowEvent(QVideoWidget* self, QShowEvent* event);
void QVideoWidget_OnShowEvent(QVideoWidget* self, intptr_t slot);
void QVideoWidget_QBaseShowEvent(QVideoWidget* self, QShowEvent* event);
void QVideoWidget_HideEvent(QVideoWidget* self, QHideEvent* event);
void QVideoWidget_OnHideEvent(QVideoWidget* self, intptr_t slot);
void QVideoWidget_QBaseHideEvent(QVideoWidget* self, QHideEvent* event);
void QVideoWidget_ResizeEvent(QVideoWidget* self, QResizeEvent* event);
void QVideoWidget_OnResizeEvent(QVideoWidget* self, intptr_t slot);
void QVideoWidget_QBaseResizeEvent(QVideoWidget* self, QResizeEvent* event);
void QVideoWidget_MoveEvent(QVideoWidget* self, QMoveEvent* event);
void QVideoWidget_OnMoveEvent(QVideoWidget* self, intptr_t slot);
void QVideoWidget_QBaseMoveEvent(QVideoWidget* self, QMoveEvent* event);
libqt_string QVideoWidget_Tr2(const char* s, const char* c);
libqt_string QVideoWidget_Tr3(const char* s, const char* c, int n);
int QVideoWidget_DevType(const QVideoWidget* self);
void QVideoWidget_OnDevType(const QVideoWidget* self, intptr_t slot);
int QVideoWidget_QBaseDevType(const QVideoWidget* self);
void QVideoWidget_SetVisible(QVideoWidget* self, bool visible);
void QVideoWidget_OnSetVisible(QVideoWidget* self, intptr_t slot);
void QVideoWidget_QBaseSetVisible(QVideoWidget* self, bool visible);
QSize* QVideoWidget_MinimumSizeHint(const QVideoWidget* self);
void QVideoWidget_OnMinimumSizeHint(const QVideoWidget* self, intptr_t slot);
QSize* QVideoWidget_QBaseMinimumSizeHint(const QVideoWidget* self);
int QVideoWidget_HeightForWidth(const QVideoWidget* self, int param1);
void QVideoWidget_OnHeightForWidth(const QVideoWidget* self, intptr_t slot);
int QVideoWidget_QBaseHeightForWidth(const QVideoWidget* self, int param1);
bool QVideoWidget_HasHeightForWidth(const QVideoWidget* self);
void QVideoWidget_OnHasHeightForWidth(const QVideoWidget* self, intptr_t slot);
bool QVideoWidget_QBaseHasHeightForWidth(const QVideoWidget* self);
QPaintEngine* QVideoWidget_PaintEngine(const QVideoWidget* self);
void QVideoWidget_OnPaintEngine(const QVideoWidget* self, intptr_t slot);
QPaintEngine* QVideoWidget_QBasePaintEngine(const QVideoWidget* self);
void QVideoWidget_MousePressEvent(QVideoWidget* self, QMouseEvent* event);
void QVideoWidget_OnMousePressEvent(QVideoWidget* self, intptr_t slot);
void QVideoWidget_QBaseMousePressEvent(QVideoWidget* self, QMouseEvent* event);
void QVideoWidget_MouseReleaseEvent(QVideoWidget* self, QMouseEvent* event);
void QVideoWidget_OnMouseReleaseEvent(QVideoWidget* self, intptr_t slot);
void QVideoWidget_QBaseMouseReleaseEvent(QVideoWidget* self, QMouseEvent* event);
void QVideoWidget_MouseDoubleClickEvent(QVideoWidget* self, QMouseEvent* event);
void QVideoWidget_OnMouseDoubleClickEvent(QVideoWidget* self, intptr_t slot);
void QVideoWidget_QBaseMouseDoubleClickEvent(QVideoWidget* self, QMouseEvent* event);
void QVideoWidget_MouseMoveEvent(QVideoWidget* self, QMouseEvent* event);
void QVideoWidget_OnMouseMoveEvent(QVideoWidget* self, intptr_t slot);
void QVideoWidget_QBaseMouseMoveEvent(QVideoWidget* self, QMouseEvent* event);
void QVideoWidget_WheelEvent(QVideoWidget* self, QWheelEvent* event);
void QVideoWidget_OnWheelEvent(QVideoWidget* self, intptr_t slot);
void QVideoWidget_QBaseWheelEvent(QVideoWidget* self, QWheelEvent* event);
void QVideoWidget_KeyPressEvent(QVideoWidget* self, QKeyEvent* event);
void QVideoWidget_OnKeyPressEvent(QVideoWidget* self, intptr_t slot);
void QVideoWidget_QBaseKeyPressEvent(QVideoWidget* self, QKeyEvent* event);
void QVideoWidget_KeyReleaseEvent(QVideoWidget* self, QKeyEvent* event);
void QVideoWidget_OnKeyReleaseEvent(QVideoWidget* self, intptr_t slot);
void QVideoWidget_QBaseKeyReleaseEvent(QVideoWidget* self, QKeyEvent* event);
void QVideoWidget_FocusInEvent(QVideoWidget* self, QFocusEvent* event);
void QVideoWidget_OnFocusInEvent(QVideoWidget* self, intptr_t slot);
void QVideoWidget_QBaseFocusInEvent(QVideoWidget* self, QFocusEvent* event);
void QVideoWidget_FocusOutEvent(QVideoWidget* self, QFocusEvent* event);
void QVideoWidget_OnFocusOutEvent(QVideoWidget* self, intptr_t slot);
void QVideoWidget_QBaseFocusOutEvent(QVideoWidget* self, QFocusEvent* event);
void QVideoWidget_EnterEvent(QVideoWidget* self, QEnterEvent* event);
void QVideoWidget_OnEnterEvent(QVideoWidget* self, intptr_t slot);
void QVideoWidget_QBaseEnterEvent(QVideoWidget* self, QEnterEvent* event);
void QVideoWidget_LeaveEvent(QVideoWidget* self, QEvent* event);
void QVideoWidget_OnLeaveEvent(QVideoWidget* self, intptr_t slot);
void QVideoWidget_QBaseLeaveEvent(QVideoWidget* self, QEvent* event);
void QVideoWidget_PaintEvent(QVideoWidget* self, QPaintEvent* event);
void QVideoWidget_OnPaintEvent(QVideoWidget* self, intptr_t slot);
void QVideoWidget_QBasePaintEvent(QVideoWidget* self, QPaintEvent* event);
void QVideoWidget_CloseEvent(QVideoWidget* self, QCloseEvent* event);
void QVideoWidget_OnCloseEvent(QVideoWidget* self, intptr_t slot);
void QVideoWidget_QBaseCloseEvent(QVideoWidget* self, QCloseEvent* event);
void QVideoWidget_ContextMenuEvent(QVideoWidget* self, QContextMenuEvent* event);
void QVideoWidget_OnContextMenuEvent(QVideoWidget* self, intptr_t slot);
void QVideoWidget_QBaseContextMenuEvent(QVideoWidget* self, QContextMenuEvent* event);
void QVideoWidget_TabletEvent(QVideoWidget* self, QTabletEvent* event);
void QVideoWidget_OnTabletEvent(QVideoWidget* self, intptr_t slot);
void QVideoWidget_QBaseTabletEvent(QVideoWidget* self, QTabletEvent* event);
void QVideoWidget_ActionEvent(QVideoWidget* self, QActionEvent* event);
void QVideoWidget_OnActionEvent(QVideoWidget* self, intptr_t slot);
void QVideoWidget_QBaseActionEvent(QVideoWidget* self, QActionEvent* event);
void QVideoWidget_DragEnterEvent(QVideoWidget* self, QDragEnterEvent* event);
void QVideoWidget_OnDragEnterEvent(QVideoWidget* self, intptr_t slot);
void QVideoWidget_QBaseDragEnterEvent(QVideoWidget* self, QDragEnterEvent* event);
void QVideoWidget_DragMoveEvent(QVideoWidget* self, QDragMoveEvent* event);
void QVideoWidget_OnDragMoveEvent(QVideoWidget* self, intptr_t slot);
void QVideoWidget_QBaseDragMoveEvent(QVideoWidget* self, QDragMoveEvent* event);
void QVideoWidget_DragLeaveEvent(QVideoWidget* self, QDragLeaveEvent* event);
void QVideoWidget_OnDragLeaveEvent(QVideoWidget* self, intptr_t slot);
void QVideoWidget_QBaseDragLeaveEvent(QVideoWidget* self, QDragLeaveEvent* event);
void QVideoWidget_DropEvent(QVideoWidget* self, QDropEvent* event);
void QVideoWidget_OnDropEvent(QVideoWidget* self, intptr_t slot);
void QVideoWidget_QBaseDropEvent(QVideoWidget* self, QDropEvent* event);
bool QVideoWidget_NativeEvent(QVideoWidget* self, const libqt_string eventType, void* message, intptr_t* result);
void QVideoWidget_OnNativeEvent(QVideoWidget* self, intptr_t slot);
bool QVideoWidget_QBaseNativeEvent(QVideoWidget* self, const libqt_string eventType, void* message, intptr_t* result);
void QVideoWidget_ChangeEvent(QVideoWidget* self, QEvent* param1);
void QVideoWidget_OnChangeEvent(QVideoWidget* self, intptr_t slot);
void QVideoWidget_QBaseChangeEvent(QVideoWidget* self, QEvent* param1);
int QVideoWidget_Metric(const QVideoWidget* self, int param1);
void QVideoWidget_OnMetric(const QVideoWidget* self, intptr_t slot);
int QVideoWidget_QBaseMetric(const QVideoWidget* self, int param1);
void QVideoWidget_InitPainter(const QVideoWidget* self, QPainter* painter);
void QVideoWidget_OnInitPainter(const QVideoWidget* self, intptr_t slot);
void QVideoWidget_QBaseInitPainter(const QVideoWidget* self, QPainter* painter);
QPaintDevice* QVideoWidget_Redirected(const QVideoWidget* self, QPoint* offset);
void QVideoWidget_OnRedirected(const QVideoWidget* self, intptr_t slot);
QPaintDevice* QVideoWidget_QBaseRedirected(const QVideoWidget* self, QPoint* offset);
QPainter* QVideoWidget_SharedPainter(const QVideoWidget* self);
void QVideoWidget_OnSharedPainter(const QVideoWidget* self, intptr_t slot);
QPainter* QVideoWidget_QBaseSharedPainter(const QVideoWidget* self);
void QVideoWidget_InputMethodEvent(QVideoWidget* self, QInputMethodEvent* param1);
void QVideoWidget_OnInputMethodEvent(QVideoWidget* self, intptr_t slot);
void QVideoWidget_QBaseInputMethodEvent(QVideoWidget* self, QInputMethodEvent* param1);
QVariant* QVideoWidget_InputMethodQuery(const QVideoWidget* self, int param1);
void QVideoWidget_OnInputMethodQuery(const QVideoWidget* self, intptr_t slot);
QVariant* QVideoWidget_QBaseInputMethodQuery(const QVideoWidget* self, int param1);
bool QVideoWidget_FocusNextPrevChild(QVideoWidget* self, bool next);
void QVideoWidget_OnFocusNextPrevChild(QVideoWidget* self, intptr_t slot);
bool QVideoWidget_QBaseFocusNextPrevChild(QVideoWidget* self, bool next);
bool QVideoWidget_EventFilter(QVideoWidget* self, QObject* watched, QEvent* event);
void QVideoWidget_OnEventFilter(QVideoWidget* self, intptr_t slot);
bool QVideoWidget_QBaseEventFilter(QVideoWidget* self, QObject* watched, QEvent* event);
void QVideoWidget_TimerEvent(QVideoWidget* self, QTimerEvent* event);
void QVideoWidget_OnTimerEvent(QVideoWidget* self, intptr_t slot);
void QVideoWidget_QBaseTimerEvent(QVideoWidget* self, QTimerEvent* event);
void QVideoWidget_ChildEvent(QVideoWidget* self, QChildEvent* event);
void QVideoWidget_OnChildEvent(QVideoWidget* self, intptr_t slot);
void QVideoWidget_QBaseChildEvent(QVideoWidget* self, QChildEvent* event);
void QVideoWidget_CustomEvent(QVideoWidget* self, QEvent* event);
void QVideoWidget_OnCustomEvent(QVideoWidget* self, intptr_t slot);
void QVideoWidget_QBaseCustomEvent(QVideoWidget* self, QEvent* event);
void QVideoWidget_ConnectNotify(QVideoWidget* self, const QMetaMethod* signal);
void QVideoWidget_OnConnectNotify(QVideoWidget* self, intptr_t slot);
void QVideoWidget_QBaseConnectNotify(QVideoWidget* self, const QMetaMethod* signal);
void QVideoWidget_DisconnectNotify(QVideoWidget* self, const QMetaMethod* signal);
void QVideoWidget_OnDisconnectNotify(QVideoWidget* self, intptr_t slot);
void QVideoWidget_QBaseDisconnectNotify(QVideoWidget* self, const QMetaMethod* signal);
void QVideoWidget_UpdateMicroFocus(QVideoWidget* self);
void QVideoWidget_OnUpdateMicroFocus(QVideoWidget* self, intptr_t slot);
void QVideoWidget_QBaseUpdateMicroFocus(QVideoWidget* self);
void QVideoWidget_Create(QVideoWidget* self);
void QVideoWidget_OnCreate(QVideoWidget* self, intptr_t slot);
void QVideoWidget_QBaseCreate(QVideoWidget* self);
void QVideoWidget_Destroy(QVideoWidget* self);
void QVideoWidget_OnDestroy(QVideoWidget* self, intptr_t slot);
void QVideoWidget_QBaseDestroy(QVideoWidget* self);
bool QVideoWidget_FocusNextChild(QVideoWidget* self);
void QVideoWidget_OnFocusNextChild(QVideoWidget* self, intptr_t slot);
bool QVideoWidget_QBaseFocusNextChild(QVideoWidget* self);
bool QVideoWidget_FocusPreviousChild(QVideoWidget* self);
void QVideoWidget_OnFocusPreviousChild(QVideoWidget* self, intptr_t slot);
bool QVideoWidget_QBaseFocusPreviousChild(QVideoWidget* self);
QObject* QVideoWidget_Sender(const QVideoWidget* self);
void QVideoWidget_OnSender(const QVideoWidget* self, intptr_t slot);
QObject* QVideoWidget_QBaseSender(const QVideoWidget* self);
int QVideoWidget_SenderSignalIndex(const QVideoWidget* self);
void QVideoWidget_OnSenderSignalIndex(const QVideoWidget* self, intptr_t slot);
int QVideoWidget_QBaseSenderSignalIndex(const QVideoWidget* self);
int QVideoWidget_Receivers(const QVideoWidget* self, const char* signal);
void QVideoWidget_OnReceivers(const QVideoWidget* self, intptr_t slot);
int QVideoWidget_QBaseReceivers(const QVideoWidget* self, const char* signal);
bool QVideoWidget_IsSignalConnected(const QVideoWidget* self, const QMetaMethod* signal);
void QVideoWidget_OnIsSignalConnected(const QVideoWidget* self, intptr_t slot);
bool QVideoWidget_QBaseIsSignalConnected(const QVideoWidget* self, const QMetaMethod* signal);
double QVideoWidget_GetDecodedMetricF(const QVideoWidget* self, int metricA, int metricB);
void QVideoWidget_OnGetDecodedMetricF(const QVideoWidget* self, intptr_t slot);
double QVideoWidget_QBaseGetDecodedMetricF(const QVideoWidget* self, int metricA, int metricB);
void QVideoWidget_Delete(QVideoWidget* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
