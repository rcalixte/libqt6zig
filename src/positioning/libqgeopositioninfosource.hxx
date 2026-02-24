#pragma once
#ifndef SRC_POSITIONINGC_LIBVIRTUALQGEOPOSITIONINFOSOURCE_H
#define SRC_POSITIONINGC_LIBVIRTUALQGEOPOSITIONINFOSOURCE_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QGeoPositionInfoSource so that we can call protected methods
class VirtualQGeoPositionInfoSource : public QGeoPositionInfoSource {

  public:
    // Virtual class boolean flag
    bool isVirtualQGeoPositionInfoSource = true;

    // Virtual class public types (including callbacks)
    using QGeoPositionInfoSource_MetaObject_Callback = QMetaObject* (*)();
    using QGeoPositionInfoSource_Metacast_Callback = void* (*)(QGeoPositionInfoSource*, const char*);
    using QGeoPositionInfoSource_Metacall_Callback = int (*)(QGeoPositionInfoSource*, int, int, void**);
    using QGeoPositionInfoSource_SetUpdateInterval_Callback = void (*)(QGeoPositionInfoSource*, int);
    using QGeoPositionInfoSource_SetPreferredPositioningMethods_Callback = void (*)(QGeoPositionInfoSource*, int);
    using QGeoPositionInfoSource_LastKnownPosition_Callback = QGeoPositionInfo* (*)(const QGeoPositionInfoSource*, bool);
    using QGeoPositionInfoSource_SupportedPositioningMethods_Callback = int (*)();
    using QGeoPositionInfoSource_MinimumUpdateInterval_Callback = int (*)();
    using QGeoPositionInfoSource_SetBackendProperty_Callback = bool (*)(QGeoPositionInfoSource*, const char*, QVariant*);
    using QGeoPositionInfoSource_BackendProperty_Callback = QVariant* (*)(const QGeoPositionInfoSource*, const char*);
    using QGeoPositionInfoSource_Error_Callback = int (*)();
    using QGeoPositionInfoSource_StartUpdates_Callback = void (*)();
    using QGeoPositionInfoSource_StopUpdates_Callback = void (*)();
    using QGeoPositionInfoSource_RequestUpdate_Callback = void (*)(QGeoPositionInfoSource*, int);
    using QGeoPositionInfoSource_Event_Callback = bool (*)(QGeoPositionInfoSource*, QEvent*);
    using QGeoPositionInfoSource_EventFilter_Callback = bool (*)(QGeoPositionInfoSource*, QObject*, QEvent*);
    using QGeoPositionInfoSource_TimerEvent_Callback = void (*)(QGeoPositionInfoSource*, QTimerEvent*);
    using QGeoPositionInfoSource_ChildEvent_Callback = void (*)(QGeoPositionInfoSource*, QChildEvent*);
    using QGeoPositionInfoSource_CustomEvent_Callback = void (*)(QGeoPositionInfoSource*, QEvent*);
    using QGeoPositionInfoSource_ConnectNotify_Callback = void (*)(QGeoPositionInfoSource*, QMetaMethod*);
    using QGeoPositionInfoSource_DisconnectNotify_Callback = void (*)(QGeoPositionInfoSource*, QMetaMethod*);
    using QGeoPositionInfoSource_Sender_Callback = QObject* (*)();
    using QGeoPositionInfoSource_SenderSignalIndex_Callback = int (*)();
    using QGeoPositionInfoSource_Receivers_Callback = int (*)(const QGeoPositionInfoSource*, const char*);
    using QGeoPositionInfoSource_IsSignalConnected_Callback = bool (*)(const QGeoPositionInfoSource*, QMetaMethod*);

