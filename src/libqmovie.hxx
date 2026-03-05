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
    using QMovie_MetaObject_Callback = QMetaObject* (*)();
    using QMovie_Metacast_Callback = void* (*)(QMovie*, const char*);
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
    QMovie_MetaObject_Callback qmovie_metaobject_callback = nullptr;
    QMovie_Metacast_Callback qmovie_metacast_callback = nullptr;
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
    mutable bool qmovie_metaobject_isbase = false;
    mutable bool qmovie_metacast_isbase = false;
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

    // Callback setters
    inline void setQMovie_MetaObject_Callback(QMovie_MetaObject_Callback cb) { qmovie_metaobject_callback = cb; }
    inline void setQMovie_Metacast_Callback(QMovie_Metacast_Callback cb) { qmovie_metacast_callback = cb; }
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
    inline void setQMovie_MetaObject_IsBase(bool value) const { qmovie_metaobject_isbase = value; }
    inline void setQMovie_Metacast_IsBase(bool value) const { qmovie_metacast_isbase = value; }
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
    virtual const QMetaObject* metaObject() const override {
        if (qmovie_metaobject_isbase) {
            qmovie_metaobject_isbase = false;
            return QMovie::metaObject();
        }
        auto metaobject_cb = qmovie_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QMovie::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qmovie_metacast_isbase) {
            qmovie_metacast_isbase = false;
            return QMovie::qt_metacast(param1);
        }
        auto metacast_cb = qmovie_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QMovie::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qmovie_metacall_isbase) {
            qmovie_metacall_isbase = false;
            return QMovie::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qmovie_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QMovie::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qmovie_event_isbase) {
            qmovie_event_isbase = false;
            return QMovie::event(event);
        }
        auto event_cb = qmovie_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QMovie::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qmovie_eventfilter_isbase) {
            qmovie_eventfilter_isbase = false;
            return QMovie::eventFilter(watched, event);
        }
        auto eventfilter_cb = qmovie_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QMovie::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qmovie_timerevent_isbase) {
            qmovie_timerevent_isbase = false;
            QMovie::timerEvent(event);
            return;
        }
        auto timerevent_cb = qmovie_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        QMovie::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qmovie_childevent_isbase) {
            qmovie_childevent_isbase = false;
            QMovie::childEvent(event);
            return;
        }
        auto childevent_cb = qmovie_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        QMovie::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qmovie_customevent_isbase) {
            qmovie_customevent_isbase = false;
            QMovie::customEvent(event);
            return;
        }
        auto customevent_cb = qmovie_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        QMovie::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qmovie_connectnotify_isbase) {
            qmovie_connectnotify_isbase = false;
            QMovie::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qmovie_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        QMovie::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qmovie_disconnectnotify_isbase) {
            qmovie_disconnectnotify_isbase = false;
            QMovie::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qmovie_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        QMovie::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qmovie_sender_isbase) {
            qmovie_sender_isbase = false;
            return QMovie::sender();
        }
        auto sender_cb = qmovie_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QMovie::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qmovie_sendersignalindex_isbase) {
            qmovie_sendersignalindex_isbase = false;
            return QMovie::senderSignalIndex();
        }
        auto sendersignalindex_cb = qmovie_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QMovie::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qmovie_receivers_isbase) {
            qmovie_receivers_isbase = false;
            return QMovie::receivers(signal);
        }
        auto receivers_cb = qmovie_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QMovie::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qmovie_issignalconnected_isbase) {
            qmovie_issignalconnected_isbase = false;
            return QMovie::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qmovie_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QMovie::isSignalConnected(signal);
    }

    // Friend functions
    friend void QMovie_TimerEvent(QMovie* self, QTimerEvent* event);
    friend void QMovie_SuperTimerEvent(QMovie* self, QTimerEvent* event);
    friend void QMovie_ChildEvent(QMovie* self, QChildEvent* event);
    friend void QMovie_SuperChildEvent(QMovie* self, QChildEvent* event);
    friend void QMovie_CustomEvent(QMovie* self, QEvent* event);
    friend void QMovie_SuperCustomEvent(QMovie* self, QEvent* event);
    friend void QMovie_ConnectNotify(QMovie* self, const QMetaMethod* signal);
    friend void QMovie_SuperConnectNotify(QMovie* self, const QMetaMethod* signal);
    friend void QMovie_DisconnectNotify(QMovie* self, const QMetaMethod* signal);
    friend void QMovie_SuperDisconnectNotify(QMovie* self, const QMetaMethod* signal);
    friend QObject* QMovie_Sender(const QMovie* self);
    friend QObject* QMovie_SuperSender(const QMovie* self);
    friend int QMovie_SenderSignalIndex(const QMovie* self);
    friend int QMovie_SuperSenderSignalIndex(const QMovie* self);
    friend int QMovie_Receivers(const QMovie* self, const char* signal);
    friend int QMovie_SuperReceivers(const QMovie* self, const char* signal);
    friend bool QMovie_IsSignalConnected(const QMovie* self, const QMetaMethod* signal);
    friend bool QMovie_SuperIsSignalConnected(const QMovie* self, const QMetaMethod* signal);
};

#endif
