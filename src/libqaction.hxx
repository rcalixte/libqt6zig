#pragma once
#ifndef SRCC_LIBVIRTUALQACTION_H
#define SRCC_LIBVIRTUALQACTION_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QAction so that we can call protected methods
class VirtualQAction final : public QAction {

  public:
    // Virtual class boolean flag
    bool isVirtualQAction = true;

    // Virtual class public types (including callbacks)
    using QAction_Metacall_Callback = int (*)(QAction*, int, int, void**);
    using QAction_Event_Callback = bool (*)(QAction*, QEvent*);
    using QAction_EventFilter_Callback = bool (*)(QAction*, QObject*, QEvent*);
    using QAction_TimerEvent_Callback = void (*)(QAction*, QTimerEvent*);
    using QAction_ChildEvent_Callback = void (*)(QAction*, QChildEvent*);
    using QAction_CustomEvent_Callback = void (*)(QAction*, QEvent*);
    using QAction_ConnectNotify_Callback = void (*)(QAction*, QMetaMethod*);
    using QAction_DisconnectNotify_Callback = void (*)(QAction*, QMetaMethod*);
    using QAction_Sender_Callback = QObject* (*)();
    using QAction_SenderSignalIndex_Callback = int (*)();
    using QAction_Receivers_Callback = int (*)(const QAction*, const char*);
    using QAction_IsSignalConnected_Callback = bool (*)(const QAction*, QMetaMethod*);

  protected:
    // Instance callback storage
    QAction_Metacall_Callback qaction_metacall_callback = nullptr;
    QAction_Event_Callback qaction_event_callback = nullptr;
    QAction_EventFilter_Callback qaction_eventfilter_callback = nullptr;
    QAction_TimerEvent_Callback qaction_timerevent_callback = nullptr;
    QAction_ChildEvent_Callback qaction_childevent_callback = nullptr;
    QAction_CustomEvent_Callback qaction_customevent_callback = nullptr;
    QAction_ConnectNotify_Callback qaction_connectnotify_callback = nullptr;
    QAction_DisconnectNotify_Callback qaction_disconnectnotify_callback = nullptr;
    QAction_Sender_Callback qaction_sender_callback = nullptr;
    QAction_SenderSignalIndex_Callback qaction_sendersignalindex_callback = nullptr;
    QAction_Receivers_Callback qaction_receivers_callback = nullptr;
    QAction_IsSignalConnected_Callback qaction_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qaction_metacall_isbase = false;
    mutable bool qaction_event_isbase = false;
    mutable bool qaction_eventfilter_isbase = false;
    mutable bool qaction_timerevent_isbase = false;
    mutable bool qaction_childevent_isbase = false;
    mutable bool qaction_customevent_isbase = false;
    mutable bool qaction_connectnotify_isbase = false;
    mutable bool qaction_disconnectnotify_isbase = false;
    mutable bool qaction_sender_isbase = false;
    mutable bool qaction_sendersignalindex_isbase = false;
    mutable bool qaction_receivers_isbase = false;
    mutable bool qaction_issignalconnected_isbase = false;

  public:
    VirtualQAction() : QAction(){};
    VirtualQAction(const QString& text) : QAction(text){};
    VirtualQAction(const QIcon& icon, const QString& text) : QAction(icon, text){};
    VirtualQAction(QObject* parent) : QAction(parent){};
    VirtualQAction(const QString& text, QObject* parent) : QAction(text, parent){};
    VirtualQAction(const QIcon& icon, const QString& text, QObject* parent) : QAction(icon, text, parent){};

