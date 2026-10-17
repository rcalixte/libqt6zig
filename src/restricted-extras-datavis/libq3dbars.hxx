#pragma once
#ifndef RESTRICTED_EXTRAS_DATAVIS_LIBQ3DBARS_HXX
#define RESTRICTED_EXTRAS_DATAVIS_LIBQ3DBARS_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of Q3DBars
class VirtualQ3DBars final : public Q3DBars {
  public:
    // Virtual class public types (including callbacks and access types)
    using Q3DBars_MetaObject_Callback = QMetaObject* (*)(const Q3DBars*);
    using Q3DBars_Metacast_Callback = void* (*)(Q3DBars*, const char*);
    using Q3DBars_Metacall_Callback = int (*)(Q3DBars*, int, int, void**);
    using Q3DBars_ShadowsSupported_Callback = bool (*)(const Q3DBars*);
    using Q3DBars_Event_Callback = bool (*)(Q3DBars*, QEvent*);
    using Q3DBars_ResizeEvent_Callback = void (*)(Q3DBars*, QResizeEvent*);
    using Q3DBars_ExposeEvent_Callback = void (*)(Q3DBars*, QExposeEvent*);
    using Q3DBars_MouseDoubleClickEvent_Callback = void (*)(Q3DBars*, QMouseEvent*);
    using Q3DBars_TouchEvent_Callback = void (*)(Q3DBars*, QTouchEvent*);
    using Q3DBars_MousePressEvent_Callback = void (*)(Q3DBars*, QMouseEvent*);
    using Q3DBars_MouseReleaseEvent_Callback = void (*)(Q3DBars*, QMouseEvent*);
    using Q3DBars_MouseMoveEvent_Callback = void (*)(Q3DBars*, QMouseEvent*);
    using Q3DBars_WheelEvent_Callback = void (*)(Q3DBars*, QWheelEvent*);
    using Q3DBars_SurfaceType_Callback = int (*)(const Q3DBars*);
    using Q3DBars_Format_Callback = QSurfaceFormat* (*)(const Q3DBars*);
    using Q3DBars_Size_Callback = QSize* (*)(const Q3DBars*);
    using Q3DBars_AccessibleRoot_Callback = QAccessibleInterface* (*)(const Q3DBars*);
    using Q3DBars_FocusObject_Callback = QObject* (*)(const Q3DBars*);
    using Q3DBars_PaintEvent_Callback = void (*)(Q3DBars*, QPaintEvent*);
    using Q3DBars_MoveEvent_Callback = void (*)(Q3DBars*, QMoveEvent*);
    using Q3DBars_FocusInEvent_Callback = void (*)(Q3DBars*, QFocusEvent*);
    using Q3DBars_FocusOutEvent_Callback = void (*)(Q3DBars*, QFocusEvent*);
    using Q3DBars_ShowEvent_Callback = void (*)(Q3DBars*, QShowEvent*);
    using Q3DBars_HideEvent_Callback = void (*)(Q3DBars*, QHideEvent*);
    using Q3DBars_CloseEvent_Callback = void (*)(Q3DBars*, QCloseEvent*);
    using Q3DBars_KeyPressEvent_Callback = void (*)(Q3DBars*, QKeyEvent*);
    using Q3DBars_KeyReleaseEvent_Callback = void (*)(Q3DBars*, QKeyEvent*);
    using Q3DBars_TabletEvent_Callback = void (*)(Q3DBars*, QTabletEvent*);
    using Q3DBars_NativeEvent_Callback = bool (*)(Q3DBars*, libqt_string, void*, intptr_t*);
    using Q3DBars_EventFilter_Callback = bool (*)(Q3DBars*, QObject*, QEvent*);
    using Q3DBars_TimerEvent_Callback = void (*)(Q3DBars*, QTimerEvent*);
    using Q3DBars_ChildEvent_Callback = void (*)(Q3DBars*, QChildEvent*);
    using Q3DBars_CustomEvent_Callback = void (*)(Q3DBars*, QEvent*);
    using Q3DBars_ConnectNotify_Callback = void (*)(Q3DBars*, QMetaMethod*);
    using Q3DBars_DisconnectNotify_Callback = void (*)(Q3DBars*, QMetaMethod*);
    using Q3DBars::isSignalConnected;
    using Q3DBars::receivers;
    using Q3DBars::resolveInterface;
    using Q3DBars::sender;
    using Q3DBars::senderSignalIndex;

