#pragma once
#ifndef QUICK_LIBQQUICKWINDOW_HXX
#define QUICK_LIBQQUICKWINDOW_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QQuickWindow
class VirtualQQuickWindow final : public QQuickWindow {
  public:
    // Virtual class public types (including callbacks and access types)
    using QQuickWindow_MetaObject_Callback = QMetaObject* (*)(const QQuickWindow*);
    using QQuickWindow_Metacast_Callback = void* (*)(QQuickWindow*, const char*);
    using QQuickWindow_Metacall_Callback = int (*)(QQuickWindow*, int, int, void**);
    using QQuickWindow_FocusObject_Callback = QObject* (*)(const QQuickWindow*);
    using QQuickWindow_AccessibleRoot_Callback = QAccessibleInterface* (*)(const QQuickWindow*);
    using QQuickWindow_ExposeEvent_Callback = void (*)(QQuickWindow*, QExposeEvent*);
    using QQuickWindow_ResizeEvent_Callback = void (*)(QQuickWindow*, QResizeEvent*);
    using QQuickWindow_ShowEvent_Callback = void (*)(QQuickWindow*, QShowEvent*);
    using QQuickWindow_HideEvent_Callback = void (*)(QQuickWindow*, QHideEvent*);
    using QQuickWindow_CloseEvent_Callback = void (*)(QQuickWindow*, QCloseEvent*);
    using QQuickWindow_FocusInEvent_Callback = void (*)(QQuickWindow*, QFocusEvent*);
    using QQuickWindow_FocusOutEvent_Callback = void (*)(QQuickWindow*, QFocusEvent*);
    using QQuickWindow_Event_Callback = bool (*)(QQuickWindow*, QEvent*);
    using QQuickWindow_KeyPressEvent_Callback = void (*)(QQuickWindow*, QKeyEvent*);
    using QQuickWindow_KeyReleaseEvent_Callback = void (*)(QQuickWindow*, QKeyEvent*);
    using QQuickWindow_MousePressEvent_Callback = void (*)(QQuickWindow*, QMouseEvent*);
    using QQuickWindow_MouseReleaseEvent_Callback = void (*)(QQuickWindow*, QMouseEvent*);
    using QQuickWindow_MouseDoubleClickEvent_Callback = void (*)(QQuickWindow*, QMouseEvent*);
    using QQuickWindow_MouseMoveEvent_Callback = void (*)(QQuickWindow*, QMouseEvent*);
    using QQuickWindow_WheelEvent_Callback = void (*)(QQuickWindow*, QWheelEvent*);
    using QQuickWindow_TabletEvent_Callback = void (*)(QQuickWindow*, QTabletEvent*);
    using QQuickWindow_SurfaceType_Callback = int (*)(const QQuickWindow*);
    using QQuickWindow_Format_Callback = QSurfaceFormat* (*)(const QQuickWindow*);
    using QQuickWindow_Size_Callback = QSize* (*)(const QQuickWindow*);
    using QQuickWindow_PaintEvent_Callback = void (*)(QQuickWindow*, QPaintEvent*);
    using QQuickWindow_MoveEvent_Callback = void (*)(QQuickWindow*, QMoveEvent*);
    using QQuickWindow_TouchEvent_Callback = void (*)(QQuickWindow*, QTouchEvent*);
    using QQuickWindow_NativeEvent_Callback = bool (*)(QQuickWindow*, libqt_string, void*, intptr_t*);
    using QQuickWindow_EventFilter_Callback = bool (*)(QQuickWindow*, QObject*, QEvent*);
    using QQuickWindow_TimerEvent_Callback = void (*)(QQuickWindow*, QTimerEvent*);
    using QQuickWindow_ChildEvent_Callback = void (*)(QQuickWindow*, QChildEvent*);
    using QQuickWindow_CustomEvent_Callback = void (*)(QQuickWindow*, QEvent*);
    using QQuickWindow_ConnectNotify_Callback = void (*)(QQuickWindow*, QMetaMethod*);
    using QQuickWindow_DisconnectNotify_Callback = void (*)(QQuickWindow*, QMetaMethod*);
    using QQuickWindow::isSignalConnected;
    using QQuickWindow::receivers;
    using QQuickWindow::resolveInterface;
    using QQuickWindow::sender;
    using QQuickWindow::senderSignalIndex;

