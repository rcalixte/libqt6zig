#pragma once
#ifndef FOSS_EXTRAS_PACKAGEKITQT_LIBTRANSACTION_HXX
#define FOSS_EXTRAS_PACKAGEKITQT_LIBTRANSACTION_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of PackageKit::Transaction
class VirtualPackageKitTransaction final : public PackageKit::Transaction {
  public:
    // Virtual class public types (including callbacks and access types)
    using PackageKit__Transaction_MetaObject_Callback = QMetaObject* (*)(const PackageKit__Transaction*);
    using PackageKit__Transaction_Metacast_Callback = void* (*)(PackageKit__Transaction*, const char*);
    using PackageKit__Transaction_Metacall_Callback = int (*)(PackageKit__Transaction*, int, int, void**);
    using PackageKit__Transaction_ConnectNotify_Callback = void (*)(PackageKit__Transaction*, QMetaMethod*);
    using PackageKit__Transaction_DisconnectNotify_Callback = void (*)(PackageKit__Transaction*, QMetaMethod*);
    using PackageKit__Transaction_Event_Callback = bool (*)(PackageKit__Transaction*, QEvent*);
    using PackageKit__Transaction_EventFilter_Callback = bool (*)(PackageKit__Transaction*, QObject*, QEvent*);
    using PackageKit__Transaction_TimerEvent_Callback = void (*)(PackageKit__Transaction*, QTimerEvent*);
    using PackageKit__Transaction_ChildEvent_Callback = void (*)(PackageKit__Transaction*, QChildEvent*);
    using PackageKit__Transaction_CustomEvent_Callback = void (*)(PackageKit__Transaction*, QEvent*);
    using PackageKit::Transaction::isSignalConnected;
    using PackageKit::Transaction::parseError;
    using PackageKit::Transaction::receivers;
    using PackageKit::Transaction::sender;
    using PackageKit::Transaction::senderSignalIndex;

    // Instance callback storage
    PackageKit__Transaction_MetaObject_Callback packagekit__transaction_metaobject_callback = nullptr;
    PackageKit__Transaction_Metacast_Callback packagekit__transaction_metacast_callback = nullptr;
    PackageKit__Transaction_Metacall_Callback packagekit__transaction_metacall_callback = nullptr;
    PackageKit__Transaction_ConnectNotify_Callback packagekit__transaction_connectnotify_callback = nullptr;
    PackageKit__Transaction_DisconnectNotify_Callback packagekit__transaction_disconnectnotify_callback = nullptr;
    PackageKit__Transaction_Event_Callback packagekit__transaction_event_callback = nullptr;
    PackageKit__Transaction_EventFilter_Callback packagekit__transaction_eventfilter_callback = nullptr;
    PackageKit__Transaction_TimerEvent_Callback packagekit__transaction_timerevent_callback = nullptr;
    PackageKit__Transaction_ChildEvent_Callback packagekit__transaction_childevent_callback = nullptr;
    PackageKit__Transaction_CustomEvent_Callback packagekit__transaction_customevent_callback = nullptr;

    // Access struct
    struct Base : PackageKit::Transaction {
        using PackageKit::Transaction::childEvent;
        using PackageKit::Transaction::connectNotify;
        using PackageKit::Transaction::customEvent;
        using PackageKit::Transaction::disconnectNotify;
        using PackageKit::Transaction::timerEvent;
    };

    VirtualPackageKitTransaction(const QDBusObjectPath& tid) : PackageKit::Transaction(tid) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (packagekit__transaction_metaobject_callback) {
            QMetaObject* callback_ret = packagekit__transaction_metaobject_callback(this);
            return callback_ret;
        }
        return PackageKit__Transaction::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (packagekit__transaction_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = packagekit__transaction_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return PackageKit__Transaction::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (packagekit__transaction_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = packagekit__transaction_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return PackageKit__Transaction::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (packagekit__transaction_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            packagekit__transaction_connectnotify_callback(this, cbval1);
            return;
        }
        PackageKit__Transaction::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (packagekit__transaction_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            packagekit__transaction_disconnectnotify_callback(this, cbval1);
            return;
        }
        PackageKit__Transaction::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (packagekit__transaction_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = packagekit__transaction_event_callback(this, cbval1);
            return callback_ret;
        }
        return PackageKit__Transaction::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (packagekit__transaction_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = packagekit__transaction_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return PackageKit__Transaction::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (packagekit__transaction_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            packagekit__transaction_timerevent_callback(this, cbval1);
            return;
        }
        PackageKit__Transaction::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (packagekit__transaction_childevent_callback) {
            QChildEvent* cbval1 = event;
            packagekit__transaction_childevent_callback(this, cbval1);
            return;
        }
        PackageKit__Transaction::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (packagekit__transaction_customevent_callback) {
            QEvent* cbval1 = event;
            packagekit__transaction_customevent_callback(this, cbval1);
            return;
        }
        PackageKit__Transaction::customEvent(event);
    }

    // Friend functions
    friend void PackageKit__Transaction_SuperConnectNotify(PackageKit::Transaction* self, const QMetaMethod* signal);
    friend void PackageKit__Transaction_SuperDisconnectNotify(PackageKit::Transaction* self, const QMetaMethod* signal);
    friend void PackageKit__Transaction_SuperTimerEvent(PackageKit::Transaction* self, QTimerEvent* event);
    friend void PackageKit__Transaction_SuperChildEvent(PackageKit::Transaction* self, QChildEvent* event);
    friend void PackageKit__Transaction_SuperCustomEvent(PackageKit::Transaction* self, QEvent* event);
};

#endif
