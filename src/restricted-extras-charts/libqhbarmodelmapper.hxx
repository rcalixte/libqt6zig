#pragma once
#ifndef RESTRICTED_EXTRAS_CHARTS_LIBQHBARMODELMAPPER_HXX
#define RESTRICTED_EXTRAS_CHARTS_LIBQHBARMODELMAPPER_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QHBarModelMapper
class VirtualQHBarModelMapper final : public QHBarModelMapper {
  public:
    // Virtual class public types (including callbacks and access types)
    using QHBarModelMapper_MetaObject_Callback = QMetaObject* (*)(const QHBarModelMapper*);
    using QHBarModelMapper_Metacast_Callback = void* (*)(QHBarModelMapper*, const char*);
    using QHBarModelMapper_Metacall_Callback = int (*)(QHBarModelMapper*, int, int, void**);
    using QHBarModelMapper_Event_Callback = bool (*)(QHBarModelMapper*, QEvent*);
    using QHBarModelMapper_EventFilter_Callback = bool (*)(QHBarModelMapper*, QObject*, QEvent*);
    using QHBarModelMapper_TimerEvent_Callback = void (*)(QHBarModelMapper*, QTimerEvent*);
    using QHBarModelMapper_ChildEvent_Callback = void (*)(QHBarModelMapper*, QChildEvent*);
    using QHBarModelMapper_CustomEvent_Callback = void (*)(QHBarModelMapper*, QEvent*);
    using QHBarModelMapper_ConnectNotify_Callback = void (*)(QHBarModelMapper*, QMetaMethod*);
    using QHBarModelMapper_DisconnectNotify_Callback = void (*)(QHBarModelMapper*, QMetaMethod*);
    using QHBarModelMapper::count;
    using QHBarModelMapper::first;
    using QHBarModelMapper::firstBarSetSection;
    using QHBarModelMapper::isSignalConnected;
    using QHBarModelMapper::lastBarSetSection;
    using QHBarModelMapper::orientation;
    using QHBarModelMapper::receivers;
    using QHBarModelMapper::sender;
    using QHBarModelMapper::senderSignalIndex;
    using QHBarModelMapper::setCount;
    using QHBarModelMapper::setFirst;
    using QHBarModelMapper::setFirstBarSetSection;
    using QHBarModelMapper::setLastBarSetSection;
    using QHBarModelMapper::setOrientation;

    // Instance callback storage
    QHBarModelMapper_MetaObject_Callback qhbarmodelmapper_metaobject_callback = nullptr;
    QHBarModelMapper_Metacast_Callback qhbarmodelmapper_metacast_callback = nullptr;
    QHBarModelMapper_Metacall_Callback qhbarmodelmapper_metacall_callback = nullptr;
    QHBarModelMapper_Event_Callback qhbarmodelmapper_event_callback = nullptr;
    QHBarModelMapper_EventFilter_Callback qhbarmodelmapper_eventfilter_callback = nullptr;
    QHBarModelMapper_TimerEvent_Callback qhbarmodelmapper_timerevent_callback = nullptr;
    QHBarModelMapper_ChildEvent_Callback qhbarmodelmapper_childevent_callback = nullptr;
    QHBarModelMapper_CustomEvent_Callback qhbarmodelmapper_customevent_callback = nullptr;
    QHBarModelMapper_ConnectNotify_Callback qhbarmodelmapper_connectnotify_callback = nullptr;
    QHBarModelMapper_DisconnectNotify_Callback qhbarmodelmapper_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QHBarModelMapper {
        using QHBarModelMapper::childEvent;
        using QHBarModelMapper::connectNotify;
        using QHBarModelMapper::customEvent;
        using QHBarModelMapper::disconnectNotify;
        using QHBarModelMapper::timerEvent;
    };

    VirtualQHBarModelMapper() : QHBarModelMapper() {};
    VirtualQHBarModelMapper(QObject* parent) : QHBarModelMapper(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qhbarmodelmapper_metaobject_callback) {
            QMetaObject* callback_ret = qhbarmodelmapper_metaobject_callback(this);
            return callback_ret;
        }
        return QHBarModelMapper::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qhbarmodelmapper_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qhbarmodelmapper_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QHBarModelMapper::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qhbarmodelmapper_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qhbarmodelmapper_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QHBarModelMapper::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qhbarmodelmapper_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qhbarmodelmapper_event_callback(this, cbval1);
            return callback_ret;
        }
        return QHBarModelMapper::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qhbarmodelmapper_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qhbarmodelmapper_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QHBarModelMapper::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qhbarmodelmapper_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qhbarmodelmapper_timerevent_callback(this, cbval1);
            return;
        }
        QHBarModelMapper::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qhbarmodelmapper_childevent_callback) {
            QChildEvent* cbval1 = event;
            qhbarmodelmapper_childevent_callback(this, cbval1);
            return;
        }
        QHBarModelMapper::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qhbarmodelmapper_customevent_callback) {
            QEvent* cbval1 = event;
            qhbarmodelmapper_customevent_callback(this, cbval1);
            return;
        }
        QHBarModelMapper::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qhbarmodelmapper_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qhbarmodelmapper_connectnotify_callback(this, cbval1);
            return;
        }
        QHBarModelMapper::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qhbarmodelmapper_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qhbarmodelmapper_disconnectnotify_callback(this, cbval1);
            return;
        }
        QHBarModelMapper::disconnectNotify(signal);
    }

    // Friend functions
    friend void QHBarModelMapper_SuperTimerEvent(QHBarModelMapper* self, QTimerEvent* event);
    friend void QHBarModelMapper_SuperChildEvent(QHBarModelMapper* self, QChildEvent* event);
    friend void QHBarModelMapper_SuperCustomEvent(QHBarModelMapper* self, QEvent* event);
    friend void QHBarModelMapper_SuperConnectNotify(QHBarModelMapper* self, const QMetaMethod* signal);
    friend void QHBarModelMapper_SuperDisconnectNotify(QHBarModelMapper* self, const QMetaMethod* signal);
};

#endif
