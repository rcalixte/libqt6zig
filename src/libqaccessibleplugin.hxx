#pragma once
#ifndef SRCC_LIBVIRTUALQACCESSIBLEPLUGIN_H
#define SRCC_LIBVIRTUALQACCESSIBLEPLUGIN_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QAccessiblePlugin so that we can call protected methods
class VirtualQAccessiblePlugin final : public QAccessiblePlugin {

  public:
    // Virtual class boolean flag
    bool isVirtualQAccessiblePlugin = true;

    // Virtual class public types (including callbacks)
    using QAccessiblePlugin_Metacall_Callback = int (*)(QAccessiblePlugin*, int, int, void**);
    using QAccessiblePlugin_Create_Callback = QAccessibleInterface* (*)(QAccessiblePlugin*, libqt_string, QObject*);
    using QAccessiblePlugin_Event_Callback = bool (*)(QAccessiblePlugin*, QEvent*);
    using QAccessiblePlugin_EventFilter_Callback = bool (*)(QAccessiblePlugin*, QObject*, QEvent*);
    using QAccessiblePlugin_TimerEvent_Callback = void (*)(QAccessiblePlugin*, QTimerEvent*);
    using QAccessiblePlugin_ChildEvent_Callback = void (*)(QAccessiblePlugin*, QChildEvent*);
    using QAccessiblePlugin_CustomEvent_Callback = void (*)(QAccessiblePlugin*, QEvent*);
    using QAccessiblePlugin_ConnectNotify_Callback = void (*)(QAccessiblePlugin*, QMetaMethod*);
    using QAccessiblePlugin_DisconnectNotify_Callback = void (*)(QAccessiblePlugin*, QMetaMethod*);
    using QAccessiblePlugin_Sender_Callback = QObject* (*)();
    using QAccessiblePlugin_SenderSignalIndex_Callback = int (*)();
    using QAccessiblePlugin_Receivers_Callback = int (*)(const QAccessiblePlugin*, const char*);
    using QAccessiblePlugin_IsSignalConnected_Callback = bool (*)(const QAccessiblePlugin*, QMetaMethod*);

  protected:
    // Instance callback storage
    QAccessiblePlugin_Metacall_Callback qaccessibleplugin_metacall_callback = nullptr;
    QAccessiblePlugin_Create_Callback qaccessibleplugin_create_callback = nullptr;
    QAccessiblePlugin_Event_Callback qaccessibleplugin_event_callback = nullptr;
    QAccessiblePlugin_EventFilter_Callback qaccessibleplugin_eventfilter_callback = nullptr;
    QAccessiblePlugin_TimerEvent_Callback qaccessibleplugin_timerevent_callback = nullptr;
    QAccessiblePlugin_ChildEvent_Callback qaccessibleplugin_childevent_callback = nullptr;
    QAccessiblePlugin_CustomEvent_Callback qaccessibleplugin_customevent_callback = nullptr;
    QAccessiblePlugin_ConnectNotify_Callback qaccessibleplugin_connectnotify_callback = nullptr;
    QAccessiblePlugin_DisconnectNotify_Callback qaccessibleplugin_disconnectnotify_callback = nullptr;
    QAccessiblePlugin_Sender_Callback qaccessibleplugin_sender_callback = nullptr;
    QAccessiblePlugin_SenderSignalIndex_Callback qaccessibleplugin_sendersignalindex_callback = nullptr;
    QAccessiblePlugin_Receivers_Callback qaccessibleplugin_receivers_callback = nullptr;
    QAccessiblePlugin_IsSignalConnected_Callback qaccessibleplugin_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qaccessibleplugin_metacall_isbase = false;
    mutable bool qaccessibleplugin_create_isbase = false;
    mutable bool qaccessibleplugin_event_isbase = false;
    mutable bool qaccessibleplugin_eventfilter_isbase = false;
    mutable bool qaccessibleplugin_timerevent_isbase = false;
    mutable bool qaccessibleplugin_childevent_isbase = false;
    mutable bool qaccessibleplugin_customevent_isbase = false;
    mutable bool qaccessibleplugin_connectnotify_isbase = false;
    mutable bool qaccessibleplugin_disconnectnotify_isbase = false;
    mutable bool qaccessibleplugin_sender_isbase = false;
    mutable bool qaccessibleplugin_sendersignalindex_isbase = false;
    mutable bool qaccessibleplugin_receivers_isbase = false;
    mutable bool qaccessibleplugin_issignalconnected_isbase = false;

