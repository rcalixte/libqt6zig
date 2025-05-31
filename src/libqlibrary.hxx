#pragma once
#ifndef SRCC_LIBVIRTUALQLIBRARY_H
#define SRCC_LIBVIRTUALQLIBRARY_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QLibrary so that we can call protected methods
class VirtualQLibrary final : public QLibrary {

  public:
    // Virtual class boolean flag
    bool isVirtualQLibrary = true;

    // Virtual class public types (including callbacks)
    using QLibrary_Metacall_Callback = int (*)(QLibrary*, int, int, void**);
    using QLibrary_Event_Callback = bool (*)(QLibrary*, QEvent*);
    using QLibrary_EventFilter_Callback = bool (*)(QLibrary*, QObject*, QEvent*);
    using QLibrary_TimerEvent_Callback = void (*)(QLibrary*, QTimerEvent*);
    using QLibrary_ChildEvent_Callback = void (*)(QLibrary*, QChildEvent*);
    using QLibrary_CustomEvent_Callback = void (*)(QLibrary*, QEvent*);
    using QLibrary_ConnectNotify_Callback = void (*)(QLibrary*, QMetaMethod*);
    using QLibrary_DisconnectNotify_Callback = void (*)(QLibrary*, QMetaMethod*);
    using QLibrary_Sender_Callback = QObject* (*)();
    using QLibrary_SenderSignalIndex_Callback = int (*)();
    using QLibrary_Receivers_Callback = int (*)(const QLibrary*, const char*);
    using QLibrary_IsSignalConnected_Callback = bool (*)(const QLibrary*, QMetaMethod*);

  protected:
    // Instance callback storage
    QLibrary_Metacall_Callback qlibrary_metacall_callback = nullptr;
    QLibrary_Event_Callback qlibrary_event_callback = nullptr;
    QLibrary_EventFilter_Callback qlibrary_eventfilter_callback = nullptr;
    QLibrary_TimerEvent_Callback qlibrary_timerevent_callback = nullptr;
    QLibrary_ChildEvent_Callback qlibrary_childevent_callback = nullptr;
    QLibrary_CustomEvent_Callback qlibrary_customevent_callback = nullptr;
    QLibrary_ConnectNotify_Callback qlibrary_connectnotify_callback = nullptr;
    QLibrary_DisconnectNotify_Callback qlibrary_disconnectnotify_callback = nullptr;
    QLibrary_Sender_Callback qlibrary_sender_callback = nullptr;
    QLibrary_SenderSignalIndex_Callback qlibrary_sendersignalindex_callback = nullptr;
    QLibrary_Receivers_Callback qlibrary_receivers_callback = nullptr;
    QLibrary_IsSignalConnected_Callback qlibrary_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qlibrary_metacall_isbase = false;
    mutable bool qlibrary_event_isbase = false;
    mutable bool qlibrary_eventfilter_isbase = false;
    mutable bool qlibrary_timerevent_isbase = false;
    mutable bool qlibrary_childevent_isbase = false;
    mutable bool qlibrary_customevent_isbase = false;
    mutable bool qlibrary_connectnotify_isbase = false;
    mutable bool qlibrary_disconnectnotify_isbase = false;
    mutable bool qlibrary_sender_isbase = false;
    mutable bool qlibrary_sendersignalindex_isbase = false;
    mutable bool qlibrary_receivers_isbase = false;
    mutable bool qlibrary_issignalconnected_isbase = false;

  public:
    VirtualQLibrary() : QLibrary(){};
    VirtualQLibrary(const QString& fileName) : QLibrary(fileName){};
    VirtualQLibrary(const QString& fileName, int verNum) : QLibrary(fileName, verNum){};
    VirtualQLibrary(const QString& fileName, const QString& version) : QLibrary(fileName, version){};
    VirtualQLibrary(QObject* parent) : QLibrary(parent){};
    VirtualQLibrary(const QString& fileName, QObject* parent) : QLibrary(fileName, parent){};
    VirtualQLibrary(const QString& fileName, int verNum, QObject* parent) : QLibrary(fileName, verNum, parent){};
    VirtualQLibrary(const QString& fileName, const QString& version, QObject* parent) : QLibrary(fileName, version, parent){};

