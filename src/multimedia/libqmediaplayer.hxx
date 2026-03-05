#pragma once
#ifndef SRC_MULTIMEDIAC_LIBVIRTUALQMEDIAPLAYER_H
#define SRC_MULTIMEDIAC_LIBVIRTUALQMEDIAPLAYER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QMediaPlayer so that we can call protected methods
class VirtualQMediaPlayer final : public QMediaPlayer {

  public:
    // Virtual class boolean flag
    bool isVirtualQMediaPlayer = true;

    // Virtual class public types (including callbacks)
    using QMediaPlayer_MetaObject_Callback = QMetaObject* (*)();
    using QMediaPlayer_Metacast_Callback = void* (*)(QMediaPlayer*, const char*);
    using QMediaPlayer_Metacall_Callback = int (*)(QMediaPlayer*, int, int, void**);
    using QMediaPlayer_Event_Callback = bool (*)(QMediaPlayer*, QEvent*);
    using QMediaPlayer_EventFilter_Callback = bool (*)(QMediaPlayer*, QObject*, QEvent*);
    using QMediaPlayer_TimerEvent_Callback = void (*)(QMediaPlayer*, QTimerEvent*);
    using QMediaPlayer_ChildEvent_Callback = void (*)(QMediaPlayer*, QChildEvent*);
    using QMediaPlayer_CustomEvent_Callback = void (*)(QMediaPlayer*, QEvent*);
    using QMediaPlayer_ConnectNotify_Callback = void (*)(QMediaPlayer*, QMetaMethod*);
    using QMediaPlayer_DisconnectNotify_Callback = void (*)(QMediaPlayer*, QMetaMethod*);
    using QMediaPlayer_Sender_Callback = QObject* (*)();
    using QMediaPlayer_SenderSignalIndex_Callback = int (*)();
    using QMediaPlayer_Receivers_Callback = int (*)(const QMediaPlayer*, const char*);
    using QMediaPlayer_IsSignalConnected_Callback = bool (*)(const QMediaPlayer*, QMetaMethod*);

  protected:
    // Instance callback storage
    QMediaPlayer_MetaObject_Callback qmediaplayer_metaobject_callback = nullptr;
    QMediaPlayer_Metacast_Callback qmediaplayer_metacast_callback = nullptr;
    QMediaPlayer_Metacall_Callback qmediaplayer_metacall_callback = nullptr;
    QMediaPlayer_Event_Callback qmediaplayer_event_callback = nullptr;
    QMediaPlayer_EventFilter_Callback qmediaplayer_eventfilter_callback = nullptr;
    QMediaPlayer_TimerEvent_Callback qmediaplayer_timerevent_callback = nullptr;
    QMediaPlayer_ChildEvent_Callback qmediaplayer_childevent_callback = nullptr;
    QMediaPlayer_CustomEvent_Callback qmediaplayer_customevent_callback = nullptr;
    QMediaPlayer_ConnectNotify_Callback qmediaplayer_connectnotify_callback = nullptr;
    QMediaPlayer_DisconnectNotify_Callback qmediaplayer_disconnectnotify_callback = nullptr;
    QMediaPlayer_Sender_Callback qmediaplayer_sender_callback = nullptr;
    QMediaPlayer_SenderSignalIndex_Callback qmediaplayer_sendersignalindex_callback = nullptr;
    QMediaPlayer_Receivers_Callback qmediaplayer_receivers_callback = nullptr;
    QMediaPlayer_IsSignalConnected_Callback qmediaplayer_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qmediaplayer_metaobject_isbase = false;
    mutable bool qmediaplayer_metacast_isbase = false;
    mutable bool qmediaplayer_metacall_isbase = false;
    mutable bool qmediaplayer_event_isbase = false;
    mutable bool qmediaplayer_eventfilter_isbase = false;
    mutable bool qmediaplayer_timerevent_isbase = false;
    mutable bool qmediaplayer_childevent_isbase = false;
    mutable bool qmediaplayer_customevent_isbase = false;
    mutable bool qmediaplayer_connectnotify_isbase = false;
    mutable bool qmediaplayer_disconnectnotify_isbase = false;
    mutable bool qmediaplayer_sender_isbase = false;
    mutable bool qmediaplayer_sendersignalindex_isbase = false;
    mutable bool qmediaplayer_receivers_isbase = false;
    mutable bool qmediaplayer_issignalconnected_isbase = false;

  public:
    VirtualQMediaPlayer() : QMediaPlayer() {};
    VirtualQMediaPlayer(QObject* parent) : QMediaPlayer(parent) {};

