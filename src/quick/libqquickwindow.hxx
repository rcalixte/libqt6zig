#pragma once
#ifndef QUICK_LIBQQUICKWINDOW_HXX
#define QUICK_LIBQQUICKWINDOW_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QQuickWindow so that we can call protected methods
class VirtualQQuickWindow final : public QQuickWindow {

  public:
    // Virtual class boolean flag
    bool isVirtualQQuickWindow = true;

    // Virtual class public types (including callbacks)
    using QQuickWindow_MetaObject_Callback = QMetaObject* (*)();
    using QQuickWindow_Metacast_Callback = void* (*)(QQuickWindow*, const char*);
    using QQuickWindow_Metacall_Callback = int (*)(QQuickWindow*, int, int, void**);
    using QQuickWindow_FocusObject_Callback = QObject* (*)();
    using QQuickWindow_AccessibleRoot_Callback = QAccessibleInterface* (*)();
    using QQuickWindow_ExposeEvent_Callback = void (*)(QQuickWindow*, QExposeEvent*);
    using QQuickWindow_ResizeEvent_Callback = void (*)(QQuickWindow*, QResizeEvent*);
    using QQuickWindow_ShowEvent_Callback = void (*)(QQuickWindow*, QShowEvent*);
    using QQuickWindow_HideEvent_Callback = void (*)(QQuickWindow*, QHideEvent*);
    using QQuickWindow_CloseEvent_Callback = void (*)(QQuickWindow*, QCloseEvent*);
    using QQuickWindow_FocusInEvent_Callback = void (*)(QQuickWindow*, QFocusEvent*);
    using QQuickWindow_FocusOutEvent_Callback = void (*)(QQuickWindow*, QFocusEvent*);
    using QQuickWindow_Event_Callback = bool (*)(QQuickWindow*, QEvent*);
    using QQuickWindow_KeyPressEvent_Callback = void (*)(QQuickWindow*, QKeyEvent*);
    using QQuickWindow_KeyReleaseEvent_Callback = void (*)(QQuickWindow*, QKeyEvent*);
    using QQuickWindow_MousePressEvent_Callback = void (*)(QQuickWindow*, QMouseEvent*);
    using QQuickWindow_MouseReleaseEvent_Callback = void (*)(QQuickWindow*, QMouseEvent*);
    using QQuickWindow_MouseDoubleClickEvent_Callback = void (*)(QQuickWindow*, QMouseEvent*);
    using QQuickWindow_MouseMoveEvent_Callback = void (*)(QQuickWindow*, QMouseEvent*);
    using QQuickWindow_WheelEvent_Callback = void (*)(QQuickWindow*, QWheelEvent*);
    using QQuickWindow_TabletEvent_Callback = void (*)(QQuickWindow*, QTabletEvent*);
    using QQuickWindow_SurfaceType_Callback = int (*)();
    using QQuickWindow_Format_Callback = QSurfaceFormat* (*)();
    using QQuickWindow_Size_Callback = QSize* (*)();
    using QQuickWindow_PaintEvent_Callback = void (*)(QQuickWindow*, QPaintEvent*);
    using QQuickWindow_MoveEvent_Callback = void (*)(QQuickWindow*, QMoveEvent*);
    using QQuickWindow_TouchEvent_Callback = void (*)(QQuickWindow*, QTouchEvent*);
    using QQuickWindow_NativeEvent_Callback = bool (*)(QQuickWindow*, libqt_string, void*, intptr_t*);
    using QQuickWindow_EventFilter_Callback = bool (*)(QQuickWindow*, QObject*, QEvent*);
    using QQuickWindow_TimerEvent_Callback = void (*)(QQuickWindow*, QTimerEvent*);
    using QQuickWindow_ChildEvent_Callback = void (*)(QQuickWindow*, QChildEvent*);
    using QQuickWindow_CustomEvent_Callback = void (*)(QQuickWindow*, QEvent*);
    using QQuickWindow_ConnectNotify_Callback = void (*)(QQuickWindow*, QMetaMethod*);
    using QQuickWindow_DisconnectNotify_Callback = void (*)(QQuickWindow*, QMetaMethod*);
    using QQuickWindow_ResolveInterface_Callback = void* (*)(const QQuickWindow*, const char*, int);
    using QQuickWindow_Sender_Callback = QObject* (*)();
    using QQuickWindow_SenderSignalIndex_Callback = int (*)();
    using QQuickWindow_Receivers_Callback = int (*)(const QQuickWindow*, const char*);
    using QQuickWindow_IsSignalConnected_Callback = bool (*)(const QQuickWindow*, QMetaMethod*);

