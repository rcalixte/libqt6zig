#pragma once
#ifndef SRC_MULTIMEDIAC_LIBVIRTUALQMEDIARECORDER_H
#define SRC_MULTIMEDIAC_LIBVIRTUALQMEDIARECORDER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QMediaRecorder so that we can call protected methods
class VirtualQMediaRecorder final : public QMediaRecorder {

  public:
    // Virtual class boolean flag
    bool isVirtualQMediaRecorder = true;

    // Virtual class public types (including callbacks)
    using QMediaRecorder_MetaObject_Callback = QMetaObject* (*)();
    using QMediaRecorder_Metacast_Callback = void* (*)(QMediaRecorder*, const char*);
    using QMediaRecorder_Metacall_Callback = int (*)(QMediaRecorder*, int, int, void**);
    using QMediaRecorder_Event_Callback = bool (*)(QMediaRecorder*, QEvent*);
    using QMediaRecorder_EventFilter_Callback = bool (*)(QMediaRecorder*, QObject*, QEvent*);
    using QMediaRecorder_TimerEvent_Callback = void (*)(QMediaRecorder*, QTimerEvent*);
    using QMediaRecorder_ChildEvent_Callback = void (*)(QMediaRecorder*, QChildEvent*);
    using QMediaRecorder_CustomEvent_Callback = void (*)(QMediaRecorder*, QEvent*);
    using QMediaRecorder_ConnectNotify_Callback = void (*)(QMediaRecorder*, QMetaMethod*);
    using QMediaRecorder_DisconnectNotify_Callback = void (*)(QMediaRecorder*, QMetaMethod*);
    using QMediaRecorder_Sender_Callback = QObject* (*)();
    using QMediaRecorder_SenderSignalIndex_Callback = int (*)();
    using QMediaRecorder_Receivers_Callback = int (*)(const QMediaRecorder*, const char*);
    using QMediaRecorder_IsSignalConnected_Callback = bool (*)(const QMediaRecorder*, QMetaMethod*);

  protected:
    // Instance callback storage
    QMediaRecorder_MetaObject_Callback qmediarecorder_metaobject_callback = nullptr;
    QMediaRecorder_Metacast_Callback qmediarecorder_metacast_callback = nullptr;
    QMediaRecorder_Metacall_Callback qmediarecorder_metacall_callback = nullptr;
    QMediaRecorder_Event_Callback qmediarecorder_event_callback = nullptr;
    QMediaRecorder_EventFilter_Callback qmediarecorder_eventfilter_callback = nullptr;
    QMediaRecorder_TimerEvent_Callback qmediarecorder_timerevent_callback = nullptr;
    QMediaRecorder_ChildEvent_Callback qmediarecorder_childevent_callback = nullptr;
    QMediaRecorder_CustomEvent_Callback qmediarecorder_customevent_callback = nullptr;
    QMediaRecorder_ConnectNotify_Callback qmediarecorder_connectnotify_callback = nullptr;
    QMediaRecorder_DisconnectNotify_Callback qmediarecorder_disconnectnotify_callback = nullptr;
    QMediaRecorder_Sender_Callback qmediarecorder_sender_callback = nullptr;
    QMediaRecorder_SenderSignalIndex_Callback qmediarecorder_sendersignalindex_callback = nullptr;
    QMediaRecorder_Receivers_Callback qmediarecorder_receivers_callback = nullptr;
    QMediaRecorder_IsSignalConnected_Callback qmediarecorder_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qmediarecorder_metaobject_isbase = false;
    mutable bool qmediarecorder_metacast_isbase = false;
    mutable bool qmediarecorder_metacall_isbase = false;
    mutable bool qmediarecorder_event_isbase = false;
    mutable bool qmediarecorder_eventfilter_isbase = false;
    mutable bool qmediarecorder_timerevent_isbase = false;
    mutable bool qmediarecorder_childevent_isbase = false;
    mutable bool qmediarecorder_customevent_isbase = false;
    mutable bool qmediarecorder_connectnotify_isbase = false;
    mutable bool qmediarecorder_disconnectnotify_isbase = false;
    mutable bool qmediarecorder_sender_isbase = false;
    mutable bool qmediarecorder_sendersignalindex_isbase = false;
    mutable bool qmediarecorder_receivers_isbase = false;
    mutable bool qmediarecorder_issignalconnected_isbase = false;

  public:
    VirtualQMediaRecorder() : QMediaRecorder() {};
    VirtualQMediaRecorder(QObject* parent) : QMediaRecorder(parent) {};

