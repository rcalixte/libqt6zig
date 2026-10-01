#pragma once
#ifndef OPENGL_LIBQOPENGLWINDOW_HXX
#define OPENGL_LIBQOPENGLWINDOW_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QOpenGLWindow
class VirtualQOpenGLWindow final : public QOpenGLWindow {
  public:
    // Virtual class public types (including callbacks and access types)
    using QOpenGLWindow_MetaObject_Callback = QMetaObject* (*)(const QOpenGLWindow*);
    using QOpenGLWindow_Metacast_Callback = void* (*)(QOpenGLWindow*, const char*);
    using QOpenGLWindow_Metacall_Callback = int (*)(QOpenGLWindow*, int, int, void**);
    using QOpenGLWindow_InitializeGL_Callback = void (*)(QOpenGLWindow*);
    using QOpenGLWindow_ResizeGL_Callback = void (*)(QOpenGLWindow*, int, int);
    using QOpenGLWindow_PaintGL_Callback = void (*)(QOpenGLWindow*);
    using QOpenGLWindow_PaintUnderGL_Callback = void (*)(QOpenGLWindow*);
    using QOpenGLWindow_PaintOverGL_Callback = void (*)(QOpenGLWindow*);
    using QOpenGLWindow_PaintEvent_Callback = void (*)(QOpenGLWindow*, QPaintEvent*);
    using QOpenGLWindow_ResizeEvent_Callback = void (*)(QOpenGLWindow*, QResizeEvent*);
    using QOpenGLWindow_Metric_Callback = int (*)(const QOpenGLWindow*, int);
    using QOpenGLWindow_Redirected_Callback = QPaintDevice* (*)(const QOpenGLWindow*, QPoint*);
    using QOpenGLWindow_ExposeEvent_Callback = void (*)(QOpenGLWindow*, QExposeEvent*);
    using QOpenGLWindow_Event_Callback = bool (*)(QOpenGLWindow*, QEvent*);
    using QOpenGLWindow_SurfaceType_Callback = int (*)(const QOpenGLWindow*);
    using QOpenGLWindow_Format_Callback = QSurfaceFormat* (*)(const QOpenGLWindow*);
    using QOpenGLWindow_Size_Callback = QSize* (*)(const QOpenGLWindow*);
    using QOpenGLWindow_AccessibleRoot_Callback = QAccessibleInterface* (*)(const QOpenGLWindow*);
    using QOpenGLWindow_FocusObject_Callback = QObject* (*)(const QOpenGLWindow*);
    using QOpenGLWindow_MoveEvent_Callback = void (*)(QOpenGLWindow*, QMoveEvent*);
    using QOpenGLWindow_FocusInEvent_Callback = void (*)(QOpenGLWindow*, QFocusEvent*);
    using QOpenGLWindow_FocusOutEvent_Callback = void (*)(QOpenGLWindow*, QFocusEvent*);
    using QOpenGLWindow_ShowEvent_Callback = void (*)(QOpenGLWindow*, QShowEvent*);
    using QOpenGLWindow_HideEvent_Callback = void (*)(QOpenGLWindow*, QHideEvent*);
    using QOpenGLWindow_CloseEvent_Callback = void (*)(QOpenGLWindow*, QCloseEvent*);
    using QOpenGLWindow_KeyPressEvent_Callback = void (*)(QOpenGLWindow*, QKeyEvent*);
    using QOpenGLWindow_KeyReleaseEvent_Callback = void (*)(QOpenGLWindow*, QKeyEvent*);
    using QOpenGLWindow_MousePressEvent_Callback = void (*)(QOpenGLWindow*, QMouseEvent*);
    using QOpenGLWindow_MouseReleaseEvent_Callback = void (*)(QOpenGLWindow*, QMouseEvent*);
    using QOpenGLWindow_MouseDoubleClickEvent_Callback = void (*)(QOpenGLWindow*, QMouseEvent*);
    using QOpenGLWindow_MouseMoveEvent_Callback = void (*)(QOpenGLWindow*, QMouseEvent*);
    using QOpenGLWindow_WheelEvent_Callback = void (*)(QOpenGLWindow*, QWheelEvent*);
    using QOpenGLWindow_TouchEvent_Callback = void (*)(QOpenGLWindow*, QTouchEvent*);
    using QOpenGLWindow_TabletEvent_Callback = void (*)(QOpenGLWindow*, QTabletEvent*);
    using QOpenGLWindow_NativeEvent_Callback = bool (*)(QOpenGLWindow*, libqt_string, void*, intptr_t*);
    using QOpenGLWindow_EventFilter_Callback = bool (*)(QOpenGLWindow*, QObject*, QEvent*);
    using QOpenGLWindow_TimerEvent_Callback = void (*)(QOpenGLWindow*, QTimerEvent*);
    using QOpenGLWindow_ChildEvent_Callback = void (*)(QOpenGLWindow*, QChildEvent*);
    using QOpenGLWindow_CustomEvent_Callback = void (*)(QOpenGLWindow*, QEvent*);
    using QOpenGLWindow_ConnectNotify_Callback = void (*)(QOpenGLWindow*, QMetaMethod*);
    using QOpenGLWindow_DisconnectNotify_Callback = void (*)(QOpenGLWindow*, QMetaMethod*);
    using QOpenGLWindow_DevType_Callback = int (*)(const QOpenGLWindow*);
    using QOpenGLWindow_InitPainter_Callback = void (*)(const QOpenGLWindow*, QPainter*);
    using QOpenGLWindow_SharedPainter_Callback = QPainter* (*)(const QOpenGLWindow*);
    using QOpenGLWindow::getDecodedMetricF;
    using QOpenGLWindow::isSignalConnected;
    using QOpenGLWindow::receivers;
    using QOpenGLWindow::resolveInterface;
    using QOpenGLWindow::sender;
    using QOpenGLWindow::senderSignalIndex;

