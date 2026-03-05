#pragma once
#ifndef SRCC_LIBVIRTUALQTIMELINE_H
#define SRCC_LIBVIRTUALQTIMELINE_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QTimeLine so that we can call protected methods
class VirtualQTimeLine final : public QTimeLine {

  public:
    // Virtual class boolean flag
    bool isVirtualQTimeLine = true;

    // Virtual class public types (including callbacks)
    using QTimeLine_MetaObject_Callback = QMetaObject* (*)();
    using QTimeLine_Metacast_Callback = void* (*)(QTimeLine*, const char*);
    using QTimeLine_Metacall_Callback = int (*)(QTimeLine*, int, int, void**);
    using QTimeLine_ValueForTime_Callback = double (*)(const QTimeLine*, int);
    using QTimeLine_TimerEvent_Callback = void (*)(QTimeLine*, QTimerEvent*);
    using QTimeLine_Event_Callback = bool (*)(QTimeLine*, QEvent*);
    using QTimeLine_EventFilter_Callback = bool (*)(QTimeLine*, QObject*, QEvent*);
    using QTimeLine_ChildEvent_Callback = void (*)(QTimeLine*, QChildEvent*);
    using QTimeLine_CustomEvent_Callback = void (*)(QTimeLine*, QEvent*);
    using QTimeLine_ConnectNotify_Callback = void (*)(QTimeLine*, QMetaMethod*);
    using QTimeLine_DisconnectNotify_Callback = void (*)(QTimeLine*, QMetaMethod*);
    using QTimeLine_Sender_Callback = QObject* (*)();
    using QTimeLine_SenderSignalIndex_Callback = int (*)();
    using QTimeLine_Receivers_Callback = int (*)(const QTimeLine*, const char*);
    using QTimeLine_IsSignalConnected_Callback = bool (*)(const QTimeLine*, QMetaMethod*);

  protected:
    // Instance callback storage
    QTimeLine_MetaObject_Callback qtimeline_metaobject_callback = nullptr;
    QTimeLine_Metacast_Callback qtimeline_metacast_callback = nullptr;
    QTimeLine_Metacall_Callback qtimeline_metacall_callback = nullptr;
    QTimeLine_ValueForTime_Callback qtimeline_valuefortime_callback = nullptr;
    QTimeLine_TimerEvent_Callback qtimeline_timerevent_callback = nullptr;
    QTimeLine_Event_Callback qtimeline_event_callback = nullptr;
    QTimeLine_EventFilter_Callback qtimeline_eventfilter_callback = nullptr;
    QTimeLine_ChildEvent_Callback qtimeline_childevent_callback = nullptr;
    QTimeLine_CustomEvent_Callback qtimeline_customevent_callback = nullptr;
    QTimeLine_ConnectNotify_Callback qtimeline_connectnotify_callback = nullptr;
    QTimeLine_DisconnectNotify_Callback qtimeline_disconnectnotify_callback = nullptr;
    QTimeLine_Sender_Callback qtimeline_sender_callback = nullptr;
    QTimeLine_SenderSignalIndex_Callback qtimeline_sendersignalindex_callback = nullptr;
    QTimeLine_Receivers_Callback qtimeline_receivers_callback = nullptr;
    QTimeLine_IsSignalConnected_Callback qtimeline_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qtimeline_metaobject_isbase = false;
    mutable bool qtimeline_metacast_isbase = false;
    mutable bool qtimeline_metacall_isbase = false;
    mutable bool qtimeline_valuefortime_isbase = false;
    mutable bool qtimeline_timerevent_isbase = false;
    mutable bool qtimeline_event_isbase = false;
    mutable bool qtimeline_eventfilter_isbase = false;
    mutable bool qtimeline_childevent_isbase = false;
    mutable bool qtimeline_customevent_isbase = false;
    mutable bool qtimeline_connectnotify_isbase = false;
    mutable bool qtimeline_disconnectnotify_isbase = false;
    mutable bool qtimeline_sender_isbase = false;
    mutable bool qtimeline_sendersignalindex_isbase = false;
    mutable bool qtimeline_receivers_isbase = false;
    mutable bool qtimeline_issignalconnected_isbase = false;

  public:
    VirtualQTimeLine() : QTimeLine() {};
    VirtualQTimeLine(int duration) : QTimeLine(duration) {};
    VirtualQTimeLine(int duration, QObject* parent) : QTimeLine(duration, parent) {};