    // Instance callback storage
    QQuickWindow_MetaObject_Callback qquickwindow_metaobject_callback = nullptr;
    QQuickWindow_Metacast_Callback qquickwindow_metacast_callback = nullptr;
    QQuickWindow_Metacall_Callback qquickwindow_metacall_callback = nullptr;
    QQuickWindow_FocusObject_Callback qquickwindow_focusobject_callback = nullptr;
    QQuickWindow_AccessibleRoot_Callback qquickwindow_accessibleroot_callback = nullptr;
    QQuickWindow_ExposeEvent_Callback qquickwindow_exposeevent_callback = nullptr;
    QQuickWindow_ResizeEvent_Callback qquickwindow_resizeevent_callback = nullptr;
    QQuickWindow_ShowEvent_Callback qquickwindow_showevent_callback = nullptr;
    QQuickWindow_HideEvent_Callback qquickwindow_hideevent_callback = nullptr;
    QQuickWindow_CloseEvent_Callback qquickwindow_closeevent_callback = nullptr;
    QQuickWindow_FocusInEvent_Callback qquickwindow_focusinevent_callback = nullptr;
    QQuickWindow_FocusOutEvent_Callback qquickwindow_focusoutevent_callback = nullptr;
    QQuickWindow_Event_Callback qquickwindow_event_callback = nullptr;
    QQuickWindow_KeyPressEvent_Callback qquickwindow_keypressevent_callback = nullptr;
    QQuickWindow_KeyReleaseEvent_Callback qquickwindow_keyreleaseevent_callback = nullptr;
    QQuickWindow_MousePressEvent_Callback qquickwindow_mousepressevent_callback = nullptr;
    QQuickWindow_MouseReleaseEvent_Callback qquickwindow_mousereleaseevent_callback = nullptr;
    QQuickWindow_MouseDoubleClickEvent_Callback qquickwindow_mousedoubleclickevent_callback = nullptr;
    QQuickWindow_MouseMoveEvent_Callback qquickwindow_mousemoveevent_callback = nullptr;
    QQuickWindow_WheelEvent_Callback qquickwindow_wheelevent_callback = nullptr;
    QQuickWindow_TabletEvent_Callback qquickwindow_tabletevent_callback = nullptr;
    QQuickWindow_SurfaceType_Callback qquickwindow_surfacetype_callback = nullptr;
    QQuickWindow_Format_Callback qquickwindow_format_callback = nullptr;
    QQuickWindow_Size_Callback qquickwindow_size_callback = nullptr;
    QQuickWindow_PaintEvent_Callback qquickwindow_paintevent_callback = nullptr;
    QQuickWindow_MoveEvent_Callback qquickwindow_moveevent_callback = nullptr;
    QQuickWindow_TouchEvent_Callback qquickwindow_touchevent_callback = nullptr;
    QQuickWindow_NativeEvent_Callback qquickwindow_nativeevent_callback = nullptr;
    QQuickWindow_EventFilter_Callback qquickwindow_eventfilter_callback = nullptr;
    QQuickWindow_TimerEvent_Callback qquickwindow_timerevent_callback = nullptr;
    QQuickWindow_ChildEvent_Callback qquickwindow_childevent_callback = nullptr;
    QQuickWindow_CustomEvent_Callback qquickwindow_customevent_callback = nullptr;
    QQuickWindow_ConnectNotify_Callback qquickwindow_connectnotify_callback = nullptr;
    QQuickWindow_DisconnectNotify_Callback qquickwindow_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QQuickWindow {
        using QQuickWindow::childEvent;
        using QQuickWindow::closeEvent;
        using QQuickWindow::connectNotify;
        using QQuickWindow::customEvent;
        using QQuickWindow::disconnectNotify;
        using QQuickWindow::event;
        using QQuickWindow::exposeEvent;
        using QQuickWindow::focusInEvent;
        using QQuickWindow::focusOutEvent;
        using QQuickWindow::hideEvent;
        using QQuickWindow::keyPressEvent;
        using QQuickWindow::keyReleaseEvent;
        using QQuickWindow::mouseDoubleClickEvent;
        using QQuickWindow::mouseMoveEvent;
        using QQuickWindow::mousePressEvent;
        using QQuickWindow::mouseReleaseEvent;
        using QQuickWindow::moveEvent;
        using QQuickWindow::nativeEvent;
        using QQuickWindow::paintEvent;
        using QQuickWindow::resizeEvent;
        using QQuickWindow::showEvent;
        using QQuickWindow::tabletEvent;
        using QQuickWindow::timerEvent;
        using QQuickWindow::touchEvent;
        using QQuickWindow::wheelEvent;
    };

