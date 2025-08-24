#pragma once
#ifndef SRC_EXTRAS_KWIDGETSADDONSC_LIBKPIXMAPSEQUENCEWIDGET_H
#define SRC_EXTRAS_KWIDGETSADDONSC_LIBKPIXMAPSEQUENCEWIDGET_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KPixmapSequence KPixmapSequence;
typedef struct KPixmapSequenceWidget KPixmapSequenceWidget;
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

KPixmapSequenceWidget* KPixmapSequenceWidget_new(QWidget* parent);
KPixmapSequenceWidget* KPixmapSequenceWidget_new2();
KPixmapSequenceWidget* KPixmapSequenceWidget_new3(const KPixmapSequence* seq);
KPixmapSequenceWidget* KPixmapSequenceWidget_new4(const KPixmapSequence* seq, QWidget* parent);
QMetaObject* KPixmapSequenceWidget_MetaObject(const KPixmapSequenceWidget* self);
void* KPixmapSequenceWidget_Metacast(KPixmapSequenceWidget* self, const char* param1);
int KPixmapSequenceWidget_Metacall(KPixmapSequenceWidget* self, int param1, int param2, void** param3);
void KPixmapSequenceWidget_OnMetacall(KPixmapSequenceWidget* self, intptr_t slot);
int KPixmapSequenceWidget_QBaseMetacall(KPixmapSequenceWidget* self, int param1, int param2, void** param3);
libqt_string KPixmapSequenceWidget_Tr(const char* s);
KPixmapSequence* KPixmapSequenceWidget_Sequence(const KPixmapSequenceWidget* self);
int KPixmapSequenceWidget_Interval(const KPixmapSequenceWidget* self);
QSize* KPixmapSequenceWidget_SizeHint(const KPixmapSequenceWidget* self);
void KPixmapSequenceWidget_OnSizeHint(const KPixmapSequenceWidget* self, intptr_t slot);
QSize* KPixmapSequenceWidget_QBaseSizeHint(const KPixmapSequenceWidget* self);
void KPixmapSequenceWidget_SetSequence(KPixmapSequenceWidget* self, const KPixmapSequence* seq);
void KPixmapSequenceWidget_SetInterval(KPixmapSequenceWidget* self, int msecs);
libqt_string KPixmapSequenceWidget_Tr2(const char* s, const char* c);
libqt_string KPixmapSequenceWidget_Tr3(const char* s, const char* c, int n);
int KPixmapSequenceWidget_DevType(const KPixmapSequenceWidget* self);
void KPixmapSequenceWidget_OnDevType(const KPixmapSequenceWidget* self, intptr_t slot);
int KPixmapSequenceWidget_QBaseDevType(const KPixmapSequenceWidget* self);
void KPixmapSequenceWidget_SetVisible(KPixmapSequenceWidget* self, bool visible);
void KPixmapSequenceWidget_OnSetVisible(KPixmapSequenceWidget* self, intptr_t slot);
void KPixmapSequenceWidget_QBaseSetVisible(KPixmapSequenceWidget* self, bool visible);
QSize* KPixmapSequenceWidget_MinimumSizeHint(const KPixmapSequenceWidget* self);
void KPixmapSequenceWidget_OnMinimumSizeHint(const KPixmapSequenceWidget* self, intptr_t slot);
QSize* KPixmapSequenceWidget_QBaseMinimumSizeHint(const KPixmapSequenceWidget* self);
int KPixmapSequenceWidget_HeightForWidth(const KPixmapSequenceWidget* self, int param1);
void KPixmapSequenceWidget_OnHeightForWidth(const KPixmapSequenceWidget* self, intptr_t slot);
int KPixmapSequenceWidget_QBaseHeightForWidth(const KPixmapSequenceWidget* self, int param1);
bool KPixmapSequenceWidget_HasHeightForWidth(const KPixmapSequenceWidget* self);
void KPixmapSequenceWidget_OnHasHeightForWidth(const KPixmapSequenceWidget* self, intptr_t slot);
bool KPixmapSequenceWidget_QBaseHasHeightForWidth(const KPixmapSequenceWidget* self);
QPaintEngine* KPixmapSequenceWidget_PaintEngine(const KPixmapSequenceWidget* self);
void KPixmapSequenceWidget_OnPaintEngine(const KPixmapSequenceWidget* self, intptr_t slot);
QPaintEngine* KPixmapSequenceWidget_QBasePaintEngine(const KPixmapSequenceWidget* self);
bool KPixmapSequenceWidget_Event(KPixmapSequenceWidget* self, QEvent* event);
void KPixmapSequenceWidget_OnEvent(KPixmapSequenceWidget* self, intptr_t slot);
bool KPixmapSequenceWidget_QBaseEvent(KPixmapSequenceWidget* self, QEvent* event);
void KPixmapSequenceWidget_MousePressEvent(KPixmapSequenceWidget* self, QMouseEvent* event);
void KPixmapSequenceWidget_OnMousePressEvent(KPixmapSequenceWidget* self, intptr_t slot);
void KPixmapSequenceWidget_QBaseMousePressEvent(KPixmapSequenceWidget* self, QMouseEvent* event);
void KPixmapSequenceWidget_MouseReleaseEvent(KPixmapSequenceWidget* self, QMouseEvent* event);
void KPixmapSequenceWidget_OnMouseReleaseEvent(KPixmapSequenceWidget* self, intptr_t slot);
void KPixmapSequenceWidget_QBaseMouseReleaseEvent(KPixmapSequenceWidget* self, QMouseEvent* event);
void KPixmapSequenceWidget_MouseDoubleClickEvent(KPixmapSequenceWidget* self, QMouseEvent* event);
void KPixmapSequenceWidget_OnMouseDoubleClickEvent(KPixmapSequenceWidget* self, intptr_t slot);
void KPixmapSequenceWidget_QBaseMouseDoubleClickEvent(KPixmapSequenceWidget* self, QMouseEvent* event);
void KPixmapSequenceWidget_MouseMoveEvent(KPixmapSequenceWidget* self, QMouseEvent* event);
void KPixmapSequenceWidget_OnMouseMoveEvent(KPixmapSequenceWidget* self, intptr_t slot);
void KPixmapSequenceWidget_QBaseMouseMoveEvent(KPixmapSequenceWidget* self, QMouseEvent* event);
void KPixmapSequenceWidget_WheelEvent(KPixmapSequenceWidget* self, QWheelEvent* event);
void KPixmapSequenceWidget_OnWheelEvent(KPixmapSequenceWidget* self, intptr_t slot);
void KPixmapSequenceWidget_QBaseWheelEvent(KPixmapSequenceWidget* self, QWheelEvent* event);
void KPixmapSequenceWidget_KeyPressEvent(KPixmapSequenceWidget* self, QKeyEvent* event);
void KPixmapSequenceWidget_OnKeyPressEvent(KPixmapSequenceWidget* self, intptr_t slot);
void KPixmapSequenceWidget_QBaseKeyPressEvent(KPixmapSequenceWidget* self, QKeyEvent* event);
void KPixmapSequenceWidget_KeyReleaseEvent(KPixmapSequenceWidget* self, QKeyEvent* event);
void KPixmapSequenceWidget_OnKeyReleaseEvent(KPixmapSequenceWidget* self, intptr_t slot);
void KPixmapSequenceWidget_QBaseKeyReleaseEvent(KPixmapSequenceWidget* self, QKeyEvent* event);
void KPixmapSequenceWidget_FocusInEvent(KPixmapSequenceWidget* self, QFocusEvent* event);
void KPixmapSequenceWidget_OnFocusInEvent(KPixmapSequenceWidget* self, intptr_t slot);
void KPixmapSequenceWidget_QBaseFocusInEvent(KPixmapSequenceWidget* self, QFocusEvent* event);
void KPixmapSequenceWidget_FocusOutEvent(KPixmapSequenceWidget* self, QFocusEvent* event);
void KPixmapSequenceWidget_OnFocusOutEvent(KPixmapSequenceWidget* self, intptr_t slot);
void KPixmapSequenceWidget_QBaseFocusOutEvent(KPixmapSequenceWidget* self, QFocusEvent* event);
void KPixmapSequenceWidget_EnterEvent(KPixmapSequenceWidget* self, QEnterEvent* event);
void KPixmapSequenceWidget_OnEnterEvent(KPixmapSequenceWidget* self, intptr_t slot);
void KPixmapSequenceWidget_QBaseEnterEvent(KPixmapSequenceWidget* self, QEnterEvent* event);
void KPixmapSequenceWidget_LeaveEvent(KPixmapSequenceWidget* self, QEvent* event);
void KPixmapSequenceWidget_OnLeaveEvent(KPixmapSequenceWidget* self, intptr_t slot);
void KPixmapSequenceWidget_QBaseLeaveEvent(KPixmapSequenceWidget* self, QEvent* event);
void KPixmapSequenceWidget_PaintEvent(KPixmapSequenceWidget* self, QPaintEvent* event);
void KPixmapSequenceWidget_OnPaintEvent(KPixmapSequenceWidget* self, intptr_t slot);
void KPixmapSequenceWidget_QBasePaintEvent(KPixmapSequenceWidget* self, QPaintEvent* event);
void KPixmapSequenceWidget_MoveEvent(KPixmapSequenceWidget* self, QMoveEvent* event);
void KPixmapSequenceWidget_OnMoveEvent(KPixmapSequenceWidget* self, intptr_t slot);
void KPixmapSequenceWidget_QBaseMoveEvent(KPixmapSequenceWidget* self, QMoveEvent* event);
void KPixmapSequenceWidget_ResizeEvent(KPixmapSequenceWidget* self, QResizeEvent* event);
void KPixmapSequenceWidget_OnResizeEvent(KPixmapSequenceWidget* self, intptr_t slot);
void KPixmapSequenceWidget_QBaseResizeEvent(KPixmapSequenceWidget* self, QResizeEvent* event);
void KPixmapSequenceWidget_CloseEvent(KPixmapSequenceWidget* self, QCloseEvent* event);
void KPixmapSequenceWidget_OnCloseEvent(KPixmapSequenceWidget* self, intptr_t slot);
void KPixmapSequenceWidget_QBaseCloseEvent(KPixmapSequenceWidget* self, QCloseEvent* event);
void KPixmapSequenceWidget_ContextMenuEvent(KPixmapSequenceWidget* self, QContextMenuEvent* event);
void KPixmapSequenceWidget_OnContextMenuEvent(KPixmapSequenceWidget* self, intptr_t slot);
void KPixmapSequenceWidget_QBaseContextMenuEvent(KPixmapSequenceWidget* self, QContextMenuEvent* event);
void KPixmapSequenceWidget_TabletEvent(KPixmapSequenceWidget* self, QTabletEvent* event);
void KPixmapSequenceWidget_OnTabletEvent(KPixmapSequenceWidget* self, intptr_t slot);
void KPixmapSequenceWidget_QBaseTabletEvent(KPixmapSequenceWidget* self, QTabletEvent* event);
void KPixmapSequenceWidget_ActionEvent(KPixmapSequenceWidget* self, QActionEvent* event);
void KPixmapSequenceWidget_OnActionEvent(KPixmapSequenceWidget* self, intptr_t slot);
void KPixmapSequenceWidget_QBaseActionEvent(KPixmapSequenceWidget* self, QActionEvent* event);
void KPixmapSequenceWidget_DragEnterEvent(KPixmapSequenceWidget* self, QDragEnterEvent* event);
void KPixmapSequenceWidget_OnDragEnterEvent(KPixmapSequenceWidget* self, intptr_t slot);
void KPixmapSequenceWidget_QBaseDragEnterEvent(KPixmapSequenceWidget* self, QDragEnterEvent* event);
void KPixmapSequenceWidget_DragMoveEvent(KPixmapSequenceWidget* self, QDragMoveEvent* event);
void KPixmapSequenceWidget_OnDragMoveEvent(KPixmapSequenceWidget* self, intptr_t slot);
void KPixmapSequenceWidget_QBaseDragMoveEvent(KPixmapSequenceWidget* self, QDragMoveEvent* event);
void KPixmapSequenceWidget_DragLeaveEvent(KPixmapSequenceWidget* self, QDragLeaveEvent* event);
void KPixmapSequenceWidget_OnDragLeaveEvent(KPixmapSequenceWidget* self, intptr_t slot);
void KPixmapSequenceWidget_QBaseDragLeaveEvent(KPixmapSequenceWidget* self, QDragLeaveEvent* event);
void KPixmapSequenceWidget_DropEvent(KPixmapSequenceWidget* self, QDropEvent* event);
void KPixmapSequenceWidget_OnDropEvent(KPixmapSequenceWidget* self, intptr_t slot);
void KPixmapSequenceWidget_QBaseDropEvent(KPixmapSequenceWidget* self, QDropEvent* event);
void KPixmapSequenceWidget_ShowEvent(KPixmapSequenceWidget* self, QShowEvent* event);
void KPixmapSequenceWidget_OnShowEvent(KPixmapSequenceWidget* self, intptr_t slot);
void KPixmapSequenceWidget_QBaseShowEvent(KPixmapSequenceWidget* self, QShowEvent* event);
void KPixmapSequenceWidget_HideEvent(KPixmapSequenceWidget* self, QHideEvent* event);
void KPixmapSequenceWidget_OnHideEvent(KPixmapSequenceWidget* self, intptr_t slot);
void KPixmapSequenceWidget_QBaseHideEvent(KPixmapSequenceWidget* self, QHideEvent* event);
bool KPixmapSequenceWidget_NativeEvent(KPixmapSequenceWidget* self, const libqt_string eventType, void* message, intptr_t* result);
void KPixmapSequenceWidget_OnNativeEvent(KPixmapSequenceWidget* self, intptr_t slot);
bool KPixmapSequenceWidget_QBaseNativeEvent(KPixmapSequenceWidget* self, const libqt_string eventType, void* message, intptr_t* result);
void KPixmapSequenceWidget_ChangeEvent(KPixmapSequenceWidget* self, QEvent* param1);
void KPixmapSequenceWidget_OnChangeEvent(KPixmapSequenceWidget* self, intptr_t slot);
void KPixmapSequenceWidget_QBaseChangeEvent(KPixmapSequenceWidget* self, QEvent* param1);
int KPixmapSequenceWidget_Metric(const KPixmapSequenceWidget* self, int param1);
void KPixmapSequenceWidget_OnMetric(const KPixmapSequenceWidget* self, intptr_t slot);
int KPixmapSequenceWidget_QBaseMetric(const KPixmapSequenceWidget* self, int param1);
void KPixmapSequenceWidget_InitPainter(const KPixmapSequenceWidget* self, QPainter* painter);
void KPixmapSequenceWidget_OnInitPainter(const KPixmapSequenceWidget* self, intptr_t slot);
void KPixmapSequenceWidget_QBaseInitPainter(const KPixmapSequenceWidget* self, QPainter* painter);
QPaintDevice* KPixmapSequenceWidget_Redirected(const KPixmapSequenceWidget* self, QPoint* offset);
void KPixmapSequenceWidget_OnRedirected(const KPixmapSequenceWidget* self, intptr_t slot);
QPaintDevice* KPixmapSequenceWidget_QBaseRedirected(const KPixmapSequenceWidget* self, QPoint* offset);
QPainter* KPixmapSequenceWidget_SharedPainter(const KPixmapSequenceWidget* self);
void KPixmapSequenceWidget_OnSharedPainter(const KPixmapSequenceWidget* self, intptr_t slot);
QPainter* KPixmapSequenceWidget_QBaseSharedPainter(const KPixmapSequenceWidget* self);
void KPixmapSequenceWidget_InputMethodEvent(KPixmapSequenceWidget* self, QInputMethodEvent* param1);
void KPixmapSequenceWidget_OnInputMethodEvent(KPixmapSequenceWidget* self, intptr_t slot);
void KPixmapSequenceWidget_QBaseInputMethodEvent(KPixmapSequenceWidget* self, QInputMethodEvent* param1);
QVariant* KPixmapSequenceWidget_InputMethodQuery(const KPixmapSequenceWidget* self, int param1);
void KPixmapSequenceWidget_OnInputMethodQuery(const KPixmapSequenceWidget* self, intptr_t slot);
QVariant* KPixmapSequenceWidget_QBaseInputMethodQuery(const KPixmapSequenceWidget* self, int param1);
bool KPixmapSequenceWidget_FocusNextPrevChild(KPixmapSequenceWidget* self, bool next);
void KPixmapSequenceWidget_OnFocusNextPrevChild(KPixmapSequenceWidget* self, intptr_t slot);
bool KPixmapSequenceWidget_QBaseFocusNextPrevChild(KPixmapSequenceWidget* self, bool next);
bool KPixmapSequenceWidget_EventFilter(KPixmapSequenceWidget* self, QObject* watched, QEvent* event);
void KPixmapSequenceWidget_OnEventFilter(KPixmapSequenceWidget* self, intptr_t slot);
bool KPixmapSequenceWidget_QBaseEventFilter(KPixmapSequenceWidget* self, QObject* watched, QEvent* event);
void KPixmapSequenceWidget_TimerEvent(KPixmapSequenceWidget* self, QTimerEvent* event);
void KPixmapSequenceWidget_OnTimerEvent(KPixmapSequenceWidget* self, intptr_t slot);
void KPixmapSequenceWidget_QBaseTimerEvent(KPixmapSequenceWidget* self, QTimerEvent* event);
void KPixmapSequenceWidget_ChildEvent(KPixmapSequenceWidget* self, QChildEvent* event);
void KPixmapSequenceWidget_OnChildEvent(KPixmapSequenceWidget* self, intptr_t slot);
void KPixmapSequenceWidget_QBaseChildEvent(KPixmapSequenceWidget* self, QChildEvent* event);
void KPixmapSequenceWidget_CustomEvent(KPixmapSequenceWidget* self, QEvent* event);
void KPixmapSequenceWidget_OnCustomEvent(KPixmapSequenceWidget* self, intptr_t slot);
void KPixmapSequenceWidget_QBaseCustomEvent(KPixmapSequenceWidget* self, QEvent* event);
void KPixmapSequenceWidget_ConnectNotify(KPixmapSequenceWidget* self, const QMetaMethod* signal);
void KPixmapSequenceWidget_OnConnectNotify(KPixmapSequenceWidget* self, intptr_t slot);
void KPixmapSequenceWidget_QBaseConnectNotify(KPixmapSequenceWidget* self, const QMetaMethod* signal);
void KPixmapSequenceWidget_DisconnectNotify(KPixmapSequenceWidget* self, const QMetaMethod* signal);
void KPixmapSequenceWidget_OnDisconnectNotify(KPixmapSequenceWidget* self, intptr_t slot);
void KPixmapSequenceWidget_QBaseDisconnectNotify(KPixmapSequenceWidget* self, const QMetaMethod* signal);
void KPixmapSequenceWidget_UpdateMicroFocus(KPixmapSequenceWidget* self);
void KPixmapSequenceWidget_OnUpdateMicroFocus(KPixmapSequenceWidget* self, intptr_t slot);
void KPixmapSequenceWidget_QBaseUpdateMicroFocus(KPixmapSequenceWidget* self);
void KPixmapSequenceWidget_Create(KPixmapSequenceWidget* self);
void KPixmapSequenceWidget_OnCreate(KPixmapSequenceWidget* self, intptr_t slot);
void KPixmapSequenceWidget_QBaseCreate(KPixmapSequenceWidget* self);
void KPixmapSequenceWidget_Destroy(KPixmapSequenceWidget* self);
void KPixmapSequenceWidget_OnDestroy(KPixmapSequenceWidget* self, intptr_t slot);
void KPixmapSequenceWidget_QBaseDestroy(KPixmapSequenceWidget* self);
bool KPixmapSequenceWidget_FocusNextChild(KPixmapSequenceWidget* self);
void KPixmapSequenceWidget_OnFocusNextChild(KPixmapSequenceWidget* self, intptr_t slot);
bool KPixmapSequenceWidget_QBaseFocusNextChild(KPixmapSequenceWidget* self);
bool KPixmapSequenceWidget_FocusPreviousChild(KPixmapSequenceWidget* self);
void KPixmapSequenceWidget_OnFocusPreviousChild(KPixmapSequenceWidget* self, intptr_t slot);
bool KPixmapSequenceWidget_QBaseFocusPreviousChild(KPixmapSequenceWidget* self);
QObject* KPixmapSequenceWidget_Sender(const KPixmapSequenceWidget* self);
void KPixmapSequenceWidget_OnSender(const KPixmapSequenceWidget* self, intptr_t slot);
QObject* KPixmapSequenceWidget_QBaseSender(const KPixmapSequenceWidget* self);
int KPixmapSequenceWidget_SenderSignalIndex(const KPixmapSequenceWidget* self);
void KPixmapSequenceWidget_OnSenderSignalIndex(const KPixmapSequenceWidget* self, intptr_t slot);
int KPixmapSequenceWidget_QBaseSenderSignalIndex(const KPixmapSequenceWidget* self);
int KPixmapSequenceWidget_Receivers(const KPixmapSequenceWidget* self, const char* signal);
void KPixmapSequenceWidget_OnReceivers(const KPixmapSequenceWidget* self, intptr_t slot);
int KPixmapSequenceWidget_QBaseReceivers(const KPixmapSequenceWidget* self, const char* signal);
bool KPixmapSequenceWidget_IsSignalConnected(const KPixmapSequenceWidget* self, const QMetaMethod* signal);
void KPixmapSequenceWidget_OnIsSignalConnected(const KPixmapSequenceWidget* self, intptr_t slot);
bool KPixmapSequenceWidget_QBaseIsSignalConnected(const KPixmapSequenceWidget* self, const QMetaMethod* signal);
double KPixmapSequenceWidget_GetDecodedMetricF(const KPixmapSequenceWidget* self, int metricA, int metricB);
void KPixmapSequenceWidget_OnGetDecodedMetricF(const KPixmapSequenceWidget* self, intptr_t slot);
double KPixmapSequenceWidget_QBaseGetDecodedMetricF(const KPixmapSequenceWidget* self, int metricA, int metricB);
void KPixmapSequenceWidget_Delete(KPixmapSequenceWidget* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
