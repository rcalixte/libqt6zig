#pragma once
#ifndef POSITIONING_LIBQGEOPOSITIONINFOSOURCE_HXX
#define POSITIONING_LIBQGEOPOSITIONINFOSOURCE_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QGeoPositionInfoSource
class VirtualQGeoPositionInfoSource : public QGeoPositionInfoSource {
  public:
    // Virtual class public types (including callbacks and access types)
    using QGeoPositionInfoSource_MetaObject_Callback = QMetaObject* (*)(const QGeoPositionInfoSource*);
    using QGeoPositionInfoSource_Metacast_Callback = void* (*)(QGeoPositionInfoSource*, const char*);
    using QGeoPositionInfoSource_Metacall_Callback = int (*)(QGeoPositionInfoSource*, int, int, void**);
    using QGeoPositionInfoSource_SetUpdateInterval_Callback = void (*)(QGeoPositionInfoSource*, int);
    using QGeoPositionInfoSource_SetPreferredPositioningMethods_Callback = void (*)(QGeoPositionInfoSource*, int);
    using QGeoPositionInfoSource_LastKnownPosition_Callback = QGeoPositionInfo* (*)(const QGeoPositionInfoSource*, bool);
    using QGeoPositionInfoSource_SupportedPositioningMethods_Callback = int (*)(const QGeoPositionInfoSource*);
    using QGeoPositionInfoSource_MinimumUpdateInterval_Callback = int (*)(const QGeoPositionInfoSource*);
    using QGeoPositionInfoSource_SetBackendProperty_Callback = bool (*)(QGeoPositionInfoSource*, const char*, QVariant*);
    using QGeoPositionInfoSource_BackendProperty_Callback = QVariant* (*)(const QGeoPositionInfoSource*, const char*);
    using QGeoPositionInfoSource_Error_Callback = int (*)(const QGeoPositionInfoSource*);
    using QGeoPositionInfoSource_StartUpdates_Callback = void (*)(QGeoPositionInfoSource*);
    using QGeoPositionInfoSource_StopUpdates_Callback = void (*)(QGeoPositionInfoSource*);
    using QGeoPositionInfoSource_RequestUpdate_Callback = void (*)(QGeoPositionInfoSource*, int);
    using QGeoPositionInfoSource_Event_Callback = bool (*)(QGeoPositionInfoSource*, QEvent*);
    using QGeoPositionInfoSource_EventFilter_Callback = bool (*)(QGeoPositionInfoSource*, QObject*, QEvent*);
    using QGeoPositionInfoSource_TimerEvent_Callback = void (*)(QGeoPositionInfoSource*, QTimerEvent*);
    using QGeoPositionInfoSource_ChildEvent_Callback = void (*)(QGeoPositionInfoSource*, QChildEvent*);
    using QGeoPositionInfoSource_CustomEvent_Callback = void (*)(QGeoPositionInfoSource*, QEvent*);
    using QGeoPositionInfoSource_ConnectNotify_Callback = void (*)(QGeoPositionInfoSource*, QMetaMethod*);
    using QGeoPositionInfoSource_DisconnectNotify_Callback = void (*)(QGeoPositionInfoSource*, QMetaMethod*);
    using QGeoPositionInfoSource::isSignalConnected;
    using QGeoPositionInfoSource::receivers;
    using QGeoPositionInfoSource::sender;
    using QGeoPositionInfoSource::senderSignalIndex;