    // Callback setters
    inline void setQMediaRecorder_MetaObject_Callback(QMediaRecorder_MetaObject_Callback cb) { qmediarecorder_metaobject_callback = cb; }
    inline void setQMediaRecorder_Metacast_Callback(QMediaRecorder_Metacast_Callback cb) { qmediarecorder_metacast_callback = cb; }
    inline void setQMediaRecorder_Metacall_Callback(QMediaRecorder_Metacall_Callback cb) { qmediarecorder_metacall_callback = cb; }
    inline void setQMediaRecorder_Event_Callback(QMediaRecorder_Event_Callback cb) { qmediarecorder_event_callback = cb; }
    inline void setQMediaRecorder_EventFilter_Callback(QMediaRecorder_EventFilter_Callback cb) { qmediarecorder_eventfilter_callback = cb; }
    inline void setQMediaRecorder_TimerEvent_Callback(QMediaRecorder_TimerEvent_Callback cb) { qmediarecorder_timerevent_callback = cb; }
    inline void setQMediaRecorder_ChildEvent_Callback(QMediaRecorder_ChildEvent_Callback cb) { qmediarecorder_childevent_callback = cb; }
    inline void setQMediaRecorder_CustomEvent_Callback(QMediaRecorder_CustomEvent_Callback cb) { qmediarecorder_customevent_callback = cb; }
    inline void setQMediaRecorder_ConnectNotify_Callback(QMediaRecorder_ConnectNotify_Callback cb) { qmediarecorder_connectnotify_callback = cb; }
    inline void setQMediaRecorder_DisconnectNotify_Callback(QMediaRecorder_DisconnectNotify_Callback cb) { qmediarecorder_disconnectnotify_callback = cb; }
    inline void setQMediaRecorder_Sender_Callback(QMediaRecorder_Sender_Callback cb) { qmediarecorder_sender_callback = cb; }
    inline void setQMediaRecorder_SenderSignalIndex_Callback(QMediaRecorder_SenderSignalIndex_Callback cb) { qmediarecorder_sendersignalindex_callback = cb; }
    inline void setQMediaRecorder_Receivers_Callback(QMediaRecorder_Receivers_Callback cb) { qmediarecorder_receivers_callback = cb; }
    inline void setQMediaRecorder_IsSignalConnected_Callback(QMediaRecorder_IsSignalConnected_Callback cb) { qmediarecorder_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQMediaRecorder_MetaObject_IsBase(bool value) const { qmediarecorder_metaobject_isbase = value; }
    inline void setQMediaRecorder_Metacast_IsBase(bool value) const { qmediarecorder_metacast_isbase = value; }
    inline void setQMediaRecorder_Metacall_IsBase(bool value) const { qmediarecorder_metacall_isbase = value; }
    inline void setQMediaRecorder_Event_IsBase(bool value) const { qmediarecorder_event_isbase = value; }
    inline void setQMediaRecorder_EventFilter_IsBase(bool value) const { qmediarecorder_eventfilter_isbase = value; }
    inline void setQMediaRecorder_TimerEvent_IsBase(bool value) const { qmediarecorder_timerevent_isbase = value; }
    inline void setQMediaRecorder_ChildEvent_IsBase(bool value) const { qmediarecorder_childevent_isbase = value; }
    inline void setQMediaRecorder_CustomEvent_IsBase(bool value) const { qmediarecorder_customevent_isbase = value; }
    inline void setQMediaRecorder_ConnectNotify_IsBase(bool value) const { qmediarecorder_connectnotify_isbase = value; }
    inline void setQMediaRecorder_DisconnectNotify_IsBase(bool value) const { qmediarecorder_disconnectnotify_isbase = value; }
    inline void setQMediaRecorder_Sender_IsBase(bool value) const { qmediarecorder_sender_isbase = value; }
    inline void setQMediaRecorder_SenderSignalIndex_IsBase(bool value) const { qmediarecorder_sendersignalindex_isbase = value; }
    inline void setQMediaRecorder_Receivers_IsBase(bool value) const { qmediarecorder_receivers_isbase = value; }
    inline void setQMediaRecorder_IsSignalConnected_IsBase(bool value) const { qmediarecorder_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qmediarecorder_metaobject_isbase) {
            qmediarecorder_metaobject_isbase = false;
            return QMediaRecorder::metaObject();
        }
        auto metaobject_cb = qmediarecorder_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QMediaRecorder::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qmediarecorder_metacast_isbase) {
            qmediarecorder_metacast_isbase = false;
            return QMediaRecorder::qt_metacast(param1);
        }
        auto metacast_cb = qmediarecorder_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QMediaRecorder::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qmediarecorder_metacall_isbase) {
            qmediarecorder_metacall_isbase = false;
            return QMediaRecorder::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qmediarecorder_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QMediaRecorder::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qmediarecorder_event_isbase) {
            qmediarecorder_event_isbase = false;
            return QMediaRecorder::event(event);
        }
        auto event_cb = qmediarecorder_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QMediaRecorder::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qmediarecorder_eventfilter_isbase) {
            qmediarecorder_eventfilter_isbase = false;
            return QMediaRecorder::eventFilter(watched, event);
        }
        auto eventfilter_cb = qmediarecorder_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QMediaRecorder::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qmediarecorder_timerevent_isbase) {
            qmediarecorder_timerevent_isbase = false;
            QMediaRecorder::timerEvent(event);
            return;
        }
        auto timerevent_cb = qmediarecorder_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        QMediaRecorder::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qmediarecorder_childevent_isbase) {
            qmediarecorder_childevent_isbase = false;
            QMediaRecorder::childEvent(event);
            return;
        }
        auto childevent_cb = qmediarecorder_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        QMediaRecorder::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qmediarecorder_customevent_isbase) {
            qmediarecorder_customevent_isbase = false;
            QMediaRecorder::customEvent(event);
            return;
        }
        auto customevent_cb = qmediarecorder_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        QMediaRecorder::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qmediarecorder_connectnotify_isbase) {
            qmediarecorder_connectnotify_isbase = false;
            QMediaRecorder::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qmediarecorder_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        QMediaRecorder::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qmediarecorder_disconnectnotify_isbase) {
            qmediarecorder_disconnectnotify_isbase = false;
            QMediaRecorder::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qmediarecorder_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        QMediaRecorder::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qmediarecorder_sender_isbase) {
            qmediarecorder_sender_isbase = false;
            return QMediaRecorder::sender();
        }
        auto sender_cb = qmediarecorder_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QMediaRecorder::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qmediarecorder_sendersignalindex_isbase) {
            qmediarecorder_sendersignalindex_isbase = false;
            return QMediaRecorder::senderSignalIndex();
        }
        auto sendersignalindex_cb = qmediarecorder_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QMediaRecorder::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qmediarecorder_receivers_isbase) {
            qmediarecorder_receivers_isbase = false;
            return QMediaRecorder::receivers(signal);
        }
        auto receivers_cb = qmediarecorder_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QMediaRecorder::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qmediarecorder_issignalconnected_isbase) {
            qmediarecorder_issignalconnected_isbase = false;
            return QMediaRecorder::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qmediarecorder_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QMediaRecorder::isSignalConnected(signal);
    }

    // Friend functions
    friend void QMediaRecorder_TimerEvent(QMediaRecorder* self, QTimerEvent* event);
    friend void QMediaRecorder_SuperTimerEvent(QMediaRecorder* self, QTimerEvent* event);
    friend void QMediaRecorder_ChildEvent(QMediaRecorder* self, QChildEvent* event);
    friend void QMediaRecorder_SuperChildEvent(QMediaRecorder* self, QChildEvent* event);
    friend void QMediaRecorder_CustomEvent(QMediaRecorder* self, QEvent* event);
    friend void QMediaRecorder_SuperCustomEvent(QMediaRecorder* self, QEvent* event);
    friend void QMediaRecorder_ConnectNotify(QMediaRecorder* self, const QMetaMethod* signal);
    friend void QMediaRecorder_SuperConnectNotify(QMediaRecorder* self, const QMetaMethod* signal);
    friend void QMediaRecorder_DisconnectNotify(QMediaRecorder* self, const QMetaMethod* signal);
    friend void QMediaRecorder_SuperDisconnectNotify(QMediaRecorder* self, const QMetaMethod* signal);
    friend QObject* QMediaRecorder_Sender(const QMediaRecorder* self);
    friend QObject* QMediaRecorder_SuperSender(const QMediaRecorder* self);
    friend int QMediaRecorder_SenderSignalIndex(const QMediaRecorder* self);
    friend int QMediaRecorder_SuperSenderSignalIndex(const QMediaRecorder* self);
    friend int QMediaRecorder_Receivers(const QMediaRecorder* self, const char* signal);
    friend int QMediaRecorder_SuperReceivers(const QMediaRecorder* self, const char* signal);
    friend bool QMediaRecorder_IsSignalConnected(const QMediaRecorder* self, const QMetaMethod* signal);
    friend bool QMediaRecorder_SuperIsSignalConnected(const QMediaRecorder* self, const QMetaMethod* signal);
};

#endif
