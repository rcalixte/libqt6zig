#pragma once
#ifndef SRC_EXTRAS_KWIDGETSADDONSC_LIBKCOLLAPSIBLEGROUPBOX_H
#define SRC_EXTRAS_KWIDGETSADDONSC_LIBKCOLLAPSIBLEGROUPBOX_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KCollapsibleGroupBox KCollapsibleGroupBox;
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
typedef struct QWheelEvent QWheelEvent;
typedef struct QWidget QWidget;
#endif

KCollapsibleGroupBox* KCollapsibleGroupBox_new(QWidget* parent);
KCollapsibleGroupBox* KCollapsibleGroupBox_new2();
QMetaObject* KCollapsibleGroupBox_MetaObject(const KCollapsibleGroupBox* self);
void* KCollapsibleGroupBox_Metacast(KCollapsibleGroupBox* self, const char* param1);
int KCollapsibleGroupBox_Metacall(KCollapsibleGroupBox* self, int param1, int param2, void** param3);
void KCollapsibleGroupBox_SetTitle(KCollapsibleGroupBox* self, const libqt_string title);
libqt_string KCollapsibleGroupBox_Title(const KCollapsibleGroupBox* self);
void KCollapsibleGroupBox_SetExpanded(KCollapsibleGroupBox* self, bool expanded);
bool KCollapsibleGroupBox_IsExpanded(const KCollapsibleGroupBox* self);
QSize* KCollapsibleGroupBox_SizeHint(const KCollapsibleGroupBox* self);
QSize* KCollapsibleGroupBox_MinimumSizeHint(const KCollapsibleGroupBox* self);
void KCollapsibleGroupBox_Toggle(KCollapsibleGroupBox* self);
void KCollapsibleGroupBox_Expand(KCollapsibleGroupBox* self);
void KCollapsibleGroupBox_Collapse(KCollapsibleGroupBox* self);
void KCollapsibleGroupBox_TitleChanged(KCollapsibleGroupBox* self);
void KCollapsibleGroupBox_Connect_TitleChanged(KCollapsibleGroupBox* self, intptr_t slot);
void KCollapsibleGroupBox_ExpandedChanged(KCollapsibleGroupBox* self);
void KCollapsibleGroupBox_Connect_ExpandedChanged(KCollapsibleGroupBox* self, intptr_t slot);
void KCollapsibleGroupBox_PaintEvent(KCollapsibleGroupBox* self, QPaintEvent* param1);
bool KCollapsibleGroupBox_Event(KCollapsibleGroupBox* self, QEvent* param1);
void KCollapsibleGroupBox_MousePressEvent(KCollapsibleGroupBox* self, QMouseEvent* param1);
void KCollapsibleGroupBox_MouseMoveEvent(KCollapsibleGroupBox* self, QMouseEvent* param1);
void KCollapsibleGroupBox_LeaveEvent(KCollapsibleGroupBox* self, QEvent* param1);
void KCollapsibleGroupBox_KeyPressEvent(KCollapsibleGroupBox* self, QKeyEvent* param1);
void KCollapsibleGroupBox_ResizeEvent(KCollapsibleGroupBox* self, QResizeEvent* param1);
void KCollapsibleGroupBox_OnMetaObject(const KCollapsibleGroupBox* self, intptr_t slot);
QMetaObject* KCollapsibleGroupBox_SuperMetaObject(const KCollapsibleGroupBox* self);
void KCollapsibleGroupBox_OnMetacast(KCollapsibleGroupBox* self, intptr_t slot);
void* KCollapsibleGroupBox_SuperMetacast(KCollapsibleGroupBox* self, const char* param1);
void KCollapsibleGroupBox_OnMetacall(KCollapsibleGroupBox* self, intptr_t slot);
int KCollapsibleGroupBox_SuperMetacall(KCollapsibleGroupBox* self, int param1, int param2, void** param3);
void KCollapsibleGroupBox_OnSizeHint(const KCollapsibleGroupBox* self, intptr_t slot);
QSize* KCollapsibleGroupBox_SuperSizeHint(const KCollapsibleGroupBox* self);
void KCollapsibleGroupBox_OnMinimumSizeHint(const KCollapsibleGroupBox* self, intptr_t slot);
QSize* KCollapsibleGroupBox_SuperMinimumSizeHint(const KCollapsibleGroupBox* self);
void KCollapsibleGroupBox_OnPaintEvent(KCollapsibleGroupBox* self, intptr_t slot);
void KCollapsibleGroupBox_SuperPaintEvent(KCollapsibleGroupBox* self, QPaintEvent* param1);
void KCollapsibleGroupBox_OnEvent(KCollapsibleGroupBox* self, intptr_t slot);
bool KCollapsibleGroupBox_SuperEvent(KCollapsibleGroupBox* self, QEvent* param1);
void KCollapsibleGroupBox_OnMousePressEvent(KCollapsibleGroupBox* self, intptr_t slot);
void KCollapsibleGroupBox_SuperMousePressEvent(KCollapsibleGroupBox* self, QMouseEvent* param1);
void KCollapsibleGroupBox_OnMouseMoveEvent(KCollapsibleGroupBox* self, intptr_t slot);
void KCollapsibleGroupBox_SuperMouseMoveEvent(KCollapsibleGroupBox* self, QMouseEvent* param1);
void KCollapsibleGroupBox_OnLeaveEvent(KCollapsibleGroupBox* self, intptr_t slot);
void KCollapsibleGroupBox_SuperLeaveEvent(KCollapsibleGroupBox* self, QEvent* param1);
void KCollapsibleGroupBox_OnKeyPressEvent(KCollapsibleGroupBox* self, intptr_t slot);
void KCollapsibleGroupBox_SuperKeyPressEvent(KCollapsibleGroupBox* self, QKeyEvent* param1);
void KCollapsibleGroupBox_OnResizeEvent(KCollapsibleGroupBox* self, intptr_t slot);
void KCollapsibleGroupBox_SuperResizeEvent(KCollapsibleGroupBox* self, QResizeEvent* param1);
int KCollapsibleGroupBox_DevType(const KCollapsibleGroupBox* self);
void KCollapsibleGroupBox_OnDevType(const KCollapsibleGroupBox* self, intptr_t slot);
int KCollapsibleGroupBox_SuperDevType(const KCollapsibleGroupBox* self);
void KCollapsibleGroupBox_SetVisible(KCollapsibleGroupBox* self, bool visible);
void KCollapsibleGroupBox_OnSetVisible(KCollapsibleGroupBox* self, intptr_t slot);
void KCollapsibleGroupBox_SuperSetVisible(KCollapsibleGroupBox* self, bool visible);
int KCollapsibleGroupBox_HeightForWidth(const KCollapsibleGroupBox* self, int param1);
void KCollapsibleGroupBox_OnHeightForWidth(const KCollapsibleGroupBox* self, intptr_t slot);
int KCollapsibleGroupBox_SuperHeightForWidth(const KCollapsibleGroupBox* self, int param1);
bool KCollapsibleGroupBox_HasHeightForWidth(const KCollapsibleGroupBox* self);
void KCollapsibleGroupBox_OnHasHeightForWidth(const KCollapsibleGroupBox* self, intptr_t slot);
bool KCollapsibleGroupBox_SuperHasHeightForWidth(const KCollapsibleGroupBox* self);
QPaintEngine* KCollapsibleGroupBox_PaintEngine(const KCollapsibleGroupBox* self);
void KCollapsibleGroupBox_OnPaintEngine(const KCollapsibleGroupBox* self, intptr_t slot);
QPaintEngine* KCollapsibleGroupBox_SuperPaintEngine(const KCollapsibleGroupBox* self);
void KCollapsibleGroupBox_MouseReleaseEvent(KCollapsibleGroupBox* self, QMouseEvent* event);
void KCollapsibleGroupBox_OnMouseReleaseEvent(KCollapsibleGroupBox* self, intptr_t slot);
void KCollapsibleGroupBox_SuperMouseReleaseEvent(KCollapsibleGroupBox* self, QMouseEvent* event);
void KCollapsibleGroupBox_MouseDoubleClickEvent(KCollapsibleGroupBox* self, QMouseEvent* event);
void KCollapsibleGroupBox_OnMouseDoubleClickEvent(KCollapsibleGroupBox* self, intptr_t slot);
void KCollapsibleGroupBox_SuperMouseDoubleClickEvent(KCollapsibleGroupBox* self, QMouseEvent* event);
void KCollapsibleGroupBox_WheelEvent(KCollapsibleGroupBox* self, QWheelEvent* event);
void KCollapsibleGroupBox_OnWheelEvent(KCollapsibleGroupBox* self, intptr_t slot);
void KCollapsibleGroupBox_SuperWheelEvent(KCollapsibleGroupBox* self, QWheelEvent* event);
void KCollapsibleGroupBox_KeyReleaseEvent(KCollapsibleGroupBox* self, QKeyEvent* event);
void KCollapsibleGroupBox_OnKeyReleaseEvent(KCollapsibleGroupBox* self, intptr_t slot);
void KCollapsibleGroupBox_SuperKeyReleaseEvent(KCollapsibleGroupBox* self, QKeyEvent* event);
void KCollapsibleGroupBox_FocusInEvent(KCollapsibleGroupBox* self, QFocusEvent* event);
void KCollapsibleGroupBox_OnFocusInEvent(KCollapsibleGroupBox* self, intptr_t slot);
void KCollapsibleGroupBox_SuperFocusInEvent(KCollapsibleGroupBox* self, QFocusEvent* event);
void KCollapsibleGroupBox_FocusOutEvent(KCollapsibleGroupBox* self, QFocusEvent* event);
void KCollapsibleGroupBox_OnFocusOutEvent(KCollapsibleGroupBox* self, intptr_t slot);
void KCollapsibleGroupBox_SuperFocusOutEvent(KCollapsibleGroupBox* self, QFocusEvent* event);
void KCollapsibleGroupBox_EnterEvent(KCollapsibleGroupBox* self, QEnterEvent* event);
void KCollapsibleGroupBox_OnEnterEvent(KCollapsibleGroupBox* self, intptr_t slot);
void KCollapsibleGroupBox_SuperEnterEvent(KCollapsibleGroupBox* self, QEnterEvent* event);
void KCollapsibleGroupBox_MoveEvent(KCollapsibleGroupBox* self, QMoveEvent* event);
void KCollapsibleGroupBox_OnMoveEvent(KCollapsibleGroupBox* self, intptr_t slot);
void KCollapsibleGroupBox_SuperMoveEvent(KCollapsibleGroupBox* self, QMoveEvent* event);
void KCollapsibleGroupBox_CloseEvent(KCollapsibleGroupBox* self, QCloseEvent* event);
void KCollapsibleGroupBox_OnCloseEvent(KCollapsibleGroupBox* self, intptr_t slot);
void KCollapsibleGroupBox_SuperCloseEvent(KCollapsibleGroupBox* self, QCloseEvent* event);
void KCollapsibleGroupBox_ContextMenuEvent(KCollapsibleGroupBox* self, QContextMenuEvent* event);
void KCollapsibleGroupBox_OnContextMenuEvent(KCollapsibleGroupBox* self, intptr_t slot);
void KCollapsibleGroupBox_SuperContextMenuEvent(KCollapsibleGroupBox* self, QContextMenuEvent* event);
void KCollapsibleGroupBox_TabletEvent(KCollapsibleGroupBox* self, QTabletEvent* event);
void KCollapsibleGroupBox_OnTabletEvent(KCollapsibleGroupBox* self, intptr_t slot);
void KCollapsibleGroupBox_SuperTabletEvent(KCollapsibleGroupBox* self, QTabletEvent* event);
void KCollapsibleGroupBox_ActionEvent(KCollapsibleGroupBox* self, QActionEvent* event);
void KCollapsibleGroupBox_OnActionEvent(KCollapsibleGroupBox* self, intptr_t slot);
void KCollapsibleGroupBox_SuperActionEvent(KCollapsibleGroupBox* self, QActionEvent* event);
void KCollapsibleGroupBox_DragEnterEvent(KCollapsibleGroupBox* self, QDragEnterEvent* event);
void KCollapsibleGroupBox_OnDragEnterEvent(KCollapsibleGroupBox* self, intptr_t slot);
void KCollapsibleGroupBox_SuperDragEnterEvent(KCollapsibleGroupBox* self, QDragEnterEvent* event);
void KCollapsibleGroupBox_DragMoveEvent(KCollapsibleGroupBox* self, QDragMoveEvent* event);
void KCollapsibleGroupBox_OnDragMoveEvent(KCollapsibleGroupBox* self, intptr_t slot);
void KCollapsibleGroupBox_SuperDragMoveEvent(KCollapsibleGroupBox* self, QDragMoveEvent* event);
void KCollapsibleGroupBox_DragLeaveEvent(KCollapsibleGroupBox* self, QDragLeaveEvent* event);
void KCollapsibleGroupBox_OnDragLeaveEvent(KCollapsibleGroupBox* self, intptr_t slot);
void KCollapsibleGroupBox_SuperDragLeaveEvent(KCollapsibleGroupBox* self, QDragLeaveEvent* event);
void KCollapsibleGroupBox_DropEvent(KCollapsibleGroupBox* self, QDropEvent* event);
void KCollapsibleGroupBox_OnDropEvent(KCollapsibleGroupBox* self, intptr_t slot);
void KCollapsibleGroupBox_SuperDropEvent(KCollapsibleGroupBox* self, QDropEvent* event);
void KCollapsibleGroupBox_ShowEvent(KCollapsibleGroupBox* self, QShowEvent* event);
void KCollapsibleGroupBox_OnShowEvent(KCollapsibleGroupBox* self, intptr_t slot);
void KCollapsibleGroupBox_SuperShowEvent(KCollapsibleGroupBox* self, QShowEvent* event);
void KCollapsibleGroupBox_HideEvent(KCollapsibleGroupBox* self, QHideEvent* event);
void KCollapsibleGroupBox_OnHideEvent(KCollapsibleGroupBox* self, intptr_t slot);
void KCollapsibleGroupBox_SuperHideEvent(KCollapsibleGroupBox* self, QHideEvent* event);
bool KCollapsibleGroupBox_NativeEvent(KCollapsibleGroupBox* self, const libqt_string eventType, void* message, intptr_t* result);
void KCollapsibleGroupBox_OnNativeEvent(KCollapsibleGroupBox* self, intptr_t slot);
bool KCollapsibleGroupBox_SuperNativeEvent(KCollapsibleGroupBox* self, const libqt_string eventType, void* message, intptr_t* result);
void KCollapsibleGroupBox_ChangeEvent(KCollapsibleGroupBox* self, QEvent* param1);
void KCollapsibleGroupBox_OnChangeEvent(KCollapsibleGroupBox* self, intptr_t slot);
void KCollapsibleGroupBox_SuperChangeEvent(KCollapsibleGroupBox* self, QEvent* param1);
int KCollapsibleGroupBox_Metric(const KCollapsibleGroupBox* self, int param1);
void KCollapsibleGroupBox_OnMetric(const KCollapsibleGroupBox* self, intptr_t slot);
int KCollapsibleGroupBox_SuperMetric(const KCollapsibleGroupBox* self, int param1);
void KCollapsibleGroupBox_InitPainter(const KCollapsibleGroupBox* self, QPainter* painter);
void KCollapsibleGroupBox_OnInitPainter(const KCollapsibleGroupBox* self, intptr_t slot);
void KCollapsibleGroupBox_SuperInitPainter(const KCollapsibleGroupBox* self, QPainter* painter);
QPaintDevice* KCollapsibleGroupBox_Redirected(const KCollapsibleGroupBox* self, QPoint* offset);
void KCollapsibleGroupBox_OnRedirected(const KCollapsibleGroupBox* self, intptr_t slot);
QPaintDevice* KCollapsibleGroupBox_SuperRedirected(const KCollapsibleGroupBox* self, QPoint* offset);
QPainter* KCollapsibleGroupBox_SharedPainter(const KCollapsibleGroupBox* self);
void KCollapsibleGroupBox_OnSharedPainter(const KCollapsibleGroupBox* self, intptr_t slot);
QPainter* KCollapsibleGroupBox_SuperSharedPainter(const KCollapsibleGroupBox* self);
void KCollapsibleGroupBox_InputMethodEvent(KCollapsibleGroupBox* self, QInputMethodEvent* param1);
void KCollapsibleGroupBox_OnInputMethodEvent(KCollapsibleGroupBox* self, intptr_t slot);
void KCollapsibleGroupBox_SuperInputMethodEvent(KCollapsibleGroupBox* self, QInputMethodEvent* param1);
QVariant* KCollapsibleGroupBox_InputMethodQuery(const KCollapsibleGroupBox* self, int param1);
void KCollapsibleGroupBox_OnInputMethodQuery(const KCollapsibleGroupBox* self, intptr_t slot);
QVariant* KCollapsibleGroupBox_SuperInputMethodQuery(const KCollapsibleGroupBox* self, int param1);
bool KCollapsibleGroupBox_FocusNextPrevChild(KCollapsibleGroupBox* self, bool next);
void KCollapsibleGroupBox_OnFocusNextPrevChild(KCollapsibleGroupBox* self, intptr_t slot);
bool KCollapsibleGroupBox_SuperFocusNextPrevChild(KCollapsibleGroupBox* self, bool next);
bool KCollapsibleGroupBox_EventFilter(KCollapsibleGroupBox* self, QObject* watched, QEvent* event);
void KCollapsibleGroupBox_OnEventFilter(KCollapsibleGroupBox* self, intptr_t slot);
bool KCollapsibleGroupBox_SuperEventFilter(KCollapsibleGroupBox* self, QObject* watched, QEvent* event);
void KCollapsibleGroupBox_TimerEvent(KCollapsibleGroupBox* self, QTimerEvent* event);
void KCollapsibleGroupBox_OnTimerEvent(KCollapsibleGroupBox* self, intptr_t slot);
void KCollapsibleGroupBox_SuperTimerEvent(KCollapsibleGroupBox* self, QTimerEvent* event);
void KCollapsibleGroupBox_ChildEvent(KCollapsibleGroupBox* self, QChildEvent* event);
void KCollapsibleGroupBox_OnChildEvent(KCollapsibleGroupBox* self, intptr_t slot);
void KCollapsibleGroupBox_SuperChildEvent(KCollapsibleGroupBox* self, QChildEvent* event);
void KCollapsibleGroupBox_CustomEvent(KCollapsibleGroupBox* self, QEvent* event);
void KCollapsibleGroupBox_OnCustomEvent(KCollapsibleGroupBox* self, intptr_t slot);
void KCollapsibleGroupBox_SuperCustomEvent(KCollapsibleGroupBox* self, QEvent* event);
void KCollapsibleGroupBox_ConnectNotify(KCollapsibleGroupBox* self, const QMetaMethod* signal);
void KCollapsibleGroupBox_OnConnectNotify(KCollapsibleGroupBox* self, intptr_t slot);
void KCollapsibleGroupBox_SuperConnectNotify(KCollapsibleGroupBox* self, const QMetaMethod* signal);
void KCollapsibleGroupBox_DisconnectNotify(KCollapsibleGroupBox* self, const QMetaMethod* signal);
void KCollapsibleGroupBox_OnDisconnectNotify(KCollapsibleGroupBox* self, intptr_t slot);
void KCollapsibleGroupBox_SuperDisconnectNotify(KCollapsibleGroupBox* self, const QMetaMethod* signal);
void KCollapsibleGroupBox_UpdateMicroFocus(KCollapsibleGroupBox* self);
void KCollapsibleGroupBox_OnUpdateMicroFocus(KCollapsibleGroupBox* self, intptr_t slot);
void KCollapsibleGroupBox_SuperUpdateMicroFocus(KCollapsibleGroupBox* self);
void KCollapsibleGroupBox_Create(KCollapsibleGroupBox* self);
void KCollapsibleGroupBox_OnCreate(KCollapsibleGroupBox* self, intptr_t slot);
void KCollapsibleGroupBox_SuperCreate(KCollapsibleGroupBox* self);
void KCollapsibleGroupBox_Destroy(KCollapsibleGroupBox* self);
void KCollapsibleGroupBox_OnDestroy(KCollapsibleGroupBox* self, intptr_t slot);
void KCollapsibleGroupBox_SuperDestroy(KCollapsibleGroupBox* self);
bool KCollapsibleGroupBox_FocusNextChild(KCollapsibleGroupBox* self);
void KCollapsibleGroupBox_OnFocusNextChild(KCollapsibleGroupBox* self, intptr_t slot);
bool KCollapsibleGroupBox_SuperFocusNextChild(KCollapsibleGroupBox* self);
bool KCollapsibleGroupBox_FocusPreviousChild(KCollapsibleGroupBox* self);
void KCollapsibleGroupBox_OnFocusPreviousChild(KCollapsibleGroupBox* self, intptr_t slot);
bool KCollapsibleGroupBox_SuperFocusPreviousChild(KCollapsibleGroupBox* self);
QObject* KCollapsibleGroupBox_Sender(const KCollapsibleGroupBox* self);
void KCollapsibleGroupBox_OnSender(const KCollapsibleGroupBox* self, intptr_t slot);
QObject* KCollapsibleGroupBox_SuperSender(const KCollapsibleGroupBox* self);
int KCollapsibleGroupBox_SenderSignalIndex(const KCollapsibleGroupBox* self);
void KCollapsibleGroupBox_OnSenderSignalIndex(const KCollapsibleGroupBox* self, intptr_t slot);
int KCollapsibleGroupBox_SuperSenderSignalIndex(const KCollapsibleGroupBox* self);
int KCollapsibleGroupBox_Receivers(const KCollapsibleGroupBox* self, const char* signal);
void KCollapsibleGroupBox_OnReceivers(const KCollapsibleGroupBox* self, intptr_t slot);
int KCollapsibleGroupBox_SuperReceivers(const KCollapsibleGroupBox* self, const char* signal);
bool KCollapsibleGroupBox_IsSignalConnected(const KCollapsibleGroupBox* self, const QMetaMethod* signal);
void KCollapsibleGroupBox_OnIsSignalConnected(const KCollapsibleGroupBox* self, intptr_t slot);
bool KCollapsibleGroupBox_SuperIsSignalConnected(const KCollapsibleGroupBox* self, const QMetaMethod* signal);
double KCollapsibleGroupBox_GetDecodedMetricF(const KCollapsibleGroupBox* self, int metricA, int metricB);
void KCollapsibleGroupBox_OnGetDecodedMetricF(const KCollapsibleGroupBox* self, intptr_t slot);
double KCollapsibleGroupBox_SuperGetDecodedMetricF(const KCollapsibleGroupBox* self, int metricA, int metricB);
void KCollapsibleGroupBox_Delete(KCollapsibleGroupBox* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
