#pragma once
#ifndef SRCC_LIBVIRTUALQMOVIE_H
#define SRCC_LIBVIRTUALQMOVIE_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QMovie so that we can call protected methods
class VirtualQMovie final : public QMovie {

  public:
    // Virtual class boolean flag
    bool isVirtualQMovie = true;

    // Virtual class public types (including callbacks)
    using QMovie_Metacall_Callback = int (*)(QMovie*, int, int, void**);
    using QMovie_Event_Callback = bool (*)(QMovie*, QEvent*);
    using QMovie_EventFilter_Callback = bool (*)(QMovie*, QObject*, QEvent*);
    using QMovie_TimerEvent_Callback = void (*)(QMovie*, QTimerEvent*);
    using QMovie_ChildEvent_Callback = void (*)(QMovie*, QChildEvent*);
    using QMovie_CustomEvent_Callback = void (*)(QMovie*, QEvent*);
    using QMovie_ConnectNotify_Callback = void (*)(QMovie*, QMetaMethod*);
    using QMovie_DisconnectNotify_Callback = void (*)(QMovie*, QMetaMethod*);
    using QMovie_Sender_Callback = QObject* (*)();
    using QMovie_SenderSignalIndex_Callback = int (*)();
    using QMovie_Receivers_Callback = int (*)(const QMovie*, const char*);
    using QMovie_IsSignalConnected_Callback = bool (*)(const QMovie*, QMetaMethod*);

  protected:
    // Instance callback storage
    QMovie_Metacall_Callback qmovie_metacall_callback = nullptr;
    QMovie_Event_Callback qmovie_event_callback = nullptr;
    QMovie_EventFilter_Callback qmovie_eventfilter_callback = nullptr;
    QMovie_TimerEvent_Callback qmovie_timerevent_callback = nullptr;
    QMovie_ChildEvent_Callback qmovie_childevent_callback = nullptr;
    QMovie_CustomEvent_Callback qmovie_customevent_callback = nullptr;
    QMovie_ConnectNotify_Callback qmovie_connectnotify_callback = nullptr;
    QMovie_DisconnectNotify_Callback qmovie_disconnectnotify_callback = nullptr;
    QMovie_Sender_Callback qmovie_sender_callback = nullptr;
    QMovie_SenderSignalIndex_Callback qmovie_sendersignalindex_callback = nullptr;
    QMovie_Receivers_Callback qmovie_receivers_callback = nullptr;
    QMovie_IsSignalConnected_Callback qmovie_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qmovie_metacall_isbase = false;
    mutable bool qmovie_event_isbase = false;
    mutable bool qmovie_eventfilter_isbase = false;
    mutable bool qmovie_timerevent_isbase = false;
    mutable bool qmovie_childevent_isbase = false;
    mutable bool qmovie_customevent_isbase = false;
    mutable bool qmovie_connectnotify_isbase = false;
    mutable bool qmovie_disconnectnotify_isbase = false;
    mutable bool qmovie_sender_isbase = false;
    mutable bool qmovie_sendersignalindex_isbase = false;
    mutable bool qmovie_receivers_isbase = false;
    mutable bool qmovie_issignalconnected_isbase = false;

  public:
    VirtualQMovie() : QMovie() {};
    VirtualQMovie(QIODevice* device) : QMovie(device) {};
    VirtualQMovie(const QString& fileName) : QMovie(fileName) {};
    VirtualQMovie(QObject* parent) : QMovie(parent) {};
    VirtualQMovie(QIODevice* device, const QByteArray& format) : QMovie(device, format) {};
    VirtualQMovie(QIODevice* device, const QByteArray& format, QObject* parent) : QMovie(device, format, parent) {};
    VirtualQMovie(const QString& fileName, const QByteArray& format) : QMovie(fileName, format) {};
    VirtualQMovie(const QString& fileName, const QByteArray& format, QObject* parent) : QMovie(fileName, format, parent) {};

