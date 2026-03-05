#pragma once
#ifndef SRCC_LIBVIRTUALQWINDOW_H
#define SRCC_LIBVIRTUALQWINDOW_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QWindow so that we can call protected methods
class VirtualQWindow final : public QWindow {

  public:
    // Virtual class boolean flag
    bool isVirtualQWindow = true;

    // Virtual class public types (including callbacks)
    using QWindow_MetaObject_Callback = QMetaObject* (*)();
    using QWindow_Metacast_Callback = void* (*)(QWindow*, const char*);
    using QWindow_Metacall_Callback = int (*)(QWindow*, int, int, void**);
    using QWindow_SurfaceType_Callback = int (*)();
    using QWindow_Format_Callback = QSurfaceFormat* (*)();
    using QWindow_Size_Callback = QSize* (*)();
    using QWindow_AccessibleRoot_Callback = QAccessibleInterface* (*)();
    using QWindow_FocusObject_Callback = QObject* (*)();
    using QWindow_ExposeEvent_Callback = void (*)(QWindow*, QExposeEvent*);
    using QWindow_ResizeEvent_Callback = void (*)(QWindow*, QResizeEvent*);
    using QWindow_PaintEvent_Callback = void (*)(QWindow*, QPaintEvent*);
    using QWindow_MoveEvent_Callback = void (*)(QWindow*, QMoveEvent*);
    using QWindow_FocusInEvent_Callback = void (*)(QWindow*, QFocusEvent*);
    using QWindow_FocusOutEvent_Callback = void (*)(QWindow*, QFocusEvent*);
    using QWindow_ShowEvent_Callback = void (*)(QWindow*, QShowEvent*);
    using QWindow_HideEvent_Callback = void (*)(QWindow*, QHideEvent*);
    using QWindow_CloseEvent_Callback = void (*)(QWindow*, QCloseEvent*);
    using QWindow_Event_Callback = bool (*)(QWindow*, QEvent*);
    using QWindow_KeyPressEvent_Callback = void (*)(QWindow*, QKeyEvent*);
    using QWindow_KeyReleaseEvent_Callback = void (*)(QWindow*, QKeyEvent*);
    using QWindow_MousePressEvent_Callback = void (*)(QWindow*, QMouseEvent*);
    using QWindow_MouseReleaseEvent_Callback = void (*)(QWindow*, QMouseEvent*);
    using QWindow_MouseDoubleClickEvent_Callback = void (*)(QWindow*, QMouseEvent*);
    using QWindow_MouseMoveEvent_Callback = void (*)(QWindow*, QMouseEvent*);
    using QWindow_WheelEvent_Callback = void (*)(QWindow*, QWheelEvent*);
    using QWindow_TouchEvent_Callback = void (*)(QWindow*, QTouchEvent*);
    using QWindow_TabletEvent_Callback = void (*)(QWindow*, QTabletEvent*);
    using QWindow_NativeEvent_Callback = bool (*)(QWindow*, libqt_string, void*, intptr_t*);
    using QWindow_EventFilter_Callback = bool (*)(QWindow*, QObject*, QEvent*);
    using QWindow_TimerEvent_Callback = void (*)(QWindow*, QTimerEvent*);
    using QWindow_ChildEvent_Callback = void (*)(QWindow*, QChildEvent*);
    using QWindow_CustomEvent_Callback = void (*)(QWindow*, QEvent*);
    using QWindow_ConnectNotify_Callback = void (*)(QWindow*, QMetaMethod*);
    using QWindow_DisconnectNotify_Callback = void (*)(QWindow*, QMetaMethod*);
    using QWindow_ResolveInterface_Callback = void* (*)(const QWindow*, const char*, int);
    using QWindow_Sender_Callback = QObject* (*)();
    using QWindow_SenderSignalIndex_Callback = int (*)();
    using QWindow_Receivers_Callback = int (*)(const QWindow*, const char*);
    using QWindow_IsSignalConnected_Callback = bool (*)(const QWindow*, QMetaMethod*);

