#pragma once
#ifndef SRC_POSIX_EXTRAS_DBUSC_LIBVIRTUALQDBUSINTERFACE_H
#define SRC_POSIX_EXTRAS_DBUSC_LIBVIRTUALQDBUSINTERFACE_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QDBusInterface so that we can call protected methods
class VirtualQDBusInterface final : public QDBusInterface {

  public:
    // Virtual class boolean flag
    bool isVirtualQDBusInterface = true;

    // Virtual class public types (including callbacks)
    using QDBusInterface_Metacall_Callback = int (*)(QDBusInterface*, int, int, void**);
    using QDBusInterface_ConnectNotify_Callback = void (*)(QDBusInterface*, QMetaMethod*);
    using QDBusInterface_DisconnectNotify_Callback = void (*)(QDBusInterface*, QMetaMethod*);
    using QDBusInterface_Event_Callback = bool (*)(QDBusInterface*, QEvent*);
    using QDBusInterface_EventFilter_Callback = bool (*)(QDBusInterface*, QObject*, QEvent*);
    using QDBusInterface_TimerEvent_Callback = void (*)(QDBusInterface*, QTimerEvent*);
    using QDBusInterface_ChildEvent_Callback = void (*)(QDBusInterface*, QChildEvent*);
    using QDBusInterface_CustomEvent_Callback = void (*)(QDBusInterface*, QEvent*);
    using QDBusInterface_InternalPropGet_Callback = QVariant* (*)(const QDBusInterface*, const char*);
    using QDBusInterface_InternalPropSet_Callback = void (*)(QDBusInterface*, const char*, QVariant*);
    using QDBusInterface_InternalConstCall_Callback = QDBusMessage* (*)(const QDBusInterface*, int, libqt_string);
    using QDBusInterface_Sender_Callback = QObject* (*)();
    using QDBusInterface_SenderSignalIndex_Callback = int (*)();
    using QDBusInterface_Receivers_Callback = int (*)(const QDBusInterface*, const char*);
    using QDBusInterface_IsSignalConnected_Callback = bool (*)(const QDBusInterface*, QMetaMethod*);

  protected:
    // Instance callback storage
    QDBusInterface_Metacall_Callback qdbusinterface_metacall_callback = nullptr;
    QDBusInterface_ConnectNotify_Callback qdbusinterface_connectnotify_callback = nullptr;
    QDBusInterface_DisconnectNotify_Callback qdbusinterface_disconnectnotify_callback = nullptr;
    QDBusInterface_Event_Callback qdbusinterface_event_callback = nullptr;
    QDBusInterface_EventFilter_Callback qdbusinterface_eventfilter_callback = nullptr;
    QDBusInterface_TimerEvent_Callback qdbusinterface_timerevent_callback = nullptr;
    QDBusInterface_ChildEvent_Callback qdbusinterface_childevent_callback = nullptr;
    QDBusInterface_CustomEvent_Callback qdbusinterface_customevent_callback = nullptr;
    QDBusInterface_InternalPropGet_Callback qdbusinterface_internalpropget_callback = nullptr;
    QDBusInterface_InternalPropSet_Callback qdbusinterface_internalpropset_callback = nullptr;
    QDBusInterface_InternalConstCall_Callback qdbusinterface_internalconstcall_callback = nullptr;
    QDBusInterface_Sender_Callback qdbusinterface_sender_callback = nullptr;
    QDBusInterface_SenderSignalIndex_Callback qdbusinterface_sendersignalindex_callback = nullptr;
    QDBusInterface_Receivers_Callback qdbusinterface_receivers_callback = nullptr;
    QDBusInterface_IsSignalConnected_Callback qdbusinterface_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qdbusinterface_metacall_isbase = false;
    mutable bool qdbusinterface_connectnotify_isbase = false;
    mutable bool qdbusinterface_disconnectnotify_isbase = false;
    mutable bool qdbusinterface_event_isbase = false;
    mutable bool qdbusinterface_eventfilter_isbase = false;
    mutable bool qdbusinterface_timerevent_isbase = false;
    mutable bool qdbusinterface_childevent_isbase = false;
    mutable bool qdbusinterface_customevent_isbase = false;
    mutable bool qdbusinterface_internalpropget_isbase = false;
    mutable bool qdbusinterface_internalpropset_isbase = false;
    mutable bool qdbusinterface_internalconstcall_isbase = false;
    mutable bool qdbusinterface_sender_isbase = false;
    mutable bool qdbusinterface_sendersignalindex_isbase = false;
    mutable bool qdbusinterface_receivers_isbase = false;
    mutable bool qdbusinterface_issignalconnected_isbase = false;

