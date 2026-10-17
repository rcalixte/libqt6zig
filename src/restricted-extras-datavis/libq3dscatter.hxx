#pragma once
#ifndef RESTRICTED_EXTRAS_DATAVIS_LIBQ3DSCATTER_HXX
#define RESTRICTED_EXTRAS_DATAVIS_LIBQ3DSCATTER_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of Q3DScatter
class VirtualQ3DScatter final : public Q3DScatter {
  public:
    // Virtual class public types (including callbacks and access types)
    using Q3DScatter_MetaObject_Callback = QMetaObject* (*)(const Q3DScatter*);
    using Q3DScatter_Metacast_Callback = void* (*)(Q3DScatter*, const char*);
    using Q3DScatter_Metacall_Callback = int (*)(Q3DScatter*, int, int, void**);
    using Q3DScatter_ShadowsSupported_Callback = bool (*)(const Q3DScatter*);
    using Q3DScatter_Event_Callback = bool (*)(Q3DScatter*, QEvent*);
    using Q3DScatter_ResizeEvent_Callback = void (*)(Q3DScatter*, QResizeEvent*);
    using Q3DScatter_ExposeEvent_Callback = void (*)(Q3DScatter*, QExposeEvent*);
    using Q3DScatter_MouseDoubleClickEvent_Callback = void (*)(Q3DScatter*, QMouseEvent*);
    using Q3DScatter_TouchEvent_Callback = void (*)(Q3DScatter*, QTouchEvent*);
    using Q3DScatter_MousePressEvent_Callback = void (*)(Q3DScatter*, QMouseEvent*);
    using Q3DScatter_MouseReleaseEvent_Callback = void (*)(Q3DScatter*, QMouseEvent*);
    using Q3DScatter_MouseMoveEvent_Callback = void (*)(Q3DScatter*, QMouseEvent*);
    using Q3DScatter_WheelEvent_Callback = void (*)(Q3DScatter*, QWheelEvent*);
    using Q3DScatter_SurfaceType_Callback = int (*)(const Q3DScatter*);
    using Q3DScatter_Format_Callback = QSurfaceFormat* (*)(const Q3DScatter*);
    using Q3DScatter_Size_Callback = QSize* (*)(const Q3DScatter*);
    using Q3DScatter_AccessibleRoot_Callback = QAccessibleInterface* (*)(const Q3DScatter*);
    using Q3DScatter_FocusObject_Callback = QObject* (*)(const Q3DScatter*);
    using Q3DScatter_PaintEvent_Callback = void (*)(Q3DScatter*, QPaintEvent*);
    using Q3DScatter_MoveEvent_Callback = void (*)(Q3DScatter*, QMoveEvent*);
    using Q3DScatter_FocusInEvent_Callback = void (*)(Q3DScatter*, QFocusEvent*);
    using Q3DScatter_FocusOutEvent_Callback = void (*)(Q3DScatter*, QFocusEvent*);
    using Q3DScatter_ShowEvent_Callback = void (*)(Q3DScatter*, QShowEvent*);
    using Q3DScatter_HideEvent_Callback = void (*)(Q3DScatter*, QHideEvent*);
    using Q3DScatter_CloseEvent_Callback = void (*)(Q3DScatter*, QCloseEvent*);
    using Q3DScatter_KeyPressEvent_Callback = void (*)(Q3DScatter*, QKeyEvent*);
    using Q3DScatter_KeyReleaseEvent_Callback = void (*)(Q3DScatter*, QKeyEvent*);
    using Q3DScatter_TabletEvent_Callback = void (*)(Q3DScatter*, QTabletEvent*);
    using Q3DScatter_NativeEvent_Callback = bool (*)(Q3DScatter*, libqt_string, void*, intptr_t*);
    using Q3DScatter_EventFilter_Callback = bool (*)(Q3DScatter*, QObject*, QEvent*);
    using Q3DScatter_TimerEvent_Callback = void (*)(Q3DScatter*, QTimerEvent*);
    using Q3DScatter_ChildEvent_Callback = void (*)(Q3DScatter*, QChildEvent*);
    using Q3DScatter_CustomEvent_Callback = void (*)(Q3DScatter*, QEvent*);
    using Q3DScatter_ConnectNotify_Callback = void (*)(Q3DScatter*, QMetaMethod*);
    using Q3DScatter_DisconnectNotify_Callback = void (*)(Q3DScatter*, QMetaMethod*);
    using Q3DScatter::isSignalConnected;
    using Q3DScatter::receivers;
    using Q3DScatter::resolveInterface;
    using Q3DScatter::sender;
    using Q3DScatter::senderSignalIndex;

