#pragma once
#ifndef SRC_MULTIMEDIAC_LIBVIRTUALQAUDIOBUFFERINPUT_H
#define SRC_MULTIMEDIAC_LIBVIRTUALQAUDIOBUFFERINPUT_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QAudioBufferInput so that we can call protected methods
class VirtualQAudioBufferInput final : public QAudioBufferInput {

  public:
    // Virtual class boolean flag
    bool isVirtualQAudioBufferInput = true;

    // Virtual class public types (including callbacks)
    using QAudioBufferInput_Metacall_Callback = int (*)(QAudioBufferInput*, int, int, void**);
    using QAudioBufferInput_Event_Callback = bool (*)(QAudioBufferInput*, QEvent*);
    using QAudioBufferInput_EventFilter_Callback = bool (*)(QAudioBufferInput*, QObject*, QEvent*);
    using QAudioBufferInput_TimerEvent_Callback = void (*)(QAudioBufferInput*, QTimerEvent*);
    using QAudioBufferInput_ChildEvent_Callback = void (*)(QAudioBufferInput*, QChildEvent*);
    using QAudioBufferInput_CustomEvent_Callback = void (*)(QAudioBufferInput*, QEvent*);
    using QAudioBufferInput_ConnectNotify_Callback = void (*)(QAudioBufferInput*, QMetaMethod*);
    using QAudioBufferInput_DisconnectNotify_Callback = void (*)(QAudioBufferInput*, QMetaMethod*);
    using QAudioBufferInput_Sender_Callback = QObject* (*)();
    using QAudioBufferInput_SenderSignalIndex_Callback = int (*)();
    using QAudioBufferInput_Receivers_Callback = int (*)(const QAudioBufferInput*, const char*);
    using QAudioBufferInput_IsSignalConnected_Callback = bool (*)(const QAudioBufferInput*, QMetaMethod*);

  protected:
    // Instance callback storage
    QAudioBufferInput_Metacall_Callback qaudiobufferinput_metacall_callback = nullptr;
    QAudioBufferInput_Event_Callback qaudiobufferinput_event_callback = nullptr;
    QAudioBufferInput_EventFilter_Callback qaudiobufferinput_eventfilter_callback = nullptr;
    QAudioBufferInput_TimerEvent_Callback qaudiobufferinput_timerevent_callback = nullptr;
    QAudioBufferInput_ChildEvent_Callback qaudiobufferinput_childevent_callback = nullptr;
    QAudioBufferInput_CustomEvent_Callback qaudiobufferinput_customevent_callback = nullptr;
    QAudioBufferInput_ConnectNotify_Callback qaudiobufferinput_connectnotify_callback = nullptr;
    QAudioBufferInput_DisconnectNotify_Callback qaudiobufferinput_disconnectnotify_callback = nullptr;
    QAudioBufferInput_Sender_Callback qaudiobufferinput_sender_callback = nullptr;
    QAudioBufferInput_SenderSignalIndex_Callback qaudiobufferinput_sendersignalindex_callback = nullptr;
    QAudioBufferInput_Receivers_Callback qaudiobufferinput_receivers_callback = nullptr;
    QAudioBufferInput_IsSignalConnected_Callback qaudiobufferinput_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qaudiobufferinput_metacall_isbase = false;
    mutable bool qaudiobufferinput_event_isbase = false;
    mutable bool qaudiobufferinput_eventfilter_isbase = false;
    mutable bool qaudiobufferinput_timerevent_isbase = false;
    mutable bool qaudiobufferinput_childevent_isbase = false;
    mutable bool qaudiobufferinput_customevent_isbase = false;
    mutable bool qaudiobufferinput_connectnotify_isbase = false;
    mutable bool qaudiobufferinput_disconnectnotify_isbase = false;
    mutable bool qaudiobufferinput_sender_isbase = false;
    mutable bool qaudiobufferinput_sendersignalindex_isbase = false;
    mutable bool qaudiobufferinput_receivers_isbase = false;
    mutable bool qaudiobufferinput_issignalconnected_isbase = false;

  public:
    VirtualQAudioBufferInput() : QAudioBufferInput() {};
    VirtualQAudioBufferInput(const QAudioFormat& format) : QAudioBufferInput(format) {};
    VirtualQAudioBufferInput(QObject* parent) : QAudioBufferInput(parent) {};
    VirtualQAudioBufferInput(const QAudioFormat& format, QObject* parent) : QAudioBufferInput(format, parent) {};

