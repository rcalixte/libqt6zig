#pragma once
#ifndef POSITIONING_LIBQGEOAREAMONITORSOURCE_HXX
#define POSITIONING_LIBQGEOAREAMONITORSOURCE_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QGeoAreaMonitorSource
class VirtualQGeoAreaMonitorSource : public QGeoAreaMonitorSource {
  public:
    // Virtual class public types (including callbacks and access types)
    using QGeoAreaMonitorSource_MetaObject_Callback = QMetaObject* (*)(const QGeoAreaMonitorSource*);
    using QGeoAreaMonitorSource_Metacast_Callback = void* (*)(QGeoAreaMonitorSource*, const char*);
    using QGeoAreaMonitorSource_Metacall_Callback = int (*)(QGeoAreaMonitorSource*, int, int, void**);
    using QGeoAreaMonitorSource_SetPositionInfoSource_Callback = void (*)(QGeoAreaMonitorSource*, QGeoPositionInfoSource*);
    using QGeoAreaMonitorSource_PositionInfoSource_Callback = QGeoPositionInfoSource* (*)(const QGeoAreaMonitorSource*);
    using QGeoAreaMonitorSource_Error_Callback = int (*)(const QGeoAreaMonitorSource*);
    using QGeoAreaMonitorSource_SupportedAreaMonitorFeatures_Callback = int (*)(const QGeoAreaMonitorSource*);
    using QGeoAreaMonitorSource_StartMonitoring_Callback = bool (*)(QGeoAreaMonitorSource*, QGeoAreaMonitorInfo*);
    using QGeoAreaMonitorSource_StopMonitoring_Callback = bool (*)(QGeoAreaMonitorSource*, QGeoAreaMonitorInfo*);
    using QGeoAreaMonitorSource_RequestUpdate_Callback = bool (*)(QGeoAreaMonitorSource*, QGeoAreaMonitorInfo*, const char*);
    using QGeoAreaMonitorSource_ActiveMonitors_Callback = libqt_list /* of QGeoAreaMonitorInfo* */ (*)(const QGeoAreaMonitorSource*);
    using QGeoAreaMonitorSource_ActiveMonitors2_Callback = libqt_list /* of QGeoAreaMonitorInfo* */ (*)(const QGeoAreaMonitorSource*, QGeoShape*);
    using QGeoAreaMonitorSource_SetBackendProperty_Callback = bool (*)(QGeoAreaMonitorSource*, const char*, QVariant*);
    using QGeoAreaMonitorSource_BackendProperty_Callback = QVariant* (*)(const QGeoAreaMonitorSource*, const char*);
    using QGeoAreaMonitorSource_Event_Callback = bool (*)(QGeoAreaMonitorSource*, QEvent*);
    using QGeoAreaMonitorSource_EventFilter_Callback = bool (*)(QGeoAreaMonitorSource*, QObject*, QEvent*);
    using QGeoAreaMonitorSource_TimerEvent_Callback = void (*)(QGeoAreaMonitorSource*, QTimerEvent*);
    using QGeoAreaMonitorSource_ChildEvent_Callback = void (*)(QGeoAreaMonitorSource*, QChildEvent*);
    using QGeoAreaMonitorSource_CustomEvent_Callback = void (*)(QGeoAreaMonitorSource*, QEvent*);
    using QGeoAreaMonitorSource_ConnectNotify_Callback = void (*)(QGeoAreaMonitorSource*, QMetaMethod*);
    using QGeoAreaMonitorSource_DisconnectNotify_Callback = void (*)(QGeoAreaMonitorSource*, QMetaMethod*);
    using QGeoAreaMonitorSource::isSignalConnected;
    using QGeoAreaMonitorSource::receivers;
    using QGeoAreaMonitorSource::sender;
    using QGeoAreaMonitorSource::senderSignalIndex;