  protected:
    // Instance callback storage
    QQuickWindow_MetaObject_Callback qquickwindow_metaobject_callback = nullptr;
    QQuickWindow_Metacast_Callback qquickwindow_metacast_callback = nullptr;
    QQuickWindow_Metacall_Callback qquickwindow_metacall_callback = nullptr;
    QQuickWindow_FocusObject_Callback qquickwindow_focusobject_callback = nullptr;
    QQuickWindow_AccessibleRoot_Callback qquickwindow_accessibleroot_callback = nullptr;
    QQuickWindow_ExposeEvent_Callback qquickwindow_exposeevent_callback = nullptr;
    QQuickWindow_ResizeEvent_Callback qquickwindow_resizeevent_callback = nullptr;
    QQuickWindow_ShowEvent_Callback qquickwindow_showevent_callback = nullptr;
    QQuickWindow_HideEvent_Callback qquickwindow_hideevent_callback = nullptr;
    QQuickWindow_CloseEvent_Callback qquickwindow_closeevent_callback = nullptr;
    QQuickWindow_FocusInEvent_Callback qquickwindow_focusinevent_callback = nullptr;
    QQuickWindow_FocusOutEvent_Callback qquickwindow_focusoutevent_callback = nullptr;
    QQuickWindow_Event_Callback qquickwindow_event_callback = nullptr;
    QQuickWindow_KeyPressEvent_Callback qquickwindow_keypressevent_callback = nullptr;
    QQuickWindow_KeyReleaseEvent_Callback qquickwindow_keyreleaseevent_callback = nullptr;
    QQuickWindow_MousePressEvent_Callback qquickwindow_mousepressevent_callback = nullptr;
    QQuickWindow_MouseReleaseEvent_Callback qquickwindow_mousereleaseevent_callback = nullptr;
    QQuickWindow_MouseDoubleClickEvent_Callback qquickwindow_mousedoubleclickevent_callback = nullptr;
    QQuickWindow_MouseMoveEvent_Callback qquickwindow_mousemoveevent_callback = nullptr;
    QQuickWindow_WheelEvent_Callback qquickwindow_wheelevent_callback = nullptr;
    QQuickWindow_TabletEvent_Callback qquickwindow_tabletevent_callback = nullptr;
    QQuickWindow_SurfaceType_Callback qquickwindow_surfacetype_callback = nullptr;
    QQuickWindow_Format_Callback qquickwindow_format_callback = nullptr;
    QQuickWindow_Size_Callback qquickwindow_size_callback = nullptr;
    QQuickWindow_PaintEvent_Callback qquickwindow_paintevent_callback = nullptr;
    QQuickWindow_MoveEvent_Callback qquickwindow_moveevent_callback = nullptr;
    QQuickWindow_TouchEvent_Callback qquickwindow_touchevent_callback = nullptr;
    QQuickWindow_NativeEvent_Callback qquickwindow_nativeevent_callback = nullptr;
    QQuickWindow_EventFilter_Callback qquickwindow_eventfilter_callback = nullptr;
    QQuickWindow_TimerEvent_Callback qquickwindow_timerevent_callback = nullptr;
    QQuickWindow_ChildEvent_Callback qquickwindow_childevent_callback = nullptr;
    QQuickWindow_CustomEvent_Callback qquickwindow_customevent_callback = nullptr;
    QQuickWindow_ConnectNotify_Callback qquickwindow_connectnotify_callback = nullptr;
    QQuickWindow_DisconnectNotify_Callback qquickwindow_disconnectnotify_callback = nullptr;
    QQuickWindow_ResolveInterface_Callback qquickwindow_resolveinterface_callback = nullptr;
    QQuickWindow_Sender_Callback qquickwindow_sender_callback = nullptr;
    QQuickWindow_SenderSignalIndex_Callback qquickwindow_sendersignalindex_callback = nullptr;
    QQuickWindow_Receivers_Callback qquickwindow_receivers_callback = nullptr;
    QQuickWindow_IsSignalConnected_Callback qquickwindow_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qquickwindow_metaobject_isbase = false;
    mutable bool qquickwindow_metacast_isbase = false;
    mutable bool qquickwindow_metacall_isbase = false;
    mutable bool qquickwindow_focusobject_isbase = false;
    mutable bool qquickwindow_accessibleroot_isbase = false;
    mutable bool qquickwindow_exposeevent_isbase = false;
    mutable bool qquickwindow_resizeevent_isbase = false;
    mutable bool qquickwindow_showevent_isbase = false;
    mutable bool qquickwindow_hideevent_isbase = false;
    mutable bool qquickwindow_closeevent_isbase = false;
    mutable bool qquickwindow_focusinevent_isbase = false;
    mutable bool qquickwindow_focusoutevent_isbase = false;
    mutable bool qquickwindow_event_isbase = false;
    mutable bool qquickwindow_keypressevent_isbase = false;
    mutable bool qquickwindow_keyreleaseevent_isbase = false;
    mutable bool qquickwindow_mousepressevent_isbase = false;
    mutable bool qquickwindow_mousereleaseevent_isbase = false;
    mutable bool qquickwindow_mousedoubleclickevent_isbase = false;
    mutable bool qquickwindow_mousemoveevent_isbase = false;
    mutable bool qquickwindow_wheelevent_isbase = false;
    mutable bool qquickwindow_tabletevent_isbase = false;
    mutable bool qquickwindow_surfacetype_isbase = false;
    mutable bool qquickwindow_format_isbase = false;
    mutable bool qquickwindow_size_isbase = false;
    mutable bool qquickwindow_paintevent_isbase = false;
    mutable bool qquickwindow_moveevent_isbase = false;
    mutable bool qquickwindow_touchevent_isbase = false;
    mutable bool qquickwindow_nativeevent_isbase = false;
    mutable bool qquickwindow_eventfilter_isbase = false;
    mutable bool qquickwindow_timerevent_isbase = false;
    mutable bool qquickwindow_childevent_isbase = false;
    mutable bool qquickwindow_customevent_isbase = false;
    mutable bool qquickwindow_connectnotify_isbase = false;
    mutable bool qquickwindow_disconnectnotify_isbase = false;
    mutable bool qquickwindow_resolveinterface_isbase = false;
    mutable bool qquickwindow_sender_isbase = false;
    mutable bool qquickwindow_sendersignalindex_isbase = false;
    mutable bool qquickwindow_receivers_isbase = false;
    mutable bool qquickwindow_issignalconnected_isbase = false;

