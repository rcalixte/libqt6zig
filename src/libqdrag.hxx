#pragma once
#ifndef LIBQDRAG_HXX
#define LIBQDRAG_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QDrag
class VirtualQDrag final : public QDrag {
  public:
    // Virtual class public types (including callbacks and access types)
    using QDrag_MetaObject_Callback = QMetaObject* (*)(const QDrag*);
    using QDrag_Metacast_Callback = void* (*)(QDrag*, const char*);
    using QDrag_Metacall_Callback = int (*)(QDrag*, int, int, void**);
    using QDrag_Event_Callback = bool (*)(QDrag*, QEvent*);
    using QDrag_EventFilter_Callback = bool (*)(QDrag*, QObject*, QEvent*);
    using QDrag_TimerEvent_Callback = void (*)(QDrag*, QTimerEvent*);
    using QDrag_ChildEvent_Callback = void (*)(QDrag*, QChildEvent*);
    using QDrag_CustomEvent_Callback = void (*)(QDrag*, QEvent*);
    using QDrag_ConnectNotify_Callback = void (*)(QDrag*, QMetaMethod*);
    using QDrag_DisconnectNotify_Callback = void (*)(QDrag*, QMetaMethod*);
    using QDrag::isSignalConnected;
    using QDrag::receivers;
    using QDrag::sender;
    using QDrag::senderSignalIndex;

    // Instance callback storage
    QDrag_MetaObject_Callback qdrag_metaobject_callback = nullptr;
    QDrag_Metacast_Callback qdrag_metacast_callback = nullptr;
    QDrag_Metacall_Callback qdrag_metacall_callback = nullptr;
    QDrag_Event_Callback qdrag_event_callback = nullptr;
    QDrag_EventFilter_Callback qdrag_eventfilter_callback = nullptr;
    QDrag_TimerEvent_Callback qdrag_timerevent_callback = nullptr;
    QDrag_ChildEvent_Callback qdrag_childevent_callback = nullptr;
    QDrag_CustomEvent_Callback qdrag_customevent_callback = nullptr;
    QDrag_ConnectNotify_Callback qdrag_connectnotify_callback = nullptr;
    QDrag_DisconnectNotify_Callback qdrag_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QDrag {
        using QDrag::childEvent;
        using QDrag::connectNotify;
        using QDrag::customEvent;
        using QDrag::disconnectNotify;
        using QDrag::timerEvent;
    };

    VirtualQDrag(QObject* dragSource) : QDrag(dragSource) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qdrag_metaobject_callback) {
            QMetaObject* callback_ret = qdrag_metaobject_callback(this);
            return callback_ret;
        }
        return QDrag::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qdrag_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qdrag_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QDrag::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qdrag_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qdrag_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QDrag::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qdrag_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qdrag_event_callback(this, cbval1);
            return callback_ret;
        }
        return QDrag::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qdrag_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qdrag_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QDrag::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qdrag_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qdrag_timerevent_callback(this, cbval1);
            return;
        }
        QDrag::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qdrag_childevent_callback) {
            QChildEvent* cbval1 = event;
            qdrag_childevent_callback(this, cbval1);
            return;
        }
        QDrag::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qdrag_customevent_callback) {
            QEvent* cbval1 = event;
            qdrag_customevent_callback(this, cbval1);
            return;
        }
        QDrag::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qdrag_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qdrag_connectnotify_callback(this, cbval1);
            return;
        }
        QDrag::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qdrag_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qdrag_disconnectnotify_callback(this, cbval1);
            return;
        }
        QDrag::disconnectNotify(signal);
    }

    // Friend functions
    friend void QDrag_SuperTimerEvent(QDrag* self, QTimerEvent* event);
    friend void QDrag_SuperChildEvent(QDrag* self, QChildEvent* event);
    friend void QDrag_SuperCustomEvent(QDrag* self, QEvent* event);
    friend void QDrag_SuperConnectNotify(QDrag* self, const QMetaMethod* signal);
    friend void QDrag_SuperDisconnectNotify(QDrag* self, const QMetaMethod* signal);
};

#endif
