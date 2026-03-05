#pragma once
#ifndef SRCC_LIBVIRTUALQACCESSIBLEBRIDGE_H
#define SRCC_LIBVIRTUALQACCESSIBLEBRIDGE_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QAccessibleBridgePlugin so that we can call protected methods
class VirtualQAccessibleBridgePlugin : public QAccessibleBridgePlugin {

  public:
    // Virtual class boolean flag
    bool isVirtualQAccessibleBridgePlugin = true;

    // Virtual class public types (including callbacks)
    using QAccessibleBridgePlugin_MetaObject_Callback = QMetaObject* (*)();
    using QAccessibleBridgePlugin_Metacast_Callback = void* (*)(QAccessibleBridgePlugin*, const char*);
    using QAccessibleBridgePlugin_Metacall_Callback = int (*)(QAccessibleBridgePlugin*, int, int, void**);
    using QAccessibleBridgePlugin_Create_Callback = QAccessibleBridge* (*)(QAccessibleBridgePlugin*, const char*);
    using QAccessibleBridgePlugin_Event_Callback = bool (*)(QAccessibleBridgePlugin*, QEvent*);
    using QAccessibleBridgePlugin_EventFilter_Callback = bool (*)(QAccessibleBridgePlugin*, QObject*, QEvent*);
    using QAccessibleBridgePlugin_TimerEvent_Callback = void (*)(QAccessibleBridgePlugin*, QTimerEvent*);
    using QAccessibleBridgePlugin_ChildEvent_Callback = void (*)(QAccessibleBridgePlugin*, QChildEvent*);
    using QAccessibleBridgePlugin_CustomEvent_Callback = void (*)(QAccessibleBridgePlugin*, QEvent*);
    using QAccessibleBridgePlugin_ConnectNotify_Callback = void (*)(QAccessibleBridgePlugin*, QMetaMethod*);
    using QAccessibleBridgePlugin_DisconnectNotify_Callback = void (*)(QAccessibleBridgePlugin*, QMetaMethod*);
    using QAccessibleBridgePlugin_Sender_Callback = QObject* (*)();
    using QAccessibleBridgePlugin_SenderSignalIndex_Callback = int (*)();
    using QAccessibleBridgePlugin_Receivers_Callback = int (*)(const QAccessibleBridgePlugin*, const char*);
    using QAccessibleBridgePlugin_IsSignalConnected_Callback = bool (*)(const QAccessibleBridgePlugin*, QMetaMethod*);

  protected:
    // Instance callback storage
    QAccessibleBridgePlugin_MetaObject_Callback qaccessiblebridgeplugin_metaobject_callback = nullptr;
    QAccessibleBridgePlugin_Metacast_Callback qaccessiblebridgeplugin_metacast_callback = nullptr;
    QAccessibleBridgePlugin_Metacall_Callback qaccessiblebridgeplugin_metacall_callback = nullptr;
    QAccessibleBridgePlugin_Create_Callback qaccessiblebridgeplugin_create_callback = nullptr;
    QAccessibleBridgePlugin_Event_Callback qaccessiblebridgeplugin_event_callback = nullptr;
    QAccessibleBridgePlugin_EventFilter_Callback qaccessiblebridgeplugin_eventfilter_callback = nullptr;
    QAccessibleBridgePlugin_TimerEvent_Callback qaccessiblebridgeplugin_timerevent_callback = nullptr;
    QAccessibleBridgePlugin_ChildEvent_Callback qaccessiblebridgeplugin_childevent_callback = nullptr;
    QAccessibleBridgePlugin_CustomEvent_Callback qaccessiblebridgeplugin_customevent_callback = nullptr;
    QAccessibleBridgePlugin_ConnectNotify_Callback qaccessiblebridgeplugin_connectnotify_callback = nullptr;
    QAccessibleBridgePlugin_DisconnectNotify_Callback qaccessiblebridgeplugin_disconnectnotify_callback = nullptr;
    QAccessibleBridgePlugin_Sender_Callback qaccessiblebridgeplugin_sender_callback = nullptr;
    QAccessibleBridgePlugin_SenderSignalIndex_Callback qaccessiblebridgeplugin_sendersignalindex_callback = nullptr;
    QAccessibleBridgePlugin_Receivers_Callback qaccessiblebridgeplugin_receivers_callback = nullptr;
    QAccessibleBridgePlugin_IsSignalConnected_Callback qaccessiblebridgeplugin_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qaccessiblebridgeplugin_metaobject_isbase = false;
    mutable bool qaccessiblebridgeplugin_metacast_isbase = false;
    mutable bool qaccessiblebridgeplugin_metacall_isbase = false;
    mutable bool qaccessiblebridgeplugin_create_isbase = false;
    mutable bool qaccessiblebridgeplugin_event_isbase = false;
    mutable bool qaccessiblebridgeplugin_eventfilter_isbase = false;
    mutable bool qaccessiblebridgeplugin_timerevent_isbase = false;
    mutable bool qaccessiblebridgeplugin_childevent_isbase = false;
    mutable bool qaccessiblebridgeplugin_customevent_isbase = false;
    mutable bool qaccessiblebridgeplugin_connectnotify_isbase = false;
    mutable bool qaccessiblebridgeplugin_disconnectnotify_isbase = false;
    mutable bool qaccessiblebridgeplugin_sender_isbase = false;
    mutable bool qaccessiblebridgeplugin_sendersignalindex_isbase = false;
    mutable bool qaccessiblebridgeplugin_receivers_isbase = false;
    mutable bool qaccessiblebridgeplugin_issignalconnected_isbase = false;

