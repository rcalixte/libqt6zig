#pragma once
#ifndef SRC_MULTIMEDIAC_LIBVIRTUALQVIDEOFRAMEINPUT_H
#define SRC_MULTIMEDIAC_LIBVIRTUALQVIDEOFRAMEINPUT_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QVideoFrameInput so that we can call protected methods
class VirtualQVideoFrameInput final : public QVideoFrameInput {

  public:
    // Virtual class boolean flag
    bool isVirtualQVideoFrameInput = true;

    // Virtual class public types (including callbacks)
    using QVideoFrameInput_Metacall_Callback = int (*)(QVideoFrameInput*, int, int, void**);
    using QVideoFrameInput_Event_Callback = bool (*)(QVideoFrameInput*, QEvent*);
    using QVideoFrameInput_EventFilter_Callback = bool (*)(QVideoFrameInput*, QObject*, QEvent*);
    using QVideoFrameInput_TimerEvent_Callback = void (*)(QVideoFrameInput*, QTimerEvent*);
    using QVideoFrameInput_ChildEvent_Callback = void (*)(QVideoFrameInput*, QChildEvent*);
    using QVideoFrameInput_CustomEvent_Callback = void (*)(QVideoFrameInput*, QEvent*);
    using QVideoFrameInput_ConnectNotify_Callback = void (*)(QVideoFrameInput*, QMetaMethod*);
    using QVideoFrameInput_DisconnectNotify_Callback = void (*)(QVideoFrameInput*, QMetaMethod*);
    using QVideoFrameInput_Sender_Callback = QObject* (*)();
    using QVideoFrameInput_SenderSignalIndex_Callback = int (*)();
    using QVideoFrameInput_Receivers_Callback = int (*)(const QVideoFrameInput*, const char*);
    using QVideoFrameInput_IsSignalConnected_Callback = bool (*)(const QVideoFrameInput*, QMetaMethod*);

  protected:
    // Instance callback storage
    QVideoFrameInput_Metacall_Callback qvideoframeinput_metacall_callback = nullptr;
    QVideoFrameInput_Event_Callback qvideoframeinput_event_callback = nullptr;
    QVideoFrameInput_EventFilter_Callback qvideoframeinput_eventfilter_callback = nullptr;
    QVideoFrameInput_TimerEvent_Callback qvideoframeinput_timerevent_callback = nullptr;
    QVideoFrameInput_ChildEvent_Callback qvideoframeinput_childevent_callback = nullptr;
    QVideoFrameInput_CustomEvent_Callback qvideoframeinput_customevent_callback = nullptr;
    QVideoFrameInput_ConnectNotify_Callback qvideoframeinput_connectnotify_callback = nullptr;
    QVideoFrameInput_DisconnectNotify_Callback qvideoframeinput_disconnectnotify_callback = nullptr;
    QVideoFrameInput_Sender_Callback qvideoframeinput_sender_callback = nullptr;
    QVideoFrameInput_SenderSignalIndex_Callback qvideoframeinput_sendersignalindex_callback = nullptr;
    QVideoFrameInput_Receivers_Callback qvideoframeinput_receivers_callback = nullptr;
    QVideoFrameInput_IsSignalConnected_Callback qvideoframeinput_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qvideoframeinput_metacall_isbase = false;
    mutable bool qvideoframeinput_event_isbase = false;
    mutable bool qvideoframeinput_eventfilter_isbase = false;
    mutable bool qvideoframeinput_timerevent_isbase = false;
    mutable bool qvideoframeinput_childevent_isbase = false;
    mutable bool qvideoframeinput_customevent_isbase = false;
    mutable bool qvideoframeinput_connectnotify_isbase = false;
    mutable bool qvideoframeinput_disconnectnotify_isbase = false;
    mutable bool qvideoframeinput_sender_isbase = false;
    mutable bool qvideoframeinput_sendersignalindex_isbase = false;
    mutable bool qvideoframeinput_receivers_isbase = false;
    mutable bool qvideoframeinput_issignalconnected_isbase = false;

  public:
    VirtualQVideoFrameInput() : QVideoFrameInput() {};
    VirtualQVideoFrameInput(const QVideoFrameFormat& format) : QVideoFrameInput(format) {};
    VirtualQVideoFrameInput(QObject* parent) : QVideoFrameInput(parent) {};
    VirtualQVideoFrameInput(const QVideoFrameFormat& format, QObject* parent) : QVideoFrameInput(format, parent) {};

