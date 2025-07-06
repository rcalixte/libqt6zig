#pragma once
#ifndef SRCC_LIBVIRTUALQTEXTTABLE_H
#define SRCC_LIBVIRTUALQTEXTTABLE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QTextTable so that we can call protected methods
class VirtualQTextTable final : public QTextTable {

  public:
    // Virtual class boolean flag
    bool isVirtualQTextTable = true;

    // Virtual class public types (including callbacks)
    using QTextTable_Metacall_Callback = int (*)(QTextTable*, int, int, void**);
    using QTextTable_Event_Callback = bool (*)(QTextTable*, QEvent*);
    using QTextTable_EventFilter_Callback = bool (*)(QTextTable*, QObject*, QEvent*);
    using QTextTable_TimerEvent_Callback = void (*)(QTextTable*, QTimerEvent*);
    using QTextTable_ChildEvent_Callback = void (*)(QTextTable*, QChildEvent*);
    using QTextTable_CustomEvent_Callback = void (*)(QTextTable*, QEvent*);
    using QTextTable_ConnectNotify_Callback = void (*)(QTextTable*, QMetaMethod*);
    using QTextTable_DisconnectNotify_Callback = void (*)(QTextTable*, QMetaMethod*);
    using QTextTable_Sender_Callback = QObject* (*)();
    using QTextTable_SenderSignalIndex_Callback = int (*)();
    using QTextTable_Receivers_Callback = int (*)(const QTextTable*, const char*);
    using QTextTable_IsSignalConnected_Callback = bool (*)(const QTextTable*, QMetaMethod*);

  protected:
    // Instance callback storage
    QTextTable_Metacall_Callback qtexttable_metacall_callback = nullptr;
    QTextTable_Event_Callback qtexttable_event_callback = nullptr;
    QTextTable_EventFilter_Callback qtexttable_eventfilter_callback = nullptr;
    QTextTable_TimerEvent_Callback qtexttable_timerevent_callback = nullptr;
    QTextTable_ChildEvent_Callback qtexttable_childevent_callback = nullptr;
    QTextTable_CustomEvent_Callback qtexttable_customevent_callback = nullptr;
    QTextTable_ConnectNotify_Callback qtexttable_connectnotify_callback = nullptr;
    QTextTable_DisconnectNotify_Callback qtexttable_disconnectnotify_callback = nullptr;
    QTextTable_Sender_Callback qtexttable_sender_callback = nullptr;
    QTextTable_SenderSignalIndex_Callback qtexttable_sendersignalindex_callback = nullptr;
    QTextTable_Receivers_Callback qtexttable_receivers_callback = nullptr;
    QTextTable_IsSignalConnected_Callback qtexttable_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qtexttable_metacall_isbase = false;
    mutable bool qtexttable_event_isbase = false;
    mutable bool qtexttable_eventfilter_isbase = false;
    mutable bool qtexttable_timerevent_isbase = false;
    mutable bool qtexttable_childevent_isbase = false;
    mutable bool qtexttable_customevent_isbase = false;
    mutable bool qtexttable_connectnotify_isbase = false;
    mutable bool qtexttable_disconnectnotify_isbase = false;
    mutable bool qtexttable_sender_isbase = false;
    mutable bool qtexttable_sendersignalindex_isbase = false;
    mutable bool qtexttable_receivers_isbase = false;
    mutable bool qtexttable_issignalconnected_isbase = false;

  public:
    VirtualQTextTable(QTextDocument* doc) : QTextTable(doc) {};

