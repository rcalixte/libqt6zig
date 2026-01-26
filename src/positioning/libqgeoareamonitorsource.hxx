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
    using QGeoAreaMonitorSource_ActiveMonitors_Callback = QGeoAreaMonitorInfo** (*)();
    using QGeoAreaMonitorSource_ActiveMonitors2_Callback = QGeoAreaMonitorInfo** (*)(const QGeoAreaMonitorSource*, QGeoShape*);
    using QGeoAreaMonitorSource_SetBackendProperty_Callback = bool (*)(QGeoAreaMonitorSource*, libqt_string, QVariant*);
    using QGeoAreaMonitorSource_BackendProperty_Callback = QVariant* (*)(const QGeoAreaMonitorSource*, libqt_string);
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

    ~VirtualQGeoAreaMonitorSource() {
        qgeoareamonitorsource_metaobject_callback = nullptr;
        qgeoareamonitorsource_metacast_callback = nullptr;
        qgeoareamonitorsource_metacall_callback = nullptr;
        qgeoareamonitorsource_setpositioninfosource_callback = nullptr;
        qgeoareamonitorsource_positioninfosource_callback = nullptr;
        qgeoareamonitorsource_error_callback = nullptr;
        qgeoareamonitorsource_supportedareamonitorfeatures_callback = nullptr;
        qgeoareamonitorsource_startmonitoring_callback = nullptr;
        qgeoareamonitorsource_stopmonitoring_callback = nullptr;
        qgeoareamonitorsource_requestupdate_callback = nullptr;
        qgeoareamonitorsource_activemonitors_callback = nullptr;
        qgeoareamonitorsource_activemonitors2_callback = nullptr;
        qgeoareamonitorsource_setbackendproperty_callback = nullptr;
        qgeoareamonitorsource_backendproperty_callback = nullptr;
        qgeoareamonitorsource_event_callback = nullptr;
        qgeoareamonitorsource_eventfilter_callback = nullptr;
        qgeoareamonitorsource_timerevent_callback = nullptr;
        qgeoareamonitorsource_childevent_callback = nullptr;
        qgeoareamonitorsource_customevent_callback = nullptr;
        qgeoareamonitorsource_connectnotify_callback = nullptr;
        qgeoareamonitorsource_disconnectnotify_callback = nullptr;
        qgeoareamonitorsource_sender_callback = nullptr;
        qgeoareamonitorsource_sendersignalindex_callback = nullptr;
        qgeoareamonitorsource_receivers_callback = nullptr;
        qgeoareamonitorsource_issignalconnected_callback = nullptr;
    }

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
        } else if (qgeoareamonitorsource_metaobject_callback != nullptr) {
            QMetaObject* callback_ret = qgeoareamonitorsource_metaobject_callback();
            return callback_ret;
        } else {
            return QGeoAreaMonitorSource::metaObject();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qgeoareamonitorsource_metacast_isbase) {
            qgeoareamonitorsource_metacast_isbase = false;
            return QGeoAreaMonitorSource::qt_metacast(param1);
        } else if (qgeoareamonitorsource_metacast_callback != nullptr) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = qgeoareamonitorsource_metacast_callback(this, cbval1);
            return callback_ret;
        } else {
            return QGeoAreaMonitorSource::qt_metacast(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qgeoareamonitorsource_metacall_isbase) {
            qgeoareamonitorsource_metacall_isbase = false;
            return QGeoAreaMonitorSource::qt_metacall(param1, param2, param3);
        } else if (qgeoareamonitorsource_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qgeoareamonitorsource_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QGeoAreaMonitorSource::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setPositionInfoSource(QGeoPositionInfoSource* source) override {
        if (qgeoareamonitorsource_setpositioninfosource_isbase) {
            qgeoareamonitorsource_setpositioninfosource_isbase = false;
            QGeoAreaMonitorSource::setPositionInfoSource(source);
        } else if (qgeoareamonitorsource_setpositioninfosource_callback != nullptr) {
            QGeoPositionInfoSource* cbval1 = source;

            qgeoareamonitorsource_setpositioninfosource_callback(this, cbval1);
        } else {
            QGeoAreaMonitorSource::setPositionInfoSource(source);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QGeoPositionInfoSource* positionInfoSource() const override {
        if (qgeoareamonitorsource_positioninfosource_isbase) {
            qgeoareamonitorsource_positioninfosource_isbase = false;
            return QGeoAreaMonitorSource::positionInfoSource();
        } else if (qgeoareamonitorsource_positioninfosource_callback != nullptr) {
            QGeoPositionInfoSource* callback_ret = qgeoareamonitorsource_positioninfosource_callback();
            return callback_ret;
        } else {
            return QGeoAreaMonitorSource::positionInfoSource();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QGeoAreaMonitorSource::Error error() const override {
        if (qgeoareamonitorsource_error_callback != nullptr) {
            int callback_ret = qgeoareamonitorsource_error_callback();
            return static_cast<QGeoAreaMonitorSource::Error>(callback_ret);
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QGeoAreaMonitorSource::AreaMonitorFeatures supportedAreaMonitorFeatures() const override {
        if (qgeoareamonitorsource_supportedareamonitorfeatures_callback != nullptr) {
            int callback_ret = qgeoareamonitorsource_supportedareamonitorfeatures_callback();
            return static_cast<QGeoAreaMonitorSource::AreaMonitorFeatures>(callback_ret);
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool startMonitoring(const QGeoAreaMonitorInfo& monitor) override {
        if (qgeoareamonitorsource_startmonitoring_callback != nullptr) {
            const QGeoAreaMonitorInfo& monitor_ret = monitor;
            // Cast returned reference into pointer
            QGeoAreaMonitorInfo* cbval1 = const_cast<QGeoAreaMonitorInfo*>(&monitor_ret);

            bool callback_ret = qgeoareamonitorsource_startmonitoring_callback(this, cbval1);
            return callback_ret;
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool stopMonitoring(const QGeoAreaMonitorInfo& monitor) override {
        if (qgeoareamonitorsource_stopmonitoring_callback != nullptr) {
            const QGeoAreaMonitorInfo& monitor_ret = monitor;
            // Cast returned reference into pointer
            QGeoAreaMonitorInfo* cbval1 = const_cast<QGeoAreaMonitorInfo*>(&monitor_ret);

            bool callback_ret = qgeoareamonitorsource_stopmonitoring_callback(this, cbval1);
            return callback_ret;
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool requestUpdate(const QGeoAreaMonitorInfo& monitor, const char* signal) override {
        if (qgeoareamonitorsource_requestupdate_callback != nullptr) {
            const QGeoAreaMonitorInfo& monitor_ret = monitor;
            // Cast returned reference into pointer
            QGeoAreaMonitorInfo* cbval1 = const_cast<QGeoAreaMonitorInfo*>(&monitor_ret);
            const char* cbval2 = (const char*)signal;

            bool callback_ret = qgeoareamonitorsource_requestupdate_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QGeoAreaMonitorInfo> activeMonitors() const override {
        if (qgeoareamonitorsource_activemonitors_callback != nullptr) {
            QGeoAreaMonitorInfo** callback_ret = qgeoareamonitorsource_activemonitors_callback();
            QList<QGeoAreaMonitorInfo> callback_ret_QList;
            // Iterate until null pointer sentinel
            for (QGeoAreaMonitorInfo** ptridx = callback_ret; *ptridx != nullptr; ptridx++) {
                callback_ret_QList.push_back(**ptridx);
            }
            free(callback_ret);
            return callback_ret_QList;
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QGeoAreaMonitorInfo> activeMonitors(const QGeoShape& lookupArea) const override {
        if (qgeoareamonitorsource_activemonitors2_callback != nullptr) {
            const QGeoShape& lookupArea_ret = lookupArea;
            // Cast returned reference into pointer
            QGeoShape* cbval1 = const_cast<QGeoShape*>(&lookupArea_ret);

            QGeoAreaMonitorInfo** callback_ret = qgeoareamonitorsource_activemonitors2_callback(this, cbval1);
            QList<QGeoAreaMonitorInfo> callback_ret_QList;
            // Iterate until null pointer sentinel
            for (QGeoAreaMonitorInfo** ptridx = callback_ret; *ptridx != nullptr; ptridx++) {
                callback_ret_QList.push_back(**ptridx);
            }
            free(callback_ret);
            return callback_ret_QList;
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setBackendProperty(const QString& name, const QVariant& value) override {
        if (qgeoareamonitorsource_setbackendproperty_isbase) {
            qgeoareamonitorsource_setbackendproperty_isbase = false;
            return QGeoAreaMonitorSource::setBackendProperty(name, value);
        } else if (qgeoareamonitorsource_setbackendproperty_callback != nullptr) {
            const QString name_ret = name;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray name_b = name_ret.toUtf8();
            libqt_string name_str;
            name_str.len = name_b.length();
            name_str.data = static_cast<const char*>(malloc(name_str.len + 1));
            memcpy((void*)name_str.data, name_b.data(), name_str.len);
            ((char*)name_str.data)[name_str.len] = '\0';
            libqt_string cbval1 = name_str;
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval2 = const_cast<QVariant*>(&value_ret);

            bool callback_ret = qgeoareamonitorsource_setbackendproperty_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QGeoAreaMonitorSource::setBackendProperty(name, value);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant backendProperty(const QString& name) const override {
        if (qgeoareamonitorsource_backendproperty_isbase) {
            qgeoareamonitorsource_backendproperty_isbase = false;
            return QGeoAreaMonitorSource::backendProperty(name);
        } else if (qgeoareamonitorsource_backendproperty_callback != nullptr) {
            const QString name_ret = name;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray name_b = name_ret.toUtf8();
            libqt_string name_str;
            name_str.len = name_b.length();
            name_str.data = static_cast<const char*>(malloc(name_str.len + 1));
            memcpy((void*)name_str.data, name_b.data(), name_str.len);
            ((char*)name_str.data)[name_str.len] = '\0';
            libqt_string cbval1 = name_str;

            QVariant* callback_ret = qgeoareamonitorsource_backendproperty_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QGeoAreaMonitorSource::backendProperty(name);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qgeoareamonitorsource_event_isbase) {
            qgeoareamonitorsource_event_isbase = false;
            return QGeoAreaMonitorSource::event(event);
        } else if (qgeoareamonitorsource_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qgeoareamonitorsource_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QGeoAreaMonitorSource::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qgeoareamonitorsource_eventfilter_isbase) {
            qgeoareamonitorsource_eventfilter_isbase = false;
            return QGeoAreaMonitorSource::eventFilter(watched, event);
        } else if (qgeoareamonitorsource_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qgeoareamonitorsource_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QGeoAreaMonitorSource::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qgeoareamonitorsource_timerevent_isbase) {
            qgeoareamonitorsource_timerevent_isbase = false;
            QGeoAreaMonitorSource::timerEvent(event);
        } else if (qgeoareamonitorsource_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qgeoareamonitorsource_timerevent_callback(this, cbval1);
        } else {
            QGeoAreaMonitorSource::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qgeoareamonitorsource_childevent_isbase) {
            qgeoareamonitorsource_childevent_isbase = false;
            QGeoAreaMonitorSource::childEvent(event);
        } else if (qgeoareamonitorsource_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qgeoareamonitorsource_childevent_callback(this, cbval1);
        } else {
            QGeoAreaMonitorSource::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qgeoareamonitorsource_customevent_isbase) {
            qgeoareamonitorsource_customevent_isbase = false;
            QGeoAreaMonitorSource::customEvent(event);
        } else if (qgeoareamonitorsource_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qgeoareamonitorsource_customevent_callback(this, cbval1);
        } else {
            QGeoAreaMonitorSource::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qgeoareamonitorsource_connectnotify_isbase) {
            qgeoareamonitorsource_connectnotify_isbase = false;
            QGeoAreaMonitorSource::connectNotify(signal);
        } else if (qgeoareamonitorsource_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qgeoareamonitorsource_connectnotify_callback(this, cbval1);
        } else {
            QGeoAreaMonitorSource::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qgeoareamonitorsource_disconnectnotify_isbase) {
            qgeoareamonitorsource_disconnectnotify_isbase = false;
            QGeoAreaMonitorSource::disconnectNotify(signal);
        } else if (qgeoareamonitorsource_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qgeoareamonitorsource_disconnectnotify_callback(this, cbval1);
        } else {
            QGeoAreaMonitorSource::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qgeoareamonitorsource_sender_isbase) {
            qgeoareamonitorsource_sender_isbase = false;
            return QGeoAreaMonitorSource::sender();
        } else if (qgeoareamonitorsource_sender_callback != nullptr) {
            QObject* callback_ret = qgeoareamonitorsource_sender_callback();
            return callback_ret;
        } else {
            return QGeoAreaMonitorSource::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qgeoareamonitorsource_sendersignalindex_isbase) {
            qgeoareamonitorsource_sendersignalindex_isbase = false;
            return QGeoAreaMonitorSource::senderSignalIndex();
        } else if (qgeoareamonitorsource_sendersignalindex_callback != nullptr) {
            int callback_ret = qgeoareamonitorsource_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QGeoAreaMonitorSource::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qgeoareamonitorsource_receivers_isbase) {
            qgeoareamonitorsource_receivers_isbase = false;
            return QGeoAreaMonitorSource::receivers(signal);
        } else if (qgeoareamonitorsource_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qgeoareamonitorsource_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QGeoAreaMonitorSource::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qgeoareamonitorsource_issignalconnected_isbase) {
            qgeoareamonitorsource_issignalconnected_isbase = false;
            return QGeoAreaMonitorSource::isSignalConnected(signal);
        } else if (qgeoareamonitorsource_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qgeoareamonitorsource_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QGeoAreaMonitorSource::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void QGeoAreaMonitorSource_TimerEvent(QGeoAreaMonitorSource* self, QTimerEvent* event);
    friend void QGeoAreaMonitorSource_QBaseTimerEvent(QGeoAreaMonitorSource* self, QTimerEvent* event);
    friend void QGeoAreaMonitorSource_ChildEvent(QGeoAreaMonitorSource* self, QChildEvent* event);
    friend void QGeoAreaMonitorSource_QBaseChildEvent(QGeoAreaMonitorSource* self, QChildEvent* event);
    friend void QGeoAreaMonitorSource_CustomEvent(QGeoAreaMonitorSource* self, QEvent* event);
    friend void QGeoAreaMonitorSource_QBaseCustomEvent(QGeoAreaMonitorSource* self, QEvent* event);
    friend void QGeoAreaMonitorSource_ConnectNotify(QGeoAreaMonitorSource* self, const QMetaMethod* signal);
    friend void QGeoAreaMonitorSource_QBaseConnectNotify(QGeoAreaMonitorSource* self, const QMetaMethod* signal);
    friend void QGeoAreaMonitorSource_DisconnectNotify(QGeoAreaMonitorSource* self, const QMetaMethod* signal);
    friend void QGeoAreaMonitorSource_QBaseDisconnectNotify(QGeoAreaMonitorSource* self, const QMetaMethod* signal);
    friend QObject* QGeoAreaMonitorSource_Sender(const QGeoAreaMonitorSource* self);
    friend QObject* QGeoAreaMonitorSource_QBaseSender(const QGeoAreaMonitorSource* self);
    friend int QGeoAreaMonitorSource_SenderSignalIndex(const QGeoAreaMonitorSource* self);
    friend int QGeoAreaMonitorSource_QBaseSenderSignalIndex(const QGeoAreaMonitorSource* self);
    friend int QGeoAreaMonitorSource_Receivers(const QGeoAreaMonitorSource* self, const char* signal);
    friend int QGeoAreaMonitorSource_QBaseReceivers(const QGeoAreaMonitorSource* self, const char* signal);
    friend bool QGeoAreaMonitorSource_IsSignalConnected(const QGeoAreaMonitorSource* self, const QMetaMethod* signal);
    friend bool QGeoAreaMonitorSource_QBaseIsSignalConnected(const QGeoAreaMonitorSource* self, const QMetaMethod* signal);
};

#endif