    // Instance callback storage
    QOpenGLWindow_MetaObject_Callback qopenglwindow_metaobject_callback = nullptr;
    QOpenGLWindow_Metacast_Callback qopenglwindow_metacast_callback = nullptr;
    QOpenGLWindow_Metacall_Callback qopenglwindow_metacall_callback = nullptr;
    QOpenGLWindow_InitializeGL_Callback qopenglwindow_initializegl_callback = nullptr;
    QOpenGLWindow_ResizeGL_Callback qopenglwindow_resizegl_callback = nullptr;
    QOpenGLWindow_PaintGL_Callback qopenglwindow_paintgl_callback = nullptr;
    QOpenGLWindow_PaintUnderGL_Callback qopenglwindow_paintundergl_callback = nullptr;
    QOpenGLWindow_PaintOverGL_Callback qopenglwindow_paintovergl_callback = nullptr;
    QOpenGLWindow_PaintEvent_Callback qopenglwindow_paintevent_callback = nullptr;
    QOpenGLWindow_ResizeEvent_Callback qopenglwindow_resizeevent_callback = nullptr;
    QOpenGLWindow_Metric_Callback qopenglwindow_metric_callback = nullptr;
    QOpenGLWindow_Redirected_Callback qopenglwindow_redirected_callback = nullptr;
    QOpenGLWindow_ExposeEvent_Callback qopenglwindow_exposeevent_callback = nullptr;
    QOpenGLWindow_Event_Callback qopenglwindow_event_callback = nullptr;
    QOpenGLWindow_SurfaceType_Callback qopenglwindow_surfacetype_callback = nullptr;
    QOpenGLWindow_Format_Callback qopenglwindow_format_callback = nullptr;
    QOpenGLWindow_Size_Callback qopenglwindow_size_callback = nullptr;
    QOpenGLWindow_AccessibleRoot_Callback qopenglwindow_accessibleroot_callback = nullptr;
    QOpenGLWindow_FocusObject_Callback qopenglwindow_focusobject_callback = nullptr;
    QOpenGLWindow_MoveEvent_Callback qopenglwindow_moveevent_callback = nullptr;
    QOpenGLWindow_FocusInEvent_Callback qopenglwindow_focusinevent_callback = nullptr;
    QOpenGLWindow_FocusOutEvent_Callback qopenglwindow_focusoutevent_callback = nullptr;
    QOpenGLWindow_ShowEvent_Callback qopenglwindow_showevent_callback = nullptr;
    QOpenGLWindow_HideEvent_Callback qopenglwindow_hideevent_callback = nullptr;
    QOpenGLWindow_CloseEvent_Callback qopenglwindow_closeevent_callback = nullptr;
    QOpenGLWindow_KeyPressEvent_Callback qopenglwindow_keypressevent_callback = nullptr;
    QOpenGLWindow_KeyReleaseEvent_Callback qopenglwindow_keyreleaseevent_callback = nullptr;
    QOpenGLWindow_MousePressEvent_Callback qopenglwindow_mousepressevent_callback = nullptr;
    QOpenGLWindow_MouseReleaseEvent_Callback qopenglwindow_mousereleaseevent_callback = nullptr;
    QOpenGLWindow_MouseDoubleClickEvent_Callback qopenglwindow_mousedoubleclickevent_callback = nullptr;
    QOpenGLWindow_MouseMoveEvent_Callback qopenglwindow_mousemoveevent_callback = nullptr;
    QOpenGLWindow_WheelEvent_Callback qopenglwindow_wheelevent_callback = nullptr;
    QOpenGLWindow_TouchEvent_Callback qopenglwindow_touchevent_callback = nullptr;
    QOpenGLWindow_TabletEvent_Callback qopenglwindow_tabletevent_callback = nullptr;
    QOpenGLWindow_NativeEvent_Callback qopenglwindow_nativeevent_callback = nullptr;
    QOpenGLWindow_EventFilter_Callback qopenglwindow_eventfilter_callback = nullptr;
    QOpenGLWindow_TimerEvent_Callback qopenglwindow_timerevent_callback = nullptr;
    QOpenGLWindow_ChildEvent_Callback qopenglwindow_childevent_callback = nullptr;
    QOpenGLWindow_CustomEvent_Callback qopenglwindow_customevent_callback = nullptr;
    QOpenGLWindow_ConnectNotify_Callback qopenglwindow_connectnotify_callback = nullptr;
    QOpenGLWindow_DisconnectNotify_Callback qopenglwindow_disconnectnotify_callback = nullptr;
    QOpenGLWindow_DevType_Callback qopenglwindow_devtype_callback = nullptr;
    QOpenGLWindow_InitPainter_Callback qopenglwindow_initpainter_callback = nullptr;
    QOpenGLWindow_SharedPainter_Callback qopenglwindow_sharedpainter_callback = nullptr;

