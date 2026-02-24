#pragma once
#ifndef SRC_FOSS_EXTRAS_PACKAGEKITQTC_LIBVIRTUALTRANSACTION_H
#define SRC_FOSS_EXTRAS_PACKAGEKITQTC_LIBVIRTUALTRANSACTION_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of PackageKit::Transaction so that we can call protected methods
class VirtualPackageKitTransaction final : public PackageKit::Transaction {

  public:
    // Virtual class boolean flag
    bool isVirtualPackageKitTransaction = true;

    // Virtual class public types (including callbacks)
    using PackageKit__Transaction_MetaObject_Callback = QMetaObject* (*)();
    using PackageKit__Transaction_Metacast_Callback = void* (*)(PackageKit__Transaction*, const char*);
    using PackageKit__Transaction_Metacall_Callback = int (*)(PackageKit__Transaction*, int, int, void**);
    using PackageKit__Transaction_ConnectNotify_Callback = void (*)(PackageKit__Transaction*, QMetaMethod*);
    using PackageKit__Transaction_DisconnectNotify_Callback = void (*)(PackageKit__Transaction*, QMetaMethod*);
    using PackageKit__Transaction_Event_Callback = bool (*)(PackageKit__Transaction*, QEvent*);
    using PackageKit__Transaction_EventFilter_Callback = bool (*)(PackageKit__Transaction*, QObject*, QEvent*);
    using PackageKit__Transaction_TimerEvent_Callback = void (*)(PackageKit__Transaction*, QTimerEvent*);
    using PackageKit__Transaction_ChildEvent_Callback = void (*)(PackageKit__Transaction*, QChildEvent*);
    using PackageKit__Transaction_CustomEvent_Callback = void (*)(PackageKit__Transaction*, QEvent*);
    using PackageKit__Transaction_ParseError_Callback = int (*)(PackageKit__Transaction*, const char*);
    using PackageKit__Transaction_Sender_Callback = QObject* (*)();
    using PackageKit__Transaction_SenderSignalIndex_Callback = int (*)();
    using PackageKit__Transaction_Receivers_Callback = int (*)(const PackageKit__Transaction*, const char*);
    using PackageKit__Transaction_IsSignalConnected_Callback = bool (*)(const PackageKit__Transaction*, QMetaMethod*);

  protected:
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
    PackageKit__Transaction_ParseError_Callback packagekit__transaction_parseerror_callback = nullptr;
    PackageKit__Transaction_Sender_Callback packagekit__transaction_sender_callback = nullptr;
    PackageKit__Transaction_SenderSignalIndex_Callback packagekit__transaction_sendersignalindex_callback = nullptr;
    PackageKit__Transaction_Receivers_Callback packagekit__transaction_receivers_callback = nullptr;
    PackageKit__Transaction_IsSignalConnected_Callback packagekit__transaction_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool packagekit__transaction_metaobject_isbase = false;
    mutable bool packagekit__transaction_metacast_isbase = false;
    mutable bool packagekit__transaction_metacall_isbase = false;
    mutable bool packagekit__transaction_connectnotify_isbase = false;
    mutable bool packagekit__transaction_disconnectnotify_isbase = false;
    mutable bool packagekit__transaction_event_isbase = false;
    mutable bool packagekit__transaction_eventfilter_isbase = false;
    mutable bool packagekit__transaction_timerevent_isbase = false;
    mutable bool packagekit__transaction_childevent_isbase = false;
    mutable bool packagekit__transaction_customevent_isbase = false;
    mutable bool packagekit__transaction_parseerror_isbase = false;
    mutable bool packagekit__transaction_sender_isbase = false;
    mutable bool packagekit__transaction_sendersignalindex_isbase = false;
    mutable bool packagekit__transaction_receivers_isbase = false;
    mutable bool packagekit__transaction_issignalconnected_isbase = false;

  public:
    VirtualPackageKitTransaction(const QDBusObjectPath& tid) : PackageKit::Transaction(tid) {};

