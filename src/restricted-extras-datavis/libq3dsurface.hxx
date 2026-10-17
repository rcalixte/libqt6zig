#pragma once
#ifndef RESTRICTED_EXTRAS_DATAVIS_LIBQ3DSURFACE_HXX
#define RESTRICTED_EXTRAS_DATAVIS_LIBQ3DSURFACE_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of Q3DSurface
class VirtualQ3DSurface final : public Q3DSurface {
  public:
    // Virtual class public types (including callbacks and access types)
    using Q3DSurface_MetaObject_Callback = QMetaObject* (*)(const Q3DSurface*);
    using Q3DSurface_Metacast_Callback = void* (*)(Q3DSurface*, const char*);
    using Q3DSurface_Metacall_Callback = int (*)(Q3DSurface*, int, int, void**);
    using Q3DSurface_ShadowsSupported_Callback = bool (*)(const Q3DSurface*);
    using Q3DSurface_Event_Callback = bool (*)(Q3DSurface*, QEvent*);
    using Q3DSurface_ResizeEvent_Callback = void (*)(Q3DSurface*, QResizeEvent*);
    using Q3DSurface_ExposeEvent_Callback = void (*)(Q3DSurface*, QExposeEvent*);
    using Q3DSurface_MouseDoubleClickEvent_Callback = void (*)(Q3DSurface*, QMouseEvent*);
    using Q3DSurface_TouchEvent_Callback = void (*)(Q3DSurface*, QTouchEvent*);
    using Q3DSurface_MousePressEvent_Callback = void (*)(Q3DSurface*, QMouseEvent*);
    using Q3DSurface_MouseReleaseEvent_Callback = void (*)(Q3DSurface*, QMouseEvent*);
    using Q3DSurface_MouseMoveEvent_Callback = void (*)(Q3DSurface*, QMouseEvent*);
    using Q3DSurface_WheelEvent_Callback = void (*)(Q3DSurface*, QWheelEvent*);
    using Q3DSurface_SurfaceType_Callback = int (*)(const Q3DSurface*);
    using Q3DSurface_Format_Callback = QSurfaceFormat* (*)(const Q3DSurface*);
    using Q3DSurface_Size_Callback = QSize* (*)(const Q3DSurface*);
    using Q3DSurface_AccessibleRoot_Callback = QAccessibleInterface* (*)(const Q3DSurface*);
    using Q3DSurface_FocusObject_Callback = QObject* (*)(const Q3DSurface*);
    using Q3DSurface_PaintEvent_Callback = void (*)(Q3DSurface*, QPaintEvent*);
    using Q3DSurface_MoveEvent_Callback = void (*)(Q3DSurface*, QMoveEvent*);
    using Q3DSurface_FocusInEvent_Callback = void (*)(Q3DSurface*, QFocusEvent*);
    using Q3DSurface_FocusOutEvent_Callback = void (*)(Q3DSurface*, QFocusEvent*);
    using Q3DSurface_ShowEvent_Callback = void (*)(Q3DSurface*, QShowEvent*);
    using Q3DSurface_HideEvent_Callback = void (*)(Q3DSurface*, QHideEvent*);
    using Q3DSurface_CloseEvent_Callback = void (*)(Q3DSurface*, QCloseEvent*);
    using Q3DSurface_KeyPressEvent_Callback = void (*)(Q3DSurface*, QKeyEvent*);
    using Q3DSurface_KeyReleaseEvent_Callback = void (*)(Q3DSurface*, QKeyEvent*);
    using Q3DSurface_TabletEvent_Callback = void (*)(Q3DSurface*, QTabletEvent*);
    using Q3DSurface_NativeEvent_Callback = bool (*)(Q3DSurface*, libqt_string, void*, intptr_t*);
    using Q3DSurface_EventFilter_Callback = bool (*)(Q3DSurface*, QObject*, QEvent*);
    using Q3DSurface_TimerEvent_Callback = void (*)(Q3DSurface*, QTimerEvent*);
    using Q3DSurface_ChildEvent_Callback = void (*)(Q3DSurface*, QChildEvent*);
    using Q3DSurface_CustomEvent_Callback = void (*)(Q3DSurface*, QEvent*);
    using Q3DSurface_ConnectNotify_Callback = void (*)(Q3DSurface*, QMetaMethod*);
    using Q3DSurface_DisconnectNotify_Callback = void (*)(Q3DSurface*, QMetaMethod*);
    using Q3DSurface::isSignalConnected;
    using Q3DSurface::receivers;
    using Q3DSurface::resolveInterface;
    using Q3DSurface::sender;
    using Q3DSurface::senderSignalIndex;