    ~VirtualQLibrary() {
        qlibrary_metacall_callback = nullptr;
        qlibrary_event_callback = nullptr;
        qlibrary_eventfilter_callback = nullptr;
        qlibrary_timerevent_callback = nullptr;
        qlibrary_childevent_callback = nullptr;
        qlibrary_customevent_callback = nullptr;
        qlibrary_connectnotify_callback = nullptr;
        qlibrary_disconnectnotify_callback = nullptr;
        qlibrary_sender_callback = nullptr;
        qlibrary_sendersignalindex_callback = nullptr;
        qlibrary_receivers_callback = nullptr;
        qlibrary_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setQLibrary_Metacall_Callback(QLibrary_Metacall_Callback cb) { qlibrary_metacall_callback = cb; }
    inline void setQLibrary_Event_Callback(QLibrary_Event_Callback cb) { qlibrary_event_callback = cb; }
    inline void setQLibrary_EventFilter_Callback(QLibrary_EventFilter_Callback cb) { qlibrary_eventfilter_callback = cb; }
    inline void setQLibrary_TimerEvent_Callback(QLibrary_TimerEvent_Callback cb) { qlibrary_timerevent_callback = cb; }
    inline void setQLibrary_ChildEvent_Callback(QLibrary_ChildEvent_Callback cb) { qlibrary_childevent_callback = cb; }
    inline void setQLibrary_CustomEvent_Callback(QLibrary_CustomEvent_Callback cb) { qlibrary_customevent_callback = cb; }
    inline void setQLibrary_ConnectNotify_Callback(QLibrary_ConnectNotify_Callback cb) { qlibrary_connectnotify_callback = cb; }
    inline void setQLibrary_DisconnectNotify_Callback(QLibrary_DisconnectNotify_Callback cb) { qlibrary_disconnectnotify_callback = cb; }
    inline void setQLibrary_Sender_Callback(QLibrary_Sender_Callback cb) { qlibrary_sender_callback = cb; }
    inline void setQLibrary_SenderSignalIndex_Callback(QLibrary_SenderSignalIndex_Callback cb) { qlibrary_sendersignalindex_callback = cb; }
    inline void setQLibrary_Receivers_Callback(QLibrary_Receivers_Callback cb) { qlibrary_receivers_callback = cb; }
    inline void setQLibrary_IsSignalConnected_Callback(QLibrary_IsSignalConnected_Callback cb) { qlibrary_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQLibrary_Metacall_IsBase(bool value) const { qlibrary_metacall_isbase = value; }
    inline void setQLibrary_Event_IsBase(bool value) const { qlibrary_event_isbase = value; }
    inline void setQLibrary_EventFilter_IsBase(bool value) const { qlibrary_eventfilter_isbase = value; }
    inline void setQLibrary_TimerEvent_IsBase(bool value) const { qlibrary_timerevent_isbase = value; }
    inline void setQLibrary_ChildEvent_IsBase(bool value) const { qlibrary_childevent_isbase = value; }
    inline void setQLibrary_CustomEvent_IsBase(bool value) const { qlibrary_customevent_isbase = value; }
    inline void setQLibrary_ConnectNotify_IsBase(bool value) const { qlibrary_connectnotify_isbase = value; }
    inline void setQLibrary_DisconnectNotify_IsBase(bool value) const { qlibrary_disconnectnotify_isbase = value; }
    inline void setQLibrary_Sender_IsBase(bool value) const { qlibrary_sender_isbase = value; }
    inline void setQLibrary_SenderSignalIndex_IsBase(bool value) const { qlibrary_sendersignalindex_isbase = value; }
    inline void setQLibrary_Receivers_IsBase(bool value) const { qlibrary_receivers_isbase = value; }
    inline void setQLibrary_IsSignalConnected_IsBase(bool value) const { qlibrary_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qlibrary_metacall_isbase) {
            qlibrary_metacall_isbase = false;
            return QLibrary::qt_metacall(param1, param2, param3);
        } else if (qlibrary_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qlibrary_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QLibrary::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qlibrary_event_isbase) {
            qlibrary_event_isbase = false;
            return QLibrary::event(event);
        } else if (qlibrary_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qlibrary_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QLibrary::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qlibrary_eventfilter_isbase) {
            qlibrary_eventfilter_isbase = false;
            return QLibrary::eventFilter(watched, event);
        } else if (qlibrary_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qlibrary_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QLibrary::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qlibrary_timerevent_isbase) {
            qlibrary_timerevent_isbase = false;
            QLibrary::timerEvent(event);
        } else if (qlibrary_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qlibrary_timerevent_callback(this, cbval1);
        } else {
            QLibrary::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qlibrary_childevent_isbase) {
            qlibrary_childevent_isbase = false;
            QLibrary::childEvent(event);
        } else if (qlibrary_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qlibrary_childevent_callback(this, cbval1);
        } else {
            QLibrary::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qlibrary_customevent_isbase) {
            qlibrary_customevent_isbase = false;
            QLibrary::customEvent(event);
        } else if (qlibrary_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qlibrary_customevent_callback(this, cbval1);
        } else {
            QLibrary::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qlibrary_connectnotify_isbase) {
            qlibrary_connectnotify_isbase = false;
            QLibrary::connectNotify(signal);
        } else if (qlibrary_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qlibrary_connectnotify_callback(this, cbval1);
        } else {
            QLibrary::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qlibrary_disconnectnotify_isbase) {
            qlibrary_disconnectnotify_isbase = false;
            QLibrary::disconnectNotify(signal);
        } else if (qlibrary_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qlibrary_disconnectnotify_callback(this, cbval1);
        } else {
            QLibrary::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qlibrary_sender_isbase) {
            qlibrary_sender_isbase = false;
            return QLibrary::sender();
        } else if (qlibrary_sender_callback != nullptr) {
            QObject* callback_ret = qlibrary_sender_callback();
            return callback_ret;
        } else {
            return QLibrary::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qlibrary_sendersignalindex_isbase) {
            qlibrary_sendersignalindex_isbase = false;
            return QLibrary::senderSignalIndex();
        } else if (qlibrary_sendersignalindex_callback != nullptr) {
            int callback_ret = qlibrary_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QLibrary::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qlibrary_receivers_isbase) {
            qlibrary_receivers_isbase = false;
            return QLibrary::receivers(signal);
        } else if (qlibrary_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qlibrary_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QLibrary::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qlibrary_issignalconnected_isbase) {
            qlibrary_issignalconnected_isbase = false;
            return QLibrary::isSignalConnected(signal);
        } else if (qlibrary_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qlibrary_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QLibrary::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void QLibrary_TimerEvent(QLibrary* self, QTimerEvent* event);
    friend void QLibrary_QBaseTimerEvent(QLibrary* self, QTimerEvent* event);
    friend void QLibrary_ChildEvent(QLibrary* self, QChildEvent* event);
    friend void QLibrary_QBaseChildEvent(QLibrary* self, QChildEvent* event);
    friend void QLibrary_CustomEvent(QLibrary* self, QEvent* event);
    friend void QLibrary_QBaseCustomEvent(QLibrary* self, QEvent* event);
    friend void QLibrary_ConnectNotify(QLibrary* self, const QMetaMethod* signal);
    friend void QLibrary_QBaseConnectNotify(QLibrary* self, const QMetaMethod* signal);
    friend void QLibrary_DisconnectNotify(QLibrary* self, const QMetaMethod* signal);
    friend void QLibrary_QBaseDisconnectNotify(QLibrary* self, const QMetaMethod* signal);
    friend QObject* QLibrary_Sender(const QLibrary* self);
    friend QObject* QLibrary_QBaseSender(const QLibrary* self);
    friend int QLibrary_SenderSignalIndex(const QLibrary* self);
    friend int QLibrary_QBaseSenderSignalIndex(const QLibrary* self);
    friend int QLibrary_Receivers(const QLibrary* self, const char* signal);
    friend int QLibrary_QBaseReceivers(const QLibrary* self, const char* signal);
    friend bool QLibrary_IsSignalConnected(const QLibrary* self, const QMetaMethod* signal);
    friend bool QLibrary_QBaseIsSignalConnected(const QLibrary* self, const QMetaMethod* signal);
};

#endif
