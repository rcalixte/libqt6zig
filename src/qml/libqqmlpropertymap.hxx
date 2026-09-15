#pragma once
#ifndef QML_LIBQQMLPROPERTYMAP_HXX
#define QML_LIBQQMLPROPERTYMAP_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QQmlPropertyMap so that we can call protected methods
class VirtualQQmlPropertyMap final : public QQmlPropertyMap {

  public:
    // Virtual class boolean flag
    bool isVirtualQQmlPropertyMap = true;

    // Virtual class public types (including callbacks)
    using QQmlPropertyMap_MetaObject_Callback = QMetaObject* (*)();
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
    using QQmlPropertyMap_Sender_Callback = QObject* (*)();
    using QQmlPropertyMap_SenderSignalIndex_Callback = int (*)();
    using QQmlPropertyMap_Receivers_Callback = int (*)(const QQmlPropertyMap*, const char*);
    using QQmlPropertyMap_IsSignalConnected_Callback = bool (*)(const QQmlPropertyMap*, QMetaMethod*);

  protected:
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
    QQmlPropertyMap_Sender_Callback qqmlpropertymap_sender_callback = nullptr;
    QQmlPropertyMap_SenderSignalIndex_Callback qqmlpropertymap_sendersignalindex_callback = nullptr;
    QQmlPropertyMap_Receivers_Callback qqmlpropertymap_receivers_callback = nullptr;
    QQmlPropertyMap_IsSignalConnected_Callback qqmlpropertymap_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qqmlpropertymap_metaobject_isbase = false;
    mutable bool qqmlpropertymap_metacast_isbase = false;
    mutable bool qqmlpropertymap_metacall_isbase = false;
    mutable bool qqmlpropertymap_updatevalue_isbase = false;
    mutable bool qqmlpropertymap_event_isbase = false;
    mutable bool qqmlpropertymap_eventfilter_isbase = false;
    mutable bool qqmlpropertymap_timerevent_isbase = false;
    mutable bool qqmlpropertymap_childevent_isbase = false;
    mutable bool qqmlpropertymap_customevent_isbase = false;
    mutable bool qqmlpropertymap_connectnotify_isbase = false;
    mutable bool qqmlpropertymap_disconnectnotify_isbase = false;
    mutable bool qqmlpropertymap_sender_isbase = false;
    mutable bool qqmlpropertymap_sendersignalindex_isbase = false;
    mutable bool qqmlpropertymap_receivers_isbase = false;
    mutable bool qqmlpropertymap_issignalconnected_isbase = false;

  public:
    VirtualQQmlPropertyMap() : QQmlPropertyMap() {};
    VirtualQQmlPropertyMap(QObject* parent) : QQmlPropertyMap(parent) {};

