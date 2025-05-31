#pragma once
#ifndef SRC_SPATIALAUDIOC_LIBVIRTUALQAUDIOROOM_H
#define SRC_SPATIALAUDIOC_LIBVIRTUALQAUDIOROOM_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QAudioRoom so that we can call protected methods
class VirtualQAudioRoom final : public QAudioRoom {

  public:
    // Virtual class boolean flag
    bool isVirtualQAudioRoom = true;

    // Virtual class public types (including callbacks)
    using QAudioRoom_Metacall_Callback = int (*)(QAudioRoom*, int, int, void**);
    using QAudioRoom_Event_Callback = bool (*)(QAudioRoom*, QEvent*);
    using QAudioRoom_EventFilter_Callback = bool (*)(QAudioRoom*, QObject*, QEvent*);
    using QAudioRoom_TimerEvent_Callback = void (*)(QAudioRoom*, QTimerEvent*);
    using QAudioRoom_ChildEvent_Callback = void (*)(QAudioRoom*, QChildEvent*);
    using QAudioRoom_CustomEvent_Callback = void (*)(QAudioRoom*, QEvent*);
    using QAudioRoom_ConnectNotify_Callback = void (*)(QAudioRoom*, QMetaMethod*);
    using QAudioRoom_DisconnectNotify_Callback = void (*)(QAudioRoom*, QMetaMethod*);
    using QAudioRoom_Sender_Callback = QObject* (*)();
    using QAudioRoom_SenderSignalIndex_Callback = int (*)();
    using QAudioRoom_Receivers_Callback = int (*)(const QAudioRoom*, const char*);
    using QAudioRoom_IsSignalConnected_Callback = bool (*)(const QAudioRoom*, QMetaMethod*);

  protected:
    // Instance callback storage
    QAudioRoom_Metacall_Callback qaudioroom_metacall_callback = nullptr;
    QAudioRoom_Event_Callback qaudioroom_event_callback = nullptr;
    QAudioRoom_EventFilter_Callback qaudioroom_eventfilter_callback = nullptr;
    QAudioRoom_TimerEvent_Callback qaudioroom_timerevent_callback = nullptr;
    QAudioRoom_ChildEvent_Callback qaudioroom_childevent_callback = nullptr;
    QAudioRoom_CustomEvent_Callback qaudioroom_customevent_callback = nullptr;
    QAudioRoom_ConnectNotify_Callback qaudioroom_connectnotify_callback = nullptr;
    QAudioRoom_DisconnectNotify_Callback qaudioroom_disconnectnotify_callback = nullptr;
    QAudioRoom_Sender_Callback qaudioroom_sender_callback = nullptr;
    QAudioRoom_SenderSignalIndex_Callback qaudioroom_sendersignalindex_callback = nullptr;
    QAudioRoom_Receivers_Callback qaudioroom_receivers_callback = nullptr;
    QAudioRoom_IsSignalConnected_Callback qaudioroom_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qaudioroom_metacall_isbase = false;
    mutable bool qaudioroom_event_isbase = false;
    mutable bool qaudioroom_eventfilter_isbase = false;
    mutable bool qaudioroom_timerevent_isbase = false;
    mutable bool qaudioroom_childevent_isbase = false;
    mutable bool qaudioroom_customevent_isbase = false;
    mutable bool qaudioroom_connectnotify_isbase = false;
    mutable bool qaudioroom_disconnectnotify_isbase = false;
    mutable bool qaudioroom_sender_isbase = false;
    mutable bool qaudioroom_sendersignalindex_isbase = false;
    mutable bool qaudioroom_receivers_isbase = false;
    mutable bool qaudioroom_issignalconnected_isbase = false;

  public:
    VirtualQAudioRoom(QAudioEngine* engine) : QAudioRoom(engine){};