    // Instance callback storage
    Q3DScatter_MetaObject_Callback q3dscatter_metaobject_callback = nullptr;
    Q3DScatter_Metacast_Callback q3dscatter_metacast_callback = nullptr;
    Q3DScatter_Metacall_Callback q3dscatter_metacall_callback = nullptr;
    Q3DScatter_ShadowsSupported_Callback q3dscatter_shadowssupported_callback = nullptr;
    Q3DScatter_Event_Callback q3dscatter_event_callback = nullptr;
    Q3DScatter_ResizeEvent_Callback q3dscatter_resizeevent_callback = nullptr;
    Q3DScatter_ExposeEvent_Callback q3dscatter_exposeevent_callback = nullptr;
    Q3DScatter_MouseDoubleClickEvent_Callback q3dscatter_mousedoubleclickevent_callback = nullptr;
    Q3DScatter_TouchEvent_Callback q3dscatter_touchevent_callback = nullptr;
    Q3DScatter_MousePressEvent_Callback q3dscatter_mousepressevent_callback = nullptr;
    Q3DScatter_MouseReleaseEvent_Callback q3dscatter_mousereleaseevent_callback = nullptr;
    Q3DScatter_MouseMoveEvent_Callback q3dscatter_mousemoveevent_callback = nullptr;
    Q3DScatter_WheelEvent_Callback q3dscatter_wheelevent_callback = nullptr;
    Q3DScatter_SurfaceType_Callback q3dscatter_surfacetype_callback = nullptr;
    Q3DScatter_Format_Callback q3dscatter_format_callback = nullptr;
    Q3DScatter_Size_Callback q3dscatter_size_callback = nullptr;
    Q3DScatter_AccessibleRoot_Callback q3dscatter_accessibleroot_callback = nullptr;
    Q3DScatter_FocusObject_Callback q3dscatter_focusobject_callback = nullptr;
    Q3DScatter_PaintEvent_Callback q3dscatter_paintevent_callback = nullptr;
    Q3DScatter_MoveEvent_Callback q3dscatter_moveevent_callback = nullptr;
    Q3DScatter_FocusInEvent_Callback q3dscatter_focusinevent_callback = nullptr;
    Q3DScatter_FocusOutEvent_Callback q3dscatter_focusoutevent_callback = nullptr;
    Q3DScatter_ShowEvent_Callback q3dscatter_showevent_callback = nullptr;
    Q3DScatter_HideEvent_Callback q3dscatter_hideevent_callback = nullptr;
    Q3DScatter_CloseEvent_Callback q3dscatter_closeevent_callback = nullptr;
    Q3DScatter_KeyPressEvent_Callback q3dscatter_keypressevent_callback = nullptr;
    Q3DScatter_KeyReleaseEvent_Callback q3dscatter_keyreleaseevent_callback = nullptr;
    Q3DScatter_TabletEvent_Callback q3dscatter_tabletevent_callback = nullptr;
    Q3DScatter_NativeEvent_Callback q3dscatter_nativeevent_callback = nullptr;
    Q3DScatter_EventFilter_Callback q3dscatter_eventfilter_callback = nullptr;
    Q3DScatter_TimerEvent_Callback q3dscatter_timerevent_callback = nullptr;
    Q3DScatter_ChildEvent_Callback q3dscatter_childevent_callback = nullptr;
    Q3DScatter_CustomEvent_Callback q3dscatter_customevent_callback = nullptr;
    Q3DScatter_ConnectNotify_Callback q3dscatter_connectnotify_callback = nullptr;
    Q3DScatter_DisconnectNotify_Callback q3dscatter_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : Q3DScatter {
        using Q3DScatter::childEvent;
        using Q3DScatter::closeEvent;
        using Q3DScatter::connectNotify;
        using Q3DScatter::customEvent;
        using Q3DScatter::disconnectNotify;
        using Q3DScatter::event;
        using Q3DScatter::exposeEvent;
        using Q3DScatter::focusInEvent;
        using Q3DScatter::focusOutEvent;
        using Q3DScatter::hideEvent;
        using Q3DScatter::keyPressEvent;
        using Q3DScatter::keyReleaseEvent;
        using Q3DScatter::mouseDoubleClickEvent;
        using Q3DScatter::mouseMoveEvent;
        using Q3DScatter::mousePressEvent;
        using Q3DScatter::mouseReleaseEvent;
        using Q3DScatter::moveEvent;
        using Q3DScatter::nativeEvent;
        using Q3DScatter::paintEvent;
        using Q3DScatter::resizeEvent;
        using Q3DScatter::showEvent;
        using Q3DScatter::tabletEvent;
        using Q3DScatter::timerEvent;
        using Q3DScatter::touchEvent;
        using Q3DScatter::wheelEvent;
    };

