#pragma once
#ifndef RESTRICTED_EXTRAS_DATAVIS_LIBQTOUCH3DINPUTHANDLER_HXX
#define RESTRICTED_EXTRAS_DATAVIS_LIBQTOUCH3DINPUTHANDLER_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QTouch3DInputHandler
class VirtualQTouch3DInputHandler final : public QTouch3DInputHandler {
  public:
    // Virtual class public types (including callbacks and access types)
    using QTouch3DInputHandler_MetaObject_Callback = QMetaObject* (*)(const QTouch3DInputHandler*);
    using QTouch3DInputHandler_Metacast_Callback = void* (*)(QTouch3DInputHandler*, const char*);
    using QTouch3DInputHandler_Metacall_Callback = int (*)(QTouch3DInputHandler*, int, int, void**);
    using QTouch3DInputHandler_TouchEvent_Callback = void (*)(QTouch3DInputHandler*, QTouchEvent*);
    using QTouch3DInputHandler_MousePressEvent_Callback = void (*)(QTouch3DInputHandler*, QMouseEvent*, QPoint*);
    using QTouch3DInputHandler_MouseReleaseEvent_Callback = void (*)(QTouch3DInputHandler*, QMouseEvent*, QPoint*);
    using QTouch3DInputHandler_MouseMoveEvent_Callback = void (*)(QTouch3DInputHandler*, QMouseEvent*, QPoint*);
    using QTouch3DInputHandler_WheelEvent_Callback = void (*)(QTouch3DInputHandler*, QWheelEvent*);
    using QTouch3DInputHandler_MouseDoubleClickEvent_Callback = void (*)(QTouch3DInputHandler*, QMouseEvent*);
    using QTouch3DInputHandler_Event_Callback = bool (*)(QTouch3DInputHandler*, QEvent*);
    using QTouch3DInputHandler_EventFilter_Callback = bool (*)(QTouch3DInputHandler*, QObject*, QEvent*);
    using QTouch3DInputHandler_TimerEvent_Callback = void (*)(QTouch3DInputHandler*, QTimerEvent*);
    using QTouch3DInputHandler_ChildEvent_Callback = void (*)(QTouch3DInputHandler*, QChildEvent*);
    using QTouch3DInputHandler_CustomEvent_Callback = void (*)(QTouch3DInputHandler*, QEvent*);
    using QTouch3DInputHandler_ConnectNotify_Callback = void (*)(QTouch3DInputHandler*, QMetaMethod*);
    using QTouch3DInputHandler_DisconnectNotify_Callback = void (*)(QTouch3DInputHandler*, QMetaMethod*);
    using QTouch3DInputHandler::isSignalConnected;
    using QTouch3DInputHandler::prevDistance;
    using QTouch3DInputHandler::previousInputPos;
    using QTouch3DInputHandler::receivers;
    using QTouch3DInputHandler::sender;
    using QTouch3DInputHandler::senderSignalIndex;
    using QTouch3DInputHandler::setPrevDistance;
    using QTouch3DInputHandler::setPreviousInputPos;

    // Instance callback storage
    QTouch3DInputHandler_MetaObject_Callback qtouch3dinputhandler_metaobject_callback = nullptr;
    QTouch3DInputHandler_Metacast_Callback qtouch3dinputhandler_metacast_callback = nullptr;
    QTouch3DInputHandler_Metacall_Callback qtouch3dinputhandler_metacall_callback = nullptr;
    QTouch3DInputHandler_TouchEvent_Callback qtouch3dinputhandler_touchevent_callback = nullptr;
    QTouch3DInputHandler_MousePressEvent_Callback qtouch3dinputhandler_mousepressevent_callback = nullptr;
    QTouch3DInputHandler_MouseReleaseEvent_Callback qtouch3dinputhandler_mousereleaseevent_callback = nullptr;
    QTouch3DInputHandler_MouseMoveEvent_Callback qtouch3dinputhandler_mousemoveevent_callback = nullptr;
    QTouch3DInputHandler_WheelEvent_Callback qtouch3dinputhandler_wheelevent_callback = nullptr;
    QTouch3DInputHandler_MouseDoubleClickEvent_Callback qtouch3dinputhandler_mousedoubleclickevent_callback = nullptr;
    QTouch3DInputHandler_Event_Callback qtouch3dinputhandler_event_callback = nullptr;
    QTouch3DInputHandler_EventFilter_Callback qtouch3dinputhandler_eventfilter_callback = nullptr;
    QTouch3DInputHandler_TimerEvent_Callback qtouch3dinputhandler_timerevent_callback = nullptr;
    QTouch3DInputHandler_ChildEvent_Callback qtouch3dinputhandler_childevent_callback = nullptr;
    QTouch3DInputHandler_CustomEvent_Callback qtouch3dinputhandler_customevent_callback = nullptr;
    QTouch3DInputHandler_ConnectNotify_Callback qtouch3dinputhandler_connectnotify_callback = nullptr;
    QTouch3DInputHandler_DisconnectNotify_Callback qtouch3dinputhandler_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QTouch3DInputHandler {
        using QTouch3DInputHandler::childEvent;
        using QTouch3DInputHandler::connectNotify;
        using QTouch3DInputHandler::customEvent;
        using QTouch3DInputHandler::disconnectNotify;
        using QTouch3DInputHandler::timerEvent;
    };

