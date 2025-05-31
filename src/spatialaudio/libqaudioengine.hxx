#pragma once
#ifndef SRC_SPATIALAUDIOC_LIBVIRTUALQAUDIOENGINE_H
#define SRC_SPATIALAUDIOC_LIBVIRTUALQAUDIOENGINE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QAudioEngine so that we can call protected methods
class VirtualQAudioEngine final : public QAudioEngine {

  public:
    // Virtual class boolean flag
    bool isVirtualQAudioEngine = true;

    // Virtual class public types (including callbacks)
    using QAudioEngine_Metacall_Callback = int (*)(QAudioEngine*, int, int, void**);
    using QAudioEngine_Event_Callback = bool (*)(QAudioEngine*, QEvent*);
    using QAudioEngine_EventFilter_Callback = bool (*)(QAudioEngine*, QObject*, QEvent*);
    using QAudioEngine_TimerEvent_Callback = void (*)(QAudioEngine*, QTimerEvent*);
    using QAudioEngine_ChildEvent_Callback = void (*)(QAudioEngine*, QChildEvent*);
    using QAudioEngine_CustomEvent_Callback = void (*)(QAudioEngine*, QEvent*);
    using QAudioEngine_ConnectNotify_Callback = void (*)(QAudioEngine*, QMetaMethod*);
    using QAudioEngine_DisconnectNotify_Callback = void (*)(QAudioEngine*, QMetaMethod*);
    using QAudioEngine_Sender_Callback = QObject* (*)();
    using QAudioEngine_SenderSignalIndex_Callback = int (*)();
    using QAudioEngine_Receivers_Callback = int (*)(const QAudioEngine*, const char*);
    using QAudioEngine_IsSignalConnected_Callback = bool (*)(const QAudioEngine*, QMetaMethod*);

  protected:
    // Instance callback storage
    QAudioEngine_Metacall_Callback qaudioengine_metacall_callback = nullptr;
    QAudioEngine_Event_Callback qaudioengine_event_callback = nullptr;
    QAudioEngine_EventFilter_Callback qaudioengine_eventfilter_callback = nullptr;
    QAudioEngine_TimerEvent_Callback qaudioengine_timerevent_callback = nullptr;
    QAudioEngine_ChildEvent_Callback qaudioengine_childevent_callback = nullptr;
    QAudioEngine_CustomEvent_Callback qaudioengine_customevent_callback = nullptr;
    QAudioEngine_ConnectNotify_Callback qaudioengine_connectnotify_callback = nullptr;
    QAudioEngine_DisconnectNotify_Callback qaudioengine_disconnectnotify_callback = nullptr;
    QAudioEngine_Sender_Callback qaudioengine_sender_callback = nullptr;
    QAudioEngine_SenderSignalIndex_Callback qaudioengine_sendersignalindex_callback = nullptr;
    QAudioEngine_Receivers_Callback qaudioengine_receivers_callback = nullptr;
    QAudioEngine_IsSignalConnected_Callback qaudioengine_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qaudioengine_metacall_isbase = false;
    mutable bool qaudioengine_event_isbase = false;
    mutable bool qaudioengine_eventfilter_isbase = false;
    mutable bool qaudioengine_timerevent_isbase = false;
    mutable bool qaudioengine_childevent_isbase = false;
    mutable bool qaudioengine_customevent_isbase = false;
    mutable bool qaudioengine_connectnotify_isbase = false;
    mutable bool qaudioengine_disconnectnotify_isbase = false;
    mutable bool qaudioengine_sender_isbase = false;
    mutable bool qaudioengine_sendersignalindex_isbase = false;
    mutable bool qaudioengine_receivers_isbase = false;
    mutable bool qaudioengine_issignalconnected_isbase = false;

  public:
    VirtualQAudioEngine() : QAudioEngine(){};
    VirtualQAudioEngine(QObject* parent) : QAudioEngine(parent){};
    VirtualQAudioEngine(int sampleRate) : QAudioEngine(sampleRate){};
    VirtualQAudioEngine(int sampleRate, QObject* parent) : QAudioEngine(sampleRate, parent){};

