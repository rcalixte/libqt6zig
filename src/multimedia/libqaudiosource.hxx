#pragma once
#ifndef SRC_MULTIMEDIAC_LIBVIRTUALQAUDIOSOURCE_H
#define SRC_MULTIMEDIAC_LIBVIRTUALQAUDIOSOURCE_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QAudioSource so that we can call protected methods
class VirtualQAudioSource final : public QAudioSource {

  public:
    // Virtual class boolean flag
    bool isVirtualQAudioSource = true;

    // Virtual class public types (including callbacks)
    using QAudioSource_MetaObject_Callback = QMetaObject* (*)();
    using QAudioSource_Metacast_Callback = void* (*)(QAudioSource*, const char*);
    using QAudioSource_Metacall_Callback = int (*)(QAudioSource*, int, int, void**);
    using QAudioSource_Event_Callback = bool (*)(QAudioSource*, QEvent*);
    using QAudioSource_EventFilter_Callback = bool (*)(QAudioSource*, QObject*, QEvent*);
    using QAudioSource_TimerEvent_Callback = void (*)(QAudioSource*, QTimerEvent*);
    using QAudioSource_ChildEvent_Callback = void (*)(QAudioSource*, QChildEvent*);
    using QAudioSource_CustomEvent_Callback = void (*)(QAudioSource*, QEvent*);
    using QAudioSource_ConnectNotify_Callback = void (*)(QAudioSource*, QMetaMethod*);
    using QAudioSource_DisconnectNotify_Callback = void (*)(QAudioSource*, QMetaMethod*);
    using QAudioSource_Sender_Callback = QObject* (*)();
    using QAudioSource_SenderSignalIndex_Callback = int (*)();
    using QAudioSource_Receivers_Callback = int (*)(const QAudioSource*, const char*);
    using QAudioSource_IsSignalConnected_Callback = bool (*)(const QAudioSource*, QMetaMethod*);

  protected:
    // Instance callback storage
    QAudioSource_MetaObject_Callback qaudiosource_metaobject_callback = nullptr;
    QAudioSource_Metacast_Callback qaudiosource_metacast_callback = nullptr;
    QAudioSource_Metacall_Callback qaudiosource_metacall_callback = nullptr;
    QAudioSource_Event_Callback qaudiosource_event_callback = nullptr;
    QAudioSource_EventFilter_Callback qaudiosource_eventfilter_callback = nullptr;
    QAudioSource_TimerEvent_Callback qaudiosource_timerevent_callback = nullptr;
    QAudioSource_ChildEvent_Callback qaudiosource_childevent_callback = nullptr;
    QAudioSource_CustomEvent_Callback qaudiosource_customevent_callback = nullptr;
    QAudioSource_ConnectNotify_Callback qaudiosource_connectnotify_callback = nullptr;
    QAudioSource_DisconnectNotify_Callback qaudiosource_disconnectnotify_callback = nullptr;
    QAudioSource_Sender_Callback qaudiosource_sender_callback = nullptr;
    QAudioSource_SenderSignalIndex_Callback qaudiosource_sendersignalindex_callback = nullptr;
    QAudioSource_Receivers_Callback qaudiosource_receivers_callback = nullptr;
    QAudioSource_IsSignalConnected_Callback qaudiosource_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qaudiosource_metaobject_isbase = false;
    mutable bool qaudiosource_metacast_isbase = false;
    mutable bool qaudiosource_metacall_isbase = false;
    mutable bool qaudiosource_event_isbase = false;
    mutable bool qaudiosource_eventfilter_isbase = false;
    mutable bool qaudiosource_timerevent_isbase = false;
    mutable bool qaudiosource_childevent_isbase = false;
    mutable bool qaudiosource_customevent_isbase = false;
    mutable bool qaudiosource_connectnotify_isbase = false;
    mutable bool qaudiosource_disconnectnotify_isbase = false;
    mutable bool qaudiosource_sender_isbase = false;
    mutable bool qaudiosource_sendersignalindex_isbase = false;
    mutable bool qaudiosource_receivers_isbase = false;
    mutable bool qaudiosource_issignalconnected_isbase = false;

