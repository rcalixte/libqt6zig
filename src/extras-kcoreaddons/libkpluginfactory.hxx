#pragma once
#ifndef EXTRAS_KCOREADDONS_LIBKPLUGINFACTORY_HXX
#define EXTRAS_KCOREADDONS_LIBKPLUGINFACTORY_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KPluginFactory
class VirtualKPluginFactory final : public KPluginFactory {
  public:
    // Virtual class public types (including callbacks and access types)
    using KPluginFactory_MetaObject_Callback = QMetaObject* (*)(const KPluginFactory*);
    using KPluginFactory_Metacast_Callback = void* (*)(KPluginFactory*, const char*);
    using KPluginFactory_Metacall_Callback = int (*)(KPluginFactory*, int, int, void**);
    using KPluginFactory_Create_Callback = QObject* (*)(KPluginFactory*, const char*, QWidget*, QObject*, libqt_list /* of QVariant* */);
    using KPluginFactory_Event_Callback = bool (*)(KPluginFactory*, QEvent*);
    using KPluginFactory_EventFilter_Callback = bool (*)(KPluginFactory*, QObject*, QEvent*);
    using KPluginFactory_TimerEvent_Callback = void (*)(KPluginFactory*, QTimerEvent*);
    using KPluginFactory_ChildEvent_Callback = void (*)(KPluginFactory*, QChildEvent*);
    using KPluginFactory_CustomEvent_Callback = void (*)(KPluginFactory*, QEvent*);
    using KPluginFactory_ConnectNotify_Callback = void (*)(KPluginFactory*, QMetaMethod*);
    using KPluginFactory_DisconnectNotify_Callback = void (*)(KPluginFactory*, QMetaMethod*);
    using KPluginFactory::isSignalConnected;
    using KPluginFactory::receivers;
    using KPluginFactory::sender;
    using KPluginFactory::senderSignalIndex;

    // Instance callback storage
    KPluginFactory_MetaObject_Callback kpluginfactory_metaobject_callback = nullptr;
    KPluginFactory_Metacast_Callback kpluginfactory_metacast_callback = nullptr;
    KPluginFactory_Metacall_Callback kpluginfactory_metacall_callback = nullptr;
    KPluginFactory_Create_Callback kpluginfactory_create_callback = nullptr;
    KPluginFactory_Event_Callback kpluginfactory_event_callback = nullptr;
    KPluginFactory_EventFilter_Callback kpluginfactory_eventfilter_callback = nullptr;
    KPluginFactory_TimerEvent_Callback kpluginfactory_timerevent_callback = nullptr;
    KPluginFactory_ChildEvent_Callback kpluginfactory_childevent_callback = nullptr;
    KPluginFactory_CustomEvent_Callback kpluginfactory_customevent_callback = nullptr;
    KPluginFactory_ConnectNotify_Callback kpluginfactory_connectnotify_callback = nullptr;
    KPluginFactory_DisconnectNotify_Callback kpluginfactory_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KPluginFactory {
        using KPluginFactory::childEvent;
        using KPluginFactory::connectNotify;
        using KPluginFactory::create;
        using KPluginFactory::customEvent;
        using KPluginFactory::disconnectNotify;
        using KPluginFactory::timerEvent;
    };

    VirtualKPluginFactory() : KPluginFactory() {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kpluginfactory_metaobject_callback) {
            QMetaObject* callback_ret = kpluginfactory_metaobject_callback(this);
            return callback_ret;
        }
        return KPluginFactory::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kpluginfactory_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = kpluginfactory_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KPluginFactory::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kpluginfactory_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = kpluginfactory_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KPluginFactory::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QObject* create(const char* iface, QWidget* parentWidget, QObject* parent, const QList<QVariant>& args) override {
        if (kpluginfactory_create_callback) {
            const char* cbval1 = (const char*)iface;
            QWidget* cbval2 = parentWidget;
            QObject* cbval3 = parent;
            const QList<QVariant>& args_ret = args;
            // Convert QList<> from C++ memory to manually-managed C memory
            QVariant** args_arr = static_cast<QVariant**>(malloc(sizeof(QVariant*) * (args_ret.size())));
            for (qsizetype i = 0; i < args_ret.size(); ++i) {
                args_arr[i] = new QVariant(args_ret[i]);
            }
            libqt_list args_out;
            args_out.len = args_ret.size();
            args_out.data = static_cast<void*>(args_arr);
            libqt_list /* of QVariant* */ cbval4 = args_out;
            QObject* callback_ret = kpluginfactory_create_callback(this, cbval1, cbval2, cbval3, cbval4);
            free(args_arr);
            return callback_ret;
        }
        return KPluginFactory::create(iface, parentWidget, parent, args);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kpluginfactory_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = kpluginfactory_event_callback(this, cbval1);
            return callback_ret;
        }
        return KPluginFactory::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kpluginfactory_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = kpluginfactory_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KPluginFactory::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kpluginfactory_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            kpluginfactory_timerevent_callback(this, cbval1);
            return;
        }
        KPluginFactory::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kpluginfactory_childevent_callback) {
            QChildEvent* cbval1 = event;
            kpluginfactory_childevent_callback(this, cbval1);
            return;
        }
        KPluginFactory::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kpluginfactory_customevent_callback) {
            QEvent* cbval1 = event;
            kpluginfactory_customevent_callback(this, cbval1);
            return;
        }
        KPluginFactory::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kpluginfactory_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kpluginfactory_connectnotify_callback(this, cbval1);
            return;
        }
        KPluginFactory::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kpluginfactory_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kpluginfactory_disconnectnotify_callback(this, cbval1);
            return;
        }
        KPluginFactory::disconnectNotify(signal);
    }

    // Friend functions
    friend QObject* KPluginFactory_SuperCreate(KPluginFactory* self, const char* iface, QWidget* parentWidget, QObject* parent, const libqt_list /* of QVariant* */ args);
    friend void KPluginFactory_SuperTimerEvent(KPluginFactory* self, QTimerEvent* event);
    friend void KPluginFactory_SuperChildEvent(KPluginFactory* self, QChildEvent* event);
    friend void KPluginFactory_SuperCustomEvent(KPluginFactory* self, QEvent* event);
    friend void KPluginFactory_SuperConnectNotify(KPluginFactory* self, const QMetaMethod* signal);
    friend void KPluginFactory_SuperDisconnectNotify(KPluginFactory* self, const QMetaMethod* signal);
};

#endif
