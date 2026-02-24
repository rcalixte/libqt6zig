#include <QByteArrayView>
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
#include <QByteArray>
#include <cstring>
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
    auto* vqnmeasatelliteinfosource = dynamic_cast<const VirtualQNmeaSatelliteInfoSource*>(self);
    if (vqnmeasatelliteinfosource && vqnmeasatelliteinfosource->isVirtualQNmeaSatelliteInfoSource) {
        return (QMetaObject*)self->metaObject();
    } else {
        return (QMetaObject*)((VirtualQNmeaSatelliteInfoSource*)self)->metaObject();
    }
}

void* QNmeaSatelliteInfoSource_Metacast(QNmeaSatelliteInfoSource* self, const char* param1) {
    auto* vqnmeasatelliteinfosource = dynamic_cast<VirtualQNmeaSatelliteInfoSource*>(self);
    if (vqnmeasatelliteinfosource && vqnmeasatelliteinfosource->isVirtualQNmeaSatelliteInfoSource) {
        return self->qt_metacast(param1);
    } else {
        return ((VirtualQNmeaSatelliteInfoSource*)self)->qt_metacast(param1);
    }
}

int QNmeaSatelliteInfoSource_Metacall(QNmeaSatelliteInfoSource* self, int param1, int param2, void** param3) {
    auto* vqnmeasatelliteinfosource = dynamic_cast<VirtualQNmeaSatelliteInfoSource*>(self);
    if (vqnmeasatelliteinfosource && vqnmeasatelliteinfosource->isVirtualQNmeaSatelliteInfoSource) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQNmeaSatelliteInfoSource*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
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
    auto* vqnmeasatelliteinfosource = dynamic_cast<VirtualQNmeaSatelliteInfoSource*>(self);
    if (vqnmeasatelliteinfosource && vqnmeasatelliteinfosource->isVirtualQNmeaSatelliteInfoSource) {
        self->setUpdateInterval(static_cast<int>(msec));
    } else {
        ((VirtualQNmeaSatelliteInfoSource*)self)->setUpdateInterval(static_cast<int>(msec));
    }
}

int QNmeaSatelliteInfoSource_MinimumUpdateInterval(const QNmeaSatelliteInfoSource* self) {
    auto* vqnmeasatelliteinfosource = dynamic_cast<const VirtualQNmeaSatelliteInfoSource*>(self);
    if (vqnmeasatelliteinfosource && vqnmeasatelliteinfosource->isVirtualQNmeaSatelliteInfoSource) {
        return self->minimumUpdateInterval();
    } else {
        return ((VirtualQNmeaSatelliteInfoSource*)self)->minimumUpdateInterval();
    }
}

int QNmeaSatelliteInfoSource_Error(const QNmeaSatelliteInfoSource* self) {
    auto* vqnmeasatelliteinfosource = dynamic_cast<const VirtualQNmeaSatelliteInfoSource*>(self);
    if (vqnmeasatelliteinfosource && vqnmeasatelliteinfosource->isVirtualQNmeaSatelliteInfoSource) {
        return static_cast<int>(self->error());
    } else {
        return static_cast<int>(((VirtualQNmeaSatelliteInfoSource*)self)->error());
    }
}

bool QNmeaSatelliteInfoSource_SetBackendProperty(QNmeaSatelliteInfoSource* self, const libqt_string name, const QVariant* value) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    auto* vqnmeasatelliteinfosource = dynamic_cast<VirtualQNmeaSatelliteInfoSource*>(self);
    if (vqnmeasatelliteinfosource && vqnmeasatelliteinfosource->isVirtualQNmeaSatelliteInfoSource) {
        return self->setBackendProperty(name_QString, *value);
    } else {
        return ((VirtualQNmeaSatelliteInfoSource*)self)->setBackendProperty(name_QString, *value);
    }
}

QVariant* QNmeaSatelliteInfoSource_BackendProperty(const QNmeaSatelliteInfoSource* self, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    auto* vqnmeasatelliteinfosource = dynamic_cast<const VirtualQNmeaSatelliteInfoSource*>(self);
    if (vqnmeasatelliteinfosource && vqnmeasatelliteinfosource->isVirtualQNmeaSatelliteInfoSource) {
        return new QVariant(self->backendProperty(name_QString));
    } else {
        return new QVariant(((VirtualQNmeaSatelliteInfoSource*)self)->backendProperty(name_QString));
    }
}

void QNmeaSatelliteInfoSource_StartUpdates(QNmeaSatelliteInfoSource* self) {
    auto* vqnmeasatelliteinfosource = dynamic_cast<VirtualQNmeaSatelliteInfoSource*>(self);
    if (vqnmeasatelliteinfosource && vqnmeasatelliteinfosource->isVirtualQNmeaSatelliteInfoSource) {
        self->startUpdates();
    } else {
        ((VirtualQNmeaSatelliteInfoSource*)self)->startUpdates();
    }
}

void QNmeaSatelliteInfoSource_StopUpdates(QNmeaSatelliteInfoSource* self) {
    auto* vqnmeasatelliteinfosource = dynamic_cast<VirtualQNmeaSatelliteInfoSource*>(self);
    if (vqnmeasatelliteinfosource && vqnmeasatelliteinfosource->isVirtualQNmeaSatelliteInfoSource) {
        self->stopUpdates();
    } else {
        ((VirtualQNmeaSatelliteInfoSource*)self)->stopUpdates();
    }
}

void QNmeaSatelliteInfoSource_RequestUpdate(QNmeaSatelliteInfoSource* self, int timeout) {
    auto* vqnmeasatelliteinfosource = dynamic_cast<VirtualQNmeaSatelliteInfoSource*>(self);
    if (vqnmeasatelliteinfosource && vqnmeasatelliteinfosource->isVirtualQNmeaSatelliteInfoSource) {
        self->requestUpdate(static_cast<int>(timeout));
    } else {
        ((VirtualQNmeaSatelliteInfoSource*)self)->requestUpdate(static_cast<int>(timeout));
    }
}

int QNmeaSatelliteInfoSource_ParseSatellitesInUseFromNmea(QNmeaSatelliteInfoSource* self, const char* data, int size, libqt_list /* of int */ pnrsInUse) {
    QList<int> pnrsInUse_QList;
    pnrsInUse_QList.reserve(pnrsInUse.len);
    int* pnrsInUse_arr = static_cast<int*>(pnrsInUse.data);
    for (size_t i = 0; i < pnrsInUse.len; ++i) {
        pnrsInUse_QList.push_back(static_cast<int>(pnrsInUse_arr[i]));
    }
    auto* vqnmeasatelliteinfosource = dynamic_cast<VirtualQNmeaSatelliteInfoSource*>(self);
    if (vqnmeasatelliteinfosource && vqnmeasatelliteinfosource->isVirtualQNmeaSatelliteInfoSource) {
        return static_cast<int>(vqnmeasatelliteinfosource->parseSatellitesInUseFromNmea(data, static_cast<int>(size), pnrsInUse_QList));
    }
    return {};
}

