#pragma once
#ifndef LIBQWINDOW_HXX
#define LIBQWINDOW_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QWindow
class VirtualQWindow final : public QWindow {
  public:
    // Virtual class public types (including callbacks and access types)
    using QWindow_MetaObject_Callback = QMetaObject* (*)(const QWindow*);
    using QWindow_Metacast_Callback = void* (*)(QWindow*, const char*);
    using QWindow_Metacall_Callback = int (*)(QWindow*, int, int, void**);
    using QWindow_SurfaceType_Callback = int (*)(const QWindow*);
    using QWindow_Format_Callback = QSurfaceFormat* (*)(const QWindow*);
    using QWindow_Size_Callback = QSize* (*)(const QWindow*);
    using QWindow_AccessibleRoot_Callback = QAccessibleInterface* (*)(const QWindow*);
    using QWindow_FocusObject_Callback = QObject* (*)(const QWindow*);
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
    using QWindow::isSignalConnected;
    using QWindow::receivers;
    using QWindow::resolveInterface;
    using QWindow::sender;
    using QWindow::senderSignalIndex;

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

    // Access struct
    struct Base : QWindow {
        using QWindow::childEvent;
        using QWindow::closeEvent;
        using QWindow::connectNotify;
        using QWindow::customEvent;
        using QWindow::disconnectNotify;
        using QWindow::event;
        using QWindow::exposeEvent;
        using QWindow::focusInEvent;
        using QWindow::focusOutEvent;
        using QWindow::hideEvent;
        using QWindow::keyPressEvent;
        using QWindow::keyReleaseEvent;
        using QWindow::mouseDoubleClickEvent;
        using QWindow::mouseMoveEvent;
        using QWindow::mousePressEvent;
        using QWindow::mouseReleaseEvent;
        using QWindow::moveEvent;
        using QWindow::nativeEvent;
        using QWindow::paintEvent;
        using QWindow::resizeEvent;
        using QWindow::showEvent;
        using QWindow::tabletEvent;
        using QWindow::timerEvent;
        using QWindow::touchEvent;
        using QWindow::wheelEvent;
    };

