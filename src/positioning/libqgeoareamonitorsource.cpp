#include <QChildEvent>
#include <QEvent>
#include <QGeoAreaMonitorInfo>
#include <QGeoAreaMonitorSource>
#include <QGeoPositionInfo>
#include <QGeoPositionInfoSource>
#include <QGeoShape>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QTimerEvent>
#include <QVariant>
#include <qgeoareamonitorsource.h>
#include "libqgeoareamonitorsource.h"
#include "libqgeoareamonitorsource.hxx"

QGeoAreaMonitorSource* QGeoAreaMonitorSource_new(QObject* parent) {
    return new VirtualQGeoAreaMonitorSource(parent);
}

QMetaObject* QGeoAreaMonitorSource_MetaObject(const QGeoAreaMonitorSource* self) {
    return (QMetaObject*)self->metaObject();
}

void* QGeoAreaMonitorSource_Metacast(QGeoAreaMonitorSource* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QGeoAreaMonitorSource_Metacall(QGeoAreaMonitorSource* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QGeoAreaMonitorSource_Tr(const char* s) {
    auto _ret = QGeoAreaMonitorSource::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QGeoAreaMonitorSource* QGeoAreaMonitorSource_CreateDefaultSource(QObject* parent) {
    return QGeoAreaMonitorSource::createDefaultSource(parent);
}

QGeoAreaMonitorSource* QGeoAreaMonitorSource_CreateSource(const libqt_string sourceName, QObject* parent) {
    QString sourceName_QString = QString::fromUtf8(sourceName.data, sourceName.len);
    return QGeoAreaMonitorSource::createSource(sourceName_QString, parent);
}

libqt_list /* of libqt_string */ QGeoAreaMonitorSource_AvailableSources() {
    QList<QString> _ret = QGeoAreaMonitorSource::availableSources();
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

void QGeoAreaMonitorSource_SetPositionInfoSource(QGeoAreaMonitorSource* self, QGeoPositionInfoSource* source) {
    self->setPositionInfoSource(source);
}

QGeoPositionInfoSource* QGeoAreaMonitorSource_PositionInfoSource(const QGeoAreaMonitorSource* self) {
    return self->positionInfoSource();
}

libqt_string QGeoAreaMonitorSource_SourceName(const QGeoAreaMonitorSource* self) {
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

int QGeoAreaMonitorSource_Error(const QGeoAreaMonitorSource* self) {
    return static_cast<int>(self->error());
}

int QGeoAreaMonitorSource_SupportedAreaMonitorFeatures(const QGeoAreaMonitorSource* self) {
    return static_cast<int>(self->supportedAreaMonitorFeatures());
}

bool QGeoAreaMonitorSource_StartMonitoring(QGeoAreaMonitorSource* self, const QGeoAreaMonitorInfo* monitor) {
    return self->startMonitoring(*monitor);
}

bool QGeoAreaMonitorSource_StopMonitoring(QGeoAreaMonitorSource* self, const QGeoAreaMonitorInfo* monitor) {
    return self->stopMonitoring(*monitor);
}

bool QGeoAreaMonitorSource_RequestUpdate(QGeoAreaMonitorSource* self, const QGeoAreaMonitorInfo* monitor, const char* signal) {
    return self->requestUpdate(*monitor, signal);
}

libqt_list /* of QGeoAreaMonitorInfo* */ QGeoAreaMonitorSource_ActiveMonitors(const QGeoAreaMonitorSource* self) {
    QList<QGeoAreaMonitorInfo> _ret = self->activeMonitors();
    // Convert QList<> from C++ memory to manually-managed C memory
    QGeoAreaMonitorInfo** _arr = static_cast<QGeoAreaMonitorInfo**>(malloc(sizeof(QGeoAreaMonitorInfo*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QGeoAreaMonitorInfo(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_list /* of QGeoAreaMonitorInfo* */ QGeoAreaMonitorSource_ActiveMonitors2(const QGeoAreaMonitorSource* self, const QGeoShape* lookupArea) {
    QList<QGeoAreaMonitorInfo> _ret = self->activeMonitors(*lookupArea);
    // Convert QList<> from C++ memory to manually-managed C memory
    QGeoAreaMonitorInfo** _arr = static_cast<QGeoAreaMonitorInfo**>(malloc(sizeof(QGeoAreaMonitorInfo*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QGeoAreaMonitorInfo(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

bool QGeoAreaMonitorSource_SetBackendProperty(QGeoAreaMonitorSource* self, const libqt_string name, const QVariant* value) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return self->setBackendProperty(name_QString, *value);
}

QVariant* QGeoAreaMonitorSource_BackendProperty(const QGeoAreaMonitorSource* self, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return new QVariant(self->backendProperty(name_QString));
}

void QGeoAreaMonitorSource_AreaEntered(QGeoAreaMonitorSource* self, const QGeoAreaMonitorInfo* monitor, const QGeoPositionInfo* update) {
    self->areaEntered(*monitor, *update);
}

void QGeoAreaMonitorSource_Connect_AreaEntered(QGeoAreaMonitorSource* self, intptr_t slot) {
    void (*slotFunc)(QGeoAreaMonitorSource*, QGeoAreaMonitorInfo*, QGeoPositionInfo*) = reinterpret_cast<void (*)(QGeoAreaMonitorSource*, QGeoAreaMonitorInfo*, QGeoPositionInfo*)>(slot);
    QGeoAreaMonitorSource::connect(self,
                                   static_cast<void (QGeoAreaMonitorSource::*)(const QGeoAreaMonitorInfo&, const QGeoPositionInfo&)>(&QGeoAreaMonitorSource::areaEntered),
                                   [self, slotFunc](const QGeoAreaMonitorInfo& monitor, const QGeoPositionInfo& update) {
                                       const QGeoAreaMonitorInfo& monitor_ret = monitor;
                                       // Cast returned reference into pointer
                                       QGeoAreaMonitorInfo* sigval1 = const_cast<QGeoAreaMonitorInfo*>(&monitor_ret);
                                       const QGeoPositionInfo& update_ret = update;
                                       // Cast returned reference into pointer
                                       QGeoPositionInfo* sigval2 = const_cast<QGeoPositionInfo*>(&update_ret);
                                       slotFunc(self, sigval1, sigval2);
                                   });
}

void QGeoAreaMonitorSource_AreaExited(QGeoAreaMonitorSource* self, const QGeoAreaMonitorInfo* monitor, const QGeoPositionInfo* update) {
    self->areaExited(*monitor, *update);
}

void QGeoAreaMonitorSource_Connect_AreaExited(QGeoAreaMonitorSource* self, intptr_t slot) {
    void (*slotFunc)(QGeoAreaMonitorSource*, QGeoAreaMonitorInfo*, QGeoPositionInfo*) = reinterpret_cast<void (*)(QGeoAreaMonitorSource*, QGeoAreaMonitorInfo*, QGeoPositionInfo*)>(slot);
    QGeoAreaMonitorSource::connect(self,
                                   static_cast<void (QGeoAreaMonitorSource::*)(const QGeoAreaMonitorInfo&, const QGeoPositionInfo&)>(&QGeoAreaMonitorSource::areaExited),
                                   [self, slotFunc](const QGeoAreaMonitorInfo& monitor, const QGeoPositionInfo& update) {
                                       const QGeoAreaMonitorInfo& monitor_ret = monitor;
                                       // Cast returned reference into pointer
                                       QGeoAreaMonitorInfo* sigval1 = const_cast<QGeoAreaMonitorInfo*>(&monitor_ret);
                                       const QGeoPositionInfo& update_ret = update;
                                       // Cast returned reference into pointer
                                       QGeoPositionInfo* sigval2 = const_cast<QGeoPositionInfo*>(&update_ret);
                                       slotFunc(self, sigval1, sigval2);
                                   });
}

void QGeoAreaMonitorSource_MonitorExpired(QGeoAreaMonitorSource* self, const QGeoAreaMonitorInfo* monitor) {
    self->monitorExpired(*monitor);
}

void QGeoAreaMonitorSource_Connect_MonitorExpired(QGeoAreaMonitorSource* self, intptr_t slot) {
    void (*slotFunc)(QGeoAreaMonitorSource*, QGeoAreaMonitorInfo*) = reinterpret_cast<void (*)(QGeoAreaMonitorSource*, QGeoAreaMonitorInfo*)>(slot);
    QGeoAreaMonitorSource::connect(self,
                                   static_cast<void (QGeoAreaMonitorSource::*)(const QGeoAreaMonitorInfo&)>(&QGeoAreaMonitorSource::monitorExpired),
                                   [self, slotFunc](const QGeoAreaMonitorInfo& monitor) {
                                       const QGeoAreaMonitorInfo& monitor_ret = monitor;
                                       // Cast returned reference into pointer
                                       QGeoAreaMonitorInfo* sigval1 = const_cast<QGeoAreaMonitorInfo*>(&monitor_ret);
                                       slotFunc(self, sigval1);
                                   });
}

void QGeoAreaMonitorSource_ErrorOccurred(QGeoAreaMonitorSource* self, int errorVal) {
    self->errorOccurred(static_cast<QGeoAreaMonitorSource::Error>(errorVal));
}

void QGeoAreaMonitorSource_Connect_ErrorOccurred(QGeoAreaMonitorSource* self, intptr_t slot) {
    void (*slotFunc)(QGeoAreaMonitorSource*, int) = reinterpret_cast<void (*)(QGeoAreaMonitorSource*, int)>(slot);
    QGeoAreaMonitorSource::connect(self,
                                   static_cast<void (QGeoAreaMonitorSource::*)(QGeoAreaMonitorSource::Error)>(&QGeoAreaMonitorSource::errorOccurred),
                                   [self, slotFunc](QGeoAreaMonitorSource::Error errorVal) {
                                       int sigval1 = static_cast<int>(errorVal);
                                       slotFunc(self, sigval1);
                                   });
}

libqt_string QGeoAreaMonitorSource_Tr2(const char* s, const char* c) {
    auto _ret = QGeoAreaMonitorSource::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QGeoAreaMonitorSource_Tr3(const char* s, const char* c, int n) {
    auto _ret = QGeoAreaMonitorSource::tr(s, c, static_cast<int>(n));
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
QMetaObject* QGeoAreaMonitorSource_SuperMetaObject(const QGeoAreaMonitorSource* self) {
    return (QMetaObject*)self->QGeoAreaMonitorSource::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QGeoAreaMonitorSource_OnMetaObject(QGeoAreaMonitorSource* self, intptr_t slot) {
    if (auto* vqgeoareamonitorsource = const_cast<VirtualQGeoAreaMonitorSource*>(dynamic_cast<const VirtualQGeoAreaMonitorSource*>(self)))
        vqgeoareamonitorsource->qgeoareamonitorsource_metaobject_callback = reinterpret_cast<VirtualQGeoAreaMonitorSource::QGeoAreaMonitorSource_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QGeoAreaMonitorSource_SuperMetacast(QGeoAreaMonitorSource* self, const char* param1) {
    return self->QGeoAreaMonitorSource::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QGeoAreaMonitorSource_OnMetacast(QGeoAreaMonitorSource* self, intptr_t slot) {
    if (auto* vqgeoareamonitorsource = dynamic_cast<VirtualQGeoAreaMonitorSource*>(self))
        vqgeoareamonitorsource->qgeoareamonitorsource_metacast_callback = reinterpret_cast<VirtualQGeoAreaMonitorSource::QGeoAreaMonitorSource_Metacast_Callback>(slot);
}

// Base class handler implementation
int QGeoAreaMonitorSource_SuperMetacall(QGeoAreaMonitorSource* self, int param1, int param2, void** param3) {
    return self->QGeoAreaMonitorSource::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QGeoAreaMonitorSource_OnMetacall(QGeoAreaMonitorSource* self, intptr_t slot) {
    if (auto* vqgeoareamonitorsource = dynamic_cast<VirtualQGeoAreaMonitorSource*>(self))
        vqgeoareamonitorsource->qgeoareamonitorsource_metacall_callback = reinterpret_cast<VirtualQGeoAreaMonitorSource::QGeoAreaMonitorSource_Metacall_Callback>(slot);
}

// Base class handler implementation
void QGeoAreaMonitorSource_SuperSetPositionInfoSource(QGeoAreaMonitorSource* self, QGeoPositionInfoSource* source) {
    self->QGeoAreaMonitorSource::setPositionInfoSource(source);
}

// Auxiliary method to allow providing re-implementation
void QGeoAreaMonitorSource_OnSetPositionInfoSource(QGeoAreaMonitorSource* self, intptr_t slot) {
    if (auto* vqgeoareamonitorsource = dynamic_cast<VirtualQGeoAreaMonitorSource*>(self))
        vqgeoareamonitorsource->qgeoareamonitorsource_setpositioninfosource_callback = reinterpret_cast<VirtualQGeoAreaMonitorSource::QGeoAreaMonitorSource_SetPositionInfoSource_Callback>(slot);
}

// Base class handler implementation
QGeoPositionInfoSource* QGeoAreaMonitorSource_SuperPositionInfoSource(const QGeoAreaMonitorSource* self) {
    return self->QGeoAreaMonitorSource::positionInfoSource();
}

// Auxiliary method to allow providing re-implementation
void QGeoAreaMonitorSource_OnPositionInfoSource(QGeoAreaMonitorSource* self, intptr_t slot) {
    if (auto* vqgeoareamonitorsource = const_cast<VirtualQGeoAreaMonitorSource*>(dynamic_cast<const VirtualQGeoAreaMonitorSource*>(self)))
        vqgeoareamonitorsource->qgeoareamonitorsource_positioninfosource_callback = reinterpret_cast<VirtualQGeoAreaMonitorSource::QGeoAreaMonitorSource_PositionInfoSource_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QGeoAreaMonitorSource_OnError(QGeoAreaMonitorSource* self, intptr_t slot) {
    if (auto* vqgeoareamonitorsource = const_cast<VirtualQGeoAreaMonitorSource*>(dynamic_cast<const VirtualQGeoAreaMonitorSource*>(self)))
        vqgeoareamonitorsource->qgeoareamonitorsource_error_callback = reinterpret_cast<VirtualQGeoAreaMonitorSource::QGeoAreaMonitorSource_Error_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QGeoAreaMonitorSource_OnSupportedAreaMonitorFeatures(QGeoAreaMonitorSource* self, intptr_t slot) {
    if (auto* vqgeoareamonitorsource = const_cast<VirtualQGeoAreaMonitorSource*>(dynamic_cast<const VirtualQGeoAreaMonitorSource*>(self)))
        vqgeoareamonitorsource->qgeoareamonitorsource_supportedareamonitorfeatures_callback = reinterpret_cast<VirtualQGeoAreaMonitorSource::QGeoAreaMonitorSource_SupportedAreaMonitorFeatures_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QGeoAreaMonitorSource_OnStartMonitoring(QGeoAreaMonitorSource* self, intptr_t slot) {
    if (auto* vqgeoareamonitorsource = dynamic_cast<VirtualQGeoAreaMonitorSource*>(self))
        vqgeoareamonitorsource->qgeoareamonitorsource_startmonitoring_callback = reinterpret_cast<VirtualQGeoAreaMonitorSource::QGeoAreaMonitorSource_StartMonitoring_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QGeoAreaMonitorSource_OnStopMonitoring(QGeoAreaMonitorSource* self, intptr_t slot) {
    if (auto* vqgeoareamonitorsource = dynamic_cast<VirtualQGeoAreaMonitorSource*>(self))
        vqgeoareamonitorsource->qgeoareamonitorsource_stopmonitoring_callback = reinterpret_cast<VirtualQGeoAreaMonitorSource::QGeoAreaMonitorSource_StopMonitoring_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QGeoAreaMonitorSource_OnRequestUpdate(QGeoAreaMonitorSource* self, intptr_t slot) {
    if (auto* vqgeoareamonitorsource = dynamic_cast<VirtualQGeoAreaMonitorSource*>(self))
        vqgeoareamonitorsource->qgeoareamonitorsource_requestupdate_callback = reinterpret_cast<VirtualQGeoAreaMonitorSource::QGeoAreaMonitorSource_RequestUpdate_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QGeoAreaMonitorSource_OnActiveMonitors(QGeoAreaMonitorSource* self, intptr_t slot) {
    if (auto* vqgeoareamonitorsource = const_cast<VirtualQGeoAreaMonitorSource*>(dynamic_cast<const VirtualQGeoAreaMonitorSource*>(self)))
        vqgeoareamonitorsource->qgeoareamonitorsource_activemonitors_callback = reinterpret_cast<VirtualQGeoAreaMonitorSource::QGeoAreaMonitorSource_ActiveMonitors_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QGeoAreaMonitorSource_OnActiveMonitors2(QGeoAreaMonitorSource* self, intptr_t slot) {
    if (auto* vqgeoareamonitorsource = const_cast<VirtualQGeoAreaMonitorSource*>(dynamic_cast<const VirtualQGeoAreaMonitorSource*>(self)))
        vqgeoareamonitorsource->qgeoareamonitorsource_activemonitors2_callback = reinterpret_cast<VirtualQGeoAreaMonitorSource::QGeoAreaMonitorSource_ActiveMonitors2_Callback>(slot);
}

// Base class handler implementation
bool QGeoAreaMonitorSource_SuperSetBackendProperty(QGeoAreaMonitorSource* self, const libqt_string name, const QVariant* value) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return self->QGeoAreaMonitorSource::setBackendProperty(name_QString, *value);
}

// Auxiliary method to allow providing re-implementation
void QGeoAreaMonitorSource_OnSetBackendProperty(QGeoAreaMonitorSource* self, intptr_t slot) {
    if (auto* vqgeoareamonitorsource = dynamic_cast<VirtualQGeoAreaMonitorSource*>(self))
        vqgeoareamonitorsource->qgeoareamonitorsource_setbackendproperty_callback = reinterpret_cast<VirtualQGeoAreaMonitorSource::QGeoAreaMonitorSource_SetBackendProperty_Callback>(slot);
}

// Base class handler implementation
QVariant* QGeoAreaMonitorSource_SuperBackendProperty(const QGeoAreaMonitorSource* self, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return new QVariant(self->QGeoAreaMonitorSource::backendProperty(name_QString));
}

// Auxiliary method to allow providing re-implementation
void QGeoAreaMonitorSource_OnBackendProperty(QGeoAreaMonitorSource* self, intptr_t slot) {
    if (auto* vqgeoareamonitorsource = const_cast<VirtualQGeoAreaMonitorSource*>(dynamic_cast<const VirtualQGeoAreaMonitorSource*>(self)))
        vqgeoareamonitorsource->qgeoareamonitorsource_backendproperty_callback = reinterpret_cast<VirtualQGeoAreaMonitorSource::QGeoAreaMonitorSource_BackendProperty_Callback>(slot);
}

// Derived class handler implementation
bool QGeoAreaMonitorSource_Event(QGeoAreaMonitorSource* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QGeoAreaMonitorSource_SuperEvent(QGeoAreaMonitorSource* self, QEvent* event) {
    return self->QGeoAreaMonitorSource::event(event);
}

// Auxiliary method to allow providing re-implementation
void QGeoAreaMonitorSource_OnEvent(QGeoAreaMonitorSource* self, intptr_t slot) {
    if (auto* vqgeoareamonitorsource = dynamic_cast<VirtualQGeoAreaMonitorSource*>(self))
        vqgeoareamonitorsource->qgeoareamonitorsource_event_callback = reinterpret_cast<VirtualQGeoAreaMonitorSource::QGeoAreaMonitorSource_Event_Callback>(slot);
}

// Derived class handler implementation
bool QGeoAreaMonitorSource_EventFilter(QGeoAreaMonitorSource* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QGeoAreaMonitorSource_SuperEventFilter(QGeoAreaMonitorSource* self, QObject* watched, QEvent* event) {
    return self->QGeoAreaMonitorSource::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QGeoAreaMonitorSource_OnEventFilter(QGeoAreaMonitorSource* self, intptr_t slot) {
    if (auto* vqgeoareamonitorsource = dynamic_cast<VirtualQGeoAreaMonitorSource*>(self))
        vqgeoareamonitorsource->qgeoareamonitorsource_eventfilter_callback = reinterpret_cast<VirtualQGeoAreaMonitorSource::QGeoAreaMonitorSource_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QGeoAreaMonitorSource_TimerEvent(QGeoAreaMonitorSource* self, QTimerEvent* event) {
    auto* vqgeoareamonitorsource = dynamic_cast<VirtualQGeoAreaMonitorSource*>(self);
    if (vqgeoareamonitorsource) {
        vqgeoareamonitorsource->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGeoAreaMonitorSource::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGeoAreaMonitorSource_SuperTimerEvent(QGeoAreaMonitorSource* self, QTimerEvent* event) {
    if (auto* vqgeoareamonitorsource = dynamic_cast<VirtualQGeoAreaMonitorSource*>(self)) {
        vqgeoareamonitorsource->QGeoAreaMonitorSource::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QGeoAreaMonitorSource::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGeoAreaMonitorSource_OnTimerEvent(QGeoAreaMonitorSource* self, intptr_t slot) {
    if (auto* vqgeoareamonitorsource = dynamic_cast<VirtualQGeoAreaMonitorSource*>(self))
        vqgeoareamonitorsource->qgeoareamonitorsource_timerevent_callback = reinterpret_cast<VirtualQGeoAreaMonitorSource::QGeoAreaMonitorSource_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QGeoAreaMonitorSource_ChildEvent(QGeoAreaMonitorSource* self, QChildEvent* event) {
    auto* vqgeoareamonitorsource = dynamic_cast<VirtualQGeoAreaMonitorSource*>(self);
    if (vqgeoareamonitorsource) {
        vqgeoareamonitorsource->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGeoAreaMonitorSource::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGeoAreaMonitorSource_SuperChildEvent(QGeoAreaMonitorSource* self, QChildEvent* event) {
    if (auto* vqgeoareamonitorsource = dynamic_cast<VirtualQGeoAreaMonitorSource*>(self)) {
        vqgeoareamonitorsource->QGeoAreaMonitorSource::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QGeoAreaMonitorSource::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGeoAreaMonitorSource_OnChildEvent(QGeoAreaMonitorSource* self, intptr_t slot) {
    if (auto* vqgeoareamonitorsource = dynamic_cast<VirtualQGeoAreaMonitorSource*>(self))
        vqgeoareamonitorsource->qgeoareamonitorsource_childevent_callback = reinterpret_cast<VirtualQGeoAreaMonitorSource::QGeoAreaMonitorSource_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QGeoAreaMonitorSource_CustomEvent(QGeoAreaMonitorSource* self, QEvent* event) {
    auto* vqgeoareamonitorsource = dynamic_cast<VirtualQGeoAreaMonitorSource*>(self);
    if (vqgeoareamonitorsource) {
        vqgeoareamonitorsource->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGeoAreaMonitorSource::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGeoAreaMonitorSource_SuperCustomEvent(QGeoAreaMonitorSource* self, QEvent* event) {
    if (auto* vqgeoareamonitorsource = dynamic_cast<VirtualQGeoAreaMonitorSource*>(self)) {
        vqgeoareamonitorsource->QGeoAreaMonitorSource::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QGeoAreaMonitorSource::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGeoAreaMonitorSource_OnCustomEvent(QGeoAreaMonitorSource* self, intptr_t slot) {
    if (auto* vqgeoareamonitorsource = dynamic_cast<VirtualQGeoAreaMonitorSource*>(self))
        vqgeoareamonitorsource->qgeoareamonitorsource_customevent_callback = reinterpret_cast<VirtualQGeoAreaMonitorSource::QGeoAreaMonitorSource_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QGeoAreaMonitorSource_ConnectNotify(QGeoAreaMonitorSource* self, const QMetaMethod* signal) {
    auto* vqgeoareamonitorsource = dynamic_cast<VirtualQGeoAreaMonitorSource*>(self);
    if (vqgeoareamonitorsource) {
        vqgeoareamonitorsource->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QGeoAreaMonitorSource::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QGeoAreaMonitorSource_SuperConnectNotify(QGeoAreaMonitorSource* self, const QMetaMethod* signal) {
    if (auto* vqgeoareamonitorsource = dynamic_cast<VirtualQGeoAreaMonitorSource*>(self)) {
        vqgeoareamonitorsource->QGeoAreaMonitorSource::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QGeoAreaMonitorSource::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGeoAreaMonitorSource_OnConnectNotify(QGeoAreaMonitorSource* self, intptr_t slot) {
    if (auto* vqgeoareamonitorsource = dynamic_cast<VirtualQGeoAreaMonitorSource*>(self))
        vqgeoareamonitorsource->qgeoareamonitorsource_connectnotify_callback = reinterpret_cast<VirtualQGeoAreaMonitorSource::QGeoAreaMonitorSource_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QGeoAreaMonitorSource_DisconnectNotify(QGeoAreaMonitorSource* self, const QMetaMethod* signal) {
    auto* vqgeoareamonitorsource = dynamic_cast<VirtualQGeoAreaMonitorSource*>(self);
    if (vqgeoareamonitorsource) {
        vqgeoareamonitorsource->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QGeoAreaMonitorSource::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QGeoAreaMonitorSource_SuperDisconnectNotify(QGeoAreaMonitorSource* self, const QMetaMethod* signal) {
    if (auto* vqgeoareamonitorsource = dynamic_cast<VirtualQGeoAreaMonitorSource*>(self)) {
        vqgeoareamonitorsource->QGeoAreaMonitorSource::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QGeoAreaMonitorSource::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGeoAreaMonitorSource_OnDisconnectNotify(QGeoAreaMonitorSource* self, intptr_t slot) {
    if (auto* vqgeoareamonitorsource = dynamic_cast<VirtualQGeoAreaMonitorSource*>(self))
        vqgeoareamonitorsource->qgeoareamonitorsource_disconnectnotify_callback = reinterpret_cast<VirtualQGeoAreaMonitorSource::QGeoAreaMonitorSource_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* QGeoAreaMonitorSource_Sender(const QGeoAreaMonitorSource* self) {
    if (auto* vqgeoareamonitorsource = const_cast<VirtualQGeoAreaMonitorSource*>(dynamic_cast<const VirtualQGeoAreaMonitorSource*>(self))) {
        return vqgeoareamonitorsource->VirtualQGeoAreaMonitorSource::sender();
    } else
        qFatal("Error: Protected method QGeoAreaMonitorSource::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QGeoAreaMonitorSource_SenderSignalIndex(const QGeoAreaMonitorSource* self) {
    if (auto* vqgeoareamonitorsource = const_cast<VirtualQGeoAreaMonitorSource*>(dynamic_cast<const VirtualQGeoAreaMonitorSource*>(self))) {
        return vqgeoareamonitorsource->VirtualQGeoAreaMonitorSource::senderSignalIndex();
    } else
        qFatal("Error: Protected method QGeoAreaMonitorSource::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QGeoAreaMonitorSource_Receivers(const QGeoAreaMonitorSource* self, const char* signal) {
    if (auto* vqgeoareamonitorsource = const_cast<VirtualQGeoAreaMonitorSource*>(dynamic_cast<const VirtualQGeoAreaMonitorSource*>(self))) {
        return vqgeoareamonitorsource->VirtualQGeoAreaMonitorSource::receivers(signal);
    } else
        qFatal("Error: Protected method QGeoAreaMonitorSource::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QGeoAreaMonitorSource_IsSignalConnected(const QGeoAreaMonitorSource* self, const QMetaMethod* signal) {
    if (auto* vqgeoareamonitorsource = const_cast<VirtualQGeoAreaMonitorSource*>(dynamic_cast<const VirtualQGeoAreaMonitorSource*>(self))) {
        return vqgeoareamonitorsource->VirtualQGeoAreaMonitorSource::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QGeoAreaMonitorSource::isSignalConnected called without a directly constructed type");
}

void QGeoAreaMonitorSource_Delete(QGeoAreaMonitorSource* self) {
    delete self;
}