int QNmeaSatelliteInfoSource_ParseSatelliteInfoFromNmea(QNmeaSatelliteInfoSource* self, const char* data, int size, libqt_list /* of QGeoSatelliteInfo* */ infos, int* system) {
    QList<QGeoSatelliteInfo> infos_QList;
    infos_QList.reserve(infos.len);
    QGeoSatelliteInfo** infos_arr = static_cast<QGeoSatelliteInfo**>(infos.data);
    for (size_t i = 0; i < infos.len; ++i) {
        infos_QList.push_back(*(infos_arr[i]));
    }
    auto* vqnmeasatelliteinfosource = dynamic_cast<VirtualQNmeaSatelliteInfoSource*>(self);
    if (vqnmeasatelliteinfosource && vqnmeasatelliteinfosource->isVirtualQNmeaSatelliteInfoSource) {
        return static_cast<int>(vqnmeasatelliteinfosource->parseSatelliteInfoFromNmea(data, static_cast<int>(size), infos_QList, (QGeoSatelliteInfo::SatelliteSystem&)(*system)));
    }
    return {};
}

// Base class handler implementation
QMetaObject* QNmeaSatelliteInfoSource_SuperMetaObject(const QNmeaSatelliteInfoSource* self) {
    auto* vqnmeasatelliteinfosource = const_cast<VirtualQNmeaSatelliteInfoSource*>(dynamic_cast<const VirtualQNmeaSatelliteInfoSource*>(self));
    if (vqnmeasatelliteinfosource && vqnmeasatelliteinfosource->isVirtualQNmeaSatelliteInfoSource) {
        vqnmeasatelliteinfosource->setQNmeaSatelliteInfoSource_MetaObject_IsBase(true);
        return (QMetaObject*)vqnmeasatelliteinfosource->metaObject();
    } else {
        return (QMetaObject*)self->QNmeaSatelliteInfoSource::metaObject();
    }
}

// Auxiliary method to allow providing re-implementation
void QNmeaSatelliteInfoSource_OnMetaObject(const QNmeaSatelliteInfoSource* self, intptr_t slot) {
    auto* vqnmeasatelliteinfosource = const_cast<VirtualQNmeaSatelliteInfoSource*>(dynamic_cast<const VirtualQNmeaSatelliteInfoSource*>(self));
    if (vqnmeasatelliteinfosource && vqnmeasatelliteinfosource->isVirtualQNmeaSatelliteInfoSource) {
        vqnmeasatelliteinfosource->setQNmeaSatelliteInfoSource_MetaObject_Callback(reinterpret_cast<VirtualQNmeaSatelliteInfoSource::QNmeaSatelliteInfoSource_MetaObject_Callback>(slot));
    }
}

