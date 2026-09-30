#pragma once
#ifndef EXTRAS_KCONFIG_LIBKCONFIGPROPERTYMAP_HXX
#define EXTRAS_KCONFIG_LIBKCONFIGPROPERTYMAP_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KConfigPropertyMap so that we can call protected methods
class VirtualKConfigPropertyMap final : public KConfigPropertyMap {

  public:
    // Virtual class boolean flag
    bool isVirtualKConfigPropertyMap = true;

    // Virtual class public types (including callbacks)
    using KConfigPropertyMap_MetaObject_Callback = QMetaObject* (*)();
    using KConfigPropertyMap_Metacast_Callback = void* (*)(KConfigPropertyMap*, const char*);
    using KConfigPropertyMap_Metacall_Callback = int (*)(KConfigPropertyMap*, int, int, void**);
    using KConfigPropertyMap_UpdateValue_Callback = QVariant* (*)(KConfigPropertyMap*, const char*, QVariant*);
    using KConfigPropertyMap_Event_Callback = bool (*)(KConfigPropertyMap*, QEvent*);
    using KConfigPropertyMap_EventFilter_Callback = bool (*)(KConfigPropertyMap*, QObject*, QEvent*);
    using KConfigPropertyMap_TimerEvent_Callback = void (*)(KConfigPropertyMap*, QTimerEvent*);
    using KConfigPropertyMap_ChildEvent_Callback = void (*)(KConfigPropertyMap*, QChildEvent*);
    using KConfigPropertyMap_CustomEvent_Callback = void (*)(KConfigPropertyMap*, QEvent*);
    using KConfigPropertyMap_ConnectNotify_Callback = void (*)(KConfigPropertyMap*, QMetaMethod*);
    using KConfigPropertyMap_DisconnectNotify_Callback = void (*)(KConfigPropertyMap*, QMetaMethod*);
    using KConfigPropertyMap_Sender_Callback = QObject* (*)();
    using KConfigPropertyMap_SenderSignalIndex_Callback = int (*)();
    using KConfigPropertyMap_Receivers_Callback = int (*)(const KConfigPropertyMap*, const char*);
    using KConfigPropertyMap_IsSignalConnected_Callback = bool (*)(const KConfigPropertyMap*, QMetaMethod*);

  protected:
    // Instance callback storage
    KConfigPropertyMap_MetaObject_Callback kconfigpropertymap_metaobject_callback = nullptr;
    KConfigPropertyMap_Metacast_Callback kconfigpropertymap_metacast_callback = nullptr;
    KConfigPropertyMap_Metacall_Callback kconfigpropertymap_metacall_callback = nullptr;
    KConfigPropertyMap_UpdateValue_Callback kconfigpropertymap_updatevalue_callback = nullptr;
    KConfigPropertyMap_Event_Callback kconfigpropertymap_event_callback = nullptr;
    KConfigPropertyMap_EventFilter_Callback kconfigpropertymap_eventfilter_callback = nullptr;
    KConfigPropertyMap_TimerEvent_Callback kconfigpropertymap_timerevent_callback = nullptr;
    KConfigPropertyMap_ChildEvent_Callback kconfigpropertymap_childevent_callback = nullptr;
    KConfigPropertyMap_CustomEvent_Callback kconfigpropertymap_customevent_callback = nullptr;
    KConfigPropertyMap_ConnectNotify_Callback kconfigpropertymap_connectnotify_callback = nullptr;
    KConfigPropertyMap_DisconnectNotify_Callback kconfigpropertymap_disconnectnotify_callback = nullptr;
    KConfigPropertyMap_Sender_Callback kconfigpropertymap_sender_callback = nullptr;
    KConfigPropertyMap_SenderSignalIndex_Callback kconfigpropertymap_sendersignalindex_callback = nullptr;
    KConfigPropertyMap_Receivers_Callback kconfigpropertymap_receivers_callback = nullptr;
    KConfigPropertyMap_IsSignalConnected_Callback kconfigpropertymap_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool kconfigpropertymap_metaobject_isbase = false;
    mutable bool kconfigpropertymap_metacast_isbase = false;
    mutable bool kconfigpropertymap_metacall_isbase = false;
    mutable bool kconfigpropertymap_updatevalue_isbase = false;
    mutable bool kconfigpropertymap_event_isbase = false;
    mutable bool kconfigpropertymap_eventfilter_isbase = false;
    mutable bool kconfigpropertymap_timerevent_isbase = false;
    mutable bool kconfigpropertymap_childevent_isbase = false;
    mutable bool kconfigpropertymap_customevent_isbase = false;
    mutable bool kconfigpropertymap_connectnotify_isbase = false;
    mutable bool kconfigpropertymap_disconnectnotify_isbase = false;
    mutable bool kconfigpropertymap_sender_isbase = false;
    mutable bool kconfigpropertymap_sendersignalindex_isbase = false;
    mutable bool kconfigpropertymap_receivers_isbase = false;
    mutable bool kconfigpropertymap_issignalconnected_isbase = false;

