#pragma once
#ifndef POSITIONING_LIBQGEOSATELLITEINFOSOURCE_HXX
#define POSITIONING_LIBQGEOSATELLITEINFOSOURCE_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QGeoSatelliteInfoSource
class VirtualQGeoSatelliteInfoSource : public QGeoSatelliteInfoSource {
  public:
    // Virtual class public types (including callbacks and access types)
    using QGeoSatelliteInfoSource_MetaObject_Callback = QMetaObject* (*)(const QGeoSatelliteInfoSource*);
    using QGeoSatelliteInfoSource_Metacast_Callback = void* (*)(QGeoSatelliteInfoSource*, const char*);
    using QGeoSatelliteInfoSource_Metacall_Callback = int (*)(QGeoSatelliteInfoSource*, int, int, void**);
    using QGeoSatelliteInfoSource_SetUpdateInterval_Callback = void (*)(QGeoSatelliteInfoSource*, int);
    using QGeoSatelliteInfoSource_MinimumUpdateInterval_Callback = int (*)(const QGeoSatelliteInfoSource*);
    using QGeoSatelliteInfoSource_Error_Callback = int (*)(const QGeoSatelliteInfoSource*);
    using QGeoSatelliteInfoSource_SetBackendProperty_Callback = bool (*)(QGeoSatelliteInfoSource*, const char*, QVariant*);
    using QGeoSatelliteInfoSource_BackendProperty_Callback = QVariant* (*)(const QGeoSatelliteInfoSource*, const char*);
    using QGeoSatelliteInfoSource_StartUpdates_Callback = void (*)(QGeoSatelliteInfoSource*);
    using QGeoSatelliteInfoSource_StopUpdates_Callback = void (*)(QGeoSatelliteInfoSource*);
    using QGeoSatelliteInfoSource_RequestUpdate_Callback = void (*)(QGeoSatelliteInfoSource*, int);
    using QGeoSatelliteInfoSource_Event_Callback = bool (*)(QGeoSatelliteInfoSource*, QEvent*);
    using QGeoSatelliteInfoSource_EventFilter_Callback = bool (*)(QGeoSatelliteInfoSource*, QObject*, QEvent*);
    using QGeoSatelliteInfoSource_TimerEvent_Callback = void (*)(QGeoSatelliteInfoSource*, QTimerEvent*);
    using QGeoSatelliteInfoSource_ChildEvent_Callback = void (*)(QGeoSatelliteInfoSource*, QChildEvent*);
    using QGeoSatelliteInfoSource_CustomEvent_Callback = void (*)(QGeoSatelliteInfoSource*, QEvent*);
    using QGeoSatelliteInfoSource_ConnectNotify_Callback = void (*)(QGeoSatelliteInfoSource*, QMetaMethod*);
    using QGeoSatelliteInfoSource_DisconnectNotify_Callback = void (*)(QGeoSatelliteInfoSource*, QMetaMethod*);
    using QGeoSatelliteInfoSource::isSignalConnected;
    using QGeoSatelliteInfoSource::receivers;
    using QGeoSatelliteInfoSource::sender;
    using QGeoSatelliteInfoSource::senderSignalIndex;

