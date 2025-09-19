#pragma once
#ifndef SRC_SQLC_LIBVIRTUALQSQLDRIVERPLUGIN_H
#define SRC_SQLC_LIBVIRTUALQSQLDRIVERPLUGIN_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QSqlDriverPlugin so that we can call protected methods
class VirtualQSqlDriverPlugin : public QSqlDriverPlugin {

  public:
    // Virtual class boolean flag
    bool isVirtualQSqlDriverPlugin = true;

    // Virtual class public types (including callbacks)
    using QSqlDriverPlugin_Metacall_Callback = int (*)(QSqlDriverPlugin*, int, int, void**);
    using QSqlDriverPlugin_Create_Callback = QSqlDriver* (*)(QSqlDriverPlugin*, libqt_string);
    using QSqlDriverPlugin_Event_Callback = bool (*)(QSqlDriverPlugin*, QEvent*);
    using QSqlDriverPlugin_EventFilter_Callback = bool (*)(QSqlDriverPlugin*, QObject*, QEvent*);
    using QSqlDriverPlugin_TimerEvent_Callback = void (*)(QSqlDriverPlugin*, QTimerEvent*);
    using QSqlDriverPlugin_ChildEvent_Callback = void (*)(QSqlDriverPlugin*, QChildEvent*);
    using QSqlDriverPlugin_CustomEvent_Callback = void (*)(QSqlDriverPlugin*, QEvent*);
    using QSqlDriverPlugin_ConnectNotify_Callback = void (*)(QSqlDriverPlugin*, QMetaMethod*);
    using QSqlDriverPlugin_DisconnectNotify_Callback = void (*)(QSqlDriverPlugin*, QMetaMethod*);
    using QSqlDriverPlugin_Sender_Callback = QObject* (*)();
    using QSqlDriverPlugin_SenderSignalIndex_Callback = int (*)();
    using QSqlDriverPlugin_Receivers_Callback = int (*)(const QSqlDriverPlugin*, const char*);
    using QSqlDriverPlugin_IsSignalConnected_Callback = bool (*)(const QSqlDriverPlugin*, QMetaMethod*);

  protected:
    // Instance callback storage
    QSqlDriverPlugin_Metacall_Callback qsqldriverplugin_metacall_callback = nullptr;
    QSqlDriverPlugin_Create_Callback qsqldriverplugin_create_callback = nullptr;
    QSqlDriverPlugin_Event_Callback qsqldriverplugin_event_callback = nullptr;
    QSqlDriverPlugin_EventFilter_Callback qsqldriverplugin_eventfilter_callback = nullptr;
    QSqlDriverPlugin_TimerEvent_Callback qsqldriverplugin_timerevent_callback = nullptr;
    QSqlDriverPlugin_ChildEvent_Callback qsqldriverplugin_childevent_callback = nullptr;
    QSqlDriverPlugin_CustomEvent_Callback qsqldriverplugin_customevent_callback = nullptr;
    QSqlDriverPlugin_ConnectNotify_Callback qsqldriverplugin_connectnotify_callback = nullptr;
    QSqlDriverPlugin_DisconnectNotify_Callback qsqldriverplugin_disconnectnotify_callback = nullptr;
    QSqlDriverPlugin_Sender_Callback qsqldriverplugin_sender_callback = nullptr;
    QSqlDriverPlugin_SenderSignalIndex_Callback qsqldriverplugin_sendersignalindex_callback = nullptr;
    QSqlDriverPlugin_Receivers_Callback qsqldriverplugin_receivers_callback = nullptr;
    QSqlDriverPlugin_IsSignalConnected_Callback qsqldriverplugin_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qsqldriverplugin_metacall_isbase = false;
    mutable bool qsqldriverplugin_create_isbase = false;
    mutable bool qsqldriverplugin_event_isbase = false;
    mutable bool qsqldriverplugin_eventfilter_isbase = false;
    mutable bool qsqldriverplugin_timerevent_isbase = false;
    mutable bool qsqldriverplugin_childevent_isbase = false;
    mutable bool qsqldriverplugin_customevent_isbase = false;
    mutable bool qsqldriverplugin_connectnotify_isbase = false;
    mutable bool qsqldriverplugin_disconnectnotify_isbase = false;
    mutable bool qsqldriverplugin_sender_isbase = false;
    mutable bool qsqldriverplugin_sendersignalindex_isbase = false;
    mutable bool qsqldriverplugin_receivers_isbase = false;
    mutable bool qsqldriverplugin_issignalconnected_isbase = false;