    ~VirtualPackageKitTransaction() {
        packagekit__transaction_metaobject_callback = nullptr;
        packagekit__transaction_metacast_callback = nullptr;
        packagekit__transaction_metacall_callback = nullptr;
        packagekit__transaction_connectnotify_callback = nullptr;
        packagekit__transaction_disconnectnotify_callback = nullptr;
        packagekit__transaction_event_callback = nullptr;
        packagekit__transaction_eventfilter_callback = nullptr;
        packagekit__transaction_timerevent_callback = nullptr;
        packagekit__transaction_childevent_callback = nullptr;
        packagekit__transaction_customevent_callback = nullptr;
        packagekit__transaction_parseerror_callback = nullptr;
        packagekit__transaction_sender_callback = nullptr;
        packagekit__transaction_sendersignalindex_callback = nullptr;
        packagekit__transaction_receivers_callback = nullptr;
        packagekit__transaction_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setPackageKit__Transaction_MetaObject_Callback(PackageKit__Transaction_MetaObject_Callback cb) { packagekit__transaction_metaobject_callback = cb; }
    inline void setPackageKit__Transaction_Metacast_Callback(PackageKit__Transaction_Metacast_Callback cb) { packagekit__transaction_metacast_callback = cb; }
    inline void setPackageKit__Transaction_Metacall_Callback(PackageKit__Transaction_Metacall_Callback cb) { packagekit__transaction_metacall_callback = cb; }
    inline void setPackageKit__Transaction_ConnectNotify_Callback(PackageKit__Transaction_ConnectNotify_Callback cb) { packagekit__transaction_connectnotify_callback = cb; }
    inline void setPackageKit__Transaction_DisconnectNotify_Callback(PackageKit__Transaction_DisconnectNotify_Callback cb) { packagekit__transaction_disconnectnotify_callback = cb; }
    inline void setPackageKit__Transaction_Event_Callback(PackageKit__Transaction_Event_Callback cb) { packagekit__transaction_event_callback = cb; }
    inline void setPackageKit__Transaction_EventFilter_Callback(PackageKit__Transaction_EventFilter_Callback cb) { packagekit__transaction_eventfilter_callback = cb; }
    inline void setPackageKit__Transaction_TimerEvent_Callback(PackageKit__Transaction_TimerEvent_Callback cb) { packagekit__transaction_timerevent_callback = cb; }
    inline void setPackageKit__Transaction_ChildEvent_Callback(PackageKit__Transaction_ChildEvent_Callback cb) { packagekit__transaction_childevent_callback = cb; }
    inline void setPackageKit__Transaction_CustomEvent_Callback(PackageKit__Transaction_CustomEvent_Callback cb) { packagekit__transaction_customevent_callback = cb; }
    inline void setPackageKit__Transaction_ParseError_Callback(PackageKit__Transaction_ParseError_Callback cb) { packagekit__transaction_parseerror_callback = cb; }
    inline void setPackageKit__Transaction_Sender_Callback(PackageKit__Transaction_Sender_Callback cb) { packagekit__transaction_sender_callback = cb; }
    inline void setPackageKit__Transaction_SenderSignalIndex_Callback(PackageKit__Transaction_SenderSignalIndex_Callback cb) { packagekit__transaction_sendersignalindex_callback = cb; }
    inline void setPackageKit__Transaction_Receivers_Callback(PackageKit__Transaction_Receivers_Callback cb) { packagekit__transaction_receivers_callback = cb; }
    inline void setPackageKit__Transaction_IsSignalConnected_Callback(PackageKit__Transaction_IsSignalConnected_Callback cb) { packagekit__transaction_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setPackageKit__Transaction_MetaObject_IsBase(bool value) const { packagekit__transaction_metaobject_isbase = value; }
    inline void setPackageKit__Transaction_Metacast_IsBase(bool value) const { packagekit__transaction_metacast_isbase = value; }
    inline void setPackageKit__Transaction_Metacall_IsBase(bool value) const { packagekit__transaction_metacall_isbase = value; }
    inline void setPackageKit__Transaction_ConnectNotify_IsBase(bool value) const { packagekit__transaction_connectnotify_isbase = value; }
    inline void setPackageKit__Transaction_DisconnectNotify_IsBase(bool value) const { packagekit__transaction_disconnectnotify_isbase = value; }
    inline void setPackageKit__Transaction_Event_IsBase(bool value) const { packagekit__transaction_event_isbase = value; }
    inline void setPackageKit__Transaction_EventFilter_IsBase(bool value) const { packagekit__transaction_eventfilter_isbase = value; }
    inline void setPackageKit__Transaction_TimerEvent_IsBase(bool value) const { packagekit__transaction_timerevent_isbase = value; }
    inline void setPackageKit__Transaction_ChildEvent_IsBase(bool value) const { packagekit__transaction_childevent_isbase = value; }
    inline void setPackageKit__Transaction_CustomEvent_IsBase(bool value) const { packagekit__transaction_customevent_isbase = value; }
    inline void setPackageKit__Transaction_ParseError_IsBase(bool value) const { packagekit__transaction_parseerror_isbase = value; }
    inline void setPackageKit__Transaction_Sender_IsBase(bool value) const { packagekit__transaction_sender_isbase = value; }
    inline void setPackageKit__Transaction_SenderSignalIndex_IsBase(bool value) const { packagekit__transaction_sendersignalindex_isbase = value; }
    inline void setPackageKit__Transaction_Receivers_IsBase(bool value) const { packagekit__transaction_receivers_isbase = value; }
    inline void setPackageKit__Transaction_IsSignalConnected_IsBase(bool value) const { packagekit__transaction_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (packagekit__transaction_metaobject_isbase) {
            packagekit__transaction_metaobject_isbase = false;
            return PackageKit__Transaction::metaObject();
        } else if (packagekit__transaction_metaobject_callback != nullptr) {
            QMetaObject* callback_ret = packagekit__transaction_metaobject_callback();
            return callback_ret;
        } else {
            return PackageKit__Transaction::metaObject();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (packagekit__transaction_metacast_isbase) {
            packagekit__transaction_metacast_isbase = false;
            return PackageKit__Transaction::qt_metacast(param1);
        } else if (packagekit__transaction_metacast_callback != nullptr) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = packagekit__transaction_metacast_callback(this, cbval1);
            return callback_ret;
        } else {
            return PackageKit__Transaction::qt_metacast(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (packagekit__transaction_metacall_isbase) {
            packagekit__transaction_metacall_isbase = false;
            return PackageKit__Transaction::qt_metacall(param1, param2, param3);
        } else if (packagekit__transaction_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = packagekit__transaction_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return PackageKit__Transaction::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (packagekit__transaction_connectnotify_isbase) {
            packagekit__transaction_connectnotify_isbase = false;
            PackageKit__Transaction::connectNotify(signal);
        } else if (packagekit__transaction_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            packagekit__transaction_connectnotify_callback(this, cbval1);
        } else {
            PackageKit__Transaction::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (packagekit__transaction_disconnectnotify_isbase) {
            packagekit__transaction_disconnectnotify_isbase = false;
            PackageKit__Transaction::disconnectNotify(signal);
        } else if (packagekit__transaction_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            packagekit__transaction_disconnectnotify_callback(this, cbval1);
        } else {
            PackageKit__Transaction::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (packagekit__transaction_event_isbase) {
            packagekit__transaction_event_isbase = false;
            return PackageKit__Transaction::event(event);
        } else if (packagekit__transaction_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = packagekit__transaction_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return PackageKit__Transaction::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (packagekit__transaction_eventfilter_isbase) {
            packagekit__transaction_eventfilter_isbase = false;
            return PackageKit__Transaction::eventFilter(watched, event);
        } else if (packagekit__transaction_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = packagekit__transaction_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return PackageKit__Transaction::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (packagekit__transaction_timerevent_isbase) {
            packagekit__transaction_timerevent_isbase = false;
            PackageKit__Transaction::timerEvent(event);
        } else if (packagekit__transaction_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            packagekit__transaction_timerevent_callback(this, cbval1);
        } else {
            PackageKit__Transaction::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (packagekit__transaction_childevent_isbase) {
            packagekit__transaction_childevent_isbase = false;
            PackageKit__Transaction::childEvent(event);
        } else if (packagekit__transaction_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            packagekit__transaction_childevent_callback(this, cbval1);
        } else {
            PackageKit__Transaction::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (packagekit__transaction_customevent_isbase) {
            packagekit__transaction_customevent_isbase = false;
            PackageKit__Transaction::customEvent(event);
        } else if (packagekit__transaction_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            packagekit__transaction_customevent_callback(this, cbval1);
        } else {
            PackageKit__Transaction::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    PackageKit::Transaction::InternalError parseError(const QString& errorName) {
        if (packagekit__transaction_parseerror_isbase) {
            packagekit__transaction_parseerror_isbase = false;
            return PackageKit__Transaction::parseError(errorName);
        } else if (packagekit__transaction_parseerror_callback != nullptr) {
            const QString errorName_ret = errorName;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray errorName_b = errorName_ret.toUtf8();
            auto errorName_str_len = errorName_b.length();
            const char* errorName_str = static_cast<const char*>(malloc(errorName_str_len + 1));
            memcpy((void*)errorName_str, errorName_b.data(), errorName_str_len);
            ((char*)errorName_str)[errorName_str_len] = '\0';
            const char* cbval1 = errorName_str;

            int callback_ret = packagekit__transaction_parseerror_callback(this, cbval1);
            libqt_free(errorName_str);
            return static_cast<PackageKit::Transaction::InternalError>(callback_ret);
        } else {
            return PackageKit__Transaction::parseError(errorName);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (packagekit__transaction_sender_isbase) {
            packagekit__transaction_sender_isbase = false;
            return PackageKit__Transaction::sender();
        } else if (packagekit__transaction_sender_callback != nullptr) {
            QObject* callback_ret = packagekit__transaction_sender_callback();
            return callback_ret;
        } else {
            return PackageKit__Transaction::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (packagekit__transaction_sendersignalindex_isbase) {
            packagekit__transaction_sendersignalindex_isbase = false;
            return PackageKit__Transaction::senderSignalIndex();
        } else if (packagekit__transaction_sendersignalindex_callback != nullptr) {
            int callback_ret = packagekit__transaction_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return PackageKit__Transaction::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (packagekit__transaction_receivers_isbase) {
            packagekit__transaction_receivers_isbase = false;
            return PackageKit__Transaction::receivers(signal);
        } else if (packagekit__transaction_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = packagekit__transaction_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return PackageKit__Transaction::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (packagekit__transaction_issignalconnected_isbase) {
            packagekit__transaction_issignalconnected_isbase = false;
            return PackageKit__Transaction::isSignalConnected(signal);
        } else if (packagekit__transaction_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = packagekit__transaction_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return PackageKit__Transaction::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void PackageKit__Transaction_ConnectNotify(PackageKit::Transaction* self, const QMetaMethod* signal);
    friend void PackageKit__Transaction_SuperConnectNotify(PackageKit::Transaction* self, const QMetaMethod* signal);
    friend void PackageKit__Transaction_DisconnectNotify(PackageKit::Transaction* self, const QMetaMethod* signal);
    friend void PackageKit__Transaction_SuperDisconnectNotify(PackageKit::Transaction* self, const QMetaMethod* signal);
    friend void PackageKit__Transaction_TimerEvent(PackageKit::Transaction* self, QTimerEvent* event);
    friend void PackageKit__Transaction_SuperTimerEvent(PackageKit::Transaction* self, QTimerEvent* event);
    friend void PackageKit__Transaction_ChildEvent(PackageKit::Transaction* self, QChildEvent* event);
    friend void PackageKit__Transaction_SuperChildEvent(PackageKit::Transaction* self, QChildEvent* event);
    friend void PackageKit__Transaction_CustomEvent(PackageKit::Transaction* self, QEvent* event);
    friend void PackageKit__Transaction_SuperCustomEvent(PackageKit::Transaction* self, QEvent* event);
    friend int PackageKit__Transaction_ParseError(PackageKit::Transaction* self, const libqt_string errorName);
    friend int PackageKit__Transaction_SuperParseError(PackageKit::Transaction* self, const libqt_string errorName);
    friend QObject* PackageKit__Transaction_Sender(const PackageKit::Transaction* self);
    friend QObject* PackageKit__Transaction_SuperSender(const PackageKit::Transaction* self);
    friend int PackageKit__Transaction_SenderSignalIndex(const PackageKit::Transaction* self);
    friend int PackageKit__Transaction_SuperSenderSignalIndex(const PackageKit::Transaction* self);
    friend int PackageKit__Transaction_Receivers(const PackageKit::Transaction* self, const char* signal);
    friend int PackageKit__Transaction_SuperReceivers(const PackageKit::Transaction* self, const char* signal);
    friend bool PackageKit__Transaction_IsSignalConnected(const PackageKit::Transaction* self, const QMetaMethod* signal);
    friend bool PackageKit__Transaction_SuperIsSignalConnected(const PackageKit::Transaction* self, const QMetaMethod* signal);
};

#endif
