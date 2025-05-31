#pragma once
#ifndef SRCC_LIBVIRTUALQINPUTDEVICE_H
#define SRCC_LIBVIRTUALQINPUTDEVICE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QInputDevice so that we can call protected methods
class VirtualQInputDevice final : public QInputDevice {

  public:
    // Virtual class boolean flag
    bool isVirtualQInputDevice = true;

    // Virtual class public types (including callbacks)
    using QInputDevice_Metacall_Callback = int (*)(QInputDevice*, int, int, void**);
    using QInputDevice_Event_Callback = bool (*)(QInputDevice*, QEvent*);
    using QInputDevice_EventFilter_Callback = bool (*)(QInputDevice*, QObject*, QEvent*);
    using QInputDevice_TimerEvent_Callback = void (*)(QInputDevice*, QTimerEvent*);
    using QInputDevice_ChildEvent_Callback = void (*)(QInputDevice*, QChildEvent*);
    using QInputDevice_CustomEvent_Callback = void (*)(QInputDevice*, QEvent*);
    using QInputDevice_ConnectNotify_Callback = void (*)(QInputDevice*, QMetaMethod*);
    using QInputDevice_DisconnectNotify_Callback = void (*)(QInputDevice*, QMetaMethod*);
    using QInputDevice_Sender_Callback = QObject* (*)();
    using QInputDevice_SenderSignalIndex_Callback = int (*)();
    using QInputDevice_Receivers_Callback = int (*)(const QInputDevice*, const char*);
    using QInputDevice_IsSignalConnected_Callback = bool (*)(const QInputDevice*, QMetaMethod*);

  protected:
    // Instance callback storage
    QInputDevice_Metacall_Callback qinputdevice_metacall_callback = nullptr;
    QInputDevice_Event_Callback qinputdevice_event_callback = nullptr;
    QInputDevice_EventFilter_Callback qinputdevice_eventfilter_callback = nullptr;
    QInputDevice_TimerEvent_Callback qinputdevice_timerevent_callback = nullptr;
    QInputDevice_ChildEvent_Callback qinputdevice_childevent_callback = nullptr;
    QInputDevice_CustomEvent_Callback qinputdevice_customevent_callback = nullptr;
    QInputDevice_ConnectNotify_Callback qinputdevice_connectnotify_callback = nullptr;
    QInputDevice_DisconnectNotify_Callback qinputdevice_disconnectnotify_callback = nullptr;
    QInputDevice_Sender_Callback qinputdevice_sender_callback = nullptr;
    QInputDevice_SenderSignalIndex_Callback qinputdevice_sendersignalindex_callback = nullptr;
    QInputDevice_Receivers_Callback qinputdevice_receivers_callback = nullptr;
    QInputDevice_IsSignalConnected_Callback qinputdevice_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qinputdevice_metacall_isbase = false;
    mutable bool qinputdevice_event_isbase = false;
    mutable bool qinputdevice_eventfilter_isbase = false;
    mutable bool qinputdevice_timerevent_isbase = false;
    mutable bool qinputdevice_childevent_isbase = false;
    mutable bool qinputdevice_customevent_isbase = false;
    mutable bool qinputdevice_connectnotify_isbase = false;
    mutable bool qinputdevice_disconnectnotify_isbase = false;
    mutable bool qinputdevice_sender_isbase = false;
    mutable bool qinputdevice_sendersignalindex_isbase = false;
    mutable bool qinputdevice_receivers_isbase = false;
    mutable bool qinputdevice_issignalconnected_isbase = false;

  public:
    VirtualQInputDevice() : QInputDevice(){};
    VirtualQInputDevice(const QString& name, qint64 systemId, QInputDevice::DeviceType typeVal) : QInputDevice(name, systemId, typeVal){};
    VirtualQInputDevice(QObject* parent) : QInputDevice(parent){};
    VirtualQInputDevice(const QString& name, qint64 systemId, QInputDevice::DeviceType typeVal, const QString& seatName) : QInputDevice(name, systemId, typeVal, seatName){};
    VirtualQInputDevice(const QString& name, qint64 systemId, QInputDevice::DeviceType typeVal, const QString& seatName, QObject* parent) : QInputDevice(name, systemId, typeVal, seatName, parent){};

