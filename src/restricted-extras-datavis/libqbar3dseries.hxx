#pragma once
#ifndef RESTRICTED_EXTRAS_DATAVIS_LIBQBAR3DSERIES_HXX
#define RESTRICTED_EXTRAS_DATAVIS_LIBQBAR3DSERIES_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QBar3DSeries
class VirtualQBar3DSeries final : public QBar3DSeries {
  public:
    // Virtual class public types (including callbacks and access types)
    using QBar3DSeries_MetaObject_Callback = QMetaObject* (*)(const QBar3DSeries*);
    using QBar3DSeries_Metacast_Callback = void* (*)(QBar3DSeries*, const char*);
    using QBar3DSeries_Metacall_Callback = int (*)(QBar3DSeries*, int, int, void**);
    using QBar3DSeries_Event_Callback = bool (*)(QBar3DSeries*, QEvent*);
    using QBar3DSeries_EventFilter_Callback = bool (*)(QBar3DSeries*, QObject*, QEvent*);
    using QBar3DSeries_TimerEvent_Callback = void (*)(QBar3DSeries*, QTimerEvent*);
    using QBar3DSeries_ChildEvent_Callback = void (*)(QBar3DSeries*, QChildEvent*);
    using QBar3DSeries_CustomEvent_Callback = void (*)(QBar3DSeries*, QEvent*);
    using QBar3DSeries_ConnectNotify_Callback = void (*)(QBar3DSeries*, QMetaMethod*);
    using QBar3DSeries_DisconnectNotify_Callback = void (*)(QBar3DSeries*, QMetaMethod*);
    using QBar3DSeries::isSignalConnected;
    using QBar3DSeries::receivers;
    using QBar3DSeries::sender;
    using QBar3DSeries::senderSignalIndex;

    // Instance callback storage
    QBar3DSeries_MetaObject_Callback qbar3dseries_metaobject_callback = nullptr;
    QBar3DSeries_Metacast_Callback qbar3dseries_metacast_callback = nullptr;
    QBar3DSeries_Metacall_Callback qbar3dseries_metacall_callback = nullptr;
    QBar3DSeries_Event_Callback qbar3dseries_event_callback = nullptr;
    QBar3DSeries_EventFilter_Callback qbar3dseries_eventfilter_callback = nullptr;
    QBar3DSeries_TimerEvent_Callback qbar3dseries_timerevent_callback = nullptr;
    QBar3DSeries_ChildEvent_Callback qbar3dseries_childevent_callback = nullptr;
    QBar3DSeries_CustomEvent_Callback qbar3dseries_customevent_callback = nullptr;
    QBar3DSeries_ConnectNotify_Callback qbar3dseries_connectnotify_callback = nullptr;
    QBar3DSeries_DisconnectNotify_Callback qbar3dseries_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QBar3DSeries {
        using QBar3DSeries::childEvent;
        using QBar3DSeries::connectNotify;
        using QBar3DSeries::customEvent;
        using QBar3DSeries::disconnectNotify;
        using QBar3DSeries::timerEvent;
    };

    VirtualQBar3DSeries() : QBar3DSeries() {};
    VirtualQBar3DSeries(QBarDataProxy* dataProxy) : QBar3DSeries(dataProxy) {};
    VirtualQBar3DSeries(QObject* parent) : QBar3DSeries(parent) {};
    VirtualQBar3DSeries(QBarDataProxy* dataProxy, QObject* parent) : QBar3DSeries(dataProxy, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qbar3dseries_metaobject_callback) {
            QMetaObject* callback_ret = qbar3dseries_metaobject_callback(this);
            return callback_ret;
        }
        return QBar3DSeries::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qbar3dseries_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qbar3dseries_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QBar3DSeries::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qbar3dseries_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qbar3dseries_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QBar3DSeries::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qbar3dseries_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qbar3dseries_event_callback(this, cbval1);
            return callback_ret;
        }
        return QBar3DSeries::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qbar3dseries_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qbar3dseries_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QBar3DSeries::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qbar3dseries_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qbar3dseries_timerevent_callback(this, cbval1);
            return;
        }
        QBar3DSeries::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qbar3dseries_childevent_callback) {
            QChildEvent* cbval1 = event;
            qbar3dseries_childevent_callback(this, cbval1);
            return;
        }
        QBar3DSeries::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qbar3dseries_customevent_callback) {
            QEvent* cbval1 = event;
            qbar3dseries_customevent_callback(this, cbval1);
            return;
        }
        QBar3DSeries::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qbar3dseries_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qbar3dseries_connectnotify_callback(this, cbval1);
            return;
        }
        QBar3DSeries::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qbar3dseries_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qbar3dseries_disconnectnotify_callback(this, cbval1);
            return;
        }
        QBar3DSeries::disconnectNotify(signal);
    }

    // Friend functions
    friend void QBar3DSeries_SuperTimerEvent(QBar3DSeries* self, QTimerEvent* event);
    friend void QBar3DSeries_SuperChildEvent(QBar3DSeries* self, QChildEvent* event);
    friend void QBar3DSeries_SuperCustomEvent(QBar3DSeries* self, QEvent* event);
    friend void QBar3DSeries_SuperConnectNotify(QBar3DSeries* self, const QMetaMethod* signal);
    friend void QBar3DSeries_SuperDisconnectNotify(QBar3DSeries* self, const QMetaMethod* signal);
};

#endif
