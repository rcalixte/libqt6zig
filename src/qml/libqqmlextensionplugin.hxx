#pragma once
#ifndef QML_LIBQQMLEXTENSIONPLUGIN_HXX
#define QML_LIBQQMLEXTENSIONPLUGIN_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QQmlExtensionPlugin
class VirtualQQmlExtensionPlugin : public QQmlExtensionPlugin {
  public:
    // Virtual class public types (including callbacks and access types)
    using QQmlExtensionPlugin_MetaObject_Callback = QMetaObject* (*)(const QQmlExtensionPlugin*);
    using QQmlExtensionPlugin_Metacast_Callback = void* (*)(QQmlExtensionPlugin*, const char*);
    using QQmlExtensionPlugin_Metacall_Callback = int (*)(QQmlExtensionPlugin*, int, int, void**);
    using QQmlExtensionPlugin_RegisterTypes_Callback = void (*)(QQmlExtensionPlugin*, const char*);
    using QQmlExtensionPlugin_UnregisterTypes_Callback = void (*)(QQmlExtensionPlugin*);
    using QQmlExtensionPlugin_InitializeEngine_Callback = void (*)(QQmlExtensionPlugin*, QQmlEngine*, const char*);
    using QQmlExtensionPlugin_Event_Callback = bool (*)(QQmlExtensionPlugin*, QEvent*);
    using QQmlExtensionPlugin_EventFilter_Callback = bool (*)(QQmlExtensionPlugin*, QObject*, QEvent*);
    using QQmlExtensionPlugin_TimerEvent_Callback = void (*)(QQmlExtensionPlugin*, QTimerEvent*);
    using QQmlExtensionPlugin_ChildEvent_Callback = void (*)(QQmlExtensionPlugin*, QChildEvent*);
    using QQmlExtensionPlugin_CustomEvent_Callback = void (*)(QQmlExtensionPlugin*, QEvent*);
    using QQmlExtensionPlugin_ConnectNotify_Callback = void (*)(QQmlExtensionPlugin*, QMetaMethod*);
    using QQmlExtensionPlugin_DisconnectNotify_Callback = void (*)(QQmlExtensionPlugin*, QMetaMethod*);
    using QQmlExtensionPlugin::isSignalConnected;
    using QQmlExtensionPlugin::receivers;
    using QQmlExtensionPlugin::sender;
    using QQmlExtensionPlugin::senderSignalIndex;

    // Instance callback storage
    QQmlExtensionPlugin_MetaObject_Callback qqmlextensionplugin_metaobject_callback = nullptr;
    QQmlExtensionPlugin_Metacast_Callback qqmlextensionplugin_metacast_callback = nullptr;
    QQmlExtensionPlugin_Metacall_Callback qqmlextensionplugin_metacall_callback = nullptr;
    QQmlExtensionPlugin_RegisterTypes_Callback qqmlextensionplugin_registertypes_callback = nullptr;
    QQmlExtensionPlugin_UnregisterTypes_Callback qqmlextensionplugin_unregistertypes_callback = nullptr;
    QQmlExtensionPlugin_InitializeEngine_Callback qqmlextensionplugin_initializeengine_callback = nullptr;
    QQmlExtensionPlugin_Event_Callback qqmlextensionplugin_event_callback = nullptr;
    QQmlExtensionPlugin_EventFilter_Callback qqmlextensionplugin_eventfilter_callback = nullptr;
    QQmlExtensionPlugin_TimerEvent_Callback qqmlextensionplugin_timerevent_callback = nullptr;
    QQmlExtensionPlugin_ChildEvent_Callback qqmlextensionplugin_childevent_callback = nullptr;
    QQmlExtensionPlugin_CustomEvent_Callback qqmlextensionplugin_customevent_callback = nullptr;
    QQmlExtensionPlugin_ConnectNotify_Callback qqmlextensionplugin_connectnotify_callback = nullptr;
    QQmlExtensionPlugin_DisconnectNotify_Callback qqmlextensionplugin_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QQmlExtensionPlugin {
        using QQmlExtensionPlugin::childEvent;
        using QQmlExtensionPlugin::connectNotify;
        using QQmlExtensionPlugin::customEvent;
        using QQmlExtensionPlugin::disconnectNotify;
        using QQmlExtensionPlugin::timerEvent;
    };

