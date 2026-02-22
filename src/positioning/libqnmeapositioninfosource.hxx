#pragma once
#ifndef SRC_POSITIONINGC_LIBVIRTUALQNMEAPOSITIONINFOSOURCE_H
#define SRC_POSITIONINGC_LIBVIRTUALQNMEAPOSITIONINFOSOURCE_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QNmeaPositionInfoSource so that we can call protected methods
class VirtualQNmeaPositionInfoSource final : public QNmeaPositionInfoSource {

  public:
    // Virtual class boolean flag
    bool isVirtualQNmeaPositionInfoSource = true;

    // Virtual class public types (including callbacks)
    using QNmeaPositionInfoSource_MetaObject_Callback = QMetaObject* (*)();
    using QNmeaPositionInfoSource_Metacast_Callback = void* (*)(QNmeaPositionInfoSource*, const char*);
    using QNmeaPositionInfoSource_Metacall_Callback = int (*)(QNmeaPositionInfoSource*, int, int, void**);
    using QNmeaPositionInfoSource_SetUpdateInterval_Callback = void (*)(QNmeaPositionInfoSource*, int);
    using QNmeaPositionInfoSource_LastKnownPosition_Callback = QGeoPositionInfo* (*)(const QNmeaPositionInfoSource*, bool);
    using QNmeaPositionInfoSource_SupportedPositioningMethods_Callback = int (*)();
    using QNmeaPositionInfoSource_MinimumUpdateInterval_Callback = int (*)();
    using QNmeaPositionInfoSource_Error_Callback = int (*)();
    using QNmeaPositionInfoSource_StartUpdates_Callback = void (*)();
    using QNmeaPositionInfoSource_StopUpdates_Callback = void (*)();
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
    using QNmeaPositionInfoSource_ParsePosInfoFromNmeaData2_Callback = bool (*)(QNmeaPositionInfoSource*, libqt_string, QGeoPositionInfo*, bool*);
    using QNmeaPositionInfoSource_SetError_Callback = void (*)(QNmeaPositionInfoSource*, int);
    using QNmeaPositionInfoSource_Sender_Callback = QObject* (*)();
    using QNmeaPositionInfoSource_SenderSignalIndex_Callback = int (*)();
    using QNmeaPositionInfoSource_Receivers_Callback = int (*)(const QNmeaPositionInfoSource*, const char*);
    using QNmeaPositionInfoSource_IsSignalConnected_Callback = bool (*)(const QNmeaPositionInfoSource*, QMetaMethod*);

  protected:
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
    QNmeaPositionInfoSource_ParsePosInfoFromNmeaData2_Callback qnmeapositioninfosource_parseposinfofromnmeadata2_callback = nullptr;
    QNmeaPositionInfoSource_SetError_Callback qnmeapositioninfosource_seterror_callback = nullptr;
    QNmeaPositionInfoSource_Sender_Callback qnmeapositioninfosource_sender_callback = nullptr;
    QNmeaPositionInfoSource_SenderSignalIndex_Callback qnmeapositioninfosource_sendersignalindex_callback = nullptr;
    QNmeaPositionInfoSource_Receivers_Callback qnmeapositioninfosource_receivers_callback = nullptr;
    QNmeaPositionInfoSource_IsSignalConnected_Callback qnmeapositioninfosource_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qnmeapositioninfosource_metaobject_isbase = false;
    mutable bool qnmeapositioninfosource_metacast_isbase = false;
    mutable bool qnmeapositioninfosource_metacall_isbase = false;
    mutable bool qnmeapositioninfosource_setupdateinterval_isbase = false;
    mutable bool qnmeapositioninfosource_lastknownposition_isbase = false;
    mutable bool qnmeapositioninfosource_supportedpositioningmethods_isbase = false;
    mutable bool qnmeapositioninfosource_minimumupdateinterval_isbase = false;
    mutable bool qnmeapositioninfosource_error_isbase = false;
    mutable bool qnmeapositioninfosource_startupdates_isbase = false;
    mutable bool qnmeapositioninfosource_stopupdates_isbase = false;
    mutable bool qnmeapositioninfosource_requestupdate_isbase = false;
    mutable bool qnmeapositioninfosource_parseposinfofromnmeadata_isbase = false;
    mutable bool qnmeapositioninfosource_setpreferredpositioningmethods_isbase = false;
    mutable bool qnmeapositioninfosource_setbackendproperty_isbase = false;
    mutable bool qnmeapositioninfosource_backendproperty_isbase = false;
    mutable bool qnmeapositioninfosource_event_isbase = false;
    mutable bool qnmeapositioninfosource_eventfilter_isbase = false;
    mutable bool qnmeapositioninfosource_timerevent_isbase = false;
    mutable bool qnmeapositioninfosource_childevent_isbase = false;
    mutable bool qnmeapositioninfosource_customevent_isbase = false;
    mutable bool qnmeapositioninfosource_connectnotify_isbase = false;
    mutable bool qnmeapositioninfosource_disconnectnotify_isbase = false;
    mutable bool qnmeapositioninfosource_parseposinfofromnmeadata2_isbase = false;
    mutable bool qnmeapositioninfosource_seterror_isbase = false;
    mutable bool qnmeapositioninfosource_sender_isbase = false;
    mutable bool qnmeapositioninfosource_sendersignalindex_isbase = false;
    mutable bool qnmeapositioninfosource_receivers_isbase = false;
    mutable bool qnmeapositioninfosource_issignalconnected_isbase = false;