    ~VirtualQAudioRoom() {
        qaudioroom_metacall_callback = nullptr;
        qaudioroom_event_callback = nullptr;
        qaudioroom_eventfilter_callback = nullptr;
        qaudioroom_timerevent_callback = nullptr;
        qaudioroom_childevent_callback = nullptr;
        qaudioroom_customevent_callback = nullptr;
        qaudioroom_connectnotify_callback = nullptr;
        qaudioroom_disconnectnotify_callback = nullptr;
        qaudioroom_sender_callback = nullptr;
        qaudioroom_sendersignalindex_callback = nullptr;
        qaudioroom_receivers_callback = nullptr;
        qaudioroom_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setQAudioRoom_Metacall_Callback(QAudioRoom_Metacall_Callback cb) { qaudioroom_metacall_callback = cb; }
    inline void setQAudioRoom_Event_Callback(QAudioRoom_Event_Callback cb) { qaudioroom_event_callback = cb; }
    inline void setQAudioRoom_EventFilter_Callback(QAudioRoom_EventFilter_Callback cb) { qaudioroom_eventfilter_callback = cb; }
    inline void setQAudioRoom_TimerEvent_Callback(QAudioRoom_TimerEvent_Callback cb) { qaudioroom_timerevent_callback = cb; }
    inline void setQAudioRoom_ChildEvent_Callback(QAudioRoom_ChildEvent_Callback cb) { qaudioroom_childevent_callback = cb; }
    inline void setQAudioRoom_CustomEvent_Callback(QAudioRoom_CustomEvent_Callback cb) { qaudioroom_customevent_callback = cb; }
    inline void setQAudioRoom_ConnectNotify_Callback(QAudioRoom_ConnectNotify_Callback cb) { qaudioroom_connectnotify_callback = cb; }
    inline void setQAudioRoom_DisconnectNotify_Callback(QAudioRoom_DisconnectNotify_Callback cb) { qaudioroom_disconnectnotify_callback = cb; }
    inline void setQAudioRoom_Sender_Callback(QAudioRoom_Sender_Callback cb) { qaudioroom_sender_callback = cb; }
    inline void setQAudioRoom_SenderSignalIndex_Callback(QAudioRoom_SenderSignalIndex_Callback cb) { qaudioroom_sendersignalindex_callback = cb; }
    inline void setQAudioRoom_Receivers_Callback(QAudioRoom_Receivers_Callback cb) { qaudioroom_receivers_callback = cb; }
    inline void setQAudioRoom_IsSignalConnected_Callback(QAudioRoom_IsSignalConnected_Callback cb) { qaudioroom_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQAudioRoom_Metacall_IsBase(bool value) const { qaudioroom_metacall_isbase = value; }
    inline void setQAudioRoom_Event_IsBase(bool value) const { qaudioroom_event_isbase = value; }
    inline void setQAudioRoom_EventFilter_IsBase(bool value) const { qaudioroom_eventfilter_isbase = value; }
    inline void setQAudioRoom_TimerEvent_IsBase(bool value) const { qaudioroom_timerevent_isbase = value; }
    inline void setQAudioRoom_ChildEvent_IsBase(bool value) const { qaudioroom_childevent_isbase = value; }
    inline void setQAudioRoom_CustomEvent_IsBase(bool value) const { qaudioroom_customevent_isbase = value; }
    inline void setQAudioRoom_ConnectNotify_IsBase(bool value) const { qaudioroom_connectnotify_isbase = value; }
    inline void setQAudioRoom_DisconnectNotify_IsBase(bool value) const { qaudioroom_disconnectnotify_isbase = value; }
    inline void setQAudioRoom_Sender_IsBase(bool value) const { qaudioroom_sender_isbase = value; }
    inline void setQAudioRoom_SenderSignalIndex_IsBase(bool value) const { qaudioroom_sendersignalindex_isbase = value; }
    inline void setQAudioRoom_Receivers_IsBase(bool value) const { qaudioroom_receivers_isbase = value; }
    inline void setQAudioRoom_IsSignalConnected_IsBase(bool value) const { qaudioroom_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qaudioroom_metacall_isbase) {
            qaudioroom_metacall_isbase = false;
            return QAudioRoom::qt_metacall(param1, param2, param3);
        } else if (qaudioroom_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qaudioroom_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QAudioRoom::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qaudioroom_event_isbase) {
            qaudioroom_event_isbase = false;
            return QAudioRoom::event(event);
        } else if (qaudioroom_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qaudioroom_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QAudioRoom::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qaudioroom_eventfilter_isbase) {
            qaudioroom_eventfilter_isbase = false;
            return QAudioRoom::eventFilter(watched, event);
        } else if (qaudioroom_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qaudioroom_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QAudioRoom::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qaudioroom_timerevent_isbase) {
            qaudioroom_timerevent_isbase = false;
            QAudioRoom::timerEvent(event);
        } else if (qaudioroom_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qaudioroom_timerevent_callback(this, cbval1);
        } else {
            QAudioRoom::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qaudioroom_childevent_isbase) {
            qaudioroom_childevent_isbase = false;
            QAudioRoom::childEvent(event);
        } else if (qaudioroom_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qaudioroom_childevent_callback(this, cbval1);
        } else {
            QAudioRoom::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qaudioroom_customevent_isbase) {
            qaudioroom_customevent_isbase = false;
            QAudioRoom::customEvent(event);
        } else if (qaudioroom_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qaudioroom_customevent_callback(this, cbval1);
        } else {
            QAudioRoom::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qaudioroom_connectnotify_isbase) {
            qaudioroom_connectnotify_isbase = false;
            QAudioRoom::connectNotify(signal);
        } else if (qaudioroom_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qaudioroom_connectnotify_callback(this, cbval1);
        } else {
            QAudioRoom::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qaudioroom_disconnectnotify_isbase) {
            qaudioroom_disconnectnotify_isbase = false;
            QAudioRoom::disconnectNotify(signal);
        } else if (qaudioroom_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qaudioroom_disconnectnotify_callback(this, cbval1);
        } else {
            QAudioRoom::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qaudioroom_sender_isbase) {
            qaudioroom_sender_isbase = false;
            return QAudioRoom::sender();
        } else if (qaudioroom_sender_callback != nullptr) {
            QObject* callback_ret = qaudioroom_sender_callback();
            return callback_ret;
        } else {
            return QAudioRoom::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qaudioroom_sendersignalindex_isbase) {
            qaudioroom_sendersignalindex_isbase = false;
            return QAudioRoom::senderSignalIndex();
        } else if (qaudioroom_sendersignalindex_callback != nullptr) {
            int callback_ret = qaudioroom_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QAudioRoom::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qaudioroom_receivers_isbase) {
            qaudioroom_receivers_isbase = false;
            return QAudioRoom::receivers(signal);
        } else if (qaudioroom_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qaudioroom_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QAudioRoom::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qaudioroom_issignalconnected_isbase) {
            qaudioroom_issignalconnected_isbase = false;
            return QAudioRoom::isSignalConnected(signal);
        } else if (qaudioroom_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qaudioroom_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QAudioRoom::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void QAudioRoom_TimerEvent(QAudioRoom* self, QTimerEvent* event);
    friend void QAudioRoom_QBaseTimerEvent(QAudioRoom* self, QTimerEvent* event);
    friend void QAudioRoom_ChildEvent(QAudioRoom* self, QChildEvent* event);
    friend void QAudioRoom_QBaseChildEvent(QAudioRoom* self, QChildEvent* event);
    friend void QAudioRoom_CustomEvent(QAudioRoom* self, QEvent* event);
    friend void QAudioRoom_QBaseCustomEvent(QAudioRoom* self, QEvent* event);
    friend void QAudioRoom_ConnectNotify(QAudioRoom* self, const QMetaMethod* signal);
    friend void QAudioRoom_QBaseConnectNotify(QAudioRoom* self, const QMetaMethod* signal);
    friend void QAudioRoom_DisconnectNotify(QAudioRoom* self, const QMetaMethod* signal);
    friend void QAudioRoom_QBaseDisconnectNotify(QAudioRoom* self, const QMetaMethod* signal);
    friend QObject* QAudioRoom_Sender(const QAudioRoom* self);
    friend QObject* QAudioRoom_QBaseSender(const QAudioRoom* self);
    friend int QAudioRoom_SenderSignalIndex(const QAudioRoom* self);
    friend int QAudioRoom_QBaseSenderSignalIndex(const QAudioRoom* self);
    friend int QAudioRoom_Receivers(const QAudioRoom* self, const char* signal);
    friend int QAudioRoom_QBaseReceivers(const QAudioRoom* self, const char* signal);
    friend bool QAudioRoom_IsSignalConnected(const QAudioRoom* self, const QMetaMethod* signal);
    friend bool QAudioRoom_QBaseIsSignalConnected(const QAudioRoom* self, const QMetaMethod* signal);
};

#endif
