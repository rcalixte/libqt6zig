#pragma once
#ifndef SRC_LOCATIONC_LIBVIRTUALQGEOCODEREPLY_H
#define SRC_LOCATIONC_LIBVIRTUALQGEOCODEREPLY_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QGeoCodeReply so that we can call protected methods
class VirtualQGeoCodeReply final : public QGeoCodeReply {

  public:
    // Virtual class boolean flag
    bool isVirtualQGeoCodeReply = true;

    // Virtual class public types (including callbacks)
    using QGeoCodeReply_MetaObject_Callback = QMetaObject* (*)();
    using QGeoCodeReply_Metacast_Callback = void* (*)(QGeoCodeReply*, const char*);
    using QGeoCodeReply_Metacall_Callback = int (*)(QGeoCodeReply*, int, int, void**);
    using QGeoCodeReply_Abort_Callback = void (*)();
    using QGeoCodeReply_Event_Callback = bool (*)(QGeoCodeReply*, QEvent*);
    using QGeoCodeReply_EventFilter_Callback = bool (*)(QGeoCodeReply*, QObject*, QEvent*);
    using QGeoCodeReply_TimerEvent_Callback = void (*)(QGeoCodeReply*, QTimerEvent*);
    using QGeoCodeReply_ChildEvent_Callback = void (*)(QGeoCodeReply*, QChildEvent*);
    using QGeoCodeReply_CustomEvent_Callback = void (*)(QGeoCodeReply*, QEvent*);
    using QGeoCodeReply_ConnectNotify_Callback = void (*)(QGeoCodeReply*, QMetaMethod*);
    using QGeoCodeReply_DisconnectNotify_Callback = void (*)(QGeoCodeReply*, QMetaMethod*);
    using QGeoCodeReply_SetError_Callback = void (*)(QGeoCodeReply*, int, const char*);
    using QGeoCodeReply_SetFinished_Callback = void (*)(QGeoCodeReply*, bool);
    using QGeoCodeReply_SetViewport_Callback = void (*)(QGeoCodeReply*, QGeoShape*);
    using QGeoCodeReply_AddLocation_Callback = void (*)(QGeoCodeReply*, QGeoLocation*);
    using QGeoCodeReply_SetLocations_Callback = void (*)(QGeoCodeReply*, libqt_list /* of QGeoLocation* */);
    using QGeoCodeReply_SetLimit_Callback = void (*)(QGeoCodeReply*, ptrdiff_t);
    using QGeoCodeReply_SetOffset_Callback = void (*)(QGeoCodeReply*, ptrdiff_t);
    using QGeoCodeReply_Sender_Callback = QObject* (*)();
    using QGeoCodeReply_SenderSignalIndex_Callback = int (*)();
    using QGeoCodeReply_Receivers_Callback = int (*)(const QGeoCodeReply*, const char*);
    using QGeoCodeReply_IsSignalConnected_Callback = bool (*)(const QGeoCodeReply*, QMetaMethod*);

