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
        }
        auto metaobject_cb = qgeosatelliteinfosource_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QGeoSatelliteInfoSource::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qgeosatelliteinfosource_metacast_isbase) {
            qgeosatelliteinfosource_metacast_isbase = false;
            return QGeoSatelliteInfoSource::qt_metacast(param1);
        }
        auto metacast_cb = qgeosatelliteinfosource_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QGeoSatelliteInfoSource::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qgeosatelliteinfosource_metacall_isbase) {
            qgeosatelliteinfosource_metacall_isbase = false;
            return QGeoSatelliteInfoSource::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qgeosatelliteinfosource_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QGeoSatelliteInfoSource::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setUpdateInterval(int msec) override {
        if (qgeosatelliteinfosource_setupdateinterval_isbase) {
            qgeosatelliteinfosource_setupdateinterval_isbase = false;
            QGeoSatelliteInfoSource::setUpdateInterval(msec);
            return;
        }
        auto setupdateinterval_cb = qgeosatelliteinfosource_setupdateinterval_callback;
        if (setupdateinterval_cb) {
            int cbval1 = msec;

            setupdateinterval_cb(this, cbval1);
            return;
        }
        QGeoSatelliteInfoSource::setUpdateInterval(msec);
    }

    // Virtual method for C ABI access and custom callback
    virtual int minimumUpdateInterval() const override {
        auto minimumupdateinterval_cb = qgeosatelliteinfosource_minimumupdateinterval_callback;
        if (minimumupdateinterval_cb) {
            int callback_ret = minimumupdateinterval_cb();
            return static_cast<int>(callback_ret);
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual QGeoSatelliteInfoSource::Error error() const override {
        auto error_cb = qgeosatelliteinfosource_error_callback;
        if (error_cb) {
            int callback_ret = error_cb();
            return static_cast<QGeoSatelliteInfoSource::Error>(callback_ret);
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setBackendProperty(const QString& name, const QVariant& value) override {
        if (qgeosatelliteinfosource_setbackendproperty_isbase) {
            qgeosatelliteinfosource_setbackendproperty_isbase = false;
            return QGeoSatelliteInfoSource::setBackendProperty(name, value);
        }
        auto setbackendproperty_cb = qgeosatelliteinfosource_setbackendproperty_callback;
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
        return QGeoSatelliteInfoSource::setBackendProperty(name, value);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant backendProperty(const QString& name) const override {
        if (qgeosatelliteinfosource_backendproperty_isbase) {
            qgeosatelliteinfosource_backendproperty_isbase = false;
            return QGeoSatelliteInfoSource::backendProperty(name);
        }
        auto backendproperty_cb = qgeosatelliteinfosource_backendproperty_callback;
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
        return QGeoSatelliteInfoSource::backendProperty(name);
    }

    // Virtual method for C ABI access and custom callback
    virtual void startUpdates() override {
        auto startupdates_cb = qgeosatelliteinfosource_startupdates_callback;
        if (startupdates_cb) {
            startupdates_cb();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void stopUpdates() override {
        auto stopupdates_cb = qgeosatelliteinfosource_stopupdates_callback;
        if (stopupdates_cb) {
            stopupdates_cb();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void requestUpdate(int timeout) override {
        auto requestupdate_cb = qgeosatelliteinfosource_requestupdate_callback;
        if (requestupdate_cb) {
            int cbval1 = timeout;

            requestupdate_cb(this, cbval1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qgeosatelliteinfosource_event_isbase) {
            qgeosatelliteinfosource_event_isbase = false;
            return QGeoSatelliteInfoSource::event(event);
        }
        auto event_cb = qgeosatelliteinfosource_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QGeoSatelliteInfoSource::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qgeosatelliteinfosource_eventfilter_isbase) {
            qgeosatelliteinfosource_eventfilter_isbase = false;
            return QGeoSatelliteInfoSource::eventFilter(watched, event);
        }
        auto eventfilter_cb = qgeosatelliteinfosource_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QGeoSatelliteInfoSource::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qgeosatelliteinfosource_timerevent_isbase) {
            qgeosatelliteinfosource_timerevent_isbase = false;
            QGeoSatelliteInfoSource::timerEvent(event);
            return;
        }
        auto timerevent_cb = qgeosatelliteinfosource_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        QGeoSatelliteInfoSource::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qgeosatelliteinfosource_childevent_isbase) {
            qgeosatelliteinfosource_childevent_isbase = false;
            QGeoSatelliteInfoSource::childEvent(event);
            return;
        }
        auto childevent_cb = qgeosatelliteinfosource_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        QGeoSatelliteInfoSource::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qgeosatelliteinfosource_customevent_isbase) {
            qgeosatelliteinfosource_customevent_isbase = false;
            QGeoSatelliteInfoSource::customEvent(event);
            return;
        }
        auto customevent_cb = qgeosatelliteinfosource_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        QGeoSatelliteInfoSource::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qgeosatelliteinfosource_connectnotify_isbase) {
            qgeosatelliteinfosource_connectnotify_isbase = false;
            QGeoSatelliteInfoSource::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qgeosatelliteinfosource_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        QGeoSatelliteInfoSource::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qgeosatelliteinfosource_disconnectnotify_isbase) {
            qgeosatelliteinfosource_disconnectnotify_isbase = false;
            QGeoSatelliteInfoSource::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qgeosatelliteinfosource_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        QGeoSatelliteInfoSource::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qgeosatelliteinfosource_sender_isbase) {
            qgeosatelliteinfosource_sender_isbase = false;
            return QGeoSatelliteInfoSource::sender();
        }
        auto sender_cb = qgeosatelliteinfosource_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QGeoSatelliteInfoSource::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qgeosatelliteinfosource_sendersignalindex_isbase) {
            qgeosatelliteinfosource_sendersignalindex_isbase = false;
            return QGeoSatelliteInfoSource::senderSignalIndex();
        }
        auto sendersignalindex_cb = qgeosatelliteinfosource_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QGeoSatelliteInfoSource::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qgeosatelliteinfosource_receivers_isbase) {
            qgeosatelliteinfosource_receivers_isbase = false;
            return QGeoSatelliteInfoSource::receivers(signal);
        }
        auto receivers_cb = qgeosatelliteinfosource_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QGeoSatelliteInfoSource::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qgeosatelliteinfosource_issignalconnected_isbase) {
            qgeosatelliteinfosource_issignalconnected_isbase = false;
            return QGeoSatelliteInfoSource::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qgeosatelliteinfosource_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QGeoSatelliteInfoSource::isSignalConnected(signal);
    }

    // Friend functions
    friend void QGeoSatelliteInfoSource_TimerEvent(QGeoSatelliteInfoSource* self, QTimerEvent* event);
    friend void QGeoSatelliteInfoSource_SuperTimerEvent(QGeoSatelliteInfoSource* self, QTimerEvent* event);
    friend void QGeoSatelliteInfoSource_ChildEvent(QGeoSatelliteInfoSource* self, QChildEvent* event);
    friend void QGeoSatelliteInfoSource_SuperChildEvent(QGeoSatelliteInfoSource* self, QChildEvent* event);
    friend void QGeoSatelliteInfoSource_CustomEvent(QGeoSatelliteInfoSource* self, QEvent* event);
    friend void QGeoSatelliteInfoSource_SuperCustomEvent(QGeoSatelliteInfoSource* self, QEvent* event);
    friend void QGeoSatelliteInfoSource_ConnectNotify(QGeoSatelliteInfoSource* self, const QMetaMethod* signal);
    friend void QGeoSatelliteInfoSource_SuperConnectNotify(QGeoSatelliteInfoSource* self, const QMetaMethod* signal);
    friend void QGeoSatelliteInfoSource_DisconnectNotify(QGeoSatelliteInfoSource* self, const QMetaMethod* signal);
    friend void QGeoSatelliteInfoSource_SuperDisconnectNotify(QGeoSatelliteInfoSource* self, const QMetaMethod* signal);
    friend QObject* QGeoSatelliteInfoSource_Sender(const QGeoSatelliteInfoSource* self);
    friend QObject* QGeoSatelliteInfoSource_SuperSender(const QGeoSatelliteInfoSource* self);
    friend int QGeoSatelliteInfoSource_SenderSignalIndex(const QGeoSatelliteInfoSource* self);
    friend int QGeoSatelliteInfoSource_SuperSenderSignalIndex(const QGeoSatelliteInfoSource* self);
    friend int QGeoSatelliteInfoSource_Receivers(const QGeoSatelliteInfoSource* self, const char* signal);
    friend int QGeoSatelliteInfoSource_SuperReceivers(const QGeoSatelliteInfoSource* self, const char* signal);
    friend bool QGeoSatelliteInfoSource_IsSignalConnected(const QGeoSatelliteInfoSource* self, const QMetaMethod* signal);
    friend bool QGeoSatelliteInfoSource_SuperIsSignalConnected(const QGeoSatelliteInfoSource* self, const QMetaMethod* signal);
};

#endif
