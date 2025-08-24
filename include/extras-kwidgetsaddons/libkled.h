#pragma once
#ifndef SRC_EXTRAS_KWIDGETSADDONSC_LIBKLED_H
#define SRC_EXTRAS_KWIDGETSADDONSC_LIBKLED_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KLed KLed;
typedef struct QActionEvent QActionEvent;
typedef struct QChildEvent QChildEvent;
typedef struct QCloseEvent QCloseEvent;
typedef struct QColor QColor;
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

KLed* KLed_new(QWidget* parent);
KLed* KLed_new2();
KLed* KLed_new3(const QColor* color);
KLed* KLed_new4(const QColor* color, int state, int look, int shape);
KLed* KLed_new5(const QColor* color, QWidget* parent);
KLed* KLed_new6(const QColor* color, int state, int look, int shape, QWidget* parent);
QMetaObject* KLed_MetaObject(const KLed* self);
void* KLed_Metacast(KLed* self, const char* param1);
int KLed_Metacall(KLed* self, int param1, int param2, void** param3);
void KLed_OnMetacall(KLed* self, intptr_t slot);
int KLed_QBaseMetacall(KLed* self, int param1, int param2, void** param3);
libqt_string KLed_Tr(const char* s);
QColor* KLed_Color(const KLed* self);
int KLed_State(const KLed* self);
int KLed_Look(const KLed* self);
int KLed_Shape(const KLed* self);
int KLed_DarkFactor(const KLed* self);
void KLed_SetColor(KLed* self, const QColor* color);
void KLed_SetState(KLed* self, int state);
void KLed_SetLook(KLed* self, int look);
void KLed_SetShape(KLed* self, int shape);
void KLed_SetDarkFactor(KLed* self, int darkFactor);
QSize* KLed_SizeHint(const KLed* self);
void KLed_OnSizeHint(const KLed* self, intptr_t slot);
QSize* KLed_QBaseSizeHint(const KLed* self);
QSize* KLed_MinimumSizeHint(const KLed* self);
void KLed_OnMinimumSizeHint(const KLed* self, intptr_t slot);
QSize* KLed_QBaseMinimumSizeHint(const KLed* self);
void KLed_Toggle(KLed* self);
void KLed_On(KLed* self);
void KLed_Off(KLed* self);
void KLed_PaintEvent(KLed* self, QPaintEvent* param1);
void KLed_OnPaintEvent(KLed* self, intptr_t slot);
void KLed_QBasePaintEvent(KLed* self, QPaintEvent* param1);
void KLed_ResizeEvent(KLed* self, QResizeEvent* param1);
void KLed_OnResizeEvent(KLed* self, intptr_t slot);
void KLed_QBaseResizeEvent(KLed* self, QResizeEvent* param1);
libqt_string KLed_Tr2(const char* s, const char* c);
libqt_string KLed_Tr3(const char* s, const char* c, int n);
int KLed_DevType(const KLed* self);
void KLed_OnDevType(const KLed* self, intptr_t slot);
int KLed_QBaseDevType(const KLed* self);
void KLed_SetVisible(KLed* self, bool visible);
void KLed_OnSetVisible(KLed* self, intptr_t slot);
void KLed_QBaseSetVisible(KLed* self, bool visible);
int KLed_HeightForWidth(const KLed* self, int param1);
void KLed_OnHeightForWidth(const KLed* self, intptr_t slot);
int KLed_QBaseHeightForWidth(const KLed* self, int param1);
bool KLed_HasHeightForWidth(const KLed* self);
void KLed_OnHasHeightForWidth(const KLed* self, intptr_t slot);
bool KLed_QBaseHasHeightForWidth(const KLed* self);
QPaintEngine* KLed_PaintEngine(const KLed* self);
void KLed_OnPaintEngine(const KLed* self, intptr_t slot);
QPaintEngine* KLed_QBasePaintEngine(const KLed* self);
bool KLed_Event(KLed* self, QEvent* event);
void KLed_OnEvent(KLed* self, intptr_t slot);
bool KLed_QBaseEvent(KLed* self, QEvent* event);
void KLed_MousePressEvent(KLed* self, QMouseEvent* event);
void KLed_OnMousePressEvent(KLed* self, intptr_t slot);
void KLed_QBaseMousePressEvent(KLed* self, QMouseEvent* event);
void KLed_MouseReleaseEvent(KLed* self, QMouseEvent* event);
void KLed_OnMouseReleaseEvent(KLed* self, intptr_t slot);
void KLed_QBaseMouseReleaseEvent(KLed* self, QMouseEvent* event);
void KLed_MouseDoubleClickEvent(KLed* self, QMouseEvent* event);
void KLed_OnMouseDoubleClickEvent(KLed* self, intptr_t slot);
void KLed_QBaseMouseDoubleClickEvent(KLed* self, QMouseEvent* event);
void KLed_MouseMoveEvent(KLed* self, QMouseEvent* event);
void KLed_OnMouseMoveEvent(KLed* self, intptr_t slot);
void KLed_QBaseMouseMoveEvent(KLed* self, QMouseEvent* event);
void KLed_WheelEvent(KLed* self, QWheelEvent* event);
void KLed_OnWheelEvent(KLed* self, intptr_t slot);
void KLed_QBaseWheelEvent(KLed* self, QWheelEvent* event);
void KLed_KeyPressEvent(KLed* self, QKeyEvent* event);
void KLed_OnKeyPressEvent(KLed* self, intptr_t slot);
void KLed_QBaseKeyPressEvent(KLed* self, QKeyEvent* event);
void KLed_KeyReleaseEvent(KLed* self, QKeyEvent* event);
void KLed_OnKeyReleaseEvent(KLed* self, intptr_t slot);
void KLed_QBaseKeyReleaseEvent(KLed* self, QKeyEvent* event);
void KLed_FocusInEvent(KLed* self, QFocusEvent* event);
void KLed_OnFocusInEvent(KLed* self, intptr_t slot);
void KLed_QBaseFocusInEvent(KLed* self, QFocusEvent* event);
void KLed_FocusOutEvent(KLed* self, QFocusEvent* event);
void KLed_OnFocusOutEvent(KLed* self, intptr_t slot);
void KLed_QBaseFocusOutEvent(KLed* self, QFocusEvent* event);
void KLed_EnterEvent(KLed* self, QEnterEvent* event);
void KLed_OnEnterEvent(KLed* self, intptr_t slot);
void KLed_QBaseEnterEvent(KLed* self, QEnterEvent* event);
void KLed_LeaveEvent(KLed* self, QEvent* event);
void KLed_OnLeaveEvent(KLed* self, intptr_t slot);
void KLed_QBaseLeaveEvent(KLed* self, QEvent* event);
void KLed_MoveEvent(KLed* self, QMoveEvent* event);
void KLed_OnMoveEvent(KLed* self, intptr_t slot);
void KLed_QBaseMoveEvent(KLed* self, QMoveEvent* event);
void KLed_CloseEvent(KLed* self, QCloseEvent* event);
void KLed_OnCloseEvent(KLed* self, intptr_t slot);
void KLed_QBaseCloseEvent(KLed* self, QCloseEvent* event);
void KLed_ContextMenuEvent(KLed* self, QContextMenuEvent* event);
void KLed_OnContextMenuEvent(KLed* self, intptr_t slot);
void KLed_QBaseContextMenuEvent(KLed* self, QContextMenuEvent* event);
void KLed_TabletEvent(KLed* self, QTabletEvent* event);
void KLed_OnTabletEvent(KLed* self, intptr_t slot);
void KLed_QBaseTabletEvent(KLed* self, QTabletEvent* event);
void KLed_ActionEvent(KLed* self, QActionEvent* event);
void KLed_OnActionEvent(KLed* self, intptr_t slot);
void KLed_QBaseActionEvent(KLed* self, QActionEvent* event);
void KLed_DragEnterEvent(KLed* self, QDragEnterEvent* event);
void KLed_OnDragEnterEvent(KLed* self, intptr_t slot);
void KLed_QBaseDragEnterEvent(KLed* self, QDragEnterEvent* event);
void KLed_DragMoveEvent(KLed* self, QDragMoveEvent* event);
void KLed_OnDragMoveEvent(KLed* self, intptr_t slot);
void KLed_QBaseDragMoveEvent(KLed* self, QDragMoveEvent* event);
void KLed_DragLeaveEvent(KLed* self, QDragLeaveEvent* event);
void KLed_OnDragLeaveEvent(KLed* self, intptr_t slot);
void KLed_QBaseDragLeaveEvent(KLed* self, QDragLeaveEvent* event);
void KLed_DropEvent(KLed* self, QDropEvent* event);
void KLed_OnDropEvent(KLed* self, intptr_t slot);
void KLed_QBaseDropEvent(KLed* self, QDropEvent* event);
void KLed_ShowEvent(KLed* self, QShowEvent* event);
void KLed_OnShowEvent(KLed* self, intptr_t slot);
void KLed_QBaseShowEvent(KLed* self, QShowEvent* event);
void KLed_HideEvent(KLed* self, QHideEvent* event);
void KLed_OnHideEvent(KLed* self, intptr_t slot);
void KLed_QBaseHideEvent(KLed* self, QHideEvent* event);
bool KLed_NativeEvent(KLed* self, const libqt_string eventType, void* message, intptr_t* result);
void KLed_OnNativeEvent(KLed* self, intptr_t slot);
bool KLed_QBaseNativeEvent(KLed* self, const libqt_string eventType, void* message, intptr_t* result);
void KLed_ChangeEvent(KLed* self, QEvent* param1);
void KLed_OnChangeEvent(KLed* self, intptr_t slot);
void KLed_QBaseChangeEvent(KLed* self, QEvent* param1);
int KLed_Metric(const KLed* self, int param1);
void KLed_OnMetric(const KLed* self, intptr_t slot);
int KLed_QBaseMetric(const KLed* self, int param1);
void KLed_InitPainter(const KLed* self, QPainter* painter);
void KLed_OnInitPainter(const KLed* self, intptr_t slot);
void KLed_QBaseInitPainter(const KLed* self, QPainter* painter);
QPaintDevice* KLed_Redirected(const KLed* self, QPoint* offset);
void KLed_OnRedirected(const KLed* self, intptr_t slot);
QPaintDevice* KLed_QBaseRedirected(const KLed* self, QPoint* offset);
QPainter* KLed_SharedPainter(const KLed* self);
void KLed_OnSharedPainter(const KLed* self, intptr_t slot);
QPainter* KLed_QBaseSharedPainter(const KLed* self);
void KLed_InputMethodEvent(KLed* self, QInputMethodEvent* param1);
void KLed_OnInputMethodEvent(KLed* self, intptr_t slot);
void KLed_QBaseInputMethodEvent(KLed* self, QInputMethodEvent* param1);
QVariant* KLed_InputMethodQuery(const KLed* self, int param1);
void KLed_OnInputMethodQuery(const KLed* self, intptr_t slot);
QVariant* KLed_QBaseInputMethodQuery(const KLed* self, int param1);
bool KLed_FocusNextPrevChild(KLed* self, bool next);
void KLed_OnFocusNextPrevChild(KLed* self, intptr_t slot);
bool KLed_QBaseFocusNextPrevChild(KLed* self, bool next);
bool KLed_EventFilter(KLed* self, QObject* watched, QEvent* event);
void KLed_OnEventFilter(KLed* self, intptr_t slot);
bool KLed_QBaseEventFilter(KLed* self, QObject* watched, QEvent* event);
void KLed_TimerEvent(KLed* self, QTimerEvent* event);
void KLed_OnTimerEvent(KLed* self, intptr_t slot);
void KLed_QBaseTimerEvent(KLed* self, QTimerEvent* event);
void KLed_ChildEvent(KLed* self, QChildEvent* event);
void KLed_OnChildEvent(KLed* self, intptr_t slot);
void KLed_QBaseChildEvent(KLed* self, QChildEvent* event);
void KLed_CustomEvent(KLed* self, QEvent* event);
void KLed_OnCustomEvent(KLed* self, intptr_t slot);
void KLed_QBaseCustomEvent(KLed* self, QEvent* event);
void KLed_ConnectNotify(KLed* self, const QMetaMethod* signal);
void KLed_OnConnectNotify(KLed* self, intptr_t slot);
void KLed_QBaseConnectNotify(KLed* self, const QMetaMethod* signal);
void KLed_DisconnectNotify(KLed* self, const QMetaMethod* signal);
void KLed_OnDisconnectNotify(KLed* self, intptr_t slot);
void KLed_QBaseDisconnectNotify(KLed* self, const QMetaMethod* signal);
void KLed_UpdateMicroFocus(KLed* self);
void KLed_OnUpdateMicroFocus(KLed* self, intptr_t slot);
void KLed_QBaseUpdateMicroFocus(KLed* self);
void KLed_Create(KLed* self);
void KLed_OnCreate(KLed* self, intptr_t slot);
void KLed_QBaseCreate(KLed* self);
void KLed_Destroy(KLed* self);
void KLed_OnDestroy(KLed* self, intptr_t slot);
void KLed_QBaseDestroy(KLed* self);
bool KLed_FocusNextChild(KLed* self);
void KLed_OnFocusNextChild(KLed* self, intptr_t slot);
bool KLed_QBaseFocusNextChild(KLed* self);
bool KLed_FocusPreviousChild(KLed* self);
void KLed_OnFocusPreviousChild(KLed* self, intptr_t slot);
bool KLed_QBaseFocusPreviousChild(KLed* self);
QObject* KLed_Sender(const KLed* self);
void KLed_OnSender(const KLed* self, intptr_t slot);
QObject* KLed_QBaseSender(const KLed* self);
int KLed_SenderSignalIndex(const KLed* self);
void KLed_OnSenderSignalIndex(const KLed* self, intptr_t slot);
int KLed_QBaseSenderSignalIndex(const KLed* self);
int KLed_Receivers(const KLed* self, const char* signal);
void KLed_OnReceivers(const KLed* self, intptr_t slot);
int KLed_QBaseReceivers(const KLed* self, const char* signal);
bool KLed_IsSignalConnected(const KLed* self, const QMetaMethod* signal);
void KLed_OnIsSignalConnected(const KLed* self, intptr_t slot);
bool KLed_QBaseIsSignalConnected(const KLed* self, const QMetaMethod* signal);
double KLed_GetDecodedMetricF(const KLed* self, int metricA, int metricB);
void KLed_OnGetDecodedMetricF(const KLed* self, intptr_t slot);
double KLed_QBaseGetDecodedMetricF(const KLed* self, int metricA, int metricB);
void KLed_Delete(KLed* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
