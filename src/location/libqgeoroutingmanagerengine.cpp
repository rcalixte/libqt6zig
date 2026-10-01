#include <QChildEvent>
#include <QEvent>
#include <QGeoCoordinate>
#include <QGeoRoute>
#include <QGeoRouteReply>
#include <QGeoRouteRequest>
#include <QGeoRoutingManagerEngine>
#include <QLocale>
#include <QMap>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QTimerEvent>
#include <QVariant>
#include <qgeoroutingmanagerengine.h>
#include "libqgeoroutingmanagerengine.h"
#include "libqgeoroutingmanagerengine.hxx"

QGeoRoutingManagerEngine* QGeoRoutingManagerEngine_new(const libqt_map /* of libqt_string to QVariant* */ parameters) {
    QMap<QString, QVariant> parameters_QMap;
    libqt_string* parameters_karr = static_cast<libqt_string*>(parameters.keys);
    QVariant** parameters_varr = static_cast<QVariant**>(parameters.values);
    for (size_t i = 0; i < parameters.len; ++i) {
        QString parameters_karr_i_QString = QString::fromUtf8(parameters_karr[i].data, parameters_karr[i].len);
        parameters_QMap.insert(parameters_karr_i_QString, *(parameters_varr[i]));
    }
    return new VirtualQGeoRoutingManagerEngine(parameters_QMap);
}

QGeoRoutingManagerEngine* QGeoRoutingManagerEngine_new2(const libqt_map /* of libqt_string to QVariant* */ parameters, QObject* parent) {
    QMap<QString, QVariant> parameters_QMap;
    libqt_string* parameters_karr = static_cast<libqt_string*>(parameters.keys);
    QVariant** parameters_varr = static_cast<QVariant**>(parameters.values);
    for (size_t i = 0; i < parameters.len; ++i) {
        QString parameters_karr_i_QString = QString::fromUtf8(parameters_karr[i].data, parameters_karr[i].len);
        parameters_QMap.insert(parameters_karr_i_QString, *(parameters_varr[i]));
    }
    return new VirtualQGeoRoutingManagerEngine(parameters_QMap, parent);
}

QMetaObject* QGeoRoutingManagerEngine_MetaObject(const QGeoRoutingManagerEngine* self) {
    return (QMetaObject*)self->metaObject();
}

