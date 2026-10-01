#pragma once
#ifndef LOCATION_LIBQGEOROUTINGMANAGERENGINE_HXX
#define LOCATION_LIBQGEOROUTINGMANAGERENGINE_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QGeoRoutingManagerEngine
class VirtualQGeoRoutingManagerEngine : public QGeoRoutingManagerEngine {
  public:
    // Virtual class public types (including callbacks and access types)
    using QGeoRoutingManagerEngine_MetaObject_Callback = QMetaObject* (*)(const QGeoRoutingManagerEngine*);
    using QGeoRoutingManagerEngine_Metacast_Callback = void* (*)(QGeoRoutingManagerEngine*, const char*);
    using QGeoRoutingManagerEngine_Metacall_Callback = int (*)(QGeoRoutingManagerEngine*, int, int, void**);
    using QGeoRoutingManagerEngine_CalculateRoute_Callback = QGeoRouteReply* (*)(QGeoRoutingManagerEngine*, QGeoRouteRequest*);
    using QGeoRoutingManagerEngine_UpdateRoute_Callback = QGeoRouteReply* (*)(QGeoRoutingManagerEngine*, QGeoRoute*, QGeoCoordinate*);
    using QGeoRoutingManagerEngine_Event_Callback = bool (*)(QGeoRoutingManagerEngine*, QEvent*);
    using QGeoRoutingManagerEngine_EventFilter_Callback = bool (*)(QGeoRoutingManagerEngine*, QObject*, QEvent*);
    using QGeoRoutingManagerEngine_TimerEvent_Callback = void (*)(QGeoRoutingManagerEngine*, QTimerEvent*);
    using QGeoRoutingManagerEngine_ChildEvent_Callback = void (*)(QGeoRoutingManagerEngine*, QChildEvent*);
    using QGeoRoutingManagerEngine_CustomEvent_Callback = void (*)(QGeoRoutingManagerEngine*, QEvent*);
    using QGeoRoutingManagerEngine_ConnectNotify_Callback = void (*)(QGeoRoutingManagerEngine*, QMetaMethod*);
    using QGeoRoutingManagerEngine_DisconnectNotify_Callback = void (*)(QGeoRoutingManagerEngine*, QMetaMethod*);
    using QGeoRoutingManagerEngine::isSignalConnected;
    using QGeoRoutingManagerEngine::receivers;
    using QGeoRoutingManagerEngine::sender;
    using QGeoRoutingManagerEngine::senderSignalIndex;
    using QGeoRoutingManagerEngine::setSupportedFeatureTypes;
    using QGeoRoutingManagerEngine::setSupportedFeatureWeights;
    using QGeoRoutingManagerEngine::setSupportedManeuverDetails;
    using QGeoRoutingManagerEngine::setSupportedRouteOptimizations;
    using QGeoRoutingManagerEngine::setSupportedSegmentDetails;
    using QGeoRoutingManagerEngine::setSupportedTravelModes;

    // Instance callback storage
    QGeoRoutingManagerEngine_MetaObject_Callback qgeoroutingmanagerengine_metaobject_callback = nullptr;
    QGeoRoutingManagerEngine_Metacast_Callback qgeoroutingmanagerengine_metacast_callback = nullptr;
    QGeoRoutingManagerEngine_Metacall_Callback qgeoroutingmanagerengine_metacall_callback = nullptr;
    QGeoRoutingManagerEngine_CalculateRoute_Callback qgeoroutingmanagerengine_calculateroute_callback = nullptr;
    QGeoRoutingManagerEngine_UpdateRoute_Callback qgeoroutingmanagerengine_updateroute_callback = nullptr;
    QGeoRoutingManagerEngine_Event_Callback qgeoroutingmanagerengine_event_callback = nullptr;
    QGeoRoutingManagerEngine_EventFilter_Callback qgeoroutingmanagerengine_eventfilter_callback = nullptr;
    QGeoRoutingManagerEngine_TimerEvent_Callback qgeoroutingmanagerengine_timerevent_callback = nullptr;
    QGeoRoutingManagerEngine_ChildEvent_Callback qgeoroutingmanagerengine_childevent_callback = nullptr;
    QGeoRoutingManagerEngine_CustomEvent_Callback qgeoroutingmanagerengine_customevent_callback = nullptr;
    QGeoRoutingManagerEngine_ConnectNotify_Callback qgeoroutingmanagerengine_connectnotify_callback = nullptr;
    QGeoRoutingManagerEngine_DisconnectNotify_Callback qgeoroutingmanagerengine_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QGeoRoutingManagerEngine {
        using QGeoRoutingManagerEngine::childEvent;
        using QGeoRoutingManagerEngine::connectNotify;
        using QGeoRoutingManagerEngine::customEvent;
        using QGeoRoutingManagerEngine::disconnectNotify;
        using QGeoRoutingManagerEngine::timerEvent;
    };

