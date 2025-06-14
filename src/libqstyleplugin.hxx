#pragma once
#ifndef SRCC_LIBVIRTUALQSTYLEPLUGIN_H
#define SRCC_LIBVIRTUALQSTYLEPLUGIN_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QStylePlugin so that we can call protected methods
class VirtualQStylePlugin final : public QStylePlugin {

  public:
    // Virtual class boolean flag
    bool isVirtualQStylePlugin = true;

    // Virtual class public types (including callbacks)
    using QStylePlugin_Metacall_Callback = int (*)(QStylePlugin*, int, int, void**);
    using QStylePlugin_Create_Callback = QStyle* (*)(QStylePlugin*, libqt_string);
    using QStylePlugin_Event_Callback = bool (*)(QStylePlugin*, QEvent*);
    using QStylePlugin_EventFilter_Callback = bool (*)(QStylePlugin*, QObject*, QEvent*);
    using QStylePlugin_TimerEvent_Callback = void (*)(QStylePlugin*, QTimerEvent*);
    using QStylePlugin_ChildEvent_Callback = void (*)(QStylePlugin*, QChildEvent*);
    using QStylePlugin_CustomEvent_Callback = void (*)(QStylePlugin*, QEvent*);
    using QStylePlugin_ConnectNotify_Callback = void (*)(QStylePlugin*, QMetaMethod*);
    using QStylePlugin_DisconnectNotify_Callback = void (*)(QStylePlugin*, QMetaMethod*);
    using QStylePlugin_Sender_Callback = QObject* (*)();
    using QStylePlugin_SenderSignalIndex_Callback = int (*)();
    using QStylePlugin_Receivers_Callback = int (*)(const QStylePlugin*, const char*);
    using QStylePlugin_IsSignalConnected_Callback = bool (*)(const QStylePlugin*, QMetaMethod*);

  protected:
    // Instance callback storage
    QStylePlugin_Metacall_Callback qstyleplugin_metacall_callback = nullptr;
    QStylePlugin_Create_Callback qstyleplugin_create_callback = nullptr;
    QStylePlugin_Event_Callback qstyleplugin_event_callback = nullptr;
    QStylePlugin_EventFilter_Callback qstyleplugin_eventfilter_callback = nullptr;
    QStylePlugin_TimerEvent_Callback qstyleplugin_timerevent_callback = nullptr;
    QStylePlugin_ChildEvent_Callback qstyleplugin_childevent_callback = nullptr;
    QStylePlugin_CustomEvent_Callback qstyleplugin_customevent_callback = nullptr;
    QStylePlugin_ConnectNotify_Callback qstyleplugin_connectnotify_callback = nullptr;
    QStylePlugin_DisconnectNotify_Callback qstyleplugin_disconnectnotify_callback = nullptr;
    QStylePlugin_Sender_Callback qstyleplugin_sender_callback = nullptr;
    QStylePlugin_SenderSignalIndex_Callback qstyleplugin_sendersignalindex_callback = nullptr;
    QStylePlugin_Receivers_Callback qstyleplugin_receivers_callback = nullptr;
    QStylePlugin_IsSignalConnected_Callback qstyleplugin_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qstyleplugin_metacall_isbase = false;
    mutable bool qstyleplugin_create_isbase = false;
    mutable bool qstyleplugin_event_isbase = false;
    mutable bool qstyleplugin_eventfilter_isbase = false;
    mutable bool qstyleplugin_timerevent_isbase = false;
    mutable bool qstyleplugin_childevent_isbase = false;
    mutable bool qstyleplugin_customevent_isbase = false;
    mutable bool qstyleplugin_connectnotify_isbase = false;
    mutable bool qstyleplugin_disconnectnotify_isbase = false;
    mutable bool qstyleplugin_sender_isbase = false;
    mutable bool qstyleplugin_sendersignalindex_isbase = false;
    mutable bool qstyleplugin_receivers_isbase = false;
    mutable bool qstyleplugin_issignalconnected_isbase = false;

  public:
    VirtualQStylePlugin() : QStylePlugin(){};
    VirtualQStylePlugin(QObject* parent) : QStylePlugin(parent){};

