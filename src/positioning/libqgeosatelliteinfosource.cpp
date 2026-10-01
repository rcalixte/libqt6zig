#include <QChildEvent>
#include <QEvent>
#include <QGeoSatelliteInfo>
#include <QGeoSatelliteInfoSource>
#include <QList>
#include <QMap>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QTimerEvent>
#include <QVariant>
#include <qgeosatelliteinfosource.h>
#include "libqgeosatelliteinfosource.h"
#include "libqgeosatelliteinfosource.hxx"

QGeoSatelliteInfoSource* QGeoSatelliteInfoSource_new(QObject* parent) {
    return new VirtualQGeoSatelliteInfoSource(parent);
}

QMetaObject* QGeoSatelliteInfoSource_MetaObject(const QGeoSatelliteInfoSource* self) {
    return (QMetaObject*)self->metaObject();
}

void* QGeoSatelliteInfoSource_Metacast(QGeoSatelliteInfoSource* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QGeoSatelliteInfoSource_Metacall(QGeoSatelliteInfoSource* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QGeoSatelliteInfoSource_Tr(const char* s) {
    auto _ret = QGeoSatelliteInfoSource::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QGeoSatelliteInfoSource* QGeoSatelliteInfoSource_CreateDefaultSource(QObject* parent) {
    return QGeoSatelliteInfoSource::createDefaultSource(parent);
}

QGeoSatelliteInfoSource* QGeoSatelliteInfoSource_CreateSource(const libqt_string sourceName, QObject* parent) {
    QString sourceName_QString = QString::fromUtf8(sourceName.data, sourceName.len);
    return QGeoSatelliteInfoSource::createSource(sourceName_QString, parent);
}

QGeoSatelliteInfoSource* QGeoSatelliteInfoSource_CreateDefaultSource2(const libqt_map /* of libqt_string to QVariant* */ parameters, QObject* parent) {
    QMap<QString, QVariant> parameters_QMap;
    libqt_string* parameters_karr = static_cast<libqt_string*>(parameters.keys);
    QVariant** parameters_varr = static_cast<QVariant**>(parameters.values);
    for (size_t i = 0; i < parameters.len; ++i) {
        QString parameters_karr_i_QString = QString::fromUtf8(parameters_karr[i].data, parameters_karr[i].len);
        parameters_QMap.insert(parameters_karr_i_QString, *(parameters_varr[i]));
    }
    return QGeoSatelliteInfoSource::createDefaultSource(parameters_QMap, parent);
}

QGeoSatelliteInfoSource* QGeoSatelliteInfoSource_CreateSource2(const libqt_string sourceName, const libqt_map /* of libqt_string to QVariant* */ parameters, QObject* parent) {
    QString sourceName_QString = QString::fromUtf8(sourceName.data, sourceName.len);
    QMap<QString, QVariant> parameters_QMap;
    libqt_string* parameters_karr = static_cast<libqt_string*>(parameters.keys);
    QVariant** parameters_varr = static_cast<QVariant**>(parameters.values);
    for (size_t i = 0; i < parameters.len; ++i) {
        QString parameters_karr_i_QString = QString::fromUtf8(parameters_karr[i].data, parameters_karr[i].len);
        parameters_QMap.insert(parameters_karr_i_QString, *(parameters_varr[i]));
    }
    return QGeoSatelliteInfoSource::createSource(sourceName_QString, parameters_QMap, parent);
}

libqt_list /* of libqt_string */ QGeoSatelliteInfoSource_AvailableSources() {
    QList<QString> _ret = QGeoSatelliteInfoSource::availableSources();
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

libqt_string QGeoSatelliteInfoSource_SourceName(const QGeoSatelliteInfoSource* self) {
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

void QGeoSatelliteInfoSource_SetUpdateInterval(QGeoSatelliteInfoSource* self, int msec) {
    self->setUpdateInterval(static_cast<int>(msec));
}

int QGeoSatelliteInfoSource_UpdateInterval(const QGeoSatelliteInfoSource* self) {
    return self->updateInterval();
}

int QGeoSatelliteInfoSource_MinimumUpdateInterval(const QGeoSatelliteInfoSource* self) {
    return self->minimumUpdateInterval();
}

int QGeoSatelliteInfoSource_Error(const QGeoSatelliteInfoSource* self) {
    return static_cast<int>(self->error());
}

bool QGeoSatelliteInfoSource_SetBackendProperty(QGeoSatelliteInfoSource* self, const libqt_string name, const QVariant* value) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return self->setBackendProperty(name_QString, *value);
}

QVariant* QGeoSatelliteInfoSource_BackendProperty(const QGeoSatelliteInfoSource* self, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return new QVariant(self->backendProperty(name_QString));
}

void QGeoSatelliteInfoSource_StartUpdates(QGeoSatelliteInfoSource* self) {
    self->startUpdates();
}

void QGeoSatelliteInfoSource_StopUpdates(QGeoSatelliteInfoSource* self) {
    self->stopUpdates();
}

void QGeoSatelliteInfoSource_RequestUpdate(QGeoSatelliteInfoSource* self, int timeout) {
    self->requestUpdate(static_cast<int>(timeout));
}

void QGeoSatelliteInfoSource_SatellitesInViewUpdated(QGeoSatelliteInfoSource* self, const libqt_list /* of QGeoSatelliteInfo* */ satellites) {
    QList<QGeoSatelliteInfo> satellites_QList;
    satellites_QList.reserve(satellites.len);
    QGeoSatelliteInfo** satellites_arr = static_cast<QGeoSatelliteInfo**>(satellites.data);
    for (size_t i = 0; i < satellites.len; ++i) {
        satellites_QList.push_back(*(satellites_arr[i]));
    }
    self->satellitesInViewUpdated(satellites_QList);
}

void QGeoSatelliteInfoSource_Connect_SatellitesInViewUpdated(QGeoSatelliteInfoSource* self, intptr_t slot) {
    void (*slotFunc)(QGeoSatelliteInfoSource*, libqt_list /* of QGeoSatelliteInfo* */) = reinterpret_cast<void (*)(QGeoSatelliteInfoSource*, libqt_list /* of QGeoSatelliteInfo* */)>(slot);
    QGeoSatelliteInfoSource::connect(self,
                                     static_cast<void (QGeoSatelliteInfoSource::*)(const QList<QGeoSatelliteInfo>&)>(&QGeoSatelliteInfoSource::satellitesInViewUpdated),
                                     [self, slotFunc](const QList<QGeoSatelliteInfo>& satellites) {
                                         const QList<QGeoSatelliteInfo>& satellites_ret = satellites;
                                         // Convert QList<> from C++ memory to manually-managed C memory
                                         QGeoSatelliteInfo** satellites_arr = static_cast<QGeoSatelliteInfo**>(malloc(sizeof(QGeoSatelliteInfo*) * (satellites_ret.size())));
                                         for (qsizetype i = 0; i < satellites_ret.size(); ++i) {
                                             satellites_arr[i] = new QGeoSatelliteInfo(satellites_ret[i]);
                                         }
                                         libqt_list satellites_out;
                                         satellites_out.len = satellites_ret.size();
                                         satellites_out.data = static_cast<void*>(satellites_arr);
                                         libqt_list /* of QGeoSatelliteInfo* */ sigval1 = satellites_out;
                                         slotFunc(self, sigval1);
                                         free(satellites_arr);
                                     });
}

void QGeoSatelliteInfoSource_SatellitesInUseUpdated(QGeoSatelliteInfoSource* self, const libqt_list /* of QGeoSatelliteInfo* */ satellites) {
    QList<QGeoSatelliteInfo> satellites_QList;
    satellites_QList.reserve(satellites.len);
    QGeoSatelliteInfo** satellites_arr = static_cast<QGeoSatelliteInfo**>(satellites.data);
    for (size_t i = 0; i < satellites.len; ++i) {
        satellites_QList.push_back(*(satellites_arr[i]));
    }
    self->satellitesInUseUpdated(satellites_QList);
}

void QGeoSatelliteInfoSource_Connect_SatellitesInUseUpdated(QGeoSatelliteInfoSource* self, intptr_t slot) {
    void (*slotFunc)(QGeoSatelliteInfoSource*, libqt_list /* of QGeoSatelliteInfo* */) = reinterpret_cast<void (*)(QGeoSatelliteInfoSource*, libqt_list /* of QGeoSatelliteInfo* */)>(slot);
    QGeoSatelliteInfoSource::connect(self,
                                     static_cast<void (QGeoSatelliteInfoSource::*)(const QList<QGeoSatelliteInfo>&)>(&QGeoSatelliteInfoSource::satellitesInUseUpdated),
                                     [self, slotFunc](const QList<QGeoSatelliteInfo>& satellites) {
                                         const QList<QGeoSatelliteInfo>& satellites_ret = satellites;
                                         // Convert QList<> from C++ memory to manually-managed C memory
                                         QGeoSatelliteInfo** satellites_arr = static_cast<QGeoSatelliteInfo**>(malloc(sizeof(QGeoSatelliteInfo*) * (satellites_ret.size())));
                                         for (qsizetype i = 0; i < satellites_ret.size(); ++i) {
                                             satellites_arr[i] = new QGeoSatelliteInfo(satellites_ret[i]);
                                         }
                                         libqt_list satellites_out;
                                         satellites_out.len = satellites_ret.size();
                                         satellites_out.data = static_cast<void*>(satellites_arr);
                                         libqt_list /* of QGeoSatelliteInfo* */ sigval1 = satellites_out;
                                         slotFunc(self, sigval1);
                                         free(satellites_arr);
                                     });
}

void QGeoSatelliteInfoSource_ErrorOccurred(QGeoSatelliteInfoSource* self, int param1) {
    self->errorOccurred(static_cast<QGeoSatelliteInfoSource::Error>(param1));
}

void QGeoSatelliteInfoSource_Connect_ErrorOccurred(QGeoSatelliteInfoSource* self, intptr_t slot) {
    void (*slotFunc)(QGeoSatelliteInfoSource*, int) = reinterpret_cast<void (*)(QGeoSatelliteInfoSource*, int)>(slot);
    QGeoSatelliteInfoSource::connect(self,
                                     static_cast<void (QGeoSatelliteInfoSource::*)(QGeoSatelliteInfoSource::Error)>(&QGeoSatelliteInfoSource::errorOccurred),
                                     [self, slotFunc](QGeoSatelliteInfoSource::Error param1) {
                                         int sigval1 = static_cast<int>(param1);
                                         slotFunc(self, sigval1);
                                     });
}

libqt_string QGeoSatelliteInfoSource_Tr2(const char* s, const char* c) {
    auto _ret = QGeoSatelliteInfoSource::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QGeoSatelliteInfoSource_Tr3(const char* s, const char* c, int n) {
    auto _ret = QGeoSatelliteInfoSource::tr(s, c, static_cast<int>(n));
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
QMetaObject* QGeoSatelliteInfoSource_SuperMetaObject(const QGeoSatelliteInfoSource* self) {
    return (QMetaObject*)self->QGeoSatelliteInfoSource::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QGeoSatelliteInfoSource_OnMetaObject(QGeoSatelliteInfoSource* self, intptr_t slot) {
    if (auto* vqgeosatelliteinfosource = const_cast<VirtualQGeoSatelliteInfoSource*>(dynamic_cast<const VirtualQGeoSatelliteInfoSource*>(self)))
        vqgeosatelliteinfosource->qgeosatelliteinfosource_metaobject_callback = reinterpret_cast<VirtualQGeoSatelliteInfoSource::QGeoSatelliteInfoSource_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QGeoSatelliteInfoSource_SuperMetacast(QGeoSatelliteInfoSource* self, const char* param1) {
    return self->QGeoSatelliteInfoSource::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QGeoSatelliteInfoSource_OnMetacast(QGeoSatelliteInfoSource* self, intptr_t slot) {
    if (auto* vqgeosatelliteinfosource = dynamic_cast<VirtualQGeoSatelliteInfoSource*>(self))
        vqgeosatelliteinfosource->qgeosatelliteinfosource_metacast_callback = reinterpret_cast<VirtualQGeoSatelliteInfoSource::QGeoSatelliteInfoSource_Metacast_Callback>(slot);
}

// Base class handler implementation
int QGeoSatelliteInfoSource_SuperMetacall(QGeoSatelliteInfoSource* self, int param1, int param2, void** param3) {
    return self->QGeoSatelliteInfoSource::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QGeoSatelliteInfoSource_OnMetacall(QGeoSatelliteInfoSource* self, intptr_t slot) {
    if (auto* vqgeosatelliteinfosource = dynamic_cast<VirtualQGeoSatelliteInfoSource*>(self))
        vqgeosatelliteinfosource->qgeosatelliteinfosource_metacall_callback = reinterpret_cast<VirtualQGeoSatelliteInfoSource::QGeoSatelliteInfoSource_Metacall_Callback>(slot);
}

// Base class handler implementation
void QGeoSatelliteInfoSource_SuperSetUpdateInterval(QGeoSatelliteInfoSource* self, int msec) {
    self->QGeoSatelliteInfoSource::setUpdateInterval(static_cast<int>(msec));
}

// Auxiliary method to allow providing re-implementation
void QGeoSatelliteInfoSource_OnSetUpdateInterval(QGeoSatelliteInfoSource* self, intptr_t slot) {
    if (auto* vqgeosatelliteinfosource = dynamic_cast<VirtualQGeoSatelliteInfoSource*>(self))
        vqgeosatelliteinfosource->qgeosatelliteinfosource_setupdateinterval_callback = reinterpret_cast<VirtualQGeoSatelliteInfoSource::QGeoSatelliteInfoSource_SetUpdateInterval_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QGeoSatelliteInfoSource_OnMinimumUpdateInterval(QGeoSatelliteInfoSource* self, intptr_t slot) {
    if (auto* vqgeosatelliteinfosource = const_cast<VirtualQGeoSatelliteInfoSource*>(dynamic_cast<const VirtualQGeoSatelliteInfoSource*>(self)))
        vqgeosatelliteinfosource->qgeosatelliteinfosource_minimumupdateinterval_callback = reinterpret_cast<VirtualQGeoSatelliteInfoSource::QGeoSatelliteInfoSource_MinimumUpdateInterval_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QGeoSatelliteInfoSource_OnError(QGeoSatelliteInfoSource* self, intptr_t slot) {
    if (auto* vqgeosatelliteinfosource = const_cast<VirtualQGeoSatelliteInfoSource*>(dynamic_cast<const VirtualQGeoSatelliteInfoSource*>(self)))
        vqgeosatelliteinfosource->qgeosatelliteinfosource_error_callback = reinterpret_cast<VirtualQGeoSatelliteInfoSource::QGeoSatelliteInfoSource_Error_Callback>(slot);
}

// Base class handler implementation
bool QGeoSatelliteInfoSource_SuperSetBackendProperty(QGeoSatelliteInfoSource* self, const libqt_string name, const QVariant* value) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return self->QGeoSatelliteInfoSource::setBackendProperty(name_QString, *value);
}

// Auxiliary method to allow providing re-implementation
void QGeoSatelliteInfoSource_OnSetBackendProperty(QGeoSatelliteInfoSource* self, intptr_t slot) {
    if (auto* vqgeosatelliteinfosource = dynamic_cast<VirtualQGeoSatelliteInfoSource*>(self))
        vqgeosatelliteinfosource->qgeosatelliteinfosource_setbackendproperty_callback = reinterpret_cast<VirtualQGeoSatelliteInfoSource::QGeoSatelliteInfoSource_SetBackendProperty_Callback>(slot);
}

// Base class handler implementation
QVariant* QGeoSatelliteInfoSource_SuperBackendProperty(const QGeoSatelliteInfoSource* self, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return new QVariant(self->QGeoSatelliteInfoSource::backendProperty(name_QString));
}

// Auxiliary method to allow providing re-implementation
void QGeoSatelliteInfoSource_OnBackendProperty(QGeoSatelliteInfoSource* self, intptr_t slot) {
    if (auto* vqgeosatelliteinfosource = const_cast<VirtualQGeoSatelliteInfoSource*>(dynamic_cast<const VirtualQGeoSatelliteInfoSource*>(self)))
        vqgeosatelliteinfosource->qgeosatelliteinfosource_backendproperty_callback = reinterpret_cast<VirtualQGeoSatelliteInfoSource::QGeoSatelliteInfoSource_BackendProperty_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QGeoSatelliteInfoSource_OnStartUpdates(QGeoSatelliteInfoSource* self, intptr_t slot) {
    if (auto* vqgeosatelliteinfosource = dynamic_cast<VirtualQGeoSatelliteInfoSource*>(self))
        vqgeosatelliteinfosource->qgeosatelliteinfosource_startupdates_callback = reinterpret_cast<VirtualQGeoSatelliteInfoSource::QGeoSatelliteInfoSource_StartUpdates_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QGeoSatelliteInfoSource_OnStopUpdates(QGeoSatelliteInfoSource* self, intptr_t slot) {
    if (auto* vqgeosatelliteinfosource = dynamic_cast<VirtualQGeoSatelliteInfoSource*>(self))
        vqgeosatelliteinfosource->qgeosatelliteinfosource_stopupdates_callback = reinterpret_cast<VirtualQGeoSatelliteInfoSource::QGeoSatelliteInfoSource_StopUpdates_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QGeoSatelliteInfoSource_OnRequestUpdate(QGeoSatelliteInfoSource* self, intptr_t slot) {
    if (auto* vqgeosatelliteinfosource = dynamic_cast<VirtualQGeoSatelliteInfoSource*>(self))
        vqgeosatelliteinfosource->qgeosatelliteinfosource_requestupdate_callback = reinterpret_cast<VirtualQGeoSatelliteInfoSource::QGeoSatelliteInfoSource_RequestUpdate_Callback>(slot);
}

// Derived class handler implementation
bool QGeoSatelliteInfoSource_Event(QGeoSatelliteInfoSource* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QGeoSatelliteInfoSource_SuperEvent(QGeoSatelliteInfoSource* self, QEvent* event) {
    return self->QGeoSatelliteInfoSource::event(event);
}

// Auxiliary method to allow providing re-implementation
void QGeoSatelliteInfoSource_OnEvent(QGeoSatelliteInfoSource* self, intptr_t slot) {
    if (auto* vqgeosatelliteinfosource = dynamic_cast<VirtualQGeoSatelliteInfoSource*>(self))
        vqgeosatelliteinfosource->qgeosatelliteinfosource_event_callback = reinterpret_cast<VirtualQGeoSatelliteInfoSource::QGeoSatelliteInfoSource_Event_Callback>(slot);
}

// Derived class handler implementation
bool QGeoSatelliteInfoSource_EventFilter(QGeoSatelliteInfoSource* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QGeoSatelliteInfoSource_SuperEventFilter(QGeoSatelliteInfoSource* self, QObject* watched, QEvent* event) {
    return self->QGeoSatelliteInfoSource::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QGeoSatelliteInfoSource_OnEventFilter(QGeoSatelliteInfoSource* self, intptr_t slot) {
    if (auto* vqgeosatelliteinfosource = dynamic_cast<VirtualQGeoSatelliteInfoSource*>(self))
        vqgeosatelliteinfosource->qgeosatelliteinfosource_eventfilter_callback = reinterpret_cast<VirtualQGeoSatelliteInfoSource::QGeoSatelliteInfoSource_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QGeoSatelliteInfoSource_TimerEvent(QGeoSatelliteInfoSource* self, QTimerEvent* event) {
    auto* vqgeosatelliteinfosource = dynamic_cast<VirtualQGeoSatelliteInfoSource*>(self);
    if (vqgeosatelliteinfosource) {
        vqgeosatelliteinfosource->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGeoSatelliteInfoSource::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGeoSatelliteInfoSource_SuperTimerEvent(QGeoSatelliteInfoSource* self, QTimerEvent* event) {
    if (auto* vqgeosatelliteinfosource = dynamic_cast<VirtualQGeoSatelliteInfoSource*>(self)) {
        vqgeosatelliteinfosource->QGeoSatelliteInfoSource::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QGeoSatelliteInfoSource::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGeoSatelliteInfoSource_OnTimerEvent(QGeoSatelliteInfoSource* self, intptr_t slot) {
    if (auto* vqgeosatelliteinfosource = dynamic_cast<VirtualQGeoSatelliteInfoSource*>(self))
        vqgeosatelliteinfosource->qgeosatelliteinfosource_timerevent_callback = reinterpret_cast<VirtualQGeoSatelliteInfoSource::QGeoSatelliteInfoSource_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QGeoSatelliteInfoSource_ChildEvent(QGeoSatelliteInfoSource* self, QChildEvent* event) {
    auto* vqgeosatelliteinfosource = dynamic_cast<VirtualQGeoSatelliteInfoSource*>(self);
    if (vqgeosatelliteinfosource) {
        vqgeosatelliteinfosource->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGeoSatelliteInfoSource::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGeoSatelliteInfoSource_SuperChildEvent(QGeoSatelliteInfoSource* self, QChildEvent* event) {
    if (auto* vqgeosatelliteinfosource = dynamic_cast<VirtualQGeoSatelliteInfoSource*>(self)) {
        vqgeosatelliteinfosource->QGeoSatelliteInfoSource::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QGeoSatelliteInfoSource::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGeoSatelliteInfoSource_OnChildEvent(QGeoSatelliteInfoSource* self, intptr_t slot) {
    if (auto* vqgeosatelliteinfosource = dynamic_cast<VirtualQGeoSatelliteInfoSource*>(self))
        vqgeosatelliteinfosource->qgeosatelliteinfosource_childevent_callback = reinterpret_cast<VirtualQGeoSatelliteInfoSource::QGeoSatelliteInfoSource_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QGeoSatelliteInfoSource_CustomEvent(QGeoSatelliteInfoSource* self, QEvent* event) {
    auto* vqgeosatelliteinfosource = dynamic_cast<VirtualQGeoSatelliteInfoSource*>(self);
    if (vqgeosatelliteinfosource) {
        vqgeosatelliteinfosource->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGeoSatelliteInfoSource::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGeoSatelliteInfoSource_SuperCustomEvent(QGeoSatelliteInfoSource* self, QEvent* event) {
    if (auto* vqgeosatelliteinfosource = dynamic_cast<VirtualQGeoSatelliteInfoSource*>(self)) {
        vqgeosatelliteinfosource->QGeoSatelliteInfoSource::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QGeoSatelliteInfoSource::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGeoSatelliteInfoSource_OnCustomEvent(QGeoSatelliteInfoSource* self, intptr_t slot) {
    if (auto* vqgeosatelliteinfosource = dynamic_cast<VirtualQGeoSatelliteInfoSource*>(self))
        vqgeosatelliteinfosource->qgeosatelliteinfosource_customevent_callback = reinterpret_cast<VirtualQGeoSatelliteInfoSource::QGeoSatelliteInfoSource_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QGeoSatelliteInfoSource_ConnectNotify(QGeoSatelliteInfoSource* self, const QMetaMethod* signal) {
    auto* vqgeosatelliteinfosource = dynamic_cast<VirtualQGeoSatelliteInfoSource*>(self);
    if (vqgeosatelliteinfosource) {
        vqgeosatelliteinfosource->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QGeoSatelliteInfoSource::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QGeoSatelliteInfoSource_SuperConnectNotify(QGeoSatelliteInfoSource* self, const QMetaMethod* signal) {
    if (auto* vqgeosatelliteinfosource = dynamic_cast<VirtualQGeoSatelliteInfoSource*>(self)) {
        vqgeosatelliteinfosource->QGeoSatelliteInfoSource::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QGeoSatelliteInfoSource::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGeoSatelliteInfoSource_OnConnectNotify(QGeoSatelliteInfoSource* self, intptr_t slot) {
    if (auto* vqgeosatelliteinfosource = dynamic_cast<VirtualQGeoSatelliteInfoSource*>(self))
        vqgeosatelliteinfosource->qgeosatelliteinfosource_connectnotify_callback = reinterpret_cast<VirtualQGeoSatelliteInfoSource::QGeoSatelliteInfoSource_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QGeoSatelliteInfoSource_DisconnectNotify(QGeoSatelliteInfoSource* self, const QMetaMethod* signal) {
    auto* vqgeosatelliteinfosource = dynamic_cast<VirtualQGeoSatelliteInfoSource*>(self);
    if (vqgeosatelliteinfosource) {
        vqgeosatelliteinfosource->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QGeoSatelliteInfoSource::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QGeoSatelliteInfoSource_SuperDisconnectNotify(QGeoSatelliteInfoSource* self, const QMetaMethod* signal) {
    if (auto* vqgeosatelliteinfosource = dynamic_cast<VirtualQGeoSatelliteInfoSource*>(self)) {
        vqgeosatelliteinfosource->QGeoSatelliteInfoSource::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QGeoSatelliteInfoSource::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGeoSatelliteInfoSource_OnDisconnectNotify(QGeoSatelliteInfoSource* self, intptr_t slot) {
    if (auto* vqgeosatelliteinfosource = dynamic_cast<VirtualQGeoSatelliteInfoSource*>(self))
        vqgeosatelliteinfosource->qgeosatelliteinfosource_disconnectnotify_callback = reinterpret_cast<VirtualQGeoSatelliteInfoSource::QGeoSatelliteInfoSource_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* QGeoSatelliteInfoSource_Sender(const QGeoSatelliteInfoSource* self) {
    if (auto* vqgeosatelliteinfosource = const_cast<VirtualQGeoSatelliteInfoSource*>(dynamic_cast<const VirtualQGeoSatelliteInfoSource*>(self))) {
        return vqgeosatelliteinfosource->VirtualQGeoSatelliteInfoSource::sender();
    } else
        qFatal("Error: Protected method QGeoSatelliteInfoSource::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QGeoSatelliteInfoSource_SenderSignalIndex(const QGeoSatelliteInfoSource* self) {
    if (auto* vqgeosatelliteinfosource = const_cast<VirtualQGeoSatelliteInfoSource*>(dynamic_cast<const VirtualQGeoSatelliteInfoSource*>(self))) {
        return vqgeosatelliteinfosource->VirtualQGeoSatelliteInfoSource::senderSignalIndex();
    } else
        qFatal("Error: Protected method QGeoSatelliteInfoSource::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QGeoSatelliteInfoSource_Receivers(const QGeoSatelliteInfoSource* self, const char* signal) {
    if (auto* vqgeosatelliteinfosource = const_cast<VirtualQGeoSatelliteInfoSource*>(dynamic_cast<const VirtualQGeoSatelliteInfoSource*>(self))) {
        return vqgeosatelliteinfosource->VirtualQGeoSatelliteInfoSource::receivers(signal);
    } else
        qFatal("Error: Protected method QGeoSatelliteInfoSource::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QGeoSatelliteInfoSource_IsSignalConnected(const QGeoSatelliteInfoSource* self, const QMetaMethod* signal) {
    if (auto* vqgeosatelliteinfosource = const_cast<VirtualQGeoSatelliteInfoSource*>(dynamic_cast<const VirtualQGeoSatelliteInfoSource*>(self))) {
        return vqgeosatelliteinfosource->VirtualQGeoSatelliteInfoSource::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QGeoSatelliteInfoSource::isSignalConnected called without a directly constructed type");
}

void QGeoSatelliteInfoSource_Delete(QGeoSatelliteInfoSource* self) {
    delete self;
}