    VirtualQTouch3DInputHandler() : QTouch3DInputHandler() {};
    VirtualQTouch3DInputHandler(QObject* parent) : QTouch3DInputHandler(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qtouch3dinputhandler_metaobject_callback) {
            QMetaObject* callback_ret = qtouch3dinputhandler_metaobject_callback(this);
            return callback_ret;
        }
        return QTouch3DInputHandler::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qtouch3dinputhandler_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qtouch3dinputhandler_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QTouch3DInputHandler::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qtouch3dinputhandler_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qtouch3dinputhandler_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QTouch3DInputHandler::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void touchEvent(QTouchEvent* event) override {
        if (qtouch3dinputhandler_touchevent_callback) {
            QTouchEvent* cbval1 = event;
            qtouch3dinputhandler_touchevent_callback(this, cbval1);
            return;
        }
        QTouch3DInputHandler::touchEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event, const QPoint& mousePos) override {
        if (qtouch3dinputhandler_mousepressevent_callback) {
            QMouseEvent* cbval1 = event;
            const QPoint& mousePos_ret = mousePos;
            // Cast returned reference into pointer
            QPoint* cbval2 = const_cast<QPoint*>(&mousePos_ret);
            qtouch3dinputhandler_mousepressevent_callback(this, cbval1, cbval2);
            return;
        }
        QTouch3DInputHandler::mousePressEvent(event, mousePos);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event, const QPoint& mousePos) override {
        if (qtouch3dinputhandler_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = event;
            const QPoint& mousePos_ret = mousePos;
            // Cast returned reference into pointer
            QPoint* cbval2 = const_cast<QPoint*>(&mousePos_ret);
            qtouch3dinputhandler_mousereleaseevent_callback(this, cbval1, cbval2);
            return;
        }
        QTouch3DInputHandler::mouseReleaseEvent(event, mousePos);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event, const QPoint& mousePos) override {
        if (qtouch3dinputhandler_mousemoveevent_callback) {
            QMouseEvent* cbval1 = event;
            const QPoint& mousePos_ret = mousePos;
            // Cast returned reference into pointer
            QPoint* cbval2 = const_cast<QPoint*>(&mousePos_ret);
            qtouch3dinputhandler_mousemoveevent_callback(this, cbval1, cbval2);
            return;
        }
        QTouch3DInputHandler::mouseMoveEvent(event, mousePos);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (qtouch3dinputhandler_wheelevent_callback) {
            QWheelEvent* cbval1 = event;
            qtouch3dinputhandler_wheelevent_callback(this, cbval1);
            return;
        }
        QTouch3DInputHandler::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (qtouch3dinputhandler_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            qtouch3dinputhandler_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        QTouch3DInputHandler::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qtouch3dinputhandler_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qtouch3dinputhandler_event_callback(this, cbval1);
            return callback_ret;
        }
        return QTouch3DInputHandler::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qtouch3dinputhandler_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qtouch3dinputhandler_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QTouch3DInputHandler::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qtouch3dinputhandler_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qtouch3dinputhandler_timerevent_callback(this, cbval1);
            return;
        }
        QTouch3DInputHandler::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qtouch3dinputhandler_childevent_callback) {
            QChildEvent* cbval1 = event;
            qtouch3dinputhandler_childevent_callback(this, cbval1);
            return;
        }
        QTouch3DInputHandler::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qtouch3dinputhandler_customevent_callback) {
            QEvent* cbval1 = event;
            qtouch3dinputhandler_customevent_callback(this, cbval1);
            return;
        }
        QTouch3DInputHandler::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qtouch3dinputhandler_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qtouch3dinputhandler_connectnotify_callback(this, cbval1);
            return;
        }
        QTouch3DInputHandler::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qtouch3dinputhandler_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qtouch3dinputhandler_disconnectnotify_callback(this, cbval1);
            return;
        }
        QTouch3DInputHandler::disconnectNotify(signal);
    }

    // Friend functions
    friend void QTouch3DInputHandler_SuperTimerEvent(QTouch3DInputHandler* self, QTimerEvent* event);
    friend void QTouch3DInputHandler_SuperChildEvent(QTouch3DInputHandler* self, QChildEvent* event);
    friend void QTouch3DInputHandler_SuperCustomEvent(QTouch3DInputHandler* self, QEvent* event);
    friend void QTouch3DInputHandler_SuperConnectNotify(QTouch3DInputHandler* self, const QMetaMethod* signal);
    friend void QTouch3DInputHandler_SuperDisconnectNotify(QTouch3DInputHandler* self, const QMetaMethod* signal);
};

#endif
