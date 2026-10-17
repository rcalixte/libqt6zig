#pragma once
#ifndef RESTRICTED_EXTRAS_DATAVIS_LIBQ3DINPUTHANDLER_HXX
#define RESTRICTED_EXTRAS_DATAVIS_LIBQ3DINPUTHANDLER_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of Q3DInputHandler
class VirtualQ3DInputHandler final : public Q3DInputHandler {
  public:
    // Virtual class public types (including callbacks and access types)
    using Q3DInputHandler_MetaObject_Callback = QMetaObject* (*)(const Q3DInputHandler*);
    using Q3DInputHandler_Metacast_Callback = void* (*)(Q3DInputHandler*, const char*);
    using Q3DInputHandler_Metacall_Callback = int (*)(Q3DInputHandler*, int, int, void**);
    using Q3DInputHandler_MousePressEvent_Callback = void (*)(Q3DInputHandler*, QMouseEvent*, QPoint*);
    using Q3DInputHandler_MouseReleaseEvent_Callback = void (*)(Q3DInputHandler*, QMouseEvent*, QPoint*);
    using Q3DInputHandler_MouseMoveEvent_Callback = void (*)(Q3DInputHandler*, QMouseEvent*, QPoint*);
    using Q3DInputHandler_WheelEvent_Callback = void (*)(Q3DInputHandler*, QWheelEvent*);
    using Q3DInputHandler_MouseDoubleClickEvent_Callback = void (*)(Q3DInputHandler*, QMouseEvent*);
    using Q3DInputHandler_TouchEvent_Callback = void (*)(Q3DInputHandler*, QTouchEvent*);
    using Q3DInputHandler_Event_Callback = bool (*)(Q3DInputHandler*, QEvent*);
    using Q3DInputHandler_EventFilter_Callback = bool (*)(Q3DInputHandler*, QObject*, QEvent*);
    using Q3DInputHandler_TimerEvent_Callback = void (*)(Q3DInputHandler*, QTimerEvent*);
    using Q3DInputHandler_ChildEvent_Callback = void (*)(Q3DInputHandler*, QChildEvent*);
    using Q3DInputHandler_CustomEvent_Callback = void (*)(Q3DInputHandler*, QEvent*);
    using Q3DInputHandler_ConnectNotify_Callback = void (*)(Q3DInputHandler*, QMetaMethod*);
    using Q3DInputHandler_DisconnectNotify_Callback = void (*)(Q3DInputHandler*, QMetaMethod*);
    using Q3DInputHandler::isSignalConnected;
    using Q3DInputHandler::prevDistance;
    using Q3DInputHandler::previousInputPos;
    using Q3DInputHandler::receivers;
    using Q3DInputHandler::sender;
    using Q3DInputHandler::senderSignalIndex;
    using Q3DInputHandler::setPrevDistance;
    using Q3DInputHandler::setPreviousInputPos;

    // Instance callback storage
    Q3DInputHandler_MetaObject_Callback q3dinputhandler_metaobject_callback = nullptr;
    Q3DInputHandler_Metacast_Callback q3dinputhandler_metacast_callback = nullptr;
    Q3DInputHandler_Metacall_Callback q3dinputhandler_metacall_callback = nullptr;
    Q3DInputHandler_MousePressEvent_Callback q3dinputhandler_mousepressevent_callback = nullptr;
    Q3DInputHandler_MouseReleaseEvent_Callback q3dinputhandler_mousereleaseevent_callback = nullptr;
    Q3DInputHandler_MouseMoveEvent_Callback q3dinputhandler_mousemoveevent_callback = nullptr;
    Q3DInputHandler_WheelEvent_Callback q3dinputhandler_wheelevent_callback = nullptr;
    Q3DInputHandler_MouseDoubleClickEvent_Callback q3dinputhandler_mousedoubleclickevent_callback = nullptr;
    Q3DInputHandler_TouchEvent_Callback q3dinputhandler_touchevent_callback = nullptr;
    Q3DInputHandler_Event_Callback q3dinputhandler_event_callback = nullptr;
    Q3DInputHandler_EventFilter_Callback q3dinputhandler_eventfilter_callback = nullptr;
    Q3DInputHandler_TimerEvent_Callback q3dinputhandler_timerevent_callback = nullptr;
    Q3DInputHandler_ChildEvent_Callback q3dinputhandler_childevent_callback = nullptr;
    Q3DInputHandler_CustomEvent_Callback q3dinputhandler_customevent_callback = nullptr;
    Q3DInputHandler_ConnectNotify_Callback q3dinputhandler_connectnotify_callback = nullptr;
    Q3DInputHandler_DisconnectNotify_Callback q3dinputhandler_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : Q3DInputHandler {
        using Q3DInputHandler::childEvent;
        using Q3DInputHandler::connectNotify;
        using Q3DInputHandler::customEvent;
        using Q3DInputHandler::disconnectNotify;
        using Q3DInputHandler::timerEvent;
    };

