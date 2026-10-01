#pragma once
#ifndef POSITIONING_LIBQNMEAPOSITIONINFOSOURCE_HXX
#define POSITIONING_LIBQNMEAPOSITIONINFOSOURCE_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QNmeaPositionInfoSource
class VirtualQNmeaPositionInfoSource final : public QNmeaPositionInfoSource {
  public:
    // Virtual class public types (including callbacks and access types)
    using QNmeaPositionInfoSource_MetaObject_Callback = QMetaObject* (*)(const QNmeaPositionInfoSource*);
    using QNmeaPositionInfoSource_Metacast_Callback = void* (*)(QNmeaPositionInfoSource*, const char*);
    using QNmeaPositionInfoSource_Metacall_Callback = int (*)(QNmeaPositionInfoSource*, int, int, void**);
    using QNmeaPositionInfoSource_SetUpdateInterval_Callback = void (*)(QNmeaPositionInfoSource*, int);
    using QNmeaPositionInfoSource_LastKnownPosition_Callback = QGeoPositionInfo* (*)(const QNmeaPositionInfoSource*, bool);
    using QNmeaPositionInfoSource_SupportedPositioningMethods_Callback = int (*)(const QNmeaPositionInfoSource*);
    using QNmeaPositionInfoSource_MinimumUpdateInterval_Callback = int (*)(const QNmeaPositionInfoSource*);
    using QNmeaPositionInfoSource_Error_Callback = int (*)(const QNmeaPositionInfoSource*);
    using QNmeaPositionInfoSource_StartUpdates_Callback = void (*)(QNmeaPositionInfoSource*);
    using QNmeaPositionInfoSource_StopUpdates_Callback = void (*)(QNmeaPositionInfoSource*);
    using QNmeaPositionInfoSource_RequestUpdate_Callback = void (*)(QNmeaPositionInfoSource*, int);
    using QNmeaPositionInfoSource_ParsePosInfoFromNmeaData_Callback = bool (*)(QNmeaPositionInfoSource*, const char*, int, QGeoPositionInfo*, bool*);
    using QNmeaPositionInfoSource_SetPreferredPositioningMethods_Callback = void (*)(QNmeaPositionInfoSource*, int);
    using QNmeaPositionInfoSource_SetBackendProperty_Callback = bool (*)(QNmeaPositionInfoSource*, const char*, QVariant*);
    using QNmeaPositionInfoSource_BackendProperty_Callback = QVariant* (*)(const QNmeaPositionInfoSource*, const char*);
    using QNmeaPositionInfoSource_Event_Callback = bool (*)(QNmeaPositionInfoSource*, QEvent*);
    using QNmeaPositionInfoSource_EventFilter_Callback = bool (*)(QNmeaPositionInfoSource*, QObject*, QEvent*);
    using QNmeaPositionInfoSource_TimerEvent_Callback = void (*)(QNmeaPositionInfoSource*, QTimerEvent*);
    using QNmeaPositionInfoSource_ChildEvent_Callback = void (*)(QNmeaPositionInfoSource*, QChildEvent*);
    using QNmeaPositionInfoSource_CustomEvent_Callback = void (*)(QNmeaPositionInfoSource*, QEvent*);
    using QNmeaPositionInfoSource_ConnectNotify_Callback = void (*)(QNmeaPositionInfoSource*, QMetaMethod*);
    using QNmeaPositionInfoSource_DisconnectNotify_Callback = void (*)(QNmeaPositionInfoSource*, QMetaMethod*);
    using QNmeaPositionInfoSource::isSignalConnected;
    using QNmeaPositionInfoSource::parsePosInfoFromNmeaData;
    using QNmeaPositionInfoSource::receivers;
    using QNmeaPositionInfoSource::sender;
    using QNmeaPositionInfoSource::senderSignalIndex;
    using QNmeaPositionInfoSource::setError;

