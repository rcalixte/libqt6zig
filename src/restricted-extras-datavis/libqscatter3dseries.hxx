#pragma once
#ifndef RESTRICTED_EXTRAS_DATAVIS_LIBQSCATTER3DSERIES_HXX
#define RESTRICTED_EXTRAS_DATAVIS_LIBQSCATTER3DSERIES_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QScatter3DSeries
class VirtualQScatter3DSeries final : public QScatter3DSeries {
  public:
    // Virtual class public types (including callbacks and access types)
    using QScatter3DSeries_MetaObject_Callback = QMetaObject* (*)(const QScatter3DSeries*);
    using QScatter3DSeries_Metacast_Callback = void* (*)(QScatter3DSeries*, const char*);
    using QScatter3DSeries_Metacall_Callback = int (*)(QScatter3DSeries*, int, int, void**);
    using QScatter3DSeries_Event_Callback = bool (*)(QScatter3DSeries*, QEvent*);
    using QScatter3DSeries_EventFilter_Callback = bool (*)(QScatter3DSeries*, QObject*, QEvent*);
    using QScatter3DSeries_TimerEvent_Callback = void (*)(QScatter3DSeries*, QTimerEvent*);
    using QScatter3DSeries_ChildEvent_Callback = void (*)(QScatter3DSeries*, QChildEvent*);
    using QScatter3DSeries_CustomEvent_Callback = void (*)(QScatter3DSeries*, QEvent*);
    using QScatter3DSeries_ConnectNotify_Callback = void (*)(QScatter3DSeries*, QMetaMethod*);
    using QScatter3DSeries_DisconnectNotify_Callback = void (*)(QScatter3DSeries*, QMetaMethod*);
    using QScatter3DSeries::isSignalConnected;
    using QScatter3DSeries::receivers;
    using QScatter3DSeries::sender;
    using QScatter3DSeries::senderSignalIndex;

    // Instance callback storage
    QScatter3DSeries_MetaObject_Callback qscatter3dseries_metaobject_callback = nullptr;
    QScatter3DSeries_Metacast_Callback qscatter3dseries_metacast_callback = nullptr;
    QScatter3DSeries_Metacall_Callback qscatter3dseries_metacall_callback = nullptr;
    QScatter3DSeries_Event_Callback qscatter3dseries_event_callback = nullptr;
    QScatter3DSeries_EventFilter_Callback qscatter3dseries_eventfilter_callback = nullptr;
    QScatter3DSeries_TimerEvent_Callback qscatter3dseries_timerevent_callback = nullptr;
    QScatter3DSeries_ChildEvent_Callback qscatter3dseries_childevent_callback = nullptr;
    QScatter3DSeries_CustomEvent_Callback qscatter3dseries_customevent_callback = nullptr;
    QScatter3DSeries_ConnectNotify_Callback qscatter3dseries_connectnotify_callback = nullptr;
    QScatter3DSeries_DisconnectNotify_Callback qscatter3dseries_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QScatter3DSeries {
        using QScatter3DSeries::childEvent;
        using QScatter3DSeries::connectNotify;
        using QScatter3DSeries::customEvent;
        using QScatter3DSeries::disconnectNotify;
        using QScatter3DSeries::timerEvent;
    };

    VirtualQScatter3DSeries() : QScatter3DSeries() {};
    VirtualQScatter3DSeries(QScatterDataProxy* dataProxy) : QScatter3DSeries(dataProxy) {};
    VirtualQScatter3DSeries(QObject* parent) : QScatter3DSeries(parent) {};
    VirtualQScatter3DSeries(QScatterDataProxy* dataProxy, QObject* parent) : QScatter3DSeries(dataProxy, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qscatter3dseries_metaobject_callback) {
            QMetaObject* callback_ret = qscatter3dseries_metaobject_callback(this);
            return callback_ret;
        }
        return QScatter3DSeries::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qscatter3dseries_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qscatter3dseries_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QScatter3DSeries::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qscatter3dseries_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qscatter3dseries_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QScatter3DSeries::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qscatter3dseries_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qscatter3dseries_event_callback(this, cbval1);
            return callback_ret;
        }
        return QScatter3DSeries::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qscatter3dseries_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qscatter3dseries_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QScatter3DSeries::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qscatter3dseries_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qscatter3dseries_timerevent_callback(this, cbval1);
            return;
        }
        QScatter3DSeries::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qscatter3dseries_childevent_callback) {
            QChildEvent* cbval1 = event;
            qscatter3dseries_childevent_callback(this, cbval1);
            return;
        }
        QScatter3DSeries::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qscatter3dseries_customevent_callback) {
            QEvent* cbval1 = event;
            qscatter3dseries_customevent_callback(this, cbval1);
            return;
        }
        QScatter3DSeries::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qscatter3dseries_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qscatter3dseries_connectnotify_callback(this, cbval1);
            return;
        }
        QScatter3DSeries::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qscatter3dseries_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qscatter3dseries_disconnectnotify_callback(this, cbval1);
            return;
        }
        QScatter3DSeries::disconnectNotify(signal);
    }

    // Friend functions
    friend void QScatter3DSeries_SuperTimerEvent(QScatter3DSeries* self, QTimerEvent* event);
    friend void QScatter3DSeries_SuperChildEvent(QScatter3DSeries* self, QChildEvent* event);
    friend void QScatter3DSeries_SuperCustomEvent(QScatter3DSeries* self, QEvent* event);
    friend void QScatter3DSeries_SuperConnectNotify(QScatter3DSeries* self, const QMetaMethod* signal);
    friend void QScatter3DSeries_SuperDisconnectNotify(QScatter3DSeries* self, const QMetaMethod* signal);
};

#endif
