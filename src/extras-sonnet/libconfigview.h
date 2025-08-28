#pragma once
#ifndef SRC_EXTRAS_SONNETC_LIBCONFIGVIEW_H
#define SRC_EXTRAS_SONNETC_LIBCONFIGVIEW_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Sonnet__ConfigView)
typedef Sonnet::ConfigView Sonnet__ConfigView;
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
typedef struct Sonnet__ConfigView Sonnet__ConfigView;
#endif

Sonnet__ConfigView* Sonnet__ConfigView_new(QWidget* parent);
Sonnet__ConfigView* Sonnet__ConfigView_new2();
QMetaObject* Sonnet__ConfigView_MetaObject(const Sonnet__ConfigView* self);
void* Sonnet__ConfigView_Metacast(Sonnet__ConfigView* self, const char* param1);
int Sonnet__ConfigView_Metacall(Sonnet__ConfigView* self, int param1, int param2, void** param3);
libqt_string Sonnet__ConfigView_Tr(const char* s);
bool Sonnet__ConfigView_BackgroundCheckingButtonShown(const Sonnet__ConfigView* self);
bool Sonnet__ConfigView_NoBackendFoundVisible(const Sonnet__ConfigView* self);
libqt_list /* of libqt_string */ Sonnet__ConfigView_PreferredLanguages(const Sonnet__ConfigView* self);
libqt_string Sonnet__ConfigView_Language(const Sonnet__ConfigView* self);
libqt_list /* of libqt_string */ Sonnet__ConfigView_IgnoreList(const Sonnet__ConfigView* self);
void Sonnet__ConfigView_SetNoBackendFoundVisible(Sonnet__ConfigView* self, bool show);
void Sonnet__ConfigView_SetBackgroundCheckingButtonShown(Sonnet__ConfigView* self, bool backgroundCheckingButtonShown);
void Sonnet__ConfigView_SetPreferredLanguages(Sonnet__ConfigView* self, const libqt_list /* of libqt_string */ ignoreList);
void Sonnet__ConfigView_SetLanguage(Sonnet__ConfigView* self, const libqt_string language);
void Sonnet__ConfigView_SetIgnoreList(Sonnet__ConfigView* self, const libqt_list /* of libqt_string */ ignoreList);
void Sonnet__ConfigView_ConfigChanged(Sonnet__ConfigView* self);
void Sonnet__ConfigView_Connect_ConfigChanged(Sonnet__ConfigView* self, intptr_t slot);
libqt_string Sonnet__ConfigView_Tr2(const char* s, const char* c);
libqt_string Sonnet__ConfigView_Tr3(const char* s, const char* c, int n);
void Sonnet__ConfigView_OnMetacall(Sonnet__ConfigView* self, intptr_t slot);
int Sonnet__ConfigView_QBaseMetacall(Sonnet__ConfigView* self, int param1, int param2, void** param3);
int Sonnet__ConfigView_DevType(const Sonnet__ConfigView* self);
void Sonnet__ConfigView_OnDevType(const Sonnet__ConfigView* self, intptr_t slot);
int Sonnet__ConfigView_QBaseDevType(const Sonnet__ConfigView* self);
void Sonnet__ConfigView_SetVisible(Sonnet__ConfigView* self, bool visible);
void Sonnet__ConfigView_OnSetVisible(Sonnet__ConfigView* self, intptr_t slot);
void Sonnet__ConfigView_QBaseSetVisible(Sonnet__ConfigView* self, bool visible);
QSize* Sonnet__ConfigView_SizeHint(const Sonnet__ConfigView* self);
void Sonnet__ConfigView_OnSizeHint(const Sonnet__ConfigView* self, intptr_t slot);
QSize* Sonnet__ConfigView_QBaseSizeHint(const Sonnet__ConfigView* self);
QSize* Sonnet__ConfigView_MinimumSizeHint(const Sonnet__ConfigView* self);
void Sonnet__ConfigView_OnMinimumSizeHint(const Sonnet__ConfigView* self, intptr_t slot);
QSize* Sonnet__ConfigView_QBaseMinimumSizeHint(const Sonnet__ConfigView* self);
int Sonnet__ConfigView_HeightForWidth(const Sonnet__ConfigView* self, int param1);
void Sonnet__ConfigView_OnHeightForWidth(const Sonnet__ConfigView* self, intptr_t slot);
int Sonnet__ConfigView_QBaseHeightForWidth(const Sonnet__ConfigView* self, int param1);
bool Sonnet__ConfigView_HasHeightForWidth(const Sonnet__ConfigView* self);
void Sonnet__ConfigView_OnHasHeightForWidth(const Sonnet__ConfigView* self, intptr_t slot);
bool Sonnet__ConfigView_QBaseHasHeightForWidth(const Sonnet__ConfigView* self);
QPaintEngine* Sonnet__ConfigView_PaintEngine(const Sonnet__ConfigView* self);
void Sonnet__ConfigView_OnPaintEngine(const Sonnet__ConfigView* self, intptr_t slot);
QPaintEngine* Sonnet__ConfigView_QBasePaintEngine(const Sonnet__ConfigView* self);
bool Sonnet__ConfigView_Event(Sonnet__ConfigView* self, QEvent* event);
void Sonnet__ConfigView_OnEvent(Sonnet__ConfigView* self, intptr_t slot);
bool Sonnet__ConfigView_QBaseEvent(Sonnet__ConfigView* self, QEvent* event);
void Sonnet__ConfigView_MousePressEvent(Sonnet__ConfigView* self, QMouseEvent* event);
void Sonnet__ConfigView_OnMousePressEvent(Sonnet__ConfigView* self, intptr_t slot);
void Sonnet__ConfigView_QBaseMousePressEvent(Sonnet__ConfigView* self, QMouseEvent* event);
void Sonnet__ConfigView_MouseReleaseEvent(Sonnet__ConfigView* self, QMouseEvent* event);
void Sonnet__ConfigView_OnMouseReleaseEvent(Sonnet__ConfigView* self, intptr_t slot);
void Sonnet__ConfigView_QBaseMouseReleaseEvent(Sonnet__ConfigView* self, QMouseEvent* event);
void Sonnet__ConfigView_MouseDoubleClickEvent(Sonnet__ConfigView* self, QMouseEvent* event);
void Sonnet__ConfigView_OnMouseDoubleClickEvent(Sonnet__ConfigView* self, intptr_t slot);
void Sonnet__ConfigView_QBaseMouseDoubleClickEvent(Sonnet__ConfigView* self, QMouseEvent* event);
void Sonnet__ConfigView_MouseMoveEvent(Sonnet__ConfigView* self, QMouseEvent* event);
void Sonnet__ConfigView_OnMouseMoveEvent(Sonnet__ConfigView* self, intptr_t slot);
void Sonnet__ConfigView_QBaseMouseMoveEvent(Sonnet__ConfigView* self, QMouseEvent* event);
void Sonnet__ConfigView_WheelEvent(Sonnet__ConfigView* self, QWheelEvent* event);
void Sonnet__ConfigView_OnWheelEvent(Sonnet__ConfigView* self, intptr_t slot);
void Sonnet__ConfigView_QBaseWheelEvent(Sonnet__ConfigView* self, QWheelEvent* event);
void Sonnet__ConfigView_KeyPressEvent(Sonnet__ConfigView* self, QKeyEvent* event);
void Sonnet__ConfigView_OnKeyPressEvent(Sonnet__ConfigView* self, intptr_t slot);
void Sonnet__ConfigView_QBaseKeyPressEvent(Sonnet__ConfigView* self, QKeyEvent* event);
void Sonnet__ConfigView_KeyReleaseEvent(Sonnet__ConfigView* self, QKeyEvent* event);
void Sonnet__ConfigView_OnKeyReleaseEvent(Sonnet__ConfigView* self, intptr_t slot);
void Sonnet__ConfigView_QBaseKeyReleaseEvent(Sonnet__ConfigView* self, QKeyEvent* event);
void Sonnet__ConfigView_FocusInEvent(Sonnet__ConfigView* self, QFocusEvent* event);
void Sonnet__ConfigView_OnFocusInEvent(Sonnet__ConfigView* self, intptr_t slot);
void Sonnet__ConfigView_QBaseFocusInEvent(Sonnet__ConfigView* self, QFocusEvent* event);
void Sonnet__ConfigView_FocusOutEvent(Sonnet__ConfigView* self, QFocusEvent* event);
void Sonnet__ConfigView_OnFocusOutEvent(Sonnet__ConfigView* self, intptr_t slot);
void Sonnet__ConfigView_QBaseFocusOutEvent(Sonnet__ConfigView* self, QFocusEvent* event);
void Sonnet__ConfigView_EnterEvent(Sonnet__ConfigView* self, QEnterEvent* event);
void Sonnet__ConfigView_OnEnterEvent(Sonnet__ConfigView* self, intptr_t slot);
void Sonnet__ConfigView_QBaseEnterEvent(Sonnet__ConfigView* self, QEnterEvent* event);
void Sonnet__ConfigView_LeaveEvent(Sonnet__ConfigView* self, QEvent* event);
void Sonnet__ConfigView_OnLeaveEvent(Sonnet__ConfigView* self, intptr_t slot);
void Sonnet__ConfigView_QBaseLeaveEvent(Sonnet__ConfigView* self, QEvent* event);
void Sonnet__ConfigView_PaintEvent(Sonnet__ConfigView* self, QPaintEvent* event);
void Sonnet__ConfigView_OnPaintEvent(Sonnet__ConfigView* self, intptr_t slot);
void Sonnet__ConfigView_QBasePaintEvent(Sonnet__ConfigView* self, QPaintEvent* event);
void Sonnet__ConfigView_MoveEvent(Sonnet__ConfigView* self, QMoveEvent* event);
void Sonnet__ConfigView_OnMoveEvent(Sonnet__ConfigView* self, intptr_t slot);
void Sonnet__ConfigView_QBaseMoveEvent(Sonnet__ConfigView* self, QMoveEvent* event);
void Sonnet__ConfigView_ResizeEvent(Sonnet__ConfigView* self, QResizeEvent* event);
void Sonnet__ConfigView_OnResizeEvent(Sonnet__ConfigView* self, intptr_t slot);
void Sonnet__ConfigView_QBaseResizeEvent(Sonnet__ConfigView* self, QResizeEvent* event);
void Sonnet__ConfigView_CloseEvent(Sonnet__ConfigView* self, QCloseEvent* event);
void Sonnet__ConfigView_OnCloseEvent(Sonnet__ConfigView* self, intptr_t slot);
void Sonnet__ConfigView_QBaseCloseEvent(Sonnet__ConfigView* self, QCloseEvent* event);
void Sonnet__ConfigView_ContextMenuEvent(Sonnet__ConfigView* self, QContextMenuEvent* event);
void Sonnet__ConfigView_OnContextMenuEvent(Sonnet__ConfigView* self, intptr_t slot);
void Sonnet__ConfigView_QBaseContextMenuEvent(Sonnet__ConfigView* self, QContextMenuEvent* event);
void Sonnet__ConfigView_TabletEvent(Sonnet__ConfigView* self, QTabletEvent* event);
void Sonnet__ConfigView_OnTabletEvent(Sonnet__ConfigView* self, intptr_t slot);
void Sonnet__ConfigView_QBaseTabletEvent(Sonnet__ConfigView* self, QTabletEvent* event);
void Sonnet__ConfigView_ActionEvent(Sonnet__ConfigView* self, QActionEvent* event);
void Sonnet__ConfigView_OnActionEvent(Sonnet__ConfigView* self, intptr_t slot);
void Sonnet__ConfigView_QBaseActionEvent(Sonnet__ConfigView* self, QActionEvent* event);
void Sonnet__ConfigView_DragEnterEvent(Sonnet__ConfigView* self, QDragEnterEvent* event);
void Sonnet__ConfigView_OnDragEnterEvent(Sonnet__ConfigView* self, intptr_t slot);
void Sonnet__ConfigView_QBaseDragEnterEvent(Sonnet__ConfigView* self, QDragEnterEvent* event);
void Sonnet__ConfigView_DragMoveEvent(Sonnet__ConfigView* self, QDragMoveEvent* event);
void Sonnet__ConfigView_OnDragMoveEvent(Sonnet__ConfigView* self, intptr_t slot);
void Sonnet__ConfigView_QBaseDragMoveEvent(Sonnet__ConfigView* self, QDragMoveEvent* event);
void Sonnet__ConfigView_DragLeaveEvent(Sonnet__ConfigView* self, QDragLeaveEvent* event);
void Sonnet__ConfigView_OnDragLeaveEvent(Sonnet__ConfigView* self, intptr_t slot);
void Sonnet__ConfigView_QBaseDragLeaveEvent(Sonnet__ConfigView* self, QDragLeaveEvent* event);
void Sonnet__ConfigView_DropEvent(Sonnet__ConfigView* self, QDropEvent* event);
void Sonnet__ConfigView_OnDropEvent(Sonnet__ConfigView* self, intptr_t slot);
void Sonnet__ConfigView_QBaseDropEvent(Sonnet__ConfigView* self, QDropEvent* event);
void Sonnet__ConfigView_ShowEvent(Sonnet__ConfigView* self, QShowEvent* event);
void Sonnet__ConfigView_OnShowEvent(Sonnet__ConfigView* self, intptr_t slot);
void Sonnet__ConfigView_QBaseShowEvent(Sonnet__ConfigView* self, QShowEvent* event);
void Sonnet__ConfigView_HideEvent(Sonnet__ConfigView* self, QHideEvent* event);
void Sonnet__ConfigView_OnHideEvent(Sonnet__ConfigView* self, intptr_t slot);
void Sonnet__ConfigView_QBaseHideEvent(Sonnet__ConfigView* self, QHideEvent* event);
bool Sonnet__ConfigView_NativeEvent(Sonnet__ConfigView* self, const libqt_string eventType, void* message, intptr_t* result);
void Sonnet__ConfigView_OnNativeEvent(Sonnet__ConfigView* self, intptr_t slot);
bool Sonnet__ConfigView_QBaseNativeEvent(Sonnet__ConfigView* self, const libqt_string eventType, void* message, intptr_t* result);
void Sonnet__ConfigView_ChangeEvent(Sonnet__ConfigView* self, QEvent* param1);
void Sonnet__ConfigView_OnChangeEvent(Sonnet__ConfigView* self, intptr_t slot);
void Sonnet__ConfigView_QBaseChangeEvent(Sonnet__ConfigView* self, QEvent* param1);
int Sonnet__ConfigView_Metric(const Sonnet__ConfigView* self, int param1);
void Sonnet__ConfigView_OnMetric(const Sonnet__ConfigView* self, intptr_t slot);
int Sonnet__ConfigView_QBaseMetric(const Sonnet__ConfigView* self, int param1);
void Sonnet__ConfigView_InitPainter(const Sonnet__ConfigView* self, QPainter* painter);
void Sonnet__ConfigView_OnInitPainter(const Sonnet__ConfigView* self, intptr_t slot);
void Sonnet__ConfigView_QBaseInitPainter(const Sonnet__ConfigView* self, QPainter* painter);
QPaintDevice* Sonnet__ConfigView_Redirected(const Sonnet__ConfigView* self, QPoint* offset);
void Sonnet__ConfigView_OnRedirected(const Sonnet__ConfigView* self, intptr_t slot);
QPaintDevice* Sonnet__ConfigView_QBaseRedirected(const Sonnet__ConfigView* self, QPoint* offset);
QPainter* Sonnet__ConfigView_SharedPainter(const Sonnet__ConfigView* self);
void Sonnet__ConfigView_OnSharedPainter(const Sonnet__ConfigView* self, intptr_t slot);
QPainter* Sonnet__ConfigView_QBaseSharedPainter(const Sonnet__ConfigView* self);
void Sonnet__ConfigView_InputMethodEvent(Sonnet__ConfigView* self, QInputMethodEvent* param1);
void Sonnet__ConfigView_OnInputMethodEvent(Sonnet__ConfigView* self, intptr_t slot);
void Sonnet__ConfigView_QBaseInputMethodEvent(Sonnet__ConfigView* self, QInputMethodEvent* param1);
QVariant* Sonnet__ConfigView_InputMethodQuery(const Sonnet__ConfigView* self, int param1);
void Sonnet__ConfigView_OnInputMethodQuery(const Sonnet__ConfigView* self, intptr_t slot);
QVariant* Sonnet__ConfigView_QBaseInputMethodQuery(const Sonnet__ConfigView* self, int param1);
bool Sonnet__ConfigView_FocusNextPrevChild(Sonnet__ConfigView* self, bool next);
void Sonnet__ConfigView_OnFocusNextPrevChild(Sonnet__ConfigView* self, intptr_t slot);
bool Sonnet__ConfigView_QBaseFocusNextPrevChild(Sonnet__ConfigView* self, bool next);
bool Sonnet__ConfigView_EventFilter(Sonnet__ConfigView* self, QObject* watched, QEvent* event);
void Sonnet__ConfigView_OnEventFilter(Sonnet__ConfigView* self, intptr_t slot);
bool Sonnet__ConfigView_QBaseEventFilter(Sonnet__ConfigView* self, QObject* watched, QEvent* event);
void Sonnet__ConfigView_TimerEvent(Sonnet__ConfigView* self, QTimerEvent* event);
void Sonnet__ConfigView_OnTimerEvent(Sonnet__ConfigView* self, intptr_t slot);
void Sonnet__ConfigView_QBaseTimerEvent(Sonnet__ConfigView* self, QTimerEvent* event);
void Sonnet__ConfigView_ChildEvent(Sonnet__ConfigView* self, QChildEvent* event);
void Sonnet__ConfigView_OnChildEvent(Sonnet__ConfigView* self, intptr_t slot);
void Sonnet__ConfigView_QBaseChildEvent(Sonnet__ConfigView* self, QChildEvent* event);
void Sonnet__ConfigView_CustomEvent(Sonnet__ConfigView* self, QEvent* event);
void Sonnet__ConfigView_OnCustomEvent(Sonnet__ConfigView* self, intptr_t slot);
void Sonnet__ConfigView_QBaseCustomEvent(Sonnet__ConfigView* self, QEvent* event);
void Sonnet__ConfigView_ConnectNotify(Sonnet__ConfigView* self, const QMetaMethod* signal);
void Sonnet__ConfigView_OnConnectNotify(Sonnet__ConfigView* self, intptr_t slot);
void Sonnet__ConfigView_QBaseConnectNotify(Sonnet__ConfigView* self, const QMetaMethod* signal);
void Sonnet__ConfigView_DisconnectNotify(Sonnet__ConfigView* self, const QMetaMethod* signal);
void Sonnet__ConfigView_OnDisconnectNotify(Sonnet__ConfigView* self, intptr_t slot);
void Sonnet__ConfigView_QBaseDisconnectNotify(Sonnet__ConfigView* self, const QMetaMethod* signal);
void Sonnet__ConfigView_UpdateMicroFocus(Sonnet__ConfigView* self);
void Sonnet__ConfigView_OnUpdateMicroFocus(Sonnet__ConfigView* self, intptr_t slot);
void Sonnet__ConfigView_QBaseUpdateMicroFocus(Sonnet__ConfigView* self);
void Sonnet__ConfigView_Create(Sonnet__ConfigView* self);
void Sonnet__ConfigView_OnCreate(Sonnet__ConfigView* self, intptr_t slot);
void Sonnet__ConfigView_QBaseCreate(Sonnet__ConfigView* self);
void Sonnet__ConfigView_Destroy(Sonnet__ConfigView* self);
void Sonnet__ConfigView_OnDestroy(Sonnet__ConfigView* self, intptr_t slot);
void Sonnet__ConfigView_QBaseDestroy(Sonnet__ConfigView* self);
bool Sonnet__ConfigView_FocusNextChild(Sonnet__ConfigView* self);
void Sonnet__ConfigView_OnFocusNextChild(Sonnet__ConfigView* self, intptr_t slot);
bool Sonnet__ConfigView_QBaseFocusNextChild(Sonnet__ConfigView* self);
bool Sonnet__ConfigView_FocusPreviousChild(Sonnet__ConfigView* self);
void Sonnet__ConfigView_OnFocusPreviousChild(Sonnet__ConfigView* self, intptr_t slot);
bool Sonnet__ConfigView_QBaseFocusPreviousChild(Sonnet__ConfigView* self);
QObject* Sonnet__ConfigView_Sender(const Sonnet__ConfigView* self);
void Sonnet__ConfigView_OnSender(const Sonnet__ConfigView* self, intptr_t slot);
QObject* Sonnet__ConfigView_QBaseSender(const Sonnet__ConfigView* self);
int Sonnet__ConfigView_SenderSignalIndex(const Sonnet__ConfigView* self);
void Sonnet__ConfigView_OnSenderSignalIndex(const Sonnet__ConfigView* self, intptr_t slot);
int Sonnet__ConfigView_QBaseSenderSignalIndex(const Sonnet__ConfigView* self);
int Sonnet__ConfigView_Receivers(const Sonnet__ConfigView* self, const char* signal);
void Sonnet__ConfigView_OnReceivers(const Sonnet__ConfigView* self, intptr_t slot);
int Sonnet__ConfigView_QBaseReceivers(const Sonnet__ConfigView* self, const char* signal);
bool Sonnet__ConfigView_IsSignalConnected(const Sonnet__ConfigView* self, const QMetaMethod* signal);
void Sonnet__ConfigView_OnIsSignalConnected(const Sonnet__ConfigView* self, intptr_t slot);
bool Sonnet__ConfigView_QBaseIsSignalConnected(const Sonnet__ConfigView* self, const QMetaMethod* signal);
double Sonnet__ConfigView_GetDecodedMetricF(const Sonnet__ConfigView* self, int metricA, int metricB);
void Sonnet__ConfigView_OnGetDecodedMetricF(const Sonnet__ConfigView* self, intptr_t slot);
double Sonnet__ConfigView_QBaseGetDecodedMetricF(const Sonnet__ConfigView* self, int metricA, int metricB);
void Sonnet__ConfigView_Delete(Sonnet__ConfigView* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
