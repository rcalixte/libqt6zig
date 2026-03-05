#pragma once
#ifndef SRC_OPENGLC_LIBVIRTUALQOPENGLVERTEXARRAYOBJECT_H
#define SRC_OPENGLC_LIBVIRTUALQOPENGLVERTEXARRAYOBJECT_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QOpenGLVertexArrayObject so that we can call protected methods
class VirtualQOpenGLVertexArrayObject final : public QOpenGLVertexArrayObject {

  public:
    // Virtual class boolean flag
    bool isVirtualQOpenGLVertexArrayObject = true;

    // Virtual class public types (including callbacks)
    using QOpenGLVertexArrayObject_MetaObject_Callback = QMetaObject* (*)();
    using QOpenGLVertexArrayObject_Metacast_Callback = void* (*)(QOpenGLVertexArrayObject*, const char*);
    using QOpenGLVertexArrayObject_Metacall_Callback = int (*)(QOpenGLVertexArrayObject*, int, int, void**);
    using QOpenGLVertexArrayObject_Event_Callback = bool (*)(QOpenGLVertexArrayObject*, QEvent*);
    using QOpenGLVertexArrayObject_EventFilter_Callback = bool (*)(QOpenGLVertexArrayObject*, QObject*, QEvent*);
    using QOpenGLVertexArrayObject_TimerEvent_Callback = void (*)(QOpenGLVertexArrayObject*, QTimerEvent*);
    using QOpenGLVertexArrayObject_ChildEvent_Callback = void (*)(QOpenGLVertexArrayObject*, QChildEvent*);
    using QOpenGLVertexArrayObject_CustomEvent_Callback = void (*)(QOpenGLVertexArrayObject*, QEvent*);
    using QOpenGLVertexArrayObject_ConnectNotify_Callback = void (*)(QOpenGLVertexArrayObject*, QMetaMethod*);
    using QOpenGLVertexArrayObject_DisconnectNotify_Callback = void (*)(QOpenGLVertexArrayObject*, QMetaMethod*);
    using QOpenGLVertexArrayObject_Sender_Callback = QObject* (*)();
    using QOpenGLVertexArrayObject_SenderSignalIndex_Callback = int (*)();
    using QOpenGLVertexArrayObject_Receivers_Callback = int (*)(const QOpenGLVertexArrayObject*, const char*);
    using QOpenGLVertexArrayObject_IsSignalConnected_Callback = bool (*)(const QOpenGLVertexArrayObject*, QMetaMethod*);

  protected:
    // Instance callback storage
    QOpenGLVertexArrayObject_MetaObject_Callback qopenglvertexarrayobject_metaobject_callback = nullptr;
    QOpenGLVertexArrayObject_Metacast_Callback qopenglvertexarrayobject_metacast_callback = nullptr;
    QOpenGLVertexArrayObject_Metacall_Callback qopenglvertexarrayobject_metacall_callback = nullptr;
    QOpenGLVertexArrayObject_Event_Callback qopenglvertexarrayobject_event_callback = nullptr;
    QOpenGLVertexArrayObject_EventFilter_Callback qopenglvertexarrayobject_eventfilter_callback = nullptr;
    QOpenGLVertexArrayObject_TimerEvent_Callback qopenglvertexarrayobject_timerevent_callback = nullptr;
    QOpenGLVertexArrayObject_ChildEvent_Callback qopenglvertexarrayobject_childevent_callback = nullptr;
    QOpenGLVertexArrayObject_CustomEvent_Callback qopenglvertexarrayobject_customevent_callback = nullptr;
    QOpenGLVertexArrayObject_ConnectNotify_Callback qopenglvertexarrayobject_connectnotify_callback = nullptr;
    QOpenGLVertexArrayObject_DisconnectNotify_Callback qopenglvertexarrayobject_disconnectnotify_callback = nullptr;
    QOpenGLVertexArrayObject_Sender_Callback qopenglvertexarrayobject_sender_callback = nullptr;
    QOpenGLVertexArrayObject_SenderSignalIndex_Callback qopenglvertexarrayobject_sendersignalindex_callback = nullptr;
    QOpenGLVertexArrayObject_Receivers_Callback qopenglvertexarrayobject_receivers_callback = nullptr;
    QOpenGLVertexArrayObject_IsSignalConnected_Callback qopenglvertexarrayobject_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qopenglvertexarrayobject_metaobject_isbase = false;
    mutable bool qopenglvertexarrayobject_metacast_isbase = false;
    mutable bool qopenglvertexarrayobject_metacall_isbase = false;
    mutable bool qopenglvertexarrayobject_event_isbase = false;
    mutable bool qopenglvertexarrayobject_eventfilter_isbase = false;
    mutable bool qopenglvertexarrayobject_timerevent_isbase = false;
    mutable bool qopenglvertexarrayobject_childevent_isbase = false;
    mutable bool qopenglvertexarrayobject_customevent_isbase = false;
    mutable bool qopenglvertexarrayobject_connectnotify_isbase = false;
    mutable bool qopenglvertexarrayobject_disconnectnotify_isbase = false;
    mutable bool qopenglvertexarrayobject_sender_isbase = false;
    mutable bool qopenglvertexarrayobject_sendersignalindex_isbase = false;
    mutable bool qopenglvertexarrayobject_receivers_isbase = false;
    mutable bool qopenglvertexarrayobject_issignalconnected_isbase = false;

