#pragma once
#ifndef SRC_EXTRAS_KXMLGUIC_LIBKSHORTCUTWIDGET_H
#define SRC_EXTRAS_KXMLGUIC_LIBKSHORTCUTWIDGET_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KActionCollection KActionCollection;
typedef struct KShortcutWidget KShortcutWidget;
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
typedef struct QKeySequence QKeySequence;
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

KShortcutWidget* KShortcutWidget_new(QWidget* parent);
KShortcutWidget* KShortcutWidget_new2();
QMetaObject* KShortcutWidget_MetaObject(const KShortcutWidget* self);
void* KShortcutWidget_Metacast(KShortcutWidget* self, const char* param1);
int KShortcutWidget_Metacall(KShortcutWidget* self, int param1, int param2, void** param3);
void KShortcutWidget_SetModifierlessAllowed(KShortcutWidget* self, bool allow);
bool KShortcutWidget_IsModifierlessAllowed(KShortcutWidget* self);
void KShortcutWidget_SetClearButtonsShown(KShortcutWidget* self, bool show);
libqt_list /* of QKeySequence* */ KShortcutWidget_Shortcut(const KShortcutWidget* self);
void KShortcutWidget_SetCheckActionCollections(KShortcutWidget* self, const libqt_list /* of KActionCollection* */ actionCollections);
void KShortcutWidget_ShortcutChanged(KShortcutWidget* self, const libqt_list /* of QKeySequence* */ cut);
void KShortcutWidget_Connect_ShortcutChanged(KShortcutWidget* self, intptr_t slot);
void KShortcutWidget_SetShortcut(KShortcutWidget* self, const libqt_list /* of QKeySequence* */ cut);
void KShortcutWidget_ClearShortcut(KShortcutWidget* self);
void KShortcutWidget_ApplyStealShortcut(KShortcutWidget* self);
void KShortcutWidget_OnMetaObject(const KShortcutWidget* self, intptr_t slot);
QMetaObject* KShortcutWidget_SuperMetaObject(const KShortcutWidget* self);
void KShortcutWidget_OnMetacast(KShortcutWidget* self, intptr_t slot);
void* KShortcutWidget_SuperMetacast(KShortcutWidget* self, const char* param1);
void KShortcutWidget_OnMetacall(KShortcutWidget* self, intptr_t slot);
int KShortcutWidget_SuperMetacall(KShortcutWidget* self, int param1, int param2, void** param3);
int KShortcutWidget_DevType(const KShortcutWidget* self);
void KShortcutWidget_OnDevType(const KShortcutWidget* self, intptr_t slot);
int KShortcutWidget_SuperDevType(const KShortcutWidget* self);
void KShortcutWidget_SetVisible(KShortcutWidget* self, bool visible);
void KShortcutWidget_OnSetVisible(KShortcutWidget* self, intptr_t slot);
void KShortcutWidget_SuperSetVisible(KShortcutWidget* self, bool visible);
QSize* KShortcutWidget_SizeHint(const KShortcutWidget* self);
void KShortcutWidget_OnSizeHint(const KShortcutWidget* self, intptr_t slot);
QSize* KShortcutWidget_SuperSizeHint(const KShortcutWidget* self);
QSize* KShortcutWidget_MinimumSizeHint(const KShortcutWidget* self);
void KShortcutWidget_OnMinimumSizeHint(const KShortcutWidget* self, intptr_t slot);
QSize* KShortcutWidget_SuperMinimumSizeHint(const KShortcutWidget* self);
int KShortcutWidget_HeightForWidth(const KShortcutWidget* self, int param1);
void KShortcutWidget_OnHeightForWidth(const KShortcutWidget* self, intptr_t slot);
int KShortcutWidget_SuperHeightForWidth(const KShortcutWidget* self, int param1);
bool KShortcutWidget_HasHeightForWidth(const KShortcutWidget* self);
void KShortcutWidget_OnHasHeightForWidth(const KShortcutWidget* self, intptr_t slot);
bool KShortcutWidget_SuperHasHeightForWidth(const KShortcutWidget* self);
QPaintEngine* KShortcutWidget_PaintEngine(const KShortcutWidget* self);
void KShortcutWidget_OnPaintEngine(const KShortcutWidget* self, intptr_t slot);
QPaintEngine* KShortcutWidget_SuperPaintEngine(const KShortcutWidget* self);
bool KShortcutWidget_Event(KShortcutWidget* self, QEvent* event);
void KShortcutWidget_OnEvent(KShortcutWidget* self, intptr_t slot);
bool KShortcutWidget_SuperEvent(KShortcutWidget* self, QEvent* event);
void KShortcutWidget_MousePressEvent(KShortcutWidget* self, QMouseEvent* event);
void KShortcutWidget_OnMousePressEvent(KShortcutWidget* self, intptr_t slot);
void KShortcutWidget_SuperMousePressEvent(KShortcutWidget* self, QMouseEvent* event);
void KShortcutWidget_MouseReleaseEvent(KShortcutWidget* self, QMouseEvent* event);
void KShortcutWidget_OnMouseReleaseEvent(KShortcutWidget* self, intptr_t slot);
void KShortcutWidget_SuperMouseReleaseEvent(KShortcutWidget* self, QMouseEvent* event);
void KShortcutWidget_MouseDoubleClickEvent(KShortcutWidget* self, QMouseEvent* event);
void KShortcutWidget_OnMouseDoubleClickEvent(KShortcutWidget* self, intptr_t slot);
void KShortcutWidget_SuperMouseDoubleClickEvent(KShortcutWidget* self, QMouseEvent* event);
void KShortcutWidget_MouseMoveEvent(KShortcutWidget* self, QMouseEvent* event);
void KShortcutWidget_OnMouseMoveEvent(KShortcutWidget* self, intptr_t slot);
void KShortcutWidget_SuperMouseMoveEvent(KShortcutWidget* self, QMouseEvent* event);
void KShortcutWidget_WheelEvent(KShortcutWidget* self, QWheelEvent* event);
void KShortcutWidget_OnWheelEvent(KShortcutWidget* self, intptr_t slot);
void KShortcutWidget_SuperWheelEvent(KShortcutWidget* self, QWheelEvent* event);
void KShortcutWidget_KeyPressEvent(KShortcutWidget* self, QKeyEvent* event);
void KShortcutWidget_OnKeyPressEvent(KShortcutWidget* self, intptr_t slot);
void KShortcutWidget_SuperKeyPressEvent(KShortcutWidget* self, QKeyEvent* event);
void KShortcutWidget_KeyReleaseEvent(KShortcutWidget* self, QKeyEvent* event);
void KShortcutWidget_OnKeyReleaseEvent(KShortcutWidget* self, intptr_t slot);
void KShortcutWidget_SuperKeyReleaseEvent(KShortcutWidget* self, QKeyEvent* event);
void KShortcutWidget_FocusInEvent(KShortcutWidget* self, QFocusEvent* event);
void KShortcutWidget_OnFocusInEvent(KShortcutWidget* self, intptr_t slot);
void KShortcutWidget_SuperFocusInEvent(KShortcutWidget* self, QFocusEvent* event);
void KShortcutWidget_FocusOutEvent(KShortcutWidget* self, QFocusEvent* event);
void KShortcutWidget_OnFocusOutEvent(KShortcutWidget* self, intptr_t slot);
void KShortcutWidget_SuperFocusOutEvent(KShortcutWidget* self, QFocusEvent* event);
void KShortcutWidget_EnterEvent(KShortcutWidget* self, QEnterEvent* event);
void KShortcutWidget_OnEnterEvent(KShortcutWidget* self, intptr_t slot);
void KShortcutWidget_SuperEnterEvent(KShortcutWidget* self, QEnterEvent* event);
void KShortcutWidget_LeaveEvent(KShortcutWidget* self, QEvent* event);
void KShortcutWidget_OnLeaveEvent(KShortcutWidget* self, intptr_t slot);
void KShortcutWidget_SuperLeaveEvent(KShortcutWidget* self, QEvent* event);
void KShortcutWidget_PaintEvent(KShortcutWidget* self, QPaintEvent* event);
void KShortcutWidget_OnPaintEvent(KShortcutWidget* self, intptr_t slot);
void KShortcutWidget_SuperPaintEvent(KShortcutWidget* self, QPaintEvent* event);
void KShortcutWidget_MoveEvent(KShortcutWidget* self, QMoveEvent* event);
void KShortcutWidget_OnMoveEvent(KShortcutWidget* self, intptr_t slot);
void KShortcutWidget_SuperMoveEvent(KShortcutWidget* self, QMoveEvent* event);
void KShortcutWidget_ResizeEvent(KShortcutWidget* self, QResizeEvent* event);
void KShortcutWidget_OnResizeEvent(KShortcutWidget* self, intptr_t slot);
void KShortcutWidget_SuperResizeEvent(KShortcutWidget* self, QResizeEvent* event);
void KShortcutWidget_CloseEvent(KShortcutWidget* self, QCloseEvent* event);
void KShortcutWidget_OnCloseEvent(KShortcutWidget* self, intptr_t slot);
void KShortcutWidget_SuperCloseEvent(KShortcutWidget* self, QCloseEvent* event);
void KShortcutWidget_ContextMenuEvent(KShortcutWidget* self, QContextMenuEvent* event);
void KShortcutWidget_OnContextMenuEvent(KShortcutWidget* self, intptr_t slot);
void KShortcutWidget_SuperContextMenuEvent(KShortcutWidget* self, QContextMenuEvent* event);
void KShortcutWidget_TabletEvent(KShortcutWidget* self, QTabletEvent* event);
void KShortcutWidget_OnTabletEvent(KShortcutWidget* self, intptr_t slot);
void KShortcutWidget_SuperTabletEvent(KShortcutWidget* self, QTabletEvent* event);
void KShortcutWidget_ActionEvent(KShortcutWidget* self, QActionEvent* event);
void KShortcutWidget_OnActionEvent(KShortcutWidget* self, intptr_t slot);
void KShortcutWidget_SuperActionEvent(KShortcutWidget* self, QActionEvent* event);
void KShortcutWidget_DragEnterEvent(KShortcutWidget* self, QDragEnterEvent* event);
void KShortcutWidget_OnDragEnterEvent(KShortcutWidget* self, intptr_t slot);
void KShortcutWidget_SuperDragEnterEvent(KShortcutWidget* self, QDragEnterEvent* event);
void KShortcutWidget_DragMoveEvent(KShortcutWidget* self, QDragMoveEvent* event);
void KShortcutWidget_OnDragMoveEvent(KShortcutWidget* self, intptr_t slot);
void KShortcutWidget_SuperDragMoveEvent(KShortcutWidget* self, QDragMoveEvent* event);
void KShortcutWidget_DragLeaveEvent(KShortcutWidget* self, QDragLeaveEvent* event);
void KShortcutWidget_OnDragLeaveEvent(KShortcutWidget* self, intptr_t slot);
void KShortcutWidget_SuperDragLeaveEvent(KShortcutWidget* self, QDragLeaveEvent* event);
void KShortcutWidget_DropEvent(KShortcutWidget* self, QDropEvent* event);
void KShortcutWidget_OnDropEvent(KShortcutWidget* self, intptr_t slot);
void KShortcutWidget_SuperDropEvent(KShortcutWidget* self, QDropEvent* event);
void KShortcutWidget_ShowEvent(KShortcutWidget* self, QShowEvent* event);
void KShortcutWidget_OnShowEvent(KShortcutWidget* self, intptr_t slot);
void KShortcutWidget_SuperShowEvent(KShortcutWidget* self, QShowEvent* event);
void KShortcutWidget_HideEvent(KShortcutWidget* self, QHideEvent* event);
void KShortcutWidget_OnHideEvent(KShortcutWidget* self, intptr_t slot);
void KShortcutWidget_SuperHideEvent(KShortcutWidget* self, QHideEvent* event);
bool KShortcutWidget_NativeEvent(KShortcutWidget* self, const libqt_string eventType, void* message, intptr_t* result);
void KShortcutWidget_OnNativeEvent(KShortcutWidget* self, intptr_t slot);
bool KShortcutWidget_SuperNativeEvent(KShortcutWidget* self, const libqt_string eventType, void* message, intptr_t* result);
void KShortcutWidget_ChangeEvent(KShortcutWidget* self, QEvent* param1);
void KShortcutWidget_OnChangeEvent(KShortcutWidget* self, intptr_t slot);
void KShortcutWidget_SuperChangeEvent(KShortcutWidget* self, QEvent* param1);
int KShortcutWidget_Metric(const KShortcutWidget* self, int param1);
void KShortcutWidget_OnMetric(const KShortcutWidget* self, intptr_t slot);
int KShortcutWidget_SuperMetric(const KShortcutWidget* self, int param1);
void KShortcutWidget_InitPainter(const KShortcutWidget* self, QPainter* painter);
void KShortcutWidget_OnInitPainter(const KShortcutWidget* self, intptr_t slot);
void KShortcutWidget_SuperInitPainter(const KShortcutWidget* self, QPainter* painter);
QPaintDevice* KShortcutWidget_Redirected(const KShortcutWidget* self, QPoint* offset);
void KShortcutWidget_OnRedirected(const KShortcutWidget* self, intptr_t slot);
QPaintDevice* KShortcutWidget_SuperRedirected(const KShortcutWidget* self, QPoint* offset);
QPainter* KShortcutWidget_SharedPainter(const KShortcutWidget* self);
void KShortcutWidget_OnSharedPainter(const KShortcutWidget* self, intptr_t slot);
QPainter* KShortcutWidget_SuperSharedPainter(const KShortcutWidget* self);
void KShortcutWidget_InputMethodEvent(KShortcutWidget* self, QInputMethodEvent* param1);
void KShortcutWidget_OnInputMethodEvent(KShortcutWidget* self, intptr_t slot);
void KShortcutWidget_SuperInputMethodEvent(KShortcutWidget* self, QInputMethodEvent* param1);
QVariant* KShortcutWidget_InputMethodQuery(const KShortcutWidget* self, int param1);
void KShortcutWidget_OnInputMethodQuery(const KShortcutWidget* self, intptr_t slot);
QVariant* KShortcutWidget_SuperInputMethodQuery(const KShortcutWidget* self, int param1);
bool KShortcutWidget_FocusNextPrevChild(KShortcutWidget* self, bool next);
void KShortcutWidget_OnFocusNextPrevChild(KShortcutWidget* self, intptr_t slot);
bool KShortcutWidget_SuperFocusNextPrevChild(KShortcutWidget* self, bool next);
bool KShortcutWidget_EventFilter(KShortcutWidget* self, QObject* watched, QEvent* event);
void KShortcutWidget_OnEventFilter(KShortcutWidget* self, intptr_t slot);
bool KShortcutWidget_SuperEventFilter(KShortcutWidget* self, QObject* watched, QEvent* event);
void KShortcutWidget_TimerEvent(KShortcutWidget* self, QTimerEvent* event);
void KShortcutWidget_OnTimerEvent(KShortcutWidget* self, intptr_t slot);
void KShortcutWidget_SuperTimerEvent(KShortcutWidget* self, QTimerEvent* event);
void KShortcutWidget_ChildEvent(KShortcutWidget* self, QChildEvent* event);
void KShortcutWidget_OnChildEvent(KShortcutWidget* self, intptr_t slot);
void KShortcutWidget_SuperChildEvent(KShortcutWidget* self, QChildEvent* event);
void KShortcutWidget_CustomEvent(KShortcutWidget* self, QEvent* event);
void KShortcutWidget_OnCustomEvent(KShortcutWidget* self, intptr_t slot);
void KShortcutWidget_SuperCustomEvent(KShortcutWidget* self, QEvent* event);
void KShortcutWidget_ConnectNotify(KShortcutWidget* self, const QMetaMethod* signal);
void KShortcutWidget_OnConnectNotify(KShortcutWidget* self, intptr_t slot);
void KShortcutWidget_SuperConnectNotify(KShortcutWidget* self, const QMetaMethod* signal);
void KShortcutWidget_DisconnectNotify(KShortcutWidget* self, const QMetaMethod* signal);
void KShortcutWidget_OnDisconnectNotify(KShortcutWidget* self, intptr_t slot);
void KShortcutWidget_SuperDisconnectNotify(KShortcutWidget* self, const QMetaMethod* signal);
void KShortcutWidget_UpdateMicroFocus(KShortcutWidget* self);
void KShortcutWidget_OnUpdateMicroFocus(KShortcutWidget* self, intptr_t slot);
void KShortcutWidget_SuperUpdateMicroFocus(KShortcutWidget* self);
void KShortcutWidget_Create(KShortcutWidget* self);
void KShortcutWidget_OnCreate(KShortcutWidget* self, intptr_t slot);
void KShortcutWidget_SuperCreate(KShortcutWidget* self);
void KShortcutWidget_Destroy(KShortcutWidget* self);
void KShortcutWidget_OnDestroy(KShortcutWidget* self, intptr_t slot);
void KShortcutWidget_SuperDestroy(KShortcutWidget* self);
bool KShortcutWidget_FocusNextChild(KShortcutWidget* self);
void KShortcutWidget_OnFocusNextChild(KShortcutWidget* self, intptr_t slot);
bool KShortcutWidget_SuperFocusNextChild(KShortcutWidget* self);
bool KShortcutWidget_FocusPreviousChild(KShortcutWidget* self);
void KShortcutWidget_OnFocusPreviousChild(KShortcutWidget* self, intptr_t slot);
bool KShortcutWidget_SuperFocusPreviousChild(KShortcutWidget* self);
QObject* KShortcutWidget_Sender(const KShortcutWidget* self);
void KShortcutWidget_OnSender(const KShortcutWidget* self, intptr_t slot);
QObject* KShortcutWidget_SuperSender(const KShortcutWidget* self);
int KShortcutWidget_SenderSignalIndex(const KShortcutWidget* self);
void KShortcutWidget_OnSenderSignalIndex(const KShortcutWidget* self, intptr_t slot);
int KShortcutWidget_SuperSenderSignalIndex(const KShortcutWidget* self);
int KShortcutWidget_Receivers(const KShortcutWidget* self, const char* signal);
void KShortcutWidget_OnReceivers(const KShortcutWidget* self, intptr_t slot);
int KShortcutWidget_SuperReceivers(const KShortcutWidget* self, const char* signal);
bool KShortcutWidget_IsSignalConnected(const KShortcutWidget* self, const QMetaMethod* signal);
void KShortcutWidget_OnIsSignalConnected(const KShortcutWidget* self, intptr_t slot);
bool KShortcutWidget_SuperIsSignalConnected(const KShortcutWidget* self, const QMetaMethod* signal);
double KShortcutWidget_GetDecodedMetricF(const KShortcutWidget* self, int metricA, int metricB);
void KShortcutWidget_OnGetDecodedMetricF(const KShortcutWidget* self, intptr_t slot);
double KShortcutWidget_SuperGetDecodedMetricF(const KShortcutWidget* self, int metricA, int metricB);
void KShortcutWidget_Delete(KShortcutWidget* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