  protected:
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
    QGeoPositionInfoSource_Sender_Callback qgeopositioninfosource_sender_callback = nullptr;
    QGeoPositionInfoSource_SenderSignalIndex_Callback qgeopositioninfosource_sendersignalindex_callback = nullptr;
    QGeoPositionInfoSource_Receivers_Callback qgeopositioninfosource_receivers_callback = nullptr;
    QGeoPositionInfoSource_IsSignalConnected_Callback qgeopositioninfosource_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qgeopositioninfosource_metaobject_isbase = false;
    mutable bool qgeopositioninfosource_metacast_isbase = false;
    mutable bool qgeopositioninfosource_metacall_isbase = false;
    mutable bool qgeopositioninfosource_setupdateinterval_isbase = false;
    mutable bool qgeopositioninfosource_setpreferredpositioningmethods_isbase = false;
    mutable bool qgeopositioninfosource_lastknownposition_isbase = false;
    mutable bool qgeopositioninfosource_supportedpositioningmethods_isbase = false;
    mutable bool qgeopositioninfosource_minimumupdateinterval_isbase = false;
    mutable bool qgeopositioninfosource_setbackendproperty_isbase = false;
    mutable bool qgeopositioninfosource_backendproperty_isbase = false;
    mutable bool qgeopositioninfosource_error_isbase = false;
    mutable bool qgeopositioninfosource_startupdates_isbase = false;
    mutable bool qgeopositioninfosource_stopupdates_isbase = false;
    mutable bool qgeopositioninfosource_requestupdate_isbase = false;
    mutable bool qgeopositioninfosource_event_isbase = false;
    mutable bool qgeopositioninfosource_eventfilter_isbase = false;
    mutable bool qgeopositioninfosource_timerevent_isbase = false;
    mutable bool qgeopositioninfosource_childevent_isbase = false;
    mutable bool qgeopositioninfosource_customevent_isbase = false;
    mutable bool qgeopositioninfosource_connectnotify_isbase = false;
    mutable bool qgeopositioninfosource_disconnectnotify_isbase = false;
    mutable bool qgeopositioninfosource_sender_isbase = false;
    mutable bool qgeopositioninfosource_sendersignalindex_isbase = false;
    mutable bool qgeopositioninfosource_receivers_isbase = false;
    mutable bool qgeopositioninfosource_issignalconnected_isbase = false;

  public:
    VirtualQGeoPositionInfoSource(QObject* parent) : QGeoPositionInfoSource(parent) {};