  public:
    VirtualKConfigPropertyMap(KCoreConfigSkeleton* config) : KConfigPropertyMap(config) {};
    VirtualKConfigPropertyMap(KCoreConfigSkeleton* config, QObject* parent) : KConfigPropertyMap(config, parent) {};

    // Callback setters
    inline void setKConfigPropertyMap_MetaObject_Callback(KConfigPropertyMap_MetaObject_Callback cb) { kconfigpropertymap_metaobject_callback = cb; }
    inline void setKConfigPropertyMap_Metacast_Callback(KConfigPropertyMap_Metacast_Callback cb) { kconfigpropertymap_metacast_callback = cb; }
    inline void setKConfigPropertyMap_Metacall_Callback(KConfigPropertyMap_Metacall_Callback cb) { kconfigpropertymap_metacall_callback = cb; }
    inline void setKConfigPropertyMap_UpdateValue_Callback(KConfigPropertyMap_UpdateValue_Callback cb) { kconfigpropertymap_updatevalue_callback = cb; }
    inline void setKConfigPropertyMap_Event_Callback(KConfigPropertyMap_Event_Callback cb) { kconfigpropertymap_event_callback = cb; }
    inline void setKConfigPropertyMap_EventFilter_Callback(KConfigPropertyMap_EventFilter_Callback cb) { kconfigpropertymap_eventfilter_callback = cb; }
    inline void setKConfigPropertyMap_TimerEvent_Callback(KConfigPropertyMap_TimerEvent_Callback cb) { kconfigpropertymap_timerevent_callback = cb; }
    inline void setKConfigPropertyMap_ChildEvent_Callback(KConfigPropertyMap_ChildEvent_Callback cb) { kconfigpropertymap_childevent_callback = cb; }
    inline void setKConfigPropertyMap_CustomEvent_Callback(KConfigPropertyMap_CustomEvent_Callback cb) { kconfigpropertymap_customevent_callback = cb; }
    inline void setKConfigPropertyMap_ConnectNotify_Callback(KConfigPropertyMap_ConnectNotify_Callback cb) { kconfigpropertymap_connectnotify_callback = cb; }
    inline void setKConfigPropertyMap_DisconnectNotify_Callback(KConfigPropertyMap_DisconnectNotify_Callback cb) { kconfigpropertymap_disconnectnotify_callback = cb; }
    inline void setKConfigPropertyMap_Sender_Callback(KConfigPropertyMap_Sender_Callback cb) { kconfigpropertymap_sender_callback = cb; }
    inline void setKConfigPropertyMap_SenderSignalIndex_Callback(KConfigPropertyMap_SenderSignalIndex_Callback cb) { kconfigpropertymap_sendersignalindex_callback = cb; }
    inline void setKConfigPropertyMap_Receivers_Callback(KConfigPropertyMap_Receivers_Callback cb) { kconfigpropertymap_receivers_callback = cb; }
    inline void setKConfigPropertyMap_IsSignalConnected_Callback(KConfigPropertyMap_IsSignalConnected_Callback cb) { kconfigpropertymap_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setKConfigPropertyMap_MetaObject_IsBase(bool value) const { kconfigpropertymap_metaobject_isbase = value; }
    inline void setKConfigPropertyMap_Metacast_IsBase(bool value) const { kconfigpropertymap_metacast_isbase = value; }
    inline void setKConfigPropertyMap_Metacall_IsBase(bool value) const { kconfigpropertymap_metacall_isbase = value; }
    inline void setKConfigPropertyMap_UpdateValue_IsBase(bool value) const { kconfigpropertymap_updatevalue_isbase = value; }
    inline void setKConfigPropertyMap_Event_IsBase(bool value) const { kconfigpropertymap_event_isbase = value; }
    inline void setKConfigPropertyMap_EventFilter_IsBase(bool value) const { kconfigpropertymap_eventfilter_isbase = value; }
    inline void setKConfigPropertyMap_TimerEvent_IsBase(bool value) const { kconfigpropertymap_timerevent_isbase = value; }
    inline void setKConfigPropertyMap_ChildEvent_IsBase(bool value) const { kconfigpropertymap_childevent_isbase = value; }
    inline void setKConfigPropertyMap_CustomEvent_IsBase(bool value) const { kconfigpropertymap_customevent_isbase = value; }
    inline void setKConfigPropertyMap_ConnectNotify_IsBase(bool value) const { kconfigpropertymap_connectnotify_isbase = value; }
    inline void setKConfigPropertyMap_DisconnectNotify_IsBase(bool value) const { kconfigpropertymap_disconnectnotify_isbase = value; }
    inline void setKConfigPropertyMap_Sender_IsBase(bool value) const { kconfigpropertymap_sender_isbase = value; }
    inline void setKConfigPropertyMap_SenderSignalIndex_IsBase(bool value) const { kconfigpropertymap_sendersignalindex_isbase = value; }
    inline void setKConfigPropertyMap_Receivers_IsBase(bool value) const { kconfigpropertymap_receivers_isbase = value; }
    inline void setKConfigPropertyMap_IsSignalConnected_IsBase(bool value) const { kconfigpropertymap_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kconfigpropertymap_metaobject_isbase) {
            kconfigpropertymap_metaobject_isbase = false;
            return KConfigPropertyMap::metaObject();
        }
        auto metaobject_cb = kconfigpropertymap_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return KConfigPropertyMap::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kconfigpropertymap_metacast_isbase) {
            kconfigpropertymap_metacast_isbase = false;
            return KConfigPropertyMap::qt_metacast(param1);
        }
        auto metacast_cb = kconfigpropertymap_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return KConfigPropertyMap::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kconfigpropertymap_metacall_isbase) {
            kconfigpropertymap_metacall_isbase = false;
            return KConfigPropertyMap::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = kconfigpropertymap_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KConfigPropertyMap::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant updateValue(const QString& key, const QVariant& input) override {
        if (kconfigpropertymap_updatevalue_isbase) {
            kconfigpropertymap_updatevalue_isbase = false;
            return KConfigPropertyMap::updateValue(key, input);
        }
        auto updatevalue_cb = kconfigpropertymap_updatevalue_callback;
        if (updatevalue_cb) {
            const auto key_ret = key;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray key_b = key_ret.toUtf8();
            auto key_str_len = key_b.length();
            const char* key_str = static_cast<const char*>(malloc(key_str_len + 1));
            memcpy((void*)key_str, key_b.data(), key_str_len);
            ((char*)key_str)[key_str_len] = '\0';
            const char* cbval1 = key_str;
            const QVariant& input_ret = input;
            // Cast returned reference into pointer
            QVariant* cbval2 = const_cast<QVariant*>(&input_ret);
            QVariant* callback_ret = updatevalue_cb(this, cbval1, cbval2);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            libqt_free(key_str);
            return callback_ret_Value;
        }
        return KConfigPropertyMap::updateValue(key, input);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kconfigpropertymap_event_isbase) {
            kconfigpropertymap_event_isbase = false;
            return KConfigPropertyMap::event(event);
        }
        auto event_cb = kconfigpropertymap_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;
            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return KConfigPropertyMap::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kconfigpropertymap_eventfilter_isbase) {
            kconfigpropertymap_eventfilter_isbase = false;
            return KConfigPropertyMap::eventFilter(watched, event);
        }
        auto eventfilter_cb = kconfigpropertymap_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return KConfigPropertyMap::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kconfigpropertymap_timerevent_isbase) {
            kconfigpropertymap_timerevent_isbase = false;
            KConfigPropertyMap::timerEvent(event);
            return;
        }
        auto timerevent_cb = kconfigpropertymap_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;
            timerevent_cb(this, cbval1);
            return;
        }
        KConfigPropertyMap::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kconfigpropertymap_childevent_isbase) {
            kconfigpropertymap_childevent_isbase = false;
            KConfigPropertyMap::childEvent(event);
            return;
        }
        auto childevent_cb = kconfigpropertymap_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;
            childevent_cb(this, cbval1);
            return;
        }
        KConfigPropertyMap::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kconfigpropertymap_customevent_isbase) {
            kconfigpropertymap_customevent_isbase = false;
            KConfigPropertyMap::customEvent(event);
            return;
        }
        auto customevent_cb = kconfigpropertymap_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;
            customevent_cb(this, cbval1);
            return;
        }
        KConfigPropertyMap::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kconfigpropertymap_connectnotify_isbase) {
            kconfigpropertymap_connectnotify_isbase = false;
            KConfigPropertyMap::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = kconfigpropertymap_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            connectnotify_cb(this, cbval1);
            return;
        }
        KConfigPropertyMap::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kconfigpropertymap_disconnectnotify_isbase) {
            kconfigpropertymap_disconnectnotify_isbase = false;
            KConfigPropertyMap::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = kconfigpropertymap_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            disconnectnotify_cb(this, cbval1);
            return;
        }
        KConfigPropertyMap::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kconfigpropertymap_sender_isbase) {
            kconfigpropertymap_sender_isbase = false;
            return KConfigPropertyMap::sender();
        }
        auto sender_cb = kconfigpropertymap_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return KConfigPropertyMap::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kconfigpropertymap_sendersignalindex_isbase) {
            kconfigpropertymap_sendersignalindex_isbase = false;
            return KConfigPropertyMap::senderSignalIndex();
        }
        auto sendersignalindex_cb = kconfigpropertymap_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return KConfigPropertyMap::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kconfigpropertymap_receivers_isbase) {
            kconfigpropertymap_receivers_isbase = false;
            return KConfigPropertyMap::receivers(signal);
        }
        auto receivers_cb = kconfigpropertymap_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;
            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KConfigPropertyMap::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kconfigpropertymap_issignalconnected_isbase) {
            kconfigpropertymap_issignalconnected_isbase = false;
            return KConfigPropertyMap::isSignalConnected(signal);
        }
        auto issignalconnected_cb = kconfigpropertymap_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return KConfigPropertyMap::isSignalConnected(signal);
    }

    // Friend functions
    friend QVariant* KConfigPropertyMap_UpdateValue(KConfigPropertyMap* self, const libqt_string key, const QVariant* input);
    friend QVariant* KConfigPropertyMap_SuperUpdateValue(KConfigPropertyMap* self, const libqt_string key, const QVariant* input);
    friend void KConfigPropertyMap_TimerEvent(KConfigPropertyMap* self, QTimerEvent* event);
    friend void KConfigPropertyMap_SuperTimerEvent(KConfigPropertyMap* self, QTimerEvent* event);
    friend void KConfigPropertyMap_ChildEvent(KConfigPropertyMap* self, QChildEvent* event);
    friend void KConfigPropertyMap_SuperChildEvent(KConfigPropertyMap* self, QChildEvent* event);
    friend void KConfigPropertyMap_CustomEvent(KConfigPropertyMap* self, QEvent* event);
    friend void KConfigPropertyMap_SuperCustomEvent(KConfigPropertyMap* self, QEvent* event);
    friend void KConfigPropertyMap_ConnectNotify(KConfigPropertyMap* self, const QMetaMethod* signal);
    friend void KConfigPropertyMap_SuperConnectNotify(KConfigPropertyMap* self, const QMetaMethod* signal);
    friend void KConfigPropertyMap_DisconnectNotify(KConfigPropertyMap* self, const QMetaMethod* signal);
    friend void KConfigPropertyMap_SuperDisconnectNotify(KConfigPropertyMap* self, const QMetaMethod* signal);
    friend QObject* KConfigPropertyMap_Sender(const KConfigPropertyMap* self);
    friend QObject* KConfigPropertyMap_SuperSender(const KConfigPropertyMap* self);
    friend int KConfigPropertyMap_SenderSignalIndex(const KConfigPropertyMap* self);
    friend int KConfigPropertyMap_SuperSenderSignalIndex(const KConfigPropertyMap* self);
    friend int KConfigPropertyMap_Receivers(const KConfigPropertyMap* self, const char* signal);
    friend int KConfigPropertyMap_SuperReceivers(const KConfigPropertyMap* self, const char* signal);
    friend bool KConfigPropertyMap_IsSignalConnected(const KConfigPropertyMap* self, const QMetaMethod* signal);
    friend bool KConfigPropertyMap_SuperIsSignalConnected(const KConfigPropertyMap* self, const QMetaMethod* signal);
};

#endif
