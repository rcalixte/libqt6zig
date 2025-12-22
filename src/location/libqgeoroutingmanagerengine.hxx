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

    ~VirtualQGeoRoutingManagerEngine() {
        qgeoroutingmanagerengine_metacall_callback = nullptr;
        qgeoroutingmanagerengine_calculateroute_callback = nullptr;
        qgeoroutingmanagerengine_updateroute_callback = nullptr;
        qgeoroutingmanagerengine_event_callback = nullptr;
        qgeoroutingmanagerengine_eventfilter_callback = nullptr;
        qgeoroutingmanagerengine_timerevent_callback = nullptr;
        qgeoroutingmanagerengine_childevent_callback = nullptr;
        qgeoroutingmanagerengine_customevent_callback = nullptr;
        qgeoroutingmanagerengine_connectnotify_callback = nullptr;
        qgeoroutingmanagerengine_disconnectnotify_callback = nullptr;
        qgeoroutingmanagerengine_setsupportedtravelmodes_callback = nullptr;
        qgeoroutingmanagerengine_setsupportedfeaturetypes_callback = nullptr;
        qgeoroutingmanagerengine_setsupportedfeatureweights_callback = nullptr;
        qgeoroutingmanagerengine_setsupportedrouteoptimizations_callback = nullptr;
        qgeoroutingmanagerengine_setsupportedsegmentdetails_callback = nullptr;
        qgeoroutingmanagerengine_setsupportedmaneuverdetails_callback = nullptr;
        qgeoroutingmanagerengine_sender_callback = nullptr;
        qgeoroutingmanagerengine_sendersignalindex_callback = nullptr;
        qgeoroutingmanagerengine_receivers_callback = nullptr;
        qgeoroutingmanagerengine_issignalconnected_callback = nullptr;
    }

    // Callback setters
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
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qgeoroutingmanagerengine_metacall_isbase) {
            qgeoroutingmanagerengine_metacall_isbase = false;
            return QGeoRoutingManagerEngine::qt_metacall(param1, param2, param3);
        } else if (qgeoroutingmanagerengine_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qgeoroutingmanagerengine_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QGeoRoutingManagerEngine::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QGeoRouteReply* calculateRoute(const QGeoRouteRequest& request) override {
        if (qgeoroutingmanagerengine_calculateroute_callback != nullptr) {
            const QGeoRouteRequest& request_ret = request;
            // Cast returned reference into pointer
            QGeoRouteRequest* cbval1 = const_cast<QGeoRouteRequest*>(&request_ret);

            QGeoRouteReply* callback_ret = qgeoroutingmanagerengine_calculateroute_callback(this, cbval1);
            return callback_ret;
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QGeoRouteReply* updateRoute(const QGeoRoute& route, const QGeoCoordinate& position) override {
        if (qgeoroutingmanagerengine_updateroute_isbase) {
            qgeoroutingmanagerengine_updateroute_isbase = false;
            return QGeoRoutingManagerEngine::updateRoute(route, position);
        } else if (qgeoroutingmanagerengine_updateroute_callback != nullptr) {
            const QGeoRoute& route_ret = route;
            // Cast returned reference into pointer
            QGeoRoute* cbval1 = const_cast<QGeoRoute*>(&route_ret);
            const QGeoCoordinate& position_ret = position;
            // Cast returned reference into pointer
            QGeoCoordinate* cbval2 = const_cast<QGeoCoordinate*>(&position_ret);

            QGeoRouteReply* callback_ret = qgeoroutingmanagerengine_updateroute_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QGeoRoutingManagerEngine::updateRoute(route, position);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qgeoroutingmanagerengine_event_isbase) {
            qgeoroutingmanagerengine_event_isbase = false;
            return QGeoRoutingManagerEngine::event(event);
        } else if (qgeoroutingmanagerengine_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qgeoroutingmanagerengine_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QGeoRoutingManagerEngine::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qgeoroutingmanagerengine_eventfilter_isbase) {
            qgeoroutingmanagerengine_eventfilter_isbase = false;
            return QGeoRoutingManagerEngine::eventFilter(watched, event);
        } else if (qgeoroutingmanagerengine_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qgeoroutingmanagerengine_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QGeoRoutingManagerEngine::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qgeoroutingmanagerengine_timerevent_isbase) {
            qgeoroutingmanagerengine_timerevent_isbase = false;
            QGeoRoutingManagerEngine::timerEvent(event);
        } else if (qgeoroutingmanagerengine_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qgeoroutingmanagerengine_timerevent_callback(this, cbval1);
        } else {
            QGeoRoutingManagerEngine::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qgeoroutingmanagerengine_childevent_isbase) {
            qgeoroutingmanagerengine_childevent_isbase = false;
            QGeoRoutingManagerEngine::childEvent(event);
        } else if (qgeoroutingmanagerengine_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qgeoroutingmanagerengine_childevent_callback(this, cbval1);
        } else {
            QGeoRoutingManagerEngine::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qgeoroutingmanagerengine_customevent_isbase) {
            qgeoroutingmanagerengine_customevent_isbase = false;
            QGeoRoutingManagerEngine::customEvent(event);
        } else if (qgeoroutingmanagerengine_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qgeoroutingmanagerengine_customevent_callback(this, cbval1);
        } else {
            QGeoRoutingManagerEngine::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qgeoroutingmanagerengine_connectnotify_isbase) {
            qgeoroutingmanagerengine_connectnotify_isbase = false;
            QGeoRoutingManagerEngine::connectNotify(signal);
        } else if (qgeoroutingmanagerengine_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qgeoroutingmanagerengine_connectnotify_callback(this, cbval1);
        } else {
            QGeoRoutingManagerEngine::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qgeoroutingmanagerengine_disconnectnotify_isbase) {
            qgeoroutingmanagerengine_disconnectnotify_isbase = false;
            QGeoRoutingManagerEngine::disconnectNotify(signal);
        } else if (qgeoroutingmanagerengine_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qgeoroutingmanagerengine_disconnectnotify_callback(this, cbval1);
        } else {
            QGeoRoutingManagerEngine::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setSupportedTravelModes(QGeoRouteRequest::TravelModes travelModes) {
        if (qgeoroutingmanagerengine_setsupportedtravelmodes_isbase) {
            qgeoroutingmanagerengine_setsupportedtravelmodes_isbase = false;
            QGeoRoutingManagerEngine::setSupportedTravelModes(travelModes);
        } else if (qgeoroutingmanagerengine_setsupportedtravelmodes_callback != nullptr) {
            int cbval1 = static_cast<int>(travelModes);

            qgeoroutingmanagerengine_setsupportedtravelmodes_callback(this, cbval1);
        } else {
            QGeoRoutingManagerEngine::setSupportedTravelModes(travelModes);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setSupportedFeatureTypes(QGeoRouteRequest::FeatureTypes featureTypes) {
        if (qgeoroutingmanagerengine_setsupportedfeaturetypes_isbase) {
            qgeoroutingmanagerengine_setsupportedfeaturetypes_isbase = false;
            QGeoRoutingManagerEngine::setSupportedFeatureTypes(featureTypes);
        } else if (qgeoroutingmanagerengine_setsupportedfeaturetypes_callback != nullptr) {
            int cbval1 = static_cast<int>(featureTypes);

            qgeoroutingmanagerengine_setsupportedfeaturetypes_callback(this, cbval1);
        } else {
            QGeoRoutingManagerEngine::setSupportedFeatureTypes(featureTypes);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setSupportedFeatureWeights(QGeoRouteRequest::FeatureWeights featureWeights) {
        if (qgeoroutingmanagerengine_setsupportedfeatureweights_isbase) {
            qgeoroutingmanagerengine_setsupportedfeatureweights_isbase = false;
            QGeoRoutingManagerEngine::setSupportedFeatureWeights(featureWeights);
        } else if (qgeoroutingmanagerengine_setsupportedfeatureweights_callback != nullptr) {
            int cbval1 = static_cast<int>(featureWeights);

            qgeoroutingmanagerengine_setsupportedfeatureweights_callback(this, cbval1);
        } else {
            QGeoRoutingManagerEngine::setSupportedFeatureWeights(featureWeights);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setSupportedRouteOptimizations(QGeoRouteRequest::RouteOptimizations optimizations) {
        if (qgeoroutingmanagerengine_setsupportedrouteoptimizations_isbase) {
            qgeoroutingmanagerengine_setsupportedrouteoptimizations_isbase = false;
            QGeoRoutingManagerEngine::setSupportedRouteOptimizations(optimizations);
        } else if (qgeoroutingmanagerengine_setsupportedrouteoptimizations_callback != nullptr) {
            int cbval1 = static_cast<int>(optimizations);

            qgeoroutingmanagerengine_setsupportedrouteoptimizations_callback(this, cbval1);
        } else {
            QGeoRoutingManagerEngine::setSupportedRouteOptimizations(optimizations);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setSupportedSegmentDetails(QGeoRouteRequest::SegmentDetails segmentDetails) {
        if (qgeoroutingmanagerengine_setsupportedsegmentdetails_isbase) {
            qgeoroutingmanagerengine_setsupportedsegmentdetails_isbase = false;
            QGeoRoutingManagerEngine::setSupportedSegmentDetails(segmentDetails);
        } else if (qgeoroutingmanagerengine_setsupportedsegmentdetails_callback != nullptr) {
            int cbval1 = static_cast<int>(segmentDetails);

            qgeoroutingmanagerengine_setsupportedsegmentdetails_callback(this, cbval1);
        } else {
            QGeoRoutingManagerEngine::setSupportedSegmentDetails(segmentDetails);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setSupportedManeuverDetails(QGeoRouteRequest::ManeuverDetails maneuverDetails) {
        if (qgeoroutingmanagerengine_setsupportedmaneuverdetails_isbase) {
            qgeoroutingmanagerengine_setsupportedmaneuverdetails_isbase = false;
            QGeoRoutingManagerEngine::setSupportedManeuverDetails(maneuverDetails);
        } else if (qgeoroutingmanagerengine_setsupportedmaneuverdetails_callback != nullptr) {
            int cbval1 = static_cast<int>(maneuverDetails);

            qgeoroutingmanagerengine_setsupportedmaneuverdetails_callback(this, cbval1);
        } else {
            QGeoRoutingManagerEngine::setSupportedManeuverDetails(maneuverDetails);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qgeoroutingmanagerengine_sender_isbase) {
            qgeoroutingmanagerengine_sender_isbase = false;
            return QGeoRoutingManagerEngine::sender();
        } else if (qgeoroutingmanagerengine_sender_callback != nullptr) {
            QObject* callback_ret = qgeoroutingmanagerengine_sender_callback();
            return callback_ret;
        } else {
            return QGeoRoutingManagerEngine::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qgeoroutingmanagerengine_sendersignalindex_isbase) {
            qgeoroutingmanagerengine_sendersignalindex_isbase = false;
            return QGeoRoutingManagerEngine::senderSignalIndex();
        } else if (qgeoroutingmanagerengine_sendersignalindex_callback != nullptr) {
            int callback_ret = qgeoroutingmanagerengine_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QGeoRoutingManagerEngine::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qgeoroutingmanagerengine_receivers_isbase) {
            qgeoroutingmanagerengine_receivers_isbase = false;
            return QGeoRoutingManagerEngine::receivers(signal);
        } else if (qgeoroutingmanagerengine_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qgeoroutingmanagerengine_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QGeoRoutingManagerEngine::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qgeoroutingmanagerengine_issignalconnected_isbase) {
            qgeoroutingmanagerengine_issignalconnected_isbase = false;
            return QGeoRoutingManagerEngine::isSignalConnected(signal);
        } else if (qgeoroutingmanagerengine_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qgeoroutingmanagerengine_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QGeoRoutingManagerEngine::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void QGeoRoutingManagerEngine_TimerEvent(QGeoRoutingManagerEngine* self, QTimerEvent* event);
    friend void QGeoRoutingManagerEngine_QBaseTimerEvent(QGeoRoutingManagerEngine* self, QTimerEvent* event);
    friend void QGeoRoutingManagerEngine_ChildEvent(QGeoRoutingManagerEngine* self, QChildEvent* event);
    friend void QGeoRoutingManagerEngine_QBaseChildEvent(QGeoRoutingManagerEngine* self, QChildEvent* event);
    friend void QGeoRoutingManagerEngine_CustomEvent(QGeoRoutingManagerEngine* self, QEvent* event);
    friend void QGeoRoutingManagerEngine_QBaseCustomEvent(QGeoRoutingManagerEngine* self, QEvent* event);
    friend void QGeoRoutingManagerEngine_ConnectNotify(QGeoRoutingManagerEngine* self, const QMetaMethod* signal);
    friend void QGeoRoutingManagerEngine_QBaseConnectNotify(QGeoRoutingManagerEngine* self, const QMetaMethod* signal);
    friend void QGeoRoutingManagerEngine_DisconnectNotify(QGeoRoutingManagerEngine* self, const QMetaMethod* signal);
    friend void QGeoRoutingManagerEngine_QBaseDisconnectNotify(QGeoRoutingManagerEngine* self, const QMetaMethod* signal);
    friend void QGeoRoutingManagerEngine_SetSupportedTravelModes(QGeoRoutingManagerEngine* self, int travelModes);
    friend void QGeoRoutingManagerEngine_QBaseSetSupportedTravelModes(QGeoRoutingManagerEngine* self, int travelModes);
    friend void QGeoRoutingManagerEngine_SetSupportedFeatureTypes(QGeoRoutingManagerEngine* self, int featureTypes);
    friend void QGeoRoutingManagerEngine_QBaseSetSupportedFeatureTypes(QGeoRoutingManagerEngine* self, int featureTypes);
    friend void QGeoRoutingManagerEngine_SetSupportedFeatureWeights(QGeoRoutingManagerEngine* self, int featureWeights);
    friend void QGeoRoutingManagerEngine_QBaseSetSupportedFeatureWeights(QGeoRoutingManagerEngine* self, int featureWeights);
    friend void QGeoRoutingManagerEngine_SetSupportedRouteOptimizations(QGeoRoutingManagerEngine* self, int optimizations);
    friend void QGeoRoutingManagerEngine_QBaseSetSupportedRouteOptimizations(QGeoRoutingManagerEngine* self, int optimizations);
    friend void QGeoRoutingManagerEngine_SetSupportedSegmentDetails(QGeoRoutingManagerEngine* self, int segmentDetails);
    friend void QGeoRoutingManagerEngine_QBaseSetSupportedSegmentDetails(QGeoRoutingManagerEngine* self, int segmentDetails);
    friend void QGeoRoutingManagerEngine_SetSupportedManeuverDetails(QGeoRoutingManagerEngine* self, int maneuverDetails);
    friend void QGeoRoutingManagerEngine_QBaseSetSupportedManeuverDetails(QGeoRoutingManagerEngine* self, int maneuverDetails);
    friend QObject* QGeoRoutingManagerEngine_Sender(const QGeoRoutingManagerEngine* self);
    friend QObject* QGeoRoutingManagerEngine_QBaseSender(const QGeoRoutingManagerEngine* self);
    friend int QGeoRoutingManagerEngine_SenderSignalIndex(const QGeoRoutingManagerEngine* self);
    friend int QGeoRoutingManagerEngine_QBaseSenderSignalIndex(const QGeoRoutingManagerEngine* self);
    friend int QGeoRoutingManagerEngine_Receivers(const QGeoRoutingManagerEngine* self, const char* signal);
    friend int QGeoRoutingManagerEngine_QBaseReceivers(const QGeoRoutingManagerEngine* self, const char* signal);
    friend bool QGeoRoutingManagerEngine_IsSignalConnected(const QGeoRoutingManagerEngine* self, const QMetaMethod* signal);
    friend bool QGeoRoutingManagerEngine_QBaseIsSignalConnected(const QGeoRoutingManagerEngine* self, const QMetaMethod* signal);
};

#endif
