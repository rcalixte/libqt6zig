#pragma once
#ifndef OPENGL_LIBQOPENGLVERTEXARRAYOBJECT_HXX
#define OPENGL_LIBQOPENGLVERTEXARRAYOBJECT_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QOpenGLVertexArrayObject
class VirtualQOpenGLVertexArrayObject final : public QOpenGLVertexArrayObject {
  public:
    // Virtual class public types (including callbacks and access types)
    using QOpenGLVertexArrayObject_MetaObject_Callback = QMetaObject* (*)(const QOpenGLVertexArrayObject*);
    using QOpenGLVertexArrayObject_Metacast_Callback = void* (*)(QOpenGLVertexArrayObject*, const char*);
    using QOpenGLVertexArrayObject_Metacall_Callback = int (*)(QOpenGLVertexArrayObject*, int, int, void**);
    using QOpenGLVertexArrayObject_Event_Callback = bool (*)(QOpenGLVertexArrayObject*, QEvent*);
    using QOpenGLVertexArrayObject_EventFilter_Callback = bool (*)(QOpenGLVertexArrayObject*, QObject*, QEvent*);
    using QOpenGLVertexArrayObject_TimerEvent_Callback = void (*)(QOpenGLVertexArrayObject*, QTimerEvent*);
    using QOpenGLVertexArrayObject_ChildEvent_Callback = void (*)(QOpenGLVertexArrayObject*, QChildEvent*);
    using QOpenGLVertexArrayObject_CustomEvent_Callback = void (*)(QOpenGLVertexArrayObject*, QEvent*);
    using QOpenGLVertexArrayObject_ConnectNotify_Callback = void (*)(QOpenGLVertexArrayObject*, QMetaMethod*);
    using QOpenGLVertexArrayObject_DisconnectNotify_Callback = void (*)(QOpenGLVertexArrayObject*, QMetaMethod*);
    using QOpenGLVertexArrayObject::isSignalConnected;
    using QOpenGLVertexArrayObject::receivers;
    using QOpenGLVertexArrayObject::sender;
    using QOpenGLVertexArrayObject::senderSignalIndex;

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

    // Access struct
    struct Base : QOpenGLVertexArrayObject {
        using QOpenGLVertexArrayObject::childEvent;
        using QOpenGLVertexArrayObject::connectNotify;
        using QOpenGLVertexArrayObject::customEvent;
        using QOpenGLVertexArrayObject::disconnectNotify;
        using QOpenGLVertexArrayObject::timerEvent;
    };

    VirtualQOpenGLVertexArrayObject() : QOpenGLVertexArrayObject() {};
    VirtualQOpenGLVertexArrayObject(QObject* parent) : QOpenGLVertexArrayObject(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qopenglvertexarrayobject_metaobject_callback) {
            QMetaObject* callback_ret = qopenglvertexarrayobject_metaobject_callback(this);
            return callback_ret;
        }
        return QOpenGLVertexArrayObject::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qopenglvertexarrayobject_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qopenglvertexarrayobject_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QOpenGLVertexArrayObject::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qopenglvertexarrayobject_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qopenglvertexarrayobject_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QOpenGLVertexArrayObject::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qopenglvertexarrayobject_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qopenglvertexarrayobject_event_callback(this, cbval1);
            return callback_ret;
        }
        return QOpenGLVertexArrayObject::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qopenglvertexarrayobject_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qopenglvertexarrayobject_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QOpenGLVertexArrayObject::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qopenglvertexarrayobject_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qopenglvertexarrayobject_timerevent_callback(this, cbval1);
            return;
        }
        QOpenGLVertexArrayObject::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qopenglvertexarrayobject_childevent_callback) {
            QChildEvent* cbval1 = event;
            qopenglvertexarrayobject_childevent_callback(this, cbval1);
            return;
        }
        QOpenGLVertexArrayObject::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qopenglvertexarrayobject_customevent_callback) {
            QEvent* cbval1 = event;
            qopenglvertexarrayobject_customevent_callback(this, cbval1);
            return;
        }
        QOpenGLVertexArrayObject::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qopenglvertexarrayobject_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qopenglvertexarrayobject_connectnotify_callback(this, cbval1);
            return;
        }
        QOpenGLVertexArrayObject::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qopenglvertexarrayobject_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qopenglvertexarrayobject_disconnectnotify_callback(this, cbval1);
            return;
        }
        QOpenGLVertexArrayObject::disconnectNotify(signal);
    }

    // Friend functions
    friend void QOpenGLVertexArrayObject_SuperTimerEvent(QOpenGLVertexArrayObject* self, QTimerEvent* event);
    friend void QOpenGLVertexArrayObject_SuperChildEvent(QOpenGLVertexArrayObject* self, QChildEvent* event);
    friend void QOpenGLVertexArrayObject_SuperCustomEvent(QOpenGLVertexArrayObject* self, QEvent* event);
    friend void QOpenGLVertexArrayObject_SuperConnectNotify(QOpenGLVertexArrayObject* self, const QMetaMethod* signal);
    friend void QOpenGLVertexArrayObject_SuperDisconnectNotify(QOpenGLVertexArrayObject* self, const QMetaMethod* signal);
};

#endif
