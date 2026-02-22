#pragma once
#ifndef SRC_POSITIONINGC_LIBVIRTUALQGEOSATELLITEINFOSOURCE_H
#define SRC_POSITIONINGC_LIBVIRTUALQGEOSATELLITEINFOSOURCE_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QGeoSatelliteInfoSource so that we can call protected methods
class VirtualQGeoSatelliteInfoSource : public QGeoSatelliteInfoSource {

  public:
    // Virtual class boolean flag
    bool isVirtualQGeoSatelliteInfoSource = true;

    // Virtual class public types (including callbacks)
    using QGeoSatelliteInfoSource_MetaObject_Callback = QMetaObject* (*)();
    using QGeoSatelliteInfoSource_Metacast_Callback = void* (*)(QGeoSatelliteInfoSource*, const char*);
    using QGeoSatelliteInfoSource_Metacall_Callback = int (*)(QGeoSatelliteInfoSource*, int, int, void**);
    using QGeoSatelliteInfoSource_SetUpdateInterval_Callback = void (*)(QGeoSatelliteInfoSource*, int);
    using QGeoSatelliteInfoSource_MinimumUpdateInterval_Callback = int (*)();
    using QGeoSatelliteInfoSource_Error_Callback = int (*)();
    using QGeoSatelliteInfoSource_SetBackendProperty_Callback = bool (*)(QGeoSatelliteInfoSource*, const char*, QVariant*);
    using QGeoSatelliteInfoSource_BackendProperty_Callback = QVariant* (*)(const QGeoSatelliteInfoSource*, const char*);
    using QGeoSatelliteInfoSource_StartUpdates_Callback = void (*)();
    using QGeoSatelliteInfoSource_StopUpdates_Callback = void (*)();
    using QGeoSatelliteInfoSource_RequestUpdate_Callback = void (*)(QGeoSatelliteInfoSource*, int);
    using QGeoSatelliteInfoSource_Event_Callback = bool (*)(QGeoSatelliteInfoSource*, QEvent*);
    using QGeoSatelliteInfoSource_EventFilter_Callback = bool (*)(QGeoSatelliteInfoSource*, QObject*, QEvent*);
    using QGeoSatelliteInfoSource_TimerEvent_Callback = void (*)(QGeoSatelliteInfoSource*, QTimerEvent*);
    using QGeoSatelliteInfoSource_ChildEvent_Callback = void (*)(QGeoSatelliteInfoSource*, QChildEvent*);
    using QGeoSatelliteInfoSource_CustomEvent_Callback = void (*)(QGeoSatelliteInfoSource*, QEvent*);
    using QGeoSatelliteInfoSource_ConnectNotify_Callback = void (*)(QGeoSatelliteInfoSource*, QMetaMethod*);
    using QGeoSatelliteInfoSource_DisconnectNotify_Callback = void (*)(QGeoSatelliteInfoSource*, QMetaMethod*);
    using QGeoSatelliteInfoSource_Sender_Callback = QObject* (*)();
    using QGeoSatelliteInfoSource_SenderSignalIndex_Callback = int (*)();
    using QGeoSatelliteInfoSource_Receivers_Callback = int (*)(const QGeoSatelliteInfoSource*, const char*);
    using QGeoSatelliteInfoSource_IsSignalConnected_Callback = bool (*)(const QGeoSatelliteInfoSource*, QMetaMethod*);

