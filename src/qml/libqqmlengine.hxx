#pragma once
#ifndef QML_LIBQQMLENGINE_HXX
#define QML_LIBQQMLENGINE_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QQmlEngine
class VirtualQQmlEngine final : public QQmlEngine {
  public:
    // Virtual class public types (including callbacks and access types)
    using QQmlEngine_MetaObject_Callback = QMetaObject* (*)(const QQmlEngine*);
    using QQmlEngine_Metacast_Callback = void* (*)(QQmlEngine*, const char*);
    using QQmlEngine_Metacall_Callback = int (*)(QQmlEngine*, int, int, void**);
    using QQmlEngine_Event_Callback = bool (*)(QQmlEngine*, QEvent*);
    using QQmlEngine_EventFilter_Callback = bool (*)(QQmlEngine*, QObject*, QEvent*);
    using QQmlEngine_TimerEvent_Callback = void (*)(QQmlEngine*, QTimerEvent*);
    using QQmlEngine_ChildEvent_Callback = void (*)(QQmlEngine*, QChildEvent*);
    using QQmlEngine_CustomEvent_Callback = void (*)(QQmlEngine*, QEvent*);
    using QQmlEngine_ConnectNotify_Callback = void (*)(QQmlEngine*, QMetaMethod*);
    using QQmlEngine_DisconnectNotify_Callback = void (*)(QQmlEngine*, QMetaMethod*);
    using QQmlEngine::isSignalConnected;
    using QQmlEngine::receivers;
    using QQmlEngine::sender;
    using QQmlEngine::senderSignalIndex;

    // Instance callback storage
    QQmlEngine_MetaObject_Callback qqmlengine_metaobject_callback = nullptr;
    QQmlEngine_Metacast_Callback qqmlengine_metacast_callback = nullptr;
    QQmlEngine_Metacall_Callback qqmlengine_metacall_callback = nullptr;
    QQmlEngine_Event_Callback qqmlengine_event_callback = nullptr;
    QQmlEngine_EventFilter_Callback qqmlengine_eventfilter_callback = nullptr;
    QQmlEngine_TimerEvent_Callback qqmlengine_timerevent_callback = nullptr;
    QQmlEngine_ChildEvent_Callback qqmlengine_childevent_callback = nullptr;
    QQmlEngine_CustomEvent_Callback qqmlengine_customevent_callback = nullptr;
    QQmlEngine_ConnectNotify_Callback qqmlengine_connectnotify_callback = nullptr;
    QQmlEngine_DisconnectNotify_Callback qqmlengine_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QQmlEngine {
        using QQmlEngine::childEvent;
        using QQmlEngine::connectNotify;
        using QQmlEngine::customEvent;
        using QQmlEngine::disconnectNotify;
        using QQmlEngine::event;
        using QQmlEngine::timerEvent;
    };

    VirtualQQmlEngine() : QQmlEngine() {};
    VirtualQQmlEngine(QObject* p) : QQmlEngine(p) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qqmlengine_metaobject_callback) {
            QMetaObject* callback_ret = qqmlengine_metaobject_callback(this);
            return callback_ret;
        }
        return QQmlEngine::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qqmlengine_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qqmlengine_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QQmlEngine::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qqmlengine_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qqmlengine_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QQmlEngine::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* param1) override {
        if (qqmlengine_event_callback) {
            QEvent* cbval1 = param1;
            bool callback_ret = qqmlengine_event_callback(this, cbval1);
            return callback_ret;
        }
        return QQmlEngine::event(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qqmlengine_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qqmlengine_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QQmlEngine::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qqmlengine_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qqmlengine_timerevent_callback(this, cbval1);
            return;
        }
        QQmlEngine::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qqmlengine_childevent_callback) {
            QChildEvent* cbval1 = event;
            qqmlengine_childevent_callback(this, cbval1);
            return;
        }
        QQmlEngine::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qqmlengine_customevent_callback) {
            QEvent* cbval1 = event;
            qqmlengine_customevent_callback(this, cbval1);
            return;
        }
        QQmlEngine::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qqmlengine_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qqmlengine_connectnotify_callback(this, cbval1);
            return;
        }
        QQmlEngine::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qqmlengine_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qqmlengine_disconnectnotify_callback(this, cbval1);
            return;
        }
        QQmlEngine::disconnectNotify(signal);
    }

    // Friend functions
    friend bool QQmlEngine_SuperEvent(QQmlEngine* self, QEvent* param1);
    friend void QQmlEngine_SuperTimerEvent(QQmlEngine* self, QTimerEvent* event);
    friend void QQmlEngine_SuperChildEvent(QQmlEngine* self, QChildEvent* event);
    friend void QQmlEngine_SuperCustomEvent(QQmlEngine* self, QEvent* event);
    friend void QQmlEngine_SuperConnectNotify(QQmlEngine* self, const QMetaMethod* signal);
    friend void QQmlEngine_SuperDisconnectNotify(QQmlEngine* self, const QMetaMethod* signal);
};

#endif
