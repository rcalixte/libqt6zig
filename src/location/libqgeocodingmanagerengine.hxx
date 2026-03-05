#pragma once
#ifndef SRC_LOCATIONC_LIBVIRTUALQGEOCODINGMANAGERENGINE_H
#define SRC_LOCATIONC_LIBVIRTUALQGEOCODINGMANAGERENGINE_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QGeoCodingManagerEngine so that we can call protected methods
class VirtualQGeoCodingManagerEngine final : public QGeoCodingManagerEngine {

  public:
    // Virtual class boolean flag
    bool isVirtualQGeoCodingManagerEngine = true;

    // Virtual class public types (including callbacks)
    using QGeoCodingManagerEngine_MetaObject_Callback = QMetaObject* (*)();
    using QGeoCodingManagerEngine_Metacast_Callback = void* (*)(QGeoCodingManagerEngine*, const char*);
    using QGeoCodingManagerEngine_Metacall_Callback = int (*)(QGeoCodingManagerEngine*, int, int, void**);
    using QGeoCodingManagerEngine_Geocode_Callback = QGeoCodeReply* (*)(QGeoCodingManagerEngine*, QGeoAddress*, QGeoShape*);
    using QGeoCodingManagerEngine_Geocode2_Callback = QGeoCodeReply* (*)(QGeoCodingManagerEngine*, const char*, int, int, QGeoShape*);
    using QGeoCodingManagerEngine_ReverseGeocode_Callback = QGeoCodeReply* (*)(QGeoCodingManagerEngine*, QGeoCoordinate*, QGeoShape*);
    using QGeoCodingManagerEngine_Event_Callback = bool (*)(QGeoCodingManagerEngine*, QEvent*);
    using QGeoCodingManagerEngine_EventFilter_Callback = bool (*)(QGeoCodingManagerEngine*, QObject*, QEvent*);
    using QGeoCodingManagerEngine_TimerEvent_Callback = void (*)(QGeoCodingManagerEngine*, QTimerEvent*);
    using QGeoCodingManagerEngine_ChildEvent_Callback = void (*)(QGeoCodingManagerEngine*, QChildEvent*);
    using QGeoCodingManagerEngine_CustomEvent_Callback = void (*)(QGeoCodingManagerEngine*, QEvent*);
    using QGeoCodingManagerEngine_ConnectNotify_Callback = void (*)(QGeoCodingManagerEngine*, QMetaMethod*);
    using QGeoCodingManagerEngine_DisconnectNotify_Callback = void (*)(QGeoCodingManagerEngine*, QMetaMethod*);
    using QGeoCodingManagerEngine_Sender_Callback = QObject* (*)();
    using QGeoCodingManagerEngine_SenderSignalIndex_Callback = int (*)();
    using QGeoCodingManagerEngine_Receivers_Callback = int (*)(const QGeoCodingManagerEngine*, const char*);
    using QGeoCodingManagerEngine_IsSignalConnected_Callback = bool (*)(const QGeoCodingManagerEngine*, QMetaMethod*);

