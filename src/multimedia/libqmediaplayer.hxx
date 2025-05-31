#pragma once
#ifndef SRC_MULTIMEDIAC_LIBVIRTUALQMEDIAPLAYER_H
#define SRC_MULTIMEDIAC_LIBVIRTUALQMEDIAPLAYER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QMediaPlayer so that we can call protected methods
class VirtualQMediaPlayer final : public QMediaPlayer {

  public:
    // Virtual class boolean flag
    bool isVirtualQMediaPlayer = true;

    // Virtual class public types (including callbacks)
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
    VirtualQMediaPlayer() : QMediaPlayer(){};
    VirtualQMediaPlayer(QObject* parent) : QMediaPlayer(parent){};

    ~VirtualQMediaPlayer() {
        qmediaplayer_metacall_callback = nullptr;
        qmediaplayer_event_callback = nullptr;
        qmediaplayer_eventfilter_callback = nullptr;
        qmediaplayer_timerevent_callback = nullptr;
        qmediaplayer_childevent_callback = nullptr;
        qmediaplayer_customevent_callback = nullptr;
        qmediaplayer_connectnotify_callback = nullptr;
        qmediaplayer_disconnectnotify_callback = nullptr;
        qmediaplayer_sender_callback = nullptr;
        qmediaplayer_sendersignalindex_callback = nullptr;
        qmediaplayer_receivers_callback = nullptr;
        qmediaplayer_issignalconnected_callback = nullptr;
    }

    // Callback setters
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
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qmediaplayer_metacall_isbase) {
            qmediaplayer_metacall_isbase = false;
            return QMediaPlayer::qt_metacall(param1, param2, param3);
        } else if (qmediaplayer_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qmediaplayer_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QMediaPlayer::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qmediaplayer_event_isbase) {
            qmediaplayer_event_isbase = false;
            return QMediaPlayer::event(event);
        } else if (qmediaplayer_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qmediaplayer_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QMediaPlayer::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qmediaplayer_eventfilter_isbase) {
            qmediaplayer_eventfilter_isbase = false;
            return QMediaPlayer::eventFilter(watched, event);
        } else if (qmediaplayer_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qmediaplayer_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QMediaPlayer::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qmediaplayer_timerevent_isbase) {
            qmediaplayer_timerevent_isbase = false;
            QMediaPlayer::timerEvent(event);
        } else if (qmediaplayer_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qmediaplayer_timerevent_callback(this, cbval1);
        } else {
            QMediaPlayer::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qmediaplayer_childevent_isbase) {
            qmediaplayer_childevent_isbase = false;
            QMediaPlayer::childEvent(event);
        } else if (qmediaplayer_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qmediaplayer_childevent_callback(this, cbval1);
        } else {
            QMediaPlayer::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qmediaplayer_customevent_isbase) {
            qmediaplayer_customevent_isbase = false;
            QMediaPlayer::customEvent(event);
        } else if (qmediaplayer_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qmediaplayer_customevent_callback(this, cbval1);
        } else {
            QMediaPlayer::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qmediaplayer_connectnotify_isbase) {
            qmediaplayer_connectnotify_isbase = false;
            QMediaPlayer::connectNotify(signal);
        } else if (qmediaplayer_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qmediaplayer_connectnotify_callback(this, cbval1);
        } else {
            QMediaPlayer::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qmediaplayer_disconnectnotify_isbase) {
            qmediaplayer_disconnectnotify_isbase = false;
            QMediaPlayer::disconnectNotify(signal);
        } else if (qmediaplayer_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qmediaplayer_disconnectnotify_callback(this, cbval1);
        } else {
            QMediaPlayer::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qmediaplayer_sender_isbase) {
            qmediaplayer_sender_isbase = false;
            return QMediaPlayer::sender();
        } else if (qmediaplayer_sender_callback != nullptr) {
            QObject* callback_ret = qmediaplayer_sender_callback();
            return callback_ret;
        } else {
            return QMediaPlayer::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qmediaplayer_sendersignalindex_isbase) {
            qmediaplayer_sendersignalindex_isbase = false;
            return QMediaPlayer::senderSignalIndex();
        } else if (qmediaplayer_sendersignalindex_callback != nullptr) {
            int callback_ret = qmediaplayer_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QMediaPlayer::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qmediaplayer_receivers_isbase) {
            qmediaplayer_receivers_isbase = false;
            return QMediaPlayer::receivers(signal);
        } else if (qmediaplayer_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qmediaplayer_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QMediaPlayer::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qmediaplayer_issignalconnected_isbase) {
            qmediaplayer_issignalconnected_isbase = false;
            return QMediaPlayer::isSignalConnected(signal);
        } else if (qmediaplayer_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qmediaplayer_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QMediaPlayer::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void QMediaPlayer_TimerEvent(QMediaPlayer* self, QTimerEvent* event);
    friend void QMediaPlayer_QBaseTimerEvent(QMediaPlayer* self, QTimerEvent* event);
    friend void QMediaPlayer_ChildEvent(QMediaPlayer* self, QChildEvent* event);
    friend void QMediaPlayer_QBaseChildEvent(QMediaPlayer* self, QChildEvent* event);
    friend void QMediaPlayer_CustomEvent(QMediaPlayer* self, QEvent* event);
    friend void QMediaPlayer_QBaseCustomEvent(QMediaPlayer* self, QEvent* event);
    friend void QMediaPlayer_ConnectNotify(QMediaPlayer* self, const QMetaMethod* signal);
    friend void QMediaPlayer_QBaseConnectNotify(QMediaPlayer* self, const QMetaMethod* signal);
    friend void QMediaPlayer_DisconnectNotify(QMediaPlayer* self, const QMetaMethod* signal);
    friend void QMediaPlayer_QBaseDisconnectNotify(QMediaPlayer* self, const QMetaMethod* signal);
    friend QObject* QMediaPlayer_Sender(const QMediaPlayer* self);
    friend QObject* QMediaPlayer_QBaseSender(const QMediaPlayer* self);
    friend int QMediaPlayer_SenderSignalIndex(const QMediaPlayer* self);
    friend int QMediaPlayer_QBaseSenderSignalIndex(const QMediaPlayer* self);
    friend int QMediaPlayer_Receivers(const QMediaPlayer* self, const char* signal);
    friend int QMediaPlayer_QBaseReceivers(const QMediaPlayer* self, const char* signal);
    friend bool QMediaPlayer_IsSignalConnected(const QMediaPlayer* self, const QMetaMethod* signal);
    friend bool QMediaPlayer_QBaseIsSignalConnected(const QMediaPlayer* self, const QMetaMethod* signal);
};

#endif
