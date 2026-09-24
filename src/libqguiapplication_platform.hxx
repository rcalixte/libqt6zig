#pragma once
#ifndef LIBQGUIAPPLICATION_PLATFORM_HXX
#define LIBQGUIAPPLICATION_PLATFORM_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#if !QT_FEATURE_xcb
typedef struct _XDisplay Display;
struct xcb_connection_t;
#endif

#if !QT_FEATURE_wayland
struct wl_compositor;
struct wl_display;
struct wl_keyboard;
struct wl_pointer;
struct wl_seat;
struct wl_touch;
#endif

// This class is a subclass of QNativeInterface::QX11Application so that we can call protected methods
class VirtualQNativeInterfaceQX11Application : public QNativeInterface::QX11Application {

  public:
    // Virtual class boolean flag
    bool isVirtualQNativeInterfaceQX11Application = true;

    // Virtual class public types (including callbacks)
    using QNativeInterface__QX11Application_Display_Callback = Display* (*)();
    using QNativeInterface__QX11Application_Connection_Callback = xcb_connection_t* (*)();

  protected:
    // Instance callback storage
    QNativeInterface__QX11Application_Display_Callback qnativeinterface__qx11application_display_callback = nullptr;
    QNativeInterface__QX11Application_Connection_Callback qnativeinterface__qx11application_connection_callback = nullptr;

    // Instance base flags
    mutable bool qnativeinterface__qx11application_display_isbase = false;
    mutable bool qnativeinterface__qx11application_connection_isbase = false;

  public:
    VirtualQNativeInterfaceQX11Application() : QNativeInterface::QX11Application() {};

    // Callback setters
    inline void setQNativeInterface__QX11Application_Display_Callback(QNativeInterface__QX11Application_Display_Callback cb) { qnativeinterface__qx11application_display_callback = cb; }
    inline void setQNativeInterface__QX11Application_Connection_Callback(QNativeInterface__QX11Application_Connection_Callback cb) { qnativeinterface__qx11application_connection_callback = cb; }

