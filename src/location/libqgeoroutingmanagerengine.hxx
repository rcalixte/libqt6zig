#pragma once
#ifndef SRC_LOCATIONC_LIBVIRTUALQGEOROUTINGMANAGERENGINE_H
#define SRC_LOCATIONC_LIBVIRTUALQGEOROUTINGMANAGERENGINE_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QGeoRoutingManagerEngine so that we can call protected methods
class VirtualQGeoRoutingManagerEngine : public QGeoRoutingManagerEngine {

  public:
    // Virtual class boolean flag
    bool isVirtualQGeoRoutingManagerEngine = true;

    // Virtual class public types (including callbacks)
    using QGeoRoutingManagerEngine_MetaObject_Callback = QMetaObject* (*)();
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
    using QGeoRoutingManagerEngine_SetSupportedTravelModes_Callback = void (*)(QGeoRoutingManagerEngine*, int);
    using QGeoRoutingManagerEngine_SetSupportedFeatureTypes_Callback = void (*)(QGeoRoutingManagerEngine*, int);
    using QGeoRoutingManagerEngine_SetSupportedFeatureWeights_Callback = void (*)(QGeoRoutingManagerEngine*, int);
    using QGeoRoutingManagerEngine_SetSupportedRouteOptimizations_Callback = void (*)(QGeoRoutingManagerEngine*, int);
    using QGeoRoutingManagerEngine_SetSupportedSegmentDetails_Callback = void (*)(QGeoRoutingManagerEngine*, int);
    using QGeoRoutingManagerEngine_SetSupportedManeuverDetails_Callback = void (*)(QGeoRoutingManagerEngine*, int);
    using QGeoRoutingManagerEngine_Sender_Callback = QObject* (*)();
    using QGeoRoutingManagerEngine_SenderSignalIndex_Callback = int (*)();
    using QGeoRoutingManagerEngine_Receivers_Callback = int (*)(const QGeoRoutingManagerEngine*, const char*);
    using QGeoRoutingManagerEngine_IsSignalConnected_Callback = bool (*)(const QGeoRoutingManagerEngine*, QMetaMethod*);

  protected:
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
    QGeoRoutingManagerEngine_SetSupportedTravelModes_Callback qgeoroutingmanagerengine_setsupportedtravelmodes_callback = nullptr;
    QGeoRoutingManagerEngine_SetSupportedFeatureTypes_Callback qgeoroutingmanagerengine_setsupportedfeaturetypes_callback = nullptr;
    QGeoRoutingManagerEngine_SetSupportedFeatureWeights_Callback qgeoroutingmanagerengine_setsupportedfeatureweights_callback = nullptr;
    QGeoRoutingManagerEngine_SetSupportedRouteOptimizations_Callback qgeoroutingmanagerengine_setsupportedrouteoptimizations_callback = nullptr;
    QGeoRoutingManagerEngine_SetSupportedSegmentDetails_Callback qgeoroutingmanagerengine_setsupportedsegmentdetails_callback = nullptr;
    QGeoRoutingManagerEngine_SetSupportedManeuverDetails_Callback qgeoroutingmanagerengine_setsupportedmaneuverdetails_callback = nullptr;
    QGeoRoutingManagerEngine_Sender_Callback qgeoroutingmanagerengine_sender_callback = nullptr;
    QGeoRoutingManagerEngine_SenderSignalIndex_Callback qgeoroutingmanagerengine_sendersignalindex_callback = nullptr;
    QGeoRoutingManagerEngine_Receivers_Callback qgeoroutingmanagerengine_receivers_callback = nullptr;
    QGeoRoutingManagerEngine_IsSignalConnected_Callback qgeoroutingmanagerengine_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qgeoroutingmanagerengine_metaobject_isbase = false;
    mutable bool qgeoroutingmanagerengine_metacast_isbase = false;
    mutable bool qgeoroutingmanagerengine_metacall_isbase = false;
    mutable bool qgeoroutingmanagerengine_calculateroute_isbase = false;
    mutable bool qgeoroutingmanagerengine_updateroute_isbase = false;
    mutable bool qgeoroutingmanagerengine_event_isbase = false;
    mutable bool qgeoroutingmanagerengine_eventfilter_isbase = false;
    mutable bool qgeoroutingmanagerengine_timerevent_isbase = false;
    mutable bool qgeoroutingmanagerengine_childevent_isbase = false;
    mutable bool qgeoroutingmanagerengine_customevent_isbase = false;
    mutable bool qgeoroutingmanagerengine_connectnotify_isbase = false;
    mutable bool qgeoroutingmanagerengine_disconnectnotify_isbase = false;
    mutable bool qgeoroutingmanagerengine_setsupportedtravelmodes_isbase = false;
    mutable bool qgeoroutingmanagerengine_setsupportedfeaturetypes_isbase = false;
    mutable bool qgeoroutingmanagerengine_setsupportedfeatureweights_isbase = false;
    mutable bool qgeoroutingmanagerengine_setsupportedrouteoptimizations_isbase = false;
    mutable bool qgeoroutingmanagerengine_setsupportedsegmentdetails_isbase = false;
    mutable bool qgeoroutingmanagerengine_setsupportedmaneuverdetails_isbase = false;
    mutable bool qgeoroutingmanagerengine_sender_isbase = false;
    mutable bool qgeoroutingmanagerengine_sendersignalindex_isbase = false;
    mutable bool qgeoroutingmanagerengine_receivers_isbase = false;
    mutable bool qgeoroutingmanagerengine_issignalconnected_isbase = false;

