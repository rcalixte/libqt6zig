#pragma once
#ifndef SRC_OPENGLC_LIBQOPENGLWINDOW_H
#define SRC_OPENGLC_LIBQOPENGLWINDOW_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

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
typedef struct QImage QImage;
typedef struct QKeyEvent QKeyEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QMouseEvent QMouseEvent;
typedef struct QMoveEvent QMoveEvent;
typedef struct QObject QObject;
typedef struct QOpenGLContext QOpenGLContext;
typedef struct QOpenGLWindow QOpenGLWindow;
typedef struct QPaintDevice QPaintDevice;
typedef struct QPaintDeviceWindow QPaintDeviceWindow;
typedef struct QPaintEvent QPaintEvent;
typedef struct QPainter QPainter;
typedef struct QPoint QPoint;
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

QOpenGLWindow* QOpenGLWindow_new();
QOpenGLWindow* QOpenGLWindow_new2(QOpenGLContext* shareContext);
QOpenGLWindow* QOpenGLWindow_new3(int updateBehavior);
QOpenGLWindow* QOpenGLWindow_new4(int updateBehavior, QWindow* parent);
QOpenGLWindow* QOpenGLWindow_new5(QOpenGLContext* shareContext, int updateBehavior);
QOpenGLWindow* QOpenGLWindow_new6(QOpenGLContext* shareContext, int updateBehavior, QWindow* parent);
QMetaObject* QOpenGLWindow_MetaObject(const QOpenGLWindow* self);
void* QOpenGLWindow_Metacast(QOpenGLWindow* self, const char* param1);
int QOpenGLWindow_Metacall(QOpenGLWindow* self, int param1, int param2, void** param3);
libqt_string QOpenGLWindow_Tr(const char* s);
int QOpenGLWindow_UpdateBehavior(const QOpenGLWindow* self);
bool QOpenGLWindow_IsValid(const QOpenGLWindow* self);
void QOpenGLWindow_MakeCurrent(QOpenGLWindow* self);
void QOpenGLWindow_DoneCurrent(QOpenGLWindow* self);
QOpenGLContext* QOpenGLWindow_Context(const QOpenGLWindow* self);
QOpenGLContext* QOpenGLWindow_ShareContext(const QOpenGLWindow* self);
uint32_t QOpenGLWindow_DefaultFramebufferObject(const QOpenGLWindow* self);
QImage* QOpenGLWindow_GrabFramebuffer(QOpenGLWindow* self);
void QOpenGLWindow_FrameSwapped(QOpenGLWindow* self);
void QOpenGLWindow_Connect_FrameSwapped(QOpenGLWindow* self, intptr_t slot);
void QOpenGLWindow_InitializeGL(QOpenGLWindow* self);
void QOpenGLWindow_ResizeGL(QOpenGLWindow* self, int w, int h);
void QOpenGLWindow_PaintGL(QOpenGLWindow* self);
void QOpenGLWindow_PaintUnderGL(QOpenGLWindow* self);
void QOpenGLWindow_PaintOverGL(QOpenGLWindow* self);
void QOpenGLWindow_PaintEvent(QOpenGLWindow* self, QPaintEvent* event);
void QOpenGLWindow_ResizeEvent(QOpenGLWindow* self, QResizeEvent* event);
int QOpenGLWindow_Metric(const QOpenGLWindow* self, int metric);
QPaintDevice* QOpenGLWindow_Redirected(const QOpenGLWindow* self, QPoint* param1);
libqt_string QOpenGLWindow_Tr2(const char* s, const char* c);
libqt_string QOpenGLWindow_Tr3(const char* s, const char* c, int n);
void QOpenGLWindow_OnMetacall(QOpenGLWindow* self, intptr_t slot);
int QOpenGLWindow_QBaseMetacall(QOpenGLWindow* self, int param1, int param2, void** param3);
void QOpenGLWindow_OnInitializeGL(QOpenGLWindow* self, intptr_t slot);
void QOpenGLWindow_QBaseInitializeGL(QOpenGLWindow* self);
void QOpenGLWindow_OnResizeGL(QOpenGLWindow* self, intptr_t slot);
void QOpenGLWindow_QBaseResizeGL(QOpenGLWindow* self, int w, int h);
void QOpenGLWindow_OnPaintGL(QOpenGLWindow* self, intptr_t slot);
void QOpenGLWindow_QBasePaintGL(QOpenGLWindow* self);
void QOpenGLWindow_OnPaintUnderGL(QOpenGLWindow* self, intptr_t slot);
void QOpenGLWindow_QBasePaintUnderGL(QOpenGLWindow* self);
void QOpenGLWindow_OnPaintOverGL(QOpenGLWindow* self, intptr_t slot);
void QOpenGLWindow_QBasePaintOverGL(QOpenGLWindow* self);
void QOpenGLWindow_OnPaintEvent(QOpenGLWindow* self, intptr_t slot);
void QOpenGLWindow_QBasePaintEvent(QOpenGLWindow* self, QPaintEvent* event);
void QOpenGLWindow_OnResizeEvent(QOpenGLWindow* self, intptr_t slot);
void QOpenGLWindow_QBaseResizeEvent(QOpenGLWindow* self, QResizeEvent* event);
void QOpenGLWindow_OnMetric(const QOpenGLWindow* self, intptr_t slot);
int QOpenGLWindow_QBaseMetric(const QOpenGLWindow* self, int metric);
void QOpenGLWindow_OnRedirected(const QOpenGLWindow* self, intptr_t slot);
QPaintDevice* QOpenGLWindow_QBaseRedirected(const QOpenGLWindow* self, QPoint* param1);
void QOpenGLWindow_ExposeEvent(QOpenGLWindow* self, QExposeEvent* param1);
void QOpenGLWindow_OnExposeEvent(QOpenGLWindow* self, intptr_t slot);
void QOpenGLWindow_QBaseExposeEvent(QOpenGLWindow* self, QExposeEvent* param1);
bool QOpenGLWindow_Event(QOpenGLWindow* self, QEvent* event);
void QOpenGLWindow_OnEvent(QOpenGLWindow* self, intptr_t slot);
bool QOpenGLWindow_QBaseEvent(QOpenGLWindow* self, QEvent* event);
int QOpenGLWindow_SurfaceType(const QOpenGLWindow* self);
void QOpenGLWindow_OnSurfaceType(const QOpenGLWindow* self, intptr_t slot);
int QOpenGLWindow_QBaseSurfaceType(const QOpenGLWindow* self);
QSurfaceFormat* QOpenGLWindow_Format(const QOpenGLWindow* self);
void QOpenGLWindow_OnFormat(const QOpenGLWindow* self, intptr_t slot);
QSurfaceFormat* QOpenGLWindow_QBaseFormat(const QOpenGLWindow* self);
QSize* QOpenGLWindow_Size(const QOpenGLWindow* self);
void QOpenGLWindow_OnSize(const QOpenGLWindow* self, intptr_t slot);
QSize* QOpenGLWindow_QBaseSize(const QOpenGLWindow* self);
QAccessibleInterface* QOpenGLWindow_AccessibleRoot(const QOpenGLWindow* self);
void QOpenGLWindow_OnAccessibleRoot(const QOpenGLWindow* self, intptr_t slot);
QAccessibleInterface* QOpenGLWindow_QBaseAccessibleRoot(const QOpenGLWindow* self);
QObject* QOpenGLWindow_FocusObject(const QOpenGLWindow* self);
void QOpenGLWindow_OnFocusObject(const QOpenGLWindow* self, intptr_t slot);
QObject* QOpenGLWindow_QBaseFocusObject(const QOpenGLWindow* self);
void QOpenGLWindow_MoveEvent(QOpenGLWindow* self, QMoveEvent* param1);
void QOpenGLWindow_OnMoveEvent(QOpenGLWindow* self, intptr_t slot);
void QOpenGLWindow_QBaseMoveEvent(QOpenGLWindow* self, QMoveEvent* param1);
void QOpenGLWindow_FocusInEvent(QOpenGLWindow* self, QFocusEvent* param1);
void QOpenGLWindow_OnFocusInEvent(QOpenGLWindow* self, intptr_t slot);
void QOpenGLWindow_QBaseFocusInEvent(QOpenGLWindow* self, QFocusEvent* param1);
void QOpenGLWindow_FocusOutEvent(QOpenGLWindow* self, QFocusEvent* param1);
void QOpenGLWindow_OnFocusOutEvent(QOpenGLWindow* self, intptr_t slot);
void QOpenGLWindow_QBaseFocusOutEvent(QOpenGLWindow* self, QFocusEvent* param1);
void QOpenGLWindow_ShowEvent(QOpenGLWindow* self, QShowEvent* param1);
void QOpenGLWindow_OnShowEvent(QOpenGLWindow* self, intptr_t slot);
void QOpenGLWindow_QBaseShowEvent(QOpenGLWindow* self, QShowEvent* param1);
void QOpenGLWindow_HideEvent(QOpenGLWindow* self, QHideEvent* param1);
void QOpenGLWindow_OnHideEvent(QOpenGLWindow* self, intptr_t slot);
void QOpenGLWindow_QBaseHideEvent(QOpenGLWindow* self, QHideEvent* param1);
void QOpenGLWindow_CloseEvent(QOpenGLWindow* self, QCloseEvent* param1);
void QOpenGLWindow_OnCloseEvent(QOpenGLWindow* self, intptr_t slot);
void QOpenGLWindow_QBaseCloseEvent(QOpenGLWindow* self, QCloseEvent* param1);
void QOpenGLWindow_KeyPressEvent(QOpenGLWindow* self, QKeyEvent* param1);
void QOpenGLWindow_OnKeyPressEvent(QOpenGLWindow* self, intptr_t slot);
void QOpenGLWindow_QBaseKeyPressEvent(QOpenGLWindow* self, QKeyEvent* param1);
void QOpenGLWindow_KeyReleaseEvent(QOpenGLWindow* self, QKeyEvent* param1);
void QOpenGLWindow_OnKeyReleaseEvent(QOpenGLWindow* self, intptr_t slot);
void QOpenGLWindow_QBaseKeyReleaseEvent(QOpenGLWindow* self, QKeyEvent* param1);
void QOpenGLWindow_MousePressEvent(QOpenGLWindow* self, QMouseEvent* param1);
void QOpenGLWindow_OnMousePressEvent(QOpenGLWindow* self, intptr_t slot);
void QOpenGLWindow_QBaseMousePressEvent(QOpenGLWindow* self, QMouseEvent* param1);
void QOpenGLWindow_MouseReleaseEvent(QOpenGLWindow* self, QMouseEvent* param1);
void QOpenGLWindow_OnMouseReleaseEvent(QOpenGLWindow* self, intptr_t slot);
void QOpenGLWindow_QBaseMouseReleaseEvent(QOpenGLWindow* self, QMouseEvent* param1);
void QOpenGLWindow_MouseDoubleClickEvent(QOpenGLWindow* self, QMouseEvent* param1);
void QOpenGLWindow_OnMouseDoubleClickEvent(QOpenGLWindow* self, intptr_t slot);
void QOpenGLWindow_QBaseMouseDoubleClickEvent(QOpenGLWindow* self, QMouseEvent* param1);
void QOpenGLWindow_MouseMoveEvent(QOpenGLWindow* self, QMouseEvent* param1);
void QOpenGLWindow_OnMouseMoveEvent(QOpenGLWindow* self, intptr_t slot);
void QOpenGLWindow_QBaseMouseMoveEvent(QOpenGLWindow* self, QMouseEvent* param1);
void QOpenGLWindow_WheelEvent(QOpenGLWindow* self, QWheelEvent* param1);
void QOpenGLWindow_OnWheelEvent(QOpenGLWindow* self, intptr_t slot);
void QOpenGLWindow_QBaseWheelEvent(QOpenGLWindow* self, QWheelEvent* param1);
void QOpenGLWindow_TouchEvent(QOpenGLWindow* self, QTouchEvent* param1);
void QOpenGLWindow_OnTouchEvent(QOpenGLWindow* self, intptr_t slot);
void QOpenGLWindow_QBaseTouchEvent(QOpenGLWindow* self, QTouchEvent* param1);
void QOpenGLWindow_TabletEvent(QOpenGLWindow* self, QTabletEvent* param1);
void QOpenGLWindow_OnTabletEvent(QOpenGLWindow* self, intptr_t slot);
void QOpenGLWindow_QBaseTabletEvent(QOpenGLWindow* self, QTabletEvent* param1);
bool QOpenGLWindow_NativeEvent(QOpenGLWindow* self, const libqt_string eventType, void* message, intptr_t* result);
void QOpenGLWindow_OnNativeEvent(QOpenGLWindow* self, intptr_t slot);
bool QOpenGLWindow_QBaseNativeEvent(QOpenGLWindow* self, const libqt_string eventType, void* message, intptr_t* result);
bool QOpenGLWindow_EventFilter(QOpenGLWindow* self, QObject* watched, QEvent* event);
void QOpenGLWindow_OnEventFilter(QOpenGLWindow* self, intptr_t slot);
bool QOpenGLWindow_QBaseEventFilter(QOpenGLWindow* self, QObject* watched, QEvent* event);
void QOpenGLWindow_TimerEvent(QOpenGLWindow* self, QTimerEvent* event);
void QOpenGLWindow_OnTimerEvent(QOpenGLWindow* self, intptr_t slot);
void QOpenGLWindow_QBaseTimerEvent(QOpenGLWindow* self, QTimerEvent* event);
void QOpenGLWindow_ChildEvent(QOpenGLWindow* self, QChildEvent* event);
void QOpenGLWindow_OnChildEvent(QOpenGLWindow* self, intptr_t slot);
void QOpenGLWindow_QBaseChildEvent(QOpenGLWindow* self, QChildEvent* event);
void QOpenGLWindow_CustomEvent(QOpenGLWindow* self, QEvent* event);
void QOpenGLWindow_OnCustomEvent(QOpenGLWindow* self, intptr_t slot);
void QOpenGLWindow_QBaseCustomEvent(QOpenGLWindow* self, QEvent* event);
void QOpenGLWindow_ConnectNotify(QOpenGLWindow* self, const QMetaMethod* signal);
void QOpenGLWindow_OnConnectNotify(QOpenGLWindow* self, intptr_t slot);
void QOpenGLWindow_QBaseConnectNotify(QOpenGLWindow* self, const QMetaMethod* signal);
void QOpenGLWindow_DisconnectNotify(QOpenGLWindow* self, const QMetaMethod* signal);
void QOpenGLWindow_OnDisconnectNotify(QOpenGLWindow* self, intptr_t slot);
void QOpenGLWindow_QBaseDisconnectNotify(QOpenGLWindow* self, const QMetaMethod* signal);
int QOpenGLWindow_DevType(const QOpenGLWindow* self);
void QOpenGLWindow_OnDevType(const QOpenGLWindow* self, intptr_t slot);
int QOpenGLWindow_QBaseDevType(const QOpenGLWindow* self);
void QOpenGLWindow_InitPainter(const QOpenGLWindow* self, QPainter* painter);
void QOpenGLWindow_OnInitPainter(const QOpenGLWindow* self, intptr_t slot);
void QOpenGLWindow_QBaseInitPainter(const QOpenGLWindow* self, QPainter* painter);
QPainter* QOpenGLWindow_SharedPainter(const QOpenGLWindow* self);
void QOpenGLWindow_OnSharedPainter(const QOpenGLWindow* self, intptr_t slot);
QPainter* QOpenGLWindow_QBaseSharedPainter(const QOpenGLWindow* self);
void* QOpenGLWindow_ResolveInterface(const QOpenGLWindow* self, const char* name, int revision);
void QOpenGLWindow_OnResolveInterface(const QOpenGLWindow* self, intptr_t slot);
void* QOpenGLWindow_QBaseResolveInterface(const QOpenGLWindow* self, const char* name, int revision);
QObject* QOpenGLWindow_Sender(const QOpenGLWindow* self);
void QOpenGLWindow_OnSender(const QOpenGLWindow* self, intptr_t slot);
QObject* QOpenGLWindow_QBaseSender(const QOpenGLWindow* self);
int QOpenGLWindow_SenderSignalIndex(const QOpenGLWindow* self);
void QOpenGLWindow_OnSenderSignalIndex(const QOpenGLWindow* self, intptr_t slot);
int QOpenGLWindow_QBaseSenderSignalIndex(const QOpenGLWindow* self);
int QOpenGLWindow_Receivers(const QOpenGLWindow* self, const char* signal);
void QOpenGLWindow_OnReceivers(const QOpenGLWindow* self, intptr_t slot);
int QOpenGLWindow_QBaseReceivers(const QOpenGLWindow* self, const char* signal);
bool QOpenGLWindow_IsSignalConnected(const QOpenGLWindow* self, const QMetaMethod* signal);
void QOpenGLWindow_OnIsSignalConnected(const QOpenGLWindow* self, intptr_t slot);
bool QOpenGLWindow_QBaseIsSignalConnected(const QOpenGLWindow* self, const QMetaMethod* signal);
double QOpenGLWindow_GetDecodedMetricF(const QOpenGLWindow* self, int metricA, int metricB);
void QOpenGLWindow_OnGetDecodedMetricF(const QOpenGLWindow* self, intptr_t slot);
double QOpenGLWindow_QBaseGetDecodedMetricF(const QOpenGLWindow* self, int metricA, int metricB);
void QOpenGLWindow_Delete(QOpenGLWindow* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