    VirtualQ3DScatter() : Q3DScatter() {};
    VirtualQ3DScatter(const QSurfaceFormat* format) : Q3DScatter(format) {};
    VirtualQ3DScatter(const QSurfaceFormat* format, QWindow* parent) : Q3DScatter(format, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (q3dscatter_metaobject_callback) {
            QMetaObject* callback_ret = q3dscatter_metaobject_callback(this);
            return callback_ret;
        }
        return Q3DScatter::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (q3dscatter_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = q3dscatter_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return Q3DScatter::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (q3dscatter_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = q3dscatter_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return Q3DScatter::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool shadowsSupported() const override {
        if (q3dscatter_shadowssupported_callback) {
            bool callback_ret = q3dscatter_shadowssupported_callback(this);
            return callback_ret;
        }
        return Q3DScatter::shadowsSupported();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (q3dscatter_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = q3dscatter_event_callback(this, cbval1);
            return callback_ret;
        }
        return Q3DScatter::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (q3dscatter_resizeevent_callback) {
            QResizeEvent* cbval1 = event;
            q3dscatter_resizeevent_callback(this, cbval1);
            return;
        }
        Q3DScatter::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void exposeEvent(QExposeEvent* event) override {
        if (q3dscatter_exposeevent_callback) {
            QExposeEvent* cbval1 = event;
            q3dscatter_exposeevent_callback(this, cbval1);
            return;
        }
        Q3DScatter::exposeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (q3dscatter_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            q3dscatter_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        Q3DScatter::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void touchEvent(QTouchEvent* event) override {
        if (q3dscatter_touchevent_callback) {
            QTouchEvent* cbval1 = event;
            q3dscatter_touchevent_callback(this, cbval1);
            return;
        }
        Q3DScatter::touchEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (q3dscatter_mousepressevent_callback) {
            QMouseEvent* cbval1 = event;
            q3dscatter_mousepressevent_callback(this, cbval1);
            return;
        }
        Q3DScatter::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (q3dscatter_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = event;
            q3dscatter_mousereleaseevent_callback(this, cbval1);
            return;
        }
        Q3DScatter::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (q3dscatter_mousemoveevent_callback) {
            QMouseEvent* cbval1 = event;
            q3dscatter_mousemoveevent_callback(this, cbval1);
            return;
        }
        Q3DScatter::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (q3dscatter_wheelevent_callback) {
            QWheelEvent* cbval1 = event;
            q3dscatter_wheelevent_callback(this, cbval1);
            return;
        }
        Q3DScatter::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSurface::SurfaceType surfaceType() const override {
        if (q3dscatter_surfacetype_callback) {
            int callback_ret = q3dscatter_surfacetype_callback(this);
            return static_cast<QSurface::SurfaceType>(callback_ret);
        }
        return Q3DScatter::surfaceType();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSurfaceFormat format() const override {
        if (q3dscatter_format_callback) {
            QSurfaceFormat* callback_ret = q3dscatter_format_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return Q3DScatter::format();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize size() const override {
        if (q3dscatter_size_callback) {
            QSize* callback_ret = q3dscatter_size_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return Q3DScatter::size();
    }

    // Virtual method for C ABI access and custom callback
    virtual QAccessibleInterface* accessibleRoot() const override {
        if (q3dscatter_accessibleroot_callback) {
            QAccessibleInterface* callback_ret = q3dscatter_accessibleroot_callback(this);
            return callback_ret;
        }
        return Q3DScatter::accessibleRoot();
    }

    // Virtual method for C ABI access and custom callback
    virtual QObject* focusObject() const override {
        if (q3dscatter_focusobject_callback) {
            QObject* callback_ret = q3dscatter_focusobject_callback(this);
            return callback_ret;
        }
        return Q3DScatter::focusObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* param1) override {
        if (q3dscatter_paintevent_callback) {
            QPaintEvent* cbval1 = param1;
            q3dscatter_paintevent_callback(this, cbval1);
            return;
        }
        Q3DScatter::paintEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* param1) override {
        if (q3dscatter_moveevent_callback) {
            QMoveEvent* cbval1 = param1;
            q3dscatter_moveevent_callback(this, cbval1);
            return;
        }
        Q3DScatter::moveEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* param1) override {
        if (q3dscatter_focusinevent_callback) {
            QFocusEvent* cbval1 = param1;
            q3dscatter_focusinevent_callback(this, cbval1);
            return;
        }
        Q3DScatter::focusInEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* param1) override {
        if (q3dscatter_focusoutevent_callback) {
            QFocusEvent* cbval1 = param1;
            q3dscatter_focusoutevent_callback(this, cbval1);
            return;
        }
        Q3DScatter::focusOutEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* param1) override {
        if (q3dscatter_showevent_callback) {
            QShowEvent* cbval1 = param1;
            q3dscatter_showevent_callback(this, cbval1);
            return;
        }
        Q3DScatter::showEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* param1) override {
        if (q3dscatter_hideevent_callback) {
            QHideEvent* cbval1 = param1;
            q3dscatter_hideevent_callback(this, cbval1);
            return;
        }
        Q3DScatter::hideEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* param1) override {
        if (q3dscatter_closeevent_callback) {
            QCloseEvent* cbval1 = param1;
            q3dscatter_closeevent_callback(this, cbval1);
            return;
        }
        Q3DScatter::closeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* param1) override {
        if (q3dscatter_keypressevent_callback) {
            QKeyEvent* cbval1 = param1;
            q3dscatter_keypressevent_callback(this, cbval1);
            return;
        }
        Q3DScatter::keyPressEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* param1) override {
        if (q3dscatter_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = param1;
            q3dscatter_keyreleaseevent_callback(this, cbval1);
            return;
        }
        Q3DScatter::keyReleaseEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* param1) override {
        if (q3dscatter_tabletevent_callback) {
            QTabletEvent* cbval1 = param1;
            q3dscatter_tabletevent_callback(this, cbval1);
            return;
        }
        Q3DScatter::tabletEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (q3dscatter_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = q3dscatter_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return Q3DScatter::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (q3dscatter_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = q3dscatter_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return Q3DScatter::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (q3dscatter_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            q3dscatter_timerevent_callback(this, cbval1);
            return;
        }
        Q3DScatter::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (q3dscatter_childevent_callback) {
            QChildEvent* cbval1 = event;
            q3dscatter_childevent_callback(this, cbval1);
            return;
        }
        Q3DScatter::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (q3dscatter_customevent_callback) {
            QEvent* cbval1 = event;
            q3dscatter_customevent_callback(this, cbval1);
            return;
        }
        Q3DScatter::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (q3dscatter_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            q3dscatter_connectnotify_callback(this, cbval1);
            return;
        }
        Q3DScatter::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (q3dscatter_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            q3dscatter_disconnectnotify_callback(this, cbval1);
            return;
        }
        Q3DScatter::disconnectNotify(signal);
    }

    // Friend functions
    friend bool Q3DScatter_SuperEvent(Q3DScatter* self, QEvent* event);
    friend void Q3DScatter_SuperResizeEvent(Q3DScatter* self, QResizeEvent* event);
    friend void Q3DScatter_SuperExposeEvent(Q3DScatter* self, QExposeEvent* event);
    friend void Q3DScatter_SuperMouseDoubleClickEvent(Q3DScatter* self, QMouseEvent* event);
    friend void Q3DScatter_SuperTouchEvent(Q3DScatter* self, QTouchEvent* event);
    friend void Q3DScatter_SuperMousePressEvent(Q3DScatter* self, QMouseEvent* event);
    friend void Q3DScatter_SuperMouseReleaseEvent(Q3DScatter* self, QMouseEvent* event);
    friend void Q3DScatter_SuperMouseMoveEvent(Q3DScatter* self, QMouseEvent* event);
    friend void Q3DScatter_SuperWheelEvent(Q3DScatter* self, QWheelEvent* event);
    friend void Q3DScatter_SuperPaintEvent(Q3DScatter* self, QPaintEvent* param1);
    friend void Q3DScatter_SuperMoveEvent(Q3DScatter* self, QMoveEvent* param1);
    friend void Q3DScatter_SuperFocusInEvent(Q3DScatter* self, QFocusEvent* param1);
    friend void Q3DScatter_SuperFocusOutEvent(Q3DScatter* self, QFocusEvent* param1);
    friend void Q3DScatter_SuperShowEvent(Q3DScatter* self, QShowEvent* param1);
    friend void Q3DScatter_SuperHideEvent(Q3DScatter* self, QHideEvent* param1);
    friend void Q3DScatter_SuperCloseEvent(Q3DScatter* self, QCloseEvent* param1);
    friend void Q3DScatter_SuperKeyPressEvent(Q3DScatter* self, QKeyEvent* param1);
    friend void Q3DScatter_SuperKeyReleaseEvent(Q3DScatter* self, QKeyEvent* param1);
    friend void Q3DScatter_SuperTabletEvent(Q3DScatter* self, QTabletEvent* param1);
    friend bool Q3DScatter_SuperNativeEvent(Q3DScatter* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void Q3DScatter_SuperTimerEvent(Q3DScatter* self, QTimerEvent* event);
    friend void Q3DScatter_SuperChildEvent(Q3DScatter* self, QChildEvent* event);
    friend void Q3DScatter_SuperCustomEvent(Q3DScatter* self, QEvent* event);
    friend void Q3DScatter_SuperConnectNotify(Q3DScatter* self, const QMetaMethod* signal);
    friend void Q3DScatter_SuperDisconnectNotify(Q3DScatter* self, const QMetaMethod* signal);
};

#endif
