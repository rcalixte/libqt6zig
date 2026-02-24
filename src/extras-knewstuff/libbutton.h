#pragma once
#ifndef SRC_EXTRAS_KNEWSTUFFC_LIBBUTTON_H
#define SRC_EXTRAS_KNEWSTUFFC_LIBBUTTON_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
typedef KNSCore::Entry KNSCore__Entry;
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KNSWidgets__Button)
typedef KNSWidgets::Button KNSWidgets__Button;
#endif
#else
typedef struct KNSCore__Entry KNSCore__Entry;
typedef struct KNSWidgets__Button KNSWidgets__Button;
typedef struct QAbstractButton QAbstractButton;
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
typedef struct QPushButton QPushButton;
typedef struct QResizeEvent QResizeEvent;
typedef struct QShowEvent QShowEvent;
typedef struct QSize QSize;
typedef struct QStyleOptionButton QStyleOptionButton;
typedef struct QTabletEvent QTabletEvent;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
typedef struct QWheelEvent QWheelEvent;
typedef struct QWidget QWidget;
#endif

KNSWidgets__Button* KNSWidgets__Button_new(QWidget* parent);
KNSWidgets__Button* KNSWidgets__Button_new2(const libqt_string text, const libqt_string configFile, QWidget* parent);
QMetaObject* KNSWidgets__Button_MetaObject(const KNSWidgets__Button* self);
void* KNSWidgets__Button_Metacast(KNSWidgets__Button* self, const char* param1);
int KNSWidgets__Button_Metacall(KNSWidgets__Button* self, int param1, int param2, void** param3);
void KNSWidgets__Button_SetConfigFile(KNSWidgets__Button* self, const libqt_string configFile);
void KNSWidgets__Button_DialogFinished(KNSWidgets__Button* self, const libqt_list /* of KNSCore__Entry* */ changedEntries);
void KNSWidgets__Button_Connect_DialogFinished(KNSWidgets__Button* self, intptr_t slot);
void KNSWidgets__Button_OnMetaObject(const KNSWidgets__Button* self, intptr_t slot);
QMetaObject* KNSWidgets__Button_SuperMetaObject(const KNSWidgets__Button* self);
void KNSWidgets__Button_OnMetacast(KNSWidgets__Button* self, intptr_t slot);
void* KNSWidgets__Button_SuperMetacast(KNSWidgets__Button* self, const char* param1);
void KNSWidgets__Button_OnMetacall(KNSWidgets__Button* self, intptr_t slot);
int KNSWidgets__Button_SuperMetacall(KNSWidgets__Button* self, int param1, int param2, void** param3);
QSize* KNSWidgets__Button_SizeHint(const KNSWidgets__Button* self);
void KNSWidgets__Button_OnSizeHint(const KNSWidgets__Button* self, intptr_t slot);
QSize* KNSWidgets__Button_SuperSizeHint(const KNSWidgets__Button* self);
QSize* KNSWidgets__Button_MinimumSizeHint(const KNSWidgets__Button* self);
void KNSWidgets__Button_OnMinimumSizeHint(const KNSWidgets__Button* self, intptr_t slot);
QSize* KNSWidgets__Button_SuperMinimumSizeHint(const KNSWidgets__Button* self);
bool KNSWidgets__Button_Event(KNSWidgets__Button* self, QEvent* e);
void KNSWidgets__Button_OnEvent(KNSWidgets__Button* self, intptr_t slot);
bool KNSWidgets__Button_SuperEvent(KNSWidgets__Button* self, QEvent* e);
void KNSWidgets__Button_PaintEvent(KNSWidgets__Button* self, QPaintEvent* param1);
void KNSWidgets__Button_OnPaintEvent(KNSWidgets__Button* self, intptr_t slot);
void KNSWidgets__Button_SuperPaintEvent(KNSWidgets__Button* self, QPaintEvent* param1);
void KNSWidgets__Button_KeyPressEvent(KNSWidgets__Button* self, QKeyEvent* param1);
void KNSWidgets__Button_OnKeyPressEvent(KNSWidgets__Button* self, intptr_t slot);
void KNSWidgets__Button_SuperKeyPressEvent(KNSWidgets__Button* self, QKeyEvent* param1);
void KNSWidgets__Button_FocusInEvent(KNSWidgets__Button* self, QFocusEvent* param1);
void KNSWidgets__Button_OnFocusInEvent(KNSWidgets__Button* self, intptr_t slot);
void KNSWidgets__Button_SuperFocusInEvent(KNSWidgets__Button* self, QFocusEvent* param1);
void KNSWidgets__Button_FocusOutEvent(KNSWidgets__Button* self, QFocusEvent* param1);
void KNSWidgets__Button_OnFocusOutEvent(KNSWidgets__Button* self, intptr_t slot);
void KNSWidgets__Button_SuperFocusOutEvent(KNSWidgets__Button* self, QFocusEvent* param1);
void KNSWidgets__Button_MouseMoveEvent(KNSWidgets__Button* self, QMouseEvent* param1);
void KNSWidgets__Button_OnMouseMoveEvent(KNSWidgets__Button* self, intptr_t slot);
void KNSWidgets__Button_SuperMouseMoveEvent(KNSWidgets__Button* self, QMouseEvent* param1);
void KNSWidgets__Button_InitStyleOption(const KNSWidgets__Button* self, QStyleOptionButton* option);
void KNSWidgets__Button_OnInitStyleOption(const KNSWidgets__Button* self, intptr_t slot);
void KNSWidgets__Button_SuperInitStyleOption(const KNSWidgets__Button* self, QStyleOptionButton* option);
bool KNSWidgets__Button_HitButton(const KNSWidgets__Button* self, const QPoint* pos);
void KNSWidgets__Button_OnHitButton(const KNSWidgets__Button* self, intptr_t slot);
bool KNSWidgets__Button_SuperHitButton(const KNSWidgets__Button* self, const QPoint* pos);
void KNSWidgets__Button_CheckStateSet(KNSWidgets__Button* self);
void KNSWidgets__Button_OnCheckStateSet(KNSWidgets__Button* self, intptr_t slot);
void KNSWidgets__Button_SuperCheckStateSet(KNSWidgets__Button* self);
void KNSWidgets__Button_NextCheckState(KNSWidgets__Button* self);
void KNSWidgets__Button_OnNextCheckState(KNSWidgets__Button* self, intptr_t slot);
void KNSWidgets__Button_SuperNextCheckState(KNSWidgets__Button* self);
void KNSWidgets__Button_KeyReleaseEvent(KNSWidgets__Button* self, QKeyEvent* e);
void KNSWidgets__Button_OnKeyReleaseEvent(KNSWidgets__Button* self, intptr_t slot);
void KNSWidgets__Button_SuperKeyReleaseEvent(KNSWidgets__Button* self, QKeyEvent* e);
void KNSWidgets__Button_MousePressEvent(KNSWidgets__Button* self, QMouseEvent* e);
void KNSWidgets__Button_OnMousePressEvent(KNSWidgets__Button* self, intptr_t slot);
void KNSWidgets__Button_SuperMousePressEvent(KNSWidgets__Button* self, QMouseEvent* e);
void KNSWidgets__Button_MouseReleaseEvent(KNSWidgets__Button* self, QMouseEvent* e);
void KNSWidgets__Button_OnMouseReleaseEvent(KNSWidgets__Button* self, intptr_t slot);
void KNSWidgets__Button_SuperMouseReleaseEvent(KNSWidgets__Button* self, QMouseEvent* e);
void KNSWidgets__Button_ChangeEvent(KNSWidgets__Button* self, QEvent* e);
void KNSWidgets__Button_OnChangeEvent(KNSWidgets__Button* self, intptr_t slot);
void KNSWidgets__Button_SuperChangeEvent(KNSWidgets__Button* self, QEvent* e);
void KNSWidgets__Button_TimerEvent(KNSWidgets__Button* self, QTimerEvent* e);
void KNSWidgets__Button_OnTimerEvent(KNSWidgets__Button* self, intptr_t slot);
void KNSWidgets__Button_SuperTimerEvent(KNSWidgets__Button* self, QTimerEvent* e);
int KNSWidgets__Button_DevType(const KNSWidgets__Button* self);
void KNSWidgets__Button_OnDevType(const KNSWidgets__Button* self, intptr_t slot);
int KNSWidgets__Button_SuperDevType(const KNSWidgets__Button* self);
void KNSWidgets__Button_SetVisible(KNSWidgets__Button* self, bool visible);
void KNSWidgets__Button_OnSetVisible(KNSWidgets__Button* self, intptr_t slot);
void KNSWidgets__Button_SuperSetVisible(KNSWidgets__Button* self, bool visible);
int KNSWidgets__Button_HeightForWidth(const KNSWidgets__Button* self, int param1);
void KNSWidgets__Button_OnHeightForWidth(const KNSWidgets__Button* self, intptr_t slot);
int KNSWidgets__Button_SuperHeightForWidth(const KNSWidgets__Button* self, int param1);
bool KNSWidgets__Button_HasHeightForWidth(const KNSWidgets__Button* self);
void KNSWidgets__Button_OnHasHeightForWidth(const KNSWidgets__Button* self, intptr_t slot);
bool KNSWidgets__Button_SuperHasHeightForWidth(const KNSWidgets__Button* self);
QPaintEngine* KNSWidgets__Button_PaintEngine(const KNSWidgets__Button* self);
void KNSWidgets__Button_OnPaintEngine(const KNSWidgets__Button* self, intptr_t slot);
QPaintEngine* KNSWidgets__Button_SuperPaintEngine(const KNSWidgets__Button* self);
void KNSWidgets__Button_MouseDoubleClickEvent(KNSWidgets__Button* self, QMouseEvent* event);
void KNSWidgets__Button_OnMouseDoubleClickEvent(KNSWidgets__Button* self, intptr_t slot);
void KNSWidgets__Button_SuperMouseDoubleClickEvent(KNSWidgets__Button* self, QMouseEvent* event);
void KNSWidgets__Button_WheelEvent(KNSWidgets__Button* self, QWheelEvent* event);
void KNSWidgets__Button_OnWheelEvent(KNSWidgets__Button* self, intptr_t slot);
void KNSWidgets__Button_SuperWheelEvent(KNSWidgets__Button* self, QWheelEvent* event);
void KNSWidgets__Button_EnterEvent(KNSWidgets__Button* self, QEnterEvent* event);
void KNSWidgets__Button_OnEnterEvent(KNSWidgets__Button* self, intptr_t slot);
void KNSWidgets__Button_SuperEnterEvent(KNSWidgets__Button* self, QEnterEvent* event);
void KNSWidgets__Button_LeaveEvent(KNSWidgets__Button* self, QEvent* event);
void KNSWidgets__Button_OnLeaveEvent(KNSWidgets__Button* self, intptr_t slot);
void KNSWidgets__Button_SuperLeaveEvent(KNSWidgets__Button* self, QEvent* event);
void KNSWidgets__Button_MoveEvent(KNSWidgets__Button* self, QMoveEvent* event);
void KNSWidgets__Button_OnMoveEvent(KNSWidgets__Button* self, intptr_t slot);
void KNSWidgets__Button_SuperMoveEvent(KNSWidgets__Button* self, QMoveEvent* event);
void KNSWidgets__Button_ResizeEvent(KNSWidgets__Button* self, QResizeEvent* event);
void KNSWidgets__Button_OnResizeEvent(KNSWidgets__Button* self, intptr_t slot);
void KNSWidgets__Button_SuperResizeEvent(KNSWidgets__Button* self, QResizeEvent* event);
void KNSWidgets__Button_CloseEvent(KNSWidgets__Button* self, QCloseEvent* event);
void KNSWidgets__Button_OnCloseEvent(KNSWidgets__Button* self, intptr_t slot);
void KNSWidgets__Button_SuperCloseEvent(KNSWidgets__Button* self, QCloseEvent* event);
void KNSWidgets__Button_ContextMenuEvent(KNSWidgets__Button* self, QContextMenuEvent* event);
void KNSWidgets__Button_OnContextMenuEvent(KNSWidgets__Button* self, intptr_t slot);
void KNSWidgets__Button_SuperContextMenuEvent(KNSWidgets__Button* self, QContextMenuEvent* event);
void KNSWidgets__Button_TabletEvent(KNSWidgets__Button* self, QTabletEvent* event);
void KNSWidgets__Button_OnTabletEvent(KNSWidgets__Button* self, intptr_t slot);
void KNSWidgets__Button_SuperTabletEvent(KNSWidgets__Button* self, QTabletEvent* event);
void KNSWidgets__Button_ActionEvent(KNSWidgets__Button* self, QActionEvent* event);
void KNSWidgets__Button_OnActionEvent(KNSWidgets__Button* self, intptr_t slot);
void KNSWidgets__Button_SuperActionEvent(KNSWidgets__Button* self, QActionEvent* event);
void KNSWidgets__Button_DragEnterEvent(KNSWidgets__Button* self, QDragEnterEvent* event);
void KNSWidgets__Button_OnDragEnterEvent(KNSWidgets__Button* self, intptr_t slot);
void KNSWidgets__Button_SuperDragEnterEvent(KNSWidgets__Button* self, QDragEnterEvent* event);
void KNSWidgets__Button_DragMoveEvent(KNSWidgets__Button* self, QDragMoveEvent* event);
void KNSWidgets__Button_OnDragMoveEvent(KNSWidgets__Button* self, intptr_t slot);
void KNSWidgets__Button_SuperDragMoveEvent(KNSWidgets__Button* self, QDragMoveEvent* event);
void KNSWidgets__Button_DragLeaveEvent(KNSWidgets__Button* self, QDragLeaveEvent* event);
void KNSWidgets__Button_OnDragLeaveEvent(KNSWidgets__Button* self, intptr_t slot);
void KNSWidgets__Button_SuperDragLeaveEvent(KNSWidgets__Button* self, QDragLeaveEvent* event);
void KNSWidgets__Button_DropEvent(KNSWidgets__Button* self, QDropEvent* event);
void KNSWidgets__Button_OnDropEvent(KNSWidgets__Button* self, intptr_t slot);
void KNSWidgets__Button_SuperDropEvent(KNSWidgets__Button* self, QDropEvent* event);
void KNSWidgets__Button_ShowEvent(KNSWidgets__Button* self, QShowEvent* event);
void KNSWidgets__Button_OnShowEvent(KNSWidgets__Button* self, intptr_t slot);
void KNSWidgets__Button_SuperShowEvent(KNSWidgets__Button* self, QShowEvent* event);
void KNSWidgets__Button_HideEvent(KNSWidgets__Button* self, QHideEvent* event);
void KNSWidgets__Button_OnHideEvent(KNSWidgets__Button* self, intptr_t slot);
void KNSWidgets__Button_SuperHideEvent(KNSWidgets__Button* self, QHideEvent* event);
bool KNSWidgets__Button_NativeEvent(KNSWidgets__Button* self, const libqt_string eventType, void* message, intptr_t* result);
void KNSWidgets__Button_OnNativeEvent(KNSWidgets__Button* self, intptr_t slot);
bool KNSWidgets__Button_SuperNativeEvent(KNSWidgets__Button* self, const libqt_string eventType, void* message, intptr_t* result);
int KNSWidgets__Button_Metric(const KNSWidgets__Button* self, int param1);
void KNSWidgets__Button_OnMetric(const KNSWidgets__Button* self, intptr_t slot);
int KNSWidgets__Button_SuperMetric(const KNSWidgets__Button* self, int param1);
void KNSWidgets__Button_InitPainter(const KNSWidgets__Button* self, QPainter* painter);
void KNSWidgets__Button_OnInitPainter(const KNSWidgets__Button* self, intptr_t slot);
void KNSWidgets__Button_SuperInitPainter(const KNSWidgets__Button* self, QPainter* painter);
QPaintDevice* KNSWidgets__Button_Redirected(const KNSWidgets__Button* self, QPoint* offset);
void KNSWidgets__Button_OnRedirected(const KNSWidgets__Button* self, intptr_t slot);
QPaintDevice* KNSWidgets__Button_SuperRedirected(const KNSWidgets__Button* self, QPoint* offset);
QPainter* KNSWidgets__Button_SharedPainter(const KNSWidgets__Button* self);
void KNSWidgets__Button_OnSharedPainter(const KNSWidgets__Button* self, intptr_t slot);
QPainter* KNSWidgets__Button_SuperSharedPainter(const KNSWidgets__Button* self);
void KNSWidgets__Button_InputMethodEvent(KNSWidgets__Button* self, QInputMethodEvent* param1);
void KNSWidgets__Button_OnInputMethodEvent(KNSWidgets__Button* self, intptr_t slot);
void KNSWidgets__Button_SuperInputMethodEvent(KNSWidgets__Button* self, QInputMethodEvent* param1);
QVariant* KNSWidgets__Button_InputMethodQuery(const KNSWidgets__Button* self, int param1);
void KNSWidgets__Button_OnInputMethodQuery(const KNSWidgets__Button* self, intptr_t slot);
QVariant* KNSWidgets__Button_SuperInputMethodQuery(const KNSWidgets__Button* self, int param1);
bool KNSWidgets__Button_FocusNextPrevChild(KNSWidgets__Button* self, bool next);
void KNSWidgets__Button_OnFocusNextPrevChild(KNSWidgets__Button* self, intptr_t slot);
bool KNSWidgets__Button_SuperFocusNextPrevChild(KNSWidgets__Button* self, bool next);
bool KNSWidgets__Button_EventFilter(KNSWidgets__Button* self, QObject* watched, QEvent* event);
void KNSWidgets__Button_OnEventFilter(KNSWidgets__Button* self, intptr_t slot);
bool KNSWidgets__Button_SuperEventFilter(KNSWidgets__Button* self, QObject* watched, QEvent* event);
void KNSWidgets__Button_ChildEvent(KNSWidgets__Button* self, QChildEvent* event);
void KNSWidgets__Button_OnChildEvent(KNSWidgets__Button* self, intptr_t slot);
void KNSWidgets__Button_SuperChildEvent(KNSWidgets__Button* self, QChildEvent* event);
void KNSWidgets__Button_CustomEvent(KNSWidgets__Button* self, QEvent* event);
void KNSWidgets__Button_OnCustomEvent(KNSWidgets__Button* self, intptr_t slot);
void KNSWidgets__Button_SuperCustomEvent(KNSWidgets__Button* self, QEvent* event);
void KNSWidgets__Button_ConnectNotify(KNSWidgets__Button* self, const QMetaMethod* signal);
void KNSWidgets__Button_OnConnectNotify(KNSWidgets__Button* self, intptr_t slot);
void KNSWidgets__Button_SuperConnectNotify(KNSWidgets__Button* self, const QMetaMethod* signal);
void KNSWidgets__Button_DisconnectNotify(KNSWidgets__Button* self, const QMetaMethod* signal);
void KNSWidgets__Button_OnDisconnectNotify(KNSWidgets__Button* self, intptr_t slot);
void KNSWidgets__Button_SuperDisconnectNotify(KNSWidgets__Button* self, const QMetaMethod* signal);
void KNSWidgets__Button_UpdateMicroFocus(KNSWidgets__Button* self);
void KNSWidgets__Button_OnUpdateMicroFocus(KNSWidgets__Button* self, intptr_t slot);
void KNSWidgets__Button_SuperUpdateMicroFocus(KNSWidgets__Button* self);
void KNSWidgets__Button_Create(KNSWidgets__Button* self);
void KNSWidgets__Button_OnCreate(KNSWidgets__Button* self, intptr_t slot);
void KNSWidgets__Button_SuperCreate(KNSWidgets__Button* self);
void KNSWidgets__Button_Destroy(KNSWidgets__Button* self);
void KNSWidgets__Button_OnDestroy(KNSWidgets__Button* self, intptr_t slot);
void KNSWidgets__Button_SuperDestroy(KNSWidgets__Button* self);
bool KNSWidgets__Button_FocusNextChild(KNSWidgets__Button* self);
void KNSWidgets__Button_OnFocusNextChild(KNSWidgets__Button* self, intptr_t slot);
bool KNSWidgets__Button_SuperFocusNextChild(KNSWidgets__Button* self);
bool KNSWidgets__Button_FocusPreviousChild(KNSWidgets__Button* self);
void KNSWidgets__Button_OnFocusPreviousChild(KNSWidgets__Button* self, intptr_t slot);
bool KNSWidgets__Button_SuperFocusPreviousChild(KNSWidgets__Button* self);
QObject* KNSWidgets__Button_Sender(const KNSWidgets__Button* self);
void KNSWidgets__Button_OnSender(const KNSWidgets__Button* self, intptr_t slot);
QObject* KNSWidgets__Button_SuperSender(const KNSWidgets__Button* self);
int KNSWidgets__Button_SenderSignalIndex(const KNSWidgets__Button* self);
void KNSWidgets__Button_OnSenderSignalIndex(const KNSWidgets__Button* self, intptr_t slot);
int KNSWidgets__Button_SuperSenderSignalIndex(const KNSWidgets__Button* self);
int KNSWidgets__Button_Receivers(const KNSWidgets__Button* self, const char* signal);
void KNSWidgets__Button_OnReceivers(const KNSWidgets__Button* self, intptr_t slot);
int KNSWidgets__Button_SuperReceivers(const KNSWidgets__Button* self, const char* signal);
bool KNSWidgets__Button_IsSignalConnected(const KNSWidgets__Button* self, const QMetaMethod* signal);
void KNSWidgets__Button_OnIsSignalConnected(const KNSWidgets__Button* self, intptr_t slot);
bool KNSWidgets__Button_SuperIsSignalConnected(const KNSWidgets__Button* self, const QMetaMethod* signal);
double KNSWidgets__Button_GetDecodedMetricF(const KNSWidgets__Button* self, int metricA, int metricB);
void KNSWidgets__Button_OnGetDecodedMetricF(const KNSWidgets__Button* self, intptr_t slot);
double KNSWidgets__Button_SuperGetDecodedMetricF(const KNSWidgets__Button* self, int metricA, int metricB);
void KNSWidgets__Button_Delete(KNSWidgets__Button* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