  public:
    VirtualQGeoRoutingManagerEngine(const QMap<QString, QVariant>& parameters) : QGeoRoutingManagerEngine(parameters) {};
    VirtualQGeoRoutingManagerEngine(const QMap<QString, QVariant>& parameters, QObject* parent) : QGeoRoutingManagerEngine(parameters, parent) {};

    // Callback setters
    inline void setQGeoRoutingManagerEngine_MetaObject_Callback(QGeoRoutingManagerEngine_MetaObject_Callback cb) { qgeoroutingmanagerengine_metaobject_callback = cb; }
    inline void setQGeoRoutingManagerEngine_Metacast_Callback(QGeoRoutingManagerEngine_Metacast_Callback cb) { qgeoroutingmanagerengine_metacast_callback = cb; }
    inline void setQGeoRoutingManagerEngine_Metacall_Callback(QGeoRoutingManagerEngine_Metacall_Callback cb) { qgeoroutingmanagerengine_metacall_callback = cb; }
    inline void setQGeoRoutingManagerEngine_CalculateRoute_Callback(QGeoRoutingManagerEngine_CalculateRoute_Callback cb) { qgeoroutingmanagerengine_calculateroute_callback = cb; }
    inline void setQGeoRoutingManagerEngine_UpdateRoute_Callback(QGeoRoutingManagerEngine_UpdateRoute_Callback cb) { qgeoroutingmanagerengine_updateroute_callback = cb; }
    inline void setQGeoRoutingManagerEngine_Event_Callback(QGeoRoutingManagerEngine_Event_Callback cb) { qgeoroutingmanagerengine_event_callback = cb; }
    inline void setQGeoRoutingManagerEngine_EventFilter_Callback(QGeoRoutingManagerEngine_EventFilter_Callback cb) { qgeoroutingmanagerengine_eventfilter_callback = cb; }
    inline void setQGeoRoutingManagerEngine_TimerEvent_Callback(QGeoRoutingManagerEngine_TimerEvent_Callback cb) { qgeoroutingmanagerengine_timerevent_callback = cb; }
    inline void setQGeoRoutingManagerEngine_ChildEvent_Callback(QGeoRoutingManagerEngine_ChildEvent_Callback cb) { qgeoroutingmanagerengine_childevent_callback = cb; }
    inline void setQGeoRoutingManagerEngine_CustomEvent_Callback(QGeoRoutingManagerEngine_CustomEvent_Callback cb) { qgeoroutingmanagerengine_customevent_callback = cb; }
    inline void setQGeoRoutingManagerEngine_ConnectNotify_Callback(QGeoRoutingManagerEngine_ConnectNotify_Callback cb) { qgeoroutingmanagerengine_connectnotify_callback = cb; }
    inline void setQGeoRoutingManagerEngine_DisconnectNotify_Callback(QGeoRoutingManagerEngine_DisconnectNotify_Callback cb) { qgeoroutingmanagerengine_disconnectnotify_callback = cb; }
    inline void setQGeoRoutingManagerEngine_SetSupportedTravelModes_Callback(QGeoRoutingManagerEngine_SetSupportedTravelModes_Callback cb) { qgeoroutingmanagerengine_setsupportedtravelmodes_callback = cb; }
    inline void setQGeoRoutingManagerEngine_SetSupportedFeatureTypes_Callback(QGeoRoutingManagerEngine_SetSupportedFeatureTypes_Callback cb) { qgeoroutingmanagerengine_setsupportedfeaturetypes_callback = cb; }
    inline void setQGeoRoutingManagerEngine_SetSupportedFeatureWeights_Callback(QGeoRoutingManagerEngine_SetSupportedFeatureWeights_Callback cb) { qgeoroutingmanagerengine_setsupportedfeatureweights_callback = cb; }
    inline void setQGeoRoutingManagerEngine_SetSupportedRouteOptimizations_Callback(QGeoRoutingManagerEngine_SetSupportedRouteOptimizations_Callback cb) { qgeoroutingmanagerengine_setsupportedrouteoptimizations_callback = cb; }
    inline void setQGeoRoutingManagerEngine_SetSupportedSegmentDetails_Callback(QGeoRoutingManagerEngine_SetSupportedSegmentDetails_Callback cb) { qgeoroutingmanagerengine_setsupportedsegmentdetails_callback = cb; }
    inline void setQGeoRoutingManagerEngine_SetSupportedManeuverDetails_Callback(QGeoRoutingManagerEngine_SetSupportedManeuverDetails_Callback cb) { qgeoroutingmanagerengine_setsupportedmaneuverdetails_callback = cb; }
    inline void setQGeoRoutingManagerEngine_Sender_Callback(QGeoRoutingManagerEngine_Sender_Callback cb) { qgeoroutingmanagerengine_sender_callback = cb; }
    inline void setQGeoRoutingManagerEngine_SenderSignalIndex_Callback(QGeoRoutingManagerEngine_SenderSignalIndex_Callback cb) { qgeoroutingmanagerengine_sendersignalindex_callback = cb; }
    inline void setQGeoRoutingManagerEngine_Receivers_Callback(QGeoRoutingManagerEngine_Receivers_Callback cb) { qgeoroutingmanagerengine_receivers_callback = cb; }
    inline void setQGeoRoutingManagerEngine_IsSignalConnected_Callback(QGeoRoutingManagerEngine_IsSignalConnected_Callback cb) { qgeoroutingmanagerengine_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQGeoRoutingManagerEngine_MetaObject_IsBase(bool value) const { qgeoroutingmanagerengine_metaobject_isbase = value; }
    inline void setQGeoRoutingManagerEngine_Metacast_IsBase(bool value) const { qgeoroutingmanagerengine_metacast_isbase = value; }
    inline void setQGeoRoutingManagerEngine_Metacall_IsBase(bool value) const { qgeoroutingmanagerengine_metacall_isbase = value; }
    inline void setQGeoRoutingManagerEngine_CalculateRoute_IsBase(bool value) const { qgeoroutingmanagerengine_calculateroute_isbase = value; }
    inline void setQGeoRoutingManagerEngine_UpdateRoute_IsBase(bool value) const { qgeoroutingmanagerengine_updateroute_isbase = value; }
    inline void setQGeoRoutingManagerEngine_Event_IsBase(bool value) const { qgeoroutingmanagerengine_event_isbase = value; }
    inline void setQGeoRoutingManagerEngine_EventFilter_IsBase(bool value) const { qgeoroutingmanagerengine_eventfilter_isbase = value; }
    inline void setQGeoRoutingManagerEngine_TimerEvent_IsBase(bool value) const { qgeoroutingmanagerengine_timerevent_isbase = value; }
    inline void setQGeoRoutingManagerEngine_ChildEvent_IsBase(bool value) const { qgeoroutingmanagerengine_childevent_isbase = value; }
    inline void setQGeoRoutingManagerEngine_CustomEvent_IsBase(bool value) const { qgeoroutingmanagerengine_customevent_isbase = value; }
    inline void setQGeoRoutingManagerEngine_ConnectNotify_IsBase(bool value) const { qgeoroutingmanagerengine_connectnotify_isbase = value; }
    inline void setQGeoRoutingManagerEngine_DisconnectNotify_IsBase(bool value) const { qgeoroutingmanagerengine_disconnectnotify_isbase = value; }
    inline void setQGeoRoutingManagerEngine_SetSupportedTravelModes_IsBase(bool value) const { qgeoroutingmanagerengine_setsupportedtravelmodes_isbase = value; }
    inline void setQGeoRoutingManagerEngine_SetSupportedFeatureTypes_IsBase(bool value) const { qgeoroutingmanagerengine_setsupportedfeaturetypes_isbase = value; }
    inline void setQGeoRoutingManagerEngine_SetSupportedFeatureWeights_IsBase(bool value) const { qgeoroutingmanagerengine_setsupportedfeatureweights_isbase = value; }
    inline void setQGeoRoutingManagerEngine_SetSupportedRouteOptimizations_IsBase(bool value) const { qgeoroutingmanagerengine_setsupportedrouteoptimizations_isbase = value; }
    inline void setQGeoRoutingManagerEngine_SetSupportedSegmentDetails_IsBase(bool value) const { qgeoroutingmanagerengine_setsupportedsegmentdetails_isbase = value; }
    inline void setQGeoRoutingManagerEngine_SetSupportedManeuverDetails_IsBase(bool value) const { qgeoroutingmanagerengine_setsupportedmaneuverdetails_isbase = value; }
    inline void setQGeoRoutingManagerEngine_Sender_IsBase(bool value) const { qgeoroutingmanagerengine_sender_isbase = value; }
    inline void setQGeoRoutingManagerEngine_SenderSignalIndex_IsBase(bool value) const { qgeoroutingmanagerengine_sendersignalindex_isbase = value; }
    inline void setQGeoRoutingManagerEngine_Receivers_IsBase(bool value) const { qgeoroutingmanagerengine_receivers_isbase = value; }
    inline void setQGeoRoutingManagerEngine_IsSignalConnected_IsBase(bool value) const { qgeoroutingmanagerengine_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qgeoroutingmanagerengine_metaobject_isbase) {
            qgeoroutingmanagerengine_metaobject_isbase = false;
            return QGeoRoutingManagerEngine::metaObject();
        }
        auto metaobject_cb = qgeoroutingmanagerengine_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QGeoRoutingManagerEngine::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qgeoroutingmanagerengine_metacast_isbase) {
            qgeoroutingmanagerengine_metacast_isbase = false;
            return QGeoRoutingManagerEngine::qt_metacast(param1);
        }
        auto metacast_cb = qgeoroutingmanagerengine_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QGeoRoutingManagerEngine::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qgeoroutingmanagerengine_metacall_isbase) {
            qgeoroutingmanagerengine_metacall_isbase = false;
            return QGeoRoutingManagerEngine::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qgeoroutingmanagerengine_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QGeoRoutingManagerEngine::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QGeoRouteReply* calculateRoute(const QGeoRouteRequest& request) override {
        auto calculateroute_cb = qgeoroutingmanagerengine_calculateroute_callback;
        if (calculateroute_cb) {
            const QGeoRouteRequest& request_ret = request;
            // Cast returned reference into pointer
            QGeoRouteRequest* cbval1 = const_cast<QGeoRouteRequest*>(&request_ret);

            QGeoRouteReply* callback_ret = calculateroute_cb(this, cbval1);
            return callback_ret;
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual QGeoRouteReply* updateRoute(const QGeoRoute& route, const QGeoCoordinate& position) override {
        if (qgeoroutingmanagerengine_updateroute_isbase) {
            qgeoroutingmanagerengine_updateroute_isbase = false;
            return QGeoRoutingManagerEngine::updateRoute(route, position);
        }
        auto updateroute_cb = qgeoroutingmanagerengine_updateroute_callback;
        if (updateroute_cb) {
            const QGeoRoute& route_ret = route;
            // Cast returned reference into pointer
            QGeoRoute* cbval1 = const_cast<QGeoRoute*>(&route_ret);
            const QGeoCoordinate& position_ret = position;
            // Cast returned reference into pointer
            QGeoCoordinate* cbval2 = const_cast<QGeoCoordinate*>(&position_ret);

            QGeoRouteReply* callback_ret = updateroute_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QGeoRoutingManagerEngine::updateRoute(route, position);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qgeoroutingmanagerengine_event_isbase) {
            qgeoroutingmanagerengine_event_isbase = false;
            return QGeoRoutingManagerEngine::event(event);
        }
        auto event_cb = qgeoroutingmanagerengine_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QGeoRoutingManagerEngine::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qgeoroutingmanagerengine_eventfilter_isbase) {
            qgeoroutingmanagerengine_eventfilter_isbase = false;
            return QGeoRoutingManagerEngine::eventFilter(watched, event);
        }
        auto eventfilter_cb = qgeoroutingmanagerengine_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QGeoRoutingManagerEngine::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qgeoroutingmanagerengine_timerevent_isbase) {
            qgeoroutingmanagerengine_timerevent_isbase = false;
            QGeoRoutingManagerEngine::timerEvent(event);
            return;
        }
        auto timerevent_cb = qgeoroutingmanagerengine_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        QGeoRoutingManagerEngine::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qgeoroutingmanagerengine_childevent_isbase) {
            qgeoroutingmanagerengine_childevent_isbase = false;
            QGeoRoutingManagerEngine::childEvent(event);
            return;
        }
        auto childevent_cb = qgeoroutingmanagerengine_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        QGeoRoutingManagerEngine::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qgeoroutingmanagerengine_customevent_isbase) {
            qgeoroutingmanagerengine_customevent_isbase = false;
            QGeoRoutingManagerEngine::customEvent(event);
            return;
        }
        auto customevent_cb = qgeoroutingmanagerengine_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        QGeoRoutingManagerEngine::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qgeoroutingmanagerengine_connectnotify_isbase) {
            qgeoroutingmanagerengine_connectnotify_isbase = false;
            QGeoRoutingManagerEngine::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qgeoroutingmanagerengine_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        QGeoRoutingManagerEngine::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qgeoroutingmanagerengine_disconnectnotify_isbase) {
            qgeoroutingmanagerengine_disconnectnotify_isbase = false;
            QGeoRoutingManagerEngine::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qgeoroutingmanagerengine_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        QGeoRoutingManagerEngine::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    void setSupportedTravelModes(QGeoRouteRequest::TravelModes travelModes) {
        if (qgeoroutingmanagerengine_setsupportedtravelmodes_isbase) {
            qgeoroutingmanagerengine_setsupportedtravelmodes_isbase = false;
            QGeoRoutingManagerEngine::setSupportedTravelModes(travelModes);
            return;
        }
        auto setsupportedtravelmodes_cb = qgeoroutingmanagerengine_setsupportedtravelmodes_callback;
        if (setsupportedtravelmodes_cb) {
            int cbval1 = static_cast<int>(travelModes);

            setsupportedtravelmodes_cb(this, cbval1);
            return;
        }
        QGeoRoutingManagerEngine::setSupportedTravelModes(travelModes);
    }

    // Virtual method for C ABI access and custom callback
    void setSupportedFeatureTypes(QGeoRouteRequest::FeatureTypes featureTypes) {
        if (qgeoroutingmanagerengine_setsupportedfeaturetypes_isbase) {
            qgeoroutingmanagerengine_setsupportedfeaturetypes_isbase = false;
            QGeoRoutingManagerEngine::setSupportedFeatureTypes(featureTypes);
            return;
        }
        auto setsupportedfeaturetypes_cb = qgeoroutingmanagerengine_setsupportedfeaturetypes_callback;
        if (setsupportedfeaturetypes_cb) {
            int cbval1 = static_cast<int>(featureTypes);

            setsupportedfeaturetypes_cb(this, cbval1);
            return;
        }
        QGeoRoutingManagerEngine::setSupportedFeatureTypes(featureTypes);
    }

    // Virtual method for C ABI access and custom callback
    void setSupportedFeatureWeights(QGeoRouteRequest::FeatureWeights featureWeights) {
        if (qgeoroutingmanagerengine_setsupportedfeatureweights_isbase) {
            qgeoroutingmanagerengine_setsupportedfeatureweights_isbase = false;
            QGeoRoutingManagerEngine::setSupportedFeatureWeights(featureWeights);
            return;
        }
        auto setsupportedfeatureweights_cb = qgeoroutingmanagerengine_setsupportedfeatureweights_callback;
        if (setsupportedfeatureweights_cb) {
            int cbval1 = static_cast<int>(featureWeights);

            setsupportedfeatureweights_cb(this, cbval1);
            return;
        }
        QGeoRoutingManagerEngine::setSupportedFeatureWeights(featureWeights);
    }

    // Virtual method for C ABI access and custom callback
    void setSupportedRouteOptimizations(QGeoRouteRequest::RouteOptimizations optimizations) {
        if (qgeoroutingmanagerengine_setsupportedrouteoptimizations_isbase) {
            qgeoroutingmanagerengine_setsupportedrouteoptimizations_isbase = false;
            QGeoRoutingManagerEngine::setSupportedRouteOptimizations(optimizations);
            return;
        }
        auto setsupportedrouteoptimizations_cb = qgeoroutingmanagerengine_setsupportedrouteoptimizations_callback;
        if (setsupportedrouteoptimizations_cb) {
            int cbval1 = static_cast<int>(optimizations);

            setsupportedrouteoptimizations_cb(this, cbval1);
            return;
        }
        QGeoRoutingManagerEngine::setSupportedRouteOptimizations(optimizations);
    }

    // Virtual method for C ABI access and custom callback
    void setSupportedSegmentDetails(QGeoRouteRequest::SegmentDetails segmentDetails) {
        if (qgeoroutingmanagerengine_setsupportedsegmentdetails_isbase) {
            qgeoroutingmanagerengine_setsupportedsegmentdetails_isbase = false;
            QGeoRoutingManagerEngine::setSupportedSegmentDetails(segmentDetails);
            return;
        }
        auto setsupportedsegmentdetails_cb = qgeoroutingmanagerengine_setsupportedsegmentdetails_callback;
        if (setsupportedsegmentdetails_cb) {
            int cbval1 = static_cast<int>(segmentDetails);

            setsupportedsegmentdetails_cb(this, cbval1);
            return;
        }
        QGeoRoutingManagerEngine::setSupportedSegmentDetails(segmentDetails);
    }

    // Virtual method for C ABI access and custom callback
    void setSupportedManeuverDetails(QGeoRouteRequest::ManeuverDetails maneuverDetails) {
        if (qgeoroutingmanagerengine_setsupportedmaneuverdetails_isbase) {
            qgeoroutingmanagerengine_setsupportedmaneuverdetails_isbase = false;
            QGeoRoutingManagerEngine::setSupportedManeuverDetails(maneuverDetails);
            return;
        }
        auto setsupportedmaneuverdetails_cb = qgeoroutingmanagerengine_setsupportedmaneuverdetails_callback;
        if (setsupportedmaneuverdetails_cb) {
            int cbval1 = static_cast<int>(maneuverDetails);

            setsupportedmaneuverdetails_cb(this, cbval1);
            return;
        }
        QGeoRoutingManagerEngine::setSupportedManeuverDetails(maneuverDetails);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qgeoroutingmanagerengine_sender_isbase) {
            qgeoroutingmanagerengine_sender_isbase = false;
            return QGeoRoutingManagerEngine::sender();
        }
        auto sender_cb = qgeoroutingmanagerengine_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QGeoRoutingManagerEngine::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qgeoroutingmanagerengine_sendersignalindex_isbase) {
            qgeoroutingmanagerengine_sendersignalindex_isbase = false;
            return QGeoRoutingManagerEngine::senderSignalIndex();
        }
        auto sendersignalindex_cb = qgeoroutingmanagerengine_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QGeoRoutingManagerEngine::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qgeoroutingmanagerengine_receivers_isbase) {
            qgeoroutingmanagerengine_receivers_isbase = false;
            return QGeoRoutingManagerEngine::receivers(signal);
        }
        auto receivers_cb = qgeoroutingmanagerengine_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QGeoRoutingManagerEngine::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qgeoroutingmanagerengine_issignalconnected_isbase) {
            qgeoroutingmanagerengine_issignalconnected_isbase = false;
            return QGeoRoutingManagerEngine::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qgeoroutingmanagerengine_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QGeoRoutingManagerEngine::isSignalConnected(signal);
    }

    // Friend functions
    friend void QGeoRoutingManagerEngine_TimerEvent(QGeoRoutingManagerEngine* self, QTimerEvent* event);
    friend void QGeoRoutingManagerEngine_SuperTimerEvent(QGeoRoutingManagerEngine* self, QTimerEvent* event);
    friend void QGeoRoutingManagerEngine_ChildEvent(QGeoRoutingManagerEngine* self, QChildEvent* event);
    friend void QGeoRoutingManagerEngine_SuperChildEvent(QGeoRoutingManagerEngine* self, QChildEvent* event);
    friend void QGeoRoutingManagerEngine_CustomEvent(QGeoRoutingManagerEngine* self, QEvent* event);
    friend void QGeoRoutingManagerEngine_SuperCustomEvent(QGeoRoutingManagerEngine* self, QEvent* event);
    friend void QGeoRoutingManagerEngine_ConnectNotify(QGeoRoutingManagerEngine* self, const QMetaMethod* signal);
    friend void QGeoRoutingManagerEngine_SuperConnectNotify(QGeoRoutingManagerEngine* self, const QMetaMethod* signal);
    friend void QGeoRoutingManagerEngine_DisconnectNotify(QGeoRoutingManagerEngine* self, const QMetaMethod* signal);
    friend void QGeoRoutingManagerEngine_SuperDisconnectNotify(QGeoRoutingManagerEngine* self, const QMetaMethod* signal);
    friend void QGeoRoutingManagerEngine_SetSupportedTravelModes(QGeoRoutingManagerEngine* self, int travelModes);
    friend void QGeoRoutingManagerEngine_SuperSetSupportedTravelModes(QGeoRoutingManagerEngine* self, int travelModes);
    friend void QGeoRoutingManagerEngine_SetSupportedFeatureTypes(QGeoRoutingManagerEngine* self, int featureTypes);
    friend void QGeoRoutingManagerEngine_SuperSetSupportedFeatureTypes(QGeoRoutingManagerEngine* self, int featureTypes);
    friend void QGeoRoutingManagerEngine_SetSupportedFeatureWeights(QGeoRoutingManagerEngine* self, int featureWeights);
    friend void QGeoRoutingManagerEngine_SuperSetSupportedFeatureWeights(QGeoRoutingManagerEngine* self, int featureWeights);
    friend void QGeoRoutingManagerEngine_SetSupportedRouteOptimizations(QGeoRoutingManagerEngine* self, int optimizations);
    friend void QGeoRoutingManagerEngine_SuperSetSupportedRouteOptimizations(QGeoRoutingManagerEngine* self, int optimizations);
    friend void QGeoRoutingManagerEngine_SetSupportedSegmentDetails(QGeoRoutingManagerEngine* self, int segmentDetails);
    friend void QGeoRoutingManagerEngine_SuperSetSupportedSegmentDetails(QGeoRoutingManagerEngine* self, int segmentDetails);
    friend void QGeoRoutingManagerEngine_SetSupportedManeuverDetails(QGeoRoutingManagerEngine* self, int maneuverDetails);
    friend void QGeoRoutingManagerEngine_SuperSetSupportedManeuverDetails(QGeoRoutingManagerEngine* self, int maneuverDetails);
    friend QObject* QGeoRoutingManagerEngine_Sender(const QGeoRoutingManagerEngine* self);
    friend QObject* QGeoRoutingManagerEngine_SuperSender(const QGeoRoutingManagerEngine* self);
    friend int QGeoRoutingManagerEngine_SenderSignalIndex(const QGeoRoutingManagerEngine* self);
    friend int QGeoRoutingManagerEngine_SuperSenderSignalIndex(const QGeoRoutingManagerEngine* self);
    friend int QGeoRoutingManagerEngine_Receivers(const QGeoRoutingManagerEngine* self, const char* signal);
    friend int QGeoRoutingManagerEngine_SuperReceivers(const QGeoRoutingManagerEngine* self, const char* signal);
    friend bool QGeoRoutingManagerEngine_IsSignalConnected(const QGeoRoutingManagerEngine* self, const QMetaMethod* signal);
    friend bool QGeoRoutingManagerEngine_SuperIsSignalConnected(const QGeoRoutingManagerEngine* self, const QMetaMethod* signal);
};

#endif
