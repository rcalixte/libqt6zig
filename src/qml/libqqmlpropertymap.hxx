#pragma once
#ifndef QML_LIBQQMLPROPERTYMAP_HXX
#define QML_LIBQQMLPROPERTYMAP_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QQmlPropertyMap
class VirtualQQmlPropertyMap final : public QQmlPropertyMap {
  public:
    // Virtual class public types (including callbacks and access types)
    using QQmlPropertyMap_MetaObject_Callback = QMetaObject* (*)(const QQmlPropertyMap*);
    using QQmlPropertyMap_Metacast_Callback = void* (*)(QQmlPropertyMap*, const char*);
    using QQmlPropertyMap_Metacall_Callback = int (*)(QQmlPropertyMap*, int, int, void**);
    using QQmlPropertyMap_UpdateValue_Callback = QVariant* (*)(QQmlPropertyMap*, const char*, QVariant*);
    using QQmlPropertyMap_Event_Callback = bool (*)(QQmlPropertyMap*, QEvent*);
    using QQmlPropertyMap_EventFilter_Callback = bool (*)(QQmlPropertyMap*, QObject*, QEvent*);
    using QQmlPropertyMap_TimerEvent_Callback = void (*)(QQmlPropertyMap*, QTimerEvent*);
    using QQmlPropertyMap_ChildEvent_Callback = void (*)(QQmlPropertyMap*, QChildEvent*);
    using QQmlPropertyMap_CustomEvent_Callback = void (*)(QQmlPropertyMap*, QEvent*);
    using QQmlPropertyMap_ConnectNotify_Callback = void (*)(QQmlPropertyMap*, QMetaMethod*);
    using QQmlPropertyMap_DisconnectNotify_Callback = void (*)(QQmlPropertyMap*, QMetaMethod*);
    using QQmlPropertyMap::isSignalConnected;
    using QQmlPropertyMap::receivers;
    using QQmlPropertyMap::sender;
    using QQmlPropertyMap::senderSignalIndex;

    // Instance callback storage
    QQmlPropertyMap_MetaObject_Callback qqmlpropertymap_metaobject_callback = nullptr;
    QQmlPropertyMap_Metacast_Callback qqmlpropertymap_metacast_callback = nullptr;
    QQmlPropertyMap_Metacall_Callback qqmlpropertymap_metacall_callback = nullptr;
    QQmlPropertyMap_UpdateValue_Callback qqmlpropertymap_updatevalue_callback = nullptr;
    QQmlPropertyMap_Event_Callback qqmlpropertymap_event_callback = nullptr;
    QQmlPropertyMap_EventFilter_Callback qqmlpropertymap_eventfilter_callback = nullptr;
    QQmlPropertyMap_TimerEvent_Callback qqmlpropertymap_timerevent_callback = nullptr;
    QQmlPropertyMap_ChildEvent_Callback qqmlpropertymap_childevent_callback = nullptr;
    QQmlPropertyMap_CustomEvent_Callback qqmlpropertymap_customevent_callback = nullptr;
    QQmlPropertyMap_ConnectNotify_Callback qqmlpropertymap_connectnotify_callback = nullptr;
    QQmlPropertyMap_DisconnectNotify_Callback qqmlpropertymap_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QQmlPropertyMap {
        using QQmlPropertyMap::childEvent;
        using QQmlPropertyMap::connectNotify;
        using QQmlPropertyMap::customEvent;
        using QQmlPropertyMap::disconnectNotify;
        using QQmlPropertyMap::timerEvent;
        using QQmlPropertyMap::updateValue;
    };

    VirtualQQmlPropertyMap() : QQmlPropertyMap() {};
    VirtualQQmlPropertyMap(QObject* parent) : QQmlPropertyMap(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qqmlpropertymap_metaobject_callback) {
            QMetaObject* callback_ret = qqmlpropertymap_metaobject_callback(this);
            return callback_ret;
        }
        return QQmlPropertyMap::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qqmlpropertymap_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qqmlpropertymap_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QQmlPropertyMap::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qqmlpropertymap_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qqmlpropertymap_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QQmlPropertyMap::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant updateValue(const QString& key, const QVariant& input) override {
        if (qqmlpropertymap_updatevalue_callback) {
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
            QVariant* callback_ret = qqmlpropertymap_updatevalue_callback(this, cbval1, cbval2);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            libqt_free(key_str);
            return callback_ret_Value;
        }
        return QQmlPropertyMap::updateValue(key, input);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qqmlpropertymap_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qqmlpropertymap_event_callback(this, cbval1);
            return callback_ret;
        }
        return QQmlPropertyMap::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qqmlpropertymap_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qqmlpropertymap_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QQmlPropertyMap::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qqmlpropertymap_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qqmlpropertymap_timerevent_callback(this, cbval1);
            return;
        }
        QQmlPropertyMap::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qqmlpropertymap_childevent_callback) {
            QChildEvent* cbval1 = event;
            qqmlpropertymap_childevent_callback(this, cbval1);
            return;
        }
        QQmlPropertyMap::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qqmlpropertymap_customevent_callback) {
            QEvent* cbval1 = event;
            qqmlpropertymap_customevent_callback(this, cbval1);
            return;
        }
        QQmlPropertyMap::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qqmlpropertymap_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qqmlpropertymap_connectnotify_callback(this, cbval1);
            return;
        }
        QQmlPropertyMap::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qqmlpropertymap_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qqmlpropertymap_disconnectnotify_callback(this, cbval1);
            return;
        }
        QQmlPropertyMap::disconnectNotify(signal);
    }

    // Friend functions
    friend QVariant* QQmlPropertyMap_SuperUpdateValue(QQmlPropertyMap* self, const libqt_string key, const QVariant* input);
    friend void QQmlPropertyMap_SuperTimerEvent(QQmlPropertyMap* self, QTimerEvent* event);
    friend void QQmlPropertyMap_SuperChildEvent(QQmlPropertyMap* self, QChildEvent* event);
    friend void QQmlPropertyMap_SuperCustomEvent(QQmlPropertyMap* self, QEvent* event);
    friend void QQmlPropertyMap_SuperConnectNotify(QQmlPropertyMap* self, const QMetaMethod* signal);
    friend void QQmlPropertyMap_SuperDisconnectNotify(QQmlPropertyMap* self, const QMetaMethod* signal);
};

#endif
