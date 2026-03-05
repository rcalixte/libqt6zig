#pragma once
#ifndef SRC_POSITIONINGC_LIBVIRTUALQGEOAREAMONITORSOURCE_H
#define SRC_POSITIONINGC_LIBVIRTUALQGEOAREAMONITORSOURCE_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QGeoAreaMonitorSource so that we can call protected methods
class VirtualQGeoAreaMonitorSource : public QGeoAreaMonitorSource {

  public:
    // Virtual class boolean flag
    bool isVirtualQGeoAreaMonitorSource = true;

    // Virtual class public types (including callbacks)
    using QGeoAreaMonitorSource_MetaObject_Callback = QMetaObject* (*)();
    using QGeoAreaMonitorSource_Metacast_Callback = void* (*)(QGeoAreaMonitorSource*, const char*);
    using QGeoAreaMonitorSource_Metacall_Callback = int (*)(QGeoAreaMonitorSource*, int, int, void**);
    using QGeoAreaMonitorSource_SetPositionInfoSource_Callback = void (*)(QGeoAreaMonitorSource*, QGeoPositionInfoSource*);
    using QGeoAreaMonitorSource_PositionInfoSource_Callback = QGeoPositionInfoSource* (*)();
    using QGeoAreaMonitorSource_Error_Callback = int (*)();
    using QGeoAreaMonitorSource_SupportedAreaMonitorFeatures_Callback = int (*)();
    using QGeoAreaMonitorSource_StartMonitoring_Callback = bool (*)(QGeoAreaMonitorSource*, QGeoAreaMonitorInfo*);
    using QGeoAreaMonitorSource_StopMonitoring_Callback = bool (*)(QGeoAreaMonitorSource*, QGeoAreaMonitorInfo*);
    using QGeoAreaMonitorSource_RequestUpdate_Callback = bool (*)(QGeoAreaMonitorSource*, QGeoAreaMonitorInfo*, const char*);
    using QGeoAreaMonitorSource_ActiveMonitors_Callback = libqt_list /* of QGeoAreaMonitorInfo* */ (*)();
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
    using QGeoAreaMonitorSource_Sender_Callback = QObject* (*)();
    using QGeoAreaMonitorSource_SenderSignalIndex_Callback = int (*)();
    using QGeoAreaMonitorSource_Receivers_Callback = int (*)(const QGeoAreaMonitorSource*, const char*);
    using QGeoAreaMonitorSource_IsSignalConnected_Callback = bool (*)(const QGeoAreaMonitorSource*, QMetaMethod*);

  protected:
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
    QGeoAreaMonitorSource_Sender_Callback qgeoareamonitorsource_sender_callback = nullptr;
    QGeoAreaMonitorSource_SenderSignalIndex_Callback qgeoareamonitorsource_sendersignalindex_callback = nullptr;
    QGeoAreaMonitorSource_Receivers_Callback qgeoareamonitorsource_receivers_callback = nullptr;
    QGeoAreaMonitorSource_IsSignalConnected_Callback qgeoareamonitorsource_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qgeoareamonitorsource_metaobject_isbase = false;
    mutable bool qgeoareamonitorsource_metacast_isbase = false;
    mutable bool qgeoareamonitorsource_metacall_isbase = false;
    mutable bool qgeoareamonitorsource_setpositioninfosource_isbase = false;
    mutable bool qgeoareamonitorsource_positioninfosource_isbase = false;
    mutable bool qgeoareamonitorsource_error_isbase = false;
    mutable bool qgeoareamonitorsource_supportedareamonitorfeatures_isbase = false;
    mutable bool qgeoareamonitorsource_startmonitoring_isbase = false;
    mutable bool qgeoareamonitorsource_stopmonitoring_isbase = false;
    mutable bool qgeoareamonitorsource_requestupdate_isbase = false;
    mutable bool qgeoareamonitorsource_activemonitors_isbase = false;
    mutable bool qgeoareamonitorsource_activemonitors2_isbase = false;
    mutable bool qgeoareamonitorsource_setbackendproperty_isbase = false;
    mutable bool qgeoareamonitorsource_backendproperty_isbase = false;
    mutable bool qgeoareamonitorsource_event_isbase = false;
    mutable bool qgeoareamonitorsource_eventfilter_isbase = false;
    mutable bool qgeoareamonitorsource_timerevent_isbase = false;
    mutable bool qgeoareamonitorsource_childevent_isbase = false;
    mutable bool qgeoareamonitorsource_customevent_isbase = false;
    mutable bool qgeoareamonitorsource_connectnotify_isbase = false;
    mutable bool qgeoareamonitorsource_disconnectnotify_isbase = false;
    mutable bool qgeoareamonitorsource_sender_isbase = false;
    mutable bool qgeoareamonitorsource_sendersignalindex_isbase = false;
    mutable bool qgeoareamonitorsource_receivers_isbase = false;
    mutable bool qgeoareamonitorsource_issignalconnected_isbase = false;

