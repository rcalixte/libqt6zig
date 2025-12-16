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
#include <QByteArray>
#include <cstring>
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
    auto* vqgeopositioninfosource = dynamic_cast<VirtualQGeoPositionInfoSource*>(self);
    if (vqgeopositioninfosource && vqgeopositioninfosource->isVirtualQGeoPositionInfoSource) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQGeoPositionInfoSource*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

void QGeoPositionInfoSource_SetUpdateInterval(QGeoPositionInfoSource* self, int msec) {
    auto* vqgeopositioninfosource = dynamic_cast<VirtualQGeoPositionInfoSource*>(self);
    if (vqgeopositioninfosource && vqgeopositioninfosource->isVirtualQGeoPositionInfoSource) {
        self->setUpdateInterval(static_cast<int>(msec));
    } else {
        ((VirtualQGeoPositionInfoSource*)self)->setUpdateInterval(static_cast<int>(msec));
    }
}

int QGeoPositionInfoSource_UpdateInterval(const QGeoPositionInfoSource* self) {
    return self->updateInterval();
}

void QGeoPositionInfoSource_SetPreferredPositioningMethods(QGeoPositionInfoSource* self, int methods) {
    auto* vqgeopositioninfosource = dynamic_cast<VirtualQGeoPositionInfoSource*>(self);
    if (vqgeopositioninfosource && vqgeopositioninfosource->isVirtualQGeoPositionInfoSource) {
        self->setPreferredPositioningMethods(static_cast<QGeoPositionInfoSource::PositioningMethods>(methods));
    } else {
        ((VirtualQGeoPositionInfoSource*)self)->setPreferredPositioningMethods(static_cast<QGeoPositionInfoSource::PositioningMethods>(methods));
    }
}

int QGeoPositionInfoSource_PreferredPositioningMethods(const QGeoPositionInfoSource* self) {
    return static_cast<int>(self->preferredPositioningMethods());
}

QGeoPositionInfo* QGeoPositionInfoSource_LastKnownPosition(const QGeoPositionInfoSource* self, bool fromSatellitePositioningMethodsOnly) {
    auto* vqgeopositioninfosource = dynamic_cast<const VirtualQGeoPositionInfoSource*>(self);
    if (vqgeopositioninfosource && vqgeopositioninfosource->isVirtualQGeoPositionInfoSource) {
        return new QGeoPositionInfo(vqgeopositioninfosource->lastKnownPosition(fromSatellitePositioningMethodsOnly));
    } else {
        return new QGeoPositionInfo(((VirtualQGeoPositionInfoSource*)self)->lastKnownPosition(fromSatellitePositioningMethodsOnly));
    }
}

int QGeoPositionInfoSource_SupportedPositioningMethods(const QGeoPositionInfoSource* self) {
    auto* vqgeopositioninfosource = dynamic_cast<const VirtualQGeoPositionInfoSource*>(self);
    if (vqgeopositioninfosource && vqgeopositioninfosource->isVirtualQGeoPositionInfoSource) {
        return static_cast<int>(vqgeopositioninfosource->supportedPositioningMethods());
    } else {
        return static_cast<int>(((VirtualQGeoPositionInfoSource*)self)->supportedPositioningMethods());
    }
}

int QGeoPositionInfoSource_MinimumUpdateInterval(const QGeoPositionInfoSource* self) {
    auto* vqgeopositioninfosource = dynamic_cast<const VirtualQGeoPositionInfoSource*>(self);
    if (vqgeopositioninfosource && vqgeopositioninfosource->isVirtualQGeoPositionInfoSource) {
        return vqgeopositioninfosource->minimumUpdateInterval();
    } else {
        return ((VirtualQGeoPositionInfoSource*)self)->minimumUpdateInterval();
    }
}

libqt_string QGeoPositionInfoSource_SourceName(const QGeoPositionInfoSource* self) {
    QString _ret = self->sourceName();
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
    auto* vqgeopositioninfosource = dynamic_cast<VirtualQGeoPositionInfoSource*>(self);
    if (vqgeopositioninfosource && vqgeopositioninfosource->isVirtualQGeoPositionInfoSource) {
        return self->setBackendProperty(name_QString, *value);
    } else {
        return ((VirtualQGeoPositionInfoSource*)self)->setBackendProperty(name_QString, *value);
    }
}

QVariant* QGeoPositionInfoSource_BackendProperty(const QGeoPositionInfoSource* self, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    auto* vqgeopositioninfosource = dynamic_cast<const VirtualQGeoPositionInfoSource*>(self);
    if (vqgeopositioninfosource && vqgeopositioninfosource->isVirtualQGeoPositionInfoSource) {
        return new QVariant(self->backendProperty(name_QString));
    } else {
        return new QVariant(((VirtualQGeoPositionInfoSource*)self)->backendProperty(name_QString));
    }
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
        parameters_QMap[parameters_karr_i_QString] = *(parameters_varr[i]);
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
        parameters_QMap[parameters_karr_i_QString] = *(parameters_varr[i]);
    }
    return QGeoPositionInfoSource::createSource(sourceName_QString, parameters_QMap, parent);
}

libqt_list /* of libqt_string */ QGeoPositionInfoSource_AvailableSources() {
    QList<QString> _ret = QGeoPositionInfoSource::availableSources();
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        QString _lv_ret = _ret[i];
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
    auto* vqgeopositioninfosource = dynamic_cast<const VirtualQGeoPositionInfoSource*>(self);
    if (vqgeopositioninfosource && vqgeopositioninfosource->isVirtualQGeoPositionInfoSource) {
        return static_cast<int>(vqgeopositioninfosource->error());
    } else {
        return static_cast<int>(((VirtualQGeoPositionInfoSource*)self)->error());
    }
}