    VirtualQQmlExtensionPlugin() : QQmlExtensionPlugin() {};
    VirtualQQmlExtensionPlugin(QObject* parent) : QQmlExtensionPlugin(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qqmlextensionplugin_metaobject_callback) {
            QMetaObject* callback_ret = qqmlextensionplugin_metaobject_callback(this);
            return callback_ret;
        }
        return QQmlExtensionPlugin::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qqmlextensionplugin_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qqmlextensionplugin_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QQmlExtensionPlugin::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qqmlextensionplugin_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qqmlextensionplugin_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QQmlExtensionPlugin::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void registerTypes(const char* uri) override {
        if (qqmlextensionplugin_registertypes_callback) {
            const char* cbval1 = (const char*)uri;
            qqmlextensionplugin_registertypes_callback(this, cbval1);
            return;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QQmlExtensionPlugin::registerTypes called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual void unregisterTypes() override {
        if (qqmlextensionplugin_unregistertypes_callback) {
            qqmlextensionplugin_unregistertypes_callback(this);
            return;
        }
        QQmlExtensionPlugin::unregisterTypes();
    }

    // Virtual method for C ABI access and custom callback
    virtual void initializeEngine(QQmlEngine* engine, const char* uri) override {
        if (qqmlextensionplugin_initializeengine_callback) {
            QQmlEngine* cbval1 = engine;
            const char* cbval2 = (const char*)uri;
            qqmlextensionplugin_initializeengine_callback(this, cbval1, cbval2);
            return;
        }
        QQmlExtensionPlugin::initializeEngine(engine, uri);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qqmlextensionplugin_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qqmlextensionplugin_event_callback(this, cbval1);
            return callback_ret;
        }
        return QQmlExtensionPlugin::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qqmlextensionplugin_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qqmlextensionplugin_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QQmlExtensionPlugin::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qqmlextensionplugin_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qqmlextensionplugin_timerevent_callback(this, cbval1);
            return;
        }
        QQmlExtensionPlugin::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qqmlextensionplugin_childevent_callback) {
            QChildEvent* cbval1 = event;
            qqmlextensionplugin_childevent_callback(this, cbval1);
            return;
        }
        QQmlExtensionPlugin::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qqmlextensionplugin_customevent_callback) {
            QEvent* cbval1 = event;
            qqmlextensionplugin_customevent_callback(this, cbval1);
            return;
        }
        QQmlExtensionPlugin::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qqmlextensionplugin_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qqmlextensionplugin_connectnotify_callback(this, cbval1);
            return;
        }
        QQmlExtensionPlugin::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qqmlextensionplugin_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qqmlextensionplugin_disconnectnotify_callback(this, cbval1);
            return;
        }
        QQmlExtensionPlugin::disconnectNotify(signal);
    }

    // Friend functions
    friend void QQmlExtensionPlugin_SuperTimerEvent(QQmlExtensionPlugin* self, QTimerEvent* event);
    friend void QQmlExtensionPlugin_SuperChildEvent(QQmlExtensionPlugin* self, QChildEvent* event);
    friend void QQmlExtensionPlugin_SuperCustomEvent(QQmlExtensionPlugin* self, QEvent* event);
    friend void QQmlExtensionPlugin_SuperConnectNotify(QQmlExtensionPlugin* self, const QMetaMethod* signal);
    friend void QQmlExtensionPlugin_SuperDisconnectNotify(QQmlExtensionPlugin* self, const QMetaMethod* signal);
};

// This class is a subclass of QQmlEngineExtensionPlugin
class VirtualQQmlEngineExtensionPlugin final : public QQmlEngineExtensionPlugin {
  public:
    // Virtual class public types (including callbacks and access types)
    using QQmlEngineExtensionPlugin_MetaObject_Callback = QMetaObject* (*)(const QQmlEngineExtensionPlugin*);
    using QQmlEngineExtensionPlugin_Metacast_Callback = void* (*)(QQmlEngineExtensionPlugin*, const char*);
    using QQmlEngineExtensionPlugin_Metacall_Callback = int (*)(QQmlEngineExtensionPlugin*, int, int, void**);
    using QQmlEngineExtensionPlugin_InitializeEngine_Callback = void (*)(QQmlEngineExtensionPlugin*, QQmlEngine*, const char*);
    using QQmlEngineExtensionPlugin_Event_Callback = bool (*)(QQmlEngineExtensionPlugin*, QEvent*);
    using QQmlEngineExtensionPlugin_EventFilter_Callback = bool (*)(QQmlEngineExtensionPlugin*, QObject*, QEvent*);
    using QQmlEngineExtensionPlugin_TimerEvent_Callback = void (*)(QQmlEngineExtensionPlugin*, QTimerEvent*);
    using QQmlEngineExtensionPlugin_ChildEvent_Callback = void (*)(QQmlEngineExtensionPlugin*, QChildEvent*);
    using QQmlEngineExtensionPlugin_CustomEvent_Callback = void (*)(QQmlEngineExtensionPlugin*, QEvent*);
    using QQmlEngineExtensionPlugin_ConnectNotify_Callback = void (*)(QQmlEngineExtensionPlugin*, QMetaMethod*);
    using QQmlEngineExtensionPlugin_DisconnectNotify_Callback = void (*)(QQmlEngineExtensionPlugin*, QMetaMethod*);
    using QQmlEngineExtensionPlugin::isSignalConnected;
    using QQmlEngineExtensionPlugin::receivers;
    using QQmlEngineExtensionPlugin::sender;
    using QQmlEngineExtensionPlugin::senderSignalIndex;

