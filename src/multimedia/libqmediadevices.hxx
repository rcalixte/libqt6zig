#pragma once
#ifndef MULTIMEDIA_LIBQMEDIADEVICES_HXX
#define MULTIMEDIA_LIBQMEDIADEVICES_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QMediaDevices
class VirtualQMediaDevices final : public QMediaDevices {
  public:
    // Virtual class public types (including callbacks and access types)
    using QMediaDevices_MetaObject_Callback = QMetaObject* (*)(const QMediaDevices*);
    using QMediaDevices_Metacast_Callback = void* (*)(QMediaDevices*, const char*);
    using QMediaDevices_Metacall_Callback = int (*)(QMediaDevices*, int, int, void**);
    using QMediaDevices_ConnectNotify_Callback = void (*)(QMediaDevices*, QMetaMethod*);
    using QMediaDevices_Event_Callback = bool (*)(QMediaDevices*, QEvent*);
    using QMediaDevices_EventFilter_Callback = bool (*)(QMediaDevices*, QObject*, QEvent*);
    using QMediaDevices_TimerEvent_Callback = void (*)(QMediaDevices*, QTimerEvent*);
    using QMediaDevices_ChildEvent_Callback = void (*)(QMediaDevices*, QChildEvent*);
    using QMediaDevices_CustomEvent_Callback = void (*)(QMediaDevices*, QEvent*);
    using QMediaDevices_DisconnectNotify_Callback = void (*)(QMediaDevices*, QMetaMethod*);
    using QMediaDevices::isSignalConnected;
    using QMediaDevices::receivers;
    using QMediaDevices::sender;
    using QMediaDevices::senderSignalIndex;

    // Instance callback storage
    QMediaDevices_MetaObject_Callback qmediadevices_metaobject_callback = nullptr;
    QMediaDevices_Metacast_Callback qmediadevices_metacast_callback = nullptr;
    QMediaDevices_Metacall_Callback qmediadevices_metacall_callback = nullptr;
    QMediaDevices_ConnectNotify_Callback qmediadevices_connectnotify_callback = nullptr;
    QMediaDevices_Event_Callback qmediadevices_event_callback = nullptr;
    QMediaDevices_EventFilter_Callback qmediadevices_eventfilter_callback = nullptr;
    QMediaDevices_TimerEvent_Callback qmediadevices_timerevent_callback = nullptr;
    QMediaDevices_ChildEvent_Callback qmediadevices_childevent_callback = nullptr;
    QMediaDevices_CustomEvent_Callback qmediadevices_customevent_callback = nullptr;
    QMediaDevices_DisconnectNotify_Callback qmediadevices_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QMediaDevices {
        using QMediaDevices::childEvent;
        using QMediaDevices::connectNotify;
        using QMediaDevices::customEvent;
        using QMediaDevices::disconnectNotify;
        using QMediaDevices::timerEvent;
    };

    VirtualQMediaDevices() : QMediaDevices() {};
    VirtualQMediaDevices(QObject* parent) : QMediaDevices(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qmediadevices_metaobject_callback) {
            QMetaObject* callback_ret = qmediadevices_metaobject_callback(this);
            return callback_ret;
        }
        return QMediaDevices::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qmediadevices_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qmediadevices_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QMediaDevices::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qmediadevices_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qmediadevices_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QMediaDevices::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qmediadevices_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qmediadevices_connectnotify_callback(this, cbval1);
            return;
        }
        QMediaDevices::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qmediadevices_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qmediadevices_event_callback(this, cbval1);
            return callback_ret;
        }
        return QMediaDevices::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qmediadevices_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qmediadevices_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QMediaDevices::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qmediadevices_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qmediadevices_timerevent_callback(this, cbval1);
            return;
        }
        QMediaDevices::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qmediadevices_childevent_callback) {
            QChildEvent* cbval1 = event;
            qmediadevices_childevent_callback(this, cbval1);
            return;
        }
        QMediaDevices::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qmediadevices_customevent_callback) {
            QEvent* cbval1 = event;
            qmediadevices_customevent_callback(this, cbval1);
            return;
        }
        QMediaDevices::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qmediadevices_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qmediadevices_disconnectnotify_callback(this, cbval1);
            return;
        }
        QMediaDevices::disconnectNotify(signal);
    }

    // Friend functions
    friend void QMediaDevices_SuperConnectNotify(QMediaDevices* self, const QMetaMethod* signal);
    friend void QMediaDevices_SuperTimerEvent(QMediaDevices* self, QTimerEvent* event);
    friend void QMediaDevices_SuperChildEvent(QMediaDevices* self, QChildEvent* event);
    friend void QMediaDevices_SuperCustomEvent(QMediaDevices* self, QEvent* event);
    friend void QMediaDevices_SuperDisconnectNotify(QMediaDevices* self, const QMetaMethod* signal);
};

#endif
