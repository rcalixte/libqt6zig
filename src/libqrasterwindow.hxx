#pragma once
#ifndef LIBQRASTERWINDOW_HXX
#define LIBQRASTERWINDOW_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QRasterWindow
class VirtualQRasterWindow final : public QRasterWindow {
  public:
    // Virtual class public types (including callbacks and access types)
    using QRasterWindow_MetaObject_Callback = QMetaObject* (*)(const QRasterWindow*);
    using QRasterWindow_Metacast_Callback = void* (*)(QRasterWindow*, const char*);
    using QRasterWindow_Metacall_Callback = int (*)(QRasterWindow*, int, int, void**);
    using QRasterWindow_Metric_Callback = int (*)(const QRasterWindow*, int);
    using QRasterWindow_Redirected_Callback = QPaintDevice* (*)(const QRasterWindow*, QPoint*);
    using QRasterWindow_ResizeEvent_Callback = void (*)(QRasterWindow*, QResizeEvent*);
    using QRasterWindow_ExposeEvent_Callback = void (*)(QRasterWindow*, QExposeEvent*);
    using QRasterWindow_PaintEvent_Callback = void (*)(QRasterWindow*, QPaintEvent*);
    using QRasterWindow_Event_Callback = bool (*)(QRasterWindow*, QEvent*);
    using QRasterWindow_SurfaceType_Callback = int (*)(const QRasterWindow*);
    using QRasterWindow_Format_Callback = QSurfaceFormat* (*)(const QRasterWindow*);
    using QRasterWindow_Size_Callback = QSize* (*)(const QRasterWindow*);
    using QRasterWindow_AccessibleRoot_Callback = QAccessibleInterface* (*)(const QRasterWindow*);
    using QRasterWindow_FocusObject_Callback = QObject* (*)(const QRasterWindow*);
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
    using QRasterWindow_DevType_Callback = int (*)(const QRasterWindow*);
    using QRasterWindow_InitPainter_Callback = void (*)(const QRasterWindow*, QPainter*);
    using QRasterWindow_SharedPainter_Callback = QPainter* (*)(const QRasterWindow*);
    using QRasterWindow::getDecodedMetricF;
    using QRasterWindow::isSignalConnected;
    using QRasterWindow::receivers;
    using QRasterWindow::resolveInterface;
    using QRasterWindow::sender;
    using QRasterWindow::senderSignalIndex;

    // Instance callback storage
    QRasterWindow_MetaObject_Callback qrasterwindow_metaobject_callback = nullptr;
    QRasterWindow_Metacast_Callback qrasterwindow_metacast_callback = nullptr;
    QRasterWindow_Metacall_Callback qrasterwindow_metacall_callback = nullptr;
    QRasterWindow_Metric_Callback qrasterwindow_metric_callback = nullptr;
    QRasterWindow_Redirected_Callback qrasterwindow_redirected_callback = nullptr;
    QRasterWindow_ResizeEvent_Callback qrasterwindow_resizeevent_callback = nullptr;
    QRasterWindow_ExposeEvent_Callback qrasterwindow_exposeevent_callback = nullptr;
    QRasterWindow_PaintEvent_Callback qrasterwindow_paintevent_callback = nullptr;
    QRasterWindow_Event_Callback qrasterwindow_event_callback = nullptr;
    QRasterWindow_SurfaceType_Callback qrasterwindow_surfacetype_callback = nullptr;
    QRasterWindow_Format_Callback qrasterwindow_format_callback = nullptr;
    QRasterWindow_Size_Callback qrasterwindow_size_callback = nullptr;
    QRasterWindow_AccessibleRoot_Callback qrasterwindow_accessibleroot_callback = nullptr;
    QRasterWindow_FocusObject_Callback qrasterwindow_focusobject_callback = nullptr;
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