    ~VirtualQGeoPositionInfoSource() {
        qgeopositioninfosource_metaobject_callback = nullptr;
        qgeopositioninfosource_metacast_callback = nullptr;
        qgeopositioninfosource_metacall_callback = nullptr;
        qgeopositioninfosource_setupdateinterval_callback = nullptr;
        qgeopositioninfosource_setpreferredpositioningmethods_callback = nullptr;
        qgeopositioninfosource_lastknownposition_callback = nullptr;
        qgeopositioninfosource_supportedpositioningmethods_callback = nullptr;
        qgeopositioninfosource_minimumupdateinterval_callback = nullptr;
        qgeopositioninfosource_setbackendproperty_callback = nullptr;
        qgeopositioninfosource_backendproperty_callback = nullptr;
        qgeopositioninfosource_error_callback = nullptr;
        qgeopositioninfosource_startupdates_callback = nullptr;
        qgeopositioninfosource_stopupdates_callback = nullptr;
        qgeopositioninfosource_requestupdate_callback = nullptr;
        qgeopositioninfosource_event_callback = nullptr;
        qgeopositioninfosource_eventfilter_callback = nullptr;
        qgeopositioninfosource_timerevent_callback = nullptr;
        qgeopositioninfosource_childevent_callback = nullptr;
        qgeopositioninfosource_customevent_callback = nullptr;
        qgeopositioninfosource_connectnotify_callback = nullptr;
        qgeopositioninfosource_disconnectnotify_callback = nullptr;
        qgeopositioninfosource_sender_callback = nullptr;
        qgeopositioninfosource_sendersignalindex_callback = nullptr;
        qgeopositioninfosource_receivers_callback = nullptr;
        qgeopositioninfosource_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setQGeoPositionInfoSource_MetaObject_Callback(QGeoPositionInfoSource_MetaObject_Callback cb) { qgeopositioninfosource_metaobject_callback = cb; }
    inline void setQGeoPositionInfoSource_Metacast_Callback(QGeoPositionInfoSource_Metacast_Callback cb) { qgeopositioninfosource_metacast_callback = cb; }
    inline void setQGeoPositionInfoSource_Metacall_Callback(QGeoPositionInfoSource_Metacall_Callback cb) { qgeopositioninfosource_metacall_callback = cb; }
    inline void setQGeoPositionInfoSource_SetUpdateInterval_Callback(QGeoPositionInfoSource_SetUpdateInterval_Callback cb) { qgeopositioninfosource_setupdateinterval_callback = cb; }
    inline void setQGeoPositionInfoSource_SetPreferredPositioningMethods_Callback(QGeoPositionInfoSource_SetPreferredPositioningMethods_Callback cb) { qgeopositioninfosource_setpreferredpositioningmethods_callback = cb; }
    inline void setQGeoPositionInfoSource_LastKnownPosition_Callback(QGeoPositionInfoSource_LastKnownPosition_Callback cb) { qgeopositioninfosource_lastknownposition_callback = cb; }
    inline void setQGeoPositionInfoSource_SupportedPositioningMethods_Callback(QGeoPositionInfoSource_SupportedPositioningMethods_Callback cb) { qgeopositioninfosource_supportedpositioningmethods_callback = cb; }
    inline void setQGeoPositionInfoSource_MinimumUpdateInterval_Callback(QGeoPositionInfoSource_MinimumUpdateInterval_Callback cb) { qgeopositioninfosource_minimumupdateinterval_callback = cb; }
    inline void setQGeoPositionInfoSource_SetBackendProperty_Callback(QGeoPositionInfoSource_SetBackendProperty_Callback cb) { qgeopositioninfosource_setbackendproperty_callback = cb; }
    inline void setQGeoPositionInfoSource_BackendProperty_Callback(QGeoPositionInfoSource_BackendProperty_Callback cb) { qgeopositioninfosource_backendproperty_callback = cb; }
    inline void setQGeoPositionInfoSource_Error_Callback(QGeoPositionInfoSource_Error_Callback cb) { qgeopositioninfosource_error_callback = cb; }
    inline void setQGeoPositionInfoSource_StartUpdates_Callback(QGeoPositionInfoSource_StartUpdates_Callback cb) { qgeopositioninfosource_startupdates_callback = cb; }
    inline void setQGeoPositionInfoSource_StopUpdates_Callback(QGeoPositionInfoSource_StopUpdates_Callback cb) { qgeopositioninfosource_stopupdates_callback = cb; }
    inline void setQGeoPositionInfoSource_RequestUpdate_Callback(QGeoPositionInfoSource_RequestUpdate_Callback cb) { qgeopositioninfosource_requestupdate_callback = cb; }
    inline void setQGeoPositionInfoSource_Event_Callback(QGeoPositionInfoSource_Event_Callback cb) { qgeopositioninfosource_event_callback = cb; }
    inline void setQGeoPositionInfoSource_EventFilter_Callback(QGeoPositionInfoSource_EventFilter_Callback cb) { qgeopositioninfosource_eventfilter_callback = cb; }
    inline void setQGeoPositionInfoSource_TimerEvent_Callback(QGeoPositionInfoSource_TimerEvent_Callback cb) { qgeopositioninfosource_timerevent_callback = cb; }
    inline void setQGeoPositionInfoSource_ChildEvent_Callback(QGeoPositionInfoSource_ChildEvent_Callback cb) { qgeopositioninfosource_childevent_callback = cb; }
    inline void setQGeoPositionInfoSource_CustomEvent_Callback(QGeoPositionInfoSource_CustomEvent_Callback cb) { qgeopositioninfosource_customevent_callback = cb; }
    inline void setQGeoPositionInfoSource_ConnectNotify_Callback(QGeoPositionInfoSource_ConnectNotify_Callback cb) { qgeopositioninfosource_connectnotify_callback = cb; }
    inline void setQGeoPositionInfoSource_DisconnectNotify_Callback(QGeoPositionInfoSource_DisconnectNotify_Callback cb) { qgeopositioninfosource_disconnectnotify_callback = cb; }
    inline void setQGeoPositionInfoSource_Sender_Callback(QGeoPositionInfoSource_Sender_Callback cb) { qgeopositioninfosource_sender_callback = cb; }
    inline void setQGeoPositionInfoSource_SenderSignalIndex_Callback(QGeoPositionInfoSource_SenderSignalIndex_Callback cb) { qgeopositioninfosource_sendersignalindex_callback = cb; }
    inline void setQGeoPositionInfoSource_Receivers_Callback(QGeoPositionInfoSource_Receivers_Callback cb) { qgeopositioninfosource_receivers_callback = cb; }
    inline void setQGeoPositionInfoSource_IsSignalConnected_Callback(QGeoPositionInfoSource_IsSignalConnected_Callback cb) { qgeopositioninfosource_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQGeoPositionInfoSource_MetaObject_IsBase(bool value) const { qgeopositioninfosource_metaobject_isbase = value; }
    inline void setQGeoPositionInfoSource_Metacast_IsBase(bool value) const { qgeopositioninfosource_metacast_isbase = value; }
    inline void setQGeoPositionInfoSource_Metacall_IsBase(bool value) const { qgeopositioninfosource_metacall_isbase = value; }
    inline void setQGeoPositionInfoSource_SetUpdateInterval_IsBase(bool value) const { qgeopositioninfosource_setupdateinterval_isbase = value; }
    inline void setQGeoPositionInfoSource_SetPreferredPositioningMethods_IsBase(bool value) const { qgeopositioninfosource_setpreferredpositioningmethods_isbase = value; }
    inline void setQGeoPositionInfoSource_LastKnownPosition_IsBase(bool value) const { qgeopositioninfosource_lastknownposition_isbase = value; }
    inline void setQGeoPositionInfoSource_SupportedPositioningMethods_IsBase(bool value) const { qgeopositioninfosource_supportedpositioningmethods_isbase = value; }
    inline void setQGeoPositionInfoSource_MinimumUpdateInterval_IsBase(bool value) const { qgeopositioninfosource_minimumupdateinterval_isbase = value; }
    inline void setQGeoPositionInfoSource_SetBackendProperty_IsBase(bool value) const { qgeopositioninfosource_setbackendproperty_isbase = value; }
    inline void setQGeoPositionInfoSource_BackendProperty_IsBase(bool value) const { qgeopositioninfosource_backendproperty_isbase = value; }
    inline void setQGeoPositionInfoSource_Error_IsBase(bool value) const { qgeopositioninfosource_error_isbase = value; }
    inline void setQGeoPositionInfoSource_StartUpdates_IsBase(bool value) const { qgeopositioninfosource_startupdates_isbase = value; }
    inline void setQGeoPositionInfoSource_StopUpdates_IsBase(bool value) const { qgeopositioninfosource_stopupdates_isbase = value; }
    inline void setQGeoPositionInfoSource_RequestUpdate_IsBase(bool value) const { qgeopositioninfosource_requestupdate_isbase = value; }
    inline void setQGeoPositionInfoSource_Event_IsBase(bool value) const { qgeopositioninfosource_event_isbase = value; }
    inline void setQGeoPositionInfoSource_EventFilter_IsBase(bool value) const { qgeopositioninfosource_eventfilter_isbase = value; }
    inline void setQGeoPositionInfoSource_TimerEvent_IsBase(bool value) const { qgeopositioninfosource_timerevent_isbase = value; }
    inline void setQGeoPositionInfoSource_ChildEvent_IsBase(bool value) const { qgeopositioninfosource_childevent_isbase = value; }
    inline void setQGeoPositionInfoSource_CustomEvent_IsBase(bool value) const { qgeopositioninfosource_customevent_isbase = value; }
    inline void setQGeoPositionInfoSource_ConnectNotify_IsBase(bool value) const { qgeopositioninfosource_connectnotify_isbase = value; }
    inline void setQGeoPositionInfoSource_DisconnectNotify_IsBase(bool value) const { qgeopositioninfosource_disconnectnotify_isbase = value; }
    inline void setQGeoPositionInfoSource_Sender_IsBase(bool value) const { qgeopositioninfosource_sender_isbase = value; }
    inline void setQGeoPositionInfoSource_SenderSignalIndex_IsBase(bool value) const { qgeopositioninfosource_sendersignalindex_isbase = value; }
    inline void setQGeoPositionInfoSource_Receivers_IsBase(bool value) const { qgeopositioninfosource_receivers_isbase = value; }
    inline void setQGeoPositionInfoSource_IsSignalConnected_IsBase(bool value) const { qgeopositioninfosource_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qgeopositioninfosource_metaobject_isbase) {
            qgeopositioninfosource_metaobject_isbase = false;
            return QGeoPositionInfoSource::metaObject();
        } else if (qgeopositioninfosource_metaobject_callback != nullptr) {
            QMetaObject* callback_ret = qgeopositioninfosource_metaobject_callback();
            return callback_ret;
        } else {
            return QGeoPositionInfoSource::metaObject();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qgeopositioninfosource_metacast_isbase) {
            qgeopositioninfosource_metacast_isbase = false;
            return QGeoPositionInfoSource::qt_metacast(param1);
        } else if (qgeopositioninfosource_metacast_callback != nullptr) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = qgeopositioninfosource_metacast_callback(this, cbval1);
            return callback_ret;
        } else {
            return QGeoPositionInfoSource::qt_metacast(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qgeopositioninfosource_metacall_isbase) {
            qgeopositioninfosource_metacall_isbase = false;
            return QGeoPositionInfoSource::qt_metacall(param1, param2, param3);
        } else if (qgeopositioninfosource_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qgeopositioninfosource_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QGeoPositionInfoSource::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setUpdateInterval(int msec) override {
        if (qgeopositioninfosource_setupdateinterval_isbase) {
            qgeopositioninfosource_setupdateinterval_isbase = false;
            QGeoPositionInfoSource::setUpdateInterval(msec);
        } else if (qgeopositioninfosource_setupdateinterval_callback != nullptr) {
            int cbval1 = msec;

            qgeopositioninfosource_setupdateinterval_callback(this, cbval1);
        } else {
            QGeoPositionInfoSource::setUpdateInterval(msec);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setPreferredPositioningMethods(QGeoPositionInfoSource::PositioningMethods methods) override {
        if (qgeopositioninfosource_setpreferredpositioningmethods_isbase) {
            qgeopositioninfosource_setpreferredpositioningmethods_isbase = false;
            QGeoPositionInfoSource::setPreferredPositioningMethods(methods);
        } else if (qgeopositioninfosource_setpreferredpositioningmethods_callback != nullptr) {
            int cbval1 = static_cast<int>(methods);

            qgeopositioninfosource_setpreferredpositioningmethods_callback(this, cbval1);
        } else {
            QGeoPositionInfoSource::setPreferredPositioningMethods(methods);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QGeoPositionInfo lastKnownPosition(bool fromSatellitePositioningMethodsOnly) const override {
        if (qgeopositioninfosource_lastknownposition_callback != nullptr) {
            bool cbval1 = fromSatellitePositioningMethodsOnly;

            QGeoPositionInfo* callback_ret = qgeopositioninfosource_lastknownposition_callback(this, cbval1);
            return *callback_ret;
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QGeoPositionInfoSource::PositioningMethods supportedPositioningMethods() const override {
        if (qgeopositioninfosource_supportedpositioningmethods_callback != nullptr) {
            int callback_ret = qgeopositioninfosource_supportedpositioningmethods_callback();
            return static_cast<QGeoPositionInfoSource::PositioningMethods>(callback_ret);
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int minimumUpdateInterval() const override {
        if (qgeopositioninfosource_minimumupdateinterval_callback != nullptr) {
            int callback_ret = qgeopositioninfosource_minimumupdateinterval_callback();
            return static_cast<int>(callback_ret);
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setBackendProperty(const QString& name, const QVariant& value) override {
        if (qgeopositioninfosource_setbackendproperty_isbase) {
            qgeopositioninfosource_setbackendproperty_isbase = false;
            return QGeoPositionInfoSource::setBackendProperty(name, value);
        } else if (qgeopositioninfosource_setbackendproperty_callback != nullptr) {
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

            bool callback_ret = qgeopositioninfosource_setbackendproperty_callback(this, cbval1, cbval2);
            libqt_free(name_str);
            return callback_ret;
        } else {
            return QGeoPositionInfoSource::setBackendProperty(name, value);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant backendProperty(const QString& name) const override {
        if (qgeopositioninfosource_backendproperty_isbase) {
            qgeopositioninfosource_backendproperty_isbase = false;
            return QGeoPositionInfoSource::backendProperty(name);
        } else if (qgeopositioninfosource_backendproperty_callback != nullptr) {
            const QString name_ret = name;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray name_b = name_ret.toUtf8();
            auto name_str_len = name_b.length();
            const char* name_str = static_cast<const char*>(malloc(name_str_len + 1));
            memcpy((void*)name_str, name_b.data(), name_str_len);
            ((char*)name_str)[name_str_len] = '\0';
            const char* cbval1 = name_str;

            QVariant* callback_ret = qgeopositioninfosource_backendproperty_callback(this, cbval1);
            libqt_free(name_str);
            return *callback_ret;
        } else {
            return QGeoPositionInfoSource::backendProperty(name);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QGeoPositionInfoSource::Error error() const override {
        if (qgeopositioninfosource_error_callback != nullptr) {
            int callback_ret = qgeopositioninfosource_error_callback();
            return static_cast<QGeoPositionInfoSource::Error>(callback_ret);
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void startUpdates() override {
        if (qgeopositioninfosource_startupdates_callback != nullptr) {
            qgeopositioninfosource_startupdates_callback();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void stopUpdates() override {
        if (qgeopositioninfosource_stopupdates_callback != nullptr) {
            qgeopositioninfosource_stopupdates_callback();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void requestUpdate(int timeout) override {
        if (qgeopositioninfosource_requestupdate_callback != nullptr) {
            int cbval1 = timeout;

            qgeopositioninfosource_requestupdate_callback(this, cbval1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qgeopositioninfosource_event_isbase) {
            qgeopositioninfosource_event_isbase = false;
            return QGeoPositionInfoSource::event(event);
        } else if (qgeopositioninfosource_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qgeopositioninfosource_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QGeoPositionInfoSource::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qgeopositioninfosource_eventfilter_isbase) {
            qgeopositioninfosource_eventfilter_isbase = false;
            return QGeoPositionInfoSource::eventFilter(watched, event);
        } else if (qgeopositioninfosource_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qgeopositioninfosource_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QGeoPositionInfoSource::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qgeopositioninfosource_timerevent_isbase) {
            qgeopositioninfosource_timerevent_isbase = false;
            QGeoPositionInfoSource::timerEvent(event);
        } else if (qgeopositioninfosource_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qgeopositioninfosource_timerevent_callback(this, cbval1);
        } else {
            QGeoPositionInfoSource::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qgeopositioninfosource_childevent_isbase) {
            qgeopositioninfosource_childevent_isbase = false;
            QGeoPositionInfoSource::childEvent(event);
        } else if (qgeopositioninfosource_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qgeopositioninfosource_childevent_callback(this, cbval1);
        } else {
            QGeoPositionInfoSource::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qgeopositioninfosource_customevent_isbase) {
            qgeopositioninfosource_customevent_isbase = false;
            QGeoPositionInfoSource::customEvent(event);
        } else if (qgeopositioninfosource_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qgeopositioninfosource_customevent_callback(this, cbval1);
        } else {
            QGeoPositionInfoSource::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qgeopositioninfosource_connectnotify_isbase) {
            qgeopositioninfosource_connectnotify_isbase = false;
            QGeoPositionInfoSource::connectNotify(signal);
        } else if (qgeopositioninfosource_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qgeopositioninfosource_connectnotify_callback(this, cbval1);
        } else {
            QGeoPositionInfoSource::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qgeopositioninfosource_disconnectnotify_isbase) {
            qgeopositioninfosource_disconnectnotify_isbase = false;
            QGeoPositionInfoSource::disconnectNotify(signal);
        } else if (qgeopositioninfosource_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qgeopositioninfosource_disconnectnotify_callback(this, cbval1);
        } else {
            QGeoPositionInfoSource::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qgeopositioninfosource_sender_isbase) {
            qgeopositioninfosource_sender_isbase = false;
            return QGeoPositionInfoSource::sender();
        } else if (qgeopositioninfosource_sender_callback != nullptr) {
            QObject* callback_ret = qgeopositioninfosource_sender_callback();
            return callback_ret;
        } else {
            return QGeoPositionInfoSource::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qgeopositioninfosource_sendersignalindex_isbase) {
            qgeopositioninfosource_sendersignalindex_isbase = false;
            return QGeoPositionInfoSource::senderSignalIndex();
        } else if (qgeopositioninfosource_sendersignalindex_callback != nullptr) {
            int callback_ret = qgeopositioninfosource_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QGeoPositionInfoSource::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qgeopositioninfosource_receivers_isbase) {
            qgeopositioninfosource_receivers_isbase = false;
            return QGeoPositionInfoSource::receivers(signal);
        } else if (qgeopositioninfosource_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qgeopositioninfosource_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QGeoPositionInfoSource::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qgeopositioninfosource_issignalconnected_isbase) {
            qgeopositioninfosource_issignalconnected_isbase = false;
            return QGeoPositionInfoSource::isSignalConnected(signal);
        } else if (qgeopositioninfosource_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qgeopositioninfosource_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QGeoPositionInfoSource::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void QGeoPositionInfoSource_TimerEvent(QGeoPositionInfoSource* self, QTimerEvent* event);
    friend void QGeoPositionInfoSource_SuperTimerEvent(QGeoPositionInfoSource* self, QTimerEvent* event);
    friend void QGeoPositionInfoSource_ChildEvent(QGeoPositionInfoSource* self, QChildEvent* event);
    friend void QGeoPositionInfoSource_SuperChildEvent(QGeoPositionInfoSource* self, QChildEvent* event);
    friend void QGeoPositionInfoSource_CustomEvent(QGeoPositionInfoSource* self, QEvent* event);
    friend void QGeoPositionInfoSource_SuperCustomEvent(QGeoPositionInfoSource* self, QEvent* event);
    friend void QGeoPositionInfoSource_ConnectNotify(QGeoPositionInfoSource* self, const QMetaMethod* signal);
    friend void QGeoPositionInfoSource_SuperConnectNotify(QGeoPositionInfoSource* self, const QMetaMethod* signal);
    friend void QGeoPositionInfoSource_DisconnectNotify(QGeoPositionInfoSource* self, const QMetaMethod* signal);
    friend void QGeoPositionInfoSource_SuperDisconnectNotify(QGeoPositionInfoSource* self, const QMetaMethod* signal);
    friend QObject* QGeoPositionInfoSource_Sender(const QGeoPositionInfoSource* self);
    friend QObject* QGeoPositionInfoSource_SuperSender(const QGeoPositionInfoSource* self);
    friend int QGeoPositionInfoSource_SenderSignalIndex(const QGeoPositionInfoSource* self);
    friend int QGeoPositionInfoSource_SuperSenderSignalIndex(const QGeoPositionInfoSource* self);
    friend int QGeoPositionInfoSource_Receivers(const QGeoPositionInfoSource* self, const char* signal);
    friend int QGeoPositionInfoSource_SuperReceivers(const QGeoPositionInfoSource* self, const char* signal);
    friend bool QGeoPositionInfoSource_IsSignalConnected(const QGeoPositionInfoSource* self, const QMetaMethod* signal);
    friend bool QGeoPositionInfoSource_SuperIsSignalConnected(const QGeoPositionInfoSource* self, const QMetaMethod* signal);
};

#endif