  protected:
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
    QGeoSatelliteInfoSource_Sender_Callback qgeosatelliteinfosource_sender_callback = nullptr;
    QGeoSatelliteInfoSource_SenderSignalIndex_Callback qgeosatelliteinfosource_sendersignalindex_callback = nullptr;
    QGeoSatelliteInfoSource_Receivers_Callback qgeosatelliteinfosource_receivers_callback = nullptr;
    QGeoSatelliteInfoSource_IsSignalConnected_Callback qgeosatelliteinfosource_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qgeosatelliteinfosource_metaobject_isbase = false;
    mutable bool qgeosatelliteinfosource_metacast_isbase = false;
    mutable bool qgeosatelliteinfosource_metacall_isbase = false;
    mutable bool qgeosatelliteinfosource_setupdateinterval_isbase = false;
    mutable bool qgeosatelliteinfosource_minimumupdateinterval_isbase = false;
    mutable bool qgeosatelliteinfosource_error_isbase = false;
    mutable bool qgeosatelliteinfosource_setbackendproperty_isbase = false;
    mutable bool qgeosatelliteinfosource_backendproperty_isbase = false;
    mutable bool qgeosatelliteinfosource_startupdates_isbase = false;
    mutable bool qgeosatelliteinfosource_stopupdates_isbase = false;
    mutable bool qgeosatelliteinfosource_requestupdate_isbase = false;
    mutable bool qgeosatelliteinfosource_event_isbase = false;
    mutable bool qgeosatelliteinfosource_eventfilter_isbase = false;
    mutable bool qgeosatelliteinfosource_timerevent_isbase = false;
    mutable bool qgeosatelliteinfosource_childevent_isbase = false;
    mutable bool qgeosatelliteinfosource_customevent_isbase = false;
    mutable bool qgeosatelliteinfosource_connectnotify_isbase = false;
    mutable bool qgeosatelliteinfosource_disconnectnotify_isbase = false;
    mutable bool qgeosatelliteinfosource_sender_isbase = false;
    mutable bool qgeosatelliteinfosource_sendersignalindex_isbase = false;
    mutable bool qgeosatelliteinfosource_receivers_isbase = false;
    mutable bool qgeosatelliteinfosource_issignalconnected_isbase = false;

  public:
    VirtualQGeoSatelliteInfoSource(QObject* parent) : QGeoSatelliteInfoSource(parent) {};

