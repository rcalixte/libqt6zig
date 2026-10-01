#pragma once
#ifndef QML_LIBQJSENGINE_HXX
#define QML_LIBQJSENGINE_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QJSEngine
class VirtualQJSEngine final : public QJSEngine {
  public:
    // Virtual class public types (including callbacks and access types)
    using QJSEngine_MetaObject_Callback = QMetaObject* (*)(const QJSEngine*);
    using QJSEngine_Metacast_Callback = void* (*)(QJSEngine*, const char*);
    using QJSEngine_Metacall_Callback = int (*)(QJSEngine*, int, int, void**);
    using QJSEngine_Event_Callback = bool (*)(QJSEngine*, QEvent*);
    using QJSEngine_EventFilter_Callback = bool (*)(QJSEngine*, QObject*, QEvent*);
    using QJSEngine_TimerEvent_Callback = void (*)(QJSEngine*, QTimerEvent*);
    using QJSEngine_ChildEvent_Callback = void (*)(QJSEngine*, QChildEvent*);
    using QJSEngine_CustomEvent_Callback = void (*)(QJSEngine*, QEvent*);
    using QJSEngine_ConnectNotify_Callback = void (*)(QJSEngine*, QMetaMethod*);
    using QJSEngine_DisconnectNotify_Callback = void (*)(QJSEngine*, QMetaMethod*);
    using QJSEngine::isSignalConnected;
    using QJSEngine::receivers;
    using QJSEngine::sender;
    using QJSEngine::senderSignalIndex;

    // Instance callback storage
    QJSEngine_MetaObject_Callback qjsengine_metaobject_callback = nullptr;
    QJSEngine_Metacast_Callback qjsengine_metacast_callback = nullptr;
    QJSEngine_Metacall_Callback qjsengine_metacall_callback = nullptr;
    QJSEngine_Event_Callback qjsengine_event_callback = nullptr;
    QJSEngine_EventFilter_Callback qjsengine_eventfilter_callback = nullptr;
    QJSEngine_TimerEvent_Callback qjsengine_timerevent_callback = nullptr;
    QJSEngine_ChildEvent_Callback qjsengine_childevent_callback = nullptr;
    QJSEngine_CustomEvent_Callback qjsengine_customevent_callback = nullptr;
    QJSEngine_ConnectNotify_Callback qjsengine_connectnotify_callback = nullptr;
    QJSEngine_DisconnectNotify_Callback qjsengine_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QJSEngine {
        using QJSEngine::childEvent;
        using QJSEngine::connectNotify;
        using QJSEngine::customEvent;
        using QJSEngine::disconnectNotify;
        using QJSEngine::timerEvent;
    };

    VirtualQJSEngine() : QJSEngine() {};
    VirtualQJSEngine(QObject* parent) : QJSEngine(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qjsengine_metaobject_callback) {
            QMetaObject* callback_ret = qjsengine_metaobject_callback(this);
            return callback_ret;
        }
        return QJSEngine::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qjsengine_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qjsengine_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QJSEngine::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qjsengine_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qjsengine_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QJSEngine::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qjsengine_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qjsengine_event_callback(this, cbval1);
            return callback_ret;
        }
        return QJSEngine::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qjsengine_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qjsengine_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QJSEngine::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qjsengine_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qjsengine_timerevent_callback(this, cbval1);
            return;
        }
        QJSEngine::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qjsengine_childevent_callback) {
            QChildEvent* cbval1 = event;
            qjsengine_childevent_callback(this, cbval1);
            return;
        }
        QJSEngine::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qjsengine_customevent_callback) {
            QEvent* cbval1 = event;
            qjsengine_customevent_callback(this, cbval1);
            return;
        }
        QJSEngine::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qjsengine_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qjsengine_connectnotify_callback(this, cbval1);
            return;
        }
        QJSEngine::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qjsengine_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qjsengine_disconnectnotify_callback(this, cbval1);
            return;
        }
        QJSEngine::disconnectNotify(signal);
    }

    // Friend functions
    friend void QJSEngine_SuperTimerEvent(QJSEngine* self, QTimerEvent* event);
    friend void QJSEngine_SuperChildEvent(QJSEngine* self, QChildEvent* event);
    friend void QJSEngine_SuperCustomEvent(QJSEngine* self, QEvent* event);
    friend void QJSEngine_SuperConnectNotify(QJSEngine* self, const QMetaMethod* signal);
    friend void QJSEngine_SuperDisconnectNotify(QJSEngine* self, const QMetaMethod* signal);
};

#endif
