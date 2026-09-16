#pragma once
#ifndef QUICK_LIBQQUICKVIEW_HXX
#define QUICK_LIBQQUICKVIEW_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QQuickView so that we can call protected methods
class VirtualQQuickView final : public QQuickView {

  public:
    // Virtual class boolean flag
    bool isVirtualQQuickView = true;

    // Virtual class public types (including callbacks)
    using QQuickView_MetaObject_Callback = QMetaObject* (*)();
    using QQuickView_Metacast_Callback = void* (*)(QQuickView*, const char*);
    using QQuickView_Metacall_Callback = int (*)(QQuickView*, int, int, void**);
    using QQuickView_ResizeEvent_Callback = void (*)(QQuickView*, QResizeEvent*);
    using QQuickView_TimerEvent_Callback = void (*)(QQuickView*, QTimerEvent*);
    using QQuickView_KeyPressEvent_Callback = void (*)(QQuickView*, QKeyEvent*);
    using QQuickView_KeyReleaseEvent_Callback = void (*)(QQuickView*, QKeyEvent*);
    using QQuickView_MousePressEvent_Callback = void (*)(QQuickView*, QMouseEvent*);
    using QQuickView_MouseReleaseEvent_Callback = void (*)(QQuickView*, QMouseEvent*);
    using QQuickView_MouseMoveEvent_Callback = void (*)(QQuickView*, QMouseEvent*);
    using QQuickView_FocusObject_Callback = QObject* (*)();
    using QQuickView_AccessibleRoot_Callback = QAccessibleInterface* (*)();
    using QQuickView_ExposeEvent_Callback = void (*)(QQuickView*, QExposeEvent*);
    using QQuickView_ShowEvent_Callback = void (*)(QQuickView*, QShowEvent*);
    using QQuickView_HideEvent_Callback = void (*)(QQuickView*, QHideEvent*);
    using QQuickView_CloseEvent_Callback = void (*)(QQuickView*, QCloseEvent*);
    using QQuickView_FocusInEvent_Callback = void (*)(QQuickView*, QFocusEvent*);
    using QQuickView_FocusOutEvent_Callback = void (*)(QQuickView*, QFocusEvent*);
    using QQuickView_Event_Callback = bool (*)(QQuickView*, QEvent*);
    using QQuickView_MouseDoubleClickEvent_Callback = void (*)(QQuickView*, QMouseEvent*);
    using QQuickView_WheelEvent_Callback = void (*)(QQuickView*, QWheelEvent*);
    using QQuickView_TabletEvent_Callback = void (*)(QQuickView*, QTabletEvent*);
    using QQuickView_SurfaceType_Callback = int (*)();
    using QQuickView_Format_Callback = QSurfaceFormat* (*)();
    using QQuickView_Size_Callback = QSize* (*)();
    using QQuickView_PaintEvent_Callback = void (*)(QQuickView*, QPaintEvent*);
    using QQuickView_MoveEvent_Callback = void (*)(QQuickView*, QMoveEvent*);
    using QQuickView_TouchEvent_Callback = void (*)(QQuickView*, QTouchEvent*);
    using QQuickView_NativeEvent_Callback = bool (*)(QQuickView*, libqt_string, void*, intptr_t*);
    using QQuickView_EventFilter_Callback = bool (*)(QQuickView*, QObject*, QEvent*);
    using QQuickView_ChildEvent_Callback = void (*)(QQuickView*, QChildEvent*);
    using QQuickView_CustomEvent_Callback = void (*)(QQuickView*, QEvent*);
    using QQuickView_ConnectNotify_Callback = void (*)(QQuickView*, QMetaMethod*);
    using QQuickView_DisconnectNotify_Callback = void (*)(QQuickView*, QMetaMethod*);
    using QQuickView_ResolveInterface_Callback = void* (*)(const QQuickView*, const char*, int);
    using QQuickView_Sender_Callback = QObject* (*)();
    using QQuickView_SenderSignalIndex_Callback = int (*)();
    using QQuickView_Receivers_Callback = int (*)(const QQuickView*, const char*);
    using QQuickView_IsSignalConnected_Callback = bool (*)(const QQuickView*, QMetaMethod*);