    VirtualQWindow() : QWindow() {};
    VirtualQWindow(QWindow* parent) : QWindow(parent) {};
    VirtualQWindow(QScreen* screen) : QWindow(screen) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qwindow_metaobject_callback) {
            QMetaObject* callback_ret = qwindow_metaobject_callback(this);
            return callback_ret;
        }
        return QWindow::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qwindow_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qwindow_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QWindow::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qwindow_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qwindow_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QWindow::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSurface::SurfaceType surfaceType() const override {
        if (qwindow_surfacetype_callback) {
            int callback_ret = qwindow_surfacetype_callback(this);
            return static_cast<QSurface::SurfaceType>(callback_ret);
        }
        return QWindow::surfaceType();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSurfaceFormat format() const override {
        if (qwindow_format_callback) {
            QSurfaceFormat* callback_ret = qwindow_format_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QWindow::format();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize size() const override {
        if (qwindow_size_callback) {
            QSize* callback_ret = qwindow_size_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QWindow::size();
    }

    // Virtual method for C ABI access and custom callback
    virtual QAccessibleInterface* accessibleRoot() const override {
        if (qwindow_accessibleroot_callback) {
            QAccessibleInterface* callback_ret = qwindow_accessibleroot_callback(this);
            return callback_ret;
        }
        return QWindow::accessibleRoot();
    }

    // Virtual method for C ABI access and custom callback
    virtual QObject* focusObject() const override {
        if (qwindow_focusobject_callback) {
            QObject* callback_ret = qwindow_focusobject_callback(this);
            return callback_ret;
        }
        return QWindow::focusObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void exposeEvent(QExposeEvent* param1) override {
        if (qwindow_exposeevent_callback) {
            QExposeEvent* cbval1 = param1;
            qwindow_exposeevent_callback(this, cbval1);
            return;
        }
        QWindow::exposeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* param1) override {
        if (qwindow_resizeevent_callback) {
            QResizeEvent* cbval1 = param1;
            qwindow_resizeevent_callback(this, cbval1);
            return;
        }
        QWindow::resizeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* param1) override {
        if (qwindow_paintevent_callback) {
            QPaintEvent* cbval1 = param1;
            qwindow_paintevent_callback(this, cbval1);
            return;
        }
        QWindow::paintEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* param1) override {
        if (qwindow_moveevent_callback) {
            QMoveEvent* cbval1 = param1;
            qwindow_moveevent_callback(this, cbval1);
            return;
        }
        QWindow::moveEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* param1) override {
        if (qwindow_focusinevent_callback) {
            QFocusEvent* cbval1 = param1;
            qwindow_focusinevent_callback(this, cbval1);
            return;
        }
        QWindow::focusInEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* param1) override {
        if (qwindow_focusoutevent_callback) {
            QFocusEvent* cbval1 = param1;
            qwindow_focusoutevent_callback(this, cbval1);
            return;
        }
        QWindow::focusOutEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* param1) override {
        if (qwindow_showevent_callback) {
            QShowEvent* cbval1 = param1;
            qwindow_showevent_callback(this, cbval1);
            return;
        }
        QWindow::showEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* param1) override {
        if (qwindow_hideevent_callback) {
            QHideEvent* cbval1 = param1;
            qwindow_hideevent_callback(this, cbval1);
            return;
        }
        QWindow::hideEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* param1) override {
        if (qwindow_closeevent_callback) {
            QCloseEvent* cbval1 = param1;
            qwindow_closeevent_callback(this, cbval1);
            return;
        }
        QWindow::closeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* param1) override {
        if (qwindow_event_callback) {
            QEvent* cbval1 = param1;
            bool callback_ret = qwindow_event_callback(this, cbval1);
            return callback_ret;
        }
        return QWindow::event(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* param1) override {
        if (qwindow_keypressevent_callback) {
            QKeyEvent* cbval1 = param1;
            qwindow_keypressevent_callback(this, cbval1);
            return;
        }
        QWindow::keyPressEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* param1) override {
        if (qwindow_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = param1;
            qwindow_keyreleaseevent_callback(this, cbval1);
            return;
        }
        QWindow::keyReleaseEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* param1) override {
        if (qwindow_mousepressevent_callback) {
            QMouseEvent* cbval1 = param1;
            qwindow_mousepressevent_callback(this, cbval1);
            return;
        }
        QWindow::mousePressEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* param1) override {
        if (qwindow_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = param1;
            qwindow_mousereleaseevent_callback(this, cbval1);
            return;
        }
        QWindow::mouseReleaseEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* param1) override {
        if (qwindow_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = param1;
            qwindow_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        QWindow::mouseDoubleClickEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* param1) override {
        if (qwindow_mousemoveevent_callback) {
            QMouseEvent* cbval1 = param1;
            qwindow_mousemoveevent_callback(this, cbval1);
            return;
        }
        QWindow::mouseMoveEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* param1) override {
        if (qwindow_wheelevent_callback) {
            QWheelEvent* cbval1 = param1;
            qwindow_wheelevent_callback(this, cbval1);
            return;
        }
        QWindow::wheelEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void touchEvent(QTouchEvent* param1) override {
        if (qwindow_touchevent_callback) {
            QTouchEvent* cbval1 = param1;
            qwindow_touchevent_callback(this, cbval1);
            return;
        }
        QWindow::touchEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* param1) override {
        if (qwindow_tabletevent_callback) {
            QTabletEvent* cbval1 = param1;
            qwindow_tabletevent_callback(this, cbval1);
            return;
        }
        QWindow::tabletEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qwindow_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = qwindow_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return QWindow::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qwindow_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qwindow_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QWindow::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qwindow_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qwindow_timerevent_callback(this, cbval1);
            return;
        }
        QWindow::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qwindow_childevent_callback) {
            QChildEvent* cbval1 = event;
            qwindow_childevent_callback(this, cbval1);
            return;
        }
        QWindow::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qwindow_customevent_callback) {
            QEvent* cbval1 = event;
            qwindow_customevent_callback(this, cbval1);
            return;
        }
        QWindow::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qwindow_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qwindow_connectnotify_callback(this, cbval1);
            return;
        }
        QWindow::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qwindow_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qwindow_disconnectnotify_callback(this, cbval1);
            return;
        }
        QWindow::disconnectNotify(signal);
    }

    // Friend functions
    friend void QWindow_SuperExposeEvent(QWindow* self, QExposeEvent* param1);
    friend void QWindow_SuperResizeEvent(QWindow* self, QResizeEvent* param1);
    friend void QWindow_SuperPaintEvent(QWindow* self, QPaintEvent* param1);
    friend void QWindow_SuperMoveEvent(QWindow* self, QMoveEvent* param1);
    friend void QWindow_SuperFocusInEvent(QWindow* self, QFocusEvent* param1);
    friend void QWindow_SuperFocusOutEvent(QWindow* self, QFocusEvent* param1);
    friend void QWindow_SuperShowEvent(QWindow* self, QShowEvent* param1);
    friend void QWindow_SuperHideEvent(QWindow* self, QHideEvent* param1);
    friend void QWindow_SuperCloseEvent(QWindow* self, QCloseEvent* param1);
    friend bool QWindow_SuperEvent(QWindow* self, QEvent* param1);
    friend void QWindow_SuperKeyPressEvent(QWindow* self, QKeyEvent* param1);
    friend void QWindow_SuperKeyReleaseEvent(QWindow* self, QKeyEvent* param1);
    friend void QWindow_SuperMousePressEvent(QWindow* self, QMouseEvent* param1);
    friend void QWindow_SuperMouseReleaseEvent(QWindow* self, QMouseEvent* param1);
    friend void QWindow_SuperMouseDoubleClickEvent(QWindow* self, QMouseEvent* param1);
    friend void QWindow_SuperMouseMoveEvent(QWindow* self, QMouseEvent* param1);
    friend void QWindow_SuperWheelEvent(QWindow* self, QWheelEvent* param1);
    friend void QWindow_SuperTouchEvent(QWindow* self, QTouchEvent* param1);
    friend void QWindow_SuperTabletEvent(QWindow* self, QTabletEvent* param1);
    friend bool QWindow_SuperNativeEvent(QWindow* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void QWindow_SuperTimerEvent(QWindow* self, QTimerEvent* event);
    friend void QWindow_SuperChildEvent(QWindow* self, QChildEvent* event);
    friend void QWindow_SuperCustomEvent(QWindow* self, QEvent* event);
    friend void QWindow_SuperConnectNotify(QWindow* self, const QMetaMethod* signal);
    friend void QWindow_SuperDisconnectNotify(QWindow* self, const QMetaMethod* signal);
};

#endif
