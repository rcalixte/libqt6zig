#pragma once
#ifndef RESTRICTED_EXTRAS_CHARTS_LIBQVBOXPLOTMODELMAPPER_HXX
#define RESTRICTED_EXTRAS_CHARTS_LIBQVBOXPLOTMODELMAPPER_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QVBoxPlotModelMapper
class VirtualQVBoxPlotModelMapper final : public QVBoxPlotModelMapper {
  public:
    // Virtual class public types (including callbacks and access types)
    using QVBoxPlotModelMapper_MetaObject_Callback = QMetaObject* (*)(const QVBoxPlotModelMapper*);
    using QVBoxPlotModelMapper_Metacast_Callback = void* (*)(QVBoxPlotModelMapper*, const char*);
    using QVBoxPlotModelMapper_Metacall_Callback = int (*)(QVBoxPlotModelMapper*, int, int, void**);
    using QVBoxPlotModelMapper_Event_Callback = bool (*)(QVBoxPlotModelMapper*, QEvent*);
    using QVBoxPlotModelMapper_EventFilter_Callback = bool (*)(QVBoxPlotModelMapper*, QObject*, QEvent*);
    using QVBoxPlotModelMapper_TimerEvent_Callback = void (*)(QVBoxPlotModelMapper*, QTimerEvent*);
    using QVBoxPlotModelMapper_ChildEvent_Callback = void (*)(QVBoxPlotModelMapper*, QChildEvent*);
    using QVBoxPlotModelMapper_CustomEvent_Callback = void (*)(QVBoxPlotModelMapper*, QEvent*);
    using QVBoxPlotModelMapper_ConnectNotify_Callback = void (*)(QVBoxPlotModelMapper*, QMetaMethod*);
    using QVBoxPlotModelMapper_DisconnectNotify_Callback = void (*)(QVBoxPlotModelMapper*, QMetaMethod*);
    using QVBoxPlotModelMapper::count;
    using QVBoxPlotModelMapper::first;
    using QVBoxPlotModelMapper::firstBoxSetSection;
    using QVBoxPlotModelMapper::isSignalConnected;
    using QVBoxPlotModelMapper::lastBoxSetSection;
    using QVBoxPlotModelMapper::orientation;
    using QVBoxPlotModelMapper::receivers;
    using QVBoxPlotModelMapper::sender;
    using QVBoxPlotModelMapper::senderSignalIndex;
    using QVBoxPlotModelMapper::setCount;
    using QVBoxPlotModelMapper::setFirst;
    using QVBoxPlotModelMapper::setFirstBoxSetSection;
    using QVBoxPlotModelMapper::setLastBoxSetSection;
    using QVBoxPlotModelMapper::setOrientation;

    // Instance callback storage
    QVBoxPlotModelMapper_MetaObject_Callback qvboxplotmodelmapper_metaobject_callback = nullptr;
    QVBoxPlotModelMapper_Metacast_Callback qvboxplotmodelmapper_metacast_callback = nullptr;
    QVBoxPlotModelMapper_Metacall_Callback qvboxplotmodelmapper_metacall_callback = nullptr;
    QVBoxPlotModelMapper_Event_Callback qvboxplotmodelmapper_event_callback = nullptr;
    QVBoxPlotModelMapper_EventFilter_Callback qvboxplotmodelmapper_eventfilter_callback = nullptr;
    QVBoxPlotModelMapper_TimerEvent_Callback qvboxplotmodelmapper_timerevent_callback = nullptr;
    QVBoxPlotModelMapper_ChildEvent_Callback qvboxplotmodelmapper_childevent_callback = nullptr;
    QVBoxPlotModelMapper_CustomEvent_Callback qvboxplotmodelmapper_customevent_callback = nullptr;
    QVBoxPlotModelMapper_ConnectNotify_Callback qvboxplotmodelmapper_connectnotify_callback = nullptr;
    QVBoxPlotModelMapper_DisconnectNotify_Callback qvboxplotmodelmapper_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QVBoxPlotModelMapper {
        using QVBoxPlotModelMapper::childEvent;
        using QVBoxPlotModelMapper::connectNotify;
        using QVBoxPlotModelMapper::customEvent;
        using QVBoxPlotModelMapper::disconnectNotify;
        using QVBoxPlotModelMapper::timerEvent;
    };

    VirtualQVBoxPlotModelMapper() : QVBoxPlotModelMapper() {};
    VirtualQVBoxPlotModelMapper(QObject* parent) : QVBoxPlotModelMapper(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qvboxplotmodelmapper_metaobject_callback) {
            QMetaObject* callback_ret = qvboxplotmodelmapper_metaobject_callback(this);
            return callback_ret;
        }
        return QVBoxPlotModelMapper::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qvboxplotmodelmapper_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qvboxplotmodelmapper_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QVBoxPlotModelMapper::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qvboxplotmodelmapper_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qvboxplotmodelmapper_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QVBoxPlotModelMapper::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qvboxplotmodelmapper_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qvboxplotmodelmapper_event_callback(this, cbval1);
            return callback_ret;
        }
        return QVBoxPlotModelMapper::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qvboxplotmodelmapper_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qvboxplotmodelmapper_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QVBoxPlotModelMapper::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qvboxplotmodelmapper_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qvboxplotmodelmapper_timerevent_callback(this, cbval1);
            return;
        }
        QVBoxPlotModelMapper::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qvboxplotmodelmapper_childevent_callback) {
            QChildEvent* cbval1 = event;
            qvboxplotmodelmapper_childevent_callback(this, cbval1);
            return;
        }
        QVBoxPlotModelMapper::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qvboxplotmodelmapper_customevent_callback) {
            QEvent* cbval1 = event;
            qvboxplotmodelmapper_customevent_callback(this, cbval1);
            return;
        }
        QVBoxPlotModelMapper::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qvboxplotmodelmapper_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qvboxplotmodelmapper_connectnotify_callback(this, cbval1);
            return;
        }
        QVBoxPlotModelMapper::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qvboxplotmodelmapper_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qvboxplotmodelmapper_disconnectnotify_callback(this, cbval1);
            return;
        }
        QVBoxPlotModelMapper::disconnectNotify(signal);
    }

    // Friend functions
    friend void QVBoxPlotModelMapper_SuperTimerEvent(QVBoxPlotModelMapper* self, QTimerEvent* event);
    friend void QVBoxPlotModelMapper_SuperChildEvent(QVBoxPlotModelMapper* self, QChildEvent* event);
    friend void QVBoxPlotModelMapper_SuperCustomEvent(QVBoxPlotModelMapper* self, QEvent* event);
    friend void QVBoxPlotModelMapper_SuperConnectNotify(QVBoxPlotModelMapper* self, const QMetaMethod* signal);
    friend void QVBoxPlotModelMapper_SuperDisconnectNotify(QVBoxPlotModelMapper* self, const QMetaMethod* signal);
};

#endif
