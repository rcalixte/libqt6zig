#pragma once
#ifndef RESTRICTED_EXTRAS_CHARTS_LIBQVBARMODELMAPPER_HXX
#define RESTRICTED_EXTRAS_CHARTS_LIBQVBARMODELMAPPER_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QVBarModelMapper
class VirtualQVBarModelMapper final : public QVBarModelMapper {
  public:
    // Virtual class public types (including callbacks and access types)
    using QVBarModelMapper_MetaObject_Callback = QMetaObject* (*)(const QVBarModelMapper*);
    using QVBarModelMapper_Metacast_Callback = void* (*)(QVBarModelMapper*, const char*);
    using QVBarModelMapper_Metacall_Callback = int (*)(QVBarModelMapper*, int, int, void**);
    using QVBarModelMapper_Event_Callback = bool (*)(QVBarModelMapper*, QEvent*);
    using QVBarModelMapper_EventFilter_Callback = bool (*)(QVBarModelMapper*, QObject*, QEvent*);
    using QVBarModelMapper_TimerEvent_Callback = void (*)(QVBarModelMapper*, QTimerEvent*);
    using QVBarModelMapper_ChildEvent_Callback = void (*)(QVBarModelMapper*, QChildEvent*);
    using QVBarModelMapper_CustomEvent_Callback = void (*)(QVBarModelMapper*, QEvent*);
    using QVBarModelMapper_ConnectNotify_Callback = void (*)(QVBarModelMapper*, QMetaMethod*);
    using QVBarModelMapper_DisconnectNotify_Callback = void (*)(QVBarModelMapper*, QMetaMethod*);
    using QVBarModelMapper::count;
    using QVBarModelMapper::first;
    using QVBarModelMapper::firstBarSetSection;
    using QVBarModelMapper::isSignalConnected;
    using QVBarModelMapper::lastBarSetSection;
    using QVBarModelMapper::orientation;
    using QVBarModelMapper::receivers;
    using QVBarModelMapper::sender;
    using QVBarModelMapper::senderSignalIndex;
    using QVBarModelMapper::setCount;
    using QVBarModelMapper::setFirst;
    using QVBarModelMapper::setFirstBarSetSection;
    using QVBarModelMapper::setLastBarSetSection;
    using QVBarModelMapper::setOrientation;

    // Instance callback storage
    QVBarModelMapper_MetaObject_Callback qvbarmodelmapper_metaobject_callback = nullptr;
    QVBarModelMapper_Metacast_Callback qvbarmodelmapper_metacast_callback = nullptr;
    QVBarModelMapper_Metacall_Callback qvbarmodelmapper_metacall_callback = nullptr;
    QVBarModelMapper_Event_Callback qvbarmodelmapper_event_callback = nullptr;
    QVBarModelMapper_EventFilter_Callback qvbarmodelmapper_eventfilter_callback = nullptr;
    QVBarModelMapper_TimerEvent_Callback qvbarmodelmapper_timerevent_callback = nullptr;
    QVBarModelMapper_ChildEvent_Callback qvbarmodelmapper_childevent_callback = nullptr;
    QVBarModelMapper_CustomEvent_Callback qvbarmodelmapper_customevent_callback = nullptr;
    QVBarModelMapper_ConnectNotify_Callback qvbarmodelmapper_connectnotify_callback = nullptr;
    QVBarModelMapper_DisconnectNotify_Callback qvbarmodelmapper_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QVBarModelMapper {
        using QVBarModelMapper::childEvent;
        using QVBarModelMapper::connectNotify;
        using QVBarModelMapper::customEvent;
        using QVBarModelMapper::disconnectNotify;
        using QVBarModelMapper::timerEvent;
    };

    VirtualQVBarModelMapper() : QVBarModelMapper() {};
    VirtualQVBarModelMapper(QObject* parent) : QVBarModelMapper(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qvbarmodelmapper_metaobject_callback) {
            QMetaObject* callback_ret = qvbarmodelmapper_metaobject_callback(this);
            return callback_ret;
        }
        return QVBarModelMapper::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qvbarmodelmapper_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qvbarmodelmapper_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QVBarModelMapper::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qvbarmodelmapper_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qvbarmodelmapper_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QVBarModelMapper::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qvbarmodelmapper_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qvbarmodelmapper_event_callback(this, cbval1);
            return callback_ret;
        }
        return QVBarModelMapper::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qvbarmodelmapper_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qvbarmodelmapper_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QVBarModelMapper::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qvbarmodelmapper_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qvbarmodelmapper_timerevent_callback(this, cbval1);
            return;
        }
        QVBarModelMapper::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qvbarmodelmapper_childevent_callback) {
            QChildEvent* cbval1 = event;
            qvbarmodelmapper_childevent_callback(this, cbval1);
            return;
        }
        QVBarModelMapper::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qvbarmodelmapper_customevent_callback) {
            QEvent* cbval1 = event;
            qvbarmodelmapper_customevent_callback(this, cbval1);
            return;
        }
        QVBarModelMapper::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qvbarmodelmapper_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qvbarmodelmapper_connectnotify_callback(this, cbval1);
            return;
        }
        QVBarModelMapper::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qvbarmodelmapper_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qvbarmodelmapper_disconnectnotify_callback(this, cbval1);
            return;
        }
        QVBarModelMapper::disconnectNotify(signal);
    }

    // Friend functions
    friend void QVBarModelMapper_SuperTimerEvent(QVBarModelMapper* self, QTimerEvent* event);
    friend void QVBarModelMapper_SuperChildEvent(QVBarModelMapper* self, QChildEvent* event);
    friend void QVBarModelMapper_SuperCustomEvent(QVBarModelMapper* self, QEvent* event);
    friend void QVBarModelMapper_SuperConnectNotify(QVBarModelMapper* self, const QMetaMethod* signal);
    friend void QVBarModelMapper_SuperDisconnectNotify(QVBarModelMapper* self, const QMetaMethod* signal);
};

#endif
