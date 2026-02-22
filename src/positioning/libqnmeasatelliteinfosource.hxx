#pragma once
#ifndef SRC_POSITIONINGC_LIBVIRTUALQNMEASATELLITEINFOSOURCE_H
#define SRC_POSITIONINGC_LIBVIRTUALQNMEASATELLITEINFOSOURCE_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QNmeaSatelliteInfoSource so that we can call protected methods
class VirtualQNmeaSatelliteInfoSource final : public QNmeaSatelliteInfoSource {

  public:
    // Virtual class boolean flag
    bool isVirtualQNmeaSatelliteInfoSource = true;

    // Virtual class public types (including callbacks)
    using QNmeaSatelliteInfoSource::SatelliteInfoParseStatus;
    using QNmeaSatelliteInfoSource_MetaObject_Callback = QMetaObject* (*)();
    using QNmeaSatelliteInfoSource_Metacast_Callback = void* (*)(QNmeaSatelliteInfoSource*, const char*);
    using QNmeaSatelliteInfoSource_Metacall_Callback = int (*)(QNmeaSatelliteInfoSource*, int, int, void**);
    using QNmeaSatelliteInfoSource_SetUpdateInterval_Callback = void (*)(QNmeaSatelliteInfoSource*, int);
    using QNmeaSatelliteInfoSource_MinimumUpdateInterval_Callback = int (*)();
    using QNmeaSatelliteInfoSource_Error_Callback = int (*)();
    using QNmeaSatelliteInfoSource_SetBackendProperty_Callback = bool (*)(QNmeaSatelliteInfoSource*, const char*, QVariant*);
    using QNmeaSatelliteInfoSource_BackendProperty_Callback = QVariant* (*)(const QNmeaSatelliteInfoSource*, const char*);
    using QNmeaSatelliteInfoSource_StartUpdates_Callback = void (*)();
    using QNmeaSatelliteInfoSource_StopUpdates_Callback = void (*)();
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
    using QNmeaSatelliteInfoSource_ParseSatellitesInUseFromNmea2_Callback = int (*)(QNmeaSatelliteInfoSource*, libqt_string, libqt_list /* of int */);
    using QNmeaSatelliteInfoSource_ParseSatelliteInfoFromNmea2_Callback = int (*)(QNmeaSatelliteInfoSource*, libqt_string, libqt_list /* of QGeoSatelliteInfo* */, int*);
    using QNmeaSatelliteInfoSource_SetError_Callback = void (*)(QNmeaSatelliteInfoSource*, int);
    using QNmeaSatelliteInfoSource_Sender_Callback = QObject* (*)();
    using QNmeaSatelliteInfoSource_SenderSignalIndex_Callback = int (*)();
    using QNmeaSatelliteInfoSource_Receivers_Callback = int (*)(const QNmeaSatelliteInfoSource*, const char*);
    using QNmeaSatelliteInfoSource_IsSignalConnected_Callback = bool (*)(const QNmeaSatelliteInfoSource*, QMetaMethod*);

  protected:
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
    QNmeaSatelliteInfoSource_ParseSatellitesInUseFromNmea2_Callback qnmeasatelliteinfosource_parsesatellitesinusefromnmea2_callback = nullptr;
    QNmeaSatelliteInfoSource_ParseSatelliteInfoFromNmea2_Callback qnmeasatelliteinfosource_parsesatelliteinfofromnmea2_callback = nullptr;
    QNmeaSatelliteInfoSource_SetError_Callback qnmeasatelliteinfosource_seterror_callback = nullptr;
    QNmeaSatelliteInfoSource_Sender_Callback qnmeasatelliteinfosource_sender_callback = nullptr;
    QNmeaSatelliteInfoSource_SenderSignalIndex_Callback qnmeasatelliteinfosource_sendersignalindex_callback = nullptr;
    QNmeaSatelliteInfoSource_Receivers_Callback qnmeasatelliteinfosource_receivers_callback = nullptr;
    QNmeaSatelliteInfoSource_IsSignalConnected_Callback qnmeasatelliteinfosource_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qnmeasatelliteinfosource_metaobject_isbase = false;
    mutable bool qnmeasatelliteinfosource_metacast_isbase = false;
    mutable bool qnmeasatelliteinfosource_metacall_isbase = false;
    mutable bool qnmeasatelliteinfosource_setupdateinterval_isbase = false;
    mutable bool qnmeasatelliteinfosource_minimumupdateinterval_isbase = false;
    mutable bool qnmeasatelliteinfosource_error_isbase = false;
    mutable bool qnmeasatelliteinfosource_setbackendproperty_isbase = false;
    mutable bool qnmeasatelliteinfosource_backendproperty_isbase = false;
    mutable bool qnmeasatelliteinfosource_startupdates_isbase = false;
    mutable bool qnmeasatelliteinfosource_stopupdates_isbase = false;
    mutable bool qnmeasatelliteinfosource_requestupdate_isbase = false;
    mutable bool qnmeasatelliteinfosource_parsesatellitesinusefromnmea_isbase = false;
    mutable bool qnmeasatelliteinfosource_parsesatelliteinfofromnmea_isbase = false;
    mutable bool qnmeasatelliteinfosource_event_isbase = false;
    mutable bool qnmeasatelliteinfosource_eventfilter_isbase = false;
    mutable bool qnmeasatelliteinfosource_timerevent_isbase = false;
    mutable bool qnmeasatelliteinfosource_childevent_isbase = false;
    mutable bool qnmeasatelliteinfosource_customevent_isbase = false;
    mutable bool qnmeasatelliteinfosource_connectnotify_isbase = false;
    mutable bool qnmeasatelliteinfosource_disconnectnotify_isbase = false;
    mutable bool qnmeasatelliteinfosource_parsesatellitesinusefromnmea2_isbase = false;
    mutable bool qnmeasatelliteinfosource_parsesatelliteinfofromnmea2_isbase = false;
    mutable bool qnmeasatelliteinfosource_seterror_isbase = false;
    mutable bool qnmeasatelliteinfosource_sender_isbase = false;
    mutable bool qnmeasatelliteinfosource_sendersignalindex_isbase = false;
    mutable bool qnmeasatelliteinfosource_receivers_isbase = false;
    mutable bool qnmeasatelliteinfosource_issignalconnected_isbase = false;

