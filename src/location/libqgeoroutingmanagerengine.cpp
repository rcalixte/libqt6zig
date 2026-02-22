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
#include <QByteArray>
#include <cstring>
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
        parameters_QMap[parameters_karr_i_QString] = *(parameters_varr[i]);
    }
    return new VirtualQGeoRoutingManagerEngine(parameters_QMap);
}

QGeoRoutingManagerEngine* QGeoRoutingManagerEngine_new2(const libqt_map /* of libqt_string to QVariant* */ parameters, QObject* parent) {
    QMap<QString, QVariant> parameters_QMap;
    libqt_string* parameters_karr = static_cast<libqt_string*>(parameters.keys);
    QVariant** parameters_varr = static_cast<QVariant**>(parameters.values);
    for (size_t i = 0; i < parameters.len; ++i) {
        QString parameters_karr_i_QString = QString::fromUtf8(parameters_karr[i].data, parameters_karr[i].len);
        parameters_QMap[parameters_karr_i_QString] = *(parameters_varr[i]);
    }
    return new VirtualQGeoRoutingManagerEngine(parameters_QMap, parent);
}

QMetaObject* QGeoRoutingManagerEngine_MetaObject(const QGeoRoutingManagerEngine* self) {
    auto* vqgeoroutingmanagerengine = dynamic_cast<const VirtualQGeoRoutingManagerEngine*>(self);
    if (vqgeoroutingmanagerengine && vqgeoroutingmanagerengine->isVirtualQGeoRoutingManagerEngine) {
        return (QMetaObject*)self->metaObject();
    } else {
        return (QMetaObject*)((VirtualQGeoRoutingManagerEngine*)self)->metaObject();
    }
}

void* QGeoRoutingManagerEngine_Metacast(QGeoRoutingManagerEngine* self, const char* param1) {
    auto* vqgeoroutingmanagerengine = dynamic_cast<VirtualQGeoRoutingManagerEngine*>(self);
    if (vqgeoroutingmanagerengine && vqgeoroutingmanagerengine->isVirtualQGeoRoutingManagerEngine) {
        return self->qt_metacast(param1);
    } else {
        return ((VirtualQGeoRoutingManagerEngine*)self)->qt_metacast(param1);
    }
}

