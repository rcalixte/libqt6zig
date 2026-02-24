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
void Sonnet__ConfigDialog_SetLanguage(Sonnet__ConfigDialog* self, const libqt_string language);
libqt_string Sonnet__ConfigDialog_Language(const Sonnet__ConfigDialog* self);
void Sonnet__ConfigDialog_SlotOk(Sonnet__ConfigDialog* self);
void Sonnet__ConfigDialog_SlotApply(Sonnet__ConfigDialog* self);
void Sonnet__ConfigDialog_LanguageChanged(Sonnet__ConfigDialog* self, const libqt_string language);
void Sonnet__ConfigDialog_Connect_LanguageChanged(Sonnet__ConfigDialog* self, intptr_t slot);
void Sonnet__ConfigDialog_ConfigChanged(Sonnet__ConfigDialog* self);
void Sonnet__ConfigDialog_Connect_ConfigChanged(Sonnet__ConfigDialog* self, intptr_t slot);
void Sonnet__ConfigDialog_OnMetaObject(const Sonnet__ConfigDialog* self, intptr_t slot);
QMetaObject* Sonnet__ConfigDialog_SuperMetaObject(const Sonnet__ConfigDialog* self);
void Sonnet__ConfigDialog_OnMetacast(Sonnet__ConfigDialog* self, intptr_t slot);
void* Sonnet__ConfigDialog_SuperMetacast(Sonnet__ConfigDialog* self, const char* param1);
void Sonnet__ConfigDialog_OnMetacall(Sonnet__ConfigDialog* self, intptr_t slot);
int Sonnet__ConfigDialog_SuperMetacall(Sonnet__ConfigDialog* self, int param1, int param2, void** param3);
void Sonnet__ConfigDialog_OnSlotOk(Sonnet__ConfigDialog* self, intptr_t slot);
void Sonnet__ConfigDialog_SuperSlotOk(Sonnet__ConfigDialog* self);
void Sonnet__ConfigDialog_OnSlotApply(Sonnet__ConfigDialog* self, intptr_t slot);
void Sonnet__ConfigDialog_SuperSlotApply(Sonnet__ConfigDialog* self);
void Sonnet__ConfigDialog_SetVisible(Sonnet__ConfigDialog* self, bool visible);
void Sonnet__ConfigDialog_OnSetVisible(Sonnet__ConfigDialog* self, intptr_t slot);
void Sonnet__ConfigDialog_SuperSetVisible(Sonnet__ConfigDialog* self, bool visible);
QSize* Sonnet__ConfigDialog_SizeHint(const Sonnet__ConfigDialog* self);
void Sonnet__ConfigDialog_OnSizeHint(const Sonnet__ConfigDialog* self, intptr_t slot);
QSize* Sonnet__ConfigDialog_SuperSizeHint(const Sonnet__ConfigDialog* self);
QSize* Sonnet__ConfigDialog_MinimumSizeHint(const Sonnet__ConfigDialog* self);
void Sonnet__ConfigDialog_OnMinimumSizeHint(const Sonnet__ConfigDialog* self, intptr_t slot);
QSize* Sonnet__ConfigDialog_SuperMinimumSizeHint(const Sonnet__ConfigDialog* self);
void Sonnet__ConfigDialog_Open(Sonnet__ConfigDialog* self);
void Sonnet__ConfigDialog_OnOpen(Sonnet__ConfigDialog* self, intptr_t slot);
void Sonnet__ConfigDialog_SuperOpen(Sonnet__ConfigDialog* self);
int Sonnet__ConfigDialog_Exec(Sonnet__ConfigDialog* self);
void Sonnet__ConfigDialog_OnExec(Sonnet__ConfigDialog* self, intptr_t slot);
int Sonnet__ConfigDialog_SuperExec(Sonnet__ConfigDialog* self);
void Sonnet__ConfigDialog_Done(Sonnet__ConfigDialog* self, int param1);
void Sonnet__ConfigDialog_OnDone(Sonnet__ConfigDialog* self, intptr_t slot);
void Sonnet__ConfigDialog_SuperDone(Sonnet__ConfigDialog* self, int param1);
void Sonnet__ConfigDialog_Accept(Sonnet__ConfigDialog* self);
void Sonnet__ConfigDialog_OnAccept(Sonnet__ConfigDialog* self, intptr_t slot);
void Sonnet__ConfigDialog_SuperAccept(Sonnet__ConfigDialog* self);
void Sonnet__ConfigDialog_Reject(Sonnet__ConfigDialog* self);
void Sonnet__ConfigDialog_OnReject(Sonnet__ConfigDialog* self, intptr_t slot);
void Sonnet__ConfigDialog_SuperReject(Sonnet__ConfigDialog* self);
void Sonnet__ConfigDialog_KeyPressEvent(Sonnet__ConfigDialog* self, QKeyEvent* param1);
void Sonnet__ConfigDialog_OnKeyPressEvent(Sonnet__ConfigDialog* self, intptr_t slot);
void Sonnet__ConfigDialog_SuperKeyPressEvent(Sonnet__ConfigDialog* self, QKeyEvent* param1);
void Sonnet__ConfigDialog_CloseEvent(Sonnet__ConfigDialog* self, QCloseEvent* param1);
void Sonnet__ConfigDialog_OnCloseEvent(Sonnet__ConfigDialog* self, intptr_t slot);
void Sonnet__ConfigDialog_SuperCloseEvent(Sonnet__ConfigDialog* self, QCloseEvent* param1);
void Sonnet__ConfigDialog_ShowEvent(Sonnet__ConfigDialog* self, QShowEvent* param1);
void Sonnet__ConfigDialog_OnShowEvent(Sonnet__ConfigDialog* self, intptr_t slot);
void Sonnet__ConfigDialog_SuperShowEvent(Sonnet__ConfigDialog* self, QShowEvent* param1);
void Sonnet__ConfigDialog_ResizeEvent(Sonnet__ConfigDialog* self, QResizeEvent* param1);
void Sonnet__ConfigDialog_OnResizeEvent(Sonnet__ConfigDialog* self, intptr_t slot);
void Sonnet__ConfigDialog_SuperResizeEvent(Sonnet__ConfigDialog* self, QResizeEvent* param1);
void Sonnet__ConfigDialog_ContextMenuEvent(Sonnet__ConfigDialog* self, QContextMenuEvent* param1);
void Sonnet__ConfigDialog_OnContextMenuEvent(Sonnet__ConfigDialog* self, intptr_t slot);
void Sonnet__ConfigDialog_SuperContextMenuEvent(Sonnet__ConfigDialog* self, QContextMenuEvent* param1);
bool Sonnet__ConfigDialog_EventFilter(Sonnet__ConfigDialog* self, QObject* param1, QEvent* param2);
void Sonnet__ConfigDialog_OnEventFilter(Sonnet__ConfigDialog* self, intptr_t slot);
bool Sonnet__ConfigDialog_SuperEventFilter(Sonnet__ConfigDialog* self, QObject* param1, QEvent* param2);
int Sonnet__ConfigDialog_DevType(const Sonnet__ConfigDialog* self);
void Sonnet__ConfigDialog_OnDevType(const Sonnet__ConfigDialog* self, intptr_t slot);
int Sonnet__ConfigDialog_SuperDevType(const Sonnet__ConfigDialog* self);
int Sonnet__ConfigDialog_HeightForWidth(const Sonnet__ConfigDialog* self, int param1);
void Sonnet__ConfigDialog_OnHeightForWidth(const Sonnet__ConfigDialog* self, intptr_t slot);
int Sonnet__ConfigDialog_SuperHeightForWidth(const Sonnet__ConfigDialog* self, int param1);
bool Sonnet__ConfigDialog_HasHeightForWidth(const Sonnet__ConfigDialog* self);
void Sonnet__ConfigDialog_OnHasHeightForWidth(const Sonnet__ConfigDialog* self, intptr_t slot);
bool Sonnet__ConfigDialog_SuperHasHeightForWidth(const Sonnet__ConfigDialog* self);
QPaintEngine* Sonnet__ConfigDialog_PaintEngine(const Sonnet__ConfigDialog* self);
void Sonnet__ConfigDialog_OnPaintEngine(const Sonnet__ConfigDialog* self, intptr_t slot);
QPaintEngine* Sonnet__ConfigDialog_SuperPaintEngine(const Sonnet__ConfigDialog* self);
bool Sonnet__ConfigDialog_Event(Sonnet__ConfigDialog* self, QEvent* event);
void Sonnet__ConfigDialog_OnEvent(Sonnet__ConfigDialog* self, intptr_t slot);
bool Sonnet__ConfigDialog_SuperEvent(Sonnet__ConfigDialog* self, QEvent* event);
void Sonnet__ConfigDialog_MousePressEvent(Sonnet__ConfigDialog* self, QMouseEvent* event);
void Sonnet__ConfigDialog_OnMousePressEvent(Sonnet__ConfigDialog* self, intptr_t slot);
void Sonnet__ConfigDialog_SuperMousePressEvent(Sonnet__ConfigDialog* self, QMouseEvent* event);
void Sonnet__ConfigDialog_MouseReleaseEvent(Sonnet__ConfigDialog* self, QMouseEvent* event);
void Sonnet__ConfigDialog_OnMouseReleaseEvent(Sonnet__ConfigDialog* self, intptr_t slot);
void Sonnet__ConfigDialog_SuperMouseReleaseEvent(Sonnet__ConfigDialog* self, QMouseEvent* event);
void Sonnet__ConfigDialog_MouseDoubleClickEvent(Sonnet__ConfigDialog* self, QMouseEvent* event);
void Sonnet__ConfigDialog_OnMouseDoubleClickEvent(Sonnet__ConfigDialog* self, intptr_t slot);
void Sonnet__ConfigDialog_SuperMouseDoubleClickEvent(Sonnet__ConfigDialog* self, QMouseEvent* event);
void Sonnet__ConfigDialog_MouseMoveEvent(Sonnet__ConfigDialog* self, QMouseEvent* event);
void Sonnet__ConfigDialog_OnMouseMoveEvent(Sonnet__ConfigDialog* self, intptr_t slot);
void Sonnet__ConfigDialog_SuperMouseMoveEvent(Sonnet__ConfigDialog* self, QMouseEvent* event);
void Sonnet__ConfigDialog_WheelEvent(Sonnet__ConfigDialog* self, QWheelEvent* event);
void Sonnet__ConfigDialog_OnWheelEvent(Sonnet__ConfigDialog* self, intptr_t slot);
void Sonnet__ConfigDialog_SuperWheelEvent(Sonnet__ConfigDialog* self, QWheelEvent* event);
void Sonnet__ConfigDialog_KeyReleaseEvent(Sonnet__ConfigDialog* self, QKeyEvent* event);
void Sonnet__ConfigDialog_OnKeyReleaseEvent(Sonnet__ConfigDialog* self, intptr_t slot);
void Sonnet__ConfigDialog_SuperKeyReleaseEvent(Sonnet__ConfigDialog* self, QKeyEvent* event);
void Sonnet__ConfigDialog_FocusInEvent(Sonnet__ConfigDialog* self, QFocusEvent* event);
void Sonnet__ConfigDialog_OnFocusInEvent(Sonnet__ConfigDialog* self, intptr_t slot);
void Sonnet__ConfigDialog_SuperFocusInEvent(Sonnet__ConfigDialog* self, QFocusEvent* event);
void Sonnet__ConfigDialog_FocusOutEvent(Sonnet__ConfigDialog* self, QFocusEvent* event);
void Sonnet__ConfigDialog_OnFocusOutEvent(Sonnet__ConfigDialog* self, intptr_t slot);
void Sonnet__ConfigDialog_SuperFocusOutEvent(Sonnet__ConfigDialog* self, QFocusEvent* event);
void Sonnet__ConfigDialog_EnterEvent(Sonnet__ConfigDialog* self, QEnterEvent* event);
void Sonnet__ConfigDialog_OnEnterEvent(Sonnet__ConfigDialog* self, intptr_t slot);
void Sonnet__ConfigDialog_SuperEnterEvent(Sonnet__ConfigDialog* self, QEnterEvent* event);
void Sonnet__ConfigDialog_LeaveEvent(Sonnet__ConfigDialog* self, QEvent* event);
void Sonnet__ConfigDialog_OnLeaveEvent(Sonnet__ConfigDialog* self, intptr_t slot);
void Sonnet__ConfigDialog_SuperLeaveEvent(Sonnet__ConfigDialog* self, QEvent* event);
void Sonnet__ConfigDialog_PaintEvent(Sonnet__ConfigDialog* self, QPaintEvent* event);
void Sonnet__ConfigDialog_OnPaintEvent(Sonnet__ConfigDialog* self, intptr_t slot);
void Sonnet__ConfigDialog_SuperPaintEvent(Sonnet__ConfigDialog* self, QPaintEvent* event);
void Sonnet__ConfigDialog_MoveEvent(Sonnet__ConfigDialog* self, QMoveEvent* event);
void Sonnet__ConfigDialog_OnMoveEvent(Sonnet__ConfigDialog* self, intptr_t slot);
void Sonnet__ConfigDialog_SuperMoveEvent(Sonnet__ConfigDialog* self, QMoveEvent* event);
void Sonnet__ConfigDialog_TabletEvent(Sonnet__ConfigDialog* self, QTabletEvent* event);
void Sonnet__ConfigDialog_OnTabletEvent(Sonnet__ConfigDialog* self, intptr_t slot);
void Sonnet__ConfigDialog_SuperTabletEvent(Sonnet__ConfigDialog* self, QTabletEvent* event);
void Sonnet__ConfigDialog_ActionEvent(Sonnet__ConfigDialog* self, QActionEvent* event);
void Sonnet__ConfigDialog_OnActionEvent(Sonnet__ConfigDialog* self, intptr_t slot);
void Sonnet__ConfigDialog_SuperActionEvent(Sonnet__ConfigDialog* self, QActionEvent* event);
void Sonnet__ConfigDialog_DragEnterEvent(Sonnet__ConfigDialog* self, QDragEnterEvent* event);
void Sonnet__ConfigDialog_OnDragEnterEvent(Sonnet__ConfigDialog* self, intptr_t slot);
void Sonnet__ConfigDialog_SuperDragEnterEvent(Sonnet__ConfigDialog* self, QDragEnterEvent* event);
void Sonnet__ConfigDialog_DragMoveEvent(Sonnet__ConfigDialog* self, QDragMoveEvent* event);
void Sonnet__ConfigDialog_OnDragMoveEvent(Sonnet__ConfigDialog* self, intptr_t slot);
void Sonnet__ConfigDialog_SuperDragMoveEvent(Sonnet__ConfigDialog* self, QDragMoveEvent* event);
void Sonnet__ConfigDialog_DragLeaveEvent(Sonnet__ConfigDialog* self, QDragLeaveEvent* event);
void Sonnet__ConfigDialog_OnDragLeaveEvent(Sonnet__ConfigDialog* self, intptr_t slot);
void Sonnet__ConfigDialog_SuperDragLeaveEvent(Sonnet__ConfigDialog* self, QDragLeaveEvent* event);
void Sonnet__ConfigDialog_DropEvent(Sonnet__ConfigDialog* self, QDropEvent* event);
void Sonnet__ConfigDialog_OnDropEvent(Sonnet__ConfigDialog* self, intptr_t slot);
void Sonnet__ConfigDialog_SuperDropEvent(Sonnet__ConfigDialog* self, QDropEvent* event);
void Sonnet__ConfigDialog_HideEvent(Sonnet__ConfigDialog* self, QHideEvent* event);
void Sonnet__ConfigDialog_OnHideEvent(Sonnet__ConfigDialog* self, intptr_t slot);
void Sonnet__ConfigDialog_SuperHideEvent(Sonnet__ConfigDialog* self, QHideEvent* event);
bool Sonnet__ConfigDialog_NativeEvent(Sonnet__ConfigDialog* self, const libqt_string eventType, void* message, intptr_t* result);
void Sonnet__ConfigDialog_OnNativeEvent(Sonnet__ConfigDialog* self, intptr_t slot);
bool Sonnet__ConfigDialog_SuperNativeEvent(Sonnet__ConfigDialog* self, const libqt_string eventType, void* message, intptr_t* result);
void Sonnet__ConfigDialog_ChangeEvent(Sonnet__ConfigDialog* self, QEvent* param1);
void Sonnet__ConfigDialog_OnChangeEvent(Sonnet__ConfigDialog* self, intptr_t slot);
void Sonnet__ConfigDialog_SuperChangeEvent(Sonnet__ConfigDialog* self, QEvent* param1);
int Sonnet__ConfigDialog_Metric(const Sonnet__ConfigDialog* self, int param1);
void Sonnet__ConfigDialog_OnMetric(const Sonnet__ConfigDialog* self, intptr_t slot);
int Sonnet__ConfigDialog_SuperMetric(const Sonnet__ConfigDialog* self, int param1);
void Sonnet__ConfigDialog_InitPainter(const Sonnet__ConfigDialog* self, QPainter* painter);
void Sonnet__ConfigDialog_OnInitPainter(const Sonnet__ConfigDialog* self, intptr_t slot);
void Sonnet__ConfigDialog_SuperInitPainter(const Sonnet__ConfigDialog* self, QPainter* painter);
QPaintDevice* Sonnet__ConfigDialog_Redirected(const Sonnet__ConfigDialog* self, QPoint* offset);
void Sonnet__ConfigDialog_OnRedirected(const Sonnet__ConfigDialog* self, intptr_t slot);
QPaintDevice* Sonnet__ConfigDialog_SuperRedirected(const Sonnet__ConfigDialog* self, QPoint* offset);
QPainter* Sonnet__ConfigDialog_SharedPainter(const Sonnet__ConfigDialog* self);
void Sonnet__ConfigDialog_OnSharedPainter(const Sonnet__ConfigDialog* self, intptr_t slot);
QPainter* Sonnet__ConfigDialog_SuperSharedPainter(const Sonnet__ConfigDialog* self);
void Sonnet__ConfigDialog_InputMethodEvent(Sonnet__ConfigDialog* self, QInputMethodEvent* param1);
void Sonnet__ConfigDialog_OnInputMethodEvent(Sonnet__ConfigDialog* self, intptr_t slot);
void Sonnet__ConfigDialog_SuperInputMethodEvent(Sonnet__ConfigDialog* self, QInputMethodEvent* param1);
QVariant* Sonnet__ConfigDialog_InputMethodQuery(const Sonnet__ConfigDialog* self, int param1);
void Sonnet__ConfigDialog_OnInputMethodQuery(const Sonnet__ConfigDialog* self, intptr_t slot);
QVariant* Sonnet__ConfigDialog_SuperInputMethodQuery(const Sonnet__ConfigDialog* self, int param1);
bool Sonnet__ConfigDialog_FocusNextPrevChild(Sonnet__ConfigDialog* self, bool next);
void Sonnet__ConfigDialog_OnFocusNextPrevChild(Sonnet__ConfigDialog* self, intptr_t slot);
bool Sonnet__ConfigDialog_SuperFocusNextPrevChild(Sonnet__ConfigDialog* self, bool next);
void Sonnet__ConfigDialog_TimerEvent(Sonnet__ConfigDialog* self, QTimerEvent* event);
void Sonnet__ConfigDialog_OnTimerEvent(Sonnet__ConfigDialog* self, intptr_t slot);
void Sonnet__ConfigDialog_SuperTimerEvent(Sonnet__ConfigDialog* self, QTimerEvent* event);
void Sonnet__ConfigDialog_ChildEvent(Sonnet__ConfigDialog* self, QChildEvent* event);
void Sonnet__ConfigDialog_OnChildEvent(Sonnet__ConfigDialog* self, intptr_t slot);
void Sonnet__ConfigDialog_SuperChildEvent(Sonnet__ConfigDialog* self, QChildEvent* event);
void Sonnet__ConfigDialog_CustomEvent(Sonnet__ConfigDialog* self, QEvent* event);
void Sonnet__ConfigDialog_OnCustomEvent(Sonnet__ConfigDialog* self, intptr_t slot);
void Sonnet__ConfigDialog_SuperCustomEvent(Sonnet__ConfigDialog* self, QEvent* event);
void Sonnet__ConfigDialog_ConnectNotify(Sonnet__ConfigDialog* self, const QMetaMethod* signal);
void Sonnet__ConfigDialog_OnConnectNotify(Sonnet__ConfigDialog* self, intptr_t slot);
void Sonnet__ConfigDialog_SuperConnectNotify(Sonnet__ConfigDialog* self, const QMetaMethod* signal);
void Sonnet__ConfigDialog_DisconnectNotify(Sonnet__ConfigDialog* self, const QMetaMethod* signal);
void Sonnet__ConfigDialog_OnDisconnectNotify(Sonnet__ConfigDialog* self, intptr_t slot);
void Sonnet__ConfigDialog_SuperDisconnectNotify(Sonnet__ConfigDialog* self, const QMetaMethod* signal);
void Sonnet__ConfigDialog_AdjustPosition(Sonnet__ConfigDialog* self, QWidget* param1);
void Sonnet__ConfigDialog_OnAdjustPosition(Sonnet__ConfigDialog* self, intptr_t slot);
void Sonnet__ConfigDialog_SuperAdjustPosition(Sonnet__ConfigDialog* self, QWidget* param1);
void Sonnet__ConfigDialog_UpdateMicroFocus(Sonnet__ConfigDialog* self);
void Sonnet__ConfigDialog_OnUpdateMicroFocus(Sonnet__ConfigDialog* self, intptr_t slot);
void Sonnet__ConfigDialog_SuperUpdateMicroFocus(Sonnet__ConfigDialog* self);
void Sonnet__ConfigDialog_Create(Sonnet__ConfigDialog* self);
void Sonnet__ConfigDialog_OnCreate(Sonnet__ConfigDialog* self, intptr_t slot);
void Sonnet__ConfigDialog_SuperCreate(Sonnet__ConfigDialog* self);
void Sonnet__ConfigDialog_Destroy(Sonnet__ConfigDialog* self);
void Sonnet__ConfigDialog_OnDestroy(Sonnet__ConfigDialog* self, intptr_t slot);
void Sonnet__ConfigDialog_SuperDestroy(Sonnet__ConfigDialog* self);
bool Sonnet__ConfigDialog_FocusNextChild(Sonnet__ConfigDialog* self);
void Sonnet__ConfigDialog_OnFocusNextChild(Sonnet__ConfigDialog* self, intptr_t slot);
bool Sonnet__ConfigDialog_SuperFocusNextChild(Sonnet__ConfigDialog* self);
bool Sonnet__ConfigDialog_FocusPreviousChild(Sonnet__ConfigDialog* self);
void Sonnet__ConfigDialog_OnFocusPreviousChild(Sonnet__ConfigDialog* self, intptr_t slot);
bool Sonnet__ConfigDialog_SuperFocusPreviousChild(Sonnet__ConfigDialog* self);
QObject* Sonnet__ConfigDialog_Sender(const Sonnet__ConfigDialog* self);
void Sonnet__ConfigDialog_OnSender(const Sonnet__ConfigDialog* self, intptr_t slot);
QObject* Sonnet__ConfigDialog_SuperSender(const Sonnet__ConfigDialog* self);
int Sonnet__ConfigDialog_SenderSignalIndex(const Sonnet__ConfigDialog* self);
void Sonnet__ConfigDialog_OnSenderSignalIndex(const Sonnet__ConfigDialog* self, intptr_t slot);
int Sonnet__ConfigDialog_SuperSenderSignalIndex(const Sonnet__ConfigDialog* self);
int Sonnet__ConfigDialog_Receivers(const Sonnet__ConfigDialog* self, const char* signal);
void Sonnet__ConfigDialog_OnReceivers(const Sonnet__ConfigDialog* self, intptr_t slot);
int Sonnet__ConfigDialog_SuperReceivers(const Sonnet__ConfigDialog* self, const char* signal);
bool Sonnet__ConfigDialog_IsSignalConnected(const Sonnet__ConfigDialog* self, const QMetaMethod* signal);
void Sonnet__ConfigDialog_OnIsSignalConnected(const Sonnet__ConfigDialog* self, intptr_t slot);
bool Sonnet__ConfigDialog_SuperIsSignalConnected(const Sonnet__ConfigDialog* self, const QMetaMethod* signal);
double Sonnet__ConfigDialog_GetDecodedMetricF(const Sonnet__ConfigDialog* self, int metricA, int metricB);
void Sonnet__ConfigDialog_OnGetDecodedMetricF(const Sonnet__ConfigDialog* self, intptr_t slot);
double Sonnet__ConfigDialog_SuperGetDecodedMetricF(const Sonnet__ConfigDialog* self, int metricA, int metricB);
void Sonnet__ConfigDialog_Delete(Sonnet__ConfigDialog* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