    // Instance callback storage
    QGeoSatelliteInfoSource_MetaObject_Callback qgeosatelliteinfosource_metaobject_callback = nullptr;
    QGeoSatelliteInfoSource_Metacast_Callback qgeosatelliteinfosource_metacast_callback = nullptr;
    QGeoSatelliteInfoSource_Metacall_Callback qgeosatelliteinfosource_metacall_callback = nullptr;
    QGeoSatelliteInfoSource_SetUpdateInterval_Callback qgeosatelliteinfosource_setupdateinterval_callback = nullptr;
    QGeoSatelliteInfoSource_MinimumUpdateInterval_Callback qgeosatelliteinfosource_minimumupdateinterval_callback = nullptr;
    QGeoSatelliteInfoSource_Error_Callback qgeosatelliteinfosource_error_callback = nullptr;
    QGeoSatelliteInfoSource_SetBackendProperty_Callback qgeosatelliteinfosource_setbackendproperty_callback = nullptr;
    QGeoSatelliteInfoSource_BackendProperty_Callback qgeosatelliteinfosource_backendproperty_callback = nullptr;
    QGeoSatelliteInfoSource_StartUpdates_Callback qgeosatelliteinfosource_startupdates_callback = nullptr;
    QGeoSatelliteInfoSource_StopUpdates_Callback qgeosatelliteinfosource_stopupdates_callback = nullptr;
    QGeoSatelliteInfoSource_RequestUpdate_Callback qgeosatelliteinfosource_requestupdate_callback = nullptr;
    QGeoSatelliteInfoSource_Event_Callback qgeosatelliteinfosource_event_callback = nullptr;
    QGeoSatelliteInfoSource_EventFilter_Callback qgeosatelliteinfosource_eventfilter_callback = nullptr;
    QGeoSatelliteInfoSource_TimerEvent_Callback qgeosatelliteinfosource_timerevent_callback = nullptr;
    QGeoSatelliteInfoSource_ChildEvent_Callback qgeosatelliteinfosource_childevent_callback = nullptr;
    QGeoSatelliteInfoSource_CustomEvent_Callback qgeosatelliteinfosource_customevent_callback = nullptr;
    QGeoSatelliteInfoSource_ConnectNotify_Callback qgeosatelliteinfosource_connectnotify_callback = nullptr;
    QGeoSatelliteInfoSource_DisconnectNotify_Callback qgeosatelliteinfosource_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QGeoSatelliteInfoSource {
        using QGeoSatelliteInfoSource::childEvent;
        using QGeoSatelliteInfoSource::connectNotify;
        using QGeoSatelliteInfoSource::customEvent;
        using QGeoSatelliteInfoSource::disconnectNotify;
        using QGeoSatelliteInfoSource::timerEvent;
    };

    VirtualQGeoSatelliteInfoSource(QObject* parent) : QGeoSatelliteInfoSource(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qgeosatelliteinfosource_metaobject_callback) {
            QMetaObject* callback_ret = qgeosatelliteinfosource_metaobject_callback(this);
            return callback_ret;
        }
        return QGeoSatelliteInfoSource::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qgeosatelliteinfosource_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qgeosatelliteinfosource_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QGeoSatelliteInfoSource::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qgeosatelliteinfosource_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qgeosatelliteinfosource_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QGeoSatelliteInfoSource::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setUpdateInterval(int msec) override {
        if (qgeosatelliteinfosource_setupdateinterval_callback) {
            int cbval1 = msec;
            qgeosatelliteinfosource_setupdateinterval_callback(this, cbval1);
            return;
        }
        QGeoSatelliteInfoSource::setUpdateInterval(msec);
    }

