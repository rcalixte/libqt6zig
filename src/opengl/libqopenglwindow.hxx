#pragma once
#ifndef SRC_OPENGLC_LIBVIRTUALQOPENGLWINDOW_H
#define SRC_OPENGLC_LIBVIRTUALQOPENGLWINDOW_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QOpenGLWindow so that we can call protected methods
class VirtualQOpenGLWindow final : public QOpenGLWindow {

  public:
    // Virtual class boolean flag
    bool isVirtualQOpenGLWindow = true;

    // Virtual class public types (including callbacks)
    using QOpenGLWindow_Metacall_Callback = int (*)(QOpenGLWindow*, int, int, void**);
    using QOpenGLWindow_InitializeGL_Callback = void (*)();
    using QOpenGLWindow_ResizeGL_Callback = void (*)(QOpenGLWindow*, int, int);
    using QOpenGLWindow_PaintGL_Callback = void (*)();
    using QOpenGLWindow_PaintUnderGL_Callback = void (*)();
    using QOpenGLWindow_PaintOverGL_Callback = void (*)();
    using QOpenGLWindow_PaintEvent_Callback = void (*)(QOpenGLWindow*, QPaintEvent*);
    using QOpenGLWindow_ResizeEvent_Callback = void (*)(QOpenGLWindow*, QResizeEvent*);
    using QOpenGLWindow_Metric_Callback = int (*)(const QOpenGLWindow*, int);
    using QOpenGLWindow_Redirected_Callback = QPaintDevice* (*)(const QOpenGLWindow*, QPoint*);
    using QOpenGLWindow_ExposeEvent_Callback = void (*)(QOpenGLWindow*, QExposeEvent*);
    using QOpenGLWindow_Event_Callback = bool (*)(QOpenGLWindow*, QEvent*);
    using QOpenGLWindow_SurfaceType_Callback = int (*)();
    using QOpenGLWindow_Format_Callback = QSurfaceFormat* (*)();
    using QOpenGLWindow_Size_Callback = QSize* (*)();
    using QOpenGLWindow_AccessibleRoot_Callback = QAccessibleInterface* (*)();
    using QOpenGLWindow_FocusObject_Callback = QObject* (*)();
    using QOpenGLWindow_MoveEvent_Callback = void (*)(QOpenGLWindow*, QMoveEvent*);
    using QOpenGLWindow_FocusInEvent_Callback = void (*)(QOpenGLWindow*, QFocusEvent*);
    using QOpenGLWindow_FocusOutEvent_Callback = void (*)(QOpenGLWindow*, QFocusEvent*);
    using QOpenGLWindow_ShowEvent_Callback = void (*)(QOpenGLWindow*, QShowEvent*);
    using QOpenGLWindow_HideEvent_Callback = void (*)(QOpenGLWindow*, QHideEvent*);
    using QOpenGLWindow_CloseEvent_Callback = void (*)(QOpenGLWindow*, QCloseEvent*);
    using QOpenGLWindow_KeyPressEvent_Callback = void (*)(QOpenGLWindow*, QKeyEvent*);
    using QOpenGLWindow_KeyReleaseEvent_Callback = void (*)(QOpenGLWindow*, QKeyEvent*);
    using QOpenGLWindow_MousePressEvent_Callback = void (*)(QOpenGLWindow*, QMouseEvent*);
    using QOpenGLWindow_MouseReleaseEvent_Callback = void (*)(QOpenGLWindow*, QMouseEvent*);
    using QOpenGLWindow_MouseDoubleClickEvent_Callback = void (*)(QOpenGLWindow*, QMouseEvent*);
    using QOpenGLWindow_MouseMoveEvent_Callback = void (*)(QOpenGLWindow*, QMouseEvent*);
    using QOpenGLWindow_WheelEvent_Callback = void (*)(QOpenGLWindow*, QWheelEvent*);
    using QOpenGLWindow_TouchEvent_Callback = void (*)(QOpenGLWindow*, QTouchEvent*);
    using QOpenGLWindow_TabletEvent_Callback = void (*)(QOpenGLWindow*, QTabletEvent*);
    using QOpenGLWindow_NativeEvent_Callback = bool (*)(QOpenGLWindow*, libqt_string, void*, intptr_t*);
    using QOpenGLWindow_EventFilter_Callback = bool (*)(QOpenGLWindow*, QObject*, QEvent*);
    using QOpenGLWindow_TimerEvent_Callback = void (*)(QOpenGLWindow*, QTimerEvent*);
    using QOpenGLWindow_ChildEvent_Callback = void (*)(QOpenGLWindow*, QChildEvent*);
    using QOpenGLWindow_CustomEvent_Callback = void (*)(QOpenGLWindow*, QEvent*);
    using QOpenGLWindow_ConnectNotify_Callback = void (*)(QOpenGLWindow*, QMetaMethod*);
    using QOpenGLWindow_DisconnectNotify_Callback = void (*)(QOpenGLWindow*, QMetaMethod*);
    using QOpenGLWindow_DevType_Callback = int (*)();
    using QOpenGLWindow_InitPainter_Callback = void (*)(const QOpenGLWindow*, QPainter*);
    using QOpenGLWindow_SharedPainter_Callback = QPainter* (*)();
    using QOpenGLWindow_ResolveInterface_Callback = void* (*)(const QOpenGLWindow*, const char*, int);
    using QOpenGLWindow_Sender_Callback = QObject* (*)();
    using QOpenGLWindow_SenderSignalIndex_Callback = int (*)();
    using QOpenGLWindow_Receivers_Callback = int (*)(const QOpenGLWindow*, const char*);
    using QOpenGLWindow_IsSignalConnected_Callback = bool (*)(const QOpenGLWindow*, QMetaMethod*);
    using QOpenGLWindow_GetDecodedMetricF_Callback = double (*)(const QOpenGLWindow*, int, int);

