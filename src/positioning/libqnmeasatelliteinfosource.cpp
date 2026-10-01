#include <QChildEvent>
#include <QEvent>
#include <QGeoSatelliteInfo>
#include <QGeoSatelliteInfoSource>
#include <QIODevice>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QNmeaSatelliteInfoSource>
#include <QObject>
#include <QString>
#include <QTimerEvent>
#include <QVariant>
#include <qnmeasatelliteinfosource.h>
#include "libqnmeasatelliteinfosource.h"
#include "libqnmeasatelliteinfosource.hxx"

QNmeaSatelliteInfoSource* QNmeaSatelliteInfoSource_new(int mode) {
    return new VirtualQNmeaSatelliteInfoSource(static_cast<QNmeaSatelliteInfoSource::UpdateMode>(mode));
}

QNmeaSatelliteInfoSource* QNmeaSatelliteInfoSource_new2(int mode, QObject* parent) {
    return new VirtualQNmeaSatelliteInfoSource(static_cast<QNmeaSatelliteInfoSource::UpdateMode>(mode), parent);
}

QMetaObject* QNmeaSatelliteInfoSource_MetaObject(const QNmeaSatelliteInfoSource* self) {
    return (QMetaObject*)self->metaObject();
}

void* QNmeaSatelliteInfoSource_Metacast(QNmeaSatelliteInfoSource* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QNmeaSatelliteInfoSource_Metacall(QNmeaSatelliteInfoSource* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QNmeaSatelliteInfoSource_Tr(const char* s) {
    auto _ret = QNmeaSatelliteInfoSource::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int QNmeaSatelliteInfoSource_UpdateMode(const QNmeaSatelliteInfoSource* self) {
    return static_cast<int>(self->updateMode());
}

void QNmeaSatelliteInfoSource_SetDevice(QNmeaSatelliteInfoSource* self, QIODevice* source) {
    self->setDevice(source);
}

QIODevice* QNmeaSatelliteInfoSource_Device(const QNmeaSatelliteInfoSource* self) {
    return self->device();
}

void QNmeaSatelliteInfoSource_SetUpdateInterval(QNmeaSatelliteInfoSource* self, int msec) {
    self->setUpdateInterval(static_cast<int>(msec));
}

int QNmeaSatelliteInfoSource_MinimumUpdateInterval(const QNmeaSatelliteInfoSource* self) {
    return self->minimumUpdateInterval();
}

int QNmeaSatelliteInfoSource_Error(const QNmeaSatelliteInfoSource* self) {
    return static_cast<int>(self->error());
}

bool QNmeaSatelliteInfoSource_SetBackendProperty(QNmeaSatelliteInfoSource* self, const libqt_string name, const QVariant* value) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return self->setBackendProperty(name_QString, *value);
}

QVariant* QNmeaSatelliteInfoSource_BackendProperty(const QNmeaSatelliteInfoSource* self, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return new QVariant(self->backendProperty(name_QString));
}

void QNmeaSatelliteInfoSource_StartUpdates(QNmeaSatelliteInfoSource* self) {
    self->startUpdates();
}

void QNmeaSatelliteInfoSource_StopUpdates(QNmeaSatelliteInfoSource* self) {
    self->stopUpdates();
}

void QNmeaSatelliteInfoSource_RequestUpdate(QNmeaSatelliteInfoSource* self, int timeout) {
    self->requestUpdate(static_cast<int>(timeout));
}

int QNmeaSatelliteInfoSource_ParseSatellitesInUseFromNmea(QNmeaSatelliteInfoSource* self, const char* data, int size, libqt_list /* of int */ pnrsInUse) {
    QList<int> pnrsInUse_QList;
    pnrsInUse_QList.reserve(pnrsInUse.len);
    int* pnrsInUse_arr = static_cast<int*>(pnrsInUse.data);
    for (size_t i = 0; i < pnrsInUse.len; ++i) {
        pnrsInUse_QList.push_back(static_cast<int>(pnrsInUse_arr[i]));
    }
    auto* vqnmeasatelliteinfosource = dynamic_cast<VirtualQNmeaSatelliteInfoSource*>(self);
    if (vqnmeasatelliteinfosource) {
        return static_cast<int>(vqnmeasatelliteinfosource->parseSatellitesInUseFromNmea(data, static_cast<int>(size), pnrsInUse_QList));
    }
    qFatal("Error: Protected method QNmeaSatelliteInfoSource::parseSatellitesInUseFromNmea called without a directly constructed type");
}

int QNmeaSatelliteInfoSource_ParseSatelliteInfoFromNmea(QNmeaSatelliteInfoSource* self, const char* data, int size, libqt_list /* of QGeoSatelliteInfo* */ infos, int* system) {
    QList<QGeoSatelliteInfo> infos_QList;
    infos_QList.reserve(infos.len);
    QGeoSatelliteInfo** infos_arr = static_cast<QGeoSatelliteInfo**>(infos.data);
    for (size_t i = 0; i < infos.len; ++i) {
        infos_QList.push_back(*(infos_arr[i]));
    }
    auto* vqnmeasatelliteinfosource = dynamic_cast<VirtualQNmeaSatelliteInfoSource*>(self);
    if (vqnmeasatelliteinfosource) {
        return static_cast<int>(vqnmeasatelliteinfosource->parseSatelliteInfoFromNmea(data, static_cast<int>(size), infos_QList, (QGeoSatelliteInfo::SatelliteSystem&)(*system)));
    }
    qFatal("Error: Protected method QNmeaSatelliteInfoSource::parseSatelliteInfoFromNmea called without a directly constructed type");
}

libqt_string QNmeaSatelliteInfoSource_Tr2(const char* s, const char* c) {
    auto _ret = QNmeaSatelliteInfoSource::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QNmeaSatelliteInfoSource_Tr3(const char* s, const char* c, int n) {
    auto _ret = QNmeaSatelliteInfoSource::tr(s, c, static_cast<int>(n));
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
QMetaObject* QNmeaSatelliteInfoSource_SuperMetaObject(const QNmeaSatelliteInfoSource* self) {
    return (QMetaObject*)self->QNmeaSatelliteInfoSource::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QNmeaSatelliteInfoSource_OnMetaObject(QNmeaSatelliteInfoSource* self, intptr_t slot) {
    if (auto* vqnmeasatelliteinfosource = const_cast<VirtualQNmeaSatelliteInfoSource*>(dynamic_cast<const VirtualQNmeaSatelliteInfoSource*>(self)))
        vqnmeasatelliteinfosource->qnmeasatelliteinfosource_metaobject_callback = reinterpret_cast<VirtualQNmeaSatelliteInfoSource::QNmeaSatelliteInfoSource_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QNmeaSatelliteInfoSource_SuperMetacast(QNmeaSatelliteInfoSource* self, const char* param1) {
    return self->QNmeaSatelliteInfoSource::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QNmeaSatelliteInfoSource_OnMetacast(QNmeaSatelliteInfoSource* self, intptr_t slot) {
    if (auto* vqnmeasatelliteinfosource = dynamic_cast<VirtualQNmeaSatelliteInfoSource*>(self))
        vqnmeasatelliteinfosource->qnmeasatelliteinfosource_metacast_callback = reinterpret_cast<VirtualQNmeaSatelliteInfoSource::QNmeaSatelliteInfoSource_Metacast_Callback>(slot);
}

// Base class handler implementation
int QNmeaSatelliteInfoSource_SuperMetacall(QNmeaSatelliteInfoSource* self, int param1, int param2, void** param3) {
    return self->QNmeaSatelliteInfoSource::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QNmeaSatelliteInfoSource_OnMetacall(QNmeaSatelliteInfoSource* self, intptr_t slot) {
    if (auto* vqnmeasatelliteinfosource = dynamic_cast<VirtualQNmeaSatelliteInfoSource*>(self))
        vqnmeasatelliteinfosource->qnmeasatelliteinfosource_metacall_callback = reinterpret_cast<VirtualQNmeaSatelliteInfoSource::QNmeaSatelliteInfoSource_Metacall_Callback>(slot);
}

// Base class handler implementation
void QNmeaSatelliteInfoSource_SuperSetUpdateInterval(QNmeaSatelliteInfoSource* self, int msec) {
    self->QNmeaSatelliteInfoSource::setUpdateInterval(static_cast<int>(msec));
}

// Auxiliary method to allow providing re-implementation
void QNmeaSatelliteInfoSource_OnSetUpdateInterval(QNmeaSatelliteInfoSource* self, intptr_t slot) {
    if (auto* vqnmeasatelliteinfosource = dynamic_cast<VirtualQNmeaSatelliteInfoSource*>(self))
        vqnmeasatelliteinfosource->qnmeasatelliteinfosource_setupdateinterval_callback = reinterpret_cast<VirtualQNmeaSatelliteInfoSource::QNmeaSatelliteInfoSource_SetUpdateInterval_Callback>(slot);
}

// Base class handler implementation
int QNmeaSatelliteInfoSource_SuperMinimumUpdateInterval(const QNmeaSatelliteInfoSource* self) {
    return self->QNmeaSatelliteInfoSource::minimumUpdateInterval();
}

// Auxiliary method to allow providing re-implementation
void QNmeaSatelliteInfoSource_OnMinimumUpdateInterval(QNmeaSatelliteInfoSource* self, intptr_t slot) {
    if (auto* vqnmeasatelliteinfosource = const_cast<VirtualQNmeaSatelliteInfoSource*>(dynamic_cast<const VirtualQNmeaSatelliteInfoSource*>(self)))
        vqnmeasatelliteinfosource->qnmeasatelliteinfosource_minimumupdateinterval_callback = reinterpret_cast<VirtualQNmeaSatelliteInfoSource::QNmeaSatelliteInfoSource_MinimumUpdateInterval_Callback>(slot);
}

// Base class handler implementation
int QNmeaSatelliteInfoSource_SuperError(const QNmeaSatelliteInfoSource* self) {
    return static_cast<int>(self->QNmeaSatelliteInfoSource::error());
}

// Auxiliary method to allow providing re-implementation
void QNmeaSatelliteInfoSource_OnError(QNmeaSatelliteInfoSource* self, intptr_t slot) {
    if (auto* vqnmeasatelliteinfosource = const_cast<VirtualQNmeaSatelliteInfoSource*>(dynamic_cast<const VirtualQNmeaSatelliteInfoSource*>(self)))
        vqnmeasatelliteinfosource->qnmeasatelliteinfosource_error_callback = reinterpret_cast<VirtualQNmeaSatelliteInfoSource::QNmeaSatelliteInfoSource_Error_Callback>(slot);
}

// Base class handler implementation
bool QNmeaSatelliteInfoSource_SuperSetBackendProperty(QNmeaSatelliteInfoSource* self, const libqt_string name, const QVariant* value) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return self->QNmeaSatelliteInfoSource::setBackendProperty(name_QString, *value);
}

// Auxiliary method to allow providing re-implementation
void QNmeaSatelliteInfoSource_OnSetBackendProperty(QNmeaSatelliteInfoSource* self, intptr_t slot) {
    if (auto* vqnmeasatelliteinfosource = dynamic_cast<VirtualQNmeaSatelliteInfoSource*>(self))
        vqnmeasatelliteinfosource->qnmeasatelliteinfosource_setbackendproperty_callback = reinterpret_cast<VirtualQNmeaSatelliteInfoSource::QNmeaSatelliteInfoSource_SetBackendProperty_Callback>(slot);
}

// Base class handler implementation
QVariant* QNmeaSatelliteInfoSource_SuperBackendProperty(const QNmeaSatelliteInfoSource* self, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return new QVariant(self->QNmeaSatelliteInfoSource::backendProperty(name_QString));
}

// Auxiliary method to allow providing re-implementation
void QNmeaSatelliteInfoSource_OnBackendProperty(QNmeaSatelliteInfoSource* self, intptr_t slot) {
    if (auto* vqnmeasatelliteinfosource = const_cast<VirtualQNmeaSatelliteInfoSource*>(dynamic_cast<const VirtualQNmeaSatelliteInfoSource*>(self)))
        vqnmeasatelliteinfosource->qnmeasatelliteinfosource_backendproperty_callback = reinterpret_cast<VirtualQNmeaSatelliteInfoSource::QNmeaSatelliteInfoSource_BackendProperty_Callback>(slot);
}

// Base class handler implementation
void QNmeaSatelliteInfoSource_SuperStartUpdates(QNmeaSatelliteInfoSource* self) {
    self->QNmeaSatelliteInfoSource::startUpdates();
}

// Auxiliary method to allow providing re-implementation
void QNmeaSatelliteInfoSource_OnStartUpdates(QNmeaSatelliteInfoSource* self, intptr_t slot) {
    if (auto* vqnmeasatelliteinfosource = dynamic_cast<VirtualQNmeaSatelliteInfoSource*>(self))
        vqnmeasatelliteinfosource->qnmeasatelliteinfosource_startupdates_callback = reinterpret_cast<VirtualQNmeaSatelliteInfoSource::QNmeaSatelliteInfoSource_StartUpdates_Callback>(slot);
}

// Base class handler implementation
void QNmeaSatelliteInfoSource_SuperStopUpdates(QNmeaSatelliteInfoSource* self) {
    self->QNmeaSatelliteInfoSource::stopUpdates();
}

// Auxiliary method to allow providing re-implementation
void QNmeaSatelliteInfoSource_OnStopUpdates(QNmeaSatelliteInfoSource* self, intptr_t slot) {
    if (auto* vqnmeasatelliteinfosource = dynamic_cast<VirtualQNmeaSatelliteInfoSource*>(self))
        vqnmeasatelliteinfosource->qnmeasatelliteinfosource_stopupdates_callback = reinterpret_cast<VirtualQNmeaSatelliteInfoSource::QNmeaSatelliteInfoSource_StopUpdates_Callback>(slot);
}

// Base class handler implementation
void QNmeaSatelliteInfoSource_SuperRequestUpdate(QNmeaSatelliteInfoSource* self, int timeout) {
    self->QNmeaSatelliteInfoSource::requestUpdate(static_cast<int>(timeout));
}

// Auxiliary method to allow providing re-implementation
void QNmeaSatelliteInfoSource_OnRequestUpdate(QNmeaSatelliteInfoSource* self, intptr_t slot) {
    if (auto* vqnmeasatelliteinfosource = dynamic_cast<VirtualQNmeaSatelliteInfoSource*>(self))
        vqnmeasatelliteinfosource->qnmeasatelliteinfosource_requestupdate_callback = reinterpret_cast<VirtualQNmeaSatelliteInfoSource::QNmeaSatelliteInfoSource_RequestUpdate_Callback>(slot);
}

// Base class handler implementation
int QNmeaSatelliteInfoSource_SuperParseSatellitesInUseFromNmea(QNmeaSatelliteInfoSource* self, const char* data, int size, libqt_list /* of int */ pnrsInUse) {
    QList<int> pnrsInUse_QList;
    pnrsInUse_QList.reserve(pnrsInUse.len);
    int* pnrsInUse_arr = static_cast<int*>(pnrsInUse.data);
    for (size_t i = 0; i < pnrsInUse.len; ++i) {
        pnrsInUse_QList.push_back(static_cast<int>(pnrsInUse_arr[i]));
    }
    if (auto* vqnmeasatelliteinfosource = dynamic_cast<VirtualQNmeaSatelliteInfoSource*>(self)) {
        return static_cast<int>(vqnmeasatelliteinfosource->QNmeaSatelliteInfoSource::parseSatellitesInUseFromNmea(data, static_cast<int>(size), pnrsInUse_QList));
    } else
        qFatal("Error: Protected virtual method QNmeaSatelliteInfoSource::parseSatellitesInUseFromNmea called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QNmeaSatelliteInfoSource_OnParseSatellitesInUseFromNmea(QNmeaSatelliteInfoSource* self, intptr_t slot) {
    if (auto* vqnmeasatelliteinfosource = dynamic_cast<VirtualQNmeaSatelliteInfoSource*>(self))
        vqnmeasatelliteinfosource->qnmeasatelliteinfosource_parsesatellitesinusefromnmea_callback = reinterpret_cast<VirtualQNmeaSatelliteInfoSource::QNmeaSatelliteInfoSource_ParseSatellitesInUseFromNmea_Callback>(slot);
}

// Base class handler implementation
int QNmeaSatelliteInfoSource_SuperParseSatelliteInfoFromNmea(QNmeaSatelliteInfoSource* self, const char* data, int size, libqt_list /* of QGeoSatelliteInfo* */ infos, int* system) {
    QList<QGeoSatelliteInfo> infos_QList;
    infos_QList.reserve(infos.len);
    QGeoSatelliteInfo** infos_arr = static_cast<QGeoSatelliteInfo**>(infos.data);
    for (size_t i = 0; i < infos.len; ++i) {
        infos_QList.push_back(*(infos_arr[i]));
    }
    if (auto* vqnmeasatelliteinfosource = dynamic_cast<VirtualQNmeaSatelliteInfoSource*>(self)) {
        return static_cast<int>(vqnmeasatelliteinfosource->QNmeaSatelliteInfoSource::parseSatelliteInfoFromNmea(data, static_cast<int>(size), infos_QList, (QGeoSatelliteInfo::SatelliteSystem&)(*system)));
    } else
        qFatal("Error: Protected virtual method QNmeaSatelliteInfoSource::parseSatelliteInfoFromNmea called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QNmeaSatelliteInfoSource_OnParseSatelliteInfoFromNmea(QNmeaSatelliteInfoSource* self, intptr_t slot) {
    if (auto* vqnmeasatelliteinfosource = dynamic_cast<VirtualQNmeaSatelliteInfoSource*>(self))
        vqnmeasatelliteinfosource->qnmeasatelliteinfosource_parsesatelliteinfofromnmea_callback = reinterpret_cast<VirtualQNmeaSatelliteInfoSource::QNmeaSatelliteInfoSource_ParseSatelliteInfoFromNmea_Callback>(slot);
}

// Derived class handler implementation
bool QNmeaSatelliteInfoSource_Event(QNmeaSatelliteInfoSource* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QNmeaSatelliteInfoSource_SuperEvent(QNmeaSatelliteInfoSource* self, QEvent* event) {
    return self->QNmeaSatelliteInfoSource::event(event);
}

// Auxiliary method to allow providing re-implementation
void QNmeaSatelliteInfoSource_OnEvent(QNmeaSatelliteInfoSource* self, intptr_t slot) {
    if (auto* vqnmeasatelliteinfosource = dynamic_cast<VirtualQNmeaSatelliteInfoSource*>(self))
        vqnmeasatelliteinfosource->qnmeasatelliteinfosource_event_callback = reinterpret_cast<VirtualQNmeaSatelliteInfoSource::QNmeaSatelliteInfoSource_Event_Callback>(slot);
}

// Derived class handler implementation
bool QNmeaSatelliteInfoSource_EventFilter(QNmeaSatelliteInfoSource* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QNmeaSatelliteInfoSource_SuperEventFilter(QNmeaSatelliteInfoSource* self, QObject* watched, QEvent* event) {
    return self->QNmeaSatelliteInfoSource::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QNmeaSatelliteInfoSource_OnEventFilter(QNmeaSatelliteInfoSource* self, intptr_t slot) {
    if (auto* vqnmeasatelliteinfosource = dynamic_cast<VirtualQNmeaSatelliteInfoSource*>(self))
        vqnmeasatelliteinfosource->qnmeasatelliteinfosource_eventfilter_callback = reinterpret_cast<VirtualQNmeaSatelliteInfoSource::QNmeaSatelliteInfoSource_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QNmeaSatelliteInfoSource_TimerEvent(QNmeaSatelliteInfoSource* self, QTimerEvent* event) {
    auto* vqnmeasatelliteinfosource = dynamic_cast<VirtualQNmeaSatelliteInfoSource*>(self);
    if (vqnmeasatelliteinfosource) {
        vqnmeasatelliteinfosource->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QNmeaSatelliteInfoSource::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QNmeaSatelliteInfoSource_SuperTimerEvent(QNmeaSatelliteInfoSource* self, QTimerEvent* event) {
    if (auto* vqnmeasatelliteinfosource = dynamic_cast<VirtualQNmeaSatelliteInfoSource*>(self)) {
        vqnmeasatelliteinfosource->QNmeaSatelliteInfoSource::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QNmeaSatelliteInfoSource::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QNmeaSatelliteInfoSource_OnTimerEvent(QNmeaSatelliteInfoSource* self, intptr_t slot) {
    if (auto* vqnmeasatelliteinfosource = dynamic_cast<VirtualQNmeaSatelliteInfoSource*>(self))
        vqnmeasatelliteinfosource->qnmeasatelliteinfosource_timerevent_callback = reinterpret_cast<VirtualQNmeaSatelliteInfoSource::QNmeaSatelliteInfoSource_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QNmeaSatelliteInfoSource_ChildEvent(QNmeaSatelliteInfoSource* self, QChildEvent* event) {
    auto* vqnmeasatelliteinfosource = dynamic_cast<VirtualQNmeaSatelliteInfoSource*>(self);
    if (vqnmeasatelliteinfosource) {
        vqnmeasatelliteinfosource->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QNmeaSatelliteInfoSource::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QNmeaSatelliteInfoSource_SuperChildEvent(QNmeaSatelliteInfoSource* self, QChildEvent* event) {
    if (auto* vqnmeasatelliteinfosource = dynamic_cast<VirtualQNmeaSatelliteInfoSource*>(self)) {
        vqnmeasatelliteinfosource->QNmeaSatelliteInfoSource::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QNmeaSatelliteInfoSource::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QNmeaSatelliteInfoSource_OnChildEvent(QNmeaSatelliteInfoSource* self, intptr_t slot) {
    if (auto* vqnmeasatelliteinfosource = dynamic_cast<VirtualQNmeaSatelliteInfoSource*>(self))
        vqnmeasatelliteinfosource->qnmeasatelliteinfosource_childevent_callback = reinterpret_cast<VirtualQNmeaSatelliteInfoSource::QNmeaSatelliteInfoSource_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QNmeaSatelliteInfoSource_CustomEvent(QNmeaSatelliteInfoSource* self, QEvent* event) {
    auto* vqnmeasatelliteinfosource = dynamic_cast<VirtualQNmeaSatelliteInfoSource*>(self);
    if (vqnmeasatelliteinfosource) {
        vqnmeasatelliteinfosource->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QNmeaSatelliteInfoSource::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QNmeaSatelliteInfoSource_SuperCustomEvent(QNmeaSatelliteInfoSource* self, QEvent* event) {
    if (auto* vqnmeasatelliteinfosource = dynamic_cast<VirtualQNmeaSatelliteInfoSource*>(self)) {
        vqnmeasatelliteinfosource->QNmeaSatelliteInfoSource::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QNmeaSatelliteInfoSource::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QNmeaSatelliteInfoSource_OnCustomEvent(QNmeaSatelliteInfoSource* self, intptr_t slot) {
    if (auto* vqnmeasatelliteinfosource = dynamic_cast<VirtualQNmeaSatelliteInfoSource*>(self))
        vqnmeasatelliteinfosource->qnmeasatelliteinfosource_customevent_callback = reinterpret_cast<VirtualQNmeaSatelliteInfoSource::QNmeaSatelliteInfoSource_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QNmeaSatelliteInfoSource_ConnectNotify(QNmeaSatelliteInfoSource* self, const QMetaMethod* signal) {
    auto* vqnmeasatelliteinfosource = dynamic_cast<VirtualQNmeaSatelliteInfoSource*>(self);
    if (vqnmeasatelliteinfosource) {
        vqnmeasatelliteinfosource->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QNmeaSatelliteInfoSource::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QNmeaSatelliteInfoSource_SuperConnectNotify(QNmeaSatelliteInfoSource* self, const QMetaMethod* signal) {
    if (auto* vqnmeasatelliteinfosource = dynamic_cast<VirtualQNmeaSatelliteInfoSource*>(self)) {
        vqnmeasatelliteinfosource->QNmeaSatelliteInfoSource::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QNmeaSatelliteInfoSource::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QNmeaSatelliteInfoSource_OnConnectNotify(QNmeaSatelliteInfoSource* self, intptr_t slot) {
    if (auto* vqnmeasatelliteinfosource = dynamic_cast<VirtualQNmeaSatelliteInfoSource*>(self))
        vqnmeasatelliteinfosource->qnmeasatelliteinfosource_connectnotify_callback = reinterpret_cast<VirtualQNmeaSatelliteInfoSource::QNmeaSatelliteInfoSource_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QNmeaSatelliteInfoSource_DisconnectNotify(QNmeaSatelliteInfoSource* self, const QMetaMethod* signal) {
    auto* vqnmeasatelliteinfosource = dynamic_cast<VirtualQNmeaSatelliteInfoSource*>(self);
    if (vqnmeasatelliteinfosource) {
        vqnmeasatelliteinfosource->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QNmeaSatelliteInfoSource::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QNmeaSatelliteInfoSource_SuperDisconnectNotify(QNmeaSatelliteInfoSource* self, const QMetaMethod* signal) {
    if (auto* vqnmeasatelliteinfosource = dynamic_cast<VirtualQNmeaSatelliteInfoSource*>(self)) {
        vqnmeasatelliteinfosource->QNmeaSatelliteInfoSource::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QNmeaSatelliteInfoSource::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QNmeaSatelliteInfoSource_OnDisconnectNotify(QNmeaSatelliteInfoSource* self, intptr_t slot) {
    if (auto* vqnmeasatelliteinfosource = dynamic_cast<VirtualQNmeaSatelliteInfoSource*>(self))
        vqnmeasatelliteinfosource->qnmeasatelliteinfosource_disconnectnotify_callback = reinterpret_cast<VirtualQNmeaSatelliteInfoSource::QNmeaSatelliteInfoSource_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
int QNmeaSatelliteInfoSource_ParseSatellitesInUseFromNmea2(QNmeaSatelliteInfoSource* self, libqt_string data, libqt_list /* of int */ pnrsInUse) {
    if (auto* vqnmeasatelliteinfosource = dynamic_cast<VirtualQNmeaSatelliteInfoSource*>(self)) {
        QByteArrayView data_QByteArrayView(data.data, data.len);
        QList<int> pnrsInUse_QList;
        pnrsInUse_QList.reserve(pnrsInUse.len);
        int* pnrsInUse_arr = static_cast<int*>(pnrsInUse.data);
        for (size_t i = 0; i < pnrsInUse.len; ++i) {
            pnrsInUse_QList.push_back(static_cast<int>(pnrsInUse_arr[i]));
        }
        return static_cast<int>(vqnmeasatelliteinfosource->VirtualQNmeaSatelliteInfoSource::parseSatellitesInUseFromNmea(data_QByteArrayView, pnrsInUse_QList));
    } else
        qFatal("Error: Protected method QNmeaSatelliteInfoSource::parseSatellitesInUseFromNmea2 called without a directly constructed type");
}

// Derived class protected handler implementation
int QNmeaSatelliteInfoSource_ParseSatelliteInfoFromNmea2(QNmeaSatelliteInfoSource* self, libqt_string data, libqt_list /* of QGeoSatelliteInfo* */ infos, int* system) {
    if (auto* vqnmeasatelliteinfosource = dynamic_cast<VirtualQNmeaSatelliteInfoSource*>(self)) {
        QByteArrayView data_QByteArrayView(data.data, data.len);
        QList<QGeoSatelliteInfo> infos_QList;
        infos_QList.reserve(infos.len);
        QGeoSatelliteInfo** infos_arr = static_cast<QGeoSatelliteInfo**>(infos.data);
        for (size_t i = 0; i < infos.len; ++i) {
            infos_QList.push_back(*(infos_arr[i]));
        }
        return static_cast<int>(vqnmeasatelliteinfosource->VirtualQNmeaSatelliteInfoSource::parseSatelliteInfoFromNmea(data_QByteArrayView, infos_QList, (QGeoSatelliteInfo::SatelliteSystem&)(*system)));
    } else
        qFatal("Error: Protected method QNmeaSatelliteInfoSource::parseSatelliteInfoFromNmea2 called without a directly constructed type");
}

// Derived class protected handler implementation
void QNmeaSatelliteInfoSource_SetError(QNmeaSatelliteInfoSource* self, int satelliteError) {
    if (auto* vqnmeasatelliteinfosource = dynamic_cast<VirtualQNmeaSatelliteInfoSource*>(self)) {
        vqnmeasatelliteinfosource->VirtualQNmeaSatelliteInfoSource::setError(static_cast<QGeoSatelliteInfoSource::Error>(satelliteError));
    } else
        qFatal("Error: Protected method QNmeaSatelliteInfoSource::setError called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QNmeaSatelliteInfoSource_Sender(const QNmeaSatelliteInfoSource* self) {
    if (auto* vqnmeasatelliteinfosource = const_cast<VirtualQNmeaSatelliteInfoSource*>(dynamic_cast<const VirtualQNmeaSatelliteInfoSource*>(self))) {
        return vqnmeasatelliteinfosource->VirtualQNmeaSatelliteInfoSource::sender();
    } else
        qFatal("Error: Protected method QNmeaSatelliteInfoSource::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QNmeaSatelliteInfoSource_SenderSignalIndex(const QNmeaSatelliteInfoSource* self) {
    if (auto* vqnmeasatelliteinfosource = const_cast<VirtualQNmeaSatelliteInfoSource*>(dynamic_cast<const VirtualQNmeaSatelliteInfoSource*>(self))) {
        return vqnmeasatelliteinfosource->VirtualQNmeaSatelliteInfoSource::senderSignalIndex();
    } else
        qFatal("Error: Protected method QNmeaSatelliteInfoSource::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QNmeaSatelliteInfoSource_Receivers(const QNmeaSatelliteInfoSource* self, const char* signal) {
    if (auto* vqnmeasatelliteinfosource = const_cast<VirtualQNmeaSatelliteInfoSource*>(dynamic_cast<const VirtualQNmeaSatelliteInfoSource*>(self))) {
        return vqnmeasatelliteinfosource->VirtualQNmeaSatelliteInfoSource::receivers(signal);
    } else
        qFatal("Error: Protected method QNmeaSatelliteInfoSource::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QNmeaSatelliteInfoSource_IsSignalConnected(const QNmeaSatelliteInfoSource* self, const QMetaMethod* signal) {
    if (auto* vqnmeasatelliteinfosource = const_cast<VirtualQNmeaSatelliteInfoSource*>(dynamic_cast<const VirtualQNmeaSatelliteInfoSource*>(self))) {
        return vqnmeasatelliteinfosource->VirtualQNmeaSatelliteInfoSource::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QNmeaSatelliteInfoSource::isSignalConnected called without a directly constructed type");
}

void QNmeaSatelliteInfoSource_Delete(QNmeaSatelliteInfoSource* self) {
    delete self;
}