    // Instance callback storage
    QGeoAreaMonitorSource_MetaObject_Callback qgeoareamonitorsource_metaobject_callback = nullptr;
    QGeoAreaMonitorSource_Metacast_Callback qgeoareamonitorsource_metacast_callback = nullptr;
    QGeoAreaMonitorSource_Metacall_Callback qgeoareamonitorsource_metacall_callback = nullptr;
    QGeoAreaMonitorSource_SetPositionInfoSource_Callback qgeoareamonitorsource_setpositioninfosource_callback = nullptr;
    QGeoAreaMonitorSource_PositionInfoSource_Callback qgeoareamonitorsource_positioninfosource_callback = nullptr;
    QGeoAreaMonitorSource_Error_Callback qgeoareamonitorsource_error_callback = nullptr;
    QGeoAreaMonitorSource_SupportedAreaMonitorFeatures_Callback qgeoareamonitorsource_supportedareamonitorfeatures_callback = nullptr;
    QGeoAreaMonitorSource_StartMonitoring_Callback qgeoareamonitorsource_startmonitoring_callback = nullptr;
    QGeoAreaMonitorSource_StopMonitoring_Callback qgeoareamonitorsource_stopmonitoring_callback = nullptr;
    QGeoAreaMonitorSource_RequestUpdate_Callback qgeoareamonitorsource_requestupdate_callback = nullptr;
    QGeoAreaMonitorSource_ActiveMonitors_Callback qgeoareamonitorsource_activemonitors_callback = nullptr;
    QGeoAreaMonitorSource_ActiveMonitors2_Callback qgeoareamonitorsource_activemonitors2_callback = nullptr;
    QGeoAreaMonitorSource_SetBackendProperty_Callback qgeoareamonitorsource_setbackendproperty_callback = nullptr;
    QGeoAreaMonitorSource_BackendProperty_Callback qgeoareamonitorsource_backendproperty_callback = nullptr;
    QGeoAreaMonitorSource_Event_Callback qgeoareamonitorsource_event_callback = nullptr;
    QGeoAreaMonitorSource_EventFilter_Callback qgeoareamonitorsource_eventfilter_callback = nullptr;
    QGeoAreaMonitorSource_TimerEvent_Callback qgeoareamonitorsource_timerevent_callback = nullptr;
    QGeoAreaMonitorSource_ChildEvent_Callback qgeoareamonitorsource_childevent_callback = nullptr;
    QGeoAreaMonitorSource_CustomEvent_Callback qgeoareamonitorsource_customevent_callback = nullptr;
    QGeoAreaMonitorSource_ConnectNotify_Callback qgeoareamonitorsource_connectnotify_callback = nullptr;
    QGeoAreaMonitorSource_DisconnectNotify_Callback qgeoareamonitorsource_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QGeoAreaMonitorSource {
        using QGeoAreaMonitorSource::childEvent;
        using QGeoAreaMonitorSource::connectNotify;
        using QGeoAreaMonitorSource::customEvent;
        using QGeoAreaMonitorSource::disconnectNotify;
        using QGeoAreaMonitorSource::timerEvent;
    };

    VirtualQGeoAreaMonitorSource(QObject* parent) : QGeoAreaMonitorSource(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qgeoareamonitorsource_metaobject_callback) {
            QMetaObject* callback_ret = qgeoareamonitorsource_metaobject_callback(this);
            return callback_ret;
        }
        return QGeoAreaMonitorSource::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qgeoareamonitorsource_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qgeoareamonitorsource_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QGeoAreaMonitorSource::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qgeoareamonitorsource_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qgeoareamonitorsource_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QGeoAreaMonitorSource::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setPositionInfoSource(QGeoPositionInfoSource* source) override {
        if (qgeoareamonitorsource_setpositioninfosource_callback) {
            QGeoPositionInfoSource* cbval1 = source;
            qgeoareamonitorsource_setpositioninfosource_callback(this, cbval1);
            return;
        }
        QGeoAreaMonitorSource::setPositionInfoSource(source);
    }