// Base class handler implementation
void* QNmeaSatelliteInfoSource_SuperMetacast(QNmeaSatelliteInfoSource* self, const char* param1) {
    auto* vqnmeasatelliteinfosource = dynamic_cast<VirtualQNmeaSatelliteInfoSource*>(self);
    if (vqnmeasatelliteinfosource && vqnmeasatelliteinfosource->isVirtualQNmeaSatelliteInfoSource) {
        vqnmeasatelliteinfosource->setQNmeaSatelliteInfoSource_Metacast_IsBase(true);
        return vqnmeasatelliteinfosource->qt_metacast(param1);
    } else {
        return self->QNmeaSatelliteInfoSource::qt_metacast(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QNmeaSatelliteInfoSource_OnMetacast(QNmeaSatelliteInfoSource* self, intptr_t slot) {
    auto* vqnmeasatelliteinfosource = dynamic_cast<VirtualQNmeaSatelliteInfoSource*>(self);
    if (vqnmeasatelliteinfosource && vqnmeasatelliteinfosource->isVirtualQNmeaSatelliteInfoSource) {
        vqnmeasatelliteinfosource->setQNmeaSatelliteInfoSource_Metacast_Callback(reinterpret_cast<VirtualQNmeaSatelliteInfoSource::QNmeaSatelliteInfoSource_Metacast_Callback>(slot));
    }
}

// Base class handler implementation
int QNmeaSatelliteInfoSource_SuperMetacall(QNmeaSatelliteInfoSource* self, int param1, int param2, void** param3) {
    auto* vqnmeasatelliteinfosource = dynamic_cast<VirtualQNmeaSatelliteInfoSource*>(self);
    if (vqnmeasatelliteinfosource && vqnmeasatelliteinfosource->isVirtualQNmeaSatelliteInfoSource) {
        vqnmeasatelliteinfosource->setQNmeaSatelliteInfoSource_Metacall_IsBase(true);
        return vqnmeasatelliteinfosource->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->QNmeaSatelliteInfoSource::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void QNmeaSatelliteInfoSource_OnMetacall(QNmeaSatelliteInfoSource* self, intptr_t slot) {
    auto* vqnmeasatelliteinfosource = dynamic_cast<VirtualQNmeaSatelliteInfoSource*>(self);
    if (vqnmeasatelliteinfosource && vqnmeasatelliteinfosource->isVirtualQNmeaSatelliteInfoSource) {
        vqnmeasatelliteinfosource->setQNmeaSatelliteInfoSource_Metacall_Callback(reinterpret_cast<VirtualQNmeaSatelliteInfoSource::QNmeaSatelliteInfoSource_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
void QNmeaSatelliteInfoSource_SuperSetUpdateInterval(QNmeaSatelliteInfoSource* self, int msec) {
    auto* vqnmeasatelliteinfosource = dynamic_cast<VirtualQNmeaSatelliteInfoSource*>(self);
    if (vqnmeasatelliteinfosource && vqnmeasatelliteinfosource->isVirtualQNmeaSatelliteInfoSource) {
        vqnmeasatelliteinfosource->setQNmeaSatelliteInfoSource_SetUpdateInterval_IsBase(true);
        vqnmeasatelliteinfosource->setUpdateInterval(static_cast<int>(msec));
    } else {
        self->QNmeaSatelliteInfoSource::setUpdateInterval(static_cast<int>(msec));
    }
}

// Auxiliary method to allow providing re-implementation
void QNmeaSatelliteInfoSource_OnSetUpdateInterval(QNmeaSatelliteInfoSource* self, intptr_t slot) {
    auto* vqnmeasatelliteinfosource = dynamic_cast<VirtualQNmeaSatelliteInfoSource*>(self);
    if (vqnmeasatelliteinfosource && vqnmeasatelliteinfosource->isVirtualQNmeaSatelliteInfoSource) {
        vqnmeasatelliteinfosource->setQNmeaSatelliteInfoSource_SetUpdateInterval_Callback(reinterpret_cast<VirtualQNmeaSatelliteInfoSource::QNmeaSatelliteInfoSource_SetUpdateInterval_Callback>(slot));
    }
}

// Base class handler implementation
int QNmeaSatelliteInfoSource_SuperMinimumUpdateInterval(const QNmeaSatelliteInfoSource* self) {
    auto* vqnmeasatelliteinfosource = const_cast<VirtualQNmeaSatelliteInfoSource*>(dynamic_cast<const VirtualQNmeaSatelliteInfoSource*>(self));
    if (vqnmeasatelliteinfosource && vqnmeasatelliteinfosource->isVirtualQNmeaSatelliteInfoSource) {
        vqnmeasatelliteinfosource->setQNmeaSatelliteInfoSource_MinimumUpdateInterval_IsBase(true);
        return vqnmeasatelliteinfosource->minimumUpdateInterval();
    } else {
        return self->QNmeaSatelliteInfoSource::minimumUpdateInterval();
    }
}

// Auxiliary method to allow providing re-implementation
void QNmeaSatelliteInfoSource_OnMinimumUpdateInterval(const QNmeaSatelliteInfoSource* self, intptr_t slot) {
    auto* vqnmeasatelliteinfosource = const_cast<VirtualQNmeaSatelliteInfoSource*>(dynamic_cast<const VirtualQNmeaSatelliteInfoSource*>(self));
    if (vqnmeasatelliteinfosource && vqnmeasatelliteinfosource->isVirtualQNmeaSatelliteInfoSource) {
        vqnmeasatelliteinfosource->setQNmeaSatelliteInfoSource_MinimumUpdateInterval_Callback(reinterpret_cast<VirtualQNmeaSatelliteInfoSource::QNmeaSatelliteInfoSource_MinimumUpdateInterval_Callback>(slot));
    }
}

// Base class handler implementation
int QNmeaSatelliteInfoSource_SuperError(const QNmeaSatelliteInfoSource* self) {
    auto* vqnmeasatelliteinfosource = const_cast<VirtualQNmeaSatelliteInfoSource*>(dynamic_cast<const VirtualQNmeaSatelliteInfoSource*>(self));
    if (vqnmeasatelliteinfosource && vqnmeasatelliteinfosource->isVirtualQNmeaSatelliteInfoSource) {
        vqnmeasatelliteinfosource->setQNmeaSatelliteInfoSource_Error_IsBase(true);
        return static_cast<int>(vqnmeasatelliteinfosource->error());
    } else {
        return static_cast<int>(self->QNmeaSatelliteInfoSource::error());
    }
}

// Auxiliary method to allow providing re-implementation
void QNmeaSatelliteInfoSource_OnError(const QNmeaSatelliteInfoSource* self, intptr_t slot) {
    auto* vqnmeasatelliteinfosource = const_cast<VirtualQNmeaSatelliteInfoSource*>(dynamic_cast<const VirtualQNmeaSatelliteInfoSource*>(self));
    if (vqnmeasatelliteinfosource && vqnmeasatelliteinfosource->isVirtualQNmeaSatelliteInfoSource) {
        vqnmeasatelliteinfosource->setQNmeaSatelliteInfoSource_Error_Callback(reinterpret_cast<VirtualQNmeaSatelliteInfoSource::QNmeaSatelliteInfoSource_Error_Callback>(slot));
    }
}

// Base class handler implementation
bool QNmeaSatelliteInfoSource_SuperSetBackendProperty(QNmeaSatelliteInfoSource* self, const libqt_string name, const QVariant* value) {
    auto* vqnmeasatelliteinfosource = dynamic_cast<VirtualQNmeaSatelliteInfoSource*>(self);
    QString name_QString = QString::fromUtf8(name.data, name.len);
    if (vqnmeasatelliteinfosource && vqnmeasatelliteinfosource->isVirtualQNmeaSatelliteInfoSource) {
        vqnmeasatelliteinfosource->setQNmeaSatelliteInfoSource_SetBackendProperty_IsBase(true);
        return vqnmeasatelliteinfosource->setBackendProperty(name_QString, *value);
    } else {
        return self->QNmeaSatelliteInfoSource::setBackendProperty(name_QString, *value);
    }
}

// Auxiliary method to allow providing re-implementation
void QNmeaSatelliteInfoSource_OnSetBackendProperty(QNmeaSatelliteInfoSource* self, intptr_t slot) {
    auto* vqnmeasatelliteinfosource = dynamic_cast<VirtualQNmeaSatelliteInfoSource*>(self);
    if (vqnmeasatelliteinfosource && vqnmeasatelliteinfosource->isVirtualQNmeaSatelliteInfoSource) {
        vqnmeasatelliteinfosource->setQNmeaSatelliteInfoSource_SetBackendProperty_Callback(reinterpret_cast<VirtualQNmeaSatelliteInfoSource::QNmeaSatelliteInfoSource_SetBackendProperty_Callback>(slot));
    }
}

// Base class handler implementation
QVariant* QNmeaSatelliteInfoSource_SuperBackendProperty(const QNmeaSatelliteInfoSource* self, const libqt_string name) {
    auto* vqnmeasatelliteinfosource = const_cast<VirtualQNmeaSatelliteInfoSource*>(dynamic_cast<const VirtualQNmeaSatelliteInfoSource*>(self));
    QString name_QString = QString::fromUtf8(name.data, name.len);
    if (vqnmeasatelliteinfosource && vqnmeasatelliteinfosource->isVirtualQNmeaSatelliteInfoSource) {
        vqnmeasatelliteinfosource->setQNmeaSatelliteInfoSource_BackendProperty_IsBase(true);
        return new QVariant(vqnmeasatelliteinfosource->backendProperty(name_QString));
    } else {
        return new QVariant(((VirtualQNmeaSatelliteInfoSource*)self)->backendProperty(name_QString));
    }
}

// Auxiliary method to allow providing re-implementation
void QNmeaSatelliteInfoSource_OnBackendProperty(const QNmeaSatelliteInfoSource* self, intptr_t slot) {
    auto* vqnmeasatelliteinfosource = const_cast<VirtualQNmeaSatelliteInfoSource*>(dynamic_cast<const VirtualQNmeaSatelliteInfoSource*>(self));
    if (vqnmeasatelliteinfosource && vqnmeasatelliteinfosource->isVirtualQNmeaSatelliteInfoSource) {
        vqnmeasatelliteinfosource->setQNmeaSatelliteInfoSource_BackendProperty_Callback(reinterpret_cast<VirtualQNmeaSatelliteInfoSource::QNmeaSatelliteInfoSource_BackendProperty_Callback>(slot));
    }
}

// Base class handler implementation
void QNmeaSatelliteInfoSource_SuperStartUpdates(QNmeaSatelliteInfoSource* self) {
    auto* vqnmeasatelliteinfosource = dynamic_cast<VirtualQNmeaSatelliteInfoSource*>(self);
    if (vqnmeasatelliteinfosource && vqnmeasatelliteinfosource->isVirtualQNmeaSatelliteInfoSource) {
        vqnmeasatelliteinfosource->setQNmeaSatelliteInfoSource_StartUpdates_IsBase(true);
        vqnmeasatelliteinfosource->startUpdates();
    } else {
        self->QNmeaSatelliteInfoSource::startUpdates();
    }
}

// Auxiliary method to allow providing re-implementation
void QNmeaSatelliteInfoSource_OnStartUpdates(QNmeaSatelliteInfoSource* self, intptr_t slot) {
    auto* vqnmeasatelliteinfosource = dynamic_cast<VirtualQNmeaSatelliteInfoSource*>(self);
    if (vqnmeasatelliteinfosource && vqnmeasatelliteinfosource->isVirtualQNmeaSatelliteInfoSource) {
        vqnmeasatelliteinfosource->setQNmeaSatelliteInfoSource_StartUpdates_Callback(reinterpret_cast<VirtualQNmeaSatelliteInfoSource::QNmeaSatelliteInfoSource_StartUpdates_Callback>(slot));
    }
}

// Base class handler implementation
void QNmeaSatelliteInfoSource_SuperStopUpdates(QNmeaSatelliteInfoSource* self) {
    auto* vqnmeasatelliteinfosource = dynamic_cast<VirtualQNmeaSatelliteInfoSource*>(self);
    if (vqnmeasatelliteinfosource && vqnmeasatelliteinfosource->isVirtualQNmeaSatelliteInfoSource) {
        vqnmeasatelliteinfosource->setQNmeaSatelliteInfoSource_StopUpdates_IsBase(true);
        vqnmeasatelliteinfosource->stopUpdates();
    } else {
        self->QNmeaSatelliteInfoSource::stopUpdates();
    }
}

// Auxiliary method to allow providing re-implementation
void QNmeaSatelliteInfoSource_OnStopUpdates(QNmeaSatelliteInfoSource* self, intptr_t slot) {
    auto* vqnmeasatelliteinfosource = dynamic_cast<VirtualQNmeaSatelliteInfoSource*>(self);
    if (vqnmeasatelliteinfosource && vqnmeasatelliteinfosource->isVirtualQNmeaSatelliteInfoSource) {
        vqnmeasatelliteinfosource->setQNmeaSatelliteInfoSource_StopUpdates_Callback(reinterpret_cast<VirtualQNmeaSatelliteInfoSource::QNmeaSatelliteInfoSource_StopUpdates_Callback>(slot));
    }
}

// Base class handler implementation
void QNmeaSatelliteInfoSource_SuperRequestUpdate(QNmeaSatelliteInfoSource* self, int timeout) {
    auto* vqnmeasatelliteinfosource = dynamic_cast<VirtualQNmeaSatelliteInfoSource*>(self);
    if (vqnmeasatelliteinfosource && vqnmeasatelliteinfosource->isVirtualQNmeaSatelliteInfoSource) {
        vqnmeasatelliteinfosource->setQNmeaSatelliteInfoSource_RequestUpdate_IsBase(true);
        vqnmeasatelliteinfosource->requestUpdate(static_cast<int>(timeout));
    } else {
        self->QNmeaSatelliteInfoSource::requestUpdate(static_cast<int>(timeout));
    }
}

// Auxiliary method to allow providing re-implementation
void QNmeaSatelliteInfoSource_OnRequestUpdate(QNmeaSatelliteInfoSource* self, intptr_t slot) {
    auto* vqnmeasatelliteinfosource = dynamic_cast<VirtualQNmeaSatelliteInfoSource*>(self);
    if (vqnmeasatelliteinfosource && vqnmeasatelliteinfosource->isVirtualQNmeaSatelliteInfoSource) {
        vqnmeasatelliteinfosource->setQNmeaSatelliteInfoSource_RequestUpdate_Callback(reinterpret_cast<VirtualQNmeaSatelliteInfoSource::QNmeaSatelliteInfoSource_RequestUpdate_Callback>(slot));
    }
}

// Base class handler implementation
int QNmeaSatelliteInfoSource_SuperParseSatellitesInUseFromNmea(QNmeaSatelliteInfoSource* self, const char* data, int size, libqt_list /* of int */ pnrsInUse) {
    auto* vqnmeasatelliteinfosource = dynamic_cast<VirtualQNmeaSatelliteInfoSource*>(self);
    QList<int> pnrsInUse_QList;
    pnrsInUse_QList.reserve(pnrsInUse.len);
    int* pnrsInUse_arr = static_cast<int*>(pnrsInUse.data);
    for (size_t i = 0; i < pnrsInUse.len; ++i) {
        pnrsInUse_QList.push_back(static_cast<int>(pnrsInUse_arr[i]));
    }
    if (vqnmeasatelliteinfosource && vqnmeasatelliteinfosource->isVirtualQNmeaSatelliteInfoSource) {
        vqnmeasatelliteinfosource->setQNmeaSatelliteInfoSource_ParseSatellitesInUseFromNmea_IsBase(true);
        return static_cast<int>(vqnmeasatelliteinfosource->parseSatellitesInUseFromNmea(data, static_cast<int>(size), pnrsInUse_QList));
    } else {
        return static_cast<int>(((VirtualQNmeaSatelliteInfoSource*)self)->parseSatellitesInUseFromNmea(data, static_cast<int>(size), pnrsInUse_QList));
    }
}

// Auxiliary method to allow providing re-implementation
void QNmeaSatelliteInfoSource_OnParseSatellitesInUseFromNmea(QNmeaSatelliteInfoSource* self, intptr_t slot) {
    auto* vqnmeasatelliteinfosource = dynamic_cast<VirtualQNmeaSatelliteInfoSource*>(self);
    if (vqnmeasatelliteinfosource && vqnmeasatelliteinfosource->isVirtualQNmeaSatelliteInfoSource) {
        vqnmeasatelliteinfosource->setQNmeaSatelliteInfoSource_ParseSatellitesInUseFromNmea_Callback(reinterpret_cast<VirtualQNmeaSatelliteInfoSource::QNmeaSatelliteInfoSource_ParseSatellitesInUseFromNmea_Callback>(slot));
    }
}

// Base class handler implementation
int QNmeaSatelliteInfoSource_SuperParseSatelliteInfoFromNmea(QNmeaSatelliteInfoSource* self, const char* data, int size, libqt_list /* of QGeoSatelliteInfo* */ infos, int* system) {
    auto* vqnmeasatelliteinfosource = dynamic_cast<VirtualQNmeaSatelliteInfoSource*>(self);
    QList<QGeoSatelliteInfo> infos_QList;
    infos_QList.reserve(infos.len);
    QGeoSatelliteInfo** infos_arr = static_cast<QGeoSatelliteInfo**>(infos.data);
    for (size_t i = 0; i < infos.len; ++i) {
        infos_QList.push_back(*(infos_arr[i]));
    }
    if (vqnmeasatelliteinfosource && vqnmeasatelliteinfosource->isVirtualQNmeaSatelliteInfoSource) {
        vqnmeasatelliteinfosource->setQNmeaSatelliteInfoSource_ParseSatelliteInfoFromNmea_IsBase(true);
        return static_cast<int>(vqnmeasatelliteinfosource->parseSatelliteInfoFromNmea(data, static_cast<int>(size), infos_QList, (QGeoSatelliteInfo::SatelliteSystem&)(*system)));
    } else {
        return static_cast<int>(((VirtualQNmeaSatelliteInfoSource*)self)->parseSatelliteInfoFromNmea(data, static_cast<int>(size), infos_QList, (QGeoSatelliteInfo::SatelliteSystem&)(*system)));
    }
}

// Auxiliary method to allow providing re-implementation
void QNmeaSatelliteInfoSource_OnParseSatelliteInfoFromNmea(QNmeaSatelliteInfoSource* self, intptr_t slot) {
    auto* vqnmeasatelliteinfosource = dynamic_cast<VirtualQNmeaSatelliteInfoSource*>(self);
    if (vqnmeasatelliteinfosource && vqnmeasatelliteinfosource->isVirtualQNmeaSatelliteInfoSource) {
        vqnmeasatelliteinfosource->setQNmeaSatelliteInfoSource_ParseSatelliteInfoFromNmea_Callback(reinterpret_cast<VirtualQNmeaSatelliteInfoSource::QNmeaSatelliteInfoSource_ParseSatelliteInfoFromNmea_Callback>(slot));
    }
}

// Derived class handler implementation
bool QNmeaSatelliteInfoSource_Event(QNmeaSatelliteInfoSource* self, QEvent* event) {
    auto* vqnmeasatelliteinfosource = dynamic_cast<VirtualQNmeaSatelliteInfoSource*>(self);
    if (vqnmeasatelliteinfosource && vqnmeasatelliteinfosource->isVirtualQNmeaSatelliteInfoSource) {
        return vqnmeasatelliteinfosource->event(event);
    } else {
        return self->QNmeaSatelliteInfoSource::event(event);
    }
}

// Base class handler implementation
bool QNmeaSatelliteInfoSource_SuperEvent(QNmeaSatelliteInfoSource* self, QEvent* event) {
    auto* vqnmeasatelliteinfosource = dynamic_cast<VirtualQNmeaSatelliteInfoSource*>(self);
    if (vqnmeasatelliteinfosource && vqnmeasatelliteinfosource->isVirtualQNmeaSatelliteInfoSource) {
        vqnmeasatelliteinfosource->setQNmeaSatelliteInfoSource_Event_IsBase(true);
        return vqnmeasatelliteinfosource->event(event);
    } else {
        return self->QNmeaSatelliteInfoSource::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QNmeaSatelliteInfoSource_OnEvent(QNmeaSatelliteInfoSource* self, intptr_t slot) {
    auto* vqnmeasatelliteinfosource = dynamic_cast<VirtualQNmeaSatelliteInfoSource*>(self);
    if (vqnmeasatelliteinfosource && vqnmeasatelliteinfosource->isVirtualQNmeaSatelliteInfoSource) {
        vqnmeasatelliteinfosource->setQNmeaSatelliteInfoSource_Event_Callback(reinterpret_cast<VirtualQNmeaSatelliteInfoSource::QNmeaSatelliteInfoSource_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QNmeaSatelliteInfoSource_EventFilter(QNmeaSatelliteInfoSource* self, QObject* watched, QEvent* event) {
    auto* vqnmeasatelliteinfosource = dynamic_cast<VirtualQNmeaSatelliteInfoSource*>(self);
    if (vqnmeasatelliteinfosource && vqnmeasatelliteinfosource->isVirtualQNmeaSatelliteInfoSource) {
        return vqnmeasatelliteinfosource->eventFilter(watched, event);
    } else {
        return self->QNmeaSatelliteInfoSource::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QNmeaSatelliteInfoSource_SuperEventFilter(QNmeaSatelliteInfoSource* self, QObject* watched, QEvent* event) {
    auto* vqnmeasatelliteinfosource = dynamic_cast<VirtualQNmeaSatelliteInfoSource*>(self);
    if (vqnmeasatelliteinfosource && vqnmeasatelliteinfosource->isVirtualQNmeaSatelliteInfoSource) {
        vqnmeasatelliteinfosource->setQNmeaSatelliteInfoSource_EventFilter_IsBase(true);
        return vqnmeasatelliteinfosource->eventFilter(watched, event);
    } else {
        return self->QNmeaSatelliteInfoSource::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QNmeaSatelliteInfoSource_OnEventFilter(QNmeaSatelliteInfoSource* self, intptr_t slot) {
    auto* vqnmeasatelliteinfosource = dynamic_cast<VirtualQNmeaSatelliteInfoSource*>(self);
    if (vqnmeasatelliteinfosource && vqnmeasatelliteinfosource->isVirtualQNmeaSatelliteInfoSource) {
        vqnmeasatelliteinfosource->setQNmeaSatelliteInfoSource_EventFilter_Callback(reinterpret_cast<VirtualQNmeaSatelliteInfoSource::QNmeaSatelliteInfoSource_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QNmeaSatelliteInfoSource_TimerEvent(QNmeaSatelliteInfoSource* self, QTimerEvent* event) {
    auto* vqnmeasatelliteinfosource = dynamic_cast<VirtualQNmeaSatelliteInfoSource*>(self);
    if (vqnmeasatelliteinfosource && vqnmeasatelliteinfosource->isVirtualQNmeaSatelliteInfoSource) {
        vqnmeasatelliteinfosource->timerEvent(event);
    } else {
        ((VirtualQNmeaSatelliteInfoSource*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QNmeaSatelliteInfoSource_SuperTimerEvent(QNmeaSatelliteInfoSource* self, QTimerEvent* event) {
    auto* vqnmeasatelliteinfosource = dynamic_cast<VirtualQNmeaSatelliteInfoSource*>(self);
    if (vqnmeasatelliteinfosource && vqnmeasatelliteinfosource->isVirtualQNmeaSatelliteInfoSource) {
        vqnmeasatelliteinfosource->setQNmeaSatelliteInfoSource_TimerEvent_IsBase(true);
        vqnmeasatelliteinfosource->timerEvent(event);
    } else {
        ((VirtualQNmeaSatelliteInfoSource*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QNmeaSatelliteInfoSource_OnTimerEvent(QNmeaSatelliteInfoSource* self, intptr_t slot) {
    auto* vqnmeasatelliteinfosource = dynamic_cast<VirtualQNmeaSatelliteInfoSource*>(self);
    if (vqnmeasatelliteinfosource && vqnmeasatelliteinfosource->isVirtualQNmeaSatelliteInfoSource) {
        vqnmeasatelliteinfosource->setQNmeaSatelliteInfoSource_TimerEvent_Callback(reinterpret_cast<VirtualQNmeaSatelliteInfoSource::QNmeaSatelliteInfoSource_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QNmeaSatelliteInfoSource_ChildEvent(QNmeaSatelliteInfoSource* self, QChildEvent* event) {
    auto* vqnmeasatelliteinfosource = dynamic_cast<VirtualQNmeaSatelliteInfoSource*>(self);
    if (vqnmeasatelliteinfosource && vqnmeasatelliteinfosource->isVirtualQNmeaSatelliteInfoSource) {
        vqnmeasatelliteinfosource->childEvent(event);
    } else {
        ((VirtualQNmeaSatelliteInfoSource*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QNmeaSatelliteInfoSource_SuperChildEvent(QNmeaSatelliteInfoSource* self, QChildEvent* event) {
    auto* vqnmeasatelliteinfosource = dynamic_cast<VirtualQNmeaSatelliteInfoSource*>(self);
    if (vqnmeasatelliteinfosource && vqnmeasatelliteinfosource->isVirtualQNmeaSatelliteInfoSource) {
        vqnmeasatelliteinfosource->setQNmeaSatelliteInfoSource_ChildEvent_IsBase(true);
        vqnmeasatelliteinfosource->childEvent(event);
    } else {
        ((VirtualQNmeaSatelliteInfoSource*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QNmeaSatelliteInfoSource_OnChildEvent(QNmeaSatelliteInfoSource* self, intptr_t slot) {
    auto* vqnmeasatelliteinfosource = dynamic_cast<VirtualQNmeaSatelliteInfoSource*>(self);
    if (vqnmeasatelliteinfosource && vqnmeasatelliteinfosource->isVirtualQNmeaSatelliteInfoSource) {
        vqnmeasatelliteinfosource->setQNmeaSatelliteInfoSource_ChildEvent_Callback(reinterpret_cast<VirtualQNmeaSatelliteInfoSource::QNmeaSatelliteInfoSource_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QNmeaSatelliteInfoSource_CustomEvent(QNmeaSatelliteInfoSource* self, QEvent* event) {
    auto* vqnmeasatelliteinfosource = dynamic_cast<VirtualQNmeaSatelliteInfoSource*>(self);
    if (vqnmeasatelliteinfosource && vqnmeasatelliteinfosource->isVirtualQNmeaSatelliteInfoSource) {
        vqnmeasatelliteinfosource->customEvent(event);
    } else {
        ((VirtualQNmeaSatelliteInfoSource*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QNmeaSatelliteInfoSource_SuperCustomEvent(QNmeaSatelliteInfoSource* self, QEvent* event) {
    auto* vqnmeasatelliteinfosource = dynamic_cast<VirtualQNmeaSatelliteInfoSource*>(self);
    if (vqnmeasatelliteinfosource && vqnmeasatelliteinfosource->isVirtualQNmeaSatelliteInfoSource) {
        vqnmeasatelliteinfosource->setQNmeaSatelliteInfoSource_CustomEvent_IsBase(true);
        vqnmeasatelliteinfosource->customEvent(event);
    } else {
        ((VirtualQNmeaSatelliteInfoSource*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QNmeaSatelliteInfoSource_OnCustomEvent(QNmeaSatelliteInfoSource* self, intptr_t slot) {
    auto* vqnmeasatelliteinfosource = dynamic_cast<VirtualQNmeaSatelliteInfoSource*>(self);
    if (vqnmeasatelliteinfosource && vqnmeasatelliteinfosource->isVirtualQNmeaSatelliteInfoSource) {
        vqnmeasatelliteinfosource->setQNmeaSatelliteInfoSource_CustomEvent_Callback(reinterpret_cast<VirtualQNmeaSatelliteInfoSource::QNmeaSatelliteInfoSource_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QNmeaSatelliteInfoSource_ConnectNotify(QNmeaSatelliteInfoSource* self, const QMetaMethod* signal) {
    auto* vqnmeasatelliteinfosource = dynamic_cast<VirtualQNmeaSatelliteInfoSource*>(self);
    if (vqnmeasatelliteinfosource && vqnmeasatelliteinfosource->isVirtualQNmeaSatelliteInfoSource) {
        vqnmeasatelliteinfosource->connectNotify(*signal);
    } else {
        ((VirtualQNmeaSatelliteInfoSource*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QNmeaSatelliteInfoSource_SuperConnectNotify(QNmeaSatelliteInfoSource* self, const QMetaMethod* signal) {
    auto* vqnmeasatelliteinfosource = dynamic_cast<VirtualQNmeaSatelliteInfoSource*>(self);
    if (vqnmeasatelliteinfosource && vqnmeasatelliteinfosource->isVirtualQNmeaSatelliteInfoSource) {
        vqnmeasatelliteinfosource->setQNmeaSatelliteInfoSource_ConnectNotify_IsBase(true);
        vqnmeasatelliteinfosource->connectNotify(*signal);
    } else {
        ((VirtualQNmeaSatelliteInfoSource*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QNmeaSatelliteInfoSource_OnConnectNotify(QNmeaSatelliteInfoSource* self, intptr_t slot) {
    auto* vqnmeasatelliteinfosource = dynamic_cast<VirtualQNmeaSatelliteInfoSource*>(self);
    if (vqnmeasatelliteinfosource && vqnmeasatelliteinfosource->isVirtualQNmeaSatelliteInfoSource) {
        vqnmeasatelliteinfosource->setQNmeaSatelliteInfoSource_ConnectNotify_Callback(reinterpret_cast<VirtualQNmeaSatelliteInfoSource::QNmeaSatelliteInfoSource_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QNmeaSatelliteInfoSource_DisconnectNotify(QNmeaSatelliteInfoSource* self, const QMetaMethod* signal) {
    auto* vqnmeasatelliteinfosource = dynamic_cast<VirtualQNmeaSatelliteInfoSource*>(self);
    if (vqnmeasatelliteinfosource && vqnmeasatelliteinfosource->isVirtualQNmeaSatelliteInfoSource) {
        vqnmeasatelliteinfosource->disconnectNotify(*signal);
    } else {
        ((VirtualQNmeaSatelliteInfoSource*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QNmeaSatelliteInfoSource_SuperDisconnectNotify(QNmeaSatelliteInfoSource* self, const QMetaMethod* signal) {
    auto* vqnmeasatelliteinfosource = dynamic_cast<VirtualQNmeaSatelliteInfoSource*>(self);
    if (vqnmeasatelliteinfosource && vqnmeasatelliteinfosource->isVirtualQNmeaSatelliteInfoSource) {
        vqnmeasatelliteinfosource->setQNmeaSatelliteInfoSource_DisconnectNotify_IsBase(true);
        vqnmeasatelliteinfosource->disconnectNotify(*signal);
    } else {
        ((VirtualQNmeaSatelliteInfoSource*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QNmeaSatelliteInfoSource_OnDisconnectNotify(QNmeaSatelliteInfoSource* self, intptr_t slot) {
    auto* vqnmeasatelliteinfosource = dynamic_cast<VirtualQNmeaSatelliteInfoSource*>(self);
    if (vqnmeasatelliteinfosource && vqnmeasatelliteinfosource->isVirtualQNmeaSatelliteInfoSource) {
        vqnmeasatelliteinfosource->setQNmeaSatelliteInfoSource_DisconnectNotify_Callback(reinterpret_cast<VirtualQNmeaSatelliteInfoSource::QNmeaSatelliteInfoSource_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
int QNmeaSatelliteInfoSource_ParseSatellitesInUseFromNmea2(QNmeaSatelliteInfoSource* self, libqt_string data, libqt_list /* of int */ pnrsInUse) {
    auto* vqnmeasatelliteinfosource = dynamic_cast<VirtualQNmeaSatelliteInfoSource*>(self);
    QByteArrayView data_QByteArrayView(data.data, data.len);
    QList<int> pnrsInUse_QList;
    pnrsInUse_QList.reserve(pnrsInUse.len);
    int* pnrsInUse_arr = static_cast<int*>(pnrsInUse.data);
    for (size_t i = 0; i < pnrsInUse.len; ++i) {
        pnrsInUse_QList.push_back(static_cast<int>(pnrsInUse_arr[i]));
    }
    if (vqnmeasatelliteinfosource && vqnmeasatelliteinfosource->isVirtualQNmeaSatelliteInfoSource) {
        return static_cast<int>(vqnmeasatelliteinfosource->parseSatellitesInUseFromNmea(data_QByteArrayView, pnrsInUse_QList));
    } else {
        return static_cast<int>(((VirtualQNmeaSatelliteInfoSource*)self)->parseSatellitesInUseFromNmea(data_QByteArrayView, pnrsInUse_QList));
    }
}

// Base class handler implementation
int QNmeaSatelliteInfoSource_SuperParseSatellitesInUseFromNmea2(QNmeaSatelliteInfoSource* self, libqt_string data, libqt_list /* of int */ pnrsInUse) {
    auto* vqnmeasatelliteinfosource = dynamic_cast<VirtualQNmeaSatelliteInfoSource*>(self);
    QByteArrayView data_QByteArrayView(data.data, data.len);
    QList<int> pnrsInUse_QList;
    pnrsInUse_QList.reserve(pnrsInUse.len);
    int* pnrsInUse_arr = static_cast<int*>(pnrsInUse.data);
    for (size_t i = 0; i < pnrsInUse.len; ++i) {
        pnrsInUse_QList.push_back(static_cast<int>(pnrsInUse_arr[i]));
    }
    if (vqnmeasatelliteinfosource && vqnmeasatelliteinfosource->isVirtualQNmeaSatelliteInfoSource) {
        vqnmeasatelliteinfosource->setQNmeaSatelliteInfoSource_ParseSatellitesInUseFromNmea2_IsBase(true);
        return static_cast<int>(vqnmeasatelliteinfosource->parseSatellitesInUseFromNmea(data_QByteArrayView, pnrsInUse_QList));
    } else {
        return static_cast<int>(((VirtualQNmeaSatelliteInfoSource*)self)->parseSatellitesInUseFromNmea(data_QByteArrayView, pnrsInUse_QList));
    }
}

// Auxiliary method to allow providing re-implementation
void QNmeaSatelliteInfoSource_OnParseSatellitesInUseFromNmea2(QNmeaSatelliteInfoSource* self, intptr_t slot) {
    auto* vqnmeasatelliteinfosource = dynamic_cast<VirtualQNmeaSatelliteInfoSource*>(self);
    if (vqnmeasatelliteinfosource && vqnmeasatelliteinfosource->isVirtualQNmeaSatelliteInfoSource) {
        vqnmeasatelliteinfosource->setQNmeaSatelliteInfoSource_ParseSatellitesInUseFromNmea2_Callback(reinterpret_cast<VirtualQNmeaSatelliteInfoSource::QNmeaSatelliteInfoSource_ParseSatellitesInUseFromNmea2_Callback>(slot));
    }
}

// Derived class handler implementation
int QNmeaSatelliteInfoSource_ParseSatelliteInfoFromNmea2(QNmeaSatelliteInfoSource* self, libqt_string data, libqt_list /* of QGeoSatelliteInfo* */ infos, int* system) {
    auto* vqnmeasatelliteinfosource = dynamic_cast<VirtualQNmeaSatelliteInfoSource*>(self);
    QByteArrayView data_QByteArrayView(data.data, data.len);
    QList<QGeoSatelliteInfo> infos_QList;
    infos_QList.reserve(infos.len);
    QGeoSatelliteInfo** infos_arr = static_cast<QGeoSatelliteInfo**>(infos.data);
    for (size_t i = 0; i < infos.len; ++i) {
        infos_QList.push_back(*(infos_arr[i]));
    }
    if (vqnmeasatelliteinfosource && vqnmeasatelliteinfosource->isVirtualQNmeaSatelliteInfoSource) {
        return static_cast<int>(vqnmeasatelliteinfosource->parseSatelliteInfoFromNmea(data_QByteArrayView, infos_QList, (QGeoSatelliteInfo::SatelliteSystem&)(*system)));
    } else {
        return static_cast<int>(((VirtualQNmeaSatelliteInfoSource*)self)->parseSatelliteInfoFromNmea(data_QByteArrayView, infos_QList, (QGeoSatelliteInfo::SatelliteSystem&)(*system)));
    }
}

// Base class handler implementation
int QNmeaSatelliteInfoSource_SuperParseSatelliteInfoFromNmea2(QNmeaSatelliteInfoSource* self, libqt_string data, libqt_list /* of QGeoSatelliteInfo* */ infos, int* system) {
    auto* vqnmeasatelliteinfosource = dynamic_cast<VirtualQNmeaSatelliteInfoSource*>(self);
    QByteArrayView data_QByteArrayView(data.data, data.len);
    QList<QGeoSatelliteInfo> infos_QList;
    infos_QList.reserve(infos.len);
    QGeoSatelliteInfo** infos_arr = static_cast<QGeoSatelliteInfo**>(infos.data);
    for (size_t i = 0; i < infos.len; ++i) {
        infos_QList.push_back(*(infos_arr[i]));
    }
    if (vqnmeasatelliteinfosource && vqnmeasatelliteinfosource->isVirtualQNmeaSatelliteInfoSource) {
        vqnmeasatelliteinfosource->setQNmeaSatelliteInfoSource_ParseSatelliteInfoFromNmea2_IsBase(true);
        return static_cast<int>(vqnmeasatelliteinfosource->parseSatelliteInfoFromNmea(data_QByteArrayView, infos_QList, (QGeoSatelliteInfo::SatelliteSystem&)(*system)));
    } else {
        return static_cast<int>(((VirtualQNmeaSatelliteInfoSource*)self)->parseSatelliteInfoFromNmea(data_QByteArrayView, infos_QList, (QGeoSatelliteInfo::SatelliteSystem&)(*system)));
    }
}

// Auxiliary method to allow providing re-implementation
void QNmeaSatelliteInfoSource_OnParseSatelliteInfoFromNmea2(QNmeaSatelliteInfoSource* self, intptr_t slot) {
    auto* vqnmeasatelliteinfosource = dynamic_cast<VirtualQNmeaSatelliteInfoSource*>(self);
    if (vqnmeasatelliteinfosource && vqnmeasatelliteinfosource->isVirtualQNmeaSatelliteInfoSource) {
        vqnmeasatelliteinfosource->setQNmeaSatelliteInfoSource_ParseSatelliteInfoFromNmea2_Callback(reinterpret_cast<VirtualQNmeaSatelliteInfoSource::QNmeaSatelliteInfoSource_ParseSatelliteInfoFromNmea2_Callback>(slot));
    }
}

// Derived class handler implementation
void QNmeaSatelliteInfoSource_SetError(QNmeaSatelliteInfoSource* self, int satelliteError) {
    auto* vqnmeasatelliteinfosource = dynamic_cast<VirtualQNmeaSatelliteInfoSource*>(self);
    if (vqnmeasatelliteinfosource && vqnmeasatelliteinfosource->isVirtualQNmeaSatelliteInfoSource) {
        vqnmeasatelliteinfosource->setError(static_cast<QGeoSatelliteInfoSource::Error>(satelliteError));
    } else {
        ((VirtualQNmeaSatelliteInfoSource*)self)->setError(static_cast<QGeoSatelliteInfoSource::Error>(satelliteError));
    }
}

// Base class handler implementation
void QNmeaSatelliteInfoSource_SuperSetError(QNmeaSatelliteInfoSource* self, int satelliteError) {
    auto* vqnmeasatelliteinfosource = dynamic_cast<VirtualQNmeaSatelliteInfoSource*>(self);
    if (vqnmeasatelliteinfosource && vqnmeasatelliteinfosource->isVirtualQNmeaSatelliteInfoSource) {
        vqnmeasatelliteinfosource->setQNmeaSatelliteInfoSource_SetError_IsBase(true);
        vqnmeasatelliteinfosource->setError(static_cast<QGeoSatelliteInfoSource::Error>(satelliteError));
    } else {
        ((VirtualQNmeaSatelliteInfoSource*)self)->setError(static_cast<QGeoSatelliteInfoSource::Error>(satelliteError));
    }
}

// Auxiliary method to allow providing re-implementation
void QNmeaSatelliteInfoSource_OnSetError(QNmeaSatelliteInfoSource* self, intptr_t slot) {
    auto* vqnmeasatelliteinfosource = dynamic_cast<VirtualQNmeaSatelliteInfoSource*>(self);
    if (vqnmeasatelliteinfosource && vqnmeasatelliteinfosource->isVirtualQNmeaSatelliteInfoSource) {
        vqnmeasatelliteinfosource->setQNmeaSatelliteInfoSource_SetError_Callback(reinterpret_cast<VirtualQNmeaSatelliteInfoSource::QNmeaSatelliteInfoSource_SetError_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QNmeaSatelliteInfoSource_Sender(const QNmeaSatelliteInfoSource* self) {
    auto* vqnmeasatelliteinfosource = const_cast<VirtualQNmeaSatelliteInfoSource*>(dynamic_cast<const VirtualQNmeaSatelliteInfoSource*>(self));
    if (vqnmeasatelliteinfosource && vqnmeasatelliteinfosource->isVirtualQNmeaSatelliteInfoSource) {
        return vqnmeasatelliteinfosource->sender();
    } else {
        return ((VirtualQNmeaSatelliteInfoSource*)self)->sender();
    }
}

// Base class handler implementation
QObject* QNmeaSatelliteInfoSource_SuperSender(const QNmeaSatelliteInfoSource* self) {
    auto* vqnmeasatelliteinfosource = const_cast<VirtualQNmeaSatelliteInfoSource*>(dynamic_cast<const VirtualQNmeaSatelliteInfoSource*>(self));
    if (vqnmeasatelliteinfosource && vqnmeasatelliteinfosource->isVirtualQNmeaSatelliteInfoSource) {
        vqnmeasatelliteinfosource->setQNmeaSatelliteInfoSource_Sender_IsBase(true);
        return vqnmeasatelliteinfosource->sender();
    } else {
        return ((VirtualQNmeaSatelliteInfoSource*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QNmeaSatelliteInfoSource_OnSender(const QNmeaSatelliteInfoSource* self, intptr_t slot) {
    auto* vqnmeasatelliteinfosource = const_cast<VirtualQNmeaSatelliteInfoSource*>(dynamic_cast<const VirtualQNmeaSatelliteInfoSource*>(self));
    if (vqnmeasatelliteinfosource && vqnmeasatelliteinfosource->isVirtualQNmeaSatelliteInfoSource) {
        vqnmeasatelliteinfosource->setQNmeaSatelliteInfoSource_Sender_Callback(reinterpret_cast<VirtualQNmeaSatelliteInfoSource::QNmeaSatelliteInfoSource_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QNmeaSatelliteInfoSource_SenderSignalIndex(const QNmeaSatelliteInfoSource* self) {
    auto* vqnmeasatelliteinfosource = const_cast<VirtualQNmeaSatelliteInfoSource*>(dynamic_cast<const VirtualQNmeaSatelliteInfoSource*>(self));
    if (vqnmeasatelliteinfosource && vqnmeasatelliteinfosource->isVirtualQNmeaSatelliteInfoSource) {
        return vqnmeasatelliteinfosource->senderSignalIndex();
    } else {
        return ((VirtualQNmeaSatelliteInfoSource*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QNmeaSatelliteInfoSource_SuperSenderSignalIndex(const QNmeaSatelliteInfoSource* self) {
    auto* vqnmeasatelliteinfosource = const_cast<VirtualQNmeaSatelliteInfoSource*>(dynamic_cast<const VirtualQNmeaSatelliteInfoSource*>(self));
    if (vqnmeasatelliteinfosource && vqnmeasatelliteinfosource->isVirtualQNmeaSatelliteInfoSource) {
        vqnmeasatelliteinfosource->setQNmeaSatelliteInfoSource_SenderSignalIndex_IsBase(true);
        return vqnmeasatelliteinfosource->senderSignalIndex();
    } else {
        return ((VirtualQNmeaSatelliteInfoSource*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QNmeaSatelliteInfoSource_OnSenderSignalIndex(const QNmeaSatelliteInfoSource* self, intptr_t slot) {
    auto* vqnmeasatelliteinfosource = const_cast<VirtualQNmeaSatelliteInfoSource*>(dynamic_cast<const VirtualQNmeaSatelliteInfoSource*>(self));
    if (vqnmeasatelliteinfosource && vqnmeasatelliteinfosource->isVirtualQNmeaSatelliteInfoSource) {
        vqnmeasatelliteinfosource->setQNmeaSatelliteInfoSource_SenderSignalIndex_Callback(reinterpret_cast<VirtualQNmeaSatelliteInfoSource::QNmeaSatelliteInfoSource_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QNmeaSatelliteInfoSource_Receivers(const QNmeaSatelliteInfoSource* self, const char* signal) {
    auto* vqnmeasatelliteinfosource = const_cast<VirtualQNmeaSatelliteInfoSource*>(dynamic_cast<const VirtualQNmeaSatelliteInfoSource*>(self));
    if (vqnmeasatelliteinfosource && vqnmeasatelliteinfosource->isVirtualQNmeaSatelliteInfoSource) {
        return vqnmeasatelliteinfosource->receivers(signal);
    } else {
        return ((VirtualQNmeaSatelliteInfoSource*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QNmeaSatelliteInfoSource_SuperReceivers(const QNmeaSatelliteInfoSource* self, const char* signal) {
    auto* vqnmeasatelliteinfosource = const_cast<VirtualQNmeaSatelliteInfoSource*>(dynamic_cast<const VirtualQNmeaSatelliteInfoSource*>(self));
    if (vqnmeasatelliteinfosource && vqnmeasatelliteinfosource->isVirtualQNmeaSatelliteInfoSource) {
        vqnmeasatelliteinfosource->setQNmeaSatelliteInfoSource_Receivers_IsBase(true);
        return vqnmeasatelliteinfosource->receivers(signal);
    } else {
        return ((VirtualQNmeaSatelliteInfoSource*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QNmeaSatelliteInfoSource_OnReceivers(const QNmeaSatelliteInfoSource* self, intptr_t slot) {
    auto* vqnmeasatelliteinfosource = const_cast<VirtualQNmeaSatelliteInfoSource*>(dynamic_cast<const VirtualQNmeaSatelliteInfoSource*>(self));
    if (vqnmeasatelliteinfosource && vqnmeasatelliteinfosource->isVirtualQNmeaSatelliteInfoSource) {
        vqnmeasatelliteinfosource->setQNmeaSatelliteInfoSource_Receivers_Callback(reinterpret_cast<VirtualQNmeaSatelliteInfoSource::QNmeaSatelliteInfoSource_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QNmeaSatelliteInfoSource_IsSignalConnected(const QNmeaSatelliteInfoSource* self, const QMetaMethod* signal) {
    auto* vqnmeasatelliteinfosource = const_cast<VirtualQNmeaSatelliteInfoSource*>(dynamic_cast<const VirtualQNmeaSatelliteInfoSource*>(self));
    if (vqnmeasatelliteinfosource && vqnmeasatelliteinfosource->isVirtualQNmeaSatelliteInfoSource) {
        return vqnmeasatelliteinfosource->isSignalConnected(*signal);
    } else {
        return ((VirtualQNmeaSatelliteInfoSource*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QNmeaSatelliteInfoSource_SuperIsSignalConnected(const QNmeaSatelliteInfoSource* self, const QMetaMethod* signal) {
    auto* vqnmeasatelliteinfosource = const_cast<VirtualQNmeaSatelliteInfoSource*>(dynamic_cast<const VirtualQNmeaSatelliteInfoSource*>(self));
    if (vqnmeasatelliteinfosource && vqnmeasatelliteinfosource->isVirtualQNmeaSatelliteInfoSource) {
        vqnmeasatelliteinfosource->setQNmeaSatelliteInfoSource_IsSignalConnected_IsBase(true);
        return vqnmeasatelliteinfosource->isSignalConnected(*signal);
    } else {
        return ((VirtualQNmeaSatelliteInfoSource*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QNmeaSatelliteInfoSource_OnIsSignalConnected(const QNmeaSatelliteInfoSource* self, intptr_t slot) {
    auto* vqnmeasatelliteinfosource = const_cast<VirtualQNmeaSatelliteInfoSource*>(dynamic_cast<const VirtualQNmeaSatelliteInfoSource*>(self));
    if (vqnmeasatelliteinfosource && vqnmeasatelliteinfosource->isVirtualQNmeaSatelliteInfoSource) {
        vqnmeasatelliteinfosource->setQNmeaSatelliteInfoSource_IsSignalConnected_Callback(reinterpret_cast<VirtualQNmeaSatelliteInfoSource::QNmeaSatelliteInfoSource_IsSignalConnected_Callback>(slot));
    }
}

void QNmeaSatelliteInfoSource_Delete(QNmeaSatelliteInfoSource* self) {
    delete self;
}
