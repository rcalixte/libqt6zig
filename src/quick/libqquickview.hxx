#pragma once
#ifndef QUICK_LIBQQUICKVIEW_HXX
#define QUICK_LIBQQUICKVIEW_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QQuickView
class VirtualQQuickView final : public QQuickView {
  public:
    // Virtual class public types (including callbacks and access types)
    using QQuickView_MetaObject_Callback = QMetaObject* (*)(const QQuickView*);
    using QQuickView_Metacast_Callback = void* (*)(QQuickView*, const char*);
    using QQuickView_Metacall_Callback = int (*)(QQuickView*, int, int, void**);
    using QQuickView_ResizeEvent_Callback = void (*)(QQuickView*, QResizeEvent*);
    using QQuickView_TimerEvent_Callback = void (*)(QQuickView*, QTimerEvent*);
    using QQuickView_KeyPressEvent_Callback = void (*)(QQuickView*, QKeyEvent*);
    using QQuickView_KeyReleaseEvent_Callback = void (*)(QQuickView*, QKeyEvent*);
    using QQuickView_MousePressEvent_Callback = void (*)(QQuickView*, QMouseEvent*);
    using QQuickView_MouseReleaseEvent_Callback = void (*)(QQuickView*, QMouseEvent*);
    using QQuickView_MouseMoveEvent_Callback = void (*)(QQuickView*, QMouseEvent*);
    using QQuickView_FocusObject_Callback = QObject* (*)(const QQuickView*);
    using QQuickView_AccessibleRoot_Callback = QAccessibleInterface* (*)(const QQuickView*);
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
    using QQuickView_SurfaceType_Callback = int (*)(const QQuickView*);
    using QQuickView_Format_Callback = QSurfaceFormat* (*)(const QQuickView*);
    using QQuickView_Size_Callback = QSize* (*)(const QQuickView*);
    using QQuickView_PaintEvent_Callback = void (*)(QQuickView*, QPaintEvent*);
    using QQuickView_MoveEvent_Callback = void (*)(QQuickView*, QMoveEvent*);
    using QQuickView_TouchEvent_Callback = void (*)(QQuickView*, QTouchEvent*);
    using QQuickView_NativeEvent_Callback = bool (*)(QQuickView*, libqt_string, void*, intptr_t*);
    using QQuickView_EventFilter_Callback = bool (*)(QQuickView*, QObject*, QEvent*);
    using QQuickView_ChildEvent_Callback = void (*)(QQuickView*, QChildEvent*);
    using QQuickView_CustomEvent_Callback = void (*)(QQuickView*, QEvent*);
    using QQuickView_ConnectNotify_Callback = void (*)(QQuickView*, QMetaMethod*);
    using QQuickView_DisconnectNotify_Callback = void (*)(QQuickView*, QMetaMethod*);
    using QQuickView::isSignalConnected;
    using QQuickView::receivers;
    using QQuickView::resolveInterface;
    using QQuickView::sender;
    using QQuickView::senderSignalIndex;

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

    // Access struct
    struct Base : QQuickView {
        using QQuickView::childEvent;
        using QQuickView::closeEvent;
        using QQuickView::connectNotify;
        using QQuickView::customEvent;
        using QQuickView::disconnectNotify;
        using QQuickView::event;
        using QQuickView::exposeEvent;
        using QQuickView::focusInEvent;
        using QQuickView::focusOutEvent;
        using QQuickView::hideEvent;
        using QQuickView::keyPressEvent;
        using QQuickView::keyReleaseEvent;
        using QQuickView::mouseDoubleClickEvent;
        using QQuickView::mouseMoveEvent;
        using QQuickView::mousePressEvent;
        using QQuickView::mouseReleaseEvent;
        using QQuickView::moveEvent;
        using QQuickView::nativeEvent;
        using QQuickView::paintEvent;
        using QQuickView::resizeEvent;
        using QQuickView::showEvent;
        using QQuickView::tabletEvent;
        using QQuickView::timerEvent;
        using QQuickView::touchEvent;
        using QQuickView::wheelEvent;
    };

