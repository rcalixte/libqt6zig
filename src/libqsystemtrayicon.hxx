#pragma once
#ifndef SRCC_LIBVIRTUALQSYSTEMTRAYICON_H
#define SRCC_LIBVIRTUALQSYSTEMTRAYICON_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QSystemTrayIcon so that we can call protected methods
class VirtualQSystemTrayIcon final : public QSystemTrayIcon {

  public:
    // Virtual class boolean flag
    bool isVirtualQSystemTrayIcon = true;

    // Virtual class public types (including callbacks)
    using QSystemTrayIcon_Metacall_Callback = int (*)(QSystemTrayIcon*, int, int, void**);
    using QSystemTrayIcon_Event_Callback = bool (*)(QSystemTrayIcon*, QEvent*);
    using QSystemTrayIcon_EventFilter_Callback = bool (*)(QSystemTrayIcon*, QObject*, QEvent*);
    using QSystemTrayIcon_TimerEvent_Callback = void (*)(QSystemTrayIcon*, QTimerEvent*);
    using QSystemTrayIcon_ChildEvent_Callback = void (*)(QSystemTrayIcon*, QChildEvent*);
    using QSystemTrayIcon_CustomEvent_Callback = void (*)(QSystemTrayIcon*, QEvent*);
    using QSystemTrayIcon_ConnectNotify_Callback = void (*)(QSystemTrayIcon*, QMetaMethod*);
    using QSystemTrayIcon_DisconnectNotify_Callback = void (*)(QSystemTrayIcon*, QMetaMethod*);
    using QSystemTrayIcon_Sender_Callback = QObject* (*)();
    using QSystemTrayIcon_SenderSignalIndex_Callback = int (*)();
    using QSystemTrayIcon_Receivers_Callback = int (*)(const QSystemTrayIcon*, const char*);
    using QSystemTrayIcon_IsSignalConnected_Callback = bool (*)(const QSystemTrayIcon*, QMetaMethod*);

  protected:
    // Instance callback storage
    QSystemTrayIcon_Metacall_Callback qsystemtrayicon_metacall_callback = nullptr;
    QSystemTrayIcon_Event_Callback qsystemtrayicon_event_callback = nullptr;
    QSystemTrayIcon_EventFilter_Callback qsystemtrayicon_eventfilter_callback = nullptr;
    QSystemTrayIcon_TimerEvent_Callback qsystemtrayicon_timerevent_callback = nullptr;
    QSystemTrayIcon_ChildEvent_Callback qsystemtrayicon_childevent_callback = nullptr;
    QSystemTrayIcon_CustomEvent_Callback qsystemtrayicon_customevent_callback = nullptr;
    QSystemTrayIcon_ConnectNotify_Callback qsystemtrayicon_connectnotify_callback = nullptr;
    QSystemTrayIcon_DisconnectNotify_Callback qsystemtrayicon_disconnectnotify_callback = nullptr;
    QSystemTrayIcon_Sender_Callback qsystemtrayicon_sender_callback = nullptr;
    QSystemTrayIcon_SenderSignalIndex_Callback qsystemtrayicon_sendersignalindex_callback = nullptr;
    QSystemTrayIcon_Receivers_Callback qsystemtrayicon_receivers_callback = nullptr;
    QSystemTrayIcon_IsSignalConnected_Callback qsystemtrayicon_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qsystemtrayicon_metacall_isbase = false;
    mutable bool qsystemtrayicon_event_isbase = false;
    mutable bool qsystemtrayicon_eventfilter_isbase = false;
    mutable bool qsystemtrayicon_timerevent_isbase = false;
    mutable bool qsystemtrayicon_childevent_isbase = false;
    mutable bool qsystemtrayicon_customevent_isbase = false;
    mutable bool qsystemtrayicon_connectnotify_isbase = false;
    mutable bool qsystemtrayicon_disconnectnotify_isbase = false;
    mutable bool qsystemtrayicon_sender_isbase = false;
    mutable bool qsystemtrayicon_sendersignalindex_isbase = false;
    mutable bool qsystemtrayicon_receivers_isbase = false;
    mutable bool qsystemtrayicon_issignalconnected_isbase = false;

  public:
    VirtualQSystemTrayIcon() : QSystemTrayIcon() {};
    VirtualQSystemTrayIcon(const QIcon& icon) : QSystemTrayIcon(icon) {};
    VirtualQSystemTrayIcon(QObject* parent) : QSystemTrayIcon(parent) {};
    VirtualQSystemTrayIcon(const QIcon& icon, QObject* parent) : QSystemTrayIcon(icon, parent) {};