    // Virtual method for C ABI access and custom callback
    virtual int minimumUpdateInterval() const override {
        if (qgeosatelliteinfosource_minimumupdateinterval_callback) {
            int callback_ret = qgeosatelliteinfosource_minimumupdateinterval_callback(this);
            return static_cast<int>(callback_ret);
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QGeoSatelliteInfoSource::minimumUpdateInterval called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual QGeoSatelliteInfoSource::Error error() const override {
        if (qgeosatelliteinfosource_error_callback) {
            int callback_ret = qgeosatelliteinfosource_error_callback(this);
            return static_cast<QGeoSatelliteInfoSource::Error>(callback_ret);
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QGeoSatelliteInfoSource::error called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setBackendProperty(const QString& name, const QVariant& value) override {
        if (qgeosatelliteinfosource_setbackendproperty_callback) {
            const auto name_ret = name;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray name_b = name_ret.toUtf8();
            auto name_str_len = name_b.length();
            const char* name_str = static_cast<const char*>(malloc(name_str_len + 1));
            memcpy((void*)name_str, name_b.data(), name_str_len);
            ((char*)name_str)[name_str_len] = '\0';
            const char* cbval1 = name_str;
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval2 = const_cast<QVariant*>(&value_ret);
            bool callback_ret = qgeosatelliteinfosource_setbackendproperty_callback(this, cbval1, cbval2);
            libqt_free(name_str);
            return callback_ret;
        }
        return QGeoSatelliteInfoSource::setBackendProperty(name, value);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant backendProperty(const QString& name) const override {
        if (qgeosatelliteinfosource_backendproperty_callback) {
            const auto name_ret = name;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray name_b = name_ret.toUtf8();
            auto name_str_len = name_b.length();
            const char* name_str = static_cast<const char*>(malloc(name_str_len + 1));
            memcpy((void*)name_str, name_b.data(), name_str_len);
            ((char*)name_str)[name_str_len] = '\0';
            const char* cbval1 = name_str;
            QVariant* callback_ret = qgeosatelliteinfosource_backendproperty_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            libqt_free(name_str);
            return callback_ret_Value;
        }
        return QGeoSatelliteInfoSource::backendProperty(name);
    }

    // Virtual method for C ABI access and custom callback
    virtual void startUpdates() override {
        if (qgeosatelliteinfosource_startupdates_callback) {
            qgeosatelliteinfosource_startupdates_callback(this);
            return;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QGeoSatelliteInfoSource::startUpdates called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual void stopUpdates() override {
        if (qgeosatelliteinfosource_stopupdates_callback) {
            qgeosatelliteinfosource_stopupdates_callback(this);
            return;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QGeoSatelliteInfoSource::stopUpdates called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual void requestUpdate(int timeout) override {
        if (qgeosatelliteinfosource_requestupdate_callback) {
            int cbval1 = timeout;
            qgeosatelliteinfosource_requestupdate_callback(this, cbval1);
            return;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QGeoSatelliteInfoSource::requestUpdate called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qgeosatelliteinfosource_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qgeosatelliteinfosource_event_callback(this, cbval1);
            return callback_ret;
        }
        return QGeoSatelliteInfoSource::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qgeosatelliteinfosource_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qgeosatelliteinfosource_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QGeoSatelliteInfoSource::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qgeosatelliteinfosource_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qgeosatelliteinfosource_timerevent_callback(this, cbval1);
            return;
        }
        QGeoSatelliteInfoSource::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qgeosatelliteinfosource_childevent_callback) {
            QChildEvent* cbval1 = event;
            qgeosatelliteinfosource_childevent_callback(this, cbval1);
            return;
        }
        QGeoSatelliteInfoSource::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qgeosatelliteinfosource_customevent_callback) {
            QEvent* cbval1 = event;
            qgeosatelliteinfosource_customevent_callback(this, cbval1);
            return;
        }
        QGeoSatelliteInfoSource::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qgeosatelliteinfosource_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qgeosatelliteinfosource_connectnotify_callback(this, cbval1);
            return;
        }
        QGeoSatelliteInfoSource::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qgeosatelliteinfosource_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qgeosatelliteinfosource_disconnectnotify_callback(this, cbval1);
            return;
        }
        QGeoSatelliteInfoSource::disconnectNotify(signal);
    }

    // Friend functions
    friend void QGeoSatelliteInfoSource_SuperTimerEvent(QGeoSatelliteInfoSource* self, QTimerEvent* event);
    friend void QGeoSatelliteInfoSource_SuperChildEvent(QGeoSatelliteInfoSource* self, QChildEvent* event);
    friend void QGeoSatelliteInfoSource_SuperCustomEvent(QGeoSatelliteInfoSource* self, QEvent* event);
    friend void QGeoSatelliteInfoSource_SuperConnectNotify(QGeoSatelliteInfoSource* self, const QMetaMethod* signal);
    friend void QGeoSatelliteInfoSource_SuperDisconnectNotify(QGeoSatelliteInfoSource* self, const QMetaMethod* signal);
};

#endif
