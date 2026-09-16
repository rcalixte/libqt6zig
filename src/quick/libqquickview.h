#pragma once
#ifndef QUICK_LIBQQUICKVIEW_H
#define QUICK_LIBQQUICKVIEW_H

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
typedef struct QKeyEvent QKeyEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QMouseEvent QMouseEvent;
typedef struct QMoveEvent QMoveEvent;
typedef struct QObject QObject;
typedef struct QPaintEvent QPaintEvent;
typedef struct QQmlComponent QQmlComponent;
typedef struct QQmlContext QQmlContext;
typedef struct QQmlEngine QQmlEngine;
typedef struct QQmlError QQmlError;
typedef struct QQuickItem QQuickItem;
typedef struct QQuickRenderControl QQuickRenderControl;
typedef struct QQuickView QQuickView;
typedef struct QQuickWindow QQuickWindow;
typedef struct QResizeEvent QResizeEvent;
typedef struct QShowEvent QShowEvent;
typedef struct QSize QSize;
typedef struct QSurface QSurface;
typedef struct QSurfaceFormat QSurfaceFormat;
typedef struct QTabletEvent QTabletEvent;
typedef struct QTimerEvent QTimerEvent;
typedef struct QTouchEvent QTouchEvent;
typedef struct QUrl QUrl;
typedef struct QVariant QVariant;
typedef struct QWheelEvent QWheelEvent;
typedef struct QWindow QWindow;
#endif

