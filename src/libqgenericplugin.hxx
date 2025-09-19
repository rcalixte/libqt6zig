#pragma once
#ifndef SRCC_LIBVIRTUALQGENERICPLUGIN_H
#define SRCC_LIBVIRTUALQGENERICPLUGIN_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QGenericPlugin so that we can call protected methods
class VirtualQGenericPlugin : public QGenericPlugin {

  public:
    // Virtual class boolean flag
    bool isVirtualQGenericPlugin = true;

    // Virtual class public types (including callbacks)
    using QGenericPlugin_Metacall_Callback = int (*)(QGenericPlugin*, int, int, void**);
    using QGenericPlugin_Create_Callback = QObject* (*)(QGenericPlugin*, libqt_string, libqt_string);
    using QGenericPlugin_Event_Callback = bool (*)(QGenericPlugin*, QEvent*);
    using QGenericPlugin_EventFilter_Callback = bool (*)(QGenericPlugin*, QObject*, QEvent*);
    using QGenericPlugin_TimerEvent_Callback = void (*)(QGenericPlugin*, QTimerEvent*);
    using QGenericPlugin_ChildEvent_Callback = void (*)(QGenericPlugin*, QChildEvent*);
    using QGenericPlugin_CustomEvent_Callback = void (*)(QGenericPlugin*, QEvent*);
    using QGenericPlugin_ConnectNotify_Callback = void (*)(QGenericPlugin*, QMetaMethod*);
    using QGenericPlugin_DisconnectNotify_Callback = void (*)(QGenericPlugin*, QMetaMethod*);
    using QGenericPlugin_Sender_Callback = QObject* (*)();
    using QGenericPlugin_SenderSignalIndex_Callback = int (*)();
    using QGenericPlugin_Receivers_Callback = int (*)(const QGenericPlugin*, const char*);
    using QGenericPlugin_IsSignalConnected_Callback = bool (*)(const QGenericPlugin*, QMetaMethod*);

  protected:
    // Instance callback storage
    QGenericPlugin_Metacall_Callback qgenericplugin_metacall_callback = nullptr;
    QGenericPlugin_Create_Callback qgenericplugin_create_callback = nullptr;
    QGenericPlugin_Event_Callback qgenericplugin_event_callback = nullptr;
    QGenericPlugin_EventFilter_Callback qgenericplugin_eventfilter_callback = nullptr;
    QGenericPlugin_TimerEvent_Callback qgenericplugin_timerevent_callback = nullptr;
    QGenericPlugin_ChildEvent_Callback qgenericplugin_childevent_callback = nullptr;
    QGenericPlugin_CustomEvent_Callback qgenericplugin_customevent_callback = nullptr;
    QGenericPlugin_ConnectNotify_Callback qgenericplugin_connectnotify_callback = nullptr;
    QGenericPlugin_DisconnectNotify_Callback qgenericplugin_disconnectnotify_callback = nullptr;
    QGenericPlugin_Sender_Callback qgenericplugin_sender_callback = nullptr;
    QGenericPlugin_SenderSignalIndex_Callback qgenericplugin_sendersignalindex_callback = nullptr;
    QGenericPlugin_Receivers_Callback qgenericplugin_receivers_callback = nullptr;
    QGenericPlugin_IsSignalConnected_Callback qgenericplugin_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qgenericplugin_metacall_isbase = false;
    mutable bool qgenericplugin_create_isbase = false;
    mutable bool qgenericplugin_event_isbase = false;
    mutable bool qgenericplugin_eventfilter_isbase = false;
    mutable bool qgenericplugin_timerevent_isbase = false;
    mutable bool qgenericplugin_childevent_isbase = false;
    mutable bool qgenericplugin_customevent_isbase = false;
    mutable bool qgenericplugin_connectnotify_isbase = false;
    mutable bool qgenericplugin_disconnectnotify_isbase = false;
    mutable bool qgenericplugin_sender_isbase = false;
    mutable bool qgenericplugin_sendersignalindex_isbase = false;
    mutable bool qgenericplugin_receivers_isbase = false;
    mutable bool qgenericplugin_issignalconnected_isbase = false;

  public:
    VirtualQGenericPlugin() : QGenericPlugin() {};
    VirtualQGenericPlugin(QObject* parent) : QGenericPlugin(parent) {};