    ~VirtualQGeoSatelliteInfoSource() {
        qgeosatelliteinfosource_metaobject_callback = nullptr;
        qgeosatelliteinfosource_metacast_callback = nullptr;
        qgeosatelliteinfosource_metacall_callback = nullptr;
        qgeosatelliteinfosource_setupdateinterval_callback = nullptr;
        qgeosatelliteinfosource_minimumupdateinterval_callback = nullptr;
        qgeosatelliteinfosource_error_callback = nullptr;
        qgeosatelliteinfosource_setbackendproperty_callback = nullptr;
        qgeosatelliteinfosource_backendproperty_callback = nullptr;
        qgeosatelliteinfosource_startupdates_callback = nullptr;
        qgeosatelliteinfosource_stopupdates_callback = nullptr;
        qgeosatelliteinfosource_requestupdate_callback = nullptr;
        qgeosatelliteinfosource_event_callback = nullptr;
        qgeosatelliteinfosource_eventfilter_callback = nullptr;
        qgeosatelliteinfosource_timerevent_callback = nullptr;
        qgeosatelliteinfosource_childevent_callback = nullptr;
        qgeosatelliteinfosource_customevent_callback = nullptr;
        qgeosatelliteinfosource_connectnotify_callback = nullptr;
        qgeosatelliteinfosource_disconnectnotify_callback = nullptr;
        qgeosatelliteinfosource_sender_callback = nullptr;
        qgeosatelliteinfosource_sendersignalindex_callback = nullptr;
        qgeosatelliteinfosource_receivers_callback = nullptr;
        qgeosatelliteinfosource_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setQGeoSatelliteInfoSource_MetaObject_Callback(QGeoSatelliteInfoSource_MetaObject_Callback cb) { qgeosatelliteinfosource_metaobject_callback = cb; }
    inline void setQGeoSatelliteInfoSource_Metacast_Callback(QGeoSatelliteInfoSource_Metacast_Callback cb) { qgeosatelliteinfosource_metacast_callback = cb; }
    inline void setQGeoSatelliteInfoSource_Metacall_Callback(QGeoSatelliteInfoSource_Metacall_Callback cb) { qgeosatelliteinfosource_metacall_callback = cb; }
    inline void setQGeoSatelliteInfoSource_SetUpdateInterval_Callback(QGeoSatelliteInfoSource_SetUpdateInterval_Callback cb) { qgeosatelliteinfosource_setupdateinterval_callback = cb; }
    inline void setQGeoSatelliteInfoSource_MinimumUpdateInterval_Callback(QGeoSatelliteInfoSource_MinimumUpdateInterval_Callback cb) { qgeosatelliteinfosource_minimumupdateinterval_callback = cb; }
    inline void setQGeoSatelliteInfoSource_Error_Callback(QGeoSatelliteInfoSource_Error_Callback cb) { qgeosatelliteinfosource_error_callback = cb; }
    inline void setQGeoSatelliteInfoSource_SetBackendProperty_Callback(QGeoSatelliteInfoSource_SetBackendProperty_Callback cb) { qgeosatelliteinfosource_setbackendproperty_callback = cb; }
    inline void setQGeoSatelliteInfoSource_BackendProperty_Callback(QGeoSatelliteInfoSource_BackendProperty_Callback cb) { qgeosatelliteinfosource_backendproperty_callback = cb; }
    inline void setQGeoSatelliteInfoSource_StartUpdates_Callback(QGeoSatelliteInfoSource_StartUpdates_Callback cb) { qgeosatelliteinfosource_startupdates_callback = cb; }
    inline void setQGeoSatelliteInfoSource_StopUpdates_Callback(QGeoSatelliteInfoSource_StopUpdates_Callback cb) { qgeosatelliteinfosource_stopupdates_callback = cb; }
    inline void setQGeoSatelliteInfoSource_RequestUpdate_Callback(QGeoSatelliteInfoSource_RequestUpdate_Callback cb) { qgeosatelliteinfosource_requestupdate_callback = cb; }
    inline void setQGeoSatelliteInfoSource_Event_Callback(QGeoSatelliteInfoSource_Event_Callback cb) { qgeosatelliteinfosource_event_callback = cb; }
    inline void setQGeoSatelliteInfoSource_EventFilter_Callback(QGeoSatelliteInfoSource_EventFilter_Callback cb) { qgeosatelliteinfosource_eventfilter_callback = cb; }
    inline void setQGeoSatelliteInfoSource_TimerEvent_Callback(QGeoSatelliteInfoSource_TimerEvent_Callback cb) { qgeosatelliteinfosource_timerevent_callback = cb; }
    inline void setQGeoSatelliteInfoSource_ChildEvent_Callback(QGeoSatelliteInfoSource_ChildEvent_Callback cb) { qgeosatelliteinfosource_childevent_callback = cb; }
    inline void setQGeoSatelliteInfoSource_CustomEvent_Callback(QGeoSatelliteInfoSource_CustomEvent_Callback cb) { qgeosatelliteinfosource_customevent_callback = cb; }
    inline void setQGeoSatelliteInfoSource_ConnectNotify_Callback(QGeoSatelliteInfoSource_ConnectNotify_Callback cb) { qgeosatelliteinfosource_connectnotify_callback = cb; }
    inline void setQGeoSatelliteInfoSource_DisconnectNotify_Callback(QGeoSatelliteInfoSource_DisconnectNotify_Callback cb) { qgeosatelliteinfosource_disconnectnotify_callback = cb; }
    inline void setQGeoSatelliteInfoSource_Sender_Callback(QGeoSatelliteInfoSource_Sender_Callback cb) { qgeosatelliteinfosource_sender_callback = cb; }
    inline void setQGeoSatelliteInfoSource_SenderSignalIndex_Callback(QGeoSatelliteInfoSource_SenderSignalIndex_Callback cb) { qgeosatelliteinfosource_sendersignalindex_callback = cb; }
    inline void setQGeoSatelliteInfoSource_Receivers_Callback(QGeoSatelliteInfoSource_Receivers_Callback cb) { qgeosatelliteinfosource_receivers_callback = cb; }
    inline void setQGeoSatelliteInfoSource_IsSignalConnected_Callback(QGeoSatelliteInfoSource_IsSignalConnected_Callback cb) { qgeosatelliteinfosource_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQGeoSatelliteInfoSource_MetaObject_IsBase(bool value) const { qgeosatelliteinfosource_metaobject_isbase = value; }
    inline void setQGeoSatelliteInfoSource_Metacast_IsBase(bool value) const { qgeosatelliteinfosource_metacast_isbase = value; }
    inline void setQGeoSatelliteInfoSource_Metacall_IsBase(bool value) const { qgeosatelliteinfosource_metacall_isbase = value; }
    inline void setQGeoSatelliteInfoSource_SetUpdateInterval_IsBase(bool value) const { qgeosatelliteinfosource_setupdateinterval_isbase = value; }
    inline void setQGeoSatelliteInfoSource_MinimumUpdateInterval_IsBase(bool value) const { qgeosatelliteinfosource_minimumupdateinterval_isbase = value; }
    inline void setQGeoSatelliteInfoSource_Error_IsBase(bool value) const { qgeosatelliteinfosource_error_isbase = value; }
    inline void setQGeoSatelliteInfoSource_SetBackendProperty_IsBase(bool value) const { qgeosatelliteinfosource_setbackendproperty_isbase = value; }
    inline void setQGeoSatelliteInfoSource_BackendProperty_IsBase(bool value) const { qgeosatelliteinfosource_backendproperty_isbase = value; }
    inline void setQGeoSatelliteInfoSource_StartUpdates_IsBase(bool value) const { qgeosatelliteinfosource_startupdates_isbase = value; }
    inline void setQGeoSatelliteInfoSource_StopUpdates_IsBase(bool value) const { qgeosatelliteinfosource_stopupdates_isbase = value; }
    inline void setQGeoSatelliteInfoSource_RequestUpdate_IsBase(bool value) const { qgeosatelliteinfosource_requestupdate_isbase = value; }
    inline void setQGeoSatelliteInfoSource_Event_IsBase(bool value) const { qgeosatelliteinfosource_event_isbase = value; }
    inline void setQGeoSatelliteInfoSource_EventFilter_IsBase(bool value) const { qgeosatelliteinfosource_eventfilter_isbase = value; }
    inline void setQGeoSatelliteInfoSource_TimerEvent_IsBase(bool value) const { qgeosatelliteinfosource_timerevent_isbase = value; }
    inline void setQGeoSatelliteInfoSource_ChildEvent_IsBase(bool value) const { qgeosatelliteinfosource_childevent_isbase = value; }
    inline void setQGeoSatelliteInfoSource_CustomEvent_IsBase(bool value) const { qgeosatelliteinfosource_customevent_isbase = value; }
    inline void setQGeoSatelliteInfoSource_ConnectNotify_IsBase(bool value) const { qgeosatelliteinfosource_connectnotify_isbase = value; }
    inline void setQGeoSatelliteInfoSource_DisconnectNotify_IsBase(bool value) const { qgeosatelliteinfosource_disconnectnotify_isbase = value; }
    inline void setQGeoSatelliteInfoSource_Sender_IsBase(bool value) const { qgeosatelliteinfosource_sender_isbase = value; }
    inline void setQGeoSatelliteInfoSource_SenderSignalIndex_IsBase(bool value) const { qgeosatelliteinfosource_sendersignalindex_isbase = value; }
    inline void setQGeoSatelliteInfoSource_Receivers_IsBase(bool value) const { qgeosatelliteinfosource_receivers_isbase = value; }
    inline void setQGeoSatelliteInfoSource_IsSignalConnected_IsBase(bool value) const { qgeosatelliteinfosource_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qgeosatelliteinfosource_metaobject_isbase) {
            qgeosatelliteinfosource_metaobject_isbase = false;
            return QGeoSatelliteInfoSource::metaObject();
        } else if (qgeosatelliteinfosource_metaobject_callback != nullptr) {
            QMetaObject* callback_ret = qgeosatelliteinfosource_metaobject_callback();
            return callback_ret;
        } else {
            return QGeoSatelliteInfoSource::metaObject();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qgeosatelliteinfosource_metacast_isbase) {
            qgeosatelliteinfosource_metacast_isbase = false;
            return QGeoSatelliteInfoSource::qt_metacast(param1);
        } else if (qgeosatelliteinfosource_metacast_callback != nullptr) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = qgeosatelliteinfosource_metacast_callback(this, cbval1);
            return callback_ret;
        } else {
            return QGeoSatelliteInfoSource::qt_metacast(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qgeosatelliteinfosource_metacall_isbase) {
            qgeosatelliteinfosource_metacall_isbase = false;
            return QGeoSatelliteInfoSource::qt_metacall(param1, param2, param3);
        } else if (qgeosatelliteinfosource_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qgeosatelliteinfosource_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QGeoSatelliteInfoSource::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setUpdateInterval(int msec) override {
        if (qgeosatelliteinfosource_setupdateinterval_isbase) {
            qgeosatelliteinfosource_setupdateinterval_isbase = false;
            QGeoSatelliteInfoSource::setUpdateInterval(msec);
        } else if (qgeosatelliteinfosource_setupdateinterval_callback != nullptr) {
            int cbval1 = msec;

            qgeosatelliteinfosource_setupdateinterval_callback(this, cbval1);
        } else {
            QGeoSatelliteInfoSource::setUpdateInterval(msec);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int minimumUpdateInterval() const override {
        if (qgeosatelliteinfosource_minimumupdateinterval_callback != nullptr) {
            int callback_ret = qgeosatelliteinfosource_minimumupdateinterval_callback();
            return static_cast<int>(callback_ret);
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QGeoSatelliteInfoSource::Error error() const override {
        if (qgeosatelliteinfosource_error_callback != nullptr) {
            int callback_ret = qgeosatelliteinfosource_error_callback();
            return static_cast<QGeoSatelliteInfoSource::Error>(callback_ret);
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setBackendProperty(const QString& name, const QVariant& value) override {
        if (qgeosatelliteinfosource_setbackendproperty_isbase) {
            qgeosatelliteinfosource_setbackendproperty_isbase = false;
            return QGeoSatelliteInfoSource::setBackendProperty(name, value);
        } else if (qgeosatelliteinfosource_setbackendproperty_callback != nullptr) {
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

            bool callback_ret = qgeosatelliteinfosource_setbackendproperty_callback(this, cbval1, cbval2);
            libqt_free(name_str);
            return callback_ret;
        } else {
            return QGeoSatelliteInfoSource::setBackendProperty(name, value);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant backendProperty(const QString& name) const override {
        if (qgeosatelliteinfosource_backendproperty_isbase) {
            qgeosatelliteinfosource_backendproperty_isbase = false;
            return QGeoSatelliteInfoSource::backendProperty(name);
        } else if (qgeosatelliteinfosource_backendproperty_callback != nullptr) {
            const QString name_ret = name;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray name_b = name_ret.toUtf8();
            auto name_str_len = name_b.length();
            const char* name_str = static_cast<const char*>(malloc(name_str_len + 1));
            memcpy((void*)name_str, name_b.data(), name_str_len);
            ((char*)name_str)[name_str_len] = '\0';
            const char* cbval1 = name_str;

            QVariant* callback_ret = qgeosatelliteinfosource_backendproperty_callback(this, cbval1);
            libqt_free(name_str);
            return *callback_ret;
        } else {
            return QGeoSatelliteInfoSource::backendProperty(name);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void startUpdates() override {
        if (qgeosatelliteinfosource_startupdates_callback != nullptr) {
            qgeosatelliteinfosource_startupdates_callback();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void stopUpdates() override {
        if (qgeosatelliteinfosource_stopupdates_callback != nullptr) {
            qgeosatelliteinfosource_stopupdates_callback();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void requestUpdate(int timeout) override {
        if (qgeosatelliteinfosource_requestupdate_callback != nullptr) {
            int cbval1 = timeout;

            qgeosatelliteinfosource_requestupdate_callback(this, cbval1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qgeosatelliteinfosource_event_isbase) {
            qgeosatelliteinfosource_event_isbase = false;
            return QGeoSatelliteInfoSource::event(event);
        } else if (qgeosatelliteinfosource_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qgeosatelliteinfosource_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QGeoSatelliteInfoSource::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qgeosatelliteinfosource_eventfilter_isbase) {
            qgeosatelliteinfosource_eventfilter_isbase = false;
            return QGeoSatelliteInfoSource::eventFilter(watched, event);
        } else if (qgeosatelliteinfosource_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qgeosatelliteinfosource_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QGeoSatelliteInfoSource::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qgeosatelliteinfosource_timerevent_isbase) {
            qgeosatelliteinfosource_timerevent_isbase = false;
            QGeoSatelliteInfoSource::timerEvent(event);
        } else if (qgeosatelliteinfosource_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qgeosatelliteinfosource_timerevent_callback(this, cbval1);
        } else {
            QGeoSatelliteInfoSource::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qgeosatelliteinfosource_childevent_isbase) {
            qgeosatelliteinfosource_childevent_isbase = false;
            QGeoSatelliteInfoSource::childEvent(event);
        } else if (qgeosatelliteinfosource_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qgeosatelliteinfosource_childevent_callback(this, cbval1);
        } else {
            QGeoSatelliteInfoSource::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qgeosatelliteinfosource_customevent_isbase) {
            qgeosatelliteinfosource_customevent_isbase = false;
            QGeoSatelliteInfoSource::customEvent(event);
        } else if (qgeosatelliteinfosource_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qgeosatelliteinfosource_customevent_callback(this, cbval1);
        } else {
            QGeoSatelliteInfoSource::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qgeosatelliteinfosource_connectnotify_isbase) {
            qgeosatelliteinfosource_connectnotify_isbase = false;
            QGeoSatelliteInfoSource::connectNotify(signal);
        } else if (qgeosatelliteinfosource_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qgeosatelliteinfosource_connectnotify_callback(this, cbval1);
        } else {
            QGeoSatelliteInfoSource::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qgeosatelliteinfosource_disconnectnotify_isbase) {
            qgeosatelliteinfosource_disconnectnotify_isbase = false;
            QGeoSatelliteInfoSource::disconnectNotify(signal);
        } else if (qgeosatelliteinfosource_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qgeosatelliteinfosource_disconnectnotify_callback(this, cbval1);
        } else {
            QGeoSatelliteInfoSource::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qgeosatelliteinfosource_sender_isbase) {
            qgeosatelliteinfosource_sender_isbase = false;
            return QGeoSatelliteInfoSource::sender();
        } else if (qgeosatelliteinfosource_sender_callback != nullptr) {
            QObject* callback_ret = qgeosatelliteinfosource_sender_callback();
            return callback_ret;
        } else {
            return QGeoSatelliteInfoSource::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qgeosatelliteinfosource_sendersignalindex_isbase) {
            qgeosatelliteinfosource_sendersignalindex_isbase = false;
            return QGeoSatelliteInfoSource::senderSignalIndex();
        } else if (qgeosatelliteinfosource_sendersignalindex_callback != nullptr) {
            int callback_ret = qgeosatelliteinfosource_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QGeoSatelliteInfoSource::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qgeosatelliteinfosource_receivers_isbase) {
            qgeosatelliteinfosource_receivers_isbase = false;
            return QGeoSatelliteInfoSource::receivers(signal);
        } else if (qgeosatelliteinfosource_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qgeosatelliteinfosource_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QGeoSatelliteInfoSource::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qgeosatelliteinfosource_issignalconnected_isbase) {
            qgeosatelliteinfosource_issignalconnected_isbase = false;
            return QGeoSatelliteInfoSource::isSignalConnected(signal);
        } else if (qgeosatelliteinfosource_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qgeosatelliteinfosource_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QGeoSatelliteInfoSource::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void QGeoSatelliteInfoSource_TimerEvent(QGeoSatelliteInfoSource* self, QTimerEvent* event);
    friend void QGeoSatelliteInfoSource_QBaseTimerEvent(QGeoSatelliteInfoSource* self, QTimerEvent* event);
    friend void QGeoSatelliteInfoSource_ChildEvent(QGeoSatelliteInfoSource* self, QChildEvent* event);
    friend void QGeoSatelliteInfoSource_QBaseChildEvent(QGeoSatelliteInfoSource* self, QChildEvent* event);
    friend void QGeoSatelliteInfoSource_CustomEvent(QGeoSatelliteInfoSource* self, QEvent* event);
    friend void QGeoSatelliteInfoSource_QBaseCustomEvent(QGeoSatelliteInfoSource* self, QEvent* event);
    friend void QGeoSatelliteInfoSource_ConnectNotify(QGeoSatelliteInfoSource* self, const QMetaMethod* signal);
    friend void QGeoSatelliteInfoSource_QBaseConnectNotify(QGeoSatelliteInfoSource* self, const QMetaMethod* signal);
    friend void QGeoSatelliteInfoSource_DisconnectNotify(QGeoSatelliteInfoSource* self, const QMetaMethod* signal);
    friend void QGeoSatelliteInfoSource_QBaseDisconnectNotify(QGeoSatelliteInfoSource* self, const QMetaMethod* signal);
    friend QObject* QGeoSatelliteInfoSource_Sender(const QGeoSatelliteInfoSource* self);
    friend QObject* QGeoSatelliteInfoSource_QBaseSender(const QGeoSatelliteInfoSource* self);
    friend int QGeoSatelliteInfoSource_SenderSignalIndex(const QGeoSatelliteInfoSource* self);
    friend int QGeoSatelliteInfoSource_QBaseSenderSignalIndex(const QGeoSatelliteInfoSource* self);
    friend int QGeoSatelliteInfoSource_Receivers(const QGeoSatelliteInfoSource* self, const char* signal);
    friend int QGeoSatelliteInfoSource_QBaseReceivers(const QGeoSatelliteInfoSource* self, const char* signal);
    friend bool QGeoSatelliteInfoSource_IsSignalConnected(const QGeoSatelliteInfoSource* self, const QMetaMethod* signal);
    friend bool QGeoSatelliteInfoSource_QBaseIsSignalConnected(const QGeoSatelliteInfoSource* self, const QMetaMethod* signal);
};

#endif