    ~VirtualQSystemTrayIcon() {
        qsystemtrayicon_metacall_callback = nullptr;
        qsystemtrayicon_event_callback = nullptr;
        qsystemtrayicon_eventfilter_callback = nullptr;
        qsystemtrayicon_timerevent_callback = nullptr;
        qsystemtrayicon_childevent_callback = nullptr;
        qsystemtrayicon_customevent_callback = nullptr;
        qsystemtrayicon_connectnotify_callback = nullptr;
        qsystemtrayicon_disconnectnotify_callback = nullptr;
        qsystemtrayicon_sender_callback = nullptr;
        qsystemtrayicon_sendersignalindex_callback = nullptr;
        qsystemtrayicon_receivers_callback = nullptr;
        qsystemtrayicon_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setQSystemTrayIcon_Metacall_Callback(QSystemTrayIcon_Metacall_Callback cb) { qsystemtrayicon_metacall_callback = cb; }
    inline void setQSystemTrayIcon_Event_Callback(QSystemTrayIcon_Event_Callback cb) { qsystemtrayicon_event_callback = cb; }
    inline void setQSystemTrayIcon_EventFilter_Callback(QSystemTrayIcon_EventFilter_Callback cb) { qsystemtrayicon_eventfilter_callback = cb; }
    inline void setQSystemTrayIcon_TimerEvent_Callback(QSystemTrayIcon_TimerEvent_Callback cb) { qsystemtrayicon_timerevent_callback = cb; }
    inline void setQSystemTrayIcon_ChildEvent_Callback(QSystemTrayIcon_ChildEvent_Callback cb) { qsystemtrayicon_childevent_callback = cb; }
    inline void setQSystemTrayIcon_CustomEvent_Callback(QSystemTrayIcon_CustomEvent_Callback cb) { qsystemtrayicon_customevent_callback = cb; }
    inline void setQSystemTrayIcon_ConnectNotify_Callback(QSystemTrayIcon_ConnectNotify_Callback cb) { qsystemtrayicon_connectnotify_callback = cb; }
    inline void setQSystemTrayIcon_DisconnectNotify_Callback(QSystemTrayIcon_DisconnectNotify_Callback cb) { qsystemtrayicon_disconnectnotify_callback = cb; }
    inline void setQSystemTrayIcon_Sender_Callback(QSystemTrayIcon_Sender_Callback cb) { qsystemtrayicon_sender_callback = cb; }
    inline void setQSystemTrayIcon_SenderSignalIndex_Callback(QSystemTrayIcon_SenderSignalIndex_Callback cb) { qsystemtrayicon_sendersignalindex_callback = cb; }
    inline void setQSystemTrayIcon_Receivers_Callback(QSystemTrayIcon_Receivers_Callback cb) { qsystemtrayicon_receivers_callback = cb; }
    inline void setQSystemTrayIcon_IsSignalConnected_Callback(QSystemTrayIcon_IsSignalConnected_Callback cb) { qsystemtrayicon_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQSystemTrayIcon_Metacall_IsBase(bool value) const { qsystemtrayicon_metacall_isbase = value; }
    inline void setQSystemTrayIcon_Event_IsBase(bool value) const { qsystemtrayicon_event_isbase = value; }
    inline void setQSystemTrayIcon_EventFilter_IsBase(bool value) const { qsystemtrayicon_eventfilter_isbase = value; }
    inline void setQSystemTrayIcon_TimerEvent_IsBase(bool value) const { qsystemtrayicon_timerevent_isbase = value; }
    inline void setQSystemTrayIcon_ChildEvent_IsBase(bool value) const { qsystemtrayicon_childevent_isbase = value; }
    inline void setQSystemTrayIcon_CustomEvent_IsBase(bool value) const { qsystemtrayicon_customevent_isbase = value; }
    inline void setQSystemTrayIcon_ConnectNotify_IsBase(bool value) const { qsystemtrayicon_connectnotify_isbase = value; }
    inline void setQSystemTrayIcon_DisconnectNotify_IsBase(bool value) const { qsystemtrayicon_disconnectnotify_isbase = value; }
    inline void setQSystemTrayIcon_Sender_IsBase(bool value) const { qsystemtrayicon_sender_isbase = value; }
    inline void setQSystemTrayIcon_SenderSignalIndex_IsBase(bool value) const { qsystemtrayicon_sendersignalindex_isbase = value; }
    inline void setQSystemTrayIcon_Receivers_IsBase(bool value) const { qsystemtrayicon_receivers_isbase = value; }
    inline void setQSystemTrayIcon_IsSignalConnected_IsBase(bool value) const { qsystemtrayicon_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qsystemtrayicon_metacall_isbase) {
            qsystemtrayicon_metacall_isbase = false;
            return QSystemTrayIcon::qt_metacall(param1, param2, param3);
        } else if (qsystemtrayicon_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qsystemtrayicon_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QSystemTrayIcon::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qsystemtrayicon_event_isbase) {
            qsystemtrayicon_event_isbase = false;
            return QSystemTrayIcon::event(event);
        } else if (qsystemtrayicon_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qsystemtrayicon_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QSystemTrayIcon::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qsystemtrayicon_eventfilter_isbase) {
            qsystemtrayicon_eventfilter_isbase = false;
            return QSystemTrayIcon::eventFilter(watched, event);
        } else if (qsystemtrayicon_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qsystemtrayicon_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QSystemTrayIcon::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qsystemtrayicon_timerevent_isbase) {
            qsystemtrayicon_timerevent_isbase = false;
            QSystemTrayIcon::timerEvent(event);
        } else if (qsystemtrayicon_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qsystemtrayicon_timerevent_callback(this, cbval1);
        } else {
            QSystemTrayIcon::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qsystemtrayicon_childevent_isbase) {
            qsystemtrayicon_childevent_isbase = false;
            QSystemTrayIcon::childEvent(event);
        } else if (qsystemtrayicon_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qsystemtrayicon_childevent_callback(this, cbval1);
        } else {
            QSystemTrayIcon::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qsystemtrayicon_customevent_isbase) {
            qsystemtrayicon_customevent_isbase = false;
            QSystemTrayIcon::customEvent(event);
        } else if (qsystemtrayicon_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qsystemtrayicon_customevent_callback(this, cbval1);
        } else {
            QSystemTrayIcon::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qsystemtrayicon_connectnotify_isbase) {
            qsystemtrayicon_connectnotify_isbase = false;
            QSystemTrayIcon::connectNotify(signal);
        } else if (qsystemtrayicon_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qsystemtrayicon_connectnotify_callback(this, cbval1);
        } else {
            QSystemTrayIcon::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qsystemtrayicon_disconnectnotify_isbase) {
            qsystemtrayicon_disconnectnotify_isbase = false;
            QSystemTrayIcon::disconnectNotify(signal);
        } else if (qsystemtrayicon_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qsystemtrayicon_disconnectnotify_callback(this, cbval1);
        } else {
            QSystemTrayIcon::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qsystemtrayicon_sender_isbase) {
            qsystemtrayicon_sender_isbase = false;
            return QSystemTrayIcon::sender();
        } else if (qsystemtrayicon_sender_callback != nullptr) {
            QObject* callback_ret = qsystemtrayicon_sender_callback();
            return callback_ret;
        } else {
            return QSystemTrayIcon::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qsystemtrayicon_sendersignalindex_isbase) {
            qsystemtrayicon_sendersignalindex_isbase = false;
            return QSystemTrayIcon::senderSignalIndex();
        } else if (qsystemtrayicon_sendersignalindex_callback != nullptr) {
            int callback_ret = qsystemtrayicon_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QSystemTrayIcon::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qsystemtrayicon_receivers_isbase) {
            qsystemtrayicon_receivers_isbase = false;
            return QSystemTrayIcon::receivers(signal);
        } else if (qsystemtrayicon_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qsystemtrayicon_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QSystemTrayIcon::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qsystemtrayicon_issignalconnected_isbase) {
            qsystemtrayicon_issignalconnected_isbase = false;
            return QSystemTrayIcon::isSignalConnected(signal);
        } else if (qsystemtrayicon_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qsystemtrayicon_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QSystemTrayIcon::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend bool QSystemTrayIcon_Event(QSystemTrayIcon* self, QEvent* event);
    friend bool QSystemTrayIcon_QBaseEvent(QSystemTrayIcon* self, QEvent* event);
    friend void QSystemTrayIcon_TimerEvent(QSystemTrayIcon* self, QTimerEvent* event);
    friend void QSystemTrayIcon_QBaseTimerEvent(QSystemTrayIcon* self, QTimerEvent* event);
    friend void QSystemTrayIcon_ChildEvent(QSystemTrayIcon* self, QChildEvent* event);
    friend void QSystemTrayIcon_QBaseChildEvent(QSystemTrayIcon* self, QChildEvent* event);
    friend void QSystemTrayIcon_CustomEvent(QSystemTrayIcon* self, QEvent* event);
    friend void QSystemTrayIcon_QBaseCustomEvent(QSystemTrayIcon* self, QEvent* event);
    friend void QSystemTrayIcon_ConnectNotify(QSystemTrayIcon* self, const QMetaMethod* signal);
    friend void QSystemTrayIcon_QBaseConnectNotify(QSystemTrayIcon* self, const QMetaMethod* signal);
    friend void QSystemTrayIcon_DisconnectNotify(QSystemTrayIcon* self, const QMetaMethod* signal);
    friend void QSystemTrayIcon_QBaseDisconnectNotify(QSystemTrayIcon* self, const QMetaMethod* signal);
    friend QObject* QSystemTrayIcon_Sender(const QSystemTrayIcon* self);
    friend QObject* QSystemTrayIcon_QBaseSender(const QSystemTrayIcon* self);
    friend int QSystemTrayIcon_SenderSignalIndex(const QSystemTrayIcon* self);
    friend int QSystemTrayIcon_QBaseSenderSignalIndex(const QSystemTrayIcon* self);
    friend int QSystemTrayIcon_Receivers(const QSystemTrayIcon* self, const char* signal);
    friend int QSystemTrayIcon_QBaseReceivers(const QSystemTrayIcon* self, const char* signal);
    friend bool QSystemTrayIcon_IsSignalConnected(const QSystemTrayIcon* self, const QMetaMethod* signal);
    friend bool QSystemTrayIcon_QBaseIsSignalConnected(const QSystemTrayIcon* self, const QMetaMethod* signal);
};

#endif
