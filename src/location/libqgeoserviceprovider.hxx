#pragma once
#ifndef SRC_LOCATIONC_LIBVIRTUALQGEOSERVICEPROVIDER_H
#define SRC_LOCATIONC_LIBVIRTUALQGEOSERVICEPROVIDER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QGeoServiceProvider so that we can call protected methods
class VirtualQGeoServiceProvider final : public QGeoServiceProvider {

  public:
    // Virtual class boolean flag
    bool isVirtualQGeoServiceProvider = true;

    // Virtual class public types (including callbacks)
    using QGeoServiceProvider_Metacall_Callback = int (*)(QGeoServiceProvider*, int, int, void**);
    using QGeoServiceProvider_Event_Callback = bool (*)(QGeoServiceProvider*, QEvent*);
    using QGeoServiceProvider_EventFilter_Callback = bool (*)(QGeoServiceProvider*, QObject*, QEvent*);
    using QGeoServiceProvider_TimerEvent_Callback = void (*)(QGeoServiceProvider*, QTimerEvent*);
    using QGeoServiceProvider_ChildEvent_Callback = void (*)(QGeoServiceProvider*, QChildEvent*);
    using QGeoServiceProvider_CustomEvent_Callback = void (*)(QGeoServiceProvider*, QEvent*);
    using QGeoServiceProvider_ConnectNotify_Callback = void (*)(QGeoServiceProvider*, QMetaMethod*);
    using QGeoServiceProvider_DisconnectNotify_Callback = void (*)(QGeoServiceProvider*, QMetaMethod*);
    using QGeoServiceProvider_Sender_Callback = QObject* (*)();
    using QGeoServiceProvider_SenderSignalIndex_Callback = int (*)();
    using QGeoServiceProvider_Receivers_Callback = int (*)(const QGeoServiceProvider*, const char*);
    using QGeoServiceProvider_IsSignalConnected_Callback = bool (*)(const QGeoServiceProvider*, QMetaMethod*);

  protected:
    // Instance callback storage
    QGeoServiceProvider_Metacall_Callback qgeoserviceprovider_metacall_callback = nullptr;
    QGeoServiceProvider_Event_Callback qgeoserviceprovider_event_callback = nullptr;
    QGeoServiceProvider_EventFilter_Callback qgeoserviceprovider_eventfilter_callback = nullptr;
    QGeoServiceProvider_TimerEvent_Callback qgeoserviceprovider_timerevent_callback = nullptr;
    QGeoServiceProvider_ChildEvent_Callback qgeoserviceprovider_childevent_callback = nullptr;
    QGeoServiceProvider_CustomEvent_Callback qgeoserviceprovider_customevent_callback = nullptr;
    QGeoServiceProvider_ConnectNotify_Callback qgeoserviceprovider_connectnotify_callback = nullptr;
    QGeoServiceProvider_DisconnectNotify_Callback qgeoserviceprovider_disconnectnotify_callback = nullptr;
    QGeoServiceProvider_Sender_Callback qgeoserviceprovider_sender_callback = nullptr;
    QGeoServiceProvider_SenderSignalIndex_Callback qgeoserviceprovider_sendersignalindex_callback = nullptr;
    QGeoServiceProvider_Receivers_Callback qgeoserviceprovider_receivers_callback = nullptr;
    QGeoServiceProvider_IsSignalConnected_Callback qgeoserviceprovider_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qgeoserviceprovider_metacall_isbase = false;
    mutable bool qgeoserviceprovider_event_isbase = false;
    mutable bool qgeoserviceprovider_eventfilter_isbase = false;
    mutable bool qgeoserviceprovider_timerevent_isbase = false;
    mutable bool qgeoserviceprovider_childevent_isbase = false;
    mutable bool qgeoserviceprovider_customevent_isbase = false;
    mutable bool qgeoserviceprovider_connectnotify_isbase = false;
    mutable bool qgeoserviceprovider_disconnectnotify_isbase = false;
    mutable bool qgeoserviceprovider_sender_isbase = false;
    mutable bool qgeoserviceprovider_sendersignalindex_isbase = false;
    mutable bool qgeoserviceprovider_receivers_isbase = false;
    mutable bool qgeoserviceprovider_issignalconnected_isbase = false;

  public:
    VirtualQGeoServiceProvider(const QString& providerName) : QGeoServiceProvider(providerName) {};
    VirtualQGeoServiceProvider(const QString& providerName, const QMap<QString, QVariant>& parameters) : QGeoServiceProvider(providerName, parameters) {};
    VirtualQGeoServiceProvider(const QString& providerName, const QMap<QString, QVariant>& parameters, bool allowExperimental) : QGeoServiceProvider(providerName, parameters, allowExperimental) {};

