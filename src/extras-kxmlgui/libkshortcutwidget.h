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
libqt_string KShortcutWidget_Tr(const char* s);
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
libqt_string KShortcutWidget_Tr2(const char* s, const char* c);
libqt_string KShortcutWidget_Tr3(const char* s, const char* c, int n);
void KShortcutWidget_OnMetacall(KShortcutWidget* self, intptr_t slot);
int KShortcutWidget_QBaseMetacall(KShortcutWidget* self, int param1, int param2, void** param3);
int KShortcutWidget_DevType(const KShortcutWidget* self);
void KShortcutWidget_OnDevType(const KShortcutWidget* self, intptr_t slot);
int KShortcutWidget_QBaseDevType(const KShortcutWidget* self);
void KShortcutWidget_SetVisible(KShortcutWidget* self, bool visible);
void KShortcutWidget_OnSetVisible(KShortcutWidget* self, intptr_t slot);
void KShortcutWidget_QBaseSetVisible(KShortcutWidget* self, bool visible);
QSize* KShortcutWidget_SizeHint(const KShortcutWidget* self);
void KShortcutWidget_OnSizeHint(const KShortcutWidget* self, intptr_t slot);
QSize* KShortcutWidget_QBaseSizeHint(const KShortcutWidget* self);
QSize* KShortcutWidget_MinimumSizeHint(const KShortcutWidget* self);
void KShortcutWidget_OnMinimumSizeHint(const KShortcutWidget* self, intptr_t slot);
QSize* KShortcutWidget_QBaseMinimumSizeHint(const KShortcutWidget* self);
int KShortcutWidget_HeightForWidth(const KShortcutWidget* self, int param1);
void KShortcutWidget_OnHeightForWidth(const KShortcutWidget* self, intptr_t slot);
int KShortcutWidget_QBaseHeightForWidth(const KShortcutWidget* self, int param1);
bool KShortcutWidget_HasHeightForWidth(const KShortcutWidget* self);
void KShortcutWidget_OnHasHeightForWidth(const KShortcutWidget* self, intptr_t slot);
bool KShortcutWidget_QBaseHasHeightForWidth(const KShortcutWidget* self);
QPaintEngine* KShortcutWidget_PaintEngine(const KShortcutWidget* self);
void KShortcutWidget_OnPaintEngine(const KShortcutWidget* self, intptr_t slot);
QPaintEngine* KShortcutWidget_QBasePaintEngine(const KShortcutWidget* self);
bool KShortcutWidget_Event(KShortcutWidget* self, QEvent* event);
void KShortcutWidget_OnEvent(KShortcutWidget* self, intptr_t slot);
bool KShortcutWidget_QBaseEvent(KShortcutWidget* self, QEvent* event);
void KShortcutWidget_MousePressEvent(KShortcutWidget* self, QMouseEvent* event);
void KShortcutWidget_OnMousePressEvent(KShortcutWidget* self, intptr_t slot);
void KShortcutWidget_QBaseMousePressEvent(KShortcutWidget* self, QMouseEvent* event);
void KShortcutWidget_MouseReleaseEvent(KShortcutWidget* self, QMouseEvent* event);
void KShortcutWidget_OnMouseReleaseEvent(KShortcutWidget* self, intptr_t slot);
void KShortcutWidget_QBaseMouseReleaseEvent(KShortcutWidget* self, QMouseEvent* event);
void KShortcutWidget_MouseDoubleClickEvent(KShortcutWidget* self, QMouseEvent* event);
void KShortcutWidget_OnMouseDoubleClickEvent(KShortcutWidget* self, intptr_t slot);
void KShortcutWidget_QBaseMouseDoubleClickEvent(KShortcutWidget* self, QMouseEvent* event);
void KShortcutWidget_MouseMoveEvent(KShortcutWidget* self, QMouseEvent* event);
void KShortcutWidget_OnMouseMoveEvent(KShortcutWidget* self, intptr_t slot);
void KShortcutWidget_QBaseMouseMoveEvent(KShortcutWidget* self, QMouseEvent* event);
void KShortcutWidget_WheelEvent(KShortcutWidget* self, QWheelEvent* event);
void KShortcutWidget_OnWheelEvent(KShortcutWidget* self, intptr_t slot);
void KShortcutWidget_QBaseWheelEvent(KShortcutWidget* self, QWheelEvent* event);
void KShortcutWidget_KeyPressEvent(KShortcutWidget* self, QKeyEvent* event);
void KShortcutWidget_OnKeyPressEvent(KShortcutWidget* self, intptr_t slot);
void KShortcutWidget_QBaseKeyPressEvent(KShortcutWidget* self, QKeyEvent* event);
void KShortcutWidget_KeyReleaseEvent(KShortcutWidget* self, QKeyEvent* event);
void KShortcutWidget_OnKeyReleaseEvent(KShortcutWidget* self, intptr_t slot);
void KShortcutWidget_QBaseKeyReleaseEvent(KShortcutWidget* self, QKeyEvent* event);
void KShortcutWidget_FocusInEvent(KShortcutWidget* self, QFocusEvent* event);
void KShortcutWidget_OnFocusInEvent(KShortcutWidget* self, intptr_t slot);
void KShortcutWidget_QBaseFocusInEvent(KShortcutWidget* self, QFocusEvent* event);
void KShortcutWidget_FocusOutEvent(KShortcutWidget* self, QFocusEvent* event);
void KShortcutWidget_OnFocusOutEvent(KShortcutWidget* self, intptr_t slot);
void KShortcutWidget_QBaseFocusOutEvent(KShortcutWidget* self, QFocusEvent* event);
void KShortcutWidget_EnterEvent(KShortcutWidget* self, QEnterEvent* event);
void KShortcutWidget_OnEnterEvent(KShortcutWidget* self, intptr_t slot);
void KShortcutWidget_QBaseEnterEvent(KShortcutWidget* self, QEnterEvent* event);
void KShortcutWidget_LeaveEvent(KShortcutWidget* self, QEvent* event);
void KShortcutWidget_OnLeaveEvent(KShortcutWidget* self, intptr_t slot);
void KShortcutWidget_QBaseLeaveEvent(KShortcutWidget* self, QEvent* event);
void KShortcutWidget_PaintEvent(KShortcutWidget* self, QPaintEvent* event);
void KShortcutWidget_OnPaintEvent(KShortcutWidget* self, intptr_t slot);
void KShortcutWidget_QBasePaintEvent(KShortcutWidget* self, QPaintEvent* event);
void KShortcutWidget_MoveEvent(KShortcutWidget* self, QMoveEvent* event);
void KShortcutWidget_OnMoveEvent(KShortcutWidget* self, intptr_t slot);
void KShortcutWidget_QBaseMoveEvent(KShortcutWidget* self, QMoveEvent* event);
void KShortcutWidget_ResizeEvent(KShortcutWidget* self, QResizeEvent* event);
void KShortcutWidget_OnResizeEvent(KShortcutWidget* self, intptr_t slot);
void KShortcutWidget_QBaseResizeEvent(KShortcutWidget* self, QResizeEvent* event);
void KShortcutWidget_CloseEvent(KShortcutWidget* self, QCloseEvent* event);
void KShortcutWidget_OnCloseEvent(KShortcutWidget* self, intptr_t slot);
void KShortcutWidget_QBaseCloseEvent(KShortcutWidget* self, QCloseEvent* event);
void KShortcutWidget_ContextMenuEvent(KShortcutWidget* self, QContextMenuEvent* event);
void KShortcutWidget_OnContextMenuEvent(KShortcutWidget* self, intptr_t slot);
void KShortcutWidget_QBaseContextMenuEvent(KShortcutWidget* self, QContextMenuEvent* event);
void KShortcutWidget_TabletEvent(KShortcutWidget* self, QTabletEvent* event);
void KShortcutWidget_OnTabletEvent(KShortcutWidget* self, intptr_t slot);
void KShortcutWidget_QBaseTabletEvent(KShortcutWidget* self, QTabletEvent* event);
void KShortcutWidget_ActionEvent(KShortcutWidget* self, QActionEvent* event);
void KShortcutWidget_OnActionEvent(KShortcutWidget* self, intptr_t slot);
void KShortcutWidget_QBaseActionEvent(KShortcutWidget* self, QActionEvent* event);
void KShortcutWidget_DragEnterEvent(KShortcutWidget* self, QDragEnterEvent* event);
void KShortcutWidget_OnDragEnterEvent(KShortcutWidget* self, intptr_t slot);
void KShortcutWidget_QBaseDragEnterEvent(KShortcutWidget* self, QDragEnterEvent* event);
void KShortcutWidget_DragMoveEvent(KShortcutWidget* self, QDragMoveEvent* event);
void KShortcutWidget_OnDragMoveEvent(KShortcutWidget* self, intptr_t slot);
void KShortcutWidget_QBaseDragMoveEvent(KShortcutWidget* self, QDragMoveEvent* event);
void KShortcutWidget_DragLeaveEvent(KShortcutWidget* self, QDragLeaveEvent* event);
void KShortcutWidget_OnDragLeaveEvent(KShortcutWidget* self, intptr_t slot);
void KShortcutWidget_QBaseDragLeaveEvent(KShortcutWidget* self, QDragLeaveEvent* event);
void KShortcutWidget_DropEvent(KShortcutWidget* self, QDropEvent* event);
void KShortcutWidget_OnDropEvent(KShortcutWidget* self, intptr_t slot);
void KShortcutWidget_QBaseDropEvent(KShortcutWidget* self, QDropEvent* event);
void KShortcutWidget_ShowEvent(KShortcutWidget* self, QShowEvent* event);
void KShortcutWidget_OnShowEvent(KShortcutWidget* self, intptr_t slot);
void KShortcutWidget_QBaseShowEvent(KShortcutWidget* self, QShowEvent* event);
void KShortcutWidget_HideEvent(KShortcutWidget* self, QHideEvent* event);
void KShortcutWidget_OnHideEvent(KShortcutWidget* self, intptr_t slot);
void KShortcutWidget_QBaseHideEvent(KShortcutWidget* self, QHideEvent* event);
bool KShortcutWidget_NativeEvent(KShortcutWidget* self, const libqt_string eventType, void* message, intptr_t* result);
void KShortcutWidget_OnNativeEvent(KShortcutWidget* self, intptr_t slot);
bool KShortcutWidget_QBaseNativeEvent(KShortcutWidget* self, const libqt_string eventType, void* message, intptr_t* result);
void KShortcutWidget_ChangeEvent(KShortcutWidget* self, QEvent* param1);
void KShortcutWidget_OnChangeEvent(KShortcutWidget* self, intptr_t slot);
void KShortcutWidget_QBaseChangeEvent(KShortcutWidget* self, QEvent* param1);
int KShortcutWidget_Metric(const KShortcutWidget* self, int param1);
void KShortcutWidget_OnMetric(const KShortcutWidget* self, intptr_t slot);
int KShortcutWidget_QBaseMetric(const KShortcutWidget* self, int param1);
void KShortcutWidget_InitPainter(const KShortcutWidget* self, QPainter* painter);
void KShortcutWidget_OnInitPainter(const KShortcutWidget* self, intptr_t slot);
void KShortcutWidget_QBaseInitPainter(const KShortcutWidget* self, QPainter* painter);
QPaintDevice* KShortcutWidget_Redirected(const KShortcutWidget* self, QPoint* offset);
void KShortcutWidget_OnRedirected(const KShortcutWidget* self, intptr_t slot);
QPaintDevice* KShortcutWidget_QBaseRedirected(const KShortcutWidget* self, QPoint* offset);
QPainter* KShortcutWidget_SharedPainter(const KShortcutWidget* self);
void KShortcutWidget_OnSharedPainter(const KShortcutWidget* self, intptr_t slot);
QPainter* KShortcutWidget_QBaseSharedPainter(const KShortcutWidget* self);
void KShortcutWidget_InputMethodEvent(KShortcutWidget* self, QInputMethodEvent* param1);
void KShortcutWidget_OnInputMethodEvent(KShortcutWidget* self, intptr_t slot);
void KShortcutWidget_QBaseInputMethodEvent(KShortcutWidget* self, QInputMethodEvent* param1);
QVariant* KShortcutWidget_InputMethodQuery(const KShortcutWidget* self, int param1);
void KShortcutWidget_OnInputMethodQuery(const KShortcutWidget* self, intptr_t slot);
QVariant* KShortcutWidget_QBaseInputMethodQuery(const KShortcutWidget* self, int param1);
bool KShortcutWidget_FocusNextPrevChild(KShortcutWidget* self, bool next);
void KShortcutWidget_OnFocusNextPrevChild(KShortcutWidget* self, intptr_t slot);
bool KShortcutWidget_QBaseFocusNextPrevChild(KShortcutWidget* self, bool next);
bool KShortcutWidget_EventFilter(KShortcutWidget* self, QObject* watched, QEvent* event);
void KShortcutWidget_OnEventFilter(KShortcutWidget* self, intptr_t slot);
bool KShortcutWidget_QBaseEventFilter(KShortcutWidget* self, QObject* watched, QEvent* event);
void KShortcutWidget_TimerEvent(KShortcutWidget* self, QTimerEvent* event);
void KShortcutWidget_OnTimerEvent(KShortcutWidget* self, intptr_t slot);
void KShortcutWidget_QBaseTimerEvent(KShortcutWidget* self, QTimerEvent* event);
void KShortcutWidget_ChildEvent(KShortcutWidget* self, QChildEvent* event);
void KShortcutWidget_OnChildEvent(KShortcutWidget* self, intptr_t slot);
void KShortcutWidget_QBaseChildEvent(KShortcutWidget* self, QChildEvent* event);
void KShortcutWidget_CustomEvent(KShortcutWidget* self, QEvent* event);
void KShortcutWidget_OnCustomEvent(KShortcutWidget* self, intptr_t slot);
void KShortcutWidget_QBaseCustomEvent(KShortcutWidget* self, QEvent* event);
void KShortcutWidget_ConnectNotify(KShortcutWidget* self, const QMetaMethod* signal);
void KShortcutWidget_OnConnectNotify(KShortcutWidget* self, intptr_t slot);
void KShortcutWidget_QBaseConnectNotify(KShortcutWidget* self, const QMetaMethod* signal);
void KShortcutWidget_DisconnectNotify(KShortcutWidget* self, const QMetaMethod* signal);
void KShortcutWidget_OnDisconnectNotify(KShortcutWidget* self, intptr_t slot);
void KShortcutWidget_QBaseDisconnectNotify(KShortcutWidget* self, const QMetaMethod* signal);
void KShortcutWidget_UpdateMicroFocus(KShortcutWidget* self);
void KShortcutWidget_OnUpdateMicroFocus(KShortcutWidget* self, intptr_t slot);
void KShortcutWidget_QBaseUpdateMicroFocus(KShortcutWidget* self);
void KShortcutWidget_Create(KShortcutWidget* self);
void KShortcutWidget_OnCreate(KShortcutWidget* self, intptr_t slot);
void KShortcutWidget_QBaseCreate(KShortcutWidget* self);
void KShortcutWidget_Destroy(KShortcutWidget* self);
void KShortcutWidget_OnDestroy(KShortcutWidget* self, intptr_t slot);
void KShortcutWidget_QBaseDestroy(KShortcutWidget* self);
bool KShortcutWidget_FocusNextChild(KShortcutWidget* self);
void KShortcutWidget_OnFocusNextChild(KShortcutWidget* self, intptr_t slot);
bool KShortcutWidget_QBaseFocusNextChild(KShortcutWidget* self);
bool KShortcutWidget_FocusPreviousChild(KShortcutWidget* self);
void KShortcutWidget_OnFocusPreviousChild(KShortcutWidget* self, intptr_t slot);
bool KShortcutWidget_QBaseFocusPreviousChild(KShortcutWidget* self);
QObject* KShortcutWidget_Sender(const KShortcutWidget* self);
void KShortcutWidget_OnSender(const KShortcutWidget* self, intptr_t slot);
QObject* KShortcutWidget_QBaseSender(const KShortcutWidget* self);
int KShortcutWidget_SenderSignalIndex(const KShortcutWidget* self);
void KShortcutWidget_OnSenderSignalIndex(const KShortcutWidget* self, intptr_t slot);
int KShortcutWidget_QBaseSenderSignalIndex(const KShortcutWidget* self);
int KShortcutWidget_Receivers(const KShortcutWidget* self, const char* signal);
void KShortcutWidget_OnReceivers(const KShortcutWidget* self, intptr_t slot);
int KShortcutWidget_QBaseReceivers(const KShortcutWidget* self, const char* signal);
bool KShortcutWidget_IsSignalConnected(const KShortcutWidget* self, const QMetaMethod* signal);
void KShortcutWidget_OnIsSignalConnected(const KShortcutWidget* self, intptr_t slot);
bool KShortcutWidget_QBaseIsSignalConnected(const KShortcutWidget* self, const QMetaMethod* signal);
double KShortcutWidget_GetDecodedMetricF(const KShortcutWidget* self, int metricA, int metricB);
void KShortcutWidget_OnGetDecodedMetricF(const KShortcutWidget* self, intptr_t slot);
double KShortcutWidget_QBaseGetDecodedMetricF(const KShortcutWidget* self, int metricA, int metricB);
void KShortcutWidget_Delete(KShortcutWidget* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
