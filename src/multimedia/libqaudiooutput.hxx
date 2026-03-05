#pragma once
#ifndef SRC_MULTIMEDIAC_LIBVIRTUALQAUDIOOUTPUT_H
#define SRC_MULTIMEDIAC_LIBVIRTUALQAUDIOOUTPUT_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QAudioOutput so that we can call protected methods
class VirtualQAudioOutput final : public QAudioOutput {

  public:
    // Virtual class boolean flag
    bool isVirtualQAudioOutput = true;

    // Virtual class public types (including callbacks)
    using QAudioOutput_MetaObject_Callback = QMetaObject* (*)();
    using QAudioOutput_Metacast_Callback = void* (*)(QAudioOutput*, const char*);
    using QAudioOutput_Metacall_Callback = int (*)(QAudioOutput*, int, int, void**);
    using QAudioOutput_Event_Callback = bool (*)(QAudioOutput*, QEvent*);
    using QAudioOutput_EventFilter_Callback = bool (*)(QAudioOutput*, QObject*, QEvent*);
    using QAudioOutput_TimerEvent_Callback = void (*)(QAudioOutput*, QTimerEvent*);
    using QAudioOutput_ChildEvent_Callback = void (*)(QAudioOutput*, QChildEvent*);
    using QAudioOutput_CustomEvent_Callback = void (*)(QAudioOutput*, QEvent*);
    using QAudioOutput_ConnectNotify_Callback = void (*)(QAudioOutput*, QMetaMethod*);
    using QAudioOutput_DisconnectNotify_Callback = void (*)(QAudioOutput*, QMetaMethod*);
    using QAudioOutput_Sender_Callback = QObject* (*)();
    using QAudioOutput_SenderSignalIndex_Callback = int (*)();
    using QAudioOutput_Receivers_Callback = int (*)(const QAudioOutput*, const char*);
    using QAudioOutput_IsSignalConnected_Callback = bool (*)(const QAudioOutput*, QMetaMethod*);

  protected:
    // Instance callback storage
    QAudioOutput_MetaObject_Callback qaudiooutput_metaobject_callback = nullptr;
    QAudioOutput_Metacast_Callback qaudiooutput_metacast_callback = nullptr;
    QAudioOutput_Metacall_Callback qaudiooutput_metacall_callback = nullptr;
    QAudioOutput_Event_Callback qaudiooutput_event_callback = nullptr;
    QAudioOutput_EventFilter_Callback qaudiooutput_eventfilter_callback = nullptr;
    QAudioOutput_TimerEvent_Callback qaudiooutput_timerevent_callback = nullptr;
    QAudioOutput_ChildEvent_Callback qaudiooutput_childevent_callback = nullptr;
    QAudioOutput_CustomEvent_Callback qaudiooutput_customevent_callback = nullptr;
    QAudioOutput_ConnectNotify_Callback qaudiooutput_connectnotify_callback = nullptr;
    QAudioOutput_DisconnectNotify_Callback qaudiooutput_disconnectnotify_callback = nullptr;
    QAudioOutput_Sender_Callback qaudiooutput_sender_callback = nullptr;
    QAudioOutput_SenderSignalIndex_Callback qaudiooutput_sendersignalindex_callback = nullptr;
    QAudioOutput_Receivers_Callback qaudiooutput_receivers_callback = nullptr;
    QAudioOutput_IsSignalConnected_Callback qaudiooutput_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qaudiooutput_metaobject_isbase = false;
    mutable bool qaudiooutput_metacast_isbase = false;
    mutable bool qaudiooutput_metacall_isbase = false;
    mutable bool qaudiooutput_event_isbase = false;
    mutable bool qaudiooutput_eventfilter_isbase = false;
    mutable bool qaudiooutput_timerevent_isbase = false;
    mutable bool qaudiooutput_childevent_isbase = false;
    mutable bool qaudiooutput_customevent_isbase = false;
    mutable bool qaudiooutput_connectnotify_isbase = false;
    mutable bool qaudiooutput_disconnectnotify_isbase = false;
    mutable bool qaudiooutput_sender_isbase = false;
    mutable bool qaudiooutput_sendersignalindex_isbase = false;
    mutable bool qaudiooutput_receivers_isbase = false;
    mutable bool qaudiooutput_issignalconnected_isbase = false;

  public:
    VirtualQAudioOutput() : QAudioOutput() {};
    VirtualQAudioOutput(const QAudioDevice& device) : QAudioOutput(device) {};
    VirtualQAudioOutput(QObject* parent) : QAudioOutput(parent) {};
    VirtualQAudioOutput(const QAudioDevice& device, QObject* parent) : QAudioOutput(device, parent) {};

