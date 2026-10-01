#pragma once
#ifndef EXTRAS_KWIDGETSADDONS_LIBKVIEWSTATESERIALIZER_HXX
#define EXTRAS_KWIDGETSADDONS_LIBKVIEWSTATESERIALIZER_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KViewStateSerializer
class VirtualKViewStateSerializer : public KViewStateSerializer {
  public:
    // Virtual class public types (including callbacks and access types)
    using KViewStateSerializer_MetaObject_Callback = QMetaObject* (*)(const KViewStateSerializer*);
    using KViewStateSerializer_Metacast_Callback = void* (*)(KViewStateSerializer*, const char*);
    using KViewStateSerializer_Metacall_Callback = int (*)(KViewStateSerializer*, int, int, void**);
    using KViewStateSerializer_IndexFromConfigString_Callback = QModelIndex* (*)(const KViewStateSerializer*, QAbstractItemModel*, const char*);
    using KViewStateSerializer_IndexToConfigString_Callback = const char* (*)(const KViewStateSerializer*, QModelIndex*);
    using KViewStateSerializer_Event_Callback = bool (*)(KViewStateSerializer*, QEvent*);
    using KViewStateSerializer_EventFilter_Callback = bool (*)(KViewStateSerializer*, QObject*, QEvent*);
    using KViewStateSerializer_TimerEvent_Callback = void (*)(KViewStateSerializer*, QTimerEvent*);
    using KViewStateSerializer_ChildEvent_Callback = void (*)(KViewStateSerializer*, QChildEvent*);
    using KViewStateSerializer_CustomEvent_Callback = void (*)(KViewStateSerializer*, QEvent*);
    using KViewStateSerializer_ConnectNotify_Callback = void (*)(KViewStateSerializer*, QMetaMethod*);
    using KViewStateSerializer_DisconnectNotify_Callback = void (*)(KViewStateSerializer*, QMetaMethod*);
    using KViewStateSerializer::isSignalConnected;
    using KViewStateSerializer::receivers;
    using KViewStateSerializer::restoreState;
    using KViewStateSerializer::sender;
    using KViewStateSerializer::senderSignalIndex;

    // Instance callback storage
    KViewStateSerializer_MetaObject_Callback kviewstateserializer_metaobject_callback = nullptr;
    KViewStateSerializer_Metacast_Callback kviewstateserializer_metacast_callback = nullptr;
    KViewStateSerializer_Metacall_Callback kviewstateserializer_metacall_callback = nullptr;
    KViewStateSerializer_IndexFromConfigString_Callback kviewstateserializer_indexfromconfigstring_callback = nullptr;
    KViewStateSerializer_IndexToConfigString_Callback kviewstateserializer_indextoconfigstring_callback = nullptr;
    KViewStateSerializer_Event_Callback kviewstateserializer_event_callback = nullptr;
    KViewStateSerializer_EventFilter_Callback kviewstateserializer_eventfilter_callback = nullptr;
    KViewStateSerializer_TimerEvent_Callback kviewstateserializer_timerevent_callback = nullptr;
    KViewStateSerializer_ChildEvent_Callback kviewstateserializer_childevent_callback = nullptr;
    KViewStateSerializer_CustomEvent_Callback kviewstateserializer_customevent_callback = nullptr;
    KViewStateSerializer_ConnectNotify_Callback kviewstateserializer_connectnotify_callback = nullptr;
    KViewStateSerializer_DisconnectNotify_Callback kviewstateserializer_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KViewStateSerializer {
        using KViewStateSerializer::childEvent;
        using KViewStateSerializer::connectNotify;
        using KViewStateSerializer::customEvent;
        using KViewStateSerializer::disconnectNotify;
        using KViewStateSerializer::indexFromConfigString;
        using KViewStateSerializer::indexToConfigString;
        using KViewStateSerializer::timerEvent;
    };

    VirtualKViewStateSerializer() : KViewStateSerializer() {};
    VirtualKViewStateSerializer(QObject* parent) : KViewStateSerializer(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kviewstateserializer_metaobject_callback) {
            QMetaObject* callback_ret = kviewstateserializer_metaobject_callback(this);
            return callback_ret;
        }
        return KViewStateSerializer::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kviewstateserializer_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = kviewstateserializer_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KViewStateSerializer::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kviewstateserializer_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = kviewstateserializer_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KViewStateSerializer::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex indexFromConfigString(const QAbstractItemModel* model, const QString& key) const override {
        if (kviewstateserializer_indexfromconfigstring_callback) {
            QAbstractItemModel* cbval1 = (QAbstractItemModel*)model;
            const auto key_ret = key;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray key_b = key_ret.toUtf8();
            auto key_str_len = key_b.length();
            const char* key_str = static_cast<const char*>(malloc(key_str_len + 1));
            memcpy((void*)key_str, key_b.data(), key_str_len);
            ((char*)key_str)[key_str_len] = '\0';
            const char* cbval2 = key_str;
            QModelIndex* callback_ret = kviewstateserializer_indexfromconfigstring_callback(this, cbval1, cbval2);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            libqt_free(key_str);
            return callback_ret_Value;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method KViewStateSerializer::indexFromConfigString called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual QString indexToConfigString(const QModelIndex& index) const override {
        if (kviewstateserializer_indextoconfigstring_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            const char* callback_ret = kviewstateserializer_indextoconfigstring_callback(this, cbval1);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method KViewStateSerializer::indexToConfigString called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kviewstateserializer_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = kviewstateserializer_event_callback(this, cbval1);
            return callback_ret;
        }
        return KViewStateSerializer::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kviewstateserializer_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = kviewstateserializer_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KViewStateSerializer::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kviewstateserializer_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            kviewstateserializer_timerevent_callback(this, cbval1);
            return;
        }
        KViewStateSerializer::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kviewstateserializer_childevent_callback) {
            QChildEvent* cbval1 = event;
            kviewstateserializer_childevent_callback(this, cbval1);
            return;
        }
        KViewStateSerializer::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kviewstateserializer_customevent_callback) {
            QEvent* cbval1 = event;
            kviewstateserializer_customevent_callback(this, cbval1);
            return;
        }
        KViewStateSerializer::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kviewstateserializer_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kviewstateserializer_connectnotify_callback(this, cbval1);
            return;
        }
        KViewStateSerializer::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kviewstateserializer_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kviewstateserializer_disconnectnotify_callback(this, cbval1);
            return;
        }
        KViewStateSerializer::disconnectNotify(signal);
    }

    // Friend functions
    friend void KViewStateSerializer_SuperTimerEvent(KViewStateSerializer* self, QTimerEvent* event);
    friend void KViewStateSerializer_SuperChildEvent(KViewStateSerializer* self, QChildEvent* event);
    friend void KViewStateSerializer_SuperCustomEvent(KViewStateSerializer* self, QEvent* event);
    friend void KViewStateSerializer_SuperConnectNotify(KViewStateSerializer* self, const QMetaMethod* signal);
    friend void KViewStateSerializer_SuperDisconnectNotify(KViewStateSerializer* self, const QMetaMethod* signal);
};

#endif
