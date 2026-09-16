#pragma once
#ifndef QUICK_LIBQQUICKWINDOW_H
#define QUICK_LIBQQUICKWINDOW_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QQuickWindow__GraphicsStateInfo)
typedef QQuickWindow::GraphicsStateInfo QQuickWindow__GraphicsStateInfo;
#endif
#else
typedef struct QAccessibleInterface QAccessibleInterface;
typedef struct QChildEvent QChildEvent;
typedef struct QCloseEvent QCloseEvent;
typedef struct QColor QColor;
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
typedef struct QPaintEvent QPaintEvent;
typedef struct QQmlIncubationController QQmlIncubationController;
typedef struct QQuickGraphicsConfiguration QQuickGraphicsConfiguration;
typedef struct QQuickGraphicsDevice QQuickGraphicsDevice;
typedef struct QQuickItem QQuickItem;
typedef struct QQuickRenderControl QQuickRenderControl;
typedef struct QQuickRenderTarget QQuickRenderTarget;
typedef struct QQuickWindow QQuickWindow;
typedef struct QQuickWindow__GraphicsStateInfo QQuickWindow__GraphicsStateInfo;
typedef struct QResizeEvent QResizeEvent;
typedef struct QRunnable QRunnable;
typedef struct QSGImageNode QSGImageNode;
typedef struct QSGNinePatchNode QSGNinePatchNode;
typedef struct QSGRectangleNode QSGRectangleNode;
typedef struct QSGRendererInterface QSGRendererInterface;
typedef struct QSGTextNode QSGTextNode;
typedef struct QSGTexture QSGTexture;
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

