#pragma once
#ifndef SRC_MULTIMEDIAC_LIBVIRTUALQAUDIOBUFFEROUTPUT_H
#define SRC_MULTIMEDIAC_LIBVIRTUALQAUDIOBUFFEROUTPUT_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QAudioBufferOutput so that we can call protected methods
class VirtualQAudioBufferOutput final : public QAudioBufferOutput {

  public:
    // Virtual class boolean flag
    bool isVirtualQAudioBufferOutput = true;

    // Virtual class public types (including callbacks)
    using QAudioBufferOutput_MetaObject_Callback = QMetaObject* (*)();
    using QAudioBufferOutput_Metacast_Callback = void* (*)(QAudioBufferOutput*, const char*);
    using QAudioBufferOutput_Metacall_Callback = int (*)(QAudioBufferOutput*, int, int, void**);
    using QAudioBufferOutput_Event_Callback = bool (*)(QAudioBufferOutput*, QEvent*);
    using QAudioBufferOutput_EventFilter_Callback = bool (*)(QAudioBufferOutput*, QObject*, QEvent*);
    using QAudioBufferOutput_TimerEvent_Callback = void (*)(QAudioBufferOutput*, QTimerEvent*);
    using QAudioBufferOutput_ChildEvent_Callback = void (*)(QAudioBufferOutput*, QChildEvent*);
    using QAudioBufferOutput_CustomEvent_Callback = void (*)(QAudioBufferOutput*, QEvent*);
    using QAudioBufferOutput_ConnectNotify_Callback = void (*)(QAudioBufferOutput*, QMetaMethod*);
    using QAudioBufferOutput_DisconnectNotify_Callback = void (*)(QAudioBufferOutput*, QMetaMethod*);
    using QAudioBufferOutput_Sender_Callback = QObject* (*)();
    using QAudioBufferOutput_SenderSignalIndex_Callback = int (*)();
    using QAudioBufferOutput_Receivers_Callback = int (*)(const QAudioBufferOutput*, const char*);
    using QAudioBufferOutput_IsSignalConnected_Callback = bool (*)(const QAudioBufferOutput*, QMetaMethod*);

  protected:
    // Instance callback storage
    QAudioBufferOutput_MetaObject_Callback qaudiobufferoutput_metaobject_callback = nullptr;
    QAudioBufferOutput_Metacast_Callback qaudiobufferoutput_metacast_callback = nullptr;
    QAudioBufferOutput_Metacall_Callback qaudiobufferoutput_metacall_callback = nullptr;
    QAudioBufferOutput_Event_Callback qaudiobufferoutput_event_callback = nullptr;
    QAudioBufferOutput_EventFilter_Callback qaudiobufferoutput_eventfilter_callback = nullptr;
    QAudioBufferOutput_TimerEvent_Callback qaudiobufferoutput_timerevent_callback = nullptr;
    QAudioBufferOutput_ChildEvent_Callback qaudiobufferoutput_childevent_callback = nullptr;
    QAudioBufferOutput_CustomEvent_Callback qaudiobufferoutput_customevent_callback = nullptr;
    QAudioBufferOutput_ConnectNotify_Callback qaudiobufferoutput_connectnotify_callback = nullptr;
    QAudioBufferOutput_DisconnectNotify_Callback qaudiobufferoutput_disconnectnotify_callback = nullptr;
    QAudioBufferOutput_Sender_Callback qaudiobufferoutput_sender_callback = nullptr;
    QAudioBufferOutput_SenderSignalIndex_Callback qaudiobufferoutput_sendersignalindex_callback = nullptr;
    QAudioBufferOutput_Receivers_Callback qaudiobufferoutput_receivers_callback = nullptr;
    QAudioBufferOutput_IsSignalConnected_Callback qaudiobufferoutput_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qaudiobufferoutput_metaobject_isbase = false;
    mutable bool qaudiobufferoutput_metacast_isbase = false;
    mutable bool qaudiobufferoutput_metacall_isbase = false;
    mutable bool qaudiobufferoutput_event_isbase = false;
    mutable bool qaudiobufferoutput_eventfilter_isbase = false;
    mutable bool qaudiobufferoutput_timerevent_isbase = false;
    mutable bool qaudiobufferoutput_childevent_isbase = false;
    mutable bool qaudiobufferoutput_customevent_isbase = false;
    mutable bool qaudiobufferoutput_connectnotify_isbase = false;
    mutable bool qaudiobufferoutput_disconnectnotify_isbase = false;
    mutable bool qaudiobufferoutput_sender_isbase = false;
    mutable bool qaudiobufferoutput_sendersignalindex_isbase = false;
    mutable bool qaudiobufferoutput_receivers_isbase = false;
    mutable bool qaudiobufferoutput_issignalconnected_isbase = false;

