#pragma once
#ifndef SRC_EXTRAS_KWIDGETSADDONSC_LIBKSEPARATOR_H
#define SRC_EXTRAS_KWIDGETSADDONSC_LIBKSEPARATOR_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KSeparator KSeparator;
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

KSeparator* KSeparator_new(QWidget* parent);
KSeparator* KSeparator_new2();
KSeparator* KSeparator_new3(int orientation);
KSeparator* KSeparator_new4(QWidget* parent, int f);
KSeparator* KSeparator_new5(int orientation, QWidget* parent);
KSeparator* KSeparator_new6(int orientation, QWidget* parent, int f);
QMetaObject* KSeparator_MetaObject(const KSeparator* self);
void* KSeparator_Metacast(KSeparator* self, const char* param1);
int KSeparator_Metacall(KSeparator* self, int param1, int param2, void** param3);
int KSeparator_Orientation(const KSeparator* self);
void KSeparator_SetOrientation(KSeparator* self, int orientation);
void KSeparator_OnMetaObject(const KSeparator* self, intptr_t slot);
QMetaObject* KSeparator_SuperMetaObject(const KSeparator* self);
void KSeparator_OnMetacast(KSeparator* self, intptr_t slot);
void* KSeparator_SuperMetacast(KSeparator* self, const char* param1);
void KSeparator_OnMetacall(KSeparator* self, intptr_t slot);
int KSeparator_SuperMetacall(KSeparator* self, int param1, int param2, void** param3);
QSize* KSeparator_SizeHint(const KSeparator* self);
void KSeparator_OnSizeHint(const KSeparator* self, intptr_t slot);
QSize* KSeparator_SuperSizeHint(const KSeparator* self);
bool KSeparator_Event(KSeparator* self, QEvent* e);
void KSeparator_OnEvent(KSeparator* self, intptr_t slot);
bool KSeparator_SuperEvent(KSeparator* self, QEvent* e);
void KSeparator_PaintEvent(KSeparator* self, QPaintEvent* param1);
void KSeparator_OnPaintEvent(KSeparator* self, intptr_t slot);
void KSeparator_SuperPaintEvent(KSeparator* self, QPaintEvent* param1);
void KSeparator_ChangeEvent(KSeparator* self, QEvent* param1);
void KSeparator_OnChangeEvent(KSeparator* self, intptr_t slot);
void KSeparator_SuperChangeEvent(KSeparator* self, QEvent* param1);
void KSeparator_InitStyleOption(const KSeparator* self, QStyleOptionFrame* option);
void KSeparator_OnInitStyleOption(const KSeparator* self, intptr_t slot);
void KSeparator_SuperInitStyleOption(const KSeparator* self, QStyleOptionFrame* option);
int KSeparator_DevType(const KSeparator* self);
void KSeparator_OnDevType(const KSeparator* self, intptr_t slot);
int KSeparator_SuperDevType(const KSeparator* self);
void KSeparator_SetVisible(KSeparator* self, bool visible);
void KSeparator_OnSetVisible(KSeparator* self, intptr_t slot);
void KSeparator_SuperSetVisible(KSeparator* self, bool visible);
QSize* KSeparator_MinimumSizeHint(const KSeparator* self);
void KSeparator_OnMinimumSizeHint(const KSeparator* self, intptr_t slot);
QSize* KSeparator_SuperMinimumSizeHint(const KSeparator* self);
int KSeparator_HeightForWidth(const KSeparator* self, int param1);
void KSeparator_OnHeightForWidth(const KSeparator* self, intptr_t slot);
int KSeparator_SuperHeightForWidth(const KSeparator* self, int param1);
bool KSeparator_HasHeightForWidth(const KSeparator* self);
void KSeparator_OnHasHeightForWidth(const KSeparator* self, intptr_t slot);
bool KSeparator_SuperHasHeightForWidth(const KSeparator* self);
QPaintEngine* KSeparator_PaintEngine(const KSeparator* self);
void KSeparator_OnPaintEngine(const KSeparator* self, intptr_t slot);
QPaintEngine* KSeparator_SuperPaintEngine(const KSeparator* self);
void KSeparator_MousePressEvent(KSeparator* self, QMouseEvent* event);
void KSeparator_OnMousePressEvent(KSeparator* self, intptr_t slot);
void KSeparator_SuperMousePressEvent(KSeparator* self, QMouseEvent* event);
void KSeparator_MouseReleaseEvent(KSeparator* self, QMouseEvent* event);
void KSeparator_OnMouseReleaseEvent(KSeparator* self, intptr_t slot);
void KSeparator_SuperMouseReleaseEvent(KSeparator* self, QMouseEvent* event);
void KSeparator_MouseDoubleClickEvent(KSeparator* self, QMouseEvent* event);
void KSeparator_OnMouseDoubleClickEvent(KSeparator* self, intptr_t slot);
void KSeparator_SuperMouseDoubleClickEvent(KSeparator* self, QMouseEvent* event);
void KSeparator_MouseMoveEvent(KSeparator* self, QMouseEvent* event);
void KSeparator_OnMouseMoveEvent(KSeparator* self, intptr_t slot);
void KSeparator_SuperMouseMoveEvent(KSeparator* self, QMouseEvent* event);
void KSeparator_WheelEvent(KSeparator* self, QWheelEvent* event);
void KSeparator_OnWheelEvent(KSeparator* self, intptr_t slot);
void KSeparator_SuperWheelEvent(KSeparator* self, QWheelEvent* event);
void KSeparator_KeyPressEvent(KSeparator* self, QKeyEvent* event);
void KSeparator_OnKeyPressEvent(KSeparator* self, intptr_t slot);
void KSeparator_SuperKeyPressEvent(KSeparator* self, QKeyEvent* event);
void KSeparator_KeyReleaseEvent(KSeparator* self, QKeyEvent* event);
void KSeparator_OnKeyReleaseEvent(KSeparator* self, intptr_t slot);
void KSeparator_SuperKeyReleaseEvent(KSeparator* self, QKeyEvent* event);
void KSeparator_FocusInEvent(KSeparator* self, QFocusEvent* event);
void KSeparator_OnFocusInEvent(KSeparator* self, intptr_t slot);
void KSeparator_SuperFocusInEvent(KSeparator* self, QFocusEvent* event);
void KSeparator_FocusOutEvent(KSeparator* self, QFocusEvent* event);
void KSeparator_OnFocusOutEvent(KSeparator* self, intptr_t slot);
void KSeparator_SuperFocusOutEvent(KSeparator* self, QFocusEvent* event);
void KSeparator_EnterEvent(KSeparator* self, QEnterEvent* event);
void KSeparator_OnEnterEvent(KSeparator* self, intptr_t slot);
void KSeparator_SuperEnterEvent(KSeparator* self, QEnterEvent* event);
void KSeparator_LeaveEvent(KSeparator* self, QEvent* event);
void KSeparator_OnLeaveEvent(KSeparator* self, intptr_t slot);
void KSeparator_SuperLeaveEvent(KSeparator* self, QEvent* event);
void KSeparator_MoveEvent(KSeparator* self, QMoveEvent* event);
void KSeparator_OnMoveEvent(KSeparator* self, intptr_t slot);
void KSeparator_SuperMoveEvent(KSeparator* self, QMoveEvent* event);
void KSeparator_ResizeEvent(KSeparator* self, QResizeEvent* event);
void KSeparator_OnResizeEvent(KSeparator* self, intptr_t slot);
void KSeparator_SuperResizeEvent(KSeparator* self, QResizeEvent* event);
void KSeparator_CloseEvent(KSeparator* self, QCloseEvent* event);
void KSeparator_OnCloseEvent(KSeparator* self, intptr_t slot);
void KSeparator_SuperCloseEvent(KSeparator* self, QCloseEvent* event);
void KSeparator_ContextMenuEvent(KSeparator* self, QContextMenuEvent* event);
void KSeparator_OnContextMenuEvent(KSeparator* self, intptr_t slot);
void KSeparator_SuperContextMenuEvent(KSeparator* self, QContextMenuEvent* event);
void KSeparator_TabletEvent(KSeparator* self, QTabletEvent* event);
void KSeparator_OnTabletEvent(KSeparator* self, intptr_t slot);
void KSeparator_SuperTabletEvent(KSeparator* self, QTabletEvent* event);
void KSeparator_ActionEvent(KSeparator* self, QActionEvent* event);
void KSeparator_OnActionEvent(KSeparator* self, intptr_t slot);
void KSeparator_SuperActionEvent(KSeparator* self, QActionEvent* event);
void KSeparator_DragEnterEvent(KSeparator* self, QDragEnterEvent* event);
void KSeparator_OnDragEnterEvent(KSeparator* self, intptr_t slot);
void KSeparator_SuperDragEnterEvent(KSeparator* self, QDragEnterEvent* event);
void KSeparator_DragMoveEvent(KSeparator* self, QDragMoveEvent* event);
void KSeparator_OnDragMoveEvent(KSeparator* self, intptr_t slot);
void KSeparator_SuperDragMoveEvent(KSeparator* self, QDragMoveEvent* event);
void KSeparator_DragLeaveEvent(KSeparator* self, QDragLeaveEvent* event);
void KSeparator_OnDragLeaveEvent(KSeparator* self, intptr_t slot);
void KSeparator_SuperDragLeaveEvent(KSeparator* self, QDragLeaveEvent* event);
void KSeparator_DropEvent(KSeparator* self, QDropEvent* event);
void KSeparator_OnDropEvent(KSeparator* self, intptr_t slot);
void KSeparator_SuperDropEvent(KSeparator* self, QDropEvent* event);
void KSeparator_ShowEvent(KSeparator* self, QShowEvent* event);
void KSeparator_OnShowEvent(KSeparator* self, intptr_t slot);
void KSeparator_SuperShowEvent(KSeparator* self, QShowEvent* event);
void KSeparator_HideEvent(KSeparator* self, QHideEvent* event);
void KSeparator_OnHideEvent(KSeparator* self, intptr_t slot);
void KSeparator_SuperHideEvent(KSeparator* self, QHideEvent* event);
bool KSeparator_NativeEvent(KSeparator* self, const libqt_string eventType, void* message, intptr_t* result);
void KSeparator_OnNativeEvent(KSeparator* self, intptr_t slot);
bool KSeparator_SuperNativeEvent(KSeparator* self, const libqt_string eventType, void* message, intptr_t* result);
int KSeparator_Metric(const KSeparator* self, int param1);
void KSeparator_OnMetric(const KSeparator* self, intptr_t slot);
int KSeparator_SuperMetric(const KSeparator* self, int param1);
void KSeparator_InitPainter(const KSeparator* self, QPainter* painter);
void KSeparator_OnInitPainter(const KSeparator* self, intptr_t slot);
void KSeparator_SuperInitPainter(const KSeparator* self, QPainter* painter);
QPaintDevice* KSeparator_Redirected(const KSeparator* self, QPoint* offset);
void KSeparator_OnRedirected(const KSeparator* self, intptr_t slot);
QPaintDevice* KSeparator_SuperRedirected(const KSeparator* self, QPoint* offset);
QPainter* KSeparator_SharedPainter(const KSeparator* self);
void KSeparator_OnSharedPainter(const KSeparator* self, intptr_t slot);
QPainter* KSeparator_SuperSharedPainter(const KSeparator* self);
void KSeparator_InputMethodEvent(KSeparator* self, QInputMethodEvent* param1);
void KSeparator_OnInputMethodEvent(KSeparator* self, intptr_t slot);
void KSeparator_SuperInputMethodEvent(KSeparator* self, QInputMethodEvent* param1);
QVariant* KSeparator_InputMethodQuery(const KSeparator* self, int param1);
void KSeparator_OnInputMethodQuery(const KSeparator* self, intptr_t slot);
QVariant* KSeparator_SuperInputMethodQuery(const KSeparator* self, int param1);
bool KSeparator_FocusNextPrevChild(KSeparator* self, bool next);
void KSeparator_OnFocusNextPrevChild(KSeparator* self, intptr_t slot);
bool KSeparator_SuperFocusNextPrevChild(KSeparator* self, bool next);
bool KSeparator_EventFilter(KSeparator* self, QObject* watched, QEvent* event);
void KSeparator_OnEventFilter(KSeparator* self, intptr_t slot);
bool KSeparator_SuperEventFilter(KSeparator* self, QObject* watched, QEvent* event);
void KSeparator_TimerEvent(KSeparator* self, QTimerEvent* event);
void KSeparator_OnTimerEvent(KSeparator* self, intptr_t slot);
void KSeparator_SuperTimerEvent(KSeparator* self, QTimerEvent* event);
void KSeparator_ChildEvent(KSeparator* self, QChildEvent* event);
void KSeparator_OnChildEvent(KSeparator* self, intptr_t slot);
void KSeparator_SuperChildEvent(KSeparator* self, QChildEvent* event);
void KSeparator_CustomEvent(KSeparator* self, QEvent* event);
void KSeparator_OnCustomEvent(KSeparator* self, intptr_t slot);
void KSeparator_SuperCustomEvent(KSeparator* self, QEvent* event);
void KSeparator_ConnectNotify(KSeparator* self, const QMetaMethod* signal);
void KSeparator_OnConnectNotify(KSeparator* self, intptr_t slot);
void KSeparator_SuperConnectNotify(KSeparator* self, const QMetaMethod* signal);
void KSeparator_DisconnectNotify(KSeparator* self, const QMetaMethod* signal);
void KSeparator_OnDisconnectNotify(KSeparator* self, intptr_t slot);
void KSeparator_SuperDisconnectNotify(KSeparator* self, const QMetaMethod* signal);
void KSeparator_DrawFrame(KSeparator* self, QPainter* param1);
void KSeparator_OnDrawFrame(KSeparator* self, intptr_t slot);
void KSeparator_SuperDrawFrame(KSeparator* self, QPainter* param1);
void KSeparator_UpdateMicroFocus(KSeparator* self);
void KSeparator_OnUpdateMicroFocus(KSeparator* self, intptr_t slot);
void KSeparator_SuperUpdateMicroFocus(KSeparator* self);
void KSeparator_Create(KSeparator* self);
void KSeparator_OnCreate(KSeparator* self, intptr_t slot);
void KSeparator_SuperCreate(KSeparator* self);
void KSeparator_Destroy(KSeparator* self);
void KSeparator_OnDestroy(KSeparator* self, intptr_t slot);
void KSeparator_SuperDestroy(KSeparator* self);
bool KSeparator_FocusNextChild(KSeparator* self);
void KSeparator_OnFocusNextChild(KSeparator* self, intptr_t slot);
bool KSeparator_SuperFocusNextChild(KSeparator* self);
bool KSeparator_FocusPreviousChild(KSeparator* self);
void KSeparator_OnFocusPreviousChild(KSeparator* self, intptr_t slot);
bool KSeparator_SuperFocusPreviousChild(KSeparator* self);
QObject* KSeparator_Sender(const KSeparator* self);
void KSeparator_OnSender(const KSeparator* self, intptr_t slot);
QObject* KSeparator_SuperSender(const KSeparator* self);
int KSeparator_SenderSignalIndex(const KSeparator* self);
void KSeparator_OnSenderSignalIndex(const KSeparator* self, intptr_t slot);
int KSeparator_SuperSenderSignalIndex(const KSeparator* self);
int KSeparator_Receivers(const KSeparator* self, const char* signal);
void KSeparator_OnReceivers(const KSeparator* self, intptr_t slot);
int KSeparator_SuperReceivers(const KSeparator* self, const char* signal);
bool KSeparator_IsSignalConnected(const KSeparator* self, const QMetaMethod* signal);
void KSeparator_OnIsSignalConnected(const KSeparator* self, intptr_t slot);
bool KSeparator_SuperIsSignalConnected(const KSeparator* self, const QMetaMethod* signal);
double KSeparator_GetDecodedMetricF(const KSeparator* self, int metricA, int metricB);
void KSeparator_OnGetDecodedMetricF(const KSeparator* self, intptr_t slot);
double KSeparator_SuperGetDecodedMetricF(const KSeparator* self, int metricA, int metricB);
void KSeparator_Delete(KSeparator* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