  public:
    VirtualQDBusInterface(const QString& service, const QString& path) : QDBusInterface(service, path) {};
    VirtualQDBusInterface(const QString& service, const QString& path, const QString& interface) : QDBusInterface(service, path, interface) {};
    VirtualQDBusInterface(const QString& service, const QString& path, const QString& interface, const QDBusConnection& connection) : QDBusInterface(service, path, interface, connection) {};
    VirtualQDBusInterface(const QString& service, const QString& path, const QString& interface, const QDBusConnection& connection, QObject* parent) : QDBusInterface(service, path, interface, connection, parent) {};

    ~VirtualQDBusInterface() {
        qdbusinterface_metacall_callback = nullptr;
        qdbusinterface_connectnotify_callback = nullptr;
        qdbusinterface_disconnectnotify_callback = nullptr;
        qdbusinterface_event_callback = nullptr;
        qdbusinterface_eventfilter_callback = nullptr;
        qdbusinterface_timerevent_callback = nullptr;
        qdbusinterface_childevent_callback = nullptr;
        qdbusinterface_customevent_callback = nullptr;
        qdbusinterface_internalpropget_callback = nullptr;
        qdbusinterface_internalpropset_callback = nullptr;
        qdbusinterface_internalconstcall_callback = nullptr;
        qdbusinterface_sender_callback = nullptr;
        qdbusinterface_sendersignalindex_callback = nullptr;
        qdbusinterface_receivers_callback = nullptr;
        qdbusinterface_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setQDBusInterface_Metacall_Callback(QDBusInterface_Metacall_Callback cb) { qdbusinterface_metacall_callback = cb; }
    inline void setQDBusInterface_ConnectNotify_Callback(QDBusInterface_ConnectNotify_Callback cb) { qdbusinterface_connectnotify_callback = cb; }
    inline void setQDBusInterface_DisconnectNotify_Callback(QDBusInterface_DisconnectNotify_Callback cb) { qdbusinterface_disconnectnotify_callback = cb; }
    inline void setQDBusInterface_Event_Callback(QDBusInterface_Event_Callback cb) { qdbusinterface_event_callback = cb; }
    inline void setQDBusInterface_EventFilter_Callback(QDBusInterface_EventFilter_Callback cb) { qdbusinterface_eventfilter_callback = cb; }
    inline void setQDBusInterface_TimerEvent_Callback(QDBusInterface_TimerEvent_Callback cb) { qdbusinterface_timerevent_callback = cb; }
    inline void setQDBusInterface_ChildEvent_Callback(QDBusInterface_ChildEvent_Callback cb) { qdbusinterface_childevent_callback = cb; }
    inline void setQDBusInterface_CustomEvent_Callback(QDBusInterface_CustomEvent_Callback cb) { qdbusinterface_customevent_callback = cb; }
    inline void setQDBusInterface_InternalPropGet_Callback(QDBusInterface_InternalPropGet_Callback cb) { qdbusinterface_internalpropget_callback = cb; }
    inline void setQDBusInterface_InternalPropSet_Callback(QDBusInterface_InternalPropSet_Callback cb) { qdbusinterface_internalpropset_callback = cb; }
    inline void setQDBusInterface_InternalConstCall_Callback(QDBusInterface_InternalConstCall_Callback cb) { qdbusinterface_internalconstcall_callback = cb; }
    inline void setQDBusInterface_Sender_Callback(QDBusInterface_Sender_Callback cb) { qdbusinterface_sender_callback = cb; }
    inline void setQDBusInterface_SenderSignalIndex_Callback(QDBusInterface_SenderSignalIndex_Callback cb) { qdbusinterface_sendersignalindex_callback = cb; }
    inline void setQDBusInterface_Receivers_Callback(QDBusInterface_Receivers_Callback cb) { qdbusinterface_receivers_callback = cb; }
    inline void setQDBusInterface_IsSignalConnected_Callback(QDBusInterface_IsSignalConnected_Callback cb) { qdbusinterface_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQDBusInterface_Metacall_IsBase(bool value) const { qdbusinterface_metacall_isbase = value; }
    inline void setQDBusInterface_ConnectNotify_IsBase(bool value) const { qdbusinterface_connectnotify_isbase = value; }
    inline void setQDBusInterface_DisconnectNotify_IsBase(bool value) const { qdbusinterface_disconnectnotify_isbase = value; }
    inline void setQDBusInterface_Event_IsBase(bool value) const { qdbusinterface_event_isbase = value; }
    inline void setQDBusInterface_EventFilter_IsBase(bool value) const { qdbusinterface_eventfilter_isbase = value; }
    inline void setQDBusInterface_TimerEvent_IsBase(bool value) const { qdbusinterface_timerevent_isbase = value; }
    inline void setQDBusInterface_ChildEvent_IsBase(bool value) const { qdbusinterface_childevent_isbase = value; }
    inline void setQDBusInterface_CustomEvent_IsBase(bool value) const { qdbusinterface_customevent_isbase = value; }
    inline void setQDBusInterface_InternalPropGet_IsBase(bool value) const { qdbusinterface_internalpropget_isbase = value; }
    inline void setQDBusInterface_InternalPropSet_IsBase(bool value) const { qdbusinterface_internalpropset_isbase = value; }
    inline void setQDBusInterface_InternalConstCall_IsBase(bool value) const { qdbusinterface_internalconstcall_isbase = value; }
    inline void setQDBusInterface_Sender_IsBase(bool value) const { qdbusinterface_sender_isbase = value; }
    inline void setQDBusInterface_SenderSignalIndex_IsBase(bool value) const { qdbusinterface_sendersignalindex_isbase = value; }
    inline void setQDBusInterface_Receivers_IsBase(bool value) const { qdbusinterface_receivers_isbase = value; }
    inline void setQDBusInterface_IsSignalConnected_IsBase(bool value) const { qdbusinterface_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qdbusinterface_metacall_isbase) {
            qdbusinterface_metacall_isbase = false;
            return QDBusInterface::qt_metacall(param1, param2, param3);
        } else if (qdbusinterface_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qdbusinterface_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QDBusInterface::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qdbusinterface_connectnotify_isbase) {
            qdbusinterface_connectnotify_isbase = false;
            QDBusInterface::connectNotify(signal);
        } else if (qdbusinterface_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qdbusinterface_connectnotify_callback(this, cbval1);
        } else {
            QDBusInterface::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qdbusinterface_disconnectnotify_isbase) {
            qdbusinterface_disconnectnotify_isbase = false;
            QDBusInterface::disconnectNotify(signal);
        } else if (qdbusinterface_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qdbusinterface_disconnectnotify_callback(this, cbval1);
        } else {
            QDBusInterface::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qdbusinterface_event_isbase) {
            qdbusinterface_event_isbase = false;
            return QDBusInterface::event(event);
        } else if (qdbusinterface_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qdbusinterface_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QDBusInterface::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qdbusinterface_eventfilter_isbase) {
            qdbusinterface_eventfilter_isbase = false;
            return QDBusInterface::eventFilter(watched, event);
        } else if (qdbusinterface_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qdbusinterface_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QDBusInterface::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qdbusinterface_timerevent_isbase) {
            qdbusinterface_timerevent_isbase = false;
            QDBusInterface::timerEvent(event);
        } else if (qdbusinterface_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qdbusinterface_timerevent_callback(this, cbval1);
        } else {
            QDBusInterface::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qdbusinterface_childevent_isbase) {
            qdbusinterface_childevent_isbase = false;
            QDBusInterface::childEvent(event);
        } else if (qdbusinterface_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qdbusinterface_childevent_callback(this, cbval1);
        } else {
            QDBusInterface::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qdbusinterface_customevent_isbase) {
            qdbusinterface_customevent_isbase = false;
            QDBusInterface::customEvent(event);
        } else if (qdbusinterface_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qdbusinterface_customevent_callback(this, cbval1);
        } else {
            QDBusInterface::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    QVariant internalPropGet(const char* propname) const {
        if (qdbusinterface_internalpropget_isbase) {
            qdbusinterface_internalpropget_isbase = false;
            return QDBusInterface::internalPropGet(propname);
        } else if (qdbusinterface_internalpropget_callback != nullptr) {
            const char* cbval1 = (const char*)propname;

            QVariant* callback_ret = qdbusinterface_internalpropget_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QDBusInterface::internalPropGet(propname);
        }
    }

    // Virtual method for C ABI access and custom callback
    void internalPropSet(const char* propname, const QVariant& value) {
        if (qdbusinterface_internalpropset_isbase) {
            qdbusinterface_internalpropset_isbase = false;
            QDBusInterface::internalPropSet(propname, value);
        } else if (qdbusinterface_internalpropset_callback != nullptr) {
            const char* cbval1 = (const char*)propname;
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval2 = const_cast<QVariant*>(&value_ret);

            qdbusinterface_internalpropset_callback(this, cbval1, cbval2);
        } else {
            QDBusInterface::internalPropSet(propname, value);
        }
    }

    // Virtual method for C ABI access and custom callback
    QDBusMessage internalConstCall(QDBus::CallMode mode, const QString& method) const {
        if (qdbusinterface_internalconstcall_isbase) {
            qdbusinterface_internalconstcall_isbase = false;
            return QDBusInterface::internalConstCall(mode, method);
        } else if (qdbusinterface_internalconstcall_callback != nullptr) {
            int cbval1 = static_cast<int>(mode);
            const QString method_ret = method;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray method_b = method_ret.toUtf8();
            libqt_string method_str;
            method_str.len = method_b.length();
            method_str.data = static_cast<const char*>(malloc(method_str.len + 1));
            memcpy((void*)method_str.data, method_b.data(), method_str.len);
            ((char*)method_str.data)[method_str.len] = '\0';
            libqt_string cbval2 = method_str;

            QDBusMessage* callback_ret = qdbusinterface_internalconstcall_callback(this, cbval1, cbval2);
            return *callback_ret;
        } else {
            return QDBusInterface::internalConstCall(mode, method);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qdbusinterface_sender_isbase) {
            qdbusinterface_sender_isbase = false;
            return QDBusInterface::sender();
        } else if (qdbusinterface_sender_callback != nullptr) {
            QObject* callback_ret = qdbusinterface_sender_callback();
            return callback_ret;
        } else {
            return QDBusInterface::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qdbusinterface_sendersignalindex_isbase) {
            qdbusinterface_sendersignalindex_isbase = false;
            return QDBusInterface::senderSignalIndex();
        } else if (qdbusinterface_sendersignalindex_callback != nullptr) {
            int callback_ret = qdbusinterface_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QDBusInterface::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qdbusinterface_receivers_isbase) {
            qdbusinterface_receivers_isbase = false;
            return QDBusInterface::receivers(signal);
        } else if (qdbusinterface_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qdbusinterface_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QDBusInterface::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qdbusinterface_issignalconnected_isbase) {
            qdbusinterface_issignalconnected_isbase = false;
            return QDBusInterface::isSignalConnected(signal);
        } else if (qdbusinterface_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qdbusinterface_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QDBusInterface::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void QDBusInterface_ConnectNotify(QDBusInterface* self, const QMetaMethod* signal);
    friend void QDBusInterface_QBaseConnectNotify(QDBusInterface* self, const QMetaMethod* signal);
    friend void QDBusInterface_DisconnectNotify(QDBusInterface* self, const QMetaMethod* signal);
    friend void QDBusInterface_QBaseDisconnectNotify(QDBusInterface* self, const QMetaMethod* signal);
    friend void QDBusInterface_TimerEvent(QDBusInterface* self, QTimerEvent* event);
    friend void QDBusInterface_QBaseTimerEvent(QDBusInterface* self, QTimerEvent* event);
    friend void QDBusInterface_ChildEvent(QDBusInterface* self, QChildEvent* event);
    friend void QDBusInterface_QBaseChildEvent(QDBusInterface* self, QChildEvent* event);
    friend void QDBusInterface_CustomEvent(QDBusInterface* self, QEvent* event);
    friend void QDBusInterface_QBaseCustomEvent(QDBusInterface* self, QEvent* event);
    friend QVariant* QDBusInterface_InternalPropGet(const QDBusInterface* self, const char* propname);
    friend QVariant* QDBusInterface_QBaseInternalPropGet(const QDBusInterface* self, const char* propname);
    friend void QDBusInterface_InternalPropSet(QDBusInterface* self, const char* propname, const QVariant* value);
    friend void QDBusInterface_QBaseInternalPropSet(QDBusInterface* self, const char* propname, const QVariant* value);
    friend QDBusMessage* QDBusInterface_InternalConstCall(const QDBusInterface* self, int mode, const libqt_string method);
    friend QDBusMessage* QDBusInterface_QBaseInternalConstCall(const QDBusInterface* self, int mode, const libqt_string method);
    friend QObject* QDBusInterface_Sender(const QDBusInterface* self);
    friend QObject* QDBusInterface_QBaseSender(const QDBusInterface* self);
    friend int QDBusInterface_SenderSignalIndex(const QDBusInterface* self);
    friend int QDBusInterface_QBaseSenderSignalIndex(const QDBusInterface* self);
    friend int QDBusInterface_Receivers(const QDBusInterface* self, const char* signal);
    friend int QDBusInterface_QBaseReceivers(const QDBusInterface* self, const char* signal);
    friend bool QDBusInterface_IsSignalConnected(const QDBusInterface* self, const QMetaMethod* signal);
    friend bool QDBusInterface_QBaseIsSignalConnected(const QDBusInterface* self, const QMetaMethod* signal);
};

#endif