    // Instance callback storage
    QQmlEngineExtensionPlugin_MetaObject_Callback qqmlengineextensionplugin_metaobject_callback = nullptr;
    QQmlEngineExtensionPlugin_Metacast_Callback qqmlengineextensionplugin_metacast_callback = nullptr;
    QQmlEngineExtensionPlugin_Metacall_Callback qqmlengineextensionplugin_metacall_callback = nullptr;
    QQmlEngineExtensionPlugin_InitializeEngine_Callback qqmlengineextensionplugin_initializeengine_callback = nullptr;
    QQmlEngineExtensionPlugin_Event_Callback qqmlengineextensionplugin_event_callback = nullptr;
    QQmlEngineExtensionPlugin_EventFilter_Callback qqmlengineextensionplugin_eventfilter_callback = nullptr;
    QQmlEngineExtensionPlugin_TimerEvent_Callback qqmlengineextensionplugin_timerevent_callback = nullptr;
    QQmlEngineExtensionPlugin_ChildEvent_Callback qqmlengineextensionplugin_childevent_callback = nullptr;
    QQmlEngineExtensionPlugin_CustomEvent_Callback qqmlengineextensionplugin_customevent_callback = nullptr;
    QQmlEngineExtensionPlugin_ConnectNotify_Callback qqmlengineextensionplugin_connectnotify_callback = nullptr;
    QQmlEngineExtensionPlugin_DisconnectNotify_Callback qqmlengineextensionplugin_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QQmlEngineExtensionPlugin {
        using QQmlEngineExtensionPlugin::childEvent;
        using QQmlEngineExtensionPlugin::connectNotify;
        using QQmlEngineExtensionPlugin::customEvent;
        using QQmlEngineExtensionPlugin::disconnectNotify;
        using QQmlEngineExtensionPlugin::timerEvent;
    };

    VirtualQQmlEngineExtensionPlugin() : QQmlEngineExtensionPlugin() {};
    VirtualQQmlEngineExtensionPlugin(QObject* parent) : QQmlEngineExtensionPlugin(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qqmlengineextensionplugin_metaobject_callback) {
            QMetaObject* callback_ret = qqmlengineextensionplugin_metaobject_callback(this);
            return callback_ret;
        }
        return QQmlEngineExtensionPlugin::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qqmlengineextensionplugin_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qqmlengineextensionplugin_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QQmlEngineExtensionPlugin::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qqmlengineextensionplugin_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qqmlengineextensionplugin_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QQmlEngineExtensionPlugin::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initializeEngine(QQmlEngine* engine, const char* uri) override {
        if (qqmlengineextensionplugin_initializeengine_callback) {
            QQmlEngine* cbval1 = engine;
            const char* cbval2 = (const char*)uri;
            qqmlengineextensionplugin_initializeengine_callback(this, cbval1, cbval2);
            return;
        }
        QQmlEngineExtensionPlugin::initializeEngine(engine, uri);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qqmlengineextensionplugin_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qqmlengineextensionplugin_event_callback(this, cbval1);
            return callback_ret;
        }
        return QQmlEngineExtensionPlugin::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qqmlengineextensionplugin_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qqmlengineextensionplugin_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QQmlEngineExtensionPlugin::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qqmlengineextensionplugin_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qqmlengineextensionplugin_timerevent_callback(this, cbval1);
            return;
        }
        QQmlEngineExtensionPlugin::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qqmlengineextensionplugin_childevent_callback) {
            QChildEvent* cbval1 = event;
            qqmlengineextensionplugin_childevent_callback(this, cbval1);
            return;
        }
        QQmlEngineExtensionPlugin::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qqmlengineextensionplugin_customevent_callback) {
            QEvent* cbval1 = event;
            qqmlengineextensionplugin_customevent_callback(this, cbval1);
            return;
        }
        QQmlEngineExtensionPlugin::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qqmlengineextensionplugin_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qqmlengineextensionplugin_connectnotify_callback(this, cbval1);
            return;
        }
        QQmlEngineExtensionPlugin::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qqmlengineextensionplugin_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qqmlengineextensionplugin_disconnectnotify_callback(this, cbval1);
            return;
        }
        QQmlEngineExtensionPlugin::disconnectNotify(signal);
    }

    // Friend functions
    friend void QQmlEngineExtensionPlugin_SuperTimerEvent(QQmlEngineExtensionPlugin* self, QTimerEvent* event);
    friend void QQmlEngineExtensionPlugin_SuperChildEvent(QQmlEngineExtensionPlugin* self, QChildEvent* event);
    friend void QQmlEngineExtensionPlugin_SuperCustomEvent(QQmlEngineExtensionPlugin* self, QEvent* event);
    friend void QQmlEngineExtensionPlugin_SuperConnectNotify(QQmlEngineExtensionPlugin* self, const QMetaMethod* signal);
    friend void QQmlEngineExtensionPlugin_SuperDisconnectNotify(QQmlEngineExtensionPlugin* self, const QMetaMethod* signal);
};

#endif
