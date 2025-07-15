#pragma once
#ifndef SRC_SVGC_LIBQSVGWIDGET_H
#define SRC_SVGC_LIBQSVGWIDGET_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

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
typedef struct QSvgRenderer QSvgRenderer;
typedef struct QSvgWidget QSvgWidget;
typedef struct QTabletEvent QTabletEvent;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
typedef struct QWheelEvent QWheelEvent;
typedef struct QWidget QWidget;
#endif

QSvgWidget* QSvgWidget_new(QWidget* parent);
QSvgWidget* QSvgWidget_new2();
QSvgWidget* QSvgWidget_new3(const libqt_string file);
QSvgWidget* QSvgWidget_new4(const libqt_string file, QWidget* parent);
QMetaObject* QSvgWidget_MetaObject(const QSvgWidget* self);
void* QSvgWidget_Metacast(QSvgWidget* self, const char* param1);
int QSvgWidget_Metacall(QSvgWidget* self, int param1, int param2, void** param3);
void QSvgWidget_OnMetacall(QSvgWidget* self, intptr_t slot);
int QSvgWidget_QBaseMetacall(QSvgWidget* self, int param1, int param2, void** param3);
libqt_string QSvgWidget_Tr(const char* s);
QSvgRenderer* QSvgWidget_Renderer(const QSvgWidget* self);
QSize* QSvgWidget_SizeHint(const QSvgWidget* self);
void QSvgWidget_OnSizeHint(const QSvgWidget* self, intptr_t slot);
QSize* QSvgWidget_QBaseSizeHint(const QSvgWidget* self);
int QSvgWidget_Options(const QSvgWidget* self);
void QSvgWidget_SetOptions(QSvgWidget* self, int options);
void QSvgWidget_Load(QSvgWidget* self, const libqt_string file);
void QSvgWidget_Load2(QSvgWidget* self, const libqt_string contents);
void QSvgWidget_PaintEvent(QSvgWidget* self, QPaintEvent* event);
void QSvgWidget_OnPaintEvent(QSvgWidget* self, intptr_t slot);
void QSvgWidget_QBasePaintEvent(QSvgWidget* self, QPaintEvent* event);
libqt_string QSvgWidget_Tr2(const char* s, const char* c);
libqt_string QSvgWidget_Tr3(const char* s, const char* c, int n);
int QSvgWidget_DevType(const QSvgWidget* self);
void QSvgWidget_OnDevType(const QSvgWidget* self, intptr_t slot);
int QSvgWidget_QBaseDevType(const QSvgWidget* self);
void QSvgWidget_SetVisible(QSvgWidget* self, bool visible);
void QSvgWidget_OnSetVisible(QSvgWidget* self, intptr_t slot);
void QSvgWidget_QBaseSetVisible(QSvgWidget* self, bool visible);
QSize* QSvgWidget_MinimumSizeHint(const QSvgWidget* self);
void QSvgWidget_OnMinimumSizeHint(const QSvgWidget* self, intptr_t slot);
QSize* QSvgWidget_QBaseMinimumSizeHint(const QSvgWidget* self);
int QSvgWidget_HeightForWidth(const QSvgWidget* self, int param1);
void QSvgWidget_OnHeightForWidth(const QSvgWidget* self, intptr_t slot);
int QSvgWidget_QBaseHeightForWidth(const QSvgWidget* self, int param1);
bool QSvgWidget_HasHeightForWidth(const QSvgWidget* self);
void QSvgWidget_OnHasHeightForWidth(const QSvgWidget* self, intptr_t slot);
bool QSvgWidget_QBaseHasHeightForWidth(const QSvgWidget* self);
QPaintEngine* QSvgWidget_PaintEngine(const QSvgWidget* self);
void QSvgWidget_OnPaintEngine(const QSvgWidget* self, intptr_t slot);
QPaintEngine* QSvgWidget_QBasePaintEngine(const QSvgWidget* self);
bool QSvgWidget_Event(QSvgWidget* self, QEvent* event);
void QSvgWidget_OnEvent(QSvgWidget* self, intptr_t slot);
bool QSvgWidget_QBaseEvent(QSvgWidget* self, QEvent* event);
void QSvgWidget_MousePressEvent(QSvgWidget* self, QMouseEvent* event);
void QSvgWidget_OnMousePressEvent(QSvgWidget* self, intptr_t slot);
void QSvgWidget_QBaseMousePressEvent(QSvgWidget* self, QMouseEvent* event);
void QSvgWidget_MouseReleaseEvent(QSvgWidget* self, QMouseEvent* event);
void QSvgWidget_OnMouseReleaseEvent(QSvgWidget* self, intptr_t slot);
void QSvgWidget_QBaseMouseReleaseEvent(QSvgWidget* self, QMouseEvent* event);
void QSvgWidget_MouseDoubleClickEvent(QSvgWidget* self, QMouseEvent* event);
void QSvgWidget_OnMouseDoubleClickEvent(QSvgWidget* self, intptr_t slot);
void QSvgWidget_QBaseMouseDoubleClickEvent(QSvgWidget* self, QMouseEvent* event);
void QSvgWidget_MouseMoveEvent(QSvgWidget* self, QMouseEvent* event);
void QSvgWidget_OnMouseMoveEvent(QSvgWidget* self, intptr_t slot);
void QSvgWidget_QBaseMouseMoveEvent(QSvgWidget* self, QMouseEvent* event);
void QSvgWidget_WheelEvent(QSvgWidget* self, QWheelEvent* event);
void QSvgWidget_OnWheelEvent(QSvgWidget* self, intptr_t slot);
void QSvgWidget_QBaseWheelEvent(QSvgWidget* self, QWheelEvent* event);
void QSvgWidget_KeyPressEvent(QSvgWidget* self, QKeyEvent* event);
void QSvgWidget_OnKeyPressEvent(QSvgWidget* self, intptr_t slot);
void QSvgWidget_QBaseKeyPressEvent(QSvgWidget* self, QKeyEvent* event);
void QSvgWidget_KeyReleaseEvent(QSvgWidget* self, QKeyEvent* event);
void QSvgWidget_OnKeyReleaseEvent(QSvgWidget* self, intptr_t slot);
void QSvgWidget_QBaseKeyReleaseEvent(QSvgWidget* self, QKeyEvent* event);
void QSvgWidget_FocusInEvent(QSvgWidget* self, QFocusEvent* event);
void QSvgWidget_OnFocusInEvent(QSvgWidget* self, intptr_t slot);
void QSvgWidget_QBaseFocusInEvent(QSvgWidget* self, QFocusEvent* event);
void QSvgWidget_FocusOutEvent(QSvgWidget* self, QFocusEvent* event);
void QSvgWidget_OnFocusOutEvent(QSvgWidget* self, intptr_t slot);
void QSvgWidget_QBaseFocusOutEvent(QSvgWidget* self, QFocusEvent* event);
void QSvgWidget_EnterEvent(QSvgWidget* self, QEnterEvent* event);
void QSvgWidget_OnEnterEvent(QSvgWidget* self, intptr_t slot);
void QSvgWidget_QBaseEnterEvent(QSvgWidget* self, QEnterEvent* event);
void QSvgWidget_LeaveEvent(QSvgWidget* self, QEvent* event);
void QSvgWidget_OnLeaveEvent(QSvgWidget* self, intptr_t slot);
void QSvgWidget_QBaseLeaveEvent(QSvgWidget* self, QEvent* event);
void QSvgWidget_MoveEvent(QSvgWidget* self, QMoveEvent* event);
void QSvgWidget_OnMoveEvent(QSvgWidget* self, intptr_t slot);
void QSvgWidget_QBaseMoveEvent(QSvgWidget* self, QMoveEvent* event);
void QSvgWidget_ResizeEvent(QSvgWidget* self, QResizeEvent* event);
void QSvgWidget_OnResizeEvent(QSvgWidget* self, intptr_t slot);
void QSvgWidget_QBaseResizeEvent(QSvgWidget* self, QResizeEvent* event);
void QSvgWidget_CloseEvent(QSvgWidget* self, QCloseEvent* event);
void QSvgWidget_OnCloseEvent(QSvgWidget* self, intptr_t slot);
void QSvgWidget_QBaseCloseEvent(QSvgWidget* self, QCloseEvent* event);
void QSvgWidget_ContextMenuEvent(QSvgWidget* self, QContextMenuEvent* event);
void QSvgWidget_OnContextMenuEvent(QSvgWidget* self, intptr_t slot);
void QSvgWidget_QBaseContextMenuEvent(QSvgWidget* self, QContextMenuEvent* event);
void QSvgWidget_TabletEvent(QSvgWidget* self, QTabletEvent* event);
void QSvgWidget_OnTabletEvent(QSvgWidget* self, intptr_t slot);
void QSvgWidget_QBaseTabletEvent(QSvgWidget* self, QTabletEvent* event);
void QSvgWidget_ActionEvent(QSvgWidget* self, QActionEvent* event);
void QSvgWidget_OnActionEvent(QSvgWidget* self, intptr_t slot);
void QSvgWidget_QBaseActionEvent(QSvgWidget* self, QActionEvent* event);
void QSvgWidget_DragEnterEvent(QSvgWidget* self, QDragEnterEvent* event);
void QSvgWidget_OnDragEnterEvent(QSvgWidget* self, intptr_t slot);
void QSvgWidget_QBaseDragEnterEvent(QSvgWidget* self, QDragEnterEvent* event);
void QSvgWidget_DragMoveEvent(QSvgWidget* self, QDragMoveEvent* event);
void QSvgWidget_OnDragMoveEvent(QSvgWidget* self, intptr_t slot);
void QSvgWidget_QBaseDragMoveEvent(QSvgWidget* self, QDragMoveEvent* event);
void QSvgWidget_DragLeaveEvent(QSvgWidget* self, QDragLeaveEvent* event);
void QSvgWidget_OnDragLeaveEvent(QSvgWidget* self, intptr_t slot);
void QSvgWidget_QBaseDragLeaveEvent(QSvgWidget* self, QDragLeaveEvent* event);
void QSvgWidget_DropEvent(QSvgWidget* self, QDropEvent* event);
void QSvgWidget_OnDropEvent(QSvgWidget* self, intptr_t slot);
void QSvgWidget_QBaseDropEvent(QSvgWidget* self, QDropEvent* event);
void QSvgWidget_ShowEvent(QSvgWidget* self, QShowEvent* event);
void QSvgWidget_OnShowEvent(QSvgWidget* self, intptr_t slot);
void QSvgWidget_QBaseShowEvent(QSvgWidget* self, QShowEvent* event);
void QSvgWidget_HideEvent(QSvgWidget* self, QHideEvent* event);
void QSvgWidget_OnHideEvent(QSvgWidget* self, intptr_t slot);
void QSvgWidget_QBaseHideEvent(QSvgWidget* self, QHideEvent* event);
bool QSvgWidget_NativeEvent(QSvgWidget* self, const libqt_string eventType, void* message, intptr_t* result);
void QSvgWidget_OnNativeEvent(QSvgWidget* self, intptr_t slot);
bool QSvgWidget_QBaseNativeEvent(QSvgWidget* self, const libqt_string eventType, void* message, intptr_t* result);
void QSvgWidget_ChangeEvent(QSvgWidget* self, QEvent* param1);
void QSvgWidget_OnChangeEvent(QSvgWidget* self, intptr_t slot);
void QSvgWidget_QBaseChangeEvent(QSvgWidget* self, QEvent* param1);
int QSvgWidget_Metric(const QSvgWidget* self, int param1);
void QSvgWidget_OnMetric(const QSvgWidget* self, intptr_t slot);
int QSvgWidget_QBaseMetric(const QSvgWidget* self, int param1);
void QSvgWidget_InitPainter(const QSvgWidget* self, QPainter* painter);
void QSvgWidget_OnInitPainter(const QSvgWidget* self, intptr_t slot);
void QSvgWidget_QBaseInitPainter(const QSvgWidget* self, QPainter* painter);
QPaintDevice* QSvgWidget_Redirected(const QSvgWidget* self, QPoint* offset);
void QSvgWidget_OnRedirected(const QSvgWidget* self, intptr_t slot);
QPaintDevice* QSvgWidget_QBaseRedirected(const QSvgWidget* self, QPoint* offset);
QPainter* QSvgWidget_SharedPainter(const QSvgWidget* self);
void QSvgWidget_OnSharedPainter(const QSvgWidget* self, intptr_t slot);
QPainter* QSvgWidget_QBaseSharedPainter(const QSvgWidget* self);
void QSvgWidget_InputMethodEvent(QSvgWidget* self, QInputMethodEvent* param1);
void QSvgWidget_OnInputMethodEvent(QSvgWidget* self, intptr_t slot);
void QSvgWidget_QBaseInputMethodEvent(QSvgWidget* self, QInputMethodEvent* param1);
QVariant* QSvgWidget_InputMethodQuery(const QSvgWidget* self, int param1);
void QSvgWidget_OnInputMethodQuery(const QSvgWidget* self, intptr_t slot);
QVariant* QSvgWidget_QBaseInputMethodQuery(const QSvgWidget* self, int param1);
bool QSvgWidget_FocusNextPrevChild(QSvgWidget* self, bool next);
void QSvgWidget_OnFocusNextPrevChild(QSvgWidget* self, intptr_t slot);
bool QSvgWidget_QBaseFocusNextPrevChild(QSvgWidget* self, bool next);
bool QSvgWidget_EventFilter(QSvgWidget* self, QObject* watched, QEvent* event);
void QSvgWidget_OnEventFilter(QSvgWidget* self, intptr_t slot);
bool QSvgWidget_QBaseEventFilter(QSvgWidget* self, QObject* watched, QEvent* event);
void QSvgWidget_TimerEvent(QSvgWidget* self, QTimerEvent* event);
void QSvgWidget_OnTimerEvent(QSvgWidget* self, intptr_t slot);
void QSvgWidget_QBaseTimerEvent(QSvgWidget* self, QTimerEvent* event);
void QSvgWidget_ChildEvent(QSvgWidget* self, QChildEvent* event);
void QSvgWidget_OnChildEvent(QSvgWidget* self, intptr_t slot);
void QSvgWidget_QBaseChildEvent(QSvgWidget* self, QChildEvent* event);
void QSvgWidget_CustomEvent(QSvgWidget* self, QEvent* event);
void QSvgWidget_OnCustomEvent(QSvgWidget* self, intptr_t slot);
void QSvgWidget_QBaseCustomEvent(QSvgWidget* self, QEvent* event);
void QSvgWidget_ConnectNotify(QSvgWidget* self, const QMetaMethod* signal);
void QSvgWidget_OnConnectNotify(QSvgWidget* self, intptr_t slot);
void QSvgWidget_QBaseConnectNotify(QSvgWidget* self, const QMetaMethod* signal);
void QSvgWidget_DisconnectNotify(QSvgWidget* self, const QMetaMethod* signal);
void QSvgWidget_OnDisconnectNotify(QSvgWidget* self, intptr_t slot);
void QSvgWidget_QBaseDisconnectNotify(QSvgWidget* self, const QMetaMethod* signal);
void QSvgWidget_UpdateMicroFocus(QSvgWidget* self);
void QSvgWidget_OnUpdateMicroFocus(QSvgWidget* self, intptr_t slot);
void QSvgWidget_QBaseUpdateMicroFocus(QSvgWidget* self);
void QSvgWidget_Create(QSvgWidget* self);
void QSvgWidget_OnCreate(QSvgWidget* self, intptr_t slot);
void QSvgWidget_QBaseCreate(QSvgWidget* self);
void QSvgWidget_Destroy(QSvgWidget* self);
void QSvgWidget_OnDestroy(QSvgWidget* self, intptr_t slot);
void QSvgWidget_QBaseDestroy(QSvgWidget* self);
bool QSvgWidget_FocusNextChild(QSvgWidget* self);
void QSvgWidget_OnFocusNextChild(QSvgWidget* self, intptr_t slot);
bool QSvgWidget_QBaseFocusNextChild(QSvgWidget* self);
bool QSvgWidget_FocusPreviousChild(QSvgWidget* self);
void QSvgWidget_OnFocusPreviousChild(QSvgWidget* self, intptr_t slot);
bool QSvgWidget_QBaseFocusPreviousChild(QSvgWidget* self);
QObject* QSvgWidget_Sender(const QSvgWidget* self);
void QSvgWidget_OnSender(const QSvgWidget* self, intptr_t slot);
QObject* QSvgWidget_QBaseSender(const QSvgWidget* self);
int QSvgWidget_SenderSignalIndex(const QSvgWidget* self);
void QSvgWidget_OnSenderSignalIndex(const QSvgWidget* self, intptr_t slot);
int QSvgWidget_QBaseSenderSignalIndex(const QSvgWidget* self);
int QSvgWidget_Receivers(const QSvgWidget* self, const char* signal);
void QSvgWidget_OnReceivers(const QSvgWidget* self, intptr_t slot);
int QSvgWidget_QBaseReceivers(const QSvgWidget* self, const char* signal);
bool QSvgWidget_IsSignalConnected(const QSvgWidget* self, const QMetaMethod* signal);
void QSvgWidget_OnIsSignalConnected(const QSvgWidget* self, intptr_t slot);
bool QSvgWidget_QBaseIsSignalConnected(const QSvgWidget* self, const QMetaMethod* signal);
double QSvgWidget_GetDecodedMetricF(const QSvgWidget* self, int metricA, int metricB);
void QSvgWidget_OnGetDecodedMetricF(const QSvgWidget* self, intptr_t slot);
double QSvgWidget_QBaseGetDecodedMetricF(const QSvgWidget* self, int metricA, int metricB);
void QSvgWidget_Delete(QSvgWidget* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