    // Callback setters
    inline void setQTimeLine_MetaObject_Callback(QTimeLine_MetaObject_Callback cb) { qtimeline_metaobject_callback = cb; }
    inline void setQTimeLine_Metacast_Callback(QTimeLine_Metacast_Callback cb) { qtimeline_metacast_callback = cb; }
    inline void setQTimeLine_Metacall_Callback(QTimeLine_Metacall_Callback cb) { qtimeline_metacall_callback = cb; }
    inline void setQTimeLine_ValueForTime_Callback(QTimeLine_ValueForTime_Callback cb) { qtimeline_valuefortime_callback = cb; }
    inline void setQTimeLine_TimerEvent_Callback(QTimeLine_TimerEvent_Callback cb) { qtimeline_timerevent_callback = cb; }
    inline void setQTimeLine_Event_Callback(QTimeLine_Event_Callback cb) { qtimeline_event_callback = cb; }
    inline void setQTimeLine_EventFilter_Callback(QTimeLine_EventFilter_Callback cb) { qtimeline_eventfilter_callback = cb; }
    inline void setQTimeLine_ChildEvent_Callback(QTimeLine_ChildEvent_Callback cb) { qtimeline_childevent_callback = cb; }
    inline void setQTimeLine_CustomEvent_Callback(QTimeLine_CustomEvent_Callback cb) { qtimeline_customevent_callback = cb; }
    inline void setQTimeLine_ConnectNotify_Callback(QTimeLine_ConnectNotify_Callback cb) { qtimeline_connectnotify_callback = cb; }
    inline void setQTimeLine_DisconnectNotify_Callback(QTimeLine_DisconnectNotify_Callback cb) { qtimeline_disconnectnotify_callback = cb; }
    inline void setQTimeLine_Sender_Callback(QTimeLine_Sender_Callback cb) { qtimeline_sender_callback = cb; }
    inline void setQTimeLine_SenderSignalIndex_Callback(QTimeLine_SenderSignalIndex_Callback cb) { qtimeline_sendersignalindex_callback = cb; }
    inline void setQTimeLine_Receivers_Callback(QTimeLine_Receivers_Callback cb) { qtimeline_receivers_callback = cb; }
    inline void setQTimeLine_IsSignalConnected_Callback(QTimeLine_IsSignalConnected_Callback cb) { qtimeline_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQTimeLine_MetaObject_IsBase(bool value) const { qtimeline_metaobject_isbase = value; }
    inline void setQTimeLine_Metacast_IsBase(bool value) const { qtimeline_metacast_isbase = value; }
    inline void setQTimeLine_Metacall_IsBase(bool value) const { qtimeline_metacall_isbase = value; }
    inline void setQTimeLine_ValueForTime_IsBase(bool value) const { qtimeline_valuefortime_isbase = value; }
    inline void setQTimeLine_TimerEvent_IsBase(bool value) const { qtimeline_timerevent_isbase = value; }
    inline void setQTimeLine_Event_IsBase(bool value) const { qtimeline_event_isbase = value; }
    inline void setQTimeLine_EventFilter_IsBase(bool value) const { qtimeline_eventfilter_isbase = value; }
    inline void setQTimeLine_ChildEvent_IsBase(bool value) const { qtimeline_childevent_isbase = value; }
    inline void setQTimeLine_CustomEvent_IsBase(bool value) const { qtimeline_customevent_isbase = value; }
    inline void setQTimeLine_ConnectNotify_IsBase(bool value) const { qtimeline_connectnotify_isbase = value; }
    inline void setQTimeLine_DisconnectNotify_IsBase(bool value) const { qtimeline_disconnectnotify_isbase = value; }
    inline void setQTimeLine_Sender_IsBase(bool value) const { qtimeline_sender_isbase = value; }
    inline void setQTimeLine_SenderSignalIndex_IsBase(bool value) const { qtimeline_sendersignalindex_isbase = value; }
    inline void setQTimeLine_Receivers_IsBase(bool value) const { qtimeline_receivers_isbase = value; }
    inline void setQTimeLine_IsSignalConnected_IsBase(bool value) const { qtimeline_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qtimeline_metaobject_isbase) {
            qtimeline_metaobject_isbase = false;
            return QTimeLine::metaObject();
        }
        auto metaobject_cb = qtimeline_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QTimeLine::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qtimeline_metacast_isbase) {
            qtimeline_metacast_isbase = false;
            return QTimeLine::qt_metacast(param1);
        }
        auto metacast_cb = qtimeline_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QTimeLine::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qtimeline_metacall_isbase) {
            qtimeline_metacall_isbase = false;
            return QTimeLine::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qtimeline_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QTimeLine::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual qreal valueForTime(int msec) const override {
        if (qtimeline_valuefortime_isbase) {
            qtimeline_valuefortime_isbase = false;
            return QTimeLine::valueForTime(msec);
        }
        auto valuefortime_cb = qtimeline_valuefortime_callback;
        if (valuefortime_cb) {
            int cbval1 = msec;

            double callback_ret = valuefortime_cb(this, cbval1);
            return static_cast<qreal>(callback_ret);
        }
        return QTimeLine::valueForTime(msec);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qtimeline_timerevent_isbase) {
            qtimeline_timerevent_isbase = false;
            QTimeLine::timerEvent(event);
            return;
        }
        auto timerevent_cb = qtimeline_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        QTimeLine::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qtimeline_event_isbase) {
            qtimeline_event_isbase = false;
            return QTimeLine::event(event);
        }
        auto event_cb = qtimeline_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QTimeLine::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qtimeline_eventfilter_isbase) {
            qtimeline_eventfilter_isbase = false;
            return QTimeLine::eventFilter(watched, event);
        }
        auto eventfilter_cb = qtimeline_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QTimeLine::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qtimeline_childevent_isbase) {
            qtimeline_childevent_isbase = false;
            QTimeLine::childEvent(event);
            return;
        }
        auto childevent_cb = qtimeline_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        QTimeLine::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qtimeline_customevent_isbase) {
            qtimeline_customevent_isbase = false;
            QTimeLine::customEvent(event);
            return;
        }
        auto customevent_cb = qtimeline_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        QTimeLine::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qtimeline_connectnotify_isbase) {
            qtimeline_connectnotify_isbase = false;
            QTimeLine::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qtimeline_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        QTimeLine::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qtimeline_disconnectnotify_isbase) {
            qtimeline_disconnectnotify_isbase = false;
            QTimeLine::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qtimeline_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        QTimeLine::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qtimeline_sender_isbase) {
            qtimeline_sender_isbase = false;
            return QTimeLine::sender();
        }
        auto sender_cb = qtimeline_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QTimeLine::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qtimeline_sendersignalindex_isbase) {
            qtimeline_sendersignalindex_isbase = false;
            return QTimeLine::senderSignalIndex();
        }
        auto sendersignalindex_cb = qtimeline_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QTimeLine::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qtimeline_receivers_isbase) {
            qtimeline_receivers_isbase = false;
            return QTimeLine::receivers(signal);
        }
        auto receivers_cb = qtimeline_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QTimeLine::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qtimeline_issignalconnected_isbase) {
            qtimeline_issignalconnected_isbase = false;
            return QTimeLine::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qtimeline_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QTimeLine::isSignalConnected(signal);
    }

    // Friend functions
    friend void QTimeLine_TimerEvent(QTimeLine* self, QTimerEvent* event);
    friend void QTimeLine_SuperTimerEvent(QTimeLine* self, QTimerEvent* event);
    friend void QTimeLine_ChildEvent(QTimeLine* self, QChildEvent* event);
    friend void QTimeLine_SuperChildEvent(QTimeLine* self, QChildEvent* event);
    friend void QTimeLine_CustomEvent(QTimeLine* self, QEvent* event);
    friend void QTimeLine_SuperCustomEvent(QTimeLine* self, QEvent* event);
    friend void QTimeLine_ConnectNotify(QTimeLine* self, const QMetaMethod* signal);
    friend void QTimeLine_SuperConnectNotify(QTimeLine* self, const QMetaMethod* signal);
    friend void QTimeLine_DisconnectNotify(QTimeLine* self, const QMetaMethod* signal);
    friend void QTimeLine_SuperDisconnectNotify(QTimeLine* self, const QMetaMethod* signal);
    friend QObject* QTimeLine_Sender(const QTimeLine* self);
    friend QObject* QTimeLine_SuperSender(const QTimeLine* self);
    friend int QTimeLine_SenderSignalIndex(const QTimeLine* self);
    friend int QTimeLine_SuperSenderSignalIndex(const QTimeLine* self);
    friend int QTimeLine_Receivers(const QTimeLine* self, const char* signal);
    friend int QTimeLine_SuperReceivers(const QTimeLine* self, const char* signal);
    friend bool QTimeLine_IsSignalConnected(const QTimeLine* self, const QMetaMethod* signal);
    friend bool QTimeLine_SuperIsSignalConnected(const QTimeLine* self, const QMetaMethod* signal);
};

#endif