QQuickWindow* QQuickWindow_new();
QQuickWindow* QQuickWindow_new2(QQuickRenderControl* renderControl);
QQuickWindow* QQuickWindow_new3(QWindow* parent);
QMetaObject* QQuickWindow_MetaObject(const QQuickWindow* self);
void* QQuickWindow_Metacast(QQuickWindow* self, const char* param1);
int QQuickWindow_Metacall(QQuickWindow* self, int param1, int param2, void** param3);
libqt_string QQuickWindow_Tr(const char* s);
QQuickItem* QQuickWindow_ContentItem(const QQuickWindow* self);
QQuickItem* QQuickWindow_ActiveFocusItem(const QQuickWindow* self);
QObject* QQuickWindow_FocusObject(const QQuickWindow* self);
QQuickItem* QQuickWindow_MouseGrabberItem(const QQuickWindow* self);
QImage* QQuickWindow_GrabWindow(QQuickWindow* self);
void QQuickWindow_SetRenderTarget(QQuickWindow* self, const QQuickRenderTarget* target);
QQuickRenderTarget* QQuickWindow_RenderTarget(const QQuickWindow* self);
QQuickWindow__GraphicsStateInfo* QQuickWindow_GraphicsStateInfo(QQuickWindow* self);
void QQuickWindow_BeginExternalCommands(QQuickWindow* self);
void QQuickWindow_EndExternalCommands(QQuickWindow* self);
QQmlIncubationController* QQuickWindow_IncubationController(const QQuickWindow* self);
QAccessibleInterface* QQuickWindow_AccessibleRoot(const QQuickWindow* self);
QSGTexture* QQuickWindow_CreateTextureFromImage(const QQuickWindow* self, const QImage* image);
QSGTexture* QQuickWindow_CreateTextureFromImage2(const QQuickWindow* self, const QImage* image, int options);
void QQuickWindow_SetColor(QQuickWindow* self, const QColor* color);
QColor* QQuickWindow_Color(const QQuickWindow* self);
bool QQuickWindow_HasDefaultAlphaBuffer();
void QQuickWindow_SetDefaultAlphaBuffer(bool useAlpha);
void QQuickWindow_SetPersistentGraphics(QQuickWindow* self, bool persistent);
bool QQuickWindow_IsPersistentGraphics(const QQuickWindow* self);
void QQuickWindow_SetPersistentSceneGraph(QQuickWindow* self, bool persistent);
bool QQuickWindow_IsPersistentSceneGraph(const QQuickWindow* self);
bool QQuickWindow_IsSceneGraphInitialized(const QQuickWindow* self);
void QQuickWindow_ScheduleRenderJob(QQuickWindow* self, QRunnable* job, int schedule);
double QQuickWindow_EffectiveDevicePixelRatio(const QQuickWindow* self);
QSGRendererInterface* QQuickWindow_RendererInterface(const QQuickWindow* self);
void QQuickWindow_SetGraphicsApi(int api);
int QQuickWindow_GraphicsApi();
void QQuickWindow_SetSceneGraphBackend(const libqt_string backend);
libqt_string QQuickWindow_SceneGraphBackend();
void QQuickWindow_SetGraphicsDevice(QQuickWindow* self, const QQuickGraphicsDevice* device);
QQuickGraphicsDevice* QQuickWindow_GraphicsDevice(const QQuickWindow* self);
void QQuickWindow_SetGraphicsConfiguration(QQuickWindow* self, const QQuickGraphicsConfiguration* config);
QQuickGraphicsConfiguration* QQuickWindow_GraphicsConfiguration(const QQuickWindow* self);
QSGRectangleNode* QQuickWindow_CreateRectangleNode(const QQuickWindow* self);
QSGImageNode* QQuickWindow_CreateImageNode(const QQuickWindow* self);
QSGNinePatchNode* QQuickWindow_CreateNinePatchNode(const QQuickWindow* self);
QSGTextNode* QQuickWindow_CreateTextNode(const QQuickWindow* self);
int QQuickWindow_TextRenderType();
void QQuickWindow_SetTextRenderType(int renderType);
void QQuickWindow_FrameSwapped(QQuickWindow* self);
void QQuickWindow_Connect_FrameSwapped(QQuickWindow* self, intptr_t slot);
void QQuickWindow_SceneGraphInitialized(QQuickWindow* self);
void QQuickWindow_Connect_SceneGraphInitialized(QQuickWindow* self, intptr_t slot);
void QQuickWindow_SceneGraphInvalidated(QQuickWindow* self);
void QQuickWindow_Connect_SceneGraphInvalidated(QQuickWindow* self, intptr_t slot);
void QQuickWindow_BeforeSynchronizing(QQuickWindow* self);
void QQuickWindow_Connect_BeforeSynchronizing(QQuickWindow* self, intptr_t slot);
void QQuickWindow_AfterSynchronizing(QQuickWindow* self);
void QQuickWindow_Connect_AfterSynchronizing(QQuickWindow* self, intptr_t slot);
void QQuickWindow_BeforeRendering(QQuickWindow* self);
void QQuickWindow_Connect_BeforeRendering(QQuickWindow* self, intptr_t slot);
void QQuickWindow_AfterRendering(QQuickWindow* self);
void QQuickWindow_Connect_AfterRendering(QQuickWindow* self, intptr_t slot);
void QQuickWindow_AfterAnimating(QQuickWindow* self);
void QQuickWindow_Connect_AfterAnimating(QQuickWindow* self, intptr_t slot);
void QQuickWindow_SceneGraphAboutToStop(QQuickWindow* self);
void QQuickWindow_Connect_SceneGraphAboutToStop(QQuickWindow* self, intptr_t slot);
void QQuickWindow_ColorChanged(QQuickWindow* self, const QColor* param1);
void QQuickWindow_Connect_ColorChanged(QQuickWindow* self, intptr_t slot);
void QQuickWindow_ActiveFocusItemChanged(QQuickWindow* self);
void QQuickWindow_Connect_ActiveFocusItemChanged(QQuickWindow* self, intptr_t slot);
void QQuickWindow_SceneGraphError(QQuickWindow* self, int errorVal, const libqt_string message);
void QQuickWindow_Connect_SceneGraphError(QQuickWindow* self, intptr_t slot);
void QQuickWindow_BeforeRenderPassRecording(QQuickWindow* self);
void QQuickWindow_Connect_BeforeRenderPassRecording(QQuickWindow* self, intptr_t slot);
void QQuickWindow_AfterRenderPassRecording(QQuickWindow* self);
void QQuickWindow_Connect_AfterRenderPassRecording(QQuickWindow* self, intptr_t slot);
void QQuickWindow_PaletteChanged(QQuickWindow* self);
void QQuickWindow_Connect_PaletteChanged(QQuickWindow* self, intptr_t slot);
void QQuickWindow_PaletteCreated(QQuickWindow* self);
void QQuickWindow_Connect_PaletteCreated(QQuickWindow* self, intptr_t slot);
void QQuickWindow_BeforeFrameBegin(QQuickWindow* self);
void QQuickWindow_Connect_BeforeFrameBegin(QQuickWindow* self, intptr_t slot);
void QQuickWindow_AfterFrameEnd(QQuickWindow* self);
void QQuickWindow_Connect_AfterFrameEnd(QQuickWindow* self, intptr_t slot);
void QQuickWindow_Update(QQuickWindow* self);
void QQuickWindow_ReleaseResources(QQuickWindow* self);
void QQuickWindow_ExposeEvent(QQuickWindow* self, QExposeEvent* param1);
void QQuickWindow_ResizeEvent(QQuickWindow* self, QResizeEvent* param1);
void QQuickWindow_ShowEvent(QQuickWindow* self, QShowEvent* param1);
void QQuickWindow_HideEvent(QQuickWindow* self, QHideEvent* param1);
void QQuickWindow_CloseEvent(QQuickWindow* self, QCloseEvent* param1);
void QQuickWindow_FocusInEvent(QQuickWindow* self, QFocusEvent* param1);
void QQuickWindow_FocusOutEvent(QQuickWindow* self, QFocusEvent* param1);
bool QQuickWindow_Event(QQuickWindow* self, QEvent* param1);
void QQuickWindow_KeyPressEvent(QQuickWindow* self, QKeyEvent* param1);
void QQuickWindow_KeyReleaseEvent(QQuickWindow* self, QKeyEvent* param1);
void QQuickWindow_MousePressEvent(QQuickWindow* self, QMouseEvent* param1);
void QQuickWindow_MouseReleaseEvent(QQuickWindow* self, QMouseEvent* param1);
void QQuickWindow_MouseDoubleClickEvent(QQuickWindow* self, QMouseEvent* param1);
void QQuickWindow_MouseMoveEvent(QQuickWindow* self, QMouseEvent* param1);
void QQuickWindow_WheelEvent(QQuickWindow* self, QWheelEvent* param1);
void QQuickWindow_TabletEvent(QQuickWindow* self, QTabletEvent* param1);
libqt_string QQuickWindow_Tr2(const char* s, const char* c);
libqt_string QQuickWindow_Tr3(const char* s, const char* c, int n);
void QQuickWindow_OnMetaObject(const QQuickWindow* self, intptr_t slot);
QMetaObject* QQuickWindow_SuperMetaObject(const QQuickWindow* self);
void QQuickWindow_OnMetacast(QQuickWindow* self, intptr_t slot);
void* QQuickWindow_SuperMetacast(QQuickWindow* self, const char* param1);
void QQuickWindow_OnMetacall(QQuickWindow* self, intptr_t slot);
int QQuickWindow_SuperMetacall(QQuickWindow* self, int param1, int param2, void** param3);
void QQuickWindow_OnFocusObject(const QQuickWindow* self, intptr_t slot);
QObject* QQuickWindow_SuperFocusObject(const QQuickWindow* self);
void QQuickWindow_OnAccessibleRoot(const QQuickWindow* self, intptr_t slot);
QAccessibleInterface* QQuickWindow_SuperAccessibleRoot(const QQuickWindow* self);
void QQuickWindow_OnExposeEvent(QQuickWindow* self, intptr_t slot);
void QQuickWindow_SuperExposeEvent(QQuickWindow* self, QExposeEvent* param1);
void QQuickWindow_OnResizeEvent(QQuickWindow* self, intptr_t slot);
void QQuickWindow_SuperResizeEvent(QQuickWindow* self, QResizeEvent* param1);
void QQuickWindow_OnShowEvent(QQuickWindow* self, intptr_t slot);
void QQuickWindow_SuperShowEvent(QQuickWindow* self, QShowEvent* param1);
void QQuickWindow_OnHideEvent(QQuickWindow* self, intptr_t slot);
void QQuickWindow_SuperHideEvent(QQuickWindow* self, QHideEvent* param1);
void QQuickWindow_OnCloseEvent(QQuickWindow* self, intptr_t slot);
void QQuickWindow_SuperCloseEvent(QQuickWindow* self, QCloseEvent* param1);
void QQuickWindow_OnFocusInEvent(QQuickWindow* self, intptr_t slot);
void QQuickWindow_SuperFocusInEvent(QQuickWindow* self, QFocusEvent* param1);
void QQuickWindow_OnFocusOutEvent(QQuickWindow* self, intptr_t slot);
void QQuickWindow_SuperFocusOutEvent(QQuickWindow* self, QFocusEvent* param1);
void QQuickWindow_OnEvent(QQuickWindow* self, intptr_t slot);
bool QQuickWindow_SuperEvent(QQuickWindow* self, QEvent* param1);
void QQuickWindow_OnKeyPressEvent(QQuickWindow* self, intptr_t slot);
void QQuickWindow_SuperKeyPressEvent(QQuickWindow* self, QKeyEvent* param1);
void QQuickWindow_OnKeyReleaseEvent(QQuickWindow* self, intptr_t slot);
void QQuickWindow_SuperKeyReleaseEvent(QQuickWindow* self, QKeyEvent* param1);
void QQuickWindow_OnMousePressEvent(QQuickWindow* self, intptr_t slot);
void QQuickWindow_SuperMousePressEvent(QQuickWindow* self, QMouseEvent* param1);
void QQuickWindow_OnMouseReleaseEvent(QQuickWindow* self, intptr_t slot);
void QQuickWindow_SuperMouseReleaseEvent(QQuickWindow* self, QMouseEvent* param1);
void QQuickWindow_OnMouseDoubleClickEvent(QQuickWindow* self, intptr_t slot);
void QQuickWindow_SuperMouseDoubleClickEvent(QQuickWindow* self, QMouseEvent* param1);
void QQuickWindow_OnMouseMoveEvent(QQuickWindow* self, intptr_t slot);
void QQuickWindow_SuperMouseMoveEvent(QQuickWindow* self, QMouseEvent* param1);
void QQuickWindow_OnWheelEvent(QQuickWindow* self, intptr_t slot);
void QQuickWindow_SuperWheelEvent(QQuickWindow* self, QWheelEvent* param1);
void QQuickWindow_OnTabletEvent(QQuickWindow* self, intptr_t slot);
void QQuickWindow_SuperTabletEvent(QQuickWindow* self, QTabletEvent* param1);
int QQuickWindow_SurfaceType(const QQuickWindow* self);
void QQuickWindow_OnSurfaceType(const QQuickWindow* self, intptr_t slot);
int QQuickWindow_SuperSurfaceType(const QQuickWindow* self);
QSurfaceFormat* QQuickWindow_Format(const QQuickWindow* self);
void QQuickWindow_OnFormat(const QQuickWindow* self, intptr_t slot);
QSurfaceFormat* QQuickWindow_SuperFormat(const QQuickWindow* self);
QSize* QQuickWindow_Size(const QQuickWindow* self);
void QQuickWindow_OnSize(const QQuickWindow* self, intptr_t slot);
QSize* QQuickWindow_SuperSize(const QQuickWindow* self);
void QQuickWindow_PaintEvent(QQuickWindow* self, QPaintEvent* param1);
void QQuickWindow_OnPaintEvent(QQuickWindow* self, intptr_t slot);
void QQuickWindow_SuperPaintEvent(QQuickWindow* self, QPaintEvent* param1);
void QQuickWindow_MoveEvent(QQuickWindow* self, QMoveEvent* param1);
void QQuickWindow_OnMoveEvent(QQuickWindow* self, intptr_t slot);
void QQuickWindow_SuperMoveEvent(QQuickWindow* self, QMoveEvent* param1);
void QQuickWindow_TouchEvent(QQuickWindow* self, QTouchEvent* param1);
void QQuickWindow_OnTouchEvent(QQuickWindow* self, intptr_t slot);
void QQuickWindow_SuperTouchEvent(QQuickWindow* self, QTouchEvent* param1);
bool QQuickWindow_NativeEvent(QQuickWindow* self, const libqt_string eventType, void* message, intptr_t* result);
void QQuickWindow_OnNativeEvent(QQuickWindow* self, intptr_t slot);
bool QQuickWindow_SuperNativeEvent(QQuickWindow* self, const libqt_string eventType, void* message, intptr_t* result);
bool QQuickWindow_EventFilter(QQuickWindow* self, QObject* watched, QEvent* event);
void QQuickWindow_OnEventFilter(QQuickWindow* self, intptr_t slot);
bool QQuickWindow_SuperEventFilter(QQuickWindow* self, QObject* watched, QEvent* event);
void QQuickWindow_TimerEvent(QQuickWindow* self, QTimerEvent* event);
void QQuickWindow_OnTimerEvent(QQuickWindow* self, intptr_t slot);
void QQuickWindow_SuperTimerEvent(QQuickWindow* self, QTimerEvent* event);
void QQuickWindow_ChildEvent(QQuickWindow* self, QChildEvent* event);
void QQuickWindow_OnChildEvent(QQuickWindow* self, intptr_t slot);
void QQuickWindow_SuperChildEvent(QQuickWindow* self, QChildEvent* event);
void QQuickWindow_CustomEvent(QQuickWindow* self, QEvent* event);
void QQuickWindow_OnCustomEvent(QQuickWindow* self, intptr_t slot);
void QQuickWindow_SuperCustomEvent(QQuickWindow* self, QEvent* event);
void QQuickWindow_ConnectNotify(QQuickWindow* self, const QMetaMethod* signal);
void QQuickWindow_OnConnectNotify(QQuickWindow* self, intptr_t slot);
void QQuickWindow_SuperConnectNotify(QQuickWindow* self, const QMetaMethod* signal);
void QQuickWindow_DisconnectNotify(QQuickWindow* self, const QMetaMethod* signal);
void QQuickWindow_OnDisconnectNotify(QQuickWindow* self, intptr_t slot);
void QQuickWindow_SuperDisconnectNotify(QQuickWindow* self, const QMetaMethod* signal);
void* QQuickWindow_ResolveInterface(const QQuickWindow* self, const char* name, int revision);
void QQuickWindow_OnResolveInterface(const QQuickWindow* self, intptr_t slot);
void* QQuickWindow_SuperResolveInterface(const QQuickWindow* self, const char* name, int revision);
QObject* QQuickWindow_Sender(const QQuickWindow* self);
void QQuickWindow_OnSender(const QQuickWindow* self, intptr_t slot);
QObject* QQuickWindow_SuperSender(const QQuickWindow* self);
int QQuickWindow_SenderSignalIndex(const QQuickWindow* self);
void QQuickWindow_OnSenderSignalIndex(const QQuickWindow* self, intptr_t slot);
int QQuickWindow_SuperSenderSignalIndex(const QQuickWindow* self);
int QQuickWindow_Receivers(const QQuickWindow* self, const char* signal);
void QQuickWindow_OnReceivers(const QQuickWindow* self, intptr_t slot);
int QQuickWindow_SuperReceivers(const QQuickWindow* self, const char* signal);
bool QQuickWindow_IsSignalConnected(const QQuickWindow* self, const QMetaMethod* signal);
void QQuickWindow_OnIsSignalConnected(const QQuickWindow* self, intptr_t slot);
bool QQuickWindow_SuperIsSignalConnected(const QQuickWindow* self, const QMetaMethod* signal);
void QQuickWindow_Delete(QQuickWindow* self);

int QQuickWindow__GraphicsStateInfo_CurrentFrameSlot(const QQuickWindow__GraphicsStateInfo* self);
void QQuickWindow__GraphicsStateInfo_SetCurrentFrameSlot(QQuickWindow__GraphicsStateInfo* self, int currentFrameSlot);
int QQuickWindow__GraphicsStateInfo_FramesInFlight(const QQuickWindow__GraphicsStateInfo* self);
void QQuickWindow__GraphicsStateInfo_SetFramesInFlight(QQuickWindow__GraphicsStateInfo* self, int framesInFlight);
void QQuickWindow__GraphicsStateInfo_Delete(QQuickWindow__GraphicsStateInfo* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
