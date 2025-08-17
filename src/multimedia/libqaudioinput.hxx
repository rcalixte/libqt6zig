#pragma once
#ifndef SRC_MULTIMEDIAC_LIBVIRTUALQAUDIOINPUT_H
#define SRC_MULTIMEDIAC_LIBVIRTUALQAUDIOINPUT_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QAudioInput so that we can call protected methods
class VirtualQAudioInput final : public QAudioInput {

  public:
    // Virtual class boolean flag
    bool isVirtualQAudioInput = true;

    // Virtual class public types (including callbacks)
    using QAudioInput_Metacall_Callback = int (*)(QAudioInput*, int, int, void**);
    using QAudioInput_Event_Callback = bool (*)(QAudioInput*, QEvent*);
    using QAudioInput_EventFilter_Callback = bool (*)(QAudioInput*, QObject*, QEvent*);
    using QAudioInput_TimerEvent_Callback = void (*)(QAudioInput*, QTimerEvent*);
    using QAudioInput_ChildEvent_Callback = void (*)(QAudioInput*, QChildEvent*);
    using QAudioInput_CustomEvent_Callback = void (*)(QAudioInput*, QEvent*);
    using QAudioInput_ConnectNotify_Callback = void (*)(QAudioInput*, QMetaMethod*);
    using QAudioInput_DisconnectNotify_Callback = void (*)(QAudioInput*, QMetaMethod*);
    using QAudioInput_Sender_Callback = QObject* (*)();
    using QAudioInput_SenderSignalIndex_Callback = int (*)();
    using QAudioInput_Receivers_Callback = int (*)(const QAudioInput*, const char*);
    using QAudioInput_IsSignalConnected_Callback = bool (*)(const QAudioInput*, QMetaMethod*);

  protected:
    // Instance callback storage
    QAudioInput_Metacall_Callback qaudioinput_metacall_callback = nullptr;
    QAudioInput_Event_Callback qaudioinput_event_callback = nullptr;
    QAudioInput_EventFilter_Callback qaudioinput_eventfilter_callback = nullptr;
    QAudioInput_TimerEvent_Callback qaudioinput_timerevent_callback = nullptr;
    QAudioInput_ChildEvent_Callback qaudioinput_childevent_callback = nullptr;
    QAudioInput_CustomEvent_Callback qaudioinput_customevent_callback = nullptr;
    QAudioInput_ConnectNotify_Callback qaudioinput_connectnotify_callback = nullptr;
    QAudioInput_DisconnectNotify_Callback qaudioinput_disconnectnotify_callback = nullptr;
    QAudioInput_Sender_Callback qaudioinput_sender_callback = nullptr;
    QAudioInput_SenderSignalIndex_Callback qaudioinput_sendersignalindex_callback = nullptr;
    QAudioInput_Receivers_Callback qaudioinput_receivers_callback = nullptr;
    QAudioInput_IsSignalConnected_Callback qaudioinput_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qaudioinput_metacall_isbase = false;
    mutable bool qaudioinput_event_isbase = false;
    mutable bool qaudioinput_eventfilter_isbase = false;
    mutable bool qaudioinput_timerevent_isbase = false;
    mutable bool qaudioinput_childevent_isbase = false;
    mutable bool qaudioinput_customevent_isbase = false;
    mutable bool qaudioinput_connectnotify_isbase = false;
    mutable bool qaudioinput_disconnectnotify_isbase = false;
    mutable bool qaudioinput_sender_isbase = false;
    mutable bool qaudioinput_sendersignalindex_isbase = false;
    mutable bool qaudioinput_receivers_isbase = false;
    mutable bool qaudioinput_issignalconnected_isbase = false;

  public:
    VirtualQAudioInput() : QAudioInput() {};
    VirtualQAudioInput(const QAudioDevice& deviceInfo) : QAudioInput(deviceInfo) {};
    VirtualQAudioInput(QObject* parent) : QAudioInput(parent) {};
    VirtualQAudioInput(const QAudioDevice& deviceInfo, QObject* parent) : QAudioInput(deviceInfo, parent) {};

