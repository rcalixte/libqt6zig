#pragma once
#ifndef QML_LIBQQMLAPPLICATIONENGINE_HXX
#define QML_LIBQQMLAPPLICATIONENGINE_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QQmlApplicationEngine
class VirtualQQmlApplicationEngine final : public QQmlApplicationEngine {
  public:
    // Virtual class public types (including callbacks and access types)
    using QQmlApplicationEngine_MetaObject_Callback = QMetaObject* (*)(const QQmlApplicationEngine*);
    using QQmlApplicationEngine_Metacast_Callback = void* (*)(QQmlApplicationEngine*, const char*);
    using QQmlApplicationEngine_Metacall_Callback = int (*)(QQmlApplicationEngine*, int, int, void**);
    using QQmlApplicationEngine_Event_Callback = bool (*)(QQmlApplicationEngine*, QEvent*);
    using QQmlApplicationEngine_EventFilter_Callback = bool (*)(QQmlApplicationEngine*, QObject*, QEvent*);
    using QQmlApplicationEngine_TimerEvent_Callback = void (*)(QQmlApplicationEngine*, QTimerEvent*);
    using QQmlApplicationEngine_ChildEvent_Callback = void (*)(QQmlApplicationEngine*, QChildEvent*);
    using QQmlApplicationEngine_CustomEvent_Callback = void (*)(QQmlApplicationEngine*, QEvent*);
    using QQmlApplicationEngine_ConnectNotify_Callback = void (*)(QQmlApplicationEngine*, QMetaMethod*);
    using QQmlApplicationEngine_DisconnectNotify_Callback = void (*)(QQmlApplicationEngine*, QMetaMethod*);
    using QQmlApplicationEngine::isSignalConnected;
    using QQmlApplicationEngine::receivers;
    using QQmlApplicationEngine::sender;
    using QQmlApplicationEngine::senderSignalIndex;

    // Instance callback storage
    QQmlApplicationEngine_MetaObject_Callback qqmlapplicationengine_metaobject_callback = nullptr;
    QQmlApplicationEngine_Metacast_Callback qqmlapplicationengine_metacast_callback = nullptr;
    QQmlApplicationEngine_Metacall_Callback qqmlapplicationengine_metacall_callback = nullptr;
    QQmlApplicationEngine_Event_Callback qqmlapplicationengine_event_callback = nullptr;
    QQmlApplicationEngine_EventFilter_Callback qqmlapplicationengine_eventfilter_callback = nullptr;
    QQmlApplicationEngine_TimerEvent_Callback qqmlapplicationengine_timerevent_callback = nullptr;
    QQmlApplicationEngine_ChildEvent_Callback qqmlapplicationengine_childevent_callback = nullptr;
    QQmlApplicationEngine_CustomEvent_Callback qqmlapplicationengine_customevent_callback = nullptr;
    QQmlApplicationEngine_ConnectNotify_Callback qqmlapplicationengine_connectnotify_callback = nullptr;
    QQmlApplicationEngine_DisconnectNotify_Callback qqmlapplicationengine_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QQmlApplicationEngine {
        using QQmlApplicationEngine::childEvent;
        using QQmlApplicationEngine::connectNotify;
        using QQmlApplicationEngine::customEvent;
        using QQmlApplicationEngine::disconnectNotify;
        using QQmlApplicationEngine::event;
        using QQmlApplicationEngine::timerEvent;
    };

    VirtualQQmlApplicationEngine() : QQmlApplicationEngine() {};
    VirtualQQmlApplicationEngine(const QUrl& url) : QQmlApplicationEngine(url) {};
    VirtualQQmlApplicationEngine(QAnyStringView uri, QAnyStringView typeName) : QQmlApplicationEngine(uri, typeName) {};
    VirtualQQmlApplicationEngine(const QString& filePath) : QQmlApplicationEngine(filePath) {};
    VirtualQQmlApplicationEngine(QObject* parent) : QQmlApplicationEngine(parent) {};
    VirtualQQmlApplicationEngine(const QUrl& url, QObject* parent) : QQmlApplicationEngine(url, parent) {};
    VirtualQQmlApplicationEngine(QAnyStringView uri, QAnyStringView typeName, QObject* parent) : QQmlApplicationEngine(uri, typeName, parent) {};
    VirtualQQmlApplicationEngine(const QString& filePath, QObject* parent) : QQmlApplicationEngine(filePath, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qqmlapplicationengine_metaobject_callback) {
            QMetaObject* callback_ret = qqmlapplicationengine_metaobject_callback(this);
            return callback_ret;
        }
        return QQmlApplicationEngine::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qqmlapplicationengine_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qqmlapplicationengine_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QQmlApplicationEngine::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qqmlapplicationengine_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qqmlapplicationengine_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QQmlApplicationEngine::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* param1) override {
        if (qqmlapplicationengine_event_callback) {
            QEvent* cbval1 = param1;
            bool callback_ret = qqmlapplicationengine_event_callback(this, cbval1);
            return callback_ret;
        }
        return QQmlApplicationEngine::event(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qqmlapplicationengine_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qqmlapplicationengine_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QQmlApplicationEngine::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qqmlapplicationengine_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qqmlapplicationengine_timerevent_callback(this, cbval1);
            return;
        }
        QQmlApplicationEngine::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qqmlapplicationengine_childevent_callback) {
            QChildEvent* cbval1 = event;
            qqmlapplicationengine_childevent_callback(this, cbval1);
            return;
        }
        QQmlApplicationEngine::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qqmlapplicationengine_customevent_callback) {
            QEvent* cbval1 = event;
            qqmlapplicationengine_customevent_callback(this, cbval1);
            return;
        }
        QQmlApplicationEngine::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qqmlapplicationengine_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qqmlapplicationengine_connectnotify_callback(this, cbval1);
            return;
        }
        QQmlApplicationEngine::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qqmlapplicationengine_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qqmlapplicationengine_disconnectnotify_callback(this, cbval1);
            return;
        }
        QQmlApplicationEngine::disconnectNotify(signal);
    }

    // Friend functions
    friend bool QQmlApplicationEngine_SuperEvent(QQmlApplicationEngine* self, QEvent* param1);
    friend void QQmlApplicationEngine_SuperTimerEvent(QQmlApplicationEngine* self, QTimerEvent* event);
    friend void QQmlApplicationEngine_SuperChildEvent(QQmlApplicationEngine* self, QChildEvent* event);
    friend void QQmlApplicationEngine_SuperCustomEvent(QQmlApplicationEngine* self, QEvent* event);
    friend void QQmlApplicationEngine_SuperConnectNotify(QQmlApplicationEngine* self, const QMetaMethod* signal);
    friend void QQmlApplicationEngine_SuperDisconnectNotify(QQmlApplicationEngine* self, const QMetaMethod* signal);
};

#endif
