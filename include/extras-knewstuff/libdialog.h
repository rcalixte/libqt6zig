#pragma once
#ifndef SRC_EXTRAS_KNEWSTUFFC_LIBDIALOG_H
#define SRC_EXTRAS_KNEWSTUFFC_LIBDIALOG_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
typedef KNSCore::EngineBase KNSCore__EngineBase;
typedef KNSCore::Entry KNSCore__Entry;
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KNSWidgets__Dialog)
typedef KNSWidgets::Dialog KNSWidgets__Dialog;
#endif
#else
typedef struct KNSCore__EngineBase KNSCore__EngineBase;
typedef struct KNSCore__Entry KNSCore__Entry;
typedef struct KNSWidgets__Dialog KNSWidgets__Dialog;
typedef struct QActionEvent QActionEvent;
typedef struct QChildEvent QChildEvent;
typedef struct QCloseEvent QCloseEvent;
typedef struct QContextMenuEvent QContextMenuEvent;
typedef struct QDialog QDialog;
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

KNSWidgets__Dialog* KNSWidgets__Dialog_new(const libqt_string configFile);
KNSWidgets__Dialog* KNSWidgets__Dialog_new2(const libqt_string configFile, QWidget* parent);
QMetaObject* KNSWidgets__Dialog_MetaObject(const KNSWidgets__Dialog* self);
void* KNSWidgets__Dialog_Metacast(KNSWidgets__Dialog* self, const char* param1);
int KNSWidgets__Dialog_Metacall(KNSWidgets__Dialog* self, int param1, int param2, void** param3);
KNSCore__EngineBase* KNSWidgets__Dialog_Engine(KNSWidgets__Dialog* self);
libqt_list /* of KNSCore__Entry* */ KNSWidgets__Dialog_ChangedEntries(const KNSWidgets__Dialog* self);
void KNSWidgets__Dialog_Open(KNSWidgets__Dialog* self);
void KNSWidgets__Dialog_OnMetaObject(const KNSWidgets__Dialog* self, intptr_t slot);
QMetaObject* KNSWidgets__Dialog_SuperMetaObject(const KNSWidgets__Dialog* self);
void KNSWidgets__Dialog_OnMetacast(KNSWidgets__Dialog* self, intptr_t slot);
void* KNSWidgets__Dialog_SuperMetacast(KNSWidgets__Dialog* self, const char* param1);
void KNSWidgets__Dialog_OnMetacall(KNSWidgets__Dialog* self, intptr_t slot);
int KNSWidgets__Dialog_SuperMetacall(KNSWidgets__Dialog* self, int param1, int param2, void** param3);
void KNSWidgets__Dialog_OnOpen(KNSWidgets__Dialog* self, intptr_t slot);
void KNSWidgets__Dialog_SuperOpen(KNSWidgets__Dialog* self);
void KNSWidgets__Dialog_SetVisible(KNSWidgets__Dialog* self, bool visible);
void KNSWidgets__Dialog_OnSetVisible(KNSWidgets__Dialog* self, intptr_t slot);
void KNSWidgets__Dialog_SuperSetVisible(KNSWidgets__Dialog* self, bool visible);
QSize* KNSWidgets__Dialog_SizeHint(const KNSWidgets__Dialog* self);
void KNSWidgets__Dialog_OnSizeHint(const KNSWidgets__Dialog* self, intptr_t slot);
QSize* KNSWidgets__Dialog_SuperSizeHint(const KNSWidgets__Dialog* self);
QSize* KNSWidgets__Dialog_MinimumSizeHint(const KNSWidgets__Dialog* self);
void KNSWidgets__Dialog_OnMinimumSizeHint(const KNSWidgets__Dialog* self, intptr_t slot);
QSize* KNSWidgets__Dialog_SuperMinimumSizeHint(const KNSWidgets__Dialog* self);
int KNSWidgets__Dialog_Exec(KNSWidgets__Dialog* self);
void KNSWidgets__Dialog_OnExec(KNSWidgets__Dialog* self, intptr_t slot);
int KNSWidgets__Dialog_SuperExec(KNSWidgets__Dialog* self);
void KNSWidgets__Dialog_Done(KNSWidgets__Dialog* self, int param1);
void KNSWidgets__Dialog_OnDone(KNSWidgets__Dialog* self, intptr_t slot);
void KNSWidgets__Dialog_SuperDone(KNSWidgets__Dialog* self, int param1);
void KNSWidgets__Dialog_Accept(KNSWidgets__Dialog* self);
void KNSWidgets__Dialog_OnAccept(KNSWidgets__Dialog* self, intptr_t slot);
void KNSWidgets__Dialog_SuperAccept(KNSWidgets__Dialog* self);
void KNSWidgets__Dialog_Reject(KNSWidgets__Dialog* self);
void KNSWidgets__Dialog_OnReject(KNSWidgets__Dialog* self, intptr_t slot);
void KNSWidgets__Dialog_SuperReject(KNSWidgets__Dialog* self);
void KNSWidgets__Dialog_KeyPressEvent(KNSWidgets__Dialog* self, QKeyEvent* param1);
void KNSWidgets__Dialog_OnKeyPressEvent(KNSWidgets__Dialog* self, intptr_t slot);
void KNSWidgets__Dialog_SuperKeyPressEvent(KNSWidgets__Dialog* self, QKeyEvent* param1);
void KNSWidgets__Dialog_CloseEvent(KNSWidgets__Dialog* self, QCloseEvent* param1);
void KNSWidgets__Dialog_OnCloseEvent(KNSWidgets__Dialog* self, intptr_t slot);
void KNSWidgets__Dialog_SuperCloseEvent(KNSWidgets__Dialog* self, QCloseEvent* param1);
void KNSWidgets__Dialog_ShowEvent(KNSWidgets__Dialog* self, QShowEvent* param1);
void KNSWidgets__Dialog_OnShowEvent(KNSWidgets__Dialog* self, intptr_t slot);
void KNSWidgets__Dialog_SuperShowEvent(KNSWidgets__Dialog* self, QShowEvent* param1);
void KNSWidgets__Dialog_ResizeEvent(KNSWidgets__Dialog* self, QResizeEvent* param1);
void KNSWidgets__Dialog_OnResizeEvent(KNSWidgets__Dialog* self, intptr_t slot);
void KNSWidgets__Dialog_SuperResizeEvent(KNSWidgets__Dialog* self, QResizeEvent* param1);
void KNSWidgets__Dialog_ContextMenuEvent(KNSWidgets__Dialog* self, QContextMenuEvent* param1);
void KNSWidgets__Dialog_OnContextMenuEvent(KNSWidgets__Dialog* self, intptr_t slot);
void KNSWidgets__Dialog_SuperContextMenuEvent(KNSWidgets__Dialog* self, QContextMenuEvent* param1);
bool KNSWidgets__Dialog_EventFilter(KNSWidgets__Dialog* self, QObject* param1, QEvent* param2);
void KNSWidgets__Dialog_OnEventFilter(KNSWidgets__Dialog* self, intptr_t slot);
bool KNSWidgets__Dialog_SuperEventFilter(KNSWidgets__Dialog* self, QObject* param1, QEvent* param2);
int KNSWidgets__Dialog_DevType(const KNSWidgets__Dialog* self);
void KNSWidgets__Dialog_OnDevType(const KNSWidgets__Dialog* self, intptr_t slot);
int KNSWidgets__Dialog_SuperDevType(const KNSWidgets__Dialog* self);
int KNSWidgets__Dialog_HeightForWidth(const KNSWidgets__Dialog* self, int param1);
void KNSWidgets__Dialog_OnHeightForWidth(const KNSWidgets__Dialog* self, intptr_t slot);
int KNSWidgets__Dialog_SuperHeightForWidth(const KNSWidgets__Dialog* self, int param1);
bool KNSWidgets__Dialog_HasHeightForWidth(const KNSWidgets__Dialog* self);
void KNSWidgets__Dialog_OnHasHeightForWidth(const KNSWidgets__Dialog* self, intptr_t slot);
bool KNSWidgets__Dialog_SuperHasHeightForWidth(const KNSWidgets__Dialog* self);
QPaintEngine* KNSWidgets__Dialog_PaintEngine(const KNSWidgets__Dialog* self);
void KNSWidgets__Dialog_OnPaintEngine(const KNSWidgets__Dialog* self, intptr_t slot);
QPaintEngine* KNSWidgets__Dialog_SuperPaintEngine(const KNSWidgets__Dialog* self);
bool KNSWidgets__Dialog_Event(KNSWidgets__Dialog* self, QEvent* event);
void KNSWidgets__Dialog_OnEvent(KNSWidgets__Dialog* self, intptr_t slot);
bool KNSWidgets__Dialog_SuperEvent(KNSWidgets__Dialog* self, QEvent* event);
void KNSWidgets__Dialog_MousePressEvent(KNSWidgets__Dialog* self, QMouseEvent* event);
void KNSWidgets__Dialog_OnMousePressEvent(KNSWidgets__Dialog* self, intptr_t slot);
void KNSWidgets__Dialog_SuperMousePressEvent(KNSWidgets__Dialog* self, QMouseEvent* event);
void KNSWidgets__Dialog_MouseReleaseEvent(KNSWidgets__Dialog* self, QMouseEvent* event);
void KNSWidgets__Dialog_OnMouseReleaseEvent(KNSWidgets__Dialog* self, intptr_t slot);
void KNSWidgets__Dialog_SuperMouseReleaseEvent(KNSWidgets__Dialog* self, QMouseEvent* event);
void KNSWidgets__Dialog_MouseDoubleClickEvent(KNSWidgets__Dialog* self, QMouseEvent* event);
void KNSWidgets__Dialog_OnMouseDoubleClickEvent(KNSWidgets__Dialog* self, intptr_t slot);
void KNSWidgets__Dialog_SuperMouseDoubleClickEvent(KNSWidgets__Dialog* self, QMouseEvent* event);
void KNSWidgets__Dialog_MouseMoveEvent(KNSWidgets__Dialog* self, QMouseEvent* event);
void KNSWidgets__Dialog_OnMouseMoveEvent(KNSWidgets__Dialog* self, intptr_t slot);
void KNSWidgets__Dialog_SuperMouseMoveEvent(KNSWidgets__Dialog* self, QMouseEvent* event);
void KNSWidgets__Dialog_WheelEvent(KNSWidgets__Dialog* self, QWheelEvent* event);
void KNSWidgets__Dialog_OnWheelEvent(KNSWidgets__Dialog* self, intptr_t slot);
void KNSWidgets__Dialog_SuperWheelEvent(KNSWidgets__Dialog* self, QWheelEvent* event);
void KNSWidgets__Dialog_KeyReleaseEvent(KNSWidgets__Dialog* self, QKeyEvent* event);
void KNSWidgets__Dialog_OnKeyReleaseEvent(KNSWidgets__Dialog* self, intptr_t slot);
void KNSWidgets__Dialog_SuperKeyReleaseEvent(KNSWidgets__Dialog* self, QKeyEvent* event);
void KNSWidgets__Dialog_FocusInEvent(KNSWidgets__Dialog* self, QFocusEvent* event);
void KNSWidgets__Dialog_OnFocusInEvent(KNSWidgets__Dialog* self, intptr_t slot);
void KNSWidgets__Dialog_SuperFocusInEvent(KNSWidgets__Dialog* self, QFocusEvent* event);
void KNSWidgets__Dialog_FocusOutEvent(KNSWidgets__Dialog* self, QFocusEvent* event);
void KNSWidgets__Dialog_OnFocusOutEvent(KNSWidgets__Dialog* self, intptr_t slot);
void KNSWidgets__Dialog_SuperFocusOutEvent(KNSWidgets__Dialog* self, QFocusEvent* event);
void KNSWidgets__Dialog_EnterEvent(KNSWidgets__Dialog* self, QEnterEvent* event);
void KNSWidgets__Dialog_OnEnterEvent(KNSWidgets__Dialog* self, intptr_t slot);
void KNSWidgets__Dialog_SuperEnterEvent(KNSWidgets__Dialog* self, QEnterEvent* event);
void KNSWidgets__Dialog_LeaveEvent(KNSWidgets__Dialog* self, QEvent* event);
void KNSWidgets__Dialog_OnLeaveEvent(KNSWidgets__Dialog* self, intptr_t slot);
void KNSWidgets__Dialog_SuperLeaveEvent(KNSWidgets__Dialog* self, QEvent* event);
void KNSWidgets__Dialog_PaintEvent(KNSWidgets__Dialog* self, QPaintEvent* event);
void KNSWidgets__Dialog_OnPaintEvent(KNSWidgets__Dialog* self, intptr_t slot);
void KNSWidgets__Dialog_SuperPaintEvent(KNSWidgets__Dialog* self, QPaintEvent* event);
void KNSWidgets__Dialog_MoveEvent(KNSWidgets__Dialog* self, QMoveEvent* event);
void KNSWidgets__Dialog_OnMoveEvent(KNSWidgets__Dialog* self, intptr_t slot);
void KNSWidgets__Dialog_SuperMoveEvent(KNSWidgets__Dialog* self, QMoveEvent* event);
void KNSWidgets__Dialog_TabletEvent(KNSWidgets__Dialog* self, QTabletEvent* event);
void KNSWidgets__Dialog_OnTabletEvent(KNSWidgets__Dialog* self, intptr_t slot);
void KNSWidgets__Dialog_SuperTabletEvent(KNSWidgets__Dialog* self, QTabletEvent* event);
void KNSWidgets__Dialog_ActionEvent(KNSWidgets__Dialog* self, QActionEvent* event);
void KNSWidgets__Dialog_OnActionEvent(KNSWidgets__Dialog* self, intptr_t slot);
void KNSWidgets__Dialog_SuperActionEvent(KNSWidgets__Dialog* self, QActionEvent* event);
void KNSWidgets__Dialog_DragEnterEvent(KNSWidgets__Dialog* self, QDragEnterEvent* event);
void KNSWidgets__Dialog_OnDragEnterEvent(KNSWidgets__Dialog* self, intptr_t slot);
void KNSWidgets__Dialog_SuperDragEnterEvent(KNSWidgets__Dialog* self, QDragEnterEvent* event);
void KNSWidgets__Dialog_DragMoveEvent(KNSWidgets__Dialog* self, QDragMoveEvent* event);
void KNSWidgets__Dialog_OnDragMoveEvent(KNSWidgets__Dialog* self, intptr_t slot);
void KNSWidgets__Dialog_SuperDragMoveEvent(KNSWidgets__Dialog* self, QDragMoveEvent* event);
void KNSWidgets__Dialog_DragLeaveEvent(KNSWidgets__Dialog* self, QDragLeaveEvent* event);
void KNSWidgets__Dialog_OnDragLeaveEvent(KNSWidgets__Dialog* self, intptr_t slot);
void KNSWidgets__Dialog_SuperDragLeaveEvent(KNSWidgets__Dialog* self, QDragLeaveEvent* event);
void KNSWidgets__Dialog_DropEvent(KNSWidgets__Dialog* self, QDropEvent* event);
void KNSWidgets__Dialog_OnDropEvent(KNSWidgets__Dialog* self, intptr_t slot);
void KNSWidgets__Dialog_SuperDropEvent(KNSWidgets__Dialog* self, QDropEvent* event);
void KNSWidgets__Dialog_HideEvent(KNSWidgets__Dialog* self, QHideEvent* event);
void KNSWidgets__Dialog_OnHideEvent(KNSWidgets__Dialog* self, intptr_t slot);
void KNSWidgets__Dialog_SuperHideEvent(KNSWidgets__Dialog* self, QHideEvent* event);
bool KNSWidgets__Dialog_NativeEvent(KNSWidgets__Dialog* self, const libqt_string eventType, void* message, intptr_t* result);
void KNSWidgets__Dialog_OnNativeEvent(KNSWidgets__Dialog* self, intptr_t slot);
bool KNSWidgets__Dialog_SuperNativeEvent(KNSWidgets__Dialog* self, const libqt_string eventType, void* message, intptr_t* result);
void KNSWidgets__Dialog_ChangeEvent(KNSWidgets__Dialog* self, QEvent* param1);
void KNSWidgets__Dialog_OnChangeEvent(KNSWidgets__Dialog* self, intptr_t slot);
void KNSWidgets__Dialog_SuperChangeEvent(KNSWidgets__Dialog* self, QEvent* param1);
int KNSWidgets__Dialog_Metric(const KNSWidgets__Dialog* self, int param1);
void KNSWidgets__Dialog_OnMetric(const KNSWidgets__Dialog* self, intptr_t slot);
int KNSWidgets__Dialog_SuperMetric(const KNSWidgets__Dialog* self, int param1);
void KNSWidgets__Dialog_InitPainter(const KNSWidgets__Dialog* self, QPainter* painter);
void KNSWidgets__Dialog_OnInitPainter(const KNSWidgets__Dialog* self, intptr_t slot);
void KNSWidgets__Dialog_SuperInitPainter(const KNSWidgets__Dialog* self, QPainter* painter);
QPaintDevice* KNSWidgets__Dialog_Redirected(const KNSWidgets__Dialog* self, QPoint* offset);
void KNSWidgets__Dialog_OnRedirected(const KNSWidgets__Dialog* self, intptr_t slot);
QPaintDevice* KNSWidgets__Dialog_SuperRedirected(const KNSWidgets__Dialog* self, QPoint* offset);
QPainter* KNSWidgets__Dialog_SharedPainter(const KNSWidgets__Dialog* self);
void KNSWidgets__Dialog_OnSharedPainter(const KNSWidgets__Dialog* self, intptr_t slot);
QPainter* KNSWidgets__Dialog_SuperSharedPainter(const KNSWidgets__Dialog* self);
void KNSWidgets__Dialog_InputMethodEvent(KNSWidgets__Dialog* self, QInputMethodEvent* param1);
void KNSWidgets__Dialog_OnInputMethodEvent(KNSWidgets__Dialog* self, intptr_t slot);
void KNSWidgets__Dialog_SuperInputMethodEvent(KNSWidgets__Dialog* self, QInputMethodEvent* param1);
QVariant* KNSWidgets__Dialog_InputMethodQuery(const KNSWidgets__Dialog* self, int param1);
void KNSWidgets__Dialog_OnInputMethodQuery(const KNSWidgets__Dialog* self, intptr_t slot);
QVariant* KNSWidgets__Dialog_SuperInputMethodQuery(const KNSWidgets__Dialog* self, int param1);
bool KNSWidgets__Dialog_FocusNextPrevChild(KNSWidgets__Dialog* self, bool next);
void KNSWidgets__Dialog_OnFocusNextPrevChild(KNSWidgets__Dialog* self, intptr_t slot);
bool KNSWidgets__Dialog_SuperFocusNextPrevChild(KNSWidgets__Dialog* self, bool next);
void KNSWidgets__Dialog_TimerEvent(KNSWidgets__Dialog* self, QTimerEvent* event);
void KNSWidgets__Dialog_OnTimerEvent(KNSWidgets__Dialog* self, intptr_t slot);
void KNSWidgets__Dialog_SuperTimerEvent(KNSWidgets__Dialog* self, QTimerEvent* event);
void KNSWidgets__Dialog_ChildEvent(KNSWidgets__Dialog* self, QChildEvent* event);
void KNSWidgets__Dialog_OnChildEvent(KNSWidgets__Dialog* self, intptr_t slot);
void KNSWidgets__Dialog_SuperChildEvent(KNSWidgets__Dialog* self, QChildEvent* event);
void KNSWidgets__Dialog_CustomEvent(KNSWidgets__Dialog* self, QEvent* event);
void KNSWidgets__Dialog_OnCustomEvent(KNSWidgets__Dialog* self, intptr_t slot);
void KNSWidgets__Dialog_SuperCustomEvent(KNSWidgets__Dialog* self, QEvent* event);
void KNSWidgets__Dialog_ConnectNotify(KNSWidgets__Dialog* self, const QMetaMethod* signal);
void KNSWidgets__Dialog_OnConnectNotify(KNSWidgets__Dialog* self, intptr_t slot);
void KNSWidgets__Dialog_SuperConnectNotify(KNSWidgets__Dialog* self, const QMetaMethod* signal);
void KNSWidgets__Dialog_DisconnectNotify(KNSWidgets__Dialog* self, const QMetaMethod* signal);
void KNSWidgets__Dialog_OnDisconnectNotify(KNSWidgets__Dialog* self, intptr_t slot);
void KNSWidgets__Dialog_SuperDisconnectNotify(KNSWidgets__Dialog* self, const QMetaMethod* signal);
void KNSWidgets__Dialog_AdjustPosition(KNSWidgets__Dialog* self, QWidget* param1);
void KNSWidgets__Dialog_OnAdjustPosition(KNSWidgets__Dialog* self, intptr_t slot);
void KNSWidgets__Dialog_SuperAdjustPosition(KNSWidgets__Dialog* self, QWidget* param1);
void KNSWidgets__Dialog_UpdateMicroFocus(KNSWidgets__Dialog* self);
void KNSWidgets__Dialog_OnUpdateMicroFocus(KNSWidgets__Dialog* self, intptr_t slot);
void KNSWidgets__Dialog_SuperUpdateMicroFocus(KNSWidgets__Dialog* self);
void KNSWidgets__Dialog_Create(KNSWidgets__Dialog* self);
void KNSWidgets__Dialog_OnCreate(KNSWidgets__Dialog* self, intptr_t slot);
void KNSWidgets__Dialog_SuperCreate(KNSWidgets__Dialog* self);
void KNSWidgets__Dialog_Destroy(KNSWidgets__Dialog* self);
void KNSWidgets__Dialog_OnDestroy(KNSWidgets__Dialog* self, intptr_t slot);
void KNSWidgets__Dialog_SuperDestroy(KNSWidgets__Dialog* self);
bool KNSWidgets__Dialog_FocusNextChild(KNSWidgets__Dialog* self);
void KNSWidgets__Dialog_OnFocusNextChild(KNSWidgets__Dialog* self, intptr_t slot);
bool KNSWidgets__Dialog_SuperFocusNextChild(KNSWidgets__Dialog* self);
bool KNSWidgets__Dialog_FocusPreviousChild(KNSWidgets__Dialog* self);
void KNSWidgets__Dialog_OnFocusPreviousChild(KNSWidgets__Dialog* self, intptr_t slot);
bool KNSWidgets__Dialog_SuperFocusPreviousChild(KNSWidgets__Dialog* self);
QObject* KNSWidgets__Dialog_Sender(const KNSWidgets__Dialog* self);
void KNSWidgets__Dialog_OnSender(const KNSWidgets__Dialog* self, intptr_t slot);
QObject* KNSWidgets__Dialog_SuperSender(const KNSWidgets__Dialog* self);
int KNSWidgets__Dialog_SenderSignalIndex(const KNSWidgets__Dialog* self);
void KNSWidgets__Dialog_OnSenderSignalIndex(const KNSWidgets__Dialog* self, intptr_t slot);
int KNSWidgets__Dialog_SuperSenderSignalIndex(const KNSWidgets__Dialog* self);
int KNSWidgets__Dialog_Receivers(const KNSWidgets__Dialog* self, const char* signal);
void KNSWidgets__Dialog_OnReceivers(const KNSWidgets__Dialog* self, intptr_t slot);
int KNSWidgets__Dialog_SuperReceivers(const KNSWidgets__Dialog* self, const char* signal);
bool KNSWidgets__Dialog_IsSignalConnected(const KNSWidgets__Dialog* self, const QMetaMethod* signal);
void KNSWidgets__Dialog_OnIsSignalConnected(const KNSWidgets__Dialog* self, intptr_t slot);
bool KNSWidgets__Dialog_SuperIsSignalConnected(const KNSWidgets__Dialog* self, const QMetaMethod* signal);
double KNSWidgets__Dialog_GetDecodedMetricF(const KNSWidgets__Dialog* self, int metricA, int metricB);
void KNSWidgets__Dialog_OnGetDecodedMetricF(const KNSWidgets__Dialog* self, intptr_t slot);
double KNSWidgets__Dialog_SuperGetDecodedMetricF(const KNSWidgets__Dialog* self, int metricA, int metricB);
void KNSWidgets__Dialog_Delete(KNSWidgets__Dialog* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