    // Instance callback storage
    QNmeaPositionInfoSource_MetaObject_Callback qnmeapositioninfosource_metaobject_callback = nullptr;
    QNmeaPositionInfoSource_Metacast_Callback qnmeapositioninfosource_metacast_callback = nullptr;
    QNmeaPositionInfoSource_Metacall_Callback qnmeapositioninfosource_metacall_callback = nullptr;
    QNmeaPositionInfoSource_SetUpdateInterval_Callback qnmeapositioninfosource_setupdateinterval_callback = nullptr;
    QNmeaPositionInfoSource_LastKnownPosition_Callback qnmeapositioninfosource_lastknownposition_callback = nullptr;
    QNmeaPositionInfoSource_SupportedPositioningMethods_Callback qnmeapositioninfosource_supportedpositioningmethods_callback = nullptr;
    QNmeaPositionInfoSource_MinimumUpdateInterval_Callback qnmeapositioninfosource_minimumupdateinterval_callback = nullptr;
    QNmeaPositionInfoSource_Error_Callback qnmeapositioninfosource_error_callback = nullptr;
    QNmeaPositionInfoSource_StartUpdates_Callback qnmeapositioninfosource_startupdates_callback = nullptr;
    QNmeaPositionInfoSource_StopUpdates_Callback qnmeapositioninfosource_stopupdates_callback = nullptr;
    QNmeaPositionInfoSource_RequestUpdate_Callback qnmeapositioninfosource_requestupdate_callback = nullptr;
    QNmeaPositionInfoSource_ParsePosInfoFromNmeaData_Callback qnmeapositioninfosource_parseposinfofromnmeadata_callback = nullptr;
    QNmeaPositionInfoSource_SetPreferredPositioningMethods_Callback qnmeapositioninfosource_setpreferredpositioningmethods_callback = nullptr;
    QNmeaPositionInfoSource_SetBackendProperty_Callback qnmeapositioninfosource_setbackendproperty_callback = nullptr;
    QNmeaPositionInfoSource_BackendProperty_Callback qnmeapositioninfosource_backendproperty_callback = nullptr;
    QNmeaPositionInfoSource_Event_Callback qnmeapositioninfosource_event_callback = nullptr;
    QNmeaPositionInfoSource_EventFilter_Callback qnmeapositioninfosource_eventfilter_callback = nullptr;
    QNmeaPositionInfoSource_TimerEvent_Callback qnmeapositioninfosource_timerevent_callback = nullptr;
    QNmeaPositionInfoSource_ChildEvent_Callback qnmeapositioninfosource_childevent_callback = nullptr;
    QNmeaPositionInfoSource_CustomEvent_Callback qnmeapositioninfosource_customevent_callback = nullptr;
    QNmeaPositionInfoSource_ConnectNotify_Callback qnmeapositioninfosource_connectnotify_callback = nullptr;
    QNmeaPositionInfoSource_DisconnectNotify_Callback qnmeapositioninfosource_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QNmeaPositionInfoSource {
        using QNmeaPositionInfoSource::childEvent;
        using QNmeaPositionInfoSource::connectNotify;
        using QNmeaPositionInfoSource::customEvent;
        using QNmeaPositionInfoSource::disconnectNotify;
        using QNmeaPositionInfoSource::parsePosInfoFromNmeaData;
        using QNmeaPositionInfoSource::timerEvent;
    };

    VirtualQNmeaPositionInfoSource(QNmeaPositionInfoSource::UpdateMode updateMode) : QNmeaPositionInfoSource(updateMode) {};
    VirtualQNmeaPositionInfoSource(QNmeaPositionInfoSource::UpdateMode updateMode, QObject* parent) : QNmeaPositionInfoSource(updateMode, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qnmeapositioninfosource_metaobject_callback) {
            QMetaObject* callback_ret = qnmeapositioninfosource_metaobject_callback(this);
            return callback_ret;
        }
        return QNmeaPositionInfoSource::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qnmeapositioninfosource_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qnmeapositioninfosource_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QNmeaPositionInfoSource::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qnmeapositioninfosource_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qnmeapositioninfosource_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QNmeaPositionInfoSource::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setUpdateInterval(int msec) override {
        if (qnmeapositioninfosource_setupdateinterval_callback) {
            int cbval1 = msec;
            qnmeapositioninfosource_setupdateinterval_callback(this, cbval1);
            return;
        }
        QNmeaPositionInfoSource::setUpdateInterval(msec);
    }