  public:
    VirtualQAccessibleBridgePlugin() : QAccessibleBridgePlugin() {};
    VirtualQAccessibleBridgePlugin(QObject* parent) : QAccessibleBridgePlugin(parent) {};

    // Callback setters
    inline void setQAccessibleBridgePlugin_MetaObject_Callback(QAccessibleBridgePlugin_MetaObject_Callback cb) { qaccessiblebridgeplugin_metaobject_callback = cb; }
    inline void setQAccessibleBridgePlugin_Metacast_Callback(QAccessibleBridgePlugin_Metacast_Callback cb) { qaccessiblebridgeplugin_metacast_callback = cb; }
    inline void setQAccessibleBridgePlugin_Metacall_Callback(QAccessibleBridgePlugin_Metacall_Callback cb) { qaccessiblebridgeplugin_metacall_callback = cb; }
    inline void setQAccessibleBridgePlugin_Create_Callback(QAccessibleBridgePlugin_Create_Callback cb) { qaccessiblebridgeplugin_create_callback = cb; }
    inline void setQAccessibleBridgePlugin_Event_Callback(QAccessibleBridgePlugin_Event_Callback cb) { qaccessiblebridgeplugin_event_callback = cb; }
    inline void setQAccessibleBridgePlugin_EventFilter_Callback(QAccessibleBridgePlugin_EventFilter_Callback cb) { qaccessiblebridgeplugin_eventfilter_callback = cb; }
    inline void setQAccessibleBridgePlugin_TimerEvent_Callback(QAccessibleBridgePlugin_TimerEvent_Callback cb) { qaccessiblebridgeplugin_timerevent_callback = cb; }
    inline void setQAccessibleBridgePlugin_ChildEvent_Callback(QAccessibleBridgePlugin_ChildEvent_Callback cb) { qaccessiblebridgeplugin_childevent_callback = cb; }
    inline void setQAccessibleBridgePlugin_CustomEvent_Callback(QAccessibleBridgePlugin_CustomEvent_Callback cb) { qaccessiblebridgeplugin_customevent_callback = cb; }
    inline void setQAccessibleBridgePlugin_ConnectNotify_Callback(QAccessibleBridgePlugin_ConnectNotify_Callback cb) { qaccessiblebridgeplugin_connectnotify_callback = cb; }
    inline void setQAccessibleBridgePlugin_DisconnectNotify_Callback(QAccessibleBridgePlugin_DisconnectNotify_Callback cb) { qaccessiblebridgeplugin_disconnectnotify_callback = cb; }
    inline void setQAccessibleBridgePlugin_Sender_Callback(QAccessibleBridgePlugin_Sender_Callback cb) { qaccessiblebridgeplugin_sender_callback = cb; }
    inline void setQAccessibleBridgePlugin_SenderSignalIndex_Callback(QAccessibleBridgePlugin_SenderSignalIndex_Callback cb) { qaccessiblebridgeplugin_sendersignalindex_callback = cb; }
    inline void setQAccessibleBridgePlugin_Receivers_Callback(QAccessibleBridgePlugin_Receivers_Callback cb) { qaccessiblebridgeplugin_receivers_callback = cb; }
    inline void setQAccessibleBridgePlugin_IsSignalConnected_Callback(QAccessibleBridgePlugin_IsSignalConnected_Callback cb) { qaccessiblebridgeplugin_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQAccessibleBridgePlugin_MetaObject_IsBase(bool value) const { qaccessiblebridgeplugin_metaobject_isbase = value; }
    inline void setQAccessibleBridgePlugin_Metacast_IsBase(bool value) const { qaccessiblebridgeplugin_metacast_isbase = value; }
    inline void setQAccessibleBridgePlugin_Metacall_IsBase(bool value) const { qaccessiblebridgeplugin_metacall_isbase = value; }
    inline void setQAccessibleBridgePlugin_Create_IsBase(bool value) const { qaccessiblebridgeplugin_create_isbase = value; }
    inline void setQAccessibleBridgePlugin_Event_IsBase(bool value) const { qaccessiblebridgeplugin_event_isbase = value; }
    inline void setQAccessibleBridgePlugin_EventFilter_IsBase(bool value) const { qaccessiblebridgeplugin_eventfilter_isbase = value; }
    inline void setQAccessibleBridgePlugin_TimerEvent_IsBase(bool value) const { qaccessiblebridgeplugin_timerevent_isbase = value; }
    inline void setQAccessibleBridgePlugin_ChildEvent_IsBase(bool value) const { qaccessiblebridgeplugin_childevent_isbase = value; }
    inline void setQAccessibleBridgePlugin_CustomEvent_IsBase(bool value) const { qaccessiblebridgeplugin_customevent_isbase = value; }
    inline void setQAccessibleBridgePlugin_ConnectNotify_IsBase(bool value) const { qaccessiblebridgeplugin_connectnotify_isbase = value; }
    inline void setQAccessibleBridgePlugin_DisconnectNotify_IsBase(bool value) const { qaccessiblebridgeplugin_disconnectnotify_isbase = value; }
    inline void setQAccessibleBridgePlugin_Sender_IsBase(bool value) const { qaccessiblebridgeplugin_sender_isbase = value; }
    inline void setQAccessibleBridgePlugin_SenderSignalIndex_IsBase(bool value) const { qaccessiblebridgeplugin_sendersignalindex_isbase = value; }
    inline void setQAccessibleBridgePlugin_Receivers_IsBase(bool value) const { qaccessiblebridgeplugin_receivers_isbase = value; }
    inline void setQAccessibleBridgePlugin_IsSignalConnected_IsBase(bool value) const { qaccessiblebridgeplugin_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qaccessiblebridgeplugin_metaobject_isbase) {
            qaccessiblebridgeplugin_metaobject_isbase = false;
            return QAccessibleBridgePlugin::metaObject();
        }
        auto metaobject_cb = qaccessiblebridgeplugin_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QAccessibleBridgePlugin::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qaccessiblebridgeplugin_metacast_isbase) {
            qaccessiblebridgeplugin_metacast_isbase = false;
            return QAccessibleBridgePlugin::qt_metacast(param1);
        }
        auto metacast_cb = qaccessiblebridgeplugin_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QAccessibleBridgePlugin::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qaccessiblebridgeplugin_metacall_isbase) {
            qaccessiblebridgeplugin_metacall_isbase = false;
            return QAccessibleBridgePlugin::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qaccessiblebridgeplugin_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QAccessibleBridgePlugin::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QAccessibleBridge* create(const QString& key) override {
        auto create_cb = qaccessiblebridgeplugin_create_callback;
        if (create_cb) {
            const QString key_ret = key;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray key_b = key_ret.toUtf8();
            auto key_str_len = key_b.length();
            const char* key_str = static_cast<const char*>(malloc(key_str_len + 1));
            memcpy((void*)key_str, key_b.data(), key_str_len);
            ((char*)key_str)[key_str_len] = '\0';
            const char* cbval1 = key_str;

            QAccessibleBridge* callback_ret = create_cb(this, cbval1);
            libqt_free(key_str);
            return callback_ret;
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qaccessiblebridgeplugin_event_isbase) {
            qaccessiblebridgeplugin_event_isbase = false;
            return QAccessibleBridgePlugin::event(event);
        }
        auto event_cb = qaccessiblebridgeplugin_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QAccessibleBridgePlugin::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qaccessiblebridgeplugin_eventfilter_isbase) {
            qaccessiblebridgeplugin_eventfilter_isbase = false;
            return QAccessibleBridgePlugin::eventFilter(watched, event);
        }
        auto eventfilter_cb = qaccessiblebridgeplugin_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QAccessibleBridgePlugin::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qaccessiblebridgeplugin_timerevent_isbase) {
            qaccessiblebridgeplugin_timerevent_isbase = false;
            QAccessibleBridgePlugin::timerEvent(event);
            return;
        }
        auto timerevent_cb = qaccessiblebridgeplugin_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        QAccessibleBridgePlugin::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qaccessiblebridgeplugin_childevent_isbase) {
            qaccessiblebridgeplugin_childevent_isbase = false;
            QAccessibleBridgePlugin::childEvent(event);
            return;
        }
        auto childevent_cb = qaccessiblebridgeplugin_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        QAccessibleBridgePlugin::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qaccessiblebridgeplugin_customevent_isbase) {
            qaccessiblebridgeplugin_customevent_isbase = false;
            QAccessibleBridgePlugin::customEvent(event);
            return;
        }
        auto customevent_cb = qaccessiblebridgeplugin_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        QAccessibleBridgePlugin::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qaccessiblebridgeplugin_connectnotify_isbase) {
            qaccessiblebridgeplugin_connectnotify_isbase = false;
            QAccessibleBridgePlugin::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qaccessiblebridgeplugin_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        QAccessibleBridgePlugin::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qaccessiblebridgeplugin_disconnectnotify_isbase) {
            qaccessiblebridgeplugin_disconnectnotify_isbase = false;
            QAccessibleBridgePlugin::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qaccessiblebridgeplugin_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        QAccessibleBridgePlugin::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qaccessiblebridgeplugin_sender_isbase) {
            qaccessiblebridgeplugin_sender_isbase = false;
            return QAccessibleBridgePlugin::sender();
        }
        auto sender_cb = qaccessiblebridgeplugin_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QAccessibleBridgePlugin::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qaccessiblebridgeplugin_sendersignalindex_isbase) {
            qaccessiblebridgeplugin_sendersignalindex_isbase = false;
            return QAccessibleBridgePlugin::senderSignalIndex();
        }
        auto sendersignalindex_cb = qaccessiblebridgeplugin_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QAccessibleBridgePlugin::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qaccessiblebridgeplugin_receivers_isbase) {
            qaccessiblebridgeplugin_receivers_isbase = false;
            return QAccessibleBridgePlugin::receivers(signal);
        }
        auto receivers_cb = qaccessiblebridgeplugin_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QAccessibleBridgePlugin::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qaccessiblebridgeplugin_issignalconnected_isbase) {
            qaccessiblebridgeplugin_issignalconnected_isbase = false;
            return QAccessibleBridgePlugin::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qaccessiblebridgeplugin_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QAccessibleBridgePlugin::isSignalConnected(signal);
    }

    // Friend functions
    friend void QAccessibleBridgePlugin_TimerEvent(QAccessibleBridgePlugin* self, QTimerEvent* event);
    friend void QAccessibleBridgePlugin_SuperTimerEvent(QAccessibleBridgePlugin* self, QTimerEvent* event);
    friend void QAccessibleBridgePlugin_ChildEvent(QAccessibleBridgePlugin* self, QChildEvent* event);
    friend void QAccessibleBridgePlugin_SuperChildEvent(QAccessibleBridgePlugin* self, QChildEvent* event);
    friend void QAccessibleBridgePlugin_CustomEvent(QAccessibleBridgePlugin* self, QEvent* event);
    friend void QAccessibleBridgePlugin_SuperCustomEvent(QAccessibleBridgePlugin* self, QEvent* event);
    friend void QAccessibleBridgePlugin_ConnectNotify(QAccessibleBridgePlugin* self, const QMetaMethod* signal);
    friend void QAccessibleBridgePlugin_SuperConnectNotify(QAccessibleBridgePlugin* self, const QMetaMethod* signal);
    friend void QAccessibleBridgePlugin_DisconnectNotify(QAccessibleBridgePlugin* self, const QMetaMethod* signal);
    friend void QAccessibleBridgePlugin_SuperDisconnectNotify(QAccessibleBridgePlugin* self, const QMetaMethod* signal);
    friend QObject* QAccessibleBridgePlugin_Sender(const QAccessibleBridgePlugin* self);
    friend QObject* QAccessibleBridgePlugin_SuperSender(const QAccessibleBridgePlugin* self);
    friend int QAccessibleBridgePlugin_SenderSignalIndex(const QAccessibleBridgePlugin* self);
    friend int QAccessibleBridgePlugin_SuperSenderSignalIndex(const QAccessibleBridgePlugin* self);
    friend int QAccessibleBridgePlugin_Receivers(const QAccessibleBridgePlugin* self, const char* signal);
    friend int QAccessibleBridgePlugin_SuperReceivers(const QAccessibleBridgePlugin* self, const char* signal);
    friend bool QAccessibleBridgePlugin_IsSignalConnected(const QAccessibleBridgePlugin* self, const QMetaMethod* signal);
    friend bool QAccessibleBridgePlugin_SuperIsSignalConnected(const QAccessibleBridgePlugin* self, const QMetaMethod* signal);
};

#endif
