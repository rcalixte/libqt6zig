#pragma once
#ifndef SRC_EXTRAS_KWIDGETSADDONSC_LIBKTOOLTIPWIDGET_H
#define SRC_EXTRAS_KWIDGETSADDONSC_LIBKTOOLTIPWIDGET_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KToolTipWidget KToolTipWidget;
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
typedef struct QShowEvent QShowEvent;
typedef struct QSize QSize;
typedef struct QTabletEvent QTabletEvent;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
typedef struct QWheelEvent QWheelEvent;
typedef struct QWidget QWidget;
typedef struct QWindow QWindow;
#endif

KToolTipWidget* KToolTipWidget_new(QWidget* parent);
KToolTipWidget* KToolTipWidget_new2();
QMetaObject* KToolTipWidget_MetaObject(const KToolTipWidget* self);
void* KToolTipWidget_Metacast(KToolTipWidget* self, const char* param1);
int KToolTipWidget_Metacall(KToolTipWidget* self, int param1, int param2, void** param3);
void KToolTipWidget_OnMetacall(KToolTipWidget* self, intptr_t slot);
int KToolTipWidget_QBaseMetacall(KToolTipWidget* self, int param1, int param2, void** param3);
libqt_string KToolTipWidget_Tr(const char* s);
void KToolTipWidget_ShowAt(KToolTipWidget* self, const QPoint* pos, QWidget* content, QWindow* transientParent);
void KToolTipWidget_ShowBelow(KToolTipWidget* self, const QRect* rect, QWidget* content, QWindow* transientParent);
int KToolTipWidget_HideDelay(const KToolTipWidget* self);
void KToolTipWidget_HideLater(KToolTipWidget* self);
void KToolTipWidget_SetHideDelay(KToolTipWidget* self, int delay);
void KToolTipWidget_Hidden(KToolTipWidget* self);
void KToolTipWidget_Connect_Hidden(KToolTipWidget* self, intptr_t slot);
void KToolTipWidget_EnterEvent(KToolTipWidget* self, QEnterEvent* event);
void KToolTipWidget_OnEnterEvent(KToolTipWidget* self, intptr_t slot);
void KToolTipWidget_QBaseEnterEvent(KToolTipWidget* self, QEnterEvent* event);
void KToolTipWidget_HideEvent(KToolTipWidget* self, QHideEvent* param1);
void KToolTipWidget_OnHideEvent(KToolTipWidget* self, intptr_t slot);
void KToolTipWidget_QBaseHideEvent(KToolTipWidget* self, QHideEvent* param1);
void KToolTipWidget_LeaveEvent(KToolTipWidget* self, QEvent* param1);
void KToolTipWidget_OnLeaveEvent(KToolTipWidget* self, intptr_t slot);
void KToolTipWidget_QBaseLeaveEvent(KToolTipWidget* self, QEvent* param1);
void KToolTipWidget_PaintEvent(KToolTipWidget* self, QPaintEvent* event);
void KToolTipWidget_OnPaintEvent(KToolTipWidget* self, intptr_t slot);
void KToolTipWidget_QBasePaintEvent(KToolTipWidget* self, QPaintEvent* event);
libqt_string KToolTipWidget_Tr2(const char* s, const char* c);
libqt_string KToolTipWidget_Tr3(const char* s, const char* c, int n);
int KToolTipWidget_DevType(const KToolTipWidget* self);
void KToolTipWidget_OnDevType(const KToolTipWidget* self, intptr_t slot);
int KToolTipWidget_QBaseDevType(const KToolTipWidget* self);
void KToolTipWidget_SetVisible(KToolTipWidget* self, bool visible);
void KToolTipWidget_OnSetVisible(KToolTipWidget* self, intptr_t slot);
void KToolTipWidget_QBaseSetVisible(KToolTipWidget* self, bool visible);
QSize* KToolTipWidget_SizeHint(const KToolTipWidget* self);
void KToolTipWidget_OnSizeHint(const KToolTipWidget* self, intptr_t slot);
QSize* KToolTipWidget_QBaseSizeHint(const KToolTipWidget* self);
QSize* KToolTipWidget_MinimumSizeHint(const KToolTipWidget* self);
void KToolTipWidget_OnMinimumSizeHint(const KToolTipWidget* self, intptr_t slot);
QSize* KToolTipWidget_QBaseMinimumSizeHint(const KToolTipWidget* self);
int KToolTipWidget_HeightForWidth(const KToolTipWidget* self, int param1);
void KToolTipWidget_OnHeightForWidth(const KToolTipWidget* self, intptr_t slot);
int KToolTipWidget_QBaseHeightForWidth(const KToolTipWidget* self, int param1);
bool KToolTipWidget_HasHeightForWidth(const KToolTipWidget* self);
void KToolTipWidget_OnHasHeightForWidth(const KToolTipWidget* self, intptr_t slot);
bool KToolTipWidget_QBaseHasHeightForWidth(const KToolTipWidget* self);
QPaintEngine* KToolTipWidget_PaintEngine(const KToolTipWidget* self);
void KToolTipWidget_OnPaintEngine(const KToolTipWidget* self, intptr_t slot);
QPaintEngine* KToolTipWidget_QBasePaintEngine(const KToolTipWidget* self);
bool KToolTipWidget_Event(KToolTipWidget* self, QEvent* event);
void KToolTipWidget_OnEvent(KToolTipWidget* self, intptr_t slot);
bool KToolTipWidget_QBaseEvent(KToolTipWidget* self, QEvent* event);
void KToolTipWidget_MousePressEvent(KToolTipWidget* self, QMouseEvent* event);
void KToolTipWidget_OnMousePressEvent(KToolTipWidget* self, intptr_t slot);
void KToolTipWidget_QBaseMousePressEvent(KToolTipWidget* self, QMouseEvent* event);
void KToolTipWidget_MouseReleaseEvent(KToolTipWidget* self, QMouseEvent* event);
void KToolTipWidget_OnMouseReleaseEvent(KToolTipWidget* self, intptr_t slot);
void KToolTipWidget_QBaseMouseReleaseEvent(KToolTipWidget* self, QMouseEvent* event);
void KToolTipWidget_MouseDoubleClickEvent(KToolTipWidget* self, QMouseEvent* event);
void KToolTipWidget_OnMouseDoubleClickEvent(KToolTipWidget* self, intptr_t slot);
void KToolTipWidget_QBaseMouseDoubleClickEvent(KToolTipWidget* self, QMouseEvent* event);
void KToolTipWidget_MouseMoveEvent(KToolTipWidget* self, QMouseEvent* event);
void KToolTipWidget_OnMouseMoveEvent(KToolTipWidget* self, intptr_t slot);
void KToolTipWidget_QBaseMouseMoveEvent(KToolTipWidget* self, QMouseEvent* event);
void KToolTipWidget_WheelEvent(KToolTipWidget* self, QWheelEvent* event);
void KToolTipWidget_OnWheelEvent(KToolTipWidget* self, intptr_t slot);
void KToolTipWidget_QBaseWheelEvent(KToolTipWidget* self, QWheelEvent* event);
void KToolTipWidget_KeyPressEvent(KToolTipWidget* self, QKeyEvent* event);
void KToolTipWidget_OnKeyPressEvent(KToolTipWidget* self, intptr_t slot);
void KToolTipWidget_QBaseKeyPressEvent(KToolTipWidget* self, QKeyEvent* event);
void KToolTipWidget_KeyReleaseEvent(KToolTipWidget* self, QKeyEvent* event);
void KToolTipWidget_OnKeyReleaseEvent(KToolTipWidget* self, intptr_t slot);
void KToolTipWidget_QBaseKeyReleaseEvent(KToolTipWidget* self, QKeyEvent* event);
void KToolTipWidget_FocusInEvent(KToolTipWidget* self, QFocusEvent* event);
void KToolTipWidget_OnFocusInEvent(KToolTipWidget* self, intptr_t slot);
void KToolTipWidget_QBaseFocusInEvent(KToolTipWidget* self, QFocusEvent* event);
void KToolTipWidget_FocusOutEvent(KToolTipWidget* self, QFocusEvent* event);
void KToolTipWidget_OnFocusOutEvent(KToolTipWidget* self, intptr_t slot);
void KToolTipWidget_QBaseFocusOutEvent(KToolTipWidget* self, QFocusEvent* event);
void KToolTipWidget_MoveEvent(KToolTipWidget* self, QMoveEvent* event);
void KToolTipWidget_OnMoveEvent(KToolTipWidget* self, intptr_t slot);
void KToolTipWidget_QBaseMoveEvent(KToolTipWidget* self, QMoveEvent* event);
void KToolTipWidget_ResizeEvent(KToolTipWidget* self, QResizeEvent* event);
void KToolTipWidget_OnResizeEvent(KToolTipWidget* self, intptr_t slot);
void KToolTipWidget_QBaseResizeEvent(KToolTipWidget* self, QResizeEvent* event);
void KToolTipWidget_CloseEvent(KToolTipWidget* self, QCloseEvent* event);
void KToolTipWidget_OnCloseEvent(KToolTipWidget* self, intptr_t slot);
void KToolTipWidget_QBaseCloseEvent(KToolTipWidget* self, QCloseEvent* event);
void KToolTipWidget_ContextMenuEvent(KToolTipWidget* self, QContextMenuEvent* event);
void KToolTipWidget_OnContextMenuEvent(KToolTipWidget* self, intptr_t slot);
void KToolTipWidget_QBaseContextMenuEvent(KToolTipWidget* self, QContextMenuEvent* event);
void KToolTipWidget_TabletEvent(KToolTipWidget* self, QTabletEvent* event);
void KToolTipWidget_OnTabletEvent(KToolTipWidget* self, intptr_t slot);
void KToolTipWidget_QBaseTabletEvent(KToolTipWidget* self, QTabletEvent* event);
void KToolTipWidget_ActionEvent(KToolTipWidget* self, QActionEvent* event);
void KToolTipWidget_OnActionEvent(KToolTipWidget* self, intptr_t slot);
void KToolTipWidget_QBaseActionEvent(KToolTipWidget* self, QActionEvent* event);
void KToolTipWidget_DragEnterEvent(KToolTipWidget* self, QDragEnterEvent* event);
void KToolTipWidget_OnDragEnterEvent(KToolTipWidget* self, intptr_t slot);
void KToolTipWidget_QBaseDragEnterEvent(KToolTipWidget* self, QDragEnterEvent* event);
void KToolTipWidget_DragMoveEvent(KToolTipWidget* self, QDragMoveEvent* event);
void KToolTipWidget_OnDragMoveEvent(KToolTipWidget* self, intptr_t slot);
void KToolTipWidget_QBaseDragMoveEvent(KToolTipWidget* self, QDragMoveEvent* event);
void KToolTipWidget_DragLeaveEvent(KToolTipWidget* self, QDragLeaveEvent* event);
void KToolTipWidget_OnDragLeaveEvent(KToolTipWidget* self, intptr_t slot);
void KToolTipWidget_QBaseDragLeaveEvent(KToolTipWidget* self, QDragLeaveEvent* event);
void KToolTipWidget_DropEvent(KToolTipWidget* self, QDropEvent* event);
void KToolTipWidget_OnDropEvent(KToolTipWidget* self, intptr_t slot);
void KToolTipWidget_QBaseDropEvent(KToolTipWidget* self, QDropEvent* event);
void KToolTipWidget_ShowEvent(KToolTipWidget* self, QShowEvent* event);
void KToolTipWidget_OnShowEvent(KToolTipWidget* self, intptr_t slot);
void KToolTipWidget_QBaseShowEvent(KToolTipWidget* self, QShowEvent* event);
bool KToolTipWidget_NativeEvent(KToolTipWidget* self, const libqt_string eventType, void* message, intptr_t* result);
void KToolTipWidget_OnNativeEvent(KToolTipWidget* self, intptr_t slot);
bool KToolTipWidget_QBaseNativeEvent(KToolTipWidget* self, const libqt_string eventType, void* message, intptr_t* result);
void KToolTipWidget_ChangeEvent(KToolTipWidget* self, QEvent* param1);
void KToolTipWidget_OnChangeEvent(KToolTipWidget* self, intptr_t slot);
void KToolTipWidget_QBaseChangeEvent(KToolTipWidget* self, QEvent* param1);
int KToolTipWidget_Metric(const KToolTipWidget* self, int param1);
void KToolTipWidget_OnMetric(const KToolTipWidget* self, intptr_t slot);
int KToolTipWidget_QBaseMetric(const KToolTipWidget* self, int param1);
void KToolTipWidget_InitPainter(const KToolTipWidget* self, QPainter* painter);
void KToolTipWidget_OnInitPainter(const KToolTipWidget* self, intptr_t slot);
void KToolTipWidget_QBaseInitPainter(const KToolTipWidget* self, QPainter* painter);
QPaintDevice* KToolTipWidget_Redirected(const KToolTipWidget* self, QPoint* offset);
void KToolTipWidget_OnRedirected(const KToolTipWidget* self, intptr_t slot);
QPaintDevice* KToolTipWidget_QBaseRedirected(const KToolTipWidget* self, QPoint* offset);
QPainter* KToolTipWidget_SharedPainter(const KToolTipWidget* self);
void KToolTipWidget_OnSharedPainter(const KToolTipWidget* self, intptr_t slot);
QPainter* KToolTipWidget_QBaseSharedPainter(const KToolTipWidget* self);
void KToolTipWidget_InputMethodEvent(KToolTipWidget* self, QInputMethodEvent* param1);
void KToolTipWidget_OnInputMethodEvent(KToolTipWidget* self, intptr_t slot);
void KToolTipWidget_QBaseInputMethodEvent(KToolTipWidget* self, QInputMethodEvent* param1);
QVariant* KToolTipWidget_InputMethodQuery(const KToolTipWidget* self, int param1);
void KToolTipWidget_OnInputMethodQuery(const KToolTipWidget* self, intptr_t slot);
QVariant* KToolTipWidget_QBaseInputMethodQuery(const KToolTipWidget* self, int param1);
bool KToolTipWidget_FocusNextPrevChild(KToolTipWidget* self, bool next);
void KToolTipWidget_OnFocusNextPrevChild(KToolTipWidget* self, intptr_t slot);
bool KToolTipWidget_QBaseFocusNextPrevChild(KToolTipWidget* self, bool next);
bool KToolTipWidget_EventFilter(KToolTipWidget* self, QObject* watched, QEvent* event);
void KToolTipWidget_OnEventFilter(KToolTipWidget* self, intptr_t slot);
bool KToolTipWidget_QBaseEventFilter(KToolTipWidget* self, QObject* watched, QEvent* event);
void KToolTipWidget_TimerEvent(KToolTipWidget* self, QTimerEvent* event);
void KToolTipWidget_OnTimerEvent(KToolTipWidget* self, intptr_t slot);
void KToolTipWidget_QBaseTimerEvent(KToolTipWidget* self, QTimerEvent* event);
void KToolTipWidget_ChildEvent(KToolTipWidget* self, QChildEvent* event);
void KToolTipWidget_OnChildEvent(KToolTipWidget* self, intptr_t slot);
void KToolTipWidget_QBaseChildEvent(KToolTipWidget* self, QChildEvent* event);
void KToolTipWidget_CustomEvent(KToolTipWidget* self, QEvent* event);
void KToolTipWidget_OnCustomEvent(KToolTipWidget* self, intptr_t slot);
void KToolTipWidget_QBaseCustomEvent(KToolTipWidget* self, QEvent* event);
void KToolTipWidget_ConnectNotify(KToolTipWidget* self, const QMetaMethod* signal);
void KToolTipWidget_OnConnectNotify(KToolTipWidget* self, intptr_t slot);
void KToolTipWidget_QBaseConnectNotify(KToolTipWidget* self, const QMetaMethod* signal);
void KToolTipWidget_DisconnectNotify(KToolTipWidget* self, const QMetaMethod* signal);
void KToolTipWidget_OnDisconnectNotify(KToolTipWidget* self, intptr_t slot);
void KToolTipWidget_QBaseDisconnectNotify(KToolTipWidget* self, const QMetaMethod* signal);
void KToolTipWidget_UpdateMicroFocus(KToolTipWidget* self);
void KToolTipWidget_OnUpdateMicroFocus(KToolTipWidget* self, intptr_t slot);
void KToolTipWidget_QBaseUpdateMicroFocus(KToolTipWidget* self);
void KToolTipWidget_Create(KToolTipWidget* self);
void KToolTipWidget_OnCreate(KToolTipWidget* self, intptr_t slot);
void KToolTipWidget_QBaseCreate(KToolTipWidget* self);
void KToolTipWidget_Destroy(KToolTipWidget* self);
void KToolTipWidget_OnDestroy(KToolTipWidget* self, intptr_t slot);
void KToolTipWidget_QBaseDestroy(KToolTipWidget* self);
bool KToolTipWidget_FocusNextChild(KToolTipWidget* self);
void KToolTipWidget_OnFocusNextChild(KToolTipWidget* self, intptr_t slot);
bool KToolTipWidget_QBaseFocusNextChild(KToolTipWidget* self);
bool KToolTipWidget_FocusPreviousChild(KToolTipWidget* self);
void KToolTipWidget_OnFocusPreviousChild(KToolTipWidget* self, intptr_t slot);
bool KToolTipWidget_QBaseFocusPreviousChild(KToolTipWidget* self);
QObject* KToolTipWidget_Sender(const KToolTipWidget* self);
void KToolTipWidget_OnSender(const KToolTipWidget* self, intptr_t slot);
QObject* KToolTipWidget_QBaseSender(const KToolTipWidget* self);
int KToolTipWidget_SenderSignalIndex(const KToolTipWidget* self);
void KToolTipWidget_OnSenderSignalIndex(const KToolTipWidget* self, intptr_t slot);
int KToolTipWidget_QBaseSenderSignalIndex(const KToolTipWidget* self);
int KToolTipWidget_Receivers(const KToolTipWidget* self, const char* signal);
void KToolTipWidget_OnReceivers(const KToolTipWidget* self, intptr_t slot);
int KToolTipWidget_QBaseReceivers(const KToolTipWidget* self, const char* signal);
bool KToolTipWidget_IsSignalConnected(const KToolTipWidget* self, const QMetaMethod* signal);
void KToolTipWidget_OnIsSignalConnected(const KToolTipWidget* self, intptr_t slot);
bool KToolTipWidget_QBaseIsSignalConnected(const KToolTipWidget* self, const QMetaMethod* signal);
double KToolTipWidget_GetDecodedMetricF(const KToolTipWidget* self, int metricA, int metricB);
void KToolTipWidget_OnGetDecodedMetricF(const KToolTipWidget* self, intptr_t slot);
double KToolTipWidget_QBaseGetDecodedMetricF(const KToolTipWidget* self, int metricA, int metricB);
void KToolTipWidget_Delete(KToolTipWidget* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