    ~VirtualQAudioEngine() {
        qaudioengine_metacall_callback = nullptr;
        qaudioengine_event_callback = nullptr;
        qaudioengine_eventfilter_callback = nullptr;
        qaudioengine_timerevent_callback = nullptr;
        qaudioengine_childevent_callback = nullptr;
        qaudioengine_customevent_callback = nullptr;
        qaudioengine_connectnotify_callback = nullptr;
        qaudioengine_disconnectnotify_callback = nullptr;
        qaudioengine_sender_callback = nullptr;
        qaudioengine_sendersignalindex_callback = nullptr;
        qaudioengine_receivers_callback = nullptr;
        qaudioengine_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setQAudioEngine_Metacall_Callback(QAudioEngine_Metacall_Callback cb) { qaudioengine_metacall_callback = cb; }
    inline void setQAudioEngine_Event_Callback(QAudioEngine_Event_Callback cb) { qaudioengine_event_callback = cb; }
    inline void setQAudioEngine_EventFilter_Callback(QAudioEngine_EventFilter_Callback cb) { qaudioengine_eventfilter_callback = cb; }
    inline void setQAudioEngine_TimerEvent_Callback(QAudioEngine_TimerEvent_Callback cb) { qaudioengine_timerevent_callback = cb; }
    inline void setQAudioEngine_ChildEvent_Callback(QAudioEngine_ChildEvent_Callback cb) { qaudioengine_childevent_callback = cb; }
    inline void setQAudioEngine_CustomEvent_Callback(QAudioEngine_CustomEvent_Callback cb) { qaudioengine_customevent_callback = cb; }
    inline void setQAudioEngine_ConnectNotify_Callback(QAudioEngine_ConnectNotify_Callback cb) { qaudioengine_connectnotify_callback = cb; }
    inline void setQAudioEngine_DisconnectNotify_Callback(QAudioEngine_DisconnectNotify_Callback cb) { qaudioengine_disconnectnotify_callback = cb; }
    inline void setQAudioEngine_Sender_Callback(QAudioEngine_Sender_Callback cb) { qaudioengine_sender_callback = cb; }
    inline void setQAudioEngine_SenderSignalIndex_Callback(QAudioEngine_SenderSignalIndex_Callback cb) { qaudioengine_sendersignalindex_callback = cb; }
    inline void setQAudioEngine_Receivers_Callback(QAudioEngine_Receivers_Callback cb) { qaudioengine_receivers_callback = cb; }
    inline void setQAudioEngine_IsSignalConnected_Callback(QAudioEngine_IsSignalConnected_Callback cb) { qaudioengine_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQAudioEngine_Metacall_IsBase(bool value) const { qaudioengine_metacall_isbase = value; }
    inline void setQAudioEngine_Event_IsBase(bool value) const { qaudioengine_event_isbase = value; }
    inline void setQAudioEngine_EventFilter_IsBase(bool value) const { qaudioengine_eventfilter_isbase = value; }
    inline void setQAudioEngine_TimerEvent_IsBase(bool value) const { qaudioengine_timerevent_isbase = value; }
    inline void setQAudioEngine_ChildEvent_IsBase(bool value) const { qaudioengine_childevent_isbase = value; }
    inline void setQAudioEngine_CustomEvent_IsBase(bool value) const { qaudioengine_customevent_isbase = value; }
    inline void setQAudioEngine_ConnectNotify_IsBase(bool value) const { qaudioengine_connectnotify_isbase = value; }
    inline void setQAudioEngine_DisconnectNotify_IsBase(bool value) const { qaudioengine_disconnectnotify_isbase = value; }
    inline void setQAudioEngine_Sender_IsBase(bool value) const { qaudioengine_sender_isbase = value; }
    inline void setQAudioEngine_SenderSignalIndex_IsBase(bool value) const { qaudioengine_sendersignalindex_isbase = value; }
    inline void setQAudioEngine_Receivers_IsBase(bool value) const { qaudioengine_receivers_isbase = value; }
    inline void setQAudioEngine_IsSignalConnected_IsBase(bool value) const { qaudioengine_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qaudioengine_metacall_isbase) {
            qaudioengine_metacall_isbase = false;
            return QAudioEngine::qt_metacall(param1, param2, param3);
        } else if (qaudioengine_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qaudioengine_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QAudioEngine::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qaudioengine_event_isbase) {
            qaudioengine_event_isbase = false;
            return QAudioEngine::event(event);
        } else if (qaudioengine_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qaudioengine_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QAudioEngine::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qaudioengine_eventfilter_isbase) {
            qaudioengine_eventfilter_isbase = false;
            return QAudioEngine::eventFilter(watched, event);
        } else if (qaudioengine_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qaudioengine_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QAudioEngine::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qaudioengine_timerevent_isbase) {
            qaudioengine_timerevent_isbase = false;
            QAudioEngine::timerEvent(event);
        } else if (qaudioengine_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qaudioengine_timerevent_callback(this, cbval1);
        } else {
            QAudioEngine::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qaudioengine_childevent_isbase) {
            qaudioengine_childevent_isbase = false;
            QAudioEngine::childEvent(event);
        } else if (qaudioengine_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qaudioengine_childevent_callback(this, cbval1);
        } else {
            QAudioEngine::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qaudioengine_customevent_isbase) {
            qaudioengine_customevent_isbase = false;
            QAudioEngine::customEvent(event);
        } else if (qaudioengine_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qaudioengine_customevent_callback(this, cbval1);
        } else {
            QAudioEngine::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qaudioengine_connectnotify_isbase) {
            qaudioengine_connectnotify_isbase = false;
            QAudioEngine::connectNotify(signal);
        } else if (qaudioengine_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qaudioengine_connectnotify_callback(this, cbval1);
        } else {
            QAudioEngine::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qaudioengine_disconnectnotify_isbase) {
            qaudioengine_disconnectnotify_isbase = false;
            QAudioEngine::disconnectNotify(signal);
        } else if (qaudioengine_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qaudioengine_disconnectnotify_callback(this, cbval1);
        } else {
            QAudioEngine::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qaudioengine_sender_isbase) {
            qaudioengine_sender_isbase = false;
            return QAudioEngine::sender();
        } else if (qaudioengine_sender_callback != nullptr) {
            QObject* callback_ret = qaudioengine_sender_callback();
            return callback_ret;
        } else {
            return QAudioEngine::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qaudioengine_sendersignalindex_isbase) {
            qaudioengine_sendersignalindex_isbase = false;
            return QAudioEngine::senderSignalIndex();
        } else if (qaudioengine_sendersignalindex_callback != nullptr) {
            int callback_ret = qaudioengine_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QAudioEngine::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qaudioengine_receivers_isbase) {
            qaudioengine_receivers_isbase = false;
            return QAudioEngine::receivers(signal);
        } else if (qaudioengine_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qaudioengine_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QAudioEngine::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qaudioengine_issignalconnected_isbase) {
            qaudioengine_issignalconnected_isbase = false;
            return QAudioEngine::isSignalConnected(signal);
        } else if (qaudioengine_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qaudioengine_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QAudioEngine::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void QAudioEngine_TimerEvent(QAudioEngine* self, QTimerEvent* event);
    friend void QAudioEngine_QBaseTimerEvent(QAudioEngine* self, QTimerEvent* event);
    friend void QAudioEngine_ChildEvent(QAudioEngine* self, QChildEvent* event);
    friend void QAudioEngine_QBaseChildEvent(QAudioEngine* self, QChildEvent* event);
    friend void QAudioEngine_CustomEvent(QAudioEngine* self, QEvent* event);
    friend void QAudioEngine_QBaseCustomEvent(QAudioEngine* self, QEvent* event);
    friend void QAudioEngine_ConnectNotify(QAudioEngine* self, const QMetaMethod* signal);
    friend void QAudioEngine_QBaseConnectNotify(QAudioEngine* self, const QMetaMethod* signal);
    friend void QAudioEngine_DisconnectNotify(QAudioEngine* self, const QMetaMethod* signal);
    friend void QAudioEngine_QBaseDisconnectNotify(QAudioEngine* self, const QMetaMethod* signal);
    friend QObject* QAudioEngine_Sender(const QAudioEngine* self);
    friend QObject* QAudioEngine_QBaseSender(const QAudioEngine* self);
    friend int QAudioEngine_SenderSignalIndex(const QAudioEngine* self);
    friend int QAudioEngine_QBaseSenderSignalIndex(const QAudioEngine* self);
    friend int QAudioEngine_Receivers(const QAudioEngine* self, const char* signal);
    friend int QAudioEngine_QBaseReceivers(const QAudioEngine* self, const char* signal);
    friend bool QAudioEngine_IsSignalConnected(const QAudioEngine* self, const QMetaMethod* signal);
    friend bool QAudioEngine_QBaseIsSignalConnected(const QAudioEngine* self, const QMetaMethod* signal);
};

#endif
