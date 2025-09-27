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

    ~VirtualQOpenGLVertexArrayObject() {
        qopenglvertexarrayobject_metacall_callback = nullptr;
        qopenglvertexarrayobject_event_callback = nullptr;
        qopenglvertexarrayobject_eventfilter_callback = nullptr;
        qopenglvertexarrayobject_timerevent_callback = nullptr;
        qopenglvertexarrayobject_childevent_callback = nullptr;
        qopenglvertexarrayobject_customevent_callback = nullptr;
        qopenglvertexarrayobject_connectnotify_callback = nullptr;
        qopenglvertexarrayobject_disconnectnotify_callback = nullptr;
        qopenglvertexarrayobject_sender_callback = nullptr;
        qopenglvertexarrayobject_sendersignalindex_callback = nullptr;
        qopenglvertexarrayobject_receivers_callback = nullptr;
        qopenglvertexarrayobject_issignalconnected_callback = nullptr;
    }

    // Callback setters
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
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qopenglvertexarrayobject_metacall_isbase) {
            qopenglvertexarrayobject_metacall_isbase = false;
            return QOpenGLVertexArrayObject::qt_metacall(param1, param2, param3);
        } else if (qopenglvertexarrayobject_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qopenglvertexarrayobject_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QOpenGLVertexArrayObject::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qopenglvertexarrayobject_event_isbase) {
            qopenglvertexarrayobject_event_isbase = false;
            return QOpenGLVertexArrayObject::event(event);
        } else if (qopenglvertexarrayobject_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qopenglvertexarrayobject_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QOpenGLVertexArrayObject::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qopenglvertexarrayobject_eventfilter_isbase) {
            qopenglvertexarrayobject_eventfilter_isbase = false;
            return QOpenGLVertexArrayObject::eventFilter(watched, event);
        } else if (qopenglvertexarrayobject_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qopenglvertexarrayobject_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QOpenGLVertexArrayObject::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qopenglvertexarrayobject_timerevent_isbase) {
            qopenglvertexarrayobject_timerevent_isbase = false;
            QOpenGLVertexArrayObject::timerEvent(event);
        } else if (qopenglvertexarrayobject_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qopenglvertexarrayobject_timerevent_callback(this, cbval1);
        } else {
            QOpenGLVertexArrayObject::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qopenglvertexarrayobject_childevent_isbase) {
            qopenglvertexarrayobject_childevent_isbase = false;
            QOpenGLVertexArrayObject::childEvent(event);
        } else if (qopenglvertexarrayobject_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qopenglvertexarrayobject_childevent_callback(this, cbval1);
        } else {
            QOpenGLVertexArrayObject::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qopenglvertexarrayobject_customevent_isbase) {
            qopenglvertexarrayobject_customevent_isbase = false;
            QOpenGLVertexArrayObject::customEvent(event);
        } else if (qopenglvertexarrayobject_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qopenglvertexarrayobject_customevent_callback(this, cbval1);
        } else {
            QOpenGLVertexArrayObject::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qopenglvertexarrayobject_connectnotify_isbase) {
            qopenglvertexarrayobject_connectnotify_isbase = false;
            QOpenGLVertexArrayObject::connectNotify(signal);
        } else if (qopenglvertexarrayobject_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qopenglvertexarrayobject_connectnotify_callback(this, cbval1);
        } else {
            QOpenGLVertexArrayObject::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qopenglvertexarrayobject_disconnectnotify_isbase) {
            qopenglvertexarrayobject_disconnectnotify_isbase = false;
            QOpenGLVertexArrayObject::disconnectNotify(signal);
        } else if (qopenglvertexarrayobject_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qopenglvertexarrayobject_disconnectnotify_callback(this, cbval1);
        } else {
            QOpenGLVertexArrayObject::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qopenglvertexarrayobject_sender_isbase) {
            qopenglvertexarrayobject_sender_isbase = false;
            return QOpenGLVertexArrayObject::sender();
        } else if (qopenglvertexarrayobject_sender_callback != nullptr) {
            QObject* callback_ret = qopenglvertexarrayobject_sender_callback();
            return callback_ret;
        } else {
            return QOpenGLVertexArrayObject::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qopenglvertexarrayobject_sendersignalindex_isbase) {
            qopenglvertexarrayobject_sendersignalindex_isbase = false;
            return QOpenGLVertexArrayObject::senderSignalIndex();
        } else if (qopenglvertexarrayobject_sendersignalindex_callback != nullptr) {
            int callback_ret = qopenglvertexarrayobject_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QOpenGLVertexArrayObject::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qopenglvertexarrayobject_receivers_isbase) {
            qopenglvertexarrayobject_receivers_isbase = false;
            return QOpenGLVertexArrayObject::receivers(signal);
        } else if (qopenglvertexarrayobject_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qopenglvertexarrayobject_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QOpenGLVertexArrayObject::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qopenglvertexarrayobject_issignalconnected_isbase) {
            qopenglvertexarrayobject_issignalconnected_isbase = false;
            return QOpenGLVertexArrayObject::isSignalConnected(signal);
        } else if (qopenglvertexarrayobject_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qopenglvertexarrayobject_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QOpenGLVertexArrayObject::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void QOpenGLVertexArrayObject_TimerEvent(QOpenGLVertexArrayObject* self, QTimerEvent* event);
    friend void QOpenGLVertexArrayObject_QBaseTimerEvent(QOpenGLVertexArrayObject* self, QTimerEvent* event);
    friend void QOpenGLVertexArrayObject_ChildEvent(QOpenGLVertexArrayObject* self, QChildEvent* event);
    friend void QOpenGLVertexArrayObject_QBaseChildEvent(QOpenGLVertexArrayObject* self, QChildEvent* event);
    friend void QOpenGLVertexArrayObject_CustomEvent(QOpenGLVertexArrayObject* self, QEvent* event);
    friend void QOpenGLVertexArrayObject_QBaseCustomEvent(QOpenGLVertexArrayObject* self, QEvent* event);
    friend void QOpenGLVertexArrayObject_ConnectNotify(QOpenGLVertexArrayObject* self, const QMetaMethod* signal);
    friend void QOpenGLVertexArrayObject_QBaseConnectNotify(QOpenGLVertexArrayObject* self, const QMetaMethod* signal);
    friend void QOpenGLVertexArrayObject_DisconnectNotify(QOpenGLVertexArrayObject* self, const QMetaMethod* signal);
    friend void QOpenGLVertexArrayObject_QBaseDisconnectNotify(QOpenGLVertexArrayObject* self, const QMetaMethod* signal);
    friend QObject* QOpenGLVertexArrayObject_Sender(const QOpenGLVertexArrayObject* self);
    friend QObject* QOpenGLVertexArrayObject_QBaseSender(const QOpenGLVertexArrayObject* self);
    friend int QOpenGLVertexArrayObject_SenderSignalIndex(const QOpenGLVertexArrayObject* self);
    friend int QOpenGLVertexArrayObject_QBaseSenderSignalIndex(const QOpenGLVertexArrayObject* self);
    friend int QOpenGLVertexArrayObject_Receivers(const QOpenGLVertexArrayObject* self, const char* signal);
    friend int QOpenGLVertexArrayObject_QBaseReceivers(const QOpenGLVertexArrayObject* self, const char* signal);
    friend bool QOpenGLVertexArrayObject_IsSignalConnected(const QOpenGLVertexArrayObject* self, const QMetaMethod* signal);
    friend bool QOpenGLVertexArrayObject_QBaseIsSignalConnected(const QOpenGLVertexArrayObject* self, const QMetaMethod* signal);
};

#endif
