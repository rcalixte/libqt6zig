#pragma once
#ifndef RESTRICTED_EXTRAS_CHARTS_LIBQHCANDLESTICKMODELMAPPER_HXX
#define RESTRICTED_EXTRAS_CHARTS_LIBQHCANDLESTICKMODELMAPPER_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QHCandlestickModelMapper
class VirtualQHCandlestickModelMapper final : public QHCandlestickModelMapper {
  public:
    // Virtual class public types (including callbacks and access types)
    using QHCandlestickModelMapper_MetaObject_Callback = QMetaObject* (*)(const QHCandlestickModelMapper*);
    using QHCandlestickModelMapper_Metacast_Callback = void* (*)(QHCandlestickModelMapper*, const char*);
    using QHCandlestickModelMapper_Metacall_Callback = int (*)(QHCandlestickModelMapper*, int, int, void**);
    using QHCandlestickModelMapper_Orientation_Callback = int (*)(const QHCandlestickModelMapper*);
    using QHCandlestickModelMapper_Event_Callback = bool (*)(QHCandlestickModelMapper*, QEvent*);
    using QHCandlestickModelMapper_EventFilter_Callback = bool (*)(QHCandlestickModelMapper*, QObject*, QEvent*);
    using QHCandlestickModelMapper_TimerEvent_Callback = void (*)(QHCandlestickModelMapper*, QTimerEvent*);
    using QHCandlestickModelMapper_ChildEvent_Callback = void (*)(QHCandlestickModelMapper*, QChildEvent*);
    using QHCandlestickModelMapper_CustomEvent_Callback = void (*)(QHCandlestickModelMapper*, QEvent*);
    using QHCandlestickModelMapper_ConnectNotify_Callback = void (*)(QHCandlestickModelMapper*, QMetaMethod*);
    using QHCandlestickModelMapper_DisconnectNotify_Callback = void (*)(QHCandlestickModelMapper*, QMetaMethod*);
    using QHCandlestickModelMapper::close;
    using QHCandlestickModelMapper::firstSetSection;
    using QHCandlestickModelMapper::high;
    using QHCandlestickModelMapper::isSignalConnected;
    using QHCandlestickModelMapper::lastSetSection;
    using QHCandlestickModelMapper::low;
    using QHCandlestickModelMapper::open;
    using QHCandlestickModelMapper::receivers;
    using QHCandlestickModelMapper::sender;
    using QHCandlestickModelMapper::senderSignalIndex;
    using QHCandlestickModelMapper::setClose;
    using QHCandlestickModelMapper::setFirstSetSection;
    using QHCandlestickModelMapper::setHigh;
    using QHCandlestickModelMapper::setLastSetSection;
    using QHCandlestickModelMapper::setLow;
    using QHCandlestickModelMapper::setOpen;
    using QHCandlestickModelMapper::setTimestamp;
    using QHCandlestickModelMapper::timestamp;

    // Instance callback storage
    QHCandlestickModelMapper_MetaObject_Callback qhcandlestickmodelmapper_metaobject_callback = nullptr;
    QHCandlestickModelMapper_Metacast_Callback qhcandlestickmodelmapper_metacast_callback = nullptr;
    QHCandlestickModelMapper_Metacall_Callback qhcandlestickmodelmapper_metacall_callback = nullptr;
    QHCandlestickModelMapper_Orientation_Callback qhcandlestickmodelmapper_orientation_callback = nullptr;
    QHCandlestickModelMapper_Event_Callback qhcandlestickmodelmapper_event_callback = nullptr;
    QHCandlestickModelMapper_EventFilter_Callback qhcandlestickmodelmapper_eventfilter_callback = nullptr;
    QHCandlestickModelMapper_TimerEvent_Callback qhcandlestickmodelmapper_timerevent_callback = nullptr;
    QHCandlestickModelMapper_ChildEvent_Callback qhcandlestickmodelmapper_childevent_callback = nullptr;
    QHCandlestickModelMapper_CustomEvent_Callback qhcandlestickmodelmapper_customevent_callback = nullptr;
    QHCandlestickModelMapper_ConnectNotify_Callback qhcandlestickmodelmapper_connectnotify_callback = nullptr;
    QHCandlestickModelMapper_DisconnectNotify_Callback qhcandlestickmodelmapper_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QHCandlestickModelMapper {
        using QHCandlestickModelMapper::childEvent;
        using QHCandlestickModelMapper::connectNotify;
        using QHCandlestickModelMapper::customEvent;
        using QHCandlestickModelMapper::disconnectNotify;
        using QHCandlestickModelMapper::timerEvent;
    };

    VirtualQHCandlestickModelMapper() : QHCandlestickModelMapper() {};
    VirtualQHCandlestickModelMapper(QObject* parent) : QHCandlestickModelMapper(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qhcandlestickmodelmapper_metaobject_callback) {
            QMetaObject* callback_ret = qhcandlestickmodelmapper_metaobject_callback(this);
            return callback_ret;
        }
        return QHCandlestickModelMapper::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qhcandlestickmodelmapper_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qhcandlestickmodelmapper_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QHCandlestickModelMapper::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qhcandlestickmodelmapper_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qhcandlestickmodelmapper_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QHCandlestickModelMapper::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::Orientation orientation() const override {
        if (qhcandlestickmodelmapper_orientation_callback) {
            int callback_ret = qhcandlestickmodelmapper_orientation_callback(this);
            return static_cast<Qt::Orientation>(callback_ret);
        }
        return QHCandlestickModelMapper::orientation();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qhcandlestickmodelmapper_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qhcandlestickmodelmapper_event_callback(this, cbval1);
            return callback_ret;
        }
        return QHCandlestickModelMapper::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qhcandlestickmodelmapper_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qhcandlestickmodelmapper_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QHCandlestickModelMapper::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qhcandlestickmodelmapper_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qhcandlestickmodelmapper_timerevent_callback(this, cbval1);
            return;
        }
        QHCandlestickModelMapper::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qhcandlestickmodelmapper_childevent_callback) {
            QChildEvent* cbval1 = event;
            qhcandlestickmodelmapper_childevent_callback(this, cbval1);
            return;
        }
        QHCandlestickModelMapper::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qhcandlestickmodelmapper_customevent_callback) {
            QEvent* cbval1 = event;
            qhcandlestickmodelmapper_customevent_callback(this, cbval1);
            return;
        }
        QHCandlestickModelMapper::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qhcandlestickmodelmapper_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qhcandlestickmodelmapper_connectnotify_callback(this, cbval1);
            return;
        }
        QHCandlestickModelMapper::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qhcandlestickmodelmapper_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qhcandlestickmodelmapper_disconnectnotify_callback(this, cbval1);
            return;
        }
        QHCandlestickModelMapper::disconnectNotify(signal);
    }

    // Friend functions
    friend void QHCandlestickModelMapper_SuperTimerEvent(QHCandlestickModelMapper* self, QTimerEvent* event);
    friend void QHCandlestickModelMapper_SuperChildEvent(QHCandlestickModelMapper* self, QChildEvent* event);
    friend void QHCandlestickModelMapper_SuperCustomEvent(QHCandlestickModelMapper* self, QEvent* event);
    friend void QHCandlestickModelMapper_SuperConnectNotify(QHCandlestickModelMapper* self, const QMetaMethod* signal);
    friend void QHCandlestickModelMapper_SuperDisconnectNotify(QHCandlestickModelMapper* self, const QMetaMethod* signal);
};

#endif
