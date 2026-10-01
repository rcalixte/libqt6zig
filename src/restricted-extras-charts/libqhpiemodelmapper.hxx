#pragma once
#ifndef RESTRICTED_EXTRAS_CHARTS_LIBQHPIEMODELMAPPER_HXX
#define RESTRICTED_EXTRAS_CHARTS_LIBQHPIEMODELMAPPER_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QHPieModelMapper
class VirtualQHPieModelMapper final : public QHPieModelMapper {
  public:
    // Virtual class public types (including callbacks and access types)
    using QHPieModelMapper_MetaObject_Callback = QMetaObject* (*)(const QHPieModelMapper*);
    using QHPieModelMapper_Metacast_Callback = void* (*)(QHPieModelMapper*, const char*);
    using QHPieModelMapper_Metacall_Callback = int (*)(QHPieModelMapper*, int, int, void**);
    using QHPieModelMapper_Event_Callback = bool (*)(QHPieModelMapper*, QEvent*);
    using QHPieModelMapper_EventFilter_Callback = bool (*)(QHPieModelMapper*, QObject*, QEvent*);
    using QHPieModelMapper_TimerEvent_Callback = void (*)(QHPieModelMapper*, QTimerEvent*);
    using QHPieModelMapper_ChildEvent_Callback = void (*)(QHPieModelMapper*, QChildEvent*);
    using QHPieModelMapper_CustomEvent_Callback = void (*)(QHPieModelMapper*, QEvent*);
    using QHPieModelMapper_ConnectNotify_Callback = void (*)(QHPieModelMapper*, QMetaMethod*);
    using QHPieModelMapper_DisconnectNotify_Callback = void (*)(QHPieModelMapper*, QMetaMethod*);
    using QHPieModelMapper::count;
    using QHPieModelMapper::first;
    using QHPieModelMapper::isSignalConnected;
    using QHPieModelMapper::labelsSection;
    using QHPieModelMapper::orientation;
    using QHPieModelMapper::receivers;
    using QHPieModelMapper::sender;
    using QHPieModelMapper::senderSignalIndex;
    using QHPieModelMapper::setCount;
    using QHPieModelMapper::setFirst;
    using QHPieModelMapper::setLabelsSection;
    using QHPieModelMapper::setOrientation;
    using QHPieModelMapper::setValuesSection;
    using QHPieModelMapper::valuesSection;

    // Instance callback storage
    QHPieModelMapper_MetaObject_Callback qhpiemodelmapper_metaobject_callback = nullptr;
    QHPieModelMapper_Metacast_Callback qhpiemodelmapper_metacast_callback = nullptr;
    QHPieModelMapper_Metacall_Callback qhpiemodelmapper_metacall_callback = nullptr;
    QHPieModelMapper_Event_Callback qhpiemodelmapper_event_callback = nullptr;
    QHPieModelMapper_EventFilter_Callback qhpiemodelmapper_eventfilter_callback = nullptr;
    QHPieModelMapper_TimerEvent_Callback qhpiemodelmapper_timerevent_callback = nullptr;
    QHPieModelMapper_ChildEvent_Callback qhpiemodelmapper_childevent_callback = nullptr;
    QHPieModelMapper_CustomEvent_Callback qhpiemodelmapper_customevent_callback = nullptr;
    QHPieModelMapper_ConnectNotify_Callback qhpiemodelmapper_connectnotify_callback = nullptr;
    QHPieModelMapper_DisconnectNotify_Callback qhpiemodelmapper_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QHPieModelMapper {
        using QHPieModelMapper::childEvent;
        using QHPieModelMapper::connectNotify;
        using QHPieModelMapper::customEvent;
        using QHPieModelMapper::disconnectNotify;
        using QHPieModelMapper::timerEvent;
    };

    VirtualQHPieModelMapper() : QHPieModelMapper() {};
    VirtualQHPieModelMapper(QObject* parent) : QHPieModelMapper(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qhpiemodelmapper_metaobject_callback) {
            QMetaObject* callback_ret = qhpiemodelmapper_metaobject_callback(this);
            return callback_ret;
        }
        return QHPieModelMapper::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qhpiemodelmapper_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qhpiemodelmapper_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QHPieModelMapper::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qhpiemodelmapper_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qhpiemodelmapper_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QHPieModelMapper::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qhpiemodelmapper_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qhpiemodelmapper_event_callback(this, cbval1);
            return callback_ret;
        }
        return QHPieModelMapper::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qhpiemodelmapper_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qhpiemodelmapper_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QHPieModelMapper::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qhpiemodelmapper_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qhpiemodelmapper_timerevent_callback(this, cbval1);
            return;
        }
        QHPieModelMapper::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qhpiemodelmapper_childevent_callback) {
            QChildEvent* cbval1 = event;
            qhpiemodelmapper_childevent_callback(this, cbval1);
            return;
        }
        QHPieModelMapper::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qhpiemodelmapper_customevent_callback) {
            QEvent* cbval1 = event;
            qhpiemodelmapper_customevent_callback(this, cbval1);
            return;
        }
        QHPieModelMapper::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qhpiemodelmapper_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qhpiemodelmapper_connectnotify_callback(this, cbval1);
            return;
        }
        QHPieModelMapper::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qhpiemodelmapper_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qhpiemodelmapper_disconnectnotify_callback(this, cbval1);
            return;
        }
        QHPieModelMapper::disconnectNotify(signal);
    }

    // Friend functions
    friend void QHPieModelMapper_SuperTimerEvent(QHPieModelMapper* self, QTimerEvent* event);
    friend void QHPieModelMapper_SuperChildEvent(QHPieModelMapper* self, QChildEvent* event);
    friend void QHPieModelMapper_SuperCustomEvent(QHPieModelMapper* self, QEvent* event);
    friend void QHPieModelMapper_SuperConnectNotify(QHPieModelMapper* self, const QMetaMethod* signal);
    friend void QHPieModelMapper_SuperDisconnectNotify(QHPieModelMapper* self, const QMetaMethod* signal);
};

#endif
