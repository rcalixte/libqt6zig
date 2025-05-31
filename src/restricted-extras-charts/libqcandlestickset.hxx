#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_CHARTSC_LIBVIRTUALQCANDLESTICKSET_H
#define SRC_RESTRICTED_EXTRAS_CHARTSC_LIBVIRTUALQCANDLESTICKSET_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QCandlestickSet so that we can call protected methods
class VirtualQCandlestickSet final : public QCandlestickSet {

  public:
    // Virtual class boolean flag
    bool isVirtualQCandlestickSet = true;

    // Virtual class public types (including callbacks)
    using QCandlestickSet_Metacall_Callback = int (*)(QCandlestickSet*, int, int, void**);
    using QCandlestickSet_Event_Callback = bool (*)(QCandlestickSet*, QEvent*);
    using QCandlestickSet_EventFilter_Callback = bool (*)(QCandlestickSet*, QObject*, QEvent*);
    using QCandlestickSet_TimerEvent_Callback = void (*)(QCandlestickSet*, QTimerEvent*);
    using QCandlestickSet_ChildEvent_Callback = void (*)(QCandlestickSet*, QChildEvent*);
    using QCandlestickSet_CustomEvent_Callback = void (*)(QCandlestickSet*, QEvent*);
    using QCandlestickSet_ConnectNotify_Callback = void (*)(QCandlestickSet*, QMetaMethod*);
    using QCandlestickSet_DisconnectNotify_Callback = void (*)(QCandlestickSet*, QMetaMethod*);
    using QCandlestickSet_Sender_Callback = QObject* (*)();
    using QCandlestickSet_SenderSignalIndex_Callback = int (*)();
    using QCandlestickSet_Receivers_Callback = int (*)(const QCandlestickSet*, const char*);
    using QCandlestickSet_IsSignalConnected_Callback = bool (*)(const QCandlestickSet*, QMetaMethod*);

  protected:
    // Instance callback storage
    QCandlestickSet_Metacall_Callback qcandlestickset_metacall_callback = nullptr;
    QCandlestickSet_Event_Callback qcandlestickset_event_callback = nullptr;
    QCandlestickSet_EventFilter_Callback qcandlestickset_eventfilter_callback = nullptr;
    QCandlestickSet_TimerEvent_Callback qcandlestickset_timerevent_callback = nullptr;
    QCandlestickSet_ChildEvent_Callback qcandlestickset_childevent_callback = nullptr;
    QCandlestickSet_CustomEvent_Callback qcandlestickset_customevent_callback = nullptr;
    QCandlestickSet_ConnectNotify_Callback qcandlestickset_connectnotify_callback = nullptr;
    QCandlestickSet_DisconnectNotify_Callback qcandlestickset_disconnectnotify_callback = nullptr;
    QCandlestickSet_Sender_Callback qcandlestickset_sender_callback = nullptr;
    QCandlestickSet_SenderSignalIndex_Callback qcandlestickset_sendersignalindex_callback = nullptr;
    QCandlestickSet_Receivers_Callback qcandlestickset_receivers_callback = nullptr;
    QCandlestickSet_IsSignalConnected_Callback qcandlestickset_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qcandlestickset_metacall_isbase = false;
    mutable bool qcandlestickset_event_isbase = false;
    mutable bool qcandlestickset_eventfilter_isbase = false;
    mutable bool qcandlestickset_timerevent_isbase = false;
    mutable bool qcandlestickset_childevent_isbase = false;
    mutable bool qcandlestickset_customevent_isbase = false;
    mutable bool qcandlestickset_connectnotify_isbase = false;
    mutable bool qcandlestickset_disconnectnotify_isbase = false;
    mutable bool qcandlestickset_sender_isbase = false;
    mutable bool qcandlestickset_sendersignalindex_isbase = false;
    mutable bool qcandlestickset_receivers_isbase = false;
    mutable bool qcandlestickset_issignalconnected_isbase = false;

  public:
    VirtualQCandlestickSet() : QCandlestickSet(){};
    VirtualQCandlestickSet(qreal open, qreal high, qreal low, qreal close) : QCandlestickSet(open, high, low, close){};
    VirtualQCandlestickSet(qreal timestamp) : QCandlestickSet(timestamp){};
    VirtualQCandlestickSet(qreal timestamp, QObject* parent) : QCandlestickSet(timestamp, parent){};
    VirtualQCandlestickSet(qreal open, qreal high, qreal low, qreal close, qreal timestamp) : QCandlestickSet(open, high, low, close, timestamp){};
    VirtualQCandlestickSet(qreal open, qreal high, qreal low, qreal close, qreal timestamp, QObject* parent) : QCandlestickSet(open, high, low, close, timestamp, parent){};

