#pragma once
#ifndef SRC_EXTRAS_KWIDGETSADDONSC_LIBKSPLITTERCOLLAPSERBUTTON_H
#define SRC_EXTRAS_KWIDGETSADDONSC_LIBKSPLITTERCOLLAPSERBUTTON_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KSplitterCollapserButton KSplitterCollapserButton;
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
typedef struct QResizeEvent QResizeEvent;
typedef struct QShowEvent QShowEvent;
typedef struct QSize QSize;
typedef struct QSplitter QSplitter;
typedef struct QStyleOptionToolButton QStyleOptionToolButton;
typedef struct QTabletEvent QTabletEvent;
typedef struct QTimerEvent QTimerEvent;
typedef struct QToolButton QToolButton;
typedef struct QVariant QVariant;
typedef struct QWheelEvent QWheelEvent;
typedef struct QWidget QWidget;
#endif

KSplitterCollapserButton* KSplitterCollapserButton_new(QWidget* childWidget, QSplitter* splitter);
QMetaObject* KSplitterCollapserButton_MetaObject(const KSplitterCollapserButton* self);
void* KSplitterCollapserButton_Metacast(KSplitterCollapserButton* self, const char* param1);
int KSplitterCollapserButton_Metacall(KSplitterCollapserButton* self, int param1, int param2, void** param3);
libqt_string KSplitterCollapserButton_Tr(const char* s);
bool KSplitterCollapserButton_IsWidgetCollapsed(const KSplitterCollapserButton* self);
QSize* KSplitterCollapserButton_SizeHint(const KSplitterCollapserButton* self);
void KSplitterCollapserButton_Collapse(KSplitterCollapserButton* self);
void KSplitterCollapserButton_Restore(KSplitterCollapserButton* self);
void KSplitterCollapserButton_SetCollapsed(KSplitterCollapserButton* self, bool collapsed);
bool KSplitterCollapserButton_EventFilter(KSplitterCollapserButton* self, QObject* param1, QEvent* param2);
void KSplitterCollapserButton_PaintEvent(KSplitterCollapserButton* self, QPaintEvent* param1);
void KSplitterCollapserButton_EnterEvent(KSplitterCollapserButton* self, QEnterEvent* event);
void KSplitterCollapserButton_LeaveEvent(KSplitterCollapserButton* self, QEvent* event);
void KSplitterCollapserButton_ShowEvent(KSplitterCollapserButton* self, QShowEvent* event);
libqt_string KSplitterCollapserButton_Tr2(const char* s, const char* c);
libqt_string KSplitterCollapserButton_Tr3(const char* s, const char* c, int n);
void KSplitterCollapserButton_OnMetacall(KSplitterCollapserButton* self, intptr_t slot);
int KSplitterCollapserButton_QBaseMetacall(KSplitterCollapserButton* self, int param1, int param2, void** param3);
void KSplitterCollapserButton_OnSizeHint(const KSplitterCollapserButton* self, intptr_t slot);
QSize* KSplitterCollapserButton_QBaseSizeHint(const KSplitterCollapserButton* self);
void KSplitterCollapserButton_OnEventFilter(KSplitterCollapserButton* self, intptr_t slot);
bool KSplitterCollapserButton_QBaseEventFilter(KSplitterCollapserButton* self, QObject* param1, QEvent* param2);
void KSplitterCollapserButton_OnPaintEvent(KSplitterCollapserButton* self, intptr_t slot);
void KSplitterCollapserButton_QBasePaintEvent(KSplitterCollapserButton* self, QPaintEvent* param1);
void KSplitterCollapserButton_OnEnterEvent(KSplitterCollapserButton* self, intptr_t slot);
void KSplitterCollapserButton_QBaseEnterEvent(KSplitterCollapserButton* self, QEnterEvent* event);
void KSplitterCollapserButton_OnLeaveEvent(KSplitterCollapserButton* self, intptr_t slot);
void KSplitterCollapserButton_QBaseLeaveEvent(KSplitterCollapserButton* self, QEvent* event);
void KSplitterCollapserButton_OnShowEvent(KSplitterCollapserButton* self, intptr_t slot);
void KSplitterCollapserButton_QBaseShowEvent(KSplitterCollapserButton* self, QShowEvent* event);
QSize* KSplitterCollapserButton_MinimumSizeHint(const KSplitterCollapserButton* self);
void KSplitterCollapserButton_OnMinimumSizeHint(const KSplitterCollapserButton* self, intptr_t slot);
QSize* KSplitterCollapserButton_QBaseMinimumSizeHint(const KSplitterCollapserButton* self);
bool KSplitterCollapserButton_Event(KSplitterCollapserButton* self, QEvent* e);
void KSplitterCollapserButton_OnEvent(KSplitterCollapserButton* self, intptr_t slot);
bool KSplitterCollapserButton_QBaseEvent(KSplitterCollapserButton* self, QEvent* e);
void KSplitterCollapserButton_MousePressEvent(KSplitterCollapserButton* self, QMouseEvent* param1);
void KSplitterCollapserButton_OnMousePressEvent(KSplitterCollapserButton* self, intptr_t slot);
void KSplitterCollapserButton_QBaseMousePressEvent(KSplitterCollapserButton* self, QMouseEvent* param1);
void KSplitterCollapserButton_MouseReleaseEvent(KSplitterCollapserButton* self, QMouseEvent* param1);
void KSplitterCollapserButton_OnMouseReleaseEvent(KSplitterCollapserButton* self, intptr_t slot);
void KSplitterCollapserButton_QBaseMouseReleaseEvent(KSplitterCollapserButton* self, QMouseEvent* param1);
void KSplitterCollapserButton_ActionEvent(KSplitterCollapserButton* self, QActionEvent* param1);
void KSplitterCollapserButton_OnActionEvent(KSplitterCollapserButton* self, intptr_t slot);
void KSplitterCollapserButton_QBaseActionEvent(KSplitterCollapserButton* self, QActionEvent* param1);
void KSplitterCollapserButton_TimerEvent(KSplitterCollapserButton* self, QTimerEvent* param1);
void KSplitterCollapserButton_OnTimerEvent(KSplitterCollapserButton* self, intptr_t slot);
void KSplitterCollapserButton_QBaseTimerEvent(KSplitterCollapserButton* self, QTimerEvent* param1);
void KSplitterCollapserButton_ChangeEvent(KSplitterCollapserButton* self, QEvent* param1);
void KSplitterCollapserButton_OnChangeEvent(KSplitterCollapserButton* self, intptr_t slot);
void KSplitterCollapserButton_QBaseChangeEvent(KSplitterCollapserButton* self, QEvent* param1);
bool KSplitterCollapserButton_HitButton(const KSplitterCollapserButton* self, const QPoint* pos);
void KSplitterCollapserButton_OnHitButton(const KSplitterCollapserButton* self, intptr_t slot);
bool KSplitterCollapserButton_QBaseHitButton(const KSplitterCollapserButton* self, const QPoint* pos);
void KSplitterCollapserButton_CheckStateSet(KSplitterCollapserButton* self);
void KSplitterCollapserButton_OnCheckStateSet(KSplitterCollapserButton* self, intptr_t slot);
void KSplitterCollapserButton_QBaseCheckStateSet(KSplitterCollapserButton* self);
void KSplitterCollapserButton_NextCheckState(KSplitterCollapserButton* self);
void KSplitterCollapserButton_OnNextCheckState(KSplitterCollapserButton* self, intptr_t slot);
void KSplitterCollapserButton_QBaseNextCheckState(KSplitterCollapserButton* self);
void KSplitterCollapserButton_InitStyleOption(const KSplitterCollapserButton* self, QStyleOptionToolButton* option);
void KSplitterCollapserButton_OnInitStyleOption(const KSplitterCollapserButton* self, intptr_t slot);
void KSplitterCollapserButton_QBaseInitStyleOption(const KSplitterCollapserButton* self, QStyleOptionToolButton* option);
void KSplitterCollapserButton_KeyPressEvent(KSplitterCollapserButton* self, QKeyEvent* e);
void KSplitterCollapserButton_OnKeyPressEvent(KSplitterCollapserButton* self, intptr_t slot);
void KSplitterCollapserButton_QBaseKeyPressEvent(KSplitterCollapserButton* self, QKeyEvent* e);
void KSplitterCollapserButton_KeyReleaseEvent(KSplitterCollapserButton* self, QKeyEvent* e);
void KSplitterCollapserButton_OnKeyReleaseEvent(KSplitterCollapserButton* self, intptr_t slot);
void KSplitterCollapserButton_QBaseKeyReleaseEvent(KSplitterCollapserButton* self, QKeyEvent* e);
void KSplitterCollapserButton_MouseMoveEvent(KSplitterCollapserButton* self, QMouseEvent* e);
void KSplitterCollapserButton_OnMouseMoveEvent(KSplitterCollapserButton* self, intptr_t slot);
void KSplitterCollapserButton_QBaseMouseMoveEvent(KSplitterCollapserButton* self, QMouseEvent* e);
void KSplitterCollapserButton_FocusInEvent(KSplitterCollapserButton* self, QFocusEvent* e);
void KSplitterCollapserButton_OnFocusInEvent(KSplitterCollapserButton* self, intptr_t slot);
void KSplitterCollapserButton_QBaseFocusInEvent(KSplitterCollapserButton* self, QFocusEvent* e);
void KSplitterCollapserButton_FocusOutEvent(KSplitterCollapserButton* self, QFocusEvent* e);
void KSplitterCollapserButton_OnFocusOutEvent(KSplitterCollapserButton* self, intptr_t slot);
void KSplitterCollapserButton_QBaseFocusOutEvent(KSplitterCollapserButton* self, QFocusEvent* e);
int KSplitterCollapserButton_DevType(const KSplitterCollapserButton* self);
void KSplitterCollapserButton_OnDevType(const KSplitterCollapserButton* self, intptr_t slot);
int KSplitterCollapserButton_QBaseDevType(const KSplitterCollapserButton* self);
void KSplitterCollapserButton_SetVisible(KSplitterCollapserButton* self, bool visible);
void KSplitterCollapserButton_OnSetVisible(KSplitterCollapserButton* self, intptr_t slot);
void KSplitterCollapserButton_QBaseSetVisible(KSplitterCollapserButton* self, bool visible);
int KSplitterCollapserButton_HeightForWidth(const KSplitterCollapserButton* self, int param1);
void KSplitterCollapserButton_OnHeightForWidth(const KSplitterCollapserButton* self, intptr_t slot);
int KSplitterCollapserButton_QBaseHeightForWidth(const KSplitterCollapserButton* self, int param1);
bool KSplitterCollapserButton_HasHeightForWidth(const KSplitterCollapserButton* self);
void KSplitterCollapserButton_OnHasHeightForWidth(const KSplitterCollapserButton* self, intptr_t slot);
bool KSplitterCollapserButton_QBaseHasHeightForWidth(const KSplitterCollapserButton* self);
QPaintEngine* KSplitterCollapserButton_PaintEngine(const KSplitterCollapserButton* self);
void KSplitterCollapserButton_OnPaintEngine(const KSplitterCollapserButton* self, intptr_t slot);
QPaintEngine* KSplitterCollapserButton_QBasePaintEngine(const KSplitterCollapserButton* self);
void KSplitterCollapserButton_MouseDoubleClickEvent(KSplitterCollapserButton* self, QMouseEvent* event);
void KSplitterCollapserButton_OnMouseDoubleClickEvent(KSplitterCollapserButton* self, intptr_t slot);
void KSplitterCollapserButton_QBaseMouseDoubleClickEvent(KSplitterCollapserButton* self, QMouseEvent* event);
void KSplitterCollapserButton_WheelEvent(KSplitterCollapserButton* self, QWheelEvent* event);
void KSplitterCollapserButton_OnWheelEvent(KSplitterCollapserButton* self, intptr_t slot);
void KSplitterCollapserButton_QBaseWheelEvent(KSplitterCollapserButton* self, QWheelEvent* event);
void KSplitterCollapserButton_MoveEvent(KSplitterCollapserButton* self, QMoveEvent* event);
void KSplitterCollapserButton_OnMoveEvent(KSplitterCollapserButton* self, intptr_t slot);
void KSplitterCollapserButton_QBaseMoveEvent(KSplitterCollapserButton* self, QMoveEvent* event);
void KSplitterCollapserButton_ResizeEvent(KSplitterCollapserButton* self, QResizeEvent* event);
void KSplitterCollapserButton_OnResizeEvent(KSplitterCollapserButton* self, intptr_t slot);
void KSplitterCollapserButton_QBaseResizeEvent(KSplitterCollapserButton* self, QResizeEvent* event);
void KSplitterCollapserButton_CloseEvent(KSplitterCollapserButton* self, QCloseEvent* event);
void KSplitterCollapserButton_OnCloseEvent(KSplitterCollapserButton* self, intptr_t slot);
void KSplitterCollapserButton_QBaseCloseEvent(KSplitterCollapserButton* self, QCloseEvent* event);
void KSplitterCollapserButton_ContextMenuEvent(KSplitterCollapserButton* self, QContextMenuEvent* event);
void KSplitterCollapserButton_OnContextMenuEvent(KSplitterCollapserButton* self, intptr_t slot);
void KSplitterCollapserButton_QBaseContextMenuEvent(KSplitterCollapserButton* self, QContextMenuEvent* event);
void KSplitterCollapserButton_TabletEvent(KSplitterCollapserButton* self, QTabletEvent* event);
void KSplitterCollapserButton_OnTabletEvent(KSplitterCollapserButton* self, intptr_t slot);
void KSplitterCollapserButton_QBaseTabletEvent(KSplitterCollapserButton* self, QTabletEvent* event);
void KSplitterCollapserButton_DragEnterEvent(KSplitterCollapserButton* self, QDragEnterEvent* event);
void KSplitterCollapserButton_OnDragEnterEvent(KSplitterCollapserButton* self, intptr_t slot);
void KSplitterCollapserButton_QBaseDragEnterEvent(KSplitterCollapserButton* self, QDragEnterEvent* event);
void KSplitterCollapserButton_DragMoveEvent(KSplitterCollapserButton* self, QDragMoveEvent* event);
void KSplitterCollapserButton_OnDragMoveEvent(KSplitterCollapserButton* self, intptr_t slot);
void KSplitterCollapserButton_QBaseDragMoveEvent(KSplitterCollapserButton* self, QDragMoveEvent* event);
void KSplitterCollapserButton_DragLeaveEvent(KSplitterCollapserButton* self, QDragLeaveEvent* event);
void KSplitterCollapserButton_OnDragLeaveEvent(KSplitterCollapserButton* self, intptr_t slot);
void KSplitterCollapserButton_QBaseDragLeaveEvent(KSplitterCollapserButton* self, QDragLeaveEvent* event);
void KSplitterCollapserButton_DropEvent(KSplitterCollapserButton* self, QDropEvent* event);
void KSplitterCollapserButton_OnDropEvent(KSplitterCollapserButton* self, intptr_t slot);
void KSplitterCollapserButton_QBaseDropEvent(KSplitterCollapserButton* self, QDropEvent* event);
void KSplitterCollapserButton_HideEvent(KSplitterCollapserButton* self, QHideEvent* event);
void KSplitterCollapserButton_OnHideEvent(KSplitterCollapserButton* self, intptr_t slot);
void KSplitterCollapserButton_QBaseHideEvent(KSplitterCollapserButton* self, QHideEvent* event);
bool KSplitterCollapserButton_NativeEvent(KSplitterCollapserButton* self, const libqt_string eventType, void* message, intptr_t* result);
void KSplitterCollapserButton_OnNativeEvent(KSplitterCollapserButton* self, intptr_t slot);
bool KSplitterCollapserButton_QBaseNativeEvent(KSplitterCollapserButton* self, const libqt_string eventType, void* message, intptr_t* result);
int KSplitterCollapserButton_Metric(const KSplitterCollapserButton* self, int param1);
void KSplitterCollapserButton_OnMetric(const KSplitterCollapserButton* self, intptr_t slot);
int KSplitterCollapserButton_QBaseMetric(const KSplitterCollapserButton* self, int param1);
void KSplitterCollapserButton_InitPainter(const KSplitterCollapserButton* self, QPainter* painter);
void KSplitterCollapserButton_OnInitPainter(const KSplitterCollapserButton* self, intptr_t slot);
void KSplitterCollapserButton_QBaseInitPainter(const KSplitterCollapserButton* self, QPainter* painter);
QPaintDevice* KSplitterCollapserButton_Redirected(const KSplitterCollapserButton* self, QPoint* offset);
void KSplitterCollapserButton_OnRedirected(const KSplitterCollapserButton* self, intptr_t slot);
QPaintDevice* KSplitterCollapserButton_QBaseRedirected(const KSplitterCollapserButton* self, QPoint* offset);
QPainter* KSplitterCollapserButton_SharedPainter(const KSplitterCollapserButton* self);
void KSplitterCollapserButton_OnSharedPainter(const KSplitterCollapserButton* self, intptr_t slot);
QPainter* KSplitterCollapserButton_QBaseSharedPainter(const KSplitterCollapserButton* self);
void KSplitterCollapserButton_InputMethodEvent(KSplitterCollapserButton* self, QInputMethodEvent* param1);
void KSplitterCollapserButton_OnInputMethodEvent(KSplitterCollapserButton* self, intptr_t slot);
void KSplitterCollapserButton_QBaseInputMethodEvent(KSplitterCollapserButton* self, QInputMethodEvent* param1);
QVariant* KSplitterCollapserButton_InputMethodQuery(const KSplitterCollapserButton* self, int param1);
void KSplitterCollapserButton_OnInputMethodQuery(const KSplitterCollapserButton* self, intptr_t slot);
QVariant* KSplitterCollapserButton_QBaseInputMethodQuery(const KSplitterCollapserButton* self, int param1);
bool KSplitterCollapserButton_FocusNextPrevChild(KSplitterCollapserButton* self, bool next);
void KSplitterCollapserButton_OnFocusNextPrevChild(KSplitterCollapserButton* self, intptr_t slot);
bool KSplitterCollapserButton_QBaseFocusNextPrevChild(KSplitterCollapserButton* self, bool next);
void KSplitterCollapserButton_ChildEvent(KSplitterCollapserButton* self, QChildEvent* event);
void KSplitterCollapserButton_OnChildEvent(KSplitterCollapserButton* self, intptr_t slot);
void KSplitterCollapserButton_QBaseChildEvent(KSplitterCollapserButton* self, QChildEvent* event);
void KSplitterCollapserButton_CustomEvent(KSplitterCollapserButton* self, QEvent* event);
void KSplitterCollapserButton_OnCustomEvent(KSplitterCollapserButton* self, intptr_t slot);
void KSplitterCollapserButton_QBaseCustomEvent(KSplitterCollapserButton* self, QEvent* event);
void KSplitterCollapserButton_ConnectNotify(KSplitterCollapserButton* self, const QMetaMethod* signal);
void KSplitterCollapserButton_OnConnectNotify(KSplitterCollapserButton* self, intptr_t slot);
void KSplitterCollapserButton_QBaseConnectNotify(KSplitterCollapserButton* self, const QMetaMethod* signal);
void KSplitterCollapserButton_DisconnectNotify(KSplitterCollapserButton* self, const QMetaMethod* signal);
void KSplitterCollapserButton_OnDisconnectNotify(KSplitterCollapserButton* self, intptr_t slot);
void KSplitterCollapserButton_QBaseDisconnectNotify(KSplitterCollapserButton* self, const QMetaMethod* signal);
void KSplitterCollapserButton_UpdateMicroFocus(KSplitterCollapserButton* self);
void KSplitterCollapserButton_OnUpdateMicroFocus(KSplitterCollapserButton* self, intptr_t slot);
void KSplitterCollapserButton_QBaseUpdateMicroFocus(KSplitterCollapserButton* self);
void KSplitterCollapserButton_Create(KSplitterCollapserButton* self);
void KSplitterCollapserButton_OnCreate(KSplitterCollapserButton* self, intptr_t slot);
void KSplitterCollapserButton_QBaseCreate(KSplitterCollapserButton* self);
void KSplitterCollapserButton_Destroy(KSplitterCollapserButton* self);
void KSplitterCollapserButton_OnDestroy(KSplitterCollapserButton* self, intptr_t slot);
void KSplitterCollapserButton_QBaseDestroy(KSplitterCollapserButton* self);
bool KSplitterCollapserButton_FocusNextChild(KSplitterCollapserButton* self);
void KSplitterCollapserButton_OnFocusNextChild(KSplitterCollapserButton* self, intptr_t slot);
bool KSplitterCollapserButton_QBaseFocusNextChild(KSplitterCollapserButton* self);
bool KSplitterCollapserButton_FocusPreviousChild(KSplitterCollapserButton* self);
void KSplitterCollapserButton_OnFocusPreviousChild(KSplitterCollapserButton* self, intptr_t slot);
bool KSplitterCollapserButton_QBaseFocusPreviousChild(KSplitterCollapserButton* self);
QObject* KSplitterCollapserButton_Sender(const KSplitterCollapserButton* self);
void KSplitterCollapserButton_OnSender(const KSplitterCollapserButton* self, intptr_t slot);
QObject* KSplitterCollapserButton_QBaseSender(const KSplitterCollapserButton* self);
int KSplitterCollapserButton_SenderSignalIndex(const KSplitterCollapserButton* self);
void KSplitterCollapserButton_OnSenderSignalIndex(const KSplitterCollapserButton* self, intptr_t slot);
int KSplitterCollapserButton_QBaseSenderSignalIndex(const KSplitterCollapserButton* self);
int KSplitterCollapserButton_Receivers(const KSplitterCollapserButton* self, const char* signal);
void KSplitterCollapserButton_OnReceivers(const KSplitterCollapserButton* self, intptr_t slot);
int KSplitterCollapserButton_QBaseReceivers(const KSplitterCollapserButton* self, const char* signal);
bool KSplitterCollapserButton_IsSignalConnected(const KSplitterCollapserButton* self, const QMetaMethod* signal);
void KSplitterCollapserButton_OnIsSignalConnected(const KSplitterCollapserButton* self, intptr_t slot);
bool KSplitterCollapserButton_QBaseIsSignalConnected(const KSplitterCollapserButton* self, const QMetaMethod* signal);
double KSplitterCollapserButton_GetDecodedMetricF(const KSplitterCollapserButton* self, int metricA, int metricB);
void KSplitterCollapserButton_OnGetDecodedMetricF(const KSplitterCollapserButton* self, intptr_t slot);
double KSplitterCollapserButton_QBaseGetDecodedMetricF(const KSplitterCollapserButton* self, int metricA, int metricB);
void KSplitterCollapserButton_Delete(KSplitterCollapserButton* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