  protected:
    // Instance callback storage
    QGeoCodeReply_MetaObject_Callback qgeocodereply_metaobject_callback = nullptr;
    QGeoCodeReply_Metacast_Callback qgeocodereply_metacast_callback = nullptr;
    QGeoCodeReply_Metacall_Callback qgeocodereply_metacall_callback = nullptr;
    QGeoCodeReply_Abort_Callback qgeocodereply_abort_callback = nullptr;
    QGeoCodeReply_Event_Callback qgeocodereply_event_callback = nullptr;
    QGeoCodeReply_EventFilter_Callback qgeocodereply_eventfilter_callback = nullptr;
    QGeoCodeReply_TimerEvent_Callback qgeocodereply_timerevent_callback = nullptr;
    QGeoCodeReply_ChildEvent_Callback qgeocodereply_childevent_callback = nullptr;
    QGeoCodeReply_CustomEvent_Callback qgeocodereply_customevent_callback = nullptr;
    QGeoCodeReply_ConnectNotify_Callback qgeocodereply_connectnotify_callback = nullptr;
    QGeoCodeReply_DisconnectNotify_Callback qgeocodereply_disconnectnotify_callback = nullptr;
    QGeoCodeReply_SetError_Callback qgeocodereply_seterror_callback = nullptr;
    QGeoCodeReply_SetFinished_Callback qgeocodereply_setfinished_callback = nullptr;
    QGeoCodeReply_SetViewport_Callback qgeocodereply_setviewport_callback = nullptr;
    QGeoCodeReply_AddLocation_Callback qgeocodereply_addlocation_callback = nullptr;
    QGeoCodeReply_SetLocations_Callback qgeocodereply_setlocations_callback = nullptr;
    QGeoCodeReply_SetLimit_Callback qgeocodereply_setlimit_callback = nullptr;
    QGeoCodeReply_SetOffset_Callback qgeocodereply_setoffset_callback = nullptr;
    QGeoCodeReply_Sender_Callback qgeocodereply_sender_callback = nullptr;
    QGeoCodeReply_SenderSignalIndex_Callback qgeocodereply_sendersignalindex_callback = nullptr;
    QGeoCodeReply_Receivers_Callback qgeocodereply_receivers_callback = nullptr;
    QGeoCodeReply_IsSignalConnected_Callback qgeocodereply_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qgeocodereply_metaobject_isbase = false;
    mutable bool qgeocodereply_metacast_isbase = false;
    mutable bool qgeocodereply_metacall_isbase = false;
    mutable bool qgeocodereply_abort_isbase = false;
    mutable bool qgeocodereply_event_isbase = false;
    mutable bool qgeocodereply_eventfilter_isbase = false;
    mutable bool qgeocodereply_timerevent_isbase = false;
    mutable bool qgeocodereply_childevent_isbase = false;
    mutable bool qgeocodereply_customevent_isbase = false;
    mutable bool qgeocodereply_connectnotify_isbase = false;
    mutable bool qgeocodereply_disconnectnotify_isbase = false;
    mutable bool qgeocodereply_seterror_isbase = false;
    mutable bool qgeocodereply_setfinished_isbase = false;
    mutable bool qgeocodereply_setviewport_isbase = false;
    mutable bool qgeocodereply_addlocation_isbase = false;
    mutable bool qgeocodereply_setlocations_isbase = false;
    mutable bool qgeocodereply_setlimit_isbase = false;
    mutable bool qgeocodereply_setoffset_isbase = false;
    mutable bool qgeocodereply_sender_isbase = false;
    mutable bool qgeocodereply_sendersignalindex_isbase = false;
    mutable bool qgeocodereply_receivers_isbase = false;
    mutable bool qgeocodereply_issignalconnected_isbase = false;

  public:
    VirtualQGeoCodeReply(QGeoCodeReply::Error errorVal, const QString& errorString) : QGeoCodeReply(errorVal, errorString) {};
    VirtualQGeoCodeReply(QGeoCodeReply::Error errorVal, const QString& errorString, QObject* parent) : QGeoCodeReply(errorVal, errorString, parent) {};

