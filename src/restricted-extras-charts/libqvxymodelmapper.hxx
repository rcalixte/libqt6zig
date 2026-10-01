#pragma once
#ifndef RESTRICTED_EXTRAS_CHARTS_LIBQVXYMODELMAPPER_HXX
#define RESTRICTED_EXTRAS_CHARTS_LIBQVXYMODELMAPPER_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QVXYModelMapper
class VirtualQVXYModelMapper final : public QVXYModelMapper {
  public:
    // Virtual class public types (including callbacks and access types)
    using QVXYModelMapper_MetaObject_Callback = QMetaObject* (*)(const QVXYModelMapper*);
    using QVXYModelMapper_Metacast_Callback = void* (*)(QVXYModelMapper*, const char*);
    using QVXYModelMapper_Metacall_Callback = int (*)(QVXYModelMapper*, int, int, void**);
    using QVXYModelMapper_Event_Callback = bool (*)(QVXYModelMapper*, QEvent*);
    using QVXYModelMapper_EventFilter_Callback = bool (*)(QVXYModelMapper*, QObject*, QEvent*);
    using QVXYModelMapper_TimerEvent_Callback = void (*)(QVXYModelMapper*, QTimerEvent*);
    using QVXYModelMapper_ChildEvent_Callback = void (*)(QVXYModelMapper*, QChildEvent*);
    using QVXYModelMapper_CustomEvent_Callback = void (*)(QVXYModelMapper*, QEvent*);
    using QVXYModelMapper_ConnectNotify_Callback = void (*)(QVXYModelMapper*, QMetaMethod*);
    using QVXYModelMapper_DisconnectNotify_Callback = void (*)(QVXYModelMapper*, QMetaMethod*);
    using QVXYModelMapper::count;
    using QVXYModelMapper::first;
    using QVXYModelMapper::isSignalConnected;
    using QVXYModelMapper::orientation;
    using QVXYModelMapper::receivers;
    using QVXYModelMapper::sender;
    using QVXYModelMapper::senderSignalIndex;
    using QVXYModelMapper::setCount;
    using QVXYModelMapper::setFirst;
    using QVXYModelMapper::setOrientation;
    using QVXYModelMapper::setXSection;
    using QVXYModelMapper::setYSection;
    using QVXYModelMapper::xSection;
    using QVXYModelMapper::ySection;

    // Instance callback storage
    QVXYModelMapper_MetaObject_Callback qvxymodelmapper_metaobject_callback = nullptr;
    QVXYModelMapper_Metacast_Callback qvxymodelmapper_metacast_callback = nullptr;
    QVXYModelMapper_Metacall_Callback qvxymodelmapper_metacall_callback = nullptr;
    QVXYModelMapper_Event_Callback qvxymodelmapper_event_callback = nullptr;
    QVXYModelMapper_EventFilter_Callback qvxymodelmapper_eventfilter_callback = nullptr;
    QVXYModelMapper_TimerEvent_Callback qvxymodelmapper_timerevent_callback = nullptr;
    QVXYModelMapper_ChildEvent_Callback qvxymodelmapper_childevent_callback = nullptr;
    QVXYModelMapper_CustomEvent_Callback qvxymodelmapper_customevent_callback = nullptr;
    QVXYModelMapper_ConnectNotify_Callback qvxymodelmapper_connectnotify_callback = nullptr;
    QVXYModelMapper_DisconnectNotify_Callback qvxymodelmapper_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QVXYModelMapper {
        using QVXYModelMapper::childEvent;
        using QVXYModelMapper::connectNotify;
        using QVXYModelMapper::customEvent;
        using QVXYModelMapper::disconnectNotify;
        using QVXYModelMapper::timerEvent;
    };

    VirtualQVXYModelMapper() : QVXYModelMapper() {};
    VirtualQVXYModelMapper(QObject* parent) : QVXYModelMapper(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qvxymodelmapper_metaobject_callback) {
            QMetaObject* callback_ret = qvxymodelmapper_metaobject_callback(this);
            return callback_ret;
        }
        return QVXYModelMapper::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qvxymodelmapper_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qvxymodelmapper_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QVXYModelMapper::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qvxymodelmapper_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qvxymodelmapper_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QVXYModelMapper::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qvxymodelmapper_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qvxymodelmapper_event_callback(this, cbval1);
            return callback_ret;
        }
        return QVXYModelMapper::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qvxymodelmapper_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qvxymodelmapper_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QVXYModelMapper::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qvxymodelmapper_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qvxymodelmapper_timerevent_callback(this, cbval1);
            return;
        }
        QVXYModelMapper::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qvxymodelmapper_childevent_callback) {
            QChildEvent* cbval1 = event;
            qvxymodelmapper_childevent_callback(this, cbval1);
            return;
        }
        QVXYModelMapper::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qvxymodelmapper_customevent_callback) {
            QEvent* cbval1 = event;
            qvxymodelmapper_customevent_callback(this, cbval1);
            return;
        }
        QVXYModelMapper::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qvxymodelmapper_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qvxymodelmapper_connectnotify_callback(this, cbval1);
            return;
        }
        QVXYModelMapper::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qvxymodelmapper_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qvxymodelmapper_disconnectnotify_callback(this, cbval1);
            return;
        }
        QVXYModelMapper::disconnectNotify(signal);
    }

    // Friend functions
    friend void QVXYModelMapper_SuperTimerEvent(QVXYModelMapper* self, QTimerEvent* event);
    friend void QVXYModelMapper_SuperChildEvent(QVXYModelMapper* self, QChildEvent* event);
    friend void QVXYModelMapper_SuperCustomEvent(QVXYModelMapper* self, QEvent* event);
    friend void QVXYModelMapper_SuperConnectNotify(QVXYModelMapper* self, const QMetaMethod* signal);
    friend void QVXYModelMapper_SuperDisconnectNotify(QVXYModelMapper* self, const QMetaMethod* signal);
};

#endif