void* QGeoRoutingManagerEngine_Metacast(QGeoRoutingManagerEngine* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QGeoRoutingManagerEngine_Metacall(QGeoRoutingManagerEngine* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QGeoRoutingManagerEngine_Tr(const char* s) {
    auto _ret = QGeoRoutingManagerEngine::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QGeoRoutingManagerEngine_ManagerName(const QGeoRoutingManagerEngine* self) {
    auto _ret = self->managerName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int QGeoRoutingManagerEngine_ManagerVersion(const QGeoRoutingManagerEngine* self) {
    return self->managerVersion();
}

QGeoRouteReply* QGeoRoutingManagerEngine_CalculateRoute(QGeoRoutingManagerEngine* self, const QGeoRouteRequest* request) {
    return self->calculateRoute(*request);
}

QGeoRouteReply* QGeoRoutingManagerEngine_UpdateRoute(QGeoRoutingManagerEngine* self, const QGeoRoute* route, const QGeoCoordinate* position) {
    return self->updateRoute(*route, *position);
}

int QGeoRoutingManagerEngine_SupportedTravelModes(const QGeoRoutingManagerEngine* self) {
    return static_cast<int>(self->supportedTravelModes());
}

int QGeoRoutingManagerEngine_SupportedFeatureTypes(const QGeoRoutingManagerEngine* self) {
    return static_cast<int>(self->supportedFeatureTypes());
}

int QGeoRoutingManagerEngine_SupportedFeatureWeights(const QGeoRoutingManagerEngine* self) {
    return static_cast<int>(self->supportedFeatureWeights());
}

int QGeoRoutingManagerEngine_SupportedRouteOptimizations(const QGeoRoutingManagerEngine* self) {
    return static_cast<int>(self->supportedRouteOptimizations());
}

int QGeoRoutingManagerEngine_SupportedSegmentDetails(const QGeoRoutingManagerEngine* self) {
    return static_cast<int>(self->supportedSegmentDetails());
}

int QGeoRoutingManagerEngine_SupportedManeuverDetails(const QGeoRoutingManagerEngine* self) {
    return static_cast<int>(self->supportedManeuverDetails());
}

void QGeoRoutingManagerEngine_SetLocale(QGeoRoutingManagerEngine* self, const QLocale* locale) {
    self->setLocale(*locale);
}

QLocale* QGeoRoutingManagerEngine_Locale(const QGeoRoutingManagerEngine* self) {
    return new QLocale(self->locale());
}

void QGeoRoutingManagerEngine_SetMeasurementSystem(QGeoRoutingManagerEngine* self, int system) {
    self->setMeasurementSystem(static_cast<QLocale::MeasurementSystem>(system));
}

int QGeoRoutingManagerEngine_MeasurementSystem(const QGeoRoutingManagerEngine* self) {
    return static_cast<int>(self->measurementSystem());
}

void QGeoRoutingManagerEngine_Finished(QGeoRoutingManagerEngine* self, QGeoRouteReply* reply) {
    self->finished(reply);
}

void QGeoRoutingManagerEngine_Connect_Finished(QGeoRoutingManagerEngine* self, intptr_t slot) {
    void (*slotFunc)(QGeoRoutingManagerEngine*, QGeoRouteReply*) = reinterpret_cast<void (*)(QGeoRoutingManagerEngine*, QGeoRouteReply*)>(slot);
    QGeoRoutingManagerEngine::connect(self,
                                      static_cast<void (QGeoRoutingManagerEngine::*)(QGeoRouteReply*)>(&QGeoRoutingManagerEngine::finished),
                                      [self, slotFunc](QGeoRouteReply* reply) {
                                          QGeoRouteReply* sigval1 = reply;
                                          slotFunc(self, sigval1);
                                      });
}

void QGeoRoutingManagerEngine_ErrorOccurred(QGeoRoutingManagerEngine* self, QGeoRouteReply* reply, int errorVal) {
    self->errorOccurred(reply, static_cast<QGeoRouteReply::Error>(errorVal));
}

void QGeoRoutingManagerEngine_Connect_ErrorOccurred(QGeoRoutingManagerEngine* self, intptr_t slot) {
    void (*slotFunc)(QGeoRoutingManagerEngine*, QGeoRouteReply*, int) = reinterpret_cast<void (*)(QGeoRoutingManagerEngine*, QGeoRouteReply*, int)>(slot);
    QGeoRoutingManagerEngine::connect(self,
                                      static_cast<void (QGeoRoutingManagerEngine::*)(QGeoRouteReply*, QGeoRouteReply::Error, const QString&)>(&QGeoRoutingManagerEngine::errorOccurred),
                                      [self, slotFunc](QGeoRouteReply* reply, QGeoRouteReply::Error errorVal) {
                                          QGeoRouteReply* sigval1 = reply;
                                          int sigval2 = static_cast<int>(errorVal);
                                          slotFunc(self, sigval1, sigval2);
                                      });
}

libqt_string QGeoRoutingManagerEngine_Tr2(const char* s, const char* c) {
    auto _ret = QGeoRoutingManagerEngine::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QGeoRoutingManagerEngine_Tr3(const char* s, const char* c, int n) {
    auto _ret = QGeoRoutingManagerEngine::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QGeoRoutingManagerEngine_ErrorOccurred3(QGeoRoutingManagerEngine* self, QGeoRouteReply* reply, int errorVal, const libqt_string errorString) {
    QString errorString_QString = QString::fromUtf8(errorString.data, errorString.len);
    self->errorOccurred(reply, static_cast<QGeoRouteReply::Error>(errorVal), errorString_QString);
}

void QGeoRoutingManagerEngine_Connect_ErrorOccurred3(QGeoRoutingManagerEngine* self, intptr_t slot) {
    void (*slotFunc)(QGeoRoutingManagerEngine*, QGeoRouteReply*, int, const char*) = reinterpret_cast<void (*)(QGeoRoutingManagerEngine*, QGeoRouteReply*, int, const char*)>(slot);
    QGeoRoutingManagerEngine::connect(self,
                                      static_cast<void (QGeoRoutingManagerEngine::*)(QGeoRouteReply*, QGeoRouteReply::Error, const QString&)>(&QGeoRoutingManagerEngine::errorOccurred),
                                      [self, slotFunc](QGeoRouteReply* reply, QGeoRouteReply::Error errorVal, const QString& errorString) {
                                          QGeoRouteReply* sigval1 = reply;
                                          int sigval2 = static_cast<int>(errorVal);
                                          const auto errorString_ret = errorString;
                                          // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
                                          QByteArray errorString_b = errorString_ret.toUtf8();
                                          auto errorString_str_len = errorString_b.length();
                                          const char* errorString_str = static_cast<const char*>(malloc(errorString_str_len + 1));
                                          memcpy((void*)errorString_str, errorString_b.data(), errorString_str_len);
                                          ((char*)errorString_str)[errorString_str_len] = '\0';
                                          const char* sigval3 = errorString_str;
                                          slotFunc(self, sigval1, sigval2, sigval3);
                                          libqt_free(errorString_str);
                                      });
}

// Base class handler implementation
QMetaObject* QGeoRoutingManagerEngine_SuperMetaObject(const QGeoRoutingManagerEngine* self) {
    return (QMetaObject*)self->QGeoRoutingManagerEngine::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QGeoRoutingManagerEngine_OnMetaObject(QGeoRoutingManagerEngine* self, intptr_t slot) {
    if (auto* vqgeoroutingmanagerengine = const_cast<VirtualQGeoRoutingManagerEngine*>(dynamic_cast<const VirtualQGeoRoutingManagerEngine*>(self)))
        vqgeoroutingmanagerengine->qgeoroutingmanagerengine_metaobject_callback = reinterpret_cast<VirtualQGeoRoutingManagerEngine::QGeoRoutingManagerEngine_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QGeoRoutingManagerEngine_SuperMetacast(QGeoRoutingManagerEngine* self, const char* param1) {
    return self->QGeoRoutingManagerEngine::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QGeoRoutingManagerEngine_OnMetacast(QGeoRoutingManagerEngine* self, intptr_t slot) {
    if (auto* vqgeoroutingmanagerengine = dynamic_cast<VirtualQGeoRoutingManagerEngine*>(self))
        vqgeoroutingmanagerengine->qgeoroutingmanagerengine_metacast_callback = reinterpret_cast<VirtualQGeoRoutingManagerEngine::QGeoRoutingManagerEngine_Metacast_Callback>(slot);
}

// Base class handler implementation
int QGeoRoutingManagerEngine_SuperMetacall(QGeoRoutingManagerEngine* self, int param1, int param2, void** param3) {
    return self->QGeoRoutingManagerEngine::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QGeoRoutingManagerEngine_OnMetacall(QGeoRoutingManagerEngine* self, intptr_t slot) {
    if (auto* vqgeoroutingmanagerengine = dynamic_cast<VirtualQGeoRoutingManagerEngine*>(self))
        vqgeoroutingmanagerengine->qgeoroutingmanagerengine_metacall_callback = reinterpret_cast<VirtualQGeoRoutingManagerEngine::QGeoRoutingManagerEngine_Metacall_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QGeoRoutingManagerEngine_OnCalculateRoute(QGeoRoutingManagerEngine* self, intptr_t slot) {
    if (auto* vqgeoroutingmanagerengine = dynamic_cast<VirtualQGeoRoutingManagerEngine*>(self))
        vqgeoroutingmanagerengine->qgeoroutingmanagerengine_calculateroute_callback = reinterpret_cast<VirtualQGeoRoutingManagerEngine::QGeoRoutingManagerEngine_CalculateRoute_Callback>(slot);
}

// Base class handler implementation
QGeoRouteReply* QGeoRoutingManagerEngine_SuperUpdateRoute(QGeoRoutingManagerEngine* self, const QGeoRoute* route, const QGeoCoordinate* position) {
    return self->QGeoRoutingManagerEngine::updateRoute(*route, *position);
}

// Auxiliary method to allow providing re-implementation
void QGeoRoutingManagerEngine_OnUpdateRoute(QGeoRoutingManagerEngine* self, intptr_t slot) {
    if (auto* vqgeoroutingmanagerengine = dynamic_cast<VirtualQGeoRoutingManagerEngine*>(self))
        vqgeoroutingmanagerengine->qgeoroutingmanagerengine_updateroute_callback = reinterpret_cast<VirtualQGeoRoutingManagerEngine::QGeoRoutingManagerEngine_UpdateRoute_Callback>(slot);
}

// Derived class handler implementation
bool QGeoRoutingManagerEngine_Event(QGeoRoutingManagerEngine* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QGeoRoutingManagerEngine_SuperEvent(QGeoRoutingManagerEngine* self, QEvent* event) {
    return self->QGeoRoutingManagerEngine::event(event);
}

// Auxiliary method to allow providing re-implementation
void QGeoRoutingManagerEngine_OnEvent(QGeoRoutingManagerEngine* self, intptr_t slot) {
    if (auto* vqgeoroutingmanagerengine = dynamic_cast<VirtualQGeoRoutingManagerEngine*>(self))
        vqgeoroutingmanagerengine->qgeoroutingmanagerengine_event_callback = reinterpret_cast<VirtualQGeoRoutingManagerEngine::QGeoRoutingManagerEngine_Event_Callback>(slot);
}

// Derived class handler implementation
bool QGeoRoutingManagerEngine_EventFilter(QGeoRoutingManagerEngine* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QGeoRoutingManagerEngine_SuperEventFilter(QGeoRoutingManagerEngine* self, QObject* watched, QEvent* event) {
    return self->QGeoRoutingManagerEngine::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QGeoRoutingManagerEngine_OnEventFilter(QGeoRoutingManagerEngine* self, intptr_t slot) {
    if (auto* vqgeoroutingmanagerengine = dynamic_cast<VirtualQGeoRoutingManagerEngine*>(self))
        vqgeoroutingmanagerengine->qgeoroutingmanagerengine_eventfilter_callback = reinterpret_cast<VirtualQGeoRoutingManagerEngine::QGeoRoutingManagerEngine_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QGeoRoutingManagerEngine_TimerEvent(QGeoRoutingManagerEngine* self, QTimerEvent* event) {
    auto* vqgeoroutingmanagerengine = dynamic_cast<VirtualQGeoRoutingManagerEngine*>(self);
    if (vqgeoroutingmanagerengine) {
        vqgeoroutingmanagerengine->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGeoRoutingManagerEngine::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGeoRoutingManagerEngine_SuperTimerEvent(QGeoRoutingManagerEngine* self, QTimerEvent* event) {
    if (auto* vqgeoroutingmanagerengine = dynamic_cast<VirtualQGeoRoutingManagerEngine*>(self)) {
        vqgeoroutingmanagerengine->QGeoRoutingManagerEngine::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QGeoRoutingManagerEngine::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGeoRoutingManagerEngine_OnTimerEvent(QGeoRoutingManagerEngine* self, intptr_t slot) {
    if (auto* vqgeoroutingmanagerengine = dynamic_cast<VirtualQGeoRoutingManagerEngine*>(self))
        vqgeoroutingmanagerengine->qgeoroutingmanagerengine_timerevent_callback = reinterpret_cast<VirtualQGeoRoutingManagerEngine::QGeoRoutingManagerEngine_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QGeoRoutingManagerEngine_ChildEvent(QGeoRoutingManagerEngine* self, QChildEvent* event) {
    auto* vqgeoroutingmanagerengine = dynamic_cast<VirtualQGeoRoutingManagerEngine*>(self);
    if (vqgeoroutingmanagerengine) {
        vqgeoroutingmanagerengine->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGeoRoutingManagerEngine::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGeoRoutingManagerEngine_SuperChildEvent(QGeoRoutingManagerEngine* self, QChildEvent* event) {
    if (auto* vqgeoroutingmanagerengine = dynamic_cast<VirtualQGeoRoutingManagerEngine*>(self)) {
        vqgeoroutingmanagerengine->QGeoRoutingManagerEngine::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QGeoRoutingManagerEngine::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGeoRoutingManagerEngine_OnChildEvent(QGeoRoutingManagerEngine* self, intptr_t slot) {
    if (auto* vqgeoroutingmanagerengine = dynamic_cast<VirtualQGeoRoutingManagerEngine*>(self))
        vqgeoroutingmanagerengine->qgeoroutingmanagerengine_childevent_callback = reinterpret_cast<VirtualQGeoRoutingManagerEngine::QGeoRoutingManagerEngine_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QGeoRoutingManagerEngine_CustomEvent(QGeoRoutingManagerEngine* self, QEvent* event) {
    auto* vqgeoroutingmanagerengine = dynamic_cast<VirtualQGeoRoutingManagerEngine*>(self);
    if (vqgeoroutingmanagerengine) {
        vqgeoroutingmanagerengine->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGeoRoutingManagerEngine::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGeoRoutingManagerEngine_SuperCustomEvent(QGeoRoutingManagerEngine* self, QEvent* event) {
    if (auto* vqgeoroutingmanagerengine = dynamic_cast<VirtualQGeoRoutingManagerEngine*>(self)) {
        vqgeoroutingmanagerengine->QGeoRoutingManagerEngine::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QGeoRoutingManagerEngine::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGeoRoutingManagerEngine_OnCustomEvent(QGeoRoutingManagerEngine* self, intptr_t slot) {
    if (auto* vqgeoroutingmanagerengine = dynamic_cast<VirtualQGeoRoutingManagerEngine*>(self))
        vqgeoroutingmanagerengine->qgeoroutingmanagerengine_customevent_callback = reinterpret_cast<VirtualQGeoRoutingManagerEngine::QGeoRoutingManagerEngine_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QGeoRoutingManagerEngine_ConnectNotify(QGeoRoutingManagerEngine* self, const QMetaMethod* signal) {
    auto* vqgeoroutingmanagerengine = dynamic_cast<VirtualQGeoRoutingManagerEngine*>(self);
    if (vqgeoroutingmanagerengine) {
        vqgeoroutingmanagerengine->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QGeoRoutingManagerEngine::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QGeoRoutingManagerEngine_SuperConnectNotify(QGeoRoutingManagerEngine* self, const QMetaMethod* signal) {
    if (auto* vqgeoroutingmanagerengine = dynamic_cast<VirtualQGeoRoutingManagerEngine*>(self)) {
        vqgeoroutingmanagerengine->QGeoRoutingManagerEngine::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QGeoRoutingManagerEngine::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGeoRoutingManagerEngine_OnConnectNotify(QGeoRoutingManagerEngine* self, intptr_t slot) {
    if (auto* vqgeoroutingmanagerengine = dynamic_cast<VirtualQGeoRoutingManagerEngine*>(self))
        vqgeoroutingmanagerengine->qgeoroutingmanagerengine_connectnotify_callback = reinterpret_cast<VirtualQGeoRoutingManagerEngine::QGeoRoutingManagerEngine_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QGeoRoutingManagerEngine_DisconnectNotify(QGeoRoutingManagerEngine* self, const QMetaMethod* signal) {
    auto* vqgeoroutingmanagerengine = dynamic_cast<VirtualQGeoRoutingManagerEngine*>(self);
    if (vqgeoroutingmanagerengine) {
        vqgeoroutingmanagerengine->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QGeoRoutingManagerEngine::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QGeoRoutingManagerEngine_SuperDisconnectNotify(QGeoRoutingManagerEngine* self, const QMetaMethod* signal) {
    if (auto* vqgeoroutingmanagerengine = dynamic_cast<VirtualQGeoRoutingManagerEngine*>(self)) {
        vqgeoroutingmanagerengine->QGeoRoutingManagerEngine::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QGeoRoutingManagerEngine::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGeoRoutingManagerEngine_OnDisconnectNotify(QGeoRoutingManagerEngine* self, intptr_t slot) {
    if (auto* vqgeoroutingmanagerengine = dynamic_cast<VirtualQGeoRoutingManagerEngine*>(self))
        vqgeoroutingmanagerengine->qgeoroutingmanagerengine_disconnectnotify_callback = reinterpret_cast<VirtualQGeoRoutingManagerEngine::QGeoRoutingManagerEngine_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void QGeoRoutingManagerEngine_SetSupportedTravelModes(QGeoRoutingManagerEngine* self, int travelModes) {
    if (auto* vqgeoroutingmanagerengine = dynamic_cast<VirtualQGeoRoutingManagerEngine*>(self)) {
        vqgeoroutingmanagerengine->VirtualQGeoRoutingManagerEngine::setSupportedTravelModes(static_cast<QGeoRouteRequest::TravelModes>(travelModes));
    } else
        qFatal("Error: Protected method QGeoRoutingManagerEngine::setSupportedTravelModes called without a directly constructed type");
}

// Derived class protected handler implementation
void QGeoRoutingManagerEngine_SetSupportedFeatureTypes(QGeoRoutingManagerEngine* self, int featureTypes) {
    if (auto* vqgeoroutingmanagerengine = dynamic_cast<VirtualQGeoRoutingManagerEngine*>(self)) {
        vqgeoroutingmanagerengine->VirtualQGeoRoutingManagerEngine::setSupportedFeatureTypes(static_cast<QGeoRouteRequest::FeatureTypes>(featureTypes));
    } else
        qFatal("Error: Protected method QGeoRoutingManagerEngine::setSupportedFeatureTypes called without a directly constructed type");
}

// Derived class protected handler implementation
void QGeoRoutingManagerEngine_SetSupportedFeatureWeights(QGeoRoutingManagerEngine* self, int featureWeights) {
    if (auto* vqgeoroutingmanagerengine = dynamic_cast<VirtualQGeoRoutingManagerEngine*>(self)) {
        vqgeoroutingmanagerengine->VirtualQGeoRoutingManagerEngine::setSupportedFeatureWeights(static_cast<QGeoRouteRequest::FeatureWeights>(featureWeights));
    } else
        qFatal("Error: Protected method QGeoRoutingManagerEngine::setSupportedFeatureWeights called without a directly constructed type");
}

// Derived class protected handler implementation
void QGeoRoutingManagerEngine_SetSupportedRouteOptimizations(QGeoRoutingManagerEngine* self, int optimizations) {
    if (auto* vqgeoroutingmanagerengine = dynamic_cast<VirtualQGeoRoutingManagerEngine*>(self)) {
        vqgeoroutingmanagerengine->VirtualQGeoRoutingManagerEngine::setSupportedRouteOptimizations(static_cast<QGeoRouteRequest::RouteOptimizations>(optimizations));
    } else
        qFatal("Error: Protected method QGeoRoutingManagerEngine::setSupportedRouteOptimizations called without a directly constructed type");
}

// Derived class protected handler implementation
void QGeoRoutingManagerEngine_SetSupportedSegmentDetails(QGeoRoutingManagerEngine* self, int segmentDetails) {
    if (auto* vqgeoroutingmanagerengine = dynamic_cast<VirtualQGeoRoutingManagerEngine*>(self)) {
        vqgeoroutingmanagerengine->VirtualQGeoRoutingManagerEngine::setSupportedSegmentDetails(static_cast<QGeoRouteRequest::SegmentDetails>(segmentDetails));
    } else
        qFatal("Error: Protected method QGeoRoutingManagerEngine::setSupportedSegmentDetails called without a directly constructed type");
}

// Derived class protected handler implementation
void QGeoRoutingManagerEngine_SetSupportedManeuverDetails(QGeoRoutingManagerEngine* self, int maneuverDetails) {
    if (auto* vqgeoroutingmanagerengine = dynamic_cast<VirtualQGeoRoutingManagerEngine*>(self)) {
        vqgeoroutingmanagerengine->VirtualQGeoRoutingManagerEngine::setSupportedManeuverDetails(static_cast<QGeoRouteRequest::ManeuverDetails>(maneuverDetails));
    } else
        qFatal("Error: Protected method QGeoRoutingManagerEngine::setSupportedManeuverDetails called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QGeoRoutingManagerEngine_Sender(const QGeoRoutingManagerEngine* self) {
    if (auto* vqgeoroutingmanagerengine = const_cast<VirtualQGeoRoutingManagerEngine*>(dynamic_cast<const VirtualQGeoRoutingManagerEngine*>(self))) {
        return vqgeoroutingmanagerengine->VirtualQGeoRoutingManagerEngine::sender();
    } else
        qFatal("Error: Protected method QGeoRoutingManagerEngine::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QGeoRoutingManagerEngine_SenderSignalIndex(const QGeoRoutingManagerEngine* self) {
    if (auto* vqgeoroutingmanagerengine = const_cast<VirtualQGeoRoutingManagerEngine*>(dynamic_cast<const VirtualQGeoRoutingManagerEngine*>(self))) {
        return vqgeoroutingmanagerengine->VirtualQGeoRoutingManagerEngine::senderSignalIndex();
    } else
        qFatal("Error: Protected method QGeoRoutingManagerEngine::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QGeoRoutingManagerEngine_Receivers(const QGeoRoutingManagerEngine* self, const char* signal) {
    if (auto* vqgeoroutingmanagerengine = const_cast<VirtualQGeoRoutingManagerEngine*>(dynamic_cast<const VirtualQGeoRoutingManagerEngine*>(self))) {
        return vqgeoroutingmanagerengine->VirtualQGeoRoutingManagerEngine::receivers(signal);
    } else
        qFatal("Error: Protected method QGeoRoutingManagerEngine::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QGeoRoutingManagerEngine_IsSignalConnected(const QGeoRoutingManagerEngine* self, const QMetaMethod* signal) {
    if (auto* vqgeoroutingmanagerengine = const_cast<VirtualQGeoRoutingManagerEngine*>(dynamic_cast<const VirtualQGeoRoutingManagerEngine*>(self))) {
        return vqgeoroutingmanagerengine->VirtualQGeoRoutingManagerEngine::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QGeoRoutingManagerEngine::isSignalConnected called without a directly constructed type");
}

void QGeoRoutingManagerEngine_Delete(QGeoRoutingManagerEngine* self) {
    delete self;
}