void QGeoPositionInfoSource_StartUpdates(QGeoPositionInfoSource* self) {
    auto* vqgeopositioninfosource = dynamic_cast<VirtualQGeoPositionInfoSource*>(self);
    if (vqgeopositioninfosource && vqgeopositioninfosource->isVirtualQGeoPositionInfoSource) {
        vqgeopositioninfosource->startUpdates();
    } else {
        ((VirtualQGeoPositionInfoSource*)self)->startUpdates();
    }
}

void QGeoPositionInfoSource_StopUpdates(QGeoPositionInfoSource* self) {
    auto* vqgeopositioninfosource = dynamic_cast<VirtualQGeoPositionInfoSource*>(self);
    if (vqgeopositioninfosource && vqgeopositioninfosource->isVirtualQGeoPositionInfoSource) {
        vqgeopositioninfosource->stopUpdates();
    } else {
        ((VirtualQGeoPositionInfoSource*)self)->stopUpdates();
    }
}

void QGeoPositionInfoSource_RequestUpdate(QGeoPositionInfoSource* self, int timeout) {
    auto* vqgeopositioninfosource = dynamic_cast<VirtualQGeoPositionInfoSource*>(self);
    if (vqgeopositioninfosource && vqgeopositioninfosource->isVirtualQGeoPositionInfoSource) {
        vqgeopositioninfosource->requestUpdate(static_cast<int>(timeout));
    } else {
        ((VirtualQGeoPositionInfoSource*)self)->requestUpdate(static_cast<int>(timeout));
    }
}

void QGeoPositionInfoSource_PositionUpdated(QGeoPositionInfoSource* self, const QGeoPositionInfo* update) {
    self->positionUpdated(*update);
}