  protected:
    // Instance callback storage
    QWindow_MetaObject_Callback qwindow_metaobject_callback = nullptr;
    QWindow_Metacast_Callback qwindow_metacast_callback = nullptr;
    QWindow_Metacall_Callback qwindow_metacall_callback = nullptr;
    QWindow_SurfaceType_Callback qwindow_surfacetype_callback = nullptr;
    QWindow_Format_Callback qwindow_format_callback = nullptr;
    QWindow_Size_Callback qwindow_size_callback = nullptr;
    QWindow_AccessibleRoot_Callback qwindow_accessibleroot_callback = nullptr;
    QWindow_FocusObject_Callback qwindow_focusobject_callback = nullptr;
    QWindow_ExposeEvent_Callback qwindow_exposeevent_callback = nullptr;
    QWindow_ResizeEvent_Callback qwindow_resizeevent_callback = nullptr;
    QWindow_PaintEvent_Callback qwindow_paintevent_callback = nullptr;
    QWindow_MoveEvent_Callback qwindow_moveevent_callback = nullptr;
    QWindow_FocusInEvent_Callback qwindow_focusinevent_callback = nullptr;
    QWindow_FocusOutEvent_Callback qwindow_focusoutevent_callback = nullptr;
    QWindow_ShowEvent_Callback qwindow_showevent_callback = nullptr;
    QWindow_HideEvent_Callback qwindow_hideevent_callback = nullptr;
    QWindow_CloseEvent_Callback qwindow_closeevent_callback = nullptr;
    QWindow_Event_Callback qwindow_event_callback = nullptr;
    QWindow_KeyPressEvent_Callback qwindow_keypressevent_callback = nullptr;
    QWindow_KeyReleaseEvent_Callback qwindow_keyreleaseevent_callback = nullptr;
    QWindow_MousePressEvent_Callback qwindow_mousepressevent_callback = nullptr;
    QWindow_MouseReleaseEvent_Callback qwindow_mousereleaseevent_callback = nullptr;
    QWindow_MouseDoubleClickEvent_Callback qwindow_mousedoubleclickevent_callback = nullptr;
    QWindow_MouseMoveEvent_Callback qwindow_mousemoveevent_callback = nullptr;
    QWindow_WheelEvent_Callback qwindow_wheelevent_callback = nullptr;
    QWindow_TouchEvent_Callback qwindow_touchevent_callback = nullptr;
    QWindow_TabletEvent_Callback qwindow_tabletevent_callback = nullptr;
    QWindow_NativeEvent_Callback qwindow_nativeevent_callback = nullptr;
    QWindow_EventFilter_Callback qwindow_eventfilter_callback = nullptr;
    QWindow_TimerEvent_Callback qwindow_timerevent_callback = nullptr;
    QWindow_ChildEvent_Callback qwindow_childevent_callback = nullptr;
    QWindow_CustomEvent_Callback qwindow_customevent_callback = nullptr;
    QWindow_ConnectNotify_Callback qwindow_connectnotify_callback = nullptr;
    QWindow_DisconnectNotify_Callback qwindow_disconnectnotify_callback = nullptr;
    QWindow_ResolveInterface_Callback qwindow_resolveinterface_callback = nullptr;
    QWindow_Sender_Callback qwindow_sender_callback = nullptr;
    QWindow_SenderSignalIndex_Callback qwindow_sendersignalindex_callback = nullptr;
    QWindow_Receivers_Callback qwindow_receivers_callback = nullptr;
    QWindow_IsSignalConnected_Callback qwindow_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qwindow_metaobject_isbase = false;
    mutable bool qwindow_metacast_isbase = false;
    mutable bool qwindow_metacall_isbase = false;
    mutable bool qwindow_surfacetype_isbase = false;
    mutable bool qwindow_format_isbase = false;
    mutable bool qwindow_size_isbase = false;
    mutable bool qwindow_accessibleroot_isbase = false;
    mutable bool qwindow_focusobject_isbase = false;
    mutable bool qwindow_exposeevent_isbase = false;
    mutable bool qwindow_resizeevent_isbase = false;
    mutable bool qwindow_paintevent_isbase = false;
    mutable bool qwindow_moveevent_isbase = false;
    mutable bool qwindow_focusinevent_isbase = false;
    mutable bool qwindow_focusoutevent_isbase = false;
    mutable bool qwindow_showevent_isbase = false;
    mutable bool qwindow_hideevent_isbase = false;
    mutable bool qwindow_closeevent_isbase = false;
    mutable bool qwindow_event_isbase = false;
    mutable bool qwindow_keypressevent_isbase = false;
    mutable bool qwindow_keyreleaseevent_isbase = false;
    mutable bool qwindow_mousepressevent_isbase = false;
    mutable bool qwindow_mousereleaseevent_isbase = false;
    mutable bool qwindow_mousedoubleclickevent_isbase = false;
    mutable bool qwindow_mousemoveevent_isbase = false;
    mutable bool qwindow_wheelevent_isbase = false;
    mutable bool qwindow_touchevent_isbase = false;
    mutable bool qwindow_tabletevent_isbase = false;
    mutable bool qwindow_nativeevent_isbase = false;
    mutable bool qwindow_eventfilter_isbase = false;
    mutable bool qwindow_timerevent_isbase = false;
    mutable bool qwindow_childevent_isbase = false;
    mutable bool qwindow_customevent_isbase = false;
    mutable bool qwindow_connectnotify_isbase = false;
    mutable bool qwindow_disconnectnotify_isbase = false;
    mutable bool qwindow_resolveinterface_isbase = false;
    mutable bool qwindow_sender_isbase = false;
    mutable bool qwindow_sendersignalindex_isbase = false;
    mutable bool qwindow_receivers_isbase = false;
    mutable bool qwindow_issignalconnected_isbase = false;

