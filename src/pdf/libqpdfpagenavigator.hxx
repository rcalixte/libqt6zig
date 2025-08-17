#pragma once
#ifndef SRC_PDFC_LIBVIRTUALQPDFPAGENAVIGATOR_H
#define SRC_PDFC_LIBVIRTUALQPDFPAGENAVIGATOR_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QPdfPageNavigator so that we can call protected methods
class VirtualQPdfPageNavigator final : public QPdfPageNavigator {

  public:
    // Virtual class boolean flag
    bool isVirtualQPdfPageNavigator = true;

    // Virtual class public types (including callbacks)
    using QPdfPageNavigator_Metacall_Callback = int (*)(QPdfPageNavigator*, int, int, void**);
    using QPdfPageNavigator_Event_Callback = bool (*)(QPdfPageNavigator*, QEvent*);
    using QPdfPageNavigator_EventFilter_Callback = bool (*)(QPdfPageNavigator*, QObject*, QEvent*);
    using QPdfPageNavigator_TimerEvent_Callback = void (*)(QPdfPageNavigator*, QTimerEvent*);
    using QPdfPageNavigator_ChildEvent_Callback = void (*)(QPdfPageNavigator*, QChildEvent*);
    using QPdfPageNavigator_CustomEvent_Callback = void (*)(QPdfPageNavigator*, QEvent*);
    using QPdfPageNavigator_ConnectNotify_Callback = void (*)(QPdfPageNavigator*, QMetaMethod*);
    using QPdfPageNavigator_DisconnectNotify_Callback = void (*)(QPdfPageNavigator*, QMetaMethod*);
    using QPdfPageNavigator_CurrentLink_Callback = QPdfLink* (*)();
    using QPdfPageNavigator_Sender_Callback = QObject* (*)();
    using QPdfPageNavigator_SenderSignalIndex_Callback = int (*)();
    using QPdfPageNavigator_Receivers_Callback = int (*)(const QPdfPageNavigator*, const char*);
    using QPdfPageNavigator_IsSignalConnected_Callback = bool (*)(const QPdfPageNavigator*, QMetaMethod*);

  protected:
    // Instance callback storage
    QPdfPageNavigator_Metacall_Callback qpdfpagenavigator_metacall_callback = nullptr;
    QPdfPageNavigator_Event_Callback qpdfpagenavigator_event_callback = nullptr;
    QPdfPageNavigator_EventFilter_Callback qpdfpagenavigator_eventfilter_callback = nullptr;
    QPdfPageNavigator_TimerEvent_Callback qpdfpagenavigator_timerevent_callback = nullptr;
    QPdfPageNavigator_ChildEvent_Callback qpdfpagenavigator_childevent_callback = nullptr;
    QPdfPageNavigator_CustomEvent_Callback qpdfpagenavigator_customevent_callback = nullptr;
    QPdfPageNavigator_ConnectNotify_Callback qpdfpagenavigator_connectnotify_callback = nullptr;
    QPdfPageNavigator_DisconnectNotify_Callback qpdfpagenavigator_disconnectnotify_callback = nullptr;
    QPdfPageNavigator_CurrentLink_Callback qpdfpagenavigator_currentlink_callback = nullptr;
    QPdfPageNavigator_Sender_Callback qpdfpagenavigator_sender_callback = nullptr;
    QPdfPageNavigator_SenderSignalIndex_Callback qpdfpagenavigator_sendersignalindex_callback = nullptr;
    QPdfPageNavigator_Receivers_Callback qpdfpagenavigator_receivers_callback = nullptr;
    QPdfPageNavigator_IsSignalConnected_Callback qpdfpagenavigator_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qpdfpagenavigator_metacall_isbase = false;
    mutable bool qpdfpagenavigator_event_isbase = false;
    mutable bool qpdfpagenavigator_eventfilter_isbase = false;
    mutable bool qpdfpagenavigator_timerevent_isbase = false;
    mutable bool qpdfpagenavigator_childevent_isbase = false;
    mutable bool qpdfpagenavigator_customevent_isbase = false;
    mutable bool qpdfpagenavigator_connectnotify_isbase = false;
    mutable bool qpdfpagenavigator_disconnectnotify_isbase = false;
    mutable bool qpdfpagenavigator_currentlink_isbase = false;
    mutable bool qpdfpagenavigator_sender_isbase = false;
    mutable bool qpdfpagenavigator_sendersignalindex_isbase = false;
    mutable bool qpdfpagenavigator_receivers_isbase = false;
    mutable bool qpdfpagenavigator_issignalconnected_isbase = false;

