#pragma once
#ifndef SRC_EXTRAS_KCOREADDONSC_LIBVIRTUALKPLUGINFACTORY_H
#define SRC_EXTRAS_KCOREADDONSC_LIBVIRTUALKPLUGINFACTORY_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KPluginFactory so that we can call protected methods
class VirtualKPluginFactory final : public KPluginFactory {

  public:
    // Virtual class boolean flag
    bool isVirtualKPluginFactory = true;

    // Virtual class public types (including callbacks)
    using KPluginFactory_MetaObject_Callback = QMetaObject* (*)();
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
    using KPluginFactory_Sender_Callback = QObject* (*)();
    using KPluginFactory_SenderSignalIndex_Callback = int (*)();
    using KPluginFactory_Receivers_Callback = int (*)(const KPluginFactory*, const char*);
    using KPluginFactory_IsSignalConnected_Callback = bool (*)(const KPluginFactory*, QMetaMethod*);

  protected:
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
    KPluginFactory_Sender_Callback kpluginfactory_sender_callback = nullptr;
    KPluginFactory_SenderSignalIndex_Callback kpluginfactory_sendersignalindex_callback = nullptr;
    KPluginFactory_Receivers_Callback kpluginfactory_receivers_callback = nullptr;
    KPluginFactory_IsSignalConnected_Callback kpluginfactory_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool kpluginfactory_metaobject_isbase = false;
    mutable bool kpluginfactory_metacast_isbase = false;
    mutable bool kpluginfactory_metacall_isbase = false;
    mutable bool kpluginfactory_create_isbase = false;
    mutable bool kpluginfactory_event_isbase = false;
    mutable bool kpluginfactory_eventfilter_isbase = false;
    mutable bool kpluginfactory_timerevent_isbase = false;
    mutable bool kpluginfactory_childevent_isbase = false;
    mutable bool kpluginfactory_customevent_isbase = false;
    mutable bool kpluginfactory_connectnotify_isbase = false;
    mutable bool kpluginfactory_disconnectnotify_isbase = false;
    mutable bool kpluginfactory_sender_isbase = false;
    mutable bool kpluginfactory_sendersignalindex_isbase = false;
    mutable bool kpluginfactory_receivers_isbase = false;
    mutable bool kpluginfactory_issignalconnected_isbase = false;

  public:
    VirtualKPluginFactory() : KPluginFactory() {};

