#pragma once
#ifndef SRC_EXTRAS_KCONFIGWIDGETSC_LIBKCOMMANDBAR_H
#define SRC_EXTRAS_KCONFIGWIDGETSC_LIBKCOMMANDBAR_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KCommandBar__ActionGroup)
typedef KCommandBar::ActionGroup KCommandBar__ActionGroup;
#endif
#else
typedef struct KCommandBar KCommandBar;
typedef struct KCommandBar__ActionGroup KCommandBar__ActionGroup;
typedef struct QAction QAction;
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
typedef struct QFrame QFrame;
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
typedef struct QStyleOptionFrame QStyleOptionFrame;
typedef struct QTabletEvent QTabletEvent;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
typedef struct QWheelEvent QWheelEvent;
typedef struct QWidget QWidget;
#endif

KCommandBar* KCommandBar_new(QWidget* parent);
QMetaObject* KCommandBar_MetaObject(const KCommandBar* self);
void* KCommandBar_Metacast(KCommandBar* self, const char* param1);
int KCommandBar_Metacall(KCommandBar* self, int param1, int param2, void** param3);
void KCommandBar_SetActions(KCommandBar* self, const libqt_list /* of KCommandBar__ActionGroup* */ actions);
void KCommandBar_Show(KCommandBar* self);
bool KCommandBar_EventFilter(KCommandBar* self, QObject* obj, QEvent* event);
void KCommandBar_OnMetaObject(const KCommandBar* self, intptr_t slot);
QMetaObject* KCommandBar_SuperMetaObject(const KCommandBar* self);
void KCommandBar_OnMetacast(KCommandBar* self, intptr_t slot);
void* KCommandBar_SuperMetacast(KCommandBar* self, const char* param1);
void KCommandBar_OnMetacall(KCommandBar* self, intptr_t slot);
int KCommandBar_SuperMetacall(KCommandBar* self, int param1, int param2, void** param3);
void KCommandBar_OnEventFilter(KCommandBar* self, intptr_t slot);
bool KCommandBar_SuperEventFilter(KCommandBar* self, QObject* obj, QEvent* event);
QSize* KCommandBar_SizeHint(const KCommandBar* self);
void KCommandBar_OnSizeHint(const KCommandBar* self, intptr_t slot);
QSize* KCommandBar_SuperSizeHint(const KCommandBar* self);
bool KCommandBar_Event(KCommandBar* self, QEvent* e);
void KCommandBar_OnEvent(KCommandBar* self, intptr_t slot);
bool KCommandBar_SuperEvent(KCommandBar* self, QEvent* e);
void KCommandBar_PaintEvent(KCommandBar* self, QPaintEvent* param1);
void KCommandBar_OnPaintEvent(KCommandBar* self, intptr_t slot);
void KCommandBar_SuperPaintEvent(KCommandBar* self, QPaintEvent* param1);
void KCommandBar_ChangeEvent(KCommandBar* self, QEvent* param1);
void KCommandBar_OnChangeEvent(KCommandBar* self, intptr_t slot);
void KCommandBar_SuperChangeEvent(KCommandBar* self, QEvent* param1);
void KCommandBar_InitStyleOption(const KCommandBar* self, QStyleOptionFrame* option);
void KCommandBar_OnInitStyleOption(const KCommandBar* self, intptr_t slot);
void KCommandBar_SuperInitStyleOption(const KCommandBar* self, QStyleOptionFrame* option);
int KCommandBar_DevType(const KCommandBar* self);
void KCommandBar_OnDevType(const KCommandBar* self, intptr_t slot);
int KCommandBar_SuperDevType(const KCommandBar* self);
void KCommandBar_SetVisible(KCommandBar* self, bool visible);
void KCommandBar_OnSetVisible(KCommandBar* self, intptr_t slot);
void KCommandBar_SuperSetVisible(KCommandBar* self, bool visible);
QSize* KCommandBar_MinimumSizeHint(const KCommandBar* self);
void KCommandBar_OnMinimumSizeHint(const KCommandBar* self, intptr_t slot);
QSize* KCommandBar_SuperMinimumSizeHint(const KCommandBar* self);
int KCommandBar_HeightForWidth(const KCommandBar* self, int param1);
void KCommandBar_OnHeightForWidth(const KCommandBar* self, intptr_t slot);
int KCommandBar_SuperHeightForWidth(const KCommandBar* self, int param1);
bool KCommandBar_HasHeightForWidth(const KCommandBar* self);
void KCommandBar_OnHasHeightForWidth(const KCommandBar* self, intptr_t slot);
bool KCommandBar_SuperHasHeightForWidth(const KCommandBar* self);
QPaintEngine* KCommandBar_PaintEngine(const KCommandBar* self);
void KCommandBar_OnPaintEngine(const KCommandBar* self, intptr_t slot);
QPaintEngine* KCommandBar_SuperPaintEngine(const KCommandBar* self);
void KCommandBar_MousePressEvent(KCommandBar* self, QMouseEvent* event);
void KCommandBar_OnMousePressEvent(KCommandBar* self, intptr_t slot);
void KCommandBar_SuperMousePressEvent(KCommandBar* self, QMouseEvent* event);
void KCommandBar_MouseReleaseEvent(KCommandBar* self, QMouseEvent* event);
void KCommandBar_OnMouseReleaseEvent(KCommandBar* self, intptr_t slot);
void KCommandBar_SuperMouseReleaseEvent(KCommandBar* self, QMouseEvent* event);
void KCommandBar_MouseDoubleClickEvent(KCommandBar* self, QMouseEvent* event);
void KCommandBar_OnMouseDoubleClickEvent(KCommandBar* self, intptr_t slot);
void KCommandBar_SuperMouseDoubleClickEvent(KCommandBar* self, QMouseEvent* event);
void KCommandBar_MouseMoveEvent(KCommandBar* self, QMouseEvent* event);
void KCommandBar_OnMouseMoveEvent(KCommandBar* self, intptr_t slot);
void KCommandBar_SuperMouseMoveEvent(KCommandBar* self, QMouseEvent* event);
void KCommandBar_WheelEvent(KCommandBar* self, QWheelEvent* event);
void KCommandBar_OnWheelEvent(KCommandBar* self, intptr_t slot);
void KCommandBar_SuperWheelEvent(KCommandBar* self, QWheelEvent* event);
void KCommandBar_KeyPressEvent(KCommandBar* self, QKeyEvent* event);
void KCommandBar_OnKeyPressEvent(KCommandBar* self, intptr_t slot);
void KCommandBar_SuperKeyPressEvent(KCommandBar* self, QKeyEvent* event);
void KCommandBar_KeyReleaseEvent(KCommandBar* self, QKeyEvent* event);
void KCommandBar_OnKeyReleaseEvent(KCommandBar* self, intptr_t slot);
void KCommandBar_SuperKeyReleaseEvent(KCommandBar* self, QKeyEvent* event);
void KCommandBar_FocusInEvent(KCommandBar* self, QFocusEvent* event);
void KCommandBar_OnFocusInEvent(KCommandBar* self, intptr_t slot);
void KCommandBar_SuperFocusInEvent(KCommandBar* self, QFocusEvent* event);
void KCommandBar_FocusOutEvent(KCommandBar* self, QFocusEvent* event);
void KCommandBar_OnFocusOutEvent(KCommandBar* self, intptr_t slot);
void KCommandBar_SuperFocusOutEvent(KCommandBar* self, QFocusEvent* event);
void KCommandBar_EnterEvent(KCommandBar* self, QEnterEvent* event);
void KCommandBar_OnEnterEvent(KCommandBar* self, intptr_t slot);
void KCommandBar_SuperEnterEvent(KCommandBar* self, QEnterEvent* event);
void KCommandBar_LeaveEvent(KCommandBar* self, QEvent* event);
void KCommandBar_OnLeaveEvent(KCommandBar* self, intptr_t slot);
void KCommandBar_SuperLeaveEvent(KCommandBar* self, QEvent* event);
void KCommandBar_MoveEvent(KCommandBar* self, QMoveEvent* event);
void KCommandBar_OnMoveEvent(KCommandBar* self, intptr_t slot);
void KCommandBar_SuperMoveEvent(KCommandBar* self, QMoveEvent* event);
void KCommandBar_ResizeEvent(KCommandBar* self, QResizeEvent* event);
void KCommandBar_OnResizeEvent(KCommandBar* self, intptr_t slot);
void KCommandBar_SuperResizeEvent(KCommandBar* self, QResizeEvent* event);
void KCommandBar_CloseEvent(KCommandBar* self, QCloseEvent* event);
void KCommandBar_OnCloseEvent(KCommandBar* self, intptr_t slot);
void KCommandBar_SuperCloseEvent(KCommandBar* self, QCloseEvent* event);
void KCommandBar_ContextMenuEvent(KCommandBar* self, QContextMenuEvent* event);
void KCommandBar_OnContextMenuEvent(KCommandBar* self, intptr_t slot);
void KCommandBar_SuperContextMenuEvent(KCommandBar* self, QContextMenuEvent* event);
void KCommandBar_TabletEvent(KCommandBar* self, QTabletEvent* event);
void KCommandBar_OnTabletEvent(KCommandBar* self, intptr_t slot);
void KCommandBar_SuperTabletEvent(KCommandBar* self, QTabletEvent* event);
void KCommandBar_ActionEvent(KCommandBar* self, QActionEvent* event);
void KCommandBar_OnActionEvent(KCommandBar* self, intptr_t slot);
void KCommandBar_SuperActionEvent(KCommandBar* self, QActionEvent* event);
void KCommandBar_DragEnterEvent(KCommandBar* self, QDragEnterEvent* event);
void KCommandBar_OnDragEnterEvent(KCommandBar* self, intptr_t slot);
void KCommandBar_SuperDragEnterEvent(KCommandBar* self, QDragEnterEvent* event);
void KCommandBar_DragMoveEvent(KCommandBar* self, QDragMoveEvent* event);
void KCommandBar_OnDragMoveEvent(KCommandBar* self, intptr_t slot);
void KCommandBar_SuperDragMoveEvent(KCommandBar* self, QDragMoveEvent* event);
void KCommandBar_DragLeaveEvent(KCommandBar* self, QDragLeaveEvent* event);
void KCommandBar_OnDragLeaveEvent(KCommandBar* self, intptr_t slot);
void KCommandBar_SuperDragLeaveEvent(KCommandBar* self, QDragLeaveEvent* event);
void KCommandBar_DropEvent(KCommandBar* self, QDropEvent* event);
void KCommandBar_OnDropEvent(KCommandBar* self, intptr_t slot);
void KCommandBar_SuperDropEvent(KCommandBar* self, QDropEvent* event);
void KCommandBar_ShowEvent(KCommandBar* self, QShowEvent* event);
void KCommandBar_OnShowEvent(KCommandBar* self, intptr_t slot);
void KCommandBar_SuperShowEvent(KCommandBar* self, QShowEvent* event);
void KCommandBar_HideEvent(KCommandBar* self, QHideEvent* event);
void KCommandBar_OnHideEvent(KCommandBar* self, intptr_t slot);
void KCommandBar_SuperHideEvent(KCommandBar* self, QHideEvent* event);
bool KCommandBar_NativeEvent(KCommandBar* self, const libqt_string eventType, void* message, intptr_t* result);
void KCommandBar_OnNativeEvent(KCommandBar* self, intptr_t slot);
bool KCommandBar_SuperNativeEvent(KCommandBar* self, const libqt_string eventType, void* message, intptr_t* result);
int KCommandBar_Metric(const KCommandBar* self, int param1);
void KCommandBar_OnMetric(const KCommandBar* self, intptr_t slot);
int KCommandBar_SuperMetric(const KCommandBar* self, int param1);
void KCommandBar_InitPainter(const KCommandBar* self, QPainter* painter);
void KCommandBar_OnInitPainter(const KCommandBar* self, intptr_t slot);
void KCommandBar_SuperInitPainter(const KCommandBar* self, QPainter* painter);
QPaintDevice* KCommandBar_Redirected(const KCommandBar* self, QPoint* offset);
void KCommandBar_OnRedirected(const KCommandBar* self, intptr_t slot);
QPaintDevice* KCommandBar_SuperRedirected(const KCommandBar* self, QPoint* offset);
QPainter* KCommandBar_SharedPainter(const KCommandBar* self);
void KCommandBar_OnSharedPainter(const KCommandBar* self, intptr_t slot);
QPainter* KCommandBar_SuperSharedPainter(const KCommandBar* self);
void KCommandBar_InputMethodEvent(KCommandBar* self, QInputMethodEvent* param1);
void KCommandBar_OnInputMethodEvent(KCommandBar* self, intptr_t slot);
void KCommandBar_SuperInputMethodEvent(KCommandBar* self, QInputMethodEvent* param1);
QVariant* KCommandBar_InputMethodQuery(const KCommandBar* self, int param1);
void KCommandBar_OnInputMethodQuery(const KCommandBar* self, intptr_t slot);
QVariant* KCommandBar_SuperInputMethodQuery(const KCommandBar* self, int param1);
bool KCommandBar_FocusNextPrevChild(KCommandBar* self, bool next);
void KCommandBar_OnFocusNextPrevChild(KCommandBar* self, intptr_t slot);
bool KCommandBar_SuperFocusNextPrevChild(KCommandBar* self, bool next);
void KCommandBar_TimerEvent(KCommandBar* self, QTimerEvent* event);
void KCommandBar_OnTimerEvent(KCommandBar* self, intptr_t slot);
void KCommandBar_SuperTimerEvent(KCommandBar* self, QTimerEvent* event);
void KCommandBar_ChildEvent(KCommandBar* self, QChildEvent* event);
void KCommandBar_OnChildEvent(KCommandBar* self, intptr_t slot);
void KCommandBar_SuperChildEvent(KCommandBar* self, QChildEvent* event);
void KCommandBar_CustomEvent(KCommandBar* self, QEvent* event);
void KCommandBar_OnCustomEvent(KCommandBar* self, intptr_t slot);
void KCommandBar_SuperCustomEvent(KCommandBar* self, QEvent* event);
void KCommandBar_ConnectNotify(KCommandBar* self, const QMetaMethod* signal);
void KCommandBar_OnConnectNotify(KCommandBar* self, intptr_t slot);
void KCommandBar_SuperConnectNotify(KCommandBar* self, const QMetaMethod* signal);
void KCommandBar_DisconnectNotify(KCommandBar* self, const QMetaMethod* signal);
void KCommandBar_OnDisconnectNotify(KCommandBar* self, intptr_t slot);
void KCommandBar_SuperDisconnectNotify(KCommandBar* self, const QMetaMethod* signal);
void KCommandBar_DrawFrame(KCommandBar* self, QPainter* param1);
void KCommandBar_OnDrawFrame(KCommandBar* self, intptr_t slot);
void KCommandBar_SuperDrawFrame(KCommandBar* self, QPainter* param1);
void KCommandBar_UpdateMicroFocus(KCommandBar* self);
void KCommandBar_OnUpdateMicroFocus(KCommandBar* self, intptr_t slot);
void KCommandBar_SuperUpdateMicroFocus(KCommandBar* self);
void KCommandBar_Create(KCommandBar* self);
void KCommandBar_OnCreate(KCommandBar* self, intptr_t slot);
void KCommandBar_SuperCreate(KCommandBar* self);
void KCommandBar_Destroy(KCommandBar* self);
void KCommandBar_OnDestroy(KCommandBar* self, intptr_t slot);
void KCommandBar_SuperDestroy(KCommandBar* self);
bool KCommandBar_FocusNextChild(KCommandBar* self);
void KCommandBar_OnFocusNextChild(KCommandBar* self, intptr_t slot);
bool KCommandBar_SuperFocusNextChild(KCommandBar* self);
bool KCommandBar_FocusPreviousChild(KCommandBar* self);
void KCommandBar_OnFocusPreviousChild(KCommandBar* self, intptr_t slot);
bool KCommandBar_SuperFocusPreviousChild(KCommandBar* self);
QObject* KCommandBar_Sender(const KCommandBar* self);
void KCommandBar_OnSender(const KCommandBar* self, intptr_t slot);
QObject* KCommandBar_SuperSender(const KCommandBar* self);
int KCommandBar_SenderSignalIndex(const KCommandBar* self);
void KCommandBar_OnSenderSignalIndex(const KCommandBar* self, intptr_t slot);
int KCommandBar_SuperSenderSignalIndex(const KCommandBar* self);
int KCommandBar_Receivers(const KCommandBar* self, const char* signal);
void KCommandBar_OnReceivers(const KCommandBar* self, intptr_t slot);
int KCommandBar_SuperReceivers(const KCommandBar* self, const char* signal);
bool KCommandBar_IsSignalConnected(const KCommandBar* self, const QMetaMethod* signal);
void KCommandBar_OnIsSignalConnected(const KCommandBar* self, intptr_t slot);
bool KCommandBar_SuperIsSignalConnected(const KCommandBar* self, const QMetaMethod* signal);
double KCommandBar_GetDecodedMetricF(const KCommandBar* self, int metricA, int metricB);
void KCommandBar_OnGetDecodedMetricF(const KCommandBar* self, intptr_t slot);
double KCommandBar_SuperGetDecodedMetricF(const KCommandBar* self, int metricA, int metricB);
void KCommandBar_Delete(KCommandBar* self);

KCommandBar__ActionGroup* KCommandBar__ActionGroup_new(const KCommandBar__ActionGroup* param1);
KCommandBar__ActionGroup* KCommandBar__ActionGroup_new2();
libqt_string KCommandBar__ActionGroup_Name(const KCommandBar__ActionGroup* self);
void KCommandBar__ActionGroup_SetName(KCommandBar__ActionGroup* self, libqt_string name);
libqt_list /* of QAction* */ KCommandBar__ActionGroup_Actions(const KCommandBar__ActionGroup* self);
void KCommandBar__ActionGroup_SetActions(KCommandBar__ActionGroup* self, libqt_list /* of QAction* */ actions);
void KCommandBar__ActionGroup_OperatorAssign(KCommandBar__ActionGroup* self, const KCommandBar__ActionGroup* param1);
void KCommandBar__ActionGroup_Delete(KCommandBar__ActionGroup* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