    ~VirtualQGeoServiceProvider() {
        qgeoserviceprovider_metacall_callback = nullptr;
        qgeoserviceprovider_event_callback = nullptr;
        qgeoserviceprovider_eventfilter_callback = nullptr;
        qgeoserviceprovider_timerevent_callback = nullptr;
        qgeoserviceprovider_childevent_callback = nullptr;
        qgeoserviceprovider_customevent_callback = nullptr;
        qgeoserviceprovider_connectnotify_callback = nullptr;
        qgeoserviceprovider_disconnectnotify_callback = nullptr;
        qgeoserviceprovider_sender_callback = nullptr;
        qgeoserviceprovider_sendersignalindex_callback = nullptr;
        qgeoserviceprovider_receivers_callback = nullptr;
        qgeoserviceprovider_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setQGeoServiceProvider_Metacall_Callback(QGeoServiceProvider_Metacall_Callback cb) { qgeoserviceprovider_metacall_callback = cb; }
    inline void setQGeoServiceProvider_Event_Callback(QGeoServiceProvider_Event_Callback cb) { qgeoserviceprovider_event_callback = cb; }
    inline void setQGeoServiceProvider_EventFilter_Callback(QGeoServiceProvider_EventFilter_Callback cb) { qgeoserviceprovider_eventfilter_callback = cb; }
    inline void setQGeoServiceProvider_TimerEvent_Callback(QGeoServiceProvider_TimerEvent_Callback cb) { qgeoserviceprovider_timerevent_callback = cb; }
    inline void setQGeoServiceProvider_ChildEvent_Callback(QGeoServiceProvider_ChildEvent_Callback cb) { qgeoserviceprovider_childevent_callback = cb; }
    inline void setQGeoServiceProvider_CustomEvent_Callback(QGeoServiceProvider_CustomEvent_Callback cb) { qgeoserviceprovider_customevent_callback = cb; }
    inline void setQGeoServiceProvider_ConnectNotify_Callback(QGeoServiceProvider_ConnectNotify_Callback cb) { qgeoserviceprovider_connectnotify_callback = cb; }
    inline void setQGeoServiceProvider_DisconnectNotify_Callback(QGeoServiceProvider_DisconnectNotify_Callback cb) { qgeoserviceprovider_disconnectnotify_callback = cb; }
    inline void setQGeoServiceProvider_Sender_Callback(QGeoServiceProvider_Sender_Callback cb) { qgeoserviceprovider_sender_callback = cb; }
    inline void setQGeoServiceProvider_SenderSignalIndex_Callback(QGeoServiceProvider_SenderSignalIndex_Callback cb) { qgeoserviceprovider_sendersignalindex_callback = cb; }
    inline void setQGeoServiceProvider_Receivers_Callback(QGeoServiceProvider_Receivers_Callback cb) { qgeoserviceprovider_receivers_callback = cb; }
    inline void setQGeoServiceProvider_IsSignalConnected_Callback(QGeoServiceProvider_IsSignalConnected_Callback cb) { qgeoserviceprovider_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQGeoServiceProvider_Metacall_IsBase(bool value) const { qgeoserviceprovider_metacall_isbase = value; }
    inline void setQGeoServiceProvider_Event_IsBase(bool value) const { qgeoserviceprovider_event_isbase = value; }
    inline void setQGeoServiceProvider_EventFilter_IsBase(bool value) const { qgeoserviceprovider_eventfilter_isbase = value; }
    inline void setQGeoServiceProvider_TimerEvent_IsBase(bool value) const { qgeoserviceprovider_timerevent_isbase = value; }
    inline void setQGeoServiceProvider_ChildEvent_IsBase(bool value) const { qgeoserviceprovider_childevent_isbase = value; }
    inline void setQGeoServiceProvider_CustomEvent_IsBase(bool value) const { qgeoserviceprovider_customevent_isbase = value; }
    inline void setQGeoServiceProvider_ConnectNotify_IsBase(bool value) const { qgeoserviceprovider_connectnotify_isbase = value; }
    inline void setQGeoServiceProvider_DisconnectNotify_IsBase(bool value) const { qgeoserviceprovider_disconnectnotify_isbase = value; }
    inline void setQGeoServiceProvider_Sender_IsBase(bool value) const { qgeoserviceprovider_sender_isbase = value; }
    inline void setQGeoServiceProvider_SenderSignalIndex_IsBase(bool value) const { qgeoserviceprovider_sendersignalindex_isbase = value; }
    inline void setQGeoServiceProvider_Receivers_IsBase(bool value) const { qgeoserviceprovider_receivers_isbase = value; }
    inline void setQGeoServiceProvider_IsSignalConnected_IsBase(bool value) const { qgeoserviceprovider_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qgeoserviceprovider_metacall_isbase) {
            qgeoserviceprovider_metacall_isbase = false;
            return QGeoServiceProvider::qt_metacall(param1, param2, param3);
        } else if (qgeoserviceprovider_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qgeoserviceprovider_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QGeoServiceProvider::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qgeoserviceprovider_event_isbase) {
            qgeoserviceprovider_event_isbase = false;
            return QGeoServiceProvider::event(event);
        } else if (qgeoserviceprovider_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qgeoserviceprovider_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QGeoServiceProvider::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qgeoserviceprovider_eventfilter_isbase) {
            qgeoserviceprovider_eventfilter_isbase = false;
            return QGeoServiceProvider::eventFilter(watched, event);
        } else if (qgeoserviceprovider_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qgeoserviceprovider_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QGeoServiceProvider::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qgeoserviceprovider_timerevent_isbase) {
            qgeoserviceprovider_timerevent_isbase = false;
            QGeoServiceProvider::timerEvent(event);
        } else if (qgeoserviceprovider_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qgeoserviceprovider_timerevent_callback(this, cbval1);
        } else {
            QGeoServiceProvider::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qgeoserviceprovider_childevent_isbase) {
            qgeoserviceprovider_childevent_isbase = false;
            QGeoServiceProvider::childEvent(event);
        } else if (qgeoserviceprovider_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qgeoserviceprovider_childevent_callback(this, cbval1);
        } else {
            QGeoServiceProvider::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qgeoserviceprovider_customevent_isbase) {
            qgeoserviceprovider_customevent_isbase = false;
            QGeoServiceProvider::customEvent(event);
        } else if (qgeoserviceprovider_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qgeoserviceprovider_customevent_callback(this, cbval1);
        } else {
            QGeoServiceProvider::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qgeoserviceprovider_connectnotify_isbase) {
            qgeoserviceprovider_connectnotify_isbase = false;
            QGeoServiceProvider::connectNotify(signal);
        } else if (qgeoserviceprovider_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qgeoserviceprovider_connectnotify_callback(this, cbval1);
        } else {
            QGeoServiceProvider::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qgeoserviceprovider_disconnectnotify_isbase) {
            qgeoserviceprovider_disconnectnotify_isbase = false;
            QGeoServiceProvider::disconnectNotify(signal);
        } else if (qgeoserviceprovider_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qgeoserviceprovider_disconnectnotify_callback(this, cbval1);
        } else {
            QGeoServiceProvider::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qgeoserviceprovider_sender_isbase) {
            qgeoserviceprovider_sender_isbase = false;
            return QGeoServiceProvider::sender();
        } else if (qgeoserviceprovider_sender_callback != nullptr) {
            QObject* callback_ret = qgeoserviceprovider_sender_callback();
            return callback_ret;
        } else {
            return QGeoServiceProvider::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qgeoserviceprovider_sendersignalindex_isbase) {
            qgeoserviceprovider_sendersignalindex_isbase = false;
            return QGeoServiceProvider::senderSignalIndex();
        } else if (qgeoserviceprovider_sendersignalindex_callback != nullptr) {
            int callback_ret = qgeoserviceprovider_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QGeoServiceProvider::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qgeoserviceprovider_receivers_isbase) {
            qgeoserviceprovider_receivers_isbase = false;
            return QGeoServiceProvider::receivers(signal);
        } else if (qgeoserviceprovider_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qgeoserviceprovider_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QGeoServiceProvider::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qgeoserviceprovider_issignalconnected_isbase) {
            qgeoserviceprovider_issignalconnected_isbase = false;
            return QGeoServiceProvider::isSignalConnected(signal);
        } else if (qgeoserviceprovider_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qgeoserviceprovider_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QGeoServiceProvider::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void QGeoServiceProvider_TimerEvent(QGeoServiceProvider* self, QTimerEvent* event);
    friend void QGeoServiceProvider_QBaseTimerEvent(QGeoServiceProvider* self, QTimerEvent* event);
    friend void QGeoServiceProvider_ChildEvent(QGeoServiceProvider* self, QChildEvent* event);
    friend void QGeoServiceProvider_QBaseChildEvent(QGeoServiceProvider* self, QChildEvent* event);
    friend void QGeoServiceProvider_CustomEvent(QGeoServiceProvider* self, QEvent* event);
    friend void QGeoServiceProvider_QBaseCustomEvent(QGeoServiceProvider* self, QEvent* event);
    friend void QGeoServiceProvider_ConnectNotify(QGeoServiceProvider* self, const QMetaMethod* signal);
    friend void QGeoServiceProvider_QBaseConnectNotify(QGeoServiceProvider* self, const QMetaMethod* signal);
    friend void QGeoServiceProvider_DisconnectNotify(QGeoServiceProvider* self, const QMetaMethod* signal);
    friend void QGeoServiceProvider_QBaseDisconnectNotify(QGeoServiceProvider* self, const QMetaMethod* signal);
    friend QObject* QGeoServiceProvider_Sender(const QGeoServiceProvider* self);
    friend QObject* QGeoServiceProvider_QBaseSender(const QGeoServiceProvider* self);
    friend int QGeoServiceProvider_SenderSignalIndex(const QGeoServiceProvider* self);
    friend int QGeoServiceProvider_QBaseSenderSignalIndex(const QGeoServiceProvider* self);
    friend int QGeoServiceProvider_Receivers(const QGeoServiceProvider* self, const char* signal);
    friend int QGeoServiceProvider_QBaseReceivers(const QGeoServiceProvider* self, const char* signal);
    friend bool QGeoServiceProvider_IsSignalConnected(const QGeoServiceProvider* self, const QMetaMethod* signal);
    friend bool QGeoServiceProvider_QBaseIsSignalConnected(const QGeoServiceProvider* self, const QMetaMethod* signal);
};

#endif