  public:
    VirtualQGeoAreaMonitorSource(QObject* parent) : QGeoAreaMonitorSource(parent) {};

    // Callback setters
    inline void setQGeoAreaMonitorSource_MetaObject_Callback(QGeoAreaMonitorSource_MetaObject_Callback cb) { qgeoareamonitorsource_metaobject_callback = cb; }
    inline void setQGeoAreaMonitorSource_Metacast_Callback(QGeoAreaMonitorSource_Metacast_Callback cb) { qgeoareamonitorsource_metacast_callback = cb; }
    inline void setQGeoAreaMonitorSource_Metacall_Callback(QGeoAreaMonitorSource_Metacall_Callback cb) { qgeoareamonitorsource_metacall_callback = cb; }
    inline void setQGeoAreaMonitorSource_SetPositionInfoSource_Callback(QGeoAreaMonitorSource_SetPositionInfoSource_Callback cb) { qgeoareamonitorsource_setpositioninfosource_callback = cb; }
    inline void setQGeoAreaMonitorSource_PositionInfoSource_Callback(QGeoAreaMonitorSource_PositionInfoSource_Callback cb) { qgeoareamonitorsource_positioninfosource_callback = cb; }
    inline void setQGeoAreaMonitorSource_Error_Callback(QGeoAreaMonitorSource_Error_Callback cb) { qgeoareamonitorsource_error_callback = cb; }
    inline void setQGeoAreaMonitorSource_SupportedAreaMonitorFeatures_Callback(QGeoAreaMonitorSource_SupportedAreaMonitorFeatures_Callback cb) { qgeoareamonitorsource_supportedareamonitorfeatures_callback = cb; }
    inline void setQGeoAreaMonitorSource_StartMonitoring_Callback(QGeoAreaMonitorSource_StartMonitoring_Callback cb) { qgeoareamonitorsource_startmonitoring_callback = cb; }
    inline void setQGeoAreaMonitorSource_StopMonitoring_Callback(QGeoAreaMonitorSource_StopMonitoring_Callback cb) { qgeoareamonitorsource_stopmonitoring_callback = cb; }
    inline void setQGeoAreaMonitorSource_RequestUpdate_Callback(QGeoAreaMonitorSource_RequestUpdate_Callback cb) { qgeoareamonitorsource_requestupdate_callback = cb; }
    inline void setQGeoAreaMonitorSource_ActiveMonitors_Callback(QGeoAreaMonitorSource_ActiveMonitors_Callback cb) { qgeoareamonitorsource_activemonitors_callback = cb; }
    inline void setQGeoAreaMonitorSource_ActiveMonitors2_Callback(QGeoAreaMonitorSource_ActiveMonitors2_Callback cb) { qgeoareamonitorsource_activemonitors2_callback = cb; }
    inline void setQGeoAreaMonitorSource_SetBackendProperty_Callback(QGeoAreaMonitorSource_SetBackendProperty_Callback cb) { qgeoareamonitorsource_setbackendproperty_callback = cb; }
    inline void setQGeoAreaMonitorSource_BackendProperty_Callback(QGeoAreaMonitorSource_BackendProperty_Callback cb) { qgeoareamonitorsource_backendproperty_callback = cb; }
    inline void setQGeoAreaMonitorSource_Event_Callback(QGeoAreaMonitorSource_Event_Callback cb) { qgeoareamonitorsource_event_callback = cb; }
    inline void setQGeoAreaMonitorSource_EventFilter_Callback(QGeoAreaMonitorSource_EventFilter_Callback cb) { qgeoareamonitorsource_eventfilter_callback = cb; }
    inline void setQGeoAreaMonitorSource_TimerEvent_Callback(QGeoAreaMonitorSource_TimerEvent_Callback cb) { qgeoareamonitorsource_timerevent_callback = cb; }
    inline void setQGeoAreaMonitorSource_ChildEvent_Callback(QGeoAreaMonitorSource_ChildEvent_Callback cb) { qgeoareamonitorsource_childevent_callback = cb; }
    inline void setQGeoAreaMonitorSource_CustomEvent_Callback(QGeoAreaMonitorSource_CustomEvent_Callback cb) { qgeoareamonitorsource_customevent_callback = cb; }
    inline void setQGeoAreaMonitorSource_ConnectNotify_Callback(QGeoAreaMonitorSource_ConnectNotify_Callback cb) { qgeoareamonitorsource_connectnotify_callback = cb; }
    inline void setQGeoAreaMonitorSource_DisconnectNotify_Callback(QGeoAreaMonitorSource_DisconnectNotify_Callback cb) { qgeoareamonitorsource_disconnectnotify_callback = cb; }
    inline void setQGeoAreaMonitorSource_Sender_Callback(QGeoAreaMonitorSource_Sender_Callback cb) { qgeoareamonitorsource_sender_callback = cb; }
    inline void setQGeoAreaMonitorSource_SenderSignalIndex_Callback(QGeoAreaMonitorSource_SenderSignalIndex_Callback cb) { qgeoareamonitorsource_sendersignalindex_callback = cb; }
    inline void setQGeoAreaMonitorSource_Receivers_Callback(QGeoAreaMonitorSource_Receivers_Callback cb) { qgeoareamonitorsource_receivers_callback = cb; }
    inline void setQGeoAreaMonitorSource_IsSignalConnected_Callback(QGeoAreaMonitorSource_IsSignalConnected_Callback cb) { qgeoareamonitorsource_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQGeoAreaMonitorSource_MetaObject_IsBase(bool value) const { qgeoareamonitorsource_metaobject_isbase = value; }
    inline void setQGeoAreaMonitorSource_Metacast_IsBase(bool value) const { qgeoareamonitorsource_metacast_isbase = value; }
    inline void setQGeoAreaMonitorSource_Metacall_IsBase(bool value) const { qgeoareamonitorsource_metacall_isbase = value; }
    inline void setQGeoAreaMonitorSource_SetPositionInfoSource_IsBase(bool value) const { qgeoareamonitorsource_setpositioninfosource_isbase = value; }
    inline void setQGeoAreaMonitorSource_PositionInfoSource_IsBase(bool value) const { qgeoareamonitorsource_positioninfosource_isbase = value; }
    inline void setQGeoAreaMonitorSource_Error_IsBase(bool value) const { qgeoareamonitorsource_error_isbase = value; }
    inline void setQGeoAreaMonitorSource_SupportedAreaMonitorFeatures_IsBase(bool value) const { qgeoareamonitorsource_supportedareamonitorfeatures_isbase = value; }
    inline void setQGeoAreaMonitorSource_StartMonitoring_IsBase(bool value) const { qgeoareamonitorsource_startmonitoring_isbase = value; }
    inline void setQGeoAreaMonitorSource_StopMonitoring_IsBase(bool value) const { qgeoareamonitorsource_stopmonitoring_isbase = value; }
    inline void setQGeoAreaMonitorSource_RequestUpdate_IsBase(bool value) const { qgeoareamonitorsource_requestupdate_isbase = value; }
    inline void setQGeoAreaMonitorSource_ActiveMonitors_IsBase(bool value) const { qgeoareamonitorsource_activemonitors_isbase = value; }
    inline void setQGeoAreaMonitorSource_ActiveMonitors2_IsBase(bool value) const { qgeoareamonitorsource_activemonitors2_isbase = value; }
    inline void setQGeoAreaMonitorSource_SetBackendProperty_IsBase(bool value) const { qgeoareamonitorsource_setbackendproperty_isbase = value; }
    inline void setQGeoAreaMonitorSource_BackendProperty_IsBase(bool value) const { qgeoareamonitorsource_backendproperty_isbase = value; }
    inline void setQGeoAreaMonitorSource_Event_IsBase(bool value) const { qgeoareamonitorsource_event_isbase = value; }
    inline void setQGeoAreaMonitorSource_EventFilter_IsBase(bool value) const { qgeoareamonitorsource_eventfilter_isbase = value; }
    inline void setQGeoAreaMonitorSource_TimerEvent_IsBase(bool value) const { qgeoareamonitorsource_timerevent_isbase = value; }
    inline void setQGeoAreaMonitorSource_ChildEvent_IsBase(bool value) const { qgeoareamonitorsource_childevent_isbase = value; }
    inline void setQGeoAreaMonitorSource_CustomEvent_IsBase(bool value) const { qgeoareamonitorsource_customevent_isbase = value; }
    inline void setQGeoAreaMonitorSource_ConnectNotify_IsBase(bool value) const { qgeoareamonitorsource_connectnotify_isbase = value; }
    inline void setQGeoAreaMonitorSource_DisconnectNotify_IsBase(bool value) const { qgeoareamonitorsource_disconnectnotify_isbase = value; }
    inline void setQGeoAreaMonitorSource_Sender_IsBase(bool value) const { qgeoareamonitorsource_sender_isbase = value; }
    inline void setQGeoAreaMonitorSource_SenderSignalIndex_IsBase(bool value) const { qgeoareamonitorsource_sendersignalindex_isbase = value; }
    inline void setQGeoAreaMonitorSource_Receivers_IsBase(bool value) const { qgeoareamonitorsource_receivers_isbase = value; }
    inline void setQGeoAreaMonitorSource_IsSignalConnected_IsBase(bool value) const { qgeoareamonitorsource_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qgeoareamonitorsource_metaobject_isbase) {
            qgeoareamonitorsource_metaobject_isbase = false;
            return QGeoAreaMonitorSource::metaObject();
        }
        auto metaobject_cb = qgeoareamonitorsource_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QGeoAreaMonitorSource::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qgeoareamonitorsource_metacast_isbase) {
            qgeoareamonitorsource_metacast_isbase = false;
            return QGeoAreaMonitorSource::qt_metacast(param1);
        }
        auto metacast_cb = qgeoareamonitorsource_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QGeoAreaMonitorSource::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qgeoareamonitorsource_metacall_isbase) {
            qgeoareamonitorsource_metacall_isbase = false;
            return QGeoAreaMonitorSource::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qgeoareamonitorsource_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QGeoAreaMonitorSource::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setPositionInfoSource(QGeoPositionInfoSource* source) override {
        if (qgeoareamonitorsource_setpositioninfosource_isbase) {
            qgeoareamonitorsource_setpositioninfosource_isbase = false;
            QGeoAreaMonitorSource::setPositionInfoSource(source);
            return;
        }
        auto setpositioninfosource_cb = qgeoareamonitorsource_setpositioninfosource_callback;
        if (setpositioninfosource_cb) {
            QGeoPositionInfoSource* cbval1 = source;

            setpositioninfosource_cb(this, cbval1);
            return;
        }
        QGeoAreaMonitorSource::setPositionInfoSource(source);
    }

    // Virtual method for C ABI access and custom callback
    virtual QGeoPositionInfoSource* positionInfoSource() const override {
        if (qgeoareamonitorsource_positioninfosource_isbase) {
            qgeoareamonitorsource_positioninfosource_isbase = false;
            return QGeoAreaMonitorSource::positionInfoSource();
        }
        auto positioninfosource_cb = qgeoareamonitorsource_positioninfosource_callback;
        if (positioninfosource_cb) {
            QGeoPositionInfoSource* callback_ret = positioninfosource_cb();
            return callback_ret;
        }
        return QGeoAreaMonitorSource::positionInfoSource();
    }

    // Virtual method for C ABI access and custom callback
    virtual QGeoAreaMonitorSource::Error error() const override {
        auto error_cb = qgeoareamonitorsource_error_callback;
        if (error_cb) {
            int callback_ret = error_cb();
            return static_cast<QGeoAreaMonitorSource::Error>(callback_ret);
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual QGeoAreaMonitorSource::AreaMonitorFeatures supportedAreaMonitorFeatures() const override {
        auto supportedareamonitorfeatures_cb = qgeoareamonitorsource_supportedareamonitorfeatures_callback;
        if (supportedareamonitorfeatures_cb) {
            int callback_ret = supportedareamonitorfeatures_cb();
            return static_cast<QGeoAreaMonitorSource::AreaMonitorFeatures>(callback_ret);
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual bool startMonitoring(const QGeoAreaMonitorInfo& monitor) override {
        auto startmonitoring_cb = qgeoareamonitorsource_startmonitoring_callback;
        if (startmonitoring_cb) {
            const QGeoAreaMonitorInfo& monitor_ret = monitor;
            // Cast returned reference into pointer
            QGeoAreaMonitorInfo* cbval1 = const_cast<QGeoAreaMonitorInfo*>(&monitor_ret);

            bool callback_ret = startmonitoring_cb(this, cbval1);
            return callback_ret;
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual bool stopMonitoring(const QGeoAreaMonitorInfo& monitor) override {
        auto stopmonitoring_cb = qgeoareamonitorsource_stopmonitoring_callback;
        if (stopmonitoring_cb) {
            const QGeoAreaMonitorInfo& monitor_ret = monitor;
            // Cast returned reference into pointer
            QGeoAreaMonitorInfo* cbval1 = const_cast<QGeoAreaMonitorInfo*>(&monitor_ret);

            bool callback_ret = stopmonitoring_cb(this, cbval1);
            return callback_ret;
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual bool requestUpdate(const QGeoAreaMonitorInfo& monitor, const char* signal) override {
        auto requestupdate_cb = qgeoareamonitorsource_requestupdate_callback;
        if (requestupdate_cb) {
            const QGeoAreaMonitorInfo& monitor_ret = monitor;
            // Cast returned reference into pointer
            QGeoAreaMonitorInfo* cbval1 = const_cast<QGeoAreaMonitorInfo*>(&monitor_ret);
            const char* cbval2 = (const char*)signal;

            bool callback_ret = requestupdate_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QGeoAreaMonitorInfo> activeMonitors() const override {
        auto activemonitors_cb = qgeoareamonitorsource_activemonitors_callback;
        if (activemonitors_cb) {
            libqt_list /* of QGeoAreaMonitorInfo* */ callback_ret = activemonitors_cb();
            QList<QGeoAreaMonitorInfo> callback_ret_QList;
            callback_ret_QList.reserve(callback_ret.len);
            QGeoAreaMonitorInfo** callback_ret_arr = static_cast<QGeoAreaMonitorInfo**>(callback_ret.data);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                callback_ret_QList.push_back(*(callback_ret_arr[i]));
            }
            libqt_free(callback_ret.data);
            return callback_ret_QList;
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QGeoAreaMonitorInfo> activeMonitors(const QGeoShape& lookupArea) const override {
        auto activemonitors2_cb = qgeoareamonitorsource_activemonitors2_callback;
        if (activemonitors2_cb) {
            const QGeoShape& lookupArea_ret = lookupArea;
            // Cast returned reference into pointer
            QGeoShape* cbval1 = const_cast<QGeoShape*>(&lookupArea_ret);

            libqt_list /* of QGeoAreaMonitorInfo* */ callback_ret = activemonitors2_cb(this, cbval1);
            QList<QGeoAreaMonitorInfo> callback_ret_QList;
            callback_ret_QList.reserve(callback_ret.len);
            QGeoAreaMonitorInfo** callback_ret_arr = static_cast<QGeoAreaMonitorInfo**>(callback_ret.data);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                callback_ret_QList.push_back(*(callback_ret_arr[i]));
            }
            libqt_free(callback_ret.data);
            return callback_ret_QList;
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setBackendProperty(const QString& name, const QVariant& value) override {
        if (qgeoareamonitorsource_setbackendproperty_isbase) {
            qgeoareamonitorsource_setbackendproperty_isbase = false;
            return QGeoAreaMonitorSource::setBackendProperty(name, value);
        }
        auto setbackendproperty_cb = qgeoareamonitorsource_setbackendproperty_callback;
        if (setbackendproperty_cb) {
            const QString name_ret = name;
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

            bool callback_ret = setbackendproperty_cb(this, cbval1, cbval2);
            libqt_free(name_str);
            return callback_ret;
        }
        return QGeoAreaMonitorSource::setBackendProperty(name, value);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant backendProperty(const QString& name) const override {
        if (qgeoareamonitorsource_backendproperty_isbase) {
            qgeoareamonitorsource_backendproperty_isbase = false;
            return QGeoAreaMonitorSource::backendProperty(name);
        }
        auto backendproperty_cb = qgeoareamonitorsource_backendproperty_callback;
        if (backendproperty_cb) {
            const QString name_ret = name;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray name_b = name_ret.toUtf8();
            auto name_str_len = name_b.length();
            const char* name_str = static_cast<const char*>(malloc(name_str_len + 1));
            memcpy((void*)name_str, name_b.data(), name_str_len);
            ((char*)name_str)[name_str_len] = '\0';
            const char* cbval1 = name_str;

            QVariant* callback_ret = backendproperty_cb(this, cbval1);
            libqt_free(name_str);
            return *callback_ret;
        }
        return QGeoAreaMonitorSource::backendProperty(name);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qgeoareamonitorsource_event_isbase) {
            qgeoareamonitorsource_event_isbase = false;
            return QGeoAreaMonitorSource::event(event);
        }
        auto event_cb = qgeoareamonitorsource_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QGeoAreaMonitorSource::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qgeoareamonitorsource_eventfilter_isbase) {
            qgeoareamonitorsource_eventfilter_isbase = false;
            return QGeoAreaMonitorSource::eventFilter(watched, event);
        }
        auto eventfilter_cb = qgeoareamonitorsource_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QGeoAreaMonitorSource::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qgeoareamonitorsource_timerevent_isbase) {
            qgeoareamonitorsource_timerevent_isbase = false;
            QGeoAreaMonitorSource::timerEvent(event);
            return;
        }
        auto timerevent_cb = qgeoareamonitorsource_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        QGeoAreaMonitorSource::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qgeoareamonitorsource_childevent_isbase) {
            qgeoareamonitorsource_childevent_isbase = false;
            QGeoAreaMonitorSource::childEvent(event);
            return;
        }
        auto childevent_cb = qgeoareamonitorsource_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        QGeoAreaMonitorSource::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qgeoareamonitorsource_customevent_isbase) {
            qgeoareamonitorsource_customevent_isbase = false;
            QGeoAreaMonitorSource::customEvent(event);
            return;
        }
        auto customevent_cb = qgeoareamonitorsource_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        QGeoAreaMonitorSource::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qgeoareamonitorsource_connectnotify_isbase) {
            qgeoareamonitorsource_connectnotify_isbase = false;
            QGeoAreaMonitorSource::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qgeoareamonitorsource_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        QGeoAreaMonitorSource::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qgeoareamonitorsource_disconnectnotify_isbase) {
            qgeoareamonitorsource_disconnectnotify_isbase = false;
            QGeoAreaMonitorSource::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qgeoareamonitorsource_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        QGeoAreaMonitorSource::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qgeoareamonitorsource_sender_isbase) {
            qgeoareamonitorsource_sender_isbase = false;
            return QGeoAreaMonitorSource::sender();
        }
        auto sender_cb = qgeoareamonitorsource_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QGeoAreaMonitorSource::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qgeoareamonitorsource_sendersignalindex_isbase) {
            qgeoareamonitorsource_sendersignalindex_isbase = false;
            return QGeoAreaMonitorSource::senderSignalIndex();
        }
        auto sendersignalindex_cb = qgeoareamonitorsource_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QGeoAreaMonitorSource::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qgeoareamonitorsource_receivers_isbase) {
            qgeoareamonitorsource_receivers_isbase = false;
            return QGeoAreaMonitorSource::receivers(signal);
        }
        auto receivers_cb = qgeoareamonitorsource_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QGeoAreaMonitorSource::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qgeoareamonitorsource_issignalconnected_isbase) {
            qgeoareamonitorsource_issignalconnected_isbase = false;
            return QGeoAreaMonitorSource::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qgeoareamonitorsource_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QGeoAreaMonitorSource::isSignalConnected(signal);
    }

    // Friend functions
    friend void QGeoAreaMonitorSource_TimerEvent(QGeoAreaMonitorSource* self, QTimerEvent* event);
    friend void QGeoAreaMonitorSource_SuperTimerEvent(QGeoAreaMonitorSource* self, QTimerEvent* event);
    friend void QGeoAreaMonitorSource_ChildEvent(QGeoAreaMonitorSource* self, QChildEvent* event);
    friend void QGeoAreaMonitorSource_SuperChildEvent(QGeoAreaMonitorSource* self, QChildEvent* event);
    friend void QGeoAreaMonitorSource_CustomEvent(QGeoAreaMonitorSource* self, QEvent* event);
    friend void QGeoAreaMonitorSource_SuperCustomEvent(QGeoAreaMonitorSource* self, QEvent* event);
    friend void QGeoAreaMonitorSource_ConnectNotify(QGeoAreaMonitorSource* self, const QMetaMethod* signal);
    friend void QGeoAreaMonitorSource_SuperConnectNotify(QGeoAreaMonitorSource* self, const QMetaMethod* signal);
    friend void QGeoAreaMonitorSource_DisconnectNotify(QGeoAreaMonitorSource* self, const QMetaMethod* signal);
    friend void QGeoAreaMonitorSource_SuperDisconnectNotify(QGeoAreaMonitorSource* self, const QMetaMethod* signal);
    friend QObject* QGeoAreaMonitorSource_Sender(const QGeoAreaMonitorSource* self);
    friend QObject* QGeoAreaMonitorSource_SuperSender(const QGeoAreaMonitorSource* self);
    friend int QGeoAreaMonitorSource_SenderSignalIndex(const QGeoAreaMonitorSource* self);
    friend int QGeoAreaMonitorSource_SuperSenderSignalIndex(const QGeoAreaMonitorSource* self);
    friend int QGeoAreaMonitorSource_Receivers(const QGeoAreaMonitorSource* self, const char* signal);
    friend int QGeoAreaMonitorSource_SuperReceivers(const QGeoAreaMonitorSource* self, const char* signal);
    friend bool QGeoAreaMonitorSource_IsSignalConnected(const QGeoAreaMonitorSource* self, const QMetaMethod* signal);
    friend bool QGeoAreaMonitorSource_SuperIsSignalConnected(const QGeoAreaMonitorSource* self, const QMetaMethod* signal);
};

#endif