    // Instance callback storage
    QGeoPositionInfoSource_MetaObject_Callback qgeopositioninfosource_metaobject_callback = nullptr;
    QGeoPositionInfoSource_Metacast_Callback qgeopositioninfosource_metacast_callback = nullptr;
    QGeoPositionInfoSource_Metacall_Callback qgeopositioninfosource_metacall_callback = nullptr;
    QGeoPositionInfoSource_SetUpdateInterval_Callback qgeopositioninfosource_setupdateinterval_callback = nullptr;
    QGeoPositionInfoSource_SetPreferredPositioningMethods_Callback qgeopositioninfosource_setpreferredpositioningmethods_callback = nullptr;
    QGeoPositionInfoSource_LastKnownPosition_Callback qgeopositioninfosource_lastknownposition_callback = nullptr;
    QGeoPositionInfoSource_SupportedPositioningMethods_Callback qgeopositioninfosource_supportedpositioningmethods_callback = nullptr;
    QGeoPositionInfoSource_MinimumUpdateInterval_Callback qgeopositioninfosource_minimumupdateinterval_callback = nullptr;
    QGeoPositionInfoSource_SetBackendProperty_Callback qgeopositioninfosource_setbackendproperty_callback = nullptr;
    QGeoPositionInfoSource_BackendProperty_Callback qgeopositioninfosource_backendproperty_callback = nullptr;
    QGeoPositionInfoSource_Error_Callback qgeopositioninfosource_error_callback = nullptr;
    QGeoPositionInfoSource_StartUpdates_Callback qgeopositioninfosource_startupdates_callback = nullptr;
    QGeoPositionInfoSource_StopUpdates_Callback qgeopositioninfosource_stopupdates_callback = nullptr;
    QGeoPositionInfoSource_RequestUpdate_Callback qgeopositioninfosource_requestupdate_callback = nullptr;
    QGeoPositionInfoSource_Event_Callback qgeopositioninfosource_event_callback = nullptr;
    QGeoPositionInfoSource_EventFilter_Callback qgeopositioninfosource_eventfilter_callback = nullptr;
    QGeoPositionInfoSource_TimerEvent_Callback qgeopositioninfosource_timerevent_callback = nullptr;
    QGeoPositionInfoSource_ChildEvent_Callback qgeopositioninfosource_childevent_callback = nullptr;
    QGeoPositionInfoSource_CustomEvent_Callback qgeopositioninfosource_customevent_callback = nullptr;
    QGeoPositionInfoSource_ConnectNotify_Callback qgeopositioninfosource_connectnotify_callback = nullptr;
    QGeoPositionInfoSource_DisconnectNotify_Callback qgeopositioninfosource_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QGeoPositionInfoSource {
        using QGeoPositionInfoSource::childEvent;
        using QGeoPositionInfoSource::connectNotify;
        using QGeoPositionInfoSource::customEvent;
        using QGeoPositionInfoSource::disconnectNotify;
        using QGeoPositionInfoSource::timerEvent;
    };

