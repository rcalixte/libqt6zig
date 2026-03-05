#pragma once
#ifndef SRC_SPATIALAUDIOC_LIBVIRTUALQAUDIOROOM_H
#define SRC_SPATIALAUDIOC_LIBVIRTUALQAUDIOROOM_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QAudioRoom so that we can call protected methods
class VirtualQAudioRoom final : public QAudioRoom {

  public:
    // Virtual class boolean flag
    bool isVirtualQAudioRoom = true;

    // Virtual class public types (including callbacks)
    using QAudioRoom_MetaObject_Callback = QMetaObject* (*)();
    using QAudioRoom_Metacast_Callback = void* (*)(QAudioRoom*, const char*);
    using QAudioRoom_Metacall_Callback = int (*)(QAudioRoom*, int, int, void**);
    using QAudioRoom_Event_Callback = bool (*)(QAudioRoom*, QEvent*);
    using QAudioRoom_EventFilter_Callback = bool (*)(QAudioRoom*, QObject*, QEvent*);
    using QAudioRoom_TimerEvent_Callback = void (*)(QAudioRoom*, QTimerEvent*);
    using QAudioRoom_ChildEvent_Callback = void (*)(QAudioRoom*, QChildEvent*);
    using QAudioRoom_CustomEvent_Callback = void (*)(QAudioRoom*, QEvent*);
    using QAudioRoom_ConnectNotify_Callback = void (*)(QAudioRoom*, QMetaMethod*);
    using QAudioRoom_DisconnectNotify_Callback = void (*)(QAudioRoom*, QMetaMethod*);
    using QAudioRoom_Sender_Callback = QObject* (*)();
    using QAudioRoom_SenderSignalIndex_Callback = int (*)();
    using QAudioRoom_Receivers_Callback = int (*)(const QAudioRoom*, const char*);
    using QAudioRoom_IsSignalConnected_Callback = bool (*)(const QAudioRoom*, QMetaMethod*);

  protected:
    // Instance callback storage
    QAudioRoom_MetaObject_Callback qaudioroom_metaobject_callback = nullptr;
    QAudioRoom_Metacast_Callback qaudioroom_metacast_callback = nullptr;
    QAudioRoom_Metacall_Callback qaudioroom_metacall_callback = nullptr;
    QAudioRoom_Event_Callback qaudioroom_event_callback = nullptr;
    QAudioRoom_EventFilter_Callback qaudioroom_eventfilter_callback = nullptr;
    QAudioRoom_TimerEvent_Callback qaudioroom_timerevent_callback = nullptr;
    QAudioRoom_ChildEvent_Callback qaudioroom_childevent_callback = nullptr;
    QAudioRoom_CustomEvent_Callback qaudioroom_customevent_callback = nullptr;
    QAudioRoom_ConnectNotify_Callback qaudioroom_connectnotify_callback = nullptr;
    QAudioRoom_DisconnectNotify_Callback qaudioroom_disconnectnotify_callback = nullptr;
    QAudioRoom_Sender_Callback qaudioroom_sender_callback = nullptr;
    QAudioRoom_SenderSignalIndex_Callback qaudioroom_sendersignalindex_callback = nullptr;
    QAudioRoom_Receivers_Callback qaudioroom_receivers_callback = nullptr;
    QAudioRoom_IsSignalConnected_Callback qaudioroom_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qaudioroom_metaobject_isbase = false;
    mutable bool qaudioroom_metacast_isbase = false;
    mutable bool qaudioroom_metacall_isbase = false;
    mutable bool qaudioroom_event_isbase = false;
    mutable bool qaudioroom_eventfilter_isbase = false;
    mutable bool qaudioroom_timerevent_isbase = false;
    mutable bool qaudioroom_childevent_isbase = false;
    mutable bool qaudioroom_customevent_isbase = false;
    mutable bool qaudioroom_connectnotify_isbase = false;
    mutable bool qaudioroom_disconnectnotify_isbase = false;
    mutable bool qaudioroom_sender_isbase = false;
    mutable bool qaudioroom_sendersignalindex_isbase = false;
    mutable bool qaudioroom_receivers_isbase = false;
    mutable bool qaudioroom_issignalconnected_isbase = false;

  public:
    VirtualQAudioRoom(QAudioEngine* engine) : QAudioRoom(engine) {};