    ~VirtualQGeoCodeReply() {
        qgeocodereply_metaobject_callback = nullptr;
        qgeocodereply_metacast_callback = nullptr;
        qgeocodereply_metacall_callback = nullptr;
        qgeocodereply_abort_callback = nullptr;
        qgeocodereply_event_callback = nullptr;
        qgeocodereply_eventfilter_callback = nullptr;
        qgeocodereply_timerevent_callback = nullptr;
        qgeocodereply_childevent_callback = nullptr;
        qgeocodereply_customevent_callback = nullptr;
        qgeocodereply_connectnotify_callback = nullptr;
        qgeocodereply_disconnectnotify_callback = nullptr;
        qgeocodereply_seterror_callback = nullptr;
        qgeocodereply_setfinished_callback = nullptr;
        qgeocodereply_setviewport_callback = nullptr;
        qgeocodereply_addlocation_callback = nullptr;
        qgeocodereply_setlocations_callback = nullptr;
        qgeocodereply_setlimit_callback = nullptr;
        qgeocodereply_setoffset_callback = nullptr;
        qgeocodereply_sender_callback = nullptr;
        qgeocodereply_sendersignalindex_callback = nullptr;
        qgeocodereply_receivers_callback = nullptr;
        qgeocodereply_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setQGeoCodeReply_MetaObject_Callback(QGeoCodeReply_MetaObject_Callback cb) { qgeocodereply_metaobject_callback = cb; }
    inline void setQGeoCodeReply_Metacast_Callback(QGeoCodeReply_Metacast_Callback cb) { qgeocodereply_metacast_callback = cb; }
    inline void setQGeoCodeReply_Metacall_Callback(QGeoCodeReply_Metacall_Callback cb) { qgeocodereply_metacall_callback = cb; }
    inline void setQGeoCodeReply_Abort_Callback(QGeoCodeReply_Abort_Callback cb) { qgeocodereply_abort_callback = cb; }
    inline void setQGeoCodeReply_Event_Callback(QGeoCodeReply_Event_Callback cb) { qgeocodereply_event_callback = cb; }
    inline void setQGeoCodeReply_EventFilter_Callback(QGeoCodeReply_EventFilter_Callback cb) { qgeocodereply_eventfilter_callback = cb; }
    inline void setQGeoCodeReply_TimerEvent_Callback(QGeoCodeReply_TimerEvent_Callback cb) { qgeocodereply_timerevent_callback = cb; }
    inline void setQGeoCodeReply_ChildEvent_Callback(QGeoCodeReply_ChildEvent_Callback cb) { qgeocodereply_childevent_callback = cb; }
    inline void setQGeoCodeReply_CustomEvent_Callback(QGeoCodeReply_CustomEvent_Callback cb) { qgeocodereply_customevent_callback = cb; }
    inline void setQGeoCodeReply_ConnectNotify_Callback(QGeoCodeReply_ConnectNotify_Callback cb) { qgeocodereply_connectnotify_callback = cb; }
    inline void setQGeoCodeReply_DisconnectNotify_Callback(QGeoCodeReply_DisconnectNotify_Callback cb) { qgeocodereply_disconnectnotify_callback = cb; }
    inline void setQGeoCodeReply_SetError_Callback(QGeoCodeReply_SetError_Callback cb) { qgeocodereply_seterror_callback = cb; }
    inline void setQGeoCodeReply_SetFinished_Callback(QGeoCodeReply_SetFinished_Callback cb) { qgeocodereply_setfinished_callback = cb; }
    inline void setQGeoCodeReply_SetViewport_Callback(QGeoCodeReply_SetViewport_Callback cb) { qgeocodereply_setviewport_callback = cb; }
    inline void setQGeoCodeReply_AddLocation_Callback(QGeoCodeReply_AddLocation_Callback cb) { qgeocodereply_addlocation_callback = cb; }
    inline void setQGeoCodeReply_SetLocations_Callback(QGeoCodeReply_SetLocations_Callback cb) { qgeocodereply_setlocations_callback = cb; }
    inline void setQGeoCodeReply_SetLimit_Callback(QGeoCodeReply_SetLimit_Callback cb) { qgeocodereply_setlimit_callback = cb; }
    inline void setQGeoCodeReply_SetOffset_Callback(QGeoCodeReply_SetOffset_Callback cb) { qgeocodereply_setoffset_callback = cb; }
    inline void setQGeoCodeReply_Sender_Callback(QGeoCodeReply_Sender_Callback cb) { qgeocodereply_sender_callback = cb; }
    inline void setQGeoCodeReply_SenderSignalIndex_Callback(QGeoCodeReply_SenderSignalIndex_Callback cb) { qgeocodereply_sendersignalindex_callback = cb; }
    inline void setQGeoCodeReply_Receivers_Callback(QGeoCodeReply_Receivers_Callback cb) { qgeocodereply_receivers_callback = cb; }
    inline void setQGeoCodeReply_IsSignalConnected_Callback(QGeoCodeReply_IsSignalConnected_Callback cb) { qgeocodereply_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQGeoCodeReply_MetaObject_IsBase(bool value) const { qgeocodereply_metaobject_isbase = value; }
    inline void setQGeoCodeReply_Metacast_IsBase(bool value) const { qgeocodereply_metacast_isbase = value; }
    inline void setQGeoCodeReply_Metacall_IsBase(bool value) const { qgeocodereply_metacall_isbase = value; }
    inline void setQGeoCodeReply_Abort_IsBase(bool value) const { qgeocodereply_abort_isbase = value; }
    inline void setQGeoCodeReply_Event_IsBase(bool value) const { qgeocodereply_event_isbase = value; }
    inline void setQGeoCodeReply_EventFilter_IsBase(bool value) const { qgeocodereply_eventfilter_isbase = value; }
    inline void setQGeoCodeReply_TimerEvent_IsBase(bool value) const { qgeocodereply_timerevent_isbase = value; }
    inline void setQGeoCodeReply_ChildEvent_IsBase(bool value) const { qgeocodereply_childevent_isbase = value; }
    inline void setQGeoCodeReply_CustomEvent_IsBase(bool value) const { qgeocodereply_customevent_isbase = value; }
    inline void setQGeoCodeReply_ConnectNotify_IsBase(bool value) const { qgeocodereply_connectnotify_isbase = value; }
    inline void setQGeoCodeReply_DisconnectNotify_IsBase(bool value) const { qgeocodereply_disconnectnotify_isbase = value; }
    inline void setQGeoCodeReply_SetError_IsBase(bool value) const { qgeocodereply_seterror_isbase = value; }
    inline void setQGeoCodeReply_SetFinished_IsBase(bool value) const { qgeocodereply_setfinished_isbase = value; }
    inline void setQGeoCodeReply_SetViewport_IsBase(bool value) const { qgeocodereply_setviewport_isbase = value; }
    inline void setQGeoCodeReply_AddLocation_IsBase(bool value) const { qgeocodereply_addlocation_isbase = value; }
    inline void setQGeoCodeReply_SetLocations_IsBase(bool value) const { qgeocodereply_setlocations_isbase = value; }
    inline void setQGeoCodeReply_SetLimit_IsBase(bool value) const { qgeocodereply_setlimit_isbase = value; }
    inline void setQGeoCodeReply_SetOffset_IsBase(bool value) const { qgeocodereply_setoffset_isbase = value; }
    inline void setQGeoCodeReply_Sender_IsBase(bool value) const { qgeocodereply_sender_isbase = value; }
    inline void setQGeoCodeReply_SenderSignalIndex_IsBase(bool value) const { qgeocodereply_sendersignalindex_isbase = value; }
    inline void setQGeoCodeReply_Receivers_IsBase(bool value) const { qgeocodereply_receivers_isbase = value; }
    inline void setQGeoCodeReply_IsSignalConnected_IsBase(bool value) const { qgeocodereply_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qgeocodereply_metaobject_isbase) {
            qgeocodereply_metaobject_isbase = false;
            return QGeoCodeReply::metaObject();
        } else if (qgeocodereply_metaobject_callback != nullptr) {
            QMetaObject* callback_ret = qgeocodereply_metaobject_callback();
            return callback_ret;
        } else {
            return QGeoCodeReply::metaObject();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qgeocodereply_metacast_isbase) {
            qgeocodereply_metacast_isbase = false;
            return QGeoCodeReply::qt_metacast(param1);
        } else if (qgeocodereply_metacast_callback != nullptr) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = qgeocodereply_metacast_callback(this, cbval1);
            return callback_ret;
        } else {
            return QGeoCodeReply::qt_metacast(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qgeocodereply_metacall_isbase) {
            qgeocodereply_metacall_isbase = false;
            return QGeoCodeReply::qt_metacall(param1, param2, param3);
        } else if (qgeocodereply_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qgeocodereply_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QGeoCodeReply::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void abort() override {
        if (qgeocodereply_abort_isbase) {
            qgeocodereply_abort_isbase = false;
            QGeoCodeReply::abort();
        } else if (qgeocodereply_abort_callback != nullptr) {
            qgeocodereply_abort_callback();
        } else {
            QGeoCodeReply::abort();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qgeocodereply_event_isbase) {
            qgeocodereply_event_isbase = false;
            return QGeoCodeReply::event(event);
        } else if (qgeocodereply_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qgeocodereply_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QGeoCodeReply::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qgeocodereply_eventfilter_isbase) {
            qgeocodereply_eventfilter_isbase = false;
            return QGeoCodeReply::eventFilter(watched, event);
        } else if (qgeocodereply_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qgeocodereply_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QGeoCodeReply::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qgeocodereply_timerevent_isbase) {
            qgeocodereply_timerevent_isbase = false;
            QGeoCodeReply::timerEvent(event);
        } else if (qgeocodereply_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qgeocodereply_timerevent_callback(this, cbval1);
        } else {
            QGeoCodeReply::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qgeocodereply_childevent_isbase) {
            qgeocodereply_childevent_isbase = false;
            QGeoCodeReply::childEvent(event);
        } else if (qgeocodereply_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qgeocodereply_childevent_callback(this, cbval1);
        } else {
            QGeoCodeReply::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qgeocodereply_customevent_isbase) {
            qgeocodereply_customevent_isbase = false;
            QGeoCodeReply::customEvent(event);
        } else if (qgeocodereply_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qgeocodereply_customevent_callback(this, cbval1);
        } else {
            QGeoCodeReply::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qgeocodereply_connectnotify_isbase) {
            qgeocodereply_connectnotify_isbase = false;
            QGeoCodeReply::connectNotify(signal);
        } else if (qgeocodereply_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qgeocodereply_connectnotify_callback(this, cbval1);
        } else {
            QGeoCodeReply::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qgeocodereply_disconnectnotify_isbase) {
            qgeocodereply_disconnectnotify_isbase = false;
            QGeoCodeReply::disconnectNotify(signal);
        } else if (qgeocodereply_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qgeocodereply_disconnectnotify_callback(this, cbval1);
        } else {
            QGeoCodeReply::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setError(QGeoCodeReply::Error errorVal, const QString& errorString) {
        if (qgeocodereply_seterror_isbase) {
            qgeocodereply_seterror_isbase = false;
            QGeoCodeReply::setError(errorVal, errorString);
        } else if (qgeocodereply_seterror_callback != nullptr) {
            int cbval1 = static_cast<int>(errorVal);
            const QString errorString_ret = errorString;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray errorString_b = errorString_ret.toUtf8();
            auto errorString_str_len = errorString_b.length();
            const char* errorString_str = static_cast<const char*>(malloc(errorString_str_len + 1));
            memcpy((void*)errorString_str, errorString_b.data(), errorString_str_len);
            ((char*)errorString_str)[errorString_str_len] = '\0';
            const char* cbval2 = errorString_str;

            qgeocodereply_seterror_callback(this, cbval1, cbval2);
            libqt_free(errorString_str);
        } else {
            QGeoCodeReply::setError(errorVal, errorString);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setFinished(bool finished) {
        if (qgeocodereply_setfinished_isbase) {
            qgeocodereply_setfinished_isbase = false;
            QGeoCodeReply::setFinished(finished);
        } else if (qgeocodereply_setfinished_callback != nullptr) {
            bool cbval1 = finished;

            qgeocodereply_setfinished_callback(this, cbval1);
        } else {
            QGeoCodeReply::setFinished(finished);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setViewport(const QGeoShape& viewport) {
        if (qgeocodereply_setviewport_isbase) {
            qgeocodereply_setviewport_isbase = false;
            QGeoCodeReply::setViewport(viewport);
        } else if (qgeocodereply_setviewport_callback != nullptr) {
            const QGeoShape& viewport_ret = viewport;
            // Cast returned reference into pointer
            QGeoShape* cbval1 = const_cast<QGeoShape*>(&viewport_ret);

            qgeocodereply_setviewport_callback(this, cbval1);
        } else {
            QGeoCodeReply::setViewport(viewport);
        }
    }

    // Virtual method for C ABI access and custom callback
    void addLocation(const QGeoLocation& location) {
        if (qgeocodereply_addlocation_isbase) {
            qgeocodereply_addlocation_isbase = false;
            QGeoCodeReply::addLocation(location);
        } else if (qgeocodereply_addlocation_callback != nullptr) {
            const QGeoLocation& location_ret = location;
            // Cast returned reference into pointer
            QGeoLocation* cbval1 = const_cast<QGeoLocation*>(&location_ret);

            qgeocodereply_addlocation_callback(this, cbval1);
        } else {
            QGeoCodeReply::addLocation(location);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setLocations(const QList<QGeoLocation>& locations) {
        if (qgeocodereply_setlocations_isbase) {
            qgeocodereply_setlocations_isbase = false;
            QGeoCodeReply::setLocations(locations);
        } else if (qgeocodereply_setlocations_callback != nullptr) {
            const QList<QGeoLocation>& locations_ret = locations;
            // Convert QList<> from C++ memory to manually-managed C memory
            QGeoLocation** locations_arr = static_cast<QGeoLocation**>(malloc(sizeof(QGeoLocation*) * (locations_ret.size())));
            for (qsizetype i = 0; i < locations_ret.size(); ++i) {
                locations_arr[i] = new QGeoLocation(locations_ret[i]);
            }
            libqt_list locations_out;
            locations_out.len = locations_ret.size();
            locations_out.data = static_cast<void*>(locations_arr);
            libqt_list /* of QGeoLocation* */ cbval1 = locations_out;

            qgeocodereply_setlocations_callback(this, cbval1);
            free(locations_arr);
        } else {
            QGeoCodeReply::setLocations(locations);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setLimit(qsizetype limit) {
        if (qgeocodereply_setlimit_isbase) {
            qgeocodereply_setlimit_isbase = false;
            QGeoCodeReply::setLimit(limit);
        } else if (qgeocodereply_setlimit_callback != nullptr) {
            ptrdiff_t cbval1 = static_cast<ptrdiff_t>(limit);

            qgeocodereply_setlimit_callback(this, cbval1);
        } else {
            QGeoCodeReply::setLimit(limit);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setOffset(qsizetype offset) {
        if (qgeocodereply_setoffset_isbase) {
            qgeocodereply_setoffset_isbase = false;
            QGeoCodeReply::setOffset(offset);
        } else if (qgeocodereply_setoffset_callback != nullptr) {
            ptrdiff_t cbval1 = static_cast<ptrdiff_t>(offset);

            qgeocodereply_setoffset_callback(this, cbval1);
        } else {
            QGeoCodeReply::setOffset(offset);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qgeocodereply_sender_isbase) {
            qgeocodereply_sender_isbase = false;
            return QGeoCodeReply::sender();
        } else if (qgeocodereply_sender_callback != nullptr) {
            QObject* callback_ret = qgeocodereply_sender_callback();
            return callback_ret;
        } else {
            return QGeoCodeReply::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qgeocodereply_sendersignalindex_isbase) {
            qgeocodereply_sendersignalindex_isbase = false;
            return QGeoCodeReply::senderSignalIndex();
        } else if (qgeocodereply_sendersignalindex_callback != nullptr) {
            int callback_ret = qgeocodereply_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QGeoCodeReply::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qgeocodereply_receivers_isbase) {
            qgeocodereply_receivers_isbase = false;
            return QGeoCodeReply::receivers(signal);
        } else if (qgeocodereply_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qgeocodereply_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QGeoCodeReply::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qgeocodereply_issignalconnected_isbase) {
            qgeocodereply_issignalconnected_isbase = false;
            return QGeoCodeReply::isSignalConnected(signal);
        } else if (qgeocodereply_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qgeocodereply_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QGeoCodeReply::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void QGeoCodeReply_TimerEvent(QGeoCodeReply* self, QTimerEvent* event);
    friend void QGeoCodeReply_SuperTimerEvent(QGeoCodeReply* self, QTimerEvent* event);
    friend void QGeoCodeReply_ChildEvent(QGeoCodeReply* self, QChildEvent* event);
    friend void QGeoCodeReply_SuperChildEvent(QGeoCodeReply* self, QChildEvent* event);
    friend void QGeoCodeReply_CustomEvent(QGeoCodeReply* self, QEvent* event);
    friend void QGeoCodeReply_SuperCustomEvent(QGeoCodeReply* self, QEvent* event);
    friend void QGeoCodeReply_ConnectNotify(QGeoCodeReply* self, const QMetaMethod* signal);
    friend void QGeoCodeReply_SuperConnectNotify(QGeoCodeReply* self, const QMetaMethod* signal);
    friend void QGeoCodeReply_DisconnectNotify(QGeoCodeReply* self, const QMetaMethod* signal);
    friend void QGeoCodeReply_SuperDisconnectNotify(QGeoCodeReply* self, const QMetaMethod* signal);
    friend void QGeoCodeReply_SetError(QGeoCodeReply* self, int errorVal, const libqt_string errorString);
    friend void QGeoCodeReply_SuperSetError(QGeoCodeReply* self, int errorVal, const libqt_string errorString);
    friend void QGeoCodeReply_SetFinished(QGeoCodeReply* self, bool finished);
    friend void QGeoCodeReply_SuperSetFinished(QGeoCodeReply* self, bool finished);
    friend void QGeoCodeReply_SetViewport(QGeoCodeReply* self, const QGeoShape* viewport);
    friend void QGeoCodeReply_SuperSetViewport(QGeoCodeReply* self, const QGeoShape* viewport);
    friend void QGeoCodeReply_AddLocation(QGeoCodeReply* self, const QGeoLocation* location);
    friend void QGeoCodeReply_SuperAddLocation(QGeoCodeReply* self, const QGeoLocation* location);
    friend void QGeoCodeReply_SetLocations(QGeoCodeReply* self, const libqt_list /* of QGeoLocation* */ locations);
    friend void QGeoCodeReply_SuperSetLocations(QGeoCodeReply* self, const libqt_list /* of QGeoLocation* */ locations);
    friend void QGeoCodeReply_SetLimit(QGeoCodeReply* self, ptrdiff_t limit);
    friend void QGeoCodeReply_SuperSetLimit(QGeoCodeReply* self, ptrdiff_t limit);
    friend void QGeoCodeReply_SetOffset(QGeoCodeReply* self, ptrdiff_t offset);
    friend void QGeoCodeReply_SuperSetOffset(QGeoCodeReply* self, ptrdiff_t offset);
    friend QObject* QGeoCodeReply_Sender(const QGeoCodeReply* self);
    friend QObject* QGeoCodeReply_SuperSender(const QGeoCodeReply* self);
    friend int QGeoCodeReply_SenderSignalIndex(const QGeoCodeReply* self);
    friend int QGeoCodeReply_SuperSenderSignalIndex(const QGeoCodeReply* self);
    friend int QGeoCodeReply_Receivers(const QGeoCodeReply* self, const char* signal);
    friend int QGeoCodeReply_SuperReceivers(const QGeoCodeReply* self, const char* signal);
    friend bool QGeoCodeReply_IsSignalConnected(const QGeoCodeReply* self, const QMetaMethod* signal);
    friend bool QGeoCodeReply_SuperIsSignalConnected(const QGeoCodeReply* self, const QMetaMethod* signal);
};

#endif