    // Access struct
    struct Base : QRasterWindow {
        using QRasterWindow::childEvent;
        using QRasterWindow::closeEvent;
        using QRasterWindow::connectNotify;
        using QRasterWindow::customEvent;
        using QRasterWindow::disconnectNotify;
        using QRasterWindow::event;
        using QRasterWindow::exposeEvent;
        using QRasterWindow::focusInEvent;
        using QRasterWindow::focusOutEvent;
        using QRasterWindow::hideEvent;
        using QRasterWindow::initPainter;
        using QRasterWindow::keyPressEvent;
        using QRasterWindow::keyReleaseEvent;
        using QRasterWindow::metric;
        using QRasterWindow::mouseDoubleClickEvent;
        using QRasterWindow::mouseMoveEvent;
        using QRasterWindow::mousePressEvent;
        using QRasterWindow::mouseReleaseEvent;
        using QRasterWindow::moveEvent;
        using QRasterWindow::nativeEvent;
        using QRasterWindow::paintEvent;
        using QRasterWindow::redirected;
        using QRasterWindow::resizeEvent;
        using QRasterWindow::sharedPainter;
        using QRasterWindow::showEvent;
        using QRasterWindow::tabletEvent;
        using QRasterWindow::timerEvent;
        using QRasterWindow::touchEvent;
        using QRasterWindow::wheelEvent;
    };