  public:
    VirtualQNmeaSatelliteInfoSource(QNmeaSatelliteInfoSource::UpdateMode mode) : QNmeaSatelliteInfoSource(mode) {};
    VirtualQNmeaSatelliteInfoSource(QNmeaSatelliteInfoSource::UpdateMode mode, QObject* parent) : QNmeaSatelliteInfoSource(mode, parent) {};

    ~VirtualQNmeaSatelliteInfoSource() {
        qnmeasatelliteinfosource_metaobject_callback = nullptr;
        qnmeasatelliteinfosource_metacast_callback = nullptr;
        qnmeasatelliteinfosource_metacall_callback = nullptr;
        qnmeasatelliteinfosource_setupdateinterval_callback = nullptr;
        qnmeasatelliteinfosource_minimumupdateinterval_callback = nullptr;
        qnmeasatelliteinfosource_error_callback = nullptr;
        qnmeasatelliteinfosource_setbackendproperty_callback = nullptr;
        qnmeasatelliteinfosource_backendproperty_callback = nullptr;
        qnmeasatelliteinfosource_startupdates_callback = nullptr;
        qnmeasatelliteinfosource_stopupdates_callback = nullptr;
        qnmeasatelliteinfosource_requestupdate_callback = nullptr;
        qnmeasatelliteinfosource_parsesatellitesinusefromnmea_callback = nullptr;
        qnmeasatelliteinfosource_parsesatelliteinfofromnmea_callback = nullptr;
        qnmeasatelliteinfosource_event_callback = nullptr;
        qnmeasatelliteinfosource_eventfilter_callback = nullptr;
        qnmeasatelliteinfosource_timerevent_callback = nullptr;
        qnmeasatelliteinfosource_childevent_callback = nullptr;
        qnmeasatelliteinfosource_customevent_callback = nullptr;
        qnmeasatelliteinfosource_connectnotify_callback = nullptr;
        qnmeasatelliteinfosource_disconnectnotify_callback = nullptr;
        qnmeasatelliteinfosource_parsesatellitesinusefromnmea2_callback = nullptr;
        qnmeasatelliteinfosource_parsesatelliteinfofromnmea2_callback = nullptr;
        qnmeasatelliteinfosource_seterror_callback = nullptr;
        qnmeasatelliteinfosource_sender_callback = nullptr;
        qnmeasatelliteinfosource_sendersignalindex_callback = nullptr;
        qnmeasatelliteinfosource_receivers_callback = nullptr;
        qnmeasatelliteinfosource_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setQNmeaSatelliteInfoSource_MetaObject_Callback(QNmeaSatelliteInfoSource_MetaObject_Callback cb) { qnmeasatelliteinfosource_metaobject_callback = cb; }
    inline void setQNmeaSatelliteInfoSource_Metacast_Callback(QNmeaSatelliteInfoSource_Metacast_Callback cb) { qnmeasatelliteinfosource_metacast_callback = cb; }
    inline void setQNmeaSatelliteInfoSource_Metacall_Callback(QNmeaSatelliteInfoSource_Metacall_Callback cb) { qnmeasatelliteinfosource_metacall_callback = cb; }
    inline void setQNmeaSatelliteInfoSource_SetUpdateInterval_Callback(QNmeaSatelliteInfoSource_SetUpdateInterval_Callback cb) { qnmeasatelliteinfosource_setupdateinterval_callback = cb; }
    inline void setQNmeaSatelliteInfoSource_MinimumUpdateInterval_Callback(QNmeaSatelliteInfoSource_MinimumUpdateInterval_Callback cb) { qnmeasatelliteinfosource_minimumupdateinterval_callback = cb; }
    inline void setQNmeaSatelliteInfoSource_Error_Callback(QNmeaSatelliteInfoSource_Error_Callback cb) { qnmeasatelliteinfosource_error_callback = cb; }
    inline void setQNmeaSatelliteInfoSource_SetBackendProperty_Callback(QNmeaSatelliteInfoSource_SetBackendProperty_Callback cb) { qnmeasatelliteinfosource_setbackendproperty_callback = cb; }
    inline void setQNmeaSatelliteInfoSource_BackendProperty_Callback(QNmeaSatelliteInfoSource_BackendProperty_Callback cb) { qnmeasatelliteinfosource_backendproperty_callback = cb; }
    inline void setQNmeaSatelliteInfoSource_StartUpdates_Callback(QNmeaSatelliteInfoSource_StartUpdates_Callback cb) { qnmeasatelliteinfosource_startupdates_callback = cb; }
    inline void setQNmeaSatelliteInfoSource_StopUpdates_Callback(QNmeaSatelliteInfoSource_StopUpdates_Callback cb) { qnmeasatelliteinfosource_stopupdates_callback = cb; }
    inline void setQNmeaSatelliteInfoSource_RequestUpdate_Callback(QNmeaSatelliteInfoSource_RequestUpdate_Callback cb) { qnmeasatelliteinfosource_requestupdate_callback = cb; }
    inline void setQNmeaSatelliteInfoSource_ParseSatellitesInUseFromNmea_Callback(QNmeaSatelliteInfoSource_ParseSatellitesInUseFromNmea_Callback cb) { qnmeasatelliteinfosource_parsesatellitesinusefromnmea_callback = cb; }
    inline void setQNmeaSatelliteInfoSource_ParseSatelliteInfoFromNmea_Callback(QNmeaSatelliteInfoSource_ParseSatelliteInfoFromNmea_Callback cb) { qnmeasatelliteinfosource_parsesatelliteinfofromnmea_callback = cb; }
    inline void setQNmeaSatelliteInfoSource_Event_Callback(QNmeaSatelliteInfoSource_Event_Callback cb) { qnmeasatelliteinfosource_event_callback = cb; }
    inline void setQNmeaSatelliteInfoSource_EventFilter_Callback(QNmeaSatelliteInfoSource_EventFilter_Callback cb) { qnmeasatelliteinfosource_eventfilter_callback = cb; }
    inline void setQNmeaSatelliteInfoSource_TimerEvent_Callback(QNmeaSatelliteInfoSource_TimerEvent_Callback cb) { qnmeasatelliteinfosource_timerevent_callback = cb; }
    inline void setQNmeaSatelliteInfoSource_ChildEvent_Callback(QNmeaSatelliteInfoSource_ChildEvent_Callback cb) { qnmeasatelliteinfosource_childevent_callback = cb; }
    inline void setQNmeaSatelliteInfoSource_CustomEvent_Callback(QNmeaSatelliteInfoSource_CustomEvent_Callback cb) { qnmeasatelliteinfosource_customevent_callback = cb; }
    inline void setQNmeaSatelliteInfoSource_ConnectNotify_Callback(QNmeaSatelliteInfoSource_ConnectNotify_Callback cb) { qnmeasatelliteinfosource_connectnotify_callback = cb; }
    inline void setQNmeaSatelliteInfoSource_DisconnectNotify_Callback(QNmeaSatelliteInfoSource_DisconnectNotify_Callback cb) { qnmeasatelliteinfosource_disconnectnotify_callback = cb; }
    inline void setQNmeaSatelliteInfoSource_ParseSatellitesInUseFromNmea2_Callback(QNmeaSatelliteInfoSource_ParseSatellitesInUseFromNmea2_Callback cb) { qnmeasatelliteinfosource_parsesatellitesinusefromnmea2_callback = cb; }
    inline void setQNmeaSatelliteInfoSource_ParseSatelliteInfoFromNmea2_Callback(QNmeaSatelliteInfoSource_ParseSatelliteInfoFromNmea2_Callback cb) { qnmeasatelliteinfosource_parsesatelliteinfofromnmea2_callback = cb; }
    inline void setQNmeaSatelliteInfoSource_SetError_Callback(QNmeaSatelliteInfoSource_SetError_Callback cb) { qnmeasatelliteinfosource_seterror_callback = cb; }
    inline void setQNmeaSatelliteInfoSource_Sender_Callback(QNmeaSatelliteInfoSource_Sender_Callback cb) { qnmeasatelliteinfosource_sender_callback = cb; }
    inline void setQNmeaSatelliteInfoSource_SenderSignalIndex_Callback(QNmeaSatelliteInfoSource_SenderSignalIndex_Callback cb) { qnmeasatelliteinfosource_sendersignalindex_callback = cb; }
    inline void setQNmeaSatelliteInfoSource_Receivers_Callback(QNmeaSatelliteInfoSource_Receivers_Callback cb) { qnmeasatelliteinfosource_receivers_callback = cb; }
    inline void setQNmeaSatelliteInfoSource_IsSignalConnected_Callback(QNmeaSatelliteInfoSource_IsSignalConnected_Callback cb) { qnmeasatelliteinfosource_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQNmeaSatelliteInfoSource_MetaObject_IsBase(bool value) const { qnmeasatelliteinfosource_metaobject_isbase = value; }
    inline void setQNmeaSatelliteInfoSource_Metacast_IsBase(bool value) const { qnmeasatelliteinfosource_metacast_isbase = value; }
    inline void setQNmeaSatelliteInfoSource_Metacall_IsBase(bool value) const { qnmeasatelliteinfosource_metacall_isbase = value; }
    inline void setQNmeaSatelliteInfoSource_SetUpdateInterval_IsBase(bool value) const { qnmeasatelliteinfosource_setupdateinterval_isbase = value; }
    inline void setQNmeaSatelliteInfoSource_MinimumUpdateInterval_IsBase(bool value) const { qnmeasatelliteinfosource_minimumupdateinterval_isbase = value; }
    inline void setQNmeaSatelliteInfoSource_Error_IsBase(bool value) const { qnmeasatelliteinfosource_error_isbase = value; }
    inline void setQNmeaSatelliteInfoSource_SetBackendProperty_IsBase(bool value) const { qnmeasatelliteinfosource_setbackendproperty_isbase = value; }
    inline void setQNmeaSatelliteInfoSource_BackendProperty_IsBase(bool value) const { qnmeasatelliteinfosource_backendproperty_isbase = value; }
    inline void setQNmeaSatelliteInfoSource_StartUpdates_IsBase(bool value) const { qnmeasatelliteinfosource_startupdates_isbase = value; }
    inline void setQNmeaSatelliteInfoSource_StopUpdates_IsBase(bool value) const { qnmeasatelliteinfosource_stopupdates_isbase = value; }
    inline void setQNmeaSatelliteInfoSource_RequestUpdate_IsBase(bool value) const { qnmeasatelliteinfosource_requestupdate_isbase = value; }
    inline void setQNmeaSatelliteInfoSource_ParseSatellitesInUseFromNmea_IsBase(bool value) const { qnmeasatelliteinfosource_parsesatellitesinusefromnmea_isbase = value; }
    inline void setQNmeaSatelliteInfoSource_ParseSatelliteInfoFromNmea_IsBase(bool value) const { qnmeasatelliteinfosource_parsesatelliteinfofromnmea_isbase = value; }
    inline void setQNmeaSatelliteInfoSource_Event_IsBase(bool value) const { qnmeasatelliteinfosource_event_isbase = value; }
    inline void setQNmeaSatelliteInfoSource_EventFilter_IsBase(bool value) const { qnmeasatelliteinfosource_eventfilter_isbase = value; }
    inline void setQNmeaSatelliteInfoSource_TimerEvent_IsBase(bool value) const { qnmeasatelliteinfosource_timerevent_isbase = value; }
    inline void setQNmeaSatelliteInfoSource_ChildEvent_IsBase(bool value) const { qnmeasatelliteinfosource_childevent_isbase = value; }
    inline void setQNmeaSatelliteInfoSource_CustomEvent_IsBase(bool value) const { qnmeasatelliteinfosource_customevent_isbase = value; }
    inline void setQNmeaSatelliteInfoSource_ConnectNotify_IsBase(bool value) const { qnmeasatelliteinfosource_connectnotify_isbase = value; }
    inline void setQNmeaSatelliteInfoSource_DisconnectNotify_IsBase(bool value) const { qnmeasatelliteinfosource_disconnectnotify_isbase = value; }
    inline void setQNmeaSatelliteInfoSource_ParseSatellitesInUseFromNmea2_IsBase(bool value) const { qnmeasatelliteinfosource_parsesatellitesinusefromnmea2_isbase = value; }
    inline void setQNmeaSatelliteInfoSource_ParseSatelliteInfoFromNmea2_IsBase(bool value) const { qnmeasatelliteinfosource_parsesatelliteinfofromnmea2_isbase = value; }
    inline void setQNmeaSatelliteInfoSource_SetError_IsBase(bool value) const { qnmeasatelliteinfosource_seterror_isbase = value; }
    inline void setQNmeaSatelliteInfoSource_Sender_IsBase(bool value) const { qnmeasatelliteinfosource_sender_isbase = value; }
    inline void setQNmeaSatelliteInfoSource_SenderSignalIndex_IsBase(bool value) const { qnmeasatelliteinfosource_sendersignalindex_isbase = value; }
    inline void setQNmeaSatelliteInfoSource_Receivers_IsBase(bool value) const { qnmeasatelliteinfosource_receivers_isbase = value; }
    inline void setQNmeaSatelliteInfoSource_IsSignalConnected_IsBase(bool value) const { qnmeasatelliteinfosource_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qnmeasatelliteinfosource_metaobject_isbase) {
            qnmeasatelliteinfosource_metaobject_isbase = false;
            return QNmeaSatelliteInfoSource::metaObject();
        } else if (qnmeasatelliteinfosource_metaobject_callback != nullptr) {
            QMetaObject* callback_ret = qnmeasatelliteinfosource_metaobject_callback();
            return callback_ret;
        } else {
            return QNmeaSatelliteInfoSource::metaObject();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qnmeasatelliteinfosource_metacast_isbase) {
            qnmeasatelliteinfosource_metacast_isbase = false;
            return QNmeaSatelliteInfoSource::qt_metacast(param1);
        } else if (qnmeasatelliteinfosource_metacast_callback != nullptr) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = qnmeasatelliteinfosource_metacast_callback(this, cbval1);
            return callback_ret;
        } else {
            return QNmeaSatelliteInfoSource::qt_metacast(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qnmeasatelliteinfosource_metacall_isbase) {
            qnmeasatelliteinfosource_metacall_isbase = false;
            return QNmeaSatelliteInfoSource::qt_metacall(param1, param2, param3);
        } else if (qnmeasatelliteinfosource_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qnmeasatelliteinfosource_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QNmeaSatelliteInfoSource::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setUpdateInterval(int msec) override {
        if (qnmeasatelliteinfosource_setupdateinterval_isbase) {
            qnmeasatelliteinfosource_setupdateinterval_isbase = false;
            QNmeaSatelliteInfoSource::setUpdateInterval(msec);
        } else if (qnmeasatelliteinfosource_setupdateinterval_callback != nullptr) {
            int cbval1 = msec;

            qnmeasatelliteinfosource_setupdateinterval_callback(this, cbval1);
        } else {
            QNmeaSatelliteInfoSource::setUpdateInterval(msec);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int minimumUpdateInterval() const override {
        if (qnmeasatelliteinfosource_minimumupdateinterval_isbase) {
            qnmeasatelliteinfosource_minimumupdateinterval_isbase = false;
            return QNmeaSatelliteInfoSource::minimumUpdateInterval();
        } else if (qnmeasatelliteinfosource_minimumupdateinterval_callback != nullptr) {
            int callback_ret = qnmeasatelliteinfosource_minimumupdateinterval_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QNmeaSatelliteInfoSource::minimumUpdateInterval();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QGeoSatelliteInfoSource::Error error() const override {
        if (qnmeasatelliteinfosource_error_isbase) {
            qnmeasatelliteinfosource_error_isbase = false;
            return QNmeaSatelliteInfoSource::error();
        } else if (qnmeasatelliteinfosource_error_callback != nullptr) {
            int callback_ret = qnmeasatelliteinfosource_error_callback();
            return static_cast<QGeoSatelliteInfoSource::Error>(callback_ret);
        } else {
            return QNmeaSatelliteInfoSource::error();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setBackendProperty(const QString& name, const QVariant& value) override {
        if (qnmeasatelliteinfosource_setbackendproperty_isbase) {
            qnmeasatelliteinfosource_setbackendproperty_isbase = false;
            return QNmeaSatelliteInfoSource::setBackendProperty(name, value);
        } else if (qnmeasatelliteinfosource_setbackendproperty_callback != nullptr) {
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

            bool callback_ret = qnmeasatelliteinfosource_setbackendproperty_callback(this, cbval1, cbval2);
            libqt_free(name_str);
            return callback_ret;
        } else {
            return QNmeaSatelliteInfoSource::setBackendProperty(name, value);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant backendProperty(const QString& name) const override {
        if (qnmeasatelliteinfosource_backendproperty_isbase) {
            qnmeasatelliteinfosource_backendproperty_isbase = false;
            return QNmeaSatelliteInfoSource::backendProperty(name);
        } else if (qnmeasatelliteinfosource_backendproperty_callback != nullptr) {
            const QString name_ret = name;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray name_b = name_ret.toUtf8();
            auto name_str_len = name_b.length();
            const char* name_str = static_cast<const char*>(malloc(name_str_len + 1));
            memcpy((void*)name_str, name_b.data(), name_str_len);
            ((char*)name_str)[name_str_len] = '\0';
            const char* cbval1 = name_str;

            QVariant* callback_ret = qnmeasatelliteinfosource_backendproperty_callback(this, cbval1);
            libqt_free(name_str);
            return *callback_ret;
        } else {
            return QNmeaSatelliteInfoSource::backendProperty(name);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void startUpdates() override {
        if (qnmeasatelliteinfosource_startupdates_isbase) {
            qnmeasatelliteinfosource_startupdates_isbase = false;
            QNmeaSatelliteInfoSource::startUpdates();
        } else if (qnmeasatelliteinfosource_startupdates_callback != nullptr) {
            qnmeasatelliteinfosource_startupdates_callback();
        } else {
            QNmeaSatelliteInfoSource::startUpdates();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void stopUpdates() override {
        if (qnmeasatelliteinfosource_stopupdates_isbase) {
            qnmeasatelliteinfosource_stopupdates_isbase = false;
            QNmeaSatelliteInfoSource::stopUpdates();
        } else if (qnmeasatelliteinfosource_stopupdates_callback != nullptr) {
            qnmeasatelliteinfosource_stopupdates_callback();
        } else {
            QNmeaSatelliteInfoSource::stopUpdates();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void requestUpdate(int timeout) override {
        if (qnmeasatelliteinfosource_requestupdate_isbase) {
            qnmeasatelliteinfosource_requestupdate_isbase = false;
            QNmeaSatelliteInfoSource::requestUpdate(timeout);
        } else if (qnmeasatelliteinfosource_requestupdate_callback != nullptr) {
            int cbval1 = timeout;

            qnmeasatelliteinfosource_requestupdate_callback(this, cbval1);
        } else {
            QNmeaSatelliteInfoSource::requestUpdate(timeout);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QGeoSatelliteInfo::SatelliteSystem parseSatellitesInUseFromNmea(const char* data, int size, QList<int>& pnrsInUse) override {
        if (qnmeasatelliteinfosource_parsesatellitesinusefromnmea_isbase) {
            qnmeasatelliteinfosource_parsesatellitesinusefromnmea_isbase = false;
            return QNmeaSatelliteInfoSource::parseSatellitesInUseFromNmea(data, size, pnrsInUse);
        } else if (qnmeasatelliteinfosource_parsesatellitesinusefromnmea_callback != nullptr) {
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
        } else {
            return QNmeaSatelliteInfoSource::parseSatellitesInUseFromNmea(data, size, pnrsInUse);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QNmeaSatelliteInfoSource::SatelliteInfoParseStatus parseSatelliteInfoFromNmea(const char* data, int size, QList<QGeoSatelliteInfo>& infos, QGeoSatelliteInfo::SatelliteSystem& system) override {
        if (qnmeasatelliteinfosource_parsesatelliteinfofromnmea_isbase) {
            qnmeasatelliteinfosource_parsesatelliteinfofromnmea_isbase = false;
            return QNmeaSatelliteInfoSource::parseSatelliteInfoFromNmea(data, size, infos, system);
        } else if (qnmeasatelliteinfosource_parsesatelliteinfofromnmea_callback != nullptr) {
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
            int* cbval4 = reinterpret_cast<int*>(&system);

            int callback_ret = qnmeasatelliteinfosource_parsesatelliteinfofromnmea_callback(this, cbval1, cbval2, cbval3, cbval4);
            free(infos_arr);
            return static_cast<VirtualQNmeaSatelliteInfoSource::SatelliteInfoParseStatus>(callback_ret);
        } else {
            return QNmeaSatelliteInfoSource::parseSatelliteInfoFromNmea(data, size, infos, system);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qnmeasatelliteinfosource_event_isbase) {
            qnmeasatelliteinfosource_event_isbase = false;
            return QNmeaSatelliteInfoSource::event(event);
        } else if (qnmeasatelliteinfosource_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qnmeasatelliteinfosource_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QNmeaSatelliteInfoSource::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qnmeasatelliteinfosource_eventfilter_isbase) {
            qnmeasatelliteinfosource_eventfilter_isbase = false;
            return QNmeaSatelliteInfoSource::eventFilter(watched, event);
        } else if (qnmeasatelliteinfosource_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qnmeasatelliteinfosource_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QNmeaSatelliteInfoSource::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qnmeasatelliteinfosource_timerevent_isbase) {
            qnmeasatelliteinfosource_timerevent_isbase = false;
            QNmeaSatelliteInfoSource::timerEvent(event);
        } else if (qnmeasatelliteinfosource_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qnmeasatelliteinfosource_timerevent_callback(this, cbval1);
        } else {
            QNmeaSatelliteInfoSource::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qnmeasatelliteinfosource_childevent_isbase) {
            qnmeasatelliteinfosource_childevent_isbase = false;
            QNmeaSatelliteInfoSource::childEvent(event);
        } else if (qnmeasatelliteinfosource_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qnmeasatelliteinfosource_childevent_callback(this, cbval1);
        } else {
            QNmeaSatelliteInfoSource::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qnmeasatelliteinfosource_customevent_isbase) {
            qnmeasatelliteinfosource_customevent_isbase = false;
            QNmeaSatelliteInfoSource::customEvent(event);
        } else if (qnmeasatelliteinfosource_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qnmeasatelliteinfosource_customevent_callback(this, cbval1);
        } else {
            QNmeaSatelliteInfoSource::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qnmeasatelliteinfosource_connectnotify_isbase) {
            qnmeasatelliteinfosource_connectnotify_isbase = false;
            QNmeaSatelliteInfoSource::connectNotify(signal);
        } else if (qnmeasatelliteinfosource_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qnmeasatelliteinfosource_connectnotify_callback(this, cbval1);
        } else {
            QNmeaSatelliteInfoSource::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qnmeasatelliteinfosource_disconnectnotify_isbase) {
            qnmeasatelliteinfosource_disconnectnotify_isbase = false;
            QNmeaSatelliteInfoSource::disconnectNotify(signal);
        } else if (qnmeasatelliteinfosource_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qnmeasatelliteinfosource_disconnectnotify_callback(this, cbval1);
        } else {
            QNmeaSatelliteInfoSource::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QGeoSatelliteInfo::SatelliteSystem parseSatellitesInUseFromNmea(QByteArrayView data, QList<int>& pnrsInUse) {
        if (qnmeasatelliteinfosource_parsesatellitesinusefromnmea2_isbase) {
            qnmeasatelliteinfosource_parsesatellitesinusefromnmea2_isbase = false;
            return QNmeaSatelliteInfoSource::parseSatellitesInUseFromNmea(data, pnrsInUse);
        } else if (qnmeasatelliteinfosource_parsesatellitesinusefromnmea2_callback != nullptr) {
            QByteArrayView data_qb = data;
            libqt_string data_str;
            data_str.len = data_qb.length();
            data_str.data = static_cast<char*>(malloc(data_str.len));
            memcpy((void*)data_str.data, data_qb.data(), data_str.len);
            libqt_string cbval1 = data_str;
            QList<int>& pnrsInUse_ret = pnrsInUse;
            // Convert QList<> from C++ memory to manually-managed C memory
            int* pnrsInUse_arr = static_cast<int*>(malloc(sizeof(int) * (pnrsInUse_ret.size())));
            for (qsizetype i = 0; i < pnrsInUse_ret.size(); ++i) {
                pnrsInUse_arr[i] = pnrsInUse_ret[i];
            }
            libqt_list pnrsInUse_out;
            pnrsInUse_out.len = pnrsInUse_ret.size();
            pnrsInUse_out.data = static_cast<void*>(pnrsInUse_arr);
            libqt_list /* of int */ cbval2 = pnrsInUse_out;

            int callback_ret = qnmeasatelliteinfosource_parsesatellitesinusefromnmea2_callback(this, cbval1, cbval2);
            libqt_free(data_str.data);
            free(pnrsInUse_arr);
            return static_cast<QGeoSatelliteInfo::SatelliteSystem>(callback_ret);
        } else {
            return QNmeaSatelliteInfoSource::parseSatellitesInUseFromNmea(data, pnrsInUse);
        }
    }

    // Virtual method for C ABI access and custom callback
    QNmeaSatelliteInfoSource::SatelliteInfoParseStatus parseSatelliteInfoFromNmea(QByteArrayView data, QList<QGeoSatelliteInfo>& infos, QGeoSatelliteInfo::SatelliteSystem& system) {
        if (qnmeasatelliteinfosource_parsesatelliteinfofromnmea2_isbase) {
            qnmeasatelliteinfosource_parsesatelliteinfofromnmea2_isbase = false;
            return QNmeaSatelliteInfoSource::parseSatelliteInfoFromNmea(data, infos, system);
        } else if (qnmeasatelliteinfosource_parsesatelliteinfofromnmea2_callback != nullptr) {
            QByteArrayView data_qb = data;
            libqt_string data_str;
            data_str.len = data_qb.length();
            data_str.data = static_cast<char*>(malloc(data_str.len));
            memcpy((void*)data_str.data, data_qb.data(), data_str.len);
            libqt_string cbval1 = data_str;
            QList<QGeoSatelliteInfo>& infos_ret = infos;
            // Convert QList<> from C++ memory to manually-managed C memory
            QGeoSatelliteInfo** infos_arr = static_cast<QGeoSatelliteInfo**>(malloc(sizeof(QGeoSatelliteInfo*) * (infos_ret.size())));
            for (qsizetype i = 0; i < infos_ret.size(); ++i) {
                infos_arr[i] = new QGeoSatelliteInfo(infos_ret[i]);
            }
            libqt_list infos_out;
            infos_out.len = infos_ret.size();
            infos_out.data = static_cast<void*>(infos_arr);
            libqt_list /* of QGeoSatelliteInfo* */ cbval2 = infos_out;
            QGeoSatelliteInfo::SatelliteSystem& system_ret = system;
            int* cbval3 = reinterpret_cast<int*>(&system);

            int callback_ret = qnmeasatelliteinfosource_parsesatelliteinfofromnmea2_callback(this, cbval1, cbval2, cbval3);
            libqt_free(data_str.data);
            free(infos_arr);
            return static_cast<VirtualQNmeaSatelliteInfoSource::SatelliteInfoParseStatus>(callback_ret);
        } else {
            return QNmeaSatelliteInfoSource::parseSatelliteInfoFromNmea(data, infos, system);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setError(QGeoSatelliteInfoSource::Error satelliteError) {
        if (qnmeasatelliteinfosource_seterror_isbase) {
            qnmeasatelliteinfosource_seterror_isbase = false;
            QNmeaSatelliteInfoSource::setError(satelliteError);
        } else if (qnmeasatelliteinfosource_seterror_callback != nullptr) {
            int cbval1 = static_cast<int>(satelliteError);

            qnmeasatelliteinfosource_seterror_callback(this, cbval1);
        } else {
            QNmeaSatelliteInfoSource::setError(satelliteError);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qnmeasatelliteinfosource_sender_isbase) {
            qnmeasatelliteinfosource_sender_isbase = false;
            return QNmeaSatelliteInfoSource::sender();
        } else if (qnmeasatelliteinfosource_sender_callback != nullptr) {
            QObject* callback_ret = qnmeasatelliteinfosource_sender_callback();
            return callback_ret;
        } else {
            return QNmeaSatelliteInfoSource::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qnmeasatelliteinfosource_sendersignalindex_isbase) {
            qnmeasatelliteinfosource_sendersignalindex_isbase = false;
            return QNmeaSatelliteInfoSource::senderSignalIndex();
        } else if (qnmeasatelliteinfosource_sendersignalindex_callback != nullptr) {
            int callback_ret = qnmeasatelliteinfosource_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QNmeaSatelliteInfoSource::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qnmeasatelliteinfosource_receivers_isbase) {
            qnmeasatelliteinfosource_receivers_isbase = false;
            return QNmeaSatelliteInfoSource::receivers(signal);
        } else if (qnmeasatelliteinfosource_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qnmeasatelliteinfosource_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QNmeaSatelliteInfoSource::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qnmeasatelliteinfosource_issignalconnected_isbase) {
            qnmeasatelliteinfosource_issignalconnected_isbase = false;
            return QNmeaSatelliteInfoSource::isSignalConnected(signal);
        } else if (qnmeasatelliteinfosource_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qnmeasatelliteinfosource_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QNmeaSatelliteInfoSource::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend int QNmeaSatelliteInfoSource_ParseSatellitesInUseFromNmea(QNmeaSatelliteInfoSource* self, const char* data, int size, libqt_list /* of int */ pnrsInUse);
    friend int QNmeaSatelliteInfoSource_QBaseParseSatellitesInUseFromNmea(QNmeaSatelliteInfoSource* self, const char* data, int size, libqt_list /* of int */ pnrsInUse);
    friend int QNmeaSatelliteInfoSource_ParseSatelliteInfoFromNmea(QNmeaSatelliteInfoSource* self, const char* data, int size, libqt_list /* of QGeoSatelliteInfo* */ infos, int* system);
    friend int QNmeaSatelliteInfoSource_QBaseParseSatelliteInfoFromNmea(QNmeaSatelliteInfoSource* self, const char* data, int size, libqt_list /* of QGeoSatelliteInfo* */ infos, int* system);
    friend void QNmeaSatelliteInfoSource_TimerEvent(QNmeaSatelliteInfoSource* self, QTimerEvent* event);
    friend void QNmeaSatelliteInfoSource_QBaseTimerEvent(QNmeaSatelliteInfoSource* self, QTimerEvent* event);
    friend void QNmeaSatelliteInfoSource_ChildEvent(QNmeaSatelliteInfoSource* self, QChildEvent* event);
    friend void QNmeaSatelliteInfoSource_QBaseChildEvent(QNmeaSatelliteInfoSource* self, QChildEvent* event);
    friend void QNmeaSatelliteInfoSource_CustomEvent(QNmeaSatelliteInfoSource* self, QEvent* event);
    friend void QNmeaSatelliteInfoSource_QBaseCustomEvent(QNmeaSatelliteInfoSource* self, QEvent* event);
    friend void QNmeaSatelliteInfoSource_ConnectNotify(QNmeaSatelliteInfoSource* self, const QMetaMethod* signal);
    friend void QNmeaSatelliteInfoSource_QBaseConnectNotify(QNmeaSatelliteInfoSource* self, const QMetaMethod* signal);
    friend void QNmeaSatelliteInfoSource_DisconnectNotify(QNmeaSatelliteInfoSource* self, const QMetaMethod* signal);
    friend void QNmeaSatelliteInfoSource_QBaseDisconnectNotify(QNmeaSatelliteInfoSource* self, const QMetaMethod* signal);
    friend int QNmeaSatelliteInfoSource_ParseSatellitesInUseFromNmea2(QNmeaSatelliteInfoSource* self, libqt_string data, libqt_list /* of int */ pnrsInUse);
    friend int QNmeaSatelliteInfoSource_QBaseParseSatellitesInUseFromNmea2(QNmeaSatelliteInfoSource* self, libqt_string data, libqt_list /* of int */ pnrsInUse);
    friend int QNmeaSatelliteInfoSource_ParseSatelliteInfoFromNmea2(QNmeaSatelliteInfoSource* self, libqt_string data, libqt_list /* of QGeoSatelliteInfo* */ infos, int* system);
    friend int QNmeaSatelliteInfoSource_QBaseParseSatelliteInfoFromNmea2(QNmeaSatelliteInfoSource* self, libqt_string data, libqt_list /* of QGeoSatelliteInfo* */ infos, int* system);
    friend void QNmeaSatelliteInfoSource_SetError(QNmeaSatelliteInfoSource* self, int satelliteError);
    friend void QNmeaSatelliteInfoSource_QBaseSetError(QNmeaSatelliteInfoSource* self, int satelliteError);
    friend QObject* QNmeaSatelliteInfoSource_Sender(const QNmeaSatelliteInfoSource* self);
    friend QObject* QNmeaSatelliteInfoSource_QBaseSender(const QNmeaSatelliteInfoSource* self);
    friend int QNmeaSatelliteInfoSource_SenderSignalIndex(const QNmeaSatelliteInfoSource* self);
    friend int QNmeaSatelliteInfoSource_QBaseSenderSignalIndex(const QNmeaSatelliteInfoSource* self);
    friend int QNmeaSatelliteInfoSource_Receivers(const QNmeaSatelliteInfoSource* self, const char* signal);
    friend int QNmeaSatelliteInfoSource_QBaseReceivers(const QNmeaSatelliteInfoSource* self, const char* signal);
    friend bool QNmeaSatelliteInfoSource_IsSignalConnected(const QNmeaSatelliteInfoSource* self, const QMetaMethod* signal);
    friend bool QNmeaSatelliteInfoSource_QBaseIsSignalConnected(const QNmeaSatelliteInfoSource* self, const QMetaMethod* signal);
};

#endif