    ~VirtualQAction() {
        qaction_metacall_callback = nullptr;
        qaction_event_callback = nullptr;
        qaction_eventfilter_callback = nullptr;
        qaction_timerevent_callback = nullptr;
        qaction_childevent_callback = nullptr;
        qaction_customevent_callback = nullptr;
        qaction_connectnotify_callback = nullptr;
        qaction_disconnectnotify_callback = nullptr;
        qaction_sender_callback = nullptr;
        qaction_sendersignalindex_callback = nullptr;
        qaction_receivers_callback = nullptr;
        qaction_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setQAction_Metacall_Callback(QAction_Metacall_Callback cb) { qaction_metacall_callback = cb; }
    inline void setQAction_Event_Callback(QAction_Event_Callback cb) { qaction_event_callback = cb; }
    inline void setQAction_EventFilter_Callback(QAction_EventFilter_Callback cb) { qaction_eventfilter_callback = cb; }
    inline void setQAction_TimerEvent_Callback(QAction_TimerEvent_Callback cb) { qaction_timerevent_callback = cb; }
    inline void setQAction_ChildEvent_Callback(QAction_ChildEvent_Callback cb) { qaction_childevent_callback = cb; }
    inline void setQAction_CustomEvent_Callback(QAction_CustomEvent_Callback cb) { qaction_customevent_callback = cb; }
    inline void setQAction_ConnectNotify_Callback(QAction_ConnectNotify_Callback cb) { qaction_connectnotify_callback = cb; }
    inline void setQAction_DisconnectNotify_Callback(QAction_DisconnectNotify_Callback cb) { qaction_disconnectnotify_callback = cb; }
    inline void setQAction_Sender_Callback(QAction_Sender_Callback cb) { qaction_sender_callback = cb; }
    inline void setQAction_SenderSignalIndex_Callback(QAction_SenderSignalIndex_Callback cb) { qaction_sendersignalindex_callback = cb; }
    inline void setQAction_Receivers_Callback(QAction_Receivers_Callback cb) { qaction_receivers_callback = cb; }
    inline void setQAction_IsSignalConnected_Callback(QAction_IsSignalConnected_Callback cb) { qaction_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQAction_Metacall_IsBase(bool value) const { qaction_metacall_isbase = value; }
    inline void setQAction_Event_IsBase(bool value) const { qaction_event_isbase = value; }
    inline void setQAction_EventFilter_IsBase(bool value) const { qaction_eventfilter_isbase = value; }
    inline void setQAction_TimerEvent_IsBase(bool value) const { qaction_timerevent_isbase = value; }
    inline void setQAction_ChildEvent_IsBase(bool value) const { qaction_childevent_isbase = value; }
    inline void setQAction_CustomEvent_IsBase(bool value) const { qaction_customevent_isbase = value; }
    inline void setQAction_ConnectNotify_IsBase(bool value) const { qaction_connectnotify_isbase = value; }
    inline void setQAction_DisconnectNotify_IsBase(bool value) const { qaction_disconnectnotify_isbase = value; }
    inline void setQAction_Sender_IsBase(bool value) const { qaction_sender_isbase = value; }
    inline void setQAction_SenderSignalIndex_IsBase(bool value) const { qaction_sendersignalindex_isbase = value; }
    inline void setQAction_Receivers_IsBase(bool value) const { qaction_receivers_isbase = value; }
    inline void setQAction_IsSignalConnected_IsBase(bool value) const { qaction_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qaction_metacall_isbase) {
            qaction_metacall_isbase = false;
            return QAction::qt_metacall(param1, param2, param3);
        } else if (qaction_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qaction_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QAction::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* param1) override {
        if (qaction_event_isbase) {
            qaction_event_isbase = false;
            return QAction::event(param1);
        } else if (qaction_event_callback != nullptr) {
            QEvent* cbval1 = param1;

            bool callback_ret = qaction_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QAction::event(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qaction_eventfilter_isbase) {
            qaction_eventfilter_isbase = false;
            return QAction::eventFilter(watched, event);
        } else if (qaction_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qaction_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QAction::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qaction_timerevent_isbase) {
            qaction_timerevent_isbase = false;
            QAction::timerEvent(event);
        } else if (qaction_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qaction_timerevent_callback(this, cbval1);
        } else {
            QAction::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qaction_childevent_isbase) {
            qaction_childevent_isbase = false;
            QAction::childEvent(event);
        } else if (qaction_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qaction_childevent_callback(this, cbval1);
        } else {
            QAction::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qaction_customevent_isbase) {
            qaction_customevent_isbase = false;
            QAction::customEvent(event);
        } else if (qaction_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qaction_customevent_callback(this, cbval1);
        } else {
            QAction::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qaction_connectnotify_isbase) {
            qaction_connectnotify_isbase = false;
            QAction::connectNotify(signal);
        } else if (qaction_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qaction_connectnotify_callback(this, cbval1);
        } else {
            QAction::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qaction_disconnectnotify_isbase) {
            qaction_disconnectnotify_isbase = false;
            QAction::disconnectNotify(signal);
        } else if (qaction_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qaction_disconnectnotify_callback(this, cbval1);
        } else {
            QAction::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qaction_sender_isbase) {
            qaction_sender_isbase = false;
            return QAction::sender();
        } else if (qaction_sender_callback != nullptr) {
            QObject* callback_ret = qaction_sender_callback();
            return callback_ret;
        } else {
            return QAction::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qaction_sendersignalindex_isbase) {
            qaction_sendersignalindex_isbase = false;
            return QAction::senderSignalIndex();
        } else if (qaction_sendersignalindex_callback != nullptr) {
            int callback_ret = qaction_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QAction::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qaction_receivers_isbase) {
            qaction_receivers_isbase = false;
            return QAction::receivers(signal);
        } else if (qaction_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qaction_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QAction::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qaction_issignalconnected_isbase) {
            qaction_issignalconnected_isbase = false;
            return QAction::isSignalConnected(signal);
        } else if (qaction_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qaction_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QAction::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend bool QAction_Event(QAction* self, QEvent* param1);
    friend bool QAction_QBaseEvent(QAction* self, QEvent* param1);
    friend void QAction_TimerEvent(QAction* self, QTimerEvent* event);
    friend void QAction_QBaseTimerEvent(QAction* self, QTimerEvent* event);
    friend void QAction_ChildEvent(QAction* self, QChildEvent* event);
    friend void QAction_QBaseChildEvent(QAction* self, QChildEvent* event);
    friend void QAction_CustomEvent(QAction* self, QEvent* event);
    friend void QAction_QBaseCustomEvent(QAction* self, QEvent* event);
    friend void QAction_ConnectNotify(QAction* self, const QMetaMethod* signal);
    friend void QAction_QBaseConnectNotify(QAction* self, const QMetaMethod* signal);
    friend void QAction_DisconnectNotify(QAction* self, const QMetaMethod* signal);
    friend void QAction_QBaseDisconnectNotify(QAction* self, const QMetaMethod* signal);
    friend QObject* QAction_Sender(const QAction* self);
    friend QObject* QAction_QBaseSender(const QAction* self);
    friend int QAction_SenderSignalIndex(const QAction* self);
    friend int QAction_QBaseSenderSignalIndex(const QAction* self);
    friend int QAction_Receivers(const QAction* self, const char* signal);
    friend int QAction_QBaseReceivers(const QAction* self, const char* signal);
    friend bool QAction_IsSignalConnected(const QAction* self, const QMetaMethod* signal);
    friend bool QAction_QBaseIsSignalConnected(const QAction* self, const QMetaMethod* signal);
};

#endif