    // Callback setters
    inline void setKPluginFactory_MetaObject_Callback(KPluginFactory_MetaObject_Callback cb) { kpluginfactory_metaobject_callback = cb; }
    inline void setKPluginFactory_Metacast_Callback(KPluginFactory_Metacast_Callback cb) { kpluginfactory_metacast_callback = cb; }
    inline void setKPluginFactory_Metacall_Callback(KPluginFactory_Metacall_Callback cb) { kpluginfactory_metacall_callback = cb; }
    inline void setKPluginFactory_Create_Callback(KPluginFactory_Create_Callback cb) { kpluginfactory_create_callback = cb; }
    inline void setKPluginFactory_Event_Callback(KPluginFactory_Event_Callback cb) { kpluginfactory_event_callback = cb; }
    inline void setKPluginFactory_EventFilter_Callback(KPluginFactory_EventFilter_Callback cb) { kpluginfactory_eventfilter_callback = cb; }
    inline void setKPluginFactory_TimerEvent_Callback(KPluginFactory_TimerEvent_Callback cb) { kpluginfactory_timerevent_callback = cb; }
    inline void setKPluginFactory_ChildEvent_Callback(KPluginFactory_ChildEvent_Callback cb) { kpluginfactory_childevent_callback = cb; }
    inline void setKPluginFactory_CustomEvent_Callback(KPluginFactory_CustomEvent_Callback cb) { kpluginfactory_customevent_callback = cb; }
    inline void setKPluginFactory_ConnectNotify_Callback(KPluginFactory_ConnectNotify_Callback cb) { kpluginfactory_connectnotify_callback = cb; }
    inline void setKPluginFactory_DisconnectNotify_Callback(KPluginFactory_DisconnectNotify_Callback cb) { kpluginfactory_disconnectnotify_callback = cb; }
    inline void setKPluginFactory_Sender_Callback(KPluginFactory_Sender_Callback cb) { kpluginfactory_sender_callback = cb; }
    inline void setKPluginFactory_SenderSignalIndex_Callback(KPluginFactory_SenderSignalIndex_Callback cb) { kpluginfactory_sendersignalindex_callback = cb; }
    inline void setKPluginFactory_Receivers_Callback(KPluginFactory_Receivers_Callback cb) { kpluginfactory_receivers_callback = cb; }
    inline void setKPluginFactory_IsSignalConnected_Callback(KPluginFactory_IsSignalConnected_Callback cb) { kpluginfactory_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setKPluginFactory_MetaObject_IsBase(bool value) const { kpluginfactory_metaobject_isbase = value; }
    inline void setKPluginFactory_Metacast_IsBase(bool value) const { kpluginfactory_metacast_isbase = value; }
    inline void setKPluginFactory_Metacall_IsBase(bool value) const { kpluginfactory_metacall_isbase = value; }
    inline void setKPluginFactory_Create_IsBase(bool value) const { kpluginfactory_create_isbase = value; }
    inline void setKPluginFactory_Event_IsBase(bool value) const { kpluginfactory_event_isbase = value; }
    inline void setKPluginFactory_EventFilter_IsBase(bool value) const { kpluginfactory_eventfilter_isbase = value; }
    inline void setKPluginFactory_TimerEvent_IsBase(bool value) const { kpluginfactory_timerevent_isbase = value; }
    inline void setKPluginFactory_ChildEvent_IsBase(bool value) const { kpluginfactory_childevent_isbase = value; }
    inline void setKPluginFactory_CustomEvent_IsBase(bool value) const { kpluginfactory_customevent_isbase = value; }
    inline void setKPluginFactory_ConnectNotify_IsBase(bool value) const { kpluginfactory_connectnotify_isbase = value; }
    inline void setKPluginFactory_DisconnectNotify_IsBase(bool value) const { kpluginfactory_disconnectnotify_isbase = value; }
    inline void setKPluginFactory_Sender_IsBase(bool value) const { kpluginfactory_sender_isbase = value; }
    inline void setKPluginFactory_SenderSignalIndex_IsBase(bool value) const { kpluginfactory_sendersignalindex_isbase = value; }
    inline void setKPluginFactory_Receivers_IsBase(bool value) const { kpluginfactory_receivers_isbase = value; }
    inline void setKPluginFactory_IsSignalConnected_IsBase(bool value) const { kpluginfactory_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kpluginfactory_metaobject_isbase) {
            kpluginfactory_metaobject_isbase = false;
            return KPluginFactory::metaObject();
        }
        auto metaobject_cb = kpluginfactory_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return KPluginFactory::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kpluginfactory_metacast_isbase) {
            kpluginfactory_metacast_isbase = false;
            return KPluginFactory::qt_metacast(param1);
        }
        auto metacast_cb = kpluginfactory_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return KPluginFactory::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kpluginfactory_metacall_isbase) {
            kpluginfactory_metacall_isbase = false;
            return KPluginFactory::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = kpluginfactory_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KPluginFactory::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QObject* create(const char* iface, QWidget* parentWidget, QObject* parent, const QList<QVariant>& args) override {
        if (kpluginfactory_create_isbase) {
            kpluginfactory_create_isbase = false;
            return KPluginFactory::create(iface, parentWidget, parent, args);
        }
        auto create_cb = kpluginfactory_create_callback;
        if (create_cb) {
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

            QObject* callback_ret = create_cb(this, cbval1, cbval2, cbval3, cbval4);
            free(args_arr);
            return callback_ret;
        }
        return KPluginFactory::create(iface, parentWidget, parent, args);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kpluginfactory_event_isbase) {
            kpluginfactory_event_isbase = false;
            return KPluginFactory::event(event);
        }
        auto event_cb = kpluginfactory_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return KPluginFactory::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kpluginfactory_eventfilter_isbase) {
            kpluginfactory_eventfilter_isbase = false;
            return KPluginFactory::eventFilter(watched, event);
        }
        auto eventfilter_cb = kpluginfactory_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return KPluginFactory::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kpluginfactory_timerevent_isbase) {
            kpluginfactory_timerevent_isbase = false;
            KPluginFactory::timerEvent(event);
            return;
        }
        auto timerevent_cb = kpluginfactory_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        KPluginFactory::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kpluginfactory_childevent_isbase) {
            kpluginfactory_childevent_isbase = false;
            KPluginFactory::childEvent(event);
            return;
        }
        auto childevent_cb = kpluginfactory_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        KPluginFactory::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kpluginfactory_customevent_isbase) {
            kpluginfactory_customevent_isbase = false;
            KPluginFactory::customEvent(event);
            return;
        }
        auto customevent_cb = kpluginfactory_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        KPluginFactory::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kpluginfactory_connectnotify_isbase) {
            kpluginfactory_connectnotify_isbase = false;
            KPluginFactory::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = kpluginfactory_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        KPluginFactory::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kpluginfactory_disconnectnotify_isbase) {
            kpluginfactory_disconnectnotify_isbase = false;
            KPluginFactory::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = kpluginfactory_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        KPluginFactory::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kpluginfactory_sender_isbase) {
            kpluginfactory_sender_isbase = false;
            return KPluginFactory::sender();
        }
        auto sender_cb = kpluginfactory_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return KPluginFactory::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kpluginfactory_sendersignalindex_isbase) {
            kpluginfactory_sendersignalindex_isbase = false;
            return KPluginFactory::senderSignalIndex();
        }
        auto sendersignalindex_cb = kpluginfactory_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return KPluginFactory::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kpluginfactory_receivers_isbase) {
            kpluginfactory_receivers_isbase = false;
            return KPluginFactory::receivers(signal);
        }
        auto receivers_cb = kpluginfactory_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KPluginFactory::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kpluginfactory_issignalconnected_isbase) {
            kpluginfactory_issignalconnected_isbase = false;
            return KPluginFactory::isSignalConnected(signal);
        }
        auto issignalconnected_cb = kpluginfactory_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return KPluginFactory::isSignalConnected(signal);
    }

    // Friend functions
    friend QObject* KPluginFactory_Create(KPluginFactory* self, const char* iface, QWidget* parentWidget, QObject* parent, const libqt_list /* of QVariant* */ args);
    friend QObject* KPluginFactory_SuperCreate(KPluginFactory* self, const char* iface, QWidget* parentWidget, QObject* parent, const libqt_list /* of QVariant* */ args);
    friend void KPluginFactory_TimerEvent(KPluginFactory* self, QTimerEvent* event);
    friend void KPluginFactory_SuperTimerEvent(KPluginFactory* self, QTimerEvent* event);
    friend void KPluginFactory_ChildEvent(KPluginFactory* self, QChildEvent* event);
    friend void KPluginFactory_SuperChildEvent(KPluginFactory* self, QChildEvent* event);
    friend void KPluginFactory_CustomEvent(KPluginFactory* self, QEvent* event);
    friend void KPluginFactory_SuperCustomEvent(KPluginFactory* self, QEvent* event);
    friend void KPluginFactory_ConnectNotify(KPluginFactory* self, const QMetaMethod* signal);
    friend void KPluginFactory_SuperConnectNotify(KPluginFactory* self, const QMetaMethod* signal);
    friend void KPluginFactory_DisconnectNotify(KPluginFactory* self, const QMetaMethod* signal);
    friend void KPluginFactory_SuperDisconnectNotify(KPluginFactory* self, const QMetaMethod* signal);
    friend QObject* KPluginFactory_Sender(const KPluginFactory* self);
    friend QObject* KPluginFactory_SuperSender(const KPluginFactory* self);
    friend int KPluginFactory_SenderSignalIndex(const KPluginFactory* self);
    friend int KPluginFactory_SuperSenderSignalIndex(const KPluginFactory* self);
    friend int KPluginFactory_Receivers(const KPluginFactory* self, const char* signal);
    friend int KPluginFactory_SuperReceivers(const KPluginFactory* self, const char* signal);
    friend bool KPluginFactory_IsSignalConnected(const KPluginFactory* self, const QMetaMethod* signal);
    friend bool KPluginFactory_SuperIsSignalConnected(const KPluginFactory* self, const QMetaMethod* signal);
};

#endif