    VirtualQ3DInputHandler() : Q3DInputHandler() {};
    VirtualQ3DInputHandler(QObject* parent) : Q3DInputHandler(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (q3dinputhandler_metaobject_callback) {
            QMetaObject* callback_ret = q3dinputhandler_metaobject_callback(this);
            return callback_ret;
        }
        return Q3DInputHandler::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (q3dinputhandler_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = q3dinputhandler_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return Q3DInputHandler::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (q3dinputhandler_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = q3dinputhandler_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return Q3DInputHandler::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event, const QPoint& mousePos) override {
        if (q3dinputhandler_mousepressevent_callback) {
            QMouseEvent* cbval1 = event;
            const QPoint& mousePos_ret = mousePos;
            // Cast returned reference into pointer
            QPoint* cbval2 = const_cast<QPoint*>(&mousePos_ret);
            q3dinputhandler_mousepressevent_callback(this, cbval1, cbval2);
            return;
        }
        Q3DInputHandler::mousePressEvent(event, mousePos);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event, const QPoint& mousePos) override {
        if (q3dinputhandler_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = event;
            const QPoint& mousePos_ret = mousePos;
            // Cast returned reference into pointer
            QPoint* cbval2 = const_cast<QPoint*>(&mousePos_ret);
            q3dinputhandler_mousereleaseevent_callback(this, cbval1, cbval2);
            return;
        }
        Q3DInputHandler::mouseReleaseEvent(event, mousePos);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event, const QPoint& mousePos) override {
        if (q3dinputhandler_mousemoveevent_callback) {
            QMouseEvent* cbval1 = event;
            const QPoint& mousePos_ret = mousePos;
            // Cast returned reference into pointer
            QPoint* cbval2 = const_cast<QPoint*>(&mousePos_ret);
            q3dinputhandler_mousemoveevent_callback(this, cbval1, cbval2);
            return;
        }
        Q3DInputHandler::mouseMoveEvent(event, mousePos);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (q3dinputhandler_wheelevent_callback) {
            QWheelEvent* cbval1 = event;
            q3dinputhandler_wheelevent_callback(this, cbval1);
            return;
        }
        Q3DInputHandler::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (q3dinputhandler_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            q3dinputhandler_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        Q3DInputHandler::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void touchEvent(QTouchEvent* event) override {
        if (q3dinputhandler_touchevent_callback) {
            QTouchEvent* cbval1 = event;
            q3dinputhandler_touchevent_callback(this, cbval1);
            return;
        }
        Q3DInputHandler::touchEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (q3dinputhandler_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = q3dinputhandler_event_callback(this, cbval1);
            return callback_ret;
        }
        return Q3DInputHandler::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (q3dinputhandler_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = q3dinputhandler_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return Q3DInputHandler::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (q3dinputhandler_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            q3dinputhandler_timerevent_callback(this, cbval1);
            return;
        }
        Q3DInputHandler::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (q3dinputhandler_childevent_callback) {
            QChildEvent* cbval1 = event;
            q3dinputhandler_childevent_callback(this, cbval1);
            return;
        }
        Q3DInputHandler::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (q3dinputhandler_customevent_callback) {
            QEvent* cbval1 = event;
            q3dinputhandler_customevent_callback(this, cbval1);
            return;
        }
        Q3DInputHandler::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (q3dinputhandler_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            q3dinputhandler_connectnotify_callback(this, cbval1);
            return;
        }
        Q3DInputHandler::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (q3dinputhandler_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            q3dinputhandler_disconnectnotify_callback(this, cbval1);
            return;
        }
        Q3DInputHandler::disconnectNotify(signal);
    }

    // Friend functions
    friend void Q3DInputHandler_SuperTimerEvent(Q3DInputHandler* self, QTimerEvent* event);
    friend void Q3DInputHandler_SuperChildEvent(Q3DInputHandler* self, QChildEvent* event);
    friend void Q3DInputHandler_SuperCustomEvent(Q3DInputHandler* self, QEvent* event);
    friend void Q3DInputHandler_SuperConnectNotify(Q3DInputHandler* self, const QMetaMethod* signal);
    friend void Q3DInputHandler_SuperDisconnectNotify(Q3DInputHandler* self, const QMetaMethod* signal);
};

#endif
