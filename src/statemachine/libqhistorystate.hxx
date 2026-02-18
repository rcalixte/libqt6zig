#pragma once
#ifndef SRC_STATEMACHINEC_LIBVIRTUALQHISTORYSTATE_H
#define SRC_STATEMACHINEC_LIBVIRTUALQHISTORYSTATE_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QHistoryState so that we can call protected methods
class VirtualQHistoryState final : public QHistoryState {

  public:
    // Virtual class boolean flag
    bool isVirtualQHistoryState = true;

    // Virtual class public types (including callbacks)
    using QHistoryState_MetaObject_Callback = QMetaObject* (*)();
    using QHistoryState_Metacast_Callback = void* (*)(QHistoryState*, const char*);
    using QHistoryState_Metacall_Callback = int (*)(QHistoryState*, int, int, void**);
    using QHistoryState_OnEntry_Callback = void (*)(QHistoryState*, QEvent*);
    using QHistoryState_OnExit_Callback = void (*)(QHistoryState*, QEvent*);
    using QHistoryState_Event_Callback = bool (*)(QHistoryState*, QEvent*);
    using QHistoryState_EventFilter_Callback = bool (*)(QHistoryState*, QObject*, QEvent*);
    using QHistoryState_TimerEvent_Callback = void (*)(QHistoryState*, QTimerEvent*);
    using QHistoryState_ChildEvent_Callback = void (*)(QHistoryState*, QChildEvent*);
    using QHistoryState_CustomEvent_Callback = void (*)(QHistoryState*, QEvent*);
    using QHistoryState_ConnectNotify_Callback = void (*)(QHistoryState*, QMetaMethod*);
    using QHistoryState_DisconnectNotify_Callback = void (*)(QHistoryState*, QMetaMethod*);
    using QHistoryState_Sender_Callback = QObject* (*)();
    using QHistoryState_SenderSignalIndex_Callback = int (*)();
    using QHistoryState_Receivers_Callback = int (*)(const QHistoryState*, const char*);
    using QHistoryState_IsSignalConnected_Callback = bool (*)(const QHistoryState*, QMetaMethod*);

  protected:
    // Instance callback storage
    QHistoryState_MetaObject_Callback qhistorystate_metaobject_callback = nullptr;
    QHistoryState_Metacast_Callback qhistorystate_metacast_callback = nullptr;
    QHistoryState_Metacall_Callback qhistorystate_metacall_callback = nullptr;
    QHistoryState_OnEntry_Callback qhistorystate_onentry_callback = nullptr;
    QHistoryState_OnExit_Callback qhistorystate_onexit_callback = nullptr;
    QHistoryState_Event_Callback qhistorystate_event_callback = nullptr;
    QHistoryState_EventFilter_Callback qhistorystate_eventfilter_callback = nullptr;
    QHistoryState_TimerEvent_Callback qhistorystate_timerevent_callback = nullptr;
    QHistoryState_ChildEvent_Callback qhistorystate_childevent_callback = nullptr;
    QHistoryState_CustomEvent_Callback qhistorystate_customevent_callback = nullptr;
    QHistoryState_ConnectNotify_Callback qhistorystate_connectnotify_callback = nullptr;
    QHistoryState_DisconnectNotify_Callback qhistorystate_disconnectnotify_callback = nullptr;
    QHistoryState_Sender_Callback qhistorystate_sender_callback = nullptr;
    QHistoryState_SenderSignalIndex_Callback qhistorystate_sendersignalindex_callback = nullptr;
    QHistoryState_Receivers_Callback qhistorystate_receivers_callback = nullptr;
    QHistoryState_IsSignalConnected_Callback qhistorystate_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qhistorystate_metaobject_isbase = false;
    mutable bool qhistorystate_metacast_isbase = false;
    mutable bool qhistorystate_metacall_isbase = false;
    mutable bool qhistorystate_onentry_isbase = false;
    mutable bool qhistorystate_onexit_isbase = false;
    mutable bool qhistorystate_event_isbase = false;
    mutable bool qhistorystate_eventfilter_isbase = false;
    mutable bool qhistorystate_timerevent_isbase = false;
    mutable bool qhistorystate_childevent_isbase = false;
    mutable bool qhistorystate_customevent_isbase = false;
    mutable bool qhistorystate_connectnotify_isbase = false;
    mutable bool qhistorystate_disconnectnotify_isbase = false;
    mutable bool qhistorystate_sender_isbase = false;
    mutable bool qhistorystate_sendersignalindex_isbase = false;
    mutable bool qhistorystate_receivers_isbase = false;
    mutable bool qhistorystate_issignalconnected_isbase = false;

