#pragma once
#ifndef SRCC_LIBVIRTUALQRASTERWINDOW_H
#define SRCC_LIBVIRTUALQRASTERWINDOW_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QRasterWindow so that we can call protected methods
class VirtualQRasterWindow final : public QRasterWindow {

  public:
    // Virtual class boolean flag
    bool isVirtualQRasterWindow = true;

    // Virtual class public types (including callbacks)
    using QRasterWindow_Metacall_Callback = int (*)(QRasterWindow*, int, int, void**);
    using QRasterWindow_Metric_Callback = int (*)(const QRasterWindow*, int);
    using QRasterWindow_Redirected_Callback = QPaintDevice* (*)(const QRasterWindow*, QPoint*);
    using QRasterWindow_ExposeEvent_Callback = void (*)(QRasterWindow*, QExposeEvent*);
    using QRasterWindow_PaintEvent_Callback = void (*)(QRasterWindow*, QPaintEvent*);
    using QRasterWindow_Event_Callback = bool (*)(QRasterWindow*, QEvent*);
    using QRasterWindow_SurfaceType_Callback = int (*)();
    using QRasterWindow_Format_Callback = QSurfaceFormat* (*)();
    using QRasterWindow_Size_Callback = QSize* (*)();
    using QRasterWindow_AccessibleRoot_Callback = QAccessibleInterface* (*)();
    using QRasterWindow_FocusObject_Callback = QObject* (*)();
    using QRasterWindow_ResizeEvent_Callback = void (*)(QRasterWindow*, QResizeEvent*);
    using QRasterWindow_MoveEvent_Callback = void (*)(QRasterWindow*, QMoveEvent*);
    using QRasterWindow_FocusInEvent_Callback = void (*)(QRasterWindow*, QFocusEvent*);
    using QRasterWindow_FocusOutEvent_Callback = void (*)(QRasterWindow*, QFocusEvent*);
    using QRasterWindow_ShowEvent_Callback = void (*)(QRasterWindow*, QShowEvent*);
    using QRasterWindow_HideEvent_Callback = void (*)(QRasterWindow*, QHideEvent*);
    using QRasterWindow_CloseEvent_Callback = void (*)(QRasterWindow*, QCloseEvent*);
    using QRasterWindow_KeyPressEvent_Callback = void (*)(QRasterWindow*, QKeyEvent*);
    using QRasterWindow_KeyReleaseEvent_Callback = void (*)(QRasterWindow*, QKeyEvent*);
    using QRasterWindow_MousePressEvent_Callback = void (*)(QRasterWindow*, QMouseEvent*);
    using QRasterWindow_MouseReleaseEvent_Callback = void (*)(QRasterWindow*, QMouseEvent*);
    using QRasterWindow_MouseDoubleClickEvent_Callback = void (*)(QRasterWindow*, QMouseEvent*);
    using QRasterWindow_MouseMoveEvent_Callback = void (*)(QRasterWindow*, QMouseEvent*);
    using QRasterWindow_WheelEvent_Callback = void (*)(QRasterWindow*, QWheelEvent*);
    using QRasterWindow_TouchEvent_Callback = void (*)(QRasterWindow*, QTouchEvent*);
    using QRasterWindow_TabletEvent_Callback = void (*)(QRasterWindow*, QTabletEvent*);
    using QRasterWindow_NativeEvent_Callback = bool (*)(QRasterWindow*, libqt_string, void*, intptr_t*);
    using QRasterWindow_EventFilter_Callback = bool (*)(QRasterWindow*, QObject*, QEvent*);
    using QRasterWindow_TimerEvent_Callback = void (*)(QRasterWindow*, QTimerEvent*);
    using QRasterWindow_ChildEvent_Callback = void (*)(QRasterWindow*, QChildEvent*);
    using QRasterWindow_CustomEvent_Callback = void (*)(QRasterWindow*, QEvent*);
    using QRasterWindow_ConnectNotify_Callback = void (*)(QRasterWindow*, QMetaMethod*);
    using QRasterWindow_DisconnectNotify_Callback = void (*)(QRasterWindow*, QMetaMethod*);
    using QRasterWindow_DevType_Callback = int (*)();
    using QRasterWindow_InitPainter_Callback = void (*)(const QRasterWindow*, QPainter*);
    using QRasterWindow_SharedPainter_Callback = QPainter* (*)();
    using QRasterWindow_ResolveInterface_Callback = void* (*)(const QRasterWindow*, const char*, int);
    using QRasterWindow_Sender_Callback = QObject* (*)();
    using QRasterWindow_SenderSignalIndex_Callback = int (*)();
    using QRasterWindow_Receivers_Callback = int (*)(const QRasterWindow*, const char*);
    using QRasterWindow_IsSignalConnected_Callback = bool (*)(const QRasterWindow*, QMetaMethod*);

