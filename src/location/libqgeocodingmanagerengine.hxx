#pragma once
#ifndef LOCATION_LIBQGEOCODINGMANAGERENGINE_HXX
#define LOCATION_LIBQGEOCODINGMANAGERENGINE_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QGeoCodingManagerEngine
class VirtualQGeoCodingManagerEngine final : public QGeoCodingManagerEngine {
  public:
    // Virtual class public types (including callbacks and access types)
    using QGeoCodingManagerEngine_MetaObject_Callback = QMetaObject* (*)(const QGeoCodingManagerEngine*);
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
    using QGeoCodingManagerEngine::isSignalConnected;
    using QGeoCodingManagerEngine::receivers;
    using QGeoCodingManagerEngine::sender;
    using QGeoCodingManagerEngine::senderSignalIndex;

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

    // Access struct
    struct Base : QGeoCodingManagerEngine {
        using QGeoCodingManagerEngine::childEvent;
        using QGeoCodingManagerEngine::connectNotify;
        using QGeoCodingManagerEngine::customEvent;
        using QGeoCodingManagerEngine::disconnectNotify;
        using QGeoCodingManagerEngine::timerEvent;
    };

    VirtualQGeoCodingManagerEngine(const QMap<QString, QVariant>& parameters) : QGeoCodingManagerEngine(parameters) {};
    VirtualQGeoCodingManagerEngine(const QMap<QString, QVariant>& parameters, QObject* parent) : QGeoCodingManagerEngine(parameters, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qgeocodingmanagerengine_metaobject_callback) {
            QMetaObject* callback_ret = qgeocodingmanagerengine_metaobject_callback(this);
            return callback_ret;
        }
        return QGeoCodingManagerEngine::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qgeocodingmanagerengine_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qgeocodingmanagerengine_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QGeoCodingManagerEngine::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qgeocodingmanagerengine_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qgeocodingmanagerengine_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QGeoCodingManagerEngine::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QGeoCodeReply* geocode(const QGeoAddress& address, const QGeoShape& bounds) override {
        if (qgeocodingmanagerengine_geocode_callback) {
            const QGeoAddress& address_ret = address;
            // Cast returned reference into pointer
            QGeoAddress* cbval1 = const_cast<QGeoAddress*>(&address_ret);
            const QGeoShape& bounds_ret = bounds;
            // Cast returned reference into pointer
            QGeoShape* cbval2 = const_cast<QGeoShape*>(&bounds_ret);
            QGeoCodeReply* callback_ret = qgeocodingmanagerengine_geocode_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QGeoCodingManagerEngine::geocode(address, bounds);
    }

    // Virtual method for C ABI access and custom callback
    virtual QGeoCodeReply* geocode(const QString& address, int limit, int offset, const QGeoShape& bounds) override {
        if (qgeocodingmanagerengine_geocode2_callback) {
            const auto address_ret = address;
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
            QGeoCodeReply* callback_ret = qgeocodingmanagerengine_geocode2_callback(this, cbval1, cbval2, cbval3, cbval4);
            libqt_free(address_str);
            return callback_ret;
        }
        return QGeoCodingManagerEngine::geocode(address, limit, offset, bounds);
    }

    // Virtual method for C ABI access and custom callback
    virtual QGeoCodeReply* reverseGeocode(const QGeoCoordinate& coordinate, const QGeoShape& bounds) override {
        if (qgeocodingmanagerengine_reversegeocode_callback) {
            const QGeoCoordinate& coordinate_ret = coordinate;
            // Cast returned reference into pointer
            QGeoCoordinate* cbval1 = const_cast<QGeoCoordinate*>(&coordinate_ret);
            const QGeoShape& bounds_ret = bounds;
            // Cast returned reference into pointer
            QGeoShape* cbval2 = const_cast<QGeoShape*>(&bounds_ret);
            QGeoCodeReply* callback_ret = qgeocodingmanagerengine_reversegeocode_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QGeoCodingManagerEngine::reverseGeocode(coordinate, bounds);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qgeocodingmanagerengine_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qgeocodingmanagerengine_event_callback(this, cbval1);
            return callback_ret;
        }
        return QGeoCodingManagerEngine::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qgeocodingmanagerengine_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qgeocodingmanagerengine_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QGeoCodingManagerEngine::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qgeocodingmanagerengine_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qgeocodingmanagerengine_timerevent_callback(this, cbval1);
            return;
        }
        QGeoCodingManagerEngine::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qgeocodingmanagerengine_childevent_callback) {
            QChildEvent* cbval1 = event;
            qgeocodingmanagerengine_childevent_callback(this, cbval1);
            return;
        }
        QGeoCodingManagerEngine::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qgeocodingmanagerengine_customevent_callback) {
            QEvent* cbval1 = event;
            qgeocodingmanagerengine_customevent_callback(this, cbval1);
            return;
        }
        QGeoCodingManagerEngine::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qgeocodingmanagerengine_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qgeocodingmanagerengine_connectnotify_callback(this, cbval1);
            return;
        }
        QGeoCodingManagerEngine::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qgeocodingmanagerengine_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qgeocodingmanagerengine_disconnectnotify_callback(this, cbval1);
            return;
        }
        QGeoCodingManagerEngine::disconnectNotify(signal);
    }

    // Friend functions
    friend void QGeoCodingManagerEngine_SuperTimerEvent(QGeoCodingManagerEngine* self, QTimerEvent* event);
    friend void QGeoCodingManagerEngine_SuperChildEvent(QGeoCodingManagerEngine* self, QChildEvent* event);
    friend void QGeoCodingManagerEngine_SuperCustomEvent(QGeoCodingManagerEngine* self, QEvent* event);
    friend void QGeoCodingManagerEngine_SuperConnectNotify(QGeoCodingManagerEngine* self, const QMetaMethod* signal);
    friend void QGeoCodingManagerEngine_SuperDisconnectNotify(QGeoCodingManagerEngine* self, const QMetaMethod* signal);
};

#endif