  public:
    VirtualQWindow() : QWindow() {};
    VirtualQWindow(QWindow* parent) : QWindow(parent) {};
    VirtualQWindow(QScreen* screen) : QWindow(screen) {};

    // Callback setters
    inline void setQWindow_MetaObject_Callback(QWindow_MetaObject_Callback cb) { qwindow_metaobject_callback = cb; }
    inline void setQWindow_Metacast_Callback(QWindow_Metacast_Callback cb) { qwindow_metacast_callback = cb; }
    inline void setQWindow_Metacall_Callback(QWindow_Metacall_Callback cb) { qwindow_metacall_callback = cb; }
    inline void setQWindow_SurfaceType_Callback(QWindow_SurfaceType_Callback cb) { qwindow_surfacetype_callback = cb; }
    inline void setQWindow_Format_Callback(QWindow_Format_Callback cb) { qwindow_format_callback = cb; }
    inline void setQWindow_Size_Callback(QWindow_Size_Callback cb) { qwindow_size_callback = cb; }
    inline void setQWindow_AccessibleRoot_Callback(QWindow_AccessibleRoot_Callback cb) { qwindow_accessibleroot_callback = cb; }
    inline void setQWindow_FocusObject_Callback(QWindow_FocusObject_Callback cb) { qwindow_focusobject_callback = cb; }
    inline void setQWindow_ExposeEvent_Callback(QWindow_ExposeEvent_Callback cb) { qwindow_exposeevent_callback = cb; }
    inline void setQWindow_ResizeEvent_Callback(QWindow_ResizeEvent_Callback cb) { qwindow_resizeevent_callback = cb; }
    inline void setQWindow_PaintEvent_Callback(QWindow_PaintEvent_Callback cb) { qwindow_paintevent_callback = cb; }
    inline void setQWindow_MoveEvent_Callback(QWindow_MoveEvent_Callback cb) { qwindow_moveevent_callback = cb; }
    inline void setQWindow_FocusInEvent_Callback(QWindow_FocusInEvent_Callback cb) { qwindow_focusinevent_callback = cb; }
    inline void setQWindow_FocusOutEvent_Callback(QWindow_FocusOutEvent_Callback cb) { qwindow_focusoutevent_callback = cb; }
    inline void setQWindow_ShowEvent_Callback(QWindow_ShowEvent_Callback cb) { qwindow_showevent_callback = cb; }
    inline void setQWindow_HideEvent_Callback(QWindow_HideEvent_Callback cb) { qwindow_hideevent_callback = cb; }
    inline void setQWindow_CloseEvent_Callback(QWindow_CloseEvent_Callback cb) { qwindow_closeevent_callback = cb; }
    inline void setQWindow_Event_Callback(QWindow_Event_Callback cb) { qwindow_event_callback = cb; }
    inline void setQWindow_KeyPressEvent_Callback(QWindow_KeyPressEvent_Callback cb) { qwindow_keypressevent_callback = cb; }
    inline void setQWindow_KeyReleaseEvent_Callback(QWindow_KeyReleaseEvent_Callback cb) { qwindow_keyreleaseevent_callback = cb; }
    inline void setQWindow_MousePressEvent_Callback(QWindow_MousePressEvent_Callback cb) { qwindow_mousepressevent_callback = cb; }
    inline void setQWindow_MouseReleaseEvent_Callback(QWindow_MouseReleaseEvent_Callback cb) { qwindow_mousereleaseevent_callback = cb; }
    inline void setQWindow_MouseDoubleClickEvent_Callback(QWindow_MouseDoubleClickEvent_Callback cb) { qwindow_mousedoubleclickevent_callback = cb; }
    inline void setQWindow_MouseMoveEvent_Callback(QWindow_MouseMoveEvent_Callback cb) { qwindow_mousemoveevent_callback = cb; }
    inline void setQWindow_WheelEvent_Callback(QWindow_WheelEvent_Callback cb) { qwindow_wheelevent_callback = cb; }
    inline void setQWindow_TouchEvent_Callback(QWindow_TouchEvent_Callback cb) { qwindow_touchevent_callback = cb; }
    inline void setQWindow_TabletEvent_Callback(QWindow_TabletEvent_Callback cb) { qwindow_tabletevent_callback = cb; }
    inline void setQWindow_NativeEvent_Callback(QWindow_NativeEvent_Callback cb) { qwindow_nativeevent_callback = cb; }
    inline void setQWindow_EventFilter_Callback(QWindow_EventFilter_Callback cb) { qwindow_eventfilter_callback = cb; }
    inline void setQWindow_TimerEvent_Callback(QWindow_TimerEvent_Callback cb) { qwindow_timerevent_callback = cb; }
    inline void setQWindow_ChildEvent_Callback(QWindow_ChildEvent_Callback cb) { qwindow_childevent_callback = cb; }
    inline void setQWindow_CustomEvent_Callback(QWindow_CustomEvent_Callback cb) { qwindow_customevent_callback = cb; }
    inline void setQWindow_ConnectNotify_Callback(QWindow_ConnectNotify_Callback cb) { qwindow_connectnotify_callback = cb; }
    inline void setQWindow_DisconnectNotify_Callback(QWindow_DisconnectNotify_Callback cb) { qwindow_disconnectnotify_callback = cb; }
    inline void setQWindow_ResolveInterface_Callback(QWindow_ResolveInterface_Callback cb) { qwindow_resolveinterface_callback = cb; }
    inline void setQWindow_Sender_Callback(QWindow_Sender_Callback cb) { qwindow_sender_callback = cb; }
    inline void setQWindow_SenderSignalIndex_Callback(QWindow_SenderSignalIndex_Callback cb) { qwindow_sendersignalindex_callback = cb; }
    inline void setQWindow_Receivers_Callback(QWindow_Receivers_Callback cb) { qwindow_receivers_callback = cb; }
    inline void setQWindow_IsSignalConnected_Callback(QWindow_IsSignalConnected_Callback cb) { qwindow_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQWindow_MetaObject_IsBase(bool value) const { qwindow_metaobject_isbase = value; }
    inline void setQWindow_Metacast_IsBase(bool value) const { qwindow_metacast_isbase = value; }
    inline void setQWindow_Metacall_IsBase(bool value) const { qwindow_metacall_isbase = value; }
    inline void setQWindow_SurfaceType_IsBase(bool value) const { qwindow_surfacetype_isbase = value; }
    inline void setQWindow_Format_IsBase(bool value) const { qwindow_format_isbase = value; }
    inline void setQWindow_Size_IsBase(bool value) const { qwindow_size_isbase = value; }
    inline void setQWindow_AccessibleRoot_IsBase(bool value) const { qwindow_accessibleroot_isbase = value; }
    inline void setQWindow_FocusObject_IsBase(bool value) const { qwindow_focusobject_isbase = value; }
    inline void setQWindow_ExposeEvent_IsBase(bool value) const { qwindow_exposeevent_isbase = value; }
    inline void setQWindow_ResizeEvent_IsBase(bool value) const { qwindow_resizeevent_isbase = value; }
    inline void setQWindow_PaintEvent_IsBase(bool value) const { qwindow_paintevent_isbase = value; }
    inline void setQWindow_MoveEvent_IsBase(bool value) const { qwindow_moveevent_isbase = value; }
    inline void setQWindow_FocusInEvent_IsBase(bool value) const { qwindow_focusinevent_isbase = value; }
    inline void setQWindow_FocusOutEvent_IsBase(bool value) const { qwindow_focusoutevent_isbase = value; }
    inline void setQWindow_ShowEvent_IsBase(bool value) const { qwindow_showevent_isbase = value; }
    inline void setQWindow_HideEvent_IsBase(bool value) const { qwindow_hideevent_isbase = value; }
    inline void setQWindow_CloseEvent_IsBase(bool value) const { qwindow_closeevent_isbase = value; }
    inline void setQWindow_Event_IsBase(bool value) const { qwindow_event_isbase = value; }
    inline void setQWindow_KeyPressEvent_IsBase(bool value) const { qwindow_keypressevent_isbase = value; }
    inline void setQWindow_KeyReleaseEvent_IsBase(bool value) const { qwindow_keyreleaseevent_isbase = value; }
    inline void setQWindow_MousePressEvent_IsBase(bool value) const { qwindow_mousepressevent_isbase = value; }
    inline void setQWindow_MouseReleaseEvent_IsBase(bool value) const { qwindow_mousereleaseevent_isbase = value; }
    inline void setQWindow_MouseDoubleClickEvent_IsBase(bool value) const { qwindow_mousedoubleclickevent_isbase = value; }
    inline void setQWindow_MouseMoveEvent_IsBase(bool value) const { qwindow_mousemoveevent_isbase = value; }
    inline void setQWindow_WheelEvent_IsBase(bool value) const { qwindow_wheelevent_isbase = value; }
    inline void setQWindow_TouchEvent_IsBase(bool value) const { qwindow_touchevent_isbase = value; }
    inline void setQWindow_TabletEvent_IsBase(bool value) const { qwindow_tabletevent_isbase = value; }
    inline void setQWindow_NativeEvent_IsBase(bool value) const { qwindow_nativeevent_isbase = value; }
    inline void setQWindow_EventFilter_IsBase(bool value) const { qwindow_eventfilter_isbase = value; }
    inline void setQWindow_TimerEvent_IsBase(bool value) const { qwindow_timerevent_isbase = value; }
    inline void setQWindow_ChildEvent_IsBase(bool value) const { qwindow_childevent_isbase = value; }
    inline void setQWindow_CustomEvent_IsBase(bool value) const { qwindow_customevent_isbase = value; }
    inline void setQWindow_ConnectNotify_IsBase(bool value) const { qwindow_connectnotify_isbase = value; }
    inline void setQWindow_DisconnectNotify_IsBase(bool value) const { qwindow_disconnectnotify_isbase = value; }
    inline void setQWindow_ResolveInterface_IsBase(bool value) const { qwindow_resolveinterface_isbase = value; }
    inline void setQWindow_Sender_IsBase(bool value) const { qwindow_sender_isbase = value; }
    inline void setQWindow_SenderSignalIndex_IsBase(bool value) const { qwindow_sendersignalindex_isbase = value; }
    inline void setQWindow_Receivers_IsBase(bool value) const { qwindow_receivers_isbase = value; }
    inline void setQWindow_IsSignalConnected_IsBase(bool value) const { qwindow_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qwindow_metaobject_isbase) {
            qwindow_metaobject_isbase = false;
            return QWindow::metaObject();
        }
        auto metaobject_cb = qwindow_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QWindow::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qwindow_metacast_isbase) {
            qwindow_metacast_isbase = false;
            return QWindow::qt_metacast(param1);
        }
        auto metacast_cb = qwindow_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QWindow::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qwindow_metacall_isbase) {
            qwindow_metacall_isbase = false;
            return QWindow::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qwindow_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QWindow::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSurface::SurfaceType surfaceType() const override {
        if (qwindow_surfacetype_isbase) {
            qwindow_surfacetype_isbase = false;
            return QWindow::surfaceType();
        }
        auto surfacetype_cb = qwindow_surfacetype_callback;
        if (surfacetype_cb) {
            int callback_ret = surfacetype_cb();
            return static_cast<QSurface::SurfaceType>(callback_ret);
        }
        return QWindow::surfaceType();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSurfaceFormat format() const override {
        if (qwindow_format_isbase) {
            qwindow_format_isbase = false;
            return QWindow::format();
        }
        auto format_cb = qwindow_format_callback;
        if (format_cb) {
            QSurfaceFormat* callback_ret = format_cb();
            return *callback_ret;
        }
        return QWindow::format();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize size() const override {
        if (qwindow_size_isbase) {
            qwindow_size_isbase = false;
            return QWindow::size();
        }
        auto size_cb = qwindow_size_callback;
        if (size_cb) {
            QSize* callback_ret = size_cb();
            return *callback_ret;
        }
        return QWindow::size();
    }

    // Virtual method for C ABI access and custom callback
    virtual QAccessibleInterface* accessibleRoot() const override {
        if (qwindow_accessibleroot_isbase) {
            qwindow_accessibleroot_isbase = false;
            return QWindow::accessibleRoot();
        }
        auto accessibleroot_cb = qwindow_accessibleroot_callback;
        if (accessibleroot_cb) {
            QAccessibleInterface* callback_ret = accessibleroot_cb();
            return callback_ret;
        }
        return QWindow::accessibleRoot();
    }

    // Virtual method for C ABI access and custom callback
    virtual QObject* focusObject() const override {
        if (qwindow_focusobject_isbase) {
            qwindow_focusobject_isbase = false;
            return QWindow::focusObject();
        }
        auto focusobject_cb = qwindow_focusobject_callback;
        if (focusobject_cb) {
            QObject* callback_ret = focusobject_cb();
            return callback_ret;
        }
        return QWindow::focusObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void exposeEvent(QExposeEvent* param1) override {
        if (qwindow_exposeevent_isbase) {
            qwindow_exposeevent_isbase = false;
            QWindow::exposeEvent(param1);
            return;
        }
        auto exposeevent_cb = qwindow_exposeevent_callback;
        if (exposeevent_cb) {
            QExposeEvent* cbval1 = param1;

            exposeevent_cb(this, cbval1);
            return;
        }
        QWindow::exposeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* param1) override {
        if (qwindow_resizeevent_isbase) {
            qwindow_resizeevent_isbase = false;
            QWindow::resizeEvent(param1);
            return;
        }
        auto resizeevent_cb = qwindow_resizeevent_callback;
        if (resizeevent_cb) {
            QResizeEvent* cbval1 = param1;

            resizeevent_cb(this, cbval1);
            return;
        }
        QWindow::resizeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* param1) override {
        if (qwindow_paintevent_isbase) {
            qwindow_paintevent_isbase = false;
            QWindow::paintEvent(param1);
            return;
        }
        auto paintevent_cb = qwindow_paintevent_callback;
        if (paintevent_cb) {
            QPaintEvent* cbval1 = param1;

            paintevent_cb(this, cbval1);
            return;
        }
        QWindow::paintEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* param1) override {
        if (qwindow_moveevent_isbase) {
            qwindow_moveevent_isbase = false;
            QWindow::moveEvent(param1);
            return;
        }
        auto moveevent_cb = qwindow_moveevent_callback;
        if (moveevent_cb) {
            QMoveEvent* cbval1 = param1;

            moveevent_cb(this, cbval1);
            return;
        }
        QWindow::moveEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* param1) override {
        if (qwindow_focusinevent_isbase) {
            qwindow_focusinevent_isbase = false;
            QWindow::focusInEvent(param1);
            return;
        }
        auto focusinevent_cb = qwindow_focusinevent_callback;
        if (focusinevent_cb) {
            QFocusEvent* cbval1 = param1;

            focusinevent_cb(this, cbval1);
            return;
        }
        QWindow::focusInEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* param1) override {
        if (qwindow_focusoutevent_isbase) {
            qwindow_focusoutevent_isbase = false;
            QWindow::focusOutEvent(param1);
            return;
        }
        auto focusoutevent_cb = qwindow_focusoutevent_callback;
        if (focusoutevent_cb) {
            QFocusEvent* cbval1 = param1;

            focusoutevent_cb(this, cbval1);
            return;
        }
        QWindow::focusOutEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* param1) override {
        if (qwindow_showevent_isbase) {
            qwindow_showevent_isbase = false;
            QWindow::showEvent(param1);
            return;
        }
        auto showevent_cb = qwindow_showevent_callback;
        if (showevent_cb) {
            QShowEvent* cbval1 = param1;

            showevent_cb(this, cbval1);
            return;
        }
        QWindow::showEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* param1) override {
        if (qwindow_hideevent_isbase) {
            qwindow_hideevent_isbase = false;
            QWindow::hideEvent(param1);
            return;
        }
        auto hideevent_cb = qwindow_hideevent_callback;
        if (hideevent_cb) {
            QHideEvent* cbval1 = param1;

            hideevent_cb(this, cbval1);
            return;
        }
        QWindow::hideEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* param1) override {
        if (qwindow_closeevent_isbase) {
            qwindow_closeevent_isbase = false;
            QWindow::closeEvent(param1);
            return;
        }
        auto closeevent_cb = qwindow_closeevent_callback;
        if (closeevent_cb) {
            QCloseEvent* cbval1 = param1;

            closeevent_cb(this, cbval1);
            return;
        }
        QWindow::closeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* param1) override {
        if (qwindow_event_isbase) {
            qwindow_event_isbase = false;
            return QWindow::event(param1);
        }
        auto event_cb = qwindow_event_callback;
        if (event_cb) {
            QEvent* cbval1 = param1;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QWindow::event(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* param1) override {
        if (qwindow_keypressevent_isbase) {
            qwindow_keypressevent_isbase = false;
            QWindow::keyPressEvent(param1);
            return;
        }
        auto keypressevent_cb = qwindow_keypressevent_callback;
        if (keypressevent_cb) {
            QKeyEvent* cbval1 = param1;

            keypressevent_cb(this, cbval1);
            return;
        }
        QWindow::keyPressEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* param1) override {
        if (qwindow_keyreleaseevent_isbase) {
            qwindow_keyreleaseevent_isbase = false;
            QWindow::keyReleaseEvent(param1);
            return;
        }
        auto keyreleaseevent_cb = qwindow_keyreleaseevent_callback;
        if (keyreleaseevent_cb) {
            QKeyEvent* cbval1 = param1;

            keyreleaseevent_cb(this, cbval1);
            return;
        }
        QWindow::keyReleaseEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* param1) override {
        if (qwindow_mousepressevent_isbase) {
            qwindow_mousepressevent_isbase = false;
            QWindow::mousePressEvent(param1);
            return;
        }
        auto mousepressevent_cb = qwindow_mousepressevent_callback;
        if (mousepressevent_cb) {
            QMouseEvent* cbval1 = param1;

            mousepressevent_cb(this, cbval1);
            return;
        }
        QWindow::mousePressEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* param1) override {
        if (qwindow_mousereleaseevent_isbase) {
            qwindow_mousereleaseevent_isbase = false;
            QWindow::mouseReleaseEvent(param1);
            return;
        }
        auto mousereleaseevent_cb = qwindow_mousereleaseevent_callback;
        if (mousereleaseevent_cb) {
            QMouseEvent* cbval1 = param1;

            mousereleaseevent_cb(this, cbval1);
            return;
        }
        QWindow::mouseReleaseEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* param1) override {
        if (qwindow_mousedoubleclickevent_isbase) {
            qwindow_mousedoubleclickevent_isbase = false;
            QWindow::mouseDoubleClickEvent(param1);
            return;
        }
        auto mousedoubleclickevent_cb = qwindow_mousedoubleclickevent_callback;
        if (mousedoubleclickevent_cb) {
            QMouseEvent* cbval1 = param1;

            mousedoubleclickevent_cb(this, cbval1);
            return;
        }
        QWindow::mouseDoubleClickEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* param1) override {
        if (qwindow_mousemoveevent_isbase) {
            qwindow_mousemoveevent_isbase = false;
            QWindow::mouseMoveEvent(param1);
            return;
        }
        auto mousemoveevent_cb = qwindow_mousemoveevent_callback;
        if (mousemoveevent_cb) {
            QMouseEvent* cbval1 = param1;

            mousemoveevent_cb(this, cbval1);
            return;
        }
        QWindow::mouseMoveEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* param1) override {
        if (qwindow_wheelevent_isbase) {
            qwindow_wheelevent_isbase = false;
            QWindow::wheelEvent(param1);
            return;
        }
        auto wheelevent_cb = qwindow_wheelevent_callback;
        if (wheelevent_cb) {
            QWheelEvent* cbval1 = param1;

            wheelevent_cb(this, cbval1);
            return;
        }
        QWindow::wheelEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void touchEvent(QTouchEvent* param1) override {
        if (qwindow_touchevent_isbase) {
            qwindow_touchevent_isbase = false;
            QWindow::touchEvent(param1);
            return;
        }
        auto touchevent_cb = qwindow_touchevent_callback;
        if (touchevent_cb) {
            QTouchEvent* cbval1 = param1;

            touchevent_cb(this, cbval1);
            return;
        }
        QWindow::touchEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* param1) override {
        if (qwindow_tabletevent_isbase) {
            qwindow_tabletevent_isbase = false;
            QWindow::tabletEvent(param1);
            return;
        }
        auto tabletevent_cb = qwindow_tabletevent_callback;
        if (tabletevent_cb) {
            QTabletEvent* cbval1 = param1;

            tabletevent_cb(this, cbval1);
            return;
        }
        QWindow::tabletEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qwindow_nativeevent_isbase) {
            qwindow_nativeevent_isbase = false;
            return QWindow::nativeEvent(eventType, message, result);
        }
        auto nativeevent_cb = qwindow_nativeevent_callback;
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
        return QWindow::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qwindow_eventfilter_isbase) {
            qwindow_eventfilter_isbase = false;
            return QWindow::eventFilter(watched, event);
        }
        auto eventfilter_cb = qwindow_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QWindow::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qwindow_timerevent_isbase) {
            qwindow_timerevent_isbase = false;
            QWindow::timerEvent(event);
            return;
        }
        auto timerevent_cb = qwindow_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        QWindow::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qwindow_childevent_isbase) {
            qwindow_childevent_isbase = false;
            QWindow::childEvent(event);
            return;
        }
        auto childevent_cb = qwindow_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        QWindow::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qwindow_customevent_isbase) {
            qwindow_customevent_isbase = false;
            QWindow::customEvent(event);
            return;
        }
        auto customevent_cb = qwindow_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        QWindow::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qwindow_connectnotify_isbase) {
            qwindow_connectnotify_isbase = false;
            QWindow::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qwindow_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        QWindow::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qwindow_disconnectnotify_isbase) {
            qwindow_disconnectnotify_isbase = false;
            QWindow::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qwindow_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        QWindow::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    void* resolveInterface(const char* name, int revision) const {
        if (qwindow_resolveinterface_isbase) {
            qwindow_resolveinterface_isbase = false;
            return QWindow::resolveInterface(name, revision);
        }
        auto resolveinterface_cb = qwindow_resolveinterface_callback;
        if (resolveinterface_cb) {
            const char* cbval1 = (const char*)name;
            int cbval2 = revision;

            void* callback_ret = resolveinterface_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QWindow::resolveInterface(name, revision);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qwindow_sender_isbase) {
            qwindow_sender_isbase = false;
            return QWindow::sender();
        }
        auto sender_cb = qwindow_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QWindow::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qwindow_sendersignalindex_isbase) {
            qwindow_sendersignalindex_isbase = false;
            return QWindow::senderSignalIndex();
        }
        auto sendersignalindex_cb = qwindow_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QWindow::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qwindow_receivers_isbase) {
            qwindow_receivers_isbase = false;
            return QWindow::receivers(signal);
        }
        auto receivers_cb = qwindow_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QWindow::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qwindow_issignalconnected_isbase) {
            qwindow_issignalconnected_isbase = false;
            return QWindow::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qwindow_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QWindow::isSignalConnected(signal);
    }

    // Friend functions
    friend void QWindow_ExposeEvent(QWindow* self, QExposeEvent* param1);
    friend void QWindow_SuperExposeEvent(QWindow* self, QExposeEvent* param1);
    friend void QWindow_ResizeEvent(QWindow* self, QResizeEvent* param1);
    friend void QWindow_SuperResizeEvent(QWindow* self, QResizeEvent* param1);
    friend void QWindow_PaintEvent(QWindow* self, QPaintEvent* param1);
    friend void QWindow_SuperPaintEvent(QWindow* self, QPaintEvent* param1);
    friend void QWindow_MoveEvent(QWindow* self, QMoveEvent* param1);
    friend void QWindow_SuperMoveEvent(QWindow* self, QMoveEvent* param1);
    friend void QWindow_FocusInEvent(QWindow* self, QFocusEvent* param1);
    friend void QWindow_SuperFocusInEvent(QWindow* self, QFocusEvent* param1);
    friend void QWindow_FocusOutEvent(QWindow* self, QFocusEvent* param1);
    friend void QWindow_SuperFocusOutEvent(QWindow* self, QFocusEvent* param1);
    friend void QWindow_ShowEvent(QWindow* self, QShowEvent* param1);
    friend void QWindow_SuperShowEvent(QWindow* self, QShowEvent* param1);
    friend void QWindow_HideEvent(QWindow* self, QHideEvent* param1);
    friend void QWindow_SuperHideEvent(QWindow* self, QHideEvent* param1);
    friend void QWindow_CloseEvent(QWindow* self, QCloseEvent* param1);
    friend void QWindow_SuperCloseEvent(QWindow* self, QCloseEvent* param1);
    friend bool QWindow_Event(QWindow* self, QEvent* param1);
    friend bool QWindow_SuperEvent(QWindow* self, QEvent* param1);
    friend void QWindow_KeyPressEvent(QWindow* self, QKeyEvent* param1);
    friend void QWindow_SuperKeyPressEvent(QWindow* self, QKeyEvent* param1);
    friend void QWindow_KeyReleaseEvent(QWindow* self, QKeyEvent* param1);
    friend void QWindow_SuperKeyReleaseEvent(QWindow* self, QKeyEvent* param1);
    friend void QWindow_MousePressEvent(QWindow* self, QMouseEvent* param1);
    friend void QWindow_SuperMousePressEvent(QWindow* self, QMouseEvent* param1);
    friend void QWindow_MouseReleaseEvent(QWindow* self, QMouseEvent* param1);
    friend void QWindow_SuperMouseReleaseEvent(QWindow* self, QMouseEvent* param1);
    friend void QWindow_MouseDoubleClickEvent(QWindow* self, QMouseEvent* param1);
    friend void QWindow_SuperMouseDoubleClickEvent(QWindow* self, QMouseEvent* param1);
    friend void QWindow_MouseMoveEvent(QWindow* self, QMouseEvent* param1);
    friend void QWindow_SuperMouseMoveEvent(QWindow* self, QMouseEvent* param1);
    friend void QWindow_WheelEvent(QWindow* self, QWheelEvent* param1);
    friend void QWindow_SuperWheelEvent(QWindow* self, QWheelEvent* param1);
    friend void QWindow_TouchEvent(QWindow* self, QTouchEvent* param1);
    friend void QWindow_SuperTouchEvent(QWindow* self, QTouchEvent* param1);
    friend void QWindow_TabletEvent(QWindow* self, QTabletEvent* param1);
    friend void QWindow_SuperTabletEvent(QWindow* self, QTabletEvent* param1);
    friend bool QWindow_NativeEvent(QWindow* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool QWindow_SuperNativeEvent(QWindow* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void QWindow_TimerEvent(QWindow* self, QTimerEvent* event);
    friend void QWindow_SuperTimerEvent(QWindow* self, QTimerEvent* event);
    friend void QWindow_ChildEvent(QWindow* self, QChildEvent* event);
    friend void QWindow_SuperChildEvent(QWindow* self, QChildEvent* event);
    friend void QWindow_CustomEvent(QWindow* self, QEvent* event);
    friend void QWindow_SuperCustomEvent(QWindow* self, QEvent* event);
    friend void QWindow_ConnectNotify(QWindow* self, const QMetaMethod* signal);
    friend void QWindow_SuperConnectNotify(QWindow* self, const QMetaMethod* signal);
    friend void QWindow_DisconnectNotify(QWindow* self, const QMetaMethod* signal);
    friend void QWindow_SuperDisconnectNotify(QWindow* self, const QMetaMethod* signal);
    friend void* QWindow_ResolveInterface(const QWindow* self, const char* name, int revision);
    friend void* QWindow_SuperResolveInterface(const QWindow* self, const char* name, int revision);
    friend QObject* QWindow_Sender(const QWindow* self);
    friend QObject* QWindow_SuperSender(const QWindow* self);
    friend int QWindow_SenderSignalIndex(const QWindow* self);
    friend int QWindow_SuperSenderSignalIndex(const QWindow* self);
    friend int QWindow_Receivers(const QWindow* self, const char* signal);
    friend int QWindow_SuperReceivers(const QWindow* self, const char* signal);
    friend bool QWindow_IsSignalConnected(const QWindow* self, const QMetaMethod* signal);
    friend bool QWindow_SuperIsSignalConnected(const QWindow* self, const QMetaMethod* signal);
};

#endif