    ~VirtualQInputDevice() {
        qinputdevice_metacall_callback = nullptr;
        qinputdevice_event_callback = nullptr;
        qinputdevice_eventfilter_callback = nullptr;
        qinputdevice_timerevent_callback = nullptr;
        qinputdevice_childevent_callback = nullptr;
        qinputdevice_customevent_callback = nullptr;
        qinputdevice_connectnotify_callback = nullptr;
        qinputdevice_disconnectnotify_callback = nullptr;
        qinputdevice_sender_callback = nullptr;
        qinputdevice_sendersignalindex_callback = nullptr;
        qinputdevice_receivers_callback = nullptr;
        qinputdevice_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setQInputDevice_Metacall_Callback(QInputDevice_Metacall_Callback cb) { qinputdevice_metacall_callback = cb; }
    inline void setQInputDevice_Event_Callback(QInputDevice_Event_Callback cb) { qinputdevice_event_callback = cb; }
    inline void setQInputDevice_EventFilter_Callback(QInputDevice_EventFilter_Callback cb) { qinputdevice_eventfilter_callback = cb; }
    inline void setQInputDevice_TimerEvent_Callback(QInputDevice_TimerEvent_Callback cb) { qinputdevice_timerevent_callback = cb; }
    inline void setQInputDevice_ChildEvent_Callback(QInputDevice_ChildEvent_Callback cb) { qinputdevice_childevent_callback = cb; }
    inline void setQInputDevice_CustomEvent_Callback(QInputDevice_CustomEvent_Callback cb) { qinputdevice_customevent_callback = cb; }
    inline void setQInputDevice_ConnectNotify_Callback(QInputDevice_ConnectNotify_Callback cb) { qinputdevice_connectnotify_callback = cb; }
    inline void setQInputDevice_DisconnectNotify_Callback(QInputDevice_DisconnectNotify_Callback cb) { qinputdevice_disconnectnotify_callback = cb; }
    inline void setQInputDevice_Sender_Callback(QInputDevice_Sender_Callback cb) { qinputdevice_sender_callback = cb; }
    inline void setQInputDevice_SenderSignalIndex_Callback(QInputDevice_SenderSignalIndex_Callback cb) { qinputdevice_sendersignalindex_callback = cb; }
    inline void setQInputDevice_Receivers_Callback(QInputDevice_Receivers_Callback cb) { qinputdevice_receivers_callback = cb; }
    inline void setQInputDevice_IsSignalConnected_Callback(QInputDevice_IsSignalConnected_Callback cb) { qinputdevice_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQInputDevice_Metacall_IsBase(bool value) const { qinputdevice_metacall_isbase = value; }
    inline void setQInputDevice_Event_IsBase(bool value) const { qinputdevice_event_isbase = value; }
    inline void setQInputDevice_EventFilter_IsBase(bool value) const { qinputdevice_eventfilter_isbase = value; }
    inline void setQInputDevice_TimerEvent_IsBase(bool value) const { qinputdevice_timerevent_isbase = value; }
    inline void setQInputDevice_ChildEvent_IsBase(bool value) const { qinputdevice_childevent_isbase = value; }
    inline void setQInputDevice_CustomEvent_IsBase(bool value) const { qinputdevice_customevent_isbase = value; }
    inline void setQInputDevice_ConnectNotify_IsBase(bool value) const { qinputdevice_connectnotify_isbase = value; }
    inline void setQInputDevice_DisconnectNotify_IsBase(bool value) const { qinputdevice_disconnectnotify_isbase = value; }
    inline void setQInputDevice_Sender_IsBase(bool value) const { qinputdevice_sender_isbase = value; }
    inline void setQInputDevice_SenderSignalIndex_IsBase(bool value) const { qinputdevice_sendersignalindex_isbase = value; }
    inline void setQInputDevice_Receivers_IsBase(bool value) const { qinputdevice_receivers_isbase = value; }
    inline void setQInputDevice_IsSignalConnected_IsBase(bool value) const { qinputdevice_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qinputdevice_metacall_isbase) {
            qinputdevice_metacall_isbase = false;
            return QInputDevice::qt_metacall(param1, param2, param3);
        } else if (qinputdevice_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qinputdevice_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QInputDevice::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qinputdevice_event_isbase) {
            qinputdevice_event_isbase = false;
            return QInputDevice::event(event);
        } else if (qinputdevice_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qinputdevice_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QInputDevice::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qinputdevice_eventfilter_isbase) {
            qinputdevice_eventfilter_isbase = false;
            return QInputDevice::eventFilter(watched, event);
        } else if (qinputdevice_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qinputdevice_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QInputDevice::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qinputdevice_timerevent_isbase) {
            qinputdevice_timerevent_isbase = false;
            QInputDevice::timerEvent(event);
        } else if (qinputdevice_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qinputdevice_timerevent_callback(this, cbval1);
        } else {
            QInputDevice::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qinputdevice_childevent_isbase) {
            qinputdevice_childevent_isbase = false;
            QInputDevice::childEvent(event);
        } else if (qinputdevice_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qinputdevice_childevent_callback(this, cbval1);
        } else {
            QInputDevice::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qinputdevice_customevent_isbase) {
            qinputdevice_customevent_isbase = false;
            QInputDevice::customEvent(event);
        } else if (qinputdevice_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qinputdevice_customevent_callback(this, cbval1);
        } else {
            QInputDevice::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qinputdevice_connectnotify_isbase) {
            qinputdevice_connectnotify_isbase = false;
            QInputDevice::connectNotify(signal);
        } else if (qinputdevice_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qinputdevice_connectnotify_callback(this, cbval1);
        } else {
            QInputDevice::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qinputdevice_disconnectnotify_isbase) {
            qinputdevice_disconnectnotify_isbase = false;
            QInputDevice::disconnectNotify(signal);
        } else if (qinputdevice_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qinputdevice_disconnectnotify_callback(this, cbval1);
        } else {
            QInputDevice::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qinputdevice_sender_isbase) {
            qinputdevice_sender_isbase = false;
            return QInputDevice::sender();
        } else if (qinputdevice_sender_callback != nullptr) {
            QObject* callback_ret = qinputdevice_sender_callback();
            return callback_ret;
        } else {
            return QInputDevice::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qinputdevice_sendersignalindex_isbase) {
            qinputdevice_sendersignalindex_isbase = false;
            return QInputDevice::senderSignalIndex();
        } else if (qinputdevice_sendersignalindex_callback != nullptr) {
            int callback_ret = qinputdevice_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QInputDevice::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qinputdevice_receivers_isbase) {
            qinputdevice_receivers_isbase = false;
            return QInputDevice::receivers(signal);
        } else if (qinputdevice_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qinputdevice_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QInputDevice::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qinputdevice_issignalconnected_isbase) {
            qinputdevice_issignalconnected_isbase = false;
            return QInputDevice::isSignalConnected(signal);
        } else if (qinputdevice_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qinputdevice_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QInputDevice::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void QInputDevice_TimerEvent(QInputDevice* self, QTimerEvent* event);
    friend void QInputDevice_QBaseTimerEvent(QInputDevice* self, QTimerEvent* event);
    friend void QInputDevice_ChildEvent(QInputDevice* self, QChildEvent* event);
    friend void QInputDevice_QBaseChildEvent(QInputDevice* self, QChildEvent* event);
    friend void QInputDevice_CustomEvent(QInputDevice* self, QEvent* event);
    friend void QInputDevice_QBaseCustomEvent(QInputDevice* self, QEvent* event);
    friend void QInputDevice_ConnectNotify(QInputDevice* self, const QMetaMethod* signal);
    friend void QInputDevice_QBaseConnectNotify(QInputDevice* self, const QMetaMethod* signal);
    friend void QInputDevice_DisconnectNotify(QInputDevice* self, const QMetaMethod* signal);
    friend void QInputDevice_QBaseDisconnectNotify(QInputDevice* self, const QMetaMethod* signal);
    friend QObject* QInputDevice_Sender(const QInputDevice* self);
    friend QObject* QInputDevice_QBaseSender(const QInputDevice* self);
    friend int QInputDevice_SenderSignalIndex(const QInputDevice* self);
    friend int QInputDevice_QBaseSenderSignalIndex(const QInputDevice* self);
    friend int QInputDevice_Receivers(const QInputDevice* self, const char* signal);
    friend int QInputDevice_QBaseReceivers(const QInputDevice* self, const char* signal);
    friend bool QInputDevice_IsSignalConnected(const QInputDevice* self, const QMetaMethod* signal);
    friend bool QInputDevice_QBaseIsSignalConnected(const QInputDevice* self, const QMetaMethod* signal);
};

#endif
