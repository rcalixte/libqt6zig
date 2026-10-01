#pragma once
#ifndef RESTRICTED_EXTRAS_CHARTS_LIBQVPIEMODELMAPPER_HXX
#define RESTRICTED_EXTRAS_CHARTS_LIBQVPIEMODELMAPPER_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QVPieModelMapper
class VirtualQVPieModelMapper final : public QVPieModelMapper {
  public:
    // Virtual class public types (including callbacks and access types)
    using QVPieModelMapper_MetaObject_Callback = QMetaObject* (*)(const QVPieModelMapper*);
    using QVPieModelMapper_Metacast_Callback = void* (*)(QVPieModelMapper*, const char*);
    using QVPieModelMapper_Metacall_Callback = int (*)(QVPieModelMapper*, int, int, void**);
    using QVPieModelMapper_Event_Callback = bool (*)(QVPieModelMapper*, QEvent*);
    using QVPieModelMapper_EventFilter_Callback = bool (*)(QVPieModelMapper*, QObject*, QEvent*);
    using QVPieModelMapper_TimerEvent_Callback = void (*)(QVPieModelMapper*, QTimerEvent*);
    using QVPieModelMapper_ChildEvent_Callback = void (*)(QVPieModelMapper*, QChildEvent*);
    using QVPieModelMapper_CustomEvent_Callback = void (*)(QVPieModelMapper*, QEvent*);
    using QVPieModelMapper_ConnectNotify_Callback = void (*)(QVPieModelMapper*, QMetaMethod*);
    using QVPieModelMapper_DisconnectNotify_Callback = void (*)(QVPieModelMapper*, QMetaMethod*);
    using QVPieModelMapper::count;
    using QVPieModelMapper::first;
    using QVPieModelMapper::isSignalConnected;
    using QVPieModelMapper::labelsSection;
    using QVPieModelMapper::orientation;
    using QVPieModelMapper::receivers;
    using QVPieModelMapper::sender;
    using QVPieModelMapper::senderSignalIndex;
    using QVPieModelMapper::setCount;
    using QVPieModelMapper::setFirst;
    using QVPieModelMapper::setLabelsSection;
    using QVPieModelMapper::setOrientation;
    using QVPieModelMapper::setValuesSection;
    using QVPieModelMapper::valuesSection;

    // Instance callback storage
    QVPieModelMapper_MetaObject_Callback qvpiemodelmapper_metaobject_callback = nullptr;
    QVPieModelMapper_Metacast_Callback qvpiemodelmapper_metacast_callback = nullptr;
    QVPieModelMapper_Metacall_Callback qvpiemodelmapper_metacall_callback = nullptr;
    QVPieModelMapper_Event_Callback qvpiemodelmapper_event_callback = nullptr;
    QVPieModelMapper_EventFilter_Callback qvpiemodelmapper_eventfilter_callback = nullptr;
    QVPieModelMapper_TimerEvent_Callback qvpiemodelmapper_timerevent_callback = nullptr;
    QVPieModelMapper_ChildEvent_Callback qvpiemodelmapper_childevent_callback = nullptr;
    QVPieModelMapper_CustomEvent_Callback qvpiemodelmapper_customevent_callback = nullptr;
    QVPieModelMapper_ConnectNotify_Callback qvpiemodelmapper_connectnotify_callback = nullptr;
    QVPieModelMapper_DisconnectNotify_Callback qvpiemodelmapper_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QVPieModelMapper {
        using QVPieModelMapper::childEvent;
        using QVPieModelMapper::connectNotify;
        using QVPieModelMapper::customEvent;
        using QVPieModelMapper::disconnectNotify;
        using QVPieModelMapper::timerEvent;
    };

    VirtualQVPieModelMapper() : QVPieModelMapper() {};
    VirtualQVPieModelMapper(QObject* parent) : QVPieModelMapper(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qvpiemodelmapper_metaobject_callback) {
            QMetaObject* callback_ret = qvpiemodelmapper_metaobject_callback(this);
            return callback_ret;
        }
        return QVPieModelMapper::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qvpiemodelmapper_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qvpiemodelmapper_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QVPieModelMapper::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qvpiemodelmapper_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qvpiemodelmapper_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QVPieModelMapper::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qvpiemodelmapper_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qvpiemodelmapper_event_callback(this, cbval1);
            return callback_ret;
        }
        return QVPieModelMapper::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qvpiemodelmapper_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qvpiemodelmapper_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QVPieModelMapper::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qvpiemodelmapper_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qvpiemodelmapper_timerevent_callback(this, cbval1);
            return;
        }
        QVPieModelMapper::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qvpiemodelmapper_childevent_callback) {
            QChildEvent* cbval1 = event;
            qvpiemodelmapper_childevent_callback(this, cbval1);
            return;
        }
        QVPieModelMapper::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qvpiemodelmapper_customevent_callback) {
            QEvent* cbval1 = event;
            qvpiemodelmapper_customevent_callback(this, cbval1);
            return;
        }
        QVPieModelMapper::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qvpiemodelmapper_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qvpiemodelmapper_connectnotify_callback(this, cbval1);
            return;
        }
        QVPieModelMapper::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qvpiemodelmapper_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qvpiemodelmapper_disconnectnotify_callback(this, cbval1);
            return;
        }
        QVPieModelMapper::disconnectNotify(signal);
    }

    // Friend functions
    friend void QVPieModelMapper_SuperTimerEvent(QVPieModelMapper* self, QTimerEvent* event);
    friend void QVPieModelMapper_SuperChildEvent(QVPieModelMapper* self, QChildEvent* event);
    friend void QVPieModelMapper_SuperCustomEvent(QVPieModelMapper* self, QEvent* event);
    friend void QVPieModelMapper_SuperConnectNotify(QVPieModelMapper* self, const QMetaMethod* signal);
    friend void QVPieModelMapper_SuperDisconnectNotify(QVPieModelMapper* self, const QMetaMethod* signal);
};

#endif