    // Instance callback storage
    Q3DSurface_MetaObject_Callback q3dsurface_metaobject_callback = nullptr;
    Q3DSurface_Metacast_Callback q3dsurface_metacast_callback = nullptr;
    Q3DSurface_Metacall_Callback q3dsurface_metacall_callback = nullptr;
    Q3DSurface_ShadowsSupported_Callback q3dsurface_shadowssupported_callback = nullptr;
    Q3DSurface_Event_Callback q3dsurface_event_callback = nullptr;
    Q3DSurface_ResizeEvent_Callback q3dsurface_resizeevent_callback = nullptr;
    Q3DSurface_ExposeEvent_Callback q3dsurface_exposeevent_callback = nullptr;
    Q3DSurface_MouseDoubleClickEvent_Callback q3dsurface_mousedoubleclickevent_callback = nullptr;
    Q3DSurface_TouchEvent_Callback q3dsurface_touchevent_callback = nullptr;
    Q3DSurface_MousePressEvent_Callback q3dsurface_mousepressevent_callback = nullptr;
    Q3DSurface_MouseReleaseEvent_Callback q3dsurface_mousereleaseevent_callback = nullptr;
    Q3DSurface_MouseMoveEvent_Callback q3dsurface_mousemoveevent_callback = nullptr;
    Q3DSurface_WheelEvent_Callback q3dsurface_wheelevent_callback = nullptr;
    Q3DSurface_SurfaceType_Callback q3dsurface_surfacetype_callback = nullptr;
    Q3DSurface_Format_Callback q3dsurface_format_callback = nullptr;
    Q3DSurface_Size_Callback q3dsurface_size_callback = nullptr;
    Q3DSurface_AccessibleRoot_Callback q3dsurface_accessibleroot_callback = nullptr;
    Q3DSurface_FocusObject_Callback q3dsurface_focusobject_callback = nullptr;
    Q3DSurface_PaintEvent_Callback q3dsurface_paintevent_callback = nullptr;
    Q3DSurface_MoveEvent_Callback q3dsurface_moveevent_callback = nullptr;
    Q3DSurface_FocusInEvent_Callback q3dsurface_focusinevent_callback = nullptr;
    Q3DSurface_FocusOutEvent_Callback q3dsurface_focusoutevent_callback = nullptr;
    Q3DSurface_ShowEvent_Callback q3dsurface_showevent_callback = nullptr;
    Q3DSurface_HideEvent_Callback q3dsurface_hideevent_callback = nullptr;
    Q3DSurface_CloseEvent_Callback q3dsurface_closeevent_callback = nullptr;
    Q3DSurface_KeyPressEvent_Callback q3dsurface_keypressevent_callback = nullptr;
    Q3DSurface_KeyReleaseEvent_Callback q3dsurface_keyreleaseevent_callback = nullptr;
    Q3DSurface_TabletEvent_Callback q3dsurface_tabletevent_callback = nullptr;
    Q3DSurface_NativeEvent_Callback q3dsurface_nativeevent_callback = nullptr;
    Q3DSurface_EventFilter_Callback q3dsurface_eventfilter_callback = nullptr;
    Q3DSurface_TimerEvent_Callback q3dsurface_timerevent_callback = nullptr;
    Q3DSurface_ChildEvent_Callback q3dsurface_childevent_callback = nullptr;
    Q3DSurface_CustomEvent_Callback q3dsurface_customevent_callback = nullptr;
    Q3DSurface_ConnectNotify_Callback q3dsurface_connectnotify_callback = nullptr;
    Q3DSurface_DisconnectNotify_Callback q3dsurface_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : Q3DSurface {
        using Q3DSurface::childEvent;
        using Q3DSurface::closeEvent;
        using Q3DSurface::connectNotify;
        using Q3DSurface::customEvent;
        using Q3DSurface::disconnectNotify;
        using Q3DSurface::event;
        using Q3DSurface::exposeEvent;
        using Q3DSurface::focusInEvent;
        using Q3DSurface::focusOutEvent;
        using Q3DSurface::hideEvent;
        using Q3DSurface::keyPressEvent;
        using Q3DSurface::keyReleaseEvent;
        using Q3DSurface::mouseDoubleClickEvent;
        using Q3DSurface::mouseMoveEvent;
        using Q3DSurface::mousePressEvent;
        using Q3DSurface::mouseReleaseEvent;
        using Q3DSurface::moveEvent;
        using Q3DSurface::nativeEvent;
        using Q3DSurface::paintEvent;
        using Q3DSurface::resizeEvent;
        using Q3DSurface::showEvent;
        using Q3DSurface::tabletEvent;
        using Q3DSurface::timerEvent;
        using Q3DSurface::touchEvent;
        using Q3DSurface::wheelEvent;
    };