  public:
    VirtualQPdfPageNavigator() : QPdfPageNavigator() {};
    VirtualQPdfPageNavigator(QObject* parent) : QPdfPageNavigator(parent) {};

    ~VirtualQPdfPageNavigator() {
        qpdfpagenavigator_metacall_callback = nullptr;
        qpdfpagenavigator_event_callback = nullptr;
        qpdfpagenavigator_eventfilter_callback = nullptr;
        qpdfpagenavigator_timerevent_callback = nullptr;
        qpdfpagenavigator_childevent_callback = nullptr;
        qpdfpagenavigator_customevent_callback = nullptr;
        qpdfpagenavigator_connectnotify_callback = nullptr;
        qpdfpagenavigator_disconnectnotify_callback = nullptr;
        qpdfpagenavigator_currentlink_callback = nullptr;
        qpdfpagenavigator_sender_callback = nullptr;
        qpdfpagenavigator_sendersignalindex_callback = nullptr;
        qpdfpagenavigator_receivers_callback = nullptr;
        qpdfpagenavigator_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setQPdfPageNavigator_Metacall_Callback(QPdfPageNavigator_Metacall_Callback cb) { qpdfpagenavigator_metacall_callback = cb; }
    inline void setQPdfPageNavigator_Event_Callback(QPdfPageNavigator_Event_Callback cb) { qpdfpagenavigator_event_callback = cb; }
    inline void setQPdfPageNavigator_EventFilter_Callback(QPdfPageNavigator_EventFilter_Callback cb) { qpdfpagenavigator_eventfilter_callback = cb; }
    inline void setQPdfPageNavigator_TimerEvent_Callback(QPdfPageNavigator_TimerEvent_Callback cb) { qpdfpagenavigator_timerevent_callback = cb; }
    inline void setQPdfPageNavigator_ChildEvent_Callback(QPdfPageNavigator_ChildEvent_Callback cb) { qpdfpagenavigator_childevent_callback = cb; }
    inline void setQPdfPageNavigator_CustomEvent_Callback(QPdfPageNavigator_CustomEvent_Callback cb) { qpdfpagenavigator_customevent_callback = cb; }
    inline void setQPdfPageNavigator_ConnectNotify_Callback(QPdfPageNavigator_ConnectNotify_Callback cb) { qpdfpagenavigator_connectnotify_callback = cb; }
    inline void setQPdfPageNavigator_DisconnectNotify_Callback(QPdfPageNavigator_DisconnectNotify_Callback cb) { qpdfpagenavigator_disconnectnotify_callback = cb; }
    inline void setQPdfPageNavigator_CurrentLink_Callback(QPdfPageNavigator_CurrentLink_Callback cb) { qpdfpagenavigator_currentlink_callback = cb; }
    inline void setQPdfPageNavigator_Sender_Callback(QPdfPageNavigator_Sender_Callback cb) { qpdfpagenavigator_sender_callback = cb; }
    inline void setQPdfPageNavigator_SenderSignalIndex_Callback(QPdfPageNavigator_SenderSignalIndex_Callback cb) { qpdfpagenavigator_sendersignalindex_callback = cb; }
    inline void setQPdfPageNavigator_Receivers_Callback(QPdfPageNavigator_Receivers_Callback cb) { qpdfpagenavigator_receivers_callback = cb; }
    inline void setQPdfPageNavigator_IsSignalConnected_Callback(QPdfPageNavigator_IsSignalConnected_Callback cb) { qpdfpagenavigator_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQPdfPageNavigator_Metacall_IsBase(bool value) const { qpdfpagenavigator_metacall_isbase = value; }
    inline void setQPdfPageNavigator_Event_IsBase(bool value) const { qpdfpagenavigator_event_isbase = value; }
    inline void setQPdfPageNavigator_EventFilter_IsBase(bool value) const { qpdfpagenavigator_eventfilter_isbase = value; }
    inline void setQPdfPageNavigator_TimerEvent_IsBase(bool value) const { qpdfpagenavigator_timerevent_isbase = value; }
    inline void setQPdfPageNavigator_ChildEvent_IsBase(bool value) const { qpdfpagenavigator_childevent_isbase = value; }
    inline void setQPdfPageNavigator_CustomEvent_IsBase(bool value) const { qpdfpagenavigator_customevent_isbase = value; }
    inline void setQPdfPageNavigator_ConnectNotify_IsBase(bool value) const { qpdfpagenavigator_connectnotify_isbase = value; }
    inline void setQPdfPageNavigator_DisconnectNotify_IsBase(bool value) const { qpdfpagenavigator_disconnectnotify_isbase = value; }
    inline void setQPdfPageNavigator_CurrentLink_IsBase(bool value) const { qpdfpagenavigator_currentlink_isbase = value; }
    inline void setQPdfPageNavigator_Sender_IsBase(bool value) const { qpdfpagenavigator_sender_isbase = value; }
    inline void setQPdfPageNavigator_SenderSignalIndex_IsBase(bool value) const { qpdfpagenavigator_sendersignalindex_isbase = value; }
    inline void setQPdfPageNavigator_Receivers_IsBase(bool value) const { qpdfpagenavigator_receivers_isbase = value; }
    inline void setQPdfPageNavigator_IsSignalConnected_IsBase(bool value) const { qpdfpagenavigator_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qpdfpagenavigator_metacall_isbase) {
            qpdfpagenavigator_metacall_isbase = false;
            return QPdfPageNavigator::qt_metacall(param1, param2, param3);
        } else if (qpdfpagenavigator_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qpdfpagenavigator_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QPdfPageNavigator::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qpdfpagenavigator_event_isbase) {
            qpdfpagenavigator_event_isbase = false;
            return QPdfPageNavigator::event(event);
        } else if (qpdfpagenavigator_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qpdfpagenavigator_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QPdfPageNavigator::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qpdfpagenavigator_eventfilter_isbase) {
            qpdfpagenavigator_eventfilter_isbase = false;
            return QPdfPageNavigator::eventFilter(watched, event);
        } else if (qpdfpagenavigator_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qpdfpagenavigator_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QPdfPageNavigator::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qpdfpagenavigator_timerevent_isbase) {
            qpdfpagenavigator_timerevent_isbase = false;
            QPdfPageNavigator::timerEvent(event);
        } else if (qpdfpagenavigator_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qpdfpagenavigator_timerevent_callback(this, cbval1);
        } else {
            QPdfPageNavigator::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qpdfpagenavigator_childevent_isbase) {
            qpdfpagenavigator_childevent_isbase = false;
            QPdfPageNavigator::childEvent(event);
        } else if (qpdfpagenavigator_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qpdfpagenavigator_childevent_callback(this, cbval1);
        } else {
            QPdfPageNavigator::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qpdfpagenavigator_customevent_isbase) {
            qpdfpagenavigator_customevent_isbase = false;
            QPdfPageNavigator::customEvent(event);
        } else if (qpdfpagenavigator_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qpdfpagenavigator_customevent_callback(this, cbval1);
        } else {
            QPdfPageNavigator::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qpdfpagenavigator_connectnotify_isbase) {
            qpdfpagenavigator_connectnotify_isbase = false;
            QPdfPageNavigator::connectNotify(signal);
        } else if (qpdfpagenavigator_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qpdfpagenavigator_connectnotify_callback(this, cbval1);
        } else {
            QPdfPageNavigator::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qpdfpagenavigator_disconnectnotify_isbase) {
            qpdfpagenavigator_disconnectnotify_isbase = false;
            QPdfPageNavigator::disconnectNotify(signal);
        } else if (qpdfpagenavigator_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qpdfpagenavigator_disconnectnotify_callback(this, cbval1);
        } else {
            QPdfPageNavigator::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QPdfLink currentLink() const {
        if (qpdfpagenavigator_currentlink_isbase) {
            qpdfpagenavigator_currentlink_isbase = false;
            return QPdfPageNavigator::currentLink();
        } else if (qpdfpagenavigator_currentlink_callback != nullptr) {
            QPdfLink* callback_ret = qpdfpagenavigator_currentlink_callback();
            return *callback_ret;
        } else {
            return QPdfPageNavigator::currentLink();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qpdfpagenavigator_sender_isbase) {
            qpdfpagenavigator_sender_isbase = false;
            return QPdfPageNavigator::sender();
        } else if (qpdfpagenavigator_sender_callback != nullptr) {
            QObject* callback_ret = qpdfpagenavigator_sender_callback();
            return callback_ret;
        } else {
            return QPdfPageNavigator::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qpdfpagenavigator_sendersignalindex_isbase) {
            qpdfpagenavigator_sendersignalindex_isbase = false;
            return QPdfPageNavigator::senderSignalIndex();
        } else if (qpdfpagenavigator_sendersignalindex_callback != nullptr) {
            int callback_ret = qpdfpagenavigator_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QPdfPageNavigator::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qpdfpagenavigator_receivers_isbase) {
            qpdfpagenavigator_receivers_isbase = false;
            return QPdfPageNavigator::receivers(signal);
        } else if (qpdfpagenavigator_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qpdfpagenavigator_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QPdfPageNavigator::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qpdfpagenavigator_issignalconnected_isbase) {
            qpdfpagenavigator_issignalconnected_isbase = false;
            return QPdfPageNavigator::isSignalConnected(signal);
        } else if (qpdfpagenavigator_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qpdfpagenavigator_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QPdfPageNavigator::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void QPdfPageNavigator_TimerEvent(QPdfPageNavigator* self, QTimerEvent* event);
    friend void QPdfPageNavigator_QBaseTimerEvent(QPdfPageNavigator* self, QTimerEvent* event);
    friend void QPdfPageNavigator_ChildEvent(QPdfPageNavigator* self, QChildEvent* event);
    friend void QPdfPageNavigator_QBaseChildEvent(QPdfPageNavigator* self, QChildEvent* event);
    friend void QPdfPageNavigator_CustomEvent(QPdfPageNavigator* self, QEvent* event);
    friend void QPdfPageNavigator_QBaseCustomEvent(QPdfPageNavigator* self, QEvent* event);
    friend void QPdfPageNavigator_ConnectNotify(QPdfPageNavigator* self, const QMetaMethod* signal);
    friend void QPdfPageNavigator_QBaseConnectNotify(QPdfPageNavigator* self, const QMetaMethod* signal);
    friend void QPdfPageNavigator_DisconnectNotify(QPdfPageNavigator* self, const QMetaMethod* signal);
    friend void QPdfPageNavigator_QBaseDisconnectNotify(QPdfPageNavigator* self, const QMetaMethod* signal);
    friend QPdfLink* QPdfPageNavigator_CurrentLink(const QPdfPageNavigator* self);
    friend QPdfLink* QPdfPageNavigator_QBaseCurrentLink(const QPdfPageNavigator* self);
    friend QObject* QPdfPageNavigator_Sender(const QPdfPageNavigator* self);
    friend QObject* QPdfPageNavigator_QBaseSender(const QPdfPageNavigator* self);
    friend int QPdfPageNavigator_SenderSignalIndex(const QPdfPageNavigator* self);
    friend int QPdfPageNavigator_QBaseSenderSignalIndex(const QPdfPageNavigator* self);
    friend int QPdfPageNavigator_Receivers(const QPdfPageNavigator* self, const char* signal);
    friend int QPdfPageNavigator_QBaseReceivers(const QPdfPageNavigator* self, const char* signal);
    friend bool QPdfPageNavigator_IsSignalConnected(const QPdfPageNavigator* self, const QMetaMethod* signal);
    friend bool QPdfPageNavigator_QBaseIsSignalConnected(const QPdfPageNavigator* self, const QMetaMethod* signal);
};

#endif
