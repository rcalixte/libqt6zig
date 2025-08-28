#pragma once
#ifndef SRC_EXTRAS_KITEMVIEWSC_LIBKTREEWIDGETSEARCHLINEWIDGET_H
#define SRC_EXTRAS_KITEMVIEWSC_LIBKTREEWIDGETSEARCHLINEWIDGET_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KTreeWidgetSearchLine KTreeWidgetSearchLine;
typedef struct KTreeWidgetSearchLineWidget KTreeWidgetSearchLineWidget;
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
typedef struct QTreeWidget QTreeWidget;
typedef struct QVariant QVariant;
typedef struct QWheelEvent QWheelEvent;
typedef struct QWidget QWidget;
#endif

KTreeWidgetSearchLineWidget* KTreeWidgetSearchLineWidget_new(QWidget* parent);
KTreeWidgetSearchLineWidget* KTreeWidgetSearchLineWidget_new2();
KTreeWidgetSearchLineWidget* KTreeWidgetSearchLineWidget_new3(QWidget* parent, QTreeWidget* treeWidget);
QMetaObject* KTreeWidgetSearchLineWidget_MetaObject(const KTreeWidgetSearchLineWidget* self);
void* KTreeWidgetSearchLineWidget_Metacast(KTreeWidgetSearchLineWidget* self, const char* param1);
int KTreeWidgetSearchLineWidget_Metacall(KTreeWidgetSearchLineWidget* self, int param1, int param2, void** param3);
libqt_string KTreeWidgetSearchLineWidget_Tr(const char* s);
KTreeWidgetSearchLine* KTreeWidgetSearchLineWidget_SearchLine(const KTreeWidgetSearchLineWidget* self);
void KTreeWidgetSearchLineWidget_CreateWidgets(KTreeWidgetSearchLineWidget* self);
KTreeWidgetSearchLine* KTreeWidgetSearchLineWidget_CreateSearchLine(const KTreeWidgetSearchLineWidget* self, QTreeWidget* treeWidget);
libqt_string KTreeWidgetSearchLineWidget_Tr2(const char* s, const char* c);
libqt_string KTreeWidgetSearchLineWidget_Tr3(const char* s, const char* c, int n);
void KTreeWidgetSearchLineWidget_OnMetacall(KTreeWidgetSearchLineWidget* self, intptr_t slot);
int KTreeWidgetSearchLineWidget_QBaseMetacall(KTreeWidgetSearchLineWidget* self, int param1, int param2, void** param3);
void KTreeWidgetSearchLineWidget_OnCreateWidgets(KTreeWidgetSearchLineWidget* self, intptr_t slot);
void KTreeWidgetSearchLineWidget_QBaseCreateWidgets(KTreeWidgetSearchLineWidget* self);
void KTreeWidgetSearchLineWidget_OnCreateSearchLine(const KTreeWidgetSearchLineWidget* self, intptr_t slot);
KTreeWidgetSearchLine* KTreeWidgetSearchLineWidget_QBaseCreateSearchLine(const KTreeWidgetSearchLineWidget* self, QTreeWidget* treeWidget);
int KTreeWidgetSearchLineWidget_DevType(const KTreeWidgetSearchLineWidget* self);
void KTreeWidgetSearchLineWidget_OnDevType(const KTreeWidgetSearchLineWidget* self, intptr_t slot);
int KTreeWidgetSearchLineWidget_QBaseDevType(const KTreeWidgetSearchLineWidget* self);
void KTreeWidgetSearchLineWidget_SetVisible(KTreeWidgetSearchLineWidget* self, bool visible);
void KTreeWidgetSearchLineWidget_OnSetVisible(KTreeWidgetSearchLineWidget* self, intptr_t slot);
void KTreeWidgetSearchLineWidget_QBaseSetVisible(KTreeWidgetSearchLineWidget* self, bool visible);
QSize* KTreeWidgetSearchLineWidget_SizeHint(const KTreeWidgetSearchLineWidget* self);
void KTreeWidgetSearchLineWidget_OnSizeHint(const KTreeWidgetSearchLineWidget* self, intptr_t slot);
QSize* KTreeWidgetSearchLineWidget_QBaseSizeHint(const KTreeWidgetSearchLineWidget* self);
QSize* KTreeWidgetSearchLineWidget_MinimumSizeHint(const KTreeWidgetSearchLineWidget* self);
void KTreeWidgetSearchLineWidget_OnMinimumSizeHint(const KTreeWidgetSearchLineWidget* self, intptr_t slot);
QSize* KTreeWidgetSearchLineWidget_QBaseMinimumSizeHint(const KTreeWidgetSearchLineWidget* self);
int KTreeWidgetSearchLineWidget_HeightForWidth(const KTreeWidgetSearchLineWidget* self, int param1);
void KTreeWidgetSearchLineWidget_OnHeightForWidth(const KTreeWidgetSearchLineWidget* self, intptr_t slot);
int KTreeWidgetSearchLineWidget_QBaseHeightForWidth(const KTreeWidgetSearchLineWidget* self, int param1);
bool KTreeWidgetSearchLineWidget_HasHeightForWidth(const KTreeWidgetSearchLineWidget* self);
void KTreeWidgetSearchLineWidget_OnHasHeightForWidth(const KTreeWidgetSearchLineWidget* self, intptr_t slot);
bool KTreeWidgetSearchLineWidget_QBaseHasHeightForWidth(const KTreeWidgetSearchLineWidget* self);
QPaintEngine* KTreeWidgetSearchLineWidget_PaintEngine(const KTreeWidgetSearchLineWidget* self);
void KTreeWidgetSearchLineWidget_OnPaintEngine(const KTreeWidgetSearchLineWidget* self, intptr_t slot);
QPaintEngine* KTreeWidgetSearchLineWidget_QBasePaintEngine(const KTreeWidgetSearchLineWidget* self);
bool KTreeWidgetSearchLineWidget_Event(KTreeWidgetSearchLineWidget* self, QEvent* event);
void KTreeWidgetSearchLineWidget_OnEvent(KTreeWidgetSearchLineWidget* self, intptr_t slot);
bool KTreeWidgetSearchLineWidget_QBaseEvent(KTreeWidgetSearchLineWidget* self, QEvent* event);
void KTreeWidgetSearchLineWidget_MousePressEvent(KTreeWidgetSearchLineWidget* self, QMouseEvent* event);
void KTreeWidgetSearchLineWidget_OnMousePressEvent(KTreeWidgetSearchLineWidget* self, intptr_t slot);
void KTreeWidgetSearchLineWidget_QBaseMousePressEvent(KTreeWidgetSearchLineWidget* self, QMouseEvent* event);
void KTreeWidgetSearchLineWidget_MouseReleaseEvent(KTreeWidgetSearchLineWidget* self, QMouseEvent* event);
void KTreeWidgetSearchLineWidget_OnMouseReleaseEvent(KTreeWidgetSearchLineWidget* self, intptr_t slot);
void KTreeWidgetSearchLineWidget_QBaseMouseReleaseEvent(KTreeWidgetSearchLineWidget* self, QMouseEvent* event);
void KTreeWidgetSearchLineWidget_MouseDoubleClickEvent(KTreeWidgetSearchLineWidget* self, QMouseEvent* event);
void KTreeWidgetSearchLineWidget_OnMouseDoubleClickEvent(KTreeWidgetSearchLineWidget* self, intptr_t slot);
void KTreeWidgetSearchLineWidget_QBaseMouseDoubleClickEvent(KTreeWidgetSearchLineWidget* self, QMouseEvent* event);
void KTreeWidgetSearchLineWidget_MouseMoveEvent(KTreeWidgetSearchLineWidget* self, QMouseEvent* event);
void KTreeWidgetSearchLineWidget_OnMouseMoveEvent(KTreeWidgetSearchLineWidget* self, intptr_t slot);
void KTreeWidgetSearchLineWidget_QBaseMouseMoveEvent(KTreeWidgetSearchLineWidget* self, QMouseEvent* event);
void KTreeWidgetSearchLineWidget_WheelEvent(KTreeWidgetSearchLineWidget* self, QWheelEvent* event);
void KTreeWidgetSearchLineWidget_OnWheelEvent(KTreeWidgetSearchLineWidget* self, intptr_t slot);
void KTreeWidgetSearchLineWidget_QBaseWheelEvent(KTreeWidgetSearchLineWidget* self, QWheelEvent* event);
void KTreeWidgetSearchLineWidget_KeyPressEvent(KTreeWidgetSearchLineWidget* self, QKeyEvent* event);
void KTreeWidgetSearchLineWidget_OnKeyPressEvent(KTreeWidgetSearchLineWidget* self, intptr_t slot);
void KTreeWidgetSearchLineWidget_QBaseKeyPressEvent(KTreeWidgetSearchLineWidget* self, QKeyEvent* event);
void KTreeWidgetSearchLineWidget_KeyReleaseEvent(KTreeWidgetSearchLineWidget* self, QKeyEvent* event);
void KTreeWidgetSearchLineWidget_OnKeyReleaseEvent(KTreeWidgetSearchLineWidget* self, intptr_t slot);
void KTreeWidgetSearchLineWidget_QBaseKeyReleaseEvent(KTreeWidgetSearchLineWidget* self, QKeyEvent* event);
void KTreeWidgetSearchLineWidget_FocusInEvent(KTreeWidgetSearchLineWidget* self, QFocusEvent* event);
void KTreeWidgetSearchLineWidget_OnFocusInEvent(KTreeWidgetSearchLineWidget* self, intptr_t slot);
void KTreeWidgetSearchLineWidget_QBaseFocusInEvent(KTreeWidgetSearchLineWidget* self, QFocusEvent* event);
void KTreeWidgetSearchLineWidget_FocusOutEvent(KTreeWidgetSearchLineWidget* self, QFocusEvent* event);
void KTreeWidgetSearchLineWidget_OnFocusOutEvent(KTreeWidgetSearchLineWidget* self, intptr_t slot);
void KTreeWidgetSearchLineWidget_QBaseFocusOutEvent(KTreeWidgetSearchLineWidget* self, QFocusEvent* event);
void KTreeWidgetSearchLineWidget_EnterEvent(KTreeWidgetSearchLineWidget* self, QEnterEvent* event);
void KTreeWidgetSearchLineWidget_OnEnterEvent(KTreeWidgetSearchLineWidget* self, intptr_t slot);
void KTreeWidgetSearchLineWidget_QBaseEnterEvent(KTreeWidgetSearchLineWidget* self, QEnterEvent* event);
void KTreeWidgetSearchLineWidget_LeaveEvent(KTreeWidgetSearchLineWidget* self, QEvent* event);
void KTreeWidgetSearchLineWidget_OnLeaveEvent(KTreeWidgetSearchLineWidget* self, intptr_t slot);
void KTreeWidgetSearchLineWidget_QBaseLeaveEvent(KTreeWidgetSearchLineWidget* self, QEvent* event);
void KTreeWidgetSearchLineWidget_PaintEvent(KTreeWidgetSearchLineWidget* self, QPaintEvent* event);
void KTreeWidgetSearchLineWidget_OnPaintEvent(KTreeWidgetSearchLineWidget* self, intptr_t slot);
void KTreeWidgetSearchLineWidget_QBasePaintEvent(KTreeWidgetSearchLineWidget* self, QPaintEvent* event);
void KTreeWidgetSearchLineWidget_MoveEvent(KTreeWidgetSearchLineWidget* self, QMoveEvent* event);
void KTreeWidgetSearchLineWidget_OnMoveEvent(KTreeWidgetSearchLineWidget* self, intptr_t slot);
void KTreeWidgetSearchLineWidget_QBaseMoveEvent(KTreeWidgetSearchLineWidget* self, QMoveEvent* event);
void KTreeWidgetSearchLineWidget_ResizeEvent(KTreeWidgetSearchLineWidget* self, QResizeEvent* event);
void KTreeWidgetSearchLineWidget_OnResizeEvent(KTreeWidgetSearchLineWidget* self, intptr_t slot);
void KTreeWidgetSearchLineWidget_QBaseResizeEvent(KTreeWidgetSearchLineWidget* self, QResizeEvent* event);
void KTreeWidgetSearchLineWidget_CloseEvent(KTreeWidgetSearchLineWidget* self, QCloseEvent* event);
void KTreeWidgetSearchLineWidget_OnCloseEvent(KTreeWidgetSearchLineWidget* self, intptr_t slot);
void KTreeWidgetSearchLineWidget_QBaseCloseEvent(KTreeWidgetSearchLineWidget* self, QCloseEvent* event);
void KTreeWidgetSearchLineWidget_ContextMenuEvent(KTreeWidgetSearchLineWidget* self, QContextMenuEvent* event);
void KTreeWidgetSearchLineWidget_OnContextMenuEvent(KTreeWidgetSearchLineWidget* self, intptr_t slot);
void KTreeWidgetSearchLineWidget_QBaseContextMenuEvent(KTreeWidgetSearchLineWidget* self, QContextMenuEvent* event);
void KTreeWidgetSearchLineWidget_TabletEvent(KTreeWidgetSearchLineWidget* self, QTabletEvent* event);
void KTreeWidgetSearchLineWidget_OnTabletEvent(KTreeWidgetSearchLineWidget* self, intptr_t slot);
void KTreeWidgetSearchLineWidget_QBaseTabletEvent(KTreeWidgetSearchLineWidget* self, QTabletEvent* event);
void KTreeWidgetSearchLineWidget_ActionEvent(KTreeWidgetSearchLineWidget* self, QActionEvent* event);
void KTreeWidgetSearchLineWidget_OnActionEvent(KTreeWidgetSearchLineWidget* self, intptr_t slot);
void KTreeWidgetSearchLineWidget_QBaseActionEvent(KTreeWidgetSearchLineWidget* self, QActionEvent* event);
void KTreeWidgetSearchLineWidget_DragEnterEvent(KTreeWidgetSearchLineWidget* self, QDragEnterEvent* event);
void KTreeWidgetSearchLineWidget_OnDragEnterEvent(KTreeWidgetSearchLineWidget* self, intptr_t slot);
void KTreeWidgetSearchLineWidget_QBaseDragEnterEvent(KTreeWidgetSearchLineWidget* self, QDragEnterEvent* event);
void KTreeWidgetSearchLineWidget_DragMoveEvent(KTreeWidgetSearchLineWidget* self, QDragMoveEvent* event);
void KTreeWidgetSearchLineWidget_OnDragMoveEvent(KTreeWidgetSearchLineWidget* self, intptr_t slot);
void KTreeWidgetSearchLineWidget_QBaseDragMoveEvent(KTreeWidgetSearchLineWidget* self, QDragMoveEvent* event);
void KTreeWidgetSearchLineWidget_DragLeaveEvent(KTreeWidgetSearchLineWidget* self, QDragLeaveEvent* event);
void KTreeWidgetSearchLineWidget_OnDragLeaveEvent(KTreeWidgetSearchLineWidget* self, intptr_t slot);
void KTreeWidgetSearchLineWidget_QBaseDragLeaveEvent(KTreeWidgetSearchLineWidget* self, QDragLeaveEvent* event);
void KTreeWidgetSearchLineWidget_DropEvent(KTreeWidgetSearchLineWidget* self, QDropEvent* event);
void KTreeWidgetSearchLineWidget_OnDropEvent(KTreeWidgetSearchLineWidget* self, intptr_t slot);
void KTreeWidgetSearchLineWidget_QBaseDropEvent(KTreeWidgetSearchLineWidget* self, QDropEvent* event);
void KTreeWidgetSearchLineWidget_ShowEvent(KTreeWidgetSearchLineWidget* self, QShowEvent* event);
void KTreeWidgetSearchLineWidget_OnShowEvent(KTreeWidgetSearchLineWidget* self, intptr_t slot);
void KTreeWidgetSearchLineWidget_QBaseShowEvent(KTreeWidgetSearchLineWidget* self, QShowEvent* event);
void KTreeWidgetSearchLineWidget_HideEvent(KTreeWidgetSearchLineWidget* self, QHideEvent* event);
void KTreeWidgetSearchLineWidget_OnHideEvent(KTreeWidgetSearchLineWidget* self, intptr_t slot);
void KTreeWidgetSearchLineWidget_QBaseHideEvent(KTreeWidgetSearchLineWidget* self, QHideEvent* event);
bool KTreeWidgetSearchLineWidget_NativeEvent(KTreeWidgetSearchLineWidget* self, const libqt_string eventType, void* message, intptr_t* result);
void KTreeWidgetSearchLineWidget_OnNativeEvent(KTreeWidgetSearchLineWidget* self, intptr_t slot);
bool KTreeWidgetSearchLineWidget_QBaseNativeEvent(KTreeWidgetSearchLineWidget* self, const libqt_string eventType, void* message, intptr_t* result);
void KTreeWidgetSearchLineWidget_ChangeEvent(KTreeWidgetSearchLineWidget* self, QEvent* param1);
void KTreeWidgetSearchLineWidget_OnChangeEvent(KTreeWidgetSearchLineWidget* self, intptr_t slot);
void KTreeWidgetSearchLineWidget_QBaseChangeEvent(KTreeWidgetSearchLineWidget* self, QEvent* param1);
int KTreeWidgetSearchLineWidget_Metric(const KTreeWidgetSearchLineWidget* self, int param1);
void KTreeWidgetSearchLineWidget_OnMetric(const KTreeWidgetSearchLineWidget* self, intptr_t slot);
int KTreeWidgetSearchLineWidget_QBaseMetric(const KTreeWidgetSearchLineWidget* self, int param1);
void KTreeWidgetSearchLineWidget_InitPainter(const KTreeWidgetSearchLineWidget* self, QPainter* painter);
void KTreeWidgetSearchLineWidget_OnInitPainter(const KTreeWidgetSearchLineWidget* self, intptr_t slot);
void KTreeWidgetSearchLineWidget_QBaseInitPainter(const KTreeWidgetSearchLineWidget* self, QPainter* painter);
QPaintDevice* KTreeWidgetSearchLineWidget_Redirected(const KTreeWidgetSearchLineWidget* self, QPoint* offset);
void KTreeWidgetSearchLineWidget_OnRedirected(const KTreeWidgetSearchLineWidget* self, intptr_t slot);
QPaintDevice* KTreeWidgetSearchLineWidget_QBaseRedirected(const KTreeWidgetSearchLineWidget* self, QPoint* offset);
QPainter* KTreeWidgetSearchLineWidget_SharedPainter(const KTreeWidgetSearchLineWidget* self);
void KTreeWidgetSearchLineWidget_OnSharedPainter(const KTreeWidgetSearchLineWidget* self, intptr_t slot);
QPainter* KTreeWidgetSearchLineWidget_QBaseSharedPainter(const KTreeWidgetSearchLineWidget* self);
void KTreeWidgetSearchLineWidget_InputMethodEvent(KTreeWidgetSearchLineWidget* self, QInputMethodEvent* param1);
void KTreeWidgetSearchLineWidget_OnInputMethodEvent(KTreeWidgetSearchLineWidget* self, intptr_t slot);
void KTreeWidgetSearchLineWidget_QBaseInputMethodEvent(KTreeWidgetSearchLineWidget* self, QInputMethodEvent* param1);
QVariant* KTreeWidgetSearchLineWidget_InputMethodQuery(const KTreeWidgetSearchLineWidget* self, int param1);
void KTreeWidgetSearchLineWidget_OnInputMethodQuery(const KTreeWidgetSearchLineWidget* self, intptr_t slot);
QVariant* KTreeWidgetSearchLineWidget_QBaseInputMethodQuery(const KTreeWidgetSearchLineWidget* self, int param1);
bool KTreeWidgetSearchLineWidget_FocusNextPrevChild(KTreeWidgetSearchLineWidget* self, bool next);
void KTreeWidgetSearchLineWidget_OnFocusNextPrevChild(KTreeWidgetSearchLineWidget* self, intptr_t slot);
bool KTreeWidgetSearchLineWidget_QBaseFocusNextPrevChild(KTreeWidgetSearchLineWidget* self, bool next);
bool KTreeWidgetSearchLineWidget_EventFilter(KTreeWidgetSearchLineWidget* self, QObject* watched, QEvent* event);
void KTreeWidgetSearchLineWidget_OnEventFilter(KTreeWidgetSearchLineWidget* self, intptr_t slot);
bool KTreeWidgetSearchLineWidget_QBaseEventFilter(KTreeWidgetSearchLineWidget* self, QObject* watched, QEvent* event);
void KTreeWidgetSearchLineWidget_TimerEvent(KTreeWidgetSearchLineWidget* self, QTimerEvent* event);
void KTreeWidgetSearchLineWidget_OnTimerEvent(KTreeWidgetSearchLineWidget* self, intptr_t slot);
void KTreeWidgetSearchLineWidget_QBaseTimerEvent(KTreeWidgetSearchLineWidget* self, QTimerEvent* event);
void KTreeWidgetSearchLineWidget_ChildEvent(KTreeWidgetSearchLineWidget* self, QChildEvent* event);
void KTreeWidgetSearchLineWidget_OnChildEvent(KTreeWidgetSearchLineWidget* self, intptr_t slot);
void KTreeWidgetSearchLineWidget_QBaseChildEvent(KTreeWidgetSearchLineWidget* self, QChildEvent* event);
void KTreeWidgetSearchLineWidget_CustomEvent(KTreeWidgetSearchLineWidget* self, QEvent* event);
void KTreeWidgetSearchLineWidget_OnCustomEvent(KTreeWidgetSearchLineWidget* self, intptr_t slot);
void KTreeWidgetSearchLineWidget_QBaseCustomEvent(KTreeWidgetSearchLineWidget* self, QEvent* event);
void KTreeWidgetSearchLineWidget_ConnectNotify(KTreeWidgetSearchLineWidget* self, const QMetaMethod* signal);
void KTreeWidgetSearchLineWidget_OnConnectNotify(KTreeWidgetSearchLineWidget* self, intptr_t slot);
void KTreeWidgetSearchLineWidget_QBaseConnectNotify(KTreeWidgetSearchLineWidget* self, const QMetaMethod* signal);
void KTreeWidgetSearchLineWidget_DisconnectNotify(KTreeWidgetSearchLineWidget* self, const QMetaMethod* signal);
void KTreeWidgetSearchLineWidget_OnDisconnectNotify(KTreeWidgetSearchLineWidget* self, intptr_t slot);
void KTreeWidgetSearchLineWidget_QBaseDisconnectNotify(KTreeWidgetSearchLineWidget* self, const QMetaMethod* signal);
void KTreeWidgetSearchLineWidget_UpdateMicroFocus(KTreeWidgetSearchLineWidget* self);
void KTreeWidgetSearchLineWidget_OnUpdateMicroFocus(KTreeWidgetSearchLineWidget* self, intptr_t slot);
void KTreeWidgetSearchLineWidget_QBaseUpdateMicroFocus(KTreeWidgetSearchLineWidget* self);
void KTreeWidgetSearchLineWidget_Create(KTreeWidgetSearchLineWidget* self);
void KTreeWidgetSearchLineWidget_OnCreate(KTreeWidgetSearchLineWidget* self, intptr_t slot);
void KTreeWidgetSearchLineWidget_QBaseCreate(KTreeWidgetSearchLineWidget* self);
void KTreeWidgetSearchLineWidget_Destroy(KTreeWidgetSearchLineWidget* self);
void KTreeWidgetSearchLineWidget_OnDestroy(KTreeWidgetSearchLineWidget* self, intptr_t slot);
void KTreeWidgetSearchLineWidget_QBaseDestroy(KTreeWidgetSearchLineWidget* self);
bool KTreeWidgetSearchLineWidget_FocusNextChild(KTreeWidgetSearchLineWidget* self);
void KTreeWidgetSearchLineWidget_OnFocusNextChild(KTreeWidgetSearchLineWidget* self, intptr_t slot);
bool KTreeWidgetSearchLineWidget_QBaseFocusNextChild(KTreeWidgetSearchLineWidget* self);
bool KTreeWidgetSearchLineWidget_FocusPreviousChild(KTreeWidgetSearchLineWidget* self);
void KTreeWidgetSearchLineWidget_OnFocusPreviousChild(KTreeWidgetSearchLineWidget* self, intptr_t slot);
bool KTreeWidgetSearchLineWidget_QBaseFocusPreviousChild(KTreeWidgetSearchLineWidget* self);
QObject* KTreeWidgetSearchLineWidget_Sender(const KTreeWidgetSearchLineWidget* self);
void KTreeWidgetSearchLineWidget_OnSender(const KTreeWidgetSearchLineWidget* self, intptr_t slot);
QObject* KTreeWidgetSearchLineWidget_QBaseSender(const KTreeWidgetSearchLineWidget* self);
int KTreeWidgetSearchLineWidget_SenderSignalIndex(const KTreeWidgetSearchLineWidget* self);
void KTreeWidgetSearchLineWidget_OnSenderSignalIndex(const KTreeWidgetSearchLineWidget* self, intptr_t slot);
int KTreeWidgetSearchLineWidget_QBaseSenderSignalIndex(const KTreeWidgetSearchLineWidget* self);
int KTreeWidgetSearchLineWidget_Receivers(const KTreeWidgetSearchLineWidget* self, const char* signal);
void KTreeWidgetSearchLineWidget_OnReceivers(const KTreeWidgetSearchLineWidget* self, intptr_t slot);
int KTreeWidgetSearchLineWidget_QBaseReceivers(const KTreeWidgetSearchLineWidget* self, const char* signal);
bool KTreeWidgetSearchLineWidget_IsSignalConnected(const KTreeWidgetSearchLineWidget* self, const QMetaMethod* signal);
void KTreeWidgetSearchLineWidget_OnIsSignalConnected(const KTreeWidgetSearchLineWidget* self, intptr_t slot);
bool KTreeWidgetSearchLineWidget_QBaseIsSignalConnected(const KTreeWidgetSearchLineWidget* self, const QMetaMethod* signal);
double KTreeWidgetSearchLineWidget_GetDecodedMetricF(const KTreeWidgetSearchLineWidget* self, int metricA, int metricB);
void KTreeWidgetSearchLineWidget_OnGetDecodedMetricF(const KTreeWidgetSearchLineWidget* self, intptr_t slot);
double KTreeWidgetSearchLineWidget_QBaseGetDecodedMetricF(const KTreeWidgetSearchLineWidget* self, int metricA, int metricB);
void KTreeWidgetSearchLineWidget_Delete(KTreeWidgetSearchLineWidget* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