  protected:
    // Instance callback storage
    QOpenGLWindow_Metacall_Callback qopenglwindow_metacall_callback = nullptr;
    QOpenGLWindow_InitializeGL_Callback qopenglwindow_initializegl_callback = nullptr;
    QOpenGLWindow_ResizeGL_Callback qopenglwindow_resizegl_callback = nullptr;
    QOpenGLWindow_PaintGL_Callback qopenglwindow_paintgl_callback = nullptr;
    QOpenGLWindow_PaintUnderGL_Callback qopenglwindow_paintundergl_callback = nullptr;
    QOpenGLWindow_PaintOverGL_Callback qopenglwindow_paintovergl_callback = nullptr;
    QOpenGLWindow_PaintEvent_Callback qopenglwindow_paintevent_callback = nullptr;
    QOpenGLWindow_ResizeEvent_Callback qopenglwindow_resizeevent_callback = nullptr;
    QOpenGLWindow_Metric_Callback qopenglwindow_metric_callback = nullptr;
    QOpenGLWindow_Redirected_Callback qopenglwindow_redirected_callback = nullptr;
    QOpenGLWindow_ExposeEvent_Callback qopenglwindow_exposeevent_callback = nullptr;
    QOpenGLWindow_Event_Callback qopenglwindow_event_callback = nullptr;
    QOpenGLWindow_SurfaceType_Callback qopenglwindow_surfacetype_callback = nullptr;
    QOpenGLWindow_Format_Callback qopenglwindow_format_callback = nullptr;
    QOpenGLWindow_Size_Callback qopenglwindow_size_callback = nullptr;
    QOpenGLWindow_AccessibleRoot_Callback qopenglwindow_accessibleroot_callback = nullptr;
    QOpenGLWindow_FocusObject_Callback qopenglwindow_focusobject_callback = nullptr;
    QOpenGLWindow_MoveEvent_Callback qopenglwindow_moveevent_callback = nullptr;
    QOpenGLWindow_FocusInEvent_Callback qopenglwindow_focusinevent_callback = nullptr;
    QOpenGLWindow_FocusOutEvent_Callback qopenglwindow_focusoutevent_callback = nullptr;
    QOpenGLWindow_ShowEvent_Callback qopenglwindow_showevent_callback = nullptr;
    QOpenGLWindow_HideEvent_Callback qopenglwindow_hideevent_callback = nullptr;
    QOpenGLWindow_CloseEvent_Callback qopenglwindow_closeevent_callback = nullptr;
    QOpenGLWindow_KeyPressEvent_Callback qopenglwindow_keypressevent_callback = nullptr;
    QOpenGLWindow_KeyReleaseEvent_Callback qopenglwindow_keyreleaseevent_callback = nullptr;
    QOpenGLWindow_MousePressEvent_Callback qopenglwindow_mousepressevent_callback = nullptr;
    QOpenGLWindow_MouseReleaseEvent_Callback qopenglwindow_mousereleaseevent_callback = nullptr;
    QOpenGLWindow_MouseDoubleClickEvent_Callback qopenglwindow_mousedoubleclickevent_callback = nullptr;
    QOpenGLWindow_MouseMoveEvent_Callback qopenglwindow_mousemoveevent_callback = nullptr;
    QOpenGLWindow_WheelEvent_Callback qopenglwindow_wheelevent_callback = nullptr;
    QOpenGLWindow_TouchEvent_Callback qopenglwindow_touchevent_callback = nullptr;
    QOpenGLWindow_TabletEvent_Callback qopenglwindow_tabletevent_callback = nullptr;
    QOpenGLWindow_NativeEvent_Callback qopenglwindow_nativeevent_callback = nullptr;
    QOpenGLWindow_EventFilter_Callback qopenglwindow_eventfilter_callback = nullptr;
    QOpenGLWindow_TimerEvent_Callback qopenglwindow_timerevent_callback = nullptr;
    QOpenGLWindow_ChildEvent_Callback qopenglwindow_childevent_callback = nullptr;
    QOpenGLWindow_CustomEvent_Callback qopenglwindow_customevent_callback = nullptr;
    QOpenGLWindow_ConnectNotify_Callback qopenglwindow_connectnotify_callback = nullptr;
    QOpenGLWindow_DisconnectNotify_Callback qopenglwindow_disconnectnotify_callback = nullptr;
    QOpenGLWindow_DevType_Callback qopenglwindow_devtype_callback = nullptr;
    QOpenGLWindow_InitPainter_Callback qopenglwindow_initpainter_callback = nullptr;
    QOpenGLWindow_SharedPainter_Callback qopenglwindow_sharedpainter_callback = nullptr;
    QOpenGLWindow_ResolveInterface_Callback qopenglwindow_resolveinterface_callback = nullptr;
    QOpenGLWindow_Sender_Callback qopenglwindow_sender_callback = nullptr;
    QOpenGLWindow_SenderSignalIndex_Callback qopenglwindow_sendersignalindex_callback = nullptr;
    QOpenGLWindow_Receivers_Callback qopenglwindow_receivers_callback = nullptr;
    QOpenGLWindow_IsSignalConnected_Callback qopenglwindow_issignalconnected_callback = nullptr;
    QOpenGLWindow_GetDecodedMetricF_Callback qopenglwindow_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool qopenglwindow_metacall_isbase = false;
    mutable bool qopenglwindow_initializegl_isbase = false;
    mutable bool qopenglwindow_resizegl_isbase = false;
    mutable bool qopenglwindow_paintgl_isbase = false;
    mutable bool qopenglwindow_paintundergl_isbase = false;
    mutable bool qopenglwindow_paintovergl_isbase = false;
    mutable bool qopenglwindow_paintevent_isbase = false;
    mutable bool qopenglwindow_resizeevent_isbase = false;
    mutable bool qopenglwindow_metric_isbase = false;
    mutable bool qopenglwindow_redirected_isbase = false;
    mutable bool qopenglwindow_exposeevent_isbase = false;
    mutable bool qopenglwindow_event_isbase = false;
    mutable bool qopenglwindow_surfacetype_isbase = false;
    mutable bool qopenglwindow_format_isbase = false;
    mutable bool qopenglwindow_size_isbase = false;
    mutable bool qopenglwindow_accessibleroot_isbase = false;
    mutable bool qopenglwindow_focusobject_isbase = false;
    mutable bool qopenglwindow_moveevent_isbase = false;
    mutable bool qopenglwindow_focusinevent_isbase = false;
    mutable bool qopenglwindow_focusoutevent_isbase = false;
    mutable bool qopenglwindow_showevent_isbase = false;
    mutable bool qopenglwindow_hideevent_isbase = false;
    mutable bool qopenglwindow_closeevent_isbase = false;
    mutable bool qopenglwindow_keypressevent_isbase = false;
    mutable bool qopenglwindow_keyreleaseevent_isbase = false;
    mutable bool qopenglwindow_mousepressevent_isbase = false;
    mutable bool qopenglwindow_mousereleaseevent_isbase = false;
    mutable bool qopenglwindow_mousedoubleclickevent_isbase = false;
    mutable bool qopenglwindow_mousemoveevent_isbase = false;
    mutable bool qopenglwindow_wheelevent_isbase = false;
    mutable bool qopenglwindow_touchevent_isbase = false;
    mutable bool qopenglwindow_tabletevent_isbase = false;
    mutable bool qopenglwindow_nativeevent_isbase = false;
    mutable bool qopenglwindow_eventfilter_isbase = false;
    mutable bool qopenglwindow_timerevent_isbase = false;
    mutable bool qopenglwindow_childevent_isbase = false;
    mutable bool qopenglwindow_customevent_isbase = false;
    mutable bool qopenglwindow_connectnotify_isbase = false;
    mutable bool qopenglwindow_disconnectnotify_isbase = false;
    mutable bool qopenglwindow_devtype_isbase = false;
    mutable bool qopenglwindow_initpainter_isbase = false;
    mutable bool qopenglwindow_sharedpainter_isbase = false;
    mutable bool qopenglwindow_resolveinterface_isbase = false;
    mutable bool qopenglwindow_sender_isbase = false;
    mutable bool qopenglwindow_sendersignalindex_isbase = false;
    mutable bool qopenglwindow_receivers_isbase = false;
    mutable bool qopenglwindow_issignalconnected_isbase = false;
    mutable bool qopenglwindow_getdecodedmetricf_isbase = false;

  public:
    VirtualQOpenGLWindow() : QOpenGLWindow() {};
    VirtualQOpenGLWindow(QOpenGLContext* shareContext) : QOpenGLWindow(shareContext) {};
    VirtualQOpenGLWindow(QOpenGLWindow::UpdateBehavior updateBehavior) : QOpenGLWindow(updateBehavior) {};
    VirtualQOpenGLWindow(QOpenGLWindow::UpdateBehavior updateBehavior, QWindow* parent) : QOpenGLWindow(updateBehavior, parent) {};
    VirtualQOpenGLWindow(QOpenGLContext* shareContext, QOpenGLWindow::UpdateBehavior updateBehavior) : QOpenGLWindow(shareContext, updateBehavior) {};
    VirtualQOpenGLWindow(QOpenGLContext* shareContext, QOpenGLWindow::UpdateBehavior updateBehavior, QWindow* parent) : QOpenGLWindow(shareContext, updateBehavior, parent) {};