    // Access struct
    struct Base : QOpenGLWindow {
        using QOpenGLWindow::childEvent;
        using QOpenGLWindow::closeEvent;
        using QOpenGLWindow::connectNotify;
        using QOpenGLWindow::customEvent;
        using QOpenGLWindow::disconnectNotify;
        using QOpenGLWindow::event;
        using QOpenGLWindow::exposeEvent;
        using QOpenGLWindow::focusInEvent;
        using QOpenGLWindow::focusOutEvent;
        using QOpenGLWindow::hideEvent;
        using QOpenGLWindow::initializeGL;
        using QOpenGLWindow::initPainter;
        using QOpenGLWindow::keyPressEvent;
        using QOpenGLWindow::keyReleaseEvent;
        using QOpenGLWindow::metric;
        using QOpenGLWindow::mouseDoubleClickEvent;
        using QOpenGLWindow::mouseMoveEvent;
        using QOpenGLWindow::mousePressEvent;
        using QOpenGLWindow::mouseReleaseEvent;
        using QOpenGLWindow::moveEvent;
        using QOpenGLWindow::nativeEvent;
        using QOpenGLWindow::paintEvent;
        using QOpenGLWindow::paintGL;
        using QOpenGLWindow::paintOverGL;
        using QOpenGLWindow::paintUnderGL;
        using QOpenGLWindow::redirected;
        using QOpenGLWindow::resizeEvent;
        using QOpenGLWindow::resizeGL;
        using QOpenGLWindow::sharedPainter;
        using QOpenGLWindow::showEvent;
        using QOpenGLWindow::tabletEvent;
        using QOpenGLWindow::timerEvent;
        using QOpenGLWindow::touchEvent;
        using QOpenGLWindow::wheelEvent;
    };

