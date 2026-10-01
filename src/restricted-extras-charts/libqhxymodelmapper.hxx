#pragma once
#ifndef RESTRICTED_EXTRAS_CHARTS_LIBQHXYMODELMAPPER_HXX
#define RESTRICTED_EXTRAS_CHARTS_LIBQHXYMODELMAPPER_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QHXYModelMapper
class VirtualQHXYModelMapper final : public QHXYModelMapper {
  public:
    // Virtual class public types (including callbacks and access types)
    using QHXYModelMapper_MetaObject_Callback = QMetaObject* (*)(const QHXYModelMapper*);
    using QHXYModelMapper_Metacast_Callback = void* (*)(QHXYModelMapper*, const char*);
    using QHXYModelMapper_Metacall_Callback = int (*)(QHXYModelMapper*, int, int, void**);
    using QHXYModelMapper_Event_Callback = bool (*)(QHXYModelMapper*, QEvent*);
    using QHXYModelMapper_EventFilter_Callback = bool (*)(QHXYModelMapper*, QObject*, QEvent*);
    using QHXYModelMapper_TimerEvent_Callback = void (*)(QHXYModelMapper*, QTimerEvent*);
    using QHXYModelMapper_ChildEvent_Callback = void (*)(QHXYModelMapper*, QChildEvent*);
    using QHXYModelMapper_CustomEvent_Callback = void (*)(QHXYModelMapper*, QEvent*);
    using QHXYModelMapper_ConnectNotify_Callback = void (*)(QHXYModelMapper*, QMetaMethod*);
    using QHXYModelMapper_DisconnectNotify_Callback = void (*)(QHXYModelMapper*, QMetaMethod*);
    using QHXYModelMapper::count;
    using QHXYModelMapper::first;
    using QHXYModelMapper::isSignalConnected;
    using QHXYModelMapper::orientation;
    using QHXYModelMapper::receivers;
    using QHXYModelMapper::sender;
    using QHXYModelMapper::senderSignalIndex;
    using QHXYModelMapper::setCount;
    using QHXYModelMapper::setFirst;
    using QHXYModelMapper::setOrientation;
    using QHXYModelMapper::setXSection;
    using QHXYModelMapper::setYSection;
    using QHXYModelMapper::xSection;
    using QHXYModelMapper::ySection;

    // Instance callback storage
    QHXYModelMapper_MetaObject_Callback qhxymodelmapper_metaobject_callback = nullptr;
    QHXYModelMapper_Metacast_Callback qhxymodelmapper_metacast_callback = nullptr;
    QHXYModelMapper_Metacall_Callback qhxymodelmapper_metacall_callback = nullptr;
    QHXYModelMapper_Event_Callback qhxymodelmapper_event_callback = nullptr;
    QHXYModelMapper_EventFilter_Callback qhxymodelmapper_eventfilter_callback = nullptr;
    QHXYModelMapper_TimerEvent_Callback qhxymodelmapper_timerevent_callback = nullptr;
    QHXYModelMapper_ChildEvent_Callback qhxymodelmapper_childevent_callback = nullptr;
    QHXYModelMapper_CustomEvent_Callback qhxymodelmapper_customevent_callback = nullptr;
    QHXYModelMapper_ConnectNotify_Callback qhxymodelmapper_connectnotify_callback = nullptr;
    QHXYModelMapper_DisconnectNotify_Callback qhxymodelmapper_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QHXYModelMapper {
        using QHXYModelMapper::childEvent;
        using QHXYModelMapper::connectNotify;
        using QHXYModelMapper::customEvent;
        using QHXYModelMapper::disconnectNotify;
        using QHXYModelMapper::timerEvent;
    };

    VirtualQHXYModelMapper() : QHXYModelMapper() {};
    VirtualQHXYModelMapper(QObject* parent) : QHXYModelMapper(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qhxymodelmapper_metaobject_callback) {
            QMetaObject* callback_ret = qhxymodelmapper_metaobject_callback(this);
            return callback_ret;
        }
        return QHXYModelMapper::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qhxymodelmapper_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qhxymodelmapper_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QHXYModelMapper::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qhxymodelmapper_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qhxymodelmapper_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QHXYModelMapper::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qhxymodelmapper_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qhxymodelmapper_event_callback(this, cbval1);
            return callback_ret;
        }
        return QHXYModelMapper::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qhxymodelmapper_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qhxymodelmapper_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QHXYModelMapper::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qhxymodelmapper_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qhxymodelmapper_timerevent_callback(this, cbval1);
            return;
        }
        QHXYModelMapper::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qhxymodelmapper_childevent_callback) {
            QChildEvent* cbval1 = event;
            qhxymodelmapper_childevent_callback(this, cbval1);
            return;
        }
        QHXYModelMapper::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qhxymodelmapper_customevent_callback) {
            QEvent* cbval1 = event;
            qhxymodelmapper_customevent_callback(this, cbval1);
            return;
        }
        QHXYModelMapper::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qhxymodelmapper_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qhxymodelmapper_connectnotify_callback(this, cbval1);
            return;
        }
        QHXYModelMapper::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qhxymodelmapper_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qhxymodelmapper_disconnectnotify_callback(this, cbval1);
            return;
        }
        QHXYModelMapper::disconnectNotify(signal);
    }

    // Friend functions
    friend void QHXYModelMapper_SuperTimerEvent(QHXYModelMapper* self, QTimerEvent* event);
    friend void QHXYModelMapper_SuperChildEvent(QHXYModelMapper* self, QChildEvent* event);
    friend void QHXYModelMapper_SuperCustomEvent(QHXYModelMapper* self, QEvent* event);
    friend void QHXYModelMapper_SuperConnectNotify(QHXYModelMapper* self, const QMetaMethod* signal);
    friend void QHXYModelMapper_SuperDisconnectNotify(QHXYModelMapper* self, const QMetaMethod* signal);
};

#endif