    // Callback setters
    inline void setQAudioOutput_MetaObject_Callback(QAudioOutput_MetaObject_Callback cb) { qaudiooutput_metaobject_callback = cb; }
    inline void setQAudioOutput_Metacast_Callback(QAudioOutput_Metacast_Callback cb) { qaudiooutput_metacast_callback = cb; }
    inline void setQAudioOutput_Metacall_Callback(QAudioOutput_Metacall_Callback cb) { qaudiooutput_metacall_callback = cb; }
    inline void setQAudioOutput_Event_Callback(QAudioOutput_Event_Callback cb) { qaudiooutput_event_callback = cb; }
    inline void setQAudioOutput_EventFilter_Callback(QAudioOutput_EventFilter_Callback cb) { qaudiooutput_eventfilter_callback = cb; }
    inline void setQAudioOutput_TimerEvent_Callback(QAudioOutput_TimerEvent_Callback cb) { qaudiooutput_timerevent_callback = cb; }
    inline void setQAudioOutput_ChildEvent_Callback(QAudioOutput_ChildEvent_Callback cb) { qaudiooutput_childevent_callback = cb; }
    inline void setQAudioOutput_CustomEvent_Callback(QAudioOutput_CustomEvent_Callback cb) { qaudiooutput_customevent_callback = cb; }
    inline void setQAudioOutput_ConnectNotify_Callback(QAudioOutput_ConnectNotify_Callback cb) { qaudiooutput_connectnotify_callback = cb; }
    inline void setQAudioOutput_DisconnectNotify_Callback(QAudioOutput_DisconnectNotify_Callback cb) { qaudiooutput_disconnectnotify_callback = cb; }
    inline void setQAudioOutput_Sender_Callback(QAudioOutput_Sender_Callback cb) { qaudiooutput_sender_callback = cb; }
    inline void setQAudioOutput_SenderSignalIndex_Callback(QAudioOutput_SenderSignalIndex_Callback cb) { qaudiooutput_sendersignalindex_callback = cb; }
    inline void setQAudioOutput_Receivers_Callback(QAudioOutput_Receivers_Callback cb) { qaudiooutput_receivers_callback = cb; }
    inline void setQAudioOutput_IsSignalConnected_Callback(QAudioOutput_IsSignalConnected_Callback cb) { qaudiooutput_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQAudioOutput_MetaObject_IsBase(bool value) const { qaudiooutput_metaobject_isbase = value; }
    inline void setQAudioOutput_Metacast_IsBase(bool value) const { qaudiooutput_metacast_isbase = value; }
    inline void setQAudioOutput_Metacall_IsBase(bool value) const { qaudiooutput_metacall_isbase = value; }
    inline void setQAudioOutput_Event_IsBase(bool value) const { qaudiooutput_event_isbase = value; }
    inline void setQAudioOutput_EventFilter_IsBase(bool value) const { qaudiooutput_eventfilter_isbase = value; }
    inline void setQAudioOutput_TimerEvent_IsBase(bool value) const { qaudiooutput_timerevent_isbase = value; }
    inline void setQAudioOutput_ChildEvent_IsBase(bool value) const { qaudiooutput_childevent_isbase = value; }
    inline void setQAudioOutput_CustomEvent_IsBase(bool value) const { qaudiooutput_customevent_isbase = value; }
    inline void setQAudioOutput_ConnectNotify_IsBase(bool value) const { qaudiooutput_connectnotify_isbase = value; }
    inline void setQAudioOutput_DisconnectNotify_IsBase(bool value) const { qaudiooutput_disconnectnotify_isbase = value; }
    inline void setQAudioOutput_Sender_IsBase(bool value) const { qaudiooutput_sender_isbase = value; }
    inline void setQAudioOutput_SenderSignalIndex_IsBase(bool value) const { qaudiooutput_sendersignalindex_isbase = value; }
    inline void setQAudioOutput_Receivers_IsBase(bool value) const { qaudiooutput_receivers_isbase = value; }
    inline void setQAudioOutput_IsSignalConnected_IsBase(bool value) const { qaudiooutput_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qaudiooutput_metaobject_isbase) {
            qaudiooutput_metaobject_isbase = false;
            return QAudioOutput::metaObject();
        }
        auto metaobject_cb = qaudiooutput_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QAudioOutput::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qaudiooutput_metacast_isbase) {
            qaudiooutput_metacast_isbase = false;
            return QAudioOutput::qt_metacast(param1);
        }
        auto metacast_cb = qaudiooutput_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QAudioOutput::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qaudiooutput_metacall_isbase) {
            qaudiooutput_metacall_isbase = false;
            return QAudioOutput::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qaudiooutput_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QAudioOutput::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qaudiooutput_event_isbase) {
            qaudiooutput_event_isbase = false;
            return QAudioOutput::event(event);
        }
        auto event_cb = qaudiooutput_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QAudioOutput::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qaudiooutput_eventfilter_isbase) {
            qaudiooutput_eventfilter_isbase = false;
            return QAudioOutput::eventFilter(watched, event);
        }
        auto eventfilter_cb = qaudiooutput_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QAudioOutput::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qaudiooutput_timerevent_isbase) {
            qaudiooutput_timerevent_isbase = false;
            QAudioOutput::timerEvent(event);
            return;
        }
        auto timerevent_cb = qaudiooutput_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        QAudioOutput::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qaudiooutput_childevent_isbase) {
            qaudiooutput_childevent_isbase = false;
            QAudioOutput::childEvent(event);
            return;
        }
        auto childevent_cb = qaudiooutput_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        QAudioOutput::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qaudiooutput_customevent_isbase) {
            qaudiooutput_customevent_isbase = false;
            QAudioOutput::customEvent(event);
            return;
        }
        auto customevent_cb = qaudiooutput_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        QAudioOutput::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qaudiooutput_connectnotify_isbase) {
            qaudiooutput_connectnotify_isbase = false;
            QAudioOutput::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qaudiooutput_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        QAudioOutput::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qaudiooutput_disconnectnotify_isbase) {
            qaudiooutput_disconnectnotify_isbase = false;
            QAudioOutput::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qaudiooutput_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        QAudioOutput::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qaudiooutput_sender_isbase) {
            qaudiooutput_sender_isbase = false;
            return QAudioOutput::sender();
        }
        auto sender_cb = qaudiooutput_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QAudioOutput::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qaudiooutput_sendersignalindex_isbase) {
            qaudiooutput_sendersignalindex_isbase = false;
            return QAudioOutput::senderSignalIndex();
        }
        auto sendersignalindex_cb = qaudiooutput_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QAudioOutput::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qaudiooutput_receivers_isbase) {
            qaudiooutput_receivers_isbase = false;
            return QAudioOutput::receivers(signal);
        }
        auto receivers_cb = qaudiooutput_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QAudioOutput::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qaudiooutput_issignalconnected_isbase) {
            qaudiooutput_issignalconnected_isbase = false;
            return QAudioOutput::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qaudiooutput_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QAudioOutput::isSignalConnected(signal);
    }

    // Friend functions
    friend void QAudioOutput_TimerEvent(QAudioOutput* self, QTimerEvent* event);
    friend void QAudioOutput_SuperTimerEvent(QAudioOutput* self, QTimerEvent* event);
    friend void QAudioOutput_ChildEvent(QAudioOutput* self, QChildEvent* event);
    friend void QAudioOutput_SuperChildEvent(QAudioOutput* self, QChildEvent* event);
    friend void QAudioOutput_CustomEvent(QAudioOutput* self, QEvent* event);
    friend void QAudioOutput_SuperCustomEvent(QAudioOutput* self, QEvent* event);
    friend void QAudioOutput_ConnectNotify(QAudioOutput* self, const QMetaMethod* signal);
    friend void QAudioOutput_SuperConnectNotify(QAudioOutput* self, const QMetaMethod* signal);
    friend void QAudioOutput_DisconnectNotify(QAudioOutput* self, const QMetaMethod* signal);
    friend void QAudioOutput_SuperDisconnectNotify(QAudioOutput* self, const QMetaMethod* signal);
    friend QObject* QAudioOutput_Sender(const QAudioOutput* self);
    friend QObject* QAudioOutput_SuperSender(const QAudioOutput* self);
    friend int QAudioOutput_SenderSignalIndex(const QAudioOutput* self);
    friend int QAudioOutput_SuperSenderSignalIndex(const QAudioOutput* self);
    friend int QAudioOutput_Receivers(const QAudioOutput* self, const char* signal);
    friend int QAudioOutput_SuperReceivers(const QAudioOutput* self, const char* signal);
    friend bool QAudioOutput_IsSignalConnected(const QAudioOutput* self, const QMetaMethod* signal);
    friend bool QAudioOutput_SuperIsSignalConnected(const QAudioOutput* self, const QMetaMethod* signal);
};

#endif