    // Callback setters
    inline void setQAudioRoom_MetaObject_Callback(QAudioRoom_MetaObject_Callback cb) { qaudioroom_metaobject_callback = cb; }
    inline void setQAudioRoom_Metacast_Callback(QAudioRoom_Metacast_Callback cb) { qaudioroom_metacast_callback = cb; }
    inline void setQAudioRoom_Metacall_Callback(QAudioRoom_Metacall_Callback cb) { qaudioroom_metacall_callback = cb; }
    inline void setQAudioRoom_Event_Callback(QAudioRoom_Event_Callback cb) { qaudioroom_event_callback = cb; }
    inline void setQAudioRoom_EventFilter_Callback(QAudioRoom_EventFilter_Callback cb) { qaudioroom_eventfilter_callback = cb; }
    inline void setQAudioRoom_TimerEvent_Callback(QAudioRoom_TimerEvent_Callback cb) { qaudioroom_timerevent_callback = cb; }
    inline void setQAudioRoom_ChildEvent_Callback(QAudioRoom_ChildEvent_Callback cb) { qaudioroom_childevent_callback = cb; }
    inline void setQAudioRoom_CustomEvent_Callback(QAudioRoom_CustomEvent_Callback cb) { qaudioroom_customevent_callback = cb; }
    inline void setQAudioRoom_ConnectNotify_Callback(QAudioRoom_ConnectNotify_Callback cb) { qaudioroom_connectnotify_callback = cb; }
    inline void setQAudioRoom_DisconnectNotify_Callback(QAudioRoom_DisconnectNotify_Callback cb) { qaudioroom_disconnectnotify_callback = cb; }
    inline void setQAudioRoom_Sender_Callback(QAudioRoom_Sender_Callback cb) { qaudioroom_sender_callback = cb; }
    inline void setQAudioRoom_SenderSignalIndex_Callback(QAudioRoom_SenderSignalIndex_Callback cb) { qaudioroom_sendersignalindex_callback = cb; }
    inline void setQAudioRoom_Receivers_Callback(QAudioRoom_Receivers_Callback cb) { qaudioroom_receivers_callback = cb; }
    inline void setQAudioRoom_IsSignalConnected_Callback(QAudioRoom_IsSignalConnected_Callback cb) { qaudioroom_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQAudioRoom_MetaObject_IsBase(bool value) const { qaudioroom_metaobject_isbase = value; }
    inline void setQAudioRoom_Metacast_IsBase(bool value) const { qaudioroom_metacast_isbase = value; }
    inline void setQAudioRoom_Metacall_IsBase(bool value) const { qaudioroom_metacall_isbase = value; }
    inline void setQAudioRoom_Event_IsBase(bool value) const { qaudioroom_event_isbase = value; }
    inline void setQAudioRoom_EventFilter_IsBase(bool value) const { qaudioroom_eventfilter_isbase = value; }
    inline void setQAudioRoom_TimerEvent_IsBase(bool value) const { qaudioroom_timerevent_isbase = value; }
    inline void setQAudioRoom_ChildEvent_IsBase(bool value) const { qaudioroom_childevent_isbase = value; }
    inline void setQAudioRoom_CustomEvent_IsBase(bool value) const { qaudioroom_customevent_isbase = value; }
    inline void setQAudioRoom_ConnectNotify_IsBase(bool value) const { qaudioroom_connectnotify_isbase = value; }
    inline void setQAudioRoom_DisconnectNotify_IsBase(bool value) const { qaudioroom_disconnectnotify_isbase = value; }
    inline void setQAudioRoom_Sender_IsBase(bool value) const { qaudioroom_sender_isbase = value; }
    inline void setQAudioRoom_SenderSignalIndex_IsBase(bool value) const { qaudioroom_sendersignalindex_isbase = value; }
    inline void setQAudioRoom_Receivers_IsBase(bool value) const { qaudioroom_receivers_isbase = value; }
    inline void setQAudioRoom_IsSignalConnected_IsBase(bool value) const { qaudioroom_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qaudioroom_metaobject_isbase) {
            qaudioroom_metaobject_isbase = false;
            return QAudioRoom::metaObject();
        }
        auto metaobject_cb = qaudioroom_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QAudioRoom::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qaudioroom_metacast_isbase) {
            qaudioroom_metacast_isbase = false;
            return QAudioRoom::qt_metacast(param1);
        }
        auto metacast_cb = qaudioroom_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QAudioRoom::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qaudioroom_metacall_isbase) {
            qaudioroom_metacall_isbase = false;
            return QAudioRoom::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qaudioroom_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QAudioRoom::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qaudioroom_event_isbase) {
            qaudioroom_event_isbase = false;
            return QAudioRoom::event(event);
        }
        auto event_cb = qaudioroom_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QAudioRoom::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qaudioroom_eventfilter_isbase) {
            qaudioroom_eventfilter_isbase = false;
            return QAudioRoom::eventFilter(watched, event);
        }
        auto eventfilter_cb = qaudioroom_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QAudioRoom::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qaudioroom_timerevent_isbase) {
            qaudioroom_timerevent_isbase = false;
            QAudioRoom::timerEvent(event);
            return;
        }
        auto timerevent_cb = qaudioroom_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        QAudioRoom::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qaudioroom_childevent_isbase) {
            qaudioroom_childevent_isbase = false;
            QAudioRoom::childEvent(event);
            return;
        }
        auto childevent_cb = qaudioroom_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        QAudioRoom::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qaudioroom_customevent_isbase) {
            qaudioroom_customevent_isbase = false;
            QAudioRoom::customEvent(event);
            return;
        }
        auto customevent_cb = qaudioroom_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        QAudioRoom::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qaudioroom_connectnotify_isbase) {
            qaudioroom_connectnotify_isbase = false;
            QAudioRoom::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qaudioroom_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        QAudioRoom::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qaudioroom_disconnectnotify_isbase) {
            qaudioroom_disconnectnotify_isbase = false;
            QAudioRoom::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qaudioroom_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        QAudioRoom::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qaudioroom_sender_isbase) {
            qaudioroom_sender_isbase = false;
            return QAudioRoom::sender();
        }
        auto sender_cb = qaudioroom_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QAudioRoom::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qaudioroom_sendersignalindex_isbase) {
            qaudioroom_sendersignalindex_isbase = false;
            return QAudioRoom::senderSignalIndex();
        }
        auto sendersignalindex_cb = qaudioroom_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QAudioRoom::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qaudioroom_receivers_isbase) {
            qaudioroom_receivers_isbase = false;
            return QAudioRoom::receivers(signal);
        }
        auto receivers_cb = qaudioroom_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QAudioRoom::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qaudioroom_issignalconnected_isbase) {
            qaudioroom_issignalconnected_isbase = false;
            return QAudioRoom::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qaudioroom_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QAudioRoom::isSignalConnected(signal);
    }

    // Friend functions
    friend void QAudioRoom_TimerEvent(QAudioRoom* self, QTimerEvent* event);
    friend void QAudioRoom_SuperTimerEvent(QAudioRoom* self, QTimerEvent* event);
    friend void QAudioRoom_ChildEvent(QAudioRoom* self, QChildEvent* event);
    friend void QAudioRoom_SuperChildEvent(QAudioRoom* self, QChildEvent* event);
    friend void QAudioRoom_CustomEvent(QAudioRoom* self, QEvent* event);
    friend void QAudioRoom_SuperCustomEvent(QAudioRoom* self, QEvent* event);
    friend void QAudioRoom_ConnectNotify(QAudioRoom* self, const QMetaMethod* signal);
    friend void QAudioRoom_SuperConnectNotify(QAudioRoom* self, const QMetaMethod* signal);
    friend void QAudioRoom_DisconnectNotify(QAudioRoom* self, const QMetaMethod* signal);
    friend void QAudioRoom_SuperDisconnectNotify(QAudioRoom* self, const QMetaMethod* signal);
    friend QObject* QAudioRoom_Sender(const QAudioRoom* self);
    friend QObject* QAudioRoom_SuperSender(const QAudioRoom* self);
    friend int QAudioRoom_SenderSignalIndex(const QAudioRoom* self);
    friend int QAudioRoom_SuperSenderSignalIndex(const QAudioRoom* self);
    friend int QAudioRoom_Receivers(const QAudioRoom* self, const char* signal);
    friend int QAudioRoom_SuperReceivers(const QAudioRoom* self, const char* signal);
    friend bool QAudioRoom_IsSignalConnected(const QAudioRoom* self, const QMetaMethod* signal);
    friend bool QAudioRoom_SuperIsSignalConnected(const QAudioRoom* self, const QMetaMethod* signal);
};

#endif