  public:
    VirtualQAudioSource() : QAudioSource() {};
    VirtualQAudioSource(const QAudioDevice& audioDeviceInfo) : QAudioSource(audioDeviceInfo) {};
    VirtualQAudioSource(const QAudioFormat& format) : QAudioSource(format) {};
    VirtualQAudioSource(const QAudioFormat& format, QObject* parent) : QAudioSource(format, parent) {};
    VirtualQAudioSource(const QAudioDevice& audioDeviceInfo, const QAudioFormat& format) : QAudioSource(audioDeviceInfo, format) {};
    VirtualQAudioSource(const QAudioDevice& audioDeviceInfo, const QAudioFormat& format, QObject* parent) : QAudioSource(audioDeviceInfo, format, parent) {};

    // Callback setters
    inline void setQAudioSource_MetaObject_Callback(QAudioSource_MetaObject_Callback cb) { qaudiosource_metaobject_callback = cb; }
    inline void setQAudioSource_Metacast_Callback(QAudioSource_Metacast_Callback cb) { qaudiosource_metacast_callback = cb; }
    inline void setQAudioSource_Metacall_Callback(QAudioSource_Metacall_Callback cb) { qaudiosource_metacall_callback = cb; }
    inline void setQAudioSource_Event_Callback(QAudioSource_Event_Callback cb) { qaudiosource_event_callback = cb; }
    inline void setQAudioSource_EventFilter_Callback(QAudioSource_EventFilter_Callback cb) { qaudiosource_eventfilter_callback = cb; }
    inline void setQAudioSource_TimerEvent_Callback(QAudioSource_TimerEvent_Callback cb) { qaudiosource_timerevent_callback = cb; }
    inline void setQAudioSource_ChildEvent_Callback(QAudioSource_ChildEvent_Callback cb) { qaudiosource_childevent_callback = cb; }
    inline void setQAudioSource_CustomEvent_Callback(QAudioSource_CustomEvent_Callback cb) { qaudiosource_customevent_callback = cb; }
    inline void setQAudioSource_ConnectNotify_Callback(QAudioSource_ConnectNotify_Callback cb) { qaudiosource_connectnotify_callback = cb; }
    inline void setQAudioSource_DisconnectNotify_Callback(QAudioSource_DisconnectNotify_Callback cb) { qaudiosource_disconnectnotify_callback = cb; }
    inline void setQAudioSource_Sender_Callback(QAudioSource_Sender_Callback cb) { qaudiosource_sender_callback = cb; }
    inline void setQAudioSource_SenderSignalIndex_Callback(QAudioSource_SenderSignalIndex_Callback cb) { qaudiosource_sendersignalindex_callback = cb; }
    inline void setQAudioSource_Receivers_Callback(QAudioSource_Receivers_Callback cb) { qaudiosource_receivers_callback = cb; }
    inline void setQAudioSource_IsSignalConnected_Callback(QAudioSource_IsSignalConnected_Callback cb) { qaudiosource_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQAudioSource_MetaObject_IsBase(bool value) const { qaudiosource_metaobject_isbase = value; }
    inline void setQAudioSource_Metacast_IsBase(bool value) const { qaudiosource_metacast_isbase = value; }
    inline void setQAudioSource_Metacall_IsBase(bool value) const { qaudiosource_metacall_isbase = value; }
    inline void setQAudioSource_Event_IsBase(bool value) const { qaudiosource_event_isbase = value; }
    inline void setQAudioSource_EventFilter_IsBase(bool value) const { qaudiosource_eventfilter_isbase = value; }
    inline void setQAudioSource_TimerEvent_IsBase(bool value) const { qaudiosource_timerevent_isbase = value; }
    inline void setQAudioSource_ChildEvent_IsBase(bool value) const { qaudiosource_childevent_isbase = value; }
    inline void setQAudioSource_CustomEvent_IsBase(bool value) const { qaudiosource_customevent_isbase = value; }
    inline void setQAudioSource_ConnectNotify_IsBase(bool value) const { qaudiosource_connectnotify_isbase = value; }
    inline void setQAudioSource_DisconnectNotify_IsBase(bool value) const { qaudiosource_disconnectnotify_isbase = value; }
    inline void setQAudioSource_Sender_IsBase(bool value) const { qaudiosource_sender_isbase = value; }
    inline void setQAudioSource_SenderSignalIndex_IsBase(bool value) const { qaudiosource_sendersignalindex_isbase = value; }
    inline void setQAudioSource_Receivers_IsBase(bool value) const { qaudiosource_receivers_isbase = value; }
    inline void setQAudioSource_IsSignalConnected_IsBase(bool value) const { qaudiosource_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qaudiosource_metaobject_isbase) {
            qaudiosource_metaobject_isbase = false;
            return QAudioSource::metaObject();
        }
        auto metaobject_cb = qaudiosource_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QAudioSource::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qaudiosource_metacast_isbase) {
            qaudiosource_metacast_isbase = false;
            return QAudioSource::qt_metacast(param1);
        }
        auto metacast_cb = qaudiosource_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QAudioSource::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qaudiosource_metacall_isbase) {
            qaudiosource_metacall_isbase = false;
            return QAudioSource::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qaudiosource_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QAudioSource::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qaudiosource_event_isbase) {
            qaudiosource_event_isbase = false;
            return QAudioSource::event(event);
        }
        auto event_cb = qaudiosource_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QAudioSource::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qaudiosource_eventfilter_isbase) {
            qaudiosource_eventfilter_isbase = false;
            return QAudioSource::eventFilter(watched, event);
        }
        auto eventfilter_cb = qaudiosource_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QAudioSource::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qaudiosource_timerevent_isbase) {
            qaudiosource_timerevent_isbase = false;
            QAudioSource::timerEvent(event);
            return;
        }
        auto timerevent_cb = qaudiosource_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        QAudioSource::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qaudiosource_childevent_isbase) {
            qaudiosource_childevent_isbase = false;
            QAudioSource::childEvent(event);
            return;
        }
        auto childevent_cb = qaudiosource_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        QAudioSource::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qaudiosource_customevent_isbase) {
            qaudiosource_customevent_isbase = false;
            QAudioSource::customEvent(event);
            return;
        }
        auto customevent_cb = qaudiosource_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        QAudioSource::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qaudiosource_connectnotify_isbase) {
            qaudiosource_connectnotify_isbase = false;
            QAudioSource::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qaudiosource_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        QAudioSource::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qaudiosource_disconnectnotify_isbase) {
            qaudiosource_disconnectnotify_isbase = false;
            QAudioSource::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qaudiosource_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        QAudioSource::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qaudiosource_sender_isbase) {
            qaudiosource_sender_isbase = false;
            return QAudioSource::sender();
        }
        auto sender_cb = qaudiosource_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QAudioSource::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qaudiosource_sendersignalindex_isbase) {
            qaudiosource_sendersignalindex_isbase = false;
            return QAudioSource::senderSignalIndex();
        }
        auto sendersignalindex_cb = qaudiosource_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QAudioSource::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qaudiosource_receivers_isbase) {
            qaudiosource_receivers_isbase = false;
            return QAudioSource::receivers(signal);
        }
        auto receivers_cb = qaudiosource_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QAudioSource::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qaudiosource_issignalconnected_isbase) {
            qaudiosource_issignalconnected_isbase = false;
            return QAudioSource::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qaudiosource_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QAudioSource::isSignalConnected(signal);
    }

    // Friend functions
    friend void QAudioSource_TimerEvent(QAudioSource* self, QTimerEvent* event);
    friend void QAudioSource_SuperTimerEvent(QAudioSource* self, QTimerEvent* event);
    friend void QAudioSource_ChildEvent(QAudioSource* self, QChildEvent* event);
    friend void QAudioSource_SuperChildEvent(QAudioSource* self, QChildEvent* event);
    friend void QAudioSource_CustomEvent(QAudioSource* self, QEvent* event);
    friend void QAudioSource_SuperCustomEvent(QAudioSource* self, QEvent* event);
    friend void QAudioSource_ConnectNotify(QAudioSource* self, const QMetaMethod* signal);
    friend void QAudioSource_SuperConnectNotify(QAudioSource* self, const QMetaMethod* signal);
    friend void QAudioSource_DisconnectNotify(QAudioSource* self, const QMetaMethod* signal);
    friend void QAudioSource_SuperDisconnectNotify(QAudioSource* self, const QMetaMethod* signal);
    friend QObject* QAudioSource_Sender(const QAudioSource* self);
    friend QObject* QAudioSource_SuperSender(const QAudioSource* self);
    friend int QAudioSource_SenderSignalIndex(const QAudioSource* self);
    friend int QAudioSource_SuperSenderSignalIndex(const QAudioSource* self);
    friend int QAudioSource_Receivers(const QAudioSource* self, const char* signal);
    friend int QAudioSource_SuperReceivers(const QAudioSource* self, const char* signal);
    friend bool QAudioSource_IsSignalConnected(const QAudioSource* self, const QMetaMethod* signal);
    friend bool QAudioSource_SuperIsSignalConnected(const QAudioSource* self, const QMetaMethod* signal);
};

#endif