    // Virtual method for C ABI access and custom callback
    virtual QGeoPositionInfoSource* positionInfoSource() const override {
        if (qgeoareamonitorsource_positioninfosource_callback) {
            QGeoPositionInfoSource* callback_ret = qgeoareamonitorsource_positioninfosource_callback(this);
            return callback_ret;
        }
        return QGeoAreaMonitorSource::positionInfoSource();
    }

    // Virtual method for C ABI access and custom callback
    virtual QGeoAreaMonitorSource::Error error() const override {
        if (qgeoareamonitorsource_error_callback) {
            int callback_ret = qgeoareamonitorsource_error_callback(this);
            return static_cast<QGeoAreaMonitorSource::Error>(callback_ret);
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QGeoAreaMonitorSource::error called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual QGeoAreaMonitorSource::AreaMonitorFeatures supportedAreaMonitorFeatures() const override {
        if (qgeoareamonitorsource_supportedareamonitorfeatures_callback) {
            int callback_ret = qgeoareamonitorsource_supportedareamonitorfeatures_callback(this);
            return static_cast<QGeoAreaMonitorSource::AreaMonitorFeatures>(callback_ret);
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QGeoAreaMonitorSource::supportedAreaMonitorFeatures called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual bool startMonitoring(const QGeoAreaMonitorInfo& monitor) override {
        if (qgeoareamonitorsource_startmonitoring_callback) {
            const QGeoAreaMonitorInfo& monitor_ret = monitor;
            // Cast returned reference into pointer
            QGeoAreaMonitorInfo* cbval1 = const_cast<QGeoAreaMonitorInfo*>(&monitor_ret);
            bool callback_ret = qgeoareamonitorsource_startmonitoring_callback(this, cbval1);
            return callback_ret;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QGeoAreaMonitorSource::startMonitoring called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual bool stopMonitoring(const QGeoAreaMonitorInfo& monitor) override {
        if (qgeoareamonitorsource_stopmonitoring_callback) {
            const QGeoAreaMonitorInfo& monitor_ret = monitor;
            // Cast returned reference into pointer
            QGeoAreaMonitorInfo* cbval1 = const_cast<QGeoAreaMonitorInfo*>(&monitor_ret);
            bool callback_ret = qgeoareamonitorsource_stopmonitoring_callback(this, cbval1);
            return callback_ret;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QGeoAreaMonitorSource::stopMonitoring called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual bool requestUpdate(const QGeoAreaMonitorInfo& monitor, const char* signal) override {
        if (qgeoareamonitorsource_requestupdate_callback) {
            const QGeoAreaMonitorInfo& monitor_ret = monitor;
            // Cast returned reference into pointer
            QGeoAreaMonitorInfo* cbval1 = const_cast<QGeoAreaMonitorInfo*>(&monitor_ret);
            const char* cbval2 = (const char*)signal;
            bool callback_ret = qgeoareamonitorsource_requestupdate_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QGeoAreaMonitorSource::requestUpdate called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QGeoAreaMonitorInfo> activeMonitors() const override {
        if (qgeoareamonitorsource_activemonitors_callback) {
            libqt_list /* of QGeoAreaMonitorInfo* */ callback_ret = qgeoareamonitorsource_activemonitors_callback(this);
            QList<QGeoAreaMonitorInfo> callback_ret_QList;
            callback_ret_QList.reserve(callback_ret.len);
            QGeoAreaMonitorInfo** callback_ret_arr = static_cast<QGeoAreaMonitorInfo**>(callback_ret.data);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                callback_ret_QList.push_back(*(callback_ret_arr[i]));
            }
            libqt_free(callback_ret.data);
            return callback_ret_QList;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QGeoAreaMonitorSource::activeMonitors called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QGeoAreaMonitorInfo> activeMonitors(const QGeoShape& lookupArea) const override {
        if (qgeoareamonitorsource_activemonitors2_callback) {
            const QGeoShape& lookupArea_ret = lookupArea;
            // Cast returned reference into pointer
            QGeoShape* cbval1 = const_cast<QGeoShape*>(&lookupArea_ret);
            libqt_list /* of QGeoAreaMonitorInfo* */ callback_ret = qgeoareamonitorsource_activemonitors2_callback(this, cbval1);
            QList<QGeoAreaMonitorInfo> callback_ret_QList;
            callback_ret_QList.reserve(callback_ret.len);
            QGeoAreaMonitorInfo** callback_ret_arr = static_cast<QGeoAreaMonitorInfo**>(callback_ret.data);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                callback_ret_QList.push_back(*(callback_ret_arr[i]));
            }
            libqt_free(callback_ret.data);
            return callback_ret_QList;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QGeoAreaMonitorSource::activeMonitors2 called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setBackendProperty(const QString& name, const QVariant& value) override {
        if (qgeoareamonitorsource_setbackendproperty_callback) {
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
            bool callback_ret = qgeoareamonitorsource_setbackendproperty_callback(this, cbval1, cbval2);
            libqt_free(name_str);
            return callback_ret;
        }
        return QGeoAreaMonitorSource::setBackendProperty(name, value);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant backendProperty(const QString& name) const override {
        if (qgeoareamonitorsource_backendproperty_callback) {
            const auto name_ret = name;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray name_b = name_ret.toUtf8();
            auto name_str_len = name_b.length();
            const char* name_str = static_cast<const char*>(malloc(name_str_len + 1));
            memcpy((void*)name_str, name_b.data(), name_str_len);
            ((char*)name_str)[name_str_len] = '\0';
            const char* cbval1 = name_str;
            QVariant* callback_ret = qgeoareamonitorsource_backendproperty_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            libqt_free(name_str);
            return callback_ret_Value;
        }
        return QGeoAreaMonitorSource::backendProperty(name);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qgeoareamonitorsource_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qgeoareamonitorsource_event_callback(this, cbval1);
            return callback_ret;
        }
        return QGeoAreaMonitorSource::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qgeoareamonitorsource_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qgeoareamonitorsource_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QGeoAreaMonitorSource::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qgeoareamonitorsource_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qgeoareamonitorsource_timerevent_callback(this, cbval1);
            return;
        }
        QGeoAreaMonitorSource::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qgeoareamonitorsource_childevent_callback) {
            QChildEvent* cbval1 = event;
            qgeoareamonitorsource_childevent_callback(this, cbval1);
            return;
        }
        QGeoAreaMonitorSource::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qgeoareamonitorsource_customevent_callback) {
            QEvent* cbval1 = event;
            qgeoareamonitorsource_customevent_callback(this, cbval1);
            return;
        }
        QGeoAreaMonitorSource::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qgeoareamonitorsource_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qgeoareamonitorsource_connectnotify_callback(this, cbval1);
            return;
        }
        QGeoAreaMonitorSource::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qgeoareamonitorsource_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qgeoareamonitorsource_disconnectnotify_callback(this, cbval1);
            return;
        }
        QGeoAreaMonitorSource::disconnectNotify(signal);
    }

    // Friend functions
    friend void QGeoAreaMonitorSource_SuperTimerEvent(QGeoAreaMonitorSource* self, QTimerEvent* event);
    friend void QGeoAreaMonitorSource_SuperChildEvent(QGeoAreaMonitorSource* self, QChildEvent* event);
    friend void QGeoAreaMonitorSource_SuperCustomEvent(QGeoAreaMonitorSource* self, QEvent* event);
    friend void QGeoAreaMonitorSource_SuperConnectNotify(QGeoAreaMonitorSource* self, const QMetaMethod* signal);
    friend void QGeoAreaMonitorSource_SuperDisconnectNotify(QGeoAreaMonitorSource* self, const QMetaMethod* signal);
};

#endif