QQuickView* QQuickView_new();
QQuickView* QQuickView_new2(QQmlEngine* engine, QWindow* parent);
QQuickView* QQuickView_new3(const QUrl* source);
QQuickView* QQuickView_new4(libqt_string uri, libqt_string typeName);
QQuickView* QQuickView_new5(const QUrl* source, QQuickRenderControl* renderControl);
QQuickView* QQuickView_new6(QWindow* parent);
QQuickView* QQuickView_new7(const QUrl* source, QWindow* parent);
QQuickView* QQuickView_new8(libqt_string uri, libqt_string typeName, QWindow* parent);
QMetaObject* QQuickView_MetaObject(const QQuickView* self);
void* QQuickView_Metacast(QQuickView* self, const char* param1);
int QQuickView_Metacall(QQuickView* self, int param1, int param2, void** param3);
libqt_string QQuickView_Tr(const char* s);
QUrl* QQuickView_Source(const QQuickView* self);
QQmlEngine* QQuickView_Engine(const QQuickView* self);
QQmlContext* QQuickView_RootContext(const QQuickView* self);
QQuickItem* QQuickView_RootObject(const QQuickView* self);
int QQuickView_ResizeMode(const QQuickView* self);
void QQuickView_SetResizeMode(QQuickView* self, int resizeMode);
int QQuickView_Status(const QQuickView* self);
libqt_list /* of QQmlError* */ QQuickView_Errors(const QQuickView* self);
QSize* QQuickView_SizeHint(const QQuickView* self);
QSize* QQuickView_InitialSize(const QQuickView* self);
void QQuickView_SetSource(QQuickView* self, const QUrl* source);
void QQuickView_LoadFromModule(QQuickView* self, libqt_string uri, libqt_string typeName);
void QQuickView_SetInitialProperties(QQuickView* self, const libqt_map /* of libqt_string to QVariant* */ initialProperties);
void QQuickView_SetContent(QQuickView* self, const QUrl* url, QQmlComponent* component, QObject* item);
void QQuickView_StatusChanged(QQuickView* self, int param1);
void QQuickView_Connect_StatusChanged(QQuickView* self, intptr_t slot);
void QQuickView_ResizeEvent(QQuickView* self, QResizeEvent* param1);
void QQuickView_TimerEvent(QQuickView* self, QTimerEvent* param1);
void QQuickView_KeyPressEvent(QQuickView* self, QKeyEvent* param1);
void QQuickView_KeyReleaseEvent(QQuickView* self, QKeyEvent* param1);
void QQuickView_MousePressEvent(QQuickView* self, QMouseEvent* param1);
void QQuickView_MouseReleaseEvent(QQuickView* self, QMouseEvent* param1);
void QQuickView_MouseMoveEvent(QQuickView* self, QMouseEvent* param1);
libqt_string QQuickView_Tr2(const char* s, const char* c);
libqt_string QQuickView_Tr3(const char* s, const char* c, int n);
void QQuickView_OnMetaObject(const QQuickView* self, intptr_t slot);
QMetaObject* QQuickView_SuperMetaObject(const QQuickView* self);
void QQuickView_OnMetacast(QQuickView* self, intptr_t slot);
void* QQuickView_SuperMetacast(QQuickView* self, const char* param1);
void QQuickView_OnMetacall(QQuickView* self, intptr_t slot);
int QQuickView_SuperMetacall(QQuickView* self, int param1, int param2, void** param3);
void QQuickView_OnResizeEvent(QQuickView* self, intptr_t slot);
void QQuickView_SuperResizeEvent(QQuickView* self, QResizeEvent* param1);
void QQuickView_OnTimerEvent(QQuickView* self, intptr_t slot);
void QQuickView_SuperTimerEvent(QQuickView* self, QTimerEvent* param1);
void QQuickView_OnKeyPressEvent(QQuickView* self, intptr_t slot);
void QQuickView_SuperKeyPressEvent(QQuickView* self, QKeyEvent* param1);
void QQuickView_OnKeyReleaseEvent(QQuickView* self, intptr_t slot);
void QQuickView_SuperKeyReleaseEvent(QQuickView* self, QKeyEvent* param1);
void QQuickView_OnMousePressEvent(QQuickView* self, intptr_t slot);
void QQuickView_SuperMousePressEvent(QQuickView* self, QMouseEvent* param1);
void QQuickView_OnMouseReleaseEvent(QQuickView* self, intptr_t slot);
void QQuickView_SuperMouseReleaseEvent(QQuickView* self, QMouseEvent* param1);
void QQuickView_OnMouseMoveEvent(QQuickView* self, intptr_t slot);
void QQuickView_SuperMouseMoveEvent(QQuickView* self, QMouseEvent* param1);
QObject* QQuickView_FocusObject(const QQuickView* self);
void QQuickView_OnFocusObject(const QQuickView* self, intptr_t slot);
QObject* QQuickView_SuperFocusObject(const QQuickView* self);
QAccessibleInterface* QQuickView_AccessibleRoot(const QQuickView* self);
void QQuickView_OnAccessibleRoot(const QQuickView* self, intptr_t slot);
QAccessibleInterface* QQuickView_SuperAccessibleRoot(const QQuickView* self);
void QQuickView_ExposeEvent(QQuickView* self, QExposeEvent* param1);
void QQuickView_OnExposeEvent(QQuickView* self, intptr_t slot);
void QQuickView_SuperExposeEvent(QQuickView* self, QExposeEvent* param1);
void QQuickView_ShowEvent(QQuickView* self, QShowEvent* param1);
void QQuickView_OnShowEvent(QQuickView* self, intptr_t slot);
void QQuickView_SuperShowEvent(QQuickView* self, QShowEvent* param1);
void QQuickView_HideEvent(QQuickView* self, QHideEvent* param1);
void QQuickView_OnHideEvent(QQuickView* self, intptr_t slot);
void QQuickView_SuperHideEvent(QQuickView* self, QHideEvent* param1);
void QQuickView_CloseEvent(QQuickView* self, QCloseEvent* param1);
void QQuickView_OnCloseEvent(QQuickView* self, intptr_t slot);
void QQuickView_SuperCloseEvent(QQuickView* self, QCloseEvent* param1);
void QQuickView_FocusInEvent(QQuickView* self, QFocusEvent* param1);
void QQuickView_OnFocusInEvent(QQuickView* self, intptr_t slot);
void QQuickView_SuperFocusInEvent(QQuickView* self, QFocusEvent* param1);
void QQuickView_FocusOutEvent(QQuickView* self, QFocusEvent* param1);
void QQuickView_OnFocusOutEvent(QQuickView* self, intptr_t slot);
void QQuickView_SuperFocusOutEvent(QQuickView* self, QFocusEvent* param1);
bool QQuickView_Event(QQuickView* self, QEvent* param1);
void QQuickView_OnEvent(QQuickView* self, intptr_t slot);
bool QQuickView_SuperEvent(QQuickView* self, QEvent* param1);
void QQuickView_MouseDoubleClickEvent(QQuickView* self, QMouseEvent* param1);
void QQuickView_OnMouseDoubleClickEvent(QQuickView* self, intptr_t slot);
void QQuickView_SuperMouseDoubleClickEvent(QQuickView* self, QMouseEvent* param1);
void QQuickView_WheelEvent(QQuickView* self, QWheelEvent* param1);
void QQuickView_OnWheelEvent(QQuickView* self, intptr_t slot);
void QQuickView_SuperWheelEvent(QQuickView* self, QWheelEvent* param1);
void QQuickView_TabletEvent(QQuickView* self, QTabletEvent* param1);
void QQuickView_OnTabletEvent(QQuickView* self, intptr_t slot);
void QQuickView_SuperTabletEvent(QQuickView* self, QTabletEvent* param1);
int QQuickView_SurfaceType(const QQuickView* self);
void QQuickView_OnSurfaceType(const QQuickView* self, intptr_t slot);
int QQuickView_SuperSurfaceType(const QQuickView* self);
QSurfaceFormat* QQuickView_Format(const QQuickView* self);
void QQuickView_OnFormat(const QQuickView* self, intptr_t slot);
QSurfaceFormat* QQuickView_SuperFormat(const QQuickView* self);
QSize* QQuickView_Size(const QQuickView* self);
void QQuickView_OnSize(const QQuickView* self, intptr_t slot);
QSize* QQuickView_SuperSize(const QQuickView* self);
void QQuickView_PaintEvent(QQuickView* self, QPaintEvent* param1);
void QQuickView_OnPaintEvent(QQuickView* self, intptr_t slot);
void QQuickView_SuperPaintEvent(QQuickView* self, QPaintEvent* param1);
void QQuickView_MoveEvent(QQuickView* self, QMoveEvent* param1);
void QQuickView_OnMoveEvent(QQuickView* self, intptr_t slot);
void QQuickView_SuperMoveEvent(QQuickView* self, QMoveEvent* param1);
void QQuickView_TouchEvent(QQuickView* self, QTouchEvent* param1);
void QQuickView_OnTouchEvent(QQuickView* self, intptr_t slot);
void QQuickView_SuperTouchEvent(QQuickView* self, QTouchEvent* param1);
bool QQuickView_NativeEvent(QQuickView* self, const libqt_string eventType, void* message, intptr_t* result);
void QQuickView_OnNativeEvent(QQuickView* self, intptr_t slot);
bool QQuickView_SuperNativeEvent(QQuickView* self, const libqt_string eventType, void* message, intptr_t* result);
bool QQuickView_EventFilter(QQuickView* self, QObject* watched, QEvent* event);
void QQuickView_OnEventFilter(QQuickView* self, intptr_t slot);
bool QQuickView_SuperEventFilter(QQuickView* self, QObject* watched, QEvent* event);
void QQuickView_ChildEvent(QQuickView* self, QChildEvent* event);
void QQuickView_OnChildEvent(QQuickView* self, intptr_t slot);
void QQuickView_SuperChildEvent(QQuickView* self, QChildEvent* event);
void QQuickView_CustomEvent(QQuickView* self, QEvent* event);
void QQuickView_OnCustomEvent(QQuickView* self, intptr_t slot);
void QQuickView_SuperCustomEvent(QQuickView* self, QEvent* event);
void QQuickView_ConnectNotify(QQuickView* self, const QMetaMethod* signal);
void QQuickView_OnConnectNotify(QQuickView* self, intptr_t slot);
void QQuickView_SuperConnectNotify(QQuickView* self, const QMetaMethod* signal);
void QQuickView_DisconnectNotify(QQuickView* self, const QMetaMethod* signal);
void QQuickView_OnDisconnectNotify(QQuickView* self, intptr_t slot);
void QQuickView_SuperDisconnectNotify(QQuickView* self, const QMetaMethod* signal);
void* QQuickView_ResolveInterface(const QQuickView* self, const char* name, int revision);
void QQuickView_OnResolveInterface(const QQuickView* self, intptr_t slot);
void* QQuickView_SuperResolveInterface(const QQuickView* self, const char* name, int revision);
QObject* QQuickView_Sender(const QQuickView* self);
void QQuickView_OnSender(const QQuickView* self, intptr_t slot);
QObject* QQuickView_SuperSender(const QQuickView* self);
int QQuickView_SenderSignalIndex(const QQuickView* self);
void QQuickView_OnSenderSignalIndex(const QQuickView* self, intptr_t slot);
int QQuickView_SuperSenderSignalIndex(const QQuickView* self);
int QQuickView_Receivers(const QQuickView* self, const char* signal);
void QQuickView_OnReceivers(const QQuickView* self, intptr_t slot);
int QQuickView_SuperReceivers(const QQuickView* self, const char* signal);
bool QQuickView_IsSignalConnected(const QQuickView* self, const QMetaMethod* signal);
void QQuickView_OnIsSignalConnected(const QQuickView* self, intptr_t slot);
bool QQuickView_SuperIsSignalConnected(const QQuickView* self, const QMetaMethod* signal);
void QQuickView_Delete(QQuickView* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
