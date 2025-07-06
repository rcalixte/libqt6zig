#pragma once
#ifndef SRCC_LIBQRASTERWINDOW_H
#define SRCC_LIBQRASTERWINDOW_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QAccessibleInterface QAccessibleInterface;
typedef struct QChildEvent QChildEvent;
typedef struct QCloseEvent QCloseEvent;
typedef struct QEvent QEvent;
typedef struct QExposeEvent QExposeEvent;
typedef struct QFocusEvent QFocusEvent;
typedef struct QHideEvent QHideEvent;
typedef struct QKeyEvent QKeyEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QMouseEvent QMouseEvent;
typedef struct QMoveEvent QMoveEvent;
typedef struct QObject QObject;
typedef struct QPaintDevice QPaintDevice;
typedef struct QPaintDeviceWindow QPaintDeviceWindow;
typedef struct QPaintEvent QPaintEvent;
typedef struct QPainter QPainter;
typedef struct QPoint QPoint;
typedef struct QRasterWindow QRasterWindow;
typedef struct QResizeEvent QResizeEvent;
typedef struct QShowEvent QShowEvent;
typedef struct QSize QSize;
typedef struct QSurface QSurface;
typedef struct QSurfaceFormat QSurfaceFormat;
typedef struct QTabletEvent QTabletEvent;
typedef struct QTimerEvent QTimerEvent;
typedef struct QTouchEvent QTouchEvent;
typedef struct QWheelEvent QWheelEvent;
typedef struct QWindow QWindow;
#endif

