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
KPixmapSequence* KPixmapSequenceWidget_Sequence(const KPixmapSequenceWidget* self);
int KPixmapSequenceWidget_Interval(const KPixmapSequenceWidget* self);
QSize* KPixmapSequenceWidget_SizeHint(const KPixmapSequenceWidget* self);
void KPixmapSequenceWidget_SetSequence(KPixmapSequenceWidget* self, const KPixmapSequence* seq);
void KPixmapSequenceWidget_SetInterval(KPixmapSequenceWidget* self, int msecs);
void KPixmapSequenceWidget_OnMetaObject(const KPixmapSequenceWidget* self, intptr_t slot);
QMetaObject* KPixmapSequenceWidget_SuperMetaObject(const KPixmapSequenceWidget* self);
void KPixmapSequenceWidget_OnMetacast(KPixmapSequenceWidget* self, intptr_t slot);
void* KPixmapSequenceWidget_SuperMetacast(KPixmapSequenceWidget* self, const char* param1);
void KPixmapSequenceWidget_OnMetacall(KPixmapSequenceWidget* self, intptr_t slot);
int KPixmapSequenceWidget_SuperMetacall(KPixmapSequenceWidget* self, int param1, int param2, void** param3);
void KPixmapSequenceWidget_OnSizeHint(const KPixmapSequenceWidget* self, intptr_t slot);
QSize* KPixmapSequenceWidget_SuperSizeHint(const KPixmapSequenceWidget* self);
int KPixmapSequenceWidget_DevType(const KPixmapSequenceWidget* self);
void KPixmapSequenceWidget_OnDevType(const KPixmapSequenceWidget* self, intptr_t slot);
int KPixmapSequenceWidget_SuperDevType(const KPixmapSequenceWidget* self);
void KPixmapSequenceWidget_SetVisible(KPixmapSequenceWidget* self, bool visible);
void KPixmapSequenceWidget_OnSetVisible(KPixmapSequenceWidget* self, intptr_t slot);
void KPixmapSequenceWidget_SuperSetVisible(KPixmapSequenceWidget* self, bool visible);
QSize* KPixmapSequenceWidget_MinimumSizeHint(const KPixmapSequenceWidget* self);
void KPixmapSequenceWidget_OnMinimumSizeHint(const KPixmapSequenceWidget* self, intptr_t slot);
QSize* KPixmapSequenceWidget_SuperMinimumSizeHint(const KPixmapSequenceWidget* self);
int KPixmapSequenceWidget_HeightForWidth(const KPixmapSequenceWidget* self, int param1);
void KPixmapSequenceWidget_OnHeightForWidth(const KPixmapSequenceWidget* self, intptr_t slot);
int KPixmapSequenceWidget_SuperHeightForWidth(const KPixmapSequenceWidget* self, int param1);
bool KPixmapSequenceWidget_HasHeightForWidth(const KPixmapSequenceWidget* self);
void KPixmapSequenceWidget_OnHasHeightForWidth(const KPixmapSequenceWidget* self, intptr_t slot);
bool KPixmapSequenceWidget_SuperHasHeightForWidth(const KPixmapSequenceWidget* self);
QPaintEngine* KPixmapSequenceWidget_PaintEngine(const KPixmapSequenceWidget* self);
void KPixmapSequenceWidget_OnPaintEngine(const KPixmapSequenceWidget* self, intptr_t slot);
QPaintEngine* KPixmapSequenceWidget_SuperPaintEngine(const KPixmapSequenceWidget* self);
bool KPixmapSequenceWidget_Event(KPixmapSequenceWidget* self, QEvent* event);
void KPixmapSequenceWidget_OnEvent(KPixmapSequenceWidget* self, intptr_t slot);
bool KPixmapSequenceWidget_SuperEvent(KPixmapSequenceWidget* self, QEvent* event);
void KPixmapSequenceWidget_MousePressEvent(KPixmapSequenceWidget* self, QMouseEvent* event);
void KPixmapSequenceWidget_OnMousePressEvent(KPixmapSequenceWidget* self, intptr_t slot);
void KPixmapSequenceWidget_SuperMousePressEvent(KPixmapSequenceWidget* self, QMouseEvent* event);
void KPixmapSequenceWidget_MouseReleaseEvent(KPixmapSequenceWidget* self, QMouseEvent* event);
void KPixmapSequenceWidget_OnMouseReleaseEvent(KPixmapSequenceWidget* self, intptr_t slot);
void KPixmapSequenceWidget_SuperMouseReleaseEvent(KPixmapSequenceWidget* self, QMouseEvent* event);
void KPixmapSequenceWidget_MouseDoubleClickEvent(KPixmapSequenceWidget* self, QMouseEvent* event);
void KPixmapSequenceWidget_OnMouseDoubleClickEvent(KPixmapSequenceWidget* self, intptr_t slot);
void KPixmapSequenceWidget_SuperMouseDoubleClickEvent(KPixmapSequenceWidget* self, QMouseEvent* event);
void KPixmapSequenceWidget_MouseMoveEvent(KPixmapSequenceWidget* self, QMouseEvent* event);
void KPixmapSequenceWidget_OnMouseMoveEvent(KPixmapSequenceWidget* self, intptr_t slot);
void KPixmapSequenceWidget_SuperMouseMoveEvent(KPixmapSequenceWidget* self, QMouseEvent* event);
void KPixmapSequenceWidget_WheelEvent(KPixmapSequenceWidget* self, QWheelEvent* event);
void KPixmapSequenceWidget_OnWheelEvent(KPixmapSequenceWidget* self, intptr_t slot);
void KPixmapSequenceWidget_SuperWheelEvent(KPixmapSequenceWidget* self, QWheelEvent* event);
void KPixmapSequenceWidget_KeyPressEvent(KPixmapSequenceWidget* self, QKeyEvent* event);
void KPixmapSequenceWidget_OnKeyPressEvent(KPixmapSequenceWidget* self, intptr_t slot);
void KPixmapSequenceWidget_SuperKeyPressEvent(KPixmapSequenceWidget* self, QKeyEvent* event);
void KPixmapSequenceWidget_KeyReleaseEvent(KPixmapSequenceWidget* self, QKeyEvent* event);
void KPixmapSequenceWidget_OnKeyReleaseEvent(KPixmapSequenceWidget* self, intptr_t slot);
void KPixmapSequenceWidget_SuperKeyReleaseEvent(KPixmapSequenceWidget* self, QKeyEvent* event);
void KPixmapSequenceWidget_FocusInEvent(KPixmapSequenceWidget* self, QFocusEvent* event);
void KPixmapSequenceWidget_OnFocusInEvent(KPixmapSequenceWidget* self, intptr_t slot);
void KPixmapSequenceWidget_SuperFocusInEvent(KPixmapSequenceWidget* self, QFocusEvent* event);
void KPixmapSequenceWidget_FocusOutEvent(KPixmapSequenceWidget* self, QFocusEvent* event);
void KPixmapSequenceWidget_OnFocusOutEvent(KPixmapSequenceWidget* self, intptr_t slot);
void KPixmapSequenceWidget_SuperFocusOutEvent(KPixmapSequenceWidget* self, QFocusEvent* event);
void KPixmapSequenceWidget_EnterEvent(KPixmapSequenceWidget* self, QEnterEvent* event);
void KPixmapSequenceWidget_OnEnterEvent(KPixmapSequenceWidget* self, intptr_t slot);
void KPixmapSequenceWidget_SuperEnterEvent(KPixmapSequenceWidget* self, QEnterEvent* event);
void KPixmapSequenceWidget_LeaveEvent(KPixmapSequenceWidget* self, QEvent* event);
void KPixmapSequenceWidget_OnLeaveEvent(KPixmapSequenceWidget* self, intptr_t slot);
void KPixmapSequenceWidget_SuperLeaveEvent(KPixmapSequenceWidget* self, QEvent* event);
void KPixmapSequenceWidget_PaintEvent(KPixmapSequenceWidget* self, QPaintEvent* event);
void KPixmapSequenceWidget_OnPaintEvent(KPixmapSequenceWidget* self, intptr_t slot);
void KPixmapSequenceWidget_SuperPaintEvent(KPixmapSequenceWidget* self, QPaintEvent* event);
void KPixmapSequenceWidget_MoveEvent(KPixmapSequenceWidget* self, QMoveEvent* event);
void KPixmapSequenceWidget_OnMoveEvent(KPixmapSequenceWidget* self, intptr_t slot);
void KPixmapSequenceWidget_SuperMoveEvent(KPixmapSequenceWidget* self, QMoveEvent* event);
void KPixmapSequenceWidget_ResizeEvent(KPixmapSequenceWidget* self, QResizeEvent* event);
void KPixmapSequenceWidget_OnResizeEvent(KPixmapSequenceWidget* self, intptr_t slot);
void KPixmapSequenceWidget_SuperResizeEvent(KPixmapSequenceWidget* self, QResizeEvent* event);
void KPixmapSequenceWidget_CloseEvent(KPixmapSequenceWidget* self, QCloseEvent* event);
void KPixmapSequenceWidget_OnCloseEvent(KPixmapSequenceWidget* self, intptr_t slot);
void KPixmapSequenceWidget_SuperCloseEvent(KPixmapSequenceWidget* self, QCloseEvent* event);
void KPixmapSequenceWidget_ContextMenuEvent(KPixmapSequenceWidget* self, QContextMenuEvent* event);
void KPixmapSequenceWidget_OnContextMenuEvent(KPixmapSequenceWidget* self, intptr_t slot);
void KPixmapSequenceWidget_SuperContextMenuEvent(KPixmapSequenceWidget* self, QContextMenuEvent* event);
void KPixmapSequenceWidget_TabletEvent(KPixmapSequenceWidget* self, QTabletEvent* event);
void KPixmapSequenceWidget_OnTabletEvent(KPixmapSequenceWidget* self, intptr_t slot);
void KPixmapSequenceWidget_SuperTabletEvent(KPixmapSequenceWidget* self, QTabletEvent* event);
void KPixmapSequenceWidget_ActionEvent(KPixmapSequenceWidget* self, QActionEvent* event);
void KPixmapSequenceWidget_OnActionEvent(KPixmapSequenceWidget* self, intptr_t slot);
void KPixmapSequenceWidget_SuperActionEvent(KPixmapSequenceWidget* self, QActionEvent* event);
void KPixmapSequenceWidget_DragEnterEvent(KPixmapSequenceWidget* self, QDragEnterEvent* event);
void KPixmapSequenceWidget_OnDragEnterEvent(KPixmapSequenceWidget* self, intptr_t slot);
void KPixmapSequenceWidget_SuperDragEnterEvent(KPixmapSequenceWidget* self, QDragEnterEvent* event);
void KPixmapSequenceWidget_DragMoveEvent(KPixmapSequenceWidget* self, QDragMoveEvent* event);
void KPixmapSequenceWidget_OnDragMoveEvent(KPixmapSequenceWidget* self, intptr_t slot);
void KPixmapSequenceWidget_SuperDragMoveEvent(KPixmapSequenceWidget* self, QDragMoveEvent* event);
void KPixmapSequenceWidget_DragLeaveEvent(KPixmapSequenceWidget* self, QDragLeaveEvent* event);
void KPixmapSequenceWidget_OnDragLeaveEvent(KPixmapSequenceWidget* self, intptr_t slot);
void KPixmapSequenceWidget_SuperDragLeaveEvent(KPixmapSequenceWidget* self, QDragLeaveEvent* event);
void KPixmapSequenceWidget_DropEvent(KPixmapSequenceWidget* self, QDropEvent* event);
void KPixmapSequenceWidget_OnDropEvent(KPixmapSequenceWidget* self, intptr_t slot);
void KPixmapSequenceWidget_SuperDropEvent(KPixmapSequenceWidget* self, QDropEvent* event);
void KPixmapSequenceWidget_ShowEvent(KPixmapSequenceWidget* self, QShowEvent* event);
void KPixmapSequenceWidget_OnShowEvent(KPixmapSequenceWidget* self, intptr_t slot);
void KPixmapSequenceWidget_SuperShowEvent(KPixmapSequenceWidget* self, QShowEvent* event);
void KPixmapSequenceWidget_HideEvent(KPixmapSequenceWidget* self, QHideEvent* event);
void KPixmapSequenceWidget_OnHideEvent(KPixmapSequenceWidget* self, intptr_t slot);
void KPixmapSequenceWidget_SuperHideEvent(KPixmapSequenceWidget* self, QHideEvent* event);
bool KPixmapSequenceWidget_NativeEvent(KPixmapSequenceWidget* self, const libqt_string eventType, void* message, intptr_t* result);
void KPixmapSequenceWidget_OnNativeEvent(KPixmapSequenceWidget* self, intptr_t slot);
bool KPixmapSequenceWidget_SuperNativeEvent(KPixmapSequenceWidget* self, const libqt_string eventType, void* message, intptr_t* result);
void KPixmapSequenceWidget_ChangeEvent(KPixmapSequenceWidget* self, QEvent* param1);
void KPixmapSequenceWidget_OnChangeEvent(KPixmapSequenceWidget* self, intptr_t slot);
void KPixmapSequenceWidget_SuperChangeEvent(KPixmapSequenceWidget* self, QEvent* param1);
int KPixmapSequenceWidget_Metric(const KPixmapSequenceWidget* self, int param1);
void KPixmapSequenceWidget_OnMetric(const KPixmapSequenceWidget* self, intptr_t slot);
int KPixmapSequenceWidget_SuperMetric(const KPixmapSequenceWidget* self, int param1);
void KPixmapSequenceWidget_InitPainter(const KPixmapSequenceWidget* self, QPainter* painter);
void KPixmapSequenceWidget_OnInitPainter(const KPixmapSequenceWidget* self, intptr_t slot);
void KPixmapSequenceWidget_SuperInitPainter(const KPixmapSequenceWidget* self, QPainter* painter);
QPaintDevice* KPixmapSequenceWidget_Redirected(const KPixmapSequenceWidget* self, QPoint* offset);
void KPixmapSequenceWidget_OnRedirected(const KPixmapSequenceWidget* self, intptr_t slot);
QPaintDevice* KPixmapSequenceWidget_SuperRedirected(const KPixmapSequenceWidget* self, QPoint* offset);
QPainter* KPixmapSequenceWidget_SharedPainter(const KPixmapSequenceWidget* self);
void KPixmapSequenceWidget_OnSharedPainter(const KPixmapSequenceWidget* self, intptr_t slot);
QPainter* KPixmapSequenceWidget_SuperSharedPainter(const KPixmapSequenceWidget* self);
void KPixmapSequenceWidget_InputMethodEvent(KPixmapSequenceWidget* self, QInputMethodEvent* param1);
void KPixmapSequenceWidget_OnInputMethodEvent(KPixmapSequenceWidget* self, intptr_t slot);
void KPixmapSequenceWidget_SuperInputMethodEvent(KPixmapSequenceWidget* self, QInputMethodEvent* param1);
QVariant* KPixmapSequenceWidget_InputMethodQuery(const KPixmapSequenceWidget* self, int param1);
void KPixmapSequenceWidget_OnInputMethodQuery(const KPixmapSequenceWidget* self, intptr_t slot);
QVariant* KPixmapSequenceWidget_SuperInputMethodQuery(const KPixmapSequenceWidget* self, int param1);
bool KPixmapSequenceWidget_FocusNextPrevChild(KPixmapSequenceWidget* self, bool next);
void KPixmapSequenceWidget_OnFocusNextPrevChild(KPixmapSequenceWidget* self, intptr_t slot);
bool KPixmapSequenceWidget_SuperFocusNextPrevChild(KPixmapSequenceWidget* self, bool next);
bool KPixmapSequenceWidget_EventFilter(KPixmapSequenceWidget* self, QObject* watched, QEvent* event);
void KPixmapSequenceWidget_OnEventFilter(KPixmapSequenceWidget* self, intptr_t slot);
bool KPixmapSequenceWidget_SuperEventFilter(KPixmapSequenceWidget* self, QObject* watched, QEvent* event);
void KPixmapSequenceWidget_TimerEvent(KPixmapSequenceWidget* self, QTimerEvent* event);
void KPixmapSequenceWidget_OnTimerEvent(KPixmapSequenceWidget* self, intptr_t slot);
void KPixmapSequenceWidget_SuperTimerEvent(KPixmapSequenceWidget* self, QTimerEvent* event);
void KPixmapSequenceWidget_ChildEvent(KPixmapSequenceWidget* self, QChildEvent* event);
void KPixmapSequenceWidget_OnChildEvent(KPixmapSequenceWidget* self, intptr_t slot);
void KPixmapSequenceWidget_SuperChildEvent(KPixmapSequenceWidget* self, QChildEvent* event);
void KPixmapSequenceWidget_CustomEvent(KPixmapSequenceWidget* self, QEvent* event);
void KPixmapSequenceWidget_OnCustomEvent(KPixmapSequenceWidget* self, intptr_t slot);
void KPixmapSequenceWidget_SuperCustomEvent(KPixmapSequenceWidget* self, QEvent* event);
void KPixmapSequenceWidget_ConnectNotify(KPixmapSequenceWidget* self, const QMetaMethod* signal);
void KPixmapSequenceWidget_OnConnectNotify(KPixmapSequenceWidget* self, intptr_t slot);
void KPixmapSequenceWidget_SuperConnectNotify(KPixmapSequenceWidget* self, const QMetaMethod* signal);
void KPixmapSequenceWidget_DisconnectNotify(KPixmapSequenceWidget* self, const QMetaMethod* signal);
void KPixmapSequenceWidget_OnDisconnectNotify(KPixmapSequenceWidget* self, intptr_t slot);
void KPixmapSequenceWidget_SuperDisconnectNotify(KPixmapSequenceWidget* self, const QMetaMethod* signal);
void KPixmapSequenceWidget_UpdateMicroFocus(KPixmapSequenceWidget* self);
void KPixmapSequenceWidget_OnUpdateMicroFocus(KPixmapSequenceWidget* self, intptr_t slot);
void KPixmapSequenceWidget_SuperUpdateMicroFocus(KPixmapSequenceWidget* self);
void KPixmapSequenceWidget_Create(KPixmapSequenceWidget* self);
void KPixmapSequenceWidget_OnCreate(KPixmapSequenceWidget* self, intptr_t slot);
void KPixmapSequenceWidget_SuperCreate(KPixmapSequenceWidget* self);
void KPixmapSequenceWidget_Destroy(KPixmapSequenceWidget* self);
void KPixmapSequenceWidget_OnDestroy(KPixmapSequenceWidget* self, intptr_t slot);
void KPixmapSequenceWidget_SuperDestroy(KPixmapSequenceWidget* self);
bool KPixmapSequenceWidget_FocusNextChild(KPixmapSequenceWidget* self);
void KPixmapSequenceWidget_OnFocusNextChild(KPixmapSequenceWidget* self, intptr_t slot);
bool KPixmapSequenceWidget_SuperFocusNextChild(KPixmapSequenceWidget* self);
bool KPixmapSequenceWidget_FocusPreviousChild(KPixmapSequenceWidget* self);
void KPixmapSequenceWidget_OnFocusPreviousChild(KPixmapSequenceWidget* self, intptr_t slot);
bool KPixmapSequenceWidget_SuperFocusPreviousChild(KPixmapSequenceWidget* self);
QObject* KPixmapSequenceWidget_Sender(const KPixmapSequenceWidget* self);
void KPixmapSequenceWidget_OnSender(const KPixmapSequenceWidget* self, intptr_t slot);
QObject* KPixmapSequenceWidget_SuperSender(const KPixmapSequenceWidget* self);
int KPixmapSequenceWidget_SenderSignalIndex(const KPixmapSequenceWidget* self);
void KPixmapSequenceWidget_OnSenderSignalIndex(const KPixmapSequenceWidget* self, intptr_t slot);
int KPixmapSequenceWidget_SuperSenderSignalIndex(const KPixmapSequenceWidget* self);
int KPixmapSequenceWidget_Receivers(const KPixmapSequenceWidget* self, const char* signal);
void KPixmapSequenceWidget_OnReceivers(const KPixmapSequenceWidget* self, intptr_t slot);
int KPixmapSequenceWidget_SuperReceivers(const KPixmapSequenceWidget* self, const char* signal);
bool KPixmapSequenceWidget_IsSignalConnected(const KPixmapSequenceWidget* self, const QMetaMethod* signal);
void KPixmapSequenceWidget_OnIsSignalConnected(const KPixmapSequenceWidget* self, intptr_t slot);
bool KPixmapSequenceWidget_SuperIsSignalConnected(const KPixmapSequenceWidget* self, const QMetaMethod* signal);
double KPixmapSequenceWidget_GetDecodedMetricF(const KPixmapSequenceWidget* self, int metricA, int metricB);
void KPixmapSequenceWidget_OnGetDecodedMetricF(const KPixmapSequenceWidget* self, intptr_t slot);
double KPixmapSequenceWidget_SuperGetDecodedMetricF(const KPixmapSequenceWidget* self, int metricA, int metricB);
void KPixmapSequenceWidget_Delete(KPixmapSequenceWidget* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