void QGeoPositionInfoSource_Connect_PositionUpdated(QGeoPositionInfoSource* self, intptr_t slot) {
    void (*slotFunc)(QGeoPositionInfoSource*, QGeoPositionInfo*) = reinterpret_cast<void (*)(QGeoPositionInfoSource*, QGeoPositionInfo*)>(slot);
    QGeoPositionInfoSource::connect(self, &QGeoPositionInfoSource::positionUpdated, [self, slotFunc](const QGeoPositionInfo& update) {
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
    QGeoPositionInfoSource::connect(self, &QGeoPositionInfoSource::errorOccurred, [self, slotFunc](QGeoPositionInfoSource::Error param1) {
        int sigval1 = static_cast<int>(param1);
        slotFunc(self, sigval1);
    });
}

void QGeoPositionInfoSource_SupportedPositioningMethodsChanged(QGeoPositionInfoSource* self) {
    self->supportedPositioningMethodsChanged();
}

void QGeoPositionInfoSource_Connect_SupportedPositioningMethodsChanged(QGeoPositionInfoSource* self, intptr_t slot) {
    void (*slotFunc)(QGeoPositionInfoSource*) = reinterpret_cast<void (*)(QGeoPositionInfoSource*)>(slot);
    QGeoPositionInfoSource::connect(self, &QGeoPositionInfoSource::supportedPositioningMethodsChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

// Base class handler implementation
int QGeoPositionInfoSource_QBaseMetacall(QGeoPositionInfoSource* self, int param1, int param2, void** param3) {
    auto* vqgeopositioninfosource = dynamic_cast<VirtualQGeoPositionInfoSource*>(self);
    if (vqgeopositioninfosource && vqgeopositioninfosource->isVirtualQGeoPositionInfoSource) {
        vqgeopositioninfosource->setQGeoPositionInfoSource_Metacall_IsBase(true);
        return vqgeopositioninfosource->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->QGeoPositionInfoSource::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void QGeoPositionInfoSource_OnMetacall(QGeoPositionInfoSource* self, intptr_t slot) {
    auto* vqgeopositioninfosource = dynamic_cast<VirtualQGeoPositionInfoSource*>(self);
    if (vqgeopositioninfosource && vqgeopositioninfosource->isVirtualQGeoPositionInfoSource) {
        vqgeopositioninfosource->setQGeoPositionInfoSource_Metacall_Callback(reinterpret_cast<VirtualQGeoPositionInfoSource::QGeoPositionInfoSource_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
void QGeoPositionInfoSource_QBaseSetUpdateInterval(QGeoPositionInfoSource* self, int msec) {
    auto* vqgeopositioninfosource = dynamic_cast<VirtualQGeoPositionInfoSource*>(self);
    if (vqgeopositioninfosource && vqgeopositioninfosource->isVirtualQGeoPositionInfoSource) {
        vqgeopositioninfosource->setQGeoPositionInfoSource_SetUpdateInterval_IsBase(true);
        vqgeopositioninfosource->setUpdateInterval(static_cast<int>(msec));
    } else {
        self->QGeoPositionInfoSource::setUpdateInterval(static_cast<int>(msec));
    }
}

// Auxiliary method to allow providing re-implementation
void QGeoPositionInfoSource_OnSetUpdateInterval(QGeoPositionInfoSource* self, intptr_t slot) {
    auto* vqgeopositioninfosource = dynamic_cast<VirtualQGeoPositionInfoSource*>(self);
    if (vqgeopositioninfosource && vqgeopositioninfosource->isVirtualQGeoPositionInfoSource) {
        vqgeopositioninfosource->setQGeoPositionInfoSource_SetUpdateInterval_Callback(reinterpret_cast<VirtualQGeoPositionInfoSource::QGeoPositionInfoSource_SetUpdateInterval_Callback>(slot));
    }
}

// Base class handler implementation
void QGeoPositionInfoSource_QBaseSetPreferredPositioningMethods(QGeoPositionInfoSource* self, int methods) {
    auto* vqgeopositioninfosource = dynamic_cast<VirtualQGeoPositionInfoSource*>(self);
    if (vqgeopositioninfosource && vqgeopositioninfosource->isVirtualQGeoPositionInfoSource) {
        vqgeopositioninfosource->setQGeoPositionInfoSource_SetPreferredPositioningMethods_IsBase(true);
        vqgeopositioninfosource->setPreferredPositioningMethods(static_cast<QGeoPositionInfoSource::PositioningMethods>(methods));
    } else {
        self->QGeoPositionInfoSource::setPreferredPositioningMethods(static_cast<QGeoPositionInfoSource::PositioningMethods>(methods));
    }
}

// Auxiliary method to allow providing re-implementation
void QGeoPositionInfoSource_OnSetPreferredPositioningMethods(QGeoPositionInfoSource* self, intptr_t slot) {
    auto* vqgeopositioninfosource = dynamic_cast<VirtualQGeoPositionInfoSource*>(self);
    if (vqgeopositioninfosource && vqgeopositioninfosource->isVirtualQGeoPositionInfoSource) {
        vqgeopositioninfosource->setQGeoPositionInfoSource_SetPreferredPositioningMethods_Callback(reinterpret_cast<VirtualQGeoPositionInfoSource::QGeoPositionInfoSource_SetPreferredPositioningMethods_Callback>(slot));
    }
}

// Base class handler implementation
QGeoPositionInfo* QGeoPositionInfoSource_QBaseLastKnownPosition(const QGeoPositionInfoSource* self, bool fromSatellitePositioningMethodsOnly) {
    auto* vqgeopositioninfosource = const_cast<VirtualQGeoPositionInfoSource*>(dynamic_cast<const VirtualQGeoPositionInfoSource*>(self));
    if (vqgeopositioninfosource && vqgeopositioninfosource->isVirtualQGeoPositionInfoSource) {
        vqgeopositioninfosource->setQGeoPositionInfoSource_LastKnownPosition_IsBase(true);
        return new QGeoPositionInfo(vqgeopositioninfosource->lastKnownPosition(fromSatellitePositioningMethodsOnly));
    } else {
        return new QGeoPositionInfo(((VirtualQGeoPositionInfoSource*)self)->lastKnownPosition(fromSatellitePositioningMethodsOnly));
    }
}

// Auxiliary method to allow providing re-implementation
void QGeoPositionInfoSource_OnLastKnownPosition(const QGeoPositionInfoSource* self, intptr_t slot) {
    auto* vqgeopositioninfosource = const_cast<VirtualQGeoPositionInfoSource*>(dynamic_cast<const VirtualQGeoPositionInfoSource*>(self));
    if (vqgeopositioninfosource && vqgeopositioninfosource->isVirtualQGeoPositionInfoSource) {
        vqgeopositioninfosource->setQGeoPositionInfoSource_LastKnownPosition_Callback(reinterpret_cast<VirtualQGeoPositionInfoSource::QGeoPositionInfoSource_LastKnownPosition_Callback>(slot));
    }
}

// Base class handler implementation
int QGeoPositionInfoSource_QBaseSupportedPositioningMethods(const QGeoPositionInfoSource* self) {
    auto* vqgeopositioninfosource = const_cast<VirtualQGeoPositionInfoSource*>(dynamic_cast<const VirtualQGeoPositionInfoSource*>(self));
    if (vqgeopositioninfosource && vqgeopositioninfosource->isVirtualQGeoPositionInfoSource) {
        vqgeopositioninfosource->setQGeoPositionInfoSource_SupportedPositioningMethods_IsBase(true);
        return static_cast<int>(vqgeopositioninfosource->supportedPositioningMethods());
    } else {
        return static_cast<int>(((VirtualQGeoPositionInfoSource*)self)->supportedPositioningMethods());
    }
}

// Auxiliary method to allow providing re-implementation
void QGeoPositionInfoSource_OnSupportedPositioningMethods(const QGeoPositionInfoSource* self, intptr_t slot) {
    auto* vqgeopositioninfosource = const_cast<VirtualQGeoPositionInfoSource*>(dynamic_cast<const VirtualQGeoPositionInfoSource*>(self));
    if (vqgeopositioninfosource && vqgeopositioninfosource->isVirtualQGeoPositionInfoSource) {
        vqgeopositioninfosource->setQGeoPositionInfoSource_SupportedPositioningMethods_Callback(reinterpret_cast<VirtualQGeoPositionInfoSource::QGeoPositionInfoSource_SupportedPositioningMethods_Callback>(slot));
    }
}

// Base class handler implementation
int QGeoPositionInfoSource_QBaseMinimumUpdateInterval(const QGeoPositionInfoSource* self) {
    auto* vqgeopositioninfosource = const_cast<VirtualQGeoPositionInfoSource*>(dynamic_cast<const VirtualQGeoPositionInfoSource*>(self));
    if (vqgeopositioninfosource && vqgeopositioninfosource->isVirtualQGeoPositionInfoSource) {
        vqgeopositioninfosource->setQGeoPositionInfoSource_MinimumUpdateInterval_IsBase(true);
        return vqgeopositioninfosource->minimumUpdateInterval();
    } else {
        return ((VirtualQGeoPositionInfoSource*)self)->minimumUpdateInterval();
    }
}

// Auxiliary method to allow providing re-implementation
void QGeoPositionInfoSource_OnMinimumUpdateInterval(const QGeoPositionInfoSource* self, intptr_t slot) {
    auto* vqgeopositioninfosource = const_cast<VirtualQGeoPositionInfoSource*>(dynamic_cast<const VirtualQGeoPositionInfoSource*>(self));
    if (vqgeopositioninfosource && vqgeopositioninfosource->isVirtualQGeoPositionInfoSource) {
        vqgeopositioninfosource->setQGeoPositionInfoSource_MinimumUpdateInterval_Callback(reinterpret_cast<VirtualQGeoPositionInfoSource::QGeoPositionInfoSource_MinimumUpdateInterval_Callback>(slot));
    }
}

// Base class handler implementation
bool QGeoPositionInfoSource_QBaseSetBackendProperty(QGeoPositionInfoSource* self, const libqt_string name, const QVariant* value) {
    auto* vqgeopositioninfosource = dynamic_cast<VirtualQGeoPositionInfoSource*>(self);
    QString name_QString = QString::fromUtf8(name.data, name.len);
    if (vqgeopositioninfosource && vqgeopositioninfosource->isVirtualQGeoPositionInfoSource) {
        vqgeopositioninfosource->setQGeoPositionInfoSource_SetBackendProperty_IsBase(true);
        return vqgeopositioninfosource->setBackendProperty(name_QString, *value);
    } else {
        return self->QGeoPositionInfoSource::setBackendProperty(name_QString, *value);
    }
}

// Auxiliary method to allow providing re-implementation
void QGeoPositionInfoSource_OnSetBackendProperty(QGeoPositionInfoSource* self, intptr_t slot) {
    auto* vqgeopositioninfosource = dynamic_cast<VirtualQGeoPositionInfoSource*>(self);
    if (vqgeopositioninfosource && vqgeopositioninfosource->isVirtualQGeoPositionInfoSource) {
        vqgeopositioninfosource->setQGeoPositionInfoSource_SetBackendProperty_Callback(reinterpret_cast<VirtualQGeoPositionInfoSource::QGeoPositionInfoSource_SetBackendProperty_Callback>(slot));
    }
}

// Base class handler implementation
QVariant* QGeoPositionInfoSource_QBaseBackendProperty(const QGeoPositionInfoSource* self, const libqt_string name) {
    auto* vqgeopositioninfosource = const_cast<VirtualQGeoPositionInfoSource*>(dynamic_cast<const VirtualQGeoPositionInfoSource*>(self));
    QString name_QString = QString::fromUtf8(name.data, name.len);
    if (vqgeopositioninfosource && vqgeopositioninfosource->isVirtualQGeoPositionInfoSource) {
        vqgeopositioninfosource->setQGeoPositionInfoSource_BackendProperty_IsBase(true);
        return new QVariant(vqgeopositioninfosource->backendProperty(name_QString));
    } else {
        return new QVariant(((VirtualQGeoPositionInfoSource*)self)->backendProperty(name_QString));
    }
}

// Auxiliary method to allow providing re-implementation
void QGeoPositionInfoSource_OnBackendProperty(const QGeoPositionInfoSource* self, intptr_t slot) {
    auto* vqgeopositioninfosource = const_cast<VirtualQGeoPositionInfoSource*>(dynamic_cast<const VirtualQGeoPositionInfoSource*>(self));
    if (vqgeopositioninfosource && vqgeopositioninfosource->isVirtualQGeoPositionInfoSource) {
        vqgeopositioninfosource->setQGeoPositionInfoSource_BackendProperty_Callback(reinterpret_cast<VirtualQGeoPositionInfoSource::QGeoPositionInfoSource_BackendProperty_Callback>(slot));
    }
}

// Base class handler implementation
int QGeoPositionInfoSource_QBaseError(const QGeoPositionInfoSource* self) {
    auto* vqgeopositioninfosource = const_cast<VirtualQGeoPositionInfoSource*>(dynamic_cast<const VirtualQGeoPositionInfoSource*>(self));
    if (vqgeopositioninfosource && vqgeopositioninfosource->isVirtualQGeoPositionInfoSource) {
        vqgeopositioninfosource->setQGeoPositionInfoSource_Error_IsBase(true);
        return static_cast<int>(vqgeopositioninfosource->error());
    } else {
        return static_cast<int>(((VirtualQGeoPositionInfoSource*)self)->error());
    }
}

// Auxiliary method to allow providing re-implementation
void QGeoPositionInfoSource_OnError(const QGeoPositionInfoSource* self, intptr_t slot) {
    auto* vqgeopositioninfosource = const_cast<VirtualQGeoPositionInfoSource*>(dynamic_cast<const VirtualQGeoPositionInfoSource*>(self));
    if (vqgeopositioninfosource && vqgeopositioninfosource->isVirtualQGeoPositionInfoSource) {
        vqgeopositioninfosource->setQGeoPositionInfoSource_Error_Callback(reinterpret_cast<VirtualQGeoPositionInfoSource::QGeoPositionInfoSource_Error_Callback>(slot));
    }
}

// Base class handler implementation
void QGeoPositionInfoSource_QBaseStartUpdates(QGeoPositionInfoSource* self) {
    auto* vqgeopositioninfosource = dynamic_cast<VirtualQGeoPositionInfoSource*>(self);
    if (vqgeopositioninfosource && vqgeopositioninfosource->isVirtualQGeoPositionInfoSource) {
        vqgeopositioninfosource->setQGeoPositionInfoSource_StartUpdates_IsBase(true);
        vqgeopositioninfosource->startUpdates();
    } else {
        ((VirtualQGeoPositionInfoSource*)self)->startUpdates();
    }
}

// Auxiliary method to allow providing re-implementation
void QGeoPositionInfoSource_OnStartUpdates(QGeoPositionInfoSource* self, intptr_t slot) {
    auto* vqgeopositioninfosource = dynamic_cast<VirtualQGeoPositionInfoSource*>(self);
    if (vqgeopositioninfosource && vqgeopositioninfosource->isVirtualQGeoPositionInfoSource) {
        vqgeopositioninfosource->setQGeoPositionInfoSource_StartUpdates_Callback(reinterpret_cast<VirtualQGeoPositionInfoSource::QGeoPositionInfoSource_StartUpdates_Callback>(slot));
    }
}

// Base class handler implementation
void QGeoPositionInfoSource_QBaseStopUpdates(QGeoPositionInfoSource* self) {
    auto* vqgeopositioninfosource = dynamic_cast<VirtualQGeoPositionInfoSource*>(self);
    if (vqgeopositioninfosource && vqgeopositioninfosource->isVirtualQGeoPositionInfoSource) {
        vqgeopositioninfosource->setQGeoPositionInfoSource_StopUpdates_IsBase(true);
        vqgeopositioninfosource->stopUpdates();
    } else {
        ((VirtualQGeoPositionInfoSource*)self)->stopUpdates();
    }
}

// Auxiliary method to allow providing re-implementation
void QGeoPositionInfoSource_OnStopUpdates(QGeoPositionInfoSource* self, intptr_t slot) {
    auto* vqgeopositioninfosource = dynamic_cast<VirtualQGeoPositionInfoSource*>(self);
    if (vqgeopositioninfosource && vqgeopositioninfosource->isVirtualQGeoPositionInfoSource) {
        vqgeopositioninfosource->setQGeoPositionInfoSource_StopUpdates_Callback(reinterpret_cast<VirtualQGeoPositionInfoSource::QGeoPositionInfoSource_StopUpdates_Callback>(slot));
    }
}

// Base class handler implementation
void QGeoPositionInfoSource_QBaseRequestUpdate(QGeoPositionInfoSource* self, int timeout) {
    auto* vqgeopositioninfosource = dynamic_cast<VirtualQGeoPositionInfoSource*>(self);
    if (vqgeopositioninfosource && vqgeopositioninfosource->isVirtualQGeoPositionInfoSource) {
        vqgeopositioninfosource->setQGeoPositionInfoSource_RequestUpdate_IsBase(true);
        vqgeopositioninfosource->requestUpdate(static_cast<int>(timeout));
    } else {
        ((VirtualQGeoPositionInfoSource*)self)->requestUpdate(static_cast<int>(timeout));
    }
}

// Auxiliary method to allow providing re-implementation
void QGeoPositionInfoSource_OnRequestUpdate(QGeoPositionInfoSource* self, intptr_t slot) {
    auto* vqgeopositioninfosource = dynamic_cast<VirtualQGeoPositionInfoSource*>(self);
    if (vqgeopositioninfosource && vqgeopositioninfosource->isVirtualQGeoPositionInfoSource) {
        vqgeopositioninfosource->setQGeoPositionInfoSource_RequestUpdate_Callback(reinterpret_cast<VirtualQGeoPositionInfoSource::QGeoPositionInfoSource_RequestUpdate_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGeoPositionInfoSource_Event(QGeoPositionInfoSource* self, QEvent* event) {
    auto* vqgeopositioninfosource = dynamic_cast<VirtualQGeoPositionInfoSource*>(self);
    if (vqgeopositioninfosource && vqgeopositioninfosource->isVirtualQGeoPositionInfoSource) {
        return vqgeopositioninfosource->event(event);
    } else {
        return self->QGeoPositionInfoSource::event(event);
    }
}

// Base class handler implementation
bool QGeoPositionInfoSource_QBaseEvent(QGeoPositionInfoSource* self, QEvent* event) {
    auto* vqgeopositioninfosource = dynamic_cast<VirtualQGeoPositionInfoSource*>(self);
    if (vqgeopositioninfosource && vqgeopositioninfosource->isVirtualQGeoPositionInfoSource) {
        vqgeopositioninfosource->setQGeoPositionInfoSource_Event_IsBase(true);
        return vqgeopositioninfosource->event(event);
    } else {
        return self->QGeoPositionInfoSource::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGeoPositionInfoSource_OnEvent(QGeoPositionInfoSource* self, intptr_t slot) {
    auto* vqgeopositioninfosource = dynamic_cast<VirtualQGeoPositionInfoSource*>(self);
    if (vqgeopositioninfosource && vqgeopositioninfosource->isVirtualQGeoPositionInfoSource) {
        vqgeopositioninfosource->setQGeoPositionInfoSource_Event_Callback(reinterpret_cast<VirtualQGeoPositionInfoSource::QGeoPositionInfoSource_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGeoPositionInfoSource_EventFilter(QGeoPositionInfoSource* self, QObject* watched, QEvent* event) {
    auto* vqgeopositioninfosource = dynamic_cast<VirtualQGeoPositionInfoSource*>(self);
    if (vqgeopositioninfosource && vqgeopositioninfosource->isVirtualQGeoPositionInfoSource) {
        return vqgeopositioninfosource->eventFilter(watched, event);
    } else {
        return self->QGeoPositionInfoSource::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QGeoPositionInfoSource_QBaseEventFilter(QGeoPositionInfoSource* self, QObject* watched, QEvent* event) {
    auto* vqgeopositioninfosource = dynamic_cast<VirtualQGeoPositionInfoSource*>(self);
    if (vqgeopositioninfosource && vqgeopositioninfosource->isVirtualQGeoPositionInfoSource) {
        vqgeopositioninfosource->setQGeoPositionInfoSource_EventFilter_IsBase(true);
        return vqgeopositioninfosource->eventFilter(watched, event);
    } else {
        return self->QGeoPositionInfoSource::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGeoPositionInfoSource_OnEventFilter(QGeoPositionInfoSource* self, intptr_t slot) {
    auto* vqgeopositioninfosource = dynamic_cast<VirtualQGeoPositionInfoSource*>(self);
    if (vqgeopositioninfosource && vqgeopositioninfosource->isVirtualQGeoPositionInfoSource) {
        vqgeopositioninfosource->setQGeoPositionInfoSource_EventFilter_Callback(reinterpret_cast<VirtualQGeoPositionInfoSource::QGeoPositionInfoSource_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QGeoPositionInfoSource_TimerEvent(QGeoPositionInfoSource* self, QTimerEvent* event) {
    auto* vqgeopositioninfosource = dynamic_cast<VirtualQGeoPositionInfoSource*>(self);
    if (vqgeopositioninfosource && vqgeopositioninfosource->isVirtualQGeoPositionInfoSource) {
        vqgeopositioninfosource->timerEvent(event);
    } else {
        ((VirtualQGeoPositionInfoSource*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QGeoPositionInfoSource_QBaseTimerEvent(QGeoPositionInfoSource* self, QTimerEvent* event) {
    auto* vqgeopositioninfosource = dynamic_cast<VirtualQGeoPositionInfoSource*>(self);
    if (vqgeopositioninfosource && vqgeopositioninfosource->isVirtualQGeoPositionInfoSource) {
        vqgeopositioninfosource->setQGeoPositionInfoSource_TimerEvent_IsBase(true);
        vqgeopositioninfosource->timerEvent(event);
    } else {
        ((VirtualQGeoPositionInfoSource*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGeoPositionInfoSource_OnTimerEvent(QGeoPositionInfoSource* self, intptr_t slot) {
    auto* vqgeopositioninfosource = dynamic_cast<VirtualQGeoPositionInfoSource*>(self);
    if (vqgeopositioninfosource && vqgeopositioninfosource->isVirtualQGeoPositionInfoSource) {
        vqgeopositioninfosource->setQGeoPositionInfoSource_TimerEvent_Callback(reinterpret_cast<VirtualQGeoPositionInfoSource::QGeoPositionInfoSource_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGeoPositionInfoSource_ChildEvent(QGeoPositionInfoSource* self, QChildEvent* event) {
    auto* vqgeopositioninfosource = dynamic_cast<VirtualQGeoPositionInfoSource*>(self);
    if (vqgeopositioninfosource && vqgeopositioninfosource->isVirtualQGeoPositionInfoSource) {
        vqgeopositioninfosource->childEvent(event);
    } else {
        ((VirtualQGeoPositionInfoSource*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QGeoPositionInfoSource_QBaseChildEvent(QGeoPositionInfoSource* self, QChildEvent* event) {
    auto* vqgeopositioninfosource = dynamic_cast<VirtualQGeoPositionInfoSource*>(self);
    if (vqgeopositioninfosource && vqgeopositioninfosource->isVirtualQGeoPositionInfoSource) {
        vqgeopositioninfosource->setQGeoPositionInfoSource_ChildEvent_IsBase(true);
        vqgeopositioninfosource->childEvent(event);
    } else {
        ((VirtualQGeoPositionInfoSource*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGeoPositionInfoSource_OnChildEvent(QGeoPositionInfoSource* self, intptr_t slot) {
    auto* vqgeopositioninfosource = dynamic_cast<VirtualQGeoPositionInfoSource*>(self);
    if (vqgeopositioninfosource && vqgeopositioninfosource->isVirtualQGeoPositionInfoSource) {
        vqgeopositioninfosource->setQGeoPositionInfoSource_ChildEvent_Callback(reinterpret_cast<VirtualQGeoPositionInfoSource::QGeoPositionInfoSource_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGeoPositionInfoSource_CustomEvent(QGeoPositionInfoSource* self, QEvent* event) {
    auto* vqgeopositioninfosource = dynamic_cast<VirtualQGeoPositionInfoSource*>(self);
    if (vqgeopositioninfosource && vqgeopositioninfosource->isVirtualQGeoPositionInfoSource) {
        vqgeopositioninfosource->customEvent(event);
    } else {
        ((VirtualQGeoPositionInfoSource*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QGeoPositionInfoSource_QBaseCustomEvent(QGeoPositionInfoSource* self, QEvent* event) {
    auto* vqgeopositioninfosource = dynamic_cast<VirtualQGeoPositionInfoSource*>(self);
    if (vqgeopositioninfosource && vqgeopositioninfosource->isVirtualQGeoPositionInfoSource) {
        vqgeopositioninfosource->setQGeoPositionInfoSource_CustomEvent_IsBase(true);
        vqgeopositioninfosource->customEvent(event);
    } else {
        ((VirtualQGeoPositionInfoSource*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGeoPositionInfoSource_OnCustomEvent(QGeoPositionInfoSource* self, intptr_t slot) {
    auto* vqgeopositioninfosource = dynamic_cast<VirtualQGeoPositionInfoSource*>(self);
    if (vqgeopositioninfosource && vqgeopositioninfosource->isVirtualQGeoPositionInfoSource) {
        vqgeopositioninfosource->setQGeoPositionInfoSource_CustomEvent_Callback(reinterpret_cast<VirtualQGeoPositionInfoSource::QGeoPositionInfoSource_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGeoPositionInfoSource_ConnectNotify(QGeoPositionInfoSource* self, const QMetaMethod* signal) {
    auto* vqgeopositioninfosource = dynamic_cast<VirtualQGeoPositionInfoSource*>(self);
    if (vqgeopositioninfosource && vqgeopositioninfosource->isVirtualQGeoPositionInfoSource) {
        vqgeopositioninfosource->connectNotify(*signal);
    } else {
        ((VirtualQGeoPositionInfoSource*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QGeoPositionInfoSource_QBaseConnectNotify(QGeoPositionInfoSource* self, const QMetaMethod* signal) {
    auto* vqgeopositioninfosource = dynamic_cast<VirtualQGeoPositionInfoSource*>(self);
    if (vqgeopositioninfosource && vqgeopositioninfosource->isVirtualQGeoPositionInfoSource) {
        vqgeopositioninfosource->setQGeoPositionInfoSource_ConnectNotify_IsBase(true);
        vqgeopositioninfosource->connectNotify(*signal);
    } else {
        ((VirtualQGeoPositionInfoSource*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QGeoPositionInfoSource_OnConnectNotify(QGeoPositionInfoSource* self, intptr_t slot) {
    auto* vqgeopositioninfosource = dynamic_cast<VirtualQGeoPositionInfoSource*>(self);
    if (vqgeopositioninfosource && vqgeopositioninfosource->isVirtualQGeoPositionInfoSource) {
        vqgeopositioninfosource->setQGeoPositionInfoSource_ConnectNotify_Callback(reinterpret_cast<VirtualQGeoPositionInfoSource::QGeoPositionInfoSource_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QGeoPositionInfoSource_DisconnectNotify(QGeoPositionInfoSource* self, const QMetaMethod* signal) {
    auto* vqgeopositioninfosource = dynamic_cast<VirtualQGeoPositionInfoSource*>(self);
    if (vqgeopositioninfosource && vqgeopositioninfosource->isVirtualQGeoPositionInfoSource) {
        vqgeopositioninfosource->disconnectNotify(*signal);
    } else {
        ((VirtualQGeoPositionInfoSource*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QGeoPositionInfoSource_QBaseDisconnectNotify(QGeoPositionInfoSource* self, const QMetaMethod* signal) {
    auto* vqgeopositioninfosource = dynamic_cast<VirtualQGeoPositionInfoSource*>(self);
    if (vqgeopositioninfosource && vqgeopositioninfosource->isVirtualQGeoPositionInfoSource) {
        vqgeopositioninfosource->setQGeoPositionInfoSource_DisconnectNotify_IsBase(true);
        vqgeopositioninfosource->disconnectNotify(*signal);
    } else {
        ((VirtualQGeoPositionInfoSource*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QGeoPositionInfoSource_OnDisconnectNotify(QGeoPositionInfoSource* self, intptr_t slot) {
    auto* vqgeopositioninfosource = dynamic_cast<VirtualQGeoPositionInfoSource*>(self);
    if (vqgeopositioninfosource && vqgeopositioninfosource->isVirtualQGeoPositionInfoSource) {
        vqgeopositioninfosource->setQGeoPositionInfoSource_DisconnectNotify_Callback(reinterpret_cast<VirtualQGeoPositionInfoSource::QGeoPositionInfoSource_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QGeoPositionInfoSource_Sender(const QGeoPositionInfoSource* self) {
    auto* vqgeopositioninfosource = const_cast<VirtualQGeoPositionInfoSource*>(dynamic_cast<const VirtualQGeoPositionInfoSource*>(self));
    if (vqgeopositioninfosource && vqgeopositioninfosource->isVirtualQGeoPositionInfoSource) {
        return vqgeopositioninfosource->sender();
    } else {
        return ((VirtualQGeoPositionInfoSource*)self)->sender();
    }
}

// Base class handler implementation
QObject* QGeoPositionInfoSource_QBaseSender(const QGeoPositionInfoSource* self) {
    auto* vqgeopositioninfosource = const_cast<VirtualQGeoPositionInfoSource*>(dynamic_cast<const VirtualQGeoPositionInfoSource*>(self));
    if (vqgeopositioninfosource && vqgeopositioninfosource->isVirtualQGeoPositionInfoSource) {
        vqgeopositioninfosource->setQGeoPositionInfoSource_Sender_IsBase(true);
        return vqgeopositioninfosource->sender();
    } else {
        return ((VirtualQGeoPositionInfoSource*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QGeoPositionInfoSource_OnSender(const QGeoPositionInfoSource* self, intptr_t slot) {
    auto* vqgeopositioninfosource = const_cast<VirtualQGeoPositionInfoSource*>(dynamic_cast<const VirtualQGeoPositionInfoSource*>(self));
    if (vqgeopositioninfosource && vqgeopositioninfosource->isVirtualQGeoPositionInfoSource) {
        vqgeopositioninfosource->setQGeoPositionInfoSource_Sender_Callback(reinterpret_cast<VirtualQGeoPositionInfoSource::QGeoPositionInfoSource_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QGeoPositionInfoSource_SenderSignalIndex(const QGeoPositionInfoSource* self) {
    auto* vqgeopositioninfosource = const_cast<VirtualQGeoPositionInfoSource*>(dynamic_cast<const VirtualQGeoPositionInfoSource*>(self));
    if (vqgeopositioninfosource && vqgeopositioninfosource->isVirtualQGeoPositionInfoSource) {
        return vqgeopositioninfosource->senderSignalIndex();
    } else {
        return ((VirtualQGeoPositionInfoSource*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QGeoPositionInfoSource_QBaseSenderSignalIndex(const QGeoPositionInfoSource* self) {
    auto* vqgeopositioninfosource = const_cast<VirtualQGeoPositionInfoSource*>(dynamic_cast<const VirtualQGeoPositionInfoSource*>(self));
    if (vqgeopositioninfosource && vqgeopositioninfosource->isVirtualQGeoPositionInfoSource) {
        vqgeopositioninfosource->setQGeoPositionInfoSource_SenderSignalIndex_IsBase(true);
        return vqgeopositioninfosource->senderSignalIndex();
    } else {
        return ((VirtualQGeoPositionInfoSource*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QGeoPositionInfoSource_OnSenderSignalIndex(const QGeoPositionInfoSource* self, intptr_t slot) {
    auto* vqgeopositioninfosource = const_cast<VirtualQGeoPositionInfoSource*>(dynamic_cast<const VirtualQGeoPositionInfoSource*>(self));
    if (vqgeopositioninfosource && vqgeopositioninfosource->isVirtualQGeoPositionInfoSource) {
        vqgeopositioninfosource->setQGeoPositionInfoSource_SenderSignalIndex_Callback(reinterpret_cast<VirtualQGeoPositionInfoSource::QGeoPositionInfoSource_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QGeoPositionInfoSource_Receivers(const QGeoPositionInfoSource* self, const char* signal) {
    auto* vqgeopositioninfosource = const_cast<VirtualQGeoPositionInfoSource*>(dynamic_cast<const VirtualQGeoPositionInfoSource*>(self));
    if (vqgeopositioninfosource && vqgeopositioninfosource->isVirtualQGeoPositionInfoSource) {
        return vqgeopositioninfosource->receivers(signal);
    } else {
        return ((VirtualQGeoPositionInfoSource*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QGeoPositionInfoSource_QBaseReceivers(const QGeoPositionInfoSource* self, const char* signal) {
    auto* vqgeopositioninfosource = const_cast<VirtualQGeoPositionInfoSource*>(dynamic_cast<const VirtualQGeoPositionInfoSource*>(self));
    if (vqgeopositioninfosource && vqgeopositioninfosource->isVirtualQGeoPositionInfoSource) {
        vqgeopositioninfosource->setQGeoPositionInfoSource_Receivers_IsBase(true);
        return vqgeopositioninfosource->receivers(signal);
    } else {
        return ((VirtualQGeoPositionInfoSource*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QGeoPositionInfoSource_OnReceivers(const QGeoPositionInfoSource* self, intptr_t slot) {
    auto* vqgeopositioninfosource = const_cast<VirtualQGeoPositionInfoSource*>(dynamic_cast<const VirtualQGeoPositionInfoSource*>(self));
    if (vqgeopositioninfosource && vqgeopositioninfosource->isVirtualQGeoPositionInfoSource) {
        vqgeopositioninfosource->setQGeoPositionInfoSource_Receivers_Callback(reinterpret_cast<VirtualQGeoPositionInfoSource::QGeoPositionInfoSource_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGeoPositionInfoSource_IsSignalConnected(const QGeoPositionInfoSource* self, const QMetaMethod* signal) {
    auto* vqgeopositioninfosource = const_cast<VirtualQGeoPositionInfoSource*>(dynamic_cast<const VirtualQGeoPositionInfoSource*>(self));
    if (vqgeopositioninfosource && vqgeopositioninfosource->isVirtualQGeoPositionInfoSource) {
        return vqgeopositioninfosource->isSignalConnected(*signal);
    } else {
        return ((VirtualQGeoPositionInfoSource*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QGeoPositionInfoSource_QBaseIsSignalConnected(const QGeoPositionInfoSource* self, const QMetaMethod* signal) {
    auto* vqgeopositioninfosource = const_cast<VirtualQGeoPositionInfoSource*>(dynamic_cast<const VirtualQGeoPositionInfoSource*>(self));
    if (vqgeopositioninfosource && vqgeopositioninfosource->isVirtualQGeoPositionInfoSource) {
        vqgeopositioninfosource->setQGeoPositionInfoSource_IsSignalConnected_IsBase(true);
        return vqgeopositioninfosource->isSignalConnected(*signal);
    } else {
        return ((VirtualQGeoPositionInfoSource*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QGeoPositionInfoSource_OnIsSignalConnected(const QGeoPositionInfoSource* self, intptr_t slot) {
    auto* vqgeopositioninfosource = const_cast<VirtualQGeoPositionInfoSource*>(dynamic_cast<const VirtualQGeoPositionInfoSource*>(self));
    if (vqgeopositioninfosource && vqgeopositioninfosource->isVirtualQGeoPositionInfoSource) {
        vqgeopositioninfosource->setQGeoPositionInfoSource_IsSignalConnected_Callback(reinterpret_cast<VirtualQGeoPositionInfoSource::QGeoPositionInfoSource_IsSignalConnected_Callback>(slot));
    }
}

void QGeoPositionInfoSource_Delete(QGeoPositionInfoSource* self) {
    delete self;
}
