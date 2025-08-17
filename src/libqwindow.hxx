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

    ~VirtualQWindow() {
        qwindow_metacall_callback = nullptr;
        qwindow_surfacetype_callback = nullptr;
        qwindow_format_callback = nullptr;
        qwindow_size_callback = nullptr;
        qwindow_accessibleroot_callback = nullptr;
        qwindow_focusobject_callback = nullptr;
        qwindow_exposeevent_callback = nullptr;
        qwindow_resizeevent_callback = nullptr;
        qwindow_paintevent_callback = nullptr;
        qwindow_moveevent_callback = nullptr;
        qwindow_focusinevent_callback = nullptr;
        qwindow_focusoutevent_callback = nullptr;
        qwindow_showevent_callback = nullptr;
        qwindow_hideevent_callback = nullptr;
        qwindow_closeevent_callback = nullptr;
        qwindow_event_callback = nullptr;
        qwindow_keypressevent_callback = nullptr;
        qwindow_keyreleaseevent_callback = nullptr;
        qwindow_mousepressevent_callback = nullptr;
        qwindow_mousereleaseevent_callback = nullptr;
        qwindow_mousedoubleclickevent_callback = nullptr;
        qwindow_mousemoveevent_callback = nullptr;
        qwindow_wheelevent_callback = nullptr;
        qwindow_touchevent_callback = nullptr;
        qwindow_tabletevent_callback = nullptr;
        qwindow_nativeevent_callback = nullptr;
        qwindow_eventfilter_callback = nullptr;
        qwindow_timerevent_callback = nullptr;
        qwindow_childevent_callback = nullptr;
        qwindow_customevent_callback = nullptr;
        qwindow_connectnotify_callback = nullptr;
        qwindow_disconnectnotify_callback = nullptr;
        qwindow_resolveinterface_callback = nullptr;
        qwindow_sender_callback = nullptr;
        qwindow_sendersignalindex_callback = nullptr;
        qwindow_receivers_callback = nullptr;
        qwindow_issignalconnected_callback = nullptr;
    }

    // Callback setters
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
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qwindow_metacall_isbase) {
            qwindow_metacall_isbase = false;
            return QWindow::qt_metacall(param1, param2, param3);
        } else if (qwindow_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qwindow_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QWindow::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSurface::SurfaceType surfaceType() const override {
        if (qwindow_surfacetype_isbase) {
            qwindow_surfacetype_isbase = false;
            return QWindow::surfaceType();
        } else if (qwindow_surfacetype_callback != nullptr) {
            int callback_ret = qwindow_surfacetype_callback();
            return static_cast<QSurface::SurfaceType>(callback_ret);
        } else {
            return QWindow::surfaceType();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSurfaceFormat format() const override {
        if (qwindow_format_isbase) {
            qwindow_format_isbase = false;
            return QWindow::format();
        } else if (qwindow_format_callback != nullptr) {
            QSurfaceFormat* callback_ret = qwindow_format_callback();
            return *callback_ret;
        } else {
            return QWindow::format();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize size() const override {
        if (qwindow_size_isbase) {
            qwindow_size_isbase = false;
            return QWindow::size();
        } else if (qwindow_size_callback != nullptr) {
            QSize* callback_ret = qwindow_size_callback();
            return *callback_ret;
        } else {
            return QWindow::size();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QAccessibleInterface* accessibleRoot() const override {
        if (qwindow_accessibleroot_isbase) {
            qwindow_accessibleroot_isbase = false;
            return QWindow::accessibleRoot();
        } else if (qwindow_accessibleroot_callback != nullptr) {
            QAccessibleInterface* callback_ret = qwindow_accessibleroot_callback();
            return callback_ret;
        } else {
            return QWindow::accessibleRoot();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QObject* focusObject() const override {
        if (qwindow_focusobject_isbase) {
            qwindow_focusobject_isbase = false;
            return QWindow::focusObject();
        } else if (qwindow_focusobject_callback != nullptr) {
            QObject* callback_ret = qwindow_focusobject_callback();
            return callback_ret;
        } else {
            return QWindow::focusObject();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void exposeEvent(QExposeEvent* param1) override {
        if (qwindow_exposeevent_isbase) {
            qwindow_exposeevent_isbase = false;
            QWindow::exposeEvent(param1);
        } else if (qwindow_exposeevent_callback != nullptr) {
            QExposeEvent* cbval1 = param1;

            qwindow_exposeevent_callback(this, cbval1);
        } else {
            QWindow::exposeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* param1) override {
        if (qwindow_resizeevent_isbase) {
            qwindow_resizeevent_isbase = false;
            QWindow::resizeEvent(param1);
        } else if (qwindow_resizeevent_callback != nullptr) {
            QResizeEvent* cbval1 = param1;

            qwindow_resizeevent_callback(this, cbval1);
        } else {
            QWindow::resizeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* param1) override {
        if (qwindow_paintevent_isbase) {
            qwindow_paintevent_isbase = false;
            QWindow::paintEvent(param1);
        } else if (qwindow_paintevent_callback != nullptr) {
            QPaintEvent* cbval1 = param1;

            qwindow_paintevent_callback(this, cbval1);
        } else {
            QWindow::paintEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* param1) override {
        if (qwindow_moveevent_isbase) {
            qwindow_moveevent_isbase = false;
            QWindow::moveEvent(param1);
        } else if (qwindow_moveevent_callback != nullptr) {
            QMoveEvent* cbval1 = param1;

            qwindow_moveevent_callback(this, cbval1);
        } else {
            QWindow::moveEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* param1) override {
        if (qwindow_focusinevent_isbase) {
            qwindow_focusinevent_isbase = false;
            QWindow::focusInEvent(param1);
        } else if (qwindow_focusinevent_callback != nullptr) {
            QFocusEvent* cbval1 = param1;

            qwindow_focusinevent_callback(this, cbval1);
        } else {
            QWindow::focusInEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* param1) override {
        if (qwindow_focusoutevent_isbase) {
            qwindow_focusoutevent_isbase = false;
            QWindow::focusOutEvent(param1);
        } else if (qwindow_focusoutevent_callback != nullptr) {
            QFocusEvent* cbval1 = param1;

            qwindow_focusoutevent_callback(this, cbval1);
        } else {
            QWindow::focusOutEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* param1) override {
        if (qwindow_showevent_isbase) {
            qwindow_showevent_isbase = false;
            QWindow::showEvent(param1);
        } else if (qwindow_showevent_callback != nullptr) {
            QShowEvent* cbval1 = param1;

            qwindow_showevent_callback(this, cbval1);
        } else {
            QWindow::showEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* param1) override {
        if (qwindow_hideevent_isbase) {
            qwindow_hideevent_isbase = false;
            QWindow::hideEvent(param1);
        } else if (qwindow_hideevent_callback != nullptr) {
            QHideEvent* cbval1 = param1;

            qwindow_hideevent_callback(this, cbval1);
        } else {
            QWindow::hideEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* param1) override {
        if (qwindow_closeevent_isbase) {
            qwindow_closeevent_isbase = false;
            QWindow::closeEvent(param1);
        } else if (qwindow_closeevent_callback != nullptr) {
            QCloseEvent* cbval1 = param1;

            qwindow_closeevent_callback(this, cbval1);
        } else {
            QWindow::closeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* param1) override {
        if (qwindow_event_isbase) {
            qwindow_event_isbase = false;
            return QWindow::event(param1);
        } else if (qwindow_event_callback != nullptr) {
            QEvent* cbval1 = param1;

            bool callback_ret = qwindow_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QWindow::event(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* param1) override {
        if (qwindow_keypressevent_isbase) {
            qwindow_keypressevent_isbase = false;
            QWindow::keyPressEvent(param1);
        } else if (qwindow_keypressevent_callback != nullptr) {
            QKeyEvent* cbval1 = param1;

            qwindow_keypressevent_callback(this, cbval1);
        } else {
            QWindow::keyPressEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* param1) override {
        if (qwindow_keyreleaseevent_isbase) {
            qwindow_keyreleaseevent_isbase = false;
            QWindow::keyReleaseEvent(param1);
        } else if (qwindow_keyreleaseevent_callback != nullptr) {
            QKeyEvent* cbval1 = param1;

            qwindow_keyreleaseevent_callback(this, cbval1);
        } else {
            QWindow::keyReleaseEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* param1) override {
        if (qwindow_mousepressevent_isbase) {
            qwindow_mousepressevent_isbase = false;
            QWindow::mousePressEvent(param1);
        } else if (qwindow_mousepressevent_callback != nullptr) {
            QMouseEvent* cbval1 = param1;

            qwindow_mousepressevent_callback(this, cbval1);
        } else {
            QWindow::mousePressEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* param1) override {
        if (qwindow_mousereleaseevent_isbase) {
            qwindow_mousereleaseevent_isbase = false;
            QWindow::mouseReleaseEvent(param1);
        } else if (qwindow_mousereleaseevent_callback != nullptr) {
            QMouseEvent* cbval1 = param1;

            qwindow_mousereleaseevent_callback(this, cbval1);
        } else {
            QWindow::mouseReleaseEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* param1) override {
        if (qwindow_mousedoubleclickevent_isbase) {
            qwindow_mousedoubleclickevent_isbase = false;
            QWindow::mouseDoubleClickEvent(param1);
        } else if (qwindow_mousedoubleclickevent_callback != nullptr) {
            QMouseEvent* cbval1 = param1;

            qwindow_mousedoubleclickevent_callback(this, cbval1);
        } else {
            QWindow::mouseDoubleClickEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* param1) override {
        if (qwindow_mousemoveevent_isbase) {
            qwindow_mousemoveevent_isbase = false;
            QWindow::mouseMoveEvent(param1);
        } else if (qwindow_mousemoveevent_callback != nullptr) {
            QMouseEvent* cbval1 = param1;

            qwindow_mousemoveevent_callback(this, cbval1);
        } else {
            QWindow::mouseMoveEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* param1) override {
        if (qwindow_wheelevent_isbase) {
            qwindow_wheelevent_isbase = false;
            QWindow::wheelEvent(param1);
        } else if (qwindow_wheelevent_callback != nullptr) {
            QWheelEvent* cbval1 = param1;

            qwindow_wheelevent_callback(this, cbval1);
        } else {
            QWindow::wheelEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void touchEvent(QTouchEvent* param1) override {
        if (qwindow_touchevent_isbase) {
            qwindow_touchevent_isbase = false;
            QWindow::touchEvent(param1);
        } else if (qwindow_touchevent_callback != nullptr) {
            QTouchEvent* cbval1 = param1;

            qwindow_touchevent_callback(this, cbval1);
        } else {
            QWindow::touchEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* param1) override {
        if (qwindow_tabletevent_isbase) {
            qwindow_tabletevent_isbase = false;
            QWindow::tabletEvent(param1);
        } else if (qwindow_tabletevent_callback != nullptr) {
            QTabletEvent* cbval1 = param1;

            qwindow_tabletevent_callback(this, cbval1);
        } else {
            QWindow::tabletEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qwindow_nativeevent_isbase) {
            qwindow_nativeevent_isbase = false;
            return QWindow::nativeEvent(eventType, message, result);
        } else if (qwindow_nativeevent_callback != nullptr) {
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

            bool callback_ret = qwindow_nativeevent_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return QWindow::nativeEvent(eventType, message, result);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qwindow_eventfilter_isbase) {
            qwindow_eventfilter_isbase = false;
            return QWindow::eventFilter(watched, event);
        } else if (qwindow_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qwindow_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QWindow::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qwindow_timerevent_isbase) {
            qwindow_timerevent_isbase = false;
            QWindow::timerEvent(event);
        } else if (qwindow_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qwindow_timerevent_callback(this, cbval1);
        } else {
            QWindow::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qwindow_childevent_isbase) {
            qwindow_childevent_isbase = false;
            QWindow::childEvent(event);
        } else if (qwindow_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qwindow_childevent_callback(this, cbval1);
        } else {
            QWindow::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qwindow_customevent_isbase) {
            qwindow_customevent_isbase = false;
            QWindow::customEvent(event);
        } else if (qwindow_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qwindow_customevent_callback(this, cbval1);
        } else {
            QWindow::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qwindow_connectnotify_isbase) {
            qwindow_connectnotify_isbase = false;
            QWindow::connectNotify(signal);
        } else if (qwindow_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qwindow_connectnotify_callback(this, cbval1);
        } else {
            QWindow::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qwindow_disconnectnotify_isbase) {
            qwindow_disconnectnotify_isbase = false;
            QWindow::disconnectNotify(signal);
        } else if (qwindow_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qwindow_disconnectnotify_callback(this, cbval1);
        } else {
            QWindow::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void* resolveInterface(const char* name, int revision) const {
        if (qwindow_resolveinterface_isbase) {
            qwindow_resolveinterface_isbase = false;
            return QWindow::resolveInterface(name, revision);
        } else if (qwindow_resolveinterface_callback != nullptr) {
            const char* cbval1 = (const char*)name;
            int cbval2 = revision;

            void* callback_ret = qwindow_resolveinterface_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QWindow::resolveInterface(name, revision);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qwindow_sender_isbase) {
            qwindow_sender_isbase = false;
            return QWindow::sender();
        } else if (qwindow_sender_callback != nullptr) {
            QObject* callback_ret = qwindow_sender_callback();
            return callback_ret;
        } else {
            return QWindow::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qwindow_sendersignalindex_isbase) {
            qwindow_sendersignalindex_isbase = false;
            return QWindow::senderSignalIndex();
        } else if (qwindow_sendersignalindex_callback != nullptr) {
            int callback_ret = qwindow_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QWindow::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qwindow_receivers_isbase) {
            qwindow_receivers_isbase = false;
            return QWindow::receivers(signal);
        } else if (qwindow_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qwindow_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QWindow::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qwindow_issignalconnected_isbase) {
            qwindow_issignalconnected_isbase = false;
            return QWindow::isSignalConnected(signal);
        } else if (qwindow_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qwindow_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QWindow::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void QWindow_ExposeEvent(QWindow* self, QExposeEvent* param1);
    friend void QWindow_QBaseExposeEvent(QWindow* self, QExposeEvent* param1);
    friend void QWindow_ResizeEvent(QWindow* self, QResizeEvent* param1);
    friend void QWindow_QBaseResizeEvent(QWindow* self, QResizeEvent* param1);
    friend void QWindow_PaintEvent(QWindow* self, QPaintEvent* param1);
    friend void QWindow_QBasePaintEvent(QWindow* self, QPaintEvent* param1);
    friend void QWindow_MoveEvent(QWindow* self, QMoveEvent* param1);
    friend void QWindow_QBaseMoveEvent(QWindow* self, QMoveEvent* param1);
    friend void QWindow_FocusInEvent(QWindow* self, QFocusEvent* param1);
    friend void QWindow_QBaseFocusInEvent(QWindow* self, QFocusEvent* param1);
    friend void QWindow_FocusOutEvent(QWindow* self, QFocusEvent* param1);
    friend void QWindow_QBaseFocusOutEvent(QWindow* self, QFocusEvent* param1);
    friend void QWindow_ShowEvent(QWindow* self, QShowEvent* param1);
    friend void QWindow_QBaseShowEvent(QWindow* self, QShowEvent* param1);
    friend void QWindow_HideEvent(QWindow* self, QHideEvent* param1);
    friend void QWindow_QBaseHideEvent(QWindow* self, QHideEvent* param1);
    friend void QWindow_CloseEvent(QWindow* self, QCloseEvent* param1);
    friend void QWindow_QBaseCloseEvent(QWindow* self, QCloseEvent* param1);
    friend bool QWindow_Event(QWindow* self, QEvent* param1);
    friend bool QWindow_QBaseEvent(QWindow* self, QEvent* param1);
    friend void QWindow_KeyPressEvent(QWindow* self, QKeyEvent* param1);
    friend void QWindow_QBaseKeyPressEvent(QWindow* self, QKeyEvent* param1);
    friend void QWindow_KeyReleaseEvent(QWindow* self, QKeyEvent* param1);
    friend void QWindow_QBaseKeyReleaseEvent(QWindow* self, QKeyEvent* param1);
    friend void QWindow_MousePressEvent(QWindow* self, QMouseEvent* param1);
    friend void QWindow_QBaseMousePressEvent(QWindow* self, QMouseEvent* param1);
    friend void QWindow_MouseReleaseEvent(QWindow* self, QMouseEvent* param1);
    friend void QWindow_QBaseMouseReleaseEvent(QWindow* self, QMouseEvent* param1);
    friend void QWindow_MouseDoubleClickEvent(QWindow* self, QMouseEvent* param1);
    friend void QWindow_QBaseMouseDoubleClickEvent(QWindow* self, QMouseEvent* param1);
    friend void QWindow_MouseMoveEvent(QWindow* self, QMouseEvent* param1);
    friend void QWindow_QBaseMouseMoveEvent(QWindow* self, QMouseEvent* param1);
    friend void QWindow_WheelEvent(QWindow* self, QWheelEvent* param1);
    friend void QWindow_QBaseWheelEvent(QWindow* self, QWheelEvent* param1);
    friend void QWindow_TouchEvent(QWindow* self, QTouchEvent* param1);
    friend void QWindow_QBaseTouchEvent(QWindow* self, QTouchEvent* param1);
    friend void QWindow_TabletEvent(QWindow* self, QTabletEvent* param1);
    friend void QWindow_QBaseTabletEvent(QWindow* self, QTabletEvent* param1);
    friend bool QWindow_NativeEvent(QWindow* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool QWindow_QBaseNativeEvent(QWindow* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void QWindow_TimerEvent(QWindow* self, QTimerEvent* event);
    friend void QWindow_QBaseTimerEvent(QWindow* self, QTimerEvent* event);
    friend void QWindow_ChildEvent(QWindow* self, QChildEvent* event);
    friend void QWindow_QBaseChildEvent(QWindow* self, QChildEvent* event);
    friend void QWindow_CustomEvent(QWindow* self, QEvent* event);
    friend void QWindow_QBaseCustomEvent(QWindow* self, QEvent* event);
    friend void QWindow_ConnectNotify(QWindow* self, const QMetaMethod* signal);
    friend void QWindow_QBaseConnectNotify(QWindow* self, const QMetaMethod* signal);
    friend void QWindow_DisconnectNotify(QWindow* self, const QMetaMethod* signal);
    friend void QWindow_QBaseDisconnectNotify(QWindow* self, const QMetaMethod* signal);
    friend void* QWindow_ResolveInterface(const QWindow* self, const char* name, int revision);
    friend void* QWindow_QBaseResolveInterface(const QWindow* self, const char* name, int revision);
    friend QObject* QWindow_Sender(const QWindow* self);
    friend QObject* QWindow_QBaseSender(const QWindow* self);
    friend int QWindow_SenderSignalIndex(const QWindow* self);
    friend int QWindow_QBaseSenderSignalIndex(const QWindow* self);
    friend int QWindow_Receivers(const QWindow* self, const char* signal);
    friend int QWindow_QBaseReceivers(const QWindow* self, const char* signal);
    friend bool QWindow_IsSignalConnected(const QWindow* self, const QMetaMethod* signal);
    friend bool QWindow_QBaseIsSignalConnected(const QWindow* self, const QMetaMethod* signal);
};

#endif
