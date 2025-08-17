#pragma once
#ifndef SRCC_LIBVIRTUALQPLUGINLOADER_H
#define SRCC_LIBVIRTUALQPLUGINLOADER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QPluginLoader so that we can call protected methods
class VirtualQPluginLoader final : public QPluginLoader {

  public:
    // Virtual class boolean flag
    bool isVirtualQPluginLoader = true;

    // Virtual class public types (including callbacks)
    using QPluginLoader_Metacall_Callback = int (*)(QPluginLoader*, int, int, void**);
    using QPluginLoader_Event_Callback = bool (*)(QPluginLoader*, QEvent*);
    using QPluginLoader_EventFilter_Callback = bool (*)(QPluginLoader*, QObject*, QEvent*);
    using QPluginLoader_TimerEvent_Callback = void (*)(QPluginLoader*, QTimerEvent*);
    using QPluginLoader_ChildEvent_Callback = void (*)(QPluginLoader*, QChildEvent*);
    using QPluginLoader_CustomEvent_Callback = void (*)(QPluginLoader*, QEvent*);
    using QPluginLoader_ConnectNotify_Callback = void (*)(QPluginLoader*, QMetaMethod*);
    using QPluginLoader_DisconnectNotify_Callback = void (*)(QPluginLoader*, QMetaMethod*);
    using QPluginLoader_Sender_Callback = QObject* (*)();
    using QPluginLoader_SenderSignalIndex_Callback = int (*)();
    using QPluginLoader_Receivers_Callback = int (*)(const QPluginLoader*, const char*);
    using QPluginLoader_IsSignalConnected_Callback = bool (*)(const QPluginLoader*, QMetaMethod*);

  protected:
    // Instance callback storage
    QPluginLoader_Metacall_Callback qpluginloader_metacall_callback = nullptr;
    QPluginLoader_Event_Callback qpluginloader_event_callback = nullptr;
    QPluginLoader_EventFilter_Callback qpluginloader_eventfilter_callback = nullptr;
    QPluginLoader_TimerEvent_Callback qpluginloader_timerevent_callback = nullptr;
    QPluginLoader_ChildEvent_Callback qpluginloader_childevent_callback = nullptr;
    QPluginLoader_CustomEvent_Callback qpluginloader_customevent_callback = nullptr;
    QPluginLoader_ConnectNotify_Callback qpluginloader_connectnotify_callback = nullptr;
    QPluginLoader_DisconnectNotify_Callback qpluginloader_disconnectnotify_callback = nullptr;
    QPluginLoader_Sender_Callback qpluginloader_sender_callback = nullptr;
    QPluginLoader_SenderSignalIndex_Callback qpluginloader_sendersignalindex_callback = nullptr;
    QPluginLoader_Receivers_Callback qpluginloader_receivers_callback = nullptr;
    QPluginLoader_IsSignalConnected_Callback qpluginloader_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qpluginloader_metacall_isbase = false;
    mutable bool qpluginloader_event_isbase = false;
    mutable bool qpluginloader_eventfilter_isbase = false;
    mutable bool qpluginloader_timerevent_isbase = false;
    mutable bool qpluginloader_childevent_isbase = false;
    mutable bool qpluginloader_customevent_isbase = false;
    mutable bool qpluginloader_connectnotify_isbase = false;
    mutable bool qpluginloader_disconnectnotify_isbase = false;
    mutable bool qpluginloader_sender_isbase = false;
    mutable bool qpluginloader_sendersignalindex_isbase = false;
    mutable bool qpluginloader_receivers_isbase = false;
    mutable bool qpluginloader_issignalconnected_isbase = false;

  public:
    VirtualQPluginLoader() : QPluginLoader() {};
    VirtualQPluginLoader(const QString& fileName) : QPluginLoader(fileName) {};
    VirtualQPluginLoader(QObject* parent) : QPluginLoader(parent) {};
    VirtualQPluginLoader(const QString& fileName, QObject* parent) : QPluginLoader(fileName, parent) {};

