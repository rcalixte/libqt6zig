#pragma once
#ifndef POSITIONING_LIBQNMEASATELLITEINFOSOURCE_HXX
#define POSITIONING_LIBQNMEASATELLITEINFOSOURCE_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QNmeaSatelliteInfoSource
class VirtualQNmeaSatelliteInfoSource final : public QNmeaSatelliteInfoSource {
  public:
    // Virtual class public types (including callbacks and access types)
    using QNmeaSatelliteInfoSource::SatelliteInfoParseStatus;
    using QNmeaSatelliteInfoSource_MetaObject_Callback = QMetaObject* (*)(const QNmeaSatelliteInfoSource*);
    using QNmeaSatelliteInfoSource_Metacast_Callback = void* (*)(QNmeaSatelliteInfoSource*, const char*);
    using QNmeaSatelliteInfoSource_Metacall_Callback = int (*)(QNmeaSatelliteInfoSource*, int, int, void**);
    using QNmeaSatelliteInfoSource_SetUpdateInterval_Callback = void (*)(QNmeaSatelliteInfoSource*, int);
    using QNmeaSatelliteInfoSource_MinimumUpdateInterval_Callback = int (*)(const QNmeaSatelliteInfoSource*);
    using QNmeaSatelliteInfoSource_Error_Callback = int (*)(const QNmeaSatelliteInfoSource*);
    using QNmeaSatelliteInfoSource_SetBackendProperty_Callback = bool (*)(QNmeaSatelliteInfoSource*, const char*, QVariant*);
    using QNmeaSatelliteInfoSource_BackendProperty_Callback = QVariant* (*)(const QNmeaSatelliteInfoSource*, const char*);
    using QNmeaSatelliteInfoSource_StartUpdates_Callback = void (*)(QNmeaSatelliteInfoSource*);
    using QNmeaSatelliteInfoSource_StopUpdates_Callback = void (*)(QNmeaSatelliteInfoSource*);
    using QNmeaSatelliteInfoSource_RequestUpdate_Callback = void (*)(QNmeaSatelliteInfoSource*, int);
    using QNmeaSatelliteInfoSource_ParseSatellitesInUseFromNmea_Callback = int (*)(QNmeaSatelliteInfoSource*, const char*, int, libqt_list /* of int */);
    using QNmeaSatelliteInfoSource_ParseSatelliteInfoFromNmea_Callback = int (*)(QNmeaSatelliteInfoSource*, const char*, int, libqt_list /* of QGeoSatelliteInfo* */, int*);
    using QNmeaSatelliteInfoSource_Event_Callback = bool (*)(QNmeaSatelliteInfoSource*, QEvent*);
    using QNmeaSatelliteInfoSource_EventFilter_Callback = bool (*)(QNmeaSatelliteInfoSource*, QObject*, QEvent*);
    using QNmeaSatelliteInfoSource_TimerEvent_Callback = void (*)(QNmeaSatelliteInfoSource*, QTimerEvent*);
    using QNmeaSatelliteInfoSource_ChildEvent_Callback = void (*)(QNmeaSatelliteInfoSource*, QChildEvent*);
    using QNmeaSatelliteInfoSource_CustomEvent_Callback = void (*)(QNmeaSatelliteInfoSource*, QEvent*);
    using QNmeaSatelliteInfoSource_ConnectNotify_Callback = void (*)(QNmeaSatelliteInfoSource*, QMetaMethod*);
    using QNmeaSatelliteInfoSource_DisconnectNotify_Callback = void (*)(QNmeaSatelliteInfoSource*, QMetaMethod*);
    using QNmeaSatelliteInfoSource::isSignalConnected;
    using QNmeaSatelliteInfoSource::parseSatelliteInfoFromNmea;
    using QNmeaSatelliteInfoSource::parseSatellitesInUseFromNmea;
    using QNmeaSatelliteInfoSource::receivers;
    using QNmeaSatelliteInfoSource::sender;
    using QNmeaSatelliteInfoSource::senderSignalIndex;
    using QNmeaSatelliteInfoSource::setError;

