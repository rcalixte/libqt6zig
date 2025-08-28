#pragma once
#ifndef SRC_EXTRAS_KWIDGETSADDONSC_LIBKCAPACITYBAR_H
#define SRC_EXTRAS_KWIDGETSADDONSC_LIBKCAPACITYBAR_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KCapacityBar KCapacityBar;
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
typedef struct QRect QRect;
typedef struct QResizeEvent QResizeEvent;
typedef struct QShowEvent QShowEvent;
typedef struct QSize QSize;
typedef struct QTabletEvent QTabletEvent;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
typedef struct QWheelEvent QWheelEvent;
typedef struct QWidget QWidget;
#endif

KCapacityBar* KCapacityBar_new(QWidget* parent);
KCapacityBar* KCapacityBar_new2();
KCapacityBar* KCapacityBar_new3(int drawTextMode);
KCapacityBar* KCapacityBar_new4(int drawTextMode, QWidget* parent);
QMetaObject* KCapacityBar_MetaObject(const KCapacityBar* self);
void* KCapacityBar_Metacast(KCapacityBar* self, const char* param1);
int KCapacityBar_Metacall(KCapacityBar* self, int param1, int param2, void** param3);
libqt_string KCapacityBar_Tr(const char* s);
void KCapacityBar_SetValue(KCapacityBar* self, int value);
int KCapacityBar_Value(const KCapacityBar* self);
void KCapacityBar_SetText(KCapacityBar* self, const libqt_string text);
libqt_string KCapacityBar_Text(const KCapacityBar* self);
void KCapacityBar_SetFillFullBlocks(KCapacityBar* self, bool fillFullBlocks);
bool KCapacityBar_FillFullBlocks(const KCapacityBar* self);
void KCapacityBar_SetContinuous(KCapacityBar* self, bool continuous);
bool KCapacityBar_Continuous(const KCapacityBar* self);
void KCapacityBar_SetBarHeight(KCapacityBar* self, int barHeight);
int KCapacityBar_BarHeight(const KCapacityBar* self);
void KCapacityBar_SetHorizontalTextAlignment(KCapacityBar* self, int textAlignment);
int KCapacityBar_HorizontalTextAlignment(const KCapacityBar* self);
void KCapacityBar_SetDrawTextMode(KCapacityBar* self, int mode);
int KCapacityBar_DrawTextMode(const KCapacityBar* self);
void KCapacityBar_DrawCapacityBar(const KCapacityBar* self, QPainter* p, const QRect* rect);
void KCapacityBar_DrawCapacityBar2(const KCapacityBar* self, QPainter* p, const QRect* rect, int state);
QSize* KCapacityBar_MinimumSizeHint(const KCapacityBar* self);
void KCapacityBar_PaintEvent(KCapacityBar* self, QPaintEvent* event);
void KCapacityBar_ChangeEvent(KCapacityBar* self, QEvent* event);
libqt_string KCapacityBar_Tr2(const char* s, const char* c);
libqt_string KCapacityBar_Tr3(const char* s, const char* c, int n);
void KCapacityBar_OnMetacall(KCapacityBar* self, intptr_t slot);
int KCapacityBar_QBaseMetacall(KCapacityBar* self, int param1, int param2, void** param3);
void KCapacityBar_OnMinimumSizeHint(const KCapacityBar* self, intptr_t slot);
QSize* KCapacityBar_QBaseMinimumSizeHint(const KCapacityBar* self);
void KCapacityBar_OnPaintEvent(KCapacityBar* self, intptr_t slot);
void KCapacityBar_QBasePaintEvent(KCapacityBar* self, QPaintEvent* event);
void KCapacityBar_OnChangeEvent(KCapacityBar* self, intptr_t slot);
void KCapacityBar_QBaseChangeEvent(KCapacityBar* self, QEvent* event);
int KCapacityBar_DevType(const KCapacityBar* self);
void KCapacityBar_OnDevType(const KCapacityBar* self, intptr_t slot);
int KCapacityBar_QBaseDevType(const KCapacityBar* self);
void KCapacityBar_SetVisible(KCapacityBar* self, bool visible);
void KCapacityBar_OnSetVisible(KCapacityBar* self, intptr_t slot);
void KCapacityBar_QBaseSetVisible(KCapacityBar* self, bool visible);
QSize* KCapacityBar_SizeHint(const KCapacityBar* self);
void KCapacityBar_OnSizeHint(const KCapacityBar* self, intptr_t slot);
QSize* KCapacityBar_QBaseSizeHint(const KCapacityBar* self);
int KCapacityBar_HeightForWidth(const KCapacityBar* self, int param1);
void KCapacityBar_OnHeightForWidth(const KCapacityBar* self, intptr_t slot);
int KCapacityBar_QBaseHeightForWidth(const KCapacityBar* self, int param1);
bool KCapacityBar_HasHeightForWidth(const KCapacityBar* self);
void KCapacityBar_OnHasHeightForWidth(const KCapacityBar* self, intptr_t slot);
bool KCapacityBar_QBaseHasHeightForWidth(const KCapacityBar* self);
QPaintEngine* KCapacityBar_PaintEngine(const KCapacityBar* self);
void KCapacityBar_OnPaintEngine(const KCapacityBar* self, intptr_t slot);
QPaintEngine* KCapacityBar_QBasePaintEngine(const KCapacityBar* self);
bool KCapacityBar_Event(KCapacityBar* self, QEvent* event);
void KCapacityBar_OnEvent(KCapacityBar* self, intptr_t slot);
bool KCapacityBar_QBaseEvent(KCapacityBar* self, QEvent* event);
void KCapacityBar_MousePressEvent(KCapacityBar* self, QMouseEvent* event);
void KCapacityBar_OnMousePressEvent(KCapacityBar* self, intptr_t slot);
void KCapacityBar_QBaseMousePressEvent(KCapacityBar* self, QMouseEvent* event);
void KCapacityBar_MouseReleaseEvent(KCapacityBar* self, QMouseEvent* event);
void KCapacityBar_OnMouseReleaseEvent(KCapacityBar* self, intptr_t slot);
void KCapacityBar_QBaseMouseReleaseEvent(KCapacityBar* self, QMouseEvent* event);
void KCapacityBar_MouseDoubleClickEvent(KCapacityBar* self, QMouseEvent* event);
void KCapacityBar_OnMouseDoubleClickEvent(KCapacityBar* self, intptr_t slot);
void KCapacityBar_QBaseMouseDoubleClickEvent(KCapacityBar* self, QMouseEvent* event);
void KCapacityBar_MouseMoveEvent(KCapacityBar* self, QMouseEvent* event);
void KCapacityBar_OnMouseMoveEvent(KCapacityBar* self, intptr_t slot);
void KCapacityBar_QBaseMouseMoveEvent(KCapacityBar* self, QMouseEvent* event);
void KCapacityBar_WheelEvent(KCapacityBar* self, QWheelEvent* event);
void KCapacityBar_OnWheelEvent(KCapacityBar* self, intptr_t slot);
void KCapacityBar_QBaseWheelEvent(KCapacityBar* self, QWheelEvent* event);
void KCapacityBar_KeyPressEvent(KCapacityBar* self, QKeyEvent* event);
void KCapacityBar_OnKeyPressEvent(KCapacityBar* self, intptr_t slot);
void KCapacityBar_QBaseKeyPressEvent(KCapacityBar* self, QKeyEvent* event);
void KCapacityBar_KeyReleaseEvent(KCapacityBar* self, QKeyEvent* event);
void KCapacityBar_OnKeyReleaseEvent(KCapacityBar* self, intptr_t slot);
void KCapacityBar_QBaseKeyReleaseEvent(KCapacityBar* self, QKeyEvent* event);
void KCapacityBar_FocusInEvent(KCapacityBar* self, QFocusEvent* event);
void KCapacityBar_OnFocusInEvent(KCapacityBar* self, intptr_t slot);
void KCapacityBar_QBaseFocusInEvent(KCapacityBar* self, QFocusEvent* event);
void KCapacityBar_FocusOutEvent(KCapacityBar* self, QFocusEvent* event);
void KCapacityBar_OnFocusOutEvent(KCapacityBar* self, intptr_t slot);
void KCapacityBar_QBaseFocusOutEvent(KCapacityBar* self, QFocusEvent* event);
void KCapacityBar_EnterEvent(KCapacityBar* self, QEnterEvent* event);
void KCapacityBar_OnEnterEvent(KCapacityBar* self, intptr_t slot);
void KCapacityBar_QBaseEnterEvent(KCapacityBar* self, QEnterEvent* event);
void KCapacityBar_LeaveEvent(KCapacityBar* self, QEvent* event);
void KCapacityBar_OnLeaveEvent(KCapacityBar* self, intptr_t slot);
void KCapacityBar_QBaseLeaveEvent(KCapacityBar* self, QEvent* event);
void KCapacityBar_MoveEvent(KCapacityBar* self, QMoveEvent* event);
void KCapacityBar_OnMoveEvent(KCapacityBar* self, intptr_t slot);
void KCapacityBar_QBaseMoveEvent(KCapacityBar* self, QMoveEvent* event);
void KCapacityBar_ResizeEvent(KCapacityBar* self, QResizeEvent* event);
void KCapacityBar_OnResizeEvent(KCapacityBar* self, intptr_t slot);
void KCapacityBar_QBaseResizeEvent(KCapacityBar* self, QResizeEvent* event);
void KCapacityBar_CloseEvent(KCapacityBar* self, QCloseEvent* event);
void KCapacityBar_OnCloseEvent(KCapacityBar* self, intptr_t slot);
void KCapacityBar_QBaseCloseEvent(KCapacityBar* self, QCloseEvent* event);
void KCapacityBar_ContextMenuEvent(KCapacityBar* self, QContextMenuEvent* event);
void KCapacityBar_OnContextMenuEvent(KCapacityBar* self, intptr_t slot);
void KCapacityBar_QBaseContextMenuEvent(KCapacityBar* self, QContextMenuEvent* event);
void KCapacityBar_TabletEvent(KCapacityBar* self, QTabletEvent* event);
void KCapacityBar_OnTabletEvent(KCapacityBar* self, intptr_t slot);
void KCapacityBar_QBaseTabletEvent(KCapacityBar* self, QTabletEvent* event);
void KCapacityBar_ActionEvent(KCapacityBar* self, QActionEvent* event);
void KCapacityBar_OnActionEvent(KCapacityBar* self, intptr_t slot);
void KCapacityBar_QBaseActionEvent(KCapacityBar* self, QActionEvent* event);
void KCapacityBar_DragEnterEvent(KCapacityBar* self, QDragEnterEvent* event);
void KCapacityBar_OnDragEnterEvent(KCapacityBar* self, intptr_t slot);
void KCapacityBar_QBaseDragEnterEvent(KCapacityBar* self, QDragEnterEvent* event);
void KCapacityBar_DragMoveEvent(KCapacityBar* self, QDragMoveEvent* event);
void KCapacityBar_OnDragMoveEvent(KCapacityBar* self, intptr_t slot);
void KCapacityBar_QBaseDragMoveEvent(KCapacityBar* self, QDragMoveEvent* event);
void KCapacityBar_DragLeaveEvent(KCapacityBar* self, QDragLeaveEvent* event);
void KCapacityBar_OnDragLeaveEvent(KCapacityBar* self, intptr_t slot);
void KCapacityBar_QBaseDragLeaveEvent(KCapacityBar* self, QDragLeaveEvent* event);
void KCapacityBar_DropEvent(KCapacityBar* self, QDropEvent* event);
void KCapacityBar_OnDropEvent(KCapacityBar* self, intptr_t slot);
void KCapacityBar_QBaseDropEvent(KCapacityBar* self, QDropEvent* event);
void KCapacityBar_ShowEvent(KCapacityBar* self, QShowEvent* event);
void KCapacityBar_OnShowEvent(KCapacityBar* self, intptr_t slot);
void KCapacityBar_QBaseShowEvent(KCapacityBar* self, QShowEvent* event);
void KCapacityBar_HideEvent(KCapacityBar* self, QHideEvent* event);
void KCapacityBar_OnHideEvent(KCapacityBar* self, intptr_t slot);
void KCapacityBar_QBaseHideEvent(KCapacityBar* self, QHideEvent* event);
bool KCapacityBar_NativeEvent(KCapacityBar* self, const libqt_string eventType, void* message, intptr_t* result);
void KCapacityBar_OnNativeEvent(KCapacityBar* self, intptr_t slot);
bool KCapacityBar_QBaseNativeEvent(KCapacityBar* self, const libqt_string eventType, void* message, intptr_t* result);
int KCapacityBar_Metric(const KCapacityBar* self, int param1);
void KCapacityBar_OnMetric(const KCapacityBar* self, intptr_t slot);
int KCapacityBar_QBaseMetric(const KCapacityBar* self, int param1);
void KCapacityBar_InitPainter(const KCapacityBar* self, QPainter* painter);
void KCapacityBar_OnInitPainter(const KCapacityBar* self, intptr_t slot);
void KCapacityBar_QBaseInitPainter(const KCapacityBar* self, QPainter* painter);
QPaintDevice* KCapacityBar_Redirected(const KCapacityBar* self, QPoint* offset);
void KCapacityBar_OnRedirected(const KCapacityBar* self, intptr_t slot);
QPaintDevice* KCapacityBar_QBaseRedirected(const KCapacityBar* self, QPoint* offset);
QPainter* KCapacityBar_SharedPainter(const KCapacityBar* self);
void KCapacityBar_OnSharedPainter(const KCapacityBar* self, intptr_t slot);
QPainter* KCapacityBar_QBaseSharedPainter(const KCapacityBar* self);
void KCapacityBar_InputMethodEvent(KCapacityBar* self, QInputMethodEvent* param1);
void KCapacityBar_OnInputMethodEvent(KCapacityBar* self, intptr_t slot);
void KCapacityBar_QBaseInputMethodEvent(KCapacityBar* self, QInputMethodEvent* param1);
QVariant* KCapacityBar_InputMethodQuery(const KCapacityBar* self, int param1);
void KCapacityBar_OnInputMethodQuery(const KCapacityBar* self, intptr_t slot);
QVariant* KCapacityBar_QBaseInputMethodQuery(const KCapacityBar* self, int param1);
bool KCapacityBar_FocusNextPrevChild(KCapacityBar* self, bool next);
void KCapacityBar_OnFocusNextPrevChild(KCapacityBar* self, intptr_t slot);
bool KCapacityBar_QBaseFocusNextPrevChild(KCapacityBar* self, bool next);
bool KCapacityBar_EventFilter(KCapacityBar* self, QObject* watched, QEvent* event);
void KCapacityBar_OnEventFilter(KCapacityBar* self, intptr_t slot);
bool KCapacityBar_QBaseEventFilter(KCapacityBar* self, QObject* watched, QEvent* event);
void KCapacityBar_TimerEvent(KCapacityBar* self, QTimerEvent* event);
void KCapacityBar_OnTimerEvent(KCapacityBar* self, intptr_t slot);
void KCapacityBar_QBaseTimerEvent(KCapacityBar* self, QTimerEvent* event);
void KCapacityBar_ChildEvent(KCapacityBar* self, QChildEvent* event);
void KCapacityBar_OnChildEvent(KCapacityBar* self, intptr_t slot);
void KCapacityBar_QBaseChildEvent(KCapacityBar* self, QChildEvent* event);
void KCapacityBar_CustomEvent(KCapacityBar* self, QEvent* event);
void KCapacityBar_OnCustomEvent(KCapacityBar* self, intptr_t slot);
void KCapacityBar_QBaseCustomEvent(KCapacityBar* self, QEvent* event);
void KCapacityBar_ConnectNotify(KCapacityBar* self, const QMetaMethod* signal);
void KCapacityBar_OnConnectNotify(KCapacityBar* self, intptr_t slot);
void KCapacityBar_QBaseConnectNotify(KCapacityBar* self, const QMetaMethod* signal);
void KCapacityBar_DisconnectNotify(KCapacityBar* self, const QMetaMethod* signal);
void KCapacityBar_OnDisconnectNotify(KCapacityBar* self, intptr_t slot);
void KCapacityBar_QBaseDisconnectNotify(KCapacityBar* self, const QMetaMethod* signal);
void KCapacityBar_UpdateMicroFocus(KCapacityBar* self);
void KCapacityBar_OnUpdateMicroFocus(KCapacityBar* self, intptr_t slot);
void KCapacityBar_QBaseUpdateMicroFocus(KCapacityBar* self);
void KCapacityBar_Create(KCapacityBar* self);
void KCapacityBar_OnCreate(KCapacityBar* self, intptr_t slot);
void KCapacityBar_QBaseCreate(KCapacityBar* self);
void KCapacityBar_Destroy(KCapacityBar* self);
void KCapacityBar_OnDestroy(KCapacityBar* self, intptr_t slot);
void KCapacityBar_QBaseDestroy(KCapacityBar* self);
bool KCapacityBar_FocusNextChild(KCapacityBar* self);
void KCapacityBar_OnFocusNextChild(KCapacityBar* self, intptr_t slot);
bool KCapacityBar_QBaseFocusNextChild(KCapacityBar* self);
bool KCapacityBar_FocusPreviousChild(KCapacityBar* self);
void KCapacityBar_OnFocusPreviousChild(KCapacityBar* self, intptr_t slot);
bool KCapacityBar_QBaseFocusPreviousChild(KCapacityBar* self);
QObject* KCapacityBar_Sender(const KCapacityBar* self);
void KCapacityBar_OnSender(const KCapacityBar* self, intptr_t slot);
QObject* KCapacityBar_QBaseSender(const KCapacityBar* self);
int KCapacityBar_SenderSignalIndex(const KCapacityBar* self);
void KCapacityBar_OnSenderSignalIndex(const KCapacityBar* self, intptr_t slot);
int KCapacityBar_QBaseSenderSignalIndex(const KCapacityBar* self);
int KCapacityBar_Receivers(const KCapacityBar* self, const char* signal);
void KCapacityBar_OnReceivers(const KCapacityBar* self, intptr_t slot);
int KCapacityBar_QBaseReceivers(const KCapacityBar* self, const char* signal);
bool KCapacityBar_IsSignalConnected(const KCapacityBar* self, const QMetaMethod* signal);
void KCapacityBar_OnIsSignalConnected(const KCapacityBar* self, intptr_t slot);
bool KCapacityBar_QBaseIsSignalConnected(const KCapacityBar* self, const QMetaMethod* signal);
double KCapacityBar_GetDecodedMetricF(const KCapacityBar* self, int metricA, int metricB);
void KCapacityBar_OnGetDecodedMetricF(const KCapacityBar* self, intptr_t slot);
double KCapacityBar_QBaseGetDecodedMetricF(const KCapacityBar* self, int metricA, int metricB);
void KCapacityBar_Delete(KCapacityBar* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
