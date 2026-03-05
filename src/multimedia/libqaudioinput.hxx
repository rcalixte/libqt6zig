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
    using QAudioInput_MetaObject_Callback = QMetaObject* (*)();
    using QAudioInput_Metacast_Callback = void* (*)(QAudioInput*, const char*);
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
    QAudioInput_MetaObject_Callback qaudioinput_metaobject_callback = nullptr;
    QAudioInput_Metacast_Callback qaudioinput_metacast_callback = nullptr;
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
    mutable bool qaudioinput_metaobject_isbase = false;
    mutable bool qaudioinput_metacast_isbase = false;
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

    // Callback setters
    inline void setQAudioInput_MetaObject_Callback(QAudioInput_MetaObject_Callback cb) { qaudioinput_metaobject_callback = cb; }
    inline void setQAudioInput_Metacast_Callback(QAudioInput_Metacast_Callback cb) { qaudioinput_metacast_callback = cb; }
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
    inline void setQAudioInput_MetaObject_IsBase(bool value) const { qaudioinput_metaobject_isbase = value; }
    inline void setQAudioInput_Metacast_IsBase(bool value) const { qaudioinput_metacast_isbase = value; }
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
    virtual const QMetaObject* metaObject() const override {
        if (qaudioinput_metaobject_isbase) {
            qaudioinput_metaobject_isbase = false;
            return QAudioInput::metaObject();
        }
        auto metaobject_cb = qaudioinput_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QAudioInput::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qaudioinput_metacast_isbase) {
            qaudioinput_metacast_isbase = false;
            return QAudioInput::qt_metacast(param1);
        }
        auto metacast_cb = qaudioinput_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QAudioInput::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qaudioinput_metacall_isbase) {
            qaudioinput_metacall_isbase = false;
            return QAudioInput::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qaudioinput_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QAudioInput::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qaudioinput_event_isbase) {
            qaudioinput_event_isbase = false;
            return QAudioInput::event(event);
        }
        auto event_cb = qaudioinput_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QAudioInput::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qaudioinput_eventfilter_isbase) {
            qaudioinput_eventfilter_isbase = false;
            return QAudioInput::eventFilter(watched, event);
        }
        auto eventfilter_cb = qaudioinput_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QAudioInput::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qaudioinput_timerevent_isbase) {
            qaudioinput_timerevent_isbase = false;
            QAudioInput::timerEvent(event);
            return;
        }
        auto timerevent_cb = qaudioinput_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        QAudioInput::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qaudioinput_childevent_isbase) {
            qaudioinput_childevent_isbase = false;
            QAudioInput::childEvent(event);
            return;
        }
        auto childevent_cb = qaudioinput_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        QAudioInput::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qaudioinput_customevent_isbase) {
            qaudioinput_customevent_isbase = false;
            QAudioInput::customEvent(event);
            return;
        }
        auto customevent_cb = qaudioinput_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        QAudioInput::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qaudioinput_connectnotify_isbase) {
            qaudioinput_connectnotify_isbase = false;
            QAudioInput::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qaudioinput_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        QAudioInput::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qaudioinput_disconnectnotify_isbase) {
            qaudioinput_disconnectnotify_isbase = false;
            QAudioInput::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qaudioinput_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        QAudioInput::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qaudioinput_sender_isbase) {
            qaudioinput_sender_isbase = false;
            return QAudioInput::sender();
        }
        auto sender_cb = qaudioinput_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QAudioInput::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qaudioinput_sendersignalindex_isbase) {
            qaudioinput_sendersignalindex_isbase = false;
            return QAudioInput::senderSignalIndex();
        }
        auto sendersignalindex_cb = qaudioinput_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QAudioInput::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qaudioinput_receivers_isbase) {
            qaudioinput_receivers_isbase = false;
            return QAudioInput::receivers(signal);
        }
        auto receivers_cb = qaudioinput_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QAudioInput::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qaudioinput_issignalconnected_isbase) {
            qaudioinput_issignalconnected_isbase = false;
            return QAudioInput::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qaudioinput_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QAudioInput::isSignalConnected(signal);
    }

    // Friend functions
    friend void QAudioInput_TimerEvent(QAudioInput* self, QTimerEvent* event);
    friend void QAudioInput_SuperTimerEvent(QAudioInput* self, QTimerEvent* event);
    friend void QAudioInput_ChildEvent(QAudioInput* self, QChildEvent* event);
    friend void QAudioInput_SuperChildEvent(QAudioInput* self, QChildEvent* event);
    friend void QAudioInput_CustomEvent(QAudioInput* self, QEvent* event);
    friend void QAudioInput_SuperCustomEvent(QAudioInput* self, QEvent* event);
    friend void QAudioInput_ConnectNotify(QAudioInput* self, const QMetaMethod* signal);
    friend void QAudioInput_SuperConnectNotify(QAudioInput* self, const QMetaMethod* signal);
    friend void QAudioInput_DisconnectNotify(QAudioInput* self, const QMetaMethod* signal);
    friend void QAudioInput_SuperDisconnectNotify(QAudioInput* self, const QMetaMethod* signal);
    friend QObject* QAudioInput_Sender(const QAudioInput* self);
    friend QObject* QAudioInput_SuperSender(const QAudioInput* self);
    friend int QAudioInput_SenderSignalIndex(const QAudioInput* self);
    friend int QAudioInput_SuperSenderSignalIndex(const QAudioInput* self);
    friend int QAudioInput_Receivers(const QAudioInput* self, const char* signal);
    friend int QAudioInput_SuperReceivers(const QAudioInput* self, const char* signal);
    friend bool QAudioInput_IsSignalConnected(const QAudioInput* self, const QMetaMethod* signal);
    friend bool QAudioInput_SuperIsSignalConnected(const QAudioInput* self, const QMetaMethod* signal);
};

#endif