int QGeoRoutingManagerEngine_Metacall(QGeoRoutingManagerEngine* self, int param1, int param2, void** param3) {
    auto* vqgeoroutingmanagerengine = dynamic_cast<VirtualQGeoRoutingManagerEngine*>(self);
    if (vqgeoroutingmanagerengine && vqgeoroutingmanagerengine->isVirtualQGeoRoutingManagerEngine) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQGeoRoutingManagerEngine*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QGeoRoutingManagerEngine_ManagerName(const QGeoRoutingManagerEngine* self) {
    QString _ret = self->managerName();
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
    auto* vqgeoroutingmanagerengine = dynamic_cast<VirtualQGeoRoutingManagerEngine*>(self);
    if (vqgeoroutingmanagerengine && vqgeoroutingmanagerengine->isVirtualQGeoRoutingManagerEngine) {
        return vqgeoroutingmanagerengine->calculateRoute(*request);
    } else {
        return ((VirtualQGeoRoutingManagerEngine*)self)->calculateRoute(*request);
    }
}

QGeoRouteReply* QGeoRoutingManagerEngine_UpdateRoute(QGeoRoutingManagerEngine* self, const QGeoRoute* route, const QGeoCoordinate* position) {
    auto* vqgeoroutingmanagerengine = dynamic_cast<VirtualQGeoRoutingManagerEngine*>(self);
    if (vqgeoroutingmanagerengine && vqgeoroutingmanagerengine->isVirtualQGeoRoutingManagerEngine) {
        return self->updateRoute(*route, *position);
    } else {
        return ((VirtualQGeoRoutingManagerEngine*)self)->updateRoute(*route, *position);
    }
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
    QGeoRoutingManagerEngine::connect(self, &QGeoRoutingManagerEngine::finished, [self, slotFunc](QGeoRouteReply* reply) {
        QGeoRouteReply* sigval1 = reply;
        slotFunc(self, sigval1);
    });
}

void QGeoRoutingManagerEngine_ErrorOccurred(QGeoRoutingManagerEngine* self, QGeoRouteReply* reply, int errorVal) {
    self->errorOccurred(reply, static_cast<QGeoRouteReply::Error>(errorVal));
}

void QGeoRoutingManagerEngine_Connect_ErrorOccurred(QGeoRoutingManagerEngine* self, intptr_t slot) {
    void (*slotFunc)(QGeoRoutingManagerEngine*, QGeoRouteReply*, int) = reinterpret_cast<void (*)(QGeoRoutingManagerEngine*, QGeoRouteReply*, int)>(slot);
    QGeoRoutingManagerEngine::connect(self, &QGeoRoutingManagerEngine::errorOccurred, [self, slotFunc](QGeoRouteReply* reply, QGeoRouteReply::Error errorVal) {
        QGeoRouteReply* sigval1 = reply;
        int sigval2 = static_cast<int>(errorVal);
        slotFunc(self, sigval1, sigval2);
    });
}

void QGeoRoutingManagerEngine_ErrorOccurred3(QGeoRoutingManagerEngine* self, QGeoRouteReply* reply, int errorVal, const libqt_string errorString) {
    QString errorString_QString = QString::fromUtf8(errorString.data, errorString.len);
    self->errorOccurred(reply, static_cast<QGeoRouteReply::Error>(errorVal), errorString_QString);
}

void QGeoRoutingManagerEngine_Connect_ErrorOccurred3(QGeoRoutingManagerEngine* self, intptr_t slot) {
    void (*slotFunc)(QGeoRoutingManagerEngine*, QGeoRouteReply*, int, const char*) = reinterpret_cast<void (*)(QGeoRoutingManagerEngine*, QGeoRouteReply*, int, const char*)>(slot);
    QGeoRoutingManagerEngine::connect(self, &QGeoRoutingManagerEngine::errorOccurred, [self, slotFunc](QGeoRouteReply* reply, QGeoRouteReply::Error errorVal, const QString& errorString) {
        QGeoRouteReply* sigval1 = reply;
        int sigval2 = static_cast<int>(errorVal);
        const QString errorString_ret = errorString;
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
QMetaObject* QGeoRoutingManagerEngine_QBaseMetaObject(const QGeoRoutingManagerEngine* self) {
    auto* vqgeoroutingmanagerengine = const_cast<VirtualQGeoRoutingManagerEngine*>(dynamic_cast<const VirtualQGeoRoutingManagerEngine*>(self));
    if (vqgeoroutingmanagerengine && vqgeoroutingmanagerengine->isVirtualQGeoRoutingManagerEngine) {
        vqgeoroutingmanagerengine->setQGeoRoutingManagerEngine_MetaObject_IsBase(true);
        return (QMetaObject*)vqgeoroutingmanagerengine->metaObject();
    } else {
        return (QMetaObject*)self->QGeoRoutingManagerEngine::metaObject();
    }
}

// Auxiliary method to allow providing re-implementation
void QGeoRoutingManagerEngine_OnMetaObject(const QGeoRoutingManagerEngine* self, intptr_t slot) {
    auto* vqgeoroutingmanagerengine = const_cast<VirtualQGeoRoutingManagerEngine*>(dynamic_cast<const VirtualQGeoRoutingManagerEngine*>(self));
    if (vqgeoroutingmanagerengine && vqgeoroutingmanagerengine->isVirtualQGeoRoutingManagerEngine) {
        vqgeoroutingmanagerengine->setQGeoRoutingManagerEngine_MetaObject_Callback(reinterpret_cast<VirtualQGeoRoutingManagerEngine::QGeoRoutingManagerEngine_MetaObject_Callback>(slot));
    }
}

// Base class handler implementation
void* QGeoRoutingManagerEngine_QBaseMetacast(QGeoRoutingManagerEngine* self, const char* param1) {
    auto* vqgeoroutingmanagerengine = dynamic_cast<VirtualQGeoRoutingManagerEngine*>(self);
    if (vqgeoroutingmanagerengine && vqgeoroutingmanagerengine->isVirtualQGeoRoutingManagerEngine) {
        vqgeoroutingmanagerengine->setQGeoRoutingManagerEngine_Metacast_IsBase(true);
        return vqgeoroutingmanagerengine->qt_metacast(param1);
    } else {
        return self->QGeoRoutingManagerEngine::qt_metacast(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QGeoRoutingManagerEngine_OnMetacast(QGeoRoutingManagerEngine* self, intptr_t slot) {
    auto* vqgeoroutingmanagerengine = dynamic_cast<VirtualQGeoRoutingManagerEngine*>(self);
    if (vqgeoroutingmanagerengine && vqgeoroutingmanagerengine->isVirtualQGeoRoutingManagerEngine) {
        vqgeoroutingmanagerengine->setQGeoRoutingManagerEngine_Metacast_Callback(reinterpret_cast<VirtualQGeoRoutingManagerEngine::QGeoRoutingManagerEngine_Metacast_Callback>(slot));
    }
}

// Base class handler implementation
int QGeoRoutingManagerEngine_QBaseMetacall(QGeoRoutingManagerEngine* self, int param1, int param2, void** param3) {
    auto* vqgeoroutingmanagerengine = dynamic_cast<VirtualQGeoRoutingManagerEngine*>(self);
    if (vqgeoroutingmanagerengine && vqgeoroutingmanagerengine->isVirtualQGeoRoutingManagerEngine) {
        vqgeoroutingmanagerengine->setQGeoRoutingManagerEngine_Metacall_IsBase(true);
        return vqgeoroutingmanagerengine->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->QGeoRoutingManagerEngine::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void QGeoRoutingManagerEngine_OnMetacall(QGeoRoutingManagerEngine* self, intptr_t slot) {
    auto* vqgeoroutingmanagerengine = dynamic_cast<VirtualQGeoRoutingManagerEngine*>(self);
    if (vqgeoroutingmanagerengine && vqgeoroutingmanagerengine->isVirtualQGeoRoutingManagerEngine) {
        vqgeoroutingmanagerengine->setQGeoRoutingManagerEngine_Metacall_Callback(reinterpret_cast<VirtualQGeoRoutingManagerEngine::QGeoRoutingManagerEngine_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
QGeoRouteReply* QGeoRoutingManagerEngine_QBaseCalculateRoute(QGeoRoutingManagerEngine* self, const QGeoRouteRequest* request) {
    auto* vqgeoroutingmanagerengine = dynamic_cast<VirtualQGeoRoutingManagerEngine*>(self);
    if (vqgeoroutingmanagerengine && vqgeoroutingmanagerengine->isVirtualQGeoRoutingManagerEngine) {
        vqgeoroutingmanagerengine->setQGeoRoutingManagerEngine_CalculateRoute_IsBase(true);
        return vqgeoroutingmanagerengine->calculateRoute(*request);
    } else {
        return ((VirtualQGeoRoutingManagerEngine*)self)->calculateRoute(*request);
    }
}

// Auxiliary method to allow providing re-implementation
void QGeoRoutingManagerEngine_OnCalculateRoute(QGeoRoutingManagerEngine* self, intptr_t slot) {
    auto* vqgeoroutingmanagerengine = dynamic_cast<VirtualQGeoRoutingManagerEngine*>(self);
    if (vqgeoroutingmanagerengine && vqgeoroutingmanagerengine->isVirtualQGeoRoutingManagerEngine) {
        vqgeoroutingmanagerengine->setQGeoRoutingManagerEngine_CalculateRoute_Callback(reinterpret_cast<VirtualQGeoRoutingManagerEngine::QGeoRoutingManagerEngine_CalculateRoute_Callback>(slot));
    }
}

// Base class handler implementation
QGeoRouteReply* QGeoRoutingManagerEngine_QBaseUpdateRoute(QGeoRoutingManagerEngine* self, const QGeoRoute* route, const QGeoCoordinate* position) {
    auto* vqgeoroutingmanagerengine = dynamic_cast<VirtualQGeoRoutingManagerEngine*>(self);
    if (vqgeoroutingmanagerengine && vqgeoroutingmanagerengine->isVirtualQGeoRoutingManagerEngine) {
        vqgeoroutingmanagerengine->setQGeoRoutingManagerEngine_UpdateRoute_IsBase(true);
        return vqgeoroutingmanagerengine->updateRoute(*route, *position);
    } else {
        return self->QGeoRoutingManagerEngine::updateRoute(*route, *position);
    }
}

// Auxiliary method to allow providing re-implementation
void QGeoRoutingManagerEngine_OnUpdateRoute(QGeoRoutingManagerEngine* self, intptr_t slot) {
    auto* vqgeoroutingmanagerengine = dynamic_cast<VirtualQGeoRoutingManagerEngine*>(self);
    if (vqgeoroutingmanagerengine && vqgeoroutingmanagerengine->isVirtualQGeoRoutingManagerEngine) {
        vqgeoroutingmanagerengine->setQGeoRoutingManagerEngine_UpdateRoute_Callback(reinterpret_cast<VirtualQGeoRoutingManagerEngine::QGeoRoutingManagerEngine_UpdateRoute_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGeoRoutingManagerEngine_Event(QGeoRoutingManagerEngine* self, QEvent* event) {
    auto* vqgeoroutingmanagerengine = dynamic_cast<VirtualQGeoRoutingManagerEngine*>(self);
    if (vqgeoroutingmanagerengine && vqgeoroutingmanagerengine->isVirtualQGeoRoutingManagerEngine) {
        return vqgeoroutingmanagerengine->event(event);
    } else {
        return self->QGeoRoutingManagerEngine::event(event);
    }
}

// Base class handler implementation
bool QGeoRoutingManagerEngine_QBaseEvent(QGeoRoutingManagerEngine* self, QEvent* event) {
    auto* vqgeoroutingmanagerengine = dynamic_cast<VirtualQGeoRoutingManagerEngine*>(self);
    if (vqgeoroutingmanagerengine && vqgeoroutingmanagerengine->isVirtualQGeoRoutingManagerEngine) {
        vqgeoroutingmanagerengine->setQGeoRoutingManagerEngine_Event_IsBase(true);
        return vqgeoroutingmanagerengine->event(event);
    } else {
        return self->QGeoRoutingManagerEngine::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGeoRoutingManagerEngine_OnEvent(QGeoRoutingManagerEngine* self, intptr_t slot) {
    auto* vqgeoroutingmanagerengine = dynamic_cast<VirtualQGeoRoutingManagerEngine*>(self);
    if (vqgeoroutingmanagerengine && vqgeoroutingmanagerengine->isVirtualQGeoRoutingManagerEngine) {
        vqgeoroutingmanagerengine->setQGeoRoutingManagerEngine_Event_Callback(reinterpret_cast<VirtualQGeoRoutingManagerEngine::QGeoRoutingManagerEngine_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGeoRoutingManagerEngine_EventFilter(QGeoRoutingManagerEngine* self, QObject* watched, QEvent* event) {
    auto* vqgeoroutingmanagerengine = dynamic_cast<VirtualQGeoRoutingManagerEngine*>(self);
    if (vqgeoroutingmanagerengine && vqgeoroutingmanagerengine->isVirtualQGeoRoutingManagerEngine) {
        return vqgeoroutingmanagerengine->eventFilter(watched, event);
    } else {
        return self->QGeoRoutingManagerEngine::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QGeoRoutingManagerEngine_QBaseEventFilter(QGeoRoutingManagerEngine* self, QObject* watched, QEvent* event) {
    auto* vqgeoroutingmanagerengine = dynamic_cast<VirtualQGeoRoutingManagerEngine*>(self);
    if (vqgeoroutingmanagerengine && vqgeoroutingmanagerengine->isVirtualQGeoRoutingManagerEngine) {
        vqgeoroutingmanagerengine->setQGeoRoutingManagerEngine_EventFilter_IsBase(true);
        return vqgeoroutingmanagerengine->eventFilter(watched, event);
    } else {
        return self->QGeoRoutingManagerEngine::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGeoRoutingManagerEngine_OnEventFilter(QGeoRoutingManagerEngine* self, intptr_t slot) {
    auto* vqgeoroutingmanagerengine = dynamic_cast<VirtualQGeoRoutingManagerEngine*>(self);
    if (vqgeoroutingmanagerengine && vqgeoroutingmanagerengine->isVirtualQGeoRoutingManagerEngine) {
        vqgeoroutingmanagerengine->setQGeoRoutingManagerEngine_EventFilter_Callback(reinterpret_cast<VirtualQGeoRoutingManagerEngine::QGeoRoutingManagerEngine_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QGeoRoutingManagerEngine_TimerEvent(QGeoRoutingManagerEngine* self, QTimerEvent* event) {
    auto* vqgeoroutingmanagerengine = dynamic_cast<VirtualQGeoRoutingManagerEngine*>(self);
    if (vqgeoroutingmanagerengine && vqgeoroutingmanagerengine->isVirtualQGeoRoutingManagerEngine) {
        vqgeoroutingmanagerengine->timerEvent(event);
    } else {
        ((VirtualQGeoRoutingManagerEngine*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QGeoRoutingManagerEngine_QBaseTimerEvent(QGeoRoutingManagerEngine* self, QTimerEvent* event) {
    auto* vqgeoroutingmanagerengine = dynamic_cast<VirtualQGeoRoutingManagerEngine*>(self);
    if (vqgeoroutingmanagerengine && vqgeoroutingmanagerengine->isVirtualQGeoRoutingManagerEngine) {
        vqgeoroutingmanagerengine->setQGeoRoutingManagerEngine_TimerEvent_IsBase(true);
        vqgeoroutingmanagerengine->timerEvent(event);
    } else {
        ((VirtualQGeoRoutingManagerEngine*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGeoRoutingManagerEngine_OnTimerEvent(QGeoRoutingManagerEngine* self, intptr_t slot) {
    auto* vqgeoroutingmanagerengine = dynamic_cast<VirtualQGeoRoutingManagerEngine*>(self);
    if (vqgeoroutingmanagerengine && vqgeoroutingmanagerengine->isVirtualQGeoRoutingManagerEngine) {
        vqgeoroutingmanagerengine->setQGeoRoutingManagerEngine_TimerEvent_Callback(reinterpret_cast<VirtualQGeoRoutingManagerEngine::QGeoRoutingManagerEngine_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGeoRoutingManagerEngine_ChildEvent(QGeoRoutingManagerEngine* self, QChildEvent* event) {
    auto* vqgeoroutingmanagerengine = dynamic_cast<VirtualQGeoRoutingManagerEngine*>(self);
    if (vqgeoroutingmanagerengine && vqgeoroutingmanagerengine->isVirtualQGeoRoutingManagerEngine) {
        vqgeoroutingmanagerengine->childEvent(event);
    } else {
        ((VirtualQGeoRoutingManagerEngine*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QGeoRoutingManagerEngine_QBaseChildEvent(QGeoRoutingManagerEngine* self, QChildEvent* event) {
    auto* vqgeoroutingmanagerengine = dynamic_cast<VirtualQGeoRoutingManagerEngine*>(self);
    if (vqgeoroutingmanagerengine && vqgeoroutingmanagerengine->isVirtualQGeoRoutingManagerEngine) {
        vqgeoroutingmanagerengine->setQGeoRoutingManagerEngine_ChildEvent_IsBase(true);
        vqgeoroutingmanagerengine->childEvent(event);
    } else {
        ((VirtualQGeoRoutingManagerEngine*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGeoRoutingManagerEngine_OnChildEvent(QGeoRoutingManagerEngine* self, intptr_t slot) {
    auto* vqgeoroutingmanagerengine = dynamic_cast<VirtualQGeoRoutingManagerEngine*>(self);
    if (vqgeoroutingmanagerengine && vqgeoroutingmanagerengine->isVirtualQGeoRoutingManagerEngine) {
        vqgeoroutingmanagerengine->setQGeoRoutingManagerEngine_ChildEvent_Callback(reinterpret_cast<VirtualQGeoRoutingManagerEngine::QGeoRoutingManagerEngine_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGeoRoutingManagerEngine_CustomEvent(QGeoRoutingManagerEngine* self, QEvent* event) {
    auto* vqgeoroutingmanagerengine = dynamic_cast<VirtualQGeoRoutingManagerEngine*>(self);
    if (vqgeoroutingmanagerengine && vqgeoroutingmanagerengine->isVirtualQGeoRoutingManagerEngine) {
        vqgeoroutingmanagerengine->customEvent(event);
    } else {
        ((VirtualQGeoRoutingManagerEngine*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QGeoRoutingManagerEngine_QBaseCustomEvent(QGeoRoutingManagerEngine* self, QEvent* event) {
    auto* vqgeoroutingmanagerengine = dynamic_cast<VirtualQGeoRoutingManagerEngine*>(self);
    if (vqgeoroutingmanagerengine && vqgeoroutingmanagerengine->isVirtualQGeoRoutingManagerEngine) {
        vqgeoroutingmanagerengine->setQGeoRoutingManagerEngine_CustomEvent_IsBase(true);
        vqgeoroutingmanagerengine->customEvent(event);
    } else {
        ((VirtualQGeoRoutingManagerEngine*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGeoRoutingManagerEngine_OnCustomEvent(QGeoRoutingManagerEngine* self, intptr_t slot) {
    auto* vqgeoroutingmanagerengine = dynamic_cast<VirtualQGeoRoutingManagerEngine*>(self);
    if (vqgeoroutingmanagerengine && vqgeoroutingmanagerengine->isVirtualQGeoRoutingManagerEngine) {
        vqgeoroutingmanagerengine->setQGeoRoutingManagerEngine_CustomEvent_Callback(reinterpret_cast<VirtualQGeoRoutingManagerEngine::QGeoRoutingManagerEngine_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGeoRoutingManagerEngine_ConnectNotify(QGeoRoutingManagerEngine* self, const QMetaMethod* signal) {
    auto* vqgeoroutingmanagerengine = dynamic_cast<VirtualQGeoRoutingManagerEngine*>(self);
    if (vqgeoroutingmanagerengine && vqgeoroutingmanagerengine->isVirtualQGeoRoutingManagerEngine) {
        vqgeoroutingmanagerengine->connectNotify(*signal);
    } else {
        ((VirtualQGeoRoutingManagerEngine*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QGeoRoutingManagerEngine_QBaseConnectNotify(QGeoRoutingManagerEngine* self, const QMetaMethod* signal) {
    auto* vqgeoroutingmanagerengine = dynamic_cast<VirtualQGeoRoutingManagerEngine*>(self);
    if (vqgeoroutingmanagerengine && vqgeoroutingmanagerengine->isVirtualQGeoRoutingManagerEngine) {
        vqgeoroutingmanagerengine->setQGeoRoutingManagerEngine_ConnectNotify_IsBase(true);
        vqgeoroutingmanagerengine->connectNotify(*signal);
    } else {
        ((VirtualQGeoRoutingManagerEngine*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QGeoRoutingManagerEngine_OnConnectNotify(QGeoRoutingManagerEngine* self, intptr_t slot) {
    auto* vqgeoroutingmanagerengine = dynamic_cast<VirtualQGeoRoutingManagerEngine*>(self);
    if (vqgeoroutingmanagerengine && vqgeoroutingmanagerengine->isVirtualQGeoRoutingManagerEngine) {
        vqgeoroutingmanagerengine->setQGeoRoutingManagerEngine_ConnectNotify_Callback(reinterpret_cast<VirtualQGeoRoutingManagerEngine::QGeoRoutingManagerEngine_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QGeoRoutingManagerEngine_DisconnectNotify(QGeoRoutingManagerEngine* self, const QMetaMethod* signal) {
    auto* vqgeoroutingmanagerengine = dynamic_cast<VirtualQGeoRoutingManagerEngine*>(self);
    if (vqgeoroutingmanagerengine && vqgeoroutingmanagerengine->isVirtualQGeoRoutingManagerEngine) {
        vqgeoroutingmanagerengine->disconnectNotify(*signal);
    } else {
        ((VirtualQGeoRoutingManagerEngine*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QGeoRoutingManagerEngine_QBaseDisconnectNotify(QGeoRoutingManagerEngine* self, const QMetaMethod* signal) {
    auto* vqgeoroutingmanagerengine = dynamic_cast<VirtualQGeoRoutingManagerEngine*>(self);
    if (vqgeoroutingmanagerengine && vqgeoroutingmanagerengine->isVirtualQGeoRoutingManagerEngine) {
        vqgeoroutingmanagerengine->setQGeoRoutingManagerEngine_DisconnectNotify_IsBase(true);
        vqgeoroutingmanagerengine->disconnectNotify(*signal);
    } else {
        ((VirtualQGeoRoutingManagerEngine*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QGeoRoutingManagerEngine_OnDisconnectNotify(QGeoRoutingManagerEngine* self, intptr_t slot) {
    auto* vqgeoroutingmanagerengine = dynamic_cast<VirtualQGeoRoutingManagerEngine*>(self);
    if (vqgeoroutingmanagerengine && vqgeoroutingmanagerengine->isVirtualQGeoRoutingManagerEngine) {
        vqgeoroutingmanagerengine->setQGeoRoutingManagerEngine_DisconnectNotify_Callback(reinterpret_cast<VirtualQGeoRoutingManagerEngine::QGeoRoutingManagerEngine_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QGeoRoutingManagerEngine_SetSupportedTravelModes(QGeoRoutingManagerEngine* self, int travelModes) {
    auto* vqgeoroutingmanagerengine = dynamic_cast<VirtualQGeoRoutingManagerEngine*>(self);
    if (vqgeoroutingmanagerengine && vqgeoroutingmanagerengine->isVirtualQGeoRoutingManagerEngine) {
        vqgeoroutingmanagerengine->setSupportedTravelModes(static_cast<QGeoRouteRequest::TravelModes>(travelModes));
    } else {
        ((VirtualQGeoRoutingManagerEngine*)self)->setSupportedTravelModes(static_cast<QGeoRouteRequest::TravelModes>(travelModes));
    }
}

// Base class handler implementation
void QGeoRoutingManagerEngine_QBaseSetSupportedTravelModes(QGeoRoutingManagerEngine* self, int travelModes) {
    auto* vqgeoroutingmanagerengine = dynamic_cast<VirtualQGeoRoutingManagerEngine*>(self);
    if (vqgeoroutingmanagerengine && vqgeoroutingmanagerengine->isVirtualQGeoRoutingManagerEngine) {
        vqgeoroutingmanagerengine->setQGeoRoutingManagerEngine_SetSupportedTravelModes_IsBase(true);
        vqgeoroutingmanagerengine->setSupportedTravelModes(static_cast<QGeoRouteRequest::TravelModes>(travelModes));
    } else {
        ((VirtualQGeoRoutingManagerEngine*)self)->setSupportedTravelModes(static_cast<QGeoRouteRequest::TravelModes>(travelModes));
    }
}

// Auxiliary method to allow providing re-implementation
void QGeoRoutingManagerEngine_OnSetSupportedTravelModes(QGeoRoutingManagerEngine* self, intptr_t slot) {
    auto* vqgeoroutingmanagerengine = dynamic_cast<VirtualQGeoRoutingManagerEngine*>(self);
    if (vqgeoroutingmanagerengine && vqgeoroutingmanagerengine->isVirtualQGeoRoutingManagerEngine) {
        vqgeoroutingmanagerengine->setQGeoRoutingManagerEngine_SetSupportedTravelModes_Callback(reinterpret_cast<VirtualQGeoRoutingManagerEngine::QGeoRoutingManagerEngine_SetSupportedTravelModes_Callback>(slot));
    }
}

// Derived class handler implementation
void QGeoRoutingManagerEngine_SetSupportedFeatureTypes(QGeoRoutingManagerEngine* self, int featureTypes) {
    auto* vqgeoroutingmanagerengine = dynamic_cast<VirtualQGeoRoutingManagerEngine*>(self);
    if (vqgeoroutingmanagerengine && vqgeoroutingmanagerengine->isVirtualQGeoRoutingManagerEngine) {
        vqgeoroutingmanagerengine->setSupportedFeatureTypes(static_cast<QGeoRouteRequest::FeatureTypes>(featureTypes));
    } else {
        ((VirtualQGeoRoutingManagerEngine*)self)->setSupportedFeatureTypes(static_cast<QGeoRouteRequest::FeatureTypes>(featureTypes));
    }
}

// Base class handler implementation
void QGeoRoutingManagerEngine_QBaseSetSupportedFeatureTypes(QGeoRoutingManagerEngine* self, int featureTypes) {
    auto* vqgeoroutingmanagerengine = dynamic_cast<VirtualQGeoRoutingManagerEngine*>(self);
    if (vqgeoroutingmanagerengine && vqgeoroutingmanagerengine->isVirtualQGeoRoutingManagerEngine) {
        vqgeoroutingmanagerengine->setQGeoRoutingManagerEngine_SetSupportedFeatureTypes_IsBase(true);
        vqgeoroutingmanagerengine->setSupportedFeatureTypes(static_cast<QGeoRouteRequest::FeatureTypes>(featureTypes));
    } else {
        ((VirtualQGeoRoutingManagerEngine*)self)->setSupportedFeatureTypes(static_cast<QGeoRouteRequest::FeatureTypes>(featureTypes));
    }
}

// Auxiliary method to allow providing re-implementation
void QGeoRoutingManagerEngine_OnSetSupportedFeatureTypes(QGeoRoutingManagerEngine* self, intptr_t slot) {
    auto* vqgeoroutingmanagerengine = dynamic_cast<VirtualQGeoRoutingManagerEngine*>(self);
    if (vqgeoroutingmanagerengine && vqgeoroutingmanagerengine->isVirtualQGeoRoutingManagerEngine) {
        vqgeoroutingmanagerengine->setQGeoRoutingManagerEngine_SetSupportedFeatureTypes_Callback(reinterpret_cast<VirtualQGeoRoutingManagerEngine::QGeoRoutingManagerEngine_SetSupportedFeatureTypes_Callback>(slot));
    }
}

// Derived class handler implementation
void QGeoRoutingManagerEngine_SetSupportedFeatureWeights(QGeoRoutingManagerEngine* self, int featureWeights) {
    auto* vqgeoroutingmanagerengine = dynamic_cast<VirtualQGeoRoutingManagerEngine*>(self);
    if (vqgeoroutingmanagerengine && vqgeoroutingmanagerengine->isVirtualQGeoRoutingManagerEngine) {
        vqgeoroutingmanagerengine->setSupportedFeatureWeights(static_cast<QGeoRouteRequest::FeatureWeights>(featureWeights));
    } else {
        ((VirtualQGeoRoutingManagerEngine*)self)->setSupportedFeatureWeights(static_cast<QGeoRouteRequest::FeatureWeights>(featureWeights));
    }
}

// Base class handler implementation
void QGeoRoutingManagerEngine_QBaseSetSupportedFeatureWeights(QGeoRoutingManagerEngine* self, int featureWeights) {
    auto* vqgeoroutingmanagerengine = dynamic_cast<VirtualQGeoRoutingManagerEngine*>(self);
    if (vqgeoroutingmanagerengine && vqgeoroutingmanagerengine->isVirtualQGeoRoutingManagerEngine) {
        vqgeoroutingmanagerengine->setQGeoRoutingManagerEngine_SetSupportedFeatureWeights_IsBase(true);
        vqgeoroutingmanagerengine->setSupportedFeatureWeights(static_cast<QGeoRouteRequest::FeatureWeights>(featureWeights));
    } else {
        ((VirtualQGeoRoutingManagerEngine*)self)->setSupportedFeatureWeights(static_cast<QGeoRouteRequest::FeatureWeights>(featureWeights));
    }
}

// Auxiliary method to allow providing re-implementation
void QGeoRoutingManagerEngine_OnSetSupportedFeatureWeights(QGeoRoutingManagerEngine* self, intptr_t slot) {
    auto* vqgeoroutingmanagerengine = dynamic_cast<VirtualQGeoRoutingManagerEngine*>(self);
    if (vqgeoroutingmanagerengine && vqgeoroutingmanagerengine->isVirtualQGeoRoutingManagerEngine) {
        vqgeoroutingmanagerengine->setQGeoRoutingManagerEngine_SetSupportedFeatureWeights_Callback(reinterpret_cast<VirtualQGeoRoutingManagerEngine::QGeoRoutingManagerEngine_SetSupportedFeatureWeights_Callback>(slot));
    }
}

// Derived class handler implementation
void QGeoRoutingManagerEngine_SetSupportedRouteOptimizations(QGeoRoutingManagerEngine* self, int optimizations) {
    auto* vqgeoroutingmanagerengine = dynamic_cast<VirtualQGeoRoutingManagerEngine*>(self);
    if (vqgeoroutingmanagerengine && vqgeoroutingmanagerengine->isVirtualQGeoRoutingManagerEngine) {
        vqgeoroutingmanagerengine->setSupportedRouteOptimizations(static_cast<QGeoRouteRequest::RouteOptimizations>(optimizations));
    } else {
        ((VirtualQGeoRoutingManagerEngine*)self)->setSupportedRouteOptimizations(static_cast<QGeoRouteRequest::RouteOptimizations>(optimizations));
    }
}

// Base class handler implementation
void QGeoRoutingManagerEngine_QBaseSetSupportedRouteOptimizations(QGeoRoutingManagerEngine* self, int optimizations) {
    auto* vqgeoroutingmanagerengine = dynamic_cast<VirtualQGeoRoutingManagerEngine*>(self);
    if (vqgeoroutingmanagerengine && vqgeoroutingmanagerengine->isVirtualQGeoRoutingManagerEngine) {
        vqgeoroutingmanagerengine->setQGeoRoutingManagerEngine_SetSupportedRouteOptimizations_IsBase(true);
        vqgeoroutingmanagerengine->setSupportedRouteOptimizations(static_cast<QGeoRouteRequest::RouteOptimizations>(optimizations));
    } else {
        ((VirtualQGeoRoutingManagerEngine*)self)->setSupportedRouteOptimizations(static_cast<QGeoRouteRequest::RouteOptimizations>(optimizations));
    }
}

// Auxiliary method to allow providing re-implementation
void QGeoRoutingManagerEngine_OnSetSupportedRouteOptimizations(QGeoRoutingManagerEngine* self, intptr_t slot) {
    auto* vqgeoroutingmanagerengine = dynamic_cast<VirtualQGeoRoutingManagerEngine*>(self);
    if (vqgeoroutingmanagerengine && vqgeoroutingmanagerengine->isVirtualQGeoRoutingManagerEngine) {
        vqgeoroutingmanagerengine->setQGeoRoutingManagerEngine_SetSupportedRouteOptimizations_Callback(reinterpret_cast<VirtualQGeoRoutingManagerEngine::QGeoRoutingManagerEngine_SetSupportedRouteOptimizations_Callback>(slot));
    }
}

// Derived class handler implementation
void QGeoRoutingManagerEngine_SetSupportedSegmentDetails(QGeoRoutingManagerEngine* self, int segmentDetails) {
    auto* vqgeoroutingmanagerengine = dynamic_cast<VirtualQGeoRoutingManagerEngine*>(self);
    if (vqgeoroutingmanagerengine && vqgeoroutingmanagerengine->isVirtualQGeoRoutingManagerEngine) {
        vqgeoroutingmanagerengine->setSupportedSegmentDetails(static_cast<QGeoRouteRequest::SegmentDetails>(segmentDetails));
    } else {
        ((VirtualQGeoRoutingManagerEngine*)self)->setSupportedSegmentDetails(static_cast<QGeoRouteRequest::SegmentDetails>(segmentDetails));
    }
}

// Base class handler implementation
void QGeoRoutingManagerEngine_QBaseSetSupportedSegmentDetails(QGeoRoutingManagerEngine* self, int segmentDetails) {
    auto* vqgeoroutingmanagerengine = dynamic_cast<VirtualQGeoRoutingManagerEngine*>(self);
    if (vqgeoroutingmanagerengine && vqgeoroutingmanagerengine->isVirtualQGeoRoutingManagerEngine) {
        vqgeoroutingmanagerengine->setQGeoRoutingManagerEngine_SetSupportedSegmentDetails_IsBase(true);
        vqgeoroutingmanagerengine->setSupportedSegmentDetails(static_cast<QGeoRouteRequest::SegmentDetails>(segmentDetails));
    } else {
        ((VirtualQGeoRoutingManagerEngine*)self)->setSupportedSegmentDetails(static_cast<QGeoRouteRequest::SegmentDetails>(segmentDetails));
    }
}

// Auxiliary method to allow providing re-implementation
void QGeoRoutingManagerEngine_OnSetSupportedSegmentDetails(QGeoRoutingManagerEngine* self, intptr_t slot) {
    auto* vqgeoroutingmanagerengine = dynamic_cast<VirtualQGeoRoutingManagerEngine*>(self);
    if (vqgeoroutingmanagerengine && vqgeoroutingmanagerengine->isVirtualQGeoRoutingManagerEngine) {
        vqgeoroutingmanagerengine->setQGeoRoutingManagerEngine_SetSupportedSegmentDetails_Callback(reinterpret_cast<VirtualQGeoRoutingManagerEngine::QGeoRoutingManagerEngine_SetSupportedSegmentDetails_Callback>(slot));
    }
}

// Derived class handler implementation
void QGeoRoutingManagerEngine_SetSupportedManeuverDetails(QGeoRoutingManagerEngine* self, int maneuverDetails) {
    auto* vqgeoroutingmanagerengine = dynamic_cast<VirtualQGeoRoutingManagerEngine*>(self);
    if (vqgeoroutingmanagerengine && vqgeoroutingmanagerengine->isVirtualQGeoRoutingManagerEngine) {
        vqgeoroutingmanagerengine->setSupportedManeuverDetails(static_cast<QGeoRouteRequest::ManeuverDetails>(maneuverDetails));
    } else {
        ((VirtualQGeoRoutingManagerEngine*)self)->setSupportedManeuverDetails(static_cast<QGeoRouteRequest::ManeuverDetails>(maneuverDetails));
    }
}

// Base class handler implementation
void QGeoRoutingManagerEngine_QBaseSetSupportedManeuverDetails(QGeoRoutingManagerEngine* self, int maneuverDetails) {
    auto* vqgeoroutingmanagerengine = dynamic_cast<VirtualQGeoRoutingManagerEngine*>(self);
    if (vqgeoroutingmanagerengine && vqgeoroutingmanagerengine->isVirtualQGeoRoutingManagerEngine) {
        vqgeoroutingmanagerengine->setQGeoRoutingManagerEngine_SetSupportedManeuverDetails_IsBase(true);
        vqgeoroutingmanagerengine->setSupportedManeuverDetails(static_cast<QGeoRouteRequest::ManeuverDetails>(maneuverDetails));
    } else {
        ((VirtualQGeoRoutingManagerEngine*)self)->setSupportedManeuverDetails(static_cast<QGeoRouteRequest::ManeuverDetails>(maneuverDetails));
    }
}

// Auxiliary method to allow providing re-implementation
void QGeoRoutingManagerEngine_OnSetSupportedManeuverDetails(QGeoRoutingManagerEngine* self, intptr_t slot) {
    auto* vqgeoroutingmanagerengine = dynamic_cast<VirtualQGeoRoutingManagerEngine*>(self);
    if (vqgeoroutingmanagerengine && vqgeoroutingmanagerengine->isVirtualQGeoRoutingManagerEngine) {
        vqgeoroutingmanagerengine->setQGeoRoutingManagerEngine_SetSupportedManeuverDetails_Callback(reinterpret_cast<VirtualQGeoRoutingManagerEngine::QGeoRoutingManagerEngine_SetSupportedManeuverDetails_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QGeoRoutingManagerEngine_Sender(const QGeoRoutingManagerEngine* self) {
    auto* vqgeoroutingmanagerengine = const_cast<VirtualQGeoRoutingManagerEngine*>(dynamic_cast<const VirtualQGeoRoutingManagerEngine*>(self));
    if (vqgeoroutingmanagerengine && vqgeoroutingmanagerengine->isVirtualQGeoRoutingManagerEngine) {
        return vqgeoroutingmanagerengine->sender();
    } else {
        return ((VirtualQGeoRoutingManagerEngine*)self)->sender();
    }
}

// Base class handler implementation
QObject* QGeoRoutingManagerEngine_QBaseSender(const QGeoRoutingManagerEngine* self) {
    auto* vqgeoroutingmanagerengine = const_cast<VirtualQGeoRoutingManagerEngine*>(dynamic_cast<const VirtualQGeoRoutingManagerEngine*>(self));
    if (vqgeoroutingmanagerengine && vqgeoroutingmanagerengine->isVirtualQGeoRoutingManagerEngine) {
        vqgeoroutingmanagerengine->setQGeoRoutingManagerEngine_Sender_IsBase(true);
        return vqgeoroutingmanagerengine->sender();
    } else {
        return ((VirtualQGeoRoutingManagerEngine*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QGeoRoutingManagerEngine_OnSender(const QGeoRoutingManagerEngine* self, intptr_t slot) {
    auto* vqgeoroutingmanagerengine = const_cast<VirtualQGeoRoutingManagerEngine*>(dynamic_cast<const VirtualQGeoRoutingManagerEngine*>(self));
    if (vqgeoroutingmanagerengine && vqgeoroutingmanagerengine->isVirtualQGeoRoutingManagerEngine) {
        vqgeoroutingmanagerengine->setQGeoRoutingManagerEngine_Sender_Callback(reinterpret_cast<VirtualQGeoRoutingManagerEngine::QGeoRoutingManagerEngine_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QGeoRoutingManagerEngine_SenderSignalIndex(const QGeoRoutingManagerEngine* self) {
    auto* vqgeoroutingmanagerengine = const_cast<VirtualQGeoRoutingManagerEngine*>(dynamic_cast<const VirtualQGeoRoutingManagerEngine*>(self));
    if (vqgeoroutingmanagerengine && vqgeoroutingmanagerengine->isVirtualQGeoRoutingManagerEngine) {
        return vqgeoroutingmanagerengine->senderSignalIndex();
    } else {
        return ((VirtualQGeoRoutingManagerEngine*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QGeoRoutingManagerEngine_QBaseSenderSignalIndex(const QGeoRoutingManagerEngine* self) {
    auto* vqgeoroutingmanagerengine = const_cast<VirtualQGeoRoutingManagerEngine*>(dynamic_cast<const VirtualQGeoRoutingManagerEngine*>(self));
    if (vqgeoroutingmanagerengine && vqgeoroutingmanagerengine->isVirtualQGeoRoutingManagerEngine) {
        vqgeoroutingmanagerengine->setQGeoRoutingManagerEngine_SenderSignalIndex_IsBase(true);
        return vqgeoroutingmanagerengine->senderSignalIndex();
    } else {
        return ((VirtualQGeoRoutingManagerEngine*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QGeoRoutingManagerEngine_OnSenderSignalIndex(const QGeoRoutingManagerEngine* self, intptr_t slot) {
    auto* vqgeoroutingmanagerengine = const_cast<VirtualQGeoRoutingManagerEngine*>(dynamic_cast<const VirtualQGeoRoutingManagerEngine*>(self));
    if (vqgeoroutingmanagerengine && vqgeoroutingmanagerengine->isVirtualQGeoRoutingManagerEngine) {
        vqgeoroutingmanagerengine->setQGeoRoutingManagerEngine_SenderSignalIndex_Callback(reinterpret_cast<VirtualQGeoRoutingManagerEngine::QGeoRoutingManagerEngine_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QGeoRoutingManagerEngine_Receivers(const QGeoRoutingManagerEngine* self, const char* signal) {
    auto* vqgeoroutingmanagerengine = const_cast<VirtualQGeoRoutingManagerEngine*>(dynamic_cast<const VirtualQGeoRoutingManagerEngine*>(self));
    if (vqgeoroutingmanagerengine && vqgeoroutingmanagerengine->isVirtualQGeoRoutingManagerEngine) {
        return vqgeoroutingmanagerengine->receivers(signal);
    } else {
        return ((VirtualQGeoRoutingManagerEngine*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QGeoRoutingManagerEngine_QBaseReceivers(const QGeoRoutingManagerEngine* self, const char* signal) {
    auto* vqgeoroutingmanagerengine = const_cast<VirtualQGeoRoutingManagerEngine*>(dynamic_cast<const VirtualQGeoRoutingManagerEngine*>(self));
    if (vqgeoroutingmanagerengine && vqgeoroutingmanagerengine->isVirtualQGeoRoutingManagerEngine) {
        vqgeoroutingmanagerengine->setQGeoRoutingManagerEngine_Receivers_IsBase(true);
        return vqgeoroutingmanagerengine->receivers(signal);
    } else {
        return ((VirtualQGeoRoutingManagerEngine*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QGeoRoutingManagerEngine_OnReceivers(const QGeoRoutingManagerEngine* self, intptr_t slot) {
    auto* vqgeoroutingmanagerengine = const_cast<VirtualQGeoRoutingManagerEngine*>(dynamic_cast<const VirtualQGeoRoutingManagerEngine*>(self));
    if (vqgeoroutingmanagerengine && vqgeoroutingmanagerengine->isVirtualQGeoRoutingManagerEngine) {
        vqgeoroutingmanagerengine->setQGeoRoutingManagerEngine_Receivers_Callback(reinterpret_cast<VirtualQGeoRoutingManagerEngine::QGeoRoutingManagerEngine_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGeoRoutingManagerEngine_IsSignalConnected(const QGeoRoutingManagerEngine* self, const QMetaMethod* signal) {
    auto* vqgeoroutingmanagerengine = const_cast<VirtualQGeoRoutingManagerEngine*>(dynamic_cast<const VirtualQGeoRoutingManagerEngine*>(self));
    if (vqgeoroutingmanagerengine && vqgeoroutingmanagerengine->isVirtualQGeoRoutingManagerEngine) {
        return vqgeoroutingmanagerengine->isSignalConnected(*signal);
    } else {
        return ((VirtualQGeoRoutingManagerEngine*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QGeoRoutingManagerEngine_QBaseIsSignalConnected(const QGeoRoutingManagerEngine* self, const QMetaMethod* signal) {
    auto* vqgeoroutingmanagerengine = const_cast<VirtualQGeoRoutingManagerEngine*>(dynamic_cast<const VirtualQGeoRoutingManagerEngine*>(self));
    if (vqgeoroutingmanagerengine && vqgeoroutingmanagerengine->isVirtualQGeoRoutingManagerEngine) {
        vqgeoroutingmanagerengine->setQGeoRoutingManagerEngine_IsSignalConnected_IsBase(true);
        return vqgeoroutingmanagerengine->isSignalConnected(*signal);
    } else {
        return ((VirtualQGeoRoutingManagerEngine*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QGeoRoutingManagerEngine_OnIsSignalConnected(const QGeoRoutingManagerEngine* self, intptr_t slot) {
    auto* vqgeoroutingmanagerengine = const_cast<VirtualQGeoRoutingManagerEngine*>(dynamic_cast<const VirtualQGeoRoutingManagerEngine*>(self));
    if (vqgeoroutingmanagerengine && vqgeoroutingmanagerengine->isVirtualQGeoRoutingManagerEngine) {
        vqgeoroutingmanagerengine->setQGeoRoutingManagerEngine_IsSignalConnected_Callback(reinterpret_cast<VirtualQGeoRoutingManagerEngine::QGeoRoutingManagerEngine_IsSignalConnected_Callback>(slot));
    }
}

void QGeoRoutingManagerEngine_Delete(QGeoRoutingManagerEngine* self) {
    delete self;
}