  protected:
    // Instance callback storage
    QRasterWindow_Metacall_Callback qrasterwindow_metacall_callback = nullptr;
    QRasterWindow_Metric_Callback qrasterwindow_metric_callback = nullptr;
    QRasterWindow_Redirected_Callback qrasterwindow_redirected_callback = nullptr;
    QRasterWindow_ExposeEvent_Callback qrasterwindow_exposeevent_callback = nullptr;
    QRasterWindow_PaintEvent_Callback qrasterwindow_paintevent_callback = nullptr;
    QRasterWindow_Event_Callback qrasterwindow_event_callback = nullptr;
    QRasterWindow_SurfaceType_Callback qrasterwindow_surfacetype_callback = nullptr;
    QRasterWindow_Format_Callback qrasterwindow_format_callback = nullptr;
    QRasterWindow_Size_Callback qrasterwindow_size_callback = nullptr;
    QRasterWindow_AccessibleRoot_Callback qrasterwindow_accessibleroot_callback = nullptr;
    QRasterWindow_FocusObject_Callback qrasterwindow_focusobject_callback = nullptr;
    QRasterWindow_ResizeEvent_Callback qrasterwindow_resizeevent_callback = nullptr;
    QRasterWindow_MoveEvent_Callback qrasterwindow_moveevent_callback = nullptr;
    QRasterWindow_FocusInEvent_Callback qrasterwindow_focusinevent_callback = nullptr;
    QRasterWindow_FocusOutEvent_Callback qrasterwindow_focusoutevent_callback = nullptr;
    QRasterWindow_ShowEvent_Callback qrasterwindow_showevent_callback = nullptr;
    QRasterWindow_HideEvent_Callback qrasterwindow_hideevent_callback = nullptr;
    QRasterWindow_CloseEvent_Callback qrasterwindow_closeevent_callback = nullptr;
    QRasterWindow_KeyPressEvent_Callback qrasterwindow_keypressevent_callback = nullptr;
    QRasterWindow_KeyReleaseEvent_Callback qrasterwindow_keyreleaseevent_callback = nullptr;
    QRasterWindow_MousePressEvent_Callback qrasterwindow_mousepressevent_callback = nullptr;
    QRasterWindow_MouseReleaseEvent_Callback qrasterwindow_mousereleaseevent_callback = nullptr;
    QRasterWindow_MouseDoubleClickEvent_Callback qrasterwindow_mousedoubleclickevent_callback = nullptr;
    QRasterWindow_MouseMoveEvent_Callback qrasterwindow_mousemoveevent_callback = nullptr;
    QRasterWindow_WheelEvent_Callback qrasterwindow_wheelevent_callback = nullptr;
    QRasterWindow_TouchEvent_Callback qrasterwindow_touchevent_callback = nullptr;
    QRasterWindow_TabletEvent_Callback qrasterwindow_tabletevent_callback = nullptr;
    QRasterWindow_NativeEvent_Callback qrasterwindow_nativeevent_callback = nullptr;
    QRasterWindow_EventFilter_Callback qrasterwindow_eventfilter_callback = nullptr;
    QRasterWindow_TimerEvent_Callback qrasterwindow_timerevent_callback = nullptr;
    QRasterWindow_ChildEvent_Callback qrasterwindow_childevent_callback = nullptr;
    QRasterWindow_CustomEvent_Callback qrasterwindow_customevent_callback = nullptr;
    QRasterWindow_ConnectNotify_Callback qrasterwindow_connectnotify_callback = nullptr;
    QRasterWindow_DisconnectNotify_Callback qrasterwindow_disconnectnotify_callback = nullptr;
    QRasterWindow_DevType_Callback qrasterwindow_devtype_callback = nullptr;
    QRasterWindow_InitPainter_Callback qrasterwindow_initpainter_callback = nullptr;
    QRasterWindow_SharedPainter_Callback qrasterwindow_sharedpainter_callback = nullptr;
    QRasterWindow_ResolveInterface_Callback qrasterwindow_resolveinterface_callback = nullptr;
    QRasterWindow_Sender_Callback qrasterwindow_sender_callback = nullptr;
    QRasterWindow_SenderSignalIndex_Callback qrasterwindow_sendersignalindex_callback = nullptr;
    QRasterWindow_Receivers_Callback qrasterwindow_receivers_callback = nullptr;
    QRasterWindow_IsSignalConnected_Callback qrasterwindow_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qrasterwindow_metacall_isbase = false;
    mutable bool qrasterwindow_metric_isbase = false;
    mutable bool qrasterwindow_redirected_isbase = false;
    mutable bool qrasterwindow_exposeevent_isbase = false;
    mutable bool qrasterwindow_paintevent_isbase = false;
    mutable bool qrasterwindow_event_isbase = false;
    mutable bool qrasterwindow_surfacetype_isbase = false;
    mutable bool qrasterwindow_format_isbase = false;
    mutable bool qrasterwindow_size_isbase = false;
    mutable bool qrasterwindow_accessibleroot_isbase = false;
    mutable bool qrasterwindow_focusobject_isbase = false;
    mutable bool qrasterwindow_resizeevent_isbase = false;
    mutable bool qrasterwindow_moveevent_isbase = false;
    mutable bool qrasterwindow_focusinevent_isbase = false;
    mutable bool qrasterwindow_focusoutevent_isbase = false;
    mutable bool qrasterwindow_showevent_isbase = false;
    mutable bool qrasterwindow_hideevent_isbase = false;
    mutable bool qrasterwindow_closeevent_isbase = false;
    mutable bool qrasterwindow_keypressevent_isbase = false;
    mutable bool qrasterwindow_keyreleaseevent_isbase = false;
    mutable bool qrasterwindow_mousepressevent_isbase = false;
    mutable bool qrasterwindow_mousereleaseevent_isbase = false;
    mutable bool qrasterwindow_mousedoubleclickevent_isbase = false;
    mutable bool qrasterwindow_mousemoveevent_isbase = false;
    mutable bool qrasterwindow_wheelevent_isbase = false;
    mutable bool qrasterwindow_touchevent_isbase = false;
    mutable bool qrasterwindow_tabletevent_isbase = false;
    mutable bool qrasterwindow_nativeevent_isbase = false;
    mutable bool qrasterwindow_eventfilter_isbase = false;
    mutable bool qrasterwindow_timerevent_isbase = false;
    mutable bool qrasterwindow_childevent_isbase = false;
    mutable bool qrasterwindow_customevent_isbase = false;
    mutable bool qrasterwindow_connectnotify_isbase = false;
    mutable bool qrasterwindow_disconnectnotify_isbase = false;
    mutable bool qrasterwindow_devtype_isbase = false;
    mutable bool qrasterwindow_initpainter_isbase = false;
    mutable bool qrasterwindow_sharedpainter_isbase = false;
    mutable bool qrasterwindow_resolveinterface_isbase = false;
    mutable bool qrasterwindow_sender_isbase = false;
    mutable bool qrasterwindow_sendersignalindex_isbase = false;
    mutable bool qrasterwindow_receivers_isbase = false;
    mutable bool qrasterwindow_issignalconnected_isbase = false;

  public:
    VirtualQRasterWindow() : QRasterWindow(){};
    VirtualQRasterWindow(QWindow* parent) : QRasterWindow(parent){};

