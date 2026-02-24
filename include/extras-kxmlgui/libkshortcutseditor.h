#pragma once
#ifndef SRC_EXTRAS_KXMLGUIC_LIBKSHORTCUTSEDITOR_H
#define SRC_EXTRAS_KXMLGUIC_LIBKSHORTCUTSEDITOR_H

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
typedef struct KShortcutsEditor KShortcutsEditor;
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
#endif

KShortcutsEditor* KShortcutsEditor_new(QWidget* parent);
KShortcutsEditor* KShortcutsEditor_new2(KActionCollection* collection, QWidget* parent);
KShortcutsEditor* KShortcutsEditor_new3(KActionCollection* collection, QWidget* parent, int actionTypes);
KShortcutsEditor* KShortcutsEditor_new4(KActionCollection* collection, QWidget* parent, int actionTypes, int allowLetterShortcuts);
KShortcutsEditor* KShortcutsEditor_new5(QWidget* parent, int actionTypes);
KShortcutsEditor* KShortcutsEditor_new6(QWidget* parent, int actionTypes, int allowLetterShortcuts);
QMetaObject* KShortcutsEditor_MetaObject(const KShortcutsEditor* self);
void* KShortcutsEditor_Metacast(KShortcutsEditor* self, const char* param1);
int KShortcutsEditor_Metacall(KShortcutsEditor* self, int param1, int param2, void** param3);
bool KShortcutsEditor_IsModified(const KShortcutsEditor* self);
void KShortcutsEditor_ClearCollections(KShortcutsEditor* self);
void KShortcutsEditor_AddCollection(KShortcutsEditor* self, KActionCollection* param1);
void KShortcutsEditor_Undo(KShortcutsEditor* self);
void KShortcutsEditor_Save(KShortcutsEditor* self);
void KShortcutsEditor_SetActionTypes(KShortcutsEditor* self, int actionTypes);
int KShortcutsEditor_ActionTypes(const KShortcutsEditor* self);
void KShortcutsEditor_KeyChange(KShortcutsEditor* self);
void KShortcutsEditor_Connect_KeyChange(KShortcutsEditor* self, intptr_t slot);
void KShortcutsEditor_AllDefault(KShortcutsEditor* self);
void KShortcutsEditor_AddCollection2(KShortcutsEditor* self, KActionCollection* param1, const libqt_string title);
void KShortcutsEditor_OnMetaObject(const KShortcutsEditor* self, intptr_t slot);
QMetaObject* KShortcutsEditor_SuperMetaObject(const KShortcutsEditor* self);
void KShortcutsEditor_OnMetacast(KShortcutsEditor* self, intptr_t slot);
void* KShortcutsEditor_SuperMetacast(KShortcutsEditor* self, const char* param1);
void KShortcutsEditor_OnMetacall(KShortcutsEditor* self, intptr_t slot);
int KShortcutsEditor_SuperMetacall(KShortcutsEditor* self, int param1, int param2, void** param3);
int KShortcutsEditor_DevType(const KShortcutsEditor* self);
void KShortcutsEditor_OnDevType(const KShortcutsEditor* self, intptr_t slot);
int KShortcutsEditor_SuperDevType(const KShortcutsEditor* self);
void KShortcutsEditor_SetVisible(KShortcutsEditor* self, bool visible);
void KShortcutsEditor_OnSetVisible(KShortcutsEditor* self, intptr_t slot);
void KShortcutsEditor_SuperSetVisible(KShortcutsEditor* self, bool visible);
QSize* KShortcutsEditor_SizeHint(const KShortcutsEditor* self);
void KShortcutsEditor_OnSizeHint(const KShortcutsEditor* self, intptr_t slot);
QSize* KShortcutsEditor_SuperSizeHint(const KShortcutsEditor* self);
QSize* KShortcutsEditor_MinimumSizeHint(const KShortcutsEditor* self);
void KShortcutsEditor_OnMinimumSizeHint(const KShortcutsEditor* self, intptr_t slot);
QSize* KShortcutsEditor_SuperMinimumSizeHint(const KShortcutsEditor* self);
int KShortcutsEditor_HeightForWidth(const KShortcutsEditor* self, int param1);
void KShortcutsEditor_OnHeightForWidth(const KShortcutsEditor* self, intptr_t slot);
int KShortcutsEditor_SuperHeightForWidth(const KShortcutsEditor* self, int param1);
bool KShortcutsEditor_HasHeightForWidth(const KShortcutsEditor* self);
void KShortcutsEditor_OnHasHeightForWidth(const KShortcutsEditor* self, intptr_t slot);
bool KShortcutsEditor_SuperHasHeightForWidth(const KShortcutsEditor* self);
QPaintEngine* KShortcutsEditor_PaintEngine(const KShortcutsEditor* self);
void KShortcutsEditor_OnPaintEngine(const KShortcutsEditor* self, intptr_t slot);
QPaintEngine* KShortcutsEditor_SuperPaintEngine(const KShortcutsEditor* self);
bool KShortcutsEditor_Event(KShortcutsEditor* self, QEvent* event);
void KShortcutsEditor_OnEvent(KShortcutsEditor* self, intptr_t slot);
bool KShortcutsEditor_SuperEvent(KShortcutsEditor* self, QEvent* event);
void KShortcutsEditor_MousePressEvent(KShortcutsEditor* self, QMouseEvent* event);
void KShortcutsEditor_OnMousePressEvent(KShortcutsEditor* self, intptr_t slot);
void KShortcutsEditor_SuperMousePressEvent(KShortcutsEditor* self, QMouseEvent* event);
void KShortcutsEditor_MouseReleaseEvent(KShortcutsEditor* self, QMouseEvent* event);
void KShortcutsEditor_OnMouseReleaseEvent(KShortcutsEditor* self, intptr_t slot);
void KShortcutsEditor_SuperMouseReleaseEvent(KShortcutsEditor* self, QMouseEvent* event);
void KShortcutsEditor_MouseDoubleClickEvent(KShortcutsEditor* self, QMouseEvent* event);
void KShortcutsEditor_OnMouseDoubleClickEvent(KShortcutsEditor* self, intptr_t slot);
void KShortcutsEditor_SuperMouseDoubleClickEvent(KShortcutsEditor* self, QMouseEvent* event);
void KShortcutsEditor_MouseMoveEvent(KShortcutsEditor* self, QMouseEvent* event);
void KShortcutsEditor_OnMouseMoveEvent(KShortcutsEditor* self, intptr_t slot);
void KShortcutsEditor_SuperMouseMoveEvent(KShortcutsEditor* self, QMouseEvent* event);
void KShortcutsEditor_WheelEvent(KShortcutsEditor* self, QWheelEvent* event);
void KShortcutsEditor_OnWheelEvent(KShortcutsEditor* self, intptr_t slot);
void KShortcutsEditor_SuperWheelEvent(KShortcutsEditor* self, QWheelEvent* event);
void KShortcutsEditor_KeyPressEvent(KShortcutsEditor* self, QKeyEvent* event);
void KShortcutsEditor_OnKeyPressEvent(KShortcutsEditor* self, intptr_t slot);
void KShortcutsEditor_SuperKeyPressEvent(KShortcutsEditor* self, QKeyEvent* event);
void KShortcutsEditor_KeyReleaseEvent(KShortcutsEditor* self, QKeyEvent* event);
void KShortcutsEditor_OnKeyReleaseEvent(KShortcutsEditor* self, intptr_t slot);
void KShortcutsEditor_SuperKeyReleaseEvent(KShortcutsEditor* self, QKeyEvent* event);
void KShortcutsEditor_FocusInEvent(KShortcutsEditor* self, QFocusEvent* event);
void KShortcutsEditor_OnFocusInEvent(KShortcutsEditor* self, intptr_t slot);
void KShortcutsEditor_SuperFocusInEvent(KShortcutsEditor* self, QFocusEvent* event);
void KShortcutsEditor_FocusOutEvent(KShortcutsEditor* self, QFocusEvent* event);
void KShortcutsEditor_OnFocusOutEvent(KShortcutsEditor* self, intptr_t slot);
void KShortcutsEditor_SuperFocusOutEvent(KShortcutsEditor* self, QFocusEvent* event);
void KShortcutsEditor_EnterEvent(KShortcutsEditor* self, QEnterEvent* event);
void KShortcutsEditor_OnEnterEvent(KShortcutsEditor* self, intptr_t slot);
void KShortcutsEditor_SuperEnterEvent(KShortcutsEditor* self, QEnterEvent* event);
void KShortcutsEditor_LeaveEvent(KShortcutsEditor* self, QEvent* event);
void KShortcutsEditor_OnLeaveEvent(KShortcutsEditor* self, intptr_t slot);
void KShortcutsEditor_SuperLeaveEvent(KShortcutsEditor* self, QEvent* event);
void KShortcutsEditor_PaintEvent(KShortcutsEditor* self, QPaintEvent* event);
void KShortcutsEditor_OnPaintEvent(KShortcutsEditor* self, intptr_t slot);
void KShortcutsEditor_SuperPaintEvent(KShortcutsEditor* self, QPaintEvent* event);
void KShortcutsEditor_MoveEvent(KShortcutsEditor* self, QMoveEvent* event);
void KShortcutsEditor_OnMoveEvent(KShortcutsEditor* self, intptr_t slot);
void KShortcutsEditor_SuperMoveEvent(KShortcutsEditor* self, QMoveEvent* event);
void KShortcutsEditor_ResizeEvent(KShortcutsEditor* self, QResizeEvent* event);
void KShortcutsEditor_OnResizeEvent(KShortcutsEditor* self, intptr_t slot);
void KShortcutsEditor_SuperResizeEvent(KShortcutsEditor* self, QResizeEvent* event);
void KShortcutsEditor_CloseEvent(KShortcutsEditor* self, QCloseEvent* event);
void KShortcutsEditor_OnCloseEvent(KShortcutsEditor* self, intptr_t slot);
void KShortcutsEditor_SuperCloseEvent(KShortcutsEditor* self, QCloseEvent* event);
void KShortcutsEditor_ContextMenuEvent(KShortcutsEditor* self, QContextMenuEvent* event);
void KShortcutsEditor_OnContextMenuEvent(KShortcutsEditor* self, intptr_t slot);
void KShortcutsEditor_SuperContextMenuEvent(KShortcutsEditor* self, QContextMenuEvent* event);
void KShortcutsEditor_TabletEvent(KShortcutsEditor* self, QTabletEvent* event);
void KShortcutsEditor_OnTabletEvent(KShortcutsEditor* self, intptr_t slot);
void KShortcutsEditor_SuperTabletEvent(KShortcutsEditor* self, QTabletEvent* event);
void KShortcutsEditor_ActionEvent(KShortcutsEditor* self, QActionEvent* event);
void KShortcutsEditor_OnActionEvent(KShortcutsEditor* self, intptr_t slot);
void KShortcutsEditor_SuperActionEvent(KShortcutsEditor* self, QActionEvent* event);
void KShortcutsEditor_DragEnterEvent(KShortcutsEditor* self, QDragEnterEvent* event);
void KShortcutsEditor_OnDragEnterEvent(KShortcutsEditor* self, intptr_t slot);
void KShortcutsEditor_SuperDragEnterEvent(KShortcutsEditor* self, QDragEnterEvent* event);
void KShortcutsEditor_DragMoveEvent(KShortcutsEditor* self, QDragMoveEvent* event);
void KShortcutsEditor_OnDragMoveEvent(KShortcutsEditor* self, intptr_t slot);
void KShortcutsEditor_SuperDragMoveEvent(KShortcutsEditor* self, QDragMoveEvent* event);
void KShortcutsEditor_DragLeaveEvent(KShortcutsEditor* self, QDragLeaveEvent* event);
void KShortcutsEditor_OnDragLeaveEvent(KShortcutsEditor* self, intptr_t slot);
void KShortcutsEditor_SuperDragLeaveEvent(KShortcutsEditor* self, QDragLeaveEvent* event);
void KShortcutsEditor_DropEvent(KShortcutsEditor* self, QDropEvent* event);
void KShortcutsEditor_OnDropEvent(KShortcutsEditor* self, intptr_t slot);
void KShortcutsEditor_SuperDropEvent(KShortcutsEditor* self, QDropEvent* event);
void KShortcutsEditor_ShowEvent(KShortcutsEditor* self, QShowEvent* event);
void KShortcutsEditor_OnShowEvent(KShortcutsEditor* self, intptr_t slot);
void KShortcutsEditor_SuperShowEvent(KShortcutsEditor* self, QShowEvent* event);
void KShortcutsEditor_HideEvent(KShortcutsEditor* self, QHideEvent* event);
void KShortcutsEditor_OnHideEvent(KShortcutsEditor* self, intptr_t slot);
void KShortcutsEditor_SuperHideEvent(KShortcutsEditor* self, QHideEvent* event);
bool KShortcutsEditor_NativeEvent(KShortcutsEditor* self, const libqt_string eventType, void* message, intptr_t* result);
void KShortcutsEditor_OnNativeEvent(KShortcutsEditor* self, intptr_t slot);
bool KShortcutsEditor_SuperNativeEvent(KShortcutsEditor* self, const libqt_string eventType, void* message, intptr_t* result);
void KShortcutsEditor_ChangeEvent(KShortcutsEditor* self, QEvent* param1);
void KShortcutsEditor_OnChangeEvent(KShortcutsEditor* self, intptr_t slot);
void KShortcutsEditor_SuperChangeEvent(KShortcutsEditor* self, QEvent* param1);
int KShortcutsEditor_Metric(const KShortcutsEditor* self, int param1);
void KShortcutsEditor_OnMetric(const KShortcutsEditor* self, intptr_t slot);
int KShortcutsEditor_SuperMetric(const KShortcutsEditor* self, int param1);
void KShortcutsEditor_InitPainter(const KShortcutsEditor* self, QPainter* painter);
void KShortcutsEditor_OnInitPainter(const KShortcutsEditor* self, intptr_t slot);
void KShortcutsEditor_SuperInitPainter(const KShortcutsEditor* self, QPainter* painter);
QPaintDevice* KShortcutsEditor_Redirected(const KShortcutsEditor* self, QPoint* offset);
void KShortcutsEditor_OnRedirected(const KShortcutsEditor* self, intptr_t slot);
QPaintDevice* KShortcutsEditor_SuperRedirected(const KShortcutsEditor* self, QPoint* offset);
QPainter* KShortcutsEditor_SharedPainter(const KShortcutsEditor* self);
void KShortcutsEditor_OnSharedPainter(const KShortcutsEditor* self, intptr_t slot);
QPainter* KShortcutsEditor_SuperSharedPainter(const KShortcutsEditor* self);
void KShortcutsEditor_InputMethodEvent(KShortcutsEditor* self, QInputMethodEvent* param1);
void KShortcutsEditor_OnInputMethodEvent(KShortcutsEditor* self, intptr_t slot);
void KShortcutsEditor_SuperInputMethodEvent(KShortcutsEditor* self, QInputMethodEvent* param1);
QVariant* KShortcutsEditor_InputMethodQuery(const KShortcutsEditor* self, int param1);
void KShortcutsEditor_OnInputMethodQuery(const KShortcutsEditor* self, intptr_t slot);
QVariant* KShortcutsEditor_SuperInputMethodQuery(const KShortcutsEditor* self, int param1);
bool KShortcutsEditor_FocusNextPrevChild(KShortcutsEditor* self, bool next);
void KShortcutsEditor_OnFocusNextPrevChild(KShortcutsEditor* self, intptr_t slot);
bool KShortcutsEditor_SuperFocusNextPrevChild(KShortcutsEditor* self, bool next);
bool KShortcutsEditor_EventFilter(KShortcutsEditor* self, QObject* watched, QEvent* event);
void KShortcutsEditor_OnEventFilter(KShortcutsEditor* self, intptr_t slot);
bool KShortcutsEditor_SuperEventFilter(KShortcutsEditor* self, QObject* watched, QEvent* event);
void KShortcutsEditor_TimerEvent(KShortcutsEditor* self, QTimerEvent* event);
void KShortcutsEditor_OnTimerEvent(KShortcutsEditor* self, intptr_t slot);
void KShortcutsEditor_SuperTimerEvent(KShortcutsEditor* self, QTimerEvent* event);
void KShortcutsEditor_ChildEvent(KShortcutsEditor* self, QChildEvent* event);
void KShortcutsEditor_OnChildEvent(KShortcutsEditor* self, intptr_t slot);
void KShortcutsEditor_SuperChildEvent(KShortcutsEditor* self, QChildEvent* event);
void KShortcutsEditor_CustomEvent(KShortcutsEditor* self, QEvent* event);
void KShortcutsEditor_OnCustomEvent(KShortcutsEditor* self, intptr_t slot);
void KShortcutsEditor_SuperCustomEvent(KShortcutsEditor* self, QEvent* event);
void KShortcutsEditor_ConnectNotify(KShortcutsEditor* self, const QMetaMethod* signal);
void KShortcutsEditor_OnConnectNotify(KShortcutsEditor* self, intptr_t slot);
void KShortcutsEditor_SuperConnectNotify(KShortcutsEditor* self, const QMetaMethod* signal);
void KShortcutsEditor_DisconnectNotify(KShortcutsEditor* self, const QMetaMethod* signal);
void KShortcutsEditor_OnDisconnectNotify(KShortcutsEditor* self, intptr_t slot);
void KShortcutsEditor_SuperDisconnectNotify(KShortcutsEditor* self, const QMetaMethod* signal);
void KShortcutsEditor_UpdateMicroFocus(KShortcutsEditor* self);
void KShortcutsEditor_OnUpdateMicroFocus(KShortcutsEditor* self, intptr_t slot);
void KShortcutsEditor_SuperUpdateMicroFocus(KShortcutsEditor* self);
void KShortcutsEditor_Create(KShortcutsEditor* self);
void KShortcutsEditor_OnCreate(KShortcutsEditor* self, intptr_t slot);
void KShortcutsEditor_SuperCreate(KShortcutsEditor* self);
void KShortcutsEditor_Destroy(KShortcutsEditor* self);
void KShortcutsEditor_OnDestroy(KShortcutsEditor* self, intptr_t slot);
void KShortcutsEditor_SuperDestroy(KShortcutsEditor* self);
bool KShortcutsEditor_FocusNextChild(KShortcutsEditor* self);
void KShortcutsEditor_OnFocusNextChild(KShortcutsEditor* self, intptr_t slot);
bool KShortcutsEditor_SuperFocusNextChild(KShortcutsEditor* self);
bool KShortcutsEditor_FocusPreviousChild(KShortcutsEditor* self);
void KShortcutsEditor_OnFocusPreviousChild(KShortcutsEditor* self, intptr_t slot);
bool KShortcutsEditor_SuperFocusPreviousChild(KShortcutsEditor* self);
QObject* KShortcutsEditor_Sender(const KShortcutsEditor* self);
void KShortcutsEditor_OnSender(const KShortcutsEditor* self, intptr_t slot);
QObject* KShortcutsEditor_SuperSender(const KShortcutsEditor* self);
int KShortcutsEditor_SenderSignalIndex(const KShortcutsEditor* self);
void KShortcutsEditor_OnSenderSignalIndex(const KShortcutsEditor* self, intptr_t slot);
int KShortcutsEditor_SuperSenderSignalIndex(const KShortcutsEditor* self);
int KShortcutsEditor_Receivers(const KShortcutsEditor* self, const char* signal);
void KShortcutsEditor_OnReceivers(const KShortcutsEditor* self, intptr_t slot);
int KShortcutsEditor_SuperReceivers(const KShortcutsEditor* self, const char* signal);
bool KShortcutsEditor_IsSignalConnected(const KShortcutsEditor* self, const QMetaMethod* signal);
void KShortcutsEditor_OnIsSignalConnected(const KShortcutsEditor* self, intptr_t slot);
bool KShortcutsEditor_SuperIsSignalConnected(const KShortcutsEditor* self, const QMetaMethod* signal);
double KShortcutsEditor_GetDecodedMetricF(const KShortcutsEditor* self, int metricA, int metricB);
void KShortcutsEditor_OnGetDecodedMetricF(const KShortcutsEditor* self, intptr_t slot);
double KShortcutsEditor_SuperGetDecodedMetricF(const KShortcutsEditor* self, int metricA, int metricB);
void KShortcutsEditor_Delete(KShortcutsEditor* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