    VirtualQGeoRoutingManagerEngine(const QMap<QString, QVariant>& parameters) : QGeoRoutingManagerEngine(parameters) {};
    VirtualQGeoRoutingManagerEngine(const QMap<QString, QVariant>& parameters, QObject* parent) : QGeoRoutingManagerEngine(parameters, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qgeoroutingmanagerengine_metaobject_callback) {
            QMetaObject* callback_ret = qgeoroutingmanagerengine_metaobject_callback(this);
            return callback_ret;
        }
        return QGeoRoutingManagerEngine::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qgeoroutingmanagerengine_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qgeoroutingmanagerengine_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QGeoRoutingManagerEngine::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qgeoroutingmanagerengine_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qgeoroutingmanagerengine_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QGeoRoutingManagerEngine::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QGeoRouteReply* calculateRoute(const QGeoRouteRequest& request) override {
        if (qgeoroutingmanagerengine_calculateroute_callback) {
            const QGeoRouteRequest& request_ret = request;
            // Cast returned reference into pointer
            QGeoRouteRequest* cbval1 = const_cast<QGeoRouteRequest*>(&request_ret);
            QGeoRouteReply* callback_ret = qgeoroutingmanagerengine_calculateroute_callback(this, cbval1);
            return callback_ret;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QGeoRoutingManagerEngine::calculateRoute called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual QGeoRouteReply* updateRoute(const QGeoRoute& route, const QGeoCoordinate& position) override {
        if (qgeoroutingmanagerengine_updateroute_callback) {
            const QGeoRoute& route_ret = route;
            // Cast returned reference into pointer
            QGeoRoute* cbval1 = const_cast<QGeoRoute*>(&route_ret);
            const QGeoCoordinate& position_ret = position;
            // Cast returned reference into pointer
            QGeoCoordinate* cbval2 = const_cast<QGeoCoordinate*>(&position_ret);
            QGeoRouteReply* callback_ret = qgeoroutingmanagerengine_updateroute_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QGeoRoutingManagerEngine::updateRoute(route, position);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qgeoroutingmanagerengine_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qgeoroutingmanagerengine_event_callback(this, cbval1);
            return callback_ret;
        }
        return QGeoRoutingManagerEngine::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qgeoroutingmanagerengine_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qgeoroutingmanagerengine_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QGeoRoutingManagerEngine::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qgeoroutingmanagerengine_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qgeoroutingmanagerengine_timerevent_callback(this, cbval1);
            return;
        }
        QGeoRoutingManagerEngine::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qgeoroutingmanagerengine_childevent_callback) {
            QChildEvent* cbval1 = event;
            qgeoroutingmanagerengine_childevent_callback(this, cbval1);
            return;
        }
        QGeoRoutingManagerEngine::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qgeoroutingmanagerengine_customevent_callback) {
            QEvent* cbval1 = event;
            qgeoroutingmanagerengine_customevent_callback(this, cbval1);
            return;
        }
        QGeoRoutingManagerEngine::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qgeoroutingmanagerengine_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qgeoroutingmanagerengine_connectnotify_callback(this, cbval1);
            return;
        }
        QGeoRoutingManagerEngine::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qgeoroutingmanagerengine_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qgeoroutingmanagerengine_disconnectnotify_callback(this, cbval1);
            return;
        }
        QGeoRoutingManagerEngine::disconnectNotify(signal);
    }

    // Friend functions
    friend void QGeoRoutingManagerEngine_SuperTimerEvent(QGeoRoutingManagerEngine* self, QTimerEvent* event);
    friend void QGeoRoutingManagerEngine_SuperChildEvent(QGeoRoutingManagerEngine* self, QChildEvent* event);
    friend void QGeoRoutingManagerEngine_SuperCustomEvent(QGeoRoutingManagerEngine* self, QEvent* event);
    friend void QGeoRoutingManagerEngine_SuperConnectNotify(QGeoRoutingManagerEngine* self, const QMetaMethod* signal);
    friend void QGeoRoutingManagerEngine_SuperDisconnectNotify(QGeoRoutingManagerEngine* self, const QMetaMethod* signal);
};

#endif
