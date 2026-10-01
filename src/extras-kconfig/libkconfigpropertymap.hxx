#pragma once
#ifndef EXTRAS_KCONFIG_LIBKCONFIGPROPERTYMAP_HXX
#define EXTRAS_KCONFIG_LIBKCONFIGPROPERTYMAP_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KConfigPropertyMap
class VirtualKConfigPropertyMap final : public KConfigPropertyMap {
  public:
    // Virtual class public types (including callbacks and access types)
    using KConfigPropertyMap_MetaObject_Callback = QMetaObject* (*)(const KConfigPropertyMap*);
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
    using KConfigPropertyMap::isSignalConnected;
    using KConfigPropertyMap::receivers;
    using KConfigPropertyMap::sender;
    using KConfigPropertyMap::senderSignalIndex;

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

    // Access struct
    struct Base : KConfigPropertyMap {
        using KConfigPropertyMap::childEvent;
        using KConfigPropertyMap::connectNotify;
        using KConfigPropertyMap::customEvent;
        using KConfigPropertyMap::disconnectNotify;
        using KConfigPropertyMap::timerEvent;
        using KConfigPropertyMap::updateValue;
    };

    VirtualKConfigPropertyMap(KCoreConfigSkeleton* config) : KConfigPropertyMap(config) {};
    VirtualKConfigPropertyMap(KCoreConfigSkeleton* config, QObject* parent) : KConfigPropertyMap(config, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kconfigpropertymap_metaobject_callback) {
            QMetaObject* callback_ret = kconfigpropertymap_metaobject_callback(this);
            return callback_ret;
        }
        return KConfigPropertyMap::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kconfigpropertymap_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = kconfigpropertymap_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KConfigPropertyMap::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kconfigpropertymap_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = kconfigpropertymap_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KConfigPropertyMap::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant updateValue(const QString& key, const QVariant& input) override {
        if (kconfigpropertymap_updatevalue_callback) {
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
            QVariant* callback_ret = kconfigpropertymap_updatevalue_callback(this, cbval1, cbval2);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            libqt_free(key_str);
            return callback_ret_Value;
        }
        return KConfigPropertyMap::updateValue(key, input);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kconfigpropertymap_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = kconfigpropertymap_event_callback(this, cbval1);
            return callback_ret;
        }
        return KConfigPropertyMap::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kconfigpropertymap_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = kconfigpropertymap_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KConfigPropertyMap::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kconfigpropertymap_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            kconfigpropertymap_timerevent_callback(this, cbval1);
            return;
        }
        KConfigPropertyMap::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kconfigpropertymap_childevent_callback) {
            QChildEvent* cbval1 = event;
            kconfigpropertymap_childevent_callback(this, cbval1);
            return;
        }
        KConfigPropertyMap::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kconfigpropertymap_customevent_callback) {
            QEvent* cbval1 = event;
            kconfigpropertymap_customevent_callback(this, cbval1);
            return;
        }
        KConfigPropertyMap::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kconfigpropertymap_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kconfigpropertymap_connectnotify_callback(this, cbval1);
            return;
        }
        KConfigPropertyMap::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kconfigpropertymap_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kconfigpropertymap_disconnectnotify_callback(this, cbval1);
            return;
        }
        KConfigPropertyMap::disconnectNotify(signal);
    }

    // Friend functions
    friend QVariant* KConfigPropertyMap_SuperUpdateValue(KConfigPropertyMap* self, const libqt_string key, const QVariant* input);
    friend void KConfigPropertyMap_SuperTimerEvent(KConfigPropertyMap* self, QTimerEvent* event);
    friend void KConfigPropertyMap_SuperChildEvent(KConfigPropertyMap* self, QChildEvent* event);
    friend void KConfigPropertyMap_SuperCustomEvent(KConfigPropertyMap* self, QEvent* event);
    friend void KConfigPropertyMap_SuperConnectNotify(KConfigPropertyMap* self, const QMetaMethod* signal);
    friend void KConfigPropertyMap_SuperDisconnectNotify(KConfigPropertyMap* self, const QMetaMethod* signal);
};

#endif