    // Instance callback storage
    QNmeaSatelliteInfoSource_MetaObject_Callback qnmeasatelliteinfosource_metaobject_callback = nullptr;
    QNmeaSatelliteInfoSource_Metacast_Callback qnmeasatelliteinfosource_metacast_callback = nullptr;
    QNmeaSatelliteInfoSource_Metacall_Callback qnmeasatelliteinfosource_metacall_callback = nullptr;
    QNmeaSatelliteInfoSource_SetUpdateInterval_Callback qnmeasatelliteinfosource_setupdateinterval_callback = nullptr;
    QNmeaSatelliteInfoSource_MinimumUpdateInterval_Callback qnmeasatelliteinfosource_minimumupdateinterval_callback = nullptr;
    QNmeaSatelliteInfoSource_Error_Callback qnmeasatelliteinfosource_error_callback = nullptr;
    QNmeaSatelliteInfoSource_SetBackendProperty_Callback qnmeasatelliteinfosource_setbackendproperty_callback = nullptr;
    QNmeaSatelliteInfoSource_BackendProperty_Callback qnmeasatelliteinfosource_backendproperty_callback = nullptr;
    QNmeaSatelliteInfoSource_StartUpdates_Callback qnmeasatelliteinfosource_startupdates_callback = nullptr;
    QNmeaSatelliteInfoSource_StopUpdates_Callback qnmeasatelliteinfosource_stopupdates_callback = nullptr;
    QNmeaSatelliteInfoSource_RequestUpdate_Callback qnmeasatelliteinfosource_requestupdate_callback = nullptr;
    QNmeaSatelliteInfoSource_ParseSatellitesInUseFromNmea_Callback qnmeasatelliteinfosource_parsesatellitesinusefromnmea_callback = nullptr;
    QNmeaSatelliteInfoSource_ParseSatelliteInfoFromNmea_Callback qnmeasatelliteinfosource_parsesatelliteinfofromnmea_callback = nullptr;
    QNmeaSatelliteInfoSource_Event_Callback qnmeasatelliteinfosource_event_callback = nullptr;
    QNmeaSatelliteInfoSource_EventFilter_Callback qnmeasatelliteinfosource_eventfilter_callback = nullptr;
    QNmeaSatelliteInfoSource_TimerEvent_Callback qnmeasatelliteinfosource_timerevent_callback = nullptr;
    QNmeaSatelliteInfoSource_ChildEvent_Callback qnmeasatelliteinfosource_childevent_callback = nullptr;
    QNmeaSatelliteInfoSource_CustomEvent_Callback qnmeasatelliteinfosource_customevent_callback = nullptr;
    QNmeaSatelliteInfoSource_ConnectNotify_Callback qnmeasatelliteinfosource_connectnotify_callback = nullptr;
    QNmeaSatelliteInfoSource_DisconnectNotify_Callback qnmeasatelliteinfosource_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QNmeaSatelliteInfoSource {
        using QNmeaSatelliteInfoSource::childEvent;
        using QNmeaSatelliteInfoSource::connectNotify;
        using QNmeaSatelliteInfoSource::customEvent;
        using QNmeaSatelliteInfoSource::disconnectNotify;
        using QNmeaSatelliteInfoSource::parseSatelliteInfoFromNmea;
        using QNmeaSatelliteInfoSource::parseSatellitesInUseFromNmea;
        using QNmeaSatelliteInfoSource::timerEvent;
    };

    VirtualQNmeaSatelliteInfoSource(QNmeaSatelliteInfoSource::UpdateMode mode) : QNmeaSatelliteInfoSource(mode) {};
    VirtualQNmeaSatelliteInfoSource(QNmeaSatelliteInfoSource::UpdateMode mode, QObject* parent) : QNmeaSatelliteInfoSource(mode, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qnmeasatelliteinfosource_metaobject_callback) {
            QMetaObject* callback_ret = qnmeasatelliteinfosource_metaobject_callback(this);
            return callback_ret;
        }
        return QNmeaSatelliteInfoSource::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qnmeasatelliteinfosource_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qnmeasatelliteinfosource_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QNmeaSatelliteInfoSource::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qnmeasatelliteinfosource_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qnmeasatelliteinfosource_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QNmeaSatelliteInfoSource::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setUpdateInterval(int msec) override {
        if (qnmeasatelliteinfosource_setupdateinterval_callback) {
            int cbval1 = msec;
            qnmeasatelliteinfosource_setupdateinterval_callback(this, cbval1);
            return;
        }
        QNmeaSatelliteInfoSource::setUpdateInterval(msec);
    }

