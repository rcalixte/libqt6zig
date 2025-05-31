#pragma once
#ifndef SRC_MULTIMEDIAC_LIBVIRTUALQAUDIODECODER_H
#define SRC_MULTIMEDIAC_LIBVIRTUALQAUDIODECODER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QAudioDecoder so that we can call protected methods
class VirtualQAudioDecoder final : public QAudioDecoder {

  public:
    // Virtual class boolean flag
    bool isVirtualQAudioDecoder = true;

    // Virtual class public types (including callbacks)
    using QAudioDecoder_Metacall_Callback = int (*)(QAudioDecoder*, int, int, void**);
    using QAudioDecoder_Event_Callback = bool (*)(QAudioDecoder*, QEvent*);
    using QAudioDecoder_EventFilter_Callback = bool (*)(QAudioDecoder*, QObject*, QEvent*);
    using QAudioDecoder_TimerEvent_Callback = void (*)(QAudioDecoder*, QTimerEvent*);
    using QAudioDecoder_ChildEvent_Callback = void (*)(QAudioDecoder*, QChildEvent*);
    using QAudioDecoder_CustomEvent_Callback = void (*)(QAudioDecoder*, QEvent*);
    using QAudioDecoder_ConnectNotify_Callback = void (*)(QAudioDecoder*, QMetaMethod*);
    using QAudioDecoder_DisconnectNotify_Callback = void (*)(QAudioDecoder*, QMetaMethod*);
    using QAudioDecoder_Sender_Callback = QObject* (*)();
    using QAudioDecoder_SenderSignalIndex_Callback = int (*)();
    using QAudioDecoder_Receivers_Callback = int (*)(const QAudioDecoder*, const char*);
    using QAudioDecoder_IsSignalConnected_Callback = bool (*)(const QAudioDecoder*, QMetaMethod*);

  protected:
    // Instance callback storage
    QAudioDecoder_Metacall_Callback qaudiodecoder_metacall_callback = nullptr;
    QAudioDecoder_Event_Callback qaudiodecoder_event_callback = nullptr;
    QAudioDecoder_EventFilter_Callback qaudiodecoder_eventfilter_callback = nullptr;
    QAudioDecoder_TimerEvent_Callback qaudiodecoder_timerevent_callback = nullptr;
    QAudioDecoder_ChildEvent_Callback qaudiodecoder_childevent_callback = nullptr;
    QAudioDecoder_CustomEvent_Callback qaudiodecoder_customevent_callback = nullptr;
    QAudioDecoder_ConnectNotify_Callback qaudiodecoder_connectnotify_callback = nullptr;
    QAudioDecoder_DisconnectNotify_Callback qaudiodecoder_disconnectnotify_callback = nullptr;
    QAudioDecoder_Sender_Callback qaudiodecoder_sender_callback = nullptr;
    QAudioDecoder_SenderSignalIndex_Callback qaudiodecoder_sendersignalindex_callback = nullptr;
    QAudioDecoder_Receivers_Callback qaudiodecoder_receivers_callback = nullptr;
    QAudioDecoder_IsSignalConnected_Callback qaudiodecoder_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qaudiodecoder_metacall_isbase = false;
    mutable bool qaudiodecoder_event_isbase = false;
    mutable bool qaudiodecoder_eventfilter_isbase = false;
    mutable bool qaudiodecoder_timerevent_isbase = false;
    mutable bool qaudiodecoder_childevent_isbase = false;
    mutable bool qaudiodecoder_customevent_isbase = false;
    mutable bool qaudiodecoder_connectnotify_isbase = false;
    mutable bool qaudiodecoder_disconnectnotify_isbase = false;
    mutable bool qaudiodecoder_sender_isbase = false;
    mutable bool qaudiodecoder_sendersignalindex_isbase = false;
    mutable bool qaudiodecoder_receivers_isbase = false;
    mutable bool qaudiodecoder_issignalconnected_isbase = false;

  public:
    VirtualQAudioDecoder() : QAudioDecoder(){};
    VirtualQAudioDecoder(QObject* parent) : QAudioDecoder(parent){};