    ~VirtualQCandlestickSet() {
        qcandlestickset_metacall_callback = nullptr;
        qcandlestickset_event_callback = nullptr;
        qcandlestickset_eventfilter_callback = nullptr;
        qcandlestickset_timerevent_callback = nullptr;
        qcandlestickset_childevent_callback = nullptr;
        qcandlestickset_customevent_callback = nullptr;
        qcandlestickset_connectnotify_callback = nullptr;
        qcandlestickset_disconnectnotify_callback = nullptr;
        qcandlestickset_sender_callback = nullptr;
        qcandlestickset_sendersignalindex_callback = nullptr;
        qcandlestickset_receivers_callback = nullptr;
        qcandlestickset_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setQCandlestickSet_Metacall_Callback(QCandlestickSet_Metacall_Callback cb) { qcandlestickset_metacall_callback = cb; }
    inline void setQCandlestickSet_Event_Callback(QCandlestickSet_Event_Callback cb) { qcandlestickset_event_callback = cb; }
    inline void setQCandlestickSet_EventFilter_Callback(QCandlestickSet_EventFilter_Callback cb) { qcandlestickset_eventfilter_callback = cb; }
    inline void setQCandlestickSet_TimerEvent_Callback(QCandlestickSet_TimerEvent_Callback cb) { qcandlestickset_timerevent_callback = cb; }
    inline void setQCandlestickSet_ChildEvent_Callback(QCandlestickSet_ChildEvent_Callback cb) { qcandlestickset_childevent_callback = cb; }
    inline void setQCandlestickSet_CustomEvent_Callback(QCandlestickSet_CustomEvent_Callback cb) { qcandlestickset_customevent_callback = cb; }
    inline void setQCandlestickSet_ConnectNotify_Callback(QCandlestickSet_ConnectNotify_Callback cb) { qcandlestickset_connectnotify_callback = cb; }
    inline void setQCandlestickSet_DisconnectNotify_Callback(QCandlestickSet_DisconnectNotify_Callback cb) { qcandlestickset_disconnectnotify_callback = cb; }
    inline void setQCandlestickSet_Sender_Callback(QCandlestickSet_Sender_Callback cb) { qcandlestickset_sender_callback = cb; }
    inline void setQCandlestickSet_SenderSignalIndex_Callback(QCandlestickSet_SenderSignalIndex_Callback cb) { qcandlestickset_sendersignalindex_callback = cb; }
    inline void setQCandlestickSet_Receivers_Callback(QCandlestickSet_Receivers_Callback cb) { qcandlestickset_receivers_callback = cb; }
    inline void setQCandlestickSet_IsSignalConnected_Callback(QCandlestickSet_IsSignalConnected_Callback cb) { qcandlestickset_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQCandlestickSet_Metacall_IsBase(bool value) const { qcandlestickset_metacall_isbase = value; }
    inline void setQCandlestickSet_Event_IsBase(bool value) const { qcandlestickset_event_isbase = value; }
    inline void setQCandlestickSet_EventFilter_IsBase(bool value) const { qcandlestickset_eventfilter_isbase = value; }
    inline void setQCandlestickSet_TimerEvent_IsBase(bool value) const { qcandlestickset_timerevent_isbase = value; }
    inline void setQCandlestickSet_ChildEvent_IsBase(bool value) const { qcandlestickset_childevent_isbase = value; }
    inline void setQCandlestickSet_CustomEvent_IsBase(bool value) const { qcandlestickset_customevent_isbase = value; }
    inline void setQCandlestickSet_ConnectNotify_IsBase(bool value) const { qcandlestickset_connectnotify_isbase = value; }
    inline void setQCandlestickSet_DisconnectNotify_IsBase(bool value) const { qcandlestickset_disconnectnotify_isbase = value; }
    inline void setQCandlestickSet_Sender_IsBase(bool value) const { qcandlestickset_sender_isbase = value; }
    inline void setQCandlestickSet_SenderSignalIndex_IsBase(bool value) const { qcandlestickset_sendersignalindex_isbase = value; }
    inline void setQCandlestickSet_Receivers_IsBase(bool value) const { qcandlestickset_receivers_isbase = value; }
    inline void setQCandlestickSet_IsSignalConnected_IsBase(bool value) const { qcandlestickset_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qcandlestickset_metacall_isbase) {
            qcandlestickset_metacall_isbase = false;
            return QCandlestickSet::qt_metacall(param1, param2, param3);
        } else if (qcandlestickset_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qcandlestickset_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QCandlestickSet::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qcandlestickset_event_isbase) {
            qcandlestickset_event_isbase = false;
            return QCandlestickSet::event(event);
        } else if (qcandlestickset_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qcandlestickset_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QCandlestickSet::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qcandlestickset_eventfilter_isbase) {
            qcandlestickset_eventfilter_isbase = false;
            return QCandlestickSet::eventFilter(watched, event);
        } else if (qcandlestickset_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qcandlestickset_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QCandlestickSet::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qcandlestickset_timerevent_isbase) {
            qcandlestickset_timerevent_isbase = false;
            QCandlestickSet::timerEvent(event);
        } else if (qcandlestickset_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qcandlestickset_timerevent_callback(this, cbval1);
        } else {
            QCandlestickSet::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qcandlestickset_childevent_isbase) {
            qcandlestickset_childevent_isbase = false;
            QCandlestickSet::childEvent(event);
        } else if (qcandlestickset_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qcandlestickset_childevent_callback(this, cbval1);
        } else {
            QCandlestickSet::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qcandlestickset_customevent_isbase) {
            qcandlestickset_customevent_isbase = false;
            QCandlestickSet::customEvent(event);
        } else if (qcandlestickset_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qcandlestickset_customevent_callback(this, cbval1);
        } else {
            QCandlestickSet::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qcandlestickset_connectnotify_isbase) {
            qcandlestickset_connectnotify_isbase = false;
            QCandlestickSet::connectNotify(signal);
        } else if (qcandlestickset_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qcandlestickset_connectnotify_callback(this, cbval1);
        } else {
            QCandlestickSet::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qcandlestickset_disconnectnotify_isbase) {
            qcandlestickset_disconnectnotify_isbase = false;
            QCandlestickSet::disconnectNotify(signal);
        } else if (qcandlestickset_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qcandlestickset_disconnectnotify_callback(this, cbval1);
        } else {
            QCandlestickSet::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qcandlestickset_sender_isbase) {
            qcandlestickset_sender_isbase = false;
            return QCandlestickSet::sender();
        } else if (qcandlestickset_sender_callback != nullptr) {
            QObject* callback_ret = qcandlestickset_sender_callback();
            return callback_ret;
        } else {
            return QCandlestickSet::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qcandlestickset_sendersignalindex_isbase) {
            qcandlestickset_sendersignalindex_isbase = false;
            return QCandlestickSet::senderSignalIndex();
        } else if (qcandlestickset_sendersignalindex_callback != nullptr) {
            int callback_ret = qcandlestickset_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QCandlestickSet::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qcandlestickset_receivers_isbase) {
            qcandlestickset_receivers_isbase = false;
            return QCandlestickSet::receivers(signal);
        } else if (qcandlestickset_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qcandlestickset_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QCandlestickSet::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qcandlestickset_issignalconnected_isbase) {
            qcandlestickset_issignalconnected_isbase = false;
            return QCandlestickSet::isSignalConnected(signal);
        } else if (qcandlestickset_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qcandlestickset_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QCandlestickSet::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void QCandlestickSet_TimerEvent(QCandlestickSet* self, QTimerEvent* event);
    friend void QCandlestickSet_QBaseTimerEvent(QCandlestickSet* self, QTimerEvent* event);
    friend void QCandlestickSet_ChildEvent(QCandlestickSet* self, QChildEvent* event);
    friend void QCandlestickSet_QBaseChildEvent(QCandlestickSet* self, QChildEvent* event);
    friend void QCandlestickSet_CustomEvent(QCandlestickSet* self, QEvent* event);
    friend void QCandlestickSet_QBaseCustomEvent(QCandlestickSet* self, QEvent* event);
    friend void QCandlestickSet_ConnectNotify(QCandlestickSet* self, const QMetaMethod* signal);
    friend void QCandlestickSet_QBaseConnectNotify(QCandlestickSet* self, const QMetaMethod* signal);
    friend void QCandlestickSet_DisconnectNotify(QCandlestickSet* self, const QMetaMethod* signal);
    friend void QCandlestickSet_QBaseDisconnectNotify(QCandlestickSet* self, const QMetaMethod* signal);
    friend QObject* QCandlestickSet_Sender(const QCandlestickSet* self);
    friend QObject* QCandlestickSet_QBaseSender(const QCandlestickSet* self);
    friend int QCandlestickSet_SenderSignalIndex(const QCandlestickSet* self);
    friend int QCandlestickSet_QBaseSenderSignalIndex(const QCandlestickSet* self);
    friend int QCandlestickSet_Receivers(const QCandlestickSet* self, const char* signal);
    friend int QCandlestickSet_QBaseReceivers(const QCandlestickSet* self, const char* signal);
    friend bool QCandlestickSet_IsSignalConnected(const QCandlestickSet* self, const QMetaMethod* signal);
    friend bool QCandlestickSet_QBaseIsSignalConnected(const QCandlestickSet* self, const QMetaMethod* signal);
};

#endif