    ~VirtualQAudioBufferInput() {
        qaudiobufferinput_metacall_callback = nullptr;
        qaudiobufferinput_event_callback = nullptr;
        qaudiobufferinput_eventfilter_callback = nullptr;
        qaudiobufferinput_timerevent_callback = nullptr;
        qaudiobufferinput_childevent_callback = nullptr;
        qaudiobufferinput_customevent_callback = nullptr;
        qaudiobufferinput_connectnotify_callback = nullptr;
        qaudiobufferinput_disconnectnotify_callback = nullptr;
        qaudiobufferinput_sender_callback = nullptr;
        qaudiobufferinput_sendersignalindex_callback = nullptr;
        qaudiobufferinput_receivers_callback = nullptr;
        qaudiobufferinput_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setQAudioBufferInput_Metacall_Callback(QAudioBufferInput_Metacall_Callback cb) { qaudiobufferinput_metacall_callback = cb; }
    inline void setQAudioBufferInput_Event_Callback(QAudioBufferInput_Event_Callback cb) { qaudiobufferinput_event_callback = cb; }
    inline void setQAudioBufferInput_EventFilter_Callback(QAudioBufferInput_EventFilter_Callback cb) { qaudiobufferinput_eventfilter_callback = cb; }
    inline void setQAudioBufferInput_TimerEvent_Callback(QAudioBufferInput_TimerEvent_Callback cb) { qaudiobufferinput_timerevent_callback = cb; }
    inline void setQAudioBufferInput_ChildEvent_Callback(QAudioBufferInput_ChildEvent_Callback cb) { qaudiobufferinput_childevent_callback = cb; }
    inline void setQAudioBufferInput_CustomEvent_Callback(QAudioBufferInput_CustomEvent_Callback cb) { qaudiobufferinput_customevent_callback = cb; }
    inline void setQAudioBufferInput_ConnectNotify_Callback(QAudioBufferInput_ConnectNotify_Callback cb) { qaudiobufferinput_connectnotify_callback = cb; }
    inline void setQAudioBufferInput_DisconnectNotify_Callback(QAudioBufferInput_DisconnectNotify_Callback cb) { qaudiobufferinput_disconnectnotify_callback = cb; }
    inline void setQAudioBufferInput_Sender_Callback(QAudioBufferInput_Sender_Callback cb) { qaudiobufferinput_sender_callback = cb; }
    inline void setQAudioBufferInput_SenderSignalIndex_Callback(QAudioBufferInput_SenderSignalIndex_Callback cb) { qaudiobufferinput_sendersignalindex_callback = cb; }
    inline void setQAudioBufferInput_Receivers_Callback(QAudioBufferInput_Receivers_Callback cb) { qaudiobufferinput_receivers_callback = cb; }
    inline void setQAudioBufferInput_IsSignalConnected_Callback(QAudioBufferInput_IsSignalConnected_Callback cb) { qaudiobufferinput_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQAudioBufferInput_Metacall_IsBase(bool value) const { qaudiobufferinput_metacall_isbase = value; }
    inline void setQAudioBufferInput_Event_IsBase(bool value) const { qaudiobufferinput_event_isbase = value; }
    inline void setQAudioBufferInput_EventFilter_IsBase(bool value) const { qaudiobufferinput_eventfilter_isbase = value; }
    inline void setQAudioBufferInput_TimerEvent_IsBase(bool value) const { qaudiobufferinput_timerevent_isbase = value; }
    inline void setQAudioBufferInput_ChildEvent_IsBase(bool value) const { qaudiobufferinput_childevent_isbase = value; }
    inline void setQAudioBufferInput_CustomEvent_IsBase(bool value) const { qaudiobufferinput_customevent_isbase = value; }
    inline void setQAudioBufferInput_ConnectNotify_IsBase(bool value) const { qaudiobufferinput_connectnotify_isbase = value; }
    inline void setQAudioBufferInput_DisconnectNotify_IsBase(bool value) const { qaudiobufferinput_disconnectnotify_isbase = value; }
    inline void setQAudioBufferInput_Sender_IsBase(bool value) const { qaudiobufferinput_sender_isbase = value; }
    inline void setQAudioBufferInput_SenderSignalIndex_IsBase(bool value) const { qaudiobufferinput_sendersignalindex_isbase = value; }
    inline void setQAudioBufferInput_Receivers_IsBase(bool value) const { qaudiobufferinput_receivers_isbase = value; }
    inline void setQAudioBufferInput_IsSignalConnected_IsBase(bool value) const { qaudiobufferinput_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qaudiobufferinput_metacall_isbase) {
            qaudiobufferinput_metacall_isbase = false;
            return QAudioBufferInput::qt_metacall(param1, param2, param3);
        } else if (qaudiobufferinput_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qaudiobufferinput_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QAudioBufferInput::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qaudiobufferinput_event_isbase) {
            qaudiobufferinput_event_isbase = false;
            return QAudioBufferInput::event(event);
        } else if (qaudiobufferinput_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qaudiobufferinput_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QAudioBufferInput::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qaudiobufferinput_eventfilter_isbase) {
            qaudiobufferinput_eventfilter_isbase = false;
            return QAudioBufferInput::eventFilter(watched, event);
        } else if (qaudiobufferinput_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qaudiobufferinput_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QAudioBufferInput::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qaudiobufferinput_timerevent_isbase) {
            qaudiobufferinput_timerevent_isbase = false;
            QAudioBufferInput::timerEvent(event);
        } else if (qaudiobufferinput_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qaudiobufferinput_timerevent_callback(this, cbval1);
        } else {
            QAudioBufferInput::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qaudiobufferinput_childevent_isbase) {
            qaudiobufferinput_childevent_isbase = false;
            QAudioBufferInput::childEvent(event);
        } else if (qaudiobufferinput_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qaudiobufferinput_childevent_callback(this, cbval1);
        } else {
            QAudioBufferInput::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qaudiobufferinput_customevent_isbase) {
            qaudiobufferinput_customevent_isbase = false;
            QAudioBufferInput::customEvent(event);
        } else if (qaudiobufferinput_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qaudiobufferinput_customevent_callback(this, cbval1);
        } else {
            QAudioBufferInput::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qaudiobufferinput_connectnotify_isbase) {
            qaudiobufferinput_connectnotify_isbase = false;
            QAudioBufferInput::connectNotify(signal);
        } else if (qaudiobufferinput_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qaudiobufferinput_connectnotify_callback(this, cbval1);
        } else {
            QAudioBufferInput::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qaudiobufferinput_disconnectnotify_isbase) {
            qaudiobufferinput_disconnectnotify_isbase = false;
            QAudioBufferInput::disconnectNotify(signal);
        } else if (qaudiobufferinput_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qaudiobufferinput_disconnectnotify_callback(this, cbval1);
        } else {
            QAudioBufferInput::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qaudiobufferinput_sender_isbase) {
            qaudiobufferinput_sender_isbase = false;
            return QAudioBufferInput::sender();
        } else if (qaudiobufferinput_sender_callback != nullptr) {
            QObject* callback_ret = qaudiobufferinput_sender_callback();
            return callback_ret;
        } else {
            return QAudioBufferInput::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qaudiobufferinput_sendersignalindex_isbase) {
            qaudiobufferinput_sendersignalindex_isbase = false;
            return QAudioBufferInput::senderSignalIndex();
        } else if (qaudiobufferinput_sendersignalindex_callback != nullptr) {
            int callback_ret = qaudiobufferinput_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QAudioBufferInput::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qaudiobufferinput_receivers_isbase) {
            qaudiobufferinput_receivers_isbase = false;
            return QAudioBufferInput::receivers(signal);
        } else if (qaudiobufferinput_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qaudiobufferinput_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QAudioBufferInput::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qaudiobufferinput_issignalconnected_isbase) {
            qaudiobufferinput_issignalconnected_isbase = false;
            return QAudioBufferInput::isSignalConnected(signal);
        } else if (qaudiobufferinput_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qaudiobufferinput_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QAudioBufferInput::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void QAudioBufferInput_TimerEvent(QAudioBufferInput* self, QTimerEvent* event);
    friend void QAudioBufferInput_QBaseTimerEvent(QAudioBufferInput* self, QTimerEvent* event);
    friend void QAudioBufferInput_ChildEvent(QAudioBufferInput* self, QChildEvent* event);
    friend void QAudioBufferInput_QBaseChildEvent(QAudioBufferInput* self, QChildEvent* event);
    friend void QAudioBufferInput_CustomEvent(QAudioBufferInput* self, QEvent* event);
    friend void QAudioBufferInput_QBaseCustomEvent(QAudioBufferInput* self, QEvent* event);
    friend void QAudioBufferInput_ConnectNotify(QAudioBufferInput* self, const QMetaMethod* signal);
    friend void QAudioBufferInput_QBaseConnectNotify(QAudioBufferInput* self, const QMetaMethod* signal);
    friend void QAudioBufferInput_DisconnectNotify(QAudioBufferInput* self, const QMetaMethod* signal);
    friend void QAudioBufferInput_QBaseDisconnectNotify(QAudioBufferInput* self, const QMetaMethod* signal);
    friend QObject* QAudioBufferInput_Sender(const QAudioBufferInput* self);
    friend QObject* QAudioBufferInput_QBaseSender(const QAudioBufferInput* self);
    friend int QAudioBufferInput_SenderSignalIndex(const QAudioBufferInput* self);
    friend int QAudioBufferInput_QBaseSenderSignalIndex(const QAudioBufferInput* self);
    friend int QAudioBufferInput_Receivers(const QAudioBufferInput* self, const char* signal);
    friend int QAudioBufferInput_QBaseReceivers(const QAudioBufferInput* self, const char* signal);
    friend bool QAudioBufferInput_IsSignalConnected(const QAudioBufferInput* self, const QMetaMethod* signal);
    friend bool QAudioBufferInput_QBaseIsSignalConnected(const QAudioBufferInput* self, const QMetaMethod* signal);
};

#endif
