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
libqt_string KShortcutsEditor_Tr(const char* s);
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
libqt_string KShortcutsEditor_Tr2(const char* s, const char* c);
libqt_string KShortcutsEditor_Tr3(const char* s, const char* c, int n);
void KShortcutsEditor_AddCollection2(KShortcutsEditor* self, KActionCollection* param1, const libqt_string title);
void KShortcutsEditor_OnMetacall(KShortcutsEditor* self, intptr_t slot);
int KShortcutsEditor_QBaseMetacall(KShortcutsEditor* self, int param1, int param2, void** param3);
int KShortcutsEditor_DevType(const KShortcutsEditor* self);
void KShortcutsEditor_OnDevType(const KShortcutsEditor* self, intptr_t slot);
int KShortcutsEditor_QBaseDevType(const KShortcutsEditor* self);
void KShortcutsEditor_SetVisible(KShortcutsEditor* self, bool visible);
void KShortcutsEditor_OnSetVisible(KShortcutsEditor* self, intptr_t slot);
void KShortcutsEditor_QBaseSetVisible(KShortcutsEditor* self, bool visible);
QSize* KShortcutsEditor_SizeHint(const KShortcutsEditor* self);
void KShortcutsEditor_OnSizeHint(const KShortcutsEditor* self, intptr_t slot);
QSize* KShortcutsEditor_QBaseSizeHint(const KShortcutsEditor* self);
QSize* KShortcutsEditor_MinimumSizeHint(const KShortcutsEditor* self);
void KShortcutsEditor_OnMinimumSizeHint(const KShortcutsEditor* self, intptr_t slot);
QSize* KShortcutsEditor_QBaseMinimumSizeHint(const KShortcutsEditor* self);
int KShortcutsEditor_HeightForWidth(const KShortcutsEditor* self, int param1);
void KShortcutsEditor_OnHeightForWidth(const KShortcutsEditor* self, intptr_t slot);
int KShortcutsEditor_QBaseHeightForWidth(const KShortcutsEditor* self, int param1);
bool KShortcutsEditor_HasHeightForWidth(const KShortcutsEditor* self);
void KShortcutsEditor_OnHasHeightForWidth(const KShortcutsEditor* self, intptr_t slot);
bool KShortcutsEditor_QBaseHasHeightForWidth(const KShortcutsEditor* self);
QPaintEngine* KShortcutsEditor_PaintEngine(const KShortcutsEditor* self);
void KShortcutsEditor_OnPaintEngine(const KShortcutsEditor* self, intptr_t slot);
QPaintEngine* KShortcutsEditor_QBasePaintEngine(const KShortcutsEditor* self);
bool KShortcutsEditor_Event(KShortcutsEditor* self, QEvent* event);
void KShortcutsEditor_OnEvent(KShortcutsEditor* self, intptr_t slot);
bool KShortcutsEditor_QBaseEvent(KShortcutsEditor* self, QEvent* event);
void KShortcutsEditor_MousePressEvent(KShortcutsEditor* self, QMouseEvent* event);
void KShortcutsEditor_OnMousePressEvent(KShortcutsEditor* self, intptr_t slot);
void KShortcutsEditor_QBaseMousePressEvent(KShortcutsEditor* self, QMouseEvent* event);
void KShortcutsEditor_MouseReleaseEvent(KShortcutsEditor* self, QMouseEvent* event);
void KShortcutsEditor_OnMouseReleaseEvent(KShortcutsEditor* self, intptr_t slot);
void KShortcutsEditor_QBaseMouseReleaseEvent(KShortcutsEditor* self, QMouseEvent* event);
void KShortcutsEditor_MouseDoubleClickEvent(KShortcutsEditor* self, QMouseEvent* event);
void KShortcutsEditor_OnMouseDoubleClickEvent(KShortcutsEditor* self, intptr_t slot);
void KShortcutsEditor_QBaseMouseDoubleClickEvent(KShortcutsEditor* self, QMouseEvent* event);
void KShortcutsEditor_MouseMoveEvent(KShortcutsEditor* self, QMouseEvent* event);
void KShortcutsEditor_OnMouseMoveEvent(KShortcutsEditor* self, intptr_t slot);
void KShortcutsEditor_QBaseMouseMoveEvent(KShortcutsEditor* self, QMouseEvent* event);
void KShortcutsEditor_WheelEvent(KShortcutsEditor* self, QWheelEvent* event);
void KShortcutsEditor_OnWheelEvent(KShortcutsEditor* self, intptr_t slot);
void KShortcutsEditor_QBaseWheelEvent(KShortcutsEditor* self, QWheelEvent* event);
void KShortcutsEditor_KeyPressEvent(KShortcutsEditor* self, QKeyEvent* event);
void KShortcutsEditor_OnKeyPressEvent(KShortcutsEditor* self, intptr_t slot);
void KShortcutsEditor_QBaseKeyPressEvent(KShortcutsEditor* self, QKeyEvent* event);
void KShortcutsEditor_KeyReleaseEvent(KShortcutsEditor* self, QKeyEvent* event);
void KShortcutsEditor_OnKeyReleaseEvent(KShortcutsEditor* self, intptr_t slot);
void KShortcutsEditor_QBaseKeyReleaseEvent(KShortcutsEditor* self, QKeyEvent* event);
void KShortcutsEditor_FocusInEvent(KShortcutsEditor* self, QFocusEvent* event);
void KShortcutsEditor_OnFocusInEvent(KShortcutsEditor* self, intptr_t slot);
void KShortcutsEditor_QBaseFocusInEvent(KShortcutsEditor* self, QFocusEvent* event);
void KShortcutsEditor_FocusOutEvent(KShortcutsEditor* self, QFocusEvent* event);
void KShortcutsEditor_OnFocusOutEvent(KShortcutsEditor* self, intptr_t slot);
void KShortcutsEditor_QBaseFocusOutEvent(KShortcutsEditor* self, QFocusEvent* event);
void KShortcutsEditor_EnterEvent(KShortcutsEditor* self, QEnterEvent* event);
void KShortcutsEditor_OnEnterEvent(KShortcutsEditor* self, intptr_t slot);
void KShortcutsEditor_QBaseEnterEvent(KShortcutsEditor* self, QEnterEvent* event);
void KShortcutsEditor_LeaveEvent(KShortcutsEditor* self, QEvent* event);
void KShortcutsEditor_OnLeaveEvent(KShortcutsEditor* self, intptr_t slot);
void KShortcutsEditor_QBaseLeaveEvent(KShortcutsEditor* self, QEvent* event);
void KShortcutsEditor_PaintEvent(KShortcutsEditor* self, QPaintEvent* event);
void KShortcutsEditor_OnPaintEvent(KShortcutsEditor* self, intptr_t slot);
void KShortcutsEditor_QBasePaintEvent(KShortcutsEditor* self, QPaintEvent* event);
void KShortcutsEditor_MoveEvent(KShortcutsEditor* self, QMoveEvent* event);
void KShortcutsEditor_OnMoveEvent(KShortcutsEditor* self, intptr_t slot);
void KShortcutsEditor_QBaseMoveEvent(KShortcutsEditor* self, QMoveEvent* event);
void KShortcutsEditor_ResizeEvent(KShortcutsEditor* self, QResizeEvent* event);
void KShortcutsEditor_OnResizeEvent(KShortcutsEditor* self, intptr_t slot);
void KShortcutsEditor_QBaseResizeEvent(KShortcutsEditor* self, QResizeEvent* event);
void KShortcutsEditor_CloseEvent(KShortcutsEditor* self, QCloseEvent* event);
void KShortcutsEditor_OnCloseEvent(KShortcutsEditor* self, intptr_t slot);
void KShortcutsEditor_QBaseCloseEvent(KShortcutsEditor* self, QCloseEvent* event);
void KShortcutsEditor_ContextMenuEvent(KShortcutsEditor* self, QContextMenuEvent* event);
void KShortcutsEditor_OnContextMenuEvent(KShortcutsEditor* self, intptr_t slot);
void KShortcutsEditor_QBaseContextMenuEvent(KShortcutsEditor* self, QContextMenuEvent* event);
void KShortcutsEditor_TabletEvent(KShortcutsEditor* self, QTabletEvent* event);
void KShortcutsEditor_OnTabletEvent(KShortcutsEditor* self, intptr_t slot);
void KShortcutsEditor_QBaseTabletEvent(KShortcutsEditor* self, QTabletEvent* event);
void KShortcutsEditor_ActionEvent(KShortcutsEditor* self, QActionEvent* event);
void KShortcutsEditor_OnActionEvent(KShortcutsEditor* self, intptr_t slot);
void KShortcutsEditor_QBaseActionEvent(KShortcutsEditor* self, QActionEvent* event);
void KShortcutsEditor_DragEnterEvent(KShortcutsEditor* self, QDragEnterEvent* event);
void KShortcutsEditor_OnDragEnterEvent(KShortcutsEditor* self, intptr_t slot);
void KShortcutsEditor_QBaseDragEnterEvent(KShortcutsEditor* self, QDragEnterEvent* event);
void KShortcutsEditor_DragMoveEvent(KShortcutsEditor* self, QDragMoveEvent* event);
void KShortcutsEditor_OnDragMoveEvent(KShortcutsEditor* self, intptr_t slot);
void KShortcutsEditor_QBaseDragMoveEvent(KShortcutsEditor* self, QDragMoveEvent* event);
void KShortcutsEditor_DragLeaveEvent(KShortcutsEditor* self, QDragLeaveEvent* event);
void KShortcutsEditor_OnDragLeaveEvent(KShortcutsEditor* self, intptr_t slot);
void KShortcutsEditor_QBaseDragLeaveEvent(KShortcutsEditor* self, QDragLeaveEvent* event);
void KShortcutsEditor_DropEvent(KShortcutsEditor* self, QDropEvent* event);
void KShortcutsEditor_OnDropEvent(KShortcutsEditor* self, intptr_t slot);
void KShortcutsEditor_QBaseDropEvent(KShortcutsEditor* self, QDropEvent* event);
void KShortcutsEditor_ShowEvent(KShortcutsEditor* self, QShowEvent* event);
void KShortcutsEditor_OnShowEvent(KShortcutsEditor* self, intptr_t slot);
void KShortcutsEditor_QBaseShowEvent(KShortcutsEditor* self, QShowEvent* event);
void KShortcutsEditor_HideEvent(KShortcutsEditor* self, QHideEvent* event);
void KShortcutsEditor_OnHideEvent(KShortcutsEditor* self, intptr_t slot);
void KShortcutsEditor_QBaseHideEvent(KShortcutsEditor* self, QHideEvent* event);
bool KShortcutsEditor_NativeEvent(KShortcutsEditor* self, const libqt_string eventType, void* message, intptr_t* result);
void KShortcutsEditor_OnNativeEvent(KShortcutsEditor* self, intptr_t slot);
bool KShortcutsEditor_QBaseNativeEvent(KShortcutsEditor* self, const libqt_string eventType, void* message, intptr_t* result);
void KShortcutsEditor_ChangeEvent(KShortcutsEditor* self, QEvent* param1);
void KShortcutsEditor_OnChangeEvent(KShortcutsEditor* self, intptr_t slot);
void KShortcutsEditor_QBaseChangeEvent(KShortcutsEditor* self, QEvent* param1);
int KShortcutsEditor_Metric(const KShortcutsEditor* self, int param1);
void KShortcutsEditor_OnMetric(const KShortcutsEditor* self, intptr_t slot);
int KShortcutsEditor_QBaseMetric(const KShortcutsEditor* self, int param1);
void KShortcutsEditor_InitPainter(const KShortcutsEditor* self, QPainter* painter);
void KShortcutsEditor_OnInitPainter(const KShortcutsEditor* self, intptr_t slot);
void KShortcutsEditor_QBaseInitPainter(const KShortcutsEditor* self, QPainter* painter);
QPaintDevice* KShortcutsEditor_Redirected(const KShortcutsEditor* self, QPoint* offset);
void KShortcutsEditor_OnRedirected(const KShortcutsEditor* self, intptr_t slot);
QPaintDevice* KShortcutsEditor_QBaseRedirected(const KShortcutsEditor* self, QPoint* offset);
QPainter* KShortcutsEditor_SharedPainter(const KShortcutsEditor* self);
void KShortcutsEditor_OnSharedPainter(const KShortcutsEditor* self, intptr_t slot);
QPainter* KShortcutsEditor_QBaseSharedPainter(const KShortcutsEditor* self);
void KShortcutsEditor_InputMethodEvent(KShortcutsEditor* self, QInputMethodEvent* param1);
void KShortcutsEditor_OnInputMethodEvent(KShortcutsEditor* self, intptr_t slot);
void KShortcutsEditor_QBaseInputMethodEvent(KShortcutsEditor* self, QInputMethodEvent* param1);
QVariant* KShortcutsEditor_InputMethodQuery(const KShortcutsEditor* self, int param1);
void KShortcutsEditor_OnInputMethodQuery(const KShortcutsEditor* self, intptr_t slot);
QVariant* KShortcutsEditor_QBaseInputMethodQuery(const KShortcutsEditor* self, int param1);
bool KShortcutsEditor_FocusNextPrevChild(KShortcutsEditor* self, bool next);
void KShortcutsEditor_OnFocusNextPrevChild(KShortcutsEditor* self, intptr_t slot);
bool KShortcutsEditor_QBaseFocusNextPrevChild(KShortcutsEditor* self, bool next);
bool KShortcutsEditor_EventFilter(KShortcutsEditor* self, QObject* watched, QEvent* event);
void KShortcutsEditor_OnEventFilter(KShortcutsEditor* self, intptr_t slot);
bool KShortcutsEditor_QBaseEventFilter(KShortcutsEditor* self, QObject* watched, QEvent* event);
void KShortcutsEditor_TimerEvent(KShortcutsEditor* self, QTimerEvent* event);
void KShortcutsEditor_OnTimerEvent(KShortcutsEditor* self, intptr_t slot);
void KShortcutsEditor_QBaseTimerEvent(KShortcutsEditor* self, QTimerEvent* event);
void KShortcutsEditor_ChildEvent(KShortcutsEditor* self, QChildEvent* event);
void KShortcutsEditor_OnChildEvent(KShortcutsEditor* self, intptr_t slot);
void KShortcutsEditor_QBaseChildEvent(KShortcutsEditor* self, QChildEvent* event);
void KShortcutsEditor_CustomEvent(KShortcutsEditor* self, QEvent* event);
void KShortcutsEditor_OnCustomEvent(KShortcutsEditor* self, intptr_t slot);
void KShortcutsEditor_QBaseCustomEvent(KShortcutsEditor* self, QEvent* event);
void KShortcutsEditor_ConnectNotify(KShortcutsEditor* self, const QMetaMethod* signal);
void KShortcutsEditor_OnConnectNotify(KShortcutsEditor* self, intptr_t slot);
void KShortcutsEditor_QBaseConnectNotify(KShortcutsEditor* self, const QMetaMethod* signal);
void KShortcutsEditor_DisconnectNotify(KShortcutsEditor* self, const QMetaMethod* signal);
void KShortcutsEditor_OnDisconnectNotify(KShortcutsEditor* self, intptr_t slot);
void KShortcutsEditor_QBaseDisconnectNotify(KShortcutsEditor* self, const QMetaMethod* signal);
void KShortcutsEditor_UpdateMicroFocus(KShortcutsEditor* self);
void KShortcutsEditor_OnUpdateMicroFocus(KShortcutsEditor* self, intptr_t slot);
void KShortcutsEditor_QBaseUpdateMicroFocus(KShortcutsEditor* self);
void KShortcutsEditor_Create(KShortcutsEditor* self);
void KShortcutsEditor_OnCreate(KShortcutsEditor* self, intptr_t slot);
void KShortcutsEditor_QBaseCreate(KShortcutsEditor* self);
void KShortcutsEditor_Destroy(KShortcutsEditor* self);
void KShortcutsEditor_OnDestroy(KShortcutsEditor* self, intptr_t slot);
void KShortcutsEditor_QBaseDestroy(KShortcutsEditor* self);
bool KShortcutsEditor_FocusNextChild(KShortcutsEditor* self);
void KShortcutsEditor_OnFocusNextChild(KShortcutsEditor* self, intptr_t slot);
bool KShortcutsEditor_QBaseFocusNextChild(KShortcutsEditor* self);
bool KShortcutsEditor_FocusPreviousChild(KShortcutsEditor* self);
void KShortcutsEditor_OnFocusPreviousChild(KShortcutsEditor* self, intptr_t slot);
bool KShortcutsEditor_QBaseFocusPreviousChild(KShortcutsEditor* self);
QObject* KShortcutsEditor_Sender(const KShortcutsEditor* self);
void KShortcutsEditor_OnSender(const KShortcutsEditor* self, intptr_t slot);
QObject* KShortcutsEditor_QBaseSender(const KShortcutsEditor* self);
int KShortcutsEditor_SenderSignalIndex(const KShortcutsEditor* self);
void KShortcutsEditor_OnSenderSignalIndex(const KShortcutsEditor* self, intptr_t slot);
int KShortcutsEditor_QBaseSenderSignalIndex(const KShortcutsEditor* self);
int KShortcutsEditor_Receivers(const KShortcutsEditor* self, const char* signal);
void KShortcutsEditor_OnReceivers(const KShortcutsEditor* self, intptr_t slot);
int KShortcutsEditor_QBaseReceivers(const KShortcutsEditor* self, const char* signal);
bool KShortcutsEditor_IsSignalConnected(const KShortcutsEditor* self, const QMetaMethod* signal);
void KShortcutsEditor_OnIsSignalConnected(const KShortcutsEditor* self, intptr_t slot);
bool KShortcutsEditor_QBaseIsSignalConnected(const KShortcutsEditor* self, const QMetaMethod* signal);
double KShortcutsEditor_GetDecodedMetricF(const KShortcutsEditor* self, int metricA, int metricB);
void KShortcutsEditor_OnGetDecodedMetricF(const KShortcutsEditor* self, intptr_t slot);
double KShortcutsEditor_QBaseGetDecodedMetricF(const KShortcutsEditor* self, int metricA, int metricB);
void KShortcutsEditor_Delete(KShortcutsEditor* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