  public:
    VirtualQAccessiblePlugin() : QAccessiblePlugin() {};
    VirtualQAccessiblePlugin(QObject* parent) : QAccessiblePlugin(parent) {};

    ~VirtualQAccessiblePlugin() {
        qaccessibleplugin_metacall_callback = nullptr;
        qaccessibleplugin_create_callback = nullptr;
        qaccessibleplugin_event_callback = nullptr;
        qaccessibleplugin_eventfilter_callback = nullptr;
        qaccessibleplugin_timerevent_callback = nullptr;
        qaccessibleplugin_childevent_callback = nullptr;
        qaccessibleplugin_customevent_callback = nullptr;
        qaccessibleplugin_connectnotify_callback = nullptr;
        qaccessibleplugin_disconnectnotify_callback = nullptr;
        qaccessibleplugin_sender_callback = nullptr;
        qaccessibleplugin_sendersignalindex_callback = nullptr;
        qaccessibleplugin_receivers_callback = nullptr;
        qaccessibleplugin_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setQAccessiblePlugin_Metacall_Callback(QAccessiblePlugin_Metacall_Callback cb) { qaccessibleplugin_metacall_callback = cb; }
    inline void setQAccessiblePlugin_Create_Callback(QAccessiblePlugin_Create_Callback cb) { qaccessibleplugin_create_callback = cb; }
    inline void setQAccessiblePlugin_Event_Callback(QAccessiblePlugin_Event_Callback cb) { qaccessibleplugin_event_callback = cb; }
    inline void setQAccessiblePlugin_EventFilter_Callback(QAccessiblePlugin_EventFilter_Callback cb) { qaccessibleplugin_eventfilter_callback = cb; }
    inline void setQAccessiblePlugin_TimerEvent_Callback(QAccessiblePlugin_TimerEvent_Callback cb) { qaccessibleplugin_timerevent_callback = cb; }
    inline void setQAccessiblePlugin_ChildEvent_Callback(QAccessiblePlugin_ChildEvent_Callback cb) { qaccessibleplugin_childevent_callback = cb; }
    inline void setQAccessiblePlugin_CustomEvent_Callback(QAccessiblePlugin_CustomEvent_Callback cb) { qaccessibleplugin_customevent_callback = cb; }
    inline void setQAccessiblePlugin_ConnectNotify_Callback(QAccessiblePlugin_ConnectNotify_Callback cb) { qaccessibleplugin_connectnotify_callback = cb; }
    inline void setQAccessiblePlugin_DisconnectNotify_Callback(QAccessiblePlugin_DisconnectNotify_Callback cb) { qaccessibleplugin_disconnectnotify_callback = cb; }
    inline void setQAccessiblePlugin_Sender_Callback(QAccessiblePlugin_Sender_Callback cb) { qaccessibleplugin_sender_callback = cb; }
    inline void setQAccessiblePlugin_SenderSignalIndex_Callback(QAccessiblePlugin_SenderSignalIndex_Callback cb) { qaccessibleplugin_sendersignalindex_callback = cb; }
    inline void setQAccessiblePlugin_Receivers_Callback(QAccessiblePlugin_Receivers_Callback cb) { qaccessibleplugin_receivers_callback = cb; }
    inline void setQAccessiblePlugin_IsSignalConnected_Callback(QAccessiblePlugin_IsSignalConnected_Callback cb) { qaccessibleplugin_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQAccessiblePlugin_Metacall_IsBase(bool value) const { qaccessibleplugin_metacall_isbase = value; }
    inline void setQAccessiblePlugin_Create_IsBase(bool value) const { qaccessibleplugin_create_isbase = value; }
    inline void setQAccessiblePlugin_Event_IsBase(bool value) const { qaccessibleplugin_event_isbase = value; }
    inline void setQAccessiblePlugin_EventFilter_IsBase(bool value) const { qaccessibleplugin_eventfilter_isbase = value; }
    inline void setQAccessiblePlugin_TimerEvent_IsBase(bool value) const { qaccessibleplugin_timerevent_isbase = value; }
    inline void setQAccessiblePlugin_ChildEvent_IsBase(bool value) const { qaccessibleplugin_childevent_isbase = value; }
    inline void setQAccessiblePlugin_CustomEvent_IsBase(bool value) const { qaccessibleplugin_customevent_isbase = value; }
    inline void setQAccessiblePlugin_ConnectNotify_IsBase(bool value) const { qaccessibleplugin_connectnotify_isbase = value; }
    inline void setQAccessiblePlugin_DisconnectNotify_IsBase(bool value) const { qaccessibleplugin_disconnectnotify_isbase = value; }
    inline void setQAccessiblePlugin_Sender_IsBase(bool value) const { qaccessibleplugin_sender_isbase = value; }
    inline void setQAccessiblePlugin_SenderSignalIndex_IsBase(bool value) const { qaccessibleplugin_sendersignalindex_isbase = value; }
    inline void setQAccessiblePlugin_Receivers_IsBase(bool value) const { qaccessibleplugin_receivers_isbase = value; }
    inline void setQAccessiblePlugin_IsSignalConnected_IsBase(bool value) const { qaccessibleplugin_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qaccessibleplugin_metacall_isbase) {
            qaccessibleplugin_metacall_isbase = false;
            return QAccessiblePlugin::qt_metacall(param1, param2, param3);
        } else if (qaccessibleplugin_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qaccessibleplugin_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QAccessiblePlugin::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QAccessibleInterface* create(const QString& key, QObject* object) override {
        if (qaccessibleplugin_create_callback != nullptr) {
            const QString key_ret = key;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray key_b = key_ret.toUtf8();
            libqt_string key_str;
            key_str.len = key_b.length();
            key_str.data = static_cast<const char*>(malloc(key_str.len + 1));
            memcpy((void*)key_str.data, key_b.data(), key_str.len);
            ((char*)key_str.data)[key_str.len] = '\0';
            libqt_string cbval1 = key_str;
            QObject* cbval2 = object;

            QAccessibleInterface* callback_ret = qaccessibleplugin_create_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qaccessibleplugin_event_isbase) {
            qaccessibleplugin_event_isbase = false;
            return QAccessiblePlugin::event(event);
        } else if (qaccessibleplugin_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qaccessibleplugin_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QAccessiblePlugin::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qaccessibleplugin_eventfilter_isbase) {
            qaccessibleplugin_eventfilter_isbase = false;
            return QAccessiblePlugin::eventFilter(watched, event);
        } else if (qaccessibleplugin_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qaccessibleplugin_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QAccessiblePlugin::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qaccessibleplugin_timerevent_isbase) {
            qaccessibleplugin_timerevent_isbase = false;
            QAccessiblePlugin::timerEvent(event);
        } else if (qaccessibleplugin_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qaccessibleplugin_timerevent_callback(this, cbval1);
        } else {
            QAccessiblePlugin::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qaccessibleplugin_childevent_isbase) {
            qaccessibleplugin_childevent_isbase = false;
            QAccessiblePlugin::childEvent(event);
        } else if (qaccessibleplugin_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qaccessibleplugin_childevent_callback(this, cbval1);
        } else {
            QAccessiblePlugin::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qaccessibleplugin_customevent_isbase) {
            qaccessibleplugin_customevent_isbase = false;
            QAccessiblePlugin::customEvent(event);
        } else if (qaccessibleplugin_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qaccessibleplugin_customevent_callback(this, cbval1);
        } else {
            QAccessiblePlugin::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qaccessibleplugin_connectnotify_isbase) {
            qaccessibleplugin_connectnotify_isbase = false;
            QAccessiblePlugin::connectNotify(signal);
        } else if (qaccessibleplugin_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qaccessibleplugin_connectnotify_callback(this, cbval1);
        } else {
            QAccessiblePlugin::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qaccessibleplugin_disconnectnotify_isbase) {
            qaccessibleplugin_disconnectnotify_isbase = false;
            QAccessiblePlugin::disconnectNotify(signal);
        } else if (qaccessibleplugin_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qaccessibleplugin_disconnectnotify_callback(this, cbval1);
        } else {
            QAccessiblePlugin::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qaccessibleplugin_sender_isbase) {
            qaccessibleplugin_sender_isbase = false;
            return QAccessiblePlugin::sender();
        } else if (qaccessibleplugin_sender_callback != nullptr) {
            QObject* callback_ret = qaccessibleplugin_sender_callback();
            return callback_ret;
        } else {
            return QAccessiblePlugin::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qaccessibleplugin_sendersignalindex_isbase) {
            qaccessibleplugin_sendersignalindex_isbase = false;
            return QAccessiblePlugin::senderSignalIndex();
        } else if (qaccessibleplugin_sendersignalindex_callback != nullptr) {
            int callback_ret = qaccessibleplugin_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QAccessiblePlugin::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qaccessibleplugin_receivers_isbase) {
            qaccessibleplugin_receivers_isbase = false;
            return QAccessiblePlugin::receivers(signal);
        } else if (qaccessibleplugin_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qaccessibleplugin_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QAccessiblePlugin::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qaccessibleplugin_issignalconnected_isbase) {
            qaccessibleplugin_issignalconnected_isbase = false;
            return QAccessiblePlugin::isSignalConnected(signal);
        } else if (qaccessibleplugin_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qaccessibleplugin_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QAccessiblePlugin::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void QAccessiblePlugin_TimerEvent(QAccessiblePlugin* self, QTimerEvent* event);
    friend void QAccessiblePlugin_QBaseTimerEvent(QAccessiblePlugin* self, QTimerEvent* event);
    friend void QAccessiblePlugin_ChildEvent(QAccessiblePlugin* self, QChildEvent* event);
    friend void QAccessiblePlugin_QBaseChildEvent(QAccessiblePlugin* self, QChildEvent* event);
    friend void QAccessiblePlugin_CustomEvent(QAccessiblePlugin* self, QEvent* event);
    friend void QAccessiblePlugin_QBaseCustomEvent(QAccessiblePlugin* self, QEvent* event);
    friend void QAccessiblePlugin_ConnectNotify(QAccessiblePlugin* self, const QMetaMethod* signal);
    friend void QAccessiblePlugin_QBaseConnectNotify(QAccessiblePlugin* self, const QMetaMethod* signal);
    friend void QAccessiblePlugin_DisconnectNotify(QAccessiblePlugin* self, const QMetaMethod* signal);
    friend void QAccessiblePlugin_QBaseDisconnectNotify(QAccessiblePlugin* self, const QMetaMethod* signal);
    friend QObject* QAccessiblePlugin_Sender(const QAccessiblePlugin* self);
    friend QObject* QAccessiblePlugin_QBaseSender(const QAccessiblePlugin* self);
    friend int QAccessiblePlugin_SenderSignalIndex(const QAccessiblePlugin* self);
    friend int QAccessiblePlugin_QBaseSenderSignalIndex(const QAccessiblePlugin* self);
    friend int QAccessiblePlugin_Receivers(const QAccessiblePlugin* self, const char* signal);
    friend int QAccessiblePlugin_QBaseReceivers(const QAccessiblePlugin* self, const char* signal);
    friend bool QAccessiblePlugin_IsSignalConnected(const QAccessiblePlugin* self, const QMetaMethod* signal);
    friend bool QAccessiblePlugin_QBaseIsSignalConnected(const QAccessiblePlugin* self, const QMetaMethod* signal);
};

#endif