  protected:
    // Instance callback storage
    QGeoCodingManagerEngine_MetaObject_Callback qgeocodingmanagerengine_metaobject_callback = nullptr;
    QGeoCodingManagerEngine_Metacast_Callback qgeocodingmanagerengine_metacast_callback = nullptr;
    QGeoCodingManagerEngine_Metacall_Callback qgeocodingmanagerengine_metacall_callback = nullptr;
    QGeoCodingManagerEngine_Geocode_Callback qgeocodingmanagerengine_geocode_callback = nullptr;
    QGeoCodingManagerEngine_Geocode2_Callback qgeocodingmanagerengine_geocode2_callback = nullptr;
    QGeoCodingManagerEngine_ReverseGeocode_Callback qgeocodingmanagerengine_reversegeocode_callback = nullptr;
    QGeoCodingManagerEngine_Event_Callback qgeocodingmanagerengine_event_callback = nullptr;
    QGeoCodingManagerEngine_EventFilter_Callback qgeocodingmanagerengine_eventfilter_callback = nullptr;
    QGeoCodingManagerEngine_TimerEvent_Callback qgeocodingmanagerengine_timerevent_callback = nullptr;
    QGeoCodingManagerEngine_ChildEvent_Callback qgeocodingmanagerengine_childevent_callback = nullptr;
    QGeoCodingManagerEngine_CustomEvent_Callback qgeocodingmanagerengine_customevent_callback = nullptr;
    QGeoCodingManagerEngine_ConnectNotify_Callback qgeocodingmanagerengine_connectnotify_callback = nullptr;
    QGeoCodingManagerEngine_DisconnectNotify_Callback qgeocodingmanagerengine_disconnectnotify_callback = nullptr;
    QGeoCodingManagerEngine_Sender_Callback qgeocodingmanagerengine_sender_callback = nullptr;
    QGeoCodingManagerEngine_SenderSignalIndex_Callback qgeocodingmanagerengine_sendersignalindex_callback = nullptr;
    QGeoCodingManagerEngine_Receivers_Callback qgeocodingmanagerengine_receivers_callback = nullptr;
    QGeoCodingManagerEngine_IsSignalConnected_Callback qgeocodingmanagerengine_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qgeocodingmanagerengine_metaobject_isbase = false;
    mutable bool qgeocodingmanagerengine_metacast_isbase = false;
    mutable bool qgeocodingmanagerengine_metacall_isbase = false;
    mutable bool qgeocodingmanagerengine_geocode_isbase = false;
    mutable bool qgeocodingmanagerengine_geocode2_isbase = false;
    mutable bool qgeocodingmanagerengine_reversegeocode_isbase = false;
    mutable bool qgeocodingmanagerengine_event_isbase = false;
    mutable bool qgeocodingmanagerengine_eventfilter_isbase = false;
    mutable bool qgeocodingmanagerengine_timerevent_isbase = false;
    mutable bool qgeocodingmanagerengine_childevent_isbase = false;
    mutable bool qgeocodingmanagerengine_customevent_isbase = false;
    mutable bool qgeocodingmanagerengine_connectnotify_isbase = false;
    mutable bool qgeocodingmanagerengine_disconnectnotify_isbase = false;
    mutable bool qgeocodingmanagerengine_sender_isbase = false;
    mutable bool qgeocodingmanagerengine_sendersignalindex_isbase = false;
    mutable bool qgeocodingmanagerengine_receivers_isbase = false;
    mutable bool qgeocodingmanagerengine_issignalconnected_isbase = false;

  public:
    VirtualQGeoCodingManagerEngine(const QMap<QString, QVariant>& parameters) : QGeoCodingManagerEngine(parameters) {};
    VirtualQGeoCodingManagerEngine(const QMap<QString, QVariant>& parameters, QObject* parent) : QGeoCodingManagerEngine(parameters, parent) {};

