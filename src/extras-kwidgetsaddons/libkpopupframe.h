#pragma once
#ifndef SRC_EXTRAS_KWIDGETSADDONSC_LIBKPOPUPFRAME_H
#define SRC_EXTRAS_KWIDGETSADDONSC_LIBKPOPUPFRAME_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KPopupFrame KPopupFrame;
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

KPopupFrame* KPopupFrame_new(QWidget* parent);
KPopupFrame* KPopupFrame_new2();
QMetaObject* KPopupFrame_MetaObject(const KPopupFrame* self);
void* KPopupFrame_Metacast(KPopupFrame* self, const char* param1);
int KPopupFrame_Metacall(KPopupFrame* self, int param1, int param2, void** param3);
void KPopupFrame_KeyPressEvent(KPopupFrame* self, QKeyEvent* e);
void KPopupFrame_HideEvent(KPopupFrame* self, QHideEvent* e);
void KPopupFrame_Close(KPopupFrame* self, int r);
void KPopupFrame_SetMainWidget(KPopupFrame* self, QWidget* m);
void KPopupFrame_ResizeEvent(KPopupFrame* self, QResizeEvent* resize);
void KPopupFrame_Popup(KPopupFrame* self, const QPoint* pos);
int KPopupFrame_Exec(KPopupFrame* self, const QPoint* p);
int KPopupFrame_Exec2(KPopupFrame* self, int x, int y);
void KPopupFrame_LeaveModality(KPopupFrame* self);
void KPopupFrame_Connect_LeaveModality(KPopupFrame* self, intptr_t slot);
void KPopupFrame_OnMetaObject(const KPopupFrame* self, intptr_t slot);
QMetaObject* KPopupFrame_SuperMetaObject(const KPopupFrame* self);
void KPopupFrame_OnMetacast(KPopupFrame* self, intptr_t slot);
void* KPopupFrame_SuperMetacast(KPopupFrame* self, const char* param1);
void KPopupFrame_OnMetacall(KPopupFrame* self, intptr_t slot);
int KPopupFrame_SuperMetacall(KPopupFrame* self, int param1, int param2, void** param3);
void KPopupFrame_OnKeyPressEvent(KPopupFrame* self, intptr_t slot);
void KPopupFrame_SuperKeyPressEvent(KPopupFrame* self, QKeyEvent* e);
void KPopupFrame_OnHideEvent(KPopupFrame* self, intptr_t slot);
void KPopupFrame_SuperHideEvent(KPopupFrame* self, QHideEvent* e);
void KPopupFrame_OnResizeEvent(KPopupFrame* self, intptr_t slot);
void KPopupFrame_SuperResizeEvent(KPopupFrame* self, QResizeEvent* resize);
QSize* KPopupFrame_SizeHint(const KPopupFrame* self);
void KPopupFrame_OnSizeHint(const KPopupFrame* self, intptr_t slot);
QSize* KPopupFrame_SuperSizeHint(const KPopupFrame* self);
bool KPopupFrame_Event(KPopupFrame* self, QEvent* e);
void KPopupFrame_OnEvent(KPopupFrame* self, intptr_t slot);
bool KPopupFrame_SuperEvent(KPopupFrame* self, QEvent* e);
void KPopupFrame_PaintEvent(KPopupFrame* self, QPaintEvent* param1);
void KPopupFrame_OnPaintEvent(KPopupFrame* self, intptr_t slot);
void KPopupFrame_SuperPaintEvent(KPopupFrame* self, QPaintEvent* param1);
void KPopupFrame_ChangeEvent(KPopupFrame* self, QEvent* param1);
void KPopupFrame_OnChangeEvent(KPopupFrame* self, intptr_t slot);
void KPopupFrame_SuperChangeEvent(KPopupFrame* self, QEvent* param1);
void KPopupFrame_InitStyleOption(const KPopupFrame* self, QStyleOptionFrame* option);
void KPopupFrame_OnInitStyleOption(const KPopupFrame* self, intptr_t slot);
void KPopupFrame_SuperInitStyleOption(const KPopupFrame* self, QStyleOptionFrame* option);
int KPopupFrame_DevType(const KPopupFrame* self);
void KPopupFrame_OnDevType(const KPopupFrame* self, intptr_t slot);
int KPopupFrame_SuperDevType(const KPopupFrame* self);
void KPopupFrame_SetVisible(KPopupFrame* self, bool visible);
void KPopupFrame_OnSetVisible(KPopupFrame* self, intptr_t slot);
void KPopupFrame_SuperSetVisible(KPopupFrame* self, bool visible);
QSize* KPopupFrame_MinimumSizeHint(const KPopupFrame* self);
void KPopupFrame_OnMinimumSizeHint(const KPopupFrame* self, intptr_t slot);
QSize* KPopupFrame_SuperMinimumSizeHint(const KPopupFrame* self);
int KPopupFrame_HeightForWidth(const KPopupFrame* self, int param1);
void KPopupFrame_OnHeightForWidth(const KPopupFrame* self, intptr_t slot);
int KPopupFrame_SuperHeightForWidth(const KPopupFrame* self, int param1);
bool KPopupFrame_HasHeightForWidth(const KPopupFrame* self);
void KPopupFrame_OnHasHeightForWidth(const KPopupFrame* self, intptr_t slot);
bool KPopupFrame_SuperHasHeightForWidth(const KPopupFrame* self);
QPaintEngine* KPopupFrame_PaintEngine(const KPopupFrame* self);
void KPopupFrame_OnPaintEngine(const KPopupFrame* self, intptr_t slot);
QPaintEngine* KPopupFrame_SuperPaintEngine(const KPopupFrame* self);
void KPopupFrame_MousePressEvent(KPopupFrame* self, QMouseEvent* event);
void KPopupFrame_OnMousePressEvent(KPopupFrame* self, intptr_t slot);
void KPopupFrame_SuperMousePressEvent(KPopupFrame* self, QMouseEvent* event);
void KPopupFrame_MouseReleaseEvent(KPopupFrame* self, QMouseEvent* event);
void KPopupFrame_OnMouseReleaseEvent(KPopupFrame* self, intptr_t slot);
void KPopupFrame_SuperMouseReleaseEvent(KPopupFrame* self, QMouseEvent* event);
void KPopupFrame_MouseDoubleClickEvent(KPopupFrame* self, QMouseEvent* event);
void KPopupFrame_OnMouseDoubleClickEvent(KPopupFrame* self, intptr_t slot);
void KPopupFrame_SuperMouseDoubleClickEvent(KPopupFrame* self, QMouseEvent* event);
void KPopupFrame_MouseMoveEvent(KPopupFrame* self, QMouseEvent* event);
void KPopupFrame_OnMouseMoveEvent(KPopupFrame* self, intptr_t slot);
void KPopupFrame_SuperMouseMoveEvent(KPopupFrame* self, QMouseEvent* event);
void KPopupFrame_WheelEvent(KPopupFrame* self, QWheelEvent* event);
void KPopupFrame_OnWheelEvent(KPopupFrame* self, intptr_t slot);
void KPopupFrame_SuperWheelEvent(KPopupFrame* self, QWheelEvent* event);
void KPopupFrame_KeyReleaseEvent(KPopupFrame* self, QKeyEvent* event);
void KPopupFrame_OnKeyReleaseEvent(KPopupFrame* self, intptr_t slot);
void KPopupFrame_SuperKeyReleaseEvent(KPopupFrame* self, QKeyEvent* event);
void KPopupFrame_FocusInEvent(KPopupFrame* self, QFocusEvent* event);
void KPopupFrame_OnFocusInEvent(KPopupFrame* self, intptr_t slot);
void KPopupFrame_SuperFocusInEvent(KPopupFrame* self, QFocusEvent* event);
void KPopupFrame_FocusOutEvent(KPopupFrame* self, QFocusEvent* event);
void KPopupFrame_OnFocusOutEvent(KPopupFrame* self, intptr_t slot);
void KPopupFrame_SuperFocusOutEvent(KPopupFrame* self, QFocusEvent* event);
void KPopupFrame_EnterEvent(KPopupFrame* self, QEnterEvent* event);
void KPopupFrame_OnEnterEvent(KPopupFrame* self, intptr_t slot);
void KPopupFrame_SuperEnterEvent(KPopupFrame* self, QEnterEvent* event);
void KPopupFrame_LeaveEvent(KPopupFrame* self, QEvent* event);
void KPopupFrame_OnLeaveEvent(KPopupFrame* self, intptr_t slot);
void KPopupFrame_SuperLeaveEvent(KPopupFrame* self, QEvent* event);
void KPopupFrame_MoveEvent(KPopupFrame* self, QMoveEvent* event);
void KPopupFrame_OnMoveEvent(KPopupFrame* self, intptr_t slot);
void KPopupFrame_SuperMoveEvent(KPopupFrame* self, QMoveEvent* event);
void KPopupFrame_CloseEvent(KPopupFrame* self, QCloseEvent* event);
void KPopupFrame_OnCloseEvent(KPopupFrame* self, intptr_t slot);
void KPopupFrame_SuperCloseEvent(KPopupFrame* self, QCloseEvent* event);
void KPopupFrame_ContextMenuEvent(KPopupFrame* self, QContextMenuEvent* event);
void KPopupFrame_OnContextMenuEvent(KPopupFrame* self, intptr_t slot);
void KPopupFrame_SuperContextMenuEvent(KPopupFrame* self, QContextMenuEvent* event);
void KPopupFrame_TabletEvent(KPopupFrame* self, QTabletEvent* event);
void KPopupFrame_OnTabletEvent(KPopupFrame* self, intptr_t slot);
void KPopupFrame_SuperTabletEvent(KPopupFrame* self, QTabletEvent* event);
void KPopupFrame_ActionEvent(KPopupFrame* self, QActionEvent* event);
void KPopupFrame_OnActionEvent(KPopupFrame* self, intptr_t slot);
void KPopupFrame_SuperActionEvent(KPopupFrame* self, QActionEvent* event);
void KPopupFrame_DragEnterEvent(KPopupFrame* self, QDragEnterEvent* event);
void KPopupFrame_OnDragEnterEvent(KPopupFrame* self, intptr_t slot);
void KPopupFrame_SuperDragEnterEvent(KPopupFrame* self, QDragEnterEvent* event);
void KPopupFrame_DragMoveEvent(KPopupFrame* self, QDragMoveEvent* event);
void KPopupFrame_OnDragMoveEvent(KPopupFrame* self, intptr_t slot);
void KPopupFrame_SuperDragMoveEvent(KPopupFrame* self, QDragMoveEvent* event);
void KPopupFrame_DragLeaveEvent(KPopupFrame* self, QDragLeaveEvent* event);
void KPopupFrame_OnDragLeaveEvent(KPopupFrame* self, intptr_t slot);
void KPopupFrame_SuperDragLeaveEvent(KPopupFrame* self, QDragLeaveEvent* event);
void KPopupFrame_DropEvent(KPopupFrame* self, QDropEvent* event);
void KPopupFrame_OnDropEvent(KPopupFrame* self, intptr_t slot);
void KPopupFrame_SuperDropEvent(KPopupFrame* self, QDropEvent* event);
void KPopupFrame_ShowEvent(KPopupFrame* self, QShowEvent* event);
void KPopupFrame_OnShowEvent(KPopupFrame* self, intptr_t slot);
void KPopupFrame_SuperShowEvent(KPopupFrame* self, QShowEvent* event);
bool KPopupFrame_NativeEvent(KPopupFrame* self, const libqt_string eventType, void* message, intptr_t* result);
void KPopupFrame_OnNativeEvent(KPopupFrame* self, intptr_t slot);
bool KPopupFrame_SuperNativeEvent(KPopupFrame* self, const libqt_string eventType, void* message, intptr_t* result);
int KPopupFrame_Metric(const KPopupFrame* self, int param1);
void KPopupFrame_OnMetric(const KPopupFrame* self, intptr_t slot);
int KPopupFrame_SuperMetric(const KPopupFrame* self, int param1);
void KPopupFrame_InitPainter(const KPopupFrame* self, QPainter* painter);
void KPopupFrame_OnInitPainter(const KPopupFrame* self, intptr_t slot);
void KPopupFrame_SuperInitPainter(const KPopupFrame* self, QPainter* painter);
QPaintDevice* KPopupFrame_Redirected(const KPopupFrame* self, QPoint* offset);
void KPopupFrame_OnRedirected(const KPopupFrame* self, intptr_t slot);
QPaintDevice* KPopupFrame_SuperRedirected(const KPopupFrame* self, QPoint* offset);
QPainter* KPopupFrame_SharedPainter(const KPopupFrame* self);
void KPopupFrame_OnSharedPainter(const KPopupFrame* self, intptr_t slot);
QPainter* KPopupFrame_SuperSharedPainter(const KPopupFrame* self);
void KPopupFrame_InputMethodEvent(KPopupFrame* self, QInputMethodEvent* param1);
void KPopupFrame_OnInputMethodEvent(KPopupFrame* self, intptr_t slot);
void KPopupFrame_SuperInputMethodEvent(KPopupFrame* self, QInputMethodEvent* param1);
QVariant* KPopupFrame_InputMethodQuery(const KPopupFrame* self, int param1);
void KPopupFrame_OnInputMethodQuery(const KPopupFrame* self, intptr_t slot);
QVariant* KPopupFrame_SuperInputMethodQuery(const KPopupFrame* self, int param1);
bool KPopupFrame_FocusNextPrevChild(KPopupFrame* self, bool next);
void KPopupFrame_OnFocusNextPrevChild(KPopupFrame* self, intptr_t slot);
bool KPopupFrame_SuperFocusNextPrevChild(KPopupFrame* self, bool next);
bool KPopupFrame_EventFilter(KPopupFrame* self, QObject* watched, QEvent* event);
void KPopupFrame_OnEventFilter(KPopupFrame* self, intptr_t slot);
bool KPopupFrame_SuperEventFilter(KPopupFrame* self, QObject* watched, QEvent* event);
void KPopupFrame_TimerEvent(KPopupFrame* self, QTimerEvent* event);
void KPopupFrame_OnTimerEvent(KPopupFrame* self, intptr_t slot);
void KPopupFrame_SuperTimerEvent(KPopupFrame* self, QTimerEvent* event);
void KPopupFrame_ChildEvent(KPopupFrame* self, QChildEvent* event);
void KPopupFrame_OnChildEvent(KPopupFrame* self, intptr_t slot);
void KPopupFrame_SuperChildEvent(KPopupFrame* self, QChildEvent* event);
void KPopupFrame_CustomEvent(KPopupFrame* self, QEvent* event);
void KPopupFrame_OnCustomEvent(KPopupFrame* self, intptr_t slot);
void KPopupFrame_SuperCustomEvent(KPopupFrame* self, QEvent* event);
void KPopupFrame_ConnectNotify(KPopupFrame* self, const QMetaMethod* signal);
void KPopupFrame_OnConnectNotify(KPopupFrame* self, intptr_t slot);
void KPopupFrame_SuperConnectNotify(KPopupFrame* self, const QMetaMethod* signal);
void KPopupFrame_DisconnectNotify(KPopupFrame* self, const QMetaMethod* signal);
void KPopupFrame_OnDisconnectNotify(KPopupFrame* self, intptr_t slot);
void KPopupFrame_SuperDisconnectNotify(KPopupFrame* self, const QMetaMethod* signal);
void KPopupFrame_DrawFrame(KPopupFrame* self, QPainter* param1);
void KPopupFrame_OnDrawFrame(KPopupFrame* self, intptr_t slot);
void KPopupFrame_SuperDrawFrame(KPopupFrame* self, QPainter* param1);
void KPopupFrame_UpdateMicroFocus(KPopupFrame* self);
void KPopupFrame_OnUpdateMicroFocus(KPopupFrame* self, intptr_t slot);
void KPopupFrame_SuperUpdateMicroFocus(KPopupFrame* self);
void KPopupFrame_Create(KPopupFrame* self);
void KPopupFrame_OnCreate(KPopupFrame* self, intptr_t slot);
void KPopupFrame_SuperCreate(KPopupFrame* self);
void KPopupFrame_Destroy(KPopupFrame* self);
void KPopupFrame_OnDestroy(KPopupFrame* self, intptr_t slot);
void KPopupFrame_SuperDestroy(KPopupFrame* self);
bool KPopupFrame_FocusNextChild(KPopupFrame* self);
void KPopupFrame_OnFocusNextChild(KPopupFrame* self, intptr_t slot);
bool KPopupFrame_SuperFocusNextChild(KPopupFrame* self);
bool KPopupFrame_FocusPreviousChild(KPopupFrame* self);
void KPopupFrame_OnFocusPreviousChild(KPopupFrame* self, intptr_t slot);
bool KPopupFrame_SuperFocusPreviousChild(KPopupFrame* self);
QObject* KPopupFrame_Sender(const KPopupFrame* self);
void KPopupFrame_OnSender(const KPopupFrame* self, intptr_t slot);
QObject* KPopupFrame_SuperSender(const KPopupFrame* self);
int KPopupFrame_SenderSignalIndex(const KPopupFrame* self);
void KPopupFrame_OnSenderSignalIndex(const KPopupFrame* self, intptr_t slot);
int KPopupFrame_SuperSenderSignalIndex(const KPopupFrame* self);
int KPopupFrame_Receivers(const KPopupFrame* self, const char* signal);
void KPopupFrame_OnReceivers(const KPopupFrame* self, intptr_t slot);
int KPopupFrame_SuperReceivers(const KPopupFrame* self, const char* signal);
bool KPopupFrame_IsSignalConnected(const KPopupFrame* self, const QMetaMethod* signal);
void KPopupFrame_OnIsSignalConnected(const KPopupFrame* self, intptr_t slot);
bool KPopupFrame_SuperIsSignalConnected(const KPopupFrame* self, const QMetaMethod* signal);
double KPopupFrame_GetDecodedMetricF(const KPopupFrame* self, int metricA, int metricB);
void KPopupFrame_OnGetDecodedMetricF(const KPopupFrame* self, intptr_t slot);
double KPopupFrame_SuperGetDecodedMetricF(const KPopupFrame* self, int metricA, int metricB);
void KPopupFrame_Delete(KPopupFrame* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
