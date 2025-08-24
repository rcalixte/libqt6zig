#pragma once
#ifndef SRC_EXTRAS_KWIDGETSADDONSC_LIBKANIMATEDBUTTON_H
#define SRC_EXTRAS_KWIDGETSADDONSC_LIBKANIMATEDBUTTON_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KAnimatedButton KAnimatedButton;
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
typedef struct QResizeEvent QResizeEvent;
typedef struct QShowEvent QShowEvent;
typedef struct QSize QSize;
typedef struct QStyleOptionToolButton QStyleOptionToolButton;
typedef struct QTabletEvent QTabletEvent;
typedef struct QTimerEvent QTimerEvent;
typedef struct QToolButton QToolButton;
typedef struct QVariant QVariant;
typedef struct QWheelEvent QWheelEvent;
typedef struct QWidget QWidget;
#endif

KAnimatedButton* KAnimatedButton_new(QWidget* parent);
KAnimatedButton* KAnimatedButton_new2();
QMetaObject* KAnimatedButton_MetaObject(const KAnimatedButton* self);
void* KAnimatedButton_Metacast(KAnimatedButton* self, const char* param1);
int KAnimatedButton_Metacall(KAnimatedButton* self, int param1, int param2, void** param3);
void KAnimatedButton_OnMetacall(KAnimatedButton* self, intptr_t slot);
int KAnimatedButton_QBaseMetacall(KAnimatedButton* self, int param1, int param2, void** param3);
libqt_string KAnimatedButton_Tr(const char* s);
libqt_string KAnimatedButton_AnimationPath(const KAnimatedButton* self);
void KAnimatedButton_SetAnimationPath(KAnimatedButton* self, const libqt_string path);
void KAnimatedButton_Start(KAnimatedButton* self);
void KAnimatedButton_Stop(KAnimatedButton* self);
libqt_string KAnimatedButton_Tr2(const char* s, const char* c);
libqt_string KAnimatedButton_Tr3(const char* s, const char* c, int n);
QSize* KAnimatedButton_SizeHint(const KAnimatedButton* self);
void KAnimatedButton_OnSizeHint(const KAnimatedButton* self, intptr_t slot);
QSize* KAnimatedButton_QBaseSizeHint(const KAnimatedButton* self);
QSize* KAnimatedButton_MinimumSizeHint(const KAnimatedButton* self);
void KAnimatedButton_OnMinimumSizeHint(const KAnimatedButton* self, intptr_t slot);
QSize* KAnimatedButton_QBaseMinimumSizeHint(const KAnimatedButton* self);
bool KAnimatedButton_Event(KAnimatedButton* self, QEvent* e);
void KAnimatedButton_OnEvent(KAnimatedButton* self, intptr_t slot);
bool KAnimatedButton_QBaseEvent(KAnimatedButton* self, QEvent* e);
void KAnimatedButton_MousePressEvent(KAnimatedButton* self, QMouseEvent* param1);
void KAnimatedButton_OnMousePressEvent(KAnimatedButton* self, intptr_t slot);
void KAnimatedButton_QBaseMousePressEvent(KAnimatedButton* self, QMouseEvent* param1);
void KAnimatedButton_MouseReleaseEvent(KAnimatedButton* self, QMouseEvent* param1);
void KAnimatedButton_OnMouseReleaseEvent(KAnimatedButton* self, intptr_t slot);
void KAnimatedButton_QBaseMouseReleaseEvent(KAnimatedButton* self, QMouseEvent* param1);
void KAnimatedButton_PaintEvent(KAnimatedButton* self, QPaintEvent* param1);
void KAnimatedButton_OnPaintEvent(KAnimatedButton* self, intptr_t slot);
void KAnimatedButton_QBasePaintEvent(KAnimatedButton* self, QPaintEvent* param1);
void KAnimatedButton_ActionEvent(KAnimatedButton* self, QActionEvent* param1);
void KAnimatedButton_OnActionEvent(KAnimatedButton* self, intptr_t slot);
void KAnimatedButton_QBaseActionEvent(KAnimatedButton* self, QActionEvent* param1);
void KAnimatedButton_EnterEvent(KAnimatedButton* self, QEnterEvent* param1);
void KAnimatedButton_OnEnterEvent(KAnimatedButton* self, intptr_t slot);
void KAnimatedButton_QBaseEnterEvent(KAnimatedButton* self, QEnterEvent* param1);
void KAnimatedButton_LeaveEvent(KAnimatedButton* self, QEvent* param1);
void KAnimatedButton_OnLeaveEvent(KAnimatedButton* self, intptr_t slot);
void KAnimatedButton_QBaseLeaveEvent(KAnimatedButton* self, QEvent* param1);
void KAnimatedButton_TimerEvent(KAnimatedButton* self, QTimerEvent* param1);
void KAnimatedButton_OnTimerEvent(KAnimatedButton* self, intptr_t slot);
void KAnimatedButton_QBaseTimerEvent(KAnimatedButton* self, QTimerEvent* param1);
void KAnimatedButton_ChangeEvent(KAnimatedButton* self, QEvent* param1);
void KAnimatedButton_OnChangeEvent(KAnimatedButton* self, intptr_t slot);
void KAnimatedButton_QBaseChangeEvent(KAnimatedButton* self, QEvent* param1);
bool KAnimatedButton_HitButton(const KAnimatedButton* self, const QPoint* pos);
void KAnimatedButton_OnHitButton(const KAnimatedButton* self, intptr_t slot);
bool KAnimatedButton_QBaseHitButton(const KAnimatedButton* self, const QPoint* pos);
void KAnimatedButton_CheckStateSet(KAnimatedButton* self);
void KAnimatedButton_OnCheckStateSet(KAnimatedButton* self, intptr_t slot);
void KAnimatedButton_QBaseCheckStateSet(KAnimatedButton* self);
void KAnimatedButton_NextCheckState(KAnimatedButton* self);
void KAnimatedButton_OnNextCheckState(KAnimatedButton* self, intptr_t slot);
void KAnimatedButton_QBaseNextCheckState(KAnimatedButton* self);
void KAnimatedButton_InitStyleOption(const KAnimatedButton* self, QStyleOptionToolButton* option);
void KAnimatedButton_OnInitStyleOption(const KAnimatedButton* self, intptr_t slot);
void KAnimatedButton_QBaseInitStyleOption(const KAnimatedButton* self, QStyleOptionToolButton* option);
void KAnimatedButton_KeyPressEvent(KAnimatedButton* self, QKeyEvent* e);
void KAnimatedButton_OnKeyPressEvent(KAnimatedButton* self, intptr_t slot);
void KAnimatedButton_QBaseKeyPressEvent(KAnimatedButton* self, QKeyEvent* e);
void KAnimatedButton_KeyReleaseEvent(KAnimatedButton* self, QKeyEvent* e);
void KAnimatedButton_OnKeyReleaseEvent(KAnimatedButton* self, intptr_t slot);
void KAnimatedButton_QBaseKeyReleaseEvent(KAnimatedButton* self, QKeyEvent* e);
void KAnimatedButton_MouseMoveEvent(KAnimatedButton* self, QMouseEvent* e);
void KAnimatedButton_OnMouseMoveEvent(KAnimatedButton* self, intptr_t slot);
void KAnimatedButton_QBaseMouseMoveEvent(KAnimatedButton* self, QMouseEvent* e);
void KAnimatedButton_FocusInEvent(KAnimatedButton* self, QFocusEvent* e);
void KAnimatedButton_OnFocusInEvent(KAnimatedButton* self, intptr_t slot);
void KAnimatedButton_QBaseFocusInEvent(KAnimatedButton* self, QFocusEvent* e);
void KAnimatedButton_FocusOutEvent(KAnimatedButton* self, QFocusEvent* e);
void KAnimatedButton_OnFocusOutEvent(KAnimatedButton* self, intptr_t slot);
void KAnimatedButton_QBaseFocusOutEvent(KAnimatedButton* self, QFocusEvent* e);
int KAnimatedButton_DevType(const KAnimatedButton* self);
void KAnimatedButton_OnDevType(const KAnimatedButton* self, intptr_t slot);
int KAnimatedButton_QBaseDevType(const KAnimatedButton* self);
void KAnimatedButton_SetVisible(KAnimatedButton* self, bool visible);
void KAnimatedButton_OnSetVisible(KAnimatedButton* self, intptr_t slot);
void KAnimatedButton_QBaseSetVisible(KAnimatedButton* self, bool visible);
int KAnimatedButton_HeightForWidth(const KAnimatedButton* self, int param1);
void KAnimatedButton_OnHeightForWidth(const KAnimatedButton* self, intptr_t slot);
int KAnimatedButton_QBaseHeightForWidth(const KAnimatedButton* self, int param1);
bool KAnimatedButton_HasHeightForWidth(const KAnimatedButton* self);
void KAnimatedButton_OnHasHeightForWidth(const KAnimatedButton* self, intptr_t slot);
bool KAnimatedButton_QBaseHasHeightForWidth(const KAnimatedButton* self);
QPaintEngine* KAnimatedButton_PaintEngine(const KAnimatedButton* self);
void KAnimatedButton_OnPaintEngine(const KAnimatedButton* self, intptr_t slot);
QPaintEngine* KAnimatedButton_QBasePaintEngine(const KAnimatedButton* self);
void KAnimatedButton_MouseDoubleClickEvent(KAnimatedButton* self, QMouseEvent* event);
void KAnimatedButton_OnMouseDoubleClickEvent(KAnimatedButton* self, intptr_t slot);
void KAnimatedButton_QBaseMouseDoubleClickEvent(KAnimatedButton* self, QMouseEvent* event);
void KAnimatedButton_WheelEvent(KAnimatedButton* self, QWheelEvent* event);
void KAnimatedButton_OnWheelEvent(KAnimatedButton* self, intptr_t slot);
void KAnimatedButton_QBaseWheelEvent(KAnimatedButton* self, QWheelEvent* event);
void KAnimatedButton_MoveEvent(KAnimatedButton* self, QMoveEvent* event);
void KAnimatedButton_OnMoveEvent(KAnimatedButton* self, intptr_t slot);
void KAnimatedButton_QBaseMoveEvent(KAnimatedButton* self, QMoveEvent* event);
void KAnimatedButton_ResizeEvent(KAnimatedButton* self, QResizeEvent* event);
void KAnimatedButton_OnResizeEvent(KAnimatedButton* self, intptr_t slot);
void KAnimatedButton_QBaseResizeEvent(KAnimatedButton* self, QResizeEvent* event);
void KAnimatedButton_CloseEvent(KAnimatedButton* self, QCloseEvent* event);
void KAnimatedButton_OnCloseEvent(KAnimatedButton* self, intptr_t slot);
void KAnimatedButton_QBaseCloseEvent(KAnimatedButton* self, QCloseEvent* event);
void KAnimatedButton_ContextMenuEvent(KAnimatedButton* self, QContextMenuEvent* event);
void KAnimatedButton_OnContextMenuEvent(KAnimatedButton* self, intptr_t slot);
void KAnimatedButton_QBaseContextMenuEvent(KAnimatedButton* self, QContextMenuEvent* event);
void KAnimatedButton_TabletEvent(KAnimatedButton* self, QTabletEvent* event);
void KAnimatedButton_OnTabletEvent(KAnimatedButton* self, intptr_t slot);
void KAnimatedButton_QBaseTabletEvent(KAnimatedButton* self, QTabletEvent* event);
void KAnimatedButton_DragEnterEvent(KAnimatedButton* self, QDragEnterEvent* event);
void KAnimatedButton_OnDragEnterEvent(KAnimatedButton* self, intptr_t slot);
void KAnimatedButton_QBaseDragEnterEvent(KAnimatedButton* self, QDragEnterEvent* event);
void KAnimatedButton_DragMoveEvent(KAnimatedButton* self, QDragMoveEvent* event);
void KAnimatedButton_OnDragMoveEvent(KAnimatedButton* self, intptr_t slot);
void KAnimatedButton_QBaseDragMoveEvent(KAnimatedButton* self, QDragMoveEvent* event);
void KAnimatedButton_DragLeaveEvent(KAnimatedButton* self, QDragLeaveEvent* event);
void KAnimatedButton_OnDragLeaveEvent(KAnimatedButton* self, intptr_t slot);
void KAnimatedButton_QBaseDragLeaveEvent(KAnimatedButton* self, QDragLeaveEvent* event);
void KAnimatedButton_DropEvent(KAnimatedButton* self, QDropEvent* event);
void KAnimatedButton_OnDropEvent(KAnimatedButton* self, intptr_t slot);
void KAnimatedButton_QBaseDropEvent(KAnimatedButton* self, QDropEvent* event);
void KAnimatedButton_ShowEvent(KAnimatedButton* self, QShowEvent* event);
void KAnimatedButton_OnShowEvent(KAnimatedButton* self, intptr_t slot);
void KAnimatedButton_QBaseShowEvent(KAnimatedButton* self, QShowEvent* event);
void KAnimatedButton_HideEvent(KAnimatedButton* self, QHideEvent* event);
void KAnimatedButton_OnHideEvent(KAnimatedButton* self, intptr_t slot);
void KAnimatedButton_QBaseHideEvent(KAnimatedButton* self, QHideEvent* event);
bool KAnimatedButton_NativeEvent(KAnimatedButton* self, const libqt_string eventType, void* message, intptr_t* result);
void KAnimatedButton_OnNativeEvent(KAnimatedButton* self, intptr_t slot);
bool KAnimatedButton_QBaseNativeEvent(KAnimatedButton* self, const libqt_string eventType, void* message, intptr_t* result);
int KAnimatedButton_Metric(const KAnimatedButton* self, int param1);
void KAnimatedButton_OnMetric(const KAnimatedButton* self, intptr_t slot);
int KAnimatedButton_QBaseMetric(const KAnimatedButton* self, int param1);
void KAnimatedButton_InitPainter(const KAnimatedButton* self, QPainter* painter);
void KAnimatedButton_OnInitPainter(const KAnimatedButton* self, intptr_t slot);
void KAnimatedButton_QBaseInitPainter(const KAnimatedButton* self, QPainter* painter);
QPaintDevice* KAnimatedButton_Redirected(const KAnimatedButton* self, QPoint* offset);
void KAnimatedButton_OnRedirected(const KAnimatedButton* self, intptr_t slot);
QPaintDevice* KAnimatedButton_QBaseRedirected(const KAnimatedButton* self, QPoint* offset);
QPainter* KAnimatedButton_SharedPainter(const KAnimatedButton* self);
void KAnimatedButton_OnSharedPainter(const KAnimatedButton* self, intptr_t slot);
QPainter* KAnimatedButton_QBaseSharedPainter(const KAnimatedButton* self);
void KAnimatedButton_InputMethodEvent(KAnimatedButton* self, QInputMethodEvent* param1);
void KAnimatedButton_OnInputMethodEvent(KAnimatedButton* self, intptr_t slot);
void KAnimatedButton_QBaseInputMethodEvent(KAnimatedButton* self, QInputMethodEvent* param1);
QVariant* KAnimatedButton_InputMethodQuery(const KAnimatedButton* self, int param1);
void KAnimatedButton_OnInputMethodQuery(const KAnimatedButton* self, intptr_t slot);
QVariant* KAnimatedButton_QBaseInputMethodQuery(const KAnimatedButton* self, int param1);
bool KAnimatedButton_FocusNextPrevChild(KAnimatedButton* self, bool next);
void KAnimatedButton_OnFocusNextPrevChild(KAnimatedButton* self, intptr_t slot);
bool KAnimatedButton_QBaseFocusNextPrevChild(KAnimatedButton* self, bool next);
bool KAnimatedButton_EventFilter(KAnimatedButton* self, QObject* watched, QEvent* event);
void KAnimatedButton_OnEventFilter(KAnimatedButton* self, intptr_t slot);
bool KAnimatedButton_QBaseEventFilter(KAnimatedButton* self, QObject* watched, QEvent* event);
void KAnimatedButton_ChildEvent(KAnimatedButton* self, QChildEvent* event);
void KAnimatedButton_OnChildEvent(KAnimatedButton* self, intptr_t slot);
void KAnimatedButton_QBaseChildEvent(KAnimatedButton* self, QChildEvent* event);
void KAnimatedButton_CustomEvent(KAnimatedButton* self, QEvent* event);
void KAnimatedButton_OnCustomEvent(KAnimatedButton* self, intptr_t slot);
void KAnimatedButton_QBaseCustomEvent(KAnimatedButton* self, QEvent* event);
void KAnimatedButton_ConnectNotify(KAnimatedButton* self, const QMetaMethod* signal);
void KAnimatedButton_OnConnectNotify(KAnimatedButton* self, intptr_t slot);
void KAnimatedButton_QBaseConnectNotify(KAnimatedButton* self, const QMetaMethod* signal);
void KAnimatedButton_DisconnectNotify(KAnimatedButton* self, const QMetaMethod* signal);
void KAnimatedButton_OnDisconnectNotify(KAnimatedButton* self, intptr_t slot);
void KAnimatedButton_QBaseDisconnectNotify(KAnimatedButton* self, const QMetaMethod* signal);
void KAnimatedButton_UpdateMicroFocus(KAnimatedButton* self);
void KAnimatedButton_OnUpdateMicroFocus(KAnimatedButton* self, intptr_t slot);
void KAnimatedButton_QBaseUpdateMicroFocus(KAnimatedButton* self);
void KAnimatedButton_Create(KAnimatedButton* self);
void KAnimatedButton_OnCreate(KAnimatedButton* self, intptr_t slot);
void KAnimatedButton_QBaseCreate(KAnimatedButton* self);
void KAnimatedButton_Destroy(KAnimatedButton* self);
void KAnimatedButton_OnDestroy(KAnimatedButton* self, intptr_t slot);
void KAnimatedButton_QBaseDestroy(KAnimatedButton* self);
bool KAnimatedButton_FocusNextChild(KAnimatedButton* self);
void KAnimatedButton_OnFocusNextChild(KAnimatedButton* self, intptr_t slot);
bool KAnimatedButton_QBaseFocusNextChild(KAnimatedButton* self);
bool KAnimatedButton_FocusPreviousChild(KAnimatedButton* self);
void KAnimatedButton_OnFocusPreviousChild(KAnimatedButton* self, intptr_t slot);
bool KAnimatedButton_QBaseFocusPreviousChild(KAnimatedButton* self);
QObject* KAnimatedButton_Sender(const KAnimatedButton* self);
void KAnimatedButton_OnSender(const KAnimatedButton* self, intptr_t slot);
QObject* KAnimatedButton_QBaseSender(const KAnimatedButton* self);
int KAnimatedButton_SenderSignalIndex(const KAnimatedButton* self);
void KAnimatedButton_OnSenderSignalIndex(const KAnimatedButton* self, intptr_t slot);
int KAnimatedButton_QBaseSenderSignalIndex(const KAnimatedButton* self);
int KAnimatedButton_Receivers(const KAnimatedButton* self, const char* signal);
void KAnimatedButton_OnReceivers(const KAnimatedButton* self, intptr_t slot);
int KAnimatedButton_QBaseReceivers(const KAnimatedButton* self, const char* signal);
bool KAnimatedButton_IsSignalConnected(const KAnimatedButton* self, const QMetaMethod* signal);
void KAnimatedButton_OnIsSignalConnected(const KAnimatedButton* self, intptr_t slot);
bool KAnimatedButton_QBaseIsSignalConnected(const KAnimatedButton* self, const QMetaMethod* signal);
double KAnimatedButton_GetDecodedMetricF(const KAnimatedButton* self, int metricA, int metricB);
void KAnimatedButton_OnGetDecodedMetricF(const KAnimatedButton* self, intptr_t slot);
double KAnimatedButton_QBaseGetDecodedMetricF(const KAnimatedButton* self, int metricA, int metricB);
void KAnimatedButton_Delete(KAnimatedButton* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