    // Callback setters
    inline void setQQmlPropertyMap_MetaObject_Callback(QQmlPropertyMap_MetaObject_Callback cb) { qqmlpropertymap_metaobject_callback = cb; }
    inline void setQQmlPropertyMap_Metacast_Callback(QQmlPropertyMap_Metacast_Callback cb) { qqmlpropertymap_metacast_callback = cb; }
    inline void setQQmlPropertyMap_Metacall_Callback(QQmlPropertyMap_Metacall_Callback cb) { qqmlpropertymap_metacall_callback = cb; }
    inline void setQQmlPropertyMap_UpdateValue_Callback(QQmlPropertyMap_UpdateValue_Callback cb) { qqmlpropertymap_updatevalue_callback = cb; }
    inline void setQQmlPropertyMap_Event_Callback(QQmlPropertyMap_Event_Callback cb) { qqmlpropertymap_event_callback = cb; }
    inline void setQQmlPropertyMap_EventFilter_Callback(QQmlPropertyMap_EventFilter_Callback cb) { qqmlpropertymap_eventfilter_callback = cb; }
    inline void setQQmlPropertyMap_TimerEvent_Callback(QQmlPropertyMap_TimerEvent_Callback cb) { qqmlpropertymap_timerevent_callback = cb; }
    inline void setQQmlPropertyMap_ChildEvent_Callback(QQmlPropertyMap_ChildEvent_Callback cb) { qqmlpropertymap_childevent_callback = cb; }
    inline void setQQmlPropertyMap_CustomEvent_Callback(QQmlPropertyMap_CustomEvent_Callback cb) { qqmlpropertymap_customevent_callback = cb; }
    inline void setQQmlPropertyMap_ConnectNotify_Callback(QQmlPropertyMap_ConnectNotify_Callback cb) { qqmlpropertymap_connectnotify_callback = cb; }
    inline void setQQmlPropertyMap_DisconnectNotify_Callback(QQmlPropertyMap_DisconnectNotify_Callback cb) { qqmlpropertymap_disconnectnotify_callback = cb; }
    inline void setQQmlPropertyMap_Sender_Callback(QQmlPropertyMap_Sender_Callback cb) { qqmlpropertymap_sender_callback = cb; }
    inline void setQQmlPropertyMap_SenderSignalIndex_Callback(QQmlPropertyMap_SenderSignalIndex_Callback cb) { qqmlpropertymap_sendersignalindex_callback = cb; }
    inline void setQQmlPropertyMap_Receivers_Callback(QQmlPropertyMap_Receivers_Callback cb) { qqmlpropertymap_receivers_callback = cb; }
    inline void setQQmlPropertyMap_IsSignalConnected_Callback(QQmlPropertyMap_IsSignalConnected_Callback cb) { qqmlpropertymap_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQQmlPropertyMap_MetaObject_IsBase(bool value) const { qqmlpropertymap_metaobject_isbase = value; }
    inline void setQQmlPropertyMap_Metacast_IsBase(bool value) const { qqmlpropertymap_metacast_isbase = value; }
    inline void setQQmlPropertyMap_Metacall_IsBase(bool value) const { qqmlpropertymap_metacall_isbase = value; }
    inline void setQQmlPropertyMap_UpdateValue_IsBase(bool value) const { qqmlpropertymap_updatevalue_isbase = value; }
    inline void setQQmlPropertyMap_Event_IsBase(bool value) const { qqmlpropertymap_event_isbase = value; }
    inline void setQQmlPropertyMap_EventFilter_IsBase(bool value) const { qqmlpropertymap_eventfilter_isbase = value; }
    inline void setQQmlPropertyMap_TimerEvent_IsBase(bool value) const { qqmlpropertymap_timerevent_isbase = value; }
    inline void setQQmlPropertyMap_ChildEvent_IsBase(bool value) const { qqmlpropertymap_childevent_isbase = value; }
    inline void setQQmlPropertyMap_CustomEvent_IsBase(bool value) const { qqmlpropertymap_customevent_isbase = value; }
    inline void setQQmlPropertyMap_ConnectNotify_IsBase(bool value) const { qqmlpropertymap_connectnotify_isbase = value; }
    inline void setQQmlPropertyMap_DisconnectNotify_IsBase(bool value) const { qqmlpropertymap_disconnectnotify_isbase = value; }
    inline void setQQmlPropertyMap_Sender_IsBase(bool value) const { qqmlpropertymap_sender_isbase = value; }
    inline void setQQmlPropertyMap_SenderSignalIndex_IsBase(bool value) const { qqmlpropertymap_sendersignalindex_isbase = value; }
    inline void setQQmlPropertyMap_Receivers_IsBase(bool value) const { qqmlpropertymap_receivers_isbase = value; }
    inline void setQQmlPropertyMap_IsSignalConnected_IsBase(bool value) const { qqmlpropertymap_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qqmlpropertymap_metaobject_isbase) {
            qqmlpropertymap_metaobject_isbase = false;
            return QQmlPropertyMap::metaObject();
        }
        auto metaobject_cb = qqmlpropertymap_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QQmlPropertyMap::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qqmlpropertymap_metacast_isbase) {
            qqmlpropertymap_metacast_isbase = false;
            return QQmlPropertyMap::qt_metacast(param1);
        }
        auto metacast_cb = qqmlpropertymap_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QQmlPropertyMap::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qqmlpropertymap_metacall_isbase) {
            qqmlpropertymap_metacall_isbase = false;
            return QQmlPropertyMap::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qqmlpropertymap_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QQmlPropertyMap::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant updateValue(const QString& key, const QVariant& input) override {
        if (qqmlpropertymap_updatevalue_isbase) {
            qqmlpropertymap_updatevalue_isbase = false;
            return QQmlPropertyMap::updateValue(key, input);
        }
        auto updatevalue_cb = qqmlpropertymap_updatevalue_callback;
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
        return QQmlPropertyMap::updateValue(key, input);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qqmlpropertymap_event_isbase) {
            qqmlpropertymap_event_isbase = false;
            return QQmlPropertyMap::event(event);
        }
        auto event_cb = qqmlpropertymap_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;
            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QQmlPropertyMap::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qqmlpropertymap_eventfilter_isbase) {
            qqmlpropertymap_eventfilter_isbase = false;
            return QQmlPropertyMap::eventFilter(watched, event);
        }
        auto eventfilter_cb = qqmlpropertymap_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QQmlPropertyMap::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qqmlpropertymap_timerevent_isbase) {
            qqmlpropertymap_timerevent_isbase = false;
            QQmlPropertyMap::timerEvent(event);
            return;
        }
        auto timerevent_cb = qqmlpropertymap_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;
            timerevent_cb(this, cbval1);
            return;
        }
        QQmlPropertyMap::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qqmlpropertymap_childevent_isbase) {
            qqmlpropertymap_childevent_isbase = false;
            QQmlPropertyMap::childEvent(event);
            return;
        }
        auto childevent_cb = qqmlpropertymap_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;
            childevent_cb(this, cbval1);
            return;
        }
        QQmlPropertyMap::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qqmlpropertymap_customevent_isbase) {
            qqmlpropertymap_customevent_isbase = false;
            QQmlPropertyMap::customEvent(event);
            return;
        }
        auto customevent_cb = qqmlpropertymap_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;
            customevent_cb(this, cbval1);
            return;
        }
        QQmlPropertyMap::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qqmlpropertymap_connectnotify_isbase) {
            qqmlpropertymap_connectnotify_isbase = false;
            QQmlPropertyMap::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qqmlpropertymap_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            connectnotify_cb(this, cbval1);
            return;
        }
        QQmlPropertyMap::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qqmlpropertymap_disconnectnotify_isbase) {
            qqmlpropertymap_disconnectnotify_isbase = false;
            QQmlPropertyMap::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qqmlpropertymap_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            disconnectnotify_cb(this, cbval1);
            return;
        }
        QQmlPropertyMap::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qqmlpropertymap_sender_isbase) {
            qqmlpropertymap_sender_isbase = false;
            return QQmlPropertyMap::sender();
        }
        auto sender_cb = qqmlpropertymap_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QQmlPropertyMap::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qqmlpropertymap_sendersignalindex_isbase) {
            qqmlpropertymap_sendersignalindex_isbase = false;
            return QQmlPropertyMap::senderSignalIndex();
        }
        auto sendersignalindex_cb = qqmlpropertymap_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QQmlPropertyMap::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qqmlpropertymap_receivers_isbase) {
            qqmlpropertymap_receivers_isbase = false;
            return QQmlPropertyMap::receivers(signal);
        }
        auto receivers_cb = qqmlpropertymap_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;
            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QQmlPropertyMap::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qqmlpropertymap_issignalconnected_isbase) {
            qqmlpropertymap_issignalconnected_isbase = false;
            return QQmlPropertyMap::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qqmlpropertymap_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QQmlPropertyMap::isSignalConnected(signal);
    }

    // Friend functions
    friend QVariant* QQmlPropertyMap_UpdateValue(QQmlPropertyMap* self, const libqt_string key, const QVariant* input);
    friend QVariant* QQmlPropertyMap_SuperUpdateValue(QQmlPropertyMap* self, const libqt_string key, const QVariant* input);
    friend void QQmlPropertyMap_TimerEvent(QQmlPropertyMap* self, QTimerEvent* event);
    friend void QQmlPropertyMap_SuperTimerEvent(QQmlPropertyMap* self, QTimerEvent* event);
    friend void QQmlPropertyMap_ChildEvent(QQmlPropertyMap* self, QChildEvent* event);
    friend void QQmlPropertyMap_SuperChildEvent(QQmlPropertyMap* self, QChildEvent* event);
    friend void QQmlPropertyMap_CustomEvent(QQmlPropertyMap* self, QEvent* event);
    friend void QQmlPropertyMap_SuperCustomEvent(QQmlPropertyMap* self, QEvent* event);
    friend void QQmlPropertyMap_ConnectNotify(QQmlPropertyMap* self, const QMetaMethod* signal);
    friend void QQmlPropertyMap_SuperConnectNotify(QQmlPropertyMap* self, const QMetaMethod* signal);
    friend void QQmlPropertyMap_DisconnectNotify(QQmlPropertyMap* self, const QMetaMethod* signal);
    friend void QQmlPropertyMap_SuperDisconnectNotify(QQmlPropertyMap* self, const QMetaMethod* signal);
    friend QObject* QQmlPropertyMap_Sender(const QQmlPropertyMap* self);
    friend QObject* QQmlPropertyMap_SuperSender(const QQmlPropertyMap* self);
    friend int QQmlPropertyMap_SenderSignalIndex(const QQmlPropertyMap* self);
    friend int QQmlPropertyMap_SuperSenderSignalIndex(const QQmlPropertyMap* self);
    friend int QQmlPropertyMap_Receivers(const QQmlPropertyMap* self, const char* signal);
    friend int QQmlPropertyMap_SuperReceivers(const QQmlPropertyMap* self, const char* signal);
    friend bool QQmlPropertyMap_IsSignalConnected(const QQmlPropertyMap* self, const QMetaMethod* signal);
    friend bool QQmlPropertyMap_SuperIsSignalConnected(const QQmlPropertyMap* self, const QMetaMethod* signal);
};

#endif
