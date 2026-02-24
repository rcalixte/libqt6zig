#pragma once
#ifndef SRC_EXTRAS_SONNETC_LIBCONFIGWIDGET_H
#define SRC_EXTRAS_SONNETC_LIBCONFIGWIDGET_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Sonnet__ConfigWidget)
typedef Sonnet::ConfigWidget Sonnet__ConfigWidget;
#endif
#else
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
typedef struct Sonnet__ConfigWidget Sonnet__ConfigWidget;
#endif

Sonnet__ConfigWidget* Sonnet__ConfigWidget_new(QWidget* parent);
QMetaObject* Sonnet__ConfigWidget_MetaObject(const Sonnet__ConfigWidget* self);
void* Sonnet__ConfigWidget_Metacast(Sonnet__ConfigWidget* self, const char* param1);
int Sonnet__ConfigWidget_Metacall(Sonnet__ConfigWidget* self, int param1, int param2, void** param3);
bool Sonnet__ConfigWidget_BackgroundCheckingButtonShown(const Sonnet__ConfigWidget* self);
void Sonnet__ConfigWidget_SetLanguage(Sonnet__ConfigWidget* self, const libqt_string language);
libqt_string Sonnet__ConfigWidget_Language(const Sonnet__ConfigWidget* self);
void Sonnet__ConfigWidget_Save(Sonnet__ConfigWidget* self);
void Sonnet__ConfigWidget_SetBackgroundCheckingButtonShown(Sonnet__ConfigWidget* self, bool backgroundCheckingButtonShown);
void Sonnet__ConfigWidget_SlotDefault(Sonnet__ConfigWidget* self);
void Sonnet__ConfigWidget_ConfigChanged(Sonnet__ConfigWidget* self);
void Sonnet__ConfigWidget_Connect_ConfigChanged(Sonnet__ConfigWidget* self, intptr_t slot);
void Sonnet__ConfigWidget_OnMetaObject(const Sonnet__ConfigWidget* self, intptr_t slot);
QMetaObject* Sonnet__ConfigWidget_SuperMetaObject(const Sonnet__ConfigWidget* self);
void Sonnet__ConfigWidget_OnMetacast(Sonnet__ConfigWidget* self, intptr_t slot);
void* Sonnet__ConfigWidget_SuperMetacast(Sonnet__ConfigWidget* self, const char* param1);
void Sonnet__ConfigWidget_OnMetacall(Sonnet__ConfigWidget* self, intptr_t slot);
int Sonnet__ConfigWidget_SuperMetacall(Sonnet__ConfigWidget* self, int param1, int param2, void** param3);
int Sonnet__ConfigWidget_DevType(const Sonnet__ConfigWidget* self);
void Sonnet__ConfigWidget_OnDevType(const Sonnet__ConfigWidget* self, intptr_t slot);
int Sonnet__ConfigWidget_SuperDevType(const Sonnet__ConfigWidget* self);
void Sonnet__ConfigWidget_SetVisible(Sonnet__ConfigWidget* self, bool visible);
void Sonnet__ConfigWidget_OnSetVisible(Sonnet__ConfigWidget* self, intptr_t slot);
void Sonnet__ConfigWidget_SuperSetVisible(Sonnet__ConfigWidget* self, bool visible);
QSize* Sonnet__ConfigWidget_SizeHint(const Sonnet__ConfigWidget* self);
void Sonnet__ConfigWidget_OnSizeHint(const Sonnet__ConfigWidget* self, intptr_t slot);
QSize* Sonnet__ConfigWidget_SuperSizeHint(const Sonnet__ConfigWidget* self);
QSize* Sonnet__ConfigWidget_MinimumSizeHint(const Sonnet__ConfigWidget* self);
void Sonnet__ConfigWidget_OnMinimumSizeHint(const Sonnet__ConfigWidget* self, intptr_t slot);
QSize* Sonnet__ConfigWidget_SuperMinimumSizeHint(const Sonnet__ConfigWidget* self);
int Sonnet__ConfigWidget_HeightForWidth(const Sonnet__ConfigWidget* self, int param1);
void Sonnet__ConfigWidget_OnHeightForWidth(const Sonnet__ConfigWidget* self, intptr_t slot);
int Sonnet__ConfigWidget_SuperHeightForWidth(const Sonnet__ConfigWidget* self, int param1);
bool Sonnet__ConfigWidget_HasHeightForWidth(const Sonnet__ConfigWidget* self);
void Sonnet__ConfigWidget_OnHasHeightForWidth(const Sonnet__ConfigWidget* self, intptr_t slot);
bool Sonnet__ConfigWidget_SuperHasHeightForWidth(const Sonnet__ConfigWidget* self);
QPaintEngine* Sonnet__ConfigWidget_PaintEngine(const Sonnet__ConfigWidget* self);
void Sonnet__ConfigWidget_OnPaintEngine(const Sonnet__ConfigWidget* self, intptr_t slot);
QPaintEngine* Sonnet__ConfigWidget_SuperPaintEngine(const Sonnet__ConfigWidget* self);
bool Sonnet__ConfigWidget_Event(Sonnet__ConfigWidget* self, QEvent* event);
void Sonnet__ConfigWidget_OnEvent(Sonnet__ConfigWidget* self, intptr_t slot);
bool Sonnet__ConfigWidget_SuperEvent(Sonnet__ConfigWidget* self, QEvent* event);
void Sonnet__ConfigWidget_MousePressEvent(Sonnet__ConfigWidget* self, QMouseEvent* event);
void Sonnet__ConfigWidget_OnMousePressEvent(Sonnet__ConfigWidget* self, intptr_t slot);
void Sonnet__ConfigWidget_SuperMousePressEvent(Sonnet__ConfigWidget* self, QMouseEvent* event);
void Sonnet__ConfigWidget_MouseReleaseEvent(Sonnet__ConfigWidget* self, QMouseEvent* event);
void Sonnet__ConfigWidget_OnMouseReleaseEvent(Sonnet__ConfigWidget* self, intptr_t slot);
void Sonnet__ConfigWidget_SuperMouseReleaseEvent(Sonnet__ConfigWidget* self, QMouseEvent* event);
void Sonnet__ConfigWidget_MouseDoubleClickEvent(Sonnet__ConfigWidget* self, QMouseEvent* event);
void Sonnet__ConfigWidget_OnMouseDoubleClickEvent(Sonnet__ConfigWidget* self, intptr_t slot);
void Sonnet__ConfigWidget_SuperMouseDoubleClickEvent(Sonnet__ConfigWidget* self, QMouseEvent* event);
void Sonnet__ConfigWidget_MouseMoveEvent(Sonnet__ConfigWidget* self, QMouseEvent* event);
void Sonnet__ConfigWidget_OnMouseMoveEvent(Sonnet__ConfigWidget* self, intptr_t slot);
void Sonnet__ConfigWidget_SuperMouseMoveEvent(Sonnet__ConfigWidget* self, QMouseEvent* event);
void Sonnet__ConfigWidget_WheelEvent(Sonnet__ConfigWidget* self, QWheelEvent* event);
void Sonnet__ConfigWidget_OnWheelEvent(Sonnet__ConfigWidget* self, intptr_t slot);
void Sonnet__ConfigWidget_SuperWheelEvent(Sonnet__ConfigWidget* self, QWheelEvent* event);
void Sonnet__ConfigWidget_KeyPressEvent(Sonnet__ConfigWidget* self, QKeyEvent* event);
void Sonnet__ConfigWidget_OnKeyPressEvent(Sonnet__ConfigWidget* self, intptr_t slot);
void Sonnet__ConfigWidget_SuperKeyPressEvent(Sonnet__ConfigWidget* self, QKeyEvent* event);
void Sonnet__ConfigWidget_KeyReleaseEvent(Sonnet__ConfigWidget* self, QKeyEvent* event);
void Sonnet__ConfigWidget_OnKeyReleaseEvent(Sonnet__ConfigWidget* self, intptr_t slot);
void Sonnet__ConfigWidget_SuperKeyReleaseEvent(Sonnet__ConfigWidget* self, QKeyEvent* event);
void Sonnet__ConfigWidget_FocusInEvent(Sonnet__ConfigWidget* self, QFocusEvent* event);
void Sonnet__ConfigWidget_OnFocusInEvent(Sonnet__ConfigWidget* self, intptr_t slot);
void Sonnet__ConfigWidget_SuperFocusInEvent(Sonnet__ConfigWidget* self, QFocusEvent* event);
void Sonnet__ConfigWidget_FocusOutEvent(Sonnet__ConfigWidget* self, QFocusEvent* event);
void Sonnet__ConfigWidget_OnFocusOutEvent(Sonnet__ConfigWidget* self, intptr_t slot);
void Sonnet__ConfigWidget_SuperFocusOutEvent(Sonnet__ConfigWidget* self, QFocusEvent* event);
void Sonnet__ConfigWidget_EnterEvent(Sonnet__ConfigWidget* self, QEnterEvent* event);
void Sonnet__ConfigWidget_OnEnterEvent(Sonnet__ConfigWidget* self, intptr_t slot);
void Sonnet__ConfigWidget_SuperEnterEvent(Sonnet__ConfigWidget* self, QEnterEvent* event);
void Sonnet__ConfigWidget_LeaveEvent(Sonnet__ConfigWidget* self, QEvent* event);
void Sonnet__ConfigWidget_OnLeaveEvent(Sonnet__ConfigWidget* self, intptr_t slot);
void Sonnet__ConfigWidget_SuperLeaveEvent(Sonnet__ConfigWidget* self, QEvent* event);
void Sonnet__ConfigWidget_PaintEvent(Sonnet__ConfigWidget* self, QPaintEvent* event);
void Sonnet__ConfigWidget_OnPaintEvent(Sonnet__ConfigWidget* self, intptr_t slot);
void Sonnet__ConfigWidget_SuperPaintEvent(Sonnet__ConfigWidget* self, QPaintEvent* event);
void Sonnet__ConfigWidget_MoveEvent(Sonnet__ConfigWidget* self, QMoveEvent* event);
void Sonnet__ConfigWidget_OnMoveEvent(Sonnet__ConfigWidget* self, intptr_t slot);
void Sonnet__ConfigWidget_SuperMoveEvent(Sonnet__ConfigWidget* self, QMoveEvent* event);
void Sonnet__ConfigWidget_ResizeEvent(Sonnet__ConfigWidget* self, QResizeEvent* event);
void Sonnet__ConfigWidget_OnResizeEvent(Sonnet__ConfigWidget* self, intptr_t slot);
void Sonnet__ConfigWidget_SuperResizeEvent(Sonnet__ConfigWidget* self, QResizeEvent* event);
void Sonnet__ConfigWidget_CloseEvent(Sonnet__ConfigWidget* self, QCloseEvent* event);
void Sonnet__ConfigWidget_OnCloseEvent(Sonnet__ConfigWidget* self, intptr_t slot);
void Sonnet__ConfigWidget_SuperCloseEvent(Sonnet__ConfigWidget* self, QCloseEvent* event);
void Sonnet__ConfigWidget_ContextMenuEvent(Sonnet__ConfigWidget* self, QContextMenuEvent* event);
void Sonnet__ConfigWidget_OnContextMenuEvent(Sonnet__ConfigWidget* self, intptr_t slot);
void Sonnet__ConfigWidget_SuperContextMenuEvent(Sonnet__ConfigWidget* self, QContextMenuEvent* event);
void Sonnet__ConfigWidget_TabletEvent(Sonnet__ConfigWidget* self, QTabletEvent* event);
void Sonnet__ConfigWidget_OnTabletEvent(Sonnet__ConfigWidget* self, intptr_t slot);
void Sonnet__ConfigWidget_SuperTabletEvent(Sonnet__ConfigWidget* self, QTabletEvent* event);
void Sonnet__ConfigWidget_ActionEvent(Sonnet__ConfigWidget* self, QActionEvent* event);
void Sonnet__ConfigWidget_OnActionEvent(Sonnet__ConfigWidget* self, intptr_t slot);
void Sonnet__ConfigWidget_SuperActionEvent(Sonnet__ConfigWidget* self, QActionEvent* event);
void Sonnet__ConfigWidget_DragEnterEvent(Sonnet__ConfigWidget* self, QDragEnterEvent* event);
void Sonnet__ConfigWidget_OnDragEnterEvent(Sonnet__ConfigWidget* self, intptr_t slot);
void Sonnet__ConfigWidget_SuperDragEnterEvent(Sonnet__ConfigWidget* self, QDragEnterEvent* event);
void Sonnet__ConfigWidget_DragMoveEvent(Sonnet__ConfigWidget* self, QDragMoveEvent* event);
void Sonnet__ConfigWidget_OnDragMoveEvent(Sonnet__ConfigWidget* self, intptr_t slot);
void Sonnet__ConfigWidget_SuperDragMoveEvent(Sonnet__ConfigWidget* self, QDragMoveEvent* event);
void Sonnet__ConfigWidget_DragLeaveEvent(Sonnet__ConfigWidget* self, QDragLeaveEvent* event);
void Sonnet__ConfigWidget_OnDragLeaveEvent(Sonnet__ConfigWidget* self, intptr_t slot);
void Sonnet__ConfigWidget_SuperDragLeaveEvent(Sonnet__ConfigWidget* self, QDragLeaveEvent* event);
void Sonnet__ConfigWidget_DropEvent(Sonnet__ConfigWidget* self, QDropEvent* event);
void Sonnet__ConfigWidget_OnDropEvent(Sonnet__ConfigWidget* self, intptr_t slot);
void Sonnet__ConfigWidget_SuperDropEvent(Sonnet__ConfigWidget* self, QDropEvent* event);
void Sonnet__ConfigWidget_ShowEvent(Sonnet__ConfigWidget* self, QShowEvent* event);
void Sonnet__ConfigWidget_OnShowEvent(Sonnet__ConfigWidget* self, intptr_t slot);
void Sonnet__ConfigWidget_SuperShowEvent(Sonnet__ConfigWidget* self, QShowEvent* event);
void Sonnet__ConfigWidget_HideEvent(Sonnet__ConfigWidget* self, QHideEvent* event);
void Sonnet__ConfigWidget_OnHideEvent(Sonnet__ConfigWidget* self, intptr_t slot);
void Sonnet__ConfigWidget_SuperHideEvent(Sonnet__ConfigWidget* self, QHideEvent* event);
bool Sonnet__ConfigWidget_NativeEvent(Sonnet__ConfigWidget* self, const libqt_string eventType, void* message, intptr_t* result);
void Sonnet__ConfigWidget_OnNativeEvent(Sonnet__ConfigWidget* self, intptr_t slot);
bool Sonnet__ConfigWidget_SuperNativeEvent(Sonnet__ConfigWidget* self, const libqt_string eventType, void* message, intptr_t* result);
void Sonnet__ConfigWidget_ChangeEvent(Sonnet__ConfigWidget* self, QEvent* param1);
void Sonnet__ConfigWidget_OnChangeEvent(Sonnet__ConfigWidget* self, intptr_t slot);
void Sonnet__ConfigWidget_SuperChangeEvent(Sonnet__ConfigWidget* self, QEvent* param1);
int Sonnet__ConfigWidget_Metric(const Sonnet__ConfigWidget* self, int param1);
void Sonnet__ConfigWidget_OnMetric(const Sonnet__ConfigWidget* self, intptr_t slot);
int Sonnet__ConfigWidget_SuperMetric(const Sonnet__ConfigWidget* self, int param1);
void Sonnet__ConfigWidget_InitPainter(const Sonnet__ConfigWidget* self, QPainter* painter);
void Sonnet__ConfigWidget_OnInitPainter(const Sonnet__ConfigWidget* self, intptr_t slot);
void Sonnet__ConfigWidget_SuperInitPainter(const Sonnet__ConfigWidget* self, QPainter* painter);
QPaintDevice* Sonnet__ConfigWidget_Redirected(const Sonnet__ConfigWidget* self, QPoint* offset);
void Sonnet__ConfigWidget_OnRedirected(const Sonnet__ConfigWidget* self, intptr_t slot);
QPaintDevice* Sonnet__ConfigWidget_SuperRedirected(const Sonnet__ConfigWidget* self, QPoint* offset);
QPainter* Sonnet__ConfigWidget_SharedPainter(const Sonnet__ConfigWidget* self);
void Sonnet__ConfigWidget_OnSharedPainter(const Sonnet__ConfigWidget* self, intptr_t slot);
QPainter* Sonnet__ConfigWidget_SuperSharedPainter(const Sonnet__ConfigWidget* self);
void Sonnet__ConfigWidget_InputMethodEvent(Sonnet__ConfigWidget* self, QInputMethodEvent* param1);
void Sonnet__ConfigWidget_OnInputMethodEvent(Sonnet__ConfigWidget* self, intptr_t slot);
void Sonnet__ConfigWidget_SuperInputMethodEvent(Sonnet__ConfigWidget* self, QInputMethodEvent* param1);
QVariant* Sonnet__ConfigWidget_InputMethodQuery(const Sonnet__ConfigWidget* self, int param1);
void Sonnet__ConfigWidget_OnInputMethodQuery(const Sonnet__ConfigWidget* self, intptr_t slot);
QVariant* Sonnet__ConfigWidget_SuperInputMethodQuery(const Sonnet__ConfigWidget* self, int param1);
bool Sonnet__ConfigWidget_FocusNextPrevChild(Sonnet__ConfigWidget* self, bool next);
void Sonnet__ConfigWidget_OnFocusNextPrevChild(Sonnet__ConfigWidget* self, intptr_t slot);
bool Sonnet__ConfigWidget_SuperFocusNextPrevChild(Sonnet__ConfigWidget* self, bool next);
bool Sonnet__ConfigWidget_EventFilter(Sonnet__ConfigWidget* self, QObject* watched, QEvent* event);
void Sonnet__ConfigWidget_OnEventFilter(Sonnet__ConfigWidget* self, intptr_t slot);
bool Sonnet__ConfigWidget_SuperEventFilter(Sonnet__ConfigWidget* self, QObject* watched, QEvent* event);
void Sonnet__ConfigWidget_TimerEvent(Sonnet__ConfigWidget* self, QTimerEvent* event);
void Sonnet__ConfigWidget_OnTimerEvent(Sonnet__ConfigWidget* self, intptr_t slot);
void Sonnet__ConfigWidget_SuperTimerEvent(Sonnet__ConfigWidget* self, QTimerEvent* event);
void Sonnet__ConfigWidget_ChildEvent(Sonnet__ConfigWidget* self, QChildEvent* event);
void Sonnet__ConfigWidget_OnChildEvent(Sonnet__ConfigWidget* self, intptr_t slot);
void Sonnet__ConfigWidget_SuperChildEvent(Sonnet__ConfigWidget* self, QChildEvent* event);
void Sonnet__ConfigWidget_CustomEvent(Sonnet__ConfigWidget* self, QEvent* event);
void Sonnet__ConfigWidget_OnCustomEvent(Sonnet__ConfigWidget* self, intptr_t slot);
void Sonnet__ConfigWidget_SuperCustomEvent(Sonnet__ConfigWidget* self, QEvent* event);
void Sonnet__ConfigWidget_ConnectNotify(Sonnet__ConfigWidget* self, const QMetaMethod* signal);
void Sonnet__ConfigWidget_OnConnectNotify(Sonnet__ConfigWidget* self, intptr_t slot);
void Sonnet__ConfigWidget_SuperConnectNotify(Sonnet__ConfigWidget* self, const QMetaMethod* signal);
void Sonnet__ConfigWidget_DisconnectNotify(Sonnet__ConfigWidget* self, const QMetaMethod* signal);
void Sonnet__ConfigWidget_OnDisconnectNotify(Sonnet__ConfigWidget* self, intptr_t slot);
void Sonnet__ConfigWidget_SuperDisconnectNotify(Sonnet__ConfigWidget* self, const QMetaMethod* signal);
void Sonnet__ConfigWidget_SlotIgnoreWordRemoved(Sonnet__ConfigWidget* self);
void Sonnet__ConfigWidget_OnSlotIgnoreWordRemoved(Sonnet__ConfigWidget* self, intptr_t slot);
void Sonnet__ConfigWidget_SuperSlotIgnoreWordRemoved(Sonnet__ConfigWidget* self);
void Sonnet__ConfigWidget_SlotIgnoreWordAdded(Sonnet__ConfigWidget* self);
void Sonnet__ConfigWidget_OnSlotIgnoreWordAdded(Sonnet__ConfigWidget* self, intptr_t slot);
void Sonnet__ConfigWidget_SuperSlotIgnoreWordAdded(Sonnet__ConfigWidget* self);
void Sonnet__ConfigWidget_UpdateMicroFocus(Sonnet__ConfigWidget* self);
void Sonnet__ConfigWidget_OnUpdateMicroFocus(Sonnet__ConfigWidget* self, intptr_t slot);
void Sonnet__ConfigWidget_SuperUpdateMicroFocus(Sonnet__ConfigWidget* self);
void Sonnet__ConfigWidget_Create(Sonnet__ConfigWidget* self);
void Sonnet__ConfigWidget_OnCreate(Sonnet__ConfigWidget* self, intptr_t slot);
void Sonnet__ConfigWidget_SuperCreate(Sonnet__ConfigWidget* self);
void Sonnet__ConfigWidget_Destroy(Sonnet__ConfigWidget* self);
void Sonnet__ConfigWidget_OnDestroy(Sonnet__ConfigWidget* self, intptr_t slot);
void Sonnet__ConfigWidget_SuperDestroy(Sonnet__ConfigWidget* self);
bool Sonnet__ConfigWidget_FocusNextChild(Sonnet__ConfigWidget* self);
void Sonnet__ConfigWidget_OnFocusNextChild(Sonnet__ConfigWidget* self, intptr_t slot);
bool Sonnet__ConfigWidget_SuperFocusNextChild(Sonnet__ConfigWidget* self);
bool Sonnet__ConfigWidget_FocusPreviousChild(Sonnet__ConfigWidget* self);
void Sonnet__ConfigWidget_OnFocusPreviousChild(Sonnet__ConfigWidget* self, intptr_t slot);
bool Sonnet__ConfigWidget_SuperFocusPreviousChild(Sonnet__ConfigWidget* self);
QObject* Sonnet__ConfigWidget_Sender(const Sonnet__ConfigWidget* self);
void Sonnet__ConfigWidget_OnSender(const Sonnet__ConfigWidget* self, intptr_t slot);
QObject* Sonnet__ConfigWidget_SuperSender(const Sonnet__ConfigWidget* self);
int Sonnet__ConfigWidget_SenderSignalIndex(const Sonnet__ConfigWidget* self);
void Sonnet__ConfigWidget_OnSenderSignalIndex(const Sonnet__ConfigWidget* self, intptr_t slot);
int Sonnet__ConfigWidget_SuperSenderSignalIndex(const Sonnet__ConfigWidget* self);
int Sonnet__ConfigWidget_Receivers(const Sonnet__ConfigWidget* self, const char* signal);
void Sonnet__ConfigWidget_OnReceivers(const Sonnet__ConfigWidget* self, intptr_t slot);
int Sonnet__ConfigWidget_SuperReceivers(const Sonnet__ConfigWidget* self, const char* signal);
bool Sonnet__ConfigWidget_IsSignalConnected(const Sonnet__ConfigWidget* self, const QMetaMethod* signal);
void Sonnet__ConfigWidget_OnIsSignalConnected(const Sonnet__ConfigWidget* self, intptr_t slot);
bool Sonnet__ConfigWidget_SuperIsSignalConnected(const Sonnet__ConfigWidget* self, const QMetaMethod* signal);
double Sonnet__ConfigWidget_GetDecodedMetricF(const Sonnet__ConfigWidget* self, int metricA, int metricB);
void Sonnet__ConfigWidget_OnGetDecodedMetricF(const Sonnet__ConfigWidget* self, intptr_t slot);
double Sonnet__ConfigWidget_SuperGetDecodedMetricF(const Sonnet__ConfigWidget* self, int metricA, int metricB);
void Sonnet__ConfigWidget_Delete(Sonnet__ConfigWidget* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
