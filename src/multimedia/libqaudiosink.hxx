#pragma once
#ifndef SRC_MULTIMEDIAC_LIBVIRTUALQAUDIOSINK_H
#define SRC_MULTIMEDIAC_LIBVIRTUALQAUDIOSINK_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QAudioSink so that we can call protected methods
class VirtualQAudioSink final : public QAudioSink {

  public:
    // Virtual class boolean flag
    bool isVirtualQAudioSink = true;

    // Virtual class public types (including callbacks)
    using QAudioSink_Metacall_Callback = int (*)(QAudioSink*, int, int, void**);
    using QAudioSink_Event_Callback = bool (*)(QAudioSink*, QEvent*);
    using QAudioSink_EventFilter_Callback = bool (*)(QAudioSink*, QObject*, QEvent*);
    using QAudioSink_TimerEvent_Callback = void (*)(QAudioSink*, QTimerEvent*);
    using QAudioSink_ChildEvent_Callback = void (*)(QAudioSink*, QChildEvent*);
    using QAudioSink_CustomEvent_Callback = void (*)(QAudioSink*, QEvent*);
    using QAudioSink_ConnectNotify_Callback = void (*)(QAudioSink*, QMetaMethod*);
    using QAudioSink_DisconnectNotify_Callback = void (*)(QAudioSink*, QMetaMethod*);
    using QAudioSink_Sender_Callback = QObject* (*)();
    using QAudioSink_SenderSignalIndex_Callback = int (*)();
    using QAudioSink_Receivers_Callback = int (*)(const QAudioSink*, const char*);
    using QAudioSink_IsSignalConnected_Callback = bool (*)(const QAudioSink*, QMetaMethod*);

  protected:
    // Instance callback storage
    QAudioSink_Metacall_Callback qaudiosink_metacall_callback = nullptr;
    QAudioSink_Event_Callback qaudiosink_event_callback = nullptr;
    QAudioSink_EventFilter_Callback qaudiosink_eventfilter_callback = nullptr;
    QAudioSink_TimerEvent_Callback qaudiosink_timerevent_callback = nullptr;
    QAudioSink_ChildEvent_Callback qaudiosink_childevent_callback = nullptr;
    QAudioSink_CustomEvent_Callback qaudiosink_customevent_callback = nullptr;
    QAudioSink_ConnectNotify_Callback qaudiosink_connectnotify_callback = nullptr;
    QAudioSink_DisconnectNotify_Callback qaudiosink_disconnectnotify_callback = nullptr;
    QAudioSink_Sender_Callback qaudiosink_sender_callback = nullptr;
    QAudioSink_SenderSignalIndex_Callback qaudiosink_sendersignalindex_callback = nullptr;
    QAudioSink_Receivers_Callback qaudiosink_receivers_callback = nullptr;
    QAudioSink_IsSignalConnected_Callback qaudiosink_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qaudiosink_metacall_isbase = false;
    mutable bool qaudiosink_event_isbase = false;
    mutable bool qaudiosink_eventfilter_isbase = false;
    mutable bool qaudiosink_timerevent_isbase = false;
    mutable bool qaudiosink_childevent_isbase = false;
    mutable bool qaudiosink_customevent_isbase = false;
    mutable bool qaudiosink_connectnotify_isbase = false;
    mutable bool qaudiosink_disconnectnotify_isbase = false;
    mutable bool qaudiosink_sender_isbase = false;
    mutable bool qaudiosink_sendersignalindex_isbase = false;
    mutable bool qaudiosink_receivers_isbase = false;
    mutable bool qaudiosink_issignalconnected_isbase = false;

  public:
    VirtualQAudioSink() : QAudioSink(){};
    VirtualQAudioSink(const QAudioDevice& audioDeviceInfo) : QAudioSink(audioDeviceInfo){};
    VirtualQAudioSink(const QAudioFormat& format) : QAudioSink(format){};
    VirtualQAudioSink(const QAudioFormat& format, QObject* parent) : QAudioSink(format, parent){};
    VirtualQAudioSink(const QAudioDevice& audioDeviceInfo, const QAudioFormat& format) : QAudioSink(audioDeviceInfo, format){};
    VirtualQAudioSink(const QAudioDevice& audioDeviceInfo, const QAudioFormat& format, QObject* parent) : QAudioSink(audioDeviceInfo, format, parent){};