  public:
    VirtualQQuickWindow() : QQuickWindow() {};
    VirtualQQuickWindow(QQuickRenderControl* renderControl) : QQuickWindow(renderControl) {};
    VirtualQQuickWindow(QWindow* parent) : QQuickWindow(parent) {};

    // Callback setters
    inline void setQQuickWindow_MetaObject_Callback(QQuickWindow_MetaObject_Callback cb) { qquickwindow_metaobject_callback = cb; }
    inline void setQQuickWindow_Metacast_Callback(QQuickWindow_Metacast_Callback cb) { qquickwindow_metacast_callback = cb; }
    inline void setQQuickWindow_Metacall_Callback(QQuickWindow_Metacall_Callback cb) { qquickwindow_metacall_callback = cb; }
    inline void setQQuickWindow_FocusObject_Callback(QQuickWindow_FocusObject_Callback cb) { qquickwindow_focusobject_callback = cb; }
    inline void setQQuickWindow_AccessibleRoot_Callback(QQuickWindow_AccessibleRoot_Callback cb) { qquickwindow_accessibleroot_callback = cb; }
    inline void setQQuickWindow_ExposeEvent_Callback(QQuickWindow_ExposeEvent_Callback cb) { qquickwindow_exposeevent_callback = cb; }
    inline void setQQuickWindow_ResizeEvent_Callback(QQuickWindow_ResizeEvent_Callback cb) { qquickwindow_resizeevent_callback = cb; }
    inline void setQQuickWindow_ShowEvent_Callback(QQuickWindow_ShowEvent_Callback cb) { qquickwindow_showevent_callback = cb; }
    inline void setQQuickWindow_HideEvent_Callback(QQuickWindow_HideEvent_Callback cb) { qquickwindow_hideevent_callback = cb; }
    inline void setQQuickWindow_CloseEvent_Callback(QQuickWindow_CloseEvent_Callback cb) { qquickwindow_closeevent_callback = cb; }
    inline void setQQuickWindow_FocusInEvent_Callback(QQuickWindow_FocusInEvent_Callback cb) { qquickwindow_focusinevent_callback = cb; }
    inline void setQQuickWindow_FocusOutEvent_Callback(QQuickWindow_FocusOutEvent_Callback cb) { qquickwindow_focusoutevent_callback = cb; }
    inline void setQQuickWindow_Event_Callback(QQuickWindow_Event_Callback cb) { qquickwindow_event_callback = cb; }
    inline void setQQuickWindow_KeyPressEvent_Callback(QQuickWindow_KeyPressEvent_Callback cb) { qquickwindow_keypressevent_callback = cb; }
    inline void setQQuickWindow_KeyReleaseEvent_Callback(QQuickWindow_KeyReleaseEvent_Callback cb) { qquickwindow_keyreleaseevent_callback = cb; }
    inline void setQQuickWindow_MousePressEvent_Callback(QQuickWindow_MousePressEvent_Callback cb) { qquickwindow_mousepressevent_callback = cb; }
    inline void setQQuickWindow_MouseReleaseEvent_Callback(QQuickWindow_MouseReleaseEvent_Callback cb) { qquickwindow_mousereleaseevent_callback = cb; }
    inline void setQQuickWindow_MouseDoubleClickEvent_Callback(QQuickWindow_MouseDoubleClickEvent_Callback cb) { qquickwindow_mousedoubleclickevent_callback = cb; }
    inline void setQQuickWindow_MouseMoveEvent_Callback(QQuickWindow_MouseMoveEvent_Callback cb) { qquickwindow_mousemoveevent_callback = cb; }
    inline void setQQuickWindow_WheelEvent_Callback(QQuickWindow_WheelEvent_Callback cb) { qquickwindow_wheelevent_callback = cb; }
    inline void setQQuickWindow_TabletEvent_Callback(QQuickWindow_TabletEvent_Callback cb) { qquickwindow_tabletevent_callback = cb; }
    inline void setQQuickWindow_SurfaceType_Callback(QQuickWindow_SurfaceType_Callback cb) { qquickwindow_surfacetype_callback = cb; }
    inline void setQQuickWindow_Format_Callback(QQuickWindow_Format_Callback cb) { qquickwindow_format_callback = cb; }
    inline void setQQuickWindow_Size_Callback(QQuickWindow_Size_Callback cb) { qquickwindow_size_callback = cb; }
    inline void setQQuickWindow_PaintEvent_Callback(QQuickWindow_PaintEvent_Callback cb) { qquickwindow_paintevent_callback = cb; }
    inline void setQQuickWindow_MoveEvent_Callback(QQuickWindow_MoveEvent_Callback cb) { qquickwindow_moveevent_callback = cb; }
    inline void setQQuickWindow_TouchEvent_Callback(QQuickWindow_TouchEvent_Callback cb) { qquickwindow_touchevent_callback = cb; }
    inline void setQQuickWindow_NativeEvent_Callback(QQuickWindow_NativeEvent_Callback cb) { qquickwindow_nativeevent_callback = cb; }
    inline void setQQuickWindow_EventFilter_Callback(QQuickWindow_EventFilter_Callback cb) { qquickwindow_eventfilter_callback = cb; }
    inline void setQQuickWindow_TimerEvent_Callback(QQuickWindow_TimerEvent_Callback cb) { qquickwindow_timerevent_callback = cb; }
    inline void setQQuickWindow_ChildEvent_Callback(QQuickWindow_ChildEvent_Callback cb) { qquickwindow_childevent_callback = cb; }
    inline void setQQuickWindow_CustomEvent_Callback(QQuickWindow_CustomEvent_Callback cb) { qquickwindow_customevent_callback = cb; }
    inline void setQQuickWindow_ConnectNotify_Callback(QQuickWindow_ConnectNotify_Callback cb) { qquickwindow_connectnotify_callback = cb; }
    inline void setQQuickWindow_DisconnectNotify_Callback(QQuickWindow_DisconnectNotify_Callback cb) { qquickwindow_disconnectnotify_callback = cb; }
    inline void setQQuickWindow_ResolveInterface_Callback(QQuickWindow_ResolveInterface_Callback cb) { qquickwindow_resolveinterface_callback = cb; }
    inline void setQQuickWindow_Sender_Callback(QQuickWindow_Sender_Callback cb) { qquickwindow_sender_callback = cb; }
    inline void setQQuickWindow_SenderSignalIndex_Callback(QQuickWindow_SenderSignalIndex_Callback cb) { qquickwindow_sendersignalindex_callback = cb; }
    inline void setQQuickWindow_Receivers_Callback(QQuickWindow_Receivers_Callback cb) { qquickwindow_receivers_callback = cb; }
    inline void setQQuickWindow_IsSignalConnected_Callback(QQuickWindow_IsSignalConnected_Callback cb) { qquickwindow_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQQuickWindow_MetaObject_IsBase(bool value) const { qquickwindow_metaobject_isbase = value; }
    inline void setQQuickWindow_Metacast_IsBase(bool value) const { qquickwindow_metacast_isbase = value; }
    inline void setQQuickWindow_Metacall_IsBase(bool value) const { qquickwindow_metacall_isbase = value; }
    inline void setQQuickWindow_FocusObject_IsBase(bool value) const { qquickwindow_focusobject_isbase = value; }
    inline void setQQuickWindow_AccessibleRoot_IsBase(bool value) const { qquickwindow_accessibleroot_isbase = value; }
    inline void setQQuickWindow_ExposeEvent_IsBase(bool value) const { qquickwindow_exposeevent_isbase = value; }
    inline void setQQuickWindow_ResizeEvent_IsBase(bool value) const { qquickwindow_resizeevent_isbase = value; }
    inline void setQQuickWindow_ShowEvent_IsBase(bool value) const { qquickwindow_showevent_isbase = value; }
    inline void setQQuickWindow_HideEvent_IsBase(bool value) const { qquickwindow_hideevent_isbase = value; }
    inline void setQQuickWindow_CloseEvent_IsBase(bool value) const { qquickwindow_closeevent_isbase = value; }
    inline void setQQuickWindow_FocusInEvent_IsBase(bool value) const { qquickwindow_focusinevent_isbase = value; }
    inline void setQQuickWindow_FocusOutEvent_IsBase(bool value) const { qquickwindow_focusoutevent_isbase = value; }
    inline void setQQuickWindow_Event_IsBase(bool value) const { qquickwindow_event_isbase = value; }
    inline void setQQuickWindow_KeyPressEvent_IsBase(bool value) const { qquickwindow_keypressevent_isbase = value; }
    inline void setQQuickWindow_KeyReleaseEvent_IsBase(bool value) const { qquickwindow_keyreleaseevent_isbase = value; }
    inline void setQQuickWindow_MousePressEvent_IsBase(bool value) const { qquickwindow_mousepressevent_isbase = value; }
    inline void setQQuickWindow_MouseReleaseEvent_IsBase(bool value) const { qquickwindow_mousereleaseevent_isbase = value; }
    inline void setQQuickWindow_MouseDoubleClickEvent_IsBase(bool value) const { qquickwindow_mousedoubleclickevent_isbase = value; }
    inline void setQQuickWindow_MouseMoveEvent_IsBase(bool value) const { qquickwindow_mousemoveevent_isbase = value; }
    inline void setQQuickWindow_WheelEvent_IsBase(bool value) const { qquickwindow_wheelevent_isbase = value; }
    inline void setQQuickWindow_TabletEvent_IsBase(bool value) const { qquickwindow_tabletevent_isbase = value; }
    inline void setQQuickWindow_SurfaceType_IsBase(bool value) const { qquickwindow_surfacetype_isbase = value; }
    inline void setQQuickWindow_Format_IsBase(bool value) const { qquickwindow_format_isbase = value; }
    inline void setQQuickWindow_Size_IsBase(bool value) const { qquickwindow_size_isbase = value; }
    inline void setQQuickWindow_PaintEvent_IsBase(bool value) const { qquickwindow_paintevent_isbase = value; }
    inline void setQQuickWindow_MoveEvent_IsBase(bool value) const { qquickwindow_moveevent_isbase = value; }
    inline void setQQuickWindow_TouchEvent_IsBase(bool value) const { qquickwindow_touchevent_isbase = value; }
    inline void setQQuickWindow_NativeEvent_IsBase(bool value) const { qquickwindow_nativeevent_isbase = value; }
    inline void setQQuickWindow_EventFilter_IsBase(bool value) const { qquickwindow_eventfilter_isbase = value; }
    inline void setQQuickWindow_TimerEvent_IsBase(bool value) const { qquickwindow_timerevent_isbase = value; }
    inline void setQQuickWindow_ChildEvent_IsBase(bool value) const { qquickwindow_childevent_isbase = value; }
    inline void setQQuickWindow_CustomEvent_IsBase(bool value) const { qquickwindow_customevent_isbase = value; }
    inline void setQQuickWindow_ConnectNotify_IsBase(bool value) const { qquickwindow_connectnotify_isbase = value; }
    inline void setQQuickWindow_DisconnectNotify_IsBase(bool value) const { qquickwindow_disconnectnotify_isbase = value; }
    inline void setQQuickWindow_ResolveInterface_IsBase(bool value) const { qquickwindow_resolveinterface_isbase = value; }
    inline void setQQuickWindow_Sender_IsBase(bool value) const { qquickwindow_sender_isbase = value; }
    inline void setQQuickWindow_SenderSignalIndex_IsBase(bool value) const { qquickwindow_sendersignalindex_isbase = value; }
    inline void setQQuickWindow_Receivers_IsBase(bool value) const { qquickwindow_receivers_isbase = value; }
    inline void setQQuickWindow_IsSignalConnected_IsBase(bool value) const { qquickwindow_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qquickwindow_metaobject_isbase) {
            qquickwindow_metaobject_isbase = false;
            return QQuickWindow::metaObject();
        }
        auto metaobject_cb = qquickwindow_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QQuickWindow::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qquickwindow_metacast_isbase) {
            qquickwindow_metacast_isbase = false;
            return QQuickWindow::qt_metacast(param1);
        }
        auto metacast_cb = qquickwindow_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QQuickWindow::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qquickwindow_metacall_isbase) {
            qquickwindow_metacall_isbase = false;
            return QQuickWindow::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qquickwindow_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QQuickWindow::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QObject* focusObject() const override {
        if (qquickwindow_focusobject_isbase) {
            qquickwindow_focusobject_isbase = false;
            return QQuickWindow::focusObject();
        }
        auto focusobject_cb = qquickwindow_focusobject_callback;
        if (focusobject_cb) {
            QObject* callback_ret = focusobject_cb();
            return callback_ret;
        }
        return QQuickWindow::focusObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual QAccessibleInterface* accessibleRoot() const override {
        if (qquickwindow_accessibleroot_isbase) {
            qquickwindow_accessibleroot_isbase = false;
            return QQuickWindow::accessibleRoot();
        }
        auto accessibleroot_cb = qquickwindow_accessibleroot_callback;
        if (accessibleroot_cb) {
            QAccessibleInterface* callback_ret = accessibleroot_cb();
            return callback_ret;
        }
        return QQuickWindow::accessibleRoot();
    }

    // Virtual method for C ABI access and custom callback
    virtual void exposeEvent(QExposeEvent* param1) override {
        if (qquickwindow_exposeevent_isbase) {
            qquickwindow_exposeevent_isbase = false;
            QQuickWindow::exposeEvent(param1);
            return;
        }
        auto exposeevent_cb = qquickwindow_exposeevent_callback;
        if (exposeevent_cb) {
            QExposeEvent* cbval1 = param1;
            exposeevent_cb(this, cbval1);
            return;
        }
        QQuickWindow::exposeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* param1) override {
        if (qquickwindow_resizeevent_isbase) {
            qquickwindow_resizeevent_isbase = false;
            QQuickWindow::resizeEvent(param1);
            return;
        }
        auto resizeevent_cb = qquickwindow_resizeevent_callback;
        if (resizeevent_cb) {
            QResizeEvent* cbval1 = param1;
            resizeevent_cb(this, cbval1);
            return;
        }
        QQuickWindow::resizeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* param1) override {
        if (qquickwindow_showevent_isbase) {
            qquickwindow_showevent_isbase = false;
            QQuickWindow::showEvent(param1);
            return;
        }
        auto showevent_cb = qquickwindow_showevent_callback;
        if (showevent_cb) {
            QShowEvent* cbval1 = param1;
            showevent_cb(this, cbval1);
            return;
        }
        QQuickWindow::showEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* param1) override {
        if (qquickwindow_hideevent_isbase) {
            qquickwindow_hideevent_isbase = false;
            QQuickWindow::hideEvent(param1);
            return;
        }
        auto hideevent_cb = qquickwindow_hideevent_callback;
        if (hideevent_cb) {
            QHideEvent* cbval1 = param1;
            hideevent_cb(this, cbval1);
            return;
        }
        QQuickWindow::hideEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* param1) override {
        if (qquickwindow_closeevent_isbase) {
            qquickwindow_closeevent_isbase = false;
            QQuickWindow::closeEvent(param1);
            return;
        }
        auto closeevent_cb = qquickwindow_closeevent_callback;
        if (closeevent_cb) {
            QCloseEvent* cbval1 = param1;
            closeevent_cb(this, cbval1);
            return;
        }
        QQuickWindow::closeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* param1) override {
        if (qquickwindow_focusinevent_isbase) {
            qquickwindow_focusinevent_isbase = false;
            QQuickWindow::focusInEvent(param1);
            return;
        }
        auto focusinevent_cb = qquickwindow_focusinevent_callback;
        if (focusinevent_cb) {
            QFocusEvent* cbval1 = param1;
            focusinevent_cb(this, cbval1);
            return;
        }
        QQuickWindow::focusInEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* param1) override {
        if (qquickwindow_focusoutevent_isbase) {
            qquickwindow_focusoutevent_isbase = false;
            QQuickWindow::focusOutEvent(param1);
            return;
        }
        auto focusoutevent_cb = qquickwindow_focusoutevent_callback;
        if (focusoutevent_cb) {
            QFocusEvent* cbval1 = param1;
            focusoutevent_cb(this, cbval1);
            return;
        }
        QQuickWindow::focusOutEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* param1) override {
        if (qquickwindow_event_isbase) {
            qquickwindow_event_isbase = false;
            return QQuickWindow::event(param1);
        }
        auto event_cb = qquickwindow_event_callback;
        if (event_cb) {
            QEvent* cbval1 = param1;
            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QQuickWindow::event(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* param1) override {
        if (qquickwindow_keypressevent_isbase) {
            qquickwindow_keypressevent_isbase = false;
            QQuickWindow::keyPressEvent(param1);
            return;
        }
        auto keypressevent_cb = qquickwindow_keypressevent_callback;
        if (keypressevent_cb) {
            QKeyEvent* cbval1 = param1;
            keypressevent_cb(this, cbval1);
            return;
        }
        QQuickWindow::keyPressEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* param1) override {
        if (qquickwindow_keyreleaseevent_isbase) {
            qquickwindow_keyreleaseevent_isbase = false;
            QQuickWindow::keyReleaseEvent(param1);
            return;
        }
        auto keyreleaseevent_cb = qquickwindow_keyreleaseevent_callback;
        if (keyreleaseevent_cb) {
            QKeyEvent* cbval1 = param1;
            keyreleaseevent_cb(this, cbval1);
            return;
        }
        QQuickWindow::keyReleaseEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* param1) override {
        if (qquickwindow_mousepressevent_isbase) {
            qquickwindow_mousepressevent_isbase = false;
            QQuickWindow::mousePressEvent(param1);
            return;
        }
        auto mousepressevent_cb = qquickwindow_mousepressevent_callback;
        if (mousepressevent_cb) {
            QMouseEvent* cbval1 = param1;
            mousepressevent_cb(this, cbval1);
            return;
        }
        QQuickWindow::mousePressEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* param1) override {
        if (qquickwindow_mousereleaseevent_isbase) {
            qquickwindow_mousereleaseevent_isbase = false;
            QQuickWindow::mouseReleaseEvent(param1);
            return;
        }
        auto mousereleaseevent_cb = qquickwindow_mousereleaseevent_callback;
        if (mousereleaseevent_cb) {
            QMouseEvent* cbval1 = param1;
            mousereleaseevent_cb(this, cbval1);
            return;
        }
        QQuickWindow::mouseReleaseEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* param1) override {
        if (qquickwindow_mousedoubleclickevent_isbase) {
            qquickwindow_mousedoubleclickevent_isbase = false;
            QQuickWindow::mouseDoubleClickEvent(param1);
            return;
        }
        auto mousedoubleclickevent_cb = qquickwindow_mousedoubleclickevent_callback;
        if (mousedoubleclickevent_cb) {
            QMouseEvent* cbval1 = param1;
            mousedoubleclickevent_cb(this, cbval1);
            return;
        }
        QQuickWindow::mouseDoubleClickEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* param1) override {
        if (qquickwindow_mousemoveevent_isbase) {
            qquickwindow_mousemoveevent_isbase = false;
            QQuickWindow::mouseMoveEvent(param1);
            return;
        }
        auto mousemoveevent_cb = qquickwindow_mousemoveevent_callback;
        if (mousemoveevent_cb) {
            QMouseEvent* cbval1 = param1;
            mousemoveevent_cb(this, cbval1);
            return;
        }
        QQuickWindow::mouseMoveEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* param1) override {
        if (qquickwindow_wheelevent_isbase) {
            qquickwindow_wheelevent_isbase = false;
            QQuickWindow::wheelEvent(param1);
            return;
        }
        auto wheelevent_cb = qquickwindow_wheelevent_callback;
        if (wheelevent_cb) {
            QWheelEvent* cbval1 = param1;
            wheelevent_cb(this, cbval1);
            return;
        }
        QQuickWindow::wheelEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* param1) override {
        if (qquickwindow_tabletevent_isbase) {
            qquickwindow_tabletevent_isbase = false;
            QQuickWindow::tabletEvent(param1);
            return;
        }
        auto tabletevent_cb = qquickwindow_tabletevent_callback;
        if (tabletevent_cb) {
            QTabletEvent* cbval1 = param1;
            tabletevent_cb(this, cbval1);
            return;
        }
        QQuickWindow::tabletEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSurface::SurfaceType surfaceType() const override {
        if (qquickwindow_surfacetype_isbase) {
            qquickwindow_surfacetype_isbase = false;
            return QQuickWindow::surfaceType();
        }
        auto surfacetype_cb = qquickwindow_surfacetype_callback;
        if (surfacetype_cb) {
            int callback_ret = surfacetype_cb();
            return static_cast<QSurface::SurfaceType>(callback_ret);
        }
        return QQuickWindow::surfaceType();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSurfaceFormat format() const override {
        if (qquickwindow_format_isbase) {
            qquickwindow_format_isbase = false;
            return QQuickWindow::format();
        }
        auto format_cb = qquickwindow_format_callback;
        if (format_cb) {
            QSurfaceFormat* callback_ret = format_cb();
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QQuickWindow::format();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize size() const override {
        if (qquickwindow_size_isbase) {
            qquickwindow_size_isbase = false;
            return QQuickWindow::size();
        }
        auto size_cb = qquickwindow_size_callback;
        if (size_cb) {
            QSize* callback_ret = size_cb();
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QQuickWindow::size();
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* param1) override {
        if (qquickwindow_paintevent_isbase) {
            qquickwindow_paintevent_isbase = false;
            QQuickWindow::paintEvent(param1);
            return;
        }
        auto paintevent_cb = qquickwindow_paintevent_callback;
        if (paintevent_cb) {
            QPaintEvent* cbval1 = param1;
            paintevent_cb(this, cbval1);
            return;
        }
        QQuickWindow::paintEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* param1) override {
        if (qquickwindow_moveevent_isbase) {
            qquickwindow_moveevent_isbase = false;
            QQuickWindow::moveEvent(param1);
            return;
        }
        auto moveevent_cb = qquickwindow_moveevent_callback;
        if (moveevent_cb) {
            QMoveEvent* cbval1 = param1;
            moveevent_cb(this, cbval1);
            return;
        }
        QQuickWindow::moveEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void touchEvent(QTouchEvent* param1) override {
        if (qquickwindow_touchevent_isbase) {
            qquickwindow_touchevent_isbase = false;
            QQuickWindow::touchEvent(param1);
            return;
        }
        auto touchevent_cb = qquickwindow_touchevent_callback;
        if (touchevent_cb) {
            QTouchEvent* cbval1 = param1;
            touchevent_cb(this, cbval1);
            return;
        }
        QQuickWindow::touchEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qquickwindow_nativeevent_isbase) {
            qquickwindow_nativeevent_isbase = false;
            return QQuickWindow::nativeEvent(eventType, message, result);
        }
        auto nativeevent_cb = qquickwindow_nativeevent_callback;
        if (nativeevent_cb) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = nativeevent_cb(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return QQuickWindow::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qquickwindow_eventfilter_isbase) {
            qquickwindow_eventfilter_isbase = false;
            return QQuickWindow::eventFilter(watched, event);
        }
        auto eventfilter_cb = qquickwindow_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QQuickWindow::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qquickwindow_timerevent_isbase) {
            qquickwindow_timerevent_isbase = false;
            QQuickWindow::timerEvent(event);
            return;
        }
        auto timerevent_cb = qquickwindow_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;
            timerevent_cb(this, cbval1);
            return;
        }
        QQuickWindow::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qquickwindow_childevent_isbase) {
            qquickwindow_childevent_isbase = false;
            QQuickWindow::childEvent(event);
            return;
        }
        auto childevent_cb = qquickwindow_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;
            childevent_cb(this, cbval1);
            return;
        }
        QQuickWindow::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qquickwindow_customevent_isbase) {
            qquickwindow_customevent_isbase = false;
            QQuickWindow::customEvent(event);
            return;
        }
        auto customevent_cb = qquickwindow_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;
            customevent_cb(this, cbval1);
            return;
        }
        QQuickWindow::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qquickwindow_connectnotify_isbase) {
            qquickwindow_connectnotify_isbase = false;
            QQuickWindow::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qquickwindow_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            connectnotify_cb(this, cbval1);
            return;
        }
        QQuickWindow::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qquickwindow_disconnectnotify_isbase) {
            qquickwindow_disconnectnotify_isbase = false;
            QQuickWindow::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qquickwindow_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            disconnectnotify_cb(this, cbval1);
            return;
        }
        QQuickWindow::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    void* resolveInterface(const char* name, int revision) const {
        if (qquickwindow_resolveinterface_isbase) {
            qquickwindow_resolveinterface_isbase = false;
            return QQuickWindow::resolveInterface(name, revision);
        }
        auto resolveinterface_cb = qquickwindow_resolveinterface_callback;
        if (resolveinterface_cb) {
            const char* cbval1 = (const char*)name;
            int cbval2 = revision;
            void* callback_ret = resolveinterface_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QQuickWindow::resolveInterface(name, revision);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qquickwindow_sender_isbase) {
            qquickwindow_sender_isbase = false;
            return QQuickWindow::sender();
        }
        auto sender_cb = qquickwindow_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QQuickWindow::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qquickwindow_sendersignalindex_isbase) {
            qquickwindow_sendersignalindex_isbase = false;
            return QQuickWindow::senderSignalIndex();
        }
        auto sendersignalindex_cb = qquickwindow_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QQuickWindow::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qquickwindow_receivers_isbase) {
            qquickwindow_receivers_isbase = false;
            return QQuickWindow::receivers(signal);
        }
        auto receivers_cb = qquickwindow_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;
            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QQuickWindow::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qquickwindow_issignalconnected_isbase) {
            qquickwindow_issignalconnected_isbase = false;
            return QQuickWindow::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qquickwindow_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QQuickWindow::isSignalConnected(signal);
    }

    // Friend functions
    friend void QQuickWindow_ExposeEvent(QQuickWindow* self, QExposeEvent* param1);
    friend void QQuickWindow_SuperExposeEvent(QQuickWindow* self, QExposeEvent* param1);
    friend void QQuickWindow_ResizeEvent(QQuickWindow* self, QResizeEvent* param1);
    friend void QQuickWindow_SuperResizeEvent(QQuickWindow* self, QResizeEvent* param1);
    friend void QQuickWindow_ShowEvent(QQuickWindow* self, QShowEvent* param1);
    friend void QQuickWindow_SuperShowEvent(QQuickWindow* self, QShowEvent* param1);
    friend void QQuickWindow_HideEvent(QQuickWindow* self, QHideEvent* param1);
    friend void QQuickWindow_SuperHideEvent(QQuickWindow* self, QHideEvent* param1);
    friend void QQuickWindow_CloseEvent(QQuickWindow* self, QCloseEvent* param1);
    friend void QQuickWindow_SuperCloseEvent(QQuickWindow* self, QCloseEvent* param1);
    friend void QQuickWindow_FocusInEvent(QQuickWindow* self, QFocusEvent* param1);
    friend void QQuickWindow_SuperFocusInEvent(QQuickWindow* self, QFocusEvent* param1);
    friend void QQuickWindow_FocusOutEvent(QQuickWindow* self, QFocusEvent* param1);
    friend void QQuickWindow_SuperFocusOutEvent(QQuickWindow* self, QFocusEvent* param1);
    friend bool QQuickWindow_Event(QQuickWindow* self, QEvent* param1);
    friend bool QQuickWindow_SuperEvent(QQuickWindow* self, QEvent* param1);
    friend void QQuickWindow_KeyPressEvent(QQuickWindow* self, QKeyEvent* param1);
    friend void QQuickWindow_SuperKeyPressEvent(QQuickWindow* self, QKeyEvent* param1);
    friend void QQuickWindow_KeyReleaseEvent(QQuickWindow* self, QKeyEvent* param1);
    friend void QQuickWindow_SuperKeyReleaseEvent(QQuickWindow* self, QKeyEvent* param1);
    friend void QQuickWindow_MousePressEvent(QQuickWindow* self, QMouseEvent* param1);
    friend void QQuickWindow_SuperMousePressEvent(QQuickWindow* self, QMouseEvent* param1);
    friend void QQuickWindow_MouseReleaseEvent(QQuickWindow* self, QMouseEvent* param1);
    friend void QQuickWindow_SuperMouseReleaseEvent(QQuickWindow* self, QMouseEvent* param1);
    friend void QQuickWindow_MouseDoubleClickEvent(QQuickWindow* self, QMouseEvent* param1);
    friend void QQuickWindow_SuperMouseDoubleClickEvent(QQuickWindow* self, QMouseEvent* param1);
    friend void QQuickWindow_MouseMoveEvent(QQuickWindow* self, QMouseEvent* param1);
    friend void QQuickWindow_SuperMouseMoveEvent(QQuickWindow* self, QMouseEvent* param1);
    friend void QQuickWindow_WheelEvent(QQuickWindow* self, QWheelEvent* param1);
    friend void QQuickWindow_SuperWheelEvent(QQuickWindow* self, QWheelEvent* param1);
    friend void QQuickWindow_TabletEvent(QQuickWindow* self, QTabletEvent* param1);
    friend void QQuickWindow_SuperTabletEvent(QQuickWindow* self, QTabletEvent* param1);
    friend void QQuickWindow_PaintEvent(QQuickWindow* self, QPaintEvent* param1);
    friend void QQuickWindow_SuperPaintEvent(QQuickWindow* self, QPaintEvent* param1);
    friend void QQuickWindow_MoveEvent(QQuickWindow* self, QMoveEvent* param1);
    friend void QQuickWindow_SuperMoveEvent(QQuickWindow* self, QMoveEvent* param1);
    friend void QQuickWindow_TouchEvent(QQuickWindow* self, QTouchEvent* param1);
    friend void QQuickWindow_SuperTouchEvent(QQuickWindow* self, QTouchEvent* param1);
    friend bool QQuickWindow_NativeEvent(QQuickWindow* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool QQuickWindow_SuperNativeEvent(QQuickWindow* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void QQuickWindow_TimerEvent(QQuickWindow* self, QTimerEvent* event);
    friend void QQuickWindow_SuperTimerEvent(QQuickWindow* self, QTimerEvent* event);
    friend void QQuickWindow_ChildEvent(QQuickWindow* self, QChildEvent* event);
    friend void QQuickWindow_SuperChildEvent(QQuickWindow* self, QChildEvent* event);
    friend void QQuickWindow_CustomEvent(QQuickWindow* self, QEvent* event);
    friend void QQuickWindow_SuperCustomEvent(QQuickWindow* self, QEvent* event);
    friend void QQuickWindow_ConnectNotify(QQuickWindow* self, const QMetaMethod* signal);
    friend void QQuickWindow_SuperConnectNotify(QQuickWindow* self, const QMetaMethod* signal);
    friend void QQuickWindow_DisconnectNotify(QQuickWindow* self, const QMetaMethod* signal);
    friend void QQuickWindow_SuperDisconnectNotify(QQuickWindow* self, const QMetaMethod* signal);
    friend void* QQuickWindow_ResolveInterface(const QQuickWindow* self, const char* name, int revision);
    friend void* QQuickWindow_SuperResolveInterface(const QQuickWindow* self, const char* name, int revision);
    friend QObject* QQuickWindow_Sender(const QQuickWindow* self);
    friend QObject* QQuickWindow_SuperSender(const QQuickWindow* self);
    friend int QQuickWindow_SenderSignalIndex(const QQuickWindow* self);
    friend int QQuickWindow_SuperSenderSignalIndex(const QQuickWindow* self);
    friend int QQuickWindow_Receivers(const QQuickWindow* self, const char* signal);
    friend int QQuickWindow_SuperReceivers(const QQuickWindow* self, const char* signal);
    friend bool QQuickWindow_IsSignalConnected(const QQuickWindow* self, const QMetaMethod* signal);
    friend bool QQuickWindow_SuperIsSignalConnected(const QQuickWindow* self, const QMetaMethod* signal);
};

#endif
