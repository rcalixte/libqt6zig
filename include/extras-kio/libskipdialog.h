#pragma once
#ifndef SRC_EXTRAS_KIOC_LIBSKIPDIALOG_H
#define SRC_EXTRAS_KIOC_LIBSKIPDIALOG_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KIO__SkipDialog)
typedef KIO::SkipDialog KIO__SkipDialog;
#endif
#else
typedef struct KIO__SkipDialog KIO__SkipDialog;
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

KIO__SkipDialog* KIO__SkipDialog_new(QWidget* parent, int options, const libqt_string _error_text);
QMetaObject* KIO__SkipDialog_MetaObject(const KIO__SkipDialog* self);
void* KIO__SkipDialog_Metacast(KIO__SkipDialog* self, const char* param1);
int KIO__SkipDialog_Metacall(KIO__SkipDialog* self, int param1, int param2, void** param3);
libqt_string KIO__SkipDialog_Tr(const char* s);
libqt_string KIO__SkipDialog_Tr2(const char* s, const char* c);
libqt_string KIO__SkipDialog_Tr3(const char* s, const char* c, int n);
void KIO__SkipDialog_OnMetacall(KIO__SkipDialog* self, intptr_t slot);
int KIO__SkipDialog_QBaseMetacall(KIO__SkipDialog* self, int param1, int param2, void** param3);
void KIO__SkipDialog_SetVisible(KIO__SkipDialog* self, bool visible);
void KIO__SkipDialog_OnSetVisible(KIO__SkipDialog* self, intptr_t slot);
void KIO__SkipDialog_QBaseSetVisible(KIO__SkipDialog* self, bool visible);
QSize* KIO__SkipDialog_SizeHint(const KIO__SkipDialog* self);
void KIO__SkipDialog_OnSizeHint(const KIO__SkipDialog* self, intptr_t slot);
QSize* KIO__SkipDialog_QBaseSizeHint(const KIO__SkipDialog* self);
QSize* KIO__SkipDialog_MinimumSizeHint(const KIO__SkipDialog* self);
void KIO__SkipDialog_OnMinimumSizeHint(const KIO__SkipDialog* self, intptr_t slot);
QSize* KIO__SkipDialog_QBaseMinimumSizeHint(const KIO__SkipDialog* self);
void KIO__SkipDialog_Open(KIO__SkipDialog* self);
void KIO__SkipDialog_OnOpen(KIO__SkipDialog* self, intptr_t slot);
void KIO__SkipDialog_QBaseOpen(KIO__SkipDialog* self);
int KIO__SkipDialog_Exec(KIO__SkipDialog* self);
void KIO__SkipDialog_OnExec(KIO__SkipDialog* self, intptr_t slot);
int KIO__SkipDialog_QBaseExec(KIO__SkipDialog* self);
void KIO__SkipDialog_Done(KIO__SkipDialog* self, int param1);
void KIO__SkipDialog_OnDone(KIO__SkipDialog* self, intptr_t slot);
void KIO__SkipDialog_QBaseDone(KIO__SkipDialog* self, int param1);
void KIO__SkipDialog_Accept(KIO__SkipDialog* self);
void KIO__SkipDialog_OnAccept(KIO__SkipDialog* self, intptr_t slot);
void KIO__SkipDialog_QBaseAccept(KIO__SkipDialog* self);
void KIO__SkipDialog_Reject(KIO__SkipDialog* self);
void KIO__SkipDialog_OnReject(KIO__SkipDialog* self, intptr_t slot);
void KIO__SkipDialog_QBaseReject(KIO__SkipDialog* self);
void KIO__SkipDialog_KeyPressEvent(KIO__SkipDialog* self, QKeyEvent* param1);
void KIO__SkipDialog_OnKeyPressEvent(KIO__SkipDialog* self, intptr_t slot);
void KIO__SkipDialog_QBaseKeyPressEvent(KIO__SkipDialog* self, QKeyEvent* param1);
void KIO__SkipDialog_CloseEvent(KIO__SkipDialog* self, QCloseEvent* param1);
void KIO__SkipDialog_OnCloseEvent(KIO__SkipDialog* self, intptr_t slot);
void KIO__SkipDialog_QBaseCloseEvent(KIO__SkipDialog* self, QCloseEvent* param1);
void KIO__SkipDialog_ShowEvent(KIO__SkipDialog* self, QShowEvent* param1);
void KIO__SkipDialog_OnShowEvent(KIO__SkipDialog* self, intptr_t slot);
void KIO__SkipDialog_QBaseShowEvent(KIO__SkipDialog* self, QShowEvent* param1);
void KIO__SkipDialog_ResizeEvent(KIO__SkipDialog* self, QResizeEvent* param1);
void KIO__SkipDialog_OnResizeEvent(KIO__SkipDialog* self, intptr_t slot);
void KIO__SkipDialog_QBaseResizeEvent(KIO__SkipDialog* self, QResizeEvent* param1);
void KIO__SkipDialog_ContextMenuEvent(KIO__SkipDialog* self, QContextMenuEvent* param1);
void KIO__SkipDialog_OnContextMenuEvent(KIO__SkipDialog* self, intptr_t slot);
void KIO__SkipDialog_QBaseContextMenuEvent(KIO__SkipDialog* self, QContextMenuEvent* param1);
bool KIO__SkipDialog_EventFilter(KIO__SkipDialog* self, QObject* param1, QEvent* param2);
void KIO__SkipDialog_OnEventFilter(KIO__SkipDialog* self, intptr_t slot);
bool KIO__SkipDialog_QBaseEventFilter(KIO__SkipDialog* self, QObject* param1, QEvent* param2);
int KIO__SkipDialog_DevType(const KIO__SkipDialog* self);
void KIO__SkipDialog_OnDevType(const KIO__SkipDialog* self, intptr_t slot);
int KIO__SkipDialog_QBaseDevType(const KIO__SkipDialog* self);
int KIO__SkipDialog_HeightForWidth(const KIO__SkipDialog* self, int param1);
void KIO__SkipDialog_OnHeightForWidth(const KIO__SkipDialog* self, intptr_t slot);
int KIO__SkipDialog_QBaseHeightForWidth(const KIO__SkipDialog* self, int param1);
bool KIO__SkipDialog_HasHeightForWidth(const KIO__SkipDialog* self);
void KIO__SkipDialog_OnHasHeightForWidth(const KIO__SkipDialog* self, intptr_t slot);
bool KIO__SkipDialog_QBaseHasHeightForWidth(const KIO__SkipDialog* self);
QPaintEngine* KIO__SkipDialog_PaintEngine(const KIO__SkipDialog* self);
void KIO__SkipDialog_OnPaintEngine(const KIO__SkipDialog* self, intptr_t slot);
QPaintEngine* KIO__SkipDialog_QBasePaintEngine(const KIO__SkipDialog* self);
bool KIO__SkipDialog_Event(KIO__SkipDialog* self, QEvent* event);
void KIO__SkipDialog_OnEvent(KIO__SkipDialog* self, intptr_t slot);
bool KIO__SkipDialog_QBaseEvent(KIO__SkipDialog* self, QEvent* event);
void KIO__SkipDialog_MousePressEvent(KIO__SkipDialog* self, QMouseEvent* event);
void KIO__SkipDialog_OnMousePressEvent(KIO__SkipDialog* self, intptr_t slot);
void KIO__SkipDialog_QBaseMousePressEvent(KIO__SkipDialog* self, QMouseEvent* event);
void KIO__SkipDialog_MouseReleaseEvent(KIO__SkipDialog* self, QMouseEvent* event);
void KIO__SkipDialog_OnMouseReleaseEvent(KIO__SkipDialog* self, intptr_t slot);
void KIO__SkipDialog_QBaseMouseReleaseEvent(KIO__SkipDialog* self, QMouseEvent* event);
void KIO__SkipDialog_MouseDoubleClickEvent(KIO__SkipDialog* self, QMouseEvent* event);
void KIO__SkipDialog_OnMouseDoubleClickEvent(KIO__SkipDialog* self, intptr_t slot);
void KIO__SkipDialog_QBaseMouseDoubleClickEvent(KIO__SkipDialog* self, QMouseEvent* event);
void KIO__SkipDialog_MouseMoveEvent(KIO__SkipDialog* self, QMouseEvent* event);
void KIO__SkipDialog_OnMouseMoveEvent(KIO__SkipDialog* self, intptr_t slot);
void KIO__SkipDialog_QBaseMouseMoveEvent(KIO__SkipDialog* self, QMouseEvent* event);
void KIO__SkipDialog_WheelEvent(KIO__SkipDialog* self, QWheelEvent* event);
void KIO__SkipDialog_OnWheelEvent(KIO__SkipDialog* self, intptr_t slot);
void KIO__SkipDialog_QBaseWheelEvent(KIO__SkipDialog* self, QWheelEvent* event);
void KIO__SkipDialog_KeyReleaseEvent(KIO__SkipDialog* self, QKeyEvent* event);
void KIO__SkipDialog_OnKeyReleaseEvent(KIO__SkipDialog* self, intptr_t slot);
void KIO__SkipDialog_QBaseKeyReleaseEvent(KIO__SkipDialog* self, QKeyEvent* event);
void KIO__SkipDialog_FocusInEvent(KIO__SkipDialog* self, QFocusEvent* event);
void KIO__SkipDialog_OnFocusInEvent(KIO__SkipDialog* self, intptr_t slot);
void KIO__SkipDialog_QBaseFocusInEvent(KIO__SkipDialog* self, QFocusEvent* event);
void KIO__SkipDialog_FocusOutEvent(KIO__SkipDialog* self, QFocusEvent* event);
void KIO__SkipDialog_OnFocusOutEvent(KIO__SkipDialog* self, intptr_t slot);
void KIO__SkipDialog_QBaseFocusOutEvent(KIO__SkipDialog* self, QFocusEvent* event);
void KIO__SkipDialog_EnterEvent(KIO__SkipDialog* self, QEnterEvent* event);
void KIO__SkipDialog_OnEnterEvent(KIO__SkipDialog* self, intptr_t slot);
void KIO__SkipDialog_QBaseEnterEvent(KIO__SkipDialog* self, QEnterEvent* event);
void KIO__SkipDialog_LeaveEvent(KIO__SkipDialog* self, QEvent* event);
void KIO__SkipDialog_OnLeaveEvent(KIO__SkipDialog* self, intptr_t slot);
void KIO__SkipDialog_QBaseLeaveEvent(KIO__SkipDialog* self, QEvent* event);
void KIO__SkipDialog_PaintEvent(KIO__SkipDialog* self, QPaintEvent* event);
void KIO__SkipDialog_OnPaintEvent(KIO__SkipDialog* self, intptr_t slot);
void KIO__SkipDialog_QBasePaintEvent(KIO__SkipDialog* self, QPaintEvent* event);
void KIO__SkipDialog_MoveEvent(KIO__SkipDialog* self, QMoveEvent* event);
void KIO__SkipDialog_OnMoveEvent(KIO__SkipDialog* self, intptr_t slot);
void KIO__SkipDialog_QBaseMoveEvent(KIO__SkipDialog* self, QMoveEvent* event);
void KIO__SkipDialog_TabletEvent(KIO__SkipDialog* self, QTabletEvent* event);
void KIO__SkipDialog_OnTabletEvent(KIO__SkipDialog* self, intptr_t slot);
void KIO__SkipDialog_QBaseTabletEvent(KIO__SkipDialog* self, QTabletEvent* event);
void KIO__SkipDialog_ActionEvent(KIO__SkipDialog* self, QActionEvent* event);
void KIO__SkipDialog_OnActionEvent(KIO__SkipDialog* self, intptr_t slot);
void KIO__SkipDialog_QBaseActionEvent(KIO__SkipDialog* self, QActionEvent* event);
void KIO__SkipDialog_DragEnterEvent(KIO__SkipDialog* self, QDragEnterEvent* event);
void KIO__SkipDialog_OnDragEnterEvent(KIO__SkipDialog* self, intptr_t slot);
void KIO__SkipDialog_QBaseDragEnterEvent(KIO__SkipDialog* self, QDragEnterEvent* event);
void KIO__SkipDialog_DragMoveEvent(KIO__SkipDialog* self, QDragMoveEvent* event);
void KIO__SkipDialog_OnDragMoveEvent(KIO__SkipDialog* self, intptr_t slot);
void KIO__SkipDialog_QBaseDragMoveEvent(KIO__SkipDialog* self, QDragMoveEvent* event);
void KIO__SkipDialog_DragLeaveEvent(KIO__SkipDialog* self, QDragLeaveEvent* event);
void KIO__SkipDialog_OnDragLeaveEvent(KIO__SkipDialog* self, intptr_t slot);
void KIO__SkipDialog_QBaseDragLeaveEvent(KIO__SkipDialog* self, QDragLeaveEvent* event);
void KIO__SkipDialog_DropEvent(KIO__SkipDialog* self, QDropEvent* event);
void KIO__SkipDialog_OnDropEvent(KIO__SkipDialog* self, intptr_t slot);
void KIO__SkipDialog_QBaseDropEvent(KIO__SkipDialog* self, QDropEvent* event);
void KIO__SkipDialog_HideEvent(KIO__SkipDialog* self, QHideEvent* event);
void KIO__SkipDialog_OnHideEvent(KIO__SkipDialog* self, intptr_t slot);
void KIO__SkipDialog_QBaseHideEvent(KIO__SkipDialog* self, QHideEvent* event);
bool KIO__SkipDialog_NativeEvent(KIO__SkipDialog* self, const libqt_string eventType, void* message, intptr_t* result);
void KIO__SkipDialog_OnNativeEvent(KIO__SkipDialog* self, intptr_t slot);
bool KIO__SkipDialog_QBaseNativeEvent(KIO__SkipDialog* self, const libqt_string eventType, void* message, intptr_t* result);
void KIO__SkipDialog_ChangeEvent(KIO__SkipDialog* self, QEvent* param1);
void KIO__SkipDialog_OnChangeEvent(KIO__SkipDialog* self, intptr_t slot);
void KIO__SkipDialog_QBaseChangeEvent(KIO__SkipDialog* self, QEvent* param1);
int KIO__SkipDialog_Metric(const KIO__SkipDialog* self, int param1);
void KIO__SkipDialog_OnMetric(const KIO__SkipDialog* self, intptr_t slot);
int KIO__SkipDialog_QBaseMetric(const KIO__SkipDialog* self, int param1);
void KIO__SkipDialog_InitPainter(const KIO__SkipDialog* self, QPainter* painter);
void KIO__SkipDialog_OnInitPainter(const KIO__SkipDialog* self, intptr_t slot);
void KIO__SkipDialog_QBaseInitPainter(const KIO__SkipDialog* self, QPainter* painter);
QPaintDevice* KIO__SkipDialog_Redirected(const KIO__SkipDialog* self, QPoint* offset);
void KIO__SkipDialog_OnRedirected(const KIO__SkipDialog* self, intptr_t slot);
QPaintDevice* KIO__SkipDialog_QBaseRedirected(const KIO__SkipDialog* self, QPoint* offset);
QPainter* KIO__SkipDialog_SharedPainter(const KIO__SkipDialog* self);
void KIO__SkipDialog_OnSharedPainter(const KIO__SkipDialog* self, intptr_t slot);
QPainter* KIO__SkipDialog_QBaseSharedPainter(const KIO__SkipDialog* self);
void KIO__SkipDialog_InputMethodEvent(KIO__SkipDialog* self, QInputMethodEvent* param1);
void KIO__SkipDialog_OnInputMethodEvent(KIO__SkipDialog* self, intptr_t slot);
void KIO__SkipDialog_QBaseInputMethodEvent(KIO__SkipDialog* self, QInputMethodEvent* param1);
QVariant* KIO__SkipDialog_InputMethodQuery(const KIO__SkipDialog* self, int param1);
void KIO__SkipDialog_OnInputMethodQuery(const KIO__SkipDialog* self, intptr_t slot);
QVariant* KIO__SkipDialog_QBaseInputMethodQuery(const KIO__SkipDialog* self, int param1);
bool KIO__SkipDialog_FocusNextPrevChild(KIO__SkipDialog* self, bool next);
void KIO__SkipDialog_OnFocusNextPrevChild(KIO__SkipDialog* self, intptr_t slot);
bool KIO__SkipDialog_QBaseFocusNextPrevChild(KIO__SkipDialog* self, bool next);
void KIO__SkipDialog_TimerEvent(KIO__SkipDialog* self, QTimerEvent* event);
void KIO__SkipDialog_OnTimerEvent(KIO__SkipDialog* self, intptr_t slot);
void KIO__SkipDialog_QBaseTimerEvent(KIO__SkipDialog* self, QTimerEvent* event);
void KIO__SkipDialog_ChildEvent(KIO__SkipDialog* self, QChildEvent* event);
void KIO__SkipDialog_OnChildEvent(KIO__SkipDialog* self, intptr_t slot);
void KIO__SkipDialog_QBaseChildEvent(KIO__SkipDialog* self, QChildEvent* event);
void KIO__SkipDialog_CustomEvent(KIO__SkipDialog* self, QEvent* event);
void KIO__SkipDialog_OnCustomEvent(KIO__SkipDialog* self, intptr_t slot);
void KIO__SkipDialog_QBaseCustomEvent(KIO__SkipDialog* self, QEvent* event);
void KIO__SkipDialog_ConnectNotify(KIO__SkipDialog* self, const QMetaMethod* signal);
void KIO__SkipDialog_OnConnectNotify(KIO__SkipDialog* self, intptr_t slot);
void KIO__SkipDialog_QBaseConnectNotify(KIO__SkipDialog* self, const QMetaMethod* signal);
void KIO__SkipDialog_DisconnectNotify(KIO__SkipDialog* self, const QMetaMethod* signal);
void KIO__SkipDialog_OnDisconnectNotify(KIO__SkipDialog* self, intptr_t slot);
void KIO__SkipDialog_QBaseDisconnectNotify(KIO__SkipDialog* self, const QMetaMethod* signal);
void KIO__SkipDialog_AdjustPosition(KIO__SkipDialog* self, QWidget* param1);
void KIO__SkipDialog_OnAdjustPosition(KIO__SkipDialog* self, intptr_t slot);
void KIO__SkipDialog_QBaseAdjustPosition(KIO__SkipDialog* self, QWidget* param1);
void KIO__SkipDialog_UpdateMicroFocus(KIO__SkipDialog* self);
void KIO__SkipDialog_OnUpdateMicroFocus(KIO__SkipDialog* self, intptr_t slot);
void KIO__SkipDialog_QBaseUpdateMicroFocus(KIO__SkipDialog* self);
void KIO__SkipDialog_Create(KIO__SkipDialog* self);
void KIO__SkipDialog_OnCreate(KIO__SkipDialog* self, intptr_t slot);
void KIO__SkipDialog_QBaseCreate(KIO__SkipDialog* self);
void KIO__SkipDialog_Destroy(KIO__SkipDialog* self);
void KIO__SkipDialog_OnDestroy(KIO__SkipDialog* self, intptr_t slot);
void KIO__SkipDialog_QBaseDestroy(KIO__SkipDialog* self);
bool KIO__SkipDialog_FocusNextChild(KIO__SkipDialog* self);
void KIO__SkipDialog_OnFocusNextChild(KIO__SkipDialog* self, intptr_t slot);
bool KIO__SkipDialog_QBaseFocusNextChild(KIO__SkipDialog* self);
bool KIO__SkipDialog_FocusPreviousChild(KIO__SkipDialog* self);
void KIO__SkipDialog_OnFocusPreviousChild(KIO__SkipDialog* self, intptr_t slot);
bool KIO__SkipDialog_QBaseFocusPreviousChild(KIO__SkipDialog* self);
QObject* KIO__SkipDialog_Sender(const KIO__SkipDialog* self);
void KIO__SkipDialog_OnSender(const KIO__SkipDialog* self, intptr_t slot);
QObject* KIO__SkipDialog_QBaseSender(const KIO__SkipDialog* self);
int KIO__SkipDialog_SenderSignalIndex(const KIO__SkipDialog* self);
void KIO__SkipDialog_OnSenderSignalIndex(const KIO__SkipDialog* self, intptr_t slot);
int KIO__SkipDialog_QBaseSenderSignalIndex(const KIO__SkipDialog* self);
int KIO__SkipDialog_Receivers(const KIO__SkipDialog* self, const char* signal);
void KIO__SkipDialog_OnReceivers(const KIO__SkipDialog* self, intptr_t slot);
int KIO__SkipDialog_QBaseReceivers(const KIO__SkipDialog* self, const char* signal);
bool KIO__SkipDialog_IsSignalConnected(const KIO__SkipDialog* self, const QMetaMethod* signal);
void KIO__SkipDialog_OnIsSignalConnected(const KIO__SkipDialog* self, intptr_t slot);
bool KIO__SkipDialog_QBaseIsSignalConnected(const KIO__SkipDialog* self, const QMetaMethod* signal);
double KIO__SkipDialog_GetDecodedMetricF(const KIO__SkipDialog* self, int metricA, int metricB);
void KIO__SkipDialog_OnGetDecodedMetricF(const KIO__SkipDialog* self, intptr_t slot);
double KIO__SkipDialog_QBaseGetDecodedMetricF(const KIO__SkipDialog* self, int metricA, int metricB);
void KIO__SkipDialog_Delete(KIO__SkipDialog* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