  public:
    VirtualQAudioBufferOutput() : QAudioBufferOutput() {};
    VirtualQAudioBufferOutput(const QAudioFormat& format) : QAudioBufferOutput(format) {};
    VirtualQAudioBufferOutput(QObject* parent) : QAudioBufferOutput(parent) {};
    VirtualQAudioBufferOutput(const QAudioFormat& format, QObject* parent) : QAudioBufferOutput(format, parent) {};

    // Callback setters
    inline void setQAudioBufferOutput_MetaObject_Callback(QAudioBufferOutput_MetaObject_Callback cb) { qaudiobufferoutput_metaobject_callback = cb; }
    inline void setQAudioBufferOutput_Metacast_Callback(QAudioBufferOutput_Metacast_Callback cb) { qaudiobufferoutput_metacast_callback = cb; }
    inline void setQAudioBufferOutput_Metacall_Callback(QAudioBufferOutput_Metacall_Callback cb) { qaudiobufferoutput_metacall_callback = cb; }
    inline void setQAudioBufferOutput_Event_Callback(QAudioBufferOutput_Event_Callback cb) { qaudiobufferoutput_event_callback = cb; }
    inline void setQAudioBufferOutput_EventFilter_Callback(QAudioBufferOutput_EventFilter_Callback cb) { qaudiobufferoutput_eventfilter_callback = cb; }
    inline void setQAudioBufferOutput_TimerEvent_Callback(QAudioBufferOutput_TimerEvent_Callback cb) { qaudiobufferoutput_timerevent_callback = cb; }
    inline void setQAudioBufferOutput_ChildEvent_Callback(QAudioBufferOutput_ChildEvent_Callback cb) { qaudiobufferoutput_childevent_callback = cb; }
    inline void setQAudioBufferOutput_CustomEvent_Callback(QAudioBufferOutput_CustomEvent_Callback cb) { qaudiobufferoutput_customevent_callback = cb; }
    inline void setQAudioBufferOutput_ConnectNotify_Callback(QAudioBufferOutput_ConnectNotify_Callback cb) { qaudiobufferoutput_connectnotify_callback = cb; }
    inline void setQAudioBufferOutput_DisconnectNotify_Callback(QAudioBufferOutput_DisconnectNotify_Callback cb) { qaudiobufferoutput_disconnectnotify_callback = cb; }
    inline void setQAudioBufferOutput_Sender_Callback(QAudioBufferOutput_Sender_Callback cb) { qaudiobufferoutput_sender_callback = cb; }
    inline void setQAudioBufferOutput_SenderSignalIndex_Callback(QAudioBufferOutput_SenderSignalIndex_Callback cb) { qaudiobufferoutput_sendersignalindex_callback = cb; }
    inline void setQAudioBufferOutput_Receivers_Callback(QAudioBufferOutput_Receivers_Callback cb) { qaudiobufferoutput_receivers_callback = cb; }
    inline void setQAudioBufferOutput_IsSignalConnected_Callback(QAudioBufferOutput_IsSignalConnected_Callback cb) { qaudiobufferoutput_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQAudioBufferOutput_MetaObject_IsBase(bool value) const { qaudiobufferoutput_metaobject_isbase = value; }
    inline void setQAudioBufferOutput_Metacast_IsBase(bool value) const { qaudiobufferoutput_metacast_isbase = value; }
    inline void setQAudioBufferOutput_Metacall_IsBase(bool value) const { qaudiobufferoutput_metacall_isbase = value; }
    inline void setQAudioBufferOutput_Event_IsBase(bool value) const { qaudiobufferoutput_event_isbase = value; }
    inline void setQAudioBufferOutput_EventFilter_IsBase(bool value) const { qaudiobufferoutput_eventfilter_isbase = value; }
    inline void setQAudioBufferOutput_TimerEvent_IsBase(bool value) const { qaudiobufferoutput_timerevent_isbase = value; }
    inline void setQAudioBufferOutput_ChildEvent_IsBase(bool value) const { qaudiobufferoutput_childevent_isbase = value; }
    inline void setQAudioBufferOutput_CustomEvent_IsBase(bool value) const { qaudiobufferoutput_customevent_isbase = value; }
    inline void setQAudioBufferOutput_ConnectNotify_IsBase(bool value) const { qaudiobufferoutput_connectnotify_isbase = value; }
    inline void setQAudioBufferOutput_DisconnectNotify_IsBase(bool value) const { qaudiobufferoutput_disconnectnotify_isbase = value; }
    inline void setQAudioBufferOutput_Sender_IsBase(bool value) const { qaudiobufferoutput_sender_isbase = value; }
    inline void setQAudioBufferOutput_SenderSignalIndex_IsBase(bool value) const { qaudiobufferoutput_sendersignalindex_isbase = value; }
    inline void setQAudioBufferOutput_Receivers_IsBase(bool value) const { qaudiobufferoutput_receivers_isbase = value; }
    inline void setQAudioBufferOutput_IsSignalConnected_IsBase(bool value) const { qaudiobufferoutput_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qaudiobufferoutput_metaobject_isbase) {
            qaudiobufferoutput_metaobject_isbase = false;
            return QAudioBufferOutput::metaObject();
        }
        auto metaobject_cb = qaudiobufferoutput_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QAudioBufferOutput::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qaudiobufferoutput_metacast_isbase) {
            qaudiobufferoutput_metacast_isbase = false;
            return QAudioBufferOutput::qt_metacast(param1);
        }
        auto metacast_cb = qaudiobufferoutput_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QAudioBufferOutput::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qaudiobufferoutput_metacall_isbase) {
            qaudiobufferoutput_metacall_isbase = false;
            return QAudioBufferOutput::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qaudiobufferoutput_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QAudioBufferOutput::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qaudiobufferoutput_event_isbase) {
            qaudiobufferoutput_event_isbase = false;
            return QAudioBufferOutput::event(event);
        }
        auto event_cb = qaudiobufferoutput_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QAudioBufferOutput::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qaudiobufferoutput_eventfilter_isbase) {
            qaudiobufferoutput_eventfilter_isbase = false;
            return QAudioBufferOutput::eventFilter(watched, event);
        }
        auto eventfilter_cb = qaudiobufferoutput_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QAudioBufferOutput::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qaudiobufferoutput_timerevent_isbase) {
            qaudiobufferoutput_timerevent_isbase = false;
            QAudioBufferOutput::timerEvent(event);
            return;
        }
        auto timerevent_cb = qaudiobufferoutput_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        QAudioBufferOutput::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qaudiobufferoutput_childevent_isbase) {
            qaudiobufferoutput_childevent_isbase = false;
            QAudioBufferOutput::childEvent(event);
            return;
        }
        auto childevent_cb = qaudiobufferoutput_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        QAudioBufferOutput::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qaudiobufferoutput_customevent_isbase) {
            qaudiobufferoutput_customevent_isbase = false;
            QAudioBufferOutput::customEvent(event);
            return;
        }
        auto customevent_cb = qaudiobufferoutput_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        QAudioBufferOutput::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qaudiobufferoutput_connectnotify_isbase) {
            qaudiobufferoutput_connectnotify_isbase = false;
            QAudioBufferOutput::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qaudiobufferoutput_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        QAudioBufferOutput::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qaudiobufferoutput_disconnectnotify_isbase) {
            qaudiobufferoutput_disconnectnotify_isbase = false;
            QAudioBufferOutput::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qaudiobufferoutput_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        QAudioBufferOutput::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qaudiobufferoutput_sender_isbase) {
            qaudiobufferoutput_sender_isbase = false;
            return QAudioBufferOutput::sender();
        }
        auto sender_cb = qaudiobufferoutput_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QAudioBufferOutput::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qaudiobufferoutput_sendersignalindex_isbase) {
            qaudiobufferoutput_sendersignalindex_isbase = false;
            return QAudioBufferOutput::senderSignalIndex();
        }
        auto sendersignalindex_cb = qaudiobufferoutput_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QAudioBufferOutput::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qaudiobufferoutput_receivers_isbase) {
            qaudiobufferoutput_receivers_isbase = false;
            return QAudioBufferOutput::receivers(signal);
        }
        auto receivers_cb = qaudiobufferoutput_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QAudioBufferOutput::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qaudiobufferoutput_issignalconnected_isbase) {
            qaudiobufferoutput_issignalconnected_isbase = false;
            return QAudioBufferOutput::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qaudiobufferoutput_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QAudioBufferOutput::isSignalConnected(signal);
    }

    // Friend functions
    friend void QAudioBufferOutput_TimerEvent(QAudioBufferOutput* self, QTimerEvent* event);
    friend void QAudioBufferOutput_SuperTimerEvent(QAudioBufferOutput* self, QTimerEvent* event);
    friend void QAudioBufferOutput_ChildEvent(QAudioBufferOutput* self, QChildEvent* event);
    friend void QAudioBufferOutput_SuperChildEvent(QAudioBufferOutput* self, QChildEvent* event);
    friend void QAudioBufferOutput_CustomEvent(QAudioBufferOutput* self, QEvent* event);
    friend void QAudioBufferOutput_SuperCustomEvent(QAudioBufferOutput* self, QEvent* event);
    friend void QAudioBufferOutput_ConnectNotify(QAudioBufferOutput* self, const QMetaMethod* signal);
    friend void QAudioBufferOutput_SuperConnectNotify(QAudioBufferOutput* self, const QMetaMethod* signal);
    friend void QAudioBufferOutput_DisconnectNotify(QAudioBufferOutput* self, const QMetaMethod* signal);
    friend void QAudioBufferOutput_SuperDisconnectNotify(QAudioBufferOutput* self, const QMetaMethod* signal);
    friend QObject* QAudioBufferOutput_Sender(const QAudioBufferOutput* self);
    friend QObject* QAudioBufferOutput_SuperSender(const QAudioBufferOutput* self);
    friend int QAudioBufferOutput_SenderSignalIndex(const QAudioBufferOutput* self);
    friend int QAudioBufferOutput_SuperSenderSignalIndex(const QAudioBufferOutput* self);
    friend int QAudioBufferOutput_Receivers(const QAudioBufferOutput* self, const char* signal);
    friend int QAudioBufferOutput_SuperReceivers(const QAudioBufferOutput* self, const char* signal);
    friend bool QAudioBufferOutput_IsSignalConnected(const QAudioBufferOutput* self, const QMetaMethod* signal);
    friend bool QAudioBufferOutput_SuperIsSignalConnected(const QAudioBufferOutput* self, const QMetaMethod* signal);
};

#endif
