#include <QChildEvent>
#include <QEvent>
#include <QGeoPositionInfo>
#include <QGeoPositionInfoSource>
#include <QList>
#include <QMap>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QTimerEvent>
#include <QVariant>
#include <qgeopositioninfosource.h>
#include "libqgeopositioninfosource.h"
#include "libqgeopositioninfosource.hxx"

QGeoPositionInfoSource* QGeoPositionInfoSource_new(QObject* parent) {
    return new VirtualQGeoPositionInfoSource(parent);
}

QMetaObject* QGeoPositionInfoSource_MetaObject(const QGeoPositionInfoSource* self) {
    return (QMetaObject*)self->metaObject();
}

void* QGeoPositionInfoSource_Metacast(QGeoPositionInfoSource* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QGeoPositionInfoSource_Metacall(QGeoPositionInfoSource* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QGeoPositionInfoSource_Tr(const char* s) {
    auto _ret = QGeoPositionInfoSource::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QGeoPositionInfoSource_SetUpdateInterval(QGeoPositionInfoSource* self, int msec) {
    self->setUpdateInterval(static_cast<int>(msec));
}

int QGeoPositionInfoSource_UpdateInterval(const QGeoPositionInfoSource* self) {
    return self->updateInterval();
}

void QGeoPositionInfoSource_SetPreferredPositioningMethods(QGeoPositionInfoSource* self, int methods) {
    self->setPreferredPositioningMethods(static_cast<QGeoPositionInfoSource::PositioningMethods>(methods));
}

int QGeoPositionInfoSource_PreferredPositioningMethods(const QGeoPositionInfoSource* self) {
    return static_cast<int>(self->preferredPositioningMethods());
}

QGeoPositionInfo* QGeoPositionInfoSource_LastKnownPosition(const QGeoPositionInfoSource* self, bool fromSatellitePositioningMethodsOnly) {
    return new QGeoPositionInfo(self->lastKnownPosition(fromSatellitePositioningMethodsOnly));
}

int QGeoPositionInfoSource_SupportedPositioningMethods(const QGeoPositionInfoSource* self) {
    return static_cast<int>(self->supportedPositioningMethods());
}

int QGeoPositionInfoSource_MinimumUpdateInterval(const QGeoPositionInfoSource* self) {
    return self->minimumUpdateInterval();
}

libqt_string QGeoPositionInfoSource_SourceName(const QGeoPositionInfoSource* self) {
    auto _ret = self->sourceName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool QGeoPositionInfoSource_SetBackendProperty(QGeoPositionInfoSource* self, const libqt_string name, const QVariant* value) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return self->setBackendProperty(name_QString, *value);
}

QVariant* QGeoPositionInfoSource_BackendProperty(const QGeoPositionInfoSource* self, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return new QVariant(self->backendProperty(name_QString));
}

QGeoPositionInfoSource* QGeoPositionInfoSource_CreateDefaultSource(QObject* parent) {
    return QGeoPositionInfoSource::createDefaultSource(parent);
}

QGeoPositionInfoSource* QGeoPositionInfoSource_CreateDefaultSource2(const libqt_map /* of libqt_string to QVariant* */ parameters, QObject* parent) {
    QMap<QString, QVariant> parameters_QMap;
    libqt_string* parameters_karr = static_cast<libqt_string*>(parameters.keys);
    QVariant** parameters_varr = static_cast<QVariant**>(parameters.values);
    for (size_t i = 0; i < parameters.len; ++i) {
        QString parameters_karr_i_QString = QString::fromUtf8(parameters_karr[i].data, parameters_karr[i].len);
        parameters_QMap.insert(parameters_karr_i_QString, *(parameters_varr[i]));
    }
    return QGeoPositionInfoSource::createDefaultSource(parameters_QMap, parent);
}

QGeoPositionInfoSource* QGeoPositionInfoSource_CreateSource(const libqt_string sourceName, QObject* parent) {
    QString sourceName_QString = QString::fromUtf8(sourceName.data, sourceName.len);
    return QGeoPositionInfoSource::createSource(sourceName_QString, parent);
}

QGeoPositionInfoSource* QGeoPositionInfoSource_CreateSource2(const libqt_string sourceName, const libqt_map /* of libqt_string to QVariant* */ parameters, QObject* parent) {
    QString sourceName_QString = QString::fromUtf8(sourceName.data, sourceName.len);
    QMap<QString, QVariant> parameters_QMap;
    libqt_string* parameters_karr = static_cast<libqt_string*>(parameters.keys);
    QVariant** parameters_varr = static_cast<QVariant**>(parameters.values);
    for (size_t i = 0; i < parameters.len; ++i) {
        QString parameters_karr_i_QString = QString::fromUtf8(parameters_karr[i].data, parameters_karr[i].len);
        parameters_QMap.insert(parameters_karr_i_QString, *(parameters_varr[i]));
    }
    return QGeoPositionInfoSource::createSource(sourceName_QString, parameters_QMap, parent);
}

libqt_list /* of libqt_string */ QGeoPositionInfoSource_AvailableSources() {
    QList<QString> _ret = QGeoPositionInfoSource::availableSources();
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        auto _lv_ret = _ret[i];
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _lv_b = _lv_ret.toUtf8();
        libqt_string _lv_str;
        _lv_str.len = _lv_b.length();
        _lv_str.data = static_cast<const char*>(malloc(_lv_str.len + 1));
        memcpy((void*)_lv_str.data, _lv_b.data(), _lv_str.len);
        ((char*)_lv_str.data)[_lv_str.len] = '\0';
        _arr[i] = _lv_str;
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

int QGeoPositionInfoSource_Error(const QGeoPositionInfoSource* self) {
    return static_cast<int>(self->error());
}

void QGeoPositionInfoSource_StartUpdates(QGeoPositionInfoSource* self) {
    self->startUpdates();
}

void QGeoPositionInfoSource_StopUpdates(QGeoPositionInfoSource* self) {
    self->stopUpdates();
}

void QGeoPositionInfoSource_RequestUpdate(QGeoPositionInfoSource* self, int timeout) {
    self->requestUpdate(static_cast<int>(timeout));
}

void QGeoPositionInfoSource_PositionUpdated(QGeoPositionInfoSource* self, const QGeoPositionInfo* update) {
    self->positionUpdated(*update);
}

void QGeoPositionInfoSource_Connect_PositionUpdated(QGeoPositionInfoSource* self, intptr_t slot) {
    void (*slotFunc)(QGeoPositionInfoSource*, QGeoPositionInfo*) = reinterpret_cast<void (*)(QGeoPositionInfoSource*, QGeoPositionInfo*)>(slot);
    QGeoPositionInfoSource::connect(self,
                                    static_cast<void (QGeoPositionInfoSource::*)(const QGeoPositionInfo&)>(&QGeoPositionInfoSource::positionUpdated),
                                    [self, slotFunc](const QGeoPositionInfo& update) {
                                        const QGeoPositionInfo& update_ret = update;
                                        // Cast returned reference into pointer
                                        QGeoPositionInfo* sigval1 = const_cast<QGeoPositionInfo*>(&update_ret);
                                        slotFunc(self, sigval1);
                                    });
}

void QGeoPositionInfoSource_ErrorOccurred(QGeoPositionInfoSource* self, int param1) {
    self->errorOccurred(static_cast<QGeoPositionInfoSource::Error>(param1));
}

void QGeoPositionInfoSource_Connect_ErrorOccurred(QGeoPositionInfoSource* self, intptr_t slot) {
    void (*slotFunc)(QGeoPositionInfoSource*, int) = reinterpret_cast<void (*)(QGeoPositionInfoSource*, int)>(slot);
    QGeoPositionInfoSource::connect(self,
                                    static_cast<void (QGeoPositionInfoSource::*)(QGeoPositionInfoSource::Error)>(&QGeoPositionInfoSource::errorOccurred),
                                    [self, slotFunc](QGeoPositionInfoSource::Error param1) {
                                        int sigval1 = static_cast<int>(param1);
                                        slotFunc(self, sigval1);
                                    });
}

void QGeoPositionInfoSource_SupportedPositioningMethodsChanged(QGeoPositionInfoSource* self) {
    self->supportedPositioningMethodsChanged();
}

void QGeoPositionInfoSource_Connect_SupportedPositioningMethodsChanged(QGeoPositionInfoSource* self, intptr_t slot) {
    void (*slotFunc)(QGeoPositionInfoSource*) = reinterpret_cast<void (*)(QGeoPositionInfoSource*)>(slot);
    QGeoPositionInfoSource::connect(self,
                                    static_cast<void (QGeoPositionInfoSource::*)()>(&QGeoPositionInfoSource::supportedPositioningMethodsChanged),
                                    [self, slotFunc]() {
                                        slotFunc(self);
                                    });
}

libqt_string QGeoPositionInfoSource_Tr2(const char* s, const char* c) {
    auto _ret = QGeoPositionInfoSource::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QGeoPositionInfoSource_Tr3(const char* s, const char* c, int n) {
    auto _ret = QGeoPositionInfoSource::tr(s, c, static_cast<int>(n));
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
QMetaObject* QGeoPositionInfoSource_SuperMetaObject(const QGeoPositionInfoSource* self) {
    return (QMetaObject*)self->QGeoPositionInfoSource::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QGeoPositionInfoSource_OnMetaObject(QGeoPositionInfoSource* self, intptr_t slot) {
    if (auto* vqgeopositioninfosource = const_cast<VirtualQGeoPositionInfoSource*>(dynamic_cast<const VirtualQGeoPositionInfoSource*>(self)))
        vqgeopositioninfosource->qgeopositioninfosource_metaobject_callback = reinterpret_cast<VirtualQGeoPositionInfoSource::QGeoPositionInfoSource_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QGeoPositionInfoSource_SuperMetacast(QGeoPositionInfoSource* self, const char* param1) {
    return self->QGeoPositionInfoSource::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QGeoPositionInfoSource_OnMetacast(QGeoPositionInfoSource* self, intptr_t slot) {
    if (auto* vqgeopositioninfosource = dynamic_cast<VirtualQGeoPositionInfoSource*>(self))
        vqgeopositioninfosource->qgeopositioninfosource_metacast_callback = reinterpret_cast<VirtualQGeoPositionInfoSource::QGeoPositionInfoSource_Metacast_Callback>(slot);
}

// Base class handler implementation
int QGeoPositionInfoSource_SuperMetacall(QGeoPositionInfoSource* self, int param1, int param2, void** param3) {
    return self->QGeoPositionInfoSource::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QGeoPositionInfoSource_OnMetacall(QGeoPositionInfoSource* self, intptr_t slot) {
    if (auto* vqgeopositioninfosource = dynamic_cast<VirtualQGeoPositionInfoSource*>(self))
        vqgeopositioninfosource->qgeopositioninfosource_metacall_callback = reinterpret_cast<VirtualQGeoPositionInfoSource::QGeoPositionInfoSource_Metacall_Callback>(slot);
}

// Base class handler implementation
void QGeoPositionInfoSource_SuperSetUpdateInterval(QGeoPositionInfoSource* self, int msec) {
    self->QGeoPositionInfoSource::setUpdateInterval(static_cast<int>(msec));
}

// Auxiliary method to allow providing re-implementation
void QGeoPositionInfoSource_OnSetUpdateInterval(QGeoPositionInfoSource* self, intptr_t slot) {
    if (auto* vqgeopositioninfosource = dynamic_cast<VirtualQGeoPositionInfoSource*>(self))
        vqgeopositioninfosource->qgeopositioninfosource_setupdateinterval_callback = reinterpret_cast<VirtualQGeoPositionInfoSource::QGeoPositionInfoSource_SetUpdateInterval_Callback>(slot);
}

// Base class handler implementation
void QGeoPositionInfoSource_SuperSetPreferredPositioningMethods(QGeoPositionInfoSource* self, int methods) {
    self->QGeoPositionInfoSource::setPreferredPositioningMethods(static_cast<QGeoPositionInfoSource::PositioningMethods>(methods));
}

// Auxiliary method to allow providing re-implementation
void QGeoPositionInfoSource_OnSetPreferredPositioningMethods(QGeoPositionInfoSource* self, intptr_t slot) {
    if (auto* vqgeopositioninfosource = dynamic_cast<VirtualQGeoPositionInfoSource*>(self))
        vqgeopositioninfosource->qgeopositioninfosource_setpreferredpositioningmethods_callback = reinterpret_cast<VirtualQGeoPositionInfoSource::QGeoPositionInfoSource_SetPreferredPositioningMethods_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QGeoPositionInfoSource_OnLastKnownPosition(QGeoPositionInfoSource* self, intptr_t slot) {
    if (auto* vqgeopositioninfosource = const_cast<VirtualQGeoPositionInfoSource*>(dynamic_cast<const VirtualQGeoPositionInfoSource*>(self)))
        vqgeopositioninfosource->qgeopositioninfosource_lastknownposition_callback = reinterpret_cast<VirtualQGeoPositionInfoSource::QGeoPositionInfoSource_LastKnownPosition_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QGeoPositionInfoSource_OnSupportedPositioningMethods(QGeoPositionInfoSource* self, intptr_t slot) {
    if (auto* vqgeopositioninfosource = const_cast<VirtualQGeoPositionInfoSource*>(dynamic_cast<const VirtualQGeoPositionInfoSource*>(self)))
        vqgeopositioninfosource->qgeopositioninfosource_supportedpositioningmethods_callback = reinterpret_cast<VirtualQGeoPositionInfoSource::QGeoPositionInfoSource_SupportedPositioningMethods_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QGeoPositionInfoSource_OnMinimumUpdateInterval(QGeoPositionInfoSource* self, intptr_t slot) {
    if (auto* vqgeopositioninfosource = const_cast<VirtualQGeoPositionInfoSource*>(dynamic_cast<const VirtualQGeoPositionInfoSource*>(self)))
        vqgeopositioninfosource->qgeopositioninfosource_minimumupdateinterval_callback = reinterpret_cast<VirtualQGeoPositionInfoSource::QGeoPositionInfoSource_MinimumUpdateInterval_Callback>(slot);
}

// Base class handler implementation
bool QGeoPositionInfoSource_SuperSetBackendProperty(QGeoPositionInfoSource* self, const libqt_string name, const QVariant* value) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return self->QGeoPositionInfoSource::setBackendProperty(name_QString, *value);
}

// Auxiliary method to allow providing re-implementation
void QGeoPositionInfoSource_OnSetBackendProperty(QGeoPositionInfoSource* self, intptr_t slot) {
    if (auto* vqgeopositioninfosource = dynamic_cast<VirtualQGeoPositionInfoSource*>(self))
        vqgeopositioninfosource->qgeopositioninfosource_setbackendproperty_callback = reinterpret_cast<VirtualQGeoPositionInfoSource::QGeoPositionInfoSource_SetBackendProperty_Callback>(slot);
}

// Base class handler implementation
QVariant* QGeoPositionInfoSource_SuperBackendProperty(const QGeoPositionInfoSource* self, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return new QVariant(self->QGeoPositionInfoSource::backendProperty(name_QString));
}

// Auxiliary method to allow providing re-implementation
void QGeoPositionInfoSource_OnBackendProperty(QGeoPositionInfoSource* self, intptr_t slot) {
    if (auto* vqgeopositioninfosource = const_cast<VirtualQGeoPositionInfoSource*>(dynamic_cast<const VirtualQGeoPositionInfoSource*>(self)))
        vqgeopositioninfosource->qgeopositioninfosource_backendproperty_callback = reinterpret_cast<VirtualQGeoPositionInfoSource::QGeoPositionInfoSource_BackendProperty_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QGeoPositionInfoSource_OnError(QGeoPositionInfoSource* self, intptr_t slot) {
    if (auto* vqgeopositioninfosource = const_cast<VirtualQGeoPositionInfoSource*>(dynamic_cast<const VirtualQGeoPositionInfoSource*>(self)))
        vqgeopositioninfosource->qgeopositioninfosource_error_callback = reinterpret_cast<VirtualQGeoPositionInfoSource::QGeoPositionInfoSource_Error_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QGeoPositionInfoSource_OnStartUpdates(QGeoPositionInfoSource* self, intptr_t slot) {
    if (auto* vqgeopositioninfosource = dynamic_cast<VirtualQGeoPositionInfoSource*>(self))
        vqgeopositioninfosource->qgeopositioninfosource_startupdates_callback = reinterpret_cast<VirtualQGeoPositionInfoSource::QGeoPositionInfoSource_StartUpdates_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QGeoPositionInfoSource_OnStopUpdates(QGeoPositionInfoSource* self, intptr_t slot) {
    if (auto* vqgeopositioninfosource = dynamic_cast<VirtualQGeoPositionInfoSource*>(self))
        vqgeopositioninfosource->qgeopositioninfosource_stopupdates_callback = reinterpret_cast<VirtualQGeoPositionInfoSource::QGeoPositionInfoSource_StopUpdates_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QGeoPositionInfoSource_OnRequestUpdate(QGeoPositionInfoSource* self, intptr_t slot) {
    if (auto* vqgeopositioninfosource = dynamic_cast<VirtualQGeoPositionInfoSource*>(self))
        vqgeopositioninfosource->qgeopositioninfosource_requestupdate_callback = reinterpret_cast<VirtualQGeoPositionInfoSource::QGeoPositionInfoSource_RequestUpdate_Callback>(slot);
}

// Derived class handler implementation
bool QGeoPositionInfoSource_Event(QGeoPositionInfoSource* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QGeoPositionInfoSource_SuperEvent(QGeoPositionInfoSource* self, QEvent* event) {
    return self->QGeoPositionInfoSource::event(event);
}

// Auxiliary method to allow providing re-implementation
void QGeoPositionInfoSource_OnEvent(QGeoPositionInfoSource* self, intptr_t slot) {
    if (auto* vqgeopositioninfosource = dynamic_cast<VirtualQGeoPositionInfoSource*>(self))
        vqgeopositioninfosource->qgeopositioninfosource_event_callback = reinterpret_cast<VirtualQGeoPositionInfoSource::QGeoPositionInfoSource_Event_Callback>(slot);
}

// Derived class handler implementation
bool QGeoPositionInfoSource_EventFilter(QGeoPositionInfoSource* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QGeoPositionInfoSource_SuperEventFilter(QGeoPositionInfoSource* self, QObject* watched, QEvent* event) {
    return self->QGeoPositionInfoSource::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QGeoPositionInfoSource_OnEventFilter(QGeoPositionInfoSource* self, intptr_t slot) {
    if (auto* vqgeopositioninfosource = dynamic_cast<VirtualQGeoPositionInfoSource*>(self))
        vqgeopositioninfosource->qgeopositioninfosource_eventfilter_callback = reinterpret_cast<VirtualQGeoPositionInfoSource::QGeoPositionInfoSource_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QGeoPositionInfoSource_TimerEvent(QGeoPositionInfoSource* self, QTimerEvent* event) {
    auto* vqgeopositioninfosource = dynamic_cast<VirtualQGeoPositionInfoSource*>(self);
    if (vqgeopositioninfosource) {
        vqgeopositioninfosource->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGeoPositionInfoSource::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGeoPositionInfoSource_SuperTimerEvent(QGeoPositionInfoSource* self, QTimerEvent* event) {
    if (auto* vqgeopositioninfosource = dynamic_cast<VirtualQGeoPositionInfoSource*>(self)) {
        vqgeopositioninfosource->QGeoPositionInfoSource::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QGeoPositionInfoSource::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGeoPositionInfoSource_OnTimerEvent(QGeoPositionInfoSource* self, intptr_t slot) {
    if (auto* vqgeopositioninfosource = dynamic_cast<VirtualQGeoPositionInfoSource*>(self))
        vqgeopositioninfosource->qgeopositioninfosource_timerevent_callback = reinterpret_cast<VirtualQGeoPositionInfoSource::QGeoPositionInfoSource_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QGeoPositionInfoSource_ChildEvent(QGeoPositionInfoSource* self, QChildEvent* event) {
    auto* vqgeopositioninfosource = dynamic_cast<VirtualQGeoPositionInfoSource*>(self);
    if (vqgeopositioninfosource) {
        vqgeopositioninfosource->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGeoPositionInfoSource::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGeoPositionInfoSource_SuperChildEvent(QGeoPositionInfoSource* self, QChildEvent* event) {
    if (auto* vqgeopositioninfosource = dynamic_cast<VirtualQGeoPositionInfoSource*>(self)) {
        vqgeopositioninfosource->QGeoPositionInfoSource::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QGeoPositionInfoSource::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGeoPositionInfoSource_OnChildEvent(QGeoPositionInfoSource* self, intptr_t slot) {
    if (auto* vqgeopositioninfosource = dynamic_cast<VirtualQGeoPositionInfoSource*>(self))
        vqgeopositioninfosource->qgeopositioninfosource_childevent_callback = reinterpret_cast<VirtualQGeoPositionInfoSource::QGeoPositionInfoSource_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QGeoPositionInfoSource_CustomEvent(QGeoPositionInfoSource* self, QEvent* event) {
    auto* vqgeopositioninfosource = dynamic_cast<VirtualQGeoPositionInfoSource*>(self);
    if (vqgeopositioninfosource) {
        vqgeopositioninfosource->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGeoPositionInfoSource::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGeoPositionInfoSource_SuperCustomEvent(QGeoPositionInfoSource* self, QEvent* event) {
    if (auto* vqgeopositioninfosource = dynamic_cast<VirtualQGeoPositionInfoSource*>(self)) {
        vqgeopositioninfosource->QGeoPositionInfoSource::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QGeoPositionInfoSource::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGeoPositionInfoSource_OnCustomEvent(QGeoPositionInfoSource* self, intptr_t slot) {
    if (auto* vqgeopositioninfosource = dynamic_cast<VirtualQGeoPositionInfoSource*>(self))
        vqgeopositioninfosource->qgeopositioninfosource_customevent_callback = reinterpret_cast<VirtualQGeoPositionInfoSource::QGeoPositionInfoSource_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QGeoPositionInfoSource_ConnectNotify(QGeoPositionInfoSource* self, const QMetaMethod* signal) {
    auto* vqgeopositioninfosource = dynamic_cast<VirtualQGeoPositionInfoSource*>(self);
    if (vqgeopositioninfosource) {
        vqgeopositioninfosource->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QGeoPositionInfoSource::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QGeoPositionInfoSource_SuperConnectNotify(QGeoPositionInfoSource* self, const QMetaMethod* signal) {
    if (auto* vqgeopositioninfosource = dynamic_cast<VirtualQGeoPositionInfoSource*>(self)) {
        vqgeopositioninfosource->QGeoPositionInfoSource::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QGeoPositionInfoSource::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGeoPositionInfoSource_OnConnectNotify(QGeoPositionInfoSource* self, intptr_t slot) {
    if (auto* vqgeopositioninfosource = dynamic_cast<VirtualQGeoPositionInfoSource*>(self))
        vqgeopositioninfosource->qgeopositioninfosource_connectnotify_callback = reinterpret_cast<VirtualQGeoPositionInfoSource::QGeoPositionInfoSource_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QGeoPositionInfoSource_DisconnectNotify(QGeoPositionInfoSource* self, const QMetaMethod* signal) {
    auto* vqgeopositioninfosource = dynamic_cast<VirtualQGeoPositionInfoSource*>(self);
    if (vqgeopositioninfosource) {
        vqgeopositioninfosource->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QGeoPositionInfoSource::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QGeoPositionInfoSource_SuperDisconnectNotify(QGeoPositionInfoSource* self, const QMetaMethod* signal) {
    if (auto* vqgeopositioninfosource = dynamic_cast<VirtualQGeoPositionInfoSource*>(self)) {
        vqgeopositioninfosource->QGeoPositionInfoSource::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QGeoPositionInfoSource::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGeoPositionInfoSource_OnDisconnectNotify(QGeoPositionInfoSource* self, intptr_t slot) {
    if (auto* vqgeopositioninfosource = dynamic_cast<VirtualQGeoPositionInfoSource*>(self))
        vqgeopositioninfosource->qgeopositioninfosource_disconnectnotify_callback = reinterpret_cast<VirtualQGeoPositionInfoSource::QGeoPositionInfoSource_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* QGeoPositionInfoSource_Sender(const QGeoPositionInfoSource* self) {
    if (auto* vqgeopositioninfosource = const_cast<VirtualQGeoPositionInfoSource*>(dynamic_cast<const VirtualQGeoPositionInfoSource*>(self))) {
        return vqgeopositioninfosource->VirtualQGeoPositionInfoSource::sender();
    } else
        qFatal("Error: Protected method QGeoPositionInfoSource::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QGeoPositionInfoSource_SenderSignalIndex(const QGeoPositionInfoSource* self) {
    if (auto* vqgeopositioninfosource = const_cast<VirtualQGeoPositionInfoSource*>(dynamic_cast<const VirtualQGeoPositionInfoSource*>(self))) {
        return vqgeopositioninfosource->VirtualQGeoPositionInfoSource::senderSignalIndex();
    } else
        qFatal("Error: Protected method QGeoPositionInfoSource::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QGeoPositionInfoSource_Receivers(const QGeoPositionInfoSource* self, const char* signal) {
    if (auto* vqgeopositioninfosource = const_cast<VirtualQGeoPositionInfoSource*>(dynamic_cast<const VirtualQGeoPositionInfoSource*>(self))) {
        return vqgeopositioninfosource->VirtualQGeoPositionInfoSource::receivers(signal);
    } else
        qFatal("Error: Protected method QGeoPositionInfoSource::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QGeoPositionInfoSource_IsSignalConnected(const QGeoPositionInfoSource* self, const QMetaMethod* signal) {
    if (auto* vqgeopositioninfosource = const_cast<VirtualQGeoPositionInfoSource*>(dynamic_cast<const VirtualQGeoPositionInfoSource*>(self))) {
        return vqgeopositioninfosource->VirtualQGeoPositionInfoSource::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QGeoPositionInfoSource::isSignalConnected called without a directly constructed type");
}

void QGeoPositionInfoSource_Delete(QGeoPositionInfoSource* self) {
    delete self;
}
