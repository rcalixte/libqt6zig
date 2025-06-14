#pragma once
#ifndef SRCC_LIBVIRTUALQACCESSIBLEBRIDGE_H
#define SRCC_LIBVIRTUALQACCESSIBLEBRIDGE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QAccessibleBridgePlugin so that we can call protected methods
class VirtualQAccessibleBridgePlugin final : public QAccessibleBridgePlugin {

  public:
    // Virtual class boolean flag
    bool isVirtualQAccessibleBridgePlugin = true;

    // Virtual class public types (including callbacks)
    using QAccessibleBridgePlugin_Metacall_Callback = int (*)(QAccessibleBridgePlugin*, int, int, void**);
    using QAccessibleBridgePlugin_Create_Callback = QAccessibleBridge* (*)(QAccessibleBridgePlugin*, libqt_string);
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
    VirtualQAccessibleBridgePlugin() : QAccessibleBridgePlugin(){};
    VirtualQAccessibleBridgePlugin(QObject* parent) : QAccessibleBridgePlugin(parent){};

    ~VirtualQAccessibleBridgePlugin() {
        qaccessiblebridgeplugin_metacall_callback = nullptr;
        qaccessiblebridgeplugin_create_callback = nullptr;
        qaccessiblebridgeplugin_event_callback = nullptr;
        qaccessiblebridgeplugin_eventfilter_callback = nullptr;
        qaccessiblebridgeplugin_timerevent_callback = nullptr;
        qaccessiblebridgeplugin_childevent_callback = nullptr;
        qaccessiblebridgeplugin_customevent_callback = nullptr;
        qaccessiblebridgeplugin_connectnotify_callback = nullptr;
        qaccessiblebridgeplugin_disconnectnotify_callback = nullptr;
        qaccessiblebridgeplugin_sender_callback = nullptr;
        qaccessiblebridgeplugin_sendersignalindex_callback = nullptr;
        qaccessiblebridgeplugin_receivers_callback = nullptr;
        qaccessiblebridgeplugin_issignalconnected_callback = nullptr;
    }

