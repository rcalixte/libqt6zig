#pragma once
#ifndef SRCC_LIBVIRTUALQPOINTINGDEVICE_H
#define SRCC_LIBVIRTUALQPOINTINGDEVICE_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QPointingDevice so that we can call protected methods
class VirtualQPointingDevice final : public QPointingDevice {

  public:
    // Virtual class boolean flag
    bool isVirtualQPointingDevice = true;

    // Virtual class public types (including callbacks)
    using QPointingDevice_Metacall_Callback = int (*)(QPointingDevice*, int, int, void**);
    using QPointingDevice_Event_Callback = bool (*)(QPointingDevice*, QEvent*);
    using QPointingDevice_EventFilter_Callback = bool (*)(QPointingDevice*, QObject*, QEvent*);
    using QPointingDevice_TimerEvent_Callback = void (*)(QPointingDevice*, QTimerEvent*);
    using QPointingDevice_ChildEvent_Callback = void (*)(QPointingDevice*, QChildEvent*);
    using QPointingDevice_CustomEvent_Callback = void (*)(QPointingDevice*, QEvent*);
    using QPointingDevice_ConnectNotify_Callback = void (*)(QPointingDevice*, QMetaMethod*);
    using QPointingDevice_DisconnectNotify_Callback = void (*)(QPointingDevice*, QMetaMethod*);
    using QPointingDevice_Sender_Callback = QObject* (*)();
    using QPointingDevice_SenderSignalIndex_Callback = int (*)();
    using QPointingDevice_Receivers_Callback = int (*)(const QPointingDevice*, const char*);
    using QPointingDevice_IsSignalConnected_Callback = bool (*)(const QPointingDevice*, QMetaMethod*);

  protected:
    // Instance callback storage
    QPointingDevice_Metacall_Callback qpointingdevice_metacall_callback = nullptr;
    QPointingDevice_Event_Callback qpointingdevice_event_callback = nullptr;
    QPointingDevice_EventFilter_Callback qpointingdevice_eventfilter_callback = nullptr;
    QPointingDevice_TimerEvent_Callback qpointingdevice_timerevent_callback = nullptr;
    QPointingDevice_ChildEvent_Callback qpointingdevice_childevent_callback = nullptr;
    QPointingDevice_CustomEvent_Callback qpointingdevice_customevent_callback = nullptr;
    QPointingDevice_ConnectNotify_Callback qpointingdevice_connectnotify_callback = nullptr;
    QPointingDevice_DisconnectNotify_Callback qpointingdevice_disconnectnotify_callback = nullptr;
    QPointingDevice_Sender_Callback qpointingdevice_sender_callback = nullptr;
    QPointingDevice_SenderSignalIndex_Callback qpointingdevice_sendersignalindex_callback = nullptr;
    QPointingDevice_Receivers_Callback qpointingdevice_receivers_callback = nullptr;
    QPointingDevice_IsSignalConnected_Callback qpointingdevice_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qpointingdevice_metacall_isbase = false;
    mutable bool qpointingdevice_event_isbase = false;
    mutable bool qpointingdevice_eventfilter_isbase = false;
    mutable bool qpointingdevice_timerevent_isbase = false;
    mutable bool qpointingdevice_childevent_isbase = false;
    mutable bool qpointingdevice_customevent_isbase = false;
    mutable bool qpointingdevice_connectnotify_isbase = false;
    mutable bool qpointingdevice_disconnectnotify_isbase = false;
    mutable bool qpointingdevice_sender_isbase = false;
    mutable bool qpointingdevice_sendersignalindex_isbase = false;
    mutable bool qpointingdevice_receivers_isbase = false;
    mutable bool qpointingdevice_issignalconnected_isbase = false;

  public:
    VirtualQPointingDevice() : QPointingDevice() {};
    VirtualQPointingDevice(const QString& name, qint64 systemId, QInputDevice::DeviceType devType, QPointingDevice::PointerType pType, QFlags<QInputDevice::Capability> caps, int maxPoints, int buttonCount) : QPointingDevice(name, systemId, devType, pType, caps, maxPoints, buttonCount) {};
    VirtualQPointingDevice(QObject* parent) : QPointingDevice(parent) {};
    VirtualQPointingDevice(const QString& name, qint64 systemId, QInputDevice::DeviceType devType, QPointingDevice::PointerType pType, QFlags<QInputDevice::Capability> caps, int maxPoints, int buttonCount, const QString& seatName) : QPointingDevice(name, systemId, devType, pType, caps, maxPoints, buttonCount, seatName) {};
    VirtualQPointingDevice(const QString& name, qint64 systemId, QInputDevice::DeviceType devType, QPointingDevice::PointerType pType, QFlags<QInputDevice::Capability> caps, int maxPoints, int buttonCount, const QString& seatName, QPointingDeviceUniqueId uniqueId) : QPointingDevice(name, systemId, devType, pType, caps, maxPoints, buttonCount, seatName, uniqueId) {};
    VirtualQPointingDevice(const QString& name, qint64 systemId, QInputDevice::DeviceType devType, QPointingDevice::PointerType pType, QFlags<QInputDevice::Capability> caps, int maxPoints, int buttonCount, const QString& seatName, QPointingDeviceUniqueId uniqueId, QObject* parent) : QPointingDevice(name, systemId, devType, pType, caps, maxPoints, buttonCount, seatName, uniqueId, parent) {};