    // Callback setters
    inline void setQGeoCodingManagerEngine_MetaObject_Callback(QGeoCodingManagerEngine_MetaObject_Callback cb) { qgeocodingmanagerengine_metaobject_callback = cb; }
    inline void setQGeoCodingManagerEngine_Metacast_Callback(QGeoCodingManagerEngine_Metacast_Callback cb) { qgeocodingmanagerengine_metacast_callback = cb; }
    inline void setQGeoCodingManagerEngine_Metacall_Callback(QGeoCodingManagerEngine_Metacall_Callback cb) { qgeocodingmanagerengine_metacall_callback = cb; }
    inline void setQGeoCodingManagerEngine_Geocode_Callback(QGeoCodingManagerEngine_Geocode_Callback cb) { qgeocodingmanagerengine_geocode_callback = cb; }
    inline void setQGeoCodingManagerEngine_Geocode2_Callback(QGeoCodingManagerEngine_Geocode2_Callback cb) { qgeocodingmanagerengine_geocode2_callback = cb; }
    inline void setQGeoCodingManagerEngine_ReverseGeocode_Callback(QGeoCodingManagerEngine_ReverseGeocode_Callback cb) { qgeocodingmanagerengine_reversegeocode_callback = cb; }
    inline void setQGeoCodingManagerEngine_Event_Callback(QGeoCodingManagerEngine_Event_Callback cb) { qgeocodingmanagerengine_event_callback = cb; }
    inline void setQGeoCodingManagerEngine_EventFilter_Callback(QGeoCodingManagerEngine_EventFilter_Callback cb) { qgeocodingmanagerengine_eventfilter_callback = cb; }
    inline void setQGeoCodingManagerEngine_TimerEvent_Callback(QGeoCodingManagerEngine_TimerEvent_Callback cb) { qgeocodingmanagerengine_timerevent_callback = cb; }
    inline void setQGeoCodingManagerEngine_ChildEvent_Callback(QGeoCodingManagerEngine_ChildEvent_Callback cb) { qgeocodingmanagerengine_childevent_callback = cb; }
    inline void setQGeoCodingManagerEngine_CustomEvent_Callback(QGeoCodingManagerEngine_CustomEvent_Callback cb) { qgeocodingmanagerengine_customevent_callback = cb; }
    inline void setQGeoCodingManagerEngine_ConnectNotify_Callback(QGeoCodingManagerEngine_ConnectNotify_Callback cb) { qgeocodingmanagerengine_connectnotify_callback = cb; }
    inline void setQGeoCodingManagerEngine_DisconnectNotify_Callback(QGeoCodingManagerEngine_DisconnectNotify_Callback cb) { qgeocodingmanagerengine_disconnectnotify_callback = cb; }
    inline void setQGeoCodingManagerEngine_Sender_Callback(QGeoCodingManagerEngine_Sender_Callback cb) { qgeocodingmanagerengine_sender_callback = cb; }
    inline void setQGeoCodingManagerEngine_SenderSignalIndex_Callback(QGeoCodingManagerEngine_SenderSignalIndex_Callback cb) { qgeocodingmanagerengine_sendersignalindex_callback = cb; }
    inline void setQGeoCodingManagerEngine_Receivers_Callback(QGeoCodingManagerEngine_Receivers_Callback cb) { qgeocodingmanagerengine_receivers_callback = cb; }
    inline void setQGeoCodingManagerEngine_IsSignalConnected_Callback(QGeoCodingManagerEngine_IsSignalConnected_Callback cb) { qgeocodingmanagerengine_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQGeoCodingManagerEngine_MetaObject_IsBase(bool value) const { qgeocodingmanagerengine_metaobject_isbase = value; }
    inline void setQGeoCodingManagerEngine_Metacast_IsBase(bool value) const { qgeocodingmanagerengine_metacast_isbase = value; }
    inline void setQGeoCodingManagerEngine_Metacall_IsBase(bool value) const { qgeocodingmanagerengine_metacall_isbase = value; }
    inline void setQGeoCodingManagerEngine_Geocode_IsBase(bool value) const { qgeocodingmanagerengine_geocode_isbase = value; }
    inline void setQGeoCodingManagerEngine_Geocode2_IsBase(bool value) const { qgeocodingmanagerengine_geocode2_isbase = value; }
    inline void setQGeoCodingManagerEngine_ReverseGeocode_IsBase(bool value) const { qgeocodingmanagerengine_reversegeocode_isbase = value; }
    inline void setQGeoCodingManagerEngine_Event_IsBase(bool value) const { qgeocodingmanagerengine_event_isbase = value; }
    inline void setQGeoCodingManagerEngine_EventFilter_IsBase(bool value) const { qgeocodingmanagerengine_eventfilter_isbase = value; }
    inline void setQGeoCodingManagerEngine_TimerEvent_IsBase(bool value) const { qgeocodingmanagerengine_timerevent_isbase = value; }
    inline void setQGeoCodingManagerEngine_ChildEvent_IsBase(bool value) const { qgeocodingmanagerengine_childevent_isbase = value; }
    inline void setQGeoCodingManagerEngine_CustomEvent_IsBase(bool value) const { qgeocodingmanagerengine_customevent_isbase = value; }
    inline void setQGeoCodingManagerEngine_ConnectNotify_IsBase(bool value) const { qgeocodingmanagerengine_connectnotify_isbase = value; }
    inline void setQGeoCodingManagerEngine_DisconnectNotify_IsBase(bool value) const { qgeocodingmanagerengine_disconnectnotify_isbase = value; }
    inline void setQGeoCodingManagerEngine_Sender_IsBase(bool value) const { qgeocodingmanagerengine_sender_isbase = value; }
    inline void setQGeoCodingManagerEngine_SenderSignalIndex_IsBase(bool value) const { qgeocodingmanagerengine_sendersignalindex_isbase = value; }
    inline void setQGeoCodingManagerEngine_Receivers_IsBase(bool value) const { qgeocodingmanagerengine_receivers_isbase = value; }
    inline void setQGeoCodingManagerEngine_IsSignalConnected_IsBase(bool value) const { qgeocodingmanagerengine_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qgeocodingmanagerengine_metaobject_isbase) {
            qgeocodingmanagerengine_metaobject_isbase = false;
            return QGeoCodingManagerEngine::metaObject();
        }
        auto metaobject_cb = qgeocodingmanagerengine_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QGeoCodingManagerEngine::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qgeocodingmanagerengine_metacast_isbase) {
            qgeocodingmanagerengine_metacast_isbase = false;
            return QGeoCodingManagerEngine::qt_metacast(param1);
        }
        auto metacast_cb = qgeocodingmanagerengine_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QGeoCodingManagerEngine::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qgeocodingmanagerengine_metacall_isbase) {
            qgeocodingmanagerengine_metacall_isbase = false;
            return QGeoCodingManagerEngine::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qgeocodingmanagerengine_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QGeoCodingManagerEngine::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QGeoCodeReply* geocode(const QGeoAddress& address, const QGeoShape& bounds) override {
        if (qgeocodingmanagerengine_geocode_isbase) {
            qgeocodingmanagerengine_geocode_isbase = false;
            return QGeoCodingManagerEngine::geocode(address, bounds);
        }
        auto geocode_cb = qgeocodingmanagerengine_geocode_callback;
        if (geocode_cb) {
            const QGeoAddress& address_ret = address;
            // Cast returned reference into pointer
            QGeoAddress* cbval1 = const_cast<QGeoAddress*>(&address_ret);
            const QGeoShape& bounds_ret = bounds;
            // Cast returned reference into pointer
            QGeoShape* cbval2 = const_cast<QGeoShape*>(&bounds_ret);

            QGeoCodeReply* callback_ret = geocode_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QGeoCodingManagerEngine::geocode(address, bounds);
    }

    // Virtual method for C ABI access and custom callback
    virtual QGeoCodeReply* geocode(const QString& address, int limit, int offset, const QGeoShape& bounds) override {
        if (qgeocodingmanagerengine_geocode2_isbase) {
            qgeocodingmanagerengine_geocode2_isbase = false;
            return QGeoCodingManagerEngine::geocode(address, limit, offset, bounds);
        }
        auto geocode2_cb = qgeocodingmanagerengine_geocode2_callback;
        if (geocode2_cb) {
            const QString address_ret = address;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray address_b = address_ret.toUtf8();
            auto address_str_len = address_b.length();
            const char* address_str = static_cast<const char*>(malloc(address_str_len + 1));
            memcpy((void*)address_str, address_b.data(), address_str_len);
            ((char*)address_str)[address_str_len] = '\0';
            const char* cbval1 = address_str;
            int cbval2 = limit;
            int cbval3 = offset;
            const QGeoShape& bounds_ret = bounds;
            // Cast returned reference into pointer
            QGeoShape* cbval4 = const_cast<QGeoShape*>(&bounds_ret);

            QGeoCodeReply* callback_ret = geocode2_cb(this, cbval1, cbval2, cbval3, cbval4);
            libqt_free(address_str);
            return callback_ret;
        }
        return QGeoCodingManagerEngine::geocode(address, limit, offset, bounds);
    }

    // Virtual method for C ABI access and custom callback
    virtual QGeoCodeReply* reverseGeocode(const QGeoCoordinate& coordinate, const QGeoShape& bounds) override {
        if (qgeocodingmanagerengine_reversegeocode_isbase) {
            qgeocodingmanagerengine_reversegeocode_isbase = false;
            return QGeoCodingManagerEngine::reverseGeocode(coordinate, bounds);
        }
        auto reversegeocode_cb = qgeocodingmanagerengine_reversegeocode_callback;
        if (reversegeocode_cb) {
            const QGeoCoordinate& coordinate_ret = coordinate;
            // Cast returned reference into pointer
            QGeoCoordinate* cbval1 = const_cast<QGeoCoordinate*>(&coordinate_ret);
            const QGeoShape& bounds_ret = bounds;
            // Cast returned reference into pointer
            QGeoShape* cbval2 = const_cast<QGeoShape*>(&bounds_ret);

            QGeoCodeReply* callback_ret = reversegeocode_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QGeoCodingManagerEngine::reverseGeocode(coordinate, bounds);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qgeocodingmanagerengine_event_isbase) {
            qgeocodingmanagerengine_event_isbase = false;
            return QGeoCodingManagerEngine::event(event);
        }
        auto event_cb = qgeocodingmanagerengine_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QGeoCodingManagerEngine::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qgeocodingmanagerengine_eventfilter_isbase) {
            qgeocodingmanagerengine_eventfilter_isbase = false;
            return QGeoCodingManagerEngine::eventFilter(watched, event);
        }
        auto eventfilter_cb = qgeocodingmanagerengine_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QGeoCodingManagerEngine::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qgeocodingmanagerengine_timerevent_isbase) {
            qgeocodingmanagerengine_timerevent_isbase = false;
            QGeoCodingManagerEngine::timerEvent(event);
            return;
        }
        auto timerevent_cb = qgeocodingmanagerengine_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        QGeoCodingManagerEngine::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qgeocodingmanagerengine_childevent_isbase) {
            qgeocodingmanagerengine_childevent_isbase = false;
            QGeoCodingManagerEngine::childEvent(event);
            return;
        }
        auto childevent_cb = qgeocodingmanagerengine_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        QGeoCodingManagerEngine::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qgeocodingmanagerengine_customevent_isbase) {
            qgeocodingmanagerengine_customevent_isbase = false;
            QGeoCodingManagerEngine::customEvent(event);
            return;
        }
        auto customevent_cb = qgeocodingmanagerengine_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        QGeoCodingManagerEngine::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qgeocodingmanagerengine_connectnotify_isbase) {
            qgeocodingmanagerengine_connectnotify_isbase = false;
            QGeoCodingManagerEngine::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qgeocodingmanagerengine_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        QGeoCodingManagerEngine::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qgeocodingmanagerengine_disconnectnotify_isbase) {
            qgeocodingmanagerengine_disconnectnotify_isbase = false;
            QGeoCodingManagerEngine::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qgeocodingmanagerengine_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        QGeoCodingManagerEngine::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qgeocodingmanagerengine_sender_isbase) {
            qgeocodingmanagerengine_sender_isbase = false;
            return QGeoCodingManagerEngine::sender();
        }
        auto sender_cb = qgeocodingmanagerengine_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QGeoCodingManagerEngine::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qgeocodingmanagerengine_sendersignalindex_isbase) {
            qgeocodingmanagerengine_sendersignalindex_isbase = false;
            return QGeoCodingManagerEngine::senderSignalIndex();
        }
        auto sendersignalindex_cb = qgeocodingmanagerengine_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QGeoCodingManagerEngine::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qgeocodingmanagerengine_receivers_isbase) {
            qgeocodingmanagerengine_receivers_isbase = false;
            return QGeoCodingManagerEngine::receivers(signal);
        }
        auto receivers_cb = qgeocodingmanagerengine_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QGeoCodingManagerEngine::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qgeocodingmanagerengine_issignalconnected_isbase) {
            qgeocodingmanagerengine_issignalconnected_isbase = false;
            return QGeoCodingManagerEngine::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qgeocodingmanagerengine_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QGeoCodingManagerEngine::isSignalConnected(signal);
    }

    // Friend functions
    friend void QGeoCodingManagerEngine_TimerEvent(QGeoCodingManagerEngine* self, QTimerEvent* event);
    friend void QGeoCodingManagerEngine_SuperTimerEvent(QGeoCodingManagerEngine* self, QTimerEvent* event);
    friend void QGeoCodingManagerEngine_ChildEvent(QGeoCodingManagerEngine* self, QChildEvent* event);
    friend void QGeoCodingManagerEngine_SuperChildEvent(QGeoCodingManagerEngine* self, QChildEvent* event);
    friend void QGeoCodingManagerEngine_CustomEvent(QGeoCodingManagerEngine* self, QEvent* event);
    friend void QGeoCodingManagerEngine_SuperCustomEvent(QGeoCodingManagerEngine* self, QEvent* event);
    friend void QGeoCodingManagerEngine_ConnectNotify(QGeoCodingManagerEngine* self, const QMetaMethod* signal);
    friend void QGeoCodingManagerEngine_SuperConnectNotify(QGeoCodingManagerEngine* self, const QMetaMethod* signal);
    friend void QGeoCodingManagerEngine_DisconnectNotify(QGeoCodingManagerEngine* self, const QMetaMethod* signal);
    friend void QGeoCodingManagerEngine_SuperDisconnectNotify(QGeoCodingManagerEngine* self, const QMetaMethod* signal);
    friend QObject* QGeoCodingManagerEngine_Sender(const QGeoCodingManagerEngine* self);
    friend QObject* QGeoCodingManagerEngine_SuperSender(const QGeoCodingManagerEngine* self);
    friend int QGeoCodingManagerEngine_SenderSignalIndex(const QGeoCodingManagerEngine* self);
    friend int QGeoCodingManagerEngine_SuperSenderSignalIndex(const QGeoCodingManagerEngine* self);
    friend int QGeoCodingManagerEngine_Receivers(const QGeoCodingManagerEngine* self, const char* signal);
    friend int QGeoCodingManagerEngine_SuperReceivers(const QGeoCodingManagerEngine* self, const char* signal);
    friend bool QGeoCodingManagerEngine_IsSignalConnected(const QGeoCodingManagerEngine* self, const QMetaMethod* signal);
    friend bool QGeoCodingManagerEngine_SuperIsSignalConnected(const QGeoCodingManagerEngine* self, const QMetaMethod* signal);
};

#endif
