#pragma once
#ifndef RESTRICTED_EXTRAS_DATAVIS_LIBQSURFACE3DSERIES_HXX
#define RESTRICTED_EXTRAS_DATAVIS_LIBQSURFACE3DSERIES_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QSurface3DSeries
class VirtualQSurface3DSeries final : public QSurface3DSeries {
  public:
    // Virtual class public types (including callbacks and access types)
    using QSurface3DSeries_MetaObject_Callback = QMetaObject* (*)(const QSurface3DSeries*);
    using QSurface3DSeries_Metacast_Callback = void* (*)(QSurface3DSeries*, const char*);
    using QSurface3DSeries_Metacall_Callback = int (*)(QSurface3DSeries*, int, int, void**);
    using QSurface3DSeries_Event_Callback = bool (*)(QSurface3DSeries*, QEvent*);
    using QSurface3DSeries_EventFilter_Callback = bool (*)(QSurface3DSeries*, QObject*, QEvent*);
    using QSurface3DSeries_TimerEvent_Callback = void (*)(QSurface3DSeries*, QTimerEvent*);
    using QSurface3DSeries_ChildEvent_Callback = void (*)(QSurface3DSeries*, QChildEvent*);
    using QSurface3DSeries_CustomEvent_Callback = void (*)(QSurface3DSeries*, QEvent*);
    using QSurface3DSeries_ConnectNotify_Callback = void (*)(QSurface3DSeries*, QMetaMethod*);
    using QSurface3DSeries_DisconnectNotify_Callback = void (*)(QSurface3DSeries*, QMetaMethod*);
    using QSurface3DSeries::isSignalConnected;
    using QSurface3DSeries::receivers;
    using QSurface3DSeries::sender;
    using QSurface3DSeries::senderSignalIndex;

    // Instance callback storage
    QSurface3DSeries_MetaObject_Callback qsurface3dseries_metaobject_callback = nullptr;
    QSurface3DSeries_Metacast_Callback qsurface3dseries_metacast_callback = nullptr;
    QSurface3DSeries_Metacall_Callback qsurface3dseries_metacall_callback = nullptr;
    QSurface3DSeries_Event_Callback qsurface3dseries_event_callback = nullptr;
    QSurface3DSeries_EventFilter_Callback qsurface3dseries_eventfilter_callback = nullptr;
    QSurface3DSeries_TimerEvent_Callback qsurface3dseries_timerevent_callback = nullptr;
    QSurface3DSeries_ChildEvent_Callback qsurface3dseries_childevent_callback = nullptr;
    QSurface3DSeries_CustomEvent_Callback qsurface3dseries_customevent_callback = nullptr;
    QSurface3DSeries_ConnectNotify_Callback qsurface3dseries_connectnotify_callback = nullptr;
    QSurface3DSeries_DisconnectNotify_Callback qsurface3dseries_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QSurface3DSeries {
        using QSurface3DSeries::childEvent;
        using QSurface3DSeries::connectNotify;
        using QSurface3DSeries::customEvent;
        using QSurface3DSeries::disconnectNotify;
        using QSurface3DSeries::timerEvent;
    };

    VirtualQSurface3DSeries() : QSurface3DSeries() {};
    VirtualQSurface3DSeries(QSurfaceDataProxy* dataProxy) : QSurface3DSeries(dataProxy) {};
    VirtualQSurface3DSeries(QObject* parent) : QSurface3DSeries(parent) {};
    VirtualQSurface3DSeries(QSurfaceDataProxy* dataProxy, QObject* parent) : QSurface3DSeries(dataProxy, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qsurface3dseries_metaobject_callback) {
            QMetaObject* callback_ret = qsurface3dseries_metaobject_callback(this);
            return callback_ret;
        }
        return QSurface3DSeries::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qsurface3dseries_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qsurface3dseries_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QSurface3DSeries::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qsurface3dseries_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qsurface3dseries_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QSurface3DSeries::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qsurface3dseries_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qsurface3dseries_event_callback(this, cbval1);
            return callback_ret;
        }
        return QSurface3DSeries::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qsurface3dseries_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qsurface3dseries_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QSurface3DSeries::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qsurface3dseries_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qsurface3dseries_timerevent_callback(this, cbval1);
            return;
        }
        QSurface3DSeries::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qsurface3dseries_childevent_callback) {
            QChildEvent* cbval1 = event;
            qsurface3dseries_childevent_callback(this, cbval1);
            return;
        }
        QSurface3DSeries::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qsurface3dseries_customevent_callback) {
            QEvent* cbval1 = event;
            qsurface3dseries_customevent_callback(this, cbval1);
            return;
        }
        QSurface3DSeries::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qsurface3dseries_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qsurface3dseries_connectnotify_callback(this, cbval1);
            return;
        }
        QSurface3DSeries::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qsurface3dseries_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qsurface3dseries_disconnectnotify_callback(this, cbval1);
            return;
        }
        QSurface3DSeries::disconnectNotify(signal);
    }

    // Friend functions
    friend void QSurface3DSeries_SuperTimerEvent(QSurface3DSeries* self, QTimerEvent* event);
    friend void QSurface3DSeries_SuperChildEvent(QSurface3DSeries* self, QChildEvent* event);
    friend void QSurface3DSeries_SuperCustomEvent(QSurface3DSeries* self, QEvent* event);
    friend void QSurface3DSeries_SuperConnectNotify(QSurface3DSeries* self, const QMetaMethod* signal);
    friend void QSurface3DSeries_SuperDisconnectNotify(QSurface3DSeries* self, const QMetaMethod* signal);
};

#endif
