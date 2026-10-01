#pragma once
#ifndef RESTRICTED_EXTRAS_CHARTS_LIBQHBOXPLOTMODELMAPPER_HXX
#define RESTRICTED_EXTRAS_CHARTS_LIBQHBOXPLOTMODELMAPPER_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QHBoxPlotModelMapper
class VirtualQHBoxPlotModelMapper final : public QHBoxPlotModelMapper {
  public:
    // Virtual class public types (including callbacks and access types)
    using QHBoxPlotModelMapper_MetaObject_Callback = QMetaObject* (*)(const QHBoxPlotModelMapper*);
    using QHBoxPlotModelMapper_Metacast_Callback = void* (*)(QHBoxPlotModelMapper*, const char*);
    using QHBoxPlotModelMapper_Metacall_Callback = int (*)(QHBoxPlotModelMapper*, int, int, void**);
    using QHBoxPlotModelMapper_Event_Callback = bool (*)(QHBoxPlotModelMapper*, QEvent*);
    using QHBoxPlotModelMapper_EventFilter_Callback = bool (*)(QHBoxPlotModelMapper*, QObject*, QEvent*);
    using QHBoxPlotModelMapper_TimerEvent_Callback = void (*)(QHBoxPlotModelMapper*, QTimerEvent*);
    using QHBoxPlotModelMapper_ChildEvent_Callback = void (*)(QHBoxPlotModelMapper*, QChildEvent*);
    using QHBoxPlotModelMapper_CustomEvent_Callback = void (*)(QHBoxPlotModelMapper*, QEvent*);
    using QHBoxPlotModelMapper_ConnectNotify_Callback = void (*)(QHBoxPlotModelMapper*, QMetaMethod*);
    using QHBoxPlotModelMapper_DisconnectNotify_Callback = void (*)(QHBoxPlotModelMapper*, QMetaMethod*);
    using QHBoxPlotModelMapper::count;
    using QHBoxPlotModelMapper::first;
    using QHBoxPlotModelMapper::firstBoxSetSection;
    using QHBoxPlotModelMapper::isSignalConnected;
    using QHBoxPlotModelMapper::lastBoxSetSection;
    using QHBoxPlotModelMapper::orientation;
    using QHBoxPlotModelMapper::receivers;
    using QHBoxPlotModelMapper::sender;
    using QHBoxPlotModelMapper::senderSignalIndex;
    using QHBoxPlotModelMapper::setCount;
    using QHBoxPlotModelMapper::setFirst;
    using QHBoxPlotModelMapper::setFirstBoxSetSection;
    using QHBoxPlotModelMapper::setLastBoxSetSection;
    using QHBoxPlotModelMapper::setOrientation;

    // Instance callback storage
    QHBoxPlotModelMapper_MetaObject_Callback qhboxplotmodelmapper_metaobject_callback = nullptr;
    QHBoxPlotModelMapper_Metacast_Callback qhboxplotmodelmapper_metacast_callback = nullptr;
    QHBoxPlotModelMapper_Metacall_Callback qhboxplotmodelmapper_metacall_callback = nullptr;
    QHBoxPlotModelMapper_Event_Callback qhboxplotmodelmapper_event_callback = nullptr;
    QHBoxPlotModelMapper_EventFilter_Callback qhboxplotmodelmapper_eventfilter_callback = nullptr;
    QHBoxPlotModelMapper_TimerEvent_Callback qhboxplotmodelmapper_timerevent_callback = nullptr;
    QHBoxPlotModelMapper_ChildEvent_Callback qhboxplotmodelmapper_childevent_callback = nullptr;
    QHBoxPlotModelMapper_CustomEvent_Callback qhboxplotmodelmapper_customevent_callback = nullptr;
    QHBoxPlotModelMapper_ConnectNotify_Callback qhboxplotmodelmapper_connectnotify_callback = nullptr;
    QHBoxPlotModelMapper_DisconnectNotify_Callback qhboxplotmodelmapper_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QHBoxPlotModelMapper {
        using QHBoxPlotModelMapper::childEvent;
        using QHBoxPlotModelMapper::connectNotify;
        using QHBoxPlotModelMapper::customEvent;
        using QHBoxPlotModelMapper::disconnectNotify;
        using QHBoxPlotModelMapper::timerEvent;
    };

    VirtualQHBoxPlotModelMapper() : QHBoxPlotModelMapper() {};
    VirtualQHBoxPlotModelMapper(QObject* parent) : QHBoxPlotModelMapper(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qhboxplotmodelmapper_metaobject_callback) {
            QMetaObject* callback_ret = qhboxplotmodelmapper_metaobject_callback(this);
            return callback_ret;
        }
        return QHBoxPlotModelMapper::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qhboxplotmodelmapper_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qhboxplotmodelmapper_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QHBoxPlotModelMapper::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qhboxplotmodelmapper_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qhboxplotmodelmapper_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QHBoxPlotModelMapper::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qhboxplotmodelmapper_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qhboxplotmodelmapper_event_callback(this, cbval1);
            return callback_ret;
        }
        return QHBoxPlotModelMapper::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qhboxplotmodelmapper_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qhboxplotmodelmapper_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QHBoxPlotModelMapper::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qhboxplotmodelmapper_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qhboxplotmodelmapper_timerevent_callback(this, cbval1);
            return;
        }
        QHBoxPlotModelMapper::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qhboxplotmodelmapper_childevent_callback) {
            QChildEvent* cbval1 = event;
            qhboxplotmodelmapper_childevent_callback(this, cbval1);
            return;
        }
        QHBoxPlotModelMapper::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qhboxplotmodelmapper_customevent_callback) {
            QEvent* cbval1 = event;
            qhboxplotmodelmapper_customevent_callback(this, cbval1);
            return;
        }
        QHBoxPlotModelMapper::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qhboxplotmodelmapper_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qhboxplotmodelmapper_connectnotify_callback(this, cbval1);
            return;
        }
        QHBoxPlotModelMapper::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qhboxplotmodelmapper_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qhboxplotmodelmapper_disconnectnotify_callback(this, cbval1);
            return;
        }
        QHBoxPlotModelMapper::disconnectNotify(signal);
    }

    // Friend functions
    friend void QHBoxPlotModelMapper_SuperTimerEvent(QHBoxPlotModelMapper* self, QTimerEvent* event);
    friend void QHBoxPlotModelMapper_SuperChildEvent(QHBoxPlotModelMapper* self, QChildEvent* event);
    friend void QHBoxPlotModelMapper_SuperCustomEvent(QHBoxPlotModelMapper* self, QEvent* event);
    friend void QHBoxPlotModelMapper_SuperConnectNotify(QHBoxPlotModelMapper* self, const QMetaMethod* signal);
    friend void QHBoxPlotModelMapper_SuperDisconnectNotify(QHBoxPlotModelMapper* self, const QMetaMethod* signal);
};

#endif
