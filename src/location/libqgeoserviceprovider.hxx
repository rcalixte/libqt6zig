#pragma once
#ifndef LOCATION_LIBQGEOSERVICEPROVIDER_HXX
#define LOCATION_LIBQGEOSERVICEPROVIDER_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QGeoServiceProvider
class VirtualQGeoServiceProvider final : public QGeoServiceProvider {
  public:
    // Virtual class public types (including callbacks and access types)
    using QGeoServiceProvider_MetaObject_Callback = QMetaObject* (*)(const QGeoServiceProvider*);
    using QGeoServiceProvider_Metacast_Callback = void* (*)(QGeoServiceProvider*, const char*);
    using QGeoServiceProvider_Metacall_Callback = int (*)(QGeoServiceProvider*, int, int, void**);
    using QGeoServiceProvider_Event_Callback = bool (*)(QGeoServiceProvider*, QEvent*);
    using QGeoServiceProvider_EventFilter_Callback = bool (*)(QGeoServiceProvider*, QObject*, QEvent*);
    using QGeoServiceProvider_TimerEvent_Callback = void (*)(QGeoServiceProvider*, QTimerEvent*);
    using QGeoServiceProvider_ChildEvent_Callback = void (*)(QGeoServiceProvider*, QChildEvent*);
    using QGeoServiceProvider_CustomEvent_Callback = void (*)(QGeoServiceProvider*, QEvent*);
    using QGeoServiceProvider_ConnectNotify_Callback = void (*)(QGeoServiceProvider*, QMetaMethod*);
    using QGeoServiceProvider_DisconnectNotify_Callback = void (*)(QGeoServiceProvider*, QMetaMethod*);
    using QGeoServiceProvider::isSignalConnected;
    using QGeoServiceProvider::receivers;
    using QGeoServiceProvider::sender;
    using QGeoServiceProvider::senderSignalIndex;

    // Instance callback storage
    QGeoServiceProvider_MetaObject_Callback qgeoserviceprovider_metaobject_callback = nullptr;
    QGeoServiceProvider_Metacast_Callback qgeoserviceprovider_metacast_callback = nullptr;
    QGeoServiceProvider_Metacall_Callback qgeoserviceprovider_metacall_callback = nullptr;
    QGeoServiceProvider_Event_Callback qgeoserviceprovider_event_callback = nullptr;
    QGeoServiceProvider_EventFilter_Callback qgeoserviceprovider_eventfilter_callback = nullptr;
    QGeoServiceProvider_TimerEvent_Callback qgeoserviceprovider_timerevent_callback = nullptr;
    QGeoServiceProvider_ChildEvent_Callback qgeoserviceprovider_childevent_callback = nullptr;
    QGeoServiceProvider_CustomEvent_Callback qgeoserviceprovider_customevent_callback = nullptr;
    QGeoServiceProvider_ConnectNotify_Callback qgeoserviceprovider_connectnotify_callback = nullptr;
    QGeoServiceProvider_DisconnectNotify_Callback qgeoserviceprovider_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QGeoServiceProvider {
        using QGeoServiceProvider::childEvent;
        using QGeoServiceProvider::connectNotify;
        using QGeoServiceProvider::customEvent;
        using QGeoServiceProvider::disconnectNotify;
        using QGeoServiceProvider::timerEvent;
    };

    VirtualQGeoServiceProvider(const QString& providerName) : QGeoServiceProvider(providerName) {};
    VirtualQGeoServiceProvider(const QString& providerName, const QMap<QString, QVariant>& parameters) : QGeoServiceProvider(providerName, parameters) {};
    VirtualQGeoServiceProvider(const QString& providerName, const QMap<QString, QVariant>& parameters, bool allowExperimental) : QGeoServiceProvider(providerName, parameters, allowExperimental) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qgeoserviceprovider_metaobject_callback) {
            QMetaObject* callback_ret = qgeoserviceprovider_metaobject_callback(this);
            return callback_ret;
        }
        return QGeoServiceProvider::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qgeoserviceprovider_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qgeoserviceprovider_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QGeoServiceProvider::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qgeoserviceprovider_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qgeoserviceprovider_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QGeoServiceProvider::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qgeoserviceprovider_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qgeoserviceprovider_event_callback(this, cbval1);
            return callback_ret;
        }
        return QGeoServiceProvider::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qgeoserviceprovider_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qgeoserviceprovider_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QGeoServiceProvider::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qgeoserviceprovider_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qgeoserviceprovider_timerevent_callback(this, cbval1);
            return;
        }
        QGeoServiceProvider::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qgeoserviceprovider_childevent_callback) {
            QChildEvent* cbval1 = event;
            qgeoserviceprovider_childevent_callback(this, cbval1);
            return;
        }
        QGeoServiceProvider::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qgeoserviceprovider_customevent_callback) {
            QEvent* cbval1 = event;
            qgeoserviceprovider_customevent_callback(this, cbval1);
            return;
        }
        QGeoServiceProvider::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qgeoserviceprovider_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qgeoserviceprovider_connectnotify_callback(this, cbval1);
            return;
        }
        QGeoServiceProvider::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qgeoserviceprovider_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qgeoserviceprovider_disconnectnotify_callback(this, cbval1);
            return;
        }
        QGeoServiceProvider::disconnectNotify(signal);
    }

    // Friend functions
    friend void QGeoServiceProvider_SuperTimerEvent(QGeoServiceProvider* self, QTimerEvent* event);
    friend void QGeoServiceProvider_SuperChildEvent(QGeoServiceProvider* self, QChildEvent* event);
    friend void QGeoServiceProvider_SuperCustomEvent(QGeoServiceProvider* self, QEvent* event);
    friend void QGeoServiceProvider_SuperConnectNotify(QGeoServiceProvider* self, const QMetaMethod* signal);
    friend void QGeoServiceProvider_SuperDisconnectNotify(QGeoServiceProvider* self, const QMetaMethod* signal);
};

#endif