    // Virtual method for C ABI access and custom callback
    virtual int minimumUpdateInterval() const override {
        if (qnmeasatelliteinfosource_minimumupdateinterval_callback) {
            int callback_ret = qnmeasatelliteinfosource_minimumupdateinterval_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QNmeaSatelliteInfoSource::minimumUpdateInterval();
    }

    // Virtual method for C ABI access and custom callback
    virtual QGeoSatelliteInfoSource::Error error() const override {
        if (qnmeasatelliteinfosource_error_callback) {
            int callback_ret = qnmeasatelliteinfosource_error_callback(this);
            return static_cast<QGeoSatelliteInfoSource::Error>(callback_ret);
        }
        return QNmeaSatelliteInfoSource::error();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setBackendProperty(const QString& name, const QVariant& value) override {
        if (qnmeasatelliteinfosource_setbackendproperty_callback) {
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
            bool callback_ret = qnmeasatelliteinfosource_setbackendproperty_callback(this, cbval1, cbval2);
            libqt_free(name_str);
            return callback_ret;
        }
        return QNmeaSatelliteInfoSource::setBackendProperty(name, value);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant backendProperty(const QString& name) const override {
        if (qnmeasatelliteinfosource_backendproperty_callback) {
            const auto name_ret = name;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray name_b = name_ret.toUtf8();
            auto name_str_len = name_b.length();
            const char* name_str = static_cast<const char*>(malloc(name_str_len + 1));
            memcpy((void*)name_str, name_b.data(), name_str_len);
            ((char*)name_str)[name_str_len] = '\0';
            const char* cbval1 = name_str;
            QVariant* callback_ret = qnmeasatelliteinfosource_backendproperty_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            libqt_free(name_str);
            return callback_ret_Value;
        }
        return QNmeaSatelliteInfoSource::backendProperty(name);
    }

    // Virtual method for C ABI access and custom callback
    virtual void startUpdates() override {
        if (qnmeasatelliteinfosource_startupdates_callback) {
            qnmeasatelliteinfosource_startupdates_callback(this);
            return;
        }
        QNmeaSatelliteInfoSource::startUpdates();
    }

    // Virtual method for C ABI access and custom callback
    virtual void stopUpdates() override {
        if (qnmeasatelliteinfosource_stopupdates_callback) {
            qnmeasatelliteinfosource_stopupdates_callback(this);
            return;
        }
        QNmeaSatelliteInfoSource::stopUpdates();
    }

    // Virtual method for C ABI access and custom callback
    virtual void requestUpdate(int timeout) override {
        if (qnmeasatelliteinfosource_requestupdate_callback) {
            int cbval1 = timeout;
            qnmeasatelliteinfosource_requestupdate_callback(this, cbval1);
            return;
        }
        QNmeaSatelliteInfoSource::requestUpdate(timeout);
    }

    // Virtual method for C ABI access and custom callback
    virtual QGeoSatelliteInfo::SatelliteSystem parseSatellitesInUseFromNmea(const char* data, int size, QList<int>& pnrsInUse) override {
        if (qnmeasatelliteinfosource_parsesatellitesinusefromnmea_callback) {
            const char* cbval1 = (const char*)data;
            int cbval2 = size;
            QList<int>& pnrsInUse_ret = pnrsInUse;
            // Convert QList<> from C++ memory to manually-managed C memory
            int* pnrsInUse_arr = static_cast<int*>(malloc(sizeof(int) * (pnrsInUse_ret.size())));
            for (qsizetype i = 0; i < pnrsInUse_ret.size(); ++i) {
                pnrsInUse_arr[i] = pnrsInUse_ret[i];
            }
            libqt_list pnrsInUse_out;
            pnrsInUse_out.len = pnrsInUse_ret.size();
            pnrsInUse_out.data = static_cast<void*>(pnrsInUse_arr);
            libqt_list /* of int */ cbval3 = pnrsInUse_out;
            int callback_ret = qnmeasatelliteinfosource_parsesatellitesinusefromnmea_callback(this, cbval1, cbval2, cbval3);
            free(pnrsInUse_arr);
            return static_cast<QGeoSatelliteInfo::SatelliteSystem>(callback_ret);
        }
        return QNmeaSatelliteInfoSource::parseSatellitesInUseFromNmea(data, size, pnrsInUse);
    }

    // Virtual method for C ABI access and custom callback
    virtual QNmeaSatelliteInfoSource::SatelliteInfoParseStatus parseSatelliteInfoFromNmea(const char* data, int size, QList<QGeoSatelliteInfo>& infos, QGeoSatelliteInfo::SatelliteSystem& system) override {
        if (qnmeasatelliteinfosource_parsesatelliteinfofromnmea_callback) {
            const char* cbval1 = (const char*)data;
            int cbval2 = size;
            QList<QGeoSatelliteInfo>& infos_ret = infos;
            // Convert QList<> from C++ memory to manually-managed C memory
            QGeoSatelliteInfo** infos_arr = static_cast<QGeoSatelliteInfo**>(malloc(sizeof(QGeoSatelliteInfo*) * (infos_ret.size())));
            for (qsizetype i = 0; i < infos_ret.size(); ++i) {
                infos_arr[i] = new QGeoSatelliteInfo(infos_ret[i]);
            }
            libqt_list infos_out;
            infos_out.len = infos_ret.size();
            infos_out.data = static_cast<void*>(infos_arr);
            libqt_list /* of QGeoSatelliteInfo* */ cbval3 = infos_out;
            QGeoSatelliteInfo::SatelliteSystem& system_ret = system;
            int* cbval4 = reinterpret_cast<int*>(&system_ret);
            int callback_ret = qnmeasatelliteinfosource_parsesatelliteinfofromnmea_callback(this, cbval1, cbval2, cbval3, cbval4);
            free(infos_arr);
            return static_cast<VirtualQNmeaSatelliteInfoSource::SatelliteInfoParseStatus>(callback_ret);
        }
        return QNmeaSatelliteInfoSource::parseSatelliteInfoFromNmea(data, size, infos, system);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qnmeasatelliteinfosource_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qnmeasatelliteinfosource_event_callback(this, cbval1);
            return callback_ret;
        }
        return QNmeaSatelliteInfoSource::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qnmeasatelliteinfosource_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qnmeasatelliteinfosource_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QNmeaSatelliteInfoSource::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qnmeasatelliteinfosource_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qnmeasatelliteinfosource_timerevent_callback(this, cbval1);
            return;
        }
        QNmeaSatelliteInfoSource::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qnmeasatelliteinfosource_childevent_callback) {
            QChildEvent* cbval1 = event;
            qnmeasatelliteinfosource_childevent_callback(this, cbval1);
            return;
        }
        QNmeaSatelliteInfoSource::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qnmeasatelliteinfosource_customevent_callback) {
            QEvent* cbval1 = event;
            qnmeasatelliteinfosource_customevent_callback(this, cbval1);
            return;
        }
        QNmeaSatelliteInfoSource::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qnmeasatelliteinfosource_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qnmeasatelliteinfosource_connectnotify_callback(this, cbval1);
            return;
        }
        QNmeaSatelliteInfoSource::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qnmeasatelliteinfosource_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qnmeasatelliteinfosource_disconnectnotify_callback(this, cbval1);
            return;
        }
        QNmeaSatelliteInfoSource::disconnectNotify(signal);
    }

    // Friend functions
    friend int QNmeaSatelliteInfoSource_SuperParseSatellitesInUseFromNmea(QNmeaSatelliteInfoSource* self, const char* data, int size, libqt_list /* of int */ pnrsInUse);
    friend int QNmeaSatelliteInfoSource_SuperParseSatelliteInfoFromNmea(QNmeaSatelliteInfoSource* self, const char* data, int size, libqt_list /* of QGeoSatelliteInfo* */ infos, int* system);
    friend void QNmeaSatelliteInfoSource_SuperTimerEvent(QNmeaSatelliteInfoSource* self, QTimerEvent* event);
    friend void QNmeaSatelliteInfoSource_SuperChildEvent(QNmeaSatelliteInfoSource* self, QChildEvent* event);
    friend void QNmeaSatelliteInfoSource_SuperCustomEvent(QNmeaSatelliteInfoSource* self, QEvent* event);
    friend void QNmeaSatelliteInfoSource_SuperConnectNotify(QNmeaSatelliteInfoSource* self, const QMetaMethod* signal);
    friend void QNmeaSatelliteInfoSource_SuperDisconnectNotify(QNmeaSatelliteInfoSource* self, const QMetaMethod* signal);
};

#endif