  public:
    VirtualQHistoryState() : QHistoryState() {};
    VirtualQHistoryState(QHistoryState::HistoryType typeVal) : QHistoryState(typeVal) {};
    VirtualQHistoryState(QState* parent) : QHistoryState(parent) {};
    VirtualQHistoryState(QHistoryState::HistoryType typeVal, QState* parent) : QHistoryState(typeVal, parent) {};

    ~VirtualQHistoryState() {
        qhistorystate_metaobject_callback = nullptr;
        qhistorystate_metacast_callback = nullptr;
        qhistorystate_metacall_callback = nullptr;
        qhistorystate_onentry_callback = nullptr;
        qhistorystate_onexit_callback = nullptr;
        qhistorystate_event_callback = nullptr;
        qhistorystate_eventfilter_callback = nullptr;
        qhistorystate_timerevent_callback = nullptr;
        qhistorystate_childevent_callback = nullptr;
        qhistorystate_customevent_callback = nullptr;
        qhistorystate_connectnotify_callback = nullptr;
        qhistorystate_disconnectnotify_callback = nullptr;
        qhistorystate_sender_callback = nullptr;
        qhistorystate_sendersignalindex_callback = nullptr;
        qhistorystate_receivers_callback = nullptr;
        qhistorystate_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setQHistoryState_MetaObject_Callback(QHistoryState_MetaObject_Callback cb) { qhistorystate_metaobject_callback = cb; }
    inline void setQHistoryState_Metacast_Callback(QHistoryState_Metacast_Callback cb) { qhistorystate_metacast_callback = cb; }
    inline void setQHistoryState_Metacall_Callback(QHistoryState_Metacall_Callback cb) { qhistorystate_metacall_callback = cb; }
    inline void setQHistoryState_OnEntry_Callback(QHistoryState_OnEntry_Callback cb) { qhistorystate_onentry_callback = cb; }
    inline void setQHistoryState_OnExit_Callback(QHistoryState_OnExit_Callback cb) { qhistorystate_onexit_callback = cb; }
    inline void setQHistoryState_Event_Callback(QHistoryState_Event_Callback cb) { qhistorystate_event_callback = cb; }
    inline void setQHistoryState_EventFilter_Callback(QHistoryState_EventFilter_Callback cb) { qhistorystate_eventfilter_callback = cb; }
    inline void setQHistoryState_TimerEvent_Callback(QHistoryState_TimerEvent_Callback cb) { qhistorystate_timerevent_callback = cb; }
    inline void setQHistoryState_ChildEvent_Callback(QHistoryState_ChildEvent_Callback cb) { qhistorystate_childevent_callback = cb; }
    inline void setQHistoryState_CustomEvent_Callback(QHistoryState_CustomEvent_Callback cb) { qhistorystate_customevent_callback = cb; }
    inline void setQHistoryState_ConnectNotify_Callback(QHistoryState_ConnectNotify_Callback cb) { qhistorystate_connectnotify_callback = cb; }
    inline void setQHistoryState_DisconnectNotify_Callback(QHistoryState_DisconnectNotify_Callback cb) { qhistorystate_disconnectnotify_callback = cb; }
    inline void setQHistoryState_Sender_Callback(QHistoryState_Sender_Callback cb) { qhistorystate_sender_callback = cb; }
    inline void setQHistoryState_SenderSignalIndex_Callback(QHistoryState_SenderSignalIndex_Callback cb) { qhistorystate_sendersignalindex_callback = cb; }
    inline void setQHistoryState_Receivers_Callback(QHistoryState_Receivers_Callback cb) { qhistorystate_receivers_callback = cb; }
    inline void setQHistoryState_IsSignalConnected_Callback(QHistoryState_IsSignalConnected_Callback cb) { qhistorystate_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQHistoryState_MetaObject_IsBase(bool value) const { qhistorystate_metaobject_isbase = value; }
    inline void setQHistoryState_Metacast_IsBase(bool value) const { qhistorystate_metacast_isbase = value; }
    inline void setQHistoryState_Metacall_IsBase(bool value) const { qhistorystate_metacall_isbase = value; }
    inline void setQHistoryState_OnEntry_IsBase(bool value) const { qhistorystate_onentry_isbase = value; }
    inline void setQHistoryState_OnExit_IsBase(bool value) const { qhistorystate_onexit_isbase = value; }
    inline void setQHistoryState_Event_IsBase(bool value) const { qhistorystate_event_isbase = value; }
    inline void setQHistoryState_EventFilter_IsBase(bool value) const { qhistorystate_eventfilter_isbase = value; }
    inline void setQHistoryState_TimerEvent_IsBase(bool value) const { qhistorystate_timerevent_isbase = value; }
    inline void setQHistoryState_ChildEvent_IsBase(bool value) const { qhistorystate_childevent_isbase = value; }
    inline void setQHistoryState_CustomEvent_IsBase(bool value) const { qhistorystate_customevent_isbase = value; }
    inline void setQHistoryState_ConnectNotify_IsBase(bool value) const { qhistorystate_connectnotify_isbase = value; }
    inline void setQHistoryState_DisconnectNotify_IsBase(bool value) const { qhistorystate_disconnectnotify_isbase = value; }
    inline void setQHistoryState_Sender_IsBase(bool value) const { qhistorystate_sender_isbase = value; }
    inline void setQHistoryState_SenderSignalIndex_IsBase(bool value) const { qhistorystate_sendersignalindex_isbase = value; }
    inline void setQHistoryState_Receivers_IsBase(bool value) const { qhistorystate_receivers_isbase = value; }
    inline void setQHistoryState_IsSignalConnected_IsBase(bool value) const { qhistorystate_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qhistorystate_metaobject_isbase) {
            qhistorystate_metaobject_isbase = false;
            return QHistoryState::metaObject();
        } else if (qhistorystate_metaobject_callback != nullptr) {
            QMetaObject* callback_ret = qhistorystate_metaobject_callback();
            return callback_ret;
        } else {
            return QHistoryState::metaObject();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qhistorystate_metacast_isbase) {
            qhistorystate_metacast_isbase = false;
            return QHistoryState::qt_metacast(param1);
        } else if (qhistorystate_metacast_callback != nullptr) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = qhistorystate_metacast_callback(this, cbval1);
            return callback_ret;
        } else {
            return QHistoryState::qt_metacast(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qhistorystate_metacall_isbase) {
            qhistorystate_metacall_isbase = false;
            return QHistoryState::qt_metacall(param1, param2, param3);
        } else if (qhistorystate_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qhistorystate_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QHistoryState::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void onEntry(QEvent* event) override {
        if (qhistorystate_onentry_isbase) {
            qhistorystate_onentry_isbase = false;
            QHistoryState::onEntry(event);
        } else if (qhistorystate_onentry_callback != nullptr) {
            QEvent* cbval1 = event;

            qhistorystate_onentry_callback(this, cbval1);
        } else {
            QHistoryState::onEntry(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void onExit(QEvent* event) override {
        if (qhistorystate_onexit_isbase) {
            qhistorystate_onexit_isbase = false;
            QHistoryState::onExit(event);
        } else if (qhistorystate_onexit_callback != nullptr) {
            QEvent* cbval1 = event;

            qhistorystate_onexit_callback(this, cbval1);
        } else {
            QHistoryState::onExit(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* e) override {
        if (qhistorystate_event_isbase) {
            qhistorystate_event_isbase = false;
            return QHistoryState::event(e);
        } else if (qhistorystate_event_callback != nullptr) {
            QEvent* cbval1 = e;

            bool callback_ret = qhistorystate_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QHistoryState::event(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qhistorystate_eventfilter_isbase) {
            qhistorystate_eventfilter_isbase = false;
            return QHistoryState::eventFilter(watched, event);
        } else if (qhistorystate_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qhistorystate_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QHistoryState::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qhistorystate_timerevent_isbase) {
            qhistorystate_timerevent_isbase = false;
            QHistoryState::timerEvent(event);
        } else if (qhistorystate_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qhistorystate_timerevent_callback(this, cbval1);
        } else {
            QHistoryState::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qhistorystate_childevent_isbase) {
            qhistorystate_childevent_isbase = false;
            QHistoryState::childEvent(event);
        } else if (qhistorystate_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qhistorystate_childevent_callback(this, cbval1);
        } else {
            QHistoryState::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qhistorystate_customevent_isbase) {
            qhistorystate_customevent_isbase = false;
            QHistoryState::customEvent(event);
        } else if (qhistorystate_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qhistorystate_customevent_callback(this, cbval1);
        } else {
            QHistoryState::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qhistorystate_connectnotify_isbase) {
            qhistorystate_connectnotify_isbase = false;
            QHistoryState::connectNotify(signal);
        } else if (qhistorystate_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qhistorystate_connectnotify_callback(this, cbval1);
        } else {
            QHistoryState::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qhistorystate_disconnectnotify_isbase) {
            qhistorystate_disconnectnotify_isbase = false;
            QHistoryState::disconnectNotify(signal);
        } else if (qhistorystate_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qhistorystate_disconnectnotify_callback(this, cbval1);
        } else {
            QHistoryState::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qhistorystate_sender_isbase) {
            qhistorystate_sender_isbase = false;
            return QHistoryState::sender();
        } else if (qhistorystate_sender_callback != nullptr) {
            QObject* callback_ret = qhistorystate_sender_callback();
            return callback_ret;
        } else {
            return QHistoryState::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qhistorystate_sendersignalindex_isbase) {
            qhistorystate_sendersignalindex_isbase = false;
            return QHistoryState::senderSignalIndex();
        } else if (qhistorystate_sendersignalindex_callback != nullptr) {
            int callback_ret = qhistorystate_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QHistoryState::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qhistorystate_receivers_isbase) {
            qhistorystate_receivers_isbase = false;
            return QHistoryState::receivers(signal);
        } else if (qhistorystate_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qhistorystate_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QHistoryState::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qhistorystate_issignalconnected_isbase) {
            qhistorystate_issignalconnected_isbase = false;
            return QHistoryState::isSignalConnected(signal);
        } else if (qhistorystate_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qhistorystate_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QHistoryState::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void QHistoryState_OnEntry(QHistoryState* self, QEvent* event);
    friend void QHistoryState_QBaseOnEntry(QHistoryState* self, QEvent* event);
    friend void QHistoryState_OnExit(QHistoryState* self, QEvent* event);
    friend void QHistoryState_QBaseOnExit(QHistoryState* self, QEvent* event);
    friend bool QHistoryState_Event(QHistoryState* self, QEvent* e);
    friend bool QHistoryState_QBaseEvent(QHistoryState* self, QEvent* e);
    friend void QHistoryState_TimerEvent(QHistoryState* self, QTimerEvent* event);
    friend void QHistoryState_QBaseTimerEvent(QHistoryState* self, QTimerEvent* event);
    friend void QHistoryState_ChildEvent(QHistoryState* self, QChildEvent* event);
    friend void QHistoryState_QBaseChildEvent(QHistoryState* self, QChildEvent* event);
    friend void QHistoryState_CustomEvent(QHistoryState* self, QEvent* event);
    friend void QHistoryState_QBaseCustomEvent(QHistoryState* self, QEvent* event);
    friend void QHistoryState_ConnectNotify(QHistoryState* self, const QMetaMethod* signal);
    friend void QHistoryState_QBaseConnectNotify(QHistoryState* self, const QMetaMethod* signal);
    friend void QHistoryState_DisconnectNotify(QHistoryState* self, const QMetaMethod* signal);
    friend void QHistoryState_QBaseDisconnectNotify(QHistoryState* self, const QMetaMethod* signal);
    friend QObject* QHistoryState_Sender(const QHistoryState* self);
    friend QObject* QHistoryState_QBaseSender(const QHistoryState* self);
    friend int QHistoryState_SenderSignalIndex(const QHistoryState* self);
    friend int QHistoryState_QBaseSenderSignalIndex(const QHistoryState* self);
    friend int QHistoryState_Receivers(const QHistoryState* self, const char* signal);
    friend int QHistoryState_QBaseReceivers(const QHistoryState* self, const char* signal);
    friend bool QHistoryState_IsSignalConnected(const QHistoryState* self, const QMetaMethod* signal);
    friend bool QHistoryState_QBaseIsSignalConnected(const QHistoryState* self, const QMetaMethod* signal);
};

#endif