  protected:
    // Instance callback storage
    QQuickView_MetaObject_Callback qquickview_metaobject_callback = nullptr;
    QQuickView_Metacast_Callback qquickview_metacast_callback = nullptr;
    QQuickView_Metacall_Callback qquickview_metacall_callback = nullptr;
    QQuickView_ResizeEvent_Callback qquickview_resizeevent_callback = nullptr;
    QQuickView_TimerEvent_Callback qquickview_timerevent_callback = nullptr;
    QQuickView_KeyPressEvent_Callback qquickview_keypressevent_callback = nullptr;
    QQuickView_KeyReleaseEvent_Callback qquickview_keyreleaseevent_callback = nullptr;
    QQuickView_MousePressEvent_Callback qquickview_mousepressevent_callback = nullptr;
    QQuickView_MouseReleaseEvent_Callback qquickview_mousereleaseevent_callback = nullptr;
    QQuickView_MouseMoveEvent_Callback qquickview_mousemoveevent_callback = nullptr;
    QQuickView_FocusObject_Callback qquickview_focusobject_callback = nullptr;
    QQuickView_AccessibleRoot_Callback qquickview_accessibleroot_callback = nullptr;
    QQuickView_ExposeEvent_Callback qquickview_exposeevent_callback = nullptr;
    QQuickView_ShowEvent_Callback qquickview_showevent_callback = nullptr;
    QQuickView_HideEvent_Callback qquickview_hideevent_callback = nullptr;
    QQuickView_CloseEvent_Callback qquickview_closeevent_callback = nullptr;
    QQuickView_FocusInEvent_Callback qquickview_focusinevent_callback = nullptr;
    QQuickView_FocusOutEvent_Callback qquickview_focusoutevent_callback = nullptr;
    QQuickView_Event_Callback qquickview_event_callback = nullptr;
    QQuickView_MouseDoubleClickEvent_Callback qquickview_mousedoubleclickevent_callback = nullptr;
    QQuickView_WheelEvent_Callback qquickview_wheelevent_callback = nullptr;
    QQuickView_TabletEvent_Callback qquickview_tabletevent_callback = nullptr;
    QQuickView_SurfaceType_Callback qquickview_surfacetype_callback = nullptr;
    QQuickView_Format_Callback qquickview_format_callback = nullptr;
    QQuickView_Size_Callback qquickview_size_callback = nullptr;
    QQuickView_PaintEvent_Callback qquickview_paintevent_callback = nullptr;
    QQuickView_MoveEvent_Callback qquickview_moveevent_callback = nullptr;
    QQuickView_TouchEvent_Callback qquickview_touchevent_callback = nullptr;
    QQuickView_NativeEvent_Callback qquickview_nativeevent_callback = nullptr;
    QQuickView_EventFilter_Callback qquickview_eventfilter_callback = nullptr;
    QQuickView_ChildEvent_Callback qquickview_childevent_callback = nullptr;
    QQuickView_CustomEvent_Callback qquickview_customevent_callback = nullptr;
    QQuickView_ConnectNotify_Callback qquickview_connectnotify_callback = nullptr;
    QQuickView_DisconnectNotify_Callback qquickview_disconnectnotify_callback = nullptr;
    QQuickView_ResolveInterface_Callback qquickview_resolveinterface_callback = nullptr;
    QQuickView_Sender_Callback qquickview_sender_callback = nullptr;
    QQuickView_SenderSignalIndex_Callback qquickview_sendersignalindex_callback = nullptr;
    QQuickView_Receivers_Callback qquickview_receivers_callback = nullptr;
    QQuickView_IsSignalConnected_Callback qquickview_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qquickview_metaobject_isbase = false;
    mutable bool qquickview_metacast_isbase = false;
    mutable bool qquickview_metacall_isbase = false;
    mutable bool qquickview_resizeevent_isbase = false;
    mutable bool qquickview_timerevent_isbase = false;
    mutable bool qquickview_keypressevent_isbase = false;
    mutable bool qquickview_keyreleaseevent_isbase = false;
    mutable bool qquickview_mousepressevent_isbase = false;
    mutable bool qquickview_mousereleaseevent_isbase = false;
    mutable bool qquickview_mousemoveevent_isbase = false;
    mutable bool qquickview_focusobject_isbase = false;
    mutable bool qquickview_accessibleroot_isbase = false;
    mutable bool qquickview_exposeevent_isbase = false;
    mutable bool qquickview_showevent_isbase = false;
    mutable bool qquickview_hideevent_isbase = false;
    mutable bool qquickview_closeevent_isbase = false;
    mutable bool qquickview_focusinevent_isbase = false;
    mutable bool qquickview_focusoutevent_isbase = false;
    mutable bool qquickview_event_isbase = false;
    mutable bool qquickview_mousedoubleclickevent_isbase = false;
    mutable bool qquickview_wheelevent_isbase = false;
    mutable bool qquickview_tabletevent_isbase = false;
    mutable bool qquickview_surfacetype_isbase = false;
    mutable bool qquickview_format_isbase = false;
    mutable bool qquickview_size_isbase = false;
    mutable bool qquickview_paintevent_isbase = false;
    mutable bool qquickview_moveevent_isbase = false;
    mutable bool qquickview_touchevent_isbase = false;
    mutable bool qquickview_nativeevent_isbase = false;
    mutable bool qquickview_eventfilter_isbase = false;
    mutable bool qquickview_childevent_isbase = false;
    mutable bool qquickview_customevent_isbase = false;
    mutable bool qquickview_connectnotify_isbase = false;
    mutable bool qquickview_disconnectnotify_isbase = false;
    mutable bool qquickview_resolveinterface_isbase = false;
    mutable bool qquickview_sender_isbase = false;
    mutable bool qquickview_sendersignalindex_isbase = false;
    mutable bool qquickview_receivers_isbase = false;
    mutable bool qquickview_issignalconnected_isbase = false;