    // Callback setters
    inline void setQMediaPlayer_MetaObject_Callback(QMediaPlayer_MetaObject_Callback cb) { qmediaplayer_metaobject_callback = cb; }
    inline void setQMediaPlayer_Metacast_Callback(QMediaPlayer_Metacast_Callback cb) { qmediaplayer_metacast_callback = cb; }
    inline void setQMediaPlayer_Metacall_Callback(QMediaPlayer_Metacall_Callback cb) { qmediaplayer_metacall_callback = cb; }
    inline void setQMediaPlayer_Event_Callback(QMediaPlayer_Event_Callback cb) { qmediaplayer_event_callback = cb; }
    inline void setQMediaPlayer_EventFilter_Callback(QMediaPlayer_EventFilter_Callback cb) { qmediaplayer_eventfilter_callback = cb; }
    inline void setQMediaPlayer_TimerEvent_Callback(QMediaPlayer_TimerEvent_Callback cb) { qmediaplayer_timerevent_callback = cb; }
    inline void setQMediaPlayer_ChildEvent_Callback(QMediaPlayer_ChildEvent_Callback cb) { qmediaplayer_childevent_callback = cb; }
    inline void setQMediaPlayer_CustomEvent_Callback(QMediaPlayer_CustomEvent_Callback cb) { qmediaplayer_customevent_callback = cb; }
    inline void setQMediaPlayer_ConnectNotify_Callback(QMediaPlayer_ConnectNotify_Callback cb) { qmediaplayer_connectnotify_callback = cb; }
    inline void setQMediaPlayer_DisconnectNotify_Callback(QMediaPlayer_DisconnectNotify_Callback cb) { qmediaplayer_disconnectnotify_callback = cb; }
    inline void setQMediaPlayer_Sender_Callback(QMediaPlayer_Sender_Callback cb) { qmediaplayer_sender_callback = cb; }
    inline void setQMediaPlayer_SenderSignalIndex_Callback(QMediaPlayer_SenderSignalIndex_Callback cb) { qmediaplayer_sendersignalindex_callback = cb; }
    inline void setQMediaPlayer_Receivers_Callback(QMediaPlayer_Receivers_Callback cb) { qmediaplayer_receivers_callback = cb; }
    inline void setQMediaPlayer_IsSignalConnected_Callback(QMediaPlayer_IsSignalConnected_Callback cb) { qmediaplayer_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQMediaPlayer_MetaObject_IsBase(bool value) const { qmediaplayer_metaobject_isbase = value; }
    inline void setQMediaPlayer_Metacast_IsBase(bool value) const { qmediaplayer_metacast_isbase = value; }
    inline void setQMediaPlayer_Metacall_IsBase(bool value) const { qmediaplayer_metacall_isbase = value; }
    inline void setQMediaPlayer_Event_IsBase(bool value) const { qmediaplayer_event_isbase = value; }
    inline void setQMediaPlayer_EventFilter_IsBase(bool value) const { qmediaplayer_eventfilter_isbase = value; }
    inline void setQMediaPlayer_TimerEvent_IsBase(bool value) const { qmediaplayer_timerevent_isbase = value; }
    inline void setQMediaPlayer_ChildEvent_IsBase(bool value) const { qmediaplayer_childevent_isbase = value; }
    inline void setQMediaPlayer_CustomEvent_IsBase(bool value) const { qmediaplayer_customevent_isbase = value; }
    inline void setQMediaPlayer_ConnectNotify_IsBase(bool value) const { qmediaplayer_connectnotify_isbase = value; }
    inline void setQMediaPlayer_DisconnectNotify_IsBase(bool value) const { qmediaplayer_disconnectnotify_isbase = value; }
    inline void setQMediaPlayer_Sender_IsBase(bool value) const { qmediaplayer_sender_isbase = value; }
    inline void setQMediaPlayer_SenderSignalIndex_IsBase(bool value) const { qmediaplayer_sendersignalindex_isbase = value; }
    inline void setQMediaPlayer_Receivers_IsBase(bool value) const { qmediaplayer_receivers_isbase = value; }
    inline void setQMediaPlayer_IsSignalConnected_IsBase(bool value) const { qmediaplayer_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qmediaplayer_metaobject_isbase) {
            qmediaplayer_metaobject_isbase = false;
            return QMediaPlayer::metaObject();
        }
        auto metaobject_cb = qmediaplayer_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QMediaPlayer::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qmediaplayer_metacast_isbase) {
            qmediaplayer_metacast_isbase = false;
            return QMediaPlayer::qt_metacast(param1);
        }
        auto metacast_cb = qmediaplayer_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QMediaPlayer::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qmediaplayer_metacall_isbase) {
            qmediaplayer_metacall_isbase = false;
            return QMediaPlayer::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qmediaplayer_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QMediaPlayer::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qmediaplayer_event_isbase) {
            qmediaplayer_event_isbase = false;
            return QMediaPlayer::event(event);
        }
        auto event_cb = qmediaplayer_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QMediaPlayer::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qmediaplayer_eventfilter_isbase) {
            qmediaplayer_eventfilter_isbase = false;
            return QMediaPlayer::eventFilter(watched, event);
        }
        auto eventfilter_cb = qmediaplayer_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QMediaPlayer::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qmediaplayer_timerevent_isbase) {
            qmediaplayer_timerevent_isbase = false;
            QMediaPlayer::timerEvent(event);
            return;
        }
        auto timerevent_cb = qmediaplayer_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        QMediaPlayer::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qmediaplayer_childevent_isbase) {
            qmediaplayer_childevent_isbase = false;
            QMediaPlayer::childEvent(event);
            return;
        }
        auto childevent_cb = qmediaplayer_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        QMediaPlayer::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qmediaplayer_customevent_isbase) {
            qmediaplayer_customevent_isbase = false;
            QMediaPlayer::customEvent(event);
            return;
        }
        auto customevent_cb = qmediaplayer_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        QMediaPlayer::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qmediaplayer_connectnotify_isbase) {
            qmediaplayer_connectnotify_isbase = false;
            QMediaPlayer::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qmediaplayer_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        QMediaPlayer::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qmediaplayer_disconnectnotify_isbase) {
            qmediaplayer_disconnectnotify_isbase = false;
            QMediaPlayer::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qmediaplayer_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        QMediaPlayer::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qmediaplayer_sender_isbase) {
            qmediaplayer_sender_isbase = false;
            return QMediaPlayer::sender();
        }
        auto sender_cb = qmediaplayer_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QMediaPlayer::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qmediaplayer_sendersignalindex_isbase) {
            qmediaplayer_sendersignalindex_isbase = false;
            return QMediaPlayer::senderSignalIndex();
        }
        auto sendersignalindex_cb = qmediaplayer_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QMediaPlayer::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qmediaplayer_receivers_isbase) {
            qmediaplayer_receivers_isbase = false;
            return QMediaPlayer::receivers(signal);
        }
        auto receivers_cb = qmediaplayer_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QMediaPlayer::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qmediaplayer_issignalconnected_isbase) {
            qmediaplayer_issignalconnected_isbase = false;
            return QMediaPlayer::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qmediaplayer_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QMediaPlayer::isSignalConnected(signal);
    }

    // Friend functions
    friend void QMediaPlayer_TimerEvent(QMediaPlayer* self, QTimerEvent* event);
    friend void QMediaPlayer_SuperTimerEvent(QMediaPlayer* self, QTimerEvent* event);
    friend void QMediaPlayer_ChildEvent(QMediaPlayer* self, QChildEvent* event);
    friend void QMediaPlayer_SuperChildEvent(QMediaPlayer* self, QChildEvent* event);
    friend void QMediaPlayer_CustomEvent(QMediaPlayer* self, QEvent* event);
    friend void QMediaPlayer_SuperCustomEvent(QMediaPlayer* self, QEvent* event);
    friend void QMediaPlayer_ConnectNotify(QMediaPlayer* self, const QMetaMethod* signal);
    friend void QMediaPlayer_SuperConnectNotify(QMediaPlayer* self, const QMetaMethod* signal);
    friend void QMediaPlayer_DisconnectNotify(QMediaPlayer* self, const QMetaMethod* signal);
    friend void QMediaPlayer_SuperDisconnectNotify(QMediaPlayer* self, const QMetaMethod* signal);
    friend QObject* QMediaPlayer_Sender(const QMediaPlayer* self);
    friend QObject* QMediaPlayer_SuperSender(const QMediaPlayer* self);
    friend int QMediaPlayer_SenderSignalIndex(const QMediaPlayer* self);
    friend int QMediaPlayer_SuperSenderSignalIndex(const QMediaPlayer* self);
    friend int QMediaPlayer_Receivers(const QMediaPlayer* self, const char* signal);
    friend int QMediaPlayer_SuperReceivers(const QMediaPlayer* self, const char* signal);
    friend bool QMediaPlayer_IsSignalConnected(const QMediaPlayer* self, const QMetaMethod* signal);
    friend bool QMediaPlayer_SuperIsSignalConnected(const QMediaPlayer* self, const QMetaMethod* signal);
};

#endif