    ~VirtualQAudioDecoder() {
        qaudiodecoder_metacall_callback = nullptr;
        qaudiodecoder_event_callback = nullptr;
        qaudiodecoder_eventfilter_callback = nullptr;
        qaudiodecoder_timerevent_callback = nullptr;
        qaudiodecoder_childevent_callback = nullptr;
        qaudiodecoder_customevent_callback = nullptr;
        qaudiodecoder_connectnotify_callback = nullptr;
        qaudiodecoder_disconnectnotify_callback = nullptr;
        qaudiodecoder_sender_callback = nullptr;
        qaudiodecoder_sendersignalindex_callback = nullptr;
        qaudiodecoder_receivers_callback = nullptr;
        qaudiodecoder_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setQAudioDecoder_Metacall_Callback(QAudioDecoder_Metacall_Callback cb) { qaudiodecoder_metacall_callback = cb; }
    inline void setQAudioDecoder_Event_Callback(QAudioDecoder_Event_Callback cb) { qaudiodecoder_event_callback = cb; }
    inline void setQAudioDecoder_EventFilter_Callback(QAudioDecoder_EventFilter_Callback cb) { qaudiodecoder_eventfilter_callback = cb; }
    inline void setQAudioDecoder_TimerEvent_Callback(QAudioDecoder_TimerEvent_Callback cb) { qaudiodecoder_timerevent_callback = cb; }
    inline void setQAudioDecoder_ChildEvent_Callback(QAudioDecoder_ChildEvent_Callback cb) { qaudiodecoder_childevent_callback = cb; }
    inline void setQAudioDecoder_CustomEvent_Callback(QAudioDecoder_CustomEvent_Callback cb) { qaudiodecoder_customevent_callback = cb; }
    inline void setQAudioDecoder_ConnectNotify_Callback(QAudioDecoder_ConnectNotify_Callback cb) { qaudiodecoder_connectnotify_callback = cb; }
    inline void setQAudioDecoder_DisconnectNotify_Callback(QAudioDecoder_DisconnectNotify_Callback cb) { qaudiodecoder_disconnectnotify_callback = cb; }
    inline void setQAudioDecoder_Sender_Callback(QAudioDecoder_Sender_Callback cb) { qaudiodecoder_sender_callback = cb; }
    inline void setQAudioDecoder_SenderSignalIndex_Callback(QAudioDecoder_SenderSignalIndex_Callback cb) { qaudiodecoder_sendersignalindex_callback = cb; }
    inline void setQAudioDecoder_Receivers_Callback(QAudioDecoder_Receivers_Callback cb) { qaudiodecoder_receivers_callback = cb; }
    inline void setQAudioDecoder_IsSignalConnected_Callback(QAudioDecoder_IsSignalConnected_Callback cb) { qaudiodecoder_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQAudioDecoder_Metacall_IsBase(bool value) const { qaudiodecoder_metacall_isbase = value; }
    inline void setQAudioDecoder_Event_IsBase(bool value) const { qaudiodecoder_event_isbase = value; }
    inline void setQAudioDecoder_EventFilter_IsBase(bool value) const { qaudiodecoder_eventfilter_isbase = value; }
    inline void setQAudioDecoder_TimerEvent_IsBase(bool value) const { qaudiodecoder_timerevent_isbase = value; }
    inline void setQAudioDecoder_ChildEvent_IsBase(bool value) const { qaudiodecoder_childevent_isbase = value; }
    inline void setQAudioDecoder_CustomEvent_IsBase(bool value) const { qaudiodecoder_customevent_isbase = value; }
    inline void setQAudioDecoder_ConnectNotify_IsBase(bool value) const { qaudiodecoder_connectnotify_isbase = value; }
    inline void setQAudioDecoder_DisconnectNotify_IsBase(bool value) const { qaudiodecoder_disconnectnotify_isbase = value; }
    inline void setQAudioDecoder_Sender_IsBase(bool value) const { qaudiodecoder_sender_isbase = value; }
    inline void setQAudioDecoder_SenderSignalIndex_IsBase(bool value) const { qaudiodecoder_sendersignalindex_isbase = value; }
    inline void setQAudioDecoder_Receivers_IsBase(bool value) const { qaudiodecoder_receivers_isbase = value; }
    inline void setQAudioDecoder_IsSignalConnected_IsBase(bool value) const { qaudiodecoder_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qaudiodecoder_metacall_isbase) {
            qaudiodecoder_metacall_isbase = false;
            return QAudioDecoder::qt_metacall(param1, param2, param3);
        } else if (qaudiodecoder_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qaudiodecoder_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QAudioDecoder::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qaudiodecoder_event_isbase) {
            qaudiodecoder_event_isbase = false;
            return QAudioDecoder::event(event);
        } else if (qaudiodecoder_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qaudiodecoder_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QAudioDecoder::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qaudiodecoder_eventfilter_isbase) {
            qaudiodecoder_eventfilter_isbase = false;
            return QAudioDecoder::eventFilter(watched, event);
        } else if (qaudiodecoder_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qaudiodecoder_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QAudioDecoder::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qaudiodecoder_timerevent_isbase) {
            qaudiodecoder_timerevent_isbase = false;
            QAudioDecoder::timerEvent(event);
        } else if (qaudiodecoder_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qaudiodecoder_timerevent_callback(this, cbval1);
        } else {
            QAudioDecoder::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qaudiodecoder_childevent_isbase) {
            qaudiodecoder_childevent_isbase = false;
            QAudioDecoder::childEvent(event);
        } else if (qaudiodecoder_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qaudiodecoder_childevent_callback(this, cbval1);
        } else {
            QAudioDecoder::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qaudiodecoder_customevent_isbase) {
            qaudiodecoder_customevent_isbase = false;
            QAudioDecoder::customEvent(event);
        } else if (qaudiodecoder_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qaudiodecoder_customevent_callback(this, cbval1);
        } else {
            QAudioDecoder::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qaudiodecoder_connectnotify_isbase) {
            qaudiodecoder_connectnotify_isbase = false;
            QAudioDecoder::connectNotify(signal);
        } else if (qaudiodecoder_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qaudiodecoder_connectnotify_callback(this, cbval1);
        } else {
            QAudioDecoder::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qaudiodecoder_disconnectnotify_isbase) {
            qaudiodecoder_disconnectnotify_isbase = false;
            QAudioDecoder::disconnectNotify(signal);
        } else if (qaudiodecoder_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qaudiodecoder_disconnectnotify_callback(this, cbval1);
        } else {
            QAudioDecoder::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qaudiodecoder_sender_isbase) {
            qaudiodecoder_sender_isbase = false;
            return QAudioDecoder::sender();
        } else if (qaudiodecoder_sender_callback != nullptr) {
            QObject* callback_ret = qaudiodecoder_sender_callback();
            return callback_ret;
        } else {
            return QAudioDecoder::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qaudiodecoder_sendersignalindex_isbase) {
            qaudiodecoder_sendersignalindex_isbase = false;
            return QAudioDecoder::senderSignalIndex();
        } else if (qaudiodecoder_sendersignalindex_callback != nullptr) {
            int callback_ret = qaudiodecoder_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QAudioDecoder::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qaudiodecoder_receivers_isbase) {
            qaudiodecoder_receivers_isbase = false;
            return QAudioDecoder::receivers(signal);
        } else if (qaudiodecoder_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qaudiodecoder_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QAudioDecoder::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qaudiodecoder_issignalconnected_isbase) {
            qaudiodecoder_issignalconnected_isbase = false;
            return QAudioDecoder::isSignalConnected(signal);
        } else if (qaudiodecoder_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qaudiodecoder_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QAudioDecoder::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void QAudioDecoder_TimerEvent(QAudioDecoder* self, QTimerEvent* event);
    friend void QAudioDecoder_QBaseTimerEvent(QAudioDecoder* self, QTimerEvent* event);
    friend void QAudioDecoder_ChildEvent(QAudioDecoder* self, QChildEvent* event);
    friend void QAudioDecoder_QBaseChildEvent(QAudioDecoder* self, QChildEvent* event);
    friend void QAudioDecoder_CustomEvent(QAudioDecoder* self, QEvent* event);
    friend void QAudioDecoder_QBaseCustomEvent(QAudioDecoder* self, QEvent* event);
    friend void QAudioDecoder_ConnectNotify(QAudioDecoder* self, const QMetaMethod* signal);
    friend void QAudioDecoder_QBaseConnectNotify(QAudioDecoder* self, const QMetaMethod* signal);
    friend void QAudioDecoder_DisconnectNotify(QAudioDecoder* self, const QMetaMethod* signal);
    friend void QAudioDecoder_QBaseDisconnectNotify(QAudioDecoder* self, const QMetaMethod* signal);
    friend QObject* QAudioDecoder_Sender(const QAudioDecoder* self);
    friend QObject* QAudioDecoder_QBaseSender(const QAudioDecoder* self);
    friend int QAudioDecoder_SenderSignalIndex(const QAudioDecoder* self);
    friend int QAudioDecoder_QBaseSenderSignalIndex(const QAudioDecoder* self);
    friend int QAudioDecoder_Receivers(const QAudioDecoder* self, const char* signal);
    friend int QAudioDecoder_QBaseReceivers(const QAudioDecoder* self, const char* signal);
    friend bool QAudioDecoder_IsSignalConnected(const QAudioDecoder* self, const QMetaMethod* signal);
    friend bool QAudioDecoder_QBaseIsSignalConnected(const QAudioDecoder* self, const QMetaMethod* signal);
};

#endif