    VirtualQOpenGLWindow() : QOpenGLWindow() {};
    VirtualQOpenGLWindow(QOpenGLContext* shareContext) : QOpenGLWindow(shareContext) {};
    VirtualQOpenGLWindow(QOpenGLWindow::UpdateBehavior updateBehavior) : QOpenGLWindow(updateBehavior) {};
    VirtualQOpenGLWindow(QOpenGLWindow::UpdateBehavior updateBehavior, QWindow* parent) : QOpenGLWindow(updateBehavior, parent) {};
    VirtualQOpenGLWindow(QOpenGLContext* shareContext, QOpenGLWindow::UpdateBehavior updateBehavior) : QOpenGLWindow(shareContext, updateBehavior) {};
    VirtualQOpenGLWindow(QOpenGLContext* shareContext, QOpenGLWindow::UpdateBehavior updateBehavior, QWindow* parent) : QOpenGLWindow(shareContext, updateBehavior, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qopenglwindow_metaobject_callback) {
            QMetaObject* callback_ret = qopenglwindow_metaobject_callback(this);
            return callback_ret;
        }
        return QOpenGLWindow::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qopenglwindow_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qopenglwindow_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QOpenGLWindow::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qopenglwindow_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qopenglwindow_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QOpenGLWindow::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initializeGL() override {
        if (qopenglwindow_initializegl_callback) {
            qopenglwindow_initializegl_callback(this);
            return;
        }
        QOpenGLWindow::initializeGL();
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeGL(int w, int h) override {
        if (qopenglwindow_resizegl_callback) {
            int cbval1 = w;
            int cbval2 = h;
            qopenglwindow_resizegl_callback(this, cbval1, cbval2);
            return;
        }
        QOpenGLWindow::resizeGL(w, h);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintGL() override {
        if (qopenglwindow_paintgl_callback) {
            qopenglwindow_paintgl_callback(this);
            return;
        }
        QOpenGLWindow::paintGL();
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintUnderGL() override {
        if (qopenglwindow_paintundergl_callback) {
            qopenglwindow_paintundergl_callback(this);
            return;
        }
        QOpenGLWindow::paintUnderGL();
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintOverGL() override {
        if (qopenglwindow_paintovergl_callback) {
            qopenglwindow_paintovergl_callback(this);
            return;
        }
        QOpenGLWindow::paintOverGL();
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (qopenglwindow_paintevent_callback) {
            QPaintEvent* cbval1 = event;
            qopenglwindow_paintevent_callback(this, cbval1);
            return;
        }
        QOpenGLWindow::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (qopenglwindow_resizeevent_callback) {
            QResizeEvent* cbval1 = event;
            qopenglwindow_resizeevent_callback(this, cbval1);
            return;
        }
        QOpenGLWindow::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric metric) const override {
        if (qopenglwindow_metric_callback) {
            int cbval1 = static_cast<int>(metric);
            int callback_ret = qopenglwindow_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QOpenGLWindow::metric(metric);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* param1) const override {
        if (qopenglwindow_redirected_callback) {
            QPoint* cbval1 = param1;
            QPaintDevice* callback_ret = qopenglwindow_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return QOpenGLWindow::redirected(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void exposeEvent(QExposeEvent* param1) override {
        if (qopenglwindow_exposeevent_callback) {
            QExposeEvent* cbval1 = param1;
            qopenglwindow_exposeevent_callback(this, cbval1);
            return;
        }
        QOpenGLWindow::exposeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qopenglwindow_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qopenglwindow_event_callback(this, cbval1);
            return callback_ret;
        }
        return QOpenGLWindow::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSurface::SurfaceType surfaceType() const override {
        if (qopenglwindow_surfacetype_callback) {
            int callback_ret = qopenglwindow_surfacetype_callback(this);
            return static_cast<QSurface::SurfaceType>(callback_ret);
        }
        return QOpenGLWindow::surfaceType();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSurfaceFormat format() const override {
        if (qopenglwindow_format_callback) {
            QSurfaceFormat* callback_ret = qopenglwindow_format_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QOpenGLWindow::format();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize size() const override {
        if (qopenglwindow_size_callback) {
            QSize* callback_ret = qopenglwindow_size_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QOpenGLWindow::size();
    }

    // Virtual method for C ABI access and custom callback
    virtual QAccessibleInterface* accessibleRoot() const override {
        if (qopenglwindow_accessibleroot_callback) {
            QAccessibleInterface* callback_ret = qopenglwindow_accessibleroot_callback(this);
            return callback_ret;
        }
        return QOpenGLWindow::accessibleRoot();
    }

    // Virtual method for C ABI access and custom callback
    virtual QObject* focusObject() const override {
        if (qopenglwindow_focusobject_callback) {
            QObject* callback_ret = qopenglwindow_focusobject_callback(this);
            return callback_ret;
        }
        return QOpenGLWindow::focusObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* param1) override {
        if (qopenglwindow_moveevent_callback) {
            QMoveEvent* cbval1 = param1;
            qopenglwindow_moveevent_callback(this, cbval1);
            return;
        }
        QOpenGLWindow::moveEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* param1) override {
        if (qopenglwindow_focusinevent_callback) {
            QFocusEvent* cbval1 = param1;
            qopenglwindow_focusinevent_callback(this, cbval1);
            return;
        }
        QOpenGLWindow::focusInEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* param1) override {
        if (qopenglwindow_focusoutevent_callback) {
            QFocusEvent* cbval1 = param1;
            qopenglwindow_focusoutevent_callback(this, cbval1);
            return;
        }
        QOpenGLWindow::focusOutEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* param1) override {
        if (qopenglwindow_showevent_callback) {
            QShowEvent* cbval1 = param1;
            qopenglwindow_showevent_callback(this, cbval1);
            return;
        }
        QOpenGLWindow::showEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* param1) override {
        if (qopenglwindow_hideevent_callback) {
            QHideEvent* cbval1 = param1;
            qopenglwindow_hideevent_callback(this, cbval1);
            return;
        }
        QOpenGLWindow::hideEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* param1) override {
        if (qopenglwindow_closeevent_callback) {
            QCloseEvent* cbval1 = param1;
            qopenglwindow_closeevent_callback(this, cbval1);
            return;
        }
        QOpenGLWindow::closeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* param1) override {
        if (qopenglwindow_keypressevent_callback) {
            QKeyEvent* cbval1 = param1;
            qopenglwindow_keypressevent_callback(this, cbval1);
            return;
        }
        QOpenGLWindow::keyPressEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* param1) override {
        if (qopenglwindow_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = param1;
            qopenglwindow_keyreleaseevent_callback(this, cbval1);
            return;
        }
        QOpenGLWindow::keyReleaseEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* param1) override {
        if (qopenglwindow_mousepressevent_callback) {
            QMouseEvent* cbval1 = param1;
            qopenglwindow_mousepressevent_callback(this, cbval1);
            return;
        }
        QOpenGLWindow::mousePressEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* param1) override {
        if (qopenglwindow_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = param1;
            qopenglwindow_mousereleaseevent_callback(this, cbval1);
            return;
        }
        QOpenGLWindow::mouseReleaseEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* param1) override {
        if (qopenglwindow_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = param1;
            qopenglwindow_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        QOpenGLWindow::mouseDoubleClickEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* param1) override {
        if (qopenglwindow_mousemoveevent_callback) {
            QMouseEvent* cbval1 = param1;
            qopenglwindow_mousemoveevent_callback(this, cbval1);
            return;
        }
        QOpenGLWindow::mouseMoveEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* param1) override {
        if (qopenglwindow_wheelevent_callback) {
            QWheelEvent* cbval1 = param1;
            qopenglwindow_wheelevent_callback(this, cbval1);
            return;
        }
        QOpenGLWindow::wheelEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void touchEvent(QTouchEvent* param1) override {
        if (qopenglwindow_touchevent_callback) {
            QTouchEvent* cbval1 = param1;
            qopenglwindow_touchevent_callback(this, cbval1);
            return;
        }
        QOpenGLWindow::touchEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* param1) override {
        if (qopenglwindow_tabletevent_callback) {
            QTabletEvent* cbval1 = param1;
            qopenglwindow_tabletevent_callback(this, cbval1);
            return;
        }
        QOpenGLWindow::tabletEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qopenglwindow_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = qopenglwindow_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return QOpenGLWindow::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qopenglwindow_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qopenglwindow_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QOpenGLWindow::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qopenglwindow_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qopenglwindow_timerevent_callback(this, cbval1);
            return;
        }
        QOpenGLWindow::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qopenglwindow_childevent_callback) {
            QChildEvent* cbval1 = event;
            qopenglwindow_childevent_callback(this, cbval1);
            return;
        }
        QOpenGLWindow::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qopenglwindow_customevent_callback) {
            QEvent* cbval1 = event;
            qopenglwindow_customevent_callback(this, cbval1);
            return;
        }
        QOpenGLWindow::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qopenglwindow_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qopenglwindow_connectnotify_callback(this, cbval1);
            return;
        }
        QOpenGLWindow::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qopenglwindow_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qopenglwindow_disconnectnotify_callback(this, cbval1);
            return;
        }
        QOpenGLWindow::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qopenglwindow_devtype_callback) {
            int callback_ret = qopenglwindow_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QOpenGLWindow::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qopenglwindow_initpainter_callback) {
            QPainter* cbval1 = painter;
            qopenglwindow_initpainter_callback(this, cbval1);
            return;
        }
        QOpenGLWindow::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qopenglwindow_sharedpainter_callback) {
            QPainter* callback_ret = qopenglwindow_sharedpainter_callback(this);
            return callback_ret;
        }
        return QOpenGLWindow::sharedPainter();
    }

    // Friend functions
    friend void QOpenGLWindow_SuperInitializeGL(QOpenGLWindow* self);
    friend void QOpenGLWindow_SuperResizeGL(QOpenGLWindow* self, int w, int h);
    friend void QOpenGLWindow_SuperPaintGL(QOpenGLWindow* self);
    friend void QOpenGLWindow_SuperPaintUnderGL(QOpenGLWindow* self);
    friend void QOpenGLWindow_SuperPaintOverGL(QOpenGLWindow* self);
    friend void QOpenGLWindow_SuperPaintEvent(QOpenGLWindow* self, QPaintEvent* event);
    friend void QOpenGLWindow_SuperResizeEvent(QOpenGLWindow* self, QResizeEvent* event);
    friend int QOpenGLWindow_SuperMetric(const QOpenGLWindow* self, int metric);
    friend QPaintDevice* QOpenGLWindow_SuperRedirected(const QOpenGLWindow* self, QPoint* param1);
    friend void QOpenGLWindow_SuperExposeEvent(QOpenGLWindow* self, QExposeEvent* param1);
    friend bool QOpenGLWindow_SuperEvent(QOpenGLWindow* self, QEvent* event);
    friend void QOpenGLWindow_SuperMoveEvent(QOpenGLWindow* self, QMoveEvent* param1);
    friend void QOpenGLWindow_SuperFocusInEvent(QOpenGLWindow* self, QFocusEvent* param1);
    friend void QOpenGLWindow_SuperFocusOutEvent(QOpenGLWindow* self, QFocusEvent* param1);
    friend void QOpenGLWindow_SuperShowEvent(QOpenGLWindow* self, QShowEvent* param1);
    friend void QOpenGLWindow_SuperHideEvent(QOpenGLWindow* self, QHideEvent* param1);
    friend void QOpenGLWindow_SuperCloseEvent(QOpenGLWindow* self, QCloseEvent* param1);
    friend void QOpenGLWindow_SuperKeyPressEvent(QOpenGLWindow* self, QKeyEvent* param1);
    friend void QOpenGLWindow_SuperKeyReleaseEvent(QOpenGLWindow* self, QKeyEvent* param1);
    friend void QOpenGLWindow_SuperMousePressEvent(QOpenGLWindow* self, QMouseEvent* param1);
    friend void QOpenGLWindow_SuperMouseReleaseEvent(QOpenGLWindow* self, QMouseEvent* param1);
    friend void QOpenGLWindow_SuperMouseDoubleClickEvent(QOpenGLWindow* self, QMouseEvent* param1);
    friend void QOpenGLWindow_SuperMouseMoveEvent(QOpenGLWindow* self, QMouseEvent* param1);
    friend void QOpenGLWindow_SuperWheelEvent(QOpenGLWindow* self, QWheelEvent* param1);
    friend void QOpenGLWindow_SuperTouchEvent(QOpenGLWindow* self, QTouchEvent* param1);
    friend void QOpenGLWindow_SuperTabletEvent(QOpenGLWindow* self, QTabletEvent* param1);
    friend bool QOpenGLWindow_SuperNativeEvent(QOpenGLWindow* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void QOpenGLWindow_SuperTimerEvent(QOpenGLWindow* self, QTimerEvent* event);
    friend void QOpenGLWindow_SuperChildEvent(QOpenGLWindow* self, QChildEvent* event);
    friend void QOpenGLWindow_SuperCustomEvent(QOpenGLWindow* self, QEvent* event);
    friend void QOpenGLWindow_SuperConnectNotify(QOpenGLWindow* self, const QMetaMethod* signal);
    friend void QOpenGLWindow_SuperDisconnectNotify(QOpenGLWindow* self, const QMetaMethod* signal);
    friend void QOpenGLWindow_SuperInitPainter(const QOpenGLWindow* self, QPainter* painter);
    friend QPainter* QOpenGLWindow_SuperSharedPainter(const QOpenGLWindow* self);
};

#endif