QRasterWindow* QRasterWindow_new();
QRasterWindow* QRasterWindow_new2(QWindow* parent);
QMetaObject* QRasterWindow_MetaObject(const QRasterWindow* self);
void* QRasterWindow_Metacast(QRasterWindow* self, const char* param1);
int QRasterWindow_Metacall(QRasterWindow* self, int param1, int param2, void** param3);
void QRasterWindow_OnMetacall(QRasterWindow* self, intptr_t slot);
int QRasterWindow_QBaseMetacall(QRasterWindow* self, int param1, int param2, void** param3);
libqt_string QRasterWindow_Tr(const char* s);
int QRasterWindow_Metric(const QRasterWindow* self, int metric);
void QRasterWindow_OnMetric(const QRasterWindow* self, intptr_t slot);
int QRasterWindow_QBaseMetric(const QRasterWindow* self, int metric);
QPaintDevice* QRasterWindow_Redirected(const QRasterWindow* self, QPoint* param1);
void QRasterWindow_OnRedirected(const QRasterWindow* self, intptr_t slot);
QPaintDevice* QRasterWindow_QBaseRedirected(const QRasterWindow* self, QPoint* param1);
void QRasterWindow_ResizeEvent(QRasterWindow* self, QResizeEvent* event);
void QRasterWindow_OnResizeEvent(QRasterWindow* self, intptr_t slot);
void QRasterWindow_QBaseResizeEvent(QRasterWindow* self, QResizeEvent* event);
libqt_string QRasterWindow_Tr2(const char* s, const char* c);
libqt_string QRasterWindow_Tr3(const char* s, const char* c, int n);
void QRasterWindow_ExposeEvent(QRasterWindow* self, QExposeEvent* param1);
void QRasterWindow_OnExposeEvent(QRasterWindow* self, intptr_t slot);
void QRasterWindow_QBaseExposeEvent(QRasterWindow* self, QExposeEvent* param1);
void QRasterWindow_PaintEvent(QRasterWindow* self, QPaintEvent* event);
void QRasterWindow_OnPaintEvent(QRasterWindow* self, intptr_t slot);
void QRasterWindow_QBasePaintEvent(QRasterWindow* self, QPaintEvent* event);
bool QRasterWindow_Event(QRasterWindow* self, QEvent* event);
void QRasterWindow_OnEvent(QRasterWindow* self, intptr_t slot);
bool QRasterWindow_QBaseEvent(QRasterWindow* self, QEvent* event);
int QRasterWindow_SurfaceType(const QRasterWindow* self);
void QRasterWindow_OnSurfaceType(const QRasterWindow* self, intptr_t slot);
int QRasterWindow_QBaseSurfaceType(const QRasterWindow* self);
QSurfaceFormat* QRasterWindow_Format(const QRasterWindow* self);
void QRasterWindow_OnFormat(const QRasterWindow* self, intptr_t slot);
QSurfaceFormat* QRasterWindow_QBaseFormat(const QRasterWindow* self);
QSize* QRasterWindow_Size(const QRasterWindow* self);
void QRasterWindow_OnSize(const QRasterWindow* self, intptr_t slot);
QSize* QRasterWindow_QBaseSize(const QRasterWindow* self);
QAccessibleInterface* QRasterWindow_AccessibleRoot(const QRasterWindow* self);
void QRasterWindow_OnAccessibleRoot(const QRasterWindow* self, intptr_t slot);
QAccessibleInterface* QRasterWindow_QBaseAccessibleRoot(const QRasterWindow* self);
QObject* QRasterWindow_FocusObject(const QRasterWindow* self);
void QRasterWindow_OnFocusObject(const QRasterWindow* self, intptr_t slot);
QObject* QRasterWindow_QBaseFocusObject(const QRasterWindow* self);
void QRasterWindow_MoveEvent(QRasterWindow* self, QMoveEvent* param1);
void QRasterWindow_OnMoveEvent(QRasterWindow* self, intptr_t slot);
void QRasterWindow_QBaseMoveEvent(QRasterWindow* self, QMoveEvent* param1);
void QRasterWindow_FocusInEvent(QRasterWindow* self, QFocusEvent* param1);
void QRasterWindow_OnFocusInEvent(QRasterWindow* self, intptr_t slot);
void QRasterWindow_QBaseFocusInEvent(QRasterWindow* self, QFocusEvent* param1);
void QRasterWindow_FocusOutEvent(QRasterWindow* self, QFocusEvent* param1);
void QRasterWindow_OnFocusOutEvent(QRasterWindow* self, intptr_t slot);
void QRasterWindow_QBaseFocusOutEvent(QRasterWindow* self, QFocusEvent* param1);
void QRasterWindow_ShowEvent(QRasterWindow* self, QShowEvent* param1);
void QRasterWindow_OnShowEvent(QRasterWindow* self, intptr_t slot);
void QRasterWindow_QBaseShowEvent(QRasterWindow* self, QShowEvent* param1);
void QRasterWindow_HideEvent(QRasterWindow* self, QHideEvent* param1);
void QRasterWindow_OnHideEvent(QRasterWindow* self, intptr_t slot);
void QRasterWindow_QBaseHideEvent(QRasterWindow* self, QHideEvent* param1);
void QRasterWindow_CloseEvent(QRasterWindow* self, QCloseEvent* param1);
void QRasterWindow_OnCloseEvent(QRasterWindow* self, intptr_t slot);
void QRasterWindow_QBaseCloseEvent(QRasterWindow* self, QCloseEvent* param1);
void QRasterWindow_KeyPressEvent(QRasterWindow* self, QKeyEvent* param1);
void QRasterWindow_OnKeyPressEvent(QRasterWindow* self, intptr_t slot);
void QRasterWindow_QBaseKeyPressEvent(QRasterWindow* self, QKeyEvent* param1);
void QRasterWindow_KeyReleaseEvent(QRasterWindow* self, QKeyEvent* param1);
void QRasterWindow_OnKeyReleaseEvent(QRasterWindow* self, intptr_t slot);
void QRasterWindow_QBaseKeyReleaseEvent(QRasterWindow* self, QKeyEvent* param1);
void QRasterWindow_MousePressEvent(QRasterWindow* self, QMouseEvent* param1);
void QRasterWindow_OnMousePressEvent(QRasterWindow* self, intptr_t slot);
void QRasterWindow_QBaseMousePressEvent(QRasterWindow* self, QMouseEvent* param1);
void QRasterWindow_MouseReleaseEvent(QRasterWindow* self, QMouseEvent* param1);
void QRasterWindow_OnMouseReleaseEvent(QRasterWindow* self, intptr_t slot);
void QRasterWindow_QBaseMouseReleaseEvent(QRasterWindow* self, QMouseEvent* param1);
void QRasterWindow_MouseDoubleClickEvent(QRasterWindow* self, QMouseEvent* param1);
void QRasterWindow_OnMouseDoubleClickEvent(QRasterWindow* self, intptr_t slot);
void QRasterWindow_QBaseMouseDoubleClickEvent(QRasterWindow* self, QMouseEvent* param1);
void QRasterWindow_MouseMoveEvent(QRasterWindow* self, QMouseEvent* param1);
void QRasterWindow_OnMouseMoveEvent(QRasterWindow* self, intptr_t slot);
void QRasterWindow_QBaseMouseMoveEvent(QRasterWindow* self, QMouseEvent* param1);
void QRasterWindow_WheelEvent(QRasterWindow* self, QWheelEvent* param1);
void QRasterWindow_OnWheelEvent(QRasterWindow* self, intptr_t slot);
void QRasterWindow_QBaseWheelEvent(QRasterWindow* self, QWheelEvent* param1);
void QRasterWindow_TouchEvent(QRasterWindow* self, QTouchEvent* param1);
void QRasterWindow_OnTouchEvent(QRasterWindow* self, intptr_t slot);
void QRasterWindow_QBaseTouchEvent(QRasterWindow* self, QTouchEvent* param1);
void QRasterWindow_TabletEvent(QRasterWindow* self, QTabletEvent* param1);
void QRasterWindow_OnTabletEvent(QRasterWindow* self, intptr_t slot);
void QRasterWindow_QBaseTabletEvent(QRasterWindow* self, QTabletEvent* param1);
bool QRasterWindow_NativeEvent(QRasterWindow* self, const libqt_string eventType, void* message, intptr_t* result);
void QRasterWindow_OnNativeEvent(QRasterWindow* self, intptr_t slot);
bool QRasterWindow_QBaseNativeEvent(QRasterWindow* self, const libqt_string eventType, void* message, intptr_t* result);
bool QRasterWindow_EventFilter(QRasterWindow* self, QObject* watched, QEvent* event);
void QRasterWindow_OnEventFilter(QRasterWindow* self, intptr_t slot);
bool QRasterWindow_QBaseEventFilter(QRasterWindow* self, QObject* watched, QEvent* event);
void QRasterWindow_TimerEvent(QRasterWindow* self, QTimerEvent* event);
void QRasterWindow_OnTimerEvent(QRasterWindow* self, intptr_t slot);
void QRasterWindow_QBaseTimerEvent(QRasterWindow* self, QTimerEvent* event);
void QRasterWindow_ChildEvent(QRasterWindow* self, QChildEvent* event);
void QRasterWindow_OnChildEvent(QRasterWindow* self, intptr_t slot);
void QRasterWindow_QBaseChildEvent(QRasterWindow* self, QChildEvent* event);
void QRasterWindow_CustomEvent(QRasterWindow* self, QEvent* event);
void QRasterWindow_OnCustomEvent(QRasterWindow* self, intptr_t slot);
void QRasterWindow_QBaseCustomEvent(QRasterWindow* self, QEvent* event);
void QRasterWindow_ConnectNotify(QRasterWindow* self, const QMetaMethod* signal);
void QRasterWindow_OnConnectNotify(QRasterWindow* self, intptr_t slot);
void QRasterWindow_QBaseConnectNotify(QRasterWindow* self, const QMetaMethod* signal);
void QRasterWindow_DisconnectNotify(QRasterWindow* self, const QMetaMethod* signal);
void QRasterWindow_OnDisconnectNotify(QRasterWindow* self, intptr_t slot);
void QRasterWindow_QBaseDisconnectNotify(QRasterWindow* self, const QMetaMethod* signal);
int QRasterWindow_DevType(const QRasterWindow* self);
void QRasterWindow_OnDevType(const QRasterWindow* self, intptr_t slot);
int QRasterWindow_QBaseDevType(const QRasterWindow* self);
void QRasterWindow_InitPainter(const QRasterWindow* self, QPainter* painter);
void QRasterWindow_OnInitPainter(const QRasterWindow* self, intptr_t slot);
void QRasterWindow_QBaseInitPainter(const QRasterWindow* self, QPainter* painter);
QPainter* QRasterWindow_SharedPainter(const QRasterWindow* self);
void QRasterWindow_OnSharedPainter(const QRasterWindow* self, intptr_t slot);
QPainter* QRasterWindow_QBaseSharedPainter(const QRasterWindow* self);
void* QRasterWindow_ResolveInterface(const QRasterWindow* self, const char* name, int revision);
void QRasterWindow_OnResolveInterface(const QRasterWindow* self, intptr_t slot);
void* QRasterWindow_QBaseResolveInterface(const QRasterWindow* self, const char* name, int revision);
QObject* QRasterWindow_Sender(const QRasterWindow* self);
void QRasterWindow_OnSender(const QRasterWindow* self, intptr_t slot);
QObject* QRasterWindow_QBaseSender(const QRasterWindow* self);
int QRasterWindow_SenderSignalIndex(const QRasterWindow* self);
void QRasterWindow_OnSenderSignalIndex(const QRasterWindow* self, intptr_t slot);
int QRasterWindow_QBaseSenderSignalIndex(const QRasterWindow* self);
int QRasterWindow_Receivers(const QRasterWindow* self, const char* signal);
void QRasterWindow_OnReceivers(const QRasterWindow* self, intptr_t slot);
int QRasterWindow_QBaseReceivers(const QRasterWindow* self, const char* signal);
bool QRasterWindow_IsSignalConnected(const QRasterWindow* self, const QMetaMethod* signal);
void QRasterWindow_OnIsSignalConnected(const QRasterWindow* self, intptr_t slot);
bool QRasterWindow_QBaseIsSignalConnected(const QRasterWindow* self, const QMetaMethod* signal);
double QRasterWindow_GetDecodedMetricF(const QRasterWindow* self, int metricA, int metricB);
void QRasterWindow_OnGetDecodedMetricF(const QRasterWindow* self, intptr_t slot);
double QRasterWindow_QBaseGetDecodedMetricF(const QRasterWindow* self, int metricA, int metricB);
void QRasterWindow_Delete(QRasterWindow* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