    VirtualQGeoPositionInfoSource(QObject* parent) : QGeoPositionInfoSource(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qgeopositioninfosource_metaobject_callback) {
            QMetaObject* callback_ret = qgeopositioninfosource_metaobject_callback(this);
            return callback_ret;
        }
        return QGeoPositionInfoSource::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qgeopositioninfosource_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qgeopositioninfosource_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QGeoPositionInfoSource::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qgeopositioninfosource_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qgeopositioninfosource_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QGeoPositionInfoSource::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setUpdateInterval(int msec) override {
        if (qgeopositioninfosource_setupdateinterval_callback) {
            int cbval1 = msec;
            qgeopositioninfosource_setupdateinterval_callback(this, cbval1);
            return;
        }
        QGeoPositionInfoSource::setUpdateInterval(msec);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setPreferredPositioningMethods(QGeoPositionInfoSource::PositioningMethods methods) override {
        if (qgeopositioninfosource_setpreferredpositioningmethods_callback) {
            int cbval1 = static_cast<int>(methods);
            qgeopositioninfosource_setpreferredpositioningmethods_callback(this, cbval1);
            return;
        }
        QGeoPositionInfoSource::setPreferredPositioningMethods(methods);
    }

    // Virtual method for C ABI access and custom callback
    virtual QGeoPositionInfo lastKnownPosition(bool fromSatellitePositioningMethodsOnly) const override {
        if (qgeopositioninfosource_lastknownposition_callback) {
            bool cbval1 = fromSatellitePositioningMethodsOnly;
            QGeoPositionInfo* callback_ret = qgeopositioninfosource_lastknownposition_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QGeoPositionInfoSource::lastKnownPosition called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual QGeoPositionInfoSource::PositioningMethods supportedPositioningMethods() const override {
        if (qgeopositioninfosource_supportedpositioningmethods_callback) {
            int callback_ret = qgeopositioninfosource_supportedpositioningmethods_callback(this);
            return static_cast<QGeoPositionInfoSource::PositioningMethods>(callback_ret);
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QGeoPositionInfoSource::supportedPositioningMethods called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual int minimumUpdateInterval() const override {
        if (qgeopositioninfosource_minimumupdateinterval_callback) {
            int callback_ret = qgeopositioninfosource_minimumupdateinterval_callback(this);
            return static_cast<int>(callback_ret);
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QGeoPositionInfoSource::minimumUpdateInterval called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setBackendProperty(const QString& name, const QVariant& value) override {
        if (qgeopositioninfosource_setbackendproperty_callback) {
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
            bool callback_ret = qgeopositioninfosource_setbackendproperty_callback(this, cbval1, cbval2);
            libqt_free(name_str);
            return callback_ret;
        }
        return QGeoPositionInfoSource::setBackendProperty(name, value);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant backendProperty(const QString& name) const override {
        if (qgeopositioninfosource_backendproperty_callback) {
            const auto name_ret = name;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray name_b = name_ret.toUtf8();
            auto name_str_len = name_b.length();
            const char* name_str = static_cast<const char*>(malloc(name_str_len + 1));
            memcpy((void*)name_str, name_b.data(), name_str_len);
            ((char*)name_str)[name_str_len] = '\0';
            const char* cbval1 = name_str;
            QVariant* callback_ret = qgeopositioninfosource_backendproperty_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            libqt_free(name_str);
            return callback_ret_Value;
        }
        return QGeoPositionInfoSource::backendProperty(name);
    }

    // Virtual method for C ABI access and custom callback
    virtual QGeoPositionInfoSource::Error error() const override {
        if (qgeopositioninfosource_error_callback) {
            int callback_ret = qgeopositioninfosource_error_callback(this);
            return static_cast<QGeoPositionInfoSource::Error>(callback_ret);
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QGeoPositionInfoSource::error called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual void startUpdates() override {
        if (qgeopositioninfosource_startupdates_callback) {
            qgeopositioninfosource_startupdates_callback(this);
            return;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QGeoPositionInfoSource::startUpdates called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual void stopUpdates() override {
        if (qgeopositioninfosource_stopupdates_callback) {
            qgeopositioninfosource_stopupdates_callback(this);
            return;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QGeoPositionInfoSource::stopUpdates called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual void requestUpdate(int timeout) override {
        if (qgeopositioninfosource_requestupdate_callback) {
            int cbval1 = timeout;
            qgeopositioninfosource_requestupdate_callback(this, cbval1);
            return;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QGeoPositionInfoSource::requestUpdate called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qgeopositioninfosource_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qgeopositioninfosource_event_callback(this, cbval1);
            return callback_ret;
        }
        return QGeoPositionInfoSource::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qgeopositioninfosource_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qgeopositioninfosource_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QGeoPositionInfoSource::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qgeopositioninfosource_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qgeopositioninfosource_timerevent_callback(this, cbval1);
            return;
        }
        QGeoPositionInfoSource::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qgeopositioninfosource_childevent_callback) {
            QChildEvent* cbval1 = event;
            qgeopositioninfosource_childevent_callback(this, cbval1);
            return;
        }
        QGeoPositionInfoSource::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qgeopositioninfosource_customevent_callback) {
            QEvent* cbval1 = event;
            qgeopositioninfosource_customevent_callback(this, cbval1);
            return;
        }
        QGeoPositionInfoSource::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qgeopositioninfosource_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qgeopositioninfosource_connectnotify_callback(this, cbval1);
            return;
        }
        QGeoPositionInfoSource::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qgeopositioninfosource_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qgeopositioninfosource_disconnectnotify_callback(this, cbval1);
            return;
        }
        QGeoPositionInfoSource::disconnectNotify(signal);
    }

    // Friend functions
    friend void QGeoPositionInfoSource_SuperTimerEvent(QGeoPositionInfoSource* self, QTimerEvent* event);
    friend void QGeoPositionInfoSource_SuperChildEvent(QGeoPositionInfoSource* self, QChildEvent* event);
    friend void QGeoPositionInfoSource_SuperCustomEvent(QGeoPositionInfoSource* self, QEvent* event);
    friend void QGeoPositionInfoSource_SuperConnectNotify(QGeoPositionInfoSource* self, const QMetaMethod* signal);
    friend void QGeoPositionInfoSource_SuperDisconnectNotify(QGeoPositionInfoSource* self, const QMetaMethod* signal);
};

#endif