    ~VirtualQOpenGLWindow() {
        qopenglwindow_metacall_callback = nullptr;
        qopenglwindow_initializegl_callback = nullptr;
        qopenglwindow_resizegl_callback = nullptr;
        qopenglwindow_paintgl_callback = nullptr;
        qopenglwindow_paintundergl_callback = nullptr;
        qopenglwindow_paintovergl_callback = nullptr;
        qopenglwindow_paintevent_callback = nullptr;
        qopenglwindow_resizeevent_callback = nullptr;
        qopenglwindow_metric_callback = nullptr;
        qopenglwindow_redirected_callback = nullptr;
        qopenglwindow_exposeevent_callback = nullptr;
        qopenglwindow_event_callback = nullptr;
        qopenglwindow_surfacetype_callback = nullptr;
        qopenglwindow_format_callback = nullptr;
        qopenglwindow_size_callback = nullptr;
        qopenglwindow_accessibleroot_callback = nullptr;
        qopenglwindow_focusobject_callback = nullptr;
        qopenglwindow_moveevent_callback = nullptr;
        qopenglwindow_focusinevent_callback = nullptr;
        qopenglwindow_focusoutevent_callback = nullptr;
        qopenglwindow_showevent_callback = nullptr;
        qopenglwindow_hideevent_callback = nullptr;
        qopenglwindow_closeevent_callback = nullptr;
        qopenglwindow_keypressevent_callback = nullptr;
        qopenglwindow_keyreleaseevent_callback = nullptr;
        qopenglwindow_mousepressevent_callback = nullptr;
        qopenglwindow_mousereleaseevent_callback = nullptr;
        qopenglwindow_mousedoubleclickevent_callback = nullptr;
        qopenglwindow_mousemoveevent_callback = nullptr;
        qopenglwindow_wheelevent_callback = nullptr;
        qopenglwindow_touchevent_callback = nullptr;
        qopenglwindow_tabletevent_callback = nullptr;
        qopenglwindow_nativeevent_callback = nullptr;
        qopenglwindow_eventfilter_callback = nullptr;
        qopenglwindow_timerevent_callback = nullptr;
        qopenglwindow_childevent_callback = nullptr;
        qopenglwindow_customevent_callback = nullptr;
        qopenglwindow_connectnotify_callback = nullptr;
        qopenglwindow_disconnectnotify_callback = nullptr;
        qopenglwindow_devtype_callback = nullptr;
        qopenglwindow_initpainter_callback = nullptr;
        qopenglwindow_sharedpainter_callback = nullptr;
        qopenglwindow_resolveinterface_callback = nullptr;
        qopenglwindow_sender_callback = nullptr;
        qopenglwindow_sendersignalindex_callback = nullptr;
        qopenglwindow_receivers_callback = nullptr;
        qopenglwindow_issignalconnected_callback = nullptr;
        qopenglwindow_getdecodedmetricf_callback = nullptr;
    }

