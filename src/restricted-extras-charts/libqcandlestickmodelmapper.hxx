#pragma once
#ifndef RESTRICTED_EXTRAS_CHARTS_LIBQCANDLESTICKMODELMAPPER_HXX
#define RESTRICTED_EXTRAS_CHARTS_LIBQCANDLESTICKMODELMAPPER_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QCandlestickModelMapper
class VirtualQCandlestickModelMapper : public QCandlestickModelMapper {
  public:
    // Virtual class public types (including callbacks and access types)
    using QCandlestickModelMapper_MetaObject_Callback = QMetaObject* (*)(const QCandlestickModelMapper*);
    using QCandlestickModelMapper_Metacast_Callback = void* (*)(QCandlestickModelMapper*, const char*);
    using QCandlestickModelMapper_Metacall_Callback = int (*)(QCandlestickModelMapper*, int, int, void**);
    using QCandlestickModelMapper_Orientation_Callback = int (*)(const QCandlestickModelMapper*);
    using QCandlestickModelMapper_Event_Callback = bool (*)(QCandlestickModelMapper*, QEvent*);
    using QCandlestickModelMapper_EventFilter_Callback = bool (*)(QCandlestickModelMapper*, QObject*, QEvent*);
    using QCandlestickModelMapper_TimerEvent_Callback = void (*)(QCandlestickModelMapper*, QTimerEvent*);
    using QCandlestickModelMapper_ChildEvent_Callback = void (*)(QCandlestickModelMapper*, QChildEvent*);
    using QCandlestickModelMapper_CustomEvent_Callback = void (*)(QCandlestickModelMapper*, QEvent*);
    using QCandlestickModelMapper_ConnectNotify_Callback = void (*)(QCandlestickModelMapper*, QMetaMethod*);
    using QCandlestickModelMapper_DisconnectNotify_Callback = void (*)(QCandlestickModelMapper*, QMetaMethod*);
    using QCandlestickModelMapper::close;
    using QCandlestickModelMapper::firstSetSection;
    using QCandlestickModelMapper::high;
    using QCandlestickModelMapper::isSignalConnected;
    using QCandlestickModelMapper::lastSetSection;
    using QCandlestickModelMapper::low;
    using QCandlestickModelMapper::open;
    using QCandlestickModelMapper::receivers;
    using QCandlestickModelMapper::sender;
    using QCandlestickModelMapper::senderSignalIndex;
    using QCandlestickModelMapper::setClose;
    using QCandlestickModelMapper::setFirstSetSection;
    using QCandlestickModelMapper::setHigh;
    using QCandlestickModelMapper::setLastSetSection;
    using QCandlestickModelMapper::setLow;
    using QCandlestickModelMapper::setOpen;
    using QCandlestickModelMapper::setTimestamp;
    using QCandlestickModelMapper::timestamp;

    // Instance callback storage
    QCandlestickModelMapper_MetaObject_Callback qcandlestickmodelmapper_metaobject_callback = nullptr;
    QCandlestickModelMapper_Metacast_Callback qcandlestickmodelmapper_metacast_callback = nullptr;
    QCandlestickModelMapper_Metacall_Callback qcandlestickmodelmapper_metacall_callback = nullptr;
    QCandlestickModelMapper_Orientation_Callback qcandlestickmodelmapper_orientation_callback = nullptr;
    QCandlestickModelMapper_Event_Callback qcandlestickmodelmapper_event_callback = nullptr;
    QCandlestickModelMapper_EventFilter_Callback qcandlestickmodelmapper_eventfilter_callback = nullptr;
    QCandlestickModelMapper_TimerEvent_Callback qcandlestickmodelmapper_timerevent_callback = nullptr;
    QCandlestickModelMapper_ChildEvent_Callback qcandlestickmodelmapper_childevent_callback = nullptr;
    QCandlestickModelMapper_CustomEvent_Callback qcandlestickmodelmapper_customevent_callback = nullptr;
    QCandlestickModelMapper_ConnectNotify_Callback qcandlestickmodelmapper_connectnotify_callback = nullptr;
    QCandlestickModelMapper_DisconnectNotify_Callback qcandlestickmodelmapper_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QCandlestickModelMapper {
        using QCandlestickModelMapper::childEvent;
        using QCandlestickModelMapper::connectNotify;
        using QCandlestickModelMapper::customEvent;
        using QCandlestickModelMapper::disconnectNotify;
        using QCandlestickModelMapper::timerEvent;
    };

    VirtualQCandlestickModelMapper() : QCandlestickModelMapper() {};
    VirtualQCandlestickModelMapper(QObject* parent) : QCandlestickModelMapper(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qcandlestickmodelmapper_metaobject_callback) {
            QMetaObject* callback_ret = qcandlestickmodelmapper_metaobject_callback(this);
            return callback_ret;
        }
        return QCandlestickModelMapper::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qcandlestickmodelmapper_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qcandlestickmodelmapper_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QCandlestickModelMapper::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qcandlestickmodelmapper_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qcandlestickmodelmapper_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QCandlestickModelMapper::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::Orientation orientation() const override {
        if (qcandlestickmodelmapper_orientation_callback) {
            int callback_ret = qcandlestickmodelmapper_orientation_callback(this);
            return static_cast<Qt::Orientation>(callback_ret);
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QCandlestickModelMapper::orientation called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qcandlestickmodelmapper_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qcandlestickmodelmapper_event_callback(this, cbval1);
            return callback_ret;
        }
        return QCandlestickModelMapper::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qcandlestickmodelmapper_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qcandlestickmodelmapper_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QCandlestickModelMapper::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qcandlestickmodelmapper_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qcandlestickmodelmapper_timerevent_callback(this, cbval1);
            return;
        }
        QCandlestickModelMapper::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qcandlestickmodelmapper_childevent_callback) {
            QChildEvent* cbval1 = event;
            qcandlestickmodelmapper_childevent_callback(this, cbval1);
            return;
        }
        QCandlestickModelMapper::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qcandlestickmodelmapper_customevent_callback) {
            QEvent* cbval1 = event;
            qcandlestickmodelmapper_customevent_callback(this, cbval1);
            return;
        }
        QCandlestickModelMapper::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qcandlestickmodelmapper_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qcandlestickmodelmapper_connectnotify_callback(this, cbval1);
            return;
        }
        QCandlestickModelMapper::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qcandlestickmodelmapper_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qcandlestickmodelmapper_disconnectnotify_callback(this, cbval1);
            return;
        }
        QCandlestickModelMapper::disconnectNotify(signal);
    }

    // Friend functions
    friend void QCandlestickModelMapper_SuperTimerEvent(QCandlestickModelMapper* self, QTimerEvent* event);
    friend void QCandlestickModelMapper_SuperChildEvent(QCandlestickModelMapper* self, QChildEvent* event);
    friend void QCandlestickModelMapper_SuperCustomEvent(QCandlestickModelMapper* self, QEvent* event);
    friend void QCandlestickModelMapper_SuperConnectNotify(QCandlestickModelMapper* self, const QMetaMethod* signal);
    friend void QCandlestickModelMapper_SuperDisconnectNotify(QCandlestickModelMapper* self, const QMetaMethod* signal);
};

#endif
