#include <QGeoCoordinate>
#include <QGeoRoute>
#include <QGeoRouteReply>
#include <QGeoRouteRequest>
#include <QGeoRoutingManager>
#include <QLocale>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qgeoroutingmanager.h>
#include "libqgeoroutingmanager.h"
#include "libqgeoroutingmanager.hxx"

QMetaObject* QGeoRoutingManager_MetaObject(const QGeoRoutingManager* self) {
    return (QMetaObject*)self->metaObject();
}

void* QGeoRoutingManager_Metacast(QGeoRoutingManager* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QGeoRoutingManager_Metacall(QGeoRoutingManager* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QGeoRoutingManager_ManagerName(const QGeoRoutingManager* self) {
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

int QGeoRoutingManager_ManagerVersion(const QGeoRoutingManager* self) {
    return self->managerVersion();
}

QGeoRouteReply* QGeoRoutingManager_CalculateRoute(QGeoRoutingManager* self, const QGeoRouteRequest* request) {
    return self->calculateRoute(*request);
}

QGeoRouteReply* QGeoRoutingManager_UpdateRoute(QGeoRoutingManager* self, const QGeoRoute* route, const QGeoCoordinate* position) {
    return self->updateRoute(*route, *position);
}

int QGeoRoutingManager_SupportedTravelModes(const QGeoRoutingManager* self) {
    return static_cast<int>(self->supportedTravelModes());
}

int QGeoRoutingManager_SupportedFeatureTypes(const QGeoRoutingManager* self) {
    return static_cast<int>(self->supportedFeatureTypes());
}

int QGeoRoutingManager_SupportedFeatureWeights(const QGeoRoutingManager* self) {
    return static_cast<int>(self->supportedFeatureWeights());
}

int QGeoRoutingManager_SupportedRouteOptimizations(const QGeoRoutingManager* self) {
    return static_cast<int>(self->supportedRouteOptimizations());
}

int QGeoRoutingManager_SupportedSegmentDetails(const QGeoRoutingManager* self) {
    return static_cast<int>(self->supportedSegmentDetails());
}

int QGeoRoutingManager_SupportedManeuverDetails(const QGeoRoutingManager* self) {
    return static_cast<int>(self->supportedManeuverDetails());
}

void QGeoRoutingManager_SetLocale(QGeoRoutingManager* self, const QLocale* locale) {
    self->setLocale(*locale);
}

QLocale* QGeoRoutingManager_Locale(const QGeoRoutingManager* self) {
    return new QLocale(self->locale());
}

void QGeoRoutingManager_SetMeasurementSystem(QGeoRoutingManager* self, int system) {
    self->setMeasurementSystem(static_cast<QLocale::MeasurementSystem>(system));
}

int QGeoRoutingManager_MeasurementSystem(const QGeoRoutingManager* self) {
    return static_cast<int>(self->measurementSystem());
}

void QGeoRoutingManager_Finished(QGeoRoutingManager* self, QGeoRouteReply* reply) {
    self->finished(reply);
}

void QGeoRoutingManager_Connect_Finished(QGeoRoutingManager* self, intptr_t slot) {
    void (*slotFunc)(QGeoRoutingManager*, QGeoRouteReply*) = reinterpret_cast<void (*)(QGeoRoutingManager*, QGeoRouteReply*)>(slot);
    QGeoRoutingManager::connect(self, &QGeoRoutingManager::finished, [self, slotFunc](QGeoRouteReply* reply) {
        QGeoRouteReply* sigval1 = reply;
        slotFunc(self, sigval1);
    });
}

void QGeoRoutingManager_ErrorOccurred(QGeoRoutingManager* self, QGeoRouteReply* reply, int errorVal) {
    self->errorOccurred(reply, static_cast<QGeoRouteReply::Error>(errorVal));
}

void QGeoRoutingManager_Connect_ErrorOccurred(QGeoRoutingManager* self, intptr_t slot) {
    void (*slotFunc)(QGeoRoutingManager*, QGeoRouteReply*, int) = reinterpret_cast<void (*)(QGeoRoutingManager*, QGeoRouteReply*, int)>(slot);
    QGeoRoutingManager::connect(self, &QGeoRoutingManager::errorOccurred, [self, slotFunc](QGeoRouteReply* reply, QGeoRouteReply::Error errorVal) {
        QGeoRouteReply* sigval1 = reply;
        int sigval2 = static_cast<int>(errorVal);
        slotFunc(self, sigval1, sigval2);
    });
}

void QGeoRoutingManager_ErrorOccurred3(QGeoRoutingManager* self, QGeoRouteReply* reply, int errorVal, const libqt_string errorString) {
    QString errorString_QString = QString::fromUtf8(errorString.data, errorString.len);
    self->errorOccurred(reply, static_cast<QGeoRouteReply::Error>(errorVal), errorString_QString);
}

void QGeoRoutingManager_Connect_ErrorOccurred3(QGeoRoutingManager* self, intptr_t slot) {
    void (*slotFunc)(QGeoRoutingManager*, QGeoRouteReply*, int, const char*) = reinterpret_cast<void (*)(QGeoRoutingManager*, QGeoRouteReply*, int, const char*)>(slot);
    QGeoRoutingManager::connect(self, &QGeoRoutingManager::errorOccurred, [self, slotFunc](QGeoRouteReply* reply, QGeoRouteReply::Error errorVal, const QString& errorString) {
        QGeoRouteReply* sigval1 = reply;
        int sigval2 = static_cast<int>(errorVal);
        const QString errorString_ret = errorString;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray errorString_b = errorString_ret.toUtf8();
        const char* errorString_str = static_cast<const char*>(malloc(errorString_b.length() + 1));
        memcpy((void*)errorString_str, errorString_b.data(), errorString_b.length());
        ((char*)errorString_str)[errorString_b.length()] = '\0';
        const char* sigval3 = errorString_str;
        slotFunc(self, sigval1, sigval2, sigval3);
        libqt_free(errorString_str);
    });
}

void QGeoRoutingManager_Delete(QGeoRoutingManager* self) {
    delete self;
}