    // Callback setters
    inline void setQOpenGLWindow_Metacall_Callback(QOpenGLWindow_Metacall_Callback cb) { qopenglwindow_metacall_callback = cb; }
    inline void setQOpenGLWindow_InitializeGL_Callback(QOpenGLWindow_InitializeGL_Callback cb) { qopenglwindow_initializegl_callback = cb; }
    inline void setQOpenGLWindow_ResizeGL_Callback(QOpenGLWindow_ResizeGL_Callback cb) { qopenglwindow_resizegl_callback = cb; }
    inline void setQOpenGLWindow_PaintGL_Callback(QOpenGLWindow_PaintGL_Callback cb) { qopenglwindow_paintgl_callback = cb; }
    inline void setQOpenGLWindow_PaintUnderGL_Callback(QOpenGLWindow_PaintUnderGL_Callback cb) { qopenglwindow_paintundergl_callback = cb; }
    inline void setQOpenGLWindow_PaintOverGL_Callback(QOpenGLWindow_PaintOverGL_Callback cb) { qopenglwindow_paintovergl_callback = cb; }
    inline void setQOpenGLWindow_PaintEvent_Callback(QOpenGLWindow_PaintEvent_Callback cb) { qopenglwindow_paintevent_callback = cb; }
    inline void setQOpenGLWindow_ResizeEvent_Callback(QOpenGLWindow_ResizeEvent_Callback cb) { qopenglwindow_resizeevent_callback = cb; }
    inline void setQOpenGLWindow_Metric_Callback(QOpenGLWindow_Metric_Callback cb) { qopenglwindow_metric_callback = cb; }
    inline void setQOpenGLWindow_Redirected_Callback(QOpenGLWindow_Redirected_Callback cb) { qopenglwindow_redirected_callback = cb; }
    inline void setQOpenGLWindow_ExposeEvent_Callback(QOpenGLWindow_ExposeEvent_Callback cb) { qopenglwindow_exposeevent_callback = cb; }
    inline void setQOpenGLWindow_Event_Callback(QOpenGLWindow_Event_Callback cb) { qopenglwindow_event_callback = cb; }
    inline void setQOpenGLWindow_SurfaceType_Callback(QOpenGLWindow_SurfaceType_Callback cb) { qopenglwindow_surfacetype_callback = cb; }
    inline void setQOpenGLWindow_Format_Callback(QOpenGLWindow_Format_Callback cb) { qopenglwindow_format_callback = cb; }
    inline void setQOpenGLWindow_Size_Callback(QOpenGLWindow_Size_Callback cb) { qopenglwindow_size_callback = cb; }
    inline void setQOpenGLWindow_AccessibleRoot_Callback(QOpenGLWindow_AccessibleRoot_Callback cb) { qopenglwindow_accessibleroot_callback = cb; }
    inline void setQOpenGLWindow_FocusObject_Callback(QOpenGLWindow_FocusObject_Callback cb) { qopenglwindow_focusobject_callback = cb; }
    inline void setQOpenGLWindow_MoveEvent_Callback(QOpenGLWindow_MoveEvent_Callback cb) { qopenglwindow_moveevent_callback = cb; }
    inline void setQOpenGLWindow_FocusInEvent_Callback(QOpenGLWindow_FocusInEvent_Callback cb) { qopenglwindow_focusinevent_callback = cb; }
    inline void setQOpenGLWindow_FocusOutEvent_Callback(QOpenGLWindow_FocusOutEvent_Callback cb) { qopenglwindow_focusoutevent_callback = cb; }
    inline void setQOpenGLWindow_ShowEvent_Callback(QOpenGLWindow_ShowEvent_Callback cb) { qopenglwindow_showevent_callback = cb; }
    inline void setQOpenGLWindow_HideEvent_Callback(QOpenGLWindow_HideEvent_Callback cb) { qopenglwindow_hideevent_callback = cb; }
    inline void setQOpenGLWindow_CloseEvent_Callback(QOpenGLWindow_CloseEvent_Callback cb) { qopenglwindow_closeevent_callback = cb; }
    inline void setQOpenGLWindow_KeyPressEvent_Callback(QOpenGLWindow_KeyPressEvent_Callback cb) { qopenglwindow_keypressevent_callback = cb; }
    inline void setQOpenGLWindow_KeyReleaseEvent_Callback(QOpenGLWindow_KeyReleaseEvent_Callback cb) { qopenglwindow_keyreleaseevent_callback = cb; }
    inline void setQOpenGLWindow_MousePressEvent_Callback(QOpenGLWindow_MousePressEvent_Callback cb) { qopenglwindow_mousepressevent_callback = cb; }
    inline void setQOpenGLWindow_MouseReleaseEvent_Callback(QOpenGLWindow_MouseReleaseEvent_Callback cb) { qopenglwindow_mousereleaseevent_callback = cb; }
    inline void setQOpenGLWindow_MouseDoubleClickEvent_Callback(QOpenGLWindow_MouseDoubleClickEvent_Callback cb) { qopenglwindow_mousedoubleclickevent_callback = cb; }
    inline void setQOpenGLWindow_MouseMoveEvent_Callback(QOpenGLWindow_MouseMoveEvent_Callback cb) { qopenglwindow_mousemoveevent_callback = cb; }
    inline void setQOpenGLWindow_WheelEvent_Callback(QOpenGLWindow_WheelEvent_Callback cb) { qopenglwindow_wheelevent_callback = cb; }
    inline void setQOpenGLWindow_TouchEvent_Callback(QOpenGLWindow_TouchEvent_Callback cb) { qopenglwindow_touchevent_callback = cb; }
    inline void setQOpenGLWindow_TabletEvent_Callback(QOpenGLWindow_TabletEvent_Callback cb) { qopenglwindow_tabletevent_callback = cb; }
    inline void setQOpenGLWindow_NativeEvent_Callback(QOpenGLWindow_NativeEvent_Callback cb) { qopenglwindow_nativeevent_callback = cb; }
    inline void setQOpenGLWindow_EventFilter_Callback(QOpenGLWindow_EventFilter_Callback cb) { qopenglwindow_eventfilter_callback = cb; }
    inline void setQOpenGLWindow_TimerEvent_Callback(QOpenGLWindow_TimerEvent_Callback cb) { qopenglwindow_timerevent_callback = cb; }
    inline void setQOpenGLWindow_ChildEvent_Callback(QOpenGLWindow_ChildEvent_Callback cb) { qopenglwindow_childevent_callback = cb; }
    inline void setQOpenGLWindow_CustomEvent_Callback(QOpenGLWindow_CustomEvent_Callback cb) { qopenglwindow_customevent_callback = cb; }
    inline void setQOpenGLWindow_ConnectNotify_Callback(QOpenGLWindow_ConnectNotify_Callback cb) { qopenglwindow_connectnotify_callback = cb; }
    inline void setQOpenGLWindow_DisconnectNotify_Callback(QOpenGLWindow_DisconnectNotify_Callback cb) { qopenglwindow_disconnectnotify_callback = cb; }
    inline void setQOpenGLWindow_DevType_Callback(QOpenGLWindow_DevType_Callback cb) { qopenglwindow_devtype_callback = cb; }
    inline void setQOpenGLWindow_InitPainter_Callback(QOpenGLWindow_InitPainter_Callback cb) { qopenglwindow_initpainter_callback = cb; }
    inline void setQOpenGLWindow_SharedPainter_Callback(QOpenGLWindow_SharedPainter_Callback cb) { qopenglwindow_sharedpainter_callback = cb; }
    inline void setQOpenGLWindow_ResolveInterface_Callback(QOpenGLWindow_ResolveInterface_Callback cb) { qopenglwindow_resolveinterface_callback = cb; }
    inline void setQOpenGLWindow_Sender_Callback(QOpenGLWindow_Sender_Callback cb) { qopenglwindow_sender_callback = cb; }
    inline void setQOpenGLWindow_SenderSignalIndex_Callback(QOpenGLWindow_SenderSignalIndex_Callback cb) { qopenglwindow_sendersignalindex_callback = cb; }
    inline void setQOpenGLWindow_Receivers_Callback(QOpenGLWindow_Receivers_Callback cb) { qopenglwindow_receivers_callback = cb; }
    inline void setQOpenGLWindow_IsSignalConnected_Callback(QOpenGLWindow_IsSignalConnected_Callback cb) { qopenglwindow_issignalconnected_callback = cb; }
    inline void setQOpenGLWindow_GetDecodedMetricF_Callback(QOpenGLWindow_GetDecodedMetricF_Callback cb) { qopenglwindow_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setQOpenGLWindow_Metacall_IsBase(bool value) const { qopenglwindow_metacall_isbase = value; }
    inline void setQOpenGLWindow_InitializeGL_IsBase(bool value) const { qopenglwindow_initializegl_isbase = value; }
    inline void setQOpenGLWindow_ResizeGL_IsBase(bool value) const { qopenglwindow_resizegl_isbase = value; }
    inline void setQOpenGLWindow_PaintGL_IsBase(bool value) const { qopenglwindow_paintgl_isbase = value; }
    inline void setQOpenGLWindow_PaintUnderGL_IsBase(bool value) const { qopenglwindow_paintundergl_isbase = value; }
    inline void setQOpenGLWindow_PaintOverGL_IsBase(bool value) const { qopenglwindow_paintovergl_isbase = value; }
    inline void setQOpenGLWindow_PaintEvent_IsBase(bool value) const { qopenglwindow_paintevent_isbase = value; }
    inline void setQOpenGLWindow_ResizeEvent_IsBase(bool value) const { qopenglwindow_resizeevent_isbase = value; }
    inline void setQOpenGLWindow_Metric_IsBase(bool value) const { qopenglwindow_metric_isbase = value; }
    inline void setQOpenGLWindow_Redirected_IsBase(bool value) const { qopenglwindow_redirected_isbase = value; }
    inline void setQOpenGLWindow_ExposeEvent_IsBase(bool value) const { qopenglwindow_exposeevent_isbase = value; }
    inline void setQOpenGLWindow_Event_IsBase(bool value) const { qopenglwindow_event_isbase = value; }
    inline void setQOpenGLWindow_SurfaceType_IsBase(bool value) const { qopenglwindow_surfacetype_isbase = value; }
    inline void setQOpenGLWindow_Format_IsBase(bool value) const { qopenglwindow_format_isbase = value; }
    inline void setQOpenGLWindow_Size_IsBase(bool value) const { qopenglwindow_size_isbase = value; }
    inline void setQOpenGLWindow_AccessibleRoot_IsBase(bool value) const { qopenglwindow_accessibleroot_isbase = value; }
    inline void setQOpenGLWindow_FocusObject_IsBase(bool value) const { qopenglwindow_focusobject_isbase = value; }
    inline void setQOpenGLWindow_MoveEvent_IsBase(bool value) const { qopenglwindow_moveevent_isbase = value; }
    inline void setQOpenGLWindow_FocusInEvent_IsBase(bool value) const { qopenglwindow_focusinevent_isbase = value; }
    inline void setQOpenGLWindow_FocusOutEvent_IsBase(bool value) const { qopenglwindow_focusoutevent_isbase = value; }
    inline void setQOpenGLWindow_ShowEvent_IsBase(bool value) const { qopenglwindow_showevent_isbase = value; }
    inline void setQOpenGLWindow_HideEvent_IsBase(bool value) const { qopenglwindow_hideevent_isbase = value; }
    inline void setQOpenGLWindow_CloseEvent_IsBase(bool value) const { qopenglwindow_closeevent_isbase = value; }
    inline void setQOpenGLWindow_KeyPressEvent_IsBase(bool value) const { qopenglwindow_keypressevent_isbase = value; }
    inline void setQOpenGLWindow_KeyReleaseEvent_IsBase(bool value) const { qopenglwindow_keyreleaseevent_isbase = value; }
    inline void setQOpenGLWindow_MousePressEvent_IsBase(bool value) const { qopenglwindow_mousepressevent_isbase = value; }
    inline void setQOpenGLWindow_MouseReleaseEvent_IsBase(bool value) const { qopenglwindow_mousereleaseevent_isbase = value; }
    inline void setQOpenGLWindow_MouseDoubleClickEvent_IsBase(bool value) const { qopenglwindow_mousedoubleclickevent_isbase = value; }
    inline void setQOpenGLWindow_MouseMoveEvent_IsBase(bool value) const { qopenglwindow_mousemoveevent_isbase = value; }
    inline void setQOpenGLWindow_WheelEvent_IsBase(bool value) const { qopenglwindow_wheelevent_isbase = value; }
    inline void setQOpenGLWindow_TouchEvent_IsBase(bool value) const { qopenglwindow_touchevent_isbase = value; }
    inline void setQOpenGLWindow_TabletEvent_IsBase(bool value) const { qopenglwindow_tabletevent_isbase = value; }
    inline void setQOpenGLWindow_NativeEvent_IsBase(bool value) const { qopenglwindow_nativeevent_isbase = value; }
    inline void setQOpenGLWindow_EventFilter_IsBase(bool value) const { qopenglwindow_eventfilter_isbase = value; }
    inline void setQOpenGLWindow_TimerEvent_IsBase(bool value) const { qopenglwindow_timerevent_isbase = value; }
    inline void setQOpenGLWindow_ChildEvent_IsBase(bool value) const { qopenglwindow_childevent_isbase = value; }
    inline void setQOpenGLWindow_CustomEvent_IsBase(bool value) const { qopenglwindow_customevent_isbase = value; }
    inline void setQOpenGLWindow_ConnectNotify_IsBase(bool value) const { qopenglwindow_connectnotify_isbase = value; }
    inline void setQOpenGLWindow_DisconnectNotify_IsBase(bool value) const { qopenglwindow_disconnectnotify_isbase = value; }
    inline void setQOpenGLWindow_DevType_IsBase(bool value) const { qopenglwindow_devtype_isbase = value; }
    inline void setQOpenGLWindow_InitPainter_IsBase(bool value) const { qopenglwindow_initpainter_isbase = value; }
    inline void setQOpenGLWindow_SharedPainter_IsBase(bool value) const { qopenglwindow_sharedpainter_isbase = value; }
    inline void setQOpenGLWindow_ResolveInterface_IsBase(bool value) const { qopenglwindow_resolveinterface_isbase = value; }
    inline void setQOpenGLWindow_Sender_IsBase(bool value) const { qopenglwindow_sender_isbase = value; }
    inline void setQOpenGLWindow_SenderSignalIndex_IsBase(bool value) const { qopenglwindow_sendersignalindex_isbase = value; }
    inline void setQOpenGLWindow_Receivers_IsBase(bool value) const { qopenglwindow_receivers_isbase = value; }
    inline void setQOpenGLWindow_IsSignalConnected_IsBase(bool value) const { qopenglwindow_issignalconnected_isbase = value; }
    inline void setQOpenGLWindow_GetDecodedMetricF_IsBase(bool value) const { qopenglwindow_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qopenglwindow_metacall_isbase) {
            qopenglwindow_metacall_isbase = false;
            return QOpenGLWindow::qt_metacall(param1, param2, param3);
        } else if (qopenglwindow_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qopenglwindow_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QOpenGLWindow::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initializeGL() override {
        if (qopenglwindow_initializegl_isbase) {
            qopenglwindow_initializegl_isbase = false;
            QOpenGLWindow::initializeGL();
        } else if (qopenglwindow_initializegl_callback != nullptr) {
            qopenglwindow_initializegl_callback();
        } else {
            QOpenGLWindow::initializeGL();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeGL(int w, int h) override {
        if (qopenglwindow_resizegl_isbase) {
            qopenglwindow_resizegl_isbase = false;
            QOpenGLWindow::resizeGL(w, h);
        } else if (qopenglwindow_resizegl_callback != nullptr) {
            int cbval1 = w;
            int cbval2 = h;

            qopenglwindow_resizegl_callback(this, cbval1, cbval2);
        } else {
            QOpenGLWindow::resizeGL(w, h);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintGL() override {
        if (qopenglwindow_paintgl_isbase) {
            qopenglwindow_paintgl_isbase = false;
            QOpenGLWindow::paintGL();
        } else if (qopenglwindow_paintgl_callback != nullptr) {
            qopenglwindow_paintgl_callback();
        } else {
            QOpenGLWindow::paintGL();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintUnderGL() override {
        if (qopenglwindow_paintundergl_isbase) {
            qopenglwindow_paintundergl_isbase = false;
            QOpenGLWindow::paintUnderGL();
        } else if (qopenglwindow_paintundergl_callback != nullptr) {
            qopenglwindow_paintundergl_callback();
        } else {
            QOpenGLWindow::paintUnderGL();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintOverGL() override {
        if (qopenglwindow_paintovergl_isbase) {
            qopenglwindow_paintovergl_isbase = false;
            QOpenGLWindow::paintOverGL();
        } else if (qopenglwindow_paintovergl_callback != nullptr) {
            qopenglwindow_paintovergl_callback();
        } else {
            QOpenGLWindow::paintOverGL();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (qopenglwindow_paintevent_isbase) {
            qopenglwindow_paintevent_isbase = false;
            QOpenGLWindow::paintEvent(event);
        } else if (qopenglwindow_paintevent_callback != nullptr) {
            QPaintEvent* cbval1 = event;

            qopenglwindow_paintevent_callback(this, cbval1);
        } else {
            QOpenGLWindow::paintEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (qopenglwindow_resizeevent_isbase) {
            qopenglwindow_resizeevent_isbase = false;
            QOpenGLWindow::resizeEvent(event);
        } else if (qopenglwindow_resizeevent_callback != nullptr) {
            QResizeEvent* cbval1 = event;

            qopenglwindow_resizeevent_callback(this, cbval1);
        } else {
            QOpenGLWindow::resizeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric metric) const override {
        if (qopenglwindow_metric_isbase) {
            qopenglwindow_metric_isbase = false;
            return QOpenGLWindow::metric(metric);
        } else if (qopenglwindow_metric_callback != nullptr) {
            int cbval1 = static_cast<int>(metric);

            int callback_ret = qopenglwindow_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QOpenGLWindow::metric(metric);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* param1) const override {
        if (qopenglwindow_redirected_isbase) {
            qopenglwindow_redirected_isbase = false;
            return QOpenGLWindow::redirected(param1);
        } else if (qopenglwindow_redirected_callback != nullptr) {
            QPoint* cbval1 = param1;

            QPaintDevice* callback_ret = qopenglwindow_redirected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QOpenGLWindow::redirected(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void exposeEvent(QExposeEvent* param1) override {
        if (qopenglwindow_exposeevent_isbase) {
            qopenglwindow_exposeevent_isbase = false;
            QOpenGLWindow::exposeEvent(param1);
        } else if (qopenglwindow_exposeevent_callback != nullptr) {
            QExposeEvent* cbval1 = param1;

            qopenglwindow_exposeevent_callback(this, cbval1);
        } else {
            QOpenGLWindow::exposeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qopenglwindow_event_isbase) {
            qopenglwindow_event_isbase = false;
            return QOpenGLWindow::event(event);
        } else if (qopenglwindow_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qopenglwindow_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QOpenGLWindow::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSurface::SurfaceType surfaceType() const override {
        if (qopenglwindow_surfacetype_isbase) {
            qopenglwindow_surfacetype_isbase = false;
            return QOpenGLWindow::surfaceType();
        } else if (qopenglwindow_surfacetype_callback != nullptr) {
            int callback_ret = qopenglwindow_surfacetype_callback();
            return static_cast<QSurface::SurfaceType>(callback_ret);
        } else {
            return QOpenGLWindow::surfaceType();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSurfaceFormat format() const override {
        if (qopenglwindow_format_isbase) {
            qopenglwindow_format_isbase = false;
            return QOpenGLWindow::format();
        } else if (qopenglwindow_format_callback != nullptr) {
            QSurfaceFormat* callback_ret = qopenglwindow_format_callback();
            return *callback_ret;
        } else {
            return QOpenGLWindow::format();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize size() const override {
        if (qopenglwindow_size_isbase) {
            qopenglwindow_size_isbase = false;
            return QOpenGLWindow::size();
        } else if (qopenglwindow_size_callback != nullptr) {
            QSize* callback_ret = qopenglwindow_size_callback();
            return *callback_ret;
        } else {
            return QOpenGLWindow::size();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QAccessibleInterface* accessibleRoot() const override {
        if (qopenglwindow_accessibleroot_isbase) {
            qopenglwindow_accessibleroot_isbase = false;
            return QOpenGLWindow::accessibleRoot();
        } else if (qopenglwindow_accessibleroot_callback != nullptr) {
            QAccessibleInterface* callback_ret = qopenglwindow_accessibleroot_callback();
            return callback_ret;
        } else {
            return QOpenGLWindow::accessibleRoot();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QObject* focusObject() const override {
        if (qopenglwindow_focusobject_isbase) {
            qopenglwindow_focusobject_isbase = false;
            return QOpenGLWindow::focusObject();
        } else if (qopenglwindow_focusobject_callback != nullptr) {
            QObject* callback_ret = qopenglwindow_focusobject_callback();
            return callback_ret;
        } else {
            return QOpenGLWindow::focusObject();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* param1) override {
        if (qopenglwindow_moveevent_isbase) {
            qopenglwindow_moveevent_isbase = false;
            QOpenGLWindow::moveEvent(param1);
        } else if (qopenglwindow_moveevent_callback != nullptr) {
            QMoveEvent* cbval1 = param1;

            qopenglwindow_moveevent_callback(this, cbval1);
        } else {
            QOpenGLWindow::moveEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* param1) override {
        if (qopenglwindow_focusinevent_isbase) {
            qopenglwindow_focusinevent_isbase = false;
            QOpenGLWindow::focusInEvent(param1);
        } else if (qopenglwindow_focusinevent_callback != nullptr) {
            QFocusEvent* cbval1 = param1;

            qopenglwindow_focusinevent_callback(this, cbval1);
        } else {
            QOpenGLWindow::focusInEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* param1) override {
        if (qopenglwindow_focusoutevent_isbase) {
            qopenglwindow_focusoutevent_isbase = false;
            QOpenGLWindow::focusOutEvent(param1);
        } else if (qopenglwindow_focusoutevent_callback != nullptr) {
            QFocusEvent* cbval1 = param1;

            qopenglwindow_focusoutevent_callback(this, cbval1);
        } else {
            QOpenGLWindow::focusOutEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* param1) override {
        if (qopenglwindow_showevent_isbase) {
            qopenglwindow_showevent_isbase = false;
            QOpenGLWindow::showEvent(param1);
        } else if (qopenglwindow_showevent_callback != nullptr) {
            QShowEvent* cbval1 = param1;

            qopenglwindow_showevent_callback(this, cbval1);
        } else {
            QOpenGLWindow::showEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* param1) override {
        if (qopenglwindow_hideevent_isbase) {
            qopenglwindow_hideevent_isbase = false;
            QOpenGLWindow::hideEvent(param1);
        } else if (qopenglwindow_hideevent_callback != nullptr) {
            QHideEvent* cbval1 = param1;

            qopenglwindow_hideevent_callback(this, cbval1);
        } else {
            QOpenGLWindow::hideEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* param1) override {
        if (qopenglwindow_closeevent_isbase) {
            qopenglwindow_closeevent_isbase = false;
            QOpenGLWindow::closeEvent(param1);
        } else if (qopenglwindow_closeevent_callback != nullptr) {
            QCloseEvent* cbval1 = param1;

            qopenglwindow_closeevent_callback(this, cbval1);
        } else {
            QOpenGLWindow::closeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* param1) override {
        if (qopenglwindow_keypressevent_isbase) {
            qopenglwindow_keypressevent_isbase = false;
            QOpenGLWindow::keyPressEvent(param1);
        } else if (qopenglwindow_keypressevent_callback != nullptr) {
            QKeyEvent* cbval1 = param1;

            qopenglwindow_keypressevent_callback(this, cbval1);
        } else {
            QOpenGLWindow::keyPressEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* param1) override {
        if (qopenglwindow_keyreleaseevent_isbase) {
            qopenglwindow_keyreleaseevent_isbase = false;
            QOpenGLWindow::keyReleaseEvent(param1);
        } else if (qopenglwindow_keyreleaseevent_callback != nullptr) {
            QKeyEvent* cbval1 = param1;

            qopenglwindow_keyreleaseevent_callback(this, cbval1);
        } else {
            QOpenGLWindow::keyReleaseEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* param1) override {
        if (qopenglwindow_mousepressevent_isbase) {
            qopenglwindow_mousepressevent_isbase = false;
            QOpenGLWindow::mousePressEvent(param1);
        } else if (qopenglwindow_mousepressevent_callback != nullptr) {
            QMouseEvent* cbval1 = param1;

            qopenglwindow_mousepressevent_callback(this, cbval1);
        } else {
            QOpenGLWindow::mousePressEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* param1) override {
        if (qopenglwindow_mousereleaseevent_isbase) {
            qopenglwindow_mousereleaseevent_isbase = false;
            QOpenGLWindow::mouseReleaseEvent(param1);
        } else if (qopenglwindow_mousereleaseevent_callback != nullptr) {
            QMouseEvent* cbval1 = param1;

            qopenglwindow_mousereleaseevent_callback(this, cbval1);
        } else {
            QOpenGLWindow::mouseReleaseEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* param1) override {
        if (qopenglwindow_mousedoubleclickevent_isbase) {
            qopenglwindow_mousedoubleclickevent_isbase = false;
            QOpenGLWindow::mouseDoubleClickEvent(param1);
        } else if (qopenglwindow_mousedoubleclickevent_callback != nullptr) {
            QMouseEvent* cbval1 = param1;

            qopenglwindow_mousedoubleclickevent_callback(this, cbval1);
        } else {
            QOpenGLWindow::mouseDoubleClickEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* param1) override {
        if (qopenglwindow_mousemoveevent_isbase) {
            qopenglwindow_mousemoveevent_isbase = false;
            QOpenGLWindow::mouseMoveEvent(param1);
        } else if (qopenglwindow_mousemoveevent_callback != nullptr) {
            QMouseEvent* cbval1 = param1;

            qopenglwindow_mousemoveevent_callback(this, cbval1);
        } else {
            QOpenGLWindow::mouseMoveEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* param1) override {
        if (qopenglwindow_wheelevent_isbase) {
            qopenglwindow_wheelevent_isbase = false;
            QOpenGLWindow::wheelEvent(param1);
        } else if (qopenglwindow_wheelevent_callback != nullptr) {
            QWheelEvent* cbval1 = param1;

            qopenglwindow_wheelevent_callback(this, cbval1);
        } else {
            QOpenGLWindow::wheelEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void touchEvent(QTouchEvent* param1) override {
        if (qopenglwindow_touchevent_isbase) {
            qopenglwindow_touchevent_isbase = false;
            QOpenGLWindow::touchEvent(param1);
        } else if (qopenglwindow_touchevent_callback != nullptr) {
            QTouchEvent* cbval1 = param1;

            qopenglwindow_touchevent_callback(this, cbval1);
        } else {
            QOpenGLWindow::touchEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* param1) override {
        if (qopenglwindow_tabletevent_isbase) {
            qopenglwindow_tabletevent_isbase = false;
            QOpenGLWindow::tabletEvent(param1);
        } else if (qopenglwindow_tabletevent_callback != nullptr) {
            QTabletEvent* cbval1 = param1;

            qopenglwindow_tabletevent_callback(this, cbval1);
        } else {
            QOpenGLWindow::tabletEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qopenglwindow_nativeevent_isbase) {
            qopenglwindow_nativeevent_isbase = false;
            return QOpenGLWindow::nativeEvent(eventType, message, result);
        } else if (qopenglwindow_nativeevent_callback != nullptr) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<const char*>(malloc(eventType_str.len + 1));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            ((char*)eventType_str.data)[eventType_str.len] = '\0';
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);

            bool callback_ret = qopenglwindow_nativeevent_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return QOpenGLWindow::nativeEvent(eventType, message, result);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qopenglwindow_eventfilter_isbase) {
            qopenglwindow_eventfilter_isbase = false;
            return QOpenGLWindow::eventFilter(watched, event);
        } else if (qopenglwindow_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qopenglwindow_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QOpenGLWindow::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qopenglwindow_timerevent_isbase) {
            qopenglwindow_timerevent_isbase = false;
            QOpenGLWindow::timerEvent(event);
        } else if (qopenglwindow_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qopenglwindow_timerevent_callback(this, cbval1);
        } else {
            QOpenGLWindow::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qopenglwindow_childevent_isbase) {
            qopenglwindow_childevent_isbase = false;
            QOpenGLWindow::childEvent(event);
        } else if (qopenglwindow_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qopenglwindow_childevent_callback(this, cbval1);
        } else {
            QOpenGLWindow::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qopenglwindow_customevent_isbase) {
            qopenglwindow_customevent_isbase = false;
            QOpenGLWindow::customEvent(event);
        } else if (qopenglwindow_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qopenglwindow_customevent_callback(this, cbval1);
        } else {
            QOpenGLWindow::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qopenglwindow_connectnotify_isbase) {
            qopenglwindow_connectnotify_isbase = false;
            QOpenGLWindow::connectNotify(signal);
        } else if (qopenglwindow_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qopenglwindow_connectnotify_callback(this, cbval1);
        } else {
            QOpenGLWindow::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qopenglwindow_disconnectnotify_isbase) {
            qopenglwindow_disconnectnotify_isbase = false;
            QOpenGLWindow::disconnectNotify(signal);
        } else if (qopenglwindow_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qopenglwindow_disconnectnotify_callback(this, cbval1);
        } else {
            QOpenGLWindow::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qopenglwindow_devtype_isbase) {
            qopenglwindow_devtype_isbase = false;
            return QOpenGLWindow::devType();
        } else if (qopenglwindow_devtype_callback != nullptr) {
            int callback_ret = qopenglwindow_devtype_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QOpenGLWindow::devType();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qopenglwindow_initpainter_isbase) {
            qopenglwindow_initpainter_isbase = false;
            QOpenGLWindow::initPainter(painter);
        } else if (qopenglwindow_initpainter_callback != nullptr) {
            QPainter* cbval1 = painter;

            qopenglwindow_initpainter_callback(this, cbval1);
        } else {
            QOpenGLWindow::initPainter(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qopenglwindow_sharedpainter_isbase) {
            qopenglwindow_sharedpainter_isbase = false;
            return QOpenGLWindow::sharedPainter();
        } else if (qopenglwindow_sharedpainter_callback != nullptr) {
            QPainter* callback_ret = qopenglwindow_sharedpainter_callback();
            return callback_ret;
        } else {
            return QOpenGLWindow::sharedPainter();
        }
    }

    // Virtual method for C ABI access and custom callback
    void* resolveInterface(const char* name, int revision) const {
        if (qopenglwindow_resolveinterface_isbase) {
            qopenglwindow_resolveinterface_isbase = false;
            return QOpenGLWindow::resolveInterface(name, revision);
        } else if (qopenglwindow_resolveinterface_callback != nullptr) {
            const char* cbval1 = (const char*)name;
            int cbval2 = revision;

            void* callback_ret = qopenglwindow_resolveinterface_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QOpenGLWindow::resolveInterface(name, revision);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qopenglwindow_sender_isbase) {
            qopenglwindow_sender_isbase = false;
            return QOpenGLWindow::sender();
        } else if (qopenglwindow_sender_callback != nullptr) {
            QObject* callback_ret = qopenglwindow_sender_callback();
            return callback_ret;
        } else {
            return QOpenGLWindow::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qopenglwindow_sendersignalindex_isbase) {
            qopenglwindow_sendersignalindex_isbase = false;
            return QOpenGLWindow::senderSignalIndex();
        } else if (qopenglwindow_sendersignalindex_callback != nullptr) {
            int callback_ret = qopenglwindow_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QOpenGLWindow::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qopenglwindow_receivers_isbase) {
            qopenglwindow_receivers_isbase = false;
            return QOpenGLWindow::receivers(signal);
        } else if (qopenglwindow_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qopenglwindow_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QOpenGLWindow::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qopenglwindow_issignalconnected_isbase) {
            qopenglwindow_issignalconnected_isbase = false;
            return QOpenGLWindow::isSignalConnected(signal);
        } else if (qopenglwindow_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qopenglwindow_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QOpenGLWindow::isSignalConnected(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (qopenglwindow_getdecodedmetricf_isbase) {
            qopenglwindow_getdecodedmetricf_isbase = false;
            return QOpenGLWindow::getDecodedMetricF(metricA, metricB);
        } else if (qopenglwindow_getdecodedmetricf_callback != nullptr) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = qopenglwindow_getdecodedmetricf_callback(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        } else {
            return QOpenGLWindow::getDecodedMetricF(metricA, metricB);
        }
    }

    // Friend functions
    friend void QOpenGLWindow_InitializeGL(QOpenGLWindow* self);
    friend void QOpenGLWindow_QBaseInitializeGL(QOpenGLWindow* self);
    friend void QOpenGLWindow_ResizeGL(QOpenGLWindow* self, int w, int h);
    friend void QOpenGLWindow_QBaseResizeGL(QOpenGLWindow* self, int w, int h);
    friend void QOpenGLWindow_PaintGL(QOpenGLWindow* self);
    friend void QOpenGLWindow_QBasePaintGL(QOpenGLWindow* self);
    friend void QOpenGLWindow_PaintUnderGL(QOpenGLWindow* self);
    friend void QOpenGLWindow_QBasePaintUnderGL(QOpenGLWindow* self);
    friend void QOpenGLWindow_PaintOverGL(QOpenGLWindow* self);
    friend void QOpenGLWindow_QBasePaintOverGL(QOpenGLWindow* self);
    friend void QOpenGLWindow_PaintEvent(QOpenGLWindow* self, QPaintEvent* event);
    friend void QOpenGLWindow_QBasePaintEvent(QOpenGLWindow* self, QPaintEvent* event);
    friend void QOpenGLWindow_ResizeEvent(QOpenGLWindow* self, QResizeEvent* event);
    friend void QOpenGLWindow_QBaseResizeEvent(QOpenGLWindow* self, QResizeEvent* event);
    friend int QOpenGLWindow_Metric(const QOpenGLWindow* self, int metric);
    friend int QOpenGLWindow_QBaseMetric(const QOpenGLWindow* self, int metric);
    friend QPaintDevice* QOpenGLWindow_Redirected(const QOpenGLWindow* self, QPoint* param1);
    friend QPaintDevice* QOpenGLWindow_QBaseRedirected(const QOpenGLWindow* self, QPoint* param1);
    friend void QOpenGLWindow_ExposeEvent(QOpenGLWindow* self, QExposeEvent* param1);
    friend void QOpenGLWindow_QBaseExposeEvent(QOpenGLWindow* self, QExposeEvent* param1);
    friend bool QOpenGLWindow_Event(QOpenGLWindow* self, QEvent* event);
    friend bool QOpenGLWindow_QBaseEvent(QOpenGLWindow* self, QEvent* event);
    friend void QOpenGLWindow_MoveEvent(QOpenGLWindow* self, QMoveEvent* param1);
    friend void QOpenGLWindow_QBaseMoveEvent(QOpenGLWindow* self, QMoveEvent* param1);
    friend void QOpenGLWindow_FocusInEvent(QOpenGLWindow* self, QFocusEvent* param1);
    friend void QOpenGLWindow_QBaseFocusInEvent(QOpenGLWindow* self, QFocusEvent* param1);
    friend void QOpenGLWindow_FocusOutEvent(QOpenGLWindow* self, QFocusEvent* param1);
    friend void QOpenGLWindow_QBaseFocusOutEvent(QOpenGLWindow* self, QFocusEvent* param1);
    friend void QOpenGLWindow_ShowEvent(QOpenGLWindow* self, QShowEvent* param1);
    friend void QOpenGLWindow_QBaseShowEvent(QOpenGLWindow* self, QShowEvent* param1);
    friend void QOpenGLWindow_HideEvent(QOpenGLWindow* self, QHideEvent* param1);
    friend void QOpenGLWindow_QBaseHideEvent(QOpenGLWindow* self, QHideEvent* param1);
    friend void QOpenGLWindow_CloseEvent(QOpenGLWindow* self, QCloseEvent* param1);
    friend void QOpenGLWindow_QBaseCloseEvent(QOpenGLWindow* self, QCloseEvent* param1);
    friend void QOpenGLWindow_KeyPressEvent(QOpenGLWindow* self, QKeyEvent* param1);
    friend void QOpenGLWindow_QBaseKeyPressEvent(QOpenGLWindow* self, QKeyEvent* param1);
    friend void QOpenGLWindow_KeyReleaseEvent(QOpenGLWindow* self, QKeyEvent* param1);
    friend void QOpenGLWindow_QBaseKeyReleaseEvent(QOpenGLWindow* self, QKeyEvent* param1);
    friend void QOpenGLWindow_MousePressEvent(QOpenGLWindow* self, QMouseEvent* param1);
    friend void QOpenGLWindow_QBaseMousePressEvent(QOpenGLWindow* self, QMouseEvent* param1);
    friend void QOpenGLWindow_MouseReleaseEvent(QOpenGLWindow* self, QMouseEvent* param1);
    friend void QOpenGLWindow_QBaseMouseReleaseEvent(QOpenGLWindow* self, QMouseEvent* param1);
    friend void QOpenGLWindow_MouseDoubleClickEvent(QOpenGLWindow* self, QMouseEvent* param1);
    friend void QOpenGLWindow_QBaseMouseDoubleClickEvent(QOpenGLWindow* self, QMouseEvent* param1);
    friend void QOpenGLWindow_MouseMoveEvent(QOpenGLWindow* self, QMouseEvent* param1);
    friend void QOpenGLWindow_QBaseMouseMoveEvent(QOpenGLWindow* self, QMouseEvent* param1);
    friend void QOpenGLWindow_WheelEvent(QOpenGLWindow* self, QWheelEvent* param1);
    friend void QOpenGLWindow_QBaseWheelEvent(QOpenGLWindow* self, QWheelEvent* param1);
    friend void QOpenGLWindow_TouchEvent(QOpenGLWindow* self, QTouchEvent* param1);
    friend void QOpenGLWindow_QBaseTouchEvent(QOpenGLWindow* self, QTouchEvent* param1);
    friend void QOpenGLWindow_TabletEvent(QOpenGLWindow* self, QTabletEvent* param1);
    friend void QOpenGLWindow_QBaseTabletEvent(QOpenGLWindow* self, QTabletEvent* param1);
    friend bool QOpenGLWindow_NativeEvent(QOpenGLWindow* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool QOpenGLWindow_QBaseNativeEvent(QOpenGLWindow* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void QOpenGLWindow_TimerEvent(QOpenGLWindow* self, QTimerEvent* event);
    friend void QOpenGLWindow_QBaseTimerEvent(QOpenGLWindow* self, QTimerEvent* event);
    friend void QOpenGLWindow_ChildEvent(QOpenGLWindow* self, QChildEvent* event);
    friend void QOpenGLWindow_QBaseChildEvent(QOpenGLWindow* self, QChildEvent* event);
    friend void QOpenGLWindow_CustomEvent(QOpenGLWindow* self, QEvent* event);
    friend void QOpenGLWindow_QBaseCustomEvent(QOpenGLWindow* self, QEvent* event);
    friend void QOpenGLWindow_ConnectNotify(QOpenGLWindow* self, const QMetaMethod* signal);
    friend void QOpenGLWindow_QBaseConnectNotify(QOpenGLWindow* self, const QMetaMethod* signal);
    friend void QOpenGLWindow_DisconnectNotify(QOpenGLWindow* self, const QMetaMethod* signal);
    friend void QOpenGLWindow_QBaseDisconnectNotify(QOpenGLWindow* self, const QMetaMethod* signal);
    friend void QOpenGLWindow_InitPainter(const QOpenGLWindow* self, QPainter* painter);
    friend void QOpenGLWindow_QBaseInitPainter(const QOpenGLWindow* self, QPainter* painter);
    friend QPainter* QOpenGLWindow_SharedPainter(const QOpenGLWindow* self);
    friend QPainter* QOpenGLWindow_QBaseSharedPainter(const QOpenGLWindow* self);
    friend void* QOpenGLWindow_ResolveInterface(const QOpenGLWindow* self, const char* name, int revision);
    friend void* QOpenGLWindow_QBaseResolveInterface(const QOpenGLWindow* self, const char* name, int revision);
    friend QObject* QOpenGLWindow_Sender(const QOpenGLWindow* self);
    friend QObject* QOpenGLWindow_QBaseSender(const QOpenGLWindow* self);
    friend int QOpenGLWindow_SenderSignalIndex(const QOpenGLWindow* self);
    friend int QOpenGLWindow_QBaseSenderSignalIndex(const QOpenGLWindow* self);
    friend int QOpenGLWindow_Receivers(const QOpenGLWindow* self, const char* signal);
    friend int QOpenGLWindow_QBaseReceivers(const QOpenGLWindow* self, const char* signal);
    friend bool QOpenGLWindow_IsSignalConnected(const QOpenGLWindow* self, const QMetaMethod* signal);
    friend bool QOpenGLWindow_QBaseIsSignalConnected(const QOpenGLWindow* self, const QMetaMethod* signal);
    friend double QOpenGLWindow_GetDecodedMetricF(const QOpenGLWindow* self, int metricA, int metricB);
    friend double QOpenGLWindow_QBaseGetDecodedMetricF(const QOpenGLWindow* self, int metricA, int metricB);
};

#endif