    // Instance callback storage
    Q3DBars_MetaObject_Callback q3dbars_metaobject_callback = nullptr;
    Q3DBars_Metacast_Callback q3dbars_metacast_callback = nullptr;
    Q3DBars_Metacall_Callback q3dbars_metacall_callback = nullptr;
    Q3DBars_ShadowsSupported_Callback q3dbars_shadowssupported_callback = nullptr;
    Q3DBars_Event_Callback q3dbars_event_callback = nullptr;
    Q3DBars_ResizeEvent_Callback q3dbars_resizeevent_callback = nullptr;
    Q3DBars_ExposeEvent_Callback q3dbars_exposeevent_callback = nullptr;
    Q3DBars_MouseDoubleClickEvent_Callback q3dbars_mousedoubleclickevent_callback = nullptr;
    Q3DBars_TouchEvent_Callback q3dbars_touchevent_callback = nullptr;
    Q3DBars_MousePressEvent_Callback q3dbars_mousepressevent_callback = nullptr;
    Q3DBars_MouseReleaseEvent_Callback q3dbars_mousereleaseevent_callback = nullptr;
    Q3DBars_MouseMoveEvent_Callback q3dbars_mousemoveevent_callback = nullptr;
    Q3DBars_WheelEvent_Callback q3dbars_wheelevent_callback = nullptr;
    Q3DBars_SurfaceType_Callback q3dbars_surfacetype_callback = nullptr;
    Q3DBars_Format_Callback q3dbars_format_callback = nullptr;
    Q3DBars_Size_Callback q3dbars_size_callback = nullptr;
    Q3DBars_AccessibleRoot_Callback q3dbars_accessibleroot_callback = nullptr;
    Q3DBars_FocusObject_Callback q3dbars_focusobject_callback = nullptr;
    Q3DBars_PaintEvent_Callback q3dbars_paintevent_callback = nullptr;
    Q3DBars_MoveEvent_Callback q3dbars_moveevent_callback = nullptr;
    Q3DBars_FocusInEvent_Callback q3dbars_focusinevent_callback = nullptr;
    Q3DBars_FocusOutEvent_Callback q3dbars_focusoutevent_callback = nullptr;
    Q3DBars_ShowEvent_Callback q3dbars_showevent_callback = nullptr;
    Q3DBars_HideEvent_Callback q3dbars_hideevent_callback = nullptr;
    Q3DBars_CloseEvent_Callback q3dbars_closeevent_callback = nullptr;
    Q3DBars_KeyPressEvent_Callback q3dbars_keypressevent_callback = nullptr;
    Q3DBars_KeyReleaseEvent_Callback q3dbars_keyreleaseevent_callback = nullptr;
    Q3DBars_TabletEvent_Callback q3dbars_tabletevent_callback = nullptr;
    Q3DBars_NativeEvent_Callback q3dbars_nativeevent_callback = nullptr;
    Q3DBars_EventFilter_Callback q3dbars_eventfilter_callback = nullptr;
    Q3DBars_TimerEvent_Callback q3dbars_timerevent_callback = nullptr;
    Q3DBars_ChildEvent_Callback q3dbars_childevent_callback = nullptr;
    Q3DBars_CustomEvent_Callback q3dbars_customevent_callback = nullptr;
    Q3DBars_ConnectNotify_Callback q3dbars_connectnotify_callback = nullptr;
    Q3DBars_DisconnectNotify_Callback q3dbars_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : Q3DBars {
        using Q3DBars::childEvent;
        using Q3DBars::closeEvent;
        using Q3DBars::connectNotify;
        using Q3DBars::customEvent;
        using Q3DBars::disconnectNotify;
        using Q3DBars::event;
        using Q3DBars::exposeEvent;
        using Q3DBars::focusInEvent;
        using Q3DBars::focusOutEvent;
        using Q3DBars::hideEvent;
        using Q3DBars::keyPressEvent;
        using Q3DBars::keyReleaseEvent;
        using Q3DBars::mouseDoubleClickEvent;
        using Q3DBars::mouseMoveEvent;
        using Q3DBars::mousePressEvent;
        using Q3DBars::mouseReleaseEvent;
        using Q3DBars::moveEvent;
        using Q3DBars::nativeEvent;
        using Q3DBars::paintEvent;
        using Q3DBars::resizeEvent;
        using Q3DBars::showEvent;
        using Q3DBars::tabletEvent;
        using Q3DBars::timerEvent;
        using Q3DBars::touchEvent;
        using Q3DBars::wheelEvent;
    };