  public:
    VirtualQNmeaPositionInfoSource(QNmeaPositionInfoSource::UpdateMode updateMode) : QNmeaPositionInfoSource(updateMode) {};
    VirtualQNmeaPositionInfoSource(QNmeaPositionInfoSource::UpdateMode updateMode, QObject* parent) : QNmeaPositionInfoSource(updateMode, parent) {};

    ~VirtualQNmeaPositionInfoSource() {
        qnmeapositioninfosource_metaobject_callback = nullptr;
        qnmeapositioninfosource_metacast_callback = nullptr;
        qnmeapositioninfosource_metacall_callback = nullptr;
        qnmeapositioninfosource_setupdateinterval_callback = nullptr;
        qnmeapositioninfosource_lastknownposition_callback = nullptr;
        qnmeapositioninfosource_supportedpositioningmethods_callback = nullptr;
        qnmeapositioninfosource_minimumupdateinterval_callback = nullptr;
        qnmeapositioninfosource_error_callback = nullptr;
        qnmeapositioninfosource_startupdates_callback = nullptr;
        qnmeapositioninfosource_stopupdates_callback = nullptr;
        qnmeapositioninfosource_requestupdate_callback = nullptr;
        qnmeapositioninfosource_parseposinfofromnmeadata_callback = nullptr;
        qnmeapositioninfosource_setpreferredpositioningmethods_callback = nullptr;
        qnmeapositioninfosource_setbackendproperty_callback = nullptr;
        qnmeapositioninfosource_backendproperty_callback = nullptr;
        qnmeapositioninfosource_event_callback = nullptr;
        qnmeapositioninfosource_eventfilter_callback = nullptr;
        qnmeapositioninfosource_timerevent_callback = nullptr;
        qnmeapositioninfosource_childevent_callback = nullptr;
        qnmeapositioninfosource_customevent_callback = nullptr;
        qnmeapositioninfosource_connectnotify_callback = nullptr;
        qnmeapositioninfosource_disconnectnotify_callback = nullptr;
        qnmeapositioninfosource_parseposinfofromnmeadata2_callback = nullptr;
        qnmeapositioninfosource_seterror_callback = nullptr;
        qnmeapositioninfosource_sender_callback = nullptr;
        qnmeapositioninfosource_sendersignalindex_callback = nullptr;
        qnmeapositioninfosource_receivers_callback = nullptr;
        qnmeapositioninfosource_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setQNmeaPositionInfoSource_MetaObject_Callback(QNmeaPositionInfoSource_MetaObject_Callback cb) { qnmeapositioninfosource_metaobject_callback = cb; }
    inline void setQNmeaPositionInfoSource_Metacast_Callback(QNmeaPositionInfoSource_Metacast_Callback cb) { qnmeapositioninfosource_metacast_callback = cb; }
    inline void setQNmeaPositionInfoSource_Metacall_Callback(QNmeaPositionInfoSource_Metacall_Callback cb) { qnmeapositioninfosource_metacall_callback = cb; }
    inline void setQNmeaPositionInfoSource_SetUpdateInterval_Callback(QNmeaPositionInfoSource_SetUpdateInterval_Callback cb) { qnmeapositioninfosource_setupdateinterval_callback = cb; }
    inline void setQNmeaPositionInfoSource_LastKnownPosition_Callback(QNmeaPositionInfoSource_LastKnownPosition_Callback cb) { qnmeapositioninfosource_lastknownposition_callback = cb; }
    inline void setQNmeaPositionInfoSource_SupportedPositioningMethods_Callback(QNmeaPositionInfoSource_SupportedPositioningMethods_Callback cb) { qnmeapositioninfosource_supportedpositioningmethods_callback = cb; }
    inline void setQNmeaPositionInfoSource_MinimumUpdateInterval_Callback(QNmeaPositionInfoSource_MinimumUpdateInterval_Callback cb) { qnmeapositioninfosource_minimumupdateinterval_callback = cb; }
    inline void setQNmeaPositionInfoSource_Error_Callback(QNmeaPositionInfoSource_Error_Callback cb) { qnmeapositioninfosource_error_callback = cb; }
    inline void setQNmeaPositionInfoSource_StartUpdates_Callback(QNmeaPositionInfoSource_StartUpdates_Callback cb) { qnmeapositioninfosource_startupdates_callback = cb; }
    inline void setQNmeaPositionInfoSource_StopUpdates_Callback(QNmeaPositionInfoSource_StopUpdates_Callback cb) { qnmeapositioninfosource_stopupdates_callback = cb; }
    inline void setQNmeaPositionInfoSource_RequestUpdate_Callback(QNmeaPositionInfoSource_RequestUpdate_Callback cb) { qnmeapositioninfosource_requestupdate_callback = cb; }
    inline void setQNmeaPositionInfoSource_ParsePosInfoFromNmeaData_Callback(QNmeaPositionInfoSource_ParsePosInfoFromNmeaData_Callback cb) { qnmeapositioninfosource_parseposinfofromnmeadata_callback = cb; }
    inline void setQNmeaPositionInfoSource_SetPreferredPositioningMethods_Callback(QNmeaPositionInfoSource_SetPreferredPositioningMethods_Callback cb) { qnmeapositioninfosource_setpreferredpositioningmethods_callback = cb; }
    inline void setQNmeaPositionInfoSource_SetBackendProperty_Callback(QNmeaPositionInfoSource_SetBackendProperty_Callback cb) { qnmeapositioninfosource_setbackendproperty_callback = cb; }
    inline void setQNmeaPositionInfoSource_BackendProperty_Callback(QNmeaPositionInfoSource_BackendProperty_Callback cb) { qnmeapositioninfosource_backendproperty_callback = cb; }
    inline void setQNmeaPositionInfoSource_Event_Callback(QNmeaPositionInfoSource_Event_Callback cb) { qnmeapositioninfosource_event_callback = cb; }
    inline void setQNmeaPositionInfoSource_EventFilter_Callback(QNmeaPositionInfoSource_EventFilter_Callback cb) { qnmeapositioninfosource_eventfilter_callback = cb; }
    inline void setQNmeaPositionInfoSource_TimerEvent_Callback(QNmeaPositionInfoSource_TimerEvent_Callback cb) { qnmeapositioninfosource_timerevent_callback = cb; }
    inline void setQNmeaPositionInfoSource_ChildEvent_Callback(QNmeaPositionInfoSource_ChildEvent_Callback cb) { qnmeapositioninfosource_childevent_callback = cb; }
    inline void setQNmeaPositionInfoSource_CustomEvent_Callback(QNmeaPositionInfoSource_CustomEvent_Callback cb) { qnmeapositioninfosource_customevent_callback = cb; }
    inline void setQNmeaPositionInfoSource_ConnectNotify_Callback(QNmeaPositionInfoSource_ConnectNotify_Callback cb) { qnmeapositioninfosource_connectnotify_callback = cb; }
    inline void setQNmeaPositionInfoSource_DisconnectNotify_Callback(QNmeaPositionInfoSource_DisconnectNotify_Callback cb) { qnmeapositioninfosource_disconnectnotify_callback = cb; }
    inline void setQNmeaPositionInfoSource_ParsePosInfoFromNmeaData2_Callback(QNmeaPositionInfoSource_ParsePosInfoFromNmeaData2_Callback cb) { qnmeapositioninfosource_parseposinfofromnmeadata2_callback = cb; }
    inline void setQNmeaPositionInfoSource_SetError_Callback(QNmeaPositionInfoSource_SetError_Callback cb) { qnmeapositioninfosource_seterror_callback = cb; }
    inline void setQNmeaPositionInfoSource_Sender_Callback(QNmeaPositionInfoSource_Sender_Callback cb) { qnmeapositioninfosource_sender_callback = cb; }
    inline void setQNmeaPositionInfoSource_SenderSignalIndex_Callback(QNmeaPositionInfoSource_SenderSignalIndex_Callback cb) { qnmeapositioninfosource_sendersignalindex_callback = cb; }
    inline void setQNmeaPositionInfoSource_Receivers_Callback(QNmeaPositionInfoSource_Receivers_Callback cb) { qnmeapositioninfosource_receivers_callback = cb; }
    inline void setQNmeaPositionInfoSource_IsSignalConnected_Callback(QNmeaPositionInfoSource_IsSignalConnected_Callback cb) { qnmeapositioninfosource_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQNmeaPositionInfoSource_MetaObject_IsBase(bool value) const { qnmeapositioninfosource_metaobject_isbase = value; }
    inline void setQNmeaPositionInfoSource_Metacast_IsBase(bool value) const { qnmeapositioninfosource_metacast_isbase = value; }
    inline void setQNmeaPositionInfoSource_Metacall_IsBase(bool value) const { qnmeapositioninfosource_metacall_isbase = value; }
    inline void setQNmeaPositionInfoSource_SetUpdateInterval_IsBase(bool value) const { qnmeapositioninfosource_setupdateinterval_isbase = value; }
    inline void setQNmeaPositionInfoSource_LastKnownPosition_IsBase(bool value) const { qnmeapositioninfosource_lastknownposition_isbase = value; }
    inline void setQNmeaPositionInfoSource_SupportedPositioningMethods_IsBase(bool value) const { qnmeapositioninfosource_supportedpositioningmethods_isbase = value; }
    inline void setQNmeaPositionInfoSource_MinimumUpdateInterval_IsBase(bool value) const { qnmeapositioninfosource_minimumupdateinterval_isbase = value; }
    inline void setQNmeaPositionInfoSource_Error_IsBase(bool value) const { qnmeapositioninfosource_error_isbase = value; }
    inline void setQNmeaPositionInfoSource_StartUpdates_IsBase(bool value) const { qnmeapositioninfosource_startupdates_isbase = value; }
    inline void setQNmeaPositionInfoSource_StopUpdates_IsBase(bool value) const { qnmeapositioninfosource_stopupdates_isbase = value; }
    inline void setQNmeaPositionInfoSource_RequestUpdate_IsBase(bool value) const { qnmeapositioninfosource_requestupdate_isbase = value; }
    inline void setQNmeaPositionInfoSource_ParsePosInfoFromNmeaData_IsBase(bool value) const { qnmeapositioninfosource_parseposinfofromnmeadata_isbase = value; }
    inline void setQNmeaPositionInfoSource_SetPreferredPositioningMethods_IsBase(bool value) const { qnmeapositioninfosource_setpreferredpositioningmethods_isbase = value; }
    inline void setQNmeaPositionInfoSource_SetBackendProperty_IsBase(bool value) const { qnmeapositioninfosource_setbackendproperty_isbase = value; }
    inline void setQNmeaPositionInfoSource_BackendProperty_IsBase(bool value) const { qnmeapositioninfosource_backendproperty_isbase = value; }
    inline void setQNmeaPositionInfoSource_Event_IsBase(bool value) const { qnmeapositioninfosource_event_isbase = value; }
    inline void setQNmeaPositionInfoSource_EventFilter_IsBase(bool value) const { qnmeapositioninfosource_eventfilter_isbase = value; }
    inline void setQNmeaPositionInfoSource_TimerEvent_IsBase(bool value) const { qnmeapositioninfosource_timerevent_isbase = value; }
    inline void setQNmeaPositionInfoSource_ChildEvent_IsBase(bool value) const { qnmeapositioninfosource_childevent_isbase = value; }
    inline void setQNmeaPositionInfoSource_CustomEvent_IsBase(bool value) const { qnmeapositioninfosource_customevent_isbase = value; }
    inline void setQNmeaPositionInfoSource_ConnectNotify_IsBase(bool value) const { qnmeapositioninfosource_connectnotify_isbase = value; }
    inline void setQNmeaPositionInfoSource_DisconnectNotify_IsBase(bool value) const { qnmeapositioninfosource_disconnectnotify_isbase = value; }
    inline void setQNmeaPositionInfoSource_ParsePosInfoFromNmeaData2_IsBase(bool value) const { qnmeapositioninfosource_parseposinfofromnmeadata2_isbase = value; }
    inline void setQNmeaPositionInfoSource_SetError_IsBase(bool value) const { qnmeapositioninfosource_seterror_isbase = value; }
    inline void setQNmeaPositionInfoSource_Sender_IsBase(bool value) const { qnmeapositioninfosource_sender_isbase = value; }
    inline void setQNmeaPositionInfoSource_SenderSignalIndex_IsBase(bool value) const { qnmeapositioninfosource_sendersignalindex_isbase = value; }
    inline void setQNmeaPositionInfoSource_Receivers_IsBase(bool value) const { qnmeapositioninfosource_receivers_isbase = value; }
    inline void setQNmeaPositionInfoSource_IsSignalConnected_IsBase(bool value) const { qnmeapositioninfosource_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qnmeapositioninfosource_metaobject_isbase) {
            qnmeapositioninfosource_metaobject_isbase = false;
            return QNmeaPositionInfoSource::metaObject();
        } else if (qnmeapositioninfosource_metaobject_callback != nullptr) {
            QMetaObject* callback_ret = qnmeapositioninfosource_metaobject_callback();
            return callback_ret;
        } else {
            return QNmeaPositionInfoSource::metaObject();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qnmeapositioninfosource_metacast_isbase) {
            qnmeapositioninfosource_metacast_isbase = false;
            return QNmeaPositionInfoSource::qt_metacast(param1);
        } else if (qnmeapositioninfosource_metacast_callback != nullptr) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = qnmeapositioninfosource_metacast_callback(this, cbval1);
            return callback_ret;
        } else {
            return QNmeaPositionInfoSource::qt_metacast(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qnmeapositioninfosource_metacall_isbase) {
            qnmeapositioninfosource_metacall_isbase = false;
            return QNmeaPositionInfoSource::qt_metacall(param1, param2, param3);
        } else if (qnmeapositioninfosource_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qnmeapositioninfosource_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QNmeaPositionInfoSource::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setUpdateInterval(int msec) override {
        if (qnmeapositioninfosource_setupdateinterval_isbase) {
            qnmeapositioninfosource_setupdateinterval_isbase = false;
            QNmeaPositionInfoSource::setUpdateInterval(msec);
        } else if (qnmeapositioninfosource_setupdateinterval_callback != nullptr) {
            int cbval1 = msec;

            qnmeapositioninfosource_setupdateinterval_callback(this, cbval1);
        } else {
            QNmeaPositionInfoSource::setUpdateInterval(msec);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QGeoPositionInfo lastKnownPosition(bool fromSatellitePositioningMethodsOnly) const override {
        if (qnmeapositioninfosource_lastknownposition_isbase) {
            qnmeapositioninfosource_lastknownposition_isbase = false;
            return QNmeaPositionInfoSource::lastKnownPosition(fromSatellitePositioningMethodsOnly);
        } else if (qnmeapositioninfosource_lastknownposition_callback != nullptr) {
            bool cbval1 = fromSatellitePositioningMethodsOnly;

            QGeoPositionInfo* callback_ret = qnmeapositioninfosource_lastknownposition_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QNmeaPositionInfoSource::lastKnownPosition(fromSatellitePositioningMethodsOnly);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QGeoPositionInfoSource::PositioningMethods supportedPositioningMethods() const override {
        if (qnmeapositioninfosource_supportedpositioningmethods_isbase) {
            qnmeapositioninfosource_supportedpositioningmethods_isbase = false;
            return QNmeaPositionInfoSource::supportedPositioningMethods();
        } else if (qnmeapositioninfosource_supportedpositioningmethods_callback != nullptr) {
            int callback_ret = qnmeapositioninfosource_supportedpositioningmethods_callback();
            return static_cast<QGeoPositionInfoSource::PositioningMethods>(callback_ret);
        } else {
            return QNmeaPositionInfoSource::supportedPositioningMethods();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int minimumUpdateInterval() const override {
        if (qnmeapositioninfosource_minimumupdateinterval_isbase) {
            qnmeapositioninfosource_minimumupdateinterval_isbase = false;
            return QNmeaPositionInfoSource::minimumUpdateInterval();
        } else if (qnmeapositioninfosource_minimumupdateinterval_callback != nullptr) {
            int callback_ret = qnmeapositioninfosource_minimumupdateinterval_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QNmeaPositionInfoSource::minimumUpdateInterval();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QGeoPositionInfoSource::Error error() const override {
        if (qnmeapositioninfosource_error_isbase) {
            qnmeapositioninfosource_error_isbase = false;
            return QNmeaPositionInfoSource::error();
        } else if (qnmeapositioninfosource_error_callback != nullptr) {
            int callback_ret = qnmeapositioninfosource_error_callback();
            return static_cast<QGeoPositionInfoSource::Error>(callback_ret);
        } else {
            return QNmeaPositionInfoSource::error();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void startUpdates() override {
        if (qnmeapositioninfosource_startupdates_isbase) {
            qnmeapositioninfosource_startupdates_isbase = false;
            QNmeaPositionInfoSource::startUpdates();
        } else if (qnmeapositioninfosource_startupdates_callback != nullptr) {
            qnmeapositioninfosource_startupdates_callback();
        } else {
            QNmeaPositionInfoSource::startUpdates();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void stopUpdates() override {
        if (qnmeapositioninfosource_stopupdates_isbase) {
            qnmeapositioninfosource_stopupdates_isbase = false;
            QNmeaPositionInfoSource::stopUpdates();
        } else if (qnmeapositioninfosource_stopupdates_callback != nullptr) {
            qnmeapositioninfosource_stopupdates_callback();
        } else {
            QNmeaPositionInfoSource::stopUpdates();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void requestUpdate(int timeout) override {
        if (qnmeapositioninfosource_requestupdate_isbase) {
            qnmeapositioninfosource_requestupdate_isbase = false;
            QNmeaPositionInfoSource::requestUpdate(timeout);
        } else if (qnmeapositioninfosource_requestupdate_callback != nullptr) {
            int cbval1 = timeout;

            qnmeapositioninfosource_requestupdate_callback(this, cbval1);
        } else {
            QNmeaPositionInfoSource::requestUpdate(timeout);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool parsePosInfoFromNmeaData(const char* data, int size, QGeoPositionInfo* posInfo, bool* hasFix) override {
        if (qnmeapositioninfosource_parseposinfofromnmeadata_isbase) {
            qnmeapositioninfosource_parseposinfofromnmeadata_isbase = false;
            return QNmeaPositionInfoSource::parsePosInfoFromNmeaData(data, size, posInfo, hasFix);
        } else if (qnmeapositioninfosource_parseposinfofromnmeadata_callback != nullptr) {
            const char* cbval1 = (const char*)data;
            int cbval2 = size;
            QGeoPositionInfo* cbval3 = posInfo;
            bool* cbval4 = hasFix;

            bool callback_ret = qnmeapositioninfosource_parseposinfofromnmeadata_callback(this, cbval1, cbval2, cbval3, cbval4);
            return callback_ret;
        } else {
            return QNmeaPositionInfoSource::parsePosInfoFromNmeaData(data, size, posInfo, hasFix);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setPreferredPositioningMethods(QGeoPositionInfoSource::PositioningMethods methods) override {
        if (qnmeapositioninfosource_setpreferredpositioningmethods_isbase) {
            qnmeapositioninfosource_setpreferredpositioningmethods_isbase = false;
            QNmeaPositionInfoSource::setPreferredPositioningMethods(methods);
        } else if (qnmeapositioninfosource_setpreferredpositioningmethods_callback != nullptr) {
            int cbval1 = static_cast<int>(methods);

            qnmeapositioninfosource_setpreferredpositioningmethods_callback(this, cbval1);
        } else {
            QNmeaPositionInfoSource::setPreferredPositioningMethods(methods);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setBackendProperty(const QString& name, const QVariant& value) override {
        if (qnmeapositioninfosource_setbackendproperty_isbase) {
            qnmeapositioninfosource_setbackendproperty_isbase = false;
            return QNmeaPositionInfoSource::setBackendProperty(name, value);
        } else if (qnmeapositioninfosource_setbackendproperty_callback != nullptr) {
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

            bool callback_ret = qnmeapositioninfosource_setbackendproperty_callback(this, cbval1, cbval2);
            libqt_free(name_str);
            return callback_ret;
        } else {
            return QNmeaPositionInfoSource::setBackendProperty(name, value);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant backendProperty(const QString& name) const override {
        if (qnmeapositioninfosource_backendproperty_isbase) {
            qnmeapositioninfosource_backendproperty_isbase = false;
            return QNmeaPositionInfoSource::backendProperty(name);
        } else if (qnmeapositioninfosource_backendproperty_callback != nullptr) {
            const QString name_ret = name;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray name_b = name_ret.toUtf8();
            auto name_str_len = name_b.length();
            const char* name_str = static_cast<const char*>(malloc(name_str_len + 1));
            memcpy((void*)name_str, name_b.data(), name_str_len);
            ((char*)name_str)[name_str_len] = '\0';
            const char* cbval1 = name_str;

            QVariant* callback_ret = qnmeapositioninfosource_backendproperty_callback(this, cbval1);
            libqt_free(name_str);
            return *callback_ret;
        } else {
            return QNmeaPositionInfoSource::backendProperty(name);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qnmeapositioninfosource_event_isbase) {
            qnmeapositioninfosource_event_isbase = false;
            return QNmeaPositionInfoSource::event(event);
        } else if (qnmeapositioninfosource_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qnmeapositioninfosource_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QNmeaPositionInfoSource::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qnmeapositioninfosource_eventfilter_isbase) {
            qnmeapositioninfosource_eventfilter_isbase = false;
            return QNmeaPositionInfoSource::eventFilter(watched, event);
        } else if (qnmeapositioninfosource_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qnmeapositioninfosource_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QNmeaPositionInfoSource::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qnmeapositioninfosource_timerevent_isbase) {
            qnmeapositioninfosource_timerevent_isbase = false;
            QNmeaPositionInfoSource::timerEvent(event);
        } else if (qnmeapositioninfosource_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qnmeapositioninfosource_timerevent_callback(this, cbval1);
        } else {
            QNmeaPositionInfoSource::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qnmeapositioninfosource_childevent_isbase) {
            qnmeapositioninfosource_childevent_isbase = false;
            QNmeaPositionInfoSource::childEvent(event);
        } else if (qnmeapositioninfosource_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qnmeapositioninfosource_childevent_callback(this, cbval1);
        } else {
            QNmeaPositionInfoSource::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qnmeapositioninfosource_customevent_isbase) {
            qnmeapositioninfosource_customevent_isbase = false;
            QNmeaPositionInfoSource::customEvent(event);
        } else if (qnmeapositioninfosource_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qnmeapositioninfosource_customevent_callback(this, cbval1);
        } else {
            QNmeaPositionInfoSource::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qnmeapositioninfosource_connectnotify_isbase) {
            qnmeapositioninfosource_connectnotify_isbase = false;
            QNmeaPositionInfoSource::connectNotify(signal);
        } else if (qnmeapositioninfosource_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qnmeapositioninfosource_connectnotify_callback(this, cbval1);
        } else {
            QNmeaPositionInfoSource::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qnmeapositioninfosource_disconnectnotify_isbase) {
            qnmeapositioninfosource_disconnectnotify_isbase = false;
            QNmeaPositionInfoSource::disconnectNotify(signal);
        } else if (qnmeapositioninfosource_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qnmeapositioninfosource_disconnectnotify_callback(this, cbval1);
        } else {
            QNmeaPositionInfoSource::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool parsePosInfoFromNmeaData(QByteArrayView data, QGeoPositionInfo* posInfo, bool* hasFix) {
        if (qnmeapositioninfosource_parseposinfofromnmeadata2_isbase) {
            qnmeapositioninfosource_parseposinfofromnmeadata2_isbase = false;
            return QNmeaPositionInfoSource::parsePosInfoFromNmeaData(data, posInfo, hasFix);
        } else if (qnmeapositioninfosource_parseposinfofromnmeadata2_callback != nullptr) {
            QByteArrayView data_qb = data;
            libqt_string data_str;
            data_str.len = data_qb.length();
            data_str.data = static_cast<char*>(malloc(data_str.len));
            memcpy((void*)data_str.data, data_qb.data(), data_str.len);
            libqt_string cbval1 = data_str;
            QGeoPositionInfo* cbval2 = posInfo;
            bool* cbval3 = hasFix;

            bool callback_ret = qnmeapositioninfosource_parseposinfofromnmeadata2_callback(this, cbval1, cbval2, cbval3);
            libqt_free(data_str.data);
            return callback_ret;
        } else {
            return QNmeaPositionInfoSource::parsePosInfoFromNmeaData(data, posInfo, hasFix);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setError(QGeoPositionInfoSource::Error positionError) {
        if (qnmeapositioninfosource_seterror_isbase) {
            qnmeapositioninfosource_seterror_isbase = false;
            QNmeaPositionInfoSource::setError(positionError);
        } else if (qnmeapositioninfosource_seterror_callback != nullptr) {
            int cbval1 = static_cast<int>(positionError);

            qnmeapositioninfosource_seterror_callback(this, cbval1);
        } else {
            QNmeaPositionInfoSource::setError(positionError);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qnmeapositioninfosource_sender_isbase) {
            qnmeapositioninfosource_sender_isbase = false;
            return QNmeaPositionInfoSource::sender();
        } else if (qnmeapositioninfosource_sender_callback != nullptr) {
            QObject* callback_ret = qnmeapositioninfosource_sender_callback();
            return callback_ret;
        } else {
            return QNmeaPositionInfoSource::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qnmeapositioninfosource_sendersignalindex_isbase) {
            qnmeapositioninfosource_sendersignalindex_isbase = false;
            return QNmeaPositionInfoSource::senderSignalIndex();
        } else if (qnmeapositioninfosource_sendersignalindex_callback != nullptr) {
            int callback_ret = qnmeapositioninfosource_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QNmeaPositionInfoSource::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qnmeapositioninfosource_receivers_isbase) {
            qnmeapositioninfosource_receivers_isbase = false;
            return QNmeaPositionInfoSource::receivers(signal);
        } else if (qnmeapositioninfosource_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qnmeapositioninfosource_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QNmeaPositionInfoSource::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qnmeapositioninfosource_issignalconnected_isbase) {
            qnmeapositioninfosource_issignalconnected_isbase = false;
            return QNmeaPositionInfoSource::isSignalConnected(signal);
        } else if (qnmeapositioninfosource_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qnmeapositioninfosource_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QNmeaPositionInfoSource::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend bool QNmeaPositionInfoSource_ParsePosInfoFromNmeaData(QNmeaPositionInfoSource* self, const char* data, int size, QGeoPositionInfo* posInfo, bool* hasFix);
    friend bool QNmeaPositionInfoSource_QBaseParsePosInfoFromNmeaData(QNmeaPositionInfoSource* self, const char* data, int size, QGeoPositionInfo* posInfo, bool* hasFix);
    friend void QNmeaPositionInfoSource_TimerEvent(QNmeaPositionInfoSource* self, QTimerEvent* event);
    friend void QNmeaPositionInfoSource_QBaseTimerEvent(QNmeaPositionInfoSource* self, QTimerEvent* event);
    friend void QNmeaPositionInfoSource_ChildEvent(QNmeaPositionInfoSource* self, QChildEvent* event);
    friend void QNmeaPositionInfoSource_QBaseChildEvent(QNmeaPositionInfoSource* self, QChildEvent* event);
    friend void QNmeaPositionInfoSource_CustomEvent(QNmeaPositionInfoSource* self, QEvent* event);
    friend void QNmeaPositionInfoSource_QBaseCustomEvent(QNmeaPositionInfoSource* self, QEvent* event);
    friend void QNmeaPositionInfoSource_ConnectNotify(QNmeaPositionInfoSource* self, const QMetaMethod* signal);
    friend void QNmeaPositionInfoSource_QBaseConnectNotify(QNmeaPositionInfoSource* self, const QMetaMethod* signal);
    friend void QNmeaPositionInfoSource_DisconnectNotify(QNmeaPositionInfoSource* self, const QMetaMethod* signal);
    friend void QNmeaPositionInfoSource_QBaseDisconnectNotify(QNmeaPositionInfoSource* self, const QMetaMethod* signal);
    friend bool QNmeaPositionInfoSource_ParsePosInfoFromNmeaData2(QNmeaPositionInfoSource* self, libqt_string data, QGeoPositionInfo* posInfo, bool* hasFix);
    friend bool QNmeaPositionInfoSource_QBaseParsePosInfoFromNmeaData2(QNmeaPositionInfoSource* self, libqt_string data, QGeoPositionInfo* posInfo, bool* hasFix);
    friend void QNmeaPositionInfoSource_SetError(QNmeaPositionInfoSource* self, int positionError);
    friend void QNmeaPositionInfoSource_QBaseSetError(QNmeaPositionInfoSource* self, int positionError);
    friend QObject* QNmeaPositionInfoSource_Sender(const QNmeaPositionInfoSource* self);
    friend QObject* QNmeaPositionInfoSource_QBaseSender(const QNmeaPositionInfoSource* self);
    friend int QNmeaPositionInfoSource_SenderSignalIndex(const QNmeaPositionInfoSource* self);
    friend int QNmeaPositionInfoSource_QBaseSenderSignalIndex(const QNmeaPositionInfoSource* self);
    friend int QNmeaPositionInfoSource_Receivers(const QNmeaPositionInfoSource* self, const char* signal);
    friend int QNmeaPositionInfoSource_QBaseReceivers(const QNmeaPositionInfoSource* self, const char* signal);
    friend bool QNmeaPositionInfoSource_IsSignalConnected(const QNmeaPositionInfoSource* self, const QMetaMethod* signal);
    friend bool QNmeaPositionInfoSource_QBaseIsSignalConnected(const QNmeaPositionInfoSource* self, const QMetaMethod* signal);
};

#endif