    // Base flag setters
    inline void setQNativeInterface__QX11Application_Display_IsBase(bool value) const { qnativeinterface__qx11application_display_isbase = value; }
    inline void setQNativeInterface__QX11Application_Connection_IsBase(bool value) const { qnativeinterface__qx11application_connection_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual Display* display() const override {
        auto display_cb = qnativeinterface__qx11application_display_callback;
        if (display_cb) {
            Display* callback_ret = display_cb();
            return callback_ret;
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual xcb_connection_t* connection() const override {
        auto connection_cb = qnativeinterface__qx11application_connection_callback;
        if (connection_cb) {
            xcb_connection_t* callback_ret = connection_cb();
            return callback_ret;
        }
        return {};
    }
};

// This class is a subclass of QNativeInterface::QWaylandApplication so that we can call protected methods
class VirtualQNativeInterfaceQWaylandApplication : public QNativeInterface::QWaylandApplication {

  public:
    // Virtual class boolean flag
    bool isVirtualQNativeInterfaceQWaylandApplication = true;

    // Virtual class public types (including callbacks)
    using QNativeInterface__QWaylandApplication_Display_Callback = wl_display* (*)();
    using QNativeInterface__QWaylandApplication_Compositor_Callback = wl_compositor* (*)();
    using QNativeInterface__QWaylandApplication_Seat_Callback = wl_seat* (*)();
    using QNativeInterface__QWaylandApplication_Keyboard_Callback = wl_keyboard* (*)();
    using QNativeInterface__QWaylandApplication_Pointer_Callback = wl_pointer* (*)();
    using QNativeInterface__QWaylandApplication_Touch_Callback = wl_touch* (*)();
    using QNativeInterface__QWaylandApplication_LastInputSerial_Callback = unsigned int (*)();
    using QNativeInterface__QWaylandApplication_LastInputSeat_Callback = wl_seat* (*)();

  protected:
    // Instance callback storage
    QNativeInterface__QWaylandApplication_Display_Callback qnativeinterface__qwaylandapplication_display_callback = nullptr;
    QNativeInterface__QWaylandApplication_Compositor_Callback qnativeinterface__qwaylandapplication_compositor_callback = nullptr;
    QNativeInterface__QWaylandApplication_Seat_Callback qnativeinterface__qwaylandapplication_seat_callback = nullptr;
    QNativeInterface__QWaylandApplication_Keyboard_Callback qnativeinterface__qwaylandapplication_keyboard_callback = nullptr;
    QNativeInterface__QWaylandApplication_Pointer_Callback qnativeinterface__qwaylandapplication_pointer_callback = nullptr;
    QNativeInterface__QWaylandApplication_Touch_Callback qnativeinterface__qwaylandapplication_touch_callback = nullptr;
    QNativeInterface__QWaylandApplication_LastInputSerial_Callback qnativeinterface__qwaylandapplication_lastinputserial_callback = nullptr;
    QNativeInterface__QWaylandApplication_LastInputSeat_Callback qnativeinterface__qwaylandapplication_lastinputseat_callback = nullptr;

    // Instance base flags
    mutable bool qnativeinterface__qwaylandapplication_display_isbase = false;
    mutable bool qnativeinterface__qwaylandapplication_compositor_isbase = false;
    mutable bool qnativeinterface__qwaylandapplication_seat_isbase = false;
    mutable bool qnativeinterface__qwaylandapplication_keyboard_isbase = false;
    mutable bool qnativeinterface__qwaylandapplication_pointer_isbase = false;
    mutable bool qnativeinterface__qwaylandapplication_touch_isbase = false;
    mutable bool qnativeinterface__qwaylandapplication_lastinputserial_isbase = false;
    mutable bool qnativeinterface__qwaylandapplication_lastinputseat_isbase = false;

  public:
    VirtualQNativeInterfaceQWaylandApplication() : QNativeInterface::QWaylandApplication() {};

    // Callback setters
    inline void setQNativeInterface__QWaylandApplication_Display_Callback(QNativeInterface__QWaylandApplication_Display_Callback cb) { qnativeinterface__qwaylandapplication_display_callback = cb; }
    inline void setQNativeInterface__QWaylandApplication_Compositor_Callback(QNativeInterface__QWaylandApplication_Compositor_Callback cb) { qnativeinterface__qwaylandapplication_compositor_callback = cb; }
    inline void setQNativeInterface__QWaylandApplication_Seat_Callback(QNativeInterface__QWaylandApplication_Seat_Callback cb) { qnativeinterface__qwaylandapplication_seat_callback = cb; }
    inline void setQNativeInterface__QWaylandApplication_Keyboard_Callback(QNativeInterface__QWaylandApplication_Keyboard_Callback cb) { qnativeinterface__qwaylandapplication_keyboard_callback = cb; }
    inline void setQNativeInterface__QWaylandApplication_Pointer_Callback(QNativeInterface__QWaylandApplication_Pointer_Callback cb) { qnativeinterface__qwaylandapplication_pointer_callback = cb; }
    inline void setQNativeInterface__QWaylandApplication_Touch_Callback(QNativeInterface__QWaylandApplication_Touch_Callback cb) { qnativeinterface__qwaylandapplication_touch_callback = cb; }
    inline void setQNativeInterface__QWaylandApplication_LastInputSerial_Callback(QNativeInterface__QWaylandApplication_LastInputSerial_Callback cb) { qnativeinterface__qwaylandapplication_lastinputserial_callback = cb; }
    inline void setQNativeInterface__QWaylandApplication_LastInputSeat_Callback(QNativeInterface__QWaylandApplication_LastInputSeat_Callback cb) { qnativeinterface__qwaylandapplication_lastinputseat_callback = cb; }

    // Base flag setters
    inline void setQNativeInterface__QWaylandApplication_Display_IsBase(bool value) const { qnativeinterface__qwaylandapplication_display_isbase = value; }
    inline void setQNativeInterface__QWaylandApplication_Compositor_IsBase(bool value) const { qnativeinterface__qwaylandapplication_compositor_isbase = value; }
    inline void setQNativeInterface__QWaylandApplication_Seat_IsBase(bool value) const { qnativeinterface__qwaylandapplication_seat_isbase = value; }
    inline void setQNativeInterface__QWaylandApplication_Keyboard_IsBase(bool value) const { qnativeinterface__qwaylandapplication_keyboard_isbase = value; }
    inline void setQNativeInterface__QWaylandApplication_Pointer_IsBase(bool value) const { qnativeinterface__qwaylandapplication_pointer_isbase = value; }
    inline void setQNativeInterface__QWaylandApplication_Touch_IsBase(bool value) const { qnativeinterface__qwaylandapplication_touch_isbase = value; }
    inline void setQNativeInterface__QWaylandApplication_LastInputSerial_IsBase(bool value) const { qnativeinterface__qwaylandapplication_lastinputserial_isbase = value; }
    inline void setQNativeInterface__QWaylandApplication_LastInputSeat_IsBase(bool value) const { qnativeinterface__qwaylandapplication_lastinputseat_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual wl_display* display() const override {
        auto display_cb = qnativeinterface__qwaylandapplication_display_callback;
        if (display_cb) {
            wl_display* callback_ret = display_cb();
            return callback_ret;
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual wl_compositor* compositor() const override {
        auto compositor_cb = qnativeinterface__qwaylandapplication_compositor_callback;
        if (compositor_cb) {
            wl_compositor* callback_ret = compositor_cb();
            return callback_ret;
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual wl_seat* seat() const override {
        auto seat_cb = qnativeinterface__qwaylandapplication_seat_callback;
        if (seat_cb) {
            wl_seat* callback_ret = seat_cb();
            return callback_ret;
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual wl_keyboard* keyboard() const override {
        auto keyboard_cb = qnativeinterface__qwaylandapplication_keyboard_callback;
        if (keyboard_cb) {
            wl_keyboard* callback_ret = keyboard_cb();
            return callback_ret;
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual wl_pointer* pointer() const override {
        auto pointer_cb = qnativeinterface__qwaylandapplication_pointer_callback;
        if (pointer_cb) {
            wl_pointer* callback_ret = pointer_cb();
            return callback_ret;
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual wl_touch* touch() const override {
        auto touch_cb = qnativeinterface__qwaylandapplication_touch_callback;
        if (touch_cb) {
            wl_touch* callback_ret = touch_cb();
            return callback_ret;
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual uint lastInputSerial() const override {
        auto lastinputserial_cb = qnativeinterface__qwaylandapplication_lastinputserial_callback;
        if (lastinputserial_cb) {
            unsigned int callback_ret = lastinputserial_cb();
            return static_cast<uint>(callback_ret);
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual wl_seat* lastInputSeat() const override {
        auto lastinputseat_cb = qnativeinterface__qwaylandapplication_lastinputseat_callback;
        if (lastinputseat_cb) {
            wl_seat* callback_ret = lastinputseat_cb();
            return callback_ret;
        }
        return {};
    }
};

#endif
