#pragma once
#ifndef EXTRAS_KXMLGUI_LIBKXMLGUIFACTORY_HXX
#define EXTRAS_KXMLGUI_LIBKXMLGUIFACTORY_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KXMLGUIFactory
class VirtualKXMLGUIFactory final : public KXMLGUIFactory {
  public:
    // Virtual class public types (including callbacks and access types)
    using KXMLGUIFactory_MetaObject_Callback = QMetaObject* (*)(const KXMLGUIFactory*);
    using KXMLGUIFactory_Metacast_Callback = void* (*)(KXMLGUIFactory*, const char*);
    using KXMLGUIFactory_Metacall_Callback = int (*)(KXMLGUIFactory*, int, int, void**);
    using KXMLGUIFactory_Event_Callback = bool (*)(KXMLGUIFactory*, QEvent*);
    using KXMLGUIFactory_EventFilter_Callback = bool (*)(KXMLGUIFactory*, QObject*, QEvent*);
    using KXMLGUIFactory_TimerEvent_Callback = void (*)(KXMLGUIFactory*, QTimerEvent*);
    using KXMLGUIFactory_ChildEvent_Callback = void (*)(KXMLGUIFactory*, QChildEvent*);
    using KXMLGUIFactory_CustomEvent_Callback = void (*)(KXMLGUIFactory*, QEvent*);
    using KXMLGUIFactory_ConnectNotify_Callback = void (*)(KXMLGUIFactory*, QMetaMethod*);
    using KXMLGUIFactory_DisconnectNotify_Callback = void (*)(KXMLGUIFactory*, QMetaMethod*);
    using KXMLGUIFactory::isSignalConnected;
    using KXMLGUIFactory::receivers;
    using KXMLGUIFactory::sender;
    using KXMLGUIFactory::senderSignalIndex;

    // Instance callback storage
    KXMLGUIFactory_MetaObject_Callback kxmlguifactory_metaobject_callback = nullptr;
    KXMLGUIFactory_Metacast_Callback kxmlguifactory_metacast_callback = nullptr;
    KXMLGUIFactory_Metacall_Callback kxmlguifactory_metacall_callback = nullptr;
    KXMLGUIFactory_Event_Callback kxmlguifactory_event_callback = nullptr;
    KXMLGUIFactory_EventFilter_Callback kxmlguifactory_eventfilter_callback = nullptr;
    KXMLGUIFactory_TimerEvent_Callback kxmlguifactory_timerevent_callback = nullptr;
    KXMLGUIFactory_ChildEvent_Callback kxmlguifactory_childevent_callback = nullptr;
    KXMLGUIFactory_CustomEvent_Callback kxmlguifactory_customevent_callback = nullptr;
    KXMLGUIFactory_ConnectNotify_Callback kxmlguifactory_connectnotify_callback = nullptr;
    KXMLGUIFactory_DisconnectNotify_Callback kxmlguifactory_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KXMLGUIFactory {
        using KXMLGUIFactory::childEvent;
        using KXMLGUIFactory::connectNotify;
        using KXMLGUIFactory::customEvent;
        using KXMLGUIFactory::disconnectNotify;
        using KXMLGUIFactory::timerEvent;
    };

    VirtualKXMLGUIFactory(KXMLGUIBuilder* builder) : KXMLGUIFactory(builder) {};
    VirtualKXMLGUIFactory(KXMLGUIBuilder* builder, QObject* parent) : KXMLGUIFactory(builder, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kxmlguifactory_metaobject_callback) {
            QMetaObject* callback_ret = kxmlguifactory_metaobject_callback(this);
            return callback_ret;
        }
        return KXMLGUIFactory::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kxmlguifactory_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = kxmlguifactory_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KXMLGUIFactory::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kxmlguifactory_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = kxmlguifactory_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KXMLGUIFactory::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kxmlguifactory_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = kxmlguifactory_event_callback(this, cbval1);
            return callback_ret;
        }
        return KXMLGUIFactory::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kxmlguifactory_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = kxmlguifactory_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KXMLGUIFactory::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kxmlguifactory_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            kxmlguifactory_timerevent_callback(this, cbval1);
            return;
        }
        KXMLGUIFactory::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kxmlguifactory_childevent_callback) {
            QChildEvent* cbval1 = event;
            kxmlguifactory_childevent_callback(this, cbval1);
            return;
        }
        KXMLGUIFactory::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kxmlguifactory_customevent_callback) {
            QEvent* cbval1 = event;
            kxmlguifactory_customevent_callback(this, cbval1);
            return;
        }
        KXMLGUIFactory::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kxmlguifactory_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kxmlguifactory_connectnotify_callback(this, cbval1);
            return;
        }
        KXMLGUIFactory::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kxmlguifactory_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kxmlguifactory_disconnectnotify_callback(this, cbval1);
            return;
        }
        KXMLGUIFactory::disconnectNotify(signal);
    }

    // Friend functions
    friend void KXMLGUIFactory_SuperTimerEvent(KXMLGUIFactory* self, QTimerEvent* event);
    friend void KXMLGUIFactory_SuperChildEvent(KXMLGUIFactory* self, QChildEvent* event);
    friend void KXMLGUIFactory_SuperCustomEvent(KXMLGUIFactory* self, QEvent* event);
    friend void KXMLGUIFactory_SuperConnectNotify(KXMLGUIFactory* self, const QMetaMethod* signal);
    friend void KXMLGUIFactory_SuperDisconnectNotify(KXMLGUIFactory* self, const QMetaMethod* signal);
};

#endif