    VirtualQ3DBars() : Q3DBars() {};
    VirtualQ3DBars(const QSurfaceFormat* format) : Q3DBars(format) {};
    VirtualQ3DBars(const QSurfaceFormat* format, QWindow* parent) : Q3DBars(format, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (q3dbars_metaobject_callback) {
            QMetaObject* callback_ret = q3dbars_metaobject_callback(this);
            return callback_ret;
        }
        return Q3DBars::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (q3dbars_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = q3dbars_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return Q3DBars::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (q3dbars_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = q3dbars_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return Q3DBars::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool shadowsSupported() const override {
        if (q3dbars_shadowssupported_callback) {
            bool callback_ret = q3dbars_shadowssupported_callback(this);
            return callback_ret;
        }
        return Q3DBars::shadowsSupported();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (q3dbars_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = q3dbars_event_callback(this, cbval1);
            return callback_ret;
        }
        return Q3DBars::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (q3dbars_resizeevent_callback) {
            QResizeEvent* cbval1 = event;
            q3dbars_resizeevent_callback(this, cbval1);
            return;
        }
        Q3DBars::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void exposeEvent(QExposeEvent* event) override {
        if (q3dbars_exposeevent_callback) {
            QExposeEvent* cbval1 = event;
            q3dbars_exposeevent_callback(this, cbval1);
            return;
        }
        Q3DBars::exposeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (q3dbars_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            q3dbars_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        Q3DBars::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void touchEvent(QTouchEvent* event) override {
        if (q3dbars_touchevent_callback) {
            QTouchEvent* cbval1 = event;
            q3dbars_touchevent_callback(this, cbval1);
            return;
        }
        Q3DBars::touchEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (q3dbars_mousepressevent_callback) {
            QMouseEvent* cbval1 = event;
            q3dbars_mousepressevent_callback(this, cbval1);
            return;
        }
        Q3DBars::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (q3dbars_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = event;
            q3dbars_mousereleaseevent_callback(this, cbval1);
            return;
        }
        Q3DBars::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (q3dbars_mousemoveevent_callback) {
            QMouseEvent* cbval1 = event;
            q3dbars_mousemoveevent_callback(this, cbval1);
            return;
        }
        Q3DBars::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (q3dbars_wheelevent_callback) {
            QWheelEvent* cbval1 = event;
            q3dbars_wheelevent_callback(this, cbval1);
            return;
        }
        Q3DBars::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSurface::SurfaceType surfaceType() const override {
        if (q3dbars_surfacetype_callback) {
            int callback_ret = q3dbars_surfacetype_callback(this);
            return static_cast<QSurface::SurfaceType>(callback_ret);
        }
        return Q3DBars::surfaceType();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSurfaceFormat format() const override {
        if (q3dbars_format_callback) {
            QSurfaceFormat* callback_ret = q3dbars_format_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return Q3DBars::format();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize size() const override {
        if (q3dbars_size_callback) {
            QSize* callback_ret = q3dbars_size_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return Q3DBars::size();
    }

    // Virtual method for C ABI access and custom callback
    virtual QAccessibleInterface* accessibleRoot() const override {
        if (q3dbars_accessibleroot_callback) {
            QAccessibleInterface* callback_ret = q3dbars_accessibleroot_callback(this);
            return callback_ret;
        }
        return Q3DBars::accessibleRoot();
    }

    // Virtual method for C ABI access and custom callback
    virtual QObject* focusObject() const override {
        if (q3dbars_focusobject_callback) {
            QObject* callback_ret = q3dbars_focusobject_callback(this);
            return callback_ret;
        }
        return Q3DBars::focusObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* param1) override {
        if (q3dbars_paintevent_callback) {
            QPaintEvent* cbval1 = param1;
            q3dbars_paintevent_callback(this, cbval1);
            return;
        }
        Q3DBars::paintEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* param1) override {
        if (q3dbars_moveevent_callback) {
            QMoveEvent* cbval1 = param1;
            q3dbars_moveevent_callback(this, cbval1);
            return;
        }
        Q3DBars::moveEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* param1) override {
        if (q3dbars_focusinevent_callback) {
            QFocusEvent* cbval1 = param1;
            q3dbars_focusinevent_callback(this, cbval1);
            return;
        }
        Q3DBars::focusInEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* param1) override {
        if (q3dbars_focusoutevent_callback) {
            QFocusEvent* cbval1 = param1;
            q3dbars_focusoutevent_callback(this, cbval1);
            return;
        }
        Q3DBars::focusOutEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* param1) override {
        if (q3dbars_showevent_callback) {
            QShowEvent* cbval1 = param1;
            q3dbars_showevent_callback(this, cbval1);
            return;
        }
        Q3DBars::showEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* param1) override {
        if (q3dbars_hideevent_callback) {
            QHideEvent* cbval1 = param1;
            q3dbars_hideevent_callback(this, cbval1);
            return;
        }
        Q3DBars::hideEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* param1) override {
        if (q3dbars_closeevent_callback) {
            QCloseEvent* cbval1 = param1;
            q3dbars_closeevent_callback(this, cbval1);
            return;
        }
        Q3DBars::closeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* param1) override {
        if (q3dbars_keypressevent_callback) {
            QKeyEvent* cbval1 = param1;
            q3dbars_keypressevent_callback(this, cbval1);
            return;
        }
        Q3DBars::keyPressEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* param1) override {
        if (q3dbars_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = param1;
            q3dbars_keyreleaseevent_callback(this, cbval1);
            return;
        }
        Q3DBars::keyReleaseEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* param1) override {
        if (q3dbars_tabletevent_callback) {
            QTabletEvent* cbval1 = param1;
            q3dbars_tabletevent_callback(this, cbval1);
            return;
        }
        Q3DBars::tabletEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (q3dbars_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = q3dbars_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return Q3DBars::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (q3dbars_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = q3dbars_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return Q3DBars::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (q3dbars_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            q3dbars_timerevent_callback(this, cbval1);
            return;
        }
        Q3DBars::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (q3dbars_childevent_callback) {
            QChildEvent* cbval1 = event;
            q3dbars_childevent_callback(this, cbval1);
            return;
        }
        Q3DBars::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (q3dbars_customevent_callback) {
            QEvent* cbval1 = event;
            q3dbars_customevent_callback(this, cbval1);
            return;
        }
        Q3DBars::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (q3dbars_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            q3dbars_connectnotify_callback(this, cbval1);
            return;
        }
        Q3DBars::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (q3dbars_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            q3dbars_disconnectnotify_callback(this, cbval1);
            return;
        }
        Q3DBars::disconnectNotify(signal);
    }

    // Friend functions
    friend bool Q3DBars_SuperEvent(Q3DBars* self, QEvent* event);
    friend void Q3DBars_SuperResizeEvent(Q3DBars* self, QResizeEvent* event);
    friend void Q3DBars_SuperExposeEvent(Q3DBars* self, QExposeEvent* event);
    friend void Q3DBars_SuperMouseDoubleClickEvent(Q3DBars* self, QMouseEvent* event);
    friend void Q3DBars_SuperTouchEvent(Q3DBars* self, QTouchEvent* event);
    friend void Q3DBars_SuperMousePressEvent(Q3DBars* self, QMouseEvent* event);
    friend void Q3DBars_SuperMouseReleaseEvent(Q3DBars* self, QMouseEvent* event);
    friend void Q3DBars_SuperMouseMoveEvent(Q3DBars* self, QMouseEvent* event);
    friend void Q3DBars_SuperWheelEvent(Q3DBars* self, QWheelEvent* event);
    friend void Q3DBars_SuperPaintEvent(Q3DBars* self, QPaintEvent* param1);
    friend void Q3DBars_SuperMoveEvent(Q3DBars* self, QMoveEvent* param1);
    friend void Q3DBars_SuperFocusInEvent(Q3DBars* self, QFocusEvent* param1);
    friend void Q3DBars_SuperFocusOutEvent(Q3DBars* self, QFocusEvent* param1);
    friend void Q3DBars_SuperShowEvent(Q3DBars* self, QShowEvent* param1);
    friend void Q3DBars_SuperHideEvent(Q3DBars* self, QHideEvent* param1);
    friend void Q3DBars_SuperCloseEvent(Q3DBars* self, QCloseEvent* param1);
    friend void Q3DBars_SuperKeyPressEvent(Q3DBars* self, QKeyEvent* param1);
    friend void Q3DBars_SuperKeyReleaseEvent(Q3DBars* self, QKeyEvent* param1);
    friend void Q3DBars_SuperTabletEvent(Q3DBars* self, QTabletEvent* param1);
    friend bool Q3DBars_SuperNativeEvent(Q3DBars* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void Q3DBars_SuperTimerEvent(Q3DBars* self, QTimerEvent* event);
    friend void Q3DBars_SuperChildEvent(Q3DBars* self, QChildEvent* event);
    friend void Q3DBars_SuperCustomEvent(Q3DBars* self, QEvent* event);
    friend void Q3DBars_SuperConnectNotify(Q3DBars* self, const QMetaMethod* signal);
    friend void Q3DBars_SuperDisconnectNotify(Q3DBars* self, const QMetaMethod* signal);
};

#endif
