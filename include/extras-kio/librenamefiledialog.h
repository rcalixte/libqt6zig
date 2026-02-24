#pragma once
#ifndef SRC_EXTRAS_KIOC_LIBRENAMEFILEDIALOG_H
#define SRC_EXTRAS_KIOC_LIBRENAMEFILEDIALOG_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KIO__RenameFileDialog)
typedef KIO::RenameFileDialog KIO__RenameFileDialog;
#endif
#else
typedef struct KFileItemList KFileItemList;
typedef struct KIO__RenameFileDialog KIO__RenameFileDialog;
typedef struct KJob KJob;
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
typedef struct QUrl QUrl;
typedef struct QVariant QVariant;
typedef struct QWheelEvent QWheelEvent;
typedef struct QWidget QWidget;
#endif

KIO__RenameFileDialog* KIO__RenameFileDialog_new(const KFileItemList* items, QWidget* parent);
QMetaObject* KIO__RenameFileDialog_MetaObject(const KIO__RenameFileDialog* self);
void* KIO__RenameFileDialog_Metacast(KIO__RenameFileDialog* self, const char* param1);
int KIO__RenameFileDialog_Metacall(KIO__RenameFileDialog* self, int param1, int param2, void** param3);
void KIO__RenameFileDialog_RenamingFinished(KIO__RenameFileDialog* self, const libqt_list /* of QUrl* */ urls);
void KIO__RenameFileDialog_Connect_RenamingFinished(KIO__RenameFileDialog* self, intptr_t slot);
void KIO__RenameFileDialog_Error(KIO__RenameFileDialog* self, KJob* errorVal);
void KIO__RenameFileDialog_Connect_Error(KIO__RenameFileDialog* self, intptr_t slot);
void KIO__RenameFileDialog_OnMetaObject(const KIO__RenameFileDialog* self, intptr_t slot);
QMetaObject* KIO__RenameFileDialog_SuperMetaObject(const KIO__RenameFileDialog* self);
void KIO__RenameFileDialog_OnMetacast(KIO__RenameFileDialog* self, intptr_t slot);
void* KIO__RenameFileDialog_SuperMetacast(KIO__RenameFileDialog* self, const char* param1);
void KIO__RenameFileDialog_OnMetacall(KIO__RenameFileDialog* self, intptr_t slot);
int KIO__RenameFileDialog_SuperMetacall(KIO__RenameFileDialog* self, int param1, int param2, void** param3);
void KIO__RenameFileDialog_SetVisible(KIO__RenameFileDialog* self, bool visible);
void KIO__RenameFileDialog_OnSetVisible(KIO__RenameFileDialog* self, intptr_t slot);
void KIO__RenameFileDialog_SuperSetVisible(KIO__RenameFileDialog* self, bool visible);
QSize* KIO__RenameFileDialog_SizeHint(const KIO__RenameFileDialog* self);
void KIO__RenameFileDialog_OnSizeHint(const KIO__RenameFileDialog* self, intptr_t slot);
QSize* KIO__RenameFileDialog_SuperSizeHint(const KIO__RenameFileDialog* self);
QSize* KIO__RenameFileDialog_MinimumSizeHint(const KIO__RenameFileDialog* self);
void KIO__RenameFileDialog_OnMinimumSizeHint(const KIO__RenameFileDialog* self, intptr_t slot);
QSize* KIO__RenameFileDialog_SuperMinimumSizeHint(const KIO__RenameFileDialog* self);
void KIO__RenameFileDialog_Open(KIO__RenameFileDialog* self);
void KIO__RenameFileDialog_OnOpen(KIO__RenameFileDialog* self, intptr_t slot);
void KIO__RenameFileDialog_SuperOpen(KIO__RenameFileDialog* self);
int KIO__RenameFileDialog_Exec(KIO__RenameFileDialog* self);
void KIO__RenameFileDialog_OnExec(KIO__RenameFileDialog* self, intptr_t slot);
int KIO__RenameFileDialog_SuperExec(KIO__RenameFileDialog* self);
void KIO__RenameFileDialog_Done(KIO__RenameFileDialog* self, int param1);
void KIO__RenameFileDialog_OnDone(KIO__RenameFileDialog* self, intptr_t slot);
void KIO__RenameFileDialog_SuperDone(KIO__RenameFileDialog* self, int param1);
void KIO__RenameFileDialog_Accept(KIO__RenameFileDialog* self);
void KIO__RenameFileDialog_OnAccept(KIO__RenameFileDialog* self, intptr_t slot);
void KIO__RenameFileDialog_SuperAccept(KIO__RenameFileDialog* self);
void KIO__RenameFileDialog_Reject(KIO__RenameFileDialog* self);
void KIO__RenameFileDialog_OnReject(KIO__RenameFileDialog* self, intptr_t slot);
void KIO__RenameFileDialog_SuperReject(KIO__RenameFileDialog* self);
void KIO__RenameFileDialog_KeyPressEvent(KIO__RenameFileDialog* self, QKeyEvent* param1);
void KIO__RenameFileDialog_OnKeyPressEvent(KIO__RenameFileDialog* self, intptr_t slot);
void KIO__RenameFileDialog_SuperKeyPressEvent(KIO__RenameFileDialog* self, QKeyEvent* param1);
void KIO__RenameFileDialog_CloseEvent(KIO__RenameFileDialog* self, QCloseEvent* param1);
void KIO__RenameFileDialog_OnCloseEvent(KIO__RenameFileDialog* self, intptr_t slot);
void KIO__RenameFileDialog_SuperCloseEvent(KIO__RenameFileDialog* self, QCloseEvent* param1);
void KIO__RenameFileDialog_ShowEvent(KIO__RenameFileDialog* self, QShowEvent* param1);
void KIO__RenameFileDialog_OnShowEvent(KIO__RenameFileDialog* self, intptr_t slot);
void KIO__RenameFileDialog_SuperShowEvent(KIO__RenameFileDialog* self, QShowEvent* param1);
void KIO__RenameFileDialog_ResizeEvent(KIO__RenameFileDialog* self, QResizeEvent* param1);
void KIO__RenameFileDialog_OnResizeEvent(KIO__RenameFileDialog* self, intptr_t slot);
void KIO__RenameFileDialog_SuperResizeEvent(KIO__RenameFileDialog* self, QResizeEvent* param1);
void KIO__RenameFileDialog_ContextMenuEvent(KIO__RenameFileDialog* self, QContextMenuEvent* param1);
void KIO__RenameFileDialog_OnContextMenuEvent(KIO__RenameFileDialog* self, intptr_t slot);
void KIO__RenameFileDialog_SuperContextMenuEvent(KIO__RenameFileDialog* self, QContextMenuEvent* param1);
bool KIO__RenameFileDialog_EventFilter(KIO__RenameFileDialog* self, QObject* param1, QEvent* param2);
void KIO__RenameFileDialog_OnEventFilter(KIO__RenameFileDialog* self, intptr_t slot);
bool KIO__RenameFileDialog_SuperEventFilter(KIO__RenameFileDialog* self, QObject* param1, QEvent* param2);
int KIO__RenameFileDialog_DevType(const KIO__RenameFileDialog* self);
void KIO__RenameFileDialog_OnDevType(const KIO__RenameFileDialog* self, intptr_t slot);
int KIO__RenameFileDialog_SuperDevType(const KIO__RenameFileDialog* self);
int KIO__RenameFileDialog_HeightForWidth(const KIO__RenameFileDialog* self, int param1);
void KIO__RenameFileDialog_OnHeightForWidth(const KIO__RenameFileDialog* self, intptr_t slot);
int KIO__RenameFileDialog_SuperHeightForWidth(const KIO__RenameFileDialog* self, int param1);
bool KIO__RenameFileDialog_HasHeightForWidth(const KIO__RenameFileDialog* self);
void KIO__RenameFileDialog_OnHasHeightForWidth(const KIO__RenameFileDialog* self, intptr_t slot);
bool KIO__RenameFileDialog_SuperHasHeightForWidth(const KIO__RenameFileDialog* self);
QPaintEngine* KIO__RenameFileDialog_PaintEngine(const KIO__RenameFileDialog* self);
void KIO__RenameFileDialog_OnPaintEngine(const KIO__RenameFileDialog* self, intptr_t slot);
QPaintEngine* KIO__RenameFileDialog_SuperPaintEngine(const KIO__RenameFileDialog* self);
bool KIO__RenameFileDialog_Event(KIO__RenameFileDialog* self, QEvent* event);
void KIO__RenameFileDialog_OnEvent(KIO__RenameFileDialog* self, intptr_t slot);
bool KIO__RenameFileDialog_SuperEvent(KIO__RenameFileDialog* self, QEvent* event);
void KIO__RenameFileDialog_MousePressEvent(KIO__RenameFileDialog* self, QMouseEvent* event);
void KIO__RenameFileDialog_OnMousePressEvent(KIO__RenameFileDialog* self, intptr_t slot);
void KIO__RenameFileDialog_SuperMousePressEvent(KIO__RenameFileDialog* self, QMouseEvent* event);
void KIO__RenameFileDialog_MouseReleaseEvent(KIO__RenameFileDialog* self, QMouseEvent* event);
void KIO__RenameFileDialog_OnMouseReleaseEvent(KIO__RenameFileDialog* self, intptr_t slot);
void KIO__RenameFileDialog_SuperMouseReleaseEvent(KIO__RenameFileDialog* self, QMouseEvent* event);
void KIO__RenameFileDialog_MouseDoubleClickEvent(KIO__RenameFileDialog* self, QMouseEvent* event);
void KIO__RenameFileDialog_OnMouseDoubleClickEvent(KIO__RenameFileDialog* self, intptr_t slot);
void KIO__RenameFileDialog_SuperMouseDoubleClickEvent(KIO__RenameFileDialog* self, QMouseEvent* event);
void KIO__RenameFileDialog_MouseMoveEvent(KIO__RenameFileDialog* self, QMouseEvent* event);
void KIO__RenameFileDialog_OnMouseMoveEvent(KIO__RenameFileDialog* self, intptr_t slot);
void KIO__RenameFileDialog_SuperMouseMoveEvent(KIO__RenameFileDialog* self, QMouseEvent* event);
void KIO__RenameFileDialog_WheelEvent(KIO__RenameFileDialog* self, QWheelEvent* event);
void KIO__RenameFileDialog_OnWheelEvent(KIO__RenameFileDialog* self, intptr_t slot);
void KIO__RenameFileDialog_SuperWheelEvent(KIO__RenameFileDialog* self, QWheelEvent* event);
void KIO__RenameFileDialog_KeyReleaseEvent(KIO__RenameFileDialog* self, QKeyEvent* event);
void KIO__RenameFileDialog_OnKeyReleaseEvent(KIO__RenameFileDialog* self, intptr_t slot);
void KIO__RenameFileDialog_SuperKeyReleaseEvent(KIO__RenameFileDialog* self, QKeyEvent* event);
void KIO__RenameFileDialog_FocusInEvent(KIO__RenameFileDialog* self, QFocusEvent* event);
void KIO__RenameFileDialog_OnFocusInEvent(KIO__RenameFileDialog* self, intptr_t slot);
void KIO__RenameFileDialog_SuperFocusInEvent(KIO__RenameFileDialog* self, QFocusEvent* event);
void KIO__RenameFileDialog_FocusOutEvent(KIO__RenameFileDialog* self, QFocusEvent* event);
void KIO__RenameFileDialog_OnFocusOutEvent(KIO__RenameFileDialog* self, intptr_t slot);
void KIO__RenameFileDialog_SuperFocusOutEvent(KIO__RenameFileDialog* self, QFocusEvent* event);
void KIO__RenameFileDialog_EnterEvent(KIO__RenameFileDialog* self, QEnterEvent* event);
void KIO__RenameFileDialog_OnEnterEvent(KIO__RenameFileDialog* self, intptr_t slot);
void KIO__RenameFileDialog_SuperEnterEvent(KIO__RenameFileDialog* self, QEnterEvent* event);
void KIO__RenameFileDialog_LeaveEvent(KIO__RenameFileDialog* self, QEvent* event);
void KIO__RenameFileDialog_OnLeaveEvent(KIO__RenameFileDialog* self, intptr_t slot);
void KIO__RenameFileDialog_SuperLeaveEvent(KIO__RenameFileDialog* self, QEvent* event);
void KIO__RenameFileDialog_PaintEvent(KIO__RenameFileDialog* self, QPaintEvent* event);
void KIO__RenameFileDialog_OnPaintEvent(KIO__RenameFileDialog* self, intptr_t slot);
void KIO__RenameFileDialog_SuperPaintEvent(KIO__RenameFileDialog* self, QPaintEvent* event);
void KIO__RenameFileDialog_MoveEvent(KIO__RenameFileDialog* self, QMoveEvent* event);
void KIO__RenameFileDialog_OnMoveEvent(KIO__RenameFileDialog* self, intptr_t slot);
void KIO__RenameFileDialog_SuperMoveEvent(KIO__RenameFileDialog* self, QMoveEvent* event);
void KIO__RenameFileDialog_TabletEvent(KIO__RenameFileDialog* self, QTabletEvent* event);
void KIO__RenameFileDialog_OnTabletEvent(KIO__RenameFileDialog* self, intptr_t slot);
void KIO__RenameFileDialog_SuperTabletEvent(KIO__RenameFileDialog* self, QTabletEvent* event);
void KIO__RenameFileDialog_ActionEvent(KIO__RenameFileDialog* self, QActionEvent* event);
void KIO__RenameFileDialog_OnActionEvent(KIO__RenameFileDialog* self, intptr_t slot);
void KIO__RenameFileDialog_SuperActionEvent(KIO__RenameFileDialog* self, QActionEvent* event);
void KIO__RenameFileDialog_DragEnterEvent(KIO__RenameFileDialog* self, QDragEnterEvent* event);
void KIO__RenameFileDialog_OnDragEnterEvent(KIO__RenameFileDialog* self, intptr_t slot);
void KIO__RenameFileDialog_SuperDragEnterEvent(KIO__RenameFileDialog* self, QDragEnterEvent* event);
void KIO__RenameFileDialog_DragMoveEvent(KIO__RenameFileDialog* self, QDragMoveEvent* event);
void KIO__RenameFileDialog_OnDragMoveEvent(KIO__RenameFileDialog* self, intptr_t slot);
void KIO__RenameFileDialog_SuperDragMoveEvent(KIO__RenameFileDialog* self, QDragMoveEvent* event);
void KIO__RenameFileDialog_DragLeaveEvent(KIO__RenameFileDialog* self, QDragLeaveEvent* event);
void KIO__RenameFileDialog_OnDragLeaveEvent(KIO__RenameFileDialog* self, intptr_t slot);
void KIO__RenameFileDialog_SuperDragLeaveEvent(KIO__RenameFileDialog* self, QDragLeaveEvent* event);
void KIO__RenameFileDialog_DropEvent(KIO__RenameFileDialog* self, QDropEvent* event);
void KIO__RenameFileDialog_OnDropEvent(KIO__RenameFileDialog* self, intptr_t slot);
void KIO__RenameFileDialog_SuperDropEvent(KIO__RenameFileDialog* self, QDropEvent* event);
void KIO__RenameFileDialog_HideEvent(KIO__RenameFileDialog* self, QHideEvent* event);
void KIO__RenameFileDialog_OnHideEvent(KIO__RenameFileDialog* self, intptr_t slot);
void KIO__RenameFileDialog_SuperHideEvent(KIO__RenameFileDialog* self, QHideEvent* event);
bool KIO__RenameFileDialog_NativeEvent(KIO__RenameFileDialog* self, const libqt_string eventType, void* message, intptr_t* result);
void KIO__RenameFileDialog_OnNativeEvent(KIO__RenameFileDialog* self, intptr_t slot);
bool KIO__RenameFileDialog_SuperNativeEvent(KIO__RenameFileDialog* self, const libqt_string eventType, void* message, intptr_t* result);
void KIO__RenameFileDialog_ChangeEvent(KIO__RenameFileDialog* self, QEvent* param1);
void KIO__RenameFileDialog_OnChangeEvent(KIO__RenameFileDialog* self, intptr_t slot);
void KIO__RenameFileDialog_SuperChangeEvent(KIO__RenameFileDialog* self, QEvent* param1);
int KIO__RenameFileDialog_Metric(const KIO__RenameFileDialog* self, int param1);
void KIO__RenameFileDialog_OnMetric(const KIO__RenameFileDialog* self, intptr_t slot);
int KIO__RenameFileDialog_SuperMetric(const KIO__RenameFileDialog* self, int param1);
void KIO__RenameFileDialog_InitPainter(const KIO__RenameFileDialog* self, QPainter* painter);
void KIO__RenameFileDialog_OnInitPainter(const KIO__RenameFileDialog* self, intptr_t slot);
void KIO__RenameFileDialog_SuperInitPainter(const KIO__RenameFileDialog* self, QPainter* painter);
QPaintDevice* KIO__RenameFileDialog_Redirected(const KIO__RenameFileDialog* self, QPoint* offset);
void KIO__RenameFileDialog_OnRedirected(const KIO__RenameFileDialog* self, intptr_t slot);
QPaintDevice* KIO__RenameFileDialog_SuperRedirected(const KIO__RenameFileDialog* self, QPoint* offset);
QPainter* KIO__RenameFileDialog_SharedPainter(const KIO__RenameFileDialog* self);
void KIO__RenameFileDialog_OnSharedPainter(const KIO__RenameFileDialog* self, intptr_t slot);
QPainter* KIO__RenameFileDialog_SuperSharedPainter(const KIO__RenameFileDialog* self);
void KIO__RenameFileDialog_InputMethodEvent(KIO__RenameFileDialog* self, QInputMethodEvent* param1);
void KIO__RenameFileDialog_OnInputMethodEvent(KIO__RenameFileDialog* self, intptr_t slot);
void KIO__RenameFileDialog_SuperInputMethodEvent(KIO__RenameFileDialog* self, QInputMethodEvent* param1);
QVariant* KIO__RenameFileDialog_InputMethodQuery(const KIO__RenameFileDialog* self, int param1);
void KIO__RenameFileDialog_OnInputMethodQuery(const KIO__RenameFileDialog* self, intptr_t slot);
QVariant* KIO__RenameFileDialog_SuperInputMethodQuery(const KIO__RenameFileDialog* self, int param1);
bool KIO__RenameFileDialog_FocusNextPrevChild(KIO__RenameFileDialog* self, bool next);
void KIO__RenameFileDialog_OnFocusNextPrevChild(KIO__RenameFileDialog* self, intptr_t slot);
bool KIO__RenameFileDialog_SuperFocusNextPrevChild(KIO__RenameFileDialog* self, bool next);
void KIO__RenameFileDialog_TimerEvent(KIO__RenameFileDialog* self, QTimerEvent* event);
void KIO__RenameFileDialog_OnTimerEvent(KIO__RenameFileDialog* self, intptr_t slot);
void KIO__RenameFileDialog_SuperTimerEvent(KIO__RenameFileDialog* self, QTimerEvent* event);
void KIO__RenameFileDialog_ChildEvent(KIO__RenameFileDialog* self, QChildEvent* event);
void KIO__RenameFileDialog_OnChildEvent(KIO__RenameFileDialog* self, intptr_t slot);
void KIO__RenameFileDialog_SuperChildEvent(KIO__RenameFileDialog* self, QChildEvent* event);
void KIO__RenameFileDialog_CustomEvent(KIO__RenameFileDialog* self, QEvent* event);
void KIO__RenameFileDialog_OnCustomEvent(KIO__RenameFileDialog* self, intptr_t slot);
void KIO__RenameFileDialog_SuperCustomEvent(KIO__RenameFileDialog* self, QEvent* event);
void KIO__RenameFileDialog_ConnectNotify(KIO__RenameFileDialog* self, const QMetaMethod* signal);
void KIO__RenameFileDialog_OnConnectNotify(KIO__RenameFileDialog* self, intptr_t slot);
void KIO__RenameFileDialog_SuperConnectNotify(KIO__RenameFileDialog* self, const QMetaMethod* signal);
void KIO__RenameFileDialog_DisconnectNotify(KIO__RenameFileDialog* self, const QMetaMethod* signal);
void KIO__RenameFileDialog_OnDisconnectNotify(KIO__RenameFileDialog* self, intptr_t slot);
void KIO__RenameFileDialog_SuperDisconnectNotify(KIO__RenameFileDialog* self, const QMetaMethod* signal);
void KIO__RenameFileDialog_AdjustPosition(KIO__RenameFileDialog* self, QWidget* param1);
void KIO__RenameFileDialog_OnAdjustPosition(KIO__RenameFileDialog* self, intptr_t slot);
void KIO__RenameFileDialog_SuperAdjustPosition(KIO__RenameFileDialog* self, QWidget* param1);
void KIO__RenameFileDialog_UpdateMicroFocus(KIO__RenameFileDialog* self);
void KIO__RenameFileDialog_OnUpdateMicroFocus(KIO__RenameFileDialog* self, intptr_t slot);
void KIO__RenameFileDialog_SuperUpdateMicroFocus(KIO__RenameFileDialog* self);
void KIO__RenameFileDialog_Create(KIO__RenameFileDialog* self);
void KIO__RenameFileDialog_OnCreate(KIO__RenameFileDialog* self, intptr_t slot);
void KIO__RenameFileDialog_SuperCreate(KIO__RenameFileDialog* self);
void KIO__RenameFileDialog_Destroy(KIO__RenameFileDialog* self);
void KIO__RenameFileDialog_OnDestroy(KIO__RenameFileDialog* self, intptr_t slot);
void KIO__RenameFileDialog_SuperDestroy(KIO__RenameFileDialog* self);
bool KIO__RenameFileDialog_FocusNextChild(KIO__RenameFileDialog* self);
void KIO__RenameFileDialog_OnFocusNextChild(KIO__RenameFileDialog* self, intptr_t slot);
bool KIO__RenameFileDialog_SuperFocusNextChild(KIO__RenameFileDialog* self);
bool KIO__RenameFileDialog_FocusPreviousChild(KIO__RenameFileDialog* self);
void KIO__RenameFileDialog_OnFocusPreviousChild(KIO__RenameFileDialog* self, intptr_t slot);
bool KIO__RenameFileDialog_SuperFocusPreviousChild(KIO__RenameFileDialog* self);
QObject* KIO__RenameFileDialog_Sender(const KIO__RenameFileDialog* self);
void KIO__RenameFileDialog_OnSender(const KIO__RenameFileDialog* self, intptr_t slot);
QObject* KIO__RenameFileDialog_SuperSender(const KIO__RenameFileDialog* self);
int KIO__RenameFileDialog_SenderSignalIndex(const KIO__RenameFileDialog* self);
void KIO__RenameFileDialog_OnSenderSignalIndex(const KIO__RenameFileDialog* self, intptr_t slot);
int KIO__RenameFileDialog_SuperSenderSignalIndex(const KIO__RenameFileDialog* self);
int KIO__RenameFileDialog_Receivers(const KIO__RenameFileDialog* self, const char* signal);
void KIO__RenameFileDialog_OnReceivers(const KIO__RenameFileDialog* self, intptr_t slot);
int KIO__RenameFileDialog_SuperReceivers(const KIO__RenameFileDialog* self, const char* signal);
bool KIO__RenameFileDialog_IsSignalConnected(const KIO__RenameFileDialog* self, const QMetaMethod* signal);
void KIO__RenameFileDialog_OnIsSignalConnected(const KIO__RenameFileDialog* self, intptr_t slot);
bool KIO__RenameFileDialog_SuperIsSignalConnected(const KIO__RenameFileDialog* self, const QMetaMethod* signal);
double KIO__RenameFileDialog_GetDecodedMetricF(const KIO__RenameFileDialog* self, int metricA, int metricB);
void KIO__RenameFileDialog_OnGetDecodedMetricF(const KIO__RenameFileDialog* self, intptr_t slot);
double KIO__RenameFileDialog_SuperGetDecodedMetricF(const KIO__RenameFileDialog* self, int metricA, int metricB);
void KIO__RenameFileDialog_Delete(KIO__RenameFileDialog* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
