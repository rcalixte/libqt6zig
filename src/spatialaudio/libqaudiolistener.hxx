#pragma once
#ifndef SRC_SPATIALAUDIOC_LIBVIRTUALQAUDIOLISTENER_H
#define SRC_SPATIALAUDIOC_LIBVIRTUALQAUDIOLISTENER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QAudioListener so that we can call protected methods
class VirtualQAudioListener final : public QAudioListener {

  public:
    // Virtual class boolean flag
    bool isVirtualQAudioListener = true;

    // Virtual class public types (including callbacks)
    using QAudioListener_Metacall_Callback = int (*)(QAudioListener*, int, int, void**);
    using QAudioListener_Event_Callback = bool (*)(QAudioListener*, QEvent*);
    using QAudioListener_EventFilter_Callback = bool (*)(QAudioListener*, QObject*, QEvent*);
    using QAudioListener_TimerEvent_Callback = void (*)(QAudioListener*, QTimerEvent*);
    using QAudioListener_ChildEvent_Callback = void (*)(QAudioListener*, QChildEvent*);
    using QAudioListener_CustomEvent_Callback = void (*)(QAudioListener*, QEvent*);
    using QAudioListener_ConnectNotify_Callback = void (*)(QAudioListener*, QMetaMethod*);
    using QAudioListener_DisconnectNotify_Callback = void (*)(QAudioListener*, QMetaMethod*);
    using QAudioListener_Sender_Callback = QObject* (*)();
    using QAudioListener_SenderSignalIndex_Callback = int (*)();
    using QAudioListener_Receivers_Callback = int (*)(const QAudioListener*, const char*);
    using QAudioListener_IsSignalConnected_Callback = bool (*)(const QAudioListener*, QMetaMethod*);

  protected:
    // Instance callback storage
    QAudioListener_Metacall_Callback qaudiolistener_metacall_callback = nullptr;
    QAudioListener_Event_Callback qaudiolistener_event_callback = nullptr;
    QAudioListener_EventFilter_Callback qaudiolistener_eventfilter_callback = nullptr;
    QAudioListener_TimerEvent_Callback qaudiolistener_timerevent_callback = nullptr;
    QAudioListener_ChildEvent_Callback qaudiolistener_childevent_callback = nullptr;
    QAudioListener_CustomEvent_Callback qaudiolistener_customevent_callback = nullptr;
    QAudioListener_ConnectNotify_Callback qaudiolistener_connectnotify_callback = nullptr;
    QAudioListener_DisconnectNotify_Callback qaudiolistener_disconnectnotify_callback = nullptr;
    QAudioListener_Sender_Callback qaudiolistener_sender_callback = nullptr;
    QAudioListener_SenderSignalIndex_Callback qaudiolistener_sendersignalindex_callback = nullptr;
    QAudioListener_Receivers_Callback qaudiolistener_receivers_callback = nullptr;
    QAudioListener_IsSignalConnected_Callback qaudiolistener_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qaudiolistener_metacall_isbase = false;
    mutable bool qaudiolistener_event_isbase = false;
    mutable bool qaudiolistener_eventfilter_isbase = false;
    mutable bool qaudiolistener_timerevent_isbase = false;
    mutable bool qaudiolistener_childevent_isbase = false;
    mutable bool qaudiolistener_customevent_isbase = false;
    mutable bool qaudiolistener_connectnotify_isbase = false;
    mutable bool qaudiolistener_disconnectnotify_isbase = false;
    mutable bool qaudiolistener_sender_isbase = false;
    mutable bool qaudiolistener_sendersignalindex_isbase = false;
    mutable bool qaudiolistener_receivers_isbase = false;
    mutable bool qaudiolistener_issignalconnected_isbase = false;

  public:
    VirtualQAudioListener(QAudioEngine* engine) : QAudioListener(engine) {};