  public:
    VirtualQQuickView() : QQuickView() {};
    VirtualQQuickView(QQmlEngine* engine, QWindow* parent) : QQuickView(engine, parent) {};
    VirtualQQuickView(const QUrl& source) : QQuickView(source) {};
    VirtualQQuickView(QAnyStringView uri, QAnyStringView typeName) : QQuickView(uri, typeName) {};
    VirtualQQuickView(const QUrl& source, QQuickRenderControl* renderControl) : QQuickView(source, renderControl) {};
    VirtualQQuickView(QWindow* parent) : QQuickView(parent) {};
    VirtualQQuickView(const QUrl& source, QWindow* parent) : QQuickView(source, parent) {};
    VirtualQQuickView(QAnyStringView uri, QAnyStringView typeName, QWindow* parent) : QQuickView(uri, typeName, parent) {};

    // Callback setters
    inline void setQQuickView_MetaObject_Callback(QQuickView_MetaObject_Callback cb) { qquickview_metaobject_callback = cb; }
    inline void setQQuickView_Metacast_Callback(QQuickView_Metacast_Callback cb) { qquickview_metacast_callback = cb; }
    inline void setQQuickView_Metacall_Callback(QQuickView_Metacall_Callback cb) { qquickview_metacall_callback = cb; }
    inline void setQQuickView_ResizeEvent_Callback(QQuickView_ResizeEvent_Callback cb) { qquickview_resizeevent_callback = cb; }
    inline void setQQuickView_TimerEvent_Callback(QQuickView_TimerEvent_Callback cb) { qquickview_timerevent_callback = cb; }
    inline void setQQuickView_KeyPressEvent_Callback(QQuickView_KeyPressEvent_Callback cb) { qquickview_keypressevent_callback = cb; }
    inline void setQQuickView_KeyReleaseEvent_Callback(QQuickView_KeyReleaseEvent_Callback cb) { qquickview_keyreleaseevent_callback = cb; }
    inline void setQQuickView_MousePressEvent_Callback(QQuickView_MousePressEvent_Callback cb) { qquickview_mousepressevent_callback = cb; }
    inline void setQQuickView_MouseReleaseEvent_Callback(QQuickView_MouseReleaseEvent_Callback cb) { qquickview_mousereleaseevent_callback = cb; }
    inline void setQQuickView_MouseMoveEvent_Callback(QQuickView_MouseMoveEvent_Callback cb) { qquickview_mousemoveevent_callback = cb; }
    inline void setQQuickView_FocusObject_Callback(QQuickView_FocusObject_Callback cb) { qquickview_focusobject_callback = cb; }
    inline void setQQuickView_AccessibleRoot_Callback(QQuickView_AccessibleRoot_Callback cb) { qquickview_accessibleroot_callback = cb; }
    inline void setQQuickView_ExposeEvent_Callback(QQuickView_ExposeEvent_Callback cb) { qquickview_exposeevent_callback = cb; }
    inline void setQQuickView_ShowEvent_Callback(QQuickView_ShowEvent_Callback cb) { qquickview_showevent_callback = cb; }
    inline void setQQuickView_HideEvent_Callback(QQuickView_HideEvent_Callback cb) { qquickview_hideevent_callback = cb; }
    inline void setQQuickView_CloseEvent_Callback(QQuickView_CloseEvent_Callback cb) { qquickview_closeevent_callback = cb; }
    inline void setQQuickView_FocusInEvent_Callback(QQuickView_FocusInEvent_Callback cb) { qquickview_focusinevent_callback = cb; }
    inline void setQQuickView_FocusOutEvent_Callback(QQuickView_FocusOutEvent_Callback cb) { qquickview_focusoutevent_callback = cb; }
    inline void setQQuickView_Event_Callback(QQuickView_Event_Callback cb) { qquickview_event_callback = cb; }
    inline void setQQuickView_MouseDoubleClickEvent_Callback(QQuickView_MouseDoubleClickEvent_Callback cb) { qquickview_mousedoubleclickevent_callback = cb; }
    inline void setQQuickView_WheelEvent_Callback(QQuickView_WheelEvent_Callback cb) { qquickview_wheelevent_callback = cb; }
    inline void setQQuickView_TabletEvent_Callback(QQuickView_TabletEvent_Callback cb) { qquickview_tabletevent_callback = cb; }
    inline void setQQuickView_SurfaceType_Callback(QQuickView_SurfaceType_Callback cb) { qquickview_surfacetype_callback = cb; }
    inline void setQQuickView_Format_Callback(QQuickView_Format_Callback cb) { qquickview_format_callback = cb; }
    inline void setQQuickView_Size_Callback(QQuickView_Size_Callback cb) { qquickview_size_callback = cb; }
    inline void setQQuickView_PaintEvent_Callback(QQuickView_PaintEvent_Callback cb) { qquickview_paintevent_callback = cb; }
    inline void setQQuickView_MoveEvent_Callback(QQuickView_MoveEvent_Callback cb) { qquickview_moveevent_callback = cb; }
    inline void setQQuickView_TouchEvent_Callback(QQuickView_TouchEvent_Callback cb) { qquickview_touchevent_callback = cb; }
    inline void setQQuickView_NativeEvent_Callback(QQuickView_NativeEvent_Callback cb) { qquickview_nativeevent_callback = cb; }
    inline void setQQuickView_EventFilter_Callback(QQuickView_EventFilter_Callback cb) { qquickview_eventfilter_callback = cb; }
    inline void setQQuickView_ChildEvent_Callback(QQuickView_ChildEvent_Callback cb) { qquickview_childevent_callback = cb; }
    inline void setQQuickView_CustomEvent_Callback(QQuickView_CustomEvent_Callback cb) { qquickview_customevent_callback = cb; }
    inline void setQQuickView_ConnectNotify_Callback(QQuickView_ConnectNotify_Callback cb) { qquickview_connectnotify_callback = cb; }
    inline void setQQuickView_DisconnectNotify_Callback(QQuickView_DisconnectNotify_Callback cb) { qquickview_disconnectnotify_callback = cb; }
    inline void setQQuickView_ResolveInterface_Callback(QQuickView_ResolveInterface_Callback cb) { qquickview_resolveinterface_callback = cb; }
    inline void setQQuickView_Sender_Callback(QQuickView_Sender_Callback cb) { qquickview_sender_callback = cb; }
    inline void setQQuickView_SenderSignalIndex_Callback(QQuickView_SenderSignalIndex_Callback cb) { qquickview_sendersignalindex_callback = cb; }
    inline void setQQuickView_Receivers_Callback(QQuickView_Receivers_Callback cb) { qquickview_receivers_callback = cb; }
    inline void setQQuickView_IsSignalConnected_Callback(QQuickView_IsSignalConnected_Callback cb) { qquickview_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQQuickView_MetaObject_IsBase(bool value) const { qquickview_metaobject_isbase = value; }
    inline void setQQuickView_Metacast_IsBase(bool value) const { qquickview_metacast_isbase = value; }
    inline void setQQuickView_Metacall_IsBase(bool value) const { qquickview_metacall_isbase = value; }
    inline void setQQuickView_ResizeEvent_IsBase(bool value) const { qquickview_resizeevent_isbase = value; }
    inline void setQQuickView_TimerEvent_IsBase(bool value) const { qquickview_timerevent_isbase = value; }
    inline void setQQuickView_KeyPressEvent_IsBase(bool value) const { qquickview_keypressevent_isbase = value; }
    inline void setQQuickView_KeyReleaseEvent_IsBase(bool value) const { qquickview_keyreleaseevent_isbase = value; }
    inline void setQQuickView_MousePressEvent_IsBase(bool value) const { qquickview_mousepressevent_isbase = value; }
    inline void setQQuickView_MouseReleaseEvent_IsBase(bool value) const { qquickview_mousereleaseevent_isbase = value; }
    inline void setQQuickView_MouseMoveEvent_IsBase(bool value) const { qquickview_mousemoveevent_isbase = value; }
    inline void setQQuickView_FocusObject_IsBase(bool value) const { qquickview_focusobject_isbase = value; }
    inline void setQQuickView_AccessibleRoot_IsBase(bool value) const { qquickview_accessibleroot_isbase = value; }
    inline void setQQuickView_ExposeEvent_IsBase(bool value) const { qquickview_exposeevent_isbase = value; }
    inline void setQQuickView_ShowEvent_IsBase(bool value) const { qquickview_showevent_isbase = value; }
    inline void setQQuickView_HideEvent_IsBase(bool value) const { qquickview_hideevent_isbase = value; }
    inline void setQQuickView_CloseEvent_IsBase(bool value) const { qquickview_closeevent_isbase = value; }
    inline void setQQuickView_FocusInEvent_IsBase(bool value) const { qquickview_focusinevent_isbase = value; }
    inline void setQQuickView_FocusOutEvent_IsBase(bool value) const { qquickview_focusoutevent_isbase = value; }
    inline void setQQuickView_Event_IsBase(bool value) const { qquickview_event_isbase = value; }
    inline void setQQuickView_MouseDoubleClickEvent_IsBase(bool value) const { qquickview_mousedoubleclickevent_isbase = value; }
    inline void setQQuickView_WheelEvent_IsBase(bool value) const { qquickview_wheelevent_isbase = value; }
    inline void setQQuickView_TabletEvent_IsBase(bool value) const { qquickview_tabletevent_isbase = value; }
    inline void setQQuickView_SurfaceType_IsBase(bool value) const { qquickview_surfacetype_isbase = value; }
    inline void setQQuickView_Format_IsBase(bool value) const { qquickview_format_isbase = value; }
    inline void setQQuickView_Size_IsBase(bool value) const { qquickview_size_isbase = value; }
    inline void setQQuickView_PaintEvent_IsBase(bool value) const { qquickview_paintevent_isbase = value; }
    inline void setQQuickView_MoveEvent_IsBase(bool value) const { qquickview_moveevent_isbase = value; }
    inline void setQQuickView_TouchEvent_IsBase(bool value) const { qquickview_touchevent_isbase = value; }
    inline void setQQuickView_NativeEvent_IsBase(bool value) const { qquickview_nativeevent_isbase = value; }
    inline void setQQuickView_EventFilter_IsBase(bool value) const { qquickview_eventfilter_isbase = value; }
    inline void setQQuickView_ChildEvent_IsBase(bool value) const { qquickview_childevent_isbase = value; }
    inline void setQQuickView_CustomEvent_IsBase(bool value) const { qquickview_customevent_isbase = value; }
    inline void setQQuickView_ConnectNotify_IsBase(bool value) const { qquickview_connectnotify_isbase = value; }
    inline void setQQuickView_DisconnectNotify_IsBase(bool value) const { qquickview_disconnectnotify_isbase = value; }
    inline void setQQuickView_ResolveInterface_IsBase(bool value) const { qquickview_resolveinterface_isbase = value; }
    inline void setQQuickView_Sender_IsBase(bool value) const { qquickview_sender_isbase = value; }
    inline void setQQuickView_SenderSignalIndex_IsBase(bool value) const { qquickview_sendersignalindex_isbase = value; }
    inline void setQQuickView_Receivers_IsBase(bool value) const { qquickview_receivers_isbase = value; }
    inline void setQQuickView_IsSignalConnected_IsBase(bool value) const { qquickview_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qquickview_metaobject_isbase) {
            qquickview_metaobject_isbase = false;
            return QQuickView::metaObject();
        }
        auto metaobject_cb = qquickview_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QQuickView::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qquickview_metacast_isbase) {
            qquickview_metacast_isbase = false;
            return QQuickView::qt_metacast(param1);
        }
        auto metacast_cb = qquickview_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QQuickView::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qquickview_metacall_isbase) {
            qquickview_metacall_isbase = false;
            return QQuickView::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qquickview_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QQuickView::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* param1) override {
        if (qquickview_resizeevent_isbase) {
            qquickview_resizeevent_isbase = false;
            QQuickView::resizeEvent(param1);
            return;
        }
        auto resizeevent_cb = qquickview_resizeevent_callback;
        if (resizeevent_cb) {
            QResizeEvent* cbval1 = param1;
            resizeevent_cb(this, cbval1);
            return;
        }
        QQuickView::resizeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* param1) override {
        if (qquickview_timerevent_isbase) {
            qquickview_timerevent_isbase = false;
            QQuickView::timerEvent(param1);
            return;
        }
        auto timerevent_cb = qquickview_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = param1;
            timerevent_cb(this, cbval1);
            return;
        }
        QQuickView::timerEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* param1) override {
        if (qquickview_keypressevent_isbase) {
            qquickview_keypressevent_isbase = false;
            QQuickView::keyPressEvent(param1);
            return;
        }
        auto keypressevent_cb = qquickview_keypressevent_callback;
        if (keypressevent_cb) {
            QKeyEvent* cbval1 = param1;
            keypressevent_cb(this, cbval1);
            return;
        }
        QQuickView::keyPressEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* param1) override {
        if (qquickview_keyreleaseevent_isbase) {
            qquickview_keyreleaseevent_isbase = false;
            QQuickView::keyReleaseEvent(param1);
            return;
        }
        auto keyreleaseevent_cb = qquickview_keyreleaseevent_callback;
        if (keyreleaseevent_cb) {
            QKeyEvent* cbval1 = param1;
            keyreleaseevent_cb(this, cbval1);
            return;
        }
        QQuickView::keyReleaseEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* param1) override {
        if (qquickview_mousepressevent_isbase) {
            qquickview_mousepressevent_isbase = false;
            QQuickView::mousePressEvent(param1);
            return;
        }
        auto mousepressevent_cb = qquickview_mousepressevent_callback;
        if (mousepressevent_cb) {
            QMouseEvent* cbval1 = param1;
            mousepressevent_cb(this, cbval1);
            return;
        }
        QQuickView::mousePressEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* param1) override {
        if (qquickview_mousereleaseevent_isbase) {
            qquickview_mousereleaseevent_isbase = false;
            QQuickView::mouseReleaseEvent(param1);
            return;
        }
        auto mousereleaseevent_cb = qquickview_mousereleaseevent_callback;
        if (mousereleaseevent_cb) {
            QMouseEvent* cbval1 = param1;
            mousereleaseevent_cb(this, cbval1);
            return;
        }
        QQuickView::mouseReleaseEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* param1) override {
        if (qquickview_mousemoveevent_isbase) {
            qquickview_mousemoveevent_isbase = false;
            QQuickView::mouseMoveEvent(param1);
            return;
        }
        auto mousemoveevent_cb = qquickview_mousemoveevent_callback;
        if (mousemoveevent_cb) {
            QMouseEvent* cbval1 = param1;
            mousemoveevent_cb(this, cbval1);
            return;
        }
        QQuickView::mouseMoveEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QObject* focusObject() const override {
        if (qquickview_focusobject_isbase) {
            qquickview_focusobject_isbase = false;
            return QQuickView::focusObject();
        }
        auto focusobject_cb = qquickview_focusobject_callback;
        if (focusobject_cb) {
            QObject* callback_ret = focusobject_cb();
            return callback_ret;
        }
        return QQuickView::focusObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual QAccessibleInterface* accessibleRoot() const override {
        if (qquickview_accessibleroot_isbase) {
            qquickview_accessibleroot_isbase = false;
            return QQuickView::accessibleRoot();
        }
        auto accessibleroot_cb = qquickview_accessibleroot_callback;
        if (accessibleroot_cb) {
            QAccessibleInterface* callback_ret = accessibleroot_cb();
            return callback_ret;
        }
        return QQuickView::accessibleRoot();
    }

    // Virtual method for C ABI access and custom callback
    virtual void exposeEvent(QExposeEvent* param1) override {
        if (qquickview_exposeevent_isbase) {
            qquickview_exposeevent_isbase = false;
            QQuickView::exposeEvent(param1);
            return;
        }
        auto exposeevent_cb = qquickview_exposeevent_callback;
        if (exposeevent_cb) {
            QExposeEvent* cbval1 = param1;
            exposeevent_cb(this, cbval1);
            return;
        }
        QQuickView::exposeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* param1) override {
        if (qquickview_showevent_isbase) {
            qquickview_showevent_isbase = false;
            QQuickView::showEvent(param1);
            return;
        }
        auto showevent_cb = qquickview_showevent_callback;
        if (showevent_cb) {
            QShowEvent* cbval1 = param1;
            showevent_cb(this, cbval1);
            return;
        }
        QQuickView::showEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* param1) override {
        if (qquickview_hideevent_isbase) {
            qquickview_hideevent_isbase = false;
            QQuickView::hideEvent(param1);
            return;
        }
        auto hideevent_cb = qquickview_hideevent_callback;
        if (hideevent_cb) {
            QHideEvent* cbval1 = param1;
            hideevent_cb(this, cbval1);
            return;
        }
        QQuickView::hideEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* param1) override {
        if (qquickview_closeevent_isbase) {
            qquickview_closeevent_isbase = false;
            QQuickView::closeEvent(param1);
            return;
        }
        auto closeevent_cb = qquickview_closeevent_callback;
        if (closeevent_cb) {
            QCloseEvent* cbval1 = param1;
            closeevent_cb(this, cbval1);
            return;
        }
        QQuickView::closeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* param1) override {
        if (qquickview_focusinevent_isbase) {
            qquickview_focusinevent_isbase = false;
            QQuickView::focusInEvent(param1);
            return;
        }
        auto focusinevent_cb = qquickview_focusinevent_callback;
        if (focusinevent_cb) {
            QFocusEvent* cbval1 = param1;
            focusinevent_cb(this, cbval1);
            return;
        }
        QQuickView::focusInEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* param1) override {
        if (qquickview_focusoutevent_isbase) {
            qquickview_focusoutevent_isbase = false;
            QQuickView::focusOutEvent(param1);
            return;
        }
        auto focusoutevent_cb = qquickview_focusoutevent_callback;
        if (focusoutevent_cb) {
            QFocusEvent* cbval1 = param1;
            focusoutevent_cb(this, cbval1);
            return;
        }
        QQuickView::focusOutEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* param1) override {
        if (qquickview_event_isbase) {
            qquickview_event_isbase = false;
            return QQuickView::event(param1);
        }
        auto event_cb = qquickview_event_callback;
        if (event_cb) {
            QEvent* cbval1 = param1;
            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QQuickView::event(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* param1) override {
        if (qquickview_mousedoubleclickevent_isbase) {
            qquickview_mousedoubleclickevent_isbase = false;
            QQuickView::mouseDoubleClickEvent(param1);
            return;
        }
        auto mousedoubleclickevent_cb = qquickview_mousedoubleclickevent_callback;
        if (mousedoubleclickevent_cb) {
            QMouseEvent* cbval1 = param1;
            mousedoubleclickevent_cb(this, cbval1);
            return;
        }
        QQuickView::mouseDoubleClickEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* param1) override {
        if (qquickview_wheelevent_isbase) {
            qquickview_wheelevent_isbase = false;
            QQuickView::wheelEvent(param1);
            return;
        }
        auto wheelevent_cb = qquickview_wheelevent_callback;
        if (wheelevent_cb) {
            QWheelEvent* cbval1 = param1;
            wheelevent_cb(this, cbval1);
            return;
        }
        QQuickView::wheelEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* param1) override {
        if (qquickview_tabletevent_isbase) {
            qquickview_tabletevent_isbase = false;
            QQuickView::tabletEvent(param1);
            return;
        }
        auto tabletevent_cb = qquickview_tabletevent_callback;
        if (tabletevent_cb) {
            QTabletEvent* cbval1 = param1;
            tabletevent_cb(this, cbval1);
            return;
        }
        QQuickView::tabletEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSurface::SurfaceType surfaceType() const override {
        if (qquickview_surfacetype_isbase) {
            qquickview_surfacetype_isbase = false;
            return QQuickView::surfaceType();
        }
        auto surfacetype_cb = qquickview_surfacetype_callback;
        if (surfacetype_cb) {
            int callback_ret = surfacetype_cb();
            return static_cast<QSurface::SurfaceType>(callback_ret);
        }
        return QQuickView::surfaceType();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSurfaceFormat format() const override {
        if (qquickview_format_isbase) {
            qquickview_format_isbase = false;
            return QQuickView::format();
        }
        auto format_cb = qquickview_format_callback;
        if (format_cb) {
            QSurfaceFormat* callback_ret = format_cb();
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QQuickView::format();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize size() const override {
        if (qquickview_size_isbase) {
            qquickview_size_isbase = false;
            return QQuickView::size();
        }
        auto size_cb = qquickview_size_callback;
        if (size_cb) {
            QSize* callback_ret = size_cb();
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QQuickView::size();
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* param1) override {
        if (qquickview_paintevent_isbase) {
            qquickview_paintevent_isbase = false;
            QQuickView::paintEvent(param1);
            return;
        }
        auto paintevent_cb = qquickview_paintevent_callback;
        if (paintevent_cb) {
            QPaintEvent* cbval1 = param1;
            paintevent_cb(this, cbval1);
            return;
        }
        QQuickView::paintEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* param1) override {
        if (qquickview_moveevent_isbase) {
            qquickview_moveevent_isbase = false;
            QQuickView::moveEvent(param1);
            return;
        }
        auto moveevent_cb = qquickview_moveevent_callback;
        if (moveevent_cb) {
            QMoveEvent* cbval1 = param1;
            moveevent_cb(this, cbval1);
            return;
        }
        QQuickView::moveEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void touchEvent(QTouchEvent* param1) override {
        if (qquickview_touchevent_isbase) {
            qquickview_touchevent_isbase = false;
            QQuickView::touchEvent(param1);
            return;
        }
        auto touchevent_cb = qquickview_touchevent_callback;
        if (touchevent_cb) {
            QTouchEvent* cbval1 = param1;
            touchevent_cb(this, cbval1);
            return;
        }
        QQuickView::touchEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qquickview_nativeevent_isbase) {
            qquickview_nativeevent_isbase = false;
            return QQuickView::nativeEvent(eventType, message, result);
        }
        auto nativeevent_cb = qquickview_nativeevent_callback;
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
        return QQuickView::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qquickview_eventfilter_isbase) {
            qquickview_eventfilter_isbase = false;
            return QQuickView::eventFilter(watched, event);
        }
        auto eventfilter_cb = qquickview_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QQuickView::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qquickview_childevent_isbase) {
            qquickview_childevent_isbase = false;
            QQuickView::childEvent(event);
            return;
        }
        auto childevent_cb = qquickview_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;
            childevent_cb(this, cbval1);
            return;
        }
        QQuickView::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qquickview_customevent_isbase) {
            qquickview_customevent_isbase = false;
            QQuickView::customEvent(event);
            return;
        }
        auto customevent_cb = qquickview_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;
            customevent_cb(this, cbval1);
            return;
        }
        QQuickView::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qquickview_connectnotify_isbase) {
            qquickview_connectnotify_isbase = false;
            QQuickView::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qquickview_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            connectnotify_cb(this, cbval1);
            return;
        }
        QQuickView::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qquickview_disconnectnotify_isbase) {
            qquickview_disconnectnotify_isbase = false;
            QQuickView::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qquickview_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            disconnectnotify_cb(this, cbval1);
            return;
        }
        QQuickView::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    void* resolveInterface(const char* name, int revision) const {
        if (qquickview_resolveinterface_isbase) {
            qquickview_resolveinterface_isbase = false;
            return QQuickView::resolveInterface(name, revision);
        }
        auto resolveinterface_cb = qquickview_resolveinterface_callback;
        if (resolveinterface_cb) {
            const char* cbval1 = (const char*)name;
            int cbval2 = revision;
            void* callback_ret = resolveinterface_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QQuickView::resolveInterface(name, revision);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qquickview_sender_isbase) {
            qquickview_sender_isbase = false;
            return QQuickView::sender();
        }
        auto sender_cb = qquickview_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QQuickView::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qquickview_sendersignalindex_isbase) {
            qquickview_sendersignalindex_isbase = false;
            return QQuickView::senderSignalIndex();
        }
        auto sendersignalindex_cb = qquickview_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QQuickView::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qquickview_receivers_isbase) {
            qquickview_receivers_isbase = false;
            return QQuickView::receivers(signal);
        }
        auto receivers_cb = qquickview_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;
            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QQuickView::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qquickview_issignalconnected_isbase) {
            qquickview_issignalconnected_isbase = false;
            return QQuickView::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qquickview_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QQuickView::isSignalConnected(signal);
    }

    // Friend functions
    friend void QQuickView_ResizeEvent(QQuickView* self, QResizeEvent* param1);
    friend void QQuickView_SuperResizeEvent(QQuickView* self, QResizeEvent* param1);
    friend void QQuickView_TimerEvent(QQuickView* self, QTimerEvent* param1);
    friend void QQuickView_SuperTimerEvent(QQuickView* self, QTimerEvent* param1);
    friend void QQuickView_KeyPressEvent(QQuickView* self, QKeyEvent* param1);
    friend void QQuickView_SuperKeyPressEvent(QQuickView* self, QKeyEvent* param1);
    friend void QQuickView_KeyReleaseEvent(QQuickView* self, QKeyEvent* param1);
    friend void QQuickView_SuperKeyReleaseEvent(QQuickView* self, QKeyEvent* param1);
    friend void QQuickView_MousePressEvent(QQuickView* self, QMouseEvent* param1);
    friend void QQuickView_SuperMousePressEvent(QQuickView* self, QMouseEvent* param1);
    friend void QQuickView_MouseReleaseEvent(QQuickView* self, QMouseEvent* param1);
    friend void QQuickView_SuperMouseReleaseEvent(QQuickView* self, QMouseEvent* param1);
    friend void QQuickView_MouseMoveEvent(QQuickView* self, QMouseEvent* param1);
    friend void QQuickView_SuperMouseMoveEvent(QQuickView* self, QMouseEvent* param1);
    friend void QQuickView_ExposeEvent(QQuickView* self, QExposeEvent* param1);
    friend void QQuickView_SuperExposeEvent(QQuickView* self, QExposeEvent* param1);
    friend void QQuickView_ShowEvent(QQuickView* self, QShowEvent* param1);
    friend void QQuickView_SuperShowEvent(QQuickView* self, QShowEvent* param1);
    friend void QQuickView_HideEvent(QQuickView* self, QHideEvent* param1);
    friend void QQuickView_SuperHideEvent(QQuickView* self, QHideEvent* param1);
    friend void QQuickView_CloseEvent(QQuickView* self, QCloseEvent* param1);
    friend void QQuickView_SuperCloseEvent(QQuickView* self, QCloseEvent* param1);
    friend void QQuickView_FocusInEvent(QQuickView* self, QFocusEvent* param1);
    friend void QQuickView_SuperFocusInEvent(QQuickView* self, QFocusEvent* param1);
    friend void QQuickView_FocusOutEvent(QQuickView* self, QFocusEvent* param1);
    friend void QQuickView_SuperFocusOutEvent(QQuickView* self, QFocusEvent* param1);
    friend bool QQuickView_Event(QQuickView* self, QEvent* param1);
    friend bool QQuickView_SuperEvent(QQuickView* self, QEvent* param1);
    friend void QQuickView_MouseDoubleClickEvent(QQuickView* self, QMouseEvent* param1);
    friend void QQuickView_SuperMouseDoubleClickEvent(QQuickView* self, QMouseEvent* param1);
    friend void QQuickView_WheelEvent(QQuickView* self, QWheelEvent* param1);
    friend void QQuickView_SuperWheelEvent(QQuickView* self, QWheelEvent* param1);
    friend void QQuickView_TabletEvent(QQuickView* self, QTabletEvent* param1);
    friend void QQuickView_SuperTabletEvent(QQuickView* self, QTabletEvent* param1);
    friend void QQuickView_PaintEvent(QQuickView* self, QPaintEvent* param1);
    friend void QQuickView_SuperPaintEvent(QQuickView* self, QPaintEvent* param1);
    friend void QQuickView_MoveEvent(QQuickView* self, QMoveEvent* param1);
    friend void QQuickView_SuperMoveEvent(QQuickView* self, QMoveEvent* param1);
    friend void QQuickView_TouchEvent(QQuickView* self, QTouchEvent* param1);
    friend void QQuickView_SuperTouchEvent(QQuickView* self, QTouchEvent* param1);
    friend bool QQuickView_NativeEvent(QQuickView* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool QQuickView_SuperNativeEvent(QQuickView* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void QQuickView_ChildEvent(QQuickView* self, QChildEvent* event);
    friend void QQuickView_SuperChildEvent(QQuickView* self, QChildEvent* event);
    friend void QQuickView_CustomEvent(QQuickView* self, QEvent* event);
    friend void QQuickView_SuperCustomEvent(QQuickView* self, QEvent* event);
    friend void QQuickView_ConnectNotify(QQuickView* self, const QMetaMethod* signal);
    friend void QQuickView_SuperConnectNotify(QQuickView* self, const QMetaMethod* signal);
    friend void QQuickView_DisconnectNotify(QQuickView* self, const QMetaMethod* signal);
    friend void QQuickView_SuperDisconnectNotify(QQuickView* self, const QMetaMethod* signal);
    friend void* QQuickView_ResolveInterface(const QQuickView* self, const char* name, int revision);
    friend void* QQuickView_SuperResolveInterface(const QQuickView* self, const char* name, int revision);
    friend QObject* QQuickView_Sender(const QQuickView* self);
    friend QObject* QQuickView_SuperSender(const QQuickView* self);
    friend int QQuickView_SenderSignalIndex(const QQuickView* self);
    friend int QQuickView_SuperSenderSignalIndex(const QQuickView* self);
    friend int QQuickView_Receivers(const QQuickView* self, const char* signal);
    friend int QQuickView_SuperReceivers(const QQuickView* self, const char* signal);
    friend bool QQuickView_IsSignalConnected(const QQuickView* self, const QMetaMethod* signal);
    friend bool QQuickView_SuperIsSignalConnected(const QQuickView* self, const QMetaMethod* signal);
};

#endif
