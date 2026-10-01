#pragma once
#ifndef LIBQGUIAPPLICATION_PLATFORM_HXX
#define LIBQGUIAPPLICATION_PLATFORM_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#if QT_FEATURE_xcb
typedef struct _XDisplay Display;
struct xcb_connection_t;
#endif

#if QT_FEATURE_wayland
struct wl_compositor;
struct wl_display;
struct wl_keyboard;
struct wl_pointer;
struct wl_seat;
struct wl_touch;
struct xkb_context;
#endif

// This class is a subclass of QNativeInterface::QX11Application
class VirtualQNativeInterfaceQX11Application : public QNativeInterface::QX11Application {
  public:
    // Virtual class public types (including callbacks and access types)
    using QNativeInterface__QX11Application_Display_Callback = Display* (*)(const QNativeInterface__QX11Application*);
    using QNativeInterface__QX11Application_Connection_Callback = xcb_connection_t* (*)(const QNativeInterface__QX11Application*);

    // Instance callback storage
    QNativeInterface__QX11Application_Display_Callback qnativeinterface__qx11application_display_callback = nullptr;
    QNativeInterface__QX11Application_Connection_Callback qnativeinterface__qx11application_connection_callback = nullptr;

    VirtualQNativeInterfaceQX11Application() : QNativeInterface::QX11Application() {};

    // Virtual method for C ABI access and custom callback
    virtual Display* display() const override {
        if (qnativeinterface__qx11application_display_callback) {
            Display* callback_ret = qnativeinterface__qx11application_display_callback(this);
            return callback_ret;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QNativeInterface::QX11Application::display called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual xcb_connection_t* connection() const override {
        if (qnativeinterface__qx11application_connection_callback) {
            xcb_connection_t* callback_ret = qnativeinterface__qx11application_connection_callback(this);
            return callback_ret;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QNativeInterface::QX11Application::connection called without being implemented");
    }
};

// This class is a subclass of QNativeInterface::QWaylandApplication
class VirtualQNativeInterfaceQWaylandApplication : public QNativeInterface::QWaylandApplication {
  public:
    // Virtual class public types (including callbacks and access types)
    using QNativeInterface__QWaylandApplication_Display_Callback = wl_display* (*)(const QNativeInterface__QWaylandApplication*);
    using QNativeInterface__QWaylandApplication_Compositor_Callback = wl_compositor* (*)(const QNativeInterface__QWaylandApplication*);
    using QNativeInterface__QWaylandApplication_Seat_Callback = wl_seat* (*)(const QNativeInterface__QWaylandApplication*);
    using QNativeInterface__QWaylandApplication_Keyboard_Callback = wl_keyboard* (*)(const QNativeInterface__QWaylandApplication*);
    using QNativeInterface__QWaylandApplication_Pointer_Callback = wl_pointer* (*)(const QNativeInterface__QWaylandApplication*);
    using QNativeInterface__QWaylandApplication_Touch_Callback = wl_touch* (*)(const QNativeInterface__QWaylandApplication*);
    using QNativeInterface__QWaylandApplication_LastInputSerial_Callback = unsigned int (*)(const QNativeInterface__QWaylandApplication*);
    using QNativeInterface__QWaylandApplication_LastInputSeat_Callback = wl_seat* (*)(const QNativeInterface__QWaylandApplication*);

    // Instance callback storage
    QNativeInterface__QWaylandApplication_Display_Callback qnativeinterface__qwaylandapplication_display_callback = nullptr;
    QNativeInterface__QWaylandApplication_Compositor_Callback qnativeinterface__qwaylandapplication_compositor_callback = nullptr;
    QNativeInterface__QWaylandApplication_Seat_Callback qnativeinterface__qwaylandapplication_seat_callback = nullptr;
    QNativeInterface__QWaylandApplication_Keyboard_Callback qnativeinterface__qwaylandapplication_keyboard_callback = nullptr;
    QNativeInterface__QWaylandApplication_Pointer_Callback qnativeinterface__qwaylandapplication_pointer_callback = nullptr;
    QNativeInterface__QWaylandApplication_Touch_Callback qnativeinterface__qwaylandapplication_touch_callback = nullptr;
    QNativeInterface__QWaylandApplication_LastInputSerial_Callback qnativeinterface__qwaylandapplication_lastinputserial_callback = nullptr;
    QNativeInterface__QWaylandApplication_LastInputSeat_Callback qnativeinterface__qwaylandapplication_lastinputseat_callback = nullptr;

    VirtualQNativeInterfaceQWaylandApplication() : QNativeInterface::QWaylandApplication() {};

    // Virtual method for C ABI access and custom callback
    virtual wl_display* display() const override {
        if (qnativeinterface__qwaylandapplication_display_callback) {
            wl_display* callback_ret = qnativeinterface__qwaylandapplication_display_callback(this);
            return callback_ret;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QNativeInterface::QWaylandApplication::display called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual wl_compositor* compositor() const override {
        if (qnativeinterface__qwaylandapplication_compositor_callback) {
            wl_compositor* callback_ret = qnativeinterface__qwaylandapplication_compositor_callback(this);
            return callback_ret;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QNativeInterface::QWaylandApplication::compositor called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual wl_seat* seat() const override {
        if (qnativeinterface__qwaylandapplication_seat_callback) {
            wl_seat* callback_ret = qnativeinterface__qwaylandapplication_seat_callback(this);
            return callback_ret;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QNativeInterface::QWaylandApplication::seat called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual wl_keyboard* keyboard() const override {
        if (qnativeinterface__qwaylandapplication_keyboard_callback) {
            wl_keyboard* callback_ret = qnativeinterface__qwaylandapplication_keyboard_callback(this);
            return callback_ret;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QNativeInterface::QWaylandApplication::keyboard called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual wl_pointer* pointer() const override {
        if (qnativeinterface__qwaylandapplication_pointer_callback) {
            wl_pointer* callback_ret = qnativeinterface__qwaylandapplication_pointer_callback(this);
            return callback_ret;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QNativeInterface::QWaylandApplication::pointer called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual wl_touch* touch() const override {
        if (qnativeinterface__qwaylandapplication_touch_callback) {
            wl_touch* callback_ret = qnativeinterface__qwaylandapplication_touch_callback(this);
            return callback_ret;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QNativeInterface::QWaylandApplication::touch called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual uint lastInputSerial() const override {
        if (qnativeinterface__qwaylandapplication_lastinputserial_callback) {
            unsigned int callback_ret = qnativeinterface__qwaylandapplication_lastinputserial_callback(this);
            return static_cast<uint>(callback_ret);
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QNativeInterface::QWaylandApplication::lastInputSerial called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual wl_seat* lastInputSeat() const override {
        if (qnativeinterface__qwaylandapplication_lastinputseat_callback) {
            wl_seat* callback_ret = qnativeinterface__qwaylandapplication_lastinputseat_callback(this);
            return callback_ret;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QNativeInterface::QWaylandApplication::lastInputSeat called without being implemented");
    }

    // unimplemented pure virtual method
    virtual xkb_context* xkbContext() const { return {}; }
};

#endif