    ~VirtualQTextTable() {
        qtexttable_metacall_callback = nullptr;
        qtexttable_event_callback = nullptr;
        qtexttable_eventfilter_callback = nullptr;
        qtexttable_timerevent_callback = nullptr;
        qtexttable_childevent_callback = nullptr;
        qtexttable_customevent_callback = nullptr;
        qtexttable_connectnotify_callback = nullptr;
        qtexttable_disconnectnotify_callback = nullptr;
        qtexttable_sender_callback = nullptr;
        qtexttable_sendersignalindex_callback = nullptr;
        qtexttable_receivers_callback = nullptr;
        qtexttable_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setQTextTable_Metacall_Callback(QTextTable_Metacall_Callback cb) { qtexttable_metacall_callback = cb; }
    inline void setQTextTable_Event_Callback(QTextTable_Event_Callback cb) { qtexttable_event_callback = cb; }
    inline void setQTextTable_EventFilter_Callback(QTextTable_EventFilter_Callback cb) { qtexttable_eventfilter_callback = cb; }
    inline void setQTextTable_TimerEvent_Callback(QTextTable_TimerEvent_Callback cb) { qtexttable_timerevent_callback = cb; }
    inline void setQTextTable_ChildEvent_Callback(QTextTable_ChildEvent_Callback cb) { qtexttable_childevent_callback = cb; }
    inline void setQTextTable_CustomEvent_Callback(QTextTable_CustomEvent_Callback cb) { qtexttable_customevent_callback = cb; }
    inline void setQTextTable_ConnectNotify_Callback(QTextTable_ConnectNotify_Callback cb) { qtexttable_connectnotify_callback = cb; }
    inline void setQTextTable_DisconnectNotify_Callback(QTextTable_DisconnectNotify_Callback cb) { qtexttable_disconnectnotify_callback = cb; }
    inline void setQTextTable_Sender_Callback(QTextTable_Sender_Callback cb) { qtexttable_sender_callback = cb; }
    inline void setQTextTable_SenderSignalIndex_Callback(QTextTable_SenderSignalIndex_Callback cb) { qtexttable_sendersignalindex_callback = cb; }
    inline void setQTextTable_Receivers_Callback(QTextTable_Receivers_Callback cb) { qtexttable_receivers_callback = cb; }
    inline void setQTextTable_IsSignalConnected_Callback(QTextTable_IsSignalConnected_Callback cb) { qtexttable_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQTextTable_Metacall_IsBase(bool value) const { qtexttable_metacall_isbase = value; }
    inline void setQTextTable_Event_IsBase(bool value) const { qtexttable_event_isbase = value; }
    inline void setQTextTable_EventFilter_IsBase(bool value) const { qtexttable_eventfilter_isbase = value; }
    inline void setQTextTable_TimerEvent_IsBase(bool value) const { qtexttable_timerevent_isbase = value; }
    inline void setQTextTable_ChildEvent_IsBase(bool value) const { qtexttable_childevent_isbase = value; }
    inline void setQTextTable_CustomEvent_IsBase(bool value) const { qtexttable_customevent_isbase = value; }
    inline void setQTextTable_ConnectNotify_IsBase(bool value) const { qtexttable_connectnotify_isbase = value; }
    inline void setQTextTable_DisconnectNotify_IsBase(bool value) const { qtexttable_disconnectnotify_isbase = value; }
    inline void setQTextTable_Sender_IsBase(bool value) const { qtexttable_sender_isbase = value; }
    inline void setQTextTable_SenderSignalIndex_IsBase(bool value) const { qtexttable_sendersignalindex_isbase = value; }
    inline void setQTextTable_Receivers_IsBase(bool value) const { qtexttable_receivers_isbase = value; }
    inline void setQTextTable_IsSignalConnected_IsBase(bool value) const { qtexttable_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qtexttable_metacall_isbase) {
            qtexttable_metacall_isbase = false;
            return QTextTable::qt_metacall(param1, param2, param3);
        } else if (qtexttable_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qtexttable_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QTextTable::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qtexttable_event_isbase) {
            qtexttable_event_isbase = false;
            return QTextTable::event(event);
        } else if (qtexttable_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qtexttable_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QTextTable::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qtexttable_eventfilter_isbase) {
            qtexttable_eventfilter_isbase = false;
            return QTextTable::eventFilter(watched, event);
        } else if (qtexttable_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qtexttable_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QTextTable::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qtexttable_timerevent_isbase) {
            qtexttable_timerevent_isbase = false;
            QTextTable::timerEvent(event);
        } else if (qtexttable_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qtexttable_timerevent_callback(this, cbval1);
        } else {
            QTextTable::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qtexttable_childevent_isbase) {
            qtexttable_childevent_isbase = false;
            QTextTable::childEvent(event);
        } else if (qtexttable_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qtexttable_childevent_callback(this, cbval1);
        } else {
            QTextTable::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qtexttable_customevent_isbase) {
            qtexttable_customevent_isbase = false;
            QTextTable::customEvent(event);
        } else if (qtexttable_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qtexttable_customevent_callback(this, cbval1);
        } else {
            QTextTable::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qtexttable_connectnotify_isbase) {
            qtexttable_connectnotify_isbase = false;
            QTextTable::connectNotify(signal);
        } else if (qtexttable_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qtexttable_connectnotify_callback(this, cbval1);
        } else {
            QTextTable::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qtexttable_disconnectnotify_isbase) {
            qtexttable_disconnectnotify_isbase = false;
            QTextTable::disconnectNotify(signal);
        } else if (qtexttable_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qtexttable_disconnectnotify_callback(this, cbval1);
        } else {
            QTextTable::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qtexttable_sender_isbase) {
            qtexttable_sender_isbase = false;
            return QTextTable::sender();
        } else if (qtexttable_sender_callback != nullptr) {
            QObject* callback_ret = qtexttable_sender_callback();
            return callback_ret;
        } else {
            return QTextTable::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qtexttable_sendersignalindex_isbase) {
            qtexttable_sendersignalindex_isbase = false;
            return QTextTable::senderSignalIndex();
        } else if (qtexttable_sendersignalindex_callback != nullptr) {
            int callback_ret = qtexttable_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QTextTable::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qtexttable_receivers_isbase) {
            qtexttable_receivers_isbase = false;
            return QTextTable::receivers(signal);
        } else if (qtexttable_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qtexttable_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QTextTable::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qtexttable_issignalconnected_isbase) {
            qtexttable_issignalconnected_isbase = false;
            return QTextTable::isSignalConnected(signal);
        } else if (qtexttable_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qtexttable_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QTextTable::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void QTextTable_TimerEvent(QTextTable* self, QTimerEvent* event);
    friend void QTextTable_QBaseTimerEvent(QTextTable* self, QTimerEvent* event);
    friend void QTextTable_ChildEvent(QTextTable* self, QChildEvent* event);
    friend void QTextTable_QBaseChildEvent(QTextTable* self, QChildEvent* event);
    friend void QTextTable_CustomEvent(QTextTable* self, QEvent* event);
    friend void QTextTable_QBaseCustomEvent(QTextTable* self, QEvent* event);
    friend void QTextTable_ConnectNotify(QTextTable* self, const QMetaMethod* signal);
    friend void QTextTable_QBaseConnectNotify(QTextTable* self, const QMetaMethod* signal);
    friend void QTextTable_DisconnectNotify(QTextTable* self, const QMetaMethod* signal);
    friend void QTextTable_QBaseDisconnectNotify(QTextTable* self, const QMetaMethod* signal);
    friend QObject* QTextTable_Sender(const QTextTable* self);
    friend QObject* QTextTable_QBaseSender(const QTextTable* self);
    friend int QTextTable_SenderSignalIndex(const QTextTable* self);
    friend int QTextTable_QBaseSenderSignalIndex(const QTextTable* self);
    friend int QTextTable_Receivers(const QTextTable* self, const char* signal);
    friend int QTextTable_QBaseReceivers(const QTextTable* self, const char* signal);
    friend bool QTextTable_IsSignalConnected(const QTextTable* self, const QMetaMethod* signal);
    friend bool QTextTable_QBaseIsSignalConnected(const QTextTable* self, const QMetaMethod* signal);
};

#endif