    // Virtual method for C ABI access and custom callback
    virtual QGeoPositionInfo lastKnownPosition(bool fromSatellitePositioningMethodsOnly) const override {
        if (qnmeapositioninfosource_lastknownposition_callback) {
            bool cbval1 = fromSatellitePositioningMethodsOnly;
            QGeoPositionInfo* callback_ret = qnmeapositioninfosource_lastknownposition_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QNmeaPositionInfoSource::lastKnownPosition(fromSatellitePositioningMethodsOnly);
    }

    // Virtual method for C ABI access and custom callback
    virtual QGeoPositionInfoSource::PositioningMethods supportedPositioningMethods() const override {
        if (qnmeapositioninfosource_supportedpositioningmethods_callback) {
            int callback_ret = qnmeapositioninfosource_supportedpositioningmethods_callback(this);
            return static_cast<QGeoPositionInfoSource::PositioningMethods>(callback_ret);
        }
        return QNmeaPositionInfoSource::supportedPositioningMethods();
    }

    // Virtual method for C ABI access and custom callback
    virtual int minimumUpdateInterval() const override {
        if (qnmeapositioninfosource_minimumupdateinterval_callback) {
            int callback_ret = qnmeapositioninfosource_minimumupdateinterval_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QNmeaPositionInfoSource::minimumUpdateInterval();
    }

    // Virtual method for C ABI access and custom callback
    virtual QGeoPositionInfoSource::Error error() const override {
        if (qnmeapositioninfosource_error_callback) {
            int callback_ret = qnmeapositioninfosource_error_callback(this);
            return static_cast<QGeoPositionInfoSource::Error>(callback_ret);
        }
        return QNmeaPositionInfoSource::error();
    }

    // Virtual method for C ABI access and custom callback
    virtual void startUpdates() override {
        if (qnmeapositioninfosource_startupdates_callback) {
            qnmeapositioninfosource_startupdates_callback(this);
            return;
        }
        QNmeaPositionInfoSource::startUpdates();
    }

    // Virtual method for C ABI access and custom callback
    virtual void stopUpdates() override {
        if (qnmeapositioninfosource_stopupdates_callback) {
            qnmeapositioninfosource_stopupdates_callback(this);
            return;
        }
        QNmeaPositionInfoSource::stopUpdates();
    }

    // Virtual method for C ABI access and custom callback
    virtual void requestUpdate(int timeout) override {
        if (qnmeapositioninfosource_requestupdate_callback) {
            int cbval1 = timeout;
            qnmeapositioninfosource_requestupdate_callback(this, cbval1);
            return;
        }
        QNmeaPositionInfoSource::requestUpdate(timeout);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool parsePosInfoFromNmeaData(const char* data, int size, QGeoPositionInfo* posInfo, bool* hasFix) override {
        if (qnmeapositioninfosource_parseposinfofromnmeadata_callback) {
            const char* cbval1 = (const char*)data;
            int cbval2 = size;
            QGeoPositionInfo* cbval3 = posInfo;
            bool* cbval4 = hasFix;
            bool callback_ret = qnmeapositioninfosource_parseposinfofromnmeadata_callback(this, cbval1, cbval2, cbval3, cbval4);
            return callback_ret;
        }
        return QNmeaPositionInfoSource::parsePosInfoFromNmeaData(data, size, posInfo, hasFix);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setPreferredPositioningMethods(QGeoPositionInfoSource::PositioningMethods methods) override {
        if (qnmeapositioninfosource_setpreferredpositioningmethods_callback) {
            int cbval1 = static_cast<int>(methods);
            qnmeapositioninfosource_setpreferredpositioningmethods_callback(this, cbval1);
            return;
        }
        QNmeaPositionInfoSource::setPreferredPositioningMethods(methods);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setBackendProperty(const QString& name, const QVariant& value) override {
        if (qnmeapositioninfosource_setbackendproperty_callback) {
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
            bool callback_ret = qnmeapositioninfosource_setbackendproperty_callback(this, cbval1, cbval2);
            libqt_free(name_str);
            return callback_ret;
        }
        return QNmeaPositionInfoSource::setBackendProperty(name, value);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant backendProperty(const QString& name) const override {
        if (qnmeapositioninfosource_backendproperty_callback) {
            const auto name_ret = name;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray name_b = name_ret.toUtf8();
            auto name_str_len = name_b.length();
            const char* name_str = static_cast<const char*>(malloc(name_str_len + 1));
            memcpy((void*)name_str, name_b.data(), name_str_len);
            ((char*)name_str)[name_str_len] = '\0';
            const char* cbval1 = name_str;
            QVariant* callback_ret = qnmeapositioninfosource_backendproperty_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            libqt_free(name_str);
            return callback_ret_Value;
        }
        return QNmeaPositionInfoSource::backendProperty(name);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qnmeapositioninfosource_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qnmeapositioninfosource_event_callback(this, cbval1);
            return callback_ret;
        }
        return QNmeaPositionInfoSource::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qnmeapositioninfosource_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qnmeapositioninfosource_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QNmeaPositionInfoSource::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qnmeapositioninfosource_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qnmeapositioninfosource_timerevent_callback(this, cbval1);
            return;
        }
        QNmeaPositionInfoSource::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qnmeapositioninfosource_childevent_callback) {
            QChildEvent* cbval1 = event;
            qnmeapositioninfosource_childevent_callback(this, cbval1);
            return;
        }
        QNmeaPositionInfoSource::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qnmeapositioninfosource_customevent_callback) {
            QEvent* cbval1 = event;
            qnmeapositioninfosource_customevent_callback(this, cbval1);
            return;
        }
        QNmeaPositionInfoSource::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qnmeapositioninfosource_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qnmeapositioninfosource_connectnotify_callback(this, cbval1);
            return;
        }
        QNmeaPositionInfoSource::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qnmeapositioninfosource_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qnmeapositioninfosource_disconnectnotify_callback(this, cbval1);
            return;
        }
        QNmeaPositionInfoSource::disconnectNotify(signal);
    }

    // Friend functions
    friend bool QNmeaPositionInfoSource_SuperParsePosInfoFromNmeaData(QNmeaPositionInfoSource* self, const char* data, int size, QGeoPositionInfo* posInfo, bool* hasFix);
    friend void QNmeaPositionInfoSource_SuperTimerEvent(QNmeaPositionInfoSource* self, QTimerEvent* event);
    friend void QNmeaPositionInfoSource_SuperChildEvent(QNmeaPositionInfoSource* self, QChildEvent* event);
    friend void QNmeaPositionInfoSource_SuperCustomEvent(QNmeaPositionInfoSource* self, QEvent* event);
    friend void QNmeaPositionInfoSource_SuperConnectNotify(QNmeaPositionInfoSource* self, const QMetaMethod* signal);
    friend void QNmeaPositionInfoSource_SuperDisconnectNotify(QNmeaPositionInfoSource* self, const QMetaMethod* signal);
};

#endif