    ~VirtualQPluginLoader() {
        qpluginloader_metacall_callback = nullptr;
        qpluginloader_event_callback = nullptr;
        qpluginloader_eventfilter_callback = nullptr;
        qpluginloader_timerevent_callback = nullptr;
        qpluginloader_childevent_callback = nullptr;
        qpluginloader_customevent_callback = nullptr;
        qpluginloader_connectnotify_callback = nullptr;
        qpluginloader_disconnectnotify_callback = nullptr;
        qpluginloader_sender_callback = nullptr;
        qpluginloader_sendersignalindex_callback = nullptr;
        qpluginloader_receivers_callback = nullptr;
        qpluginloader_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setQPluginLoader_Metacall_Callback(QPluginLoader_Metacall_Callback cb) { qpluginloader_metacall_callback = cb; }
    inline void setQPluginLoader_Event_Callback(QPluginLoader_Event_Callback cb) { qpluginloader_event_callback = cb; }
    inline void setQPluginLoader_EventFilter_Callback(QPluginLoader_EventFilter_Callback cb) { qpluginloader_eventfilter_callback = cb; }
    inline void setQPluginLoader_TimerEvent_Callback(QPluginLoader_TimerEvent_Callback cb) { qpluginloader_timerevent_callback = cb; }
    inline void setQPluginLoader_ChildEvent_Callback(QPluginLoader_ChildEvent_Callback cb) { qpluginloader_childevent_callback = cb; }
    inline void setQPluginLoader_CustomEvent_Callback(QPluginLoader_CustomEvent_Callback cb) { qpluginloader_customevent_callback = cb; }
    inline void setQPluginLoader_ConnectNotify_Callback(QPluginLoader_ConnectNotify_Callback cb) { qpluginloader_connectnotify_callback = cb; }
    inline void setQPluginLoader_DisconnectNotify_Callback(QPluginLoader_DisconnectNotify_Callback cb) { qpluginloader_disconnectnotify_callback = cb; }
    inline void setQPluginLoader_Sender_Callback(QPluginLoader_Sender_Callback cb) { qpluginloader_sender_callback = cb; }
    inline void setQPluginLoader_SenderSignalIndex_Callback(QPluginLoader_SenderSignalIndex_Callback cb) { qpluginloader_sendersignalindex_callback = cb; }
    inline void setQPluginLoader_Receivers_Callback(QPluginLoader_Receivers_Callback cb) { qpluginloader_receivers_callback = cb; }
    inline void setQPluginLoader_IsSignalConnected_Callback(QPluginLoader_IsSignalConnected_Callback cb) { qpluginloader_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQPluginLoader_Metacall_IsBase(bool value) const { qpluginloader_metacall_isbase = value; }
    inline void setQPluginLoader_Event_IsBase(bool value) const { qpluginloader_event_isbase = value; }
    inline void setQPluginLoader_EventFilter_IsBase(bool value) const { qpluginloader_eventfilter_isbase = value; }
    inline void setQPluginLoader_TimerEvent_IsBase(bool value) const { qpluginloader_timerevent_isbase = value; }
    inline void setQPluginLoader_ChildEvent_IsBase(bool value) const { qpluginloader_childevent_isbase = value; }
    inline void setQPluginLoader_CustomEvent_IsBase(bool value) const { qpluginloader_customevent_isbase = value; }
    inline void setQPluginLoader_ConnectNotify_IsBase(bool value) const { qpluginloader_connectnotify_isbase = value; }
    inline void setQPluginLoader_DisconnectNotify_IsBase(bool value) const { qpluginloader_disconnectnotify_isbase = value; }
    inline void setQPluginLoader_Sender_IsBase(bool value) const { qpluginloader_sender_isbase = value; }
    inline void setQPluginLoader_SenderSignalIndex_IsBase(bool value) const { qpluginloader_sendersignalindex_isbase = value; }
    inline void setQPluginLoader_Receivers_IsBase(bool value) const { qpluginloader_receivers_isbase = value; }
    inline void setQPluginLoader_IsSignalConnected_IsBase(bool value) const { qpluginloader_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qpluginloader_metacall_isbase) {
            qpluginloader_metacall_isbase = false;
            return QPluginLoader::qt_metacall(param1, param2, param3);
        } else if (qpluginloader_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qpluginloader_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QPluginLoader::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qpluginloader_event_isbase) {
            qpluginloader_event_isbase = false;
            return QPluginLoader::event(event);
        } else if (qpluginloader_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qpluginloader_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QPluginLoader::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qpluginloader_eventfilter_isbase) {
            qpluginloader_eventfilter_isbase = false;
            return QPluginLoader::eventFilter(watched, event);
        } else if (qpluginloader_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qpluginloader_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QPluginLoader::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qpluginloader_timerevent_isbase) {
            qpluginloader_timerevent_isbase = false;
            QPluginLoader::timerEvent(event);
        } else if (qpluginloader_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qpluginloader_timerevent_callback(this, cbval1);
        } else {
            QPluginLoader::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qpluginloader_childevent_isbase) {
            qpluginloader_childevent_isbase = false;
            QPluginLoader::childEvent(event);
        } else if (qpluginloader_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qpluginloader_childevent_callback(this, cbval1);
        } else {
            QPluginLoader::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qpluginloader_customevent_isbase) {
            qpluginloader_customevent_isbase = false;
            QPluginLoader::customEvent(event);
        } else if (qpluginloader_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qpluginloader_customevent_callback(this, cbval1);
        } else {
            QPluginLoader::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qpluginloader_connectnotify_isbase) {
            qpluginloader_connectnotify_isbase = false;
            QPluginLoader::connectNotify(signal);
        } else if (qpluginloader_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qpluginloader_connectnotify_callback(this, cbval1);
        } else {
            QPluginLoader::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qpluginloader_disconnectnotify_isbase) {
            qpluginloader_disconnectnotify_isbase = false;
            QPluginLoader::disconnectNotify(signal);
        } else if (qpluginloader_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qpluginloader_disconnectnotify_callback(this, cbval1);
        } else {
            QPluginLoader::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qpluginloader_sender_isbase) {
            qpluginloader_sender_isbase = false;
            return QPluginLoader::sender();
        } else if (qpluginloader_sender_callback != nullptr) {
            QObject* callback_ret = qpluginloader_sender_callback();
            return callback_ret;
        } else {
            return QPluginLoader::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qpluginloader_sendersignalindex_isbase) {
            qpluginloader_sendersignalindex_isbase = false;
            return QPluginLoader::senderSignalIndex();
        } else if (qpluginloader_sendersignalindex_callback != nullptr) {
            int callback_ret = qpluginloader_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QPluginLoader::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qpluginloader_receivers_isbase) {
            qpluginloader_receivers_isbase = false;
            return QPluginLoader::receivers(signal);
        } else if (qpluginloader_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qpluginloader_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QPluginLoader::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qpluginloader_issignalconnected_isbase) {
            qpluginloader_issignalconnected_isbase = false;
            return QPluginLoader::isSignalConnected(signal);
        } else if (qpluginloader_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qpluginloader_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QPluginLoader::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void QPluginLoader_TimerEvent(QPluginLoader* self, QTimerEvent* event);
    friend void QPluginLoader_QBaseTimerEvent(QPluginLoader* self, QTimerEvent* event);
    friend void QPluginLoader_ChildEvent(QPluginLoader* self, QChildEvent* event);
    friend void QPluginLoader_QBaseChildEvent(QPluginLoader* self, QChildEvent* event);
    friend void QPluginLoader_CustomEvent(QPluginLoader* self, QEvent* event);
    friend void QPluginLoader_QBaseCustomEvent(QPluginLoader* self, QEvent* event);
    friend void QPluginLoader_ConnectNotify(QPluginLoader* self, const QMetaMethod* signal);
    friend void QPluginLoader_QBaseConnectNotify(QPluginLoader* self, const QMetaMethod* signal);
    friend void QPluginLoader_DisconnectNotify(QPluginLoader* self, const QMetaMethod* signal);
    friend void QPluginLoader_QBaseDisconnectNotify(QPluginLoader* self, const QMetaMethod* signal);
    friend QObject* QPluginLoader_Sender(const QPluginLoader* self);
    friend QObject* QPluginLoader_QBaseSender(const QPluginLoader* self);
    friend int QPluginLoader_SenderSignalIndex(const QPluginLoader* self);
    friend int QPluginLoader_QBaseSenderSignalIndex(const QPluginLoader* self);
    friend int QPluginLoader_Receivers(const QPluginLoader* self, const char* signal);
    friend int QPluginLoader_QBaseReceivers(const QPluginLoader* self, const char* signal);
    friend bool QPluginLoader_IsSignalConnected(const QPluginLoader* self, const QMetaMethod* signal);
    friend bool QPluginLoader_QBaseIsSignalConnected(const QPluginLoader* self, const QMetaMethod* signal);
};

#endif