    VirtualQRasterWindow() : QRasterWindow() {};
    VirtualQRasterWindow(QWindow* parent) : QRasterWindow(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qrasterwindow_metaobject_callback) {
            QMetaObject* callback_ret = qrasterwindow_metaobject_callback(this);
            return callback_ret;
        }
        return QRasterWindow::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qrasterwindow_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qrasterwindow_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QRasterWindow::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qrasterwindow_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qrasterwindow_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QRasterWindow::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric metric) const override {
        if (qrasterwindow_metric_callback) {
            int cbval1 = static_cast<int>(metric);
            int callback_ret = qrasterwindow_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QRasterWindow::metric(metric);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* param1) const override {
        if (qrasterwindow_redirected_callback) {
            QPoint* cbval1 = param1;
            QPaintDevice* callback_ret = qrasterwindow_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return QRasterWindow::redirected(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (qrasterwindow_resizeevent_callback) {
            QResizeEvent* cbval1 = event;
            qrasterwindow_resizeevent_callback(this, cbval1);
            return;
        }
        QRasterWindow::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void exposeEvent(QExposeEvent* param1) override {
        if (qrasterwindow_exposeevent_callback) {
            QExposeEvent* cbval1 = param1;
            qrasterwindow_exposeevent_callback(this, cbval1);
            return;
        }
        QRasterWindow::exposeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (qrasterwindow_paintevent_callback) {
            QPaintEvent* cbval1 = event;
            qrasterwindow_paintevent_callback(this, cbval1);
            return;
        }
        QRasterWindow::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qrasterwindow_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qrasterwindow_event_callback(this, cbval1);
            return callback_ret;
        }
        return QRasterWindow::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSurface::SurfaceType surfaceType() const override {
        if (qrasterwindow_surfacetype_callback) {
            int callback_ret = qrasterwindow_surfacetype_callback(this);
            return static_cast<QSurface::SurfaceType>(callback_ret);
        }
        return QRasterWindow::surfaceType();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSurfaceFormat format() const override {
        if (qrasterwindow_format_callback) {
            QSurfaceFormat* callback_ret = qrasterwindow_format_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QRasterWindow::format();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize size() const override {
        if (qrasterwindow_size_callback) {
            QSize* callback_ret = qrasterwindow_size_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QRasterWindow::size();
    }

    // Virtual method for C ABI access and custom callback
    virtual QAccessibleInterface* accessibleRoot() const override {
        if (qrasterwindow_accessibleroot_callback) {
            QAccessibleInterface* callback_ret = qrasterwindow_accessibleroot_callback(this);
            return callback_ret;
        }
        return QRasterWindow::accessibleRoot();
    }

    // Virtual method for C ABI access and custom callback
    virtual QObject* focusObject() const override {
        if (qrasterwindow_focusobject_callback) {
            QObject* callback_ret = qrasterwindow_focusobject_callback(this);
            return callback_ret;
        }
        return QRasterWindow::focusObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* param1) override {
        if (qrasterwindow_moveevent_callback) {
            QMoveEvent* cbval1 = param1;
            qrasterwindow_moveevent_callback(this, cbval1);
            return;
        }
        QRasterWindow::moveEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* param1) override {
        if (qrasterwindow_focusinevent_callback) {
            QFocusEvent* cbval1 = param1;
            qrasterwindow_focusinevent_callback(this, cbval1);
            return;
        }
        QRasterWindow::focusInEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* param1) override {
        if (qrasterwindow_focusoutevent_callback) {
            QFocusEvent* cbval1 = param1;
            qrasterwindow_focusoutevent_callback(this, cbval1);
            return;
        }
        QRasterWindow::focusOutEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* param1) override {
        if (qrasterwindow_showevent_callback) {
            QShowEvent* cbval1 = param1;
            qrasterwindow_showevent_callback(this, cbval1);
            return;
        }
        QRasterWindow::showEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* param1) override {
        if (qrasterwindow_hideevent_callback) {
            QHideEvent* cbval1 = param1;
            qrasterwindow_hideevent_callback(this, cbval1);
            return;
        }
        QRasterWindow::hideEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* param1) override {
        if (qrasterwindow_closeevent_callback) {
            QCloseEvent* cbval1 = param1;
            qrasterwindow_closeevent_callback(this, cbval1);
            return;
        }
        QRasterWindow::closeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* param1) override {
        if (qrasterwindow_keypressevent_callback) {
            QKeyEvent* cbval1 = param1;
            qrasterwindow_keypressevent_callback(this, cbval1);
            return;
        }
        QRasterWindow::keyPressEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* param1) override {
        if (qrasterwindow_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = param1;
            qrasterwindow_keyreleaseevent_callback(this, cbval1);
            return;
        }
        QRasterWindow::keyReleaseEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* param1) override {
        if (qrasterwindow_mousepressevent_callback) {
            QMouseEvent* cbval1 = param1;
            qrasterwindow_mousepressevent_callback(this, cbval1);
            return;
        }
        QRasterWindow::mousePressEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* param1) override {
        if (qrasterwindow_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = param1;
            qrasterwindow_mousereleaseevent_callback(this, cbval1);
            return;
        }
        QRasterWindow::mouseReleaseEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* param1) override {
        if (qrasterwindow_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = param1;
            qrasterwindow_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        QRasterWindow::mouseDoubleClickEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* param1) override {
        if (qrasterwindow_mousemoveevent_callback) {
            QMouseEvent* cbval1 = param1;
            qrasterwindow_mousemoveevent_callback(this, cbval1);
            return;
        }
        QRasterWindow::mouseMoveEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* param1) override {
        if (qrasterwindow_wheelevent_callback) {
            QWheelEvent* cbval1 = param1;
            qrasterwindow_wheelevent_callback(this, cbval1);
            return;
        }
        QRasterWindow::wheelEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void touchEvent(QTouchEvent* param1) override {
        if (qrasterwindow_touchevent_callback) {
            QTouchEvent* cbval1 = param1;
            qrasterwindow_touchevent_callback(this, cbval1);
            return;
        }
        QRasterWindow::touchEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* param1) override {
        if (qrasterwindow_tabletevent_callback) {
            QTabletEvent* cbval1 = param1;
            qrasterwindow_tabletevent_callback(this, cbval1);
            return;
        }
        QRasterWindow::tabletEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qrasterwindow_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = qrasterwindow_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return QRasterWindow::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qrasterwindow_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qrasterwindow_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QRasterWindow::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qrasterwindow_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qrasterwindow_timerevent_callback(this, cbval1);
            return;
        }
        QRasterWindow::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qrasterwindow_childevent_callback) {
            QChildEvent* cbval1 = event;
            qrasterwindow_childevent_callback(this, cbval1);
            return;
        }
        QRasterWindow::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qrasterwindow_customevent_callback) {
            QEvent* cbval1 = event;
            qrasterwindow_customevent_callback(this, cbval1);
            return;
        }
        QRasterWindow::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qrasterwindow_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qrasterwindow_connectnotify_callback(this, cbval1);
            return;
        }
        QRasterWindow::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qrasterwindow_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qrasterwindow_disconnectnotify_callback(this, cbval1);
            return;
        }
        QRasterWindow::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qrasterwindow_devtype_callback) {
            int callback_ret = qrasterwindow_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QRasterWindow::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qrasterwindow_initpainter_callback) {
            QPainter* cbval1 = painter;
            qrasterwindow_initpainter_callback(this, cbval1);
            return;
        }
        QRasterWindow::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qrasterwindow_sharedpainter_callback) {
            QPainter* callback_ret = qrasterwindow_sharedpainter_callback(this);
            return callback_ret;
        }
        return QRasterWindow::sharedPainter();
    }

    // Friend functions
    friend int QRasterWindow_SuperMetric(const QRasterWindow* self, int metric);
    friend QPaintDevice* QRasterWindow_SuperRedirected(const QRasterWindow* self, QPoint* param1);
    friend void QRasterWindow_SuperResizeEvent(QRasterWindow* self, QResizeEvent* event);
    friend void QRasterWindow_SuperExposeEvent(QRasterWindow* self, QExposeEvent* param1);
    friend void QRasterWindow_SuperPaintEvent(QRasterWindow* self, QPaintEvent* event);
    friend bool QRasterWindow_SuperEvent(QRasterWindow* self, QEvent* event);
    friend void QRasterWindow_SuperMoveEvent(QRasterWindow* self, QMoveEvent* param1);
    friend void QRasterWindow_SuperFocusInEvent(QRasterWindow* self, QFocusEvent* param1);
    friend void QRasterWindow_SuperFocusOutEvent(QRasterWindow* self, QFocusEvent* param1);
    friend void QRasterWindow_SuperShowEvent(QRasterWindow* self, QShowEvent* param1);
    friend void QRasterWindow_SuperHideEvent(QRasterWindow* self, QHideEvent* param1);
    friend void QRasterWindow_SuperCloseEvent(QRasterWindow* self, QCloseEvent* param1);
    friend void QRasterWindow_SuperKeyPressEvent(QRasterWindow* self, QKeyEvent* param1);
    friend void QRasterWindow_SuperKeyReleaseEvent(QRasterWindow* self, QKeyEvent* param1);
    friend void QRasterWindow_SuperMousePressEvent(QRasterWindow* self, QMouseEvent* param1);
    friend void QRasterWindow_SuperMouseReleaseEvent(QRasterWindow* self, QMouseEvent* param1);
    friend void QRasterWindow_SuperMouseDoubleClickEvent(QRasterWindow* self, QMouseEvent* param1);
    friend void QRasterWindow_SuperMouseMoveEvent(QRasterWindow* self, QMouseEvent* param1);
    friend void QRasterWindow_SuperWheelEvent(QRasterWindow* self, QWheelEvent* param1);
    friend void QRasterWindow_SuperTouchEvent(QRasterWindow* self, QTouchEvent* param1);
    friend void QRasterWindow_SuperTabletEvent(QRasterWindow* self, QTabletEvent* param1);
    friend bool QRasterWindow_SuperNativeEvent(QRasterWindow* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void QRasterWindow_SuperTimerEvent(QRasterWindow* self, QTimerEvent* event);
    friend void QRasterWindow_SuperChildEvent(QRasterWindow* self, QChildEvent* event);
    friend void QRasterWindow_SuperCustomEvent(QRasterWindow* self, QEvent* event);
    friend void QRasterWindow_SuperConnectNotify(QRasterWindow* self, const QMetaMethod* signal);
    friend void QRasterWindow_SuperDisconnectNotify(QRasterWindow* self, const QMetaMethod* signal);
    friend void QRasterWindow_SuperInitPainter(const QRasterWindow* self, QPainter* painter);
    friend QPainter* QRasterWindow_SuperSharedPainter(const QRasterWindow* self);
};

#endif
