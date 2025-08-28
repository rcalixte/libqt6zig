#pragma once
#ifndef SRC_EXTRAS_SONNETC_LIBCONFIGDIALOG_H
#define SRC_EXTRAS_SONNETC_LIBCONFIGDIALOG_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Sonnet__ConfigDialog)
typedef Sonnet::ConfigDialog Sonnet__ConfigDialog;
#endif
#else
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
typedef struct Sonnet__ConfigDialog Sonnet__ConfigDialog;
#endif

Sonnet__ConfigDialog* Sonnet__ConfigDialog_new(QWidget* parent);
QMetaObject* Sonnet__ConfigDialog_MetaObject(const Sonnet__ConfigDialog* self);
void* Sonnet__ConfigDialog_Metacast(Sonnet__ConfigDialog* self, const char* param1);
int Sonnet__ConfigDialog_Metacall(Sonnet__ConfigDialog* self, int param1, int param2, void** param3);
libqt_string Sonnet__ConfigDialog_Tr(const char* s);
void Sonnet__ConfigDialog_SetLanguage(Sonnet__ConfigDialog* self, const libqt_string language);
libqt_string Sonnet__ConfigDialog_Language(const Sonnet__ConfigDialog* self);
void Sonnet__ConfigDialog_SlotOk(Sonnet__ConfigDialog* self);
void Sonnet__ConfigDialog_SlotApply(Sonnet__ConfigDialog* self);
void Sonnet__ConfigDialog_LanguageChanged(Sonnet__ConfigDialog* self, const libqt_string language);
void Sonnet__ConfigDialog_Connect_LanguageChanged(Sonnet__ConfigDialog* self, intptr_t slot);
void Sonnet__ConfigDialog_ConfigChanged(Sonnet__ConfigDialog* self);
void Sonnet__ConfigDialog_Connect_ConfigChanged(Sonnet__ConfigDialog* self, intptr_t slot);
libqt_string Sonnet__ConfigDialog_Tr2(const char* s, const char* c);
libqt_string Sonnet__ConfigDialog_Tr3(const char* s, const char* c, int n);
void Sonnet__ConfigDialog_OnMetacall(Sonnet__ConfigDialog* self, intptr_t slot);
int Sonnet__ConfigDialog_QBaseMetacall(Sonnet__ConfigDialog* self, int param1, int param2, void** param3);
void Sonnet__ConfigDialog_OnSlotOk(Sonnet__ConfigDialog* self, intptr_t slot);
void Sonnet__ConfigDialog_QBaseSlotOk(Sonnet__ConfigDialog* self);
void Sonnet__ConfigDialog_OnSlotApply(Sonnet__ConfigDialog* self, intptr_t slot);
void Sonnet__ConfigDialog_QBaseSlotApply(Sonnet__ConfigDialog* self);
void Sonnet__ConfigDialog_SetVisible(Sonnet__ConfigDialog* self, bool visible);
void Sonnet__ConfigDialog_OnSetVisible(Sonnet__ConfigDialog* self, intptr_t slot);
void Sonnet__ConfigDialog_QBaseSetVisible(Sonnet__ConfigDialog* self, bool visible);
QSize* Sonnet__ConfigDialog_SizeHint(const Sonnet__ConfigDialog* self);
void Sonnet__ConfigDialog_OnSizeHint(const Sonnet__ConfigDialog* self, intptr_t slot);
QSize* Sonnet__ConfigDialog_QBaseSizeHint(const Sonnet__ConfigDialog* self);
QSize* Sonnet__ConfigDialog_MinimumSizeHint(const Sonnet__ConfigDialog* self);
void Sonnet__ConfigDialog_OnMinimumSizeHint(const Sonnet__ConfigDialog* self, intptr_t slot);
QSize* Sonnet__ConfigDialog_QBaseMinimumSizeHint(const Sonnet__ConfigDialog* self);
void Sonnet__ConfigDialog_Open(Sonnet__ConfigDialog* self);
void Sonnet__ConfigDialog_OnOpen(Sonnet__ConfigDialog* self, intptr_t slot);
void Sonnet__ConfigDialog_QBaseOpen(Sonnet__ConfigDialog* self);
int Sonnet__ConfigDialog_Exec(Sonnet__ConfigDialog* self);
void Sonnet__ConfigDialog_OnExec(Sonnet__ConfigDialog* self, intptr_t slot);
int Sonnet__ConfigDialog_QBaseExec(Sonnet__ConfigDialog* self);
void Sonnet__ConfigDialog_Done(Sonnet__ConfigDialog* self, int param1);
void Sonnet__ConfigDialog_OnDone(Sonnet__ConfigDialog* self, intptr_t slot);
void Sonnet__ConfigDialog_QBaseDone(Sonnet__ConfigDialog* self, int param1);
void Sonnet__ConfigDialog_Accept(Sonnet__ConfigDialog* self);
void Sonnet__ConfigDialog_OnAccept(Sonnet__ConfigDialog* self, intptr_t slot);
void Sonnet__ConfigDialog_QBaseAccept(Sonnet__ConfigDialog* self);
void Sonnet__ConfigDialog_Reject(Sonnet__ConfigDialog* self);
void Sonnet__ConfigDialog_OnReject(Sonnet__ConfigDialog* self, intptr_t slot);
void Sonnet__ConfigDialog_QBaseReject(Sonnet__ConfigDialog* self);
void Sonnet__ConfigDialog_KeyPressEvent(Sonnet__ConfigDialog* self, QKeyEvent* param1);
void Sonnet__ConfigDialog_OnKeyPressEvent(Sonnet__ConfigDialog* self, intptr_t slot);
void Sonnet__ConfigDialog_QBaseKeyPressEvent(Sonnet__ConfigDialog* self, QKeyEvent* param1);
void Sonnet__ConfigDialog_CloseEvent(Sonnet__ConfigDialog* self, QCloseEvent* param1);
void Sonnet__ConfigDialog_OnCloseEvent(Sonnet__ConfigDialog* self, intptr_t slot);
void Sonnet__ConfigDialog_QBaseCloseEvent(Sonnet__ConfigDialog* self, QCloseEvent* param1);
void Sonnet__ConfigDialog_ShowEvent(Sonnet__ConfigDialog* self, QShowEvent* param1);
void Sonnet__ConfigDialog_OnShowEvent(Sonnet__ConfigDialog* self, intptr_t slot);
void Sonnet__ConfigDialog_QBaseShowEvent(Sonnet__ConfigDialog* self, QShowEvent* param1);
void Sonnet__ConfigDialog_ResizeEvent(Sonnet__ConfigDialog* self, QResizeEvent* param1);
void Sonnet__ConfigDialog_OnResizeEvent(Sonnet__ConfigDialog* self, intptr_t slot);
void Sonnet__ConfigDialog_QBaseResizeEvent(Sonnet__ConfigDialog* self, QResizeEvent* param1);
void Sonnet__ConfigDialog_ContextMenuEvent(Sonnet__ConfigDialog* self, QContextMenuEvent* param1);
void Sonnet__ConfigDialog_OnContextMenuEvent(Sonnet__ConfigDialog* self, intptr_t slot);
void Sonnet__ConfigDialog_QBaseContextMenuEvent(Sonnet__ConfigDialog* self, QContextMenuEvent* param1);
bool Sonnet__ConfigDialog_EventFilter(Sonnet__ConfigDialog* self, QObject* param1, QEvent* param2);
void Sonnet__ConfigDialog_OnEventFilter(Sonnet__ConfigDialog* self, intptr_t slot);
bool Sonnet__ConfigDialog_QBaseEventFilter(Sonnet__ConfigDialog* self, QObject* param1, QEvent* param2);
int Sonnet__ConfigDialog_DevType(const Sonnet__ConfigDialog* self);
void Sonnet__ConfigDialog_OnDevType(const Sonnet__ConfigDialog* self, intptr_t slot);
int Sonnet__ConfigDialog_QBaseDevType(const Sonnet__ConfigDialog* self);
int Sonnet__ConfigDialog_HeightForWidth(const Sonnet__ConfigDialog* self, int param1);
void Sonnet__ConfigDialog_OnHeightForWidth(const Sonnet__ConfigDialog* self, intptr_t slot);
int Sonnet__ConfigDialog_QBaseHeightForWidth(const Sonnet__ConfigDialog* self, int param1);
bool Sonnet__ConfigDialog_HasHeightForWidth(const Sonnet__ConfigDialog* self);
void Sonnet__ConfigDialog_OnHasHeightForWidth(const Sonnet__ConfigDialog* self, intptr_t slot);
bool Sonnet__ConfigDialog_QBaseHasHeightForWidth(const Sonnet__ConfigDialog* self);
QPaintEngine* Sonnet__ConfigDialog_PaintEngine(const Sonnet__ConfigDialog* self);
void Sonnet__ConfigDialog_OnPaintEngine(const Sonnet__ConfigDialog* self, intptr_t slot);
QPaintEngine* Sonnet__ConfigDialog_QBasePaintEngine(const Sonnet__ConfigDialog* self);
bool Sonnet__ConfigDialog_Event(Sonnet__ConfigDialog* self, QEvent* event);
void Sonnet__ConfigDialog_OnEvent(Sonnet__ConfigDialog* self, intptr_t slot);
bool Sonnet__ConfigDialog_QBaseEvent(Sonnet__ConfigDialog* self, QEvent* event);
void Sonnet__ConfigDialog_MousePressEvent(Sonnet__ConfigDialog* self, QMouseEvent* event);
void Sonnet__ConfigDialog_OnMousePressEvent(Sonnet__ConfigDialog* self, intptr_t slot);
void Sonnet__ConfigDialog_QBaseMousePressEvent(Sonnet__ConfigDialog* self, QMouseEvent* event);
void Sonnet__ConfigDialog_MouseReleaseEvent(Sonnet__ConfigDialog* self, QMouseEvent* event);
void Sonnet__ConfigDialog_OnMouseReleaseEvent(Sonnet__ConfigDialog* self, intptr_t slot);
void Sonnet__ConfigDialog_QBaseMouseReleaseEvent(Sonnet__ConfigDialog* self, QMouseEvent* event);
void Sonnet__ConfigDialog_MouseDoubleClickEvent(Sonnet__ConfigDialog* self, QMouseEvent* event);
void Sonnet__ConfigDialog_OnMouseDoubleClickEvent(Sonnet__ConfigDialog* self, intptr_t slot);
void Sonnet__ConfigDialog_QBaseMouseDoubleClickEvent(Sonnet__ConfigDialog* self, QMouseEvent* event);
void Sonnet__ConfigDialog_MouseMoveEvent(Sonnet__ConfigDialog* self, QMouseEvent* event);
void Sonnet__ConfigDialog_OnMouseMoveEvent(Sonnet__ConfigDialog* self, intptr_t slot);
void Sonnet__ConfigDialog_QBaseMouseMoveEvent(Sonnet__ConfigDialog* self, QMouseEvent* event);
void Sonnet__ConfigDialog_WheelEvent(Sonnet__ConfigDialog* self, QWheelEvent* event);
void Sonnet__ConfigDialog_OnWheelEvent(Sonnet__ConfigDialog* self, intptr_t slot);
void Sonnet__ConfigDialog_QBaseWheelEvent(Sonnet__ConfigDialog* self, QWheelEvent* event);
void Sonnet__ConfigDialog_KeyReleaseEvent(Sonnet__ConfigDialog* self, QKeyEvent* event);
void Sonnet__ConfigDialog_OnKeyReleaseEvent(Sonnet__ConfigDialog* self, intptr_t slot);
void Sonnet__ConfigDialog_QBaseKeyReleaseEvent(Sonnet__ConfigDialog* self, QKeyEvent* event);
void Sonnet__ConfigDialog_FocusInEvent(Sonnet__ConfigDialog* self, QFocusEvent* event);
void Sonnet__ConfigDialog_OnFocusInEvent(Sonnet__ConfigDialog* self, intptr_t slot);
void Sonnet__ConfigDialog_QBaseFocusInEvent(Sonnet__ConfigDialog* self, QFocusEvent* event);
void Sonnet__ConfigDialog_FocusOutEvent(Sonnet__ConfigDialog* self, QFocusEvent* event);
void Sonnet__ConfigDialog_OnFocusOutEvent(Sonnet__ConfigDialog* self, intptr_t slot);
void Sonnet__ConfigDialog_QBaseFocusOutEvent(Sonnet__ConfigDialog* self, QFocusEvent* event);
void Sonnet__ConfigDialog_EnterEvent(Sonnet__ConfigDialog* self, QEnterEvent* event);
void Sonnet__ConfigDialog_OnEnterEvent(Sonnet__ConfigDialog* self, intptr_t slot);
void Sonnet__ConfigDialog_QBaseEnterEvent(Sonnet__ConfigDialog* self, QEnterEvent* event);
void Sonnet__ConfigDialog_LeaveEvent(Sonnet__ConfigDialog* self, QEvent* event);
void Sonnet__ConfigDialog_OnLeaveEvent(Sonnet__ConfigDialog* self, intptr_t slot);
void Sonnet__ConfigDialog_QBaseLeaveEvent(Sonnet__ConfigDialog* self, QEvent* event);
void Sonnet__ConfigDialog_PaintEvent(Sonnet__ConfigDialog* self, QPaintEvent* event);
void Sonnet__ConfigDialog_OnPaintEvent(Sonnet__ConfigDialog* self, intptr_t slot);
void Sonnet__ConfigDialog_QBasePaintEvent(Sonnet__ConfigDialog* self, QPaintEvent* event);
void Sonnet__ConfigDialog_MoveEvent(Sonnet__ConfigDialog* self, QMoveEvent* event);
void Sonnet__ConfigDialog_OnMoveEvent(Sonnet__ConfigDialog* self, intptr_t slot);
void Sonnet__ConfigDialog_QBaseMoveEvent(Sonnet__ConfigDialog* self, QMoveEvent* event);
void Sonnet__ConfigDialog_TabletEvent(Sonnet__ConfigDialog* self, QTabletEvent* event);
void Sonnet__ConfigDialog_OnTabletEvent(Sonnet__ConfigDialog* self, intptr_t slot);
void Sonnet__ConfigDialog_QBaseTabletEvent(Sonnet__ConfigDialog* self, QTabletEvent* event);
void Sonnet__ConfigDialog_ActionEvent(Sonnet__ConfigDialog* self, QActionEvent* event);
void Sonnet__ConfigDialog_OnActionEvent(Sonnet__ConfigDialog* self, intptr_t slot);
void Sonnet__ConfigDialog_QBaseActionEvent(Sonnet__ConfigDialog* self, QActionEvent* event);
void Sonnet__ConfigDialog_DragEnterEvent(Sonnet__ConfigDialog* self, QDragEnterEvent* event);
void Sonnet__ConfigDialog_OnDragEnterEvent(Sonnet__ConfigDialog* self, intptr_t slot);
void Sonnet__ConfigDialog_QBaseDragEnterEvent(Sonnet__ConfigDialog* self, QDragEnterEvent* event);
void Sonnet__ConfigDialog_DragMoveEvent(Sonnet__ConfigDialog* self, QDragMoveEvent* event);
void Sonnet__ConfigDialog_OnDragMoveEvent(Sonnet__ConfigDialog* self, intptr_t slot);
void Sonnet__ConfigDialog_QBaseDragMoveEvent(Sonnet__ConfigDialog* self, QDragMoveEvent* event);
void Sonnet__ConfigDialog_DragLeaveEvent(Sonnet__ConfigDialog* self, QDragLeaveEvent* event);
void Sonnet__ConfigDialog_OnDragLeaveEvent(Sonnet__ConfigDialog* self, intptr_t slot);
void Sonnet__ConfigDialog_QBaseDragLeaveEvent(Sonnet__ConfigDialog* self, QDragLeaveEvent* event);
void Sonnet__ConfigDialog_DropEvent(Sonnet__ConfigDialog* self, QDropEvent* event);
void Sonnet__ConfigDialog_OnDropEvent(Sonnet__ConfigDialog* self, intptr_t slot);
void Sonnet__ConfigDialog_QBaseDropEvent(Sonnet__ConfigDialog* self, QDropEvent* event);
void Sonnet__ConfigDialog_HideEvent(Sonnet__ConfigDialog* self, QHideEvent* event);
void Sonnet__ConfigDialog_OnHideEvent(Sonnet__ConfigDialog* self, intptr_t slot);
void Sonnet__ConfigDialog_QBaseHideEvent(Sonnet__ConfigDialog* self, QHideEvent* event);
bool Sonnet__ConfigDialog_NativeEvent(Sonnet__ConfigDialog* self, const libqt_string eventType, void* message, intptr_t* result);
void Sonnet__ConfigDialog_OnNativeEvent(Sonnet__ConfigDialog* self, intptr_t slot);
bool Sonnet__ConfigDialog_QBaseNativeEvent(Sonnet__ConfigDialog* self, const libqt_string eventType, void* message, intptr_t* result);
void Sonnet__ConfigDialog_ChangeEvent(Sonnet__ConfigDialog* self, QEvent* param1);
void Sonnet__ConfigDialog_OnChangeEvent(Sonnet__ConfigDialog* self, intptr_t slot);
void Sonnet__ConfigDialog_QBaseChangeEvent(Sonnet__ConfigDialog* self, QEvent* param1);
int Sonnet__ConfigDialog_Metric(const Sonnet__ConfigDialog* self, int param1);
void Sonnet__ConfigDialog_OnMetric(const Sonnet__ConfigDialog* self, intptr_t slot);
int Sonnet__ConfigDialog_QBaseMetric(const Sonnet__ConfigDialog* self, int param1);
void Sonnet__ConfigDialog_InitPainter(const Sonnet__ConfigDialog* self, QPainter* painter);
void Sonnet__ConfigDialog_OnInitPainter(const Sonnet__ConfigDialog* self, intptr_t slot);
void Sonnet__ConfigDialog_QBaseInitPainter(const Sonnet__ConfigDialog* self, QPainter* painter);
QPaintDevice* Sonnet__ConfigDialog_Redirected(const Sonnet__ConfigDialog* self, QPoint* offset);
void Sonnet__ConfigDialog_OnRedirected(const Sonnet__ConfigDialog* self, intptr_t slot);
QPaintDevice* Sonnet__ConfigDialog_QBaseRedirected(const Sonnet__ConfigDialog* self, QPoint* offset);
QPainter* Sonnet__ConfigDialog_SharedPainter(const Sonnet__ConfigDialog* self);
void Sonnet__ConfigDialog_OnSharedPainter(const Sonnet__ConfigDialog* self, intptr_t slot);
QPainter* Sonnet__ConfigDialog_QBaseSharedPainter(const Sonnet__ConfigDialog* self);
void Sonnet__ConfigDialog_InputMethodEvent(Sonnet__ConfigDialog* self, QInputMethodEvent* param1);
void Sonnet__ConfigDialog_OnInputMethodEvent(Sonnet__ConfigDialog* self, intptr_t slot);
void Sonnet__ConfigDialog_QBaseInputMethodEvent(Sonnet__ConfigDialog* self, QInputMethodEvent* param1);
QVariant* Sonnet__ConfigDialog_InputMethodQuery(const Sonnet__ConfigDialog* self, int param1);
void Sonnet__ConfigDialog_OnInputMethodQuery(const Sonnet__ConfigDialog* self, intptr_t slot);
QVariant* Sonnet__ConfigDialog_QBaseInputMethodQuery(const Sonnet__ConfigDialog* self, int param1);
bool Sonnet__ConfigDialog_FocusNextPrevChild(Sonnet__ConfigDialog* self, bool next);
void Sonnet__ConfigDialog_OnFocusNextPrevChild(Sonnet__ConfigDialog* self, intptr_t slot);
bool Sonnet__ConfigDialog_QBaseFocusNextPrevChild(Sonnet__ConfigDialog* self, bool next);
void Sonnet__ConfigDialog_TimerEvent(Sonnet__ConfigDialog* self, QTimerEvent* event);
void Sonnet__ConfigDialog_OnTimerEvent(Sonnet__ConfigDialog* self, intptr_t slot);
void Sonnet__ConfigDialog_QBaseTimerEvent(Sonnet__ConfigDialog* self, QTimerEvent* event);
void Sonnet__ConfigDialog_ChildEvent(Sonnet__ConfigDialog* self, QChildEvent* event);
void Sonnet__ConfigDialog_OnChildEvent(Sonnet__ConfigDialog* self, intptr_t slot);
void Sonnet__ConfigDialog_QBaseChildEvent(Sonnet__ConfigDialog* self, QChildEvent* event);
void Sonnet__ConfigDialog_CustomEvent(Sonnet__ConfigDialog* self, QEvent* event);
void Sonnet__ConfigDialog_OnCustomEvent(Sonnet__ConfigDialog* self, intptr_t slot);
void Sonnet__ConfigDialog_QBaseCustomEvent(Sonnet__ConfigDialog* self, QEvent* event);
void Sonnet__ConfigDialog_ConnectNotify(Sonnet__ConfigDialog* self, const QMetaMethod* signal);
void Sonnet__ConfigDialog_OnConnectNotify(Sonnet__ConfigDialog* self, intptr_t slot);
void Sonnet__ConfigDialog_QBaseConnectNotify(Sonnet__ConfigDialog* self, const QMetaMethod* signal);
void Sonnet__ConfigDialog_DisconnectNotify(Sonnet__ConfigDialog* self, const QMetaMethod* signal);
void Sonnet__ConfigDialog_OnDisconnectNotify(Sonnet__ConfigDialog* self, intptr_t slot);
void Sonnet__ConfigDialog_QBaseDisconnectNotify(Sonnet__ConfigDialog* self, const QMetaMethod* signal);
void Sonnet__ConfigDialog_AdjustPosition(Sonnet__ConfigDialog* self, QWidget* param1);
void Sonnet__ConfigDialog_OnAdjustPosition(Sonnet__ConfigDialog* self, intptr_t slot);
void Sonnet__ConfigDialog_QBaseAdjustPosition(Sonnet__ConfigDialog* self, QWidget* param1);
void Sonnet__ConfigDialog_UpdateMicroFocus(Sonnet__ConfigDialog* self);
void Sonnet__ConfigDialog_OnUpdateMicroFocus(Sonnet__ConfigDialog* self, intptr_t slot);
void Sonnet__ConfigDialog_QBaseUpdateMicroFocus(Sonnet__ConfigDialog* self);
void Sonnet__ConfigDialog_Create(Sonnet__ConfigDialog* self);
void Sonnet__ConfigDialog_OnCreate(Sonnet__ConfigDialog* self, intptr_t slot);
void Sonnet__ConfigDialog_QBaseCreate(Sonnet__ConfigDialog* self);
void Sonnet__ConfigDialog_Destroy(Sonnet__ConfigDialog* self);
void Sonnet__ConfigDialog_OnDestroy(Sonnet__ConfigDialog* self, intptr_t slot);
void Sonnet__ConfigDialog_QBaseDestroy(Sonnet__ConfigDialog* self);
bool Sonnet__ConfigDialog_FocusNextChild(Sonnet__ConfigDialog* self);
void Sonnet__ConfigDialog_OnFocusNextChild(Sonnet__ConfigDialog* self, intptr_t slot);
bool Sonnet__ConfigDialog_QBaseFocusNextChild(Sonnet__ConfigDialog* self);
bool Sonnet__ConfigDialog_FocusPreviousChild(Sonnet__ConfigDialog* self);
void Sonnet__ConfigDialog_OnFocusPreviousChild(Sonnet__ConfigDialog* self, intptr_t slot);
bool Sonnet__ConfigDialog_QBaseFocusPreviousChild(Sonnet__ConfigDialog* self);
QObject* Sonnet__ConfigDialog_Sender(const Sonnet__ConfigDialog* self);
void Sonnet__ConfigDialog_OnSender(const Sonnet__ConfigDialog* self, intptr_t slot);
QObject* Sonnet__ConfigDialog_QBaseSender(const Sonnet__ConfigDialog* self);
int Sonnet__ConfigDialog_SenderSignalIndex(const Sonnet__ConfigDialog* self);
void Sonnet__ConfigDialog_OnSenderSignalIndex(const Sonnet__ConfigDialog* self, intptr_t slot);
int Sonnet__ConfigDialog_QBaseSenderSignalIndex(const Sonnet__ConfigDialog* self);
int Sonnet__ConfigDialog_Receivers(const Sonnet__ConfigDialog* self, const char* signal);
void Sonnet__ConfigDialog_OnReceivers(const Sonnet__ConfigDialog* self, intptr_t slot);
int Sonnet__ConfigDialog_QBaseReceivers(const Sonnet__ConfigDialog* self, const char* signal);
bool Sonnet__ConfigDialog_IsSignalConnected(const Sonnet__ConfigDialog* self, const QMetaMethod* signal);
void Sonnet__ConfigDialog_OnIsSignalConnected(const Sonnet__ConfigDialog* self, intptr_t slot);
bool Sonnet__ConfigDialog_QBaseIsSignalConnected(const Sonnet__ConfigDialog* self, const QMetaMethod* signal);
double Sonnet__ConfigDialog_GetDecodedMetricF(const Sonnet__ConfigDialog* self, int metricA, int metricB);
void Sonnet__ConfigDialog_OnGetDecodedMetricF(const Sonnet__ConfigDialog* self, intptr_t slot);
double Sonnet__ConfigDialog_QBaseGetDecodedMetricF(const Sonnet__ConfigDialog* self, int metricA, int metricB);
void Sonnet__ConfigDialog_Delete(Sonnet__ConfigDialog* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