    ~VirtualQGenericPlugin() {
        qgenericplugin_metacall_callback = nullptr;
        qgenericplugin_create_callback = nullptr;
        qgenericplugin_event_callback = nullptr;
        qgenericplugin_eventfilter_callback = nullptr;
        qgenericplugin_timerevent_callback = nullptr;
        qgenericplugin_childevent_callback = nullptr;
        qgenericplugin_customevent_callback = nullptr;
        qgenericplugin_connectnotify_callback = nullptr;
        qgenericplugin_disconnectnotify_callback = nullptr;
        qgenericplugin_sender_callback = nullptr;
        qgenericplugin_sendersignalindex_callback = nullptr;
        qgenericplugin_receivers_callback = nullptr;
        qgenericplugin_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setQGenericPlugin_Metacall_Callback(QGenericPlugin_Metacall_Callback cb) { qgenericplugin_metacall_callback = cb; }
    inline void setQGenericPlugin_Create_Callback(QGenericPlugin_Create_Callback cb) { qgenericplugin_create_callback = cb; }
    inline void setQGenericPlugin_Event_Callback(QGenericPlugin_Event_Callback cb) { qgenericplugin_event_callback = cb; }
    inline void setQGenericPlugin_EventFilter_Callback(QGenericPlugin_EventFilter_Callback cb) { qgenericplugin_eventfilter_callback = cb; }
    inline void setQGenericPlugin_TimerEvent_Callback(QGenericPlugin_TimerEvent_Callback cb) { qgenericplugin_timerevent_callback = cb; }
    inline void setQGenericPlugin_ChildEvent_Callback(QGenericPlugin_ChildEvent_Callback cb) { qgenericplugin_childevent_callback = cb; }
    inline void setQGenericPlugin_CustomEvent_Callback(QGenericPlugin_CustomEvent_Callback cb) { qgenericplugin_customevent_callback = cb; }
    inline void setQGenericPlugin_ConnectNotify_Callback(QGenericPlugin_ConnectNotify_Callback cb) { qgenericplugin_connectnotify_callback = cb; }
    inline void setQGenericPlugin_DisconnectNotify_Callback(QGenericPlugin_DisconnectNotify_Callback cb) { qgenericplugin_disconnectnotify_callback = cb; }
    inline void setQGenericPlugin_Sender_Callback(QGenericPlugin_Sender_Callback cb) { qgenericplugin_sender_callback = cb; }
    inline void setQGenericPlugin_SenderSignalIndex_Callback(QGenericPlugin_SenderSignalIndex_Callback cb) { qgenericplugin_sendersignalindex_callback = cb; }
    inline void setQGenericPlugin_Receivers_Callback(QGenericPlugin_Receivers_Callback cb) { qgenericplugin_receivers_callback = cb; }
    inline void setQGenericPlugin_IsSignalConnected_Callback(QGenericPlugin_IsSignalConnected_Callback cb) { qgenericplugin_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQGenericPlugin_Metacall_IsBase(bool value) const { qgenericplugin_metacall_isbase = value; }
    inline void setQGenericPlugin_Create_IsBase(bool value) const { qgenericplugin_create_isbase = value; }
    inline void setQGenericPlugin_Event_IsBase(bool value) const { qgenericplugin_event_isbase = value; }
    inline void setQGenericPlugin_EventFilter_IsBase(bool value) const { qgenericplugin_eventfilter_isbase = value; }
    inline void setQGenericPlugin_TimerEvent_IsBase(bool value) const { qgenericplugin_timerevent_isbase = value; }
    inline void setQGenericPlugin_ChildEvent_IsBase(bool value) const { qgenericplugin_childevent_isbase = value; }
    inline void setQGenericPlugin_CustomEvent_IsBase(bool value) const { qgenericplugin_customevent_isbase = value; }
    inline void setQGenericPlugin_ConnectNotify_IsBase(bool value) const { qgenericplugin_connectnotify_isbase = value; }
    inline void setQGenericPlugin_DisconnectNotify_IsBase(bool value) const { qgenericplugin_disconnectnotify_isbase = value; }
    inline void setQGenericPlugin_Sender_IsBase(bool value) const { qgenericplugin_sender_isbase = value; }
    inline void setQGenericPlugin_SenderSignalIndex_IsBase(bool value) const { qgenericplugin_sendersignalindex_isbase = value; }
    inline void setQGenericPlugin_Receivers_IsBase(bool value) const { qgenericplugin_receivers_isbase = value; }
    inline void setQGenericPlugin_IsSignalConnected_IsBase(bool value) const { qgenericplugin_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qgenericplugin_metacall_isbase) {
            qgenericplugin_metacall_isbase = false;
            return QGenericPlugin::qt_metacall(param1, param2, param3);
        } else if (qgenericplugin_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qgenericplugin_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QGenericPlugin::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QObject* create(const QString& name, const QString& spec) override {
        if (qgenericplugin_create_callback != nullptr) {
            const QString name_ret = name;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray name_b = name_ret.toUtf8();
            libqt_string name_str;
            name_str.len = name_b.length();
            name_str.data = static_cast<const char*>(malloc(name_str.len + 1));
            memcpy((void*)name_str.data, name_b.data(), name_str.len);
            ((char*)name_str.data)[name_str.len] = '\0';
            libqt_string cbval1 = name_str;
            const QString spec_ret = spec;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray spec_b = spec_ret.toUtf8();
            libqt_string spec_str;
            spec_str.len = spec_b.length();
            spec_str.data = static_cast<const char*>(malloc(spec_str.len + 1));
            memcpy((void*)spec_str.data, spec_b.data(), spec_str.len);
            ((char*)spec_str.data)[spec_str.len] = '\0';
            libqt_string cbval2 = spec_str;

            QObject* callback_ret = qgenericplugin_create_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qgenericplugin_event_isbase) {
            qgenericplugin_event_isbase = false;
            return QGenericPlugin::event(event);
        } else if (qgenericplugin_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qgenericplugin_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QGenericPlugin::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qgenericplugin_eventfilter_isbase) {
            qgenericplugin_eventfilter_isbase = false;
            return QGenericPlugin::eventFilter(watched, event);
        } else if (qgenericplugin_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qgenericplugin_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QGenericPlugin::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qgenericplugin_timerevent_isbase) {
            qgenericplugin_timerevent_isbase = false;
            QGenericPlugin::timerEvent(event);
        } else if (qgenericplugin_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qgenericplugin_timerevent_callback(this, cbval1);
        } else {
            QGenericPlugin::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qgenericplugin_childevent_isbase) {
            qgenericplugin_childevent_isbase = false;
            QGenericPlugin::childEvent(event);
        } else if (qgenericplugin_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qgenericplugin_childevent_callback(this, cbval1);
        } else {
            QGenericPlugin::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qgenericplugin_customevent_isbase) {
            qgenericplugin_customevent_isbase = false;
            QGenericPlugin::customEvent(event);
        } else if (qgenericplugin_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qgenericplugin_customevent_callback(this, cbval1);
        } else {
            QGenericPlugin::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qgenericplugin_connectnotify_isbase) {
            qgenericplugin_connectnotify_isbase = false;
            QGenericPlugin::connectNotify(signal);
        } else if (qgenericplugin_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qgenericplugin_connectnotify_callback(this, cbval1);
        } else {
            QGenericPlugin::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qgenericplugin_disconnectnotify_isbase) {
            qgenericplugin_disconnectnotify_isbase = false;
            QGenericPlugin::disconnectNotify(signal);
        } else if (qgenericplugin_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qgenericplugin_disconnectnotify_callback(this, cbval1);
        } else {
            QGenericPlugin::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qgenericplugin_sender_isbase) {
            qgenericplugin_sender_isbase = false;
            return QGenericPlugin::sender();
        } else if (qgenericplugin_sender_callback != nullptr) {
            QObject* callback_ret = qgenericplugin_sender_callback();
            return callback_ret;
        } else {
            return QGenericPlugin::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qgenericplugin_sendersignalindex_isbase) {
            qgenericplugin_sendersignalindex_isbase = false;
            return QGenericPlugin::senderSignalIndex();
        } else if (qgenericplugin_sendersignalindex_callback != nullptr) {
            int callback_ret = qgenericplugin_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QGenericPlugin::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qgenericplugin_receivers_isbase) {
            qgenericplugin_receivers_isbase = false;
            return QGenericPlugin::receivers(signal);
        } else if (qgenericplugin_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qgenericplugin_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QGenericPlugin::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qgenericplugin_issignalconnected_isbase) {
            qgenericplugin_issignalconnected_isbase = false;
            return QGenericPlugin::isSignalConnected(signal);
        } else if (qgenericplugin_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qgenericplugin_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QGenericPlugin::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void QGenericPlugin_TimerEvent(QGenericPlugin* self, QTimerEvent* event);
    friend void QGenericPlugin_QBaseTimerEvent(QGenericPlugin* self, QTimerEvent* event);
    friend void QGenericPlugin_ChildEvent(QGenericPlugin* self, QChildEvent* event);
    friend void QGenericPlugin_QBaseChildEvent(QGenericPlugin* self, QChildEvent* event);
    friend void QGenericPlugin_CustomEvent(QGenericPlugin* self, QEvent* event);
    friend void QGenericPlugin_QBaseCustomEvent(QGenericPlugin* self, QEvent* event);
    friend void QGenericPlugin_ConnectNotify(QGenericPlugin* self, const QMetaMethod* signal);
    friend void QGenericPlugin_QBaseConnectNotify(QGenericPlugin* self, const QMetaMethod* signal);
    friend void QGenericPlugin_DisconnectNotify(QGenericPlugin* self, const QMetaMethod* signal);
    friend void QGenericPlugin_QBaseDisconnectNotify(QGenericPlugin* self, const QMetaMethod* signal);
    friend QObject* QGenericPlugin_Sender(const QGenericPlugin* self);
    friend QObject* QGenericPlugin_QBaseSender(const QGenericPlugin* self);
    friend int QGenericPlugin_SenderSignalIndex(const QGenericPlugin* self);
    friend int QGenericPlugin_QBaseSenderSignalIndex(const QGenericPlugin* self);
    friend int QGenericPlugin_Receivers(const QGenericPlugin* self, const char* signal);
    friend int QGenericPlugin_QBaseReceivers(const QGenericPlugin* self, const char* signal);
    friend bool QGenericPlugin_IsSignalConnected(const QGenericPlugin* self, const QMetaMethod* signal);
    friend bool QGenericPlugin_QBaseIsSignalConnected(const QGenericPlugin* self, const QMetaMethod* signal);
};

#endif