    ~VirtualQRasterWindow() {
        qrasterwindow_metacall_callback = nullptr;
        qrasterwindow_metric_callback = nullptr;
        qrasterwindow_redirected_callback = nullptr;
        qrasterwindow_exposeevent_callback = nullptr;
        qrasterwindow_paintevent_callback = nullptr;
        qrasterwindow_event_callback = nullptr;
        qrasterwindow_surfacetype_callback = nullptr;
        qrasterwindow_format_callback = nullptr;
        qrasterwindow_size_callback = nullptr;
        qrasterwindow_accessibleroot_callback = nullptr;
        qrasterwindow_focusobject_callback = nullptr;
        qrasterwindow_resizeevent_callback = nullptr;
        qrasterwindow_moveevent_callback = nullptr;
        qrasterwindow_focusinevent_callback = nullptr;
        qrasterwindow_focusoutevent_callback = nullptr;
        qrasterwindow_showevent_callback = nullptr;
        qrasterwindow_hideevent_callback = nullptr;
        qrasterwindow_closeevent_callback = nullptr;
        qrasterwindow_keypressevent_callback = nullptr;
        qrasterwindow_keyreleaseevent_callback = nullptr;
        qrasterwindow_mousepressevent_callback = nullptr;
        qrasterwindow_mousereleaseevent_callback = nullptr;
        qrasterwindow_mousedoubleclickevent_callback = nullptr;
        qrasterwindow_mousemoveevent_callback = nullptr;
        qrasterwindow_wheelevent_callback = nullptr;
        qrasterwindow_touchevent_callback = nullptr;
        qrasterwindow_tabletevent_callback = nullptr;
        qrasterwindow_nativeevent_callback = nullptr;
        qrasterwindow_eventfilter_callback = nullptr;
        qrasterwindow_timerevent_callback = nullptr;
        qrasterwindow_childevent_callback = nullptr;
        qrasterwindow_customevent_callback = nullptr;
        qrasterwindow_connectnotify_callback = nullptr;
        qrasterwindow_disconnectnotify_callback = nullptr;
        qrasterwindow_devtype_callback = nullptr;
        qrasterwindow_initpainter_callback = nullptr;
        qrasterwindow_sharedpainter_callback = nullptr;
        qrasterwindow_resolveinterface_callback = nullptr;
        qrasterwindow_sender_callback = nullptr;
        qrasterwindow_sendersignalindex_callback = nullptr;
        qrasterwindow_receivers_callback = nullptr;
        qrasterwindow_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setQRasterWindow_Metacall_Callback(QRasterWindow_Metacall_Callback cb) { qrasterwindow_metacall_callback = cb; }
    inline void setQRasterWindow_Metric_Callback(QRasterWindow_Metric_Callback cb) { qrasterwindow_metric_callback = cb; }
    inline void setQRasterWindow_Redirected_Callback(QRasterWindow_Redirected_Callback cb) { qrasterwindow_redirected_callback = cb; }
    inline void setQRasterWindow_ExposeEvent_Callback(QRasterWindow_ExposeEvent_Callback cb) { qrasterwindow_exposeevent_callback = cb; }
    inline void setQRasterWindow_PaintEvent_Callback(QRasterWindow_PaintEvent_Callback cb) { qrasterwindow_paintevent_callback = cb; }
    inline void setQRasterWindow_Event_Callback(QRasterWindow_Event_Callback cb) { qrasterwindow_event_callback = cb; }
    inline void setQRasterWindow_SurfaceType_Callback(QRasterWindow_SurfaceType_Callback cb) { qrasterwindow_surfacetype_callback = cb; }
    inline void setQRasterWindow_Format_Callback(QRasterWindow_Format_Callback cb) { qrasterwindow_format_callback = cb; }
    inline void setQRasterWindow_Size_Callback(QRasterWindow_Size_Callback cb) { qrasterwindow_size_callback = cb; }
    inline void setQRasterWindow_AccessibleRoot_Callback(QRasterWindow_AccessibleRoot_Callback cb) { qrasterwindow_accessibleroot_callback = cb; }
    inline void setQRasterWindow_FocusObject_Callback(QRasterWindow_FocusObject_Callback cb) { qrasterwindow_focusobject_callback = cb; }
    inline void setQRasterWindow_ResizeEvent_Callback(QRasterWindow_ResizeEvent_Callback cb) { qrasterwindow_resizeevent_callback = cb; }
    inline void setQRasterWindow_MoveEvent_Callback(QRasterWindow_MoveEvent_Callback cb) { qrasterwindow_moveevent_callback = cb; }
    inline void setQRasterWindow_FocusInEvent_Callback(QRasterWindow_FocusInEvent_Callback cb) { qrasterwindow_focusinevent_callback = cb; }
    inline void setQRasterWindow_FocusOutEvent_Callback(QRasterWindow_FocusOutEvent_Callback cb) { qrasterwindow_focusoutevent_callback = cb; }
    inline void setQRasterWindow_ShowEvent_Callback(QRasterWindow_ShowEvent_Callback cb) { qrasterwindow_showevent_callback = cb; }
    inline void setQRasterWindow_HideEvent_Callback(QRasterWindow_HideEvent_Callback cb) { qrasterwindow_hideevent_callback = cb; }
    inline void setQRasterWindow_CloseEvent_Callback(QRasterWindow_CloseEvent_Callback cb) { qrasterwindow_closeevent_callback = cb; }
    inline void setQRasterWindow_KeyPressEvent_Callback(QRasterWindow_KeyPressEvent_Callback cb) { qrasterwindow_keypressevent_callback = cb; }
    inline void setQRasterWindow_KeyReleaseEvent_Callback(QRasterWindow_KeyReleaseEvent_Callback cb) { qrasterwindow_keyreleaseevent_callback = cb; }
    inline void setQRasterWindow_MousePressEvent_Callback(QRasterWindow_MousePressEvent_Callback cb) { qrasterwindow_mousepressevent_callback = cb; }
    inline void setQRasterWindow_MouseReleaseEvent_Callback(QRasterWindow_MouseReleaseEvent_Callback cb) { qrasterwindow_mousereleaseevent_callback = cb; }
    inline void setQRasterWindow_MouseDoubleClickEvent_Callback(QRasterWindow_MouseDoubleClickEvent_Callback cb) { qrasterwindow_mousedoubleclickevent_callback = cb; }
    inline void setQRasterWindow_MouseMoveEvent_Callback(QRasterWindow_MouseMoveEvent_Callback cb) { qrasterwindow_mousemoveevent_callback = cb; }
    inline void setQRasterWindow_WheelEvent_Callback(QRasterWindow_WheelEvent_Callback cb) { qrasterwindow_wheelevent_callback = cb; }
    inline void setQRasterWindow_TouchEvent_Callback(QRasterWindow_TouchEvent_Callback cb) { qrasterwindow_touchevent_callback = cb; }
    inline void setQRasterWindow_TabletEvent_Callback(QRasterWindow_TabletEvent_Callback cb) { qrasterwindow_tabletevent_callback = cb; }
    inline void setQRasterWindow_NativeEvent_Callback(QRasterWindow_NativeEvent_Callback cb) { qrasterwindow_nativeevent_callback = cb; }
    inline void setQRasterWindow_EventFilter_Callback(QRasterWindow_EventFilter_Callback cb) { qrasterwindow_eventfilter_callback = cb; }
    inline void setQRasterWindow_TimerEvent_Callback(QRasterWindow_TimerEvent_Callback cb) { qrasterwindow_timerevent_callback = cb; }
    inline void setQRasterWindow_ChildEvent_Callback(QRasterWindow_ChildEvent_Callback cb) { qrasterwindow_childevent_callback = cb; }
    inline void setQRasterWindow_CustomEvent_Callback(QRasterWindow_CustomEvent_Callback cb) { qrasterwindow_customevent_callback = cb; }
    inline void setQRasterWindow_ConnectNotify_Callback(QRasterWindow_ConnectNotify_Callback cb) { qrasterwindow_connectnotify_callback = cb; }
    inline void setQRasterWindow_DisconnectNotify_Callback(QRasterWindow_DisconnectNotify_Callback cb) { qrasterwindow_disconnectnotify_callback = cb; }
    inline void setQRasterWindow_DevType_Callback(QRasterWindow_DevType_Callback cb) { qrasterwindow_devtype_callback = cb; }
    inline void setQRasterWindow_InitPainter_Callback(QRasterWindow_InitPainter_Callback cb) { qrasterwindow_initpainter_callback = cb; }
    inline void setQRasterWindow_SharedPainter_Callback(QRasterWindow_SharedPainter_Callback cb) { qrasterwindow_sharedpainter_callback = cb; }
    inline void setQRasterWindow_ResolveInterface_Callback(QRasterWindow_ResolveInterface_Callback cb) { qrasterwindow_resolveinterface_callback = cb; }
    inline void setQRasterWindow_Sender_Callback(QRasterWindow_Sender_Callback cb) { qrasterwindow_sender_callback = cb; }
    inline void setQRasterWindow_SenderSignalIndex_Callback(QRasterWindow_SenderSignalIndex_Callback cb) { qrasterwindow_sendersignalindex_callback = cb; }
    inline void setQRasterWindow_Receivers_Callback(QRasterWindow_Receivers_Callback cb) { qrasterwindow_receivers_callback = cb; }
    inline void setQRasterWindow_IsSignalConnected_Callback(QRasterWindow_IsSignalConnected_Callback cb) { qrasterwindow_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQRasterWindow_Metacall_IsBase(bool value) const { qrasterwindow_metacall_isbase = value; }
    inline void setQRasterWindow_Metric_IsBase(bool value) const { qrasterwindow_metric_isbase = value; }
    inline void setQRasterWindow_Redirected_IsBase(bool value) const { qrasterwindow_redirected_isbase = value; }
    inline void setQRasterWindow_ExposeEvent_IsBase(bool value) const { qrasterwindow_exposeevent_isbase = value; }
    inline void setQRasterWindow_PaintEvent_IsBase(bool value) const { qrasterwindow_paintevent_isbase = value; }
    inline void setQRasterWindow_Event_IsBase(bool value) const { qrasterwindow_event_isbase = value; }
    inline void setQRasterWindow_SurfaceType_IsBase(bool value) const { qrasterwindow_surfacetype_isbase = value; }
    inline void setQRasterWindow_Format_IsBase(bool value) const { qrasterwindow_format_isbase = value; }
    inline void setQRasterWindow_Size_IsBase(bool value) const { qrasterwindow_size_isbase = value; }
    inline void setQRasterWindow_AccessibleRoot_IsBase(bool value) const { qrasterwindow_accessibleroot_isbase = value; }
    inline void setQRasterWindow_FocusObject_IsBase(bool value) const { qrasterwindow_focusobject_isbase = value; }
    inline void setQRasterWindow_ResizeEvent_IsBase(bool value) const { qrasterwindow_resizeevent_isbase = value; }
    inline void setQRasterWindow_MoveEvent_IsBase(bool value) const { qrasterwindow_moveevent_isbase = value; }
    inline void setQRasterWindow_FocusInEvent_IsBase(bool value) const { qrasterwindow_focusinevent_isbase = value; }
    inline void setQRasterWindow_FocusOutEvent_IsBase(bool value) const { qrasterwindow_focusoutevent_isbase = value; }
    inline void setQRasterWindow_ShowEvent_IsBase(bool value) const { qrasterwindow_showevent_isbase = value; }
    inline void setQRasterWindow_HideEvent_IsBase(bool value) const { qrasterwindow_hideevent_isbase = value; }
    inline void setQRasterWindow_CloseEvent_IsBase(bool value) const { qrasterwindow_closeevent_isbase = value; }
    inline void setQRasterWindow_KeyPressEvent_IsBase(bool value) const { qrasterwindow_keypressevent_isbase = value; }
    inline void setQRasterWindow_KeyReleaseEvent_IsBase(bool value) const { qrasterwindow_keyreleaseevent_isbase = value; }
    inline void setQRasterWindow_MousePressEvent_IsBase(bool value) const { qrasterwindow_mousepressevent_isbase = value; }
    inline void setQRasterWindow_MouseReleaseEvent_IsBase(bool value) const { qrasterwindow_mousereleaseevent_isbase = value; }
    inline void setQRasterWindow_MouseDoubleClickEvent_IsBase(bool value) const { qrasterwindow_mousedoubleclickevent_isbase = value; }
    inline void setQRasterWindow_MouseMoveEvent_IsBase(bool value) const { qrasterwindow_mousemoveevent_isbase = value; }
    inline void setQRasterWindow_WheelEvent_IsBase(bool value) const { qrasterwindow_wheelevent_isbase = value; }
    inline void setQRasterWindow_TouchEvent_IsBase(bool value) const { qrasterwindow_touchevent_isbase = value; }
    inline void setQRasterWindow_TabletEvent_IsBase(bool value) const { qrasterwindow_tabletevent_isbase = value; }
    inline void setQRasterWindow_NativeEvent_IsBase(bool value) const { qrasterwindow_nativeevent_isbase = value; }
    inline void setQRasterWindow_EventFilter_IsBase(bool value) const { qrasterwindow_eventfilter_isbase = value; }
    inline void setQRasterWindow_TimerEvent_IsBase(bool value) const { qrasterwindow_timerevent_isbase = value; }
    inline void setQRasterWindow_ChildEvent_IsBase(bool value) const { qrasterwindow_childevent_isbase = value; }
    inline void setQRasterWindow_CustomEvent_IsBase(bool value) const { qrasterwindow_customevent_isbase = value; }
    inline void setQRasterWindow_ConnectNotify_IsBase(bool value) const { qrasterwindow_connectnotify_isbase = value; }
    inline void setQRasterWindow_DisconnectNotify_IsBase(bool value) const { qrasterwindow_disconnectnotify_isbase = value; }
    inline void setQRasterWindow_DevType_IsBase(bool value) const { qrasterwindow_devtype_isbase = value; }
    inline void setQRasterWindow_InitPainter_IsBase(bool value) const { qrasterwindow_initpainter_isbase = value; }
    inline void setQRasterWindow_SharedPainter_IsBase(bool value) const { qrasterwindow_sharedpainter_isbase = value; }
    inline void setQRasterWindow_ResolveInterface_IsBase(bool value) const { qrasterwindow_resolveinterface_isbase = value; }
    inline void setQRasterWindow_Sender_IsBase(bool value) const { qrasterwindow_sender_isbase = value; }
    inline void setQRasterWindow_SenderSignalIndex_IsBase(bool value) const { qrasterwindow_sendersignalindex_isbase = value; }
    inline void setQRasterWindow_Receivers_IsBase(bool value) const { qrasterwindow_receivers_isbase = value; }
    inline void setQRasterWindow_IsSignalConnected_IsBase(bool value) const { qrasterwindow_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qrasterwindow_metacall_isbase) {
            qrasterwindow_metacall_isbase = false;
            return QRasterWindow::qt_metacall(param1, param2, param3);
        } else if (qrasterwindow_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qrasterwindow_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QRasterWindow::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric metric) const override {
        if (qrasterwindow_metric_isbase) {
            qrasterwindow_metric_isbase = false;
            return QRasterWindow::metric(metric);
        } else if (qrasterwindow_metric_callback != nullptr) {
            int cbval1 = static_cast<int>(metric);

            int callback_ret = qrasterwindow_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QRasterWindow::metric(metric);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* param1) const override {
        if (qrasterwindow_redirected_isbase) {
            qrasterwindow_redirected_isbase = false;
            return QRasterWindow::redirected(param1);
        } else if (qrasterwindow_redirected_callback != nullptr) {
            QPoint* cbval1 = param1;

            QPaintDevice* callback_ret = qrasterwindow_redirected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QRasterWindow::redirected(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void exposeEvent(QExposeEvent* param1) override {
        if (qrasterwindow_exposeevent_isbase) {
            qrasterwindow_exposeevent_isbase = false;
            QRasterWindow::exposeEvent(param1);
        } else if (qrasterwindow_exposeevent_callback != nullptr) {
            QExposeEvent* cbval1 = param1;

            qrasterwindow_exposeevent_callback(this, cbval1);
        } else {
            QRasterWindow::exposeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (qrasterwindow_paintevent_isbase) {
            qrasterwindow_paintevent_isbase = false;
            QRasterWindow::paintEvent(event);
        } else if (qrasterwindow_paintevent_callback != nullptr) {
            QPaintEvent* cbval1 = event;

            qrasterwindow_paintevent_callback(this, cbval1);
        } else {
            QRasterWindow::paintEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qrasterwindow_event_isbase) {
            qrasterwindow_event_isbase = false;
            return QRasterWindow::event(event);
        } else if (qrasterwindow_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qrasterwindow_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QRasterWindow::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSurface::SurfaceType surfaceType() const override {
        if (qrasterwindow_surfacetype_isbase) {
            qrasterwindow_surfacetype_isbase = false;
            return QRasterWindow::surfaceType();
        } else if (qrasterwindow_surfacetype_callback != nullptr) {
            int callback_ret = qrasterwindow_surfacetype_callback();
            return static_cast<QSurface::SurfaceType>(callback_ret);
        } else {
            return QRasterWindow::surfaceType();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSurfaceFormat format() const override {
        if (qrasterwindow_format_isbase) {
            qrasterwindow_format_isbase = false;
            return QRasterWindow::format();
        } else if (qrasterwindow_format_callback != nullptr) {
            QSurfaceFormat* callback_ret = qrasterwindow_format_callback();
            return *callback_ret;
        } else {
            return QRasterWindow::format();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize size() const override {
        if (qrasterwindow_size_isbase) {
            qrasterwindow_size_isbase = false;
            return QRasterWindow::size();
        } else if (qrasterwindow_size_callback != nullptr) {
            QSize* callback_ret = qrasterwindow_size_callback();
            return *callback_ret;
        } else {
            return QRasterWindow::size();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QAccessibleInterface* accessibleRoot() const override {
        if (qrasterwindow_accessibleroot_isbase) {
            qrasterwindow_accessibleroot_isbase = false;
            return QRasterWindow::accessibleRoot();
        } else if (qrasterwindow_accessibleroot_callback != nullptr) {
            QAccessibleInterface* callback_ret = qrasterwindow_accessibleroot_callback();
            return callback_ret;
        } else {
            return QRasterWindow::accessibleRoot();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QObject* focusObject() const override {
        if (qrasterwindow_focusobject_isbase) {
            qrasterwindow_focusobject_isbase = false;
            return QRasterWindow::focusObject();
        } else if (qrasterwindow_focusobject_callback != nullptr) {
            QObject* callback_ret = qrasterwindow_focusobject_callback();
            return callback_ret;
        } else {
            return QRasterWindow::focusObject();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* param1) override {
        if (qrasterwindow_resizeevent_isbase) {
            qrasterwindow_resizeevent_isbase = false;
            QRasterWindow::resizeEvent(param1);
        } else if (qrasterwindow_resizeevent_callback != nullptr) {
            QResizeEvent* cbval1 = param1;

            qrasterwindow_resizeevent_callback(this, cbval1);
        } else {
            QRasterWindow::resizeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* param1) override {
        if (qrasterwindow_moveevent_isbase) {
            qrasterwindow_moveevent_isbase = false;
            QRasterWindow::moveEvent(param1);
        } else if (qrasterwindow_moveevent_callback != nullptr) {
            QMoveEvent* cbval1 = param1;

            qrasterwindow_moveevent_callback(this, cbval1);
        } else {
            QRasterWindow::moveEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* param1) override {
        if (qrasterwindow_focusinevent_isbase) {
            qrasterwindow_focusinevent_isbase = false;
            QRasterWindow::focusInEvent(param1);
        } else if (qrasterwindow_focusinevent_callback != nullptr) {
            QFocusEvent* cbval1 = param1;

            qrasterwindow_focusinevent_callback(this, cbval1);
        } else {
            QRasterWindow::focusInEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* param1) override {
        if (qrasterwindow_focusoutevent_isbase) {
            qrasterwindow_focusoutevent_isbase = false;
            QRasterWindow::focusOutEvent(param1);
        } else if (qrasterwindow_focusoutevent_callback != nullptr) {
            QFocusEvent* cbval1 = param1;

            qrasterwindow_focusoutevent_callback(this, cbval1);
        } else {
            QRasterWindow::focusOutEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* param1) override {
        if (qrasterwindow_showevent_isbase) {
            qrasterwindow_showevent_isbase = false;
            QRasterWindow::showEvent(param1);
        } else if (qrasterwindow_showevent_callback != nullptr) {
            QShowEvent* cbval1 = param1;

            qrasterwindow_showevent_callback(this, cbval1);
        } else {
            QRasterWindow::showEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* param1) override {
        if (qrasterwindow_hideevent_isbase) {
            qrasterwindow_hideevent_isbase = false;
            QRasterWindow::hideEvent(param1);
        } else if (qrasterwindow_hideevent_callback != nullptr) {
            QHideEvent* cbval1 = param1;

            qrasterwindow_hideevent_callback(this, cbval1);
        } else {
            QRasterWindow::hideEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* param1) override {
        if (qrasterwindow_closeevent_isbase) {
            qrasterwindow_closeevent_isbase = false;
            QRasterWindow::closeEvent(param1);
        } else if (qrasterwindow_closeevent_callback != nullptr) {
            QCloseEvent* cbval1 = param1;

            qrasterwindow_closeevent_callback(this, cbval1);
        } else {
            QRasterWindow::closeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* param1) override {
        if (qrasterwindow_keypressevent_isbase) {
            qrasterwindow_keypressevent_isbase = false;
            QRasterWindow::keyPressEvent(param1);
        } else if (qrasterwindow_keypressevent_callback != nullptr) {
            QKeyEvent* cbval1 = param1;

            qrasterwindow_keypressevent_callback(this, cbval1);
        } else {
            QRasterWindow::keyPressEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* param1) override {
        if (qrasterwindow_keyreleaseevent_isbase) {
            qrasterwindow_keyreleaseevent_isbase = false;
            QRasterWindow::keyReleaseEvent(param1);
        } else if (qrasterwindow_keyreleaseevent_callback != nullptr) {
            QKeyEvent* cbval1 = param1;

            qrasterwindow_keyreleaseevent_callback(this, cbval1);
        } else {
            QRasterWindow::keyReleaseEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* param1) override {
        if (qrasterwindow_mousepressevent_isbase) {
            qrasterwindow_mousepressevent_isbase = false;
            QRasterWindow::mousePressEvent(param1);
        } else if (qrasterwindow_mousepressevent_callback != nullptr) {
            QMouseEvent* cbval1 = param1;

            qrasterwindow_mousepressevent_callback(this, cbval1);
        } else {
            QRasterWindow::mousePressEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* param1) override {
        if (qrasterwindow_mousereleaseevent_isbase) {
            qrasterwindow_mousereleaseevent_isbase = false;
            QRasterWindow::mouseReleaseEvent(param1);
        } else if (qrasterwindow_mousereleaseevent_callback != nullptr) {
            QMouseEvent* cbval1 = param1;

            qrasterwindow_mousereleaseevent_callback(this, cbval1);
        } else {
            QRasterWindow::mouseReleaseEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* param1) override {
        if (qrasterwindow_mousedoubleclickevent_isbase) {
            qrasterwindow_mousedoubleclickevent_isbase = false;
            QRasterWindow::mouseDoubleClickEvent(param1);
        } else if (qrasterwindow_mousedoubleclickevent_callback != nullptr) {
            QMouseEvent* cbval1 = param1;

            qrasterwindow_mousedoubleclickevent_callback(this, cbval1);
        } else {
            QRasterWindow::mouseDoubleClickEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* param1) override {
        if (qrasterwindow_mousemoveevent_isbase) {
            qrasterwindow_mousemoveevent_isbase = false;
            QRasterWindow::mouseMoveEvent(param1);
        } else if (qrasterwindow_mousemoveevent_callback != nullptr) {
            QMouseEvent* cbval1 = param1;

            qrasterwindow_mousemoveevent_callback(this, cbval1);
        } else {
            QRasterWindow::mouseMoveEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* param1) override {
        if (qrasterwindow_wheelevent_isbase) {
            qrasterwindow_wheelevent_isbase = false;
            QRasterWindow::wheelEvent(param1);
        } else if (qrasterwindow_wheelevent_callback != nullptr) {
            QWheelEvent* cbval1 = param1;

            qrasterwindow_wheelevent_callback(this, cbval1);
        } else {
            QRasterWindow::wheelEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void touchEvent(QTouchEvent* param1) override {
        if (qrasterwindow_touchevent_isbase) {
            qrasterwindow_touchevent_isbase = false;
            QRasterWindow::touchEvent(param1);
        } else if (qrasterwindow_touchevent_callback != nullptr) {
            QTouchEvent* cbval1 = param1;

            qrasterwindow_touchevent_callback(this, cbval1);
        } else {
            QRasterWindow::touchEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* param1) override {
        if (qrasterwindow_tabletevent_isbase) {
            qrasterwindow_tabletevent_isbase = false;
            QRasterWindow::tabletEvent(param1);
        } else if (qrasterwindow_tabletevent_callback != nullptr) {
            QTabletEvent* cbval1 = param1;

            qrasterwindow_tabletevent_callback(this, cbval1);
        } else {
            QRasterWindow::tabletEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qrasterwindow_nativeevent_isbase) {
            qrasterwindow_nativeevent_isbase = false;
            return QRasterWindow::nativeEvent(eventType, message, result);
        } else if (qrasterwindow_nativeevent_callback != nullptr) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<const char*>(malloc((eventType_str.len + 1) * sizeof(char)));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            ((char*)eventType_str.data)[eventType_str.len] = '\0';
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);

            bool callback_ret = qrasterwindow_nativeevent_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return QRasterWindow::nativeEvent(eventType, message, result);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qrasterwindow_eventfilter_isbase) {
            qrasterwindow_eventfilter_isbase = false;
            return QRasterWindow::eventFilter(watched, event);
        } else if (qrasterwindow_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qrasterwindow_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QRasterWindow::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qrasterwindow_timerevent_isbase) {
            qrasterwindow_timerevent_isbase = false;
            QRasterWindow::timerEvent(event);
        } else if (qrasterwindow_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qrasterwindow_timerevent_callback(this, cbval1);
        } else {
            QRasterWindow::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qrasterwindow_childevent_isbase) {
            qrasterwindow_childevent_isbase = false;
            QRasterWindow::childEvent(event);
        } else if (qrasterwindow_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qrasterwindow_childevent_callback(this, cbval1);
        } else {
            QRasterWindow::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qrasterwindow_customevent_isbase) {
            qrasterwindow_customevent_isbase = false;
            QRasterWindow::customEvent(event);
        } else if (qrasterwindow_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qrasterwindow_customevent_callback(this, cbval1);
        } else {
            QRasterWindow::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qrasterwindow_connectnotify_isbase) {
            qrasterwindow_connectnotify_isbase = false;
            QRasterWindow::connectNotify(signal);
        } else if (qrasterwindow_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qrasterwindow_connectnotify_callback(this, cbval1);
        } else {
            QRasterWindow::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qrasterwindow_disconnectnotify_isbase) {
            qrasterwindow_disconnectnotify_isbase = false;
            QRasterWindow::disconnectNotify(signal);
        } else if (qrasterwindow_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qrasterwindow_disconnectnotify_callback(this, cbval1);
        } else {
            QRasterWindow::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qrasterwindow_devtype_isbase) {
            qrasterwindow_devtype_isbase = false;
            return QRasterWindow::devType();
        } else if (qrasterwindow_devtype_callback != nullptr) {
            int callback_ret = qrasterwindow_devtype_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QRasterWindow::devType();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qrasterwindow_initpainter_isbase) {
            qrasterwindow_initpainter_isbase = false;
            QRasterWindow::initPainter(painter);
        } else if (qrasterwindow_initpainter_callback != nullptr) {
            QPainter* cbval1 = painter;

            qrasterwindow_initpainter_callback(this, cbval1);
        } else {
            QRasterWindow::initPainter(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qrasterwindow_sharedpainter_isbase) {
            qrasterwindow_sharedpainter_isbase = false;
            return QRasterWindow::sharedPainter();
        } else if (qrasterwindow_sharedpainter_callback != nullptr) {
            QPainter* callback_ret = qrasterwindow_sharedpainter_callback();
            return callback_ret;
        } else {
            return QRasterWindow::sharedPainter();
        }
    }

    // Virtual method for C ABI access and custom callback
    void* resolveInterface(const char* name, int revision) const {
        if (qrasterwindow_resolveinterface_isbase) {
            qrasterwindow_resolveinterface_isbase = false;
            return QRasterWindow::resolveInterface(name, revision);
        } else if (qrasterwindow_resolveinterface_callback != nullptr) {
            const char* cbval1 = (const char*)name;
            int cbval2 = revision;

            void* callback_ret = qrasterwindow_resolveinterface_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QRasterWindow::resolveInterface(name, revision);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qrasterwindow_sender_isbase) {
            qrasterwindow_sender_isbase = false;
            return QRasterWindow::sender();
        } else if (qrasterwindow_sender_callback != nullptr) {
            QObject* callback_ret = qrasterwindow_sender_callback();
            return callback_ret;
        } else {
            return QRasterWindow::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qrasterwindow_sendersignalindex_isbase) {
            qrasterwindow_sendersignalindex_isbase = false;
            return QRasterWindow::senderSignalIndex();
        } else if (qrasterwindow_sendersignalindex_callback != nullptr) {
            int callback_ret = qrasterwindow_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QRasterWindow::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qrasterwindow_receivers_isbase) {
            qrasterwindow_receivers_isbase = false;
            return QRasterWindow::receivers(signal);
        } else if (qrasterwindow_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qrasterwindow_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QRasterWindow::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qrasterwindow_issignalconnected_isbase) {
            qrasterwindow_issignalconnected_isbase = false;
            return QRasterWindow::isSignalConnected(signal);
        } else if (qrasterwindow_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qrasterwindow_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QRasterWindow::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend int QRasterWindow_Metric(const QRasterWindow* self, int metric);
    friend int QRasterWindow_QBaseMetric(const QRasterWindow* self, int metric);
    friend QPaintDevice* QRasterWindow_Redirected(const QRasterWindow* self, QPoint* param1);
    friend QPaintDevice* QRasterWindow_QBaseRedirected(const QRasterWindow* self, QPoint* param1);
    friend void QRasterWindow_ExposeEvent(QRasterWindow* self, QExposeEvent* param1);
    friend void QRasterWindow_QBaseExposeEvent(QRasterWindow* self, QExposeEvent* param1);
    friend void QRasterWindow_PaintEvent(QRasterWindow* self, QPaintEvent* event);
    friend void QRasterWindow_QBasePaintEvent(QRasterWindow* self, QPaintEvent* event);
    friend bool QRasterWindow_Event(QRasterWindow* self, QEvent* event);
    friend bool QRasterWindow_QBaseEvent(QRasterWindow* self, QEvent* event);
    friend void QRasterWindow_ResizeEvent(QRasterWindow* self, QResizeEvent* param1);
    friend void QRasterWindow_QBaseResizeEvent(QRasterWindow* self, QResizeEvent* param1);
    friend void QRasterWindow_MoveEvent(QRasterWindow* self, QMoveEvent* param1);
    friend void QRasterWindow_QBaseMoveEvent(QRasterWindow* self, QMoveEvent* param1);
    friend void QRasterWindow_FocusInEvent(QRasterWindow* self, QFocusEvent* param1);
    friend void QRasterWindow_QBaseFocusInEvent(QRasterWindow* self, QFocusEvent* param1);
    friend void QRasterWindow_FocusOutEvent(QRasterWindow* self, QFocusEvent* param1);
    friend void QRasterWindow_QBaseFocusOutEvent(QRasterWindow* self, QFocusEvent* param1);
    friend void QRasterWindow_ShowEvent(QRasterWindow* self, QShowEvent* param1);
    friend void QRasterWindow_QBaseShowEvent(QRasterWindow* self, QShowEvent* param1);
    friend void QRasterWindow_HideEvent(QRasterWindow* self, QHideEvent* param1);
    friend void QRasterWindow_QBaseHideEvent(QRasterWindow* self, QHideEvent* param1);
    friend void QRasterWindow_CloseEvent(QRasterWindow* self, QCloseEvent* param1);
    friend void QRasterWindow_QBaseCloseEvent(QRasterWindow* self, QCloseEvent* param1);
    friend void QRasterWindow_KeyPressEvent(QRasterWindow* self, QKeyEvent* param1);
    friend void QRasterWindow_QBaseKeyPressEvent(QRasterWindow* self, QKeyEvent* param1);
    friend void QRasterWindow_KeyReleaseEvent(QRasterWindow* self, QKeyEvent* param1);
    friend void QRasterWindow_QBaseKeyReleaseEvent(QRasterWindow* self, QKeyEvent* param1);
    friend void QRasterWindow_MousePressEvent(QRasterWindow* self, QMouseEvent* param1);
    friend void QRasterWindow_QBaseMousePressEvent(QRasterWindow* self, QMouseEvent* param1);
    friend void QRasterWindow_MouseReleaseEvent(QRasterWindow* self, QMouseEvent* param1);
    friend void QRasterWindow_QBaseMouseReleaseEvent(QRasterWindow* self, QMouseEvent* param1);
    friend void QRasterWindow_MouseDoubleClickEvent(QRasterWindow* self, QMouseEvent* param1);
    friend void QRasterWindow_QBaseMouseDoubleClickEvent(QRasterWindow* self, QMouseEvent* param1);
    friend void QRasterWindow_MouseMoveEvent(QRasterWindow* self, QMouseEvent* param1);
    friend void QRasterWindow_QBaseMouseMoveEvent(QRasterWindow* self, QMouseEvent* param1);
    friend void QRasterWindow_WheelEvent(QRasterWindow* self, QWheelEvent* param1);
    friend void QRasterWindow_QBaseWheelEvent(QRasterWindow* self, QWheelEvent* param1);
    friend void QRasterWindow_TouchEvent(QRasterWindow* self, QTouchEvent* param1);
    friend void QRasterWindow_QBaseTouchEvent(QRasterWindow* self, QTouchEvent* param1);
    friend void QRasterWindow_TabletEvent(QRasterWindow* self, QTabletEvent* param1);
    friend void QRasterWindow_QBaseTabletEvent(QRasterWindow* self, QTabletEvent* param1);
    friend bool QRasterWindow_NativeEvent(QRasterWindow* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool QRasterWindow_QBaseNativeEvent(QRasterWindow* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void QRasterWindow_TimerEvent(QRasterWindow* self, QTimerEvent* event);
    friend void QRasterWindow_QBaseTimerEvent(QRasterWindow* self, QTimerEvent* event);
    friend void QRasterWindow_ChildEvent(QRasterWindow* self, QChildEvent* event);
    friend void QRasterWindow_QBaseChildEvent(QRasterWindow* self, QChildEvent* event);
    friend void QRasterWindow_CustomEvent(QRasterWindow* self, QEvent* event);
    friend void QRasterWindow_QBaseCustomEvent(QRasterWindow* self, QEvent* event);
    friend void QRasterWindow_ConnectNotify(QRasterWindow* self, const QMetaMethod* signal);
    friend void QRasterWindow_QBaseConnectNotify(QRasterWindow* self, const QMetaMethod* signal);
    friend void QRasterWindow_DisconnectNotify(QRasterWindow* self, const QMetaMethod* signal);
    friend void QRasterWindow_QBaseDisconnectNotify(QRasterWindow* self, const QMetaMethod* signal);
    friend void QRasterWindow_InitPainter(const QRasterWindow* self, QPainter* painter);
    friend void QRasterWindow_QBaseInitPainter(const QRasterWindow* self, QPainter* painter);
    friend QPainter* QRasterWindow_SharedPainter(const QRasterWindow* self);
    friend QPainter* QRasterWindow_QBaseSharedPainter(const QRasterWindow* self);
    friend void* QRasterWindow_ResolveInterface(const QRasterWindow* self, const char* name, int revision);
    friend void* QRasterWindow_QBaseResolveInterface(const QRasterWindow* self, const char* name, int revision);
    friend QObject* QRasterWindow_Sender(const QRasterWindow* self);
    friend QObject* QRasterWindow_QBaseSender(const QRasterWindow* self);
    friend int QRasterWindow_SenderSignalIndex(const QRasterWindow* self);
    friend int QRasterWindow_QBaseSenderSignalIndex(const QRasterWindow* self);
    friend int QRasterWindow_Receivers(const QRasterWindow* self, const char* signal);
    friend int QRasterWindow_QBaseReceivers(const QRasterWindow* self, const char* signal);
    friend bool QRasterWindow_IsSignalConnected(const QRasterWindow* self, const QMetaMethod* signal);
    friend bool QRasterWindow_QBaseIsSignalConnected(const QRasterWindow* self, const QMetaMethod* signal);
};

#endif
