#pragma once
#ifndef SRC_EXTRAS_KTEXTEDITORC_LIBCONFIGPAGE_H
#define SRC_EXTRAS_KTEXTEDITORC_LIBCONFIGPAGE_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KTextEditor__ConfigPage)
typedef KTextEditor::ConfigPage KTextEditor__ConfigPage;
#endif
#else
typedef struct KTextEditor__ConfigPage KTextEditor__ConfigPage;
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
typedef struct QIcon QIcon;
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

KTextEditor__ConfigPage* KTextEditor__ConfigPage_new(QWidget* parent);
QMetaObject* KTextEditor__ConfigPage_MetaObject(const KTextEditor__ConfigPage* self);
void* KTextEditor__ConfigPage_Metacast(KTextEditor__ConfigPage* self, const char* param1);
int KTextEditor__ConfigPage_Metacall(KTextEditor__ConfigPage* self, int param1, int param2, void** param3);
libqt_string KTextEditor__ConfigPage_Tr(const char* s);
libqt_string KTextEditor__ConfigPage_Name(const KTextEditor__ConfigPage* self);
libqt_string KTextEditor__ConfigPage_FullName(const KTextEditor__ConfigPage* self);
QIcon* KTextEditor__ConfigPage_Icon(const KTextEditor__ConfigPage* self);
void KTextEditor__ConfigPage_Apply(KTextEditor__ConfigPage* self);
void KTextEditor__ConfigPage_Reset(KTextEditor__ConfigPage* self);
void KTextEditor__ConfigPage_Defaults(KTextEditor__ConfigPage* self);
void KTextEditor__ConfigPage_Changed(KTextEditor__ConfigPage* self);
void KTextEditor__ConfigPage_Connect_Changed(KTextEditor__ConfigPage* self, intptr_t slot);
libqt_string KTextEditor__ConfigPage_Tr2(const char* s, const char* c);
libqt_string KTextEditor__ConfigPage_Tr3(const char* s, const char* c, int n);
void KTextEditor__ConfigPage_OnMetacall(KTextEditor__ConfigPage* self, intptr_t slot);
int KTextEditor__ConfigPage_QBaseMetacall(KTextEditor__ConfigPage* self, int param1, int param2, void** param3);
void KTextEditor__ConfigPage_OnName(const KTextEditor__ConfigPage* self, intptr_t slot);
libqt_string KTextEditor__ConfigPage_QBaseName(const KTextEditor__ConfigPage* self);
void KTextEditor__ConfigPage_OnFullName(const KTextEditor__ConfigPage* self, intptr_t slot);
libqt_string KTextEditor__ConfigPage_QBaseFullName(const KTextEditor__ConfigPage* self);
void KTextEditor__ConfigPage_OnIcon(const KTextEditor__ConfigPage* self, intptr_t slot);
QIcon* KTextEditor__ConfigPage_QBaseIcon(const KTextEditor__ConfigPage* self);
void KTextEditor__ConfigPage_OnApply(KTextEditor__ConfigPage* self, intptr_t slot);
void KTextEditor__ConfigPage_QBaseApply(KTextEditor__ConfigPage* self);
void KTextEditor__ConfigPage_OnReset(KTextEditor__ConfigPage* self, intptr_t slot);
void KTextEditor__ConfigPage_QBaseReset(KTextEditor__ConfigPage* self);
void KTextEditor__ConfigPage_OnDefaults(KTextEditor__ConfigPage* self, intptr_t slot);
void KTextEditor__ConfigPage_QBaseDefaults(KTextEditor__ConfigPage* self);
int KTextEditor__ConfigPage_DevType(const KTextEditor__ConfigPage* self);
void KTextEditor__ConfigPage_OnDevType(const KTextEditor__ConfigPage* self, intptr_t slot);
int KTextEditor__ConfigPage_QBaseDevType(const KTextEditor__ConfigPage* self);
void KTextEditor__ConfigPage_SetVisible(KTextEditor__ConfigPage* self, bool visible);
void KTextEditor__ConfigPage_OnSetVisible(KTextEditor__ConfigPage* self, intptr_t slot);
void KTextEditor__ConfigPage_QBaseSetVisible(KTextEditor__ConfigPage* self, bool visible);
QSize* KTextEditor__ConfigPage_SizeHint(const KTextEditor__ConfigPage* self);
void KTextEditor__ConfigPage_OnSizeHint(const KTextEditor__ConfigPage* self, intptr_t slot);
QSize* KTextEditor__ConfigPage_QBaseSizeHint(const KTextEditor__ConfigPage* self);
QSize* KTextEditor__ConfigPage_MinimumSizeHint(const KTextEditor__ConfigPage* self);
void KTextEditor__ConfigPage_OnMinimumSizeHint(const KTextEditor__ConfigPage* self, intptr_t slot);
QSize* KTextEditor__ConfigPage_QBaseMinimumSizeHint(const KTextEditor__ConfigPage* self);
int KTextEditor__ConfigPage_HeightForWidth(const KTextEditor__ConfigPage* self, int param1);
void KTextEditor__ConfigPage_OnHeightForWidth(const KTextEditor__ConfigPage* self, intptr_t slot);
int KTextEditor__ConfigPage_QBaseHeightForWidth(const KTextEditor__ConfigPage* self, int param1);
bool KTextEditor__ConfigPage_HasHeightForWidth(const KTextEditor__ConfigPage* self);
void KTextEditor__ConfigPage_OnHasHeightForWidth(const KTextEditor__ConfigPage* self, intptr_t slot);
bool KTextEditor__ConfigPage_QBaseHasHeightForWidth(const KTextEditor__ConfigPage* self);
QPaintEngine* KTextEditor__ConfigPage_PaintEngine(const KTextEditor__ConfigPage* self);
void KTextEditor__ConfigPage_OnPaintEngine(const KTextEditor__ConfigPage* self, intptr_t slot);
QPaintEngine* KTextEditor__ConfigPage_QBasePaintEngine(const KTextEditor__ConfigPage* self);
bool KTextEditor__ConfigPage_Event(KTextEditor__ConfigPage* self, QEvent* event);
void KTextEditor__ConfigPage_OnEvent(KTextEditor__ConfigPage* self, intptr_t slot);
bool KTextEditor__ConfigPage_QBaseEvent(KTextEditor__ConfigPage* self, QEvent* event);
void KTextEditor__ConfigPage_MousePressEvent(KTextEditor__ConfigPage* self, QMouseEvent* event);
void KTextEditor__ConfigPage_OnMousePressEvent(KTextEditor__ConfigPage* self, intptr_t slot);
void KTextEditor__ConfigPage_QBaseMousePressEvent(KTextEditor__ConfigPage* self, QMouseEvent* event);
void KTextEditor__ConfigPage_MouseReleaseEvent(KTextEditor__ConfigPage* self, QMouseEvent* event);
void KTextEditor__ConfigPage_OnMouseReleaseEvent(KTextEditor__ConfigPage* self, intptr_t slot);
void KTextEditor__ConfigPage_QBaseMouseReleaseEvent(KTextEditor__ConfigPage* self, QMouseEvent* event);
void KTextEditor__ConfigPage_MouseDoubleClickEvent(KTextEditor__ConfigPage* self, QMouseEvent* event);
void KTextEditor__ConfigPage_OnMouseDoubleClickEvent(KTextEditor__ConfigPage* self, intptr_t slot);
void KTextEditor__ConfigPage_QBaseMouseDoubleClickEvent(KTextEditor__ConfigPage* self, QMouseEvent* event);
void KTextEditor__ConfigPage_MouseMoveEvent(KTextEditor__ConfigPage* self, QMouseEvent* event);
void KTextEditor__ConfigPage_OnMouseMoveEvent(KTextEditor__ConfigPage* self, intptr_t slot);
void KTextEditor__ConfigPage_QBaseMouseMoveEvent(KTextEditor__ConfigPage* self, QMouseEvent* event);
void KTextEditor__ConfigPage_WheelEvent(KTextEditor__ConfigPage* self, QWheelEvent* event);
void KTextEditor__ConfigPage_OnWheelEvent(KTextEditor__ConfigPage* self, intptr_t slot);
void KTextEditor__ConfigPage_QBaseWheelEvent(KTextEditor__ConfigPage* self, QWheelEvent* event);
void KTextEditor__ConfigPage_KeyPressEvent(KTextEditor__ConfigPage* self, QKeyEvent* event);
void KTextEditor__ConfigPage_OnKeyPressEvent(KTextEditor__ConfigPage* self, intptr_t slot);
void KTextEditor__ConfigPage_QBaseKeyPressEvent(KTextEditor__ConfigPage* self, QKeyEvent* event);
void KTextEditor__ConfigPage_KeyReleaseEvent(KTextEditor__ConfigPage* self, QKeyEvent* event);
void KTextEditor__ConfigPage_OnKeyReleaseEvent(KTextEditor__ConfigPage* self, intptr_t slot);
void KTextEditor__ConfigPage_QBaseKeyReleaseEvent(KTextEditor__ConfigPage* self, QKeyEvent* event);
void KTextEditor__ConfigPage_FocusInEvent(KTextEditor__ConfigPage* self, QFocusEvent* event);
void KTextEditor__ConfigPage_OnFocusInEvent(KTextEditor__ConfigPage* self, intptr_t slot);
void KTextEditor__ConfigPage_QBaseFocusInEvent(KTextEditor__ConfigPage* self, QFocusEvent* event);
void KTextEditor__ConfigPage_FocusOutEvent(KTextEditor__ConfigPage* self, QFocusEvent* event);
void KTextEditor__ConfigPage_OnFocusOutEvent(KTextEditor__ConfigPage* self, intptr_t slot);
void KTextEditor__ConfigPage_QBaseFocusOutEvent(KTextEditor__ConfigPage* self, QFocusEvent* event);
void KTextEditor__ConfigPage_EnterEvent(KTextEditor__ConfigPage* self, QEnterEvent* event);
void KTextEditor__ConfigPage_OnEnterEvent(KTextEditor__ConfigPage* self, intptr_t slot);
void KTextEditor__ConfigPage_QBaseEnterEvent(KTextEditor__ConfigPage* self, QEnterEvent* event);
void KTextEditor__ConfigPage_LeaveEvent(KTextEditor__ConfigPage* self, QEvent* event);
void KTextEditor__ConfigPage_OnLeaveEvent(KTextEditor__ConfigPage* self, intptr_t slot);
void KTextEditor__ConfigPage_QBaseLeaveEvent(KTextEditor__ConfigPage* self, QEvent* event);
void KTextEditor__ConfigPage_PaintEvent(KTextEditor__ConfigPage* self, QPaintEvent* event);
void KTextEditor__ConfigPage_OnPaintEvent(KTextEditor__ConfigPage* self, intptr_t slot);
void KTextEditor__ConfigPage_QBasePaintEvent(KTextEditor__ConfigPage* self, QPaintEvent* event);
void KTextEditor__ConfigPage_MoveEvent(KTextEditor__ConfigPage* self, QMoveEvent* event);
void KTextEditor__ConfigPage_OnMoveEvent(KTextEditor__ConfigPage* self, intptr_t slot);
void KTextEditor__ConfigPage_QBaseMoveEvent(KTextEditor__ConfigPage* self, QMoveEvent* event);
void KTextEditor__ConfigPage_ResizeEvent(KTextEditor__ConfigPage* self, QResizeEvent* event);
void KTextEditor__ConfigPage_OnResizeEvent(KTextEditor__ConfigPage* self, intptr_t slot);
void KTextEditor__ConfigPage_QBaseResizeEvent(KTextEditor__ConfigPage* self, QResizeEvent* event);
void KTextEditor__ConfigPage_CloseEvent(KTextEditor__ConfigPage* self, QCloseEvent* event);
void KTextEditor__ConfigPage_OnCloseEvent(KTextEditor__ConfigPage* self, intptr_t slot);
void KTextEditor__ConfigPage_QBaseCloseEvent(KTextEditor__ConfigPage* self, QCloseEvent* event);
void KTextEditor__ConfigPage_ContextMenuEvent(KTextEditor__ConfigPage* self, QContextMenuEvent* event);
void KTextEditor__ConfigPage_OnContextMenuEvent(KTextEditor__ConfigPage* self, intptr_t slot);
void KTextEditor__ConfigPage_QBaseContextMenuEvent(KTextEditor__ConfigPage* self, QContextMenuEvent* event);
void KTextEditor__ConfigPage_TabletEvent(KTextEditor__ConfigPage* self, QTabletEvent* event);
void KTextEditor__ConfigPage_OnTabletEvent(KTextEditor__ConfigPage* self, intptr_t slot);
void KTextEditor__ConfigPage_QBaseTabletEvent(KTextEditor__ConfigPage* self, QTabletEvent* event);
void KTextEditor__ConfigPage_ActionEvent(KTextEditor__ConfigPage* self, QActionEvent* event);
void KTextEditor__ConfigPage_OnActionEvent(KTextEditor__ConfigPage* self, intptr_t slot);
void KTextEditor__ConfigPage_QBaseActionEvent(KTextEditor__ConfigPage* self, QActionEvent* event);
void KTextEditor__ConfigPage_DragEnterEvent(KTextEditor__ConfigPage* self, QDragEnterEvent* event);
void KTextEditor__ConfigPage_OnDragEnterEvent(KTextEditor__ConfigPage* self, intptr_t slot);
void KTextEditor__ConfigPage_QBaseDragEnterEvent(KTextEditor__ConfigPage* self, QDragEnterEvent* event);
void KTextEditor__ConfigPage_DragMoveEvent(KTextEditor__ConfigPage* self, QDragMoveEvent* event);
void KTextEditor__ConfigPage_OnDragMoveEvent(KTextEditor__ConfigPage* self, intptr_t slot);
void KTextEditor__ConfigPage_QBaseDragMoveEvent(KTextEditor__ConfigPage* self, QDragMoveEvent* event);
void KTextEditor__ConfigPage_DragLeaveEvent(KTextEditor__ConfigPage* self, QDragLeaveEvent* event);
void KTextEditor__ConfigPage_OnDragLeaveEvent(KTextEditor__ConfigPage* self, intptr_t slot);
void KTextEditor__ConfigPage_QBaseDragLeaveEvent(KTextEditor__ConfigPage* self, QDragLeaveEvent* event);
void KTextEditor__ConfigPage_DropEvent(KTextEditor__ConfigPage* self, QDropEvent* event);
void KTextEditor__ConfigPage_OnDropEvent(KTextEditor__ConfigPage* self, intptr_t slot);
void KTextEditor__ConfigPage_QBaseDropEvent(KTextEditor__ConfigPage* self, QDropEvent* event);
void KTextEditor__ConfigPage_ShowEvent(KTextEditor__ConfigPage* self, QShowEvent* event);
void KTextEditor__ConfigPage_OnShowEvent(KTextEditor__ConfigPage* self, intptr_t slot);
void KTextEditor__ConfigPage_QBaseShowEvent(KTextEditor__ConfigPage* self, QShowEvent* event);
void KTextEditor__ConfigPage_HideEvent(KTextEditor__ConfigPage* self, QHideEvent* event);
void KTextEditor__ConfigPage_OnHideEvent(KTextEditor__ConfigPage* self, intptr_t slot);
void KTextEditor__ConfigPage_QBaseHideEvent(KTextEditor__ConfigPage* self, QHideEvent* event);
bool KTextEditor__ConfigPage_NativeEvent(KTextEditor__ConfigPage* self, const libqt_string eventType, void* message, intptr_t* result);
void KTextEditor__ConfigPage_OnNativeEvent(KTextEditor__ConfigPage* self, intptr_t slot);
bool KTextEditor__ConfigPage_QBaseNativeEvent(KTextEditor__ConfigPage* self, const libqt_string eventType, void* message, intptr_t* result);
void KTextEditor__ConfigPage_ChangeEvent(KTextEditor__ConfigPage* self, QEvent* param1);
void KTextEditor__ConfigPage_OnChangeEvent(KTextEditor__ConfigPage* self, intptr_t slot);
void KTextEditor__ConfigPage_QBaseChangeEvent(KTextEditor__ConfigPage* self, QEvent* param1);
int KTextEditor__ConfigPage_Metric(const KTextEditor__ConfigPage* self, int param1);
void KTextEditor__ConfigPage_OnMetric(const KTextEditor__ConfigPage* self, intptr_t slot);
int KTextEditor__ConfigPage_QBaseMetric(const KTextEditor__ConfigPage* self, int param1);
void KTextEditor__ConfigPage_InitPainter(const KTextEditor__ConfigPage* self, QPainter* painter);
void KTextEditor__ConfigPage_OnInitPainter(const KTextEditor__ConfigPage* self, intptr_t slot);
void KTextEditor__ConfigPage_QBaseInitPainter(const KTextEditor__ConfigPage* self, QPainter* painter);
QPaintDevice* KTextEditor__ConfigPage_Redirected(const KTextEditor__ConfigPage* self, QPoint* offset);
void KTextEditor__ConfigPage_OnRedirected(const KTextEditor__ConfigPage* self, intptr_t slot);
QPaintDevice* KTextEditor__ConfigPage_QBaseRedirected(const KTextEditor__ConfigPage* self, QPoint* offset);
QPainter* KTextEditor__ConfigPage_SharedPainter(const KTextEditor__ConfigPage* self);
void KTextEditor__ConfigPage_OnSharedPainter(const KTextEditor__ConfigPage* self, intptr_t slot);
QPainter* KTextEditor__ConfigPage_QBaseSharedPainter(const KTextEditor__ConfigPage* self);
void KTextEditor__ConfigPage_InputMethodEvent(KTextEditor__ConfigPage* self, QInputMethodEvent* param1);
void KTextEditor__ConfigPage_OnInputMethodEvent(KTextEditor__ConfigPage* self, intptr_t slot);
void KTextEditor__ConfigPage_QBaseInputMethodEvent(KTextEditor__ConfigPage* self, QInputMethodEvent* param1);
QVariant* KTextEditor__ConfigPage_InputMethodQuery(const KTextEditor__ConfigPage* self, int param1);
void KTextEditor__ConfigPage_OnInputMethodQuery(const KTextEditor__ConfigPage* self, intptr_t slot);
QVariant* KTextEditor__ConfigPage_QBaseInputMethodQuery(const KTextEditor__ConfigPage* self, int param1);
bool KTextEditor__ConfigPage_FocusNextPrevChild(KTextEditor__ConfigPage* self, bool next);
void KTextEditor__ConfigPage_OnFocusNextPrevChild(KTextEditor__ConfigPage* self, intptr_t slot);
bool KTextEditor__ConfigPage_QBaseFocusNextPrevChild(KTextEditor__ConfigPage* self, bool next);
bool KTextEditor__ConfigPage_EventFilter(KTextEditor__ConfigPage* self, QObject* watched, QEvent* event);
void KTextEditor__ConfigPage_OnEventFilter(KTextEditor__ConfigPage* self, intptr_t slot);
bool KTextEditor__ConfigPage_QBaseEventFilter(KTextEditor__ConfigPage* self, QObject* watched, QEvent* event);
void KTextEditor__ConfigPage_TimerEvent(KTextEditor__ConfigPage* self, QTimerEvent* event);
void KTextEditor__ConfigPage_OnTimerEvent(KTextEditor__ConfigPage* self, intptr_t slot);
void KTextEditor__ConfigPage_QBaseTimerEvent(KTextEditor__ConfigPage* self, QTimerEvent* event);
void KTextEditor__ConfigPage_ChildEvent(KTextEditor__ConfigPage* self, QChildEvent* event);
void KTextEditor__ConfigPage_OnChildEvent(KTextEditor__ConfigPage* self, intptr_t slot);
void KTextEditor__ConfigPage_QBaseChildEvent(KTextEditor__ConfigPage* self, QChildEvent* event);
void KTextEditor__ConfigPage_CustomEvent(KTextEditor__ConfigPage* self, QEvent* event);
void KTextEditor__ConfigPage_OnCustomEvent(KTextEditor__ConfigPage* self, intptr_t slot);
void KTextEditor__ConfigPage_QBaseCustomEvent(KTextEditor__ConfigPage* self, QEvent* event);
void KTextEditor__ConfigPage_ConnectNotify(KTextEditor__ConfigPage* self, const QMetaMethod* signal);
void KTextEditor__ConfigPage_OnConnectNotify(KTextEditor__ConfigPage* self, intptr_t slot);
void KTextEditor__ConfigPage_QBaseConnectNotify(KTextEditor__ConfigPage* self, const QMetaMethod* signal);
void KTextEditor__ConfigPage_DisconnectNotify(KTextEditor__ConfigPage* self, const QMetaMethod* signal);
void KTextEditor__ConfigPage_OnDisconnectNotify(KTextEditor__ConfigPage* self, intptr_t slot);
void KTextEditor__ConfigPage_QBaseDisconnectNotify(KTextEditor__ConfigPage* self, const QMetaMethod* signal);
void KTextEditor__ConfigPage_UpdateMicroFocus(KTextEditor__ConfigPage* self);
void KTextEditor__ConfigPage_OnUpdateMicroFocus(KTextEditor__ConfigPage* self, intptr_t slot);
void KTextEditor__ConfigPage_QBaseUpdateMicroFocus(KTextEditor__ConfigPage* self);
void KTextEditor__ConfigPage_Create(KTextEditor__ConfigPage* self);
void KTextEditor__ConfigPage_OnCreate(KTextEditor__ConfigPage* self, intptr_t slot);
void KTextEditor__ConfigPage_QBaseCreate(KTextEditor__ConfigPage* self);
void KTextEditor__ConfigPage_Destroy(KTextEditor__ConfigPage* self);
void KTextEditor__ConfigPage_OnDestroy(KTextEditor__ConfigPage* self, intptr_t slot);
void KTextEditor__ConfigPage_QBaseDestroy(KTextEditor__ConfigPage* self);
bool KTextEditor__ConfigPage_FocusNextChild(KTextEditor__ConfigPage* self);
void KTextEditor__ConfigPage_OnFocusNextChild(KTextEditor__ConfigPage* self, intptr_t slot);
bool KTextEditor__ConfigPage_QBaseFocusNextChild(KTextEditor__ConfigPage* self);
bool KTextEditor__ConfigPage_FocusPreviousChild(KTextEditor__ConfigPage* self);
void KTextEditor__ConfigPage_OnFocusPreviousChild(KTextEditor__ConfigPage* self, intptr_t slot);
bool KTextEditor__ConfigPage_QBaseFocusPreviousChild(KTextEditor__ConfigPage* self);
QObject* KTextEditor__ConfigPage_Sender(const KTextEditor__ConfigPage* self);
void KTextEditor__ConfigPage_OnSender(const KTextEditor__ConfigPage* self, intptr_t slot);
QObject* KTextEditor__ConfigPage_QBaseSender(const KTextEditor__ConfigPage* self);
int KTextEditor__ConfigPage_SenderSignalIndex(const KTextEditor__ConfigPage* self);
void KTextEditor__ConfigPage_OnSenderSignalIndex(const KTextEditor__ConfigPage* self, intptr_t slot);
int KTextEditor__ConfigPage_QBaseSenderSignalIndex(const KTextEditor__ConfigPage* self);
int KTextEditor__ConfigPage_Receivers(const KTextEditor__ConfigPage* self, const char* signal);
void KTextEditor__ConfigPage_OnReceivers(const KTextEditor__ConfigPage* self, intptr_t slot);
int KTextEditor__ConfigPage_QBaseReceivers(const KTextEditor__ConfigPage* self, const char* signal);
bool KTextEditor__ConfigPage_IsSignalConnected(const KTextEditor__ConfigPage* self, const QMetaMethod* signal);
void KTextEditor__ConfigPage_OnIsSignalConnected(const KTextEditor__ConfigPage* self, intptr_t slot);
bool KTextEditor__ConfigPage_QBaseIsSignalConnected(const KTextEditor__ConfigPage* self, const QMetaMethod* signal);
double KTextEditor__ConfigPage_GetDecodedMetricF(const KTextEditor__ConfigPage* self, int metricA, int metricB);
void KTextEditor__ConfigPage_OnGetDecodedMetricF(const KTextEditor__ConfigPage* self, intptr_t slot);
double KTextEditor__ConfigPage_QBaseGetDecodedMetricF(const KTextEditor__ConfigPage* self, int metricA, int metricB);
void KTextEditor__ConfigPage_Delete(KTextEditor__ConfigPage* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