    VirtualQQuickView() : QQuickView() {};
    VirtualQQuickView(QQmlEngine* engine, QWindow* parent) : QQuickView(engine, parent) {};
    VirtualQQuickView(const QUrl& source) : QQuickView(source) {};
    VirtualQQuickView(QAnyStringView uri, QAnyStringView typeName) : QQuickView(uri, typeName) {};
    VirtualQQuickView(const QUrl& source, QQuickRenderControl* renderControl) : QQuickView(source, renderControl) {};
    VirtualQQuickView(QWindow* parent) : QQuickView(parent) {};
    VirtualQQuickView(const QUrl& source, QWindow* parent) : QQuickView(source, parent) {};
    VirtualQQuickView(QAnyStringView uri, QAnyStringView typeName, QWindow* parent) : QQuickView(uri, typeName, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qquickview_metaobject_callback) {
            QMetaObject* callback_ret = qquickview_metaobject_callback(this);
            return callback_ret;
        }
        return QQuickView::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qquickview_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qquickview_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QQuickView::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qquickview_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qquickview_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QQuickView::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* param1) override {
        if (qquickview_resizeevent_callback) {
            QResizeEvent* cbval1 = param1;
            qquickview_resizeevent_callback(this, cbval1);
            return;
        }
        QQuickView::resizeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* param1) override {
        if (qquickview_timerevent_callback) {
            QTimerEvent* cbval1 = param1;
            qquickview_timerevent_callback(this, cbval1);
            return;
        }
        QQuickView::timerEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* param1) override {
        if (qquickview_keypressevent_callback) {
            QKeyEvent* cbval1 = param1;
            qquickview_keypressevent_callback(this, cbval1);
            return;
        }
        QQuickView::keyPressEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* param1) override {
        if (qquickview_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = param1;
            qquickview_keyreleaseevent_callback(this, cbval1);
            return;
        }
        QQuickView::keyReleaseEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* param1) override {
        if (qquickview_mousepressevent_callback) {
            QMouseEvent* cbval1 = param1;
            qquickview_mousepressevent_callback(this, cbval1);
            return;
        }
        QQuickView::mousePressEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* param1) override {
        if (qquickview_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = param1;
            qquickview_mousereleaseevent_callback(this, cbval1);
            return;
        }
        QQuickView::mouseReleaseEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* param1) override {
        if (qquickview_mousemoveevent_callback) {
            QMouseEvent* cbval1 = param1;
            qquickview_mousemoveevent_callback(this, cbval1);
            return;
        }
        QQuickView::mouseMoveEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QObject* focusObject() const override {
        if (qquickview_focusobject_callback) {
            QObject* callback_ret = qquickview_focusobject_callback(this);
            return callback_ret;
        }
        return QQuickView::focusObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual QAccessibleInterface* accessibleRoot() const override {
        if (qquickview_accessibleroot_callback) {
            QAccessibleInterface* callback_ret = qquickview_accessibleroot_callback(this);
            return callback_ret;
        }
        return QQuickView::accessibleRoot();
    }

    // Virtual method for C ABI access and custom callback
    virtual void exposeEvent(QExposeEvent* param1) override {
        if (qquickview_exposeevent_callback) {
            QExposeEvent* cbval1 = param1;
            qquickview_exposeevent_callback(this, cbval1);
            return;
        }
        QQuickView::exposeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* param1) override {
        if (qquickview_showevent_callback) {
            QShowEvent* cbval1 = param1;
            qquickview_showevent_callback(this, cbval1);
            return;
        }
        QQuickView::showEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* param1) override {
        if (qquickview_hideevent_callback) {
            QHideEvent* cbval1 = param1;
            qquickview_hideevent_callback(this, cbval1);
            return;
        }
        QQuickView::hideEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* param1) override {
        if (qquickview_closeevent_callback) {
            QCloseEvent* cbval1 = param1;
            qquickview_closeevent_callback(this, cbval1);
            return;
        }
        QQuickView::closeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* param1) override {
        if (qquickview_focusinevent_callback) {
            QFocusEvent* cbval1 = param1;
            qquickview_focusinevent_callback(this, cbval1);
            return;
        }
        QQuickView::focusInEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* param1) override {
        if (qquickview_focusoutevent_callback) {
            QFocusEvent* cbval1 = param1;
            qquickview_focusoutevent_callback(this, cbval1);
            return;
        }
        QQuickView::focusOutEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* param1) override {
        if (qquickview_event_callback) {
            QEvent* cbval1 = param1;
            bool callback_ret = qquickview_event_callback(this, cbval1);
            return callback_ret;
        }
        return QQuickView::event(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* param1) override {
        if (qquickview_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = param1;
            qquickview_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        QQuickView::mouseDoubleClickEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* param1) override {
        if (qquickview_wheelevent_callback) {
            QWheelEvent* cbval1 = param1;
            qquickview_wheelevent_callback(this, cbval1);
            return;
        }
        QQuickView::wheelEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* param1) override {
        if (qquickview_tabletevent_callback) {
            QTabletEvent* cbval1 = param1;
            qquickview_tabletevent_callback(this, cbval1);
            return;
        }
        QQuickView::tabletEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSurface::SurfaceType surfaceType() const override {
        if (qquickview_surfacetype_callback) {
            int callback_ret = qquickview_surfacetype_callback(this);
            return static_cast<QSurface::SurfaceType>(callback_ret);
        }
        return QQuickView::surfaceType();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSurfaceFormat format() const override {
        if (qquickview_format_callback) {
            QSurfaceFormat* callback_ret = qquickview_format_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QQuickView::format();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize size() const override {
        if (qquickview_size_callback) {
            QSize* callback_ret = qquickview_size_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QQuickView::size();
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* param1) override {
        if (qquickview_paintevent_callback) {
            QPaintEvent* cbval1 = param1;
            qquickview_paintevent_callback(this, cbval1);
            return;
        }
        QQuickView::paintEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* param1) override {
        if (qquickview_moveevent_callback) {
            QMoveEvent* cbval1 = param1;
            qquickview_moveevent_callback(this, cbval1);
            return;
        }
        QQuickView::moveEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void touchEvent(QTouchEvent* param1) override {
        if (qquickview_touchevent_callback) {
            QTouchEvent* cbval1 = param1;
            qquickview_touchevent_callback(this, cbval1);
            return;
        }
        QQuickView::touchEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qquickview_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = qquickview_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return QQuickView::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qquickview_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qquickview_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QQuickView::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qquickview_childevent_callback) {
            QChildEvent* cbval1 = event;
            qquickview_childevent_callback(this, cbval1);
            return;
        }
        QQuickView::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qquickview_customevent_callback) {
            QEvent* cbval1 = event;
            qquickview_customevent_callback(this, cbval1);
            return;
        }
        QQuickView::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qquickview_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qquickview_connectnotify_callback(this, cbval1);
            return;
        }
        QQuickView::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qquickview_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qquickview_disconnectnotify_callback(this, cbval1);
            return;
        }
        QQuickView::disconnectNotify(signal);
    }

    // Friend functions
    friend void QQuickView_SuperResizeEvent(QQuickView* self, QResizeEvent* param1);
    friend void QQuickView_SuperTimerEvent(QQuickView* self, QTimerEvent* param1);
    friend void QQuickView_SuperKeyPressEvent(QQuickView* self, QKeyEvent* param1);
    friend void QQuickView_SuperKeyReleaseEvent(QQuickView* self, QKeyEvent* param1);
    friend void QQuickView_SuperMousePressEvent(QQuickView* self, QMouseEvent* param1);
    friend void QQuickView_SuperMouseReleaseEvent(QQuickView* self, QMouseEvent* param1);
    friend void QQuickView_SuperMouseMoveEvent(QQuickView* self, QMouseEvent* param1);
    friend void QQuickView_SuperExposeEvent(QQuickView* self, QExposeEvent* param1);
    friend void QQuickView_SuperShowEvent(QQuickView* self, QShowEvent* param1);
    friend void QQuickView_SuperHideEvent(QQuickView* self, QHideEvent* param1);
    friend void QQuickView_SuperCloseEvent(QQuickView* self, QCloseEvent* param1);
    friend void QQuickView_SuperFocusInEvent(QQuickView* self, QFocusEvent* param1);
    friend void QQuickView_SuperFocusOutEvent(QQuickView* self, QFocusEvent* param1);
    friend bool QQuickView_SuperEvent(QQuickView* self, QEvent* param1);
    friend void QQuickView_SuperMouseDoubleClickEvent(QQuickView* self, QMouseEvent* param1);
    friend void QQuickView_SuperWheelEvent(QQuickView* self, QWheelEvent* param1);
    friend void QQuickView_SuperTabletEvent(QQuickView* self, QTabletEvent* param1);
    friend void QQuickView_SuperPaintEvent(QQuickView* self, QPaintEvent* param1);
    friend void QQuickView_SuperMoveEvent(QQuickView* self, QMoveEvent* param1);
    friend void QQuickView_SuperTouchEvent(QQuickView* self, QTouchEvent* param1);
    friend bool QQuickView_SuperNativeEvent(QQuickView* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void QQuickView_SuperChildEvent(QQuickView* self, QChildEvent* event);
    friend void QQuickView_SuperCustomEvent(QQuickView* self, QEvent* event);
    friend void QQuickView_SuperConnectNotify(QQuickView* self, const QMetaMethod* signal);
    friend void QQuickView_SuperDisconnectNotify(QQuickView* self, const QMetaMethod* signal);
};

#endif