  public:
    VirtualQSqlDriverPlugin() : QSqlDriverPlugin() {};
    VirtualQSqlDriverPlugin(QObject* parent) : QSqlDriverPlugin(parent) {};

    ~VirtualQSqlDriverPlugin() {
        qsqldriverplugin_metacall_callback = nullptr;
        qsqldriverplugin_create_callback = nullptr;
        qsqldriverplugin_event_callback = nullptr;
        qsqldriverplugin_eventfilter_callback = nullptr;
        qsqldriverplugin_timerevent_callback = nullptr;
        qsqldriverplugin_childevent_callback = nullptr;
        qsqldriverplugin_customevent_callback = nullptr;
        qsqldriverplugin_connectnotify_callback = nullptr;
        qsqldriverplugin_disconnectnotify_callback = nullptr;
        qsqldriverplugin_sender_callback = nullptr;
        qsqldriverplugin_sendersignalindex_callback = nullptr;
        qsqldriverplugin_receivers_callback = nullptr;
        qsqldriverplugin_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setQSqlDriverPlugin_Metacall_Callback(QSqlDriverPlugin_Metacall_Callback cb) { qsqldriverplugin_metacall_callback = cb; }
    inline void setQSqlDriverPlugin_Create_Callback(QSqlDriverPlugin_Create_Callback cb) { qsqldriverplugin_create_callback = cb; }
    inline void setQSqlDriverPlugin_Event_Callback(QSqlDriverPlugin_Event_Callback cb) { qsqldriverplugin_event_callback = cb; }
    inline void setQSqlDriverPlugin_EventFilter_Callback(QSqlDriverPlugin_EventFilter_Callback cb) { qsqldriverplugin_eventfilter_callback = cb; }
    inline void setQSqlDriverPlugin_TimerEvent_Callback(QSqlDriverPlugin_TimerEvent_Callback cb) { qsqldriverplugin_timerevent_callback = cb; }
    inline void setQSqlDriverPlugin_ChildEvent_Callback(QSqlDriverPlugin_ChildEvent_Callback cb) { qsqldriverplugin_childevent_callback = cb; }
    inline void setQSqlDriverPlugin_CustomEvent_Callback(QSqlDriverPlugin_CustomEvent_Callback cb) { qsqldriverplugin_customevent_callback = cb; }
    inline void setQSqlDriverPlugin_ConnectNotify_Callback(QSqlDriverPlugin_ConnectNotify_Callback cb) { qsqldriverplugin_connectnotify_callback = cb; }
    inline void setQSqlDriverPlugin_DisconnectNotify_Callback(QSqlDriverPlugin_DisconnectNotify_Callback cb) { qsqldriverplugin_disconnectnotify_callback = cb; }
    inline void setQSqlDriverPlugin_Sender_Callback(QSqlDriverPlugin_Sender_Callback cb) { qsqldriverplugin_sender_callback = cb; }
    inline void setQSqlDriverPlugin_SenderSignalIndex_Callback(QSqlDriverPlugin_SenderSignalIndex_Callback cb) { qsqldriverplugin_sendersignalindex_callback = cb; }
    inline void setQSqlDriverPlugin_Receivers_Callback(QSqlDriverPlugin_Receivers_Callback cb) { qsqldriverplugin_receivers_callback = cb; }
    inline void setQSqlDriverPlugin_IsSignalConnected_Callback(QSqlDriverPlugin_IsSignalConnected_Callback cb) { qsqldriverplugin_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQSqlDriverPlugin_Metacall_IsBase(bool value) const { qsqldriverplugin_metacall_isbase = value; }
    inline void setQSqlDriverPlugin_Create_IsBase(bool value) const { qsqldriverplugin_create_isbase = value; }
    inline void setQSqlDriverPlugin_Event_IsBase(bool value) const { qsqldriverplugin_event_isbase = value; }
    inline void setQSqlDriverPlugin_EventFilter_IsBase(bool value) const { qsqldriverplugin_eventfilter_isbase = value; }
    inline void setQSqlDriverPlugin_TimerEvent_IsBase(bool value) const { qsqldriverplugin_timerevent_isbase = value; }
    inline void setQSqlDriverPlugin_ChildEvent_IsBase(bool value) const { qsqldriverplugin_childevent_isbase = value; }
    inline void setQSqlDriverPlugin_CustomEvent_IsBase(bool value) const { qsqldriverplugin_customevent_isbase = value; }
    inline void setQSqlDriverPlugin_ConnectNotify_IsBase(bool value) const { qsqldriverplugin_connectnotify_isbase = value; }
    inline void setQSqlDriverPlugin_DisconnectNotify_IsBase(bool value) const { qsqldriverplugin_disconnectnotify_isbase = value; }
    inline void setQSqlDriverPlugin_Sender_IsBase(bool value) const { qsqldriverplugin_sender_isbase = value; }
    inline void setQSqlDriverPlugin_SenderSignalIndex_IsBase(bool value) const { qsqldriverplugin_sendersignalindex_isbase = value; }
    inline void setQSqlDriverPlugin_Receivers_IsBase(bool value) const { qsqldriverplugin_receivers_isbase = value; }
    inline void setQSqlDriverPlugin_IsSignalConnected_IsBase(bool value) const { qsqldriverplugin_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qsqldriverplugin_metacall_isbase) {
            qsqldriverplugin_metacall_isbase = false;
            return QSqlDriverPlugin::qt_metacall(param1, param2, param3);
        } else if (qsqldriverplugin_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qsqldriverplugin_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QSqlDriverPlugin::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSqlDriver* create(const QString& key) override {
        if (qsqldriverplugin_create_callback != nullptr) {
            const QString key_ret = key;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray key_b = key_ret.toUtf8();
            libqt_string key_str;
            key_str.len = key_b.length();
            key_str.data = static_cast<const char*>(malloc(key_str.len + 1));
            memcpy((void*)key_str.data, key_b.data(), key_str.len);
            ((char*)key_str.data)[key_str.len] = '\0';
            libqt_string cbval1 = key_str;

            QSqlDriver* callback_ret = qsqldriverplugin_create_callback(this, cbval1);
            return callback_ret;
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qsqldriverplugin_event_isbase) {
            qsqldriverplugin_event_isbase = false;
            return QSqlDriverPlugin::event(event);
        } else if (qsqldriverplugin_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qsqldriverplugin_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QSqlDriverPlugin::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qsqldriverplugin_eventfilter_isbase) {
            qsqldriverplugin_eventfilter_isbase = false;
            return QSqlDriverPlugin::eventFilter(watched, event);
        } else if (qsqldriverplugin_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qsqldriverplugin_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QSqlDriverPlugin::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qsqldriverplugin_timerevent_isbase) {
            qsqldriverplugin_timerevent_isbase = false;
            QSqlDriverPlugin::timerEvent(event);
        } else if (qsqldriverplugin_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qsqldriverplugin_timerevent_callback(this, cbval1);
        } else {
            QSqlDriverPlugin::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qsqldriverplugin_childevent_isbase) {
            qsqldriverplugin_childevent_isbase = false;
            QSqlDriverPlugin::childEvent(event);
        } else if (qsqldriverplugin_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qsqldriverplugin_childevent_callback(this, cbval1);
        } else {
            QSqlDriverPlugin::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qsqldriverplugin_customevent_isbase) {
            qsqldriverplugin_customevent_isbase = false;
            QSqlDriverPlugin::customEvent(event);
        } else if (qsqldriverplugin_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qsqldriverplugin_customevent_callback(this, cbval1);
        } else {
            QSqlDriverPlugin::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qsqldriverplugin_connectnotify_isbase) {
            qsqldriverplugin_connectnotify_isbase = false;
            QSqlDriverPlugin::connectNotify(signal);
        } else if (qsqldriverplugin_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qsqldriverplugin_connectnotify_callback(this, cbval1);
        } else {
            QSqlDriverPlugin::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qsqldriverplugin_disconnectnotify_isbase) {
            qsqldriverplugin_disconnectnotify_isbase = false;
            QSqlDriverPlugin::disconnectNotify(signal);
        } else if (qsqldriverplugin_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qsqldriverplugin_disconnectnotify_callback(this, cbval1);
        } else {
            QSqlDriverPlugin::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qsqldriverplugin_sender_isbase) {
            qsqldriverplugin_sender_isbase = false;
            return QSqlDriverPlugin::sender();
        } else if (qsqldriverplugin_sender_callback != nullptr) {
            QObject* callback_ret = qsqldriverplugin_sender_callback();
            return callback_ret;
        } else {
            return QSqlDriverPlugin::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qsqldriverplugin_sendersignalindex_isbase) {
            qsqldriverplugin_sendersignalindex_isbase = false;
            return QSqlDriverPlugin::senderSignalIndex();
        } else if (qsqldriverplugin_sendersignalindex_callback != nullptr) {
            int callback_ret = qsqldriverplugin_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QSqlDriverPlugin::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qsqldriverplugin_receivers_isbase) {
            qsqldriverplugin_receivers_isbase = false;
            return QSqlDriverPlugin::receivers(signal);
        } else if (qsqldriverplugin_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qsqldriverplugin_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QSqlDriverPlugin::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qsqldriverplugin_issignalconnected_isbase) {
            qsqldriverplugin_issignalconnected_isbase = false;
            return QSqlDriverPlugin::isSignalConnected(signal);
        } else if (qsqldriverplugin_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qsqldriverplugin_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QSqlDriverPlugin::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void QSqlDriverPlugin_TimerEvent(QSqlDriverPlugin* self, QTimerEvent* event);
    friend void QSqlDriverPlugin_QBaseTimerEvent(QSqlDriverPlugin* self, QTimerEvent* event);
    friend void QSqlDriverPlugin_ChildEvent(QSqlDriverPlugin* self, QChildEvent* event);
    friend void QSqlDriverPlugin_QBaseChildEvent(QSqlDriverPlugin* self, QChildEvent* event);
    friend void QSqlDriverPlugin_CustomEvent(QSqlDriverPlugin* self, QEvent* event);
    friend void QSqlDriverPlugin_QBaseCustomEvent(QSqlDriverPlugin* self, QEvent* event);
    friend void QSqlDriverPlugin_ConnectNotify(QSqlDriverPlugin* self, const QMetaMethod* signal);
    friend void QSqlDriverPlugin_QBaseConnectNotify(QSqlDriverPlugin* self, const QMetaMethod* signal);
    friend void QSqlDriverPlugin_DisconnectNotify(QSqlDriverPlugin* self, const QMetaMethod* signal);
    friend void QSqlDriverPlugin_QBaseDisconnectNotify(QSqlDriverPlugin* self, const QMetaMethod* signal);
    friend QObject* QSqlDriverPlugin_Sender(const QSqlDriverPlugin* self);
    friend QObject* QSqlDriverPlugin_QBaseSender(const QSqlDriverPlugin* self);
    friend int QSqlDriverPlugin_SenderSignalIndex(const QSqlDriverPlugin* self);
    friend int QSqlDriverPlugin_QBaseSenderSignalIndex(const QSqlDriverPlugin* self);
    friend int QSqlDriverPlugin_Receivers(const QSqlDriverPlugin* self, const char* signal);
    friend int QSqlDriverPlugin_QBaseReceivers(const QSqlDriverPlugin* self, const char* signal);
    friend bool QSqlDriverPlugin_IsSignalConnected(const QSqlDriverPlugin* self, const QMetaMethod* signal);
    friend bool QSqlDriverPlugin_QBaseIsSignalConnected(const QSqlDriverPlugin* self, const QMetaMethod* signal);
};

#endif
