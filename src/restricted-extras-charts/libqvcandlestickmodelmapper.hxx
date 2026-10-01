#pragma once
#ifndef RESTRICTED_EXTRAS_CHARTS_LIBQVCANDLESTICKMODELMAPPER_HXX
#define RESTRICTED_EXTRAS_CHARTS_LIBQVCANDLESTICKMODELMAPPER_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QVCandlestickModelMapper
class VirtualQVCandlestickModelMapper final : public QVCandlestickModelMapper {
  public:
    // Virtual class public types (including callbacks and access types)
    using QVCandlestickModelMapper_MetaObject_Callback = QMetaObject* (*)(const QVCandlestickModelMapper*);
    using QVCandlestickModelMapper_Metacast_Callback = void* (*)(QVCandlestickModelMapper*, const char*);
    using QVCandlestickModelMapper_Metacall_Callback = int (*)(QVCandlestickModelMapper*, int, int, void**);
    using QVCandlestickModelMapper_Orientation_Callback = int (*)(const QVCandlestickModelMapper*);
    using QVCandlestickModelMapper_Event_Callback = bool (*)(QVCandlestickModelMapper*, QEvent*);
    using QVCandlestickModelMapper_EventFilter_Callback = bool (*)(QVCandlestickModelMapper*, QObject*, QEvent*);
    using QVCandlestickModelMapper_TimerEvent_Callback = void (*)(QVCandlestickModelMapper*, QTimerEvent*);
    using QVCandlestickModelMapper_ChildEvent_Callback = void (*)(QVCandlestickModelMapper*, QChildEvent*);
    using QVCandlestickModelMapper_CustomEvent_Callback = void (*)(QVCandlestickModelMapper*, QEvent*);
    using QVCandlestickModelMapper_ConnectNotify_Callback = void (*)(QVCandlestickModelMapper*, QMetaMethod*);
    using QVCandlestickModelMapper_DisconnectNotify_Callback = void (*)(QVCandlestickModelMapper*, QMetaMethod*);
    using QVCandlestickModelMapper::close;
    using QVCandlestickModelMapper::firstSetSection;
    using QVCandlestickModelMapper::high;
    using QVCandlestickModelMapper::isSignalConnected;
    using QVCandlestickModelMapper::lastSetSection;
    using QVCandlestickModelMapper::low;
    using QVCandlestickModelMapper::open;
    using QVCandlestickModelMapper::receivers;
    using QVCandlestickModelMapper::sender;
    using QVCandlestickModelMapper::senderSignalIndex;
    using QVCandlestickModelMapper::setClose;
    using QVCandlestickModelMapper::setFirstSetSection;
    using QVCandlestickModelMapper::setHigh;
    using QVCandlestickModelMapper::setLastSetSection;
    using QVCandlestickModelMapper::setLow;
    using QVCandlestickModelMapper::setOpen;
    using QVCandlestickModelMapper::setTimestamp;
    using QVCandlestickModelMapper::timestamp;

    // Instance callback storage
    QVCandlestickModelMapper_MetaObject_Callback qvcandlestickmodelmapper_metaobject_callback = nullptr;
    QVCandlestickModelMapper_Metacast_Callback qvcandlestickmodelmapper_metacast_callback = nullptr;
    QVCandlestickModelMapper_Metacall_Callback qvcandlestickmodelmapper_metacall_callback = nullptr;
    QVCandlestickModelMapper_Orientation_Callback qvcandlestickmodelmapper_orientation_callback = nullptr;
    QVCandlestickModelMapper_Event_Callback qvcandlestickmodelmapper_event_callback = nullptr;
    QVCandlestickModelMapper_EventFilter_Callback qvcandlestickmodelmapper_eventfilter_callback = nullptr;
    QVCandlestickModelMapper_TimerEvent_Callback qvcandlestickmodelmapper_timerevent_callback = nullptr;
    QVCandlestickModelMapper_ChildEvent_Callback qvcandlestickmodelmapper_childevent_callback = nullptr;
    QVCandlestickModelMapper_CustomEvent_Callback qvcandlestickmodelmapper_customevent_callback = nullptr;
    QVCandlestickModelMapper_ConnectNotify_Callback qvcandlestickmodelmapper_connectnotify_callback = nullptr;
    QVCandlestickModelMapper_DisconnectNotify_Callback qvcandlestickmodelmapper_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QVCandlestickModelMapper {
        using QVCandlestickModelMapper::childEvent;
        using QVCandlestickModelMapper::connectNotify;
        using QVCandlestickModelMapper::customEvent;
        using QVCandlestickModelMapper::disconnectNotify;
        using QVCandlestickModelMapper::timerEvent;
    };

    VirtualQVCandlestickModelMapper() : QVCandlestickModelMapper() {};
    VirtualQVCandlestickModelMapper(QObject* parent) : QVCandlestickModelMapper(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qvcandlestickmodelmapper_metaobject_callback) {
            QMetaObject* callback_ret = qvcandlestickmodelmapper_metaobject_callback(this);
            return callback_ret;
        }
        return QVCandlestickModelMapper::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qvcandlestickmodelmapper_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qvcandlestickmodelmapper_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QVCandlestickModelMapper::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qvcandlestickmodelmapper_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qvcandlestickmodelmapper_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QVCandlestickModelMapper::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::Orientation orientation() const override {
        if (qvcandlestickmodelmapper_orientation_callback) {
            int callback_ret = qvcandlestickmodelmapper_orientation_callback(this);
            return static_cast<Qt::Orientation>(callback_ret);
        }
        return QVCandlestickModelMapper::orientation();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qvcandlestickmodelmapper_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qvcandlestickmodelmapper_event_callback(this, cbval1);
            return callback_ret;
        }
        return QVCandlestickModelMapper::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qvcandlestickmodelmapper_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qvcandlestickmodelmapper_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QVCandlestickModelMapper::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qvcandlestickmodelmapper_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qvcandlestickmodelmapper_timerevent_callback(this, cbval1);
            return;
        }
        QVCandlestickModelMapper::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qvcandlestickmodelmapper_childevent_callback) {
            QChildEvent* cbval1 = event;
            qvcandlestickmodelmapper_childevent_callback(this, cbval1);
            return;
        }
        QVCandlestickModelMapper::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qvcandlestickmodelmapper_customevent_callback) {
            QEvent* cbval1 = event;
            qvcandlestickmodelmapper_customevent_callback(this, cbval1);
            return;
        }
        QVCandlestickModelMapper::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qvcandlestickmodelmapper_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qvcandlestickmodelmapper_connectnotify_callback(this, cbval1);
            return;
        }
        QVCandlestickModelMapper::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qvcandlestickmodelmapper_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qvcandlestickmodelmapper_disconnectnotify_callback(this, cbval1);
            return;
        }
        QVCandlestickModelMapper::disconnectNotify(signal);
    }

    // Friend functions
    friend void QVCandlestickModelMapper_SuperTimerEvent(QVCandlestickModelMapper* self, QTimerEvent* event);
    friend void QVCandlestickModelMapper_SuperChildEvent(QVCandlestickModelMapper* self, QChildEvent* event);
    friend void QVCandlestickModelMapper_SuperCustomEvent(QVCandlestickModelMapper* self, QEvent* event);
    friend void QVCandlestickModelMapper_SuperConnectNotify(QVCandlestickModelMapper* self, const QMetaMethod* signal);
    friend void QVCandlestickModelMapper_SuperDisconnectNotify(QVCandlestickModelMapper* self, const QMetaMethod* signal);
};

#endif
