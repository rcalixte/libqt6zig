#include <QChildEvent>
#include <QEvent>
#include <QGeoPositionInfo>
#include <QGeoPositionInfoSource>
#include <QIODevice>
#include <QMetaMethod>
#include <QMetaObject>
#include <QNmeaPositionInfoSource>
#include <QObject>
#include <QString>
#include <QTimerEvent>
#include <QVariant>
#include <qnmeapositioninfosource.h>
#include "libqnmeapositioninfosource.h"
#include "libqnmeapositioninfosource.hxx"

QNmeaPositionInfoSource* QNmeaPositionInfoSource_new(int updateMode) {
    return new VirtualQNmeaPositionInfoSource(static_cast<QNmeaPositionInfoSource::UpdateMode>(updateMode));
}

QNmeaPositionInfoSource* QNmeaPositionInfoSource_new2(int updateMode, QObject* parent) {
    return new VirtualQNmeaPositionInfoSource(static_cast<QNmeaPositionInfoSource::UpdateMode>(updateMode), parent);
}

QMetaObject* QNmeaPositionInfoSource_MetaObject(const QNmeaPositionInfoSource* self) {
    return (QMetaObject*)self->metaObject();
}

void* QNmeaPositionInfoSource_Metacast(QNmeaPositionInfoSource* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QNmeaPositionInfoSource_Metacall(QNmeaPositionInfoSource* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QNmeaPositionInfoSource_Tr(const char* s) {
    auto _ret = QNmeaPositionInfoSource::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QNmeaPositionInfoSource_SetUserEquivalentRangeError(QNmeaPositionInfoSource* self, double uere) {
    self->setUserEquivalentRangeError(static_cast<double>(uere));
}

double QNmeaPositionInfoSource_UserEquivalentRangeError(const QNmeaPositionInfoSource* self) {
    return self->userEquivalentRangeError();
}

int QNmeaPositionInfoSource_UpdateMode(const QNmeaPositionInfoSource* self) {
    return static_cast<int>(self->updateMode());
}

void QNmeaPositionInfoSource_SetDevice(QNmeaPositionInfoSource* self, QIODevice* source) {
    self->setDevice(source);
}

QIODevice* QNmeaPositionInfoSource_Device(const QNmeaPositionInfoSource* self) {
    return self->device();
}

void QNmeaPositionInfoSource_SetUpdateInterval(QNmeaPositionInfoSource* self, int msec) {
    self->setUpdateInterval(static_cast<int>(msec));
}

QGeoPositionInfo* QNmeaPositionInfoSource_LastKnownPosition(const QNmeaPositionInfoSource* self, bool fromSatellitePositioningMethodsOnly) {
    return new QGeoPositionInfo(self->lastKnownPosition(fromSatellitePositioningMethodsOnly));
}

int QNmeaPositionInfoSource_SupportedPositioningMethods(const QNmeaPositionInfoSource* self) {
    return static_cast<int>(self->supportedPositioningMethods());
}

int QNmeaPositionInfoSource_MinimumUpdateInterval(const QNmeaPositionInfoSource* self) {
    return self->minimumUpdateInterval();
}

int QNmeaPositionInfoSource_Error(const QNmeaPositionInfoSource* self) {
    return static_cast<int>(self->error());
}

void QNmeaPositionInfoSource_StartUpdates(QNmeaPositionInfoSource* self) {
    self->startUpdates();
}

void QNmeaPositionInfoSource_StopUpdates(QNmeaPositionInfoSource* self) {
    self->stopUpdates();
}

void QNmeaPositionInfoSource_RequestUpdate(QNmeaPositionInfoSource* self, int timeout) {
    self->requestUpdate(static_cast<int>(timeout));
}

bool QNmeaPositionInfoSource_ParsePosInfoFromNmeaData(QNmeaPositionInfoSource* self, const char* data, int size, QGeoPositionInfo* posInfo, bool* hasFix) {
    auto* vqnmeapositioninfosource = dynamic_cast<VirtualQNmeaPositionInfoSource*>(self);
    if (vqnmeapositioninfosource) {
        return vqnmeapositioninfosource->parsePosInfoFromNmeaData(data, static_cast<int>(size), posInfo, hasFix);
    }
    qFatal("Error: Protected method QNmeaPositionInfoSource::parsePosInfoFromNmeaData called without a directly constructed type");
}

libqt_string QNmeaPositionInfoSource_Tr2(const char* s, const char* c) {
    auto _ret = QNmeaPositionInfoSource::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QNmeaPositionInfoSource_Tr3(const char* s, const char* c, int n) {
    auto _ret = QNmeaPositionInfoSource::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

// Base class handler implementation
QMetaObject* QNmeaPositionInfoSource_SuperMetaObject(const QNmeaPositionInfoSource* self) {
    return (QMetaObject*)self->QNmeaPositionInfoSource::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QNmeaPositionInfoSource_OnMetaObject(QNmeaPositionInfoSource* self, intptr_t slot) {
    if (auto* vqnmeapositioninfosource = const_cast<VirtualQNmeaPositionInfoSource*>(dynamic_cast<const VirtualQNmeaPositionInfoSource*>(self)))
        vqnmeapositioninfosource->qnmeapositioninfosource_metaobject_callback = reinterpret_cast<VirtualQNmeaPositionInfoSource::QNmeaPositionInfoSource_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QNmeaPositionInfoSource_SuperMetacast(QNmeaPositionInfoSource* self, const char* param1) {
    return self->QNmeaPositionInfoSource::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QNmeaPositionInfoSource_OnMetacast(QNmeaPositionInfoSource* self, intptr_t slot) {
    if (auto* vqnmeapositioninfosource = dynamic_cast<VirtualQNmeaPositionInfoSource*>(self))
        vqnmeapositioninfosource->qnmeapositioninfosource_metacast_callback = reinterpret_cast<VirtualQNmeaPositionInfoSource::QNmeaPositionInfoSource_Metacast_Callback>(slot);
}

// Base class handler implementation
int QNmeaPositionInfoSource_SuperMetacall(QNmeaPositionInfoSource* self, int param1, int param2, void** param3) {
    return self->QNmeaPositionInfoSource::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QNmeaPositionInfoSource_OnMetacall(QNmeaPositionInfoSource* self, intptr_t slot) {
    if (auto* vqnmeapositioninfosource = dynamic_cast<VirtualQNmeaPositionInfoSource*>(self))
        vqnmeapositioninfosource->qnmeapositioninfosource_metacall_callback = reinterpret_cast<VirtualQNmeaPositionInfoSource::QNmeaPositionInfoSource_Metacall_Callback>(slot);
}

// Base class handler implementation
void QNmeaPositionInfoSource_SuperSetUpdateInterval(QNmeaPositionInfoSource* self, int msec) {
    self->QNmeaPositionInfoSource::setUpdateInterval(static_cast<int>(msec));
}

// Auxiliary method to allow providing re-implementation
void QNmeaPositionInfoSource_OnSetUpdateInterval(QNmeaPositionInfoSource* self, intptr_t slot) {
    if (auto* vqnmeapositioninfosource = dynamic_cast<VirtualQNmeaPositionInfoSource*>(self))
        vqnmeapositioninfosource->qnmeapositioninfosource_setupdateinterval_callback = reinterpret_cast<VirtualQNmeaPositionInfoSource::QNmeaPositionInfoSource_SetUpdateInterval_Callback>(slot);
}

// Base class handler implementation
QGeoPositionInfo* QNmeaPositionInfoSource_SuperLastKnownPosition(const QNmeaPositionInfoSource* self, bool fromSatellitePositioningMethodsOnly) {
    return new QGeoPositionInfo(self->QNmeaPositionInfoSource::lastKnownPosition(fromSatellitePositioningMethodsOnly));
}

// Auxiliary method to allow providing re-implementation
void QNmeaPositionInfoSource_OnLastKnownPosition(QNmeaPositionInfoSource* self, intptr_t slot) {
    if (auto* vqnmeapositioninfosource = const_cast<VirtualQNmeaPositionInfoSource*>(dynamic_cast<const VirtualQNmeaPositionInfoSource*>(self)))
        vqnmeapositioninfosource->qnmeapositioninfosource_lastknownposition_callback = reinterpret_cast<VirtualQNmeaPositionInfoSource::QNmeaPositionInfoSource_LastKnownPosition_Callback>(slot);
}

// Base class handler implementation
int QNmeaPositionInfoSource_SuperSupportedPositioningMethods(const QNmeaPositionInfoSource* self) {
    return static_cast<int>(self->QNmeaPositionInfoSource::supportedPositioningMethods());
}

// Auxiliary method to allow providing re-implementation
void QNmeaPositionInfoSource_OnSupportedPositioningMethods(QNmeaPositionInfoSource* self, intptr_t slot) {
    if (auto* vqnmeapositioninfosource = const_cast<VirtualQNmeaPositionInfoSource*>(dynamic_cast<const VirtualQNmeaPositionInfoSource*>(self)))
        vqnmeapositioninfosource->qnmeapositioninfosource_supportedpositioningmethods_callback = reinterpret_cast<VirtualQNmeaPositionInfoSource::QNmeaPositionInfoSource_SupportedPositioningMethods_Callback>(slot);
}

// Base class handler implementation
int QNmeaPositionInfoSource_SuperMinimumUpdateInterval(const QNmeaPositionInfoSource* self) {
    return self->QNmeaPositionInfoSource::minimumUpdateInterval();
}

// Auxiliary method to allow providing re-implementation
void QNmeaPositionInfoSource_OnMinimumUpdateInterval(QNmeaPositionInfoSource* self, intptr_t slot) {
    if (auto* vqnmeapositioninfosource = const_cast<VirtualQNmeaPositionInfoSource*>(dynamic_cast<const VirtualQNmeaPositionInfoSource*>(self)))
        vqnmeapositioninfosource->qnmeapositioninfosource_minimumupdateinterval_callback = reinterpret_cast<VirtualQNmeaPositionInfoSource::QNmeaPositionInfoSource_MinimumUpdateInterval_Callback>(slot);
}

// Base class handler implementation
int QNmeaPositionInfoSource_SuperError(const QNmeaPositionInfoSource* self) {
    return static_cast<int>(self->QNmeaPositionInfoSource::error());
}

// Auxiliary method to allow providing re-implementation
void QNmeaPositionInfoSource_OnError(QNmeaPositionInfoSource* self, intptr_t slot) {
    if (auto* vqnmeapositioninfosource = const_cast<VirtualQNmeaPositionInfoSource*>(dynamic_cast<const VirtualQNmeaPositionInfoSource*>(self)))
        vqnmeapositioninfosource->qnmeapositioninfosource_error_callback = reinterpret_cast<VirtualQNmeaPositionInfoSource::QNmeaPositionInfoSource_Error_Callback>(slot);
}

// Base class handler implementation
void QNmeaPositionInfoSource_SuperStartUpdates(QNmeaPositionInfoSource* self) {
    self->QNmeaPositionInfoSource::startUpdates();
}

// Auxiliary method to allow providing re-implementation
void QNmeaPositionInfoSource_OnStartUpdates(QNmeaPositionInfoSource* self, intptr_t slot) {
    if (auto* vqnmeapositioninfosource = dynamic_cast<VirtualQNmeaPositionInfoSource*>(self))
        vqnmeapositioninfosource->qnmeapositioninfosource_startupdates_callback = reinterpret_cast<VirtualQNmeaPositionInfoSource::QNmeaPositionInfoSource_StartUpdates_Callback>(slot);
}

// Base class handler implementation
void QNmeaPositionInfoSource_SuperStopUpdates(QNmeaPositionInfoSource* self) {
    self->QNmeaPositionInfoSource::stopUpdates();
}

// Auxiliary method to allow providing re-implementation
void QNmeaPositionInfoSource_OnStopUpdates(QNmeaPositionInfoSource* self, intptr_t slot) {
    if (auto* vqnmeapositioninfosource = dynamic_cast<VirtualQNmeaPositionInfoSource*>(self))
        vqnmeapositioninfosource->qnmeapositioninfosource_stopupdates_callback = reinterpret_cast<VirtualQNmeaPositionInfoSource::QNmeaPositionInfoSource_StopUpdates_Callback>(slot);
}

// Base class handler implementation
void QNmeaPositionInfoSource_SuperRequestUpdate(QNmeaPositionInfoSource* self, int timeout) {
    self->QNmeaPositionInfoSource::requestUpdate(static_cast<int>(timeout));
}

// Auxiliary method to allow providing re-implementation
void QNmeaPositionInfoSource_OnRequestUpdate(QNmeaPositionInfoSource* self, intptr_t slot) {
    if (auto* vqnmeapositioninfosource = dynamic_cast<VirtualQNmeaPositionInfoSource*>(self))
        vqnmeapositioninfosource->qnmeapositioninfosource_requestupdate_callback = reinterpret_cast<VirtualQNmeaPositionInfoSource::QNmeaPositionInfoSource_RequestUpdate_Callback>(slot);
}

// Base class handler implementation
bool QNmeaPositionInfoSource_SuperParsePosInfoFromNmeaData(QNmeaPositionInfoSource* self, const char* data, int size, QGeoPositionInfo* posInfo, bool* hasFix) {
    if (auto* vqnmeapositioninfosource = dynamic_cast<VirtualQNmeaPositionInfoSource*>(self)) {
        return vqnmeapositioninfosource->QNmeaPositionInfoSource::parsePosInfoFromNmeaData(data, static_cast<int>(size), posInfo, hasFix);
    } else
        qFatal("Error: Protected virtual method QNmeaPositionInfoSource::parsePosInfoFromNmeaData called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QNmeaPositionInfoSource_OnParsePosInfoFromNmeaData(QNmeaPositionInfoSource* self, intptr_t slot) {
    if (auto* vqnmeapositioninfosource = dynamic_cast<VirtualQNmeaPositionInfoSource*>(self))
        vqnmeapositioninfosource->qnmeapositioninfosource_parseposinfofromnmeadata_callback = reinterpret_cast<VirtualQNmeaPositionInfoSource::QNmeaPositionInfoSource_ParsePosInfoFromNmeaData_Callback>(slot);
}

// Derived class handler implementation
void QNmeaPositionInfoSource_SetPreferredPositioningMethods(QNmeaPositionInfoSource* self, int methods) {
    self->setPreferredPositioningMethods(static_cast<QGeoPositionInfoSource::PositioningMethods>(methods));
}

// Base class handler implementation
void QNmeaPositionInfoSource_SuperSetPreferredPositioningMethods(QNmeaPositionInfoSource* self, int methods) {
    self->QNmeaPositionInfoSource::setPreferredPositioningMethods(static_cast<QGeoPositionInfoSource::PositioningMethods>(methods));
}

// Auxiliary method to allow providing re-implementation
void QNmeaPositionInfoSource_OnSetPreferredPositioningMethods(QNmeaPositionInfoSource* self, intptr_t slot) {
    if (auto* vqnmeapositioninfosource = dynamic_cast<VirtualQNmeaPositionInfoSource*>(self))
        vqnmeapositioninfosource->qnmeapositioninfosource_setpreferredpositioningmethods_callback = reinterpret_cast<VirtualQNmeaPositionInfoSource::QNmeaPositionInfoSource_SetPreferredPositioningMethods_Callback>(slot);
}

// Derived class handler implementation
bool QNmeaPositionInfoSource_SetBackendProperty(QNmeaPositionInfoSource* self, const libqt_string name, const QVariant* value) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return self->setBackendProperty(name_QString, *value);
}

// Base class handler implementation
bool QNmeaPositionInfoSource_SuperSetBackendProperty(QNmeaPositionInfoSource* self, const libqt_string name, const QVariant* value) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return self->QNmeaPositionInfoSource::setBackendProperty(name_QString, *value);
}

// Auxiliary method to allow providing re-implementation
void QNmeaPositionInfoSource_OnSetBackendProperty(QNmeaPositionInfoSource* self, intptr_t slot) {
    if (auto* vqnmeapositioninfosource = dynamic_cast<VirtualQNmeaPositionInfoSource*>(self))
        vqnmeapositioninfosource->qnmeapositioninfosource_setbackendproperty_callback = reinterpret_cast<VirtualQNmeaPositionInfoSource::QNmeaPositionInfoSource_SetBackendProperty_Callback>(slot);
}

// Derived class handler implementation
QVariant* QNmeaPositionInfoSource_BackendProperty(const QNmeaPositionInfoSource* self, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return new QVariant(self->backendProperty(name_QString));
}

// Base class handler implementation
QVariant* QNmeaPositionInfoSource_SuperBackendProperty(const QNmeaPositionInfoSource* self, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return new QVariant(self->QNmeaPositionInfoSource::backendProperty(name_QString));
}

// Auxiliary method to allow providing re-implementation
void QNmeaPositionInfoSource_OnBackendProperty(QNmeaPositionInfoSource* self, intptr_t slot) {
    if (auto* vqnmeapositioninfosource = const_cast<VirtualQNmeaPositionInfoSource*>(dynamic_cast<const VirtualQNmeaPositionInfoSource*>(self)))
        vqnmeapositioninfosource->qnmeapositioninfosource_backendproperty_callback = reinterpret_cast<VirtualQNmeaPositionInfoSource::QNmeaPositionInfoSource_BackendProperty_Callback>(slot);
}

// Derived class handler implementation
bool QNmeaPositionInfoSource_Event(QNmeaPositionInfoSource* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QNmeaPositionInfoSource_SuperEvent(QNmeaPositionInfoSource* self, QEvent* event) {
    return self->QNmeaPositionInfoSource::event(event);
}

// Auxiliary method to allow providing re-implementation
void QNmeaPositionInfoSource_OnEvent(QNmeaPositionInfoSource* self, intptr_t slot) {
    if (auto* vqnmeapositioninfosource = dynamic_cast<VirtualQNmeaPositionInfoSource*>(self))
        vqnmeapositioninfosource->qnmeapositioninfosource_event_callback = reinterpret_cast<VirtualQNmeaPositionInfoSource::QNmeaPositionInfoSource_Event_Callback>(slot);
}

// Derived class handler implementation
bool QNmeaPositionInfoSource_EventFilter(QNmeaPositionInfoSource* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QNmeaPositionInfoSource_SuperEventFilter(QNmeaPositionInfoSource* self, QObject* watched, QEvent* event) {
    return self->QNmeaPositionInfoSource::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QNmeaPositionInfoSource_OnEventFilter(QNmeaPositionInfoSource* self, intptr_t slot) {
    if (auto* vqnmeapositioninfosource = dynamic_cast<VirtualQNmeaPositionInfoSource*>(self))
        vqnmeapositioninfosource->qnmeapositioninfosource_eventfilter_callback = reinterpret_cast<VirtualQNmeaPositionInfoSource::QNmeaPositionInfoSource_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QNmeaPositionInfoSource_TimerEvent(QNmeaPositionInfoSource* self, QTimerEvent* event) {
    auto* vqnmeapositioninfosource = dynamic_cast<VirtualQNmeaPositionInfoSource*>(self);
    if (vqnmeapositioninfosource) {
        vqnmeapositioninfosource->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QNmeaPositionInfoSource::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QNmeaPositionInfoSource_SuperTimerEvent(QNmeaPositionInfoSource* self, QTimerEvent* event) {
    if (auto* vqnmeapositioninfosource = dynamic_cast<VirtualQNmeaPositionInfoSource*>(self)) {
        vqnmeapositioninfosource->QNmeaPositionInfoSource::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QNmeaPositionInfoSource::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QNmeaPositionInfoSource_OnTimerEvent(QNmeaPositionInfoSource* self, intptr_t slot) {
    if (auto* vqnmeapositioninfosource = dynamic_cast<VirtualQNmeaPositionInfoSource*>(self))
        vqnmeapositioninfosource->qnmeapositioninfosource_timerevent_callback = reinterpret_cast<VirtualQNmeaPositionInfoSource::QNmeaPositionInfoSource_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QNmeaPositionInfoSource_ChildEvent(QNmeaPositionInfoSource* self, QChildEvent* event) {
    auto* vqnmeapositioninfosource = dynamic_cast<VirtualQNmeaPositionInfoSource*>(self);
    if (vqnmeapositioninfosource) {
        vqnmeapositioninfosource->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QNmeaPositionInfoSource::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QNmeaPositionInfoSource_SuperChildEvent(QNmeaPositionInfoSource* self, QChildEvent* event) {
    if (auto* vqnmeapositioninfosource = dynamic_cast<VirtualQNmeaPositionInfoSource*>(self)) {
        vqnmeapositioninfosource->QNmeaPositionInfoSource::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QNmeaPositionInfoSource::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QNmeaPositionInfoSource_OnChildEvent(QNmeaPositionInfoSource* self, intptr_t slot) {
    if (auto* vqnmeapositioninfosource = dynamic_cast<VirtualQNmeaPositionInfoSource*>(self))
        vqnmeapositioninfosource->qnmeapositioninfosource_childevent_callback = reinterpret_cast<VirtualQNmeaPositionInfoSource::QNmeaPositionInfoSource_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QNmeaPositionInfoSource_CustomEvent(QNmeaPositionInfoSource* self, QEvent* event) {
    auto* vqnmeapositioninfosource = dynamic_cast<VirtualQNmeaPositionInfoSource*>(self);
    if (vqnmeapositioninfosource) {
        vqnmeapositioninfosource->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QNmeaPositionInfoSource::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QNmeaPositionInfoSource_SuperCustomEvent(QNmeaPositionInfoSource* self, QEvent* event) {
    if (auto* vqnmeapositioninfosource = dynamic_cast<VirtualQNmeaPositionInfoSource*>(self)) {
        vqnmeapositioninfosource->QNmeaPositionInfoSource::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QNmeaPositionInfoSource::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QNmeaPositionInfoSource_OnCustomEvent(QNmeaPositionInfoSource* self, intptr_t slot) {
    if (auto* vqnmeapositioninfosource = dynamic_cast<VirtualQNmeaPositionInfoSource*>(self))
        vqnmeapositioninfosource->qnmeapositioninfosource_customevent_callback = reinterpret_cast<VirtualQNmeaPositionInfoSource::QNmeaPositionInfoSource_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QNmeaPositionInfoSource_ConnectNotify(QNmeaPositionInfoSource* self, const QMetaMethod* signal) {
    auto* vqnmeapositioninfosource = dynamic_cast<VirtualQNmeaPositionInfoSource*>(self);
    if (vqnmeapositioninfosource) {
        vqnmeapositioninfosource->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QNmeaPositionInfoSource::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QNmeaPositionInfoSource_SuperConnectNotify(QNmeaPositionInfoSource* self, const QMetaMethod* signal) {
    if (auto* vqnmeapositioninfosource = dynamic_cast<VirtualQNmeaPositionInfoSource*>(self)) {
        vqnmeapositioninfosource->QNmeaPositionInfoSource::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QNmeaPositionInfoSource::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QNmeaPositionInfoSource_OnConnectNotify(QNmeaPositionInfoSource* self, intptr_t slot) {
    if (auto* vqnmeapositioninfosource = dynamic_cast<VirtualQNmeaPositionInfoSource*>(self))
        vqnmeapositioninfosource->qnmeapositioninfosource_connectnotify_callback = reinterpret_cast<VirtualQNmeaPositionInfoSource::QNmeaPositionInfoSource_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QNmeaPositionInfoSource_DisconnectNotify(QNmeaPositionInfoSource* self, const QMetaMethod* signal) {
    auto* vqnmeapositioninfosource = dynamic_cast<VirtualQNmeaPositionInfoSource*>(self);
    if (vqnmeapositioninfosource) {
        vqnmeapositioninfosource->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QNmeaPositionInfoSource::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QNmeaPositionInfoSource_SuperDisconnectNotify(QNmeaPositionInfoSource* self, const QMetaMethod* signal) {
    if (auto* vqnmeapositioninfosource = dynamic_cast<VirtualQNmeaPositionInfoSource*>(self)) {
        vqnmeapositioninfosource->QNmeaPositionInfoSource::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QNmeaPositionInfoSource::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QNmeaPositionInfoSource_OnDisconnectNotify(QNmeaPositionInfoSource* self, intptr_t slot) {
    if (auto* vqnmeapositioninfosource = dynamic_cast<VirtualQNmeaPositionInfoSource*>(self))
        vqnmeapositioninfosource->qnmeapositioninfosource_disconnectnotify_callback = reinterpret_cast<VirtualQNmeaPositionInfoSource::QNmeaPositionInfoSource_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
bool QNmeaPositionInfoSource_ParsePosInfoFromNmeaData2(QNmeaPositionInfoSource* self, libqt_string data, QGeoPositionInfo* posInfo, bool* hasFix) {
    if (auto* vqnmeapositioninfosource = dynamic_cast<VirtualQNmeaPositionInfoSource*>(self)) {
        QByteArrayView data_QByteArrayView(data.data, data.len);
        return vqnmeapositioninfosource->VirtualQNmeaPositionInfoSource::parsePosInfoFromNmeaData(data_QByteArrayView, posInfo, hasFix);
    } else
        qFatal("Error: Protected method QNmeaPositionInfoSource::parsePosInfoFromNmeaData2 called without a directly constructed type");
}

// Derived class protected handler implementation
void QNmeaPositionInfoSource_SetError(QNmeaPositionInfoSource* self, int positionError) {
    if (auto* vqnmeapositioninfosource = dynamic_cast<VirtualQNmeaPositionInfoSource*>(self)) {
        vqnmeapositioninfosource->VirtualQNmeaPositionInfoSource::setError(static_cast<QGeoPositionInfoSource::Error>(positionError));
    } else
        qFatal("Error: Protected method QNmeaPositionInfoSource::setError called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QNmeaPositionInfoSource_Sender(const QNmeaPositionInfoSource* self) {
    if (auto* vqnmeapositioninfosource = const_cast<VirtualQNmeaPositionInfoSource*>(dynamic_cast<const VirtualQNmeaPositionInfoSource*>(self))) {
        return vqnmeapositioninfosource->VirtualQNmeaPositionInfoSource::sender();
    } else
        qFatal("Error: Protected method QNmeaPositionInfoSource::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QNmeaPositionInfoSource_SenderSignalIndex(const QNmeaPositionInfoSource* self) {
    if (auto* vqnmeapositioninfosource = const_cast<VirtualQNmeaPositionInfoSource*>(dynamic_cast<const VirtualQNmeaPositionInfoSource*>(self))) {
        return vqnmeapositioninfosource->VirtualQNmeaPositionInfoSource::senderSignalIndex();
    } else
        qFatal("Error: Protected method QNmeaPositionInfoSource::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QNmeaPositionInfoSource_Receivers(const QNmeaPositionInfoSource* self, const char* signal) {
    if (auto* vqnmeapositioninfosource = const_cast<VirtualQNmeaPositionInfoSource*>(dynamic_cast<const VirtualQNmeaPositionInfoSource*>(self))) {
        return vqnmeapositioninfosource->VirtualQNmeaPositionInfoSource::receivers(signal);
    } else
        qFatal("Error: Protected method QNmeaPositionInfoSource::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QNmeaPositionInfoSource_IsSignalConnected(const QNmeaPositionInfoSource* self, const QMetaMethod* signal) {
    if (auto* vqnmeapositioninfosource = const_cast<VirtualQNmeaPositionInfoSource*>(dynamic_cast<const VirtualQNmeaPositionInfoSource*>(self))) {
        return vqnmeapositioninfosource->VirtualQNmeaPositionInfoSource::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QNmeaPositionInfoSource::isSignalConnected called without a directly constructed type");
}

void QNmeaPositionInfoSource_Delete(QNmeaPositionInfoSource* self) {
    delete self;
}
