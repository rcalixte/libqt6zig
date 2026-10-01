#pragma once
#ifndef LIBQSIGNALMAPPER_HXX
#define LIBQSIGNALMAPPER_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QSignalMapper
class VirtualQSignalMapper final : public QSignalMapper {
  public:
    // Virtual class public types (including callbacks and access types)
    using QSignalMapper_MetaObject_Callback = QMetaObject* (*)(const QSignalMapper*);
    using QSignalMapper_Metacast_Callback = void* (*)(QSignalMapper*, const char*);
    using QSignalMapper_Metacall_Callback = int (*)(QSignalMapper*, int, int, void**);
    using QSignalMapper_Event_Callback = bool (*)(QSignalMapper*, QEvent*);
    using QSignalMapper_EventFilter_Callback = bool (*)(QSignalMapper*, QObject*, QEvent*);
    using QSignalMapper_TimerEvent_Callback = void (*)(QSignalMapper*, QTimerEvent*);
    using QSignalMapper_ChildEvent_Callback = void (*)(QSignalMapper*, QChildEvent*);
    using QSignalMapper_CustomEvent_Callback = void (*)(QSignalMapper*, QEvent*);
    using QSignalMapper_ConnectNotify_Callback = void (*)(QSignalMapper*, QMetaMethod*);
    using QSignalMapper_DisconnectNotify_Callback = void (*)(QSignalMapper*, QMetaMethod*);
    using QSignalMapper::isSignalConnected;
    using QSignalMapper::receivers;
    using QSignalMapper::sender;
    using QSignalMapper::senderSignalIndex;

    // Instance callback storage
    QSignalMapper_MetaObject_Callback qsignalmapper_metaobject_callback = nullptr;
    QSignalMapper_Metacast_Callback qsignalmapper_metacast_callback = nullptr;
    QSignalMapper_Metacall_Callback qsignalmapper_metacall_callback = nullptr;
    QSignalMapper_Event_Callback qsignalmapper_event_callback = nullptr;
    QSignalMapper_EventFilter_Callback qsignalmapper_eventfilter_callback = nullptr;
    QSignalMapper_TimerEvent_Callback qsignalmapper_timerevent_callback = nullptr;
    QSignalMapper_ChildEvent_Callback qsignalmapper_childevent_callback = nullptr;
    QSignalMapper_CustomEvent_Callback qsignalmapper_customevent_callback = nullptr;
    QSignalMapper_ConnectNotify_Callback qsignalmapper_connectnotify_callback = nullptr;
    QSignalMapper_DisconnectNotify_Callback qsignalmapper_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QSignalMapper {
        using QSignalMapper::childEvent;
        using QSignalMapper::connectNotify;
        using QSignalMapper::customEvent;
        using QSignalMapper::disconnectNotify;
        using QSignalMapper::timerEvent;
    };

    VirtualQSignalMapper() : QSignalMapper() {};
    VirtualQSignalMapper(QObject* parent) : QSignalMapper(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qsignalmapper_metaobject_callback) {
            QMetaObject* callback_ret = qsignalmapper_metaobject_callback(this);
            return callback_ret;
        }
        return QSignalMapper::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qsignalmapper_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qsignalmapper_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QSignalMapper::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qsignalmapper_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qsignalmapper_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QSignalMapper::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qsignalmapper_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qsignalmapper_event_callback(this, cbval1);
            return callback_ret;
        }
        return QSignalMapper::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qsignalmapper_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qsignalmapper_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QSignalMapper::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qsignalmapper_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qsignalmapper_timerevent_callback(this, cbval1);
            return;
        }
        QSignalMapper::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qsignalmapper_childevent_callback) {
            QChildEvent* cbval1 = event;
            qsignalmapper_childevent_callback(this, cbval1);
            return;
        }
        QSignalMapper::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qsignalmapper_customevent_callback) {
            QEvent* cbval1 = event;
            qsignalmapper_customevent_callback(this, cbval1);
            return;
        }
        QSignalMapper::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qsignalmapper_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qsignalmapper_connectnotify_callback(this, cbval1);
            return;
        }
        QSignalMapper::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qsignalmapper_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qsignalmapper_disconnectnotify_callback(this, cbval1);
            return;
        }
        QSignalMapper::disconnectNotify(signal);
    }

    // Friend functions
    friend void QSignalMapper_SuperTimerEvent(QSignalMapper* self, QTimerEvent* event);
    friend void QSignalMapper_SuperChildEvent(QSignalMapper* self, QChildEvent* event);
    friend void QSignalMapper_SuperCustomEvent(QSignalMapper* self, QEvent* event);
    friend void QSignalMapper_SuperConnectNotify(QSignalMapper* self, const QMetaMethod* signal);
    friend void QSignalMapper_SuperDisconnectNotify(QSignalMapper* self, const QMetaMethod* signal);
};

#endif