    VirtualQ3DSurface() : Q3DSurface() {};
    VirtualQ3DSurface(const QSurfaceFormat* format) : Q3DSurface(format) {};
    VirtualQ3DSurface(const QSurfaceFormat* format, QWindow* parent) : Q3DSurface(format, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (q3dsurface_metaobject_callback) {
            QMetaObject* callback_ret = q3dsurface_metaobject_callback(this);
            return callback_ret;
        }
        return Q3DSurface::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (q3dsurface_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = q3dsurface_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return Q3DSurface::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (q3dsurface_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = q3dsurface_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return Q3DSurface::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool shadowsSupported() const override {
        if (q3dsurface_shadowssupported_callback) {
            bool callback_ret = q3dsurface_shadowssupported_callback(this);
            return callback_ret;
        }
        return Q3DSurface::shadowsSupported();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (q3dsurface_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = q3dsurface_event_callback(this, cbval1);
            return callback_ret;
        }
        return Q3DSurface::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (q3dsurface_resizeevent_callback) {
            QResizeEvent* cbval1 = event;
            q3dsurface_resizeevent_callback(this, cbval1);
            return;
        }
        Q3DSurface::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void exposeEvent(QExposeEvent* event) override {
        if (q3dsurface_exposeevent_callback) {
            QExposeEvent* cbval1 = event;
            q3dsurface_exposeevent_callback(this, cbval1);
            return;
        }
        Q3DSurface::exposeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (q3dsurface_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            q3dsurface_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        Q3DSurface::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void touchEvent(QTouchEvent* event) override {
        if (q3dsurface_touchevent_callback) {
            QTouchEvent* cbval1 = event;
            q3dsurface_touchevent_callback(this, cbval1);
            return;
        }
        Q3DSurface::touchEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (q3dsurface_mousepressevent_callback) {
            QMouseEvent* cbval1 = event;
            q3dsurface_mousepressevent_callback(this, cbval1);
            return;
        }
        Q3DSurface::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (q3dsurface_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = event;
            q3dsurface_mousereleaseevent_callback(this, cbval1);
            return;
        }
        Q3DSurface::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (q3dsurface_mousemoveevent_callback) {
            QMouseEvent* cbval1 = event;
            q3dsurface_mousemoveevent_callback(this, cbval1);
            return;
        }
        Q3DSurface::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (q3dsurface_wheelevent_callback) {
            QWheelEvent* cbval1 = event;
            q3dsurface_wheelevent_callback(this, cbval1);
            return;
        }
        Q3DSurface::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSurface::SurfaceType surfaceType() const override {
        if (q3dsurface_surfacetype_callback) {
            int callback_ret = q3dsurface_surfacetype_callback(this);
            return static_cast<QSurface::SurfaceType>(callback_ret);
        }
        return Q3DSurface::surfaceType();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSurfaceFormat format() const override {
        if (q3dsurface_format_callback) {
            QSurfaceFormat* callback_ret = q3dsurface_format_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return Q3DSurface::format();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize size() const override {
        if (q3dsurface_size_callback) {
            QSize* callback_ret = q3dsurface_size_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return Q3DSurface::size();
    }

    // Virtual method for C ABI access and custom callback
    virtual QAccessibleInterface* accessibleRoot() const override {
        if (q3dsurface_accessibleroot_callback) {
            QAccessibleInterface* callback_ret = q3dsurface_accessibleroot_callback(this);
            return callback_ret;
        }
        return Q3DSurface::accessibleRoot();
    }

    // Virtual method for C ABI access and custom callback
    virtual QObject* focusObject() const override {
        if (q3dsurface_focusobject_callback) {
            QObject* callback_ret = q3dsurface_focusobject_callback(this);
            return callback_ret;
        }
        return Q3DSurface::focusObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* param1) override {
        if (q3dsurface_paintevent_callback) {
            QPaintEvent* cbval1 = param1;
            q3dsurface_paintevent_callback(this, cbval1);
            return;
        }
        Q3DSurface::paintEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* param1) override {
        if (q3dsurface_moveevent_callback) {
            QMoveEvent* cbval1 = param1;
            q3dsurface_moveevent_callback(this, cbval1);
            return;
        }
        Q3DSurface::moveEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* param1) override {
        if (q3dsurface_focusinevent_callback) {
            QFocusEvent* cbval1 = param1;
            q3dsurface_focusinevent_callback(this, cbval1);
            return;
        }
        Q3DSurface::focusInEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* param1) override {
        if (q3dsurface_focusoutevent_callback) {
            QFocusEvent* cbval1 = param1;
            q3dsurface_focusoutevent_callback(this, cbval1);
            return;
        }
        Q3DSurface::focusOutEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* param1) override {
        if (q3dsurface_showevent_callback) {
            QShowEvent* cbval1 = param1;
            q3dsurface_showevent_callback(this, cbval1);
            return;
        }
        Q3DSurface::showEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* param1) override {
        if (q3dsurface_hideevent_callback) {
            QHideEvent* cbval1 = param1;
            q3dsurface_hideevent_callback(this, cbval1);
            return;
        }
        Q3DSurface::hideEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* param1) override {
        if (q3dsurface_closeevent_callback) {
            QCloseEvent* cbval1 = param1;
            q3dsurface_closeevent_callback(this, cbval1);
            return;
        }
        Q3DSurface::closeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* param1) override {
        if (q3dsurface_keypressevent_callback) {
            QKeyEvent* cbval1 = param1;
            q3dsurface_keypressevent_callback(this, cbval1);
            return;
        }
        Q3DSurface::keyPressEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* param1) override {
        if (q3dsurface_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = param1;
            q3dsurface_keyreleaseevent_callback(this, cbval1);
            return;
        }
        Q3DSurface::keyReleaseEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* param1) override {
        if (q3dsurface_tabletevent_callback) {
            QTabletEvent* cbval1 = param1;
            q3dsurface_tabletevent_callback(this, cbval1);
            return;
        }
        Q3DSurface::tabletEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (q3dsurface_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = q3dsurface_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return Q3DSurface::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (q3dsurface_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = q3dsurface_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return Q3DSurface::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (q3dsurface_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            q3dsurface_timerevent_callback(this, cbval1);
            return;
        }
        Q3DSurface::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (q3dsurface_childevent_callback) {
            QChildEvent* cbval1 = event;
            q3dsurface_childevent_callback(this, cbval1);
            return;
        }
        Q3DSurface::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (q3dsurface_customevent_callback) {
            QEvent* cbval1 = event;
            q3dsurface_customevent_callback(this, cbval1);
            return;
        }
        Q3DSurface::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (q3dsurface_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            q3dsurface_connectnotify_callback(this, cbval1);
            return;
        }
        Q3DSurface::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (q3dsurface_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            q3dsurface_disconnectnotify_callback(this, cbval1);
            return;
        }
        Q3DSurface::disconnectNotify(signal);
    }

    // Friend functions
    friend bool Q3DSurface_SuperEvent(Q3DSurface* self, QEvent* event);
    friend void Q3DSurface_SuperResizeEvent(Q3DSurface* self, QResizeEvent* event);
    friend void Q3DSurface_SuperExposeEvent(Q3DSurface* self, QExposeEvent* event);
    friend void Q3DSurface_SuperMouseDoubleClickEvent(Q3DSurface* self, QMouseEvent* event);
    friend void Q3DSurface_SuperTouchEvent(Q3DSurface* self, QTouchEvent* event);
    friend void Q3DSurface_SuperMousePressEvent(Q3DSurface* self, QMouseEvent* event);
    friend void Q3DSurface_SuperMouseReleaseEvent(Q3DSurface* self, QMouseEvent* event);
    friend void Q3DSurface_SuperMouseMoveEvent(Q3DSurface* self, QMouseEvent* event);
    friend void Q3DSurface_SuperWheelEvent(Q3DSurface* self, QWheelEvent* event);
    friend void Q3DSurface_SuperPaintEvent(Q3DSurface* self, QPaintEvent* param1);
    friend void Q3DSurface_SuperMoveEvent(Q3DSurface* self, QMoveEvent* param1);
    friend void Q3DSurface_SuperFocusInEvent(Q3DSurface* self, QFocusEvent* param1);
    friend void Q3DSurface_SuperFocusOutEvent(Q3DSurface* self, QFocusEvent* param1);
    friend void Q3DSurface_SuperShowEvent(Q3DSurface* self, QShowEvent* param1);
    friend void Q3DSurface_SuperHideEvent(Q3DSurface* self, QHideEvent* param1);
    friend void Q3DSurface_SuperCloseEvent(Q3DSurface* self, QCloseEvent* param1);
    friend void Q3DSurface_SuperKeyPressEvent(Q3DSurface* self, QKeyEvent* param1);
    friend void Q3DSurface_SuperKeyReleaseEvent(Q3DSurface* self, QKeyEvent* param1);
    friend void Q3DSurface_SuperTabletEvent(Q3DSurface* self, QTabletEvent* param1);
    friend bool Q3DSurface_SuperNativeEvent(Q3DSurface* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void Q3DSurface_SuperTimerEvent(Q3DSurface* self, QTimerEvent* event);
    friend void Q3DSurface_SuperChildEvent(Q3DSurface* self, QChildEvent* event);
    friend void Q3DSurface_SuperCustomEvent(Q3DSurface* self, QEvent* event);
    friend void Q3DSurface_SuperConnectNotify(Q3DSurface* self, const QMetaMethod* signal);
    friend void Q3DSurface_SuperDisconnectNotify(Q3DSurface* self, const QMetaMethod* signal);
};

#endif