    ~VirtualQPointingDevice() {
        qpointingdevice_metacall_callback = nullptr;
        qpointingdevice_event_callback = nullptr;
        qpointingdevice_eventfilter_callback = nullptr;
        qpointingdevice_timerevent_callback = nullptr;
        qpointingdevice_childevent_callback = nullptr;
        qpointingdevice_customevent_callback = nullptr;
        qpointingdevice_connectnotify_callback = nullptr;
        qpointingdevice_disconnectnotify_callback = nullptr;
        qpointingdevice_sender_callback = nullptr;
        qpointingdevice_sendersignalindex_callback = nullptr;
        qpointingdevice_receivers_callback = nullptr;
        qpointingdevice_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setQPointingDevice_Metacall_Callback(QPointingDevice_Metacall_Callback cb) { qpointingdevice_metacall_callback = cb; }
    inline void setQPointingDevice_Event_Callback(QPointingDevice_Event_Callback cb) { qpointingdevice_event_callback = cb; }
    inline void setQPointingDevice_EventFilter_Callback(QPointingDevice_EventFilter_Callback cb) { qpointingdevice_eventfilter_callback = cb; }
    inline void setQPointingDevice_TimerEvent_Callback(QPointingDevice_TimerEvent_Callback cb) { qpointingdevice_timerevent_callback = cb; }
    inline void setQPointingDevice_ChildEvent_Callback(QPointingDevice_ChildEvent_Callback cb) { qpointingdevice_childevent_callback = cb; }
    inline void setQPointingDevice_CustomEvent_Callback(QPointingDevice_CustomEvent_Callback cb) { qpointingdevice_customevent_callback = cb; }
    inline void setQPointingDevice_ConnectNotify_Callback(QPointingDevice_ConnectNotify_Callback cb) { qpointingdevice_connectnotify_callback = cb; }
    inline void setQPointingDevice_DisconnectNotify_Callback(QPointingDevice_DisconnectNotify_Callback cb) { qpointingdevice_disconnectnotify_callback = cb; }
    inline void setQPointingDevice_Sender_Callback(QPointingDevice_Sender_Callback cb) { qpointingdevice_sender_callback = cb; }
    inline void setQPointingDevice_SenderSignalIndex_Callback(QPointingDevice_SenderSignalIndex_Callback cb) { qpointingdevice_sendersignalindex_callback = cb; }
    inline void setQPointingDevice_Receivers_Callback(QPointingDevice_Receivers_Callback cb) { qpointingdevice_receivers_callback = cb; }
    inline void setQPointingDevice_IsSignalConnected_Callback(QPointingDevice_IsSignalConnected_Callback cb) { qpointingdevice_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQPointingDevice_Metacall_IsBase(bool value) const { qpointingdevice_metacall_isbase = value; }
    inline void setQPointingDevice_Event_IsBase(bool value) const { qpointingdevice_event_isbase = value; }
    inline void setQPointingDevice_EventFilter_IsBase(bool value) const { qpointingdevice_eventfilter_isbase = value; }
    inline void setQPointingDevice_TimerEvent_IsBase(bool value) const { qpointingdevice_timerevent_isbase = value; }
    inline void setQPointingDevice_ChildEvent_IsBase(bool value) const { qpointingdevice_childevent_isbase = value; }
    inline void setQPointingDevice_CustomEvent_IsBase(bool value) const { qpointingdevice_customevent_isbase = value; }
    inline void setQPointingDevice_ConnectNotify_IsBase(bool value) const { qpointingdevice_connectnotify_isbase = value; }
    inline void setQPointingDevice_DisconnectNotify_IsBase(bool value) const { qpointingdevice_disconnectnotify_isbase = value; }
    inline void setQPointingDevice_Sender_IsBase(bool value) const { qpointingdevice_sender_isbase = value; }
    inline void setQPointingDevice_SenderSignalIndex_IsBase(bool value) const { qpointingdevice_sendersignalindex_isbase = value; }
    inline void setQPointingDevice_Receivers_IsBase(bool value) const { qpointingdevice_receivers_isbase = value; }
    inline void setQPointingDevice_IsSignalConnected_IsBase(bool value) const { qpointingdevice_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qpointingdevice_metacall_isbase) {
            qpointingdevice_metacall_isbase = false;
            return QPointingDevice::qt_metacall(param1, param2, param3);
        } else if (qpointingdevice_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qpointingdevice_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QPointingDevice::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qpointingdevice_event_isbase) {
            qpointingdevice_event_isbase = false;
            return QPointingDevice::event(event);
        } else if (qpointingdevice_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qpointingdevice_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QPointingDevice::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qpointingdevice_eventfilter_isbase) {
            qpointingdevice_eventfilter_isbase = false;
            return QPointingDevice::eventFilter(watched, event);
        } else if (qpointingdevice_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qpointingdevice_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QPointingDevice::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qpointingdevice_timerevent_isbase) {
            qpointingdevice_timerevent_isbase = false;
            QPointingDevice::timerEvent(event);
        } else if (qpointingdevice_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qpointingdevice_timerevent_callback(this, cbval1);
        } else {
            QPointingDevice::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qpointingdevice_childevent_isbase) {
            qpointingdevice_childevent_isbase = false;
            QPointingDevice::childEvent(event);
        } else if (qpointingdevice_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qpointingdevice_childevent_callback(this, cbval1);
        } else {
            QPointingDevice::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qpointingdevice_customevent_isbase) {
            qpointingdevice_customevent_isbase = false;
            QPointingDevice::customEvent(event);
        } else if (qpointingdevice_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qpointingdevice_customevent_callback(this, cbval1);
        } else {
            QPointingDevice::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qpointingdevice_connectnotify_isbase) {
            qpointingdevice_connectnotify_isbase = false;
            QPointingDevice::connectNotify(signal);
        } else if (qpointingdevice_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qpointingdevice_connectnotify_callback(this, cbval1);
        } else {
            QPointingDevice::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qpointingdevice_disconnectnotify_isbase) {
            qpointingdevice_disconnectnotify_isbase = false;
            QPointingDevice::disconnectNotify(signal);
        } else if (qpointingdevice_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qpointingdevice_disconnectnotify_callback(this, cbval1);
        } else {
            QPointingDevice::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qpointingdevice_sender_isbase) {
            qpointingdevice_sender_isbase = false;
            return QPointingDevice::sender();
        } else if (qpointingdevice_sender_callback != nullptr) {
            QObject* callback_ret = qpointingdevice_sender_callback();
            return callback_ret;
        } else {
            return QPointingDevice::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qpointingdevice_sendersignalindex_isbase) {
            qpointingdevice_sendersignalindex_isbase = false;
            return QPointingDevice::senderSignalIndex();
        } else if (qpointingdevice_sendersignalindex_callback != nullptr) {
            int callback_ret = qpointingdevice_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QPointingDevice::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qpointingdevice_receivers_isbase) {
            qpointingdevice_receivers_isbase = false;
            return QPointingDevice::receivers(signal);
        } else if (qpointingdevice_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qpointingdevice_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QPointingDevice::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qpointingdevice_issignalconnected_isbase) {
            qpointingdevice_issignalconnected_isbase = false;
            return QPointingDevice::isSignalConnected(signal);
        } else if (qpointingdevice_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qpointingdevice_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QPointingDevice::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void QPointingDevice_TimerEvent(QPointingDevice* self, QTimerEvent* event);
    friend void QPointingDevice_QBaseTimerEvent(QPointingDevice* self, QTimerEvent* event);
    friend void QPointingDevice_ChildEvent(QPointingDevice* self, QChildEvent* event);
    friend void QPointingDevice_QBaseChildEvent(QPointingDevice* self, QChildEvent* event);
    friend void QPointingDevice_CustomEvent(QPointingDevice* self, QEvent* event);
    friend void QPointingDevice_QBaseCustomEvent(QPointingDevice* self, QEvent* event);
    friend void QPointingDevice_ConnectNotify(QPointingDevice* self, const QMetaMethod* signal);
    friend void QPointingDevice_QBaseConnectNotify(QPointingDevice* self, const QMetaMethod* signal);
    friend void QPointingDevice_DisconnectNotify(QPointingDevice* self, const QMetaMethod* signal);
    friend void QPointingDevice_QBaseDisconnectNotify(QPointingDevice* self, const QMetaMethod* signal);
    friend QObject* QPointingDevice_Sender(const QPointingDevice* self);
    friend QObject* QPointingDevice_QBaseSender(const QPointingDevice* self);
    friend int QPointingDevice_SenderSignalIndex(const QPointingDevice* self);
    friend int QPointingDevice_QBaseSenderSignalIndex(const QPointingDevice* self);
    friend int QPointingDevice_Receivers(const QPointingDevice* self, const char* signal);
    friend int QPointingDevice_QBaseReceivers(const QPointingDevice* self, const char* signal);
    friend bool QPointingDevice_IsSignalConnected(const QPointingDevice* self, const QMetaMethod* signal);
    friend bool QPointingDevice_QBaseIsSignalConnected(const QPointingDevice* self, const QMetaMethod* signal);
};

#endif