    ~VirtualQAudioSink() {
        qaudiosink_metacall_callback = nullptr;
        qaudiosink_event_callback = nullptr;
        qaudiosink_eventfilter_callback = nullptr;
        qaudiosink_timerevent_callback = nullptr;
        qaudiosink_childevent_callback = nullptr;
        qaudiosink_customevent_callback = nullptr;
        qaudiosink_connectnotify_callback = nullptr;
        qaudiosink_disconnectnotify_callback = nullptr;
        qaudiosink_sender_callback = nullptr;
        qaudiosink_sendersignalindex_callback = nullptr;
        qaudiosink_receivers_callback = nullptr;
        qaudiosink_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setQAudioSink_Metacall_Callback(QAudioSink_Metacall_Callback cb) { qaudiosink_metacall_callback = cb; }
    inline void setQAudioSink_Event_Callback(QAudioSink_Event_Callback cb) { qaudiosink_event_callback = cb; }
    inline void setQAudioSink_EventFilter_Callback(QAudioSink_EventFilter_Callback cb) { qaudiosink_eventfilter_callback = cb; }
    inline void setQAudioSink_TimerEvent_Callback(QAudioSink_TimerEvent_Callback cb) { qaudiosink_timerevent_callback = cb; }
    inline void setQAudioSink_ChildEvent_Callback(QAudioSink_ChildEvent_Callback cb) { qaudiosink_childevent_callback = cb; }
    inline void setQAudioSink_CustomEvent_Callback(QAudioSink_CustomEvent_Callback cb) { qaudiosink_customevent_callback = cb; }
    inline void setQAudioSink_ConnectNotify_Callback(QAudioSink_ConnectNotify_Callback cb) { qaudiosink_connectnotify_callback = cb; }
    inline void setQAudioSink_DisconnectNotify_Callback(QAudioSink_DisconnectNotify_Callback cb) { qaudiosink_disconnectnotify_callback = cb; }
    inline void setQAudioSink_Sender_Callback(QAudioSink_Sender_Callback cb) { qaudiosink_sender_callback = cb; }
    inline void setQAudioSink_SenderSignalIndex_Callback(QAudioSink_SenderSignalIndex_Callback cb) { qaudiosink_sendersignalindex_callback = cb; }
    inline void setQAudioSink_Receivers_Callback(QAudioSink_Receivers_Callback cb) { qaudiosink_receivers_callback = cb; }
    inline void setQAudioSink_IsSignalConnected_Callback(QAudioSink_IsSignalConnected_Callback cb) { qaudiosink_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQAudioSink_Metacall_IsBase(bool value) const { qaudiosink_metacall_isbase = value; }
    inline void setQAudioSink_Event_IsBase(bool value) const { qaudiosink_event_isbase = value; }
    inline void setQAudioSink_EventFilter_IsBase(bool value) const { qaudiosink_eventfilter_isbase = value; }
    inline void setQAudioSink_TimerEvent_IsBase(bool value) const { qaudiosink_timerevent_isbase = value; }
    inline void setQAudioSink_ChildEvent_IsBase(bool value) const { qaudiosink_childevent_isbase = value; }
    inline void setQAudioSink_CustomEvent_IsBase(bool value) const { qaudiosink_customevent_isbase = value; }
    inline void setQAudioSink_ConnectNotify_IsBase(bool value) const { qaudiosink_connectnotify_isbase = value; }
    inline void setQAudioSink_DisconnectNotify_IsBase(bool value) const { qaudiosink_disconnectnotify_isbase = value; }
    inline void setQAudioSink_Sender_IsBase(bool value) const { qaudiosink_sender_isbase = value; }
    inline void setQAudioSink_SenderSignalIndex_IsBase(bool value) const { qaudiosink_sendersignalindex_isbase = value; }
    inline void setQAudioSink_Receivers_IsBase(bool value) const { qaudiosink_receivers_isbase = value; }
    inline void setQAudioSink_IsSignalConnected_IsBase(bool value) const { qaudiosink_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qaudiosink_metacall_isbase) {
            qaudiosink_metacall_isbase = false;
            return QAudioSink::qt_metacall(param1, param2, param3);
        } else if (qaudiosink_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qaudiosink_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QAudioSink::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qaudiosink_event_isbase) {
            qaudiosink_event_isbase = false;
            return QAudioSink::event(event);
        } else if (qaudiosink_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qaudiosink_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QAudioSink::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qaudiosink_eventfilter_isbase) {
            qaudiosink_eventfilter_isbase = false;
            return QAudioSink::eventFilter(watched, event);
        } else if (qaudiosink_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qaudiosink_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QAudioSink::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qaudiosink_timerevent_isbase) {
            qaudiosink_timerevent_isbase = false;
            QAudioSink::timerEvent(event);
        } else if (qaudiosink_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qaudiosink_timerevent_callback(this, cbval1);
        } else {
            QAudioSink::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qaudiosink_childevent_isbase) {
            qaudiosink_childevent_isbase = false;
            QAudioSink::childEvent(event);
        } else if (qaudiosink_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qaudiosink_childevent_callback(this, cbval1);
        } else {
            QAudioSink::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qaudiosink_customevent_isbase) {
            qaudiosink_customevent_isbase = false;
            QAudioSink::customEvent(event);
        } else if (qaudiosink_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qaudiosink_customevent_callback(this, cbval1);
        } else {
            QAudioSink::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qaudiosink_connectnotify_isbase) {
            qaudiosink_connectnotify_isbase = false;
            QAudioSink::connectNotify(signal);
        } else if (qaudiosink_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qaudiosink_connectnotify_callback(this, cbval1);
        } else {
            QAudioSink::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qaudiosink_disconnectnotify_isbase) {
            qaudiosink_disconnectnotify_isbase = false;
            QAudioSink::disconnectNotify(signal);
        } else if (qaudiosink_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qaudiosink_disconnectnotify_callback(this, cbval1);
        } else {
            QAudioSink::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qaudiosink_sender_isbase) {
            qaudiosink_sender_isbase = false;
            return QAudioSink::sender();
        } else if (qaudiosink_sender_callback != nullptr) {
            QObject* callback_ret = qaudiosink_sender_callback();
            return callback_ret;
        } else {
            return QAudioSink::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qaudiosink_sendersignalindex_isbase) {
            qaudiosink_sendersignalindex_isbase = false;
            return QAudioSink::senderSignalIndex();
        } else if (qaudiosink_sendersignalindex_callback != nullptr) {
            int callback_ret = qaudiosink_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QAudioSink::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qaudiosink_receivers_isbase) {
            qaudiosink_receivers_isbase = false;
            return QAudioSink::receivers(signal);
        } else if (qaudiosink_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qaudiosink_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QAudioSink::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qaudiosink_issignalconnected_isbase) {
            qaudiosink_issignalconnected_isbase = false;
            return QAudioSink::isSignalConnected(signal);
        } else if (qaudiosink_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qaudiosink_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QAudioSink::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void QAudioSink_TimerEvent(QAudioSink* self, QTimerEvent* event);
    friend void QAudioSink_QBaseTimerEvent(QAudioSink* self, QTimerEvent* event);
    friend void QAudioSink_ChildEvent(QAudioSink* self, QChildEvent* event);
    friend void QAudioSink_QBaseChildEvent(QAudioSink* self, QChildEvent* event);
    friend void QAudioSink_CustomEvent(QAudioSink* self, QEvent* event);
    friend void QAudioSink_QBaseCustomEvent(QAudioSink* self, QEvent* event);
    friend void QAudioSink_ConnectNotify(QAudioSink* self, const QMetaMethod* signal);
    friend void QAudioSink_QBaseConnectNotify(QAudioSink* self, const QMetaMethod* signal);
    friend void QAudioSink_DisconnectNotify(QAudioSink* self, const QMetaMethod* signal);
    friend void QAudioSink_QBaseDisconnectNotify(QAudioSink* self, const QMetaMethod* signal);
    friend QObject* QAudioSink_Sender(const QAudioSink* self);
    friend QObject* QAudioSink_QBaseSender(const QAudioSink* self);
    friend int QAudioSink_SenderSignalIndex(const QAudioSink* self);
    friend int QAudioSink_QBaseSenderSignalIndex(const QAudioSink* self);
    friend int QAudioSink_Receivers(const QAudioSink* self, const char* signal);
    friend int QAudioSink_QBaseReceivers(const QAudioSink* self, const char* signal);
    friend bool QAudioSink_IsSignalConnected(const QAudioSink* self, const QMetaMethod* signal);
    friend bool QAudioSink_QBaseIsSignalConnected(const QAudioSink* self, const QMetaMethod* signal);
};

#endif