    ~VirtualQMovie() {
        qmovie_metacall_callback = nullptr;
        qmovie_event_callback = nullptr;
        qmovie_eventfilter_callback = nullptr;
        qmovie_timerevent_callback = nullptr;
        qmovie_childevent_callback = nullptr;
        qmovie_customevent_callback = nullptr;
        qmovie_connectnotify_callback = nullptr;
        qmovie_disconnectnotify_callback = nullptr;
        qmovie_sender_callback = nullptr;
        qmovie_sendersignalindex_callback = nullptr;
        qmovie_receivers_callback = nullptr;
        qmovie_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setQMovie_Metacall_Callback(QMovie_Metacall_Callback cb) { qmovie_metacall_callback = cb; }
    inline void setQMovie_Event_Callback(QMovie_Event_Callback cb) { qmovie_event_callback = cb; }
    inline void setQMovie_EventFilter_Callback(QMovie_EventFilter_Callback cb) { qmovie_eventfilter_callback = cb; }
    inline void setQMovie_TimerEvent_Callback(QMovie_TimerEvent_Callback cb) { qmovie_timerevent_callback = cb; }
    inline void setQMovie_ChildEvent_Callback(QMovie_ChildEvent_Callback cb) { qmovie_childevent_callback = cb; }
    inline void setQMovie_CustomEvent_Callback(QMovie_CustomEvent_Callback cb) { qmovie_customevent_callback = cb; }
    inline void setQMovie_ConnectNotify_Callback(QMovie_ConnectNotify_Callback cb) { qmovie_connectnotify_callback = cb; }
    inline void setQMovie_DisconnectNotify_Callback(QMovie_DisconnectNotify_Callback cb) { qmovie_disconnectnotify_callback = cb; }
    inline void setQMovie_Sender_Callback(QMovie_Sender_Callback cb) { qmovie_sender_callback = cb; }
    inline void setQMovie_SenderSignalIndex_Callback(QMovie_SenderSignalIndex_Callback cb) { qmovie_sendersignalindex_callback = cb; }
    inline void setQMovie_Receivers_Callback(QMovie_Receivers_Callback cb) { qmovie_receivers_callback = cb; }
    inline void setQMovie_IsSignalConnected_Callback(QMovie_IsSignalConnected_Callback cb) { qmovie_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQMovie_Metacall_IsBase(bool value) const { qmovie_metacall_isbase = value; }
    inline void setQMovie_Event_IsBase(bool value) const { qmovie_event_isbase = value; }
    inline void setQMovie_EventFilter_IsBase(bool value) const { qmovie_eventfilter_isbase = value; }
    inline void setQMovie_TimerEvent_IsBase(bool value) const { qmovie_timerevent_isbase = value; }
    inline void setQMovie_ChildEvent_IsBase(bool value) const { qmovie_childevent_isbase = value; }
    inline void setQMovie_CustomEvent_IsBase(bool value) const { qmovie_customevent_isbase = value; }
    inline void setQMovie_ConnectNotify_IsBase(bool value) const { qmovie_connectnotify_isbase = value; }
    inline void setQMovie_DisconnectNotify_IsBase(bool value) const { qmovie_disconnectnotify_isbase = value; }
    inline void setQMovie_Sender_IsBase(bool value) const { qmovie_sender_isbase = value; }
    inline void setQMovie_SenderSignalIndex_IsBase(bool value) const { qmovie_sendersignalindex_isbase = value; }
    inline void setQMovie_Receivers_IsBase(bool value) const { qmovie_receivers_isbase = value; }
    inline void setQMovie_IsSignalConnected_IsBase(bool value) const { qmovie_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qmovie_metacall_isbase) {
            qmovie_metacall_isbase = false;
            return QMovie::qt_metacall(param1, param2, param3);
        } else if (qmovie_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qmovie_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QMovie::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qmovie_event_isbase) {
            qmovie_event_isbase = false;
            return QMovie::event(event);
        } else if (qmovie_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qmovie_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QMovie::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qmovie_eventfilter_isbase) {
            qmovie_eventfilter_isbase = false;
            return QMovie::eventFilter(watched, event);
        } else if (qmovie_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qmovie_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QMovie::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qmovie_timerevent_isbase) {
            qmovie_timerevent_isbase = false;
            QMovie::timerEvent(event);
        } else if (qmovie_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qmovie_timerevent_callback(this, cbval1);
        } else {
            QMovie::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qmovie_childevent_isbase) {
            qmovie_childevent_isbase = false;
            QMovie::childEvent(event);
        } else if (qmovie_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qmovie_childevent_callback(this, cbval1);
        } else {
            QMovie::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qmovie_customevent_isbase) {
            qmovie_customevent_isbase = false;
            QMovie::customEvent(event);
        } else if (qmovie_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qmovie_customevent_callback(this, cbval1);
        } else {
            QMovie::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qmovie_connectnotify_isbase) {
            qmovie_connectnotify_isbase = false;
            QMovie::connectNotify(signal);
        } else if (qmovie_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qmovie_connectnotify_callback(this, cbval1);
        } else {
            QMovie::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qmovie_disconnectnotify_isbase) {
            qmovie_disconnectnotify_isbase = false;
            QMovie::disconnectNotify(signal);
        } else if (qmovie_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qmovie_disconnectnotify_callback(this, cbval1);
        } else {
            QMovie::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qmovie_sender_isbase) {
            qmovie_sender_isbase = false;
            return QMovie::sender();
        } else if (qmovie_sender_callback != nullptr) {
            QObject* callback_ret = qmovie_sender_callback();
            return callback_ret;
        } else {
            return QMovie::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qmovie_sendersignalindex_isbase) {
            qmovie_sendersignalindex_isbase = false;
            return QMovie::senderSignalIndex();
        } else if (qmovie_sendersignalindex_callback != nullptr) {
            int callback_ret = qmovie_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QMovie::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qmovie_receivers_isbase) {
            qmovie_receivers_isbase = false;
            return QMovie::receivers(signal);
        } else if (qmovie_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qmovie_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QMovie::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qmovie_issignalconnected_isbase) {
            qmovie_issignalconnected_isbase = false;
            return QMovie::isSignalConnected(signal);
        } else if (qmovie_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qmovie_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QMovie::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void QMovie_TimerEvent(QMovie* self, QTimerEvent* event);
    friend void QMovie_QBaseTimerEvent(QMovie* self, QTimerEvent* event);
    friend void QMovie_ChildEvent(QMovie* self, QChildEvent* event);
    friend void QMovie_QBaseChildEvent(QMovie* self, QChildEvent* event);
    friend void QMovie_CustomEvent(QMovie* self, QEvent* event);
    friend void QMovie_QBaseCustomEvent(QMovie* self, QEvent* event);
    friend void QMovie_ConnectNotify(QMovie* self, const QMetaMethod* signal);
    friend void QMovie_QBaseConnectNotify(QMovie* self, const QMetaMethod* signal);
    friend void QMovie_DisconnectNotify(QMovie* self, const QMetaMethod* signal);
    friend void QMovie_QBaseDisconnectNotify(QMovie* self, const QMetaMethod* signal);
    friend QObject* QMovie_Sender(const QMovie* self);
    friend QObject* QMovie_QBaseSender(const QMovie* self);
    friend int QMovie_SenderSignalIndex(const QMovie* self);
    friend int QMovie_QBaseSenderSignalIndex(const QMovie* self);
    friend int QMovie_Receivers(const QMovie* self, const char* signal);
    friend int QMovie_QBaseReceivers(const QMovie* self, const char* signal);
    friend bool QMovie_IsSignalConnected(const QMovie* self, const QMetaMethod* signal);
    friend bool QMovie_QBaseIsSignalConnected(const QMovie* self, const QMetaMethod* signal);
};

#endif