    ~VirtualQAudioListener() {
        qaudiolistener_metacall_callback = nullptr;
        qaudiolistener_event_callback = nullptr;
        qaudiolistener_eventfilter_callback = nullptr;
        qaudiolistener_timerevent_callback = nullptr;
        qaudiolistener_childevent_callback = nullptr;
        qaudiolistener_customevent_callback = nullptr;
        qaudiolistener_connectnotify_callback = nullptr;
        qaudiolistener_disconnectnotify_callback = nullptr;
        qaudiolistener_sender_callback = nullptr;
        qaudiolistener_sendersignalindex_callback = nullptr;
        qaudiolistener_receivers_callback = nullptr;
        qaudiolistener_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setQAudioListener_Metacall_Callback(QAudioListener_Metacall_Callback cb) { qaudiolistener_metacall_callback = cb; }
    inline void setQAudioListener_Event_Callback(QAudioListener_Event_Callback cb) { qaudiolistener_event_callback = cb; }
    inline void setQAudioListener_EventFilter_Callback(QAudioListener_EventFilter_Callback cb) { qaudiolistener_eventfilter_callback = cb; }
    inline void setQAudioListener_TimerEvent_Callback(QAudioListener_TimerEvent_Callback cb) { qaudiolistener_timerevent_callback = cb; }
    inline void setQAudioListener_ChildEvent_Callback(QAudioListener_ChildEvent_Callback cb) { qaudiolistener_childevent_callback = cb; }
    inline void setQAudioListener_CustomEvent_Callback(QAudioListener_CustomEvent_Callback cb) { qaudiolistener_customevent_callback = cb; }
    inline void setQAudioListener_ConnectNotify_Callback(QAudioListener_ConnectNotify_Callback cb) { qaudiolistener_connectnotify_callback = cb; }
    inline void setQAudioListener_DisconnectNotify_Callback(QAudioListener_DisconnectNotify_Callback cb) { qaudiolistener_disconnectnotify_callback = cb; }
    inline void setQAudioListener_Sender_Callback(QAudioListener_Sender_Callback cb) { qaudiolistener_sender_callback = cb; }
    inline void setQAudioListener_SenderSignalIndex_Callback(QAudioListener_SenderSignalIndex_Callback cb) { qaudiolistener_sendersignalindex_callback = cb; }
    inline void setQAudioListener_Receivers_Callback(QAudioListener_Receivers_Callback cb) { qaudiolistener_receivers_callback = cb; }
    inline void setQAudioListener_IsSignalConnected_Callback(QAudioListener_IsSignalConnected_Callback cb) { qaudiolistener_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQAudioListener_Metacall_IsBase(bool value) const { qaudiolistener_metacall_isbase = value; }
    inline void setQAudioListener_Event_IsBase(bool value) const { qaudiolistener_event_isbase = value; }
    inline void setQAudioListener_EventFilter_IsBase(bool value) const { qaudiolistener_eventfilter_isbase = value; }
    inline void setQAudioListener_TimerEvent_IsBase(bool value) const { qaudiolistener_timerevent_isbase = value; }
    inline void setQAudioListener_ChildEvent_IsBase(bool value) const { qaudiolistener_childevent_isbase = value; }
    inline void setQAudioListener_CustomEvent_IsBase(bool value) const { qaudiolistener_customevent_isbase = value; }
    inline void setQAudioListener_ConnectNotify_IsBase(bool value) const { qaudiolistener_connectnotify_isbase = value; }
    inline void setQAudioListener_DisconnectNotify_IsBase(bool value) const { qaudiolistener_disconnectnotify_isbase = value; }
    inline void setQAudioListener_Sender_IsBase(bool value) const { qaudiolistener_sender_isbase = value; }
    inline void setQAudioListener_SenderSignalIndex_IsBase(bool value) const { qaudiolistener_sendersignalindex_isbase = value; }
    inline void setQAudioListener_Receivers_IsBase(bool value) const { qaudiolistener_receivers_isbase = value; }
    inline void setQAudioListener_IsSignalConnected_IsBase(bool value) const { qaudiolistener_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qaudiolistener_metacall_isbase) {
            qaudiolistener_metacall_isbase = false;
            return QAudioListener::qt_metacall(param1, param2, param3);
        } else if (qaudiolistener_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qaudiolistener_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QAudioListener::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qaudiolistener_event_isbase) {
            qaudiolistener_event_isbase = false;
            return QAudioListener::event(event);
        } else if (qaudiolistener_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qaudiolistener_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QAudioListener::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qaudiolistener_eventfilter_isbase) {
            qaudiolistener_eventfilter_isbase = false;
            return QAudioListener::eventFilter(watched, event);
        } else if (qaudiolistener_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qaudiolistener_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QAudioListener::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qaudiolistener_timerevent_isbase) {
            qaudiolistener_timerevent_isbase = false;
            QAudioListener::timerEvent(event);
        } else if (qaudiolistener_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qaudiolistener_timerevent_callback(this, cbval1);
        } else {
            QAudioListener::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qaudiolistener_childevent_isbase) {
            qaudiolistener_childevent_isbase = false;
            QAudioListener::childEvent(event);
        } else if (qaudiolistener_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qaudiolistener_childevent_callback(this, cbval1);
        } else {
            QAudioListener::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qaudiolistener_customevent_isbase) {
            qaudiolistener_customevent_isbase = false;
            QAudioListener::customEvent(event);
        } else if (qaudiolistener_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qaudiolistener_customevent_callback(this, cbval1);
        } else {
            QAudioListener::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qaudiolistener_connectnotify_isbase) {
            qaudiolistener_connectnotify_isbase = false;
            QAudioListener::connectNotify(signal);
        } else if (qaudiolistener_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qaudiolistener_connectnotify_callback(this, cbval1);
        } else {
            QAudioListener::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qaudiolistener_disconnectnotify_isbase) {
            qaudiolistener_disconnectnotify_isbase = false;
            QAudioListener::disconnectNotify(signal);
        } else if (qaudiolistener_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qaudiolistener_disconnectnotify_callback(this, cbval1);
        } else {
            QAudioListener::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qaudiolistener_sender_isbase) {
            qaudiolistener_sender_isbase = false;
            return QAudioListener::sender();
        } else if (qaudiolistener_sender_callback != nullptr) {
            QObject* callback_ret = qaudiolistener_sender_callback();
            return callback_ret;
        } else {
            return QAudioListener::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qaudiolistener_sendersignalindex_isbase) {
            qaudiolistener_sendersignalindex_isbase = false;
            return QAudioListener::senderSignalIndex();
        } else if (qaudiolistener_sendersignalindex_callback != nullptr) {
            int callback_ret = qaudiolistener_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QAudioListener::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qaudiolistener_receivers_isbase) {
            qaudiolistener_receivers_isbase = false;
            return QAudioListener::receivers(signal);
        } else if (qaudiolistener_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qaudiolistener_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QAudioListener::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qaudiolistener_issignalconnected_isbase) {
            qaudiolistener_issignalconnected_isbase = false;
            return QAudioListener::isSignalConnected(signal);
        } else if (qaudiolistener_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qaudiolistener_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QAudioListener::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void QAudioListener_TimerEvent(QAudioListener* self, QTimerEvent* event);
    friend void QAudioListener_QBaseTimerEvent(QAudioListener* self, QTimerEvent* event);
    friend void QAudioListener_ChildEvent(QAudioListener* self, QChildEvent* event);
    friend void QAudioListener_QBaseChildEvent(QAudioListener* self, QChildEvent* event);
    friend void QAudioListener_CustomEvent(QAudioListener* self, QEvent* event);
    friend void QAudioListener_QBaseCustomEvent(QAudioListener* self, QEvent* event);
    friend void QAudioListener_ConnectNotify(QAudioListener* self, const QMetaMethod* signal);
    friend void QAudioListener_QBaseConnectNotify(QAudioListener* self, const QMetaMethod* signal);
    friend void QAudioListener_DisconnectNotify(QAudioListener* self, const QMetaMethod* signal);
    friend void QAudioListener_QBaseDisconnectNotify(QAudioListener* self, const QMetaMethod* signal);
    friend QObject* QAudioListener_Sender(const QAudioListener* self);
    friend QObject* QAudioListener_QBaseSender(const QAudioListener* self);
    friend int QAudioListener_SenderSignalIndex(const QAudioListener* self);
    friend int QAudioListener_QBaseSenderSignalIndex(const QAudioListener* self);
    friend int QAudioListener_Receivers(const QAudioListener* self, const char* signal);
    friend int QAudioListener_QBaseReceivers(const QAudioListener* self, const char* signal);
    friend bool QAudioListener_IsSignalConnected(const QAudioListener* self, const QMetaMethod* signal);
    friend bool QAudioListener_QBaseIsSignalConnected(const QAudioListener* self, const QMetaMethod* signal);
};

#endif