    ~VirtualQVideoFrameInput() {
        qvideoframeinput_metacall_callback = nullptr;
        qvideoframeinput_event_callback = nullptr;
        qvideoframeinput_eventfilter_callback = nullptr;
        qvideoframeinput_timerevent_callback = nullptr;
        qvideoframeinput_childevent_callback = nullptr;
        qvideoframeinput_customevent_callback = nullptr;
        qvideoframeinput_connectnotify_callback = nullptr;
        qvideoframeinput_disconnectnotify_callback = nullptr;
        qvideoframeinput_sender_callback = nullptr;
        qvideoframeinput_sendersignalindex_callback = nullptr;
        qvideoframeinput_receivers_callback = nullptr;
        qvideoframeinput_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setQVideoFrameInput_Metacall_Callback(QVideoFrameInput_Metacall_Callback cb) { qvideoframeinput_metacall_callback = cb; }
    inline void setQVideoFrameInput_Event_Callback(QVideoFrameInput_Event_Callback cb) { qvideoframeinput_event_callback = cb; }
    inline void setQVideoFrameInput_EventFilter_Callback(QVideoFrameInput_EventFilter_Callback cb) { qvideoframeinput_eventfilter_callback = cb; }
    inline void setQVideoFrameInput_TimerEvent_Callback(QVideoFrameInput_TimerEvent_Callback cb) { qvideoframeinput_timerevent_callback = cb; }
    inline void setQVideoFrameInput_ChildEvent_Callback(QVideoFrameInput_ChildEvent_Callback cb) { qvideoframeinput_childevent_callback = cb; }
    inline void setQVideoFrameInput_CustomEvent_Callback(QVideoFrameInput_CustomEvent_Callback cb) { qvideoframeinput_customevent_callback = cb; }
    inline void setQVideoFrameInput_ConnectNotify_Callback(QVideoFrameInput_ConnectNotify_Callback cb) { qvideoframeinput_connectnotify_callback = cb; }
    inline void setQVideoFrameInput_DisconnectNotify_Callback(QVideoFrameInput_DisconnectNotify_Callback cb) { qvideoframeinput_disconnectnotify_callback = cb; }
    inline void setQVideoFrameInput_Sender_Callback(QVideoFrameInput_Sender_Callback cb) { qvideoframeinput_sender_callback = cb; }
    inline void setQVideoFrameInput_SenderSignalIndex_Callback(QVideoFrameInput_SenderSignalIndex_Callback cb) { qvideoframeinput_sendersignalindex_callback = cb; }
    inline void setQVideoFrameInput_Receivers_Callback(QVideoFrameInput_Receivers_Callback cb) { qvideoframeinput_receivers_callback = cb; }
    inline void setQVideoFrameInput_IsSignalConnected_Callback(QVideoFrameInput_IsSignalConnected_Callback cb) { qvideoframeinput_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQVideoFrameInput_Metacall_IsBase(bool value) const { qvideoframeinput_metacall_isbase = value; }
    inline void setQVideoFrameInput_Event_IsBase(bool value) const { qvideoframeinput_event_isbase = value; }
    inline void setQVideoFrameInput_EventFilter_IsBase(bool value) const { qvideoframeinput_eventfilter_isbase = value; }
    inline void setQVideoFrameInput_TimerEvent_IsBase(bool value) const { qvideoframeinput_timerevent_isbase = value; }
    inline void setQVideoFrameInput_ChildEvent_IsBase(bool value) const { qvideoframeinput_childevent_isbase = value; }
    inline void setQVideoFrameInput_CustomEvent_IsBase(bool value) const { qvideoframeinput_customevent_isbase = value; }
    inline void setQVideoFrameInput_ConnectNotify_IsBase(bool value) const { qvideoframeinput_connectnotify_isbase = value; }
    inline void setQVideoFrameInput_DisconnectNotify_IsBase(bool value) const { qvideoframeinput_disconnectnotify_isbase = value; }
    inline void setQVideoFrameInput_Sender_IsBase(bool value) const { qvideoframeinput_sender_isbase = value; }
    inline void setQVideoFrameInput_SenderSignalIndex_IsBase(bool value) const { qvideoframeinput_sendersignalindex_isbase = value; }
    inline void setQVideoFrameInput_Receivers_IsBase(bool value) const { qvideoframeinput_receivers_isbase = value; }
    inline void setQVideoFrameInput_IsSignalConnected_IsBase(bool value) const { qvideoframeinput_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qvideoframeinput_metacall_isbase) {
            qvideoframeinput_metacall_isbase = false;
            return QVideoFrameInput::qt_metacall(param1, param2, param3);
        } else if (qvideoframeinput_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qvideoframeinput_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QVideoFrameInput::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qvideoframeinput_event_isbase) {
            qvideoframeinput_event_isbase = false;
            return QVideoFrameInput::event(event);
        } else if (qvideoframeinput_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qvideoframeinput_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QVideoFrameInput::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qvideoframeinput_eventfilter_isbase) {
            qvideoframeinput_eventfilter_isbase = false;
            return QVideoFrameInput::eventFilter(watched, event);
        } else if (qvideoframeinput_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qvideoframeinput_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QVideoFrameInput::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qvideoframeinput_timerevent_isbase) {
            qvideoframeinput_timerevent_isbase = false;
            QVideoFrameInput::timerEvent(event);
        } else if (qvideoframeinput_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qvideoframeinput_timerevent_callback(this, cbval1);
        } else {
            QVideoFrameInput::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qvideoframeinput_childevent_isbase) {
            qvideoframeinput_childevent_isbase = false;
            QVideoFrameInput::childEvent(event);
        } else if (qvideoframeinput_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qvideoframeinput_childevent_callback(this, cbval1);
        } else {
            QVideoFrameInput::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qvideoframeinput_customevent_isbase) {
            qvideoframeinput_customevent_isbase = false;
            QVideoFrameInput::customEvent(event);
        } else if (qvideoframeinput_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qvideoframeinput_customevent_callback(this, cbval1);
        } else {
            QVideoFrameInput::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qvideoframeinput_connectnotify_isbase) {
            qvideoframeinput_connectnotify_isbase = false;
            QVideoFrameInput::connectNotify(signal);
        } else if (qvideoframeinput_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qvideoframeinput_connectnotify_callback(this, cbval1);
        } else {
            QVideoFrameInput::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qvideoframeinput_disconnectnotify_isbase) {
            qvideoframeinput_disconnectnotify_isbase = false;
            QVideoFrameInput::disconnectNotify(signal);
        } else if (qvideoframeinput_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qvideoframeinput_disconnectnotify_callback(this, cbval1);
        } else {
            QVideoFrameInput::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qvideoframeinput_sender_isbase) {
            qvideoframeinput_sender_isbase = false;
            return QVideoFrameInput::sender();
        } else if (qvideoframeinput_sender_callback != nullptr) {
            QObject* callback_ret = qvideoframeinput_sender_callback();
            return callback_ret;
        } else {
            return QVideoFrameInput::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qvideoframeinput_sendersignalindex_isbase) {
            qvideoframeinput_sendersignalindex_isbase = false;
            return QVideoFrameInput::senderSignalIndex();
        } else if (qvideoframeinput_sendersignalindex_callback != nullptr) {
            int callback_ret = qvideoframeinput_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QVideoFrameInput::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qvideoframeinput_receivers_isbase) {
            qvideoframeinput_receivers_isbase = false;
            return QVideoFrameInput::receivers(signal);
        } else if (qvideoframeinput_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qvideoframeinput_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QVideoFrameInput::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qvideoframeinput_issignalconnected_isbase) {
            qvideoframeinput_issignalconnected_isbase = false;
            return QVideoFrameInput::isSignalConnected(signal);
        } else if (qvideoframeinput_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qvideoframeinput_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QVideoFrameInput::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void QVideoFrameInput_TimerEvent(QVideoFrameInput* self, QTimerEvent* event);
    friend void QVideoFrameInput_QBaseTimerEvent(QVideoFrameInput* self, QTimerEvent* event);
    friend void QVideoFrameInput_ChildEvent(QVideoFrameInput* self, QChildEvent* event);
    friend void QVideoFrameInput_QBaseChildEvent(QVideoFrameInput* self, QChildEvent* event);
    friend void QVideoFrameInput_CustomEvent(QVideoFrameInput* self, QEvent* event);
    friend void QVideoFrameInput_QBaseCustomEvent(QVideoFrameInput* self, QEvent* event);
    friend void QVideoFrameInput_ConnectNotify(QVideoFrameInput* self, const QMetaMethod* signal);
    friend void QVideoFrameInput_QBaseConnectNotify(QVideoFrameInput* self, const QMetaMethod* signal);
    friend void QVideoFrameInput_DisconnectNotify(QVideoFrameInput* self, const QMetaMethod* signal);
    friend void QVideoFrameInput_QBaseDisconnectNotify(QVideoFrameInput* self, const QMetaMethod* signal);
    friend QObject* QVideoFrameInput_Sender(const QVideoFrameInput* self);
    friend QObject* QVideoFrameInput_QBaseSender(const QVideoFrameInput* self);
    friend int QVideoFrameInput_SenderSignalIndex(const QVideoFrameInput* self);
    friend int QVideoFrameInput_QBaseSenderSignalIndex(const QVideoFrameInput* self);
    friend int QVideoFrameInput_Receivers(const QVideoFrameInput* self, const char* signal);
    friend int QVideoFrameInput_QBaseReceivers(const QVideoFrameInput* self, const char* signal);
    friend bool QVideoFrameInput_IsSignalConnected(const QVideoFrameInput* self, const QMetaMethod* signal);
    friend bool QVideoFrameInput_QBaseIsSignalConnected(const QVideoFrameInput* self, const QMetaMethod* signal);
};

#endif