    ~VirtualQStylePlugin() {
        qstyleplugin_metacall_callback = nullptr;
        qstyleplugin_create_callback = nullptr;
        qstyleplugin_event_callback = nullptr;
        qstyleplugin_eventfilter_callback = nullptr;
        qstyleplugin_timerevent_callback = nullptr;
        qstyleplugin_childevent_callback = nullptr;
        qstyleplugin_customevent_callback = nullptr;
        qstyleplugin_connectnotify_callback = nullptr;
        qstyleplugin_disconnectnotify_callback = nullptr;
        qstyleplugin_sender_callback = nullptr;
        qstyleplugin_sendersignalindex_callback = nullptr;
        qstyleplugin_receivers_callback = nullptr;
        qstyleplugin_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setQStylePlugin_Metacall_Callback(QStylePlugin_Metacall_Callback cb) { qstyleplugin_metacall_callback = cb; }
    inline void setQStylePlugin_Create_Callback(QStylePlugin_Create_Callback cb) { qstyleplugin_create_callback = cb; }
    inline void setQStylePlugin_Event_Callback(QStylePlugin_Event_Callback cb) { qstyleplugin_event_callback = cb; }
    inline void setQStylePlugin_EventFilter_Callback(QStylePlugin_EventFilter_Callback cb) { qstyleplugin_eventfilter_callback = cb; }
    inline void setQStylePlugin_TimerEvent_Callback(QStylePlugin_TimerEvent_Callback cb) { qstyleplugin_timerevent_callback = cb; }
    inline void setQStylePlugin_ChildEvent_Callback(QStylePlugin_ChildEvent_Callback cb) { qstyleplugin_childevent_callback = cb; }
    inline void setQStylePlugin_CustomEvent_Callback(QStylePlugin_CustomEvent_Callback cb) { qstyleplugin_customevent_callback = cb; }
    inline void setQStylePlugin_ConnectNotify_Callback(QStylePlugin_ConnectNotify_Callback cb) { qstyleplugin_connectnotify_callback = cb; }
    inline void setQStylePlugin_DisconnectNotify_Callback(QStylePlugin_DisconnectNotify_Callback cb) { qstyleplugin_disconnectnotify_callback = cb; }
    inline void setQStylePlugin_Sender_Callback(QStylePlugin_Sender_Callback cb) { qstyleplugin_sender_callback = cb; }
    inline void setQStylePlugin_SenderSignalIndex_Callback(QStylePlugin_SenderSignalIndex_Callback cb) { qstyleplugin_sendersignalindex_callback = cb; }
    inline void setQStylePlugin_Receivers_Callback(QStylePlugin_Receivers_Callback cb) { qstyleplugin_receivers_callback = cb; }
    inline void setQStylePlugin_IsSignalConnected_Callback(QStylePlugin_IsSignalConnected_Callback cb) { qstyleplugin_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQStylePlugin_Metacall_IsBase(bool value) const { qstyleplugin_metacall_isbase = value; }
    inline void setQStylePlugin_Create_IsBase(bool value) const { qstyleplugin_create_isbase = value; }
    inline void setQStylePlugin_Event_IsBase(bool value) const { qstyleplugin_event_isbase = value; }
    inline void setQStylePlugin_EventFilter_IsBase(bool value) const { qstyleplugin_eventfilter_isbase = value; }
    inline void setQStylePlugin_TimerEvent_IsBase(bool value) const { qstyleplugin_timerevent_isbase = value; }
    inline void setQStylePlugin_ChildEvent_IsBase(bool value) const { qstyleplugin_childevent_isbase = value; }
    inline void setQStylePlugin_CustomEvent_IsBase(bool value) const { qstyleplugin_customevent_isbase = value; }
    inline void setQStylePlugin_ConnectNotify_IsBase(bool value) const { qstyleplugin_connectnotify_isbase = value; }
    inline void setQStylePlugin_DisconnectNotify_IsBase(bool value) const { qstyleplugin_disconnectnotify_isbase = value; }
    inline void setQStylePlugin_Sender_IsBase(bool value) const { qstyleplugin_sender_isbase = value; }
    inline void setQStylePlugin_SenderSignalIndex_IsBase(bool value) const { qstyleplugin_sendersignalindex_isbase = value; }
    inline void setQStylePlugin_Receivers_IsBase(bool value) const { qstyleplugin_receivers_isbase = value; }
    inline void setQStylePlugin_IsSignalConnected_IsBase(bool value) const { qstyleplugin_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qstyleplugin_metacall_isbase) {
            qstyleplugin_metacall_isbase = false;
            return QStylePlugin::qt_metacall(param1, param2, param3);
        } else if (qstyleplugin_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qstyleplugin_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QStylePlugin::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QStyle* create(const QString& key) override {
        if (qstyleplugin_create_callback != nullptr) {
            const QString key_ret = key;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray key_b = key_ret.toUtf8();
            libqt_string key_str;
            key_str.len = key_b.length();
            key_str.data = static_cast<const char*>(malloc((key_str.len + 1) * sizeof(char)));
            memcpy((void*)key_str.data, key_b.data(), key_str.len);
            ((char*)key_str.data)[key_str.len] = '\0';
            libqt_string cbval1 = key_str;

            QStyle* callback_ret = qstyleplugin_create_callback(this, cbval1);
            return callback_ret;
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qstyleplugin_event_isbase) {
            qstyleplugin_event_isbase = false;
            return QStylePlugin::event(event);
        } else if (qstyleplugin_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qstyleplugin_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QStylePlugin::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qstyleplugin_eventfilter_isbase) {
            qstyleplugin_eventfilter_isbase = false;
            return QStylePlugin::eventFilter(watched, event);
        } else if (qstyleplugin_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qstyleplugin_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QStylePlugin::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qstyleplugin_timerevent_isbase) {
            qstyleplugin_timerevent_isbase = false;
            QStylePlugin::timerEvent(event);
        } else if (qstyleplugin_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qstyleplugin_timerevent_callback(this, cbval1);
        } else {
            QStylePlugin::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qstyleplugin_childevent_isbase) {
            qstyleplugin_childevent_isbase = false;
            QStylePlugin::childEvent(event);
        } else if (qstyleplugin_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qstyleplugin_childevent_callback(this, cbval1);
        } else {
            QStylePlugin::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qstyleplugin_customevent_isbase) {
            qstyleplugin_customevent_isbase = false;
            QStylePlugin::customEvent(event);
        } else if (qstyleplugin_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qstyleplugin_customevent_callback(this, cbval1);
        } else {
            QStylePlugin::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qstyleplugin_connectnotify_isbase) {
            qstyleplugin_connectnotify_isbase = false;
            QStylePlugin::connectNotify(signal);
        } else if (qstyleplugin_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qstyleplugin_connectnotify_callback(this, cbval1);
        } else {
            QStylePlugin::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qstyleplugin_disconnectnotify_isbase) {
            qstyleplugin_disconnectnotify_isbase = false;
            QStylePlugin::disconnectNotify(signal);
        } else if (qstyleplugin_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qstyleplugin_disconnectnotify_callback(this, cbval1);
        } else {
            QStylePlugin::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qstyleplugin_sender_isbase) {
            qstyleplugin_sender_isbase = false;
            return QStylePlugin::sender();
        } else if (qstyleplugin_sender_callback != nullptr) {
            QObject* callback_ret = qstyleplugin_sender_callback();
            return callback_ret;
        } else {
            return QStylePlugin::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qstyleplugin_sendersignalindex_isbase) {
            qstyleplugin_sendersignalindex_isbase = false;
            return QStylePlugin::senderSignalIndex();
        } else if (qstyleplugin_sendersignalindex_callback != nullptr) {
            int callback_ret = qstyleplugin_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QStylePlugin::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qstyleplugin_receivers_isbase) {
            qstyleplugin_receivers_isbase = false;
            return QStylePlugin::receivers(signal);
        } else if (qstyleplugin_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qstyleplugin_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QStylePlugin::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qstyleplugin_issignalconnected_isbase) {
            qstyleplugin_issignalconnected_isbase = false;
            return QStylePlugin::isSignalConnected(signal);
        } else if (qstyleplugin_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qstyleplugin_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QStylePlugin::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void QStylePlugin_TimerEvent(QStylePlugin* self, QTimerEvent* event);
    friend void QStylePlugin_QBaseTimerEvent(QStylePlugin* self, QTimerEvent* event);
    friend void QStylePlugin_ChildEvent(QStylePlugin* self, QChildEvent* event);
    friend void QStylePlugin_QBaseChildEvent(QStylePlugin* self, QChildEvent* event);
    friend void QStylePlugin_CustomEvent(QStylePlugin* self, QEvent* event);
    friend void QStylePlugin_QBaseCustomEvent(QStylePlugin* self, QEvent* event);
    friend void QStylePlugin_ConnectNotify(QStylePlugin* self, const QMetaMethod* signal);
    friend void QStylePlugin_QBaseConnectNotify(QStylePlugin* self, const QMetaMethod* signal);
    friend void QStylePlugin_DisconnectNotify(QStylePlugin* self, const QMetaMethod* signal);
    friend void QStylePlugin_QBaseDisconnectNotify(QStylePlugin* self, const QMetaMethod* signal);
    friend QObject* QStylePlugin_Sender(const QStylePlugin* self);
    friend QObject* QStylePlugin_QBaseSender(const QStylePlugin* self);
    friend int QStylePlugin_SenderSignalIndex(const QStylePlugin* self);
    friend int QStylePlugin_QBaseSenderSignalIndex(const QStylePlugin* self);
    friend int QStylePlugin_Receivers(const QStylePlugin* self, const char* signal);
    friend int QStylePlugin_QBaseReceivers(const QStylePlugin* self, const char* signal);
    friend bool QStylePlugin_IsSignalConnected(const QStylePlugin* self, const QMetaMethod* signal);
    friend bool QStylePlugin_QBaseIsSignalConnected(const QStylePlugin* self, const QMetaMethod* signal);
};

#endif