    // Callback setters
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
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qaccessiblebridgeplugin_metacall_isbase) {
            qaccessiblebridgeplugin_metacall_isbase = false;
            return QAccessibleBridgePlugin::qt_metacall(param1, param2, param3);
        } else if (qaccessiblebridgeplugin_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qaccessiblebridgeplugin_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QAccessibleBridgePlugin::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QAccessibleBridge* create(const QString& key) override {
        if (qaccessiblebridgeplugin_create_callback != nullptr) {
            const QString key_ret = key;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray key_b = key_ret.toUtf8();
            libqt_string key_str;
            key_str.len = key_b.length();
            key_str.data = static_cast<const char*>(malloc((key_str.len + 1) * sizeof(char)));
            memcpy((void*)key_str.data, key_b.data(), key_str.len);
            ((char*)key_str.data)[key_str.len] = '\0';
            libqt_string cbval1 = key_str;

            QAccessibleBridge* callback_ret = qaccessiblebridgeplugin_create_callback(this, cbval1);
            return callback_ret;
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qaccessiblebridgeplugin_event_isbase) {
            qaccessiblebridgeplugin_event_isbase = false;
            return QAccessibleBridgePlugin::event(event);
        } else if (qaccessiblebridgeplugin_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qaccessiblebridgeplugin_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QAccessibleBridgePlugin::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qaccessiblebridgeplugin_eventfilter_isbase) {
            qaccessiblebridgeplugin_eventfilter_isbase = false;
            return QAccessibleBridgePlugin::eventFilter(watched, event);
        } else if (qaccessiblebridgeplugin_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qaccessiblebridgeplugin_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QAccessibleBridgePlugin::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qaccessiblebridgeplugin_timerevent_isbase) {
            qaccessiblebridgeplugin_timerevent_isbase = false;
            QAccessibleBridgePlugin::timerEvent(event);
        } else if (qaccessiblebridgeplugin_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qaccessiblebridgeplugin_timerevent_callback(this, cbval1);
        } else {
            QAccessibleBridgePlugin::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qaccessiblebridgeplugin_childevent_isbase) {
            qaccessiblebridgeplugin_childevent_isbase = false;
            QAccessibleBridgePlugin::childEvent(event);
        } else if (qaccessiblebridgeplugin_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qaccessiblebridgeplugin_childevent_callback(this, cbval1);
        } else {
            QAccessibleBridgePlugin::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qaccessiblebridgeplugin_customevent_isbase) {
            qaccessiblebridgeplugin_customevent_isbase = false;
            QAccessibleBridgePlugin::customEvent(event);
        } else if (qaccessiblebridgeplugin_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qaccessiblebridgeplugin_customevent_callback(this, cbval1);
        } else {
            QAccessibleBridgePlugin::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qaccessiblebridgeplugin_connectnotify_isbase) {
            qaccessiblebridgeplugin_connectnotify_isbase = false;
            QAccessibleBridgePlugin::connectNotify(signal);
        } else if (qaccessiblebridgeplugin_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qaccessiblebridgeplugin_connectnotify_callback(this, cbval1);
        } else {
            QAccessibleBridgePlugin::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qaccessiblebridgeplugin_disconnectnotify_isbase) {
            qaccessiblebridgeplugin_disconnectnotify_isbase = false;
            QAccessibleBridgePlugin::disconnectNotify(signal);
        } else if (qaccessiblebridgeplugin_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qaccessiblebridgeplugin_disconnectnotify_callback(this, cbval1);
        } else {
            QAccessibleBridgePlugin::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qaccessiblebridgeplugin_sender_isbase) {
            qaccessiblebridgeplugin_sender_isbase = false;
            return QAccessibleBridgePlugin::sender();
        } else if (qaccessiblebridgeplugin_sender_callback != nullptr) {
            QObject* callback_ret = qaccessiblebridgeplugin_sender_callback();
            return callback_ret;
        } else {
            return QAccessibleBridgePlugin::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qaccessiblebridgeplugin_sendersignalindex_isbase) {
            qaccessiblebridgeplugin_sendersignalindex_isbase = false;
            return QAccessibleBridgePlugin::senderSignalIndex();
        } else if (qaccessiblebridgeplugin_sendersignalindex_callback != nullptr) {
            int callback_ret = qaccessiblebridgeplugin_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QAccessibleBridgePlugin::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qaccessiblebridgeplugin_receivers_isbase) {
            qaccessiblebridgeplugin_receivers_isbase = false;
            return QAccessibleBridgePlugin::receivers(signal);
        } else if (qaccessiblebridgeplugin_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qaccessiblebridgeplugin_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QAccessibleBridgePlugin::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qaccessiblebridgeplugin_issignalconnected_isbase) {
            qaccessiblebridgeplugin_issignalconnected_isbase = false;
            return QAccessibleBridgePlugin::isSignalConnected(signal);
        } else if (qaccessiblebridgeplugin_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qaccessiblebridgeplugin_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QAccessibleBridgePlugin::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void QAccessibleBridgePlugin_TimerEvent(QAccessibleBridgePlugin* self, QTimerEvent* event);
    friend void QAccessibleBridgePlugin_QBaseTimerEvent(QAccessibleBridgePlugin* self, QTimerEvent* event);
    friend void QAccessibleBridgePlugin_ChildEvent(QAccessibleBridgePlugin* self, QChildEvent* event);
    friend void QAccessibleBridgePlugin_QBaseChildEvent(QAccessibleBridgePlugin* self, QChildEvent* event);
    friend void QAccessibleBridgePlugin_CustomEvent(QAccessibleBridgePlugin* self, QEvent* event);
    friend void QAccessibleBridgePlugin_QBaseCustomEvent(QAccessibleBridgePlugin* self, QEvent* event);
    friend void QAccessibleBridgePlugin_ConnectNotify(QAccessibleBridgePlugin* self, const QMetaMethod* signal);
    friend void QAccessibleBridgePlugin_QBaseConnectNotify(QAccessibleBridgePlugin* self, const QMetaMethod* signal);
    friend void QAccessibleBridgePlugin_DisconnectNotify(QAccessibleBridgePlugin* self, const QMetaMethod* signal);
    friend void QAccessibleBridgePlugin_QBaseDisconnectNotify(QAccessibleBridgePlugin* self, const QMetaMethod* signal);
    friend QObject* QAccessibleBridgePlugin_Sender(const QAccessibleBridgePlugin* self);
    friend QObject* QAccessibleBridgePlugin_QBaseSender(const QAccessibleBridgePlugin* self);
    friend int QAccessibleBridgePlugin_SenderSignalIndex(const QAccessibleBridgePlugin* self);
    friend int QAccessibleBridgePlugin_QBaseSenderSignalIndex(const QAccessibleBridgePlugin* self);
    friend int QAccessibleBridgePlugin_Receivers(const QAccessibleBridgePlugin* self, const char* signal);
    friend int QAccessibleBridgePlugin_QBaseReceivers(const QAccessibleBridgePlugin* self, const char* signal);
    friend bool QAccessibleBridgePlugin_IsSignalConnected(const QAccessibleBridgePlugin* self, const QMetaMethod* signal);
    friend bool QAccessibleBridgePlugin_QBaseIsSignalConnected(const QAccessibleBridgePlugin* self, const QMetaMethod* signal);
};

#endif