    VirtualQQuickWindow() : QQuickWindow() {};
    VirtualQQuickWindow(QQuickRenderControl* renderControl) : QQuickWindow(renderControl) {};
    VirtualQQuickWindow(QWindow* parent) : QQuickWindow(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qquickwindow_metaobject_callback) {
            QMetaObject* callback_ret = qquickwindow_metaobject_callback(this);
            return callback_ret;
        }
        return QQuickWindow::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qquickwindow_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qquickwindow_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QQuickWindow::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qquickwindow_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qquickwindow_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QQuickWindow::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QObject* focusObject() const override {
        if (qquickwindow_focusobject_callback) {
            QObject* callback_ret = qquickwindow_focusobject_callback(this);
            return callback_ret;
        }
        return QQuickWindow::focusObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual QAccessibleInterface* accessibleRoot() const override {
        if (qquickwindow_accessibleroot_callback) {
            QAccessibleInterface* callback_ret = qquickwindow_accessibleroot_callback(this);
            return callback_ret;
        }
        return QQuickWindow::accessibleRoot();
    }

    // Virtual method for C ABI access and custom callback
    virtual void exposeEvent(QExposeEvent* param1) override {
        if (qquickwindow_exposeevent_callback) {
            QExposeEvent* cbval1 = param1;
            qquickwindow_exposeevent_callback(this, cbval1);
            return;
        }
        QQuickWindow::exposeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* param1) override {
        if (qquickwindow_resizeevent_callback) {
            QResizeEvent* cbval1 = param1;
            qquickwindow_resizeevent_callback(this, cbval1);
            return;
        }
        QQuickWindow::resizeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* param1) override {
        if (qquickwindow_showevent_callback) {
            QShowEvent* cbval1 = param1;
            qquickwindow_showevent_callback(this, cbval1);
            return;
        }
        QQuickWindow::showEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* param1) override {
        if (qquickwindow_hideevent_callback) {
            QHideEvent* cbval1 = param1;
            qquickwindow_hideevent_callback(this, cbval1);
            return;
        }
        QQuickWindow::hideEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* param1) override {
        if (qquickwindow_closeevent_callback) {
            QCloseEvent* cbval1 = param1;
            qquickwindow_closeevent_callback(this, cbval1);
            return;
        }
        QQuickWindow::closeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* param1) override {
        if (qquickwindow_focusinevent_callback) {
            QFocusEvent* cbval1 = param1;
            qquickwindow_focusinevent_callback(this, cbval1);
            return;
        }
        QQuickWindow::focusInEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* param1) override {
        if (qquickwindow_focusoutevent_callback) {
            QFocusEvent* cbval1 = param1;
            qquickwindow_focusoutevent_callback(this, cbval1);
            return;
        }
        QQuickWindow::focusOutEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* param1) override {
        if (qquickwindow_event_callback) {
            QEvent* cbval1 = param1;
            bool callback_ret = qquickwindow_event_callback(this, cbval1);
            return callback_ret;
        }
        return QQuickWindow::event(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* param1) override {
        if (qquickwindow_keypressevent_callback) {
            QKeyEvent* cbval1 = param1;
            qquickwindow_keypressevent_callback(this, cbval1);
            return;
        }
        QQuickWindow::keyPressEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* param1) override {
        if (qquickwindow_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = param1;
            qquickwindow_keyreleaseevent_callback(this, cbval1);
            return;
        }
        QQuickWindow::keyReleaseEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* param1) override {
        if (qquickwindow_mousepressevent_callback) {
            QMouseEvent* cbval1 = param1;
            qquickwindow_mousepressevent_callback(this, cbval1);
            return;
        }
        QQuickWindow::mousePressEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* param1) override {
        if (qquickwindow_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = param1;
            qquickwindow_mousereleaseevent_callback(this, cbval1);
            return;
        }
        QQuickWindow::mouseReleaseEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* param1) override {
        if (qquickwindow_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = param1;
            qquickwindow_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        QQuickWindow::mouseDoubleClickEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* param1) override {
        if (qquickwindow_mousemoveevent_callback) {
            QMouseEvent* cbval1 = param1;
            qquickwindow_mousemoveevent_callback(this, cbval1);
            return;
        }
        QQuickWindow::mouseMoveEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* param1) override {
        if (qquickwindow_wheelevent_callback) {
            QWheelEvent* cbval1 = param1;
            qquickwindow_wheelevent_callback(this, cbval1);
            return;
        }
        QQuickWindow::wheelEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* param1) override {
        if (qquickwindow_tabletevent_callback) {
            QTabletEvent* cbval1 = param1;
            qquickwindow_tabletevent_callback(this, cbval1);
            return;
        }
        QQuickWindow::tabletEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSurface::SurfaceType surfaceType() const override {
        if (qquickwindow_surfacetype_callback) {
            int callback_ret = qquickwindow_surfacetype_callback(this);
            return static_cast<QSurface::SurfaceType>(callback_ret);
        }
        return QQuickWindow::surfaceType();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSurfaceFormat format() const override {
        if (qquickwindow_format_callback) {
            QSurfaceFormat* callback_ret = qquickwindow_format_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QQuickWindow::format();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize size() const override {
        if (qquickwindow_size_callback) {
            QSize* callback_ret = qquickwindow_size_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QQuickWindow::size();
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* param1) override {
        if (qquickwindow_paintevent_callback) {
            QPaintEvent* cbval1 = param1;
            qquickwindow_paintevent_callback(this, cbval1);
            return;
        }
        QQuickWindow::paintEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* param1) override {
        if (qquickwindow_moveevent_callback) {
            QMoveEvent* cbval1 = param1;
            qquickwindow_moveevent_callback(this, cbval1);
            return;
        }
        QQuickWindow::moveEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void touchEvent(QTouchEvent* param1) override {
        if (qquickwindow_touchevent_callback) {
            QTouchEvent* cbval1 = param1;
            qquickwindow_touchevent_callback(this, cbval1);
            return;
        }
        QQuickWindow::touchEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qquickwindow_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = qquickwindow_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return QQuickWindow::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qquickwindow_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qquickwindow_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QQuickWindow::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qquickwindow_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qquickwindow_timerevent_callback(this, cbval1);
            return;
        }
        QQuickWindow::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qquickwindow_childevent_callback) {
            QChildEvent* cbval1 = event;
            qquickwindow_childevent_callback(this, cbval1);
            return;
        }
        QQuickWindow::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qquickwindow_customevent_callback) {
            QEvent* cbval1 = event;
            qquickwindow_customevent_callback(this, cbval1);
            return;
        }
        QQuickWindow::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qquickwindow_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qquickwindow_connectnotify_callback(this, cbval1);
            return;
        }
        QQuickWindow::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qquickwindow_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qquickwindow_disconnectnotify_callback(this, cbval1);
            return;
        }
        QQuickWindow::disconnectNotify(signal);
    }

    // Friend functions
    friend void QQuickWindow_SuperExposeEvent(QQuickWindow* self, QExposeEvent* param1);
    friend void QQuickWindow_SuperResizeEvent(QQuickWindow* self, QResizeEvent* param1);
    friend void QQuickWindow_SuperShowEvent(QQuickWindow* self, QShowEvent* param1);
    friend void QQuickWindow_SuperHideEvent(QQuickWindow* self, QHideEvent* param1);
    friend void QQuickWindow_SuperCloseEvent(QQuickWindow* self, QCloseEvent* param1);
    friend void QQuickWindow_SuperFocusInEvent(QQuickWindow* self, QFocusEvent* param1);
    friend void QQuickWindow_SuperFocusOutEvent(QQuickWindow* self, QFocusEvent* param1);
    friend bool QQuickWindow_SuperEvent(QQuickWindow* self, QEvent* param1);
    friend void QQuickWindow_SuperKeyPressEvent(QQuickWindow* self, QKeyEvent* param1);
    friend void QQuickWindow_SuperKeyReleaseEvent(QQuickWindow* self, QKeyEvent* param1);
    friend void QQuickWindow_SuperMousePressEvent(QQuickWindow* self, QMouseEvent* param1);
    friend void QQuickWindow_SuperMouseReleaseEvent(QQuickWindow* self, QMouseEvent* param1);
    friend void QQuickWindow_SuperMouseDoubleClickEvent(QQuickWindow* self, QMouseEvent* param1);
    friend void QQuickWindow_SuperMouseMoveEvent(QQuickWindow* self, QMouseEvent* param1);
    friend void QQuickWindow_SuperWheelEvent(QQuickWindow* self, QWheelEvent* param1);
    friend void QQuickWindow_SuperTabletEvent(QQuickWindow* self, QTabletEvent* param1);
    friend void QQuickWindow_SuperPaintEvent(QQuickWindow* self, QPaintEvent* param1);
    friend void QQuickWindow_SuperMoveEvent(QQuickWindow* self, QMoveEvent* param1);
    friend void QQuickWindow_SuperTouchEvent(QQuickWindow* self, QTouchEvent* param1);
    friend bool QQuickWindow_SuperNativeEvent(QQuickWindow* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void QQuickWindow_SuperTimerEvent(QQuickWindow* self, QTimerEvent* event);
    friend void QQuickWindow_SuperChildEvent(QQuickWindow* self, QChildEvent* event);
    friend void QQuickWindow_SuperCustomEvent(QQuickWindow* self, QEvent* event);
    friend void QQuickWindow_SuperConnectNotify(QQuickWindow* self, const QMetaMethod* signal);
    friend void QQuickWindow_SuperDisconnectNotify(QQuickWindow* self, const QMetaMethod* signal);
};

#endif
