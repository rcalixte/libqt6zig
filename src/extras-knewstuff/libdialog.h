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
libqt_string KNSWidgets__Dialog_Tr(const char* s);
KNSCore__EngineBase* KNSWidgets__Dialog_Engine(KNSWidgets__Dialog* self);
libqt_list /* of KNSCore__Entry* */ KNSWidgets__Dialog_ChangedEntries(const KNSWidgets__Dialog* self);
void KNSWidgets__Dialog_Open(KNSWidgets__Dialog* self);
libqt_string KNSWidgets__Dialog_Tr2(const char* s, const char* c);
libqt_string KNSWidgets__Dialog_Tr3(const char* s, const char* c, int n);
void KNSWidgets__Dialog_OnMetacall(KNSWidgets__Dialog* self, intptr_t slot);
int KNSWidgets__Dialog_QBaseMetacall(KNSWidgets__Dialog* self, int param1, int param2, void** param3);
void KNSWidgets__Dialog_OnOpen(KNSWidgets__Dialog* self, intptr_t slot);
void KNSWidgets__Dialog_QBaseOpen(KNSWidgets__Dialog* self);
void KNSWidgets__Dialog_SetVisible(KNSWidgets__Dialog* self, bool visible);
void KNSWidgets__Dialog_OnSetVisible(KNSWidgets__Dialog* self, intptr_t slot);
void KNSWidgets__Dialog_QBaseSetVisible(KNSWidgets__Dialog* self, bool visible);
QSize* KNSWidgets__Dialog_SizeHint(const KNSWidgets__Dialog* self);
void KNSWidgets__Dialog_OnSizeHint(const KNSWidgets__Dialog* self, intptr_t slot);
QSize* KNSWidgets__Dialog_QBaseSizeHint(const KNSWidgets__Dialog* self);
QSize* KNSWidgets__Dialog_MinimumSizeHint(const KNSWidgets__Dialog* self);
void KNSWidgets__Dialog_OnMinimumSizeHint(const KNSWidgets__Dialog* self, intptr_t slot);
QSize* KNSWidgets__Dialog_QBaseMinimumSizeHint(const KNSWidgets__Dialog* self);
int KNSWidgets__Dialog_Exec(KNSWidgets__Dialog* self);
void KNSWidgets__Dialog_OnExec(KNSWidgets__Dialog* self, intptr_t slot);
int KNSWidgets__Dialog_QBaseExec(KNSWidgets__Dialog* self);
void KNSWidgets__Dialog_Done(KNSWidgets__Dialog* self, int param1);
void KNSWidgets__Dialog_OnDone(KNSWidgets__Dialog* self, intptr_t slot);
void KNSWidgets__Dialog_QBaseDone(KNSWidgets__Dialog* self, int param1);
void KNSWidgets__Dialog_Accept(KNSWidgets__Dialog* self);
void KNSWidgets__Dialog_OnAccept(KNSWidgets__Dialog* self, intptr_t slot);
void KNSWidgets__Dialog_QBaseAccept(KNSWidgets__Dialog* self);
void KNSWidgets__Dialog_Reject(KNSWidgets__Dialog* self);
void KNSWidgets__Dialog_OnReject(KNSWidgets__Dialog* self, intptr_t slot);
void KNSWidgets__Dialog_QBaseReject(KNSWidgets__Dialog* self);
void KNSWidgets__Dialog_KeyPressEvent(KNSWidgets__Dialog* self, QKeyEvent* param1);
void KNSWidgets__Dialog_OnKeyPressEvent(KNSWidgets__Dialog* self, intptr_t slot);
void KNSWidgets__Dialog_QBaseKeyPressEvent(KNSWidgets__Dialog* self, QKeyEvent* param1);
void KNSWidgets__Dialog_CloseEvent(KNSWidgets__Dialog* self, QCloseEvent* param1);
void KNSWidgets__Dialog_OnCloseEvent(KNSWidgets__Dialog* self, intptr_t slot);
void KNSWidgets__Dialog_QBaseCloseEvent(KNSWidgets__Dialog* self, QCloseEvent* param1);
void KNSWidgets__Dialog_ShowEvent(KNSWidgets__Dialog* self, QShowEvent* param1);
void KNSWidgets__Dialog_OnShowEvent(KNSWidgets__Dialog* self, intptr_t slot);
void KNSWidgets__Dialog_QBaseShowEvent(KNSWidgets__Dialog* self, QShowEvent* param1);
void KNSWidgets__Dialog_ResizeEvent(KNSWidgets__Dialog* self, QResizeEvent* param1);
void KNSWidgets__Dialog_OnResizeEvent(KNSWidgets__Dialog* self, intptr_t slot);
void KNSWidgets__Dialog_QBaseResizeEvent(KNSWidgets__Dialog* self, QResizeEvent* param1);
void KNSWidgets__Dialog_ContextMenuEvent(KNSWidgets__Dialog* self, QContextMenuEvent* param1);
void KNSWidgets__Dialog_OnContextMenuEvent(KNSWidgets__Dialog* self, intptr_t slot);
void KNSWidgets__Dialog_QBaseContextMenuEvent(KNSWidgets__Dialog* self, QContextMenuEvent* param1);
bool KNSWidgets__Dialog_EventFilter(KNSWidgets__Dialog* self, QObject* param1, QEvent* param2);
void KNSWidgets__Dialog_OnEventFilter(KNSWidgets__Dialog* self, intptr_t slot);
bool KNSWidgets__Dialog_QBaseEventFilter(KNSWidgets__Dialog* self, QObject* param1, QEvent* param2);
int KNSWidgets__Dialog_DevType(const KNSWidgets__Dialog* self);
void KNSWidgets__Dialog_OnDevType(const KNSWidgets__Dialog* self, intptr_t slot);
int KNSWidgets__Dialog_QBaseDevType(const KNSWidgets__Dialog* self);
int KNSWidgets__Dialog_HeightForWidth(const KNSWidgets__Dialog* self, int param1);
void KNSWidgets__Dialog_OnHeightForWidth(const KNSWidgets__Dialog* self, intptr_t slot);
int KNSWidgets__Dialog_QBaseHeightForWidth(const KNSWidgets__Dialog* self, int param1);
bool KNSWidgets__Dialog_HasHeightForWidth(const KNSWidgets__Dialog* self);
void KNSWidgets__Dialog_OnHasHeightForWidth(const KNSWidgets__Dialog* self, intptr_t slot);
bool KNSWidgets__Dialog_QBaseHasHeightForWidth(const KNSWidgets__Dialog* self);
QPaintEngine* KNSWidgets__Dialog_PaintEngine(const KNSWidgets__Dialog* self);
void KNSWidgets__Dialog_OnPaintEngine(const KNSWidgets__Dialog* self, intptr_t slot);
QPaintEngine* KNSWidgets__Dialog_QBasePaintEngine(const KNSWidgets__Dialog* self);
bool KNSWidgets__Dialog_Event(KNSWidgets__Dialog* self, QEvent* event);
void KNSWidgets__Dialog_OnEvent(KNSWidgets__Dialog* self, intptr_t slot);
bool KNSWidgets__Dialog_QBaseEvent(KNSWidgets__Dialog* self, QEvent* event);
void KNSWidgets__Dialog_MousePressEvent(KNSWidgets__Dialog* self, QMouseEvent* event);
void KNSWidgets__Dialog_OnMousePressEvent(KNSWidgets__Dialog* self, intptr_t slot);
void KNSWidgets__Dialog_QBaseMousePressEvent(KNSWidgets__Dialog* self, QMouseEvent* event);
void KNSWidgets__Dialog_MouseReleaseEvent(KNSWidgets__Dialog* self, QMouseEvent* event);
void KNSWidgets__Dialog_OnMouseReleaseEvent(KNSWidgets__Dialog* self, intptr_t slot);
void KNSWidgets__Dialog_QBaseMouseReleaseEvent(KNSWidgets__Dialog* self, QMouseEvent* event);
void KNSWidgets__Dialog_MouseDoubleClickEvent(KNSWidgets__Dialog* self, QMouseEvent* event);
void KNSWidgets__Dialog_OnMouseDoubleClickEvent(KNSWidgets__Dialog* self, intptr_t slot);
void KNSWidgets__Dialog_QBaseMouseDoubleClickEvent(KNSWidgets__Dialog* self, QMouseEvent* event);
void KNSWidgets__Dialog_MouseMoveEvent(KNSWidgets__Dialog* self, QMouseEvent* event);
void KNSWidgets__Dialog_OnMouseMoveEvent(KNSWidgets__Dialog* self, intptr_t slot);
void KNSWidgets__Dialog_QBaseMouseMoveEvent(KNSWidgets__Dialog* self, QMouseEvent* event);
void KNSWidgets__Dialog_WheelEvent(KNSWidgets__Dialog* self, QWheelEvent* event);
void KNSWidgets__Dialog_OnWheelEvent(KNSWidgets__Dialog* self, intptr_t slot);
void KNSWidgets__Dialog_QBaseWheelEvent(KNSWidgets__Dialog* self, QWheelEvent* event);
void KNSWidgets__Dialog_KeyReleaseEvent(KNSWidgets__Dialog* self, QKeyEvent* event);
void KNSWidgets__Dialog_OnKeyReleaseEvent(KNSWidgets__Dialog* self, intptr_t slot);
void KNSWidgets__Dialog_QBaseKeyReleaseEvent(KNSWidgets__Dialog* self, QKeyEvent* event);
void KNSWidgets__Dialog_FocusInEvent(KNSWidgets__Dialog* self, QFocusEvent* event);
void KNSWidgets__Dialog_OnFocusInEvent(KNSWidgets__Dialog* self, intptr_t slot);
void KNSWidgets__Dialog_QBaseFocusInEvent(KNSWidgets__Dialog* self, QFocusEvent* event);
void KNSWidgets__Dialog_FocusOutEvent(KNSWidgets__Dialog* self, QFocusEvent* event);
void KNSWidgets__Dialog_OnFocusOutEvent(KNSWidgets__Dialog* self, intptr_t slot);
void KNSWidgets__Dialog_QBaseFocusOutEvent(KNSWidgets__Dialog* self, QFocusEvent* event);
void KNSWidgets__Dialog_EnterEvent(KNSWidgets__Dialog* self, QEnterEvent* event);
void KNSWidgets__Dialog_OnEnterEvent(KNSWidgets__Dialog* self, intptr_t slot);
void KNSWidgets__Dialog_QBaseEnterEvent(KNSWidgets__Dialog* self, QEnterEvent* event);
void KNSWidgets__Dialog_LeaveEvent(KNSWidgets__Dialog* self, QEvent* event);
void KNSWidgets__Dialog_OnLeaveEvent(KNSWidgets__Dialog* self, intptr_t slot);
void KNSWidgets__Dialog_QBaseLeaveEvent(KNSWidgets__Dialog* self, QEvent* event);
void KNSWidgets__Dialog_PaintEvent(KNSWidgets__Dialog* self, QPaintEvent* event);
void KNSWidgets__Dialog_OnPaintEvent(KNSWidgets__Dialog* self, intptr_t slot);
void KNSWidgets__Dialog_QBasePaintEvent(KNSWidgets__Dialog* self, QPaintEvent* event);
void KNSWidgets__Dialog_MoveEvent(KNSWidgets__Dialog* self, QMoveEvent* event);
void KNSWidgets__Dialog_OnMoveEvent(KNSWidgets__Dialog* self, intptr_t slot);
void KNSWidgets__Dialog_QBaseMoveEvent(KNSWidgets__Dialog* self, QMoveEvent* event);
void KNSWidgets__Dialog_TabletEvent(KNSWidgets__Dialog* self, QTabletEvent* event);
void KNSWidgets__Dialog_OnTabletEvent(KNSWidgets__Dialog* self, intptr_t slot);
void KNSWidgets__Dialog_QBaseTabletEvent(KNSWidgets__Dialog* self, QTabletEvent* event);
void KNSWidgets__Dialog_ActionEvent(KNSWidgets__Dialog* self, QActionEvent* event);
void KNSWidgets__Dialog_OnActionEvent(KNSWidgets__Dialog* self, intptr_t slot);
void KNSWidgets__Dialog_QBaseActionEvent(KNSWidgets__Dialog* self, QActionEvent* event);
void KNSWidgets__Dialog_DragEnterEvent(KNSWidgets__Dialog* self, QDragEnterEvent* event);
void KNSWidgets__Dialog_OnDragEnterEvent(KNSWidgets__Dialog* self, intptr_t slot);
void KNSWidgets__Dialog_QBaseDragEnterEvent(KNSWidgets__Dialog* self, QDragEnterEvent* event);
void KNSWidgets__Dialog_DragMoveEvent(KNSWidgets__Dialog* self, QDragMoveEvent* event);
void KNSWidgets__Dialog_OnDragMoveEvent(KNSWidgets__Dialog* self, intptr_t slot);
void KNSWidgets__Dialog_QBaseDragMoveEvent(KNSWidgets__Dialog* self, QDragMoveEvent* event);
void KNSWidgets__Dialog_DragLeaveEvent(KNSWidgets__Dialog* self, QDragLeaveEvent* event);
void KNSWidgets__Dialog_OnDragLeaveEvent(KNSWidgets__Dialog* self, intptr_t slot);
void KNSWidgets__Dialog_QBaseDragLeaveEvent(KNSWidgets__Dialog* self, QDragLeaveEvent* event);
void KNSWidgets__Dialog_DropEvent(KNSWidgets__Dialog* self, QDropEvent* event);
void KNSWidgets__Dialog_OnDropEvent(KNSWidgets__Dialog* self, intptr_t slot);
void KNSWidgets__Dialog_QBaseDropEvent(KNSWidgets__Dialog* self, QDropEvent* event);
void KNSWidgets__Dialog_HideEvent(KNSWidgets__Dialog* self, QHideEvent* event);
void KNSWidgets__Dialog_OnHideEvent(KNSWidgets__Dialog* self, intptr_t slot);
void KNSWidgets__Dialog_QBaseHideEvent(KNSWidgets__Dialog* self, QHideEvent* event);
bool KNSWidgets__Dialog_NativeEvent(KNSWidgets__Dialog* self, const libqt_string eventType, void* message, intptr_t* result);
void KNSWidgets__Dialog_OnNativeEvent(KNSWidgets__Dialog* self, intptr_t slot);
bool KNSWidgets__Dialog_QBaseNativeEvent(KNSWidgets__Dialog* self, const libqt_string eventType, void* message, intptr_t* result);
void KNSWidgets__Dialog_ChangeEvent(KNSWidgets__Dialog* self, QEvent* param1);
void KNSWidgets__Dialog_OnChangeEvent(KNSWidgets__Dialog* self, intptr_t slot);
void KNSWidgets__Dialog_QBaseChangeEvent(KNSWidgets__Dialog* self, QEvent* param1);
int KNSWidgets__Dialog_Metric(const KNSWidgets__Dialog* self, int param1);
void KNSWidgets__Dialog_OnMetric(const KNSWidgets__Dialog* self, intptr_t slot);
int KNSWidgets__Dialog_QBaseMetric(const KNSWidgets__Dialog* self, int param1);
void KNSWidgets__Dialog_InitPainter(const KNSWidgets__Dialog* self, QPainter* painter);
void KNSWidgets__Dialog_OnInitPainter(const KNSWidgets__Dialog* self, intptr_t slot);
void KNSWidgets__Dialog_QBaseInitPainter(const KNSWidgets__Dialog* self, QPainter* painter);
QPaintDevice* KNSWidgets__Dialog_Redirected(const KNSWidgets__Dialog* self, QPoint* offset);
void KNSWidgets__Dialog_OnRedirected(const KNSWidgets__Dialog* self, intptr_t slot);
QPaintDevice* KNSWidgets__Dialog_QBaseRedirected(const KNSWidgets__Dialog* self, QPoint* offset);
QPainter* KNSWidgets__Dialog_SharedPainter(const KNSWidgets__Dialog* self);
void KNSWidgets__Dialog_OnSharedPainter(const KNSWidgets__Dialog* self, intptr_t slot);
QPainter* KNSWidgets__Dialog_QBaseSharedPainter(const KNSWidgets__Dialog* self);
void KNSWidgets__Dialog_InputMethodEvent(KNSWidgets__Dialog* self, QInputMethodEvent* param1);
void KNSWidgets__Dialog_OnInputMethodEvent(KNSWidgets__Dialog* self, intptr_t slot);
void KNSWidgets__Dialog_QBaseInputMethodEvent(KNSWidgets__Dialog* self, QInputMethodEvent* param1);
QVariant* KNSWidgets__Dialog_InputMethodQuery(const KNSWidgets__Dialog* self, int param1);
void KNSWidgets__Dialog_OnInputMethodQuery(const KNSWidgets__Dialog* self, intptr_t slot);
QVariant* KNSWidgets__Dialog_QBaseInputMethodQuery(const KNSWidgets__Dialog* self, int param1);
bool KNSWidgets__Dialog_FocusNextPrevChild(KNSWidgets__Dialog* self, bool next);
void KNSWidgets__Dialog_OnFocusNextPrevChild(KNSWidgets__Dialog* self, intptr_t slot);
bool KNSWidgets__Dialog_QBaseFocusNextPrevChild(KNSWidgets__Dialog* self, bool next);
void KNSWidgets__Dialog_TimerEvent(KNSWidgets__Dialog* self, QTimerEvent* event);
void KNSWidgets__Dialog_OnTimerEvent(KNSWidgets__Dialog* self, intptr_t slot);
void KNSWidgets__Dialog_QBaseTimerEvent(KNSWidgets__Dialog* self, QTimerEvent* event);
void KNSWidgets__Dialog_ChildEvent(KNSWidgets__Dialog* self, QChildEvent* event);
void KNSWidgets__Dialog_OnChildEvent(KNSWidgets__Dialog* self, intptr_t slot);
void KNSWidgets__Dialog_QBaseChildEvent(KNSWidgets__Dialog* self, QChildEvent* event);
void KNSWidgets__Dialog_CustomEvent(KNSWidgets__Dialog* self, QEvent* event);
void KNSWidgets__Dialog_OnCustomEvent(KNSWidgets__Dialog* self, intptr_t slot);
void KNSWidgets__Dialog_QBaseCustomEvent(KNSWidgets__Dialog* self, QEvent* event);
void KNSWidgets__Dialog_ConnectNotify(KNSWidgets__Dialog* self, const QMetaMethod* signal);
void KNSWidgets__Dialog_OnConnectNotify(KNSWidgets__Dialog* self, intptr_t slot);
void KNSWidgets__Dialog_QBaseConnectNotify(KNSWidgets__Dialog* self, const QMetaMethod* signal);
void KNSWidgets__Dialog_DisconnectNotify(KNSWidgets__Dialog* self, const QMetaMethod* signal);
void KNSWidgets__Dialog_OnDisconnectNotify(KNSWidgets__Dialog* self, intptr_t slot);
void KNSWidgets__Dialog_QBaseDisconnectNotify(KNSWidgets__Dialog* self, const QMetaMethod* signal);
void KNSWidgets__Dialog_AdjustPosition(KNSWidgets__Dialog* self, QWidget* param1);
void KNSWidgets__Dialog_OnAdjustPosition(KNSWidgets__Dialog* self, intptr_t slot);
void KNSWidgets__Dialog_QBaseAdjustPosition(KNSWidgets__Dialog* self, QWidget* param1);
void KNSWidgets__Dialog_UpdateMicroFocus(KNSWidgets__Dialog* self);
void KNSWidgets__Dialog_OnUpdateMicroFocus(KNSWidgets__Dialog* self, intptr_t slot);
void KNSWidgets__Dialog_QBaseUpdateMicroFocus(KNSWidgets__Dialog* self);
void KNSWidgets__Dialog_Create(KNSWidgets__Dialog* self);
void KNSWidgets__Dialog_OnCreate(KNSWidgets__Dialog* self, intptr_t slot);
void KNSWidgets__Dialog_QBaseCreate(KNSWidgets__Dialog* self);
void KNSWidgets__Dialog_Destroy(KNSWidgets__Dialog* self);
void KNSWidgets__Dialog_OnDestroy(KNSWidgets__Dialog* self, intptr_t slot);
void KNSWidgets__Dialog_QBaseDestroy(KNSWidgets__Dialog* self);
bool KNSWidgets__Dialog_FocusNextChild(KNSWidgets__Dialog* self);
void KNSWidgets__Dialog_OnFocusNextChild(KNSWidgets__Dialog* self, intptr_t slot);
bool KNSWidgets__Dialog_QBaseFocusNextChild(KNSWidgets__Dialog* self);
bool KNSWidgets__Dialog_FocusPreviousChild(KNSWidgets__Dialog* self);
void KNSWidgets__Dialog_OnFocusPreviousChild(KNSWidgets__Dialog* self, intptr_t slot);
bool KNSWidgets__Dialog_QBaseFocusPreviousChild(KNSWidgets__Dialog* self);
QObject* KNSWidgets__Dialog_Sender(const KNSWidgets__Dialog* self);
void KNSWidgets__Dialog_OnSender(const KNSWidgets__Dialog* self, intptr_t slot);
QObject* KNSWidgets__Dialog_QBaseSender(const KNSWidgets__Dialog* self);
int KNSWidgets__Dialog_SenderSignalIndex(const KNSWidgets__Dialog* self);
void KNSWidgets__Dialog_OnSenderSignalIndex(const KNSWidgets__Dialog* self, intptr_t slot);
int KNSWidgets__Dialog_QBaseSenderSignalIndex(const KNSWidgets__Dialog* self);
int KNSWidgets__Dialog_Receivers(const KNSWidgets__Dialog* self, const char* signal);
void KNSWidgets__Dialog_OnReceivers(const KNSWidgets__Dialog* self, intptr_t slot);
int KNSWidgets__Dialog_QBaseReceivers(const KNSWidgets__Dialog* self, const char* signal);
bool KNSWidgets__Dialog_IsSignalConnected(const KNSWidgets__Dialog* self, const QMetaMethod* signal);
void KNSWidgets__Dialog_OnIsSignalConnected(const KNSWidgets__Dialog* self, intptr_t slot);
bool KNSWidgets__Dialog_QBaseIsSignalConnected(const KNSWidgets__Dialog* self, const QMetaMethod* signal);
double KNSWidgets__Dialog_GetDecodedMetricF(const KNSWidgets__Dialog* self, int metricA, int metricB);
void KNSWidgets__Dialog_OnGetDecodedMetricF(const KNSWidgets__Dialog* self, intptr_t slot);
double KNSWidgets__Dialog_QBaseGetDecodedMetricF(const KNSWidgets__Dialog* self, int metricA, int metricB);
void KNSWidgets__Dialog_Delete(KNSWidgets__Dialog* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