    ~VirtualQAudioInput() {
        qaudioinput_metacall_callback = nullptr;
        qaudioinput_event_callback = nullptr;
        qaudioinput_eventfilter_callback = nullptr;
        qaudioinput_timerevent_callback = nullptr;
        qaudioinput_childevent_callback = nullptr;
        qaudioinput_customevent_callback = nullptr;
        qaudioinput_connectnotify_callback = nullptr;
        qaudioinput_disconnectnotify_callback = nullptr;
        qaudioinput_sender_callback = nullptr;
        qaudioinput_sendersignalindex_callback = nullptr;
        qaudioinput_receivers_callback = nullptr;
        qaudioinput_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setQAudioInput_Metacall_Callback(QAudioInput_Metacall_Callback cb) { qaudioinput_metacall_callback = cb; }
    inline void setQAudioInput_Event_Callback(QAudioInput_Event_Callback cb) { qaudioinput_event_callback = cb; }
    inline void setQAudioInput_EventFilter_Callback(QAudioInput_EventFilter_Callback cb) { qaudioinput_eventfilter_callback = cb; }
    inline void setQAudioInput_TimerEvent_Callback(QAudioInput_TimerEvent_Callback cb) { qaudioinput_timerevent_callback = cb; }
    inline void setQAudioInput_ChildEvent_Callback(QAudioInput_ChildEvent_Callback cb) { qaudioinput_childevent_callback = cb; }
    inline void setQAudioInput_CustomEvent_Callback(QAudioInput_CustomEvent_Callback cb) { qaudioinput_customevent_callback = cb; }
    inline void setQAudioInput_ConnectNotify_Callback(QAudioInput_ConnectNotify_Callback cb) { qaudioinput_connectnotify_callback = cb; }
    inline void setQAudioInput_DisconnectNotify_Callback(QAudioInput_DisconnectNotify_Callback cb) { qaudioinput_disconnectnotify_callback = cb; }
    inline void setQAudioInput_Sender_Callback(QAudioInput_Sender_Callback cb) { qaudioinput_sender_callback = cb; }
    inline void setQAudioInput_SenderSignalIndex_Callback(QAudioInput_SenderSignalIndex_Callback cb) { qaudioinput_sendersignalindex_callback = cb; }
    inline void setQAudioInput_Receivers_Callback(QAudioInput_Receivers_Callback cb) { qaudioinput_receivers_callback = cb; }
    inline void setQAudioInput_IsSignalConnected_Callback(QAudioInput_IsSignalConnected_Callback cb) { qaudioinput_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQAudioInput_Metacall_IsBase(bool value) const { qaudioinput_metacall_isbase = value; }
    inline void setQAudioInput_Event_IsBase(bool value) const { qaudioinput_event_isbase = value; }
    inline void setQAudioInput_EventFilter_IsBase(bool value) const { qaudioinput_eventfilter_isbase = value; }
    inline void setQAudioInput_TimerEvent_IsBase(bool value) const { qaudioinput_timerevent_isbase = value; }
    inline void setQAudioInput_ChildEvent_IsBase(bool value) const { qaudioinput_childevent_isbase = value; }
    inline void setQAudioInput_CustomEvent_IsBase(bool value) const { qaudioinput_customevent_isbase = value; }
    inline void setQAudioInput_ConnectNotify_IsBase(bool value) const { qaudioinput_connectnotify_isbase = value; }
    inline void setQAudioInput_DisconnectNotify_IsBase(bool value) const { qaudioinput_disconnectnotify_isbase = value; }
    inline void setQAudioInput_Sender_IsBase(bool value) const { qaudioinput_sender_isbase = value; }
    inline void setQAudioInput_SenderSignalIndex_IsBase(bool value) const { qaudioinput_sendersignalindex_isbase = value; }
    inline void setQAudioInput_Receivers_IsBase(bool value) const { qaudioinput_receivers_isbase = value; }
    inline void setQAudioInput_IsSignalConnected_IsBase(bool value) const { qaudioinput_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qaudioinput_metacall_isbase) {
            qaudioinput_metacall_isbase = false;
            return QAudioInput::qt_metacall(param1, param2, param3);
        } else if (qaudioinput_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qaudioinput_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QAudioInput::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qaudioinput_event_isbase) {
            qaudioinput_event_isbase = false;
            return QAudioInput::event(event);
        } else if (qaudioinput_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qaudioinput_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QAudioInput::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qaudioinput_eventfilter_isbase) {
            qaudioinput_eventfilter_isbase = false;
            return QAudioInput::eventFilter(watched, event);
        } else if (qaudioinput_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qaudioinput_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QAudioInput::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qaudioinput_timerevent_isbase) {
            qaudioinput_timerevent_isbase = false;
            QAudioInput::timerEvent(event);
        } else if (qaudioinput_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qaudioinput_timerevent_callback(this, cbval1);
        } else {
            QAudioInput::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qaudioinput_childevent_isbase) {
            qaudioinput_childevent_isbase = false;
            QAudioInput::childEvent(event);
        } else if (qaudioinput_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qaudioinput_childevent_callback(this, cbval1);
        } else {
            QAudioInput::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qaudioinput_customevent_isbase) {
            qaudioinput_customevent_isbase = false;
            QAudioInput::customEvent(event);
        } else if (qaudioinput_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qaudioinput_customevent_callback(this, cbval1);
        } else {
            QAudioInput::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qaudioinput_connectnotify_isbase) {
            qaudioinput_connectnotify_isbase = false;
            QAudioInput::connectNotify(signal);
        } else if (qaudioinput_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qaudioinput_connectnotify_callback(this, cbval1);
        } else {
            QAudioInput::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qaudioinput_disconnectnotify_isbase) {
            qaudioinput_disconnectnotify_isbase = false;
            QAudioInput::disconnectNotify(signal);
        } else if (qaudioinput_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qaudioinput_disconnectnotify_callback(this, cbval1);
        } else {
            QAudioInput::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qaudioinput_sender_isbase) {
            qaudioinput_sender_isbase = false;
            return QAudioInput::sender();
        } else if (qaudioinput_sender_callback != nullptr) {
            QObject* callback_ret = qaudioinput_sender_callback();
            return callback_ret;
        } else {
            return QAudioInput::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qaudioinput_sendersignalindex_isbase) {
            qaudioinput_sendersignalindex_isbase = false;
            return QAudioInput::senderSignalIndex();
        } else if (qaudioinput_sendersignalindex_callback != nullptr) {
            int callback_ret = qaudioinput_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QAudioInput::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qaudioinput_receivers_isbase) {
            qaudioinput_receivers_isbase = false;
            return QAudioInput::receivers(signal);
        } else if (qaudioinput_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qaudioinput_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QAudioInput::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qaudioinput_issignalconnected_isbase) {
            qaudioinput_issignalconnected_isbase = false;
            return QAudioInput::isSignalConnected(signal);
        } else if (qaudioinput_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qaudioinput_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QAudioInput::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void QAudioInput_TimerEvent(QAudioInput* self, QTimerEvent* event);
    friend void QAudioInput_QBaseTimerEvent(QAudioInput* self, QTimerEvent* event);
    friend void QAudioInput_ChildEvent(QAudioInput* self, QChildEvent* event);
    friend void QAudioInput_QBaseChildEvent(QAudioInput* self, QChildEvent* event);
    friend void QAudioInput_CustomEvent(QAudioInput* self, QEvent* event);
    friend void QAudioInput_QBaseCustomEvent(QAudioInput* self, QEvent* event);
    friend void QAudioInput_ConnectNotify(QAudioInput* self, const QMetaMethod* signal);
    friend void QAudioInput_QBaseConnectNotify(QAudioInput* self, const QMetaMethod* signal);
    friend void QAudioInput_DisconnectNotify(QAudioInput* self, const QMetaMethod* signal);
    friend void QAudioInput_QBaseDisconnectNotify(QAudioInput* self, const QMetaMethod* signal);
    friend QObject* QAudioInput_Sender(const QAudioInput* self);
    friend QObject* QAudioInput_QBaseSender(const QAudioInput* self);
    friend int QAudioInput_SenderSignalIndex(const QAudioInput* self);
    friend int QAudioInput_QBaseSenderSignalIndex(const QAudioInput* self);
    friend int QAudioInput_Receivers(const QAudioInput* self, const char* signal);
    friend int QAudioInput_QBaseReceivers(const QAudioInput* self, const char* signal);
    friend bool QAudioInput_IsSignalConnected(const QAudioInput* self, const QMetaMethod* signal);
    friend bool QAudioInput_QBaseIsSignalConnected(const QAudioInput* self, const QMetaMethod* signal);
};

#endif