  public:
    VirtualQOpenGLVertexArrayObject() : QOpenGLVertexArrayObject() {};
    VirtualQOpenGLVertexArrayObject(QObject* parent) : QOpenGLVertexArrayObject(parent) {};

    // Callback setters
    inline void setQOpenGLVertexArrayObject_MetaObject_Callback(QOpenGLVertexArrayObject_MetaObject_Callback cb) { qopenglvertexarrayobject_metaobject_callback = cb; }
    inline void setQOpenGLVertexArrayObject_Metacast_Callback(QOpenGLVertexArrayObject_Metacast_Callback cb) { qopenglvertexarrayobject_metacast_callback = cb; }
    inline void setQOpenGLVertexArrayObject_Metacall_Callback(QOpenGLVertexArrayObject_Metacall_Callback cb) { qopenglvertexarrayobject_metacall_callback = cb; }
    inline void setQOpenGLVertexArrayObject_Event_Callback(QOpenGLVertexArrayObject_Event_Callback cb) { qopenglvertexarrayobject_event_callback = cb; }
    inline void setQOpenGLVertexArrayObject_EventFilter_Callback(QOpenGLVertexArrayObject_EventFilter_Callback cb) { qopenglvertexarrayobject_eventfilter_callback = cb; }
    inline void setQOpenGLVertexArrayObject_TimerEvent_Callback(QOpenGLVertexArrayObject_TimerEvent_Callback cb) { qopenglvertexarrayobject_timerevent_callback = cb; }
    inline void setQOpenGLVertexArrayObject_ChildEvent_Callback(QOpenGLVertexArrayObject_ChildEvent_Callback cb) { qopenglvertexarrayobject_childevent_callback = cb; }
    inline void setQOpenGLVertexArrayObject_CustomEvent_Callback(QOpenGLVertexArrayObject_CustomEvent_Callback cb) { qopenglvertexarrayobject_customevent_callback = cb; }
    inline void setQOpenGLVertexArrayObject_ConnectNotify_Callback(QOpenGLVertexArrayObject_ConnectNotify_Callback cb) { qopenglvertexarrayobject_connectnotify_callback = cb; }
    inline void setQOpenGLVertexArrayObject_DisconnectNotify_Callback(QOpenGLVertexArrayObject_DisconnectNotify_Callback cb) { qopenglvertexarrayobject_disconnectnotify_callback = cb; }
    inline void setQOpenGLVertexArrayObject_Sender_Callback(QOpenGLVertexArrayObject_Sender_Callback cb) { qopenglvertexarrayobject_sender_callback = cb; }
    inline void setQOpenGLVertexArrayObject_SenderSignalIndex_Callback(QOpenGLVertexArrayObject_SenderSignalIndex_Callback cb) { qopenglvertexarrayobject_sendersignalindex_callback = cb; }
    inline void setQOpenGLVertexArrayObject_Receivers_Callback(QOpenGLVertexArrayObject_Receivers_Callback cb) { qopenglvertexarrayobject_receivers_callback = cb; }
    inline void setQOpenGLVertexArrayObject_IsSignalConnected_Callback(QOpenGLVertexArrayObject_IsSignalConnected_Callback cb) { qopenglvertexarrayobject_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQOpenGLVertexArrayObject_MetaObject_IsBase(bool value) const { qopenglvertexarrayobject_metaobject_isbase = value; }
    inline void setQOpenGLVertexArrayObject_Metacast_IsBase(bool value) const { qopenglvertexarrayobject_metacast_isbase = value; }
    inline void setQOpenGLVertexArrayObject_Metacall_IsBase(bool value) const { qopenglvertexarrayobject_metacall_isbase = value; }
    inline void setQOpenGLVertexArrayObject_Event_IsBase(bool value) const { qopenglvertexarrayobject_event_isbase = value; }
    inline void setQOpenGLVertexArrayObject_EventFilter_IsBase(bool value) const { qopenglvertexarrayobject_eventfilter_isbase = value; }
    inline void setQOpenGLVertexArrayObject_TimerEvent_IsBase(bool value) const { qopenglvertexarrayobject_timerevent_isbase = value; }
    inline void setQOpenGLVertexArrayObject_ChildEvent_IsBase(bool value) const { qopenglvertexarrayobject_childevent_isbase = value; }
    inline void setQOpenGLVertexArrayObject_CustomEvent_IsBase(bool value) const { qopenglvertexarrayobject_customevent_isbase = value; }
    inline void setQOpenGLVertexArrayObject_ConnectNotify_IsBase(bool value) const { qopenglvertexarrayobject_connectnotify_isbase = value; }
    inline void setQOpenGLVertexArrayObject_DisconnectNotify_IsBase(bool value) const { qopenglvertexarrayobject_disconnectnotify_isbase = value; }
    inline void setQOpenGLVertexArrayObject_Sender_IsBase(bool value) const { qopenglvertexarrayobject_sender_isbase = value; }
    inline void setQOpenGLVertexArrayObject_SenderSignalIndex_IsBase(bool value) const { qopenglvertexarrayobject_sendersignalindex_isbase = value; }
    inline void setQOpenGLVertexArrayObject_Receivers_IsBase(bool value) const { qopenglvertexarrayobject_receivers_isbase = value; }
    inline void setQOpenGLVertexArrayObject_IsSignalConnected_IsBase(bool value) const { qopenglvertexarrayobject_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qopenglvertexarrayobject_metaobject_isbase) {
            qopenglvertexarrayobject_metaobject_isbase = false;
            return QOpenGLVertexArrayObject::metaObject();
        }
        auto metaobject_cb = qopenglvertexarrayobject_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QOpenGLVertexArrayObject::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qopenglvertexarrayobject_metacast_isbase) {
            qopenglvertexarrayobject_metacast_isbase = false;
            return QOpenGLVertexArrayObject::qt_metacast(param1);
        }
        auto metacast_cb = qopenglvertexarrayobject_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QOpenGLVertexArrayObject::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qopenglvertexarrayobject_metacall_isbase) {
            qopenglvertexarrayobject_metacall_isbase = false;
            return QOpenGLVertexArrayObject::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qopenglvertexarrayobject_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QOpenGLVertexArrayObject::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qopenglvertexarrayobject_event_isbase) {
            qopenglvertexarrayobject_event_isbase = false;
            return QOpenGLVertexArrayObject::event(event);
        }
        auto event_cb = qopenglvertexarrayobject_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QOpenGLVertexArrayObject::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qopenglvertexarrayobject_eventfilter_isbase) {
            qopenglvertexarrayobject_eventfilter_isbase = false;
            return QOpenGLVertexArrayObject::eventFilter(watched, event);
        }
        auto eventfilter_cb = qopenglvertexarrayobject_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QOpenGLVertexArrayObject::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qopenglvertexarrayobject_timerevent_isbase) {
            qopenglvertexarrayobject_timerevent_isbase = false;
            QOpenGLVertexArrayObject::timerEvent(event);
            return;
        }
        auto timerevent_cb = qopenglvertexarrayobject_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        QOpenGLVertexArrayObject::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qopenglvertexarrayobject_childevent_isbase) {
            qopenglvertexarrayobject_childevent_isbase = false;
            QOpenGLVertexArrayObject::childEvent(event);
            return;
        }
        auto childevent_cb = qopenglvertexarrayobject_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        QOpenGLVertexArrayObject::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qopenglvertexarrayobject_customevent_isbase) {
            qopenglvertexarrayobject_customevent_isbase = false;
            QOpenGLVertexArrayObject::customEvent(event);
            return;
        }
        auto customevent_cb = qopenglvertexarrayobject_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        QOpenGLVertexArrayObject::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qopenglvertexarrayobject_connectnotify_isbase) {
            qopenglvertexarrayobject_connectnotify_isbase = false;
            QOpenGLVertexArrayObject::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qopenglvertexarrayobject_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        QOpenGLVertexArrayObject::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qopenglvertexarrayobject_disconnectnotify_isbase) {
            qopenglvertexarrayobject_disconnectnotify_isbase = false;
            QOpenGLVertexArrayObject::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qopenglvertexarrayobject_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        QOpenGLVertexArrayObject::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qopenglvertexarrayobject_sender_isbase) {
            qopenglvertexarrayobject_sender_isbase = false;
            return QOpenGLVertexArrayObject::sender();
        }
        auto sender_cb = qopenglvertexarrayobject_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QOpenGLVertexArrayObject::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qopenglvertexarrayobject_sendersignalindex_isbase) {
            qopenglvertexarrayobject_sendersignalindex_isbase = false;
            return QOpenGLVertexArrayObject::senderSignalIndex();
        }
        auto sendersignalindex_cb = qopenglvertexarrayobject_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QOpenGLVertexArrayObject::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qopenglvertexarrayobject_receivers_isbase) {
            qopenglvertexarrayobject_receivers_isbase = false;
            return QOpenGLVertexArrayObject::receivers(signal);
        }
        auto receivers_cb = qopenglvertexarrayobject_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QOpenGLVertexArrayObject::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qopenglvertexarrayobject_issignalconnected_isbase) {
            qopenglvertexarrayobject_issignalconnected_isbase = false;
            return QOpenGLVertexArrayObject::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qopenglvertexarrayobject_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QOpenGLVertexArrayObject::isSignalConnected(signal);
    }

    // Friend functions
    friend void QOpenGLVertexArrayObject_TimerEvent(QOpenGLVertexArrayObject* self, QTimerEvent* event);
    friend void QOpenGLVertexArrayObject_SuperTimerEvent(QOpenGLVertexArrayObject* self, QTimerEvent* event);
    friend void QOpenGLVertexArrayObject_ChildEvent(QOpenGLVertexArrayObject* self, QChildEvent* event);
    friend void QOpenGLVertexArrayObject_SuperChildEvent(QOpenGLVertexArrayObject* self, QChildEvent* event);
    friend void QOpenGLVertexArrayObject_CustomEvent(QOpenGLVertexArrayObject* self, QEvent* event);
    friend void QOpenGLVertexArrayObject_SuperCustomEvent(QOpenGLVertexArrayObject* self, QEvent* event);
    friend void QOpenGLVertexArrayObject_ConnectNotify(QOpenGLVertexArrayObject* self, const QMetaMethod* signal);
    friend void QOpenGLVertexArrayObject_SuperConnectNotify(QOpenGLVertexArrayObject* self, const QMetaMethod* signal);
    friend void QOpenGLVertexArrayObject_DisconnectNotify(QOpenGLVertexArrayObject* self, const QMetaMethod* signal);
    friend void QOpenGLVertexArrayObject_SuperDisconnectNotify(QOpenGLVertexArrayObject* self, const QMetaMethod* signal);
    friend QObject* QOpenGLVertexArrayObject_Sender(const QOpenGLVertexArrayObject* self);
    friend QObject* QOpenGLVertexArrayObject_SuperSender(const QOpenGLVertexArrayObject* self);
    friend int QOpenGLVertexArrayObject_SenderSignalIndex(const QOpenGLVertexArrayObject* self);
    friend int QOpenGLVertexArrayObject_SuperSenderSignalIndex(const QOpenGLVertexArrayObject* self);
    friend int QOpenGLVertexArrayObject_Receivers(const QOpenGLVertexArrayObject* self, const char* signal);
    friend int QOpenGLVertexArrayObject_SuperReceivers(const QOpenGLVertexArrayObject* self, const char* signal);
    friend bool QOpenGLVertexArrayObject_IsSignalConnected(const QOpenGLVertexArrayObject* self, const QMetaMethod* signal);
    friend bool QOpenGLVertexArrayObject_SuperIsSignalConnected(const QOpenGLVertexArrayObject* self, const QMetaMethod* signal);
};

#endif
