#pragma once
#ifndef SRC_DESIGNERC_LIBABSTRACTACTIONEDITOR_H
#define SRC_DESIGNERC_LIBABSTRACTACTIONEDITOR_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QAction QAction;
typedef struct QActionEvent QActionEvent;
typedef struct QChildEvent QChildEvent;
typedef struct QCloseEvent QCloseEvent;
typedef struct QContextMenuEvent QContextMenuEvent;
typedef struct QDesignerActionEditorInterface QDesignerActionEditorInterface;
typedef struct QDesignerFormEditorInterface QDesignerFormEditorInterface;
typedef struct QDesignerFormWindowInterface QDesignerFormWindowInterface;
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
typedef struct QWheelEvent QWheelEvent;
typedef struct QWidget QWidget;
#endif

QDesignerActionEditorInterface* QDesignerActionEditorInterface_new(QWidget* parent);
QDesignerActionEditorInterface* QDesignerActionEditorInterface_new2(QWidget* parent, int flags);
QMetaObject* QDesignerActionEditorInterface_MetaObject(const QDesignerActionEditorInterface* self);
void* QDesignerActionEditorInterface_Metacast(QDesignerActionEditorInterface* self, const char* param1);
int QDesignerActionEditorInterface_Metacall(QDesignerActionEditorInterface* self, int param1, int param2, void** param3);
QDesignerFormEditorInterface* QDesignerActionEditorInterface_Core(const QDesignerActionEditorInterface* self);
void QDesignerActionEditorInterface_ManageAction(QDesignerActionEditorInterface* self, QAction* action);
void QDesignerActionEditorInterface_UnmanageAction(QDesignerActionEditorInterface* self, QAction* action);
void QDesignerActionEditorInterface_SetFormWindow(QDesignerActionEditorInterface* self, QDesignerFormWindowInterface* formWindow);
void QDesignerActionEditorInterface_OnMetacall(QDesignerActionEditorInterface* self, intptr_t slot);
int QDesignerActionEditorInterface_QBaseMetacall(QDesignerActionEditorInterface* self, int param1, int param2, void** param3);
void QDesignerActionEditorInterface_OnCore(const QDesignerActionEditorInterface* self, intptr_t slot);
QDesignerFormEditorInterface* QDesignerActionEditorInterface_QBaseCore(const QDesignerActionEditorInterface* self);
void QDesignerActionEditorInterface_OnManageAction(QDesignerActionEditorInterface* self, intptr_t slot);
void QDesignerActionEditorInterface_QBaseManageAction(QDesignerActionEditorInterface* self, QAction* action);
void QDesignerActionEditorInterface_OnUnmanageAction(QDesignerActionEditorInterface* self, intptr_t slot);
void QDesignerActionEditorInterface_QBaseUnmanageAction(QDesignerActionEditorInterface* self, QAction* action);
void QDesignerActionEditorInterface_OnSetFormWindow(QDesignerActionEditorInterface* self, intptr_t slot);
void QDesignerActionEditorInterface_QBaseSetFormWindow(QDesignerActionEditorInterface* self, QDesignerFormWindowInterface* formWindow);
int QDesignerActionEditorInterface_DevType(const QDesignerActionEditorInterface* self);
void QDesignerActionEditorInterface_OnDevType(const QDesignerActionEditorInterface* self, intptr_t slot);
int QDesignerActionEditorInterface_QBaseDevType(const QDesignerActionEditorInterface* self);
void QDesignerActionEditorInterface_SetVisible(QDesignerActionEditorInterface* self, bool visible);
void QDesignerActionEditorInterface_OnSetVisible(QDesignerActionEditorInterface* self, intptr_t slot);
void QDesignerActionEditorInterface_QBaseSetVisible(QDesignerActionEditorInterface* self, bool visible);
QSize* QDesignerActionEditorInterface_SizeHint(const QDesignerActionEditorInterface* self);
void QDesignerActionEditorInterface_OnSizeHint(const QDesignerActionEditorInterface* self, intptr_t slot);
QSize* QDesignerActionEditorInterface_QBaseSizeHint(const QDesignerActionEditorInterface* self);
QSize* QDesignerActionEditorInterface_MinimumSizeHint(const QDesignerActionEditorInterface* self);
void QDesignerActionEditorInterface_OnMinimumSizeHint(const QDesignerActionEditorInterface* self, intptr_t slot);
QSize* QDesignerActionEditorInterface_QBaseMinimumSizeHint(const QDesignerActionEditorInterface* self);
int QDesignerActionEditorInterface_HeightForWidth(const QDesignerActionEditorInterface* self, int param1);
void QDesignerActionEditorInterface_OnHeightForWidth(const QDesignerActionEditorInterface* self, intptr_t slot);
int QDesignerActionEditorInterface_QBaseHeightForWidth(const QDesignerActionEditorInterface* self, int param1);
bool QDesignerActionEditorInterface_HasHeightForWidth(const QDesignerActionEditorInterface* self);
void QDesignerActionEditorInterface_OnHasHeightForWidth(const QDesignerActionEditorInterface* self, intptr_t slot);
bool QDesignerActionEditorInterface_QBaseHasHeightForWidth(const QDesignerActionEditorInterface* self);
QPaintEngine* QDesignerActionEditorInterface_PaintEngine(const QDesignerActionEditorInterface* self);
void QDesignerActionEditorInterface_OnPaintEngine(const QDesignerActionEditorInterface* self, intptr_t slot);
QPaintEngine* QDesignerActionEditorInterface_QBasePaintEngine(const QDesignerActionEditorInterface* self);
bool QDesignerActionEditorInterface_Event(QDesignerActionEditorInterface* self, QEvent* event);
void QDesignerActionEditorInterface_OnEvent(QDesignerActionEditorInterface* self, intptr_t slot);
bool QDesignerActionEditorInterface_QBaseEvent(QDesignerActionEditorInterface* self, QEvent* event);
void QDesignerActionEditorInterface_MousePressEvent(QDesignerActionEditorInterface* self, QMouseEvent* event);
void QDesignerActionEditorInterface_OnMousePressEvent(QDesignerActionEditorInterface* self, intptr_t slot);
void QDesignerActionEditorInterface_QBaseMousePressEvent(QDesignerActionEditorInterface* self, QMouseEvent* event);
void QDesignerActionEditorInterface_MouseReleaseEvent(QDesignerActionEditorInterface* self, QMouseEvent* event);
void QDesignerActionEditorInterface_OnMouseReleaseEvent(QDesignerActionEditorInterface* self, intptr_t slot);
void QDesignerActionEditorInterface_QBaseMouseReleaseEvent(QDesignerActionEditorInterface* self, QMouseEvent* event);
void QDesignerActionEditorInterface_MouseDoubleClickEvent(QDesignerActionEditorInterface* self, QMouseEvent* event);
void QDesignerActionEditorInterface_OnMouseDoubleClickEvent(QDesignerActionEditorInterface* self, intptr_t slot);
void QDesignerActionEditorInterface_QBaseMouseDoubleClickEvent(QDesignerActionEditorInterface* self, QMouseEvent* event);
void QDesignerActionEditorInterface_MouseMoveEvent(QDesignerActionEditorInterface* self, QMouseEvent* event);
void QDesignerActionEditorInterface_OnMouseMoveEvent(QDesignerActionEditorInterface* self, intptr_t slot);
void QDesignerActionEditorInterface_QBaseMouseMoveEvent(QDesignerActionEditorInterface* self, QMouseEvent* event);
void QDesignerActionEditorInterface_WheelEvent(QDesignerActionEditorInterface* self, QWheelEvent* event);
void QDesignerActionEditorInterface_OnWheelEvent(QDesignerActionEditorInterface* self, intptr_t slot);
void QDesignerActionEditorInterface_QBaseWheelEvent(QDesignerActionEditorInterface* self, QWheelEvent* event);
void QDesignerActionEditorInterface_KeyPressEvent(QDesignerActionEditorInterface* self, QKeyEvent* event);
void QDesignerActionEditorInterface_OnKeyPressEvent(QDesignerActionEditorInterface* self, intptr_t slot);
void QDesignerActionEditorInterface_QBaseKeyPressEvent(QDesignerActionEditorInterface* self, QKeyEvent* event);
void QDesignerActionEditorInterface_KeyReleaseEvent(QDesignerActionEditorInterface* self, QKeyEvent* event);
void QDesignerActionEditorInterface_OnKeyReleaseEvent(QDesignerActionEditorInterface* self, intptr_t slot);
void QDesignerActionEditorInterface_QBaseKeyReleaseEvent(QDesignerActionEditorInterface* self, QKeyEvent* event);
void QDesignerActionEditorInterface_FocusInEvent(QDesignerActionEditorInterface* self, QFocusEvent* event);
void QDesignerActionEditorInterface_OnFocusInEvent(QDesignerActionEditorInterface* self, intptr_t slot);
void QDesignerActionEditorInterface_QBaseFocusInEvent(QDesignerActionEditorInterface* self, QFocusEvent* event);
void QDesignerActionEditorInterface_FocusOutEvent(QDesignerActionEditorInterface* self, QFocusEvent* event);
void QDesignerActionEditorInterface_OnFocusOutEvent(QDesignerActionEditorInterface* self, intptr_t slot);
void QDesignerActionEditorInterface_QBaseFocusOutEvent(QDesignerActionEditorInterface* self, QFocusEvent* event);
void QDesignerActionEditorInterface_EnterEvent(QDesignerActionEditorInterface* self, QEnterEvent* event);
void QDesignerActionEditorInterface_OnEnterEvent(QDesignerActionEditorInterface* self, intptr_t slot);
void QDesignerActionEditorInterface_QBaseEnterEvent(QDesignerActionEditorInterface* self, QEnterEvent* event);
void QDesignerActionEditorInterface_LeaveEvent(QDesignerActionEditorInterface* self, QEvent* event);
void QDesignerActionEditorInterface_OnLeaveEvent(QDesignerActionEditorInterface* self, intptr_t slot);
void QDesignerActionEditorInterface_QBaseLeaveEvent(QDesignerActionEditorInterface* self, QEvent* event);
void QDesignerActionEditorInterface_PaintEvent(QDesignerActionEditorInterface* self, QPaintEvent* event);
void QDesignerActionEditorInterface_OnPaintEvent(QDesignerActionEditorInterface* self, intptr_t slot);
void QDesignerActionEditorInterface_QBasePaintEvent(QDesignerActionEditorInterface* self, QPaintEvent* event);
void QDesignerActionEditorInterface_MoveEvent(QDesignerActionEditorInterface* self, QMoveEvent* event);
void QDesignerActionEditorInterface_OnMoveEvent(QDesignerActionEditorInterface* self, intptr_t slot);
void QDesignerActionEditorInterface_QBaseMoveEvent(QDesignerActionEditorInterface* self, QMoveEvent* event);
void QDesignerActionEditorInterface_ResizeEvent(QDesignerActionEditorInterface* self, QResizeEvent* event);
void QDesignerActionEditorInterface_OnResizeEvent(QDesignerActionEditorInterface* self, intptr_t slot);
void QDesignerActionEditorInterface_QBaseResizeEvent(QDesignerActionEditorInterface* self, QResizeEvent* event);
void QDesignerActionEditorInterface_CloseEvent(QDesignerActionEditorInterface* self, QCloseEvent* event);
void QDesignerActionEditorInterface_OnCloseEvent(QDesignerActionEditorInterface* self, intptr_t slot);
void QDesignerActionEditorInterface_QBaseCloseEvent(QDesignerActionEditorInterface* self, QCloseEvent* event);
void QDesignerActionEditorInterface_ContextMenuEvent(QDesignerActionEditorInterface* self, QContextMenuEvent* event);
void QDesignerActionEditorInterface_OnContextMenuEvent(QDesignerActionEditorInterface* self, intptr_t slot);
void QDesignerActionEditorInterface_QBaseContextMenuEvent(QDesignerActionEditorInterface* self, QContextMenuEvent* event);
void QDesignerActionEditorInterface_TabletEvent(QDesignerActionEditorInterface* self, QTabletEvent* event);
void QDesignerActionEditorInterface_OnTabletEvent(QDesignerActionEditorInterface* self, intptr_t slot);
void QDesignerActionEditorInterface_QBaseTabletEvent(QDesignerActionEditorInterface* self, QTabletEvent* event);
void QDesignerActionEditorInterface_ActionEvent(QDesignerActionEditorInterface* self, QActionEvent* event);
void QDesignerActionEditorInterface_OnActionEvent(QDesignerActionEditorInterface* self, intptr_t slot);
void QDesignerActionEditorInterface_QBaseActionEvent(QDesignerActionEditorInterface* self, QActionEvent* event);
void QDesignerActionEditorInterface_DragEnterEvent(QDesignerActionEditorInterface* self, QDragEnterEvent* event);
void QDesignerActionEditorInterface_OnDragEnterEvent(QDesignerActionEditorInterface* self, intptr_t slot);
void QDesignerActionEditorInterface_QBaseDragEnterEvent(QDesignerActionEditorInterface* self, QDragEnterEvent* event);
void QDesignerActionEditorInterface_DragMoveEvent(QDesignerActionEditorInterface* self, QDragMoveEvent* event);
void QDesignerActionEditorInterface_OnDragMoveEvent(QDesignerActionEditorInterface* self, intptr_t slot);
void QDesignerActionEditorInterface_QBaseDragMoveEvent(QDesignerActionEditorInterface* self, QDragMoveEvent* event);
void QDesignerActionEditorInterface_DragLeaveEvent(QDesignerActionEditorInterface* self, QDragLeaveEvent* event);
void QDesignerActionEditorInterface_OnDragLeaveEvent(QDesignerActionEditorInterface* self, intptr_t slot);
void QDesignerActionEditorInterface_QBaseDragLeaveEvent(QDesignerActionEditorInterface* self, QDragLeaveEvent* event);
void QDesignerActionEditorInterface_DropEvent(QDesignerActionEditorInterface* self, QDropEvent* event);
void QDesignerActionEditorInterface_OnDropEvent(QDesignerActionEditorInterface* self, intptr_t slot);
void QDesignerActionEditorInterface_QBaseDropEvent(QDesignerActionEditorInterface* self, QDropEvent* event);
void QDesignerActionEditorInterface_ShowEvent(QDesignerActionEditorInterface* self, QShowEvent* event);
void QDesignerActionEditorInterface_OnShowEvent(QDesignerActionEditorInterface* self, intptr_t slot);
void QDesignerActionEditorInterface_QBaseShowEvent(QDesignerActionEditorInterface* self, QShowEvent* event);
void QDesignerActionEditorInterface_HideEvent(QDesignerActionEditorInterface* self, QHideEvent* event);
void QDesignerActionEditorInterface_OnHideEvent(QDesignerActionEditorInterface* self, intptr_t slot);
void QDesignerActionEditorInterface_QBaseHideEvent(QDesignerActionEditorInterface* self, QHideEvent* event);
bool QDesignerActionEditorInterface_NativeEvent(QDesignerActionEditorInterface* self, const libqt_string eventType, void* message, intptr_t* result);
void QDesignerActionEditorInterface_OnNativeEvent(QDesignerActionEditorInterface* self, intptr_t slot);
bool QDesignerActionEditorInterface_QBaseNativeEvent(QDesignerActionEditorInterface* self, const libqt_string eventType, void* message, intptr_t* result);
void QDesignerActionEditorInterface_ChangeEvent(QDesignerActionEditorInterface* self, QEvent* param1);
void QDesignerActionEditorInterface_OnChangeEvent(QDesignerActionEditorInterface* self, intptr_t slot);
void QDesignerActionEditorInterface_QBaseChangeEvent(QDesignerActionEditorInterface* self, QEvent* param1);
int QDesignerActionEditorInterface_Metric(const QDesignerActionEditorInterface* self, int param1);
void QDesignerActionEditorInterface_OnMetric(const QDesignerActionEditorInterface* self, intptr_t slot);
int QDesignerActionEditorInterface_QBaseMetric(const QDesignerActionEditorInterface* self, int param1);
void QDesignerActionEditorInterface_InitPainter(const QDesignerActionEditorInterface* self, QPainter* painter);
void QDesignerActionEditorInterface_OnInitPainter(const QDesignerActionEditorInterface* self, intptr_t slot);
void QDesignerActionEditorInterface_QBaseInitPainter(const QDesignerActionEditorInterface* self, QPainter* painter);
QPaintDevice* QDesignerActionEditorInterface_Redirected(const QDesignerActionEditorInterface* self, QPoint* offset);
void QDesignerActionEditorInterface_OnRedirected(const QDesignerActionEditorInterface* self, intptr_t slot);
QPaintDevice* QDesignerActionEditorInterface_QBaseRedirected(const QDesignerActionEditorInterface* self, QPoint* offset);
QPainter* QDesignerActionEditorInterface_SharedPainter(const QDesignerActionEditorInterface* self);
void QDesignerActionEditorInterface_OnSharedPainter(const QDesignerActionEditorInterface* self, intptr_t slot);
QPainter* QDesignerActionEditorInterface_QBaseSharedPainter(const QDesignerActionEditorInterface* self);
void QDesignerActionEditorInterface_InputMethodEvent(QDesignerActionEditorInterface* self, QInputMethodEvent* param1);
void QDesignerActionEditorInterface_OnInputMethodEvent(QDesignerActionEditorInterface* self, intptr_t slot);
void QDesignerActionEditorInterface_QBaseInputMethodEvent(QDesignerActionEditorInterface* self, QInputMethodEvent* param1);
QVariant* QDesignerActionEditorInterface_InputMethodQuery(const QDesignerActionEditorInterface* self, int param1);
void QDesignerActionEditorInterface_OnInputMethodQuery(const QDesignerActionEditorInterface* self, intptr_t slot);
QVariant* QDesignerActionEditorInterface_QBaseInputMethodQuery(const QDesignerActionEditorInterface* self, int param1);
bool QDesignerActionEditorInterface_FocusNextPrevChild(QDesignerActionEditorInterface* self, bool next);
void QDesignerActionEditorInterface_OnFocusNextPrevChild(QDesignerActionEditorInterface* self, intptr_t slot);
bool QDesignerActionEditorInterface_QBaseFocusNextPrevChild(QDesignerActionEditorInterface* self, bool next);
bool QDesignerActionEditorInterface_EventFilter(QDesignerActionEditorInterface* self, QObject* watched, QEvent* event);
void QDesignerActionEditorInterface_OnEventFilter(QDesignerActionEditorInterface* self, intptr_t slot);
bool QDesignerActionEditorInterface_QBaseEventFilter(QDesignerActionEditorInterface* self, QObject* watched, QEvent* event);
void QDesignerActionEditorInterface_TimerEvent(QDesignerActionEditorInterface* self, QTimerEvent* event);
void QDesignerActionEditorInterface_OnTimerEvent(QDesignerActionEditorInterface* self, intptr_t slot);
void QDesignerActionEditorInterface_QBaseTimerEvent(QDesignerActionEditorInterface* self, QTimerEvent* event);
void QDesignerActionEditorInterface_ChildEvent(QDesignerActionEditorInterface* self, QChildEvent* event);
void QDesignerActionEditorInterface_OnChildEvent(QDesignerActionEditorInterface* self, intptr_t slot);
void QDesignerActionEditorInterface_QBaseChildEvent(QDesignerActionEditorInterface* self, QChildEvent* event);
void QDesignerActionEditorInterface_CustomEvent(QDesignerActionEditorInterface* self, QEvent* event);
void QDesignerActionEditorInterface_OnCustomEvent(QDesignerActionEditorInterface* self, intptr_t slot);
void QDesignerActionEditorInterface_QBaseCustomEvent(QDesignerActionEditorInterface* self, QEvent* event);
void QDesignerActionEditorInterface_ConnectNotify(QDesignerActionEditorInterface* self, const QMetaMethod* signal);
void QDesignerActionEditorInterface_OnConnectNotify(QDesignerActionEditorInterface* self, intptr_t slot);
void QDesignerActionEditorInterface_QBaseConnectNotify(QDesignerActionEditorInterface* self, const QMetaMethod* signal);
void QDesignerActionEditorInterface_DisconnectNotify(QDesignerActionEditorInterface* self, const QMetaMethod* signal);
void QDesignerActionEditorInterface_OnDisconnectNotify(QDesignerActionEditorInterface* self, intptr_t slot);
void QDesignerActionEditorInterface_QBaseDisconnectNotify(QDesignerActionEditorInterface* self, const QMetaMethod* signal);
void QDesignerActionEditorInterface_UpdateMicroFocus(QDesignerActionEditorInterface* self);
void QDesignerActionEditorInterface_OnUpdateMicroFocus(QDesignerActionEditorInterface* self, intptr_t slot);
void QDesignerActionEditorInterface_QBaseUpdateMicroFocus(QDesignerActionEditorInterface* self);
void QDesignerActionEditorInterface_Create(QDesignerActionEditorInterface* self);
void QDesignerActionEditorInterface_OnCreate(QDesignerActionEditorInterface* self, intptr_t slot);
void QDesignerActionEditorInterface_QBaseCreate(QDesignerActionEditorInterface* self);
void QDesignerActionEditorInterface_Destroy(QDesignerActionEditorInterface* self);
void QDesignerActionEditorInterface_OnDestroy(QDesignerActionEditorInterface* self, intptr_t slot);
void QDesignerActionEditorInterface_QBaseDestroy(QDesignerActionEditorInterface* self);
bool QDesignerActionEditorInterface_FocusNextChild(QDesignerActionEditorInterface* self);
void QDesignerActionEditorInterface_OnFocusNextChild(QDesignerActionEditorInterface* self, intptr_t slot);
bool QDesignerActionEditorInterface_QBaseFocusNextChild(QDesignerActionEditorInterface* self);
bool QDesignerActionEditorInterface_FocusPreviousChild(QDesignerActionEditorInterface* self);
void QDesignerActionEditorInterface_OnFocusPreviousChild(QDesignerActionEditorInterface* self, intptr_t slot);
bool QDesignerActionEditorInterface_QBaseFocusPreviousChild(QDesignerActionEditorInterface* self);
QObject* QDesignerActionEditorInterface_Sender(const QDesignerActionEditorInterface* self);
void QDesignerActionEditorInterface_OnSender(const QDesignerActionEditorInterface* self, intptr_t slot);
QObject* QDesignerActionEditorInterface_QBaseSender(const QDesignerActionEditorInterface* self);
int QDesignerActionEditorInterface_SenderSignalIndex(const QDesignerActionEditorInterface* self);
void QDesignerActionEditorInterface_OnSenderSignalIndex(const QDesignerActionEditorInterface* self, intptr_t slot);
int QDesignerActionEditorInterface_QBaseSenderSignalIndex(const QDesignerActionEditorInterface* self);
int QDesignerActionEditorInterface_Receivers(const QDesignerActionEditorInterface* self, const char* signal);
void QDesignerActionEditorInterface_OnReceivers(const QDesignerActionEditorInterface* self, intptr_t slot);
int QDesignerActionEditorInterface_QBaseReceivers(const QDesignerActionEditorInterface* self, const char* signal);
bool QDesignerActionEditorInterface_IsSignalConnected(const QDesignerActionEditorInterface* self, const QMetaMethod* signal);
void QDesignerActionEditorInterface_OnIsSignalConnected(const QDesignerActionEditorInterface* self, intptr_t slot);
bool QDesignerActionEditorInterface_QBaseIsSignalConnected(const QDesignerActionEditorInterface* self, const QMetaMethod* signal);
double QDesignerActionEditorInterface_GetDecodedMetricF(const QDesignerActionEditorInterface* self, int metricA, int metricB);
void QDesignerActionEditorInterface_OnGetDecodedMetricF(const QDesignerActionEditorInterface* self, intptr_t slot);
double QDesignerActionEditorInterface_QBaseGetDecodedMetricF(const QDesignerActionEditorInterface* self, int metricA, int metricB);
void QDesignerActionEditorInterface_Delete(QDesignerActionEditorInterface* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
