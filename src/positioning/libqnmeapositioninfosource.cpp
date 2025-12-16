#include <QByteArrayView>
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
#include <QByteArray>
#include <cstring>
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
    auto* vqnmeapositioninfosource = dynamic_cast<VirtualQNmeaPositionInfoSource*>(self);
    if (vqnmeapositioninfosource && vqnmeapositioninfosource->isVirtualQNmeaPositionInfoSource) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQNmeaPositionInfoSource*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
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
    auto* vqnmeapositioninfosource = dynamic_cast<VirtualQNmeaPositionInfoSource*>(self);
    if (vqnmeapositioninfosource && vqnmeapositioninfosource->isVirtualQNmeaPositionInfoSource) {
        self->setUpdateInterval(static_cast<int>(msec));
    } else {
        ((VirtualQNmeaPositionInfoSource*)self)->setUpdateInterval(static_cast<int>(msec));
    }
}

QGeoPositionInfo* QNmeaPositionInfoSource_LastKnownPosition(const QNmeaPositionInfoSource* self, bool fromSatellitePositioningMethodsOnly) {
    auto* vqnmeapositioninfosource = dynamic_cast<const VirtualQNmeaPositionInfoSource*>(self);
    if (vqnmeapositioninfosource && vqnmeapositioninfosource->isVirtualQNmeaPositionInfoSource) {
        return new QGeoPositionInfo(self->lastKnownPosition(fromSatellitePositioningMethodsOnly));
    } else {
        return new QGeoPositionInfo(((VirtualQNmeaPositionInfoSource*)self)->lastKnownPosition(fromSatellitePositioningMethodsOnly));
    }
}

int QNmeaPositionInfoSource_SupportedPositioningMethods(const QNmeaPositionInfoSource* self) {
    auto* vqnmeapositioninfosource = dynamic_cast<const VirtualQNmeaPositionInfoSource*>(self);
    if (vqnmeapositioninfosource && vqnmeapositioninfosource->isVirtualQNmeaPositionInfoSource) {
        return static_cast<int>(self->supportedPositioningMethods());
    } else {
        return static_cast<int>(((VirtualQNmeaPositionInfoSource*)self)->supportedPositioningMethods());
    }
}

int QNmeaPositionInfoSource_MinimumUpdateInterval(const QNmeaPositionInfoSource* self) {
    auto* vqnmeapositioninfosource = dynamic_cast<const VirtualQNmeaPositionInfoSource*>(self);
    if (vqnmeapositioninfosource && vqnmeapositioninfosource->isVirtualQNmeaPositionInfoSource) {
        return self->minimumUpdateInterval();
    } else {
        return ((VirtualQNmeaPositionInfoSource*)self)->minimumUpdateInterval();
    }
}

int QNmeaPositionInfoSource_Error(const QNmeaPositionInfoSource* self) {
    auto* vqnmeapositioninfosource = dynamic_cast<const VirtualQNmeaPositionInfoSource*>(self);
    if (vqnmeapositioninfosource && vqnmeapositioninfosource->isVirtualQNmeaPositionInfoSource) {
        return static_cast<int>(self->error());
    } else {
        return static_cast<int>(((VirtualQNmeaPositionInfoSource*)self)->error());
    }
}

void QNmeaPositionInfoSource_StartUpdates(QNmeaPositionInfoSource* self) {
    auto* vqnmeapositioninfosource = dynamic_cast<VirtualQNmeaPositionInfoSource*>(self);
    if (vqnmeapositioninfosource && vqnmeapositioninfosource->isVirtualQNmeaPositionInfoSource) {
        self->startUpdates();
    } else {
        ((VirtualQNmeaPositionInfoSource*)self)->startUpdates();
    }
}

void QNmeaPositionInfoSource_StopUpdates(QNmeaPositionInfoSource* self) {
    auto* vqnmeapositioninfosource = dynamic_cast<VirtualQNmeaPositionInfoSource*>(self);
    if (vqnmeapositioninfosource && vqnmeapositioninfosource->isVirtualQNmeaPositionInfoSource) {
        self->stopUpdates();
    } else {
        ((VirtualQNmeaPositionInfoSource*)self)->stopUpdates();
    }
}

void QNmeaPositionInfoSource_RequestUpdate(QNmeaPositionInfoSource* self, int timeout) {
    auto* vqnmeapositioninfosource = dynamic_cast<VirtualQNmeaPositionInfoSource*>(self);
    if (vqnmeapositioninfosource && vqnmeapositioninfosource->isVirtualQNmeaPositionInfoSource) {
        self->requestUpdate(static_cast<int>(timeout));
    } else {
        ((VirtualQNmeaPositionInfoSource*)self)->requestUpdate(static_cast<int>(timeout));
    }
}

bool QNmeaPositionInfoSource_ParsePosInfoFromNmeaData(QNmeaPositionInfoSource* self, const char* data, int size, QGeoPositionInfo* posInfo, bool* hasFix) {
    auto* vqnmeapositioninfosource = dynamic_cast<VirtualQNmeaPositionInfoSource*>(self);
    if (vqnmeapositioninfosource && vqnmeapositioninfosource->isVirtualQNmeaPositionInfoSource) {
        return vqnmeapositioninfosource->parsePosInfoFromNmeaData(data, static_cast<int>(size), posInfo, hasFix);
    }
    return {};
}

// Base class handler implementation
int QNmeaPositionInfoSource_QBaseMetacall(QNmeaPositionInfoSource* self, int param1, int param2, void** param3) {
    auto* vqnmeapositioninfosource = dynamic_cast<VirtualQNmeaPositionInfoSource*>(self);
    if (vqnmeapositioninfosource && vqnmeapositioninfosource->isVirtualQNmeaPositionInfoSource) {
        vqnmeapositioninfosource->setQNmeaPositionInfoSource_Metacall_IsBase(true);
        return vqnmeapositioninfosource->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->QNmeaPositionInfoSource::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void QNmeaPositionInfoSource_OnMetacall(QNmeaPositionInfoSource* self, intptr_t slot) {
    auto* vqnmeapositioninfosource = dynamic_cast<VirtualQNmeaPositionInfoSource*>(self);
    if (vqnmeapositioninfosource && vqnmeapositioninfosource->isVirtualQNmeaPositionInfoSource) {
        vqnmeapositioninfosource->setQNmeaPositionInfoSource_Metacall_Callback(reinterpret_cast<VirtualQNmeaPositionInfoSource::QNmeaPositionInfoSource_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
void QNmeaPositionInfoSource_QBaseSetUpdateInterval(QNmeaPositionInfoSource* self, int msec) {
    auto* vqnmeapositioninfosource = dynamic_cast<VirtualQNmeaPositionInfoSource*>(self);
    if (vqnmeapositioninfosource && vqnmeapositioninfosource->isVirtualQNmeaPositionInfoSource) {
        vqnmeapositioninfosource->setQNmeaPositionInfoSource_SetUpdateInterval_IsBase(true);
        vqnmeapositioninfosource->setUpdateInterval(static_cast<int>(msec));
    } else {
        self->QNmeaPositionInfoSource::setUpdateInterval(static_cast<int>(msec));
    }
}

// Auxiliary method to allow providing re-implementation
void QNmeaPositionInfoSource_OnSetUpdateInterval(QNmeaPositionInfoSource* self, intptr_t slot) {
    auto* vqnmeapositioninfosource = dynamic_cast<VirtualQNmeaPositionInfoSource*>(self);
    if (vqnmeapositioninfosource && vqnmeapositioninfosource->isVirtualQNmeaPositionInfoSource) {
        vqnmeapositioninfosource->setQNmeaPositionInfoSource_SetUpdateInterval_Callback(reinterpret_cast<VirtualQNmeaPositionInfoSource::QNmeaPositionInfoSource_SetUpdateInterval_Callback>(slot));
    }
}

// Base class handler implementation
QGeoPositionInfo* QNmeaPositionInfoSource_QBaseLastKnownPosition(const QNmeaPositionInfoSource* self, bool fromSatellitePositioningMethodsOnly) {
    auto* vqnmeapositioninfosource = const_cast<VirtualQNmeaPositionInfoSource*>(dynamic_cast<const VirtualQNmeaPositionInfoSource*>(self));
    if (vqnmeapositioninfosource && vqnmeapositioninfosource->isVirtualQNmeaPositionInfoSource) {
        vqnmeapositioninfosource->setQNmeaPositionInfoSource_LastKnownPosition_IsBase(true);
        return new QGeoPositionInfo(vqnmeapositioninfosource->lastKnownPosition(fromSatellitePositioningMethodsOnly));
    } else {
        return new QGeoPositionInfo(((VirtualQNmeaPositionInfoSource*)self)->lastKnownPosition(fromSatellitePositioningMethodsOnly));
    }
}

// Auxiliary method to allow providing re-implementation
void QNmeaPositionInfoSource_OnLastKnownPosition(const QNmeaPositionInfoSource* self, intptr_t slot) {
    auto* vqnmeapositioninfosource = const_cast<VirtualQNmeaPositionInfoSource*>(dynamic_cast<const VirtualQNmeaPositionInfoSource*>(self));
    if (vqnmeapositioninfosource && vqnmeapositioninfosource->isVirtualQNmeaPositionInfoSource) {
        vqnmeapositioninfosource->setQNmeaPositionInfoSource_LastKnownPosition_Callback(reinterpret_cast<VirtualQNmeaPositionInfoSource::QNmeaPositionInfoSource_LastKnownPosition_Callback>(slot));
    }
}

// Base class handler implementation
int QNmeaPositionInfoSource_QBaseSupportedPositioningMethods(const QNmeaPositionInfoSource* self) {
    auto* vqnmeapositioninfosource = const_cast<VirtualQNmeaPositionInfoSource*>(dynamic_cast<const VirtualQNmeaPositionInfoSource*>(self));
    if (vqnmeapositioninfosource && vqnmeapositioninfosource->isVirtualQNmeaPositionInfoSource) {
        vqnmeapositioninfosource->setQNmeaPositionInfoSource_SupportedPositioningMethods_IsBase(true);
        return static_cast<int>(vqnmeapositioninfosource->supportedPositioningMethods());
    } else {
        return static_cast<int>(self->QNmeaPositionInfoSource::supportedPositioningMethods());
    }
}

// Auxiliary method to allow providing re-implementation
void QNmeaPositionInfoSource_OnSupportedPositioningMethods(const QNmeaPositionInfoSource* self, intptr_t slot) {
    auto* vqnmeapositioninfosource = const_cast<VirtualQNmeaPositionInfoSource*>(dynamic_cast<const VirtualQNmeaPositionInfoSource*>(self));
    if (vqnmeapositioninfosource && vqnmeapositioninfosource->isVirtualQNmeaPositionInfoSource) {
        vqnmeapositioninfosource->setQNmeaPositionInfoSource_SupportedPositioningMethods_Callback(reinterpret_cast<VirtualQNmeaPositionInfoSource::QNmeaPositionInfoSource_SupportedPositioningMethods_Callback>(slot));
    }
}

// Base class handler implementation
int QNmeaPositionInfoSource_QBaseMinimumUpdateInterval(const QNmeaPositionInfoSource* self) {
    auto* vqnmeapositioninfosource = const_cast<VirtualQNmeaPositionInfoSource*>(dynamic_cast<const VirtualQNmeaPositionInfoSource*>(self));
    if (vqnmeapositioninfosource && vqnmeapositioninfosource->isVirtualQNmeaPositionInfoSource) {
        vqnmeapositioninfosource->setQNmeaPositionInfoSource_MinimumUpdateInterval_IsBase(true);
        return vqnmeapositioninfosource->minimumUpdateInterval();
    } else {
        return self->QNmeaPositionInfoSource::minimumUpdateInterval();
    }
}

// Auxiliary method to allow providing re-implementation
void QNmeaPositionInfoSource_OnMinimumUpdateInterval(const QNmeaPositionInfoSource* self, intptr_t slot) {
    auto* vqnmeapositioninfosource = const_cast<VirtualQNmeaPositionInfoSource*>(dynamic_cast<const VirtualQNmeaPositionInfoSource*>(self));
    if (vqnmeapositioninfosource && vqnmeapositioninfosource->isVirtualQNmeaPositionInfoSource) {
        vqnmeapositioninfosource->setQNmeaPositionInfoSource_MinimumUpdateInterval_Callback(reinterpret_cast<VirtualQNmeaPositionInfoSource::QNmeaPositionInfoSource_MinimumUpdateInterval_Callback>(slot));
    }
}

// Base class handler implementation
int QNmeaPositionInfoSource_QBaseError(const QNmeaPositionInfoSource* self) {
    auto* vqnmeapositioninfosource = const_cast<VirtualQNmeaPositionInfoSource*>(dynamic_cast<const VirtualQNmeaPositionInfoSource*>(self));
    if (vqnmeapositioninfosource && vqnmeapositioninfosource->isVirtualQNmeaPositionInfoSource) {
        vqnmeapositioninfosource->setQNmeaPositionInfoSource_Error_IsBase(true);
        return static_cast<int>(vqnmeapositioninfosource->error());
    } else {
        return static_cast<int>(self->QNmeaPositionInfoSource::error());
    }
}

// Auxiliary method to allow providing re-implementation
void QNmeaPositionInfoSource_OnError(const QNmeaPositionInfoSource* self, intptr_t slot) {
    auto* vqnmeapositioninfosource = const_cast<VirtualQNmeaPositionInfoSource*>(dynamic_cast<const VirtualQNmeaPositionInfoSource*>(self));
    if (vqnmeapositioninfosource && vqnmeapositioninfosource->isVirtualQNmeaPositionInfoSource) {
        vqnmeapositioninfosource->setQNmeaPositionInfoSource_Error_Callback(reinterpret_cast<VirtualQNmeaPositionInfoSource::QNmeaPositionInfoSource_Error_Callback>(slot));
    }
}

// Base class handler implementation
void QNmeaPositionInfoSource_QBaseStartUpdates(QNmeaPositionInfoSource* self) {
    auto* vqnmeapositioninfosource = dynamic_cast<VirtualQNmeaPositionInfoSource*>(self);
    if (vqnmeapositioninfosource && vqnmeapositioninfosource->isVirtualQNmeaPositionInfoSource) {
        vqnmeapositioninfosource->setQNmeaPositionInfoSource_StartUpdates_IsBase(true);
        vqnmeapositioninfosource->startUpdates();
    } else {
        self->QNmeaPositionInfoSource::startUpdates();
    }
}

// Auxiliary method to allow providing re-implementation
void QNmeaPositionInfoSource_OnStartUpdates(QNmeaPositionInfoSource* self, intptr_t slot) {
    auto* vqnmeapositioninfosource = dynamic_cast<VirtualQNmeaPositionInfoSource*>(self);
    if (vqnmeapositioninfosource && vqnmeapositioninfosource->isVirtualQNmeaPositionInfoSource) {
        vqnmeapositioninfosource->setQNmeaPositionInfoSource_StartUpdates_Callback(reinterpret_cast<VirtualQNmeaPositionInfoSource::QNmeaPositionInfoSource_StartUpdates_Callback>(slot));
    }
}

// Base class handler implementation
void QNmeaPositionInfoSource_QBaseStopUpdates(QNmeaPositionInfoSource* self) {
    auto* vqnmeapositioninfosource = dynamic_cast<VirtualQNmeaPositionInfoSource*>(self);
    if (vqnmeapositioninfosource && vqnmeapositioninfosource->isVirtualQNmeaPositionInfoSource) {
        vqnmeapositioninfosource->setQNmeaPositionInfoSource_StopUpdates_IsBase(true);
        vqnmeapositioninfosource->stopUpdates();
    } else {
        self->QNmeaPositionInfoSource::stopUpdates();
    }
}

// Auxiliary method to allow providing re-implementation
void QNmeaPositionInfoSource_OnStopUpdates(QNmeaPositionInfoSource* self, intptr_t slot) {
    auto* vqnmeapositioninfosource = dynamic_cast<VirtualQNmeaPositionInfoSource*>(self);
    if (vqnmeapositioninfosource && vqnmeapositioninfosource->isVirtualQNmeaPositionInfoSource) {
        vqnmeapositioninfosource->setQNmeaPositionInfoSource_StopUpdates_Callback(reinterpret_cast<VirtualQNmeaPositionInfoSource::QNmeaPositionInfoSource_StopUpdates_Callback>(slot));
    }
}

// Base class handler implementation
void QNmeaPositionInfoSource_QBaseRequestUpdate(QNmeaPositionInfoSource* self, int timeout) {
    auto* vqnmeapositioninfosource = dynamic_cast<VirtualQNmeaPositionInfoSource*>(self);
    if (vqnmeapositioninfosource && vqnmeapositioninfosource->isVirtualQNmeaPositionInfoSource) {
        vqnmeapositioninfosource->setQNmeaPositionInfoSource_RequestUpdate_IsBase(true);
        vqnmeapositioninfosource->requestUpdate(static_cast<int>(timeout));
    } else {
        self->QNmeaPositionInfoSource::requestUpdate(static_cast<int>(timeout));
    }
}

// Auxiliary method to allow providing re-implementation
void QNmeaPositionInfoSource_OnRequestUpdate(QNmeaPositionInfoSource* self, intptr_t slot) {
    auto* vqnmeapositioninfosource = dynamic_cast<VirtualQNmeaPositionInfoSource*>(self);
    if (vqnmeapositioninfosource && vqnmeapositioninfosource->isVirtualQNmeaPositionInfoSource) {
        vqnmeapositioninfosource->setQNmeaPositionInfoSource_RequestUpdate_Callback(reinterpret_cast<VirtualQNmeaPositionInfoSource::QNmeaPositionInfoSource_RequestUpdate_Callback>(slot));
    }
}

// Base class handler implementation
bool QNmeaPositionInfoSource_QBaseParsePosInfoFromNmeaData(QNmeaPositionInfoSource* self, const char* data, int size, QGeoPositionInfo* posInfo, bool* hasFix) {
    auto* vqnmeapositioninfosource = dynamic_cast<VirtualQNmeaPositionInfoSource*>(self);
    if (vqnmeapositioninfosource && vqnmeapositioninfosource->isVirtualQNmeaPositionInfoSource) {
        vqnmeapositioninfosource->setQNmeaPositionInfoSource_ParsePosInfoFromNmeaData_IsBase(true);
        return vqnmeapositioninfosource->parsePosInfoFromNmeaData(data, static_cast<int>(size), posInfo, hasFix);
    } else {
        return ((VirtualQNmeaPositionInfoSource*)self)->parsePosInfoFromNmeaData(data, static_cast<int>(size), posInfo, hasFix);
    }
}

// Auxiliary method to allow providing re-implementation
void QNmeaPositionInfoSource_OnParsePosInfoFromNmeaData(QNmeaPositionInfoSource* self, intptr_t slot) {
    auto* vqnmeapositioninfosource = dynamic_cast<VirtualQNmeaPositionInfoSource*>(self);
    if (vqnmeapositioninfosource && vqnmeapositioninfosource->isVirtualQNmeaPositionInfoSource) {
        vqnmeapositioninfosource->setQNmeaPositionInfoSource_ParsePosInfoFromNmeaData_Callback(reinterpret_cast<VirtualQNmeaPositionInfoSource::QNmeaPositionInfoSource_ParsePosInfoFromNmeaData_Callback>(slot));
    }
}

// Derived class handler implementation
void QNmeaPositionInfoSource_SetPreferredPositioningMethods(QNmeaPositionInfoSource* self, int methods) {
    auto* vqnmeapositioninfosource = dynamic_cast<VirtualQNmeaPositionInfoSource*>(self);
    if (vqnmeapositioninfosource && vqnmeapositioninfosource->isVirtualQNmeaPositionInfoSource) {
        vqnmeapositioninfosource->setPreferredPositioningMethods(static_cast<QGeoPositionInfoSource::PositioningMethods>(methods));
    } else {
        self->QNmeaPositionInfoSource::setPreferredPositioningMethods(static_cast<QGeoPositionInfoSource::PositioningMethods>(methods));
    }
}

// Base class handler implementation
void QNmeaPositionInfoSource_QBaseSetPreferredPositioningMethods(QNmeaPositionInfoSource* self, int methods) {
    auto* vqnmeapositioninfosource = dynamic_cast<VirtualQNmeaPositionInfoSource*>(self);
    if (vqnmeapositioninfosource && vqnmeapositioninfosource->isVirtualQNmeaPositionInfoSource) {
        vqnmeapositioninfosource->setQNmeaPositionInfoSource_SetPreferredPositioningMethods_IsBase(true);
        vqnmeapositioninfosource->setPreferredPositioningMethods(static_cast<QGeoPositionInfoSource::PositioningMethods>(methods));
    } else {
        self->QNmeaPositionInfoSource::setPreferredPositioningMethods(static_cast<QGeoPositionInfoSource::PositioningMethods>(methods));
    }
}

// Auxiliary method to allow providing re-implementation
void QNmeaPositionInfoSource_OnSetPreferredPositioningMethods(QNmeaPositionInfoSource* self, intptr_t slot) {
    auto* vqnmeapositioninfosource = dynamic_cast<VirtualQNmeaPositionInfoSource*>(self);
    if (vqnmeapositioninfosource && vqnmeapositioninfosource->isVirtualQNmeaPositionInfoSource) {
        vqnmeapositioninfosource->setQNmeaPositionInfoSource_SetPreferredPositioningMethods_Callback(reinterpret_cast<VirtualQNmeaPositionInfoSource::QNmeaPositionInfoSource_SetPreferredPositioningMethods_Callback>(slot));
    }
}

// Derived class handler implementation
bool QNmeaPositionInfoSource_SetBackendProperty(QNmeaPositionInfoSource* self, const libqt_string name, const QVariant* value) {
    auto* vqnmeapositioninfosource = dynamic_cast<VirtualQNmeaPositionInfoSource*>(self);
    QString name_QString = QString::fromUtf8(name.data, name.len);
    if (vqnmeapositioninfosource && vqnmeapositioninfosource->isVirtualQNmeaPositionInfoSource) {
        return vqnmeapositioninfosource->setBackendProperty(name_QString, *value);
    } else {
        return self->QNmeaPositionInfoSource::setBackendProperty(name_QString, *value);
    }
}

// Base class handler implementation
bool QNmeaPositionInfoSource_QBaseSetBackendProperty(QNmeaPositionInfoSource* self, const libqt_string name, const QVariant* value) {
    auto* vqnmeapositioninfosource = dynamic_cast<VirtualQNmeaPositionInfoSource*>(self);
    QString name_QString = QString::fromUtf8(name.data, name.len);
    if (vqnmeapositioninfosource && vqnmeapositioninfosource->isVirtualQNmeaPositionInfoSource) {
        vqnmeapositioninfosource->setQNmeaPositionInfoSource_SetBackendProperty_IsBase(true);
        return vqnmeapositioninfosource->setBackendProperty(name_QString, *value);
    } else {
        return self->QNmeaPositionInfoSource::setBackendProperty(name_QString, *value);
    }
}

// Auxiliary method to allow providing re-implementation
void QNmeaPositionInfoSource_OnSetBackendProperty(QNmeaPositionInfoSource* self, intptr_t slot) {
    auto* vqnmeapositioninfosource = dynamic_cast<VirtualQNmeaPositionInfoSource*>(self);
    if (vqnmeapositioninfosource && vqnmeapositioninfosource->isVirtualQNmeaPositionInfoSource) {
        vqnmeapositioninfosource->setQNmeaPositionInfoSource_SetBackendProperty_Callback(reinterpret_cast<VirtualQNmeaPositionInfoSource::QNmeaPositionInfoSource_SetBackendProperty_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QNmeaPositionInfoSource_BackendProperty(const QNmeaPositionInfoSource* self, const libqt_string name) {
    auto* vqnmeapositioninfosource = const_cast<VirtualQNmeaPositionInfoSource*>(dynamic_cast<const VirtualQNmeaPositionInfoSource*>(self));
    QString name_QString = QString::fromUtf8(name.data, name.len);
    if (vqnmeapositioninfosource && vqnmeapositioninfosource->isVirtualQNmeaPositionInfoSource) {
        return new QVariant(vqnmeapositioninfosource->backendProperty(name_QString));
    } else {
        return new QVariant(((VirtualQNmeaPositionInfoSource*)self)->backendProperty(name_QString));
    }
}

// Base class handler implementation
QVariant* QNmeaPositionInfoSource_QBaseBackendProperty(const QNmeaPositionInfoSource* self, const libqt_string name) {
    auto* vqnmeapositioninfosource = const_cast<VirtualQNmeaPositionInfoSource*>(dynamic_cast<const VirtualQNmeaPositionInfoSource*>(self));
    QString name_QString = QString::fromUtf8(name.data, name.len);
    if (vqnmeapositioninfosource && vqnmeapositioninfosource->isVirtualQNmeaPositionInfoSource) {
        vqnmeapositioninfosource->setQNmeaPositionInfoSource_BackendProperty_IsBase(true);
        return new QVariant(vqnmeapositioninfosource->backendProperty(name_QString));
    } else {
        return new QVariant(((VirtualQNmeaPositionInfoSource*)self)->backendProperty(name_QString));
    }
}

// Auxiliary method to allow providing re-implementation
void QNmeaPositionInfoSource_OnBackendProperty(const QNmeaPositionInfoSource* self, intptr_t slot) {
    auto* vqnmeapositioninfosource = const_cast<VirtualQNmeaPositionInfoSource*>(dynamic_cast<const VirtualQNmeaPositionInfoSource*>(self));
    if (vqnmeapositioninfosource && vqnmeapositioninfosource->isVirtualQNmeaPositionInfoSource) {
        vqnmeapositioninfosource->setQNmeaPositionInfoSource_BackendProperty_Callback(reinterpret_cast<VirtualQNmeaPositionInfoSource::QNmeaPositionInfoSource_BackendProperty_Callback>(slot));
    }
}

// Derived class handler implementation
bool QNmeaPositionInfoSource_Event(QNmeaPositionInfoSource* self, QEvent* event) {
    auto* vqnmeapositioninfosource = dynamic_cast<VirtualQNmeaPositionInfoSource*>(self);
    if (vqnmeapositioninfosource && vqnmeapositioninfosource->isVirtualQNmeaPositionInfoSource) {
        return vqnmeapositioninfosource->event(event);
    } else {
        return self->QNmeaPositionInfoSource::event(event);
    }
}

// Base class handler implementation
bool QNmeaPositionInfoSource_QBaseEvent(QNmeaPositionInfoSource* self, QEvent* event) {
    auto* vqnmeapositioninfosource = dynamic_cast<VirtualQNmeaPositionInfoSource*>(self);
    if (vqnmeapositioninfosource && vqnmeapositioninfosource->isVirtualQNmeaPositionInfoSource) {
        vqnmeapositioninfosource->setQNmeaPositionInfoSource_Event_IsBase(true);
        return vqnmeapositioninfosource->event(event);
    } else {
        return self->QNmeaPositionInfoSource::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QNmeaPositionInfoSource_OnEvent(QNmeaPositionInfoSource* self, intptr_t slot) {
    auto* vqnmeapositioninfosource = dynamic_cast<VirtualQNmeaPositionInfoSource*>(self);
    if (vqnmeapositioninfosource && vqnmeapositioninfosource->isVirtualQNmeaPositionInfoSource) {
        vqnmeapositioninfosource->setQNmeaPositionInfoSource_Event_Callback(reinterpret_cast<VirtualQNmeaPositionInfoSource::QNmeaPositionInfoSource_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QNmeaPositionInfoSource_EventFilter(QNmeaPositionInfoSource* self, QObject* watched, QEvent* event) {
    auto* vqnmeapositioninfosource = dynamic_cast<VirtualQNmeaPositionInfoSource*>(self);
    if (vqnmeapositioninfosource && vqnmeapositioninfosource->isVirtualQNmeaPositionInfoSource) {
        return vqnmeapositioninfosource->eventFilter(watched, event);
    } else {
        return self->QNmeaPositionInfoSource::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QNmeaPositionInfoSource_QBaseEventFilter(QNmeaPositionInfoSource* self, QObject* watched, QEvent* event) {
    auto* vqnmeapositioninfosource = dynamic_cast<VirtualQNmeaPositionInfoSource*>(self);
    if (vqnmeapositioninfosource && vqnmeapositioninfosource->isVirtualQNmeaPositionInfoSource) {
        vqnmeapositioninfosource->setQNmeaPositionInfoSource_EventFilter_IsBase(true);
        return vqnmeapositioninfosource->eventFilter(watched, event);
    } else {
        return self->QNmeaPositionInfoSource::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QNmeaPositionInfoSource_OnEventFilter(QNmeaPositionInfoSource* self, intptr_t slot) {
    auto* vqnmeapositioninfosource = dynamic_cast<VirtualQNmeaPositionInfoSource*>(self);
    if (vqnmeapositioninfosource && vqnmeapositioninfosource->isVirtualQNmeaPositionInfoSource) {
        vqnmeapositioninfosource->setQNmeaPositionInfoSource_EventFilter_Callback(reinterpret_cast<VirtualQNmeaPositionInfoSource::QNmeaPositionInfoSource_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QNmeaPositionInfoSource_TimerEvent(QNmeaPositionInfoSource* self, QTimerEvent* event) {
    auto* vqnmeapositioninfosource = dynamic_cast<VirtualQNmeaPositionInfoSource*>(self);
    if (vqnmeapositioninfosource && vqnmeapositioninfosource->isVirtualQNmeaPositionInfoSource) {
        vqnmeapositioninfosource->timerEvent(event);
    } else {
        ((VirtualQNmeaPositionInfoSource*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QNmeaPositionInfoSource_QBaseTimerEvent(QNmeaPositionInfoSource* self, QTimerEvent* event) {
    auto* vqnmeapositioninfosource = dynamic_cast<VirtualQNmeaPositionInfoSource*>(self);
    if (vqnmeapositioninfosource && vqnmeapositioninfosource->isVirtualQNmeaPositionInfoSource) {
        vqnmeapositioninfosource->setQNmeaPositionInfoSource_TimerEvent_IsBase(true);
        vqnmeapositioninfosource->timerEvent(event);
    } else {
        ((VirtualQNmeaPositionInfoSource*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QNmeaPositionInfoSource_OnTimerEvent(QNmeaPositionInfoSource* self, intptr_t slot) {
    auto* vqnmeapositioninfosource = dynamic_cast<VirtualQNmeaPositionInfoSource*>(self);
    if (vqnmeapositioninfosource && vqnmeapositioninfosource->isVirtualQNmeaPositionInfoSource) {
        vqnmeapositioninfosource->setQNmeaPositionInfoSource_TimerEvent_Callback(reinterpret_cast<VirtualQNmeaPositionInfoSource::QNmeaPositionInfoSource_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QNmeaPositionInfoSource_ChildEvent(QNmeaPositionInfoSource* self, QChildEvent* event) {
    auto* vqnmeapositioninfosource = dynamic_cast<VirtualQNmeaPositionInfoSource*>(self);
    if (vqnmeapositioninfosource && vqnmeapositioninfosource->isVirtualQNmeaPositionInfoSource) {
        vqnmeapositioninfosource->childEvent(event);
    } else {
        ((VirtualQNmeaPositionInfoSource*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QNmeaPositionInfoSource_QBaseChildEvent(QNmeaPositionInfoSource* self, QChildEvent* event) {
    auto* vqnmeapositioninfosource = dynamic_cast<VirtualQNmeaPositionInfoSource*>(self);
    if (vqnmeapositioninfosource && vqnmeapositioninfosource->isVirtualQNmeaPositionInfoSource) {
        vqnmeapositioninfosource->setQNmeaPositionInfoSource_ChildEvent_IsBase(true);
        vqnmeapositioninfosource->childEvent(event);
    } else {
        ((VirtualQNmeaPositionInfoSource*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QNmeaPositionInfoSource_OnChildEvent(QNmeaPositionInfoSource* self, intptr_t slot) {
    auto* vqnmeapositioninfosource = dynamic_cast<VirtualQNmeaPositionInfoSource*>(self);
    if (vqnmeapositioninfosource && vqnmeapositioninfosource->isVirtualQNmeaPositionInfoSource) {
        vqnmeapositioninfosource->setQNmeaPositionInfoSource_ChildEvent_Callback(reinterpret_cast<VirtualQNmeaPositionInfoSource::QNmeaPositionInfoSource_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QNmeaPositionInfoSource_CustomEvent(QNmeaPositionInfoSource* self, QEvent* event) {
    auto* vqnmeapositioninfosource = dynamic_cast<VirtualQNmeaPositionInfoSource*>(self);
    if (vqnmeapositioninfosource && vqnmeapositioninfosource->isVirtualQNmeaPositionInfoSource) {
        vqnmeapositioninfosource->customEvent(event);
    } else {
        ((VirtualQNmeaPositionInfoSource*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QNmeaPositionInfoSource_QBaseCustomEvent(QNmeaPositionInfoSource* self, QEvent* event) {
    auto* vqnmeapositioninfosource = dynamic_cast<VirtualQNmeaPositionInfoSource*>(self);
    if (vqnmeapositioninfosource && vqnmeapositioninfosource->isVirtualQNmeaPositionInfoSource) {
        vqnmeapositioninfosource->setQNmeaPositionInfoSource_CustomEvent_IsBase(true);
        vqnmeapositioninfosource->customEvent(event);
    } else {
        ((VirtualQNmeaPositionInfoSource*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QNmeaPositionInfoSource_OnCustomEvent(QNmeaPositionInfoSource* self, intptr_t slot) {
    auto* vqnmeapositioninfosource = dynamic_cast<VirtualQNmeaPositionInfoSource*>(self);
    if (vqnmeapositioninfosource && vqnmeapositioninfosource->isVirtualQNmeaPositionInfoSource) {
        vqnmeapositioninfosource->setQNmeaPositionInfoSource_CustomEvent_Callback(reinterpret_cast<VirtualQNmeaPositionInfoSource::QNmeaPositionInfoSource_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QNmeaPositionInfoSource_ConnectNotify(QNmeaPositionInfoSource* self, const QMetaMethod* signal) {
    auto* vqnmeapositioninfosource = dynamic_cast<VirtualQNmeaPositionInfoSource*>(self);
    if (vqnmeapositioninfosource && vqnmeapositioninfosource->isVirtualQNmeaPositionInfoSource) {
        vqnmeapositioninfosource->connectNotify(*signal);
    } else {
        ((VirtualQNmeaPositionInfoSource*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QNmeaPositionInfoSource_QBaseConnectNotify(QNmeaPositionInfoSource* self, const QMetaMethod* signal) {
    auto* vqnmeapositioninfosource = dynamic_cast<VirtualQNmeaPositionInfoSource*>(self);
    if (vqnmeapositioninfosource && vqnmeapositioninfosource->isVirtualQNmeaPositionInfoSource) {
        vqnmeapositioninfosource->setQNmeaPositionInfoSource_ConnectNotify_IsBase(true);
        vqnmeapositioninfosource->connectNotify(*signal);
    } else {
        ((VirtualQNmeaPositionInfoSource*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QNmeaPositionInfoSource_OnConnectNotify(QNmeaPositionInfoSource* self, intptr_t slot) {
    auto* vqnmeapositioninfosource = dynamic_cast<VirtualQNmeaPositionInfoSource*>(self);
    if (vqnmeapositioninfosource && vqnmeapositioninfosource->isVirtualQNmeaPositionInfoSource) {
        vqnmeapositioninfosource->setQNmeaPositionInfoSource_ConnectNotify_Callback(reinterpret_cast<VirtualQNmeaPositionInfoSource::QNmeaPositionInfoSource_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QNmeaPositionInfoSource_DisconnectNotify(QNmeaPositionInfoSource* self, const QMetaMethod* signal) {
    auto* vqnmeapositioninfosource = dynamic_cast<VirtualQNmeaPositionInfoSource*>(self);
    if (vqnmeapositioninfosource && vqnmeapositioninfosource->isVirtualQNmeaPositionInfoSource) {
        vqnmeapositioninfosource->disconnectNotify(*signal);
    } else {
        ((VirtualQNmeaPositionInfoSource*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QNmeaPositionInfoSource_QBaseDisconnectNotify(QNmeaPositionInfoSource* self, const QMetaMethod* signal) {
    auto* vqnmeapositioninfosource = dynamic_cast<VirtualQNmeaPositionInfoSource*>(self);
    if (vqnmeapositioninfosource && vqnmeapositioninfosource->isVirtualQNmeaPositionInfoSource) {
        vqnmeapositioninfosource->setQNmeaPositionInfoSource_DisconnectNotify_IsBase(true);
        vqnmeapositioninfosource->disconnectNotify(*signal);
    } else {
        ((VirtualQNmeaPositionInfoSource*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QNmeaPositionInfoSource_OnDisconnectNotify(QNmeaPositionInfoSource* self, intptr_t slot) {
    auto* vqnmeapositioninfosource = dynamic_cast<VirtualQNmeaPositionInfoSource*>(self);
    if (vqnmeapositioninfosource && vqnmeapositioninfosource->isVirtualQNmeaPositionInfoSource) {
        vqnmeapositioninfosource->setQNmeaPositionInfoSource_DisconnectNotify_Callback(reinterpret_cast<VirtualQNmeaPositionInfoSource::QNmeaPositionInfoSource_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
bool QNmeaPositionInfoSource_ParsePosInfoFromNmeaData2(QNmeaPositionInfoSource* self, libqt_string data, QGeoPositionInfo* posInfo, bool* hasFix) {
    auto* vqnmeapositioninfosource = dynamic_cast<VirtualQNmeaPositionInfoSource*>(self);
    QByteArrayView data_QByteArrayView(data.data, data.len);
    if (vqnmeapositioninfosource && vqnmeapositioninfosource->isVirtualQNmeaPositionInfoSource) {
        return vqnmeapositioninfosource->parsePosInfoFromNmeaData(data_QByteArrayView, posInfo, hasFix);
    } else {
        return ((VirtualQNmeaPositionInfoSource*)self)->parsePosInfoFromNmeaData(data_QByteArrayView, posInfo, hasFix);
    }
}

// Base class handler implementation
bool QNmeaPositionInfoSource_QBaseParsePosInfoFromNmeaData2(QNmeaPositionInfoSource* self, libqt_string data, QGeoPositionInfo* posInfo, bool* hasFix) {
    auto* vqnmeapositioninfosource = dynamic_cast<VirtualQNmeaPositionInfoSource*>(self);
    QByteArrayView data_QByteArrayView(data.data, data.len);
    if (vqnmeapositioninfosource && vqnmeapositioninfosource->isVirtualQNmeaPositionInfoSource) {
        vqnmeapositioninfosource->setQNmeaPositionInfoSource_ParsePosInfoFromNmeaData2_IsBase(true);
        return vqnmeapositioninfosource->parsePosInfoFromNmeaData(data_QByteArrayView, posInfo, hasFix);
    } else {
        return ((VirtualQNmeaPositionInfoSource*)self)->parsePosInfoFromNmeaData(data_QByteArrayView, posInfo, hasFix);
    }
}

// Auxiliary method to allow providing re-implementation
void QNmeaPositionInfoSource_OnParsePosInfoFromNmeaData2(QNmeaPositionInfoSource* self, intptr_t slot) {
    auto* vqnmeapositioninfosource = dynamic_cast<VirtualQNmeaPositionInfoSource*>(self);
    if (vqnmeapositioninfosource && vqnmeapositioninfosource->isVirtualQNmeaPositionInfoSource) {
        vqnmeapositioninfosource->setQNmeaPositionInfoSource_ParsePosInfoFromNmeaData2_Callback(reinterpret_cast<VirtualQNmeaPositionInfoSource::QNmeaPositionInfoSource_ParsePosInfoFromNmeaData2_Callback>(slot));
    }
}

// Derived class handler implementation
void QNmeaPositionInfoSource_SetError(QNmeaPositionInfoSource* self, int positionError) {
    auto* vqnmeapositioninfosource = dynamic_cast<VirtualQNmeaPositionInfoSource*>(self);
    if (vqnmeapositioninfosource && vqnmeapositioninfosource->isVirtualQNmeaPositionInfoSource) {
        vqnmeapositioninfosource->setError(static_cast<QGeoPositionInfoSource::Error>(positionError));
    } else {
        ((VirtualQNmeaPositionInfoSource*)self)->setError(static_cast<QGeoPositionInfoSource::Error>(positionError));
    }
}

// Base class handler implementation
void QNmeaPositionInfoSource_QBaseSetError(QNmeaPositionInfoSource* self, int positionError) {
    auto* vqnmeapositioninfosource = dynamic_cast<VirtualQNmeaPositionInfoSource*>(self);
    if (vqnmeapositioninfosource && vqnmeapositioninfosource->isVirtualQNmeaPositionInfoSource) {
        vqnmeapositioninfosource->setQNmeaPositionInfoSource_SetError_IsBase(true);
        vqnmeapositioninfosource->setError(static_cast<QGeoPositionInfoSource::Error>(positionError));
    } else {
        ((VirtualQNmeaPositionInfoSource*)self)->setError(static_cast<QGeoPositionInfoSource::Error>(positionError));
    }
}

// Auxiliary method to allow providing re-implementation
void QNmeaPositionInfoSource_OnSetError(QNmeaPositionInfoSource* self, intptr_t slot) {
    auto* vqnmeapositioninfosource = dynamic_cast<VirtualQNmeaPositionInfoSource*>(self);
    if (vqnmeapositioninfosource && vqnmeapositioninfosource->isVirtualQNmeaPositionInfoSource) {
        vqnmeapositioninfosource->setQNmeaPositionInfoSource_SetError_Callback(reinterpret_cast<VirtualQNmeaPositionInfoSource::QNmeaPositionInfoSource_SetError_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QNmeaPositionInfoSource_Sender(const QNmeaPositionInfoSource* self) {
    auto* vqnmeapositioninfosource = const_cast<VirtualQNmeaPositionInfoSource*>(dynamic_cast<const VirtualQNmeaPositionInfoSource*>(self));
    if (vqnmeapositioninfosource && vqnmeapositioninfosource->isVirtualQNmeaPositionInfoSource) {
        return vqnmeapositioninfosource->sender();
    } else {
        return ((VirtualQNmeaPositionInfoSource*)self)->sender();
    }
}

// Base class handler implementation
QObject* QNmeaPositionInfoSource_QBaseSender(const QNmeaPositionInfoSource* self) {
    auto* vqnmeapositioninfosource = const_cast<VirtualQNmeaPositionInfoSource*>(dynamic_cast<const VirtualQNmeaPositionInfoSource*>(self));
    if (vqnmeapositioninfosource && vqnmeapositioninfosource->isVirtualQNmeaPositionInfoSource) {
        vqnmeapositioninfosource->setQNmeaPositionInfoSource_Sender_IsBase(true);
        return vqnmeapositioninfosource->sender();
    } else {
        return ((VirtualQNmeaPositionInfoSource*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QNmeaPositionInfoSource_OnSender(const QNmeaPositionInfoSource* self, intptr_t slot) {
    auto* vqnmeapositioninfosource = const_cast<VirtualQNmeaPositionInfoSource*>(dynamic_cast<const VirtualQNmeaPositionInfoSource*>(self));
    if (vqnmeapositioninfosource && vqnmeapositioninfosource->isVirtualQNmeaPositionInfoSource) {
        vqnmeapositioninfosource->setQNmeaPositionInfoSource_Sender_Callback(reinterpret_cast<VirtualQNmeaPositionInfoSource::QNmeaPositionInfoSource_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QNmeaPositionInfoSource_SenderSignalIndex(const QNmeaPositionInfoSource* self) {
    auto* vqnmeapositioninfosource = const_cast<VirtualQNmeaPositionInfoSource*>(dynamic_cast<const VirtualQNmeaPositionInfoSource*>(self));
    if (vqnmeapositioninfosource && vqnmeapositioninfosource->isVirtualQNmeaPositionInfoSource) {
        return vqnmeapositioninfosource->senderSignalIndex();
    } else {
        return ((VirtualQNmeaPositionInfoSource*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QNmeaPositionInfoSource_QBaseSenderSignalIndex(const QNmeaPositionInfoSource* self) {
    auto* vqnmeapositioninfosource = const_cast<VirtualQNmeaPositionInfoSource*>(dynamic_cast<const VirtualQNmeaPositionInfoSource*>(self));
    if (vqnmeapositioninfosource && vqnmeapositioninfosource->isVirtualQNmeaPositionInfoSource) {
        vqnmeapositioninfosource->setQNmeaPositionInfoSource_SenderSignalIndex_IsBase(true);
        return vqnmeapositioninfosource->senderSignalIndex();
    } else {
        return ((VirtualQNmeaPositionInfoSource*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QNmeaPositionInfoSource_OnSenderSignalIndex(const QNmeaPositionInfoSource* self, intptr_t slot) {
    auto* vqnmeapositioninfosource = const_cast<VirtualQNmeaPositionInfoSource*>(dynamic_cast<const VirtualQNmeaPositionInfoSource*>(self));
    if (vqnmeapositioninfosource && vqnmeapositioninfosource->isVirtualQNmeaPositionInfoSource) {
        vqnmeapositioninfosource->setQNmeaPositionInfoSource_SenderSignalIndex_Callback(reinterpret_cast<VirtualQNmeaPositionInfoSource::QNmeaPositionInfoSource_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QNmeaPositionInfoSource_Receivers(const QNmeaPositionInfoSource* self, const char* signal) {
    auto* vqnmeapositioninfosource = const_cast<VirtualQNmeaPositionInfoSource*>(dynamic_cast<const VirtualQNmeaPositionInfoSource*>(self));
    if (vqnmeapositioninfosource && vqnmeapositioninfosource->isVirtualQNmeaPositionInfoSource) {
        return vqnmeapositioninfosource->receivers(signal);
    } else {
        return ((VirtualQNmeaPositionInfoSource*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QNmeaPositionInfoSource_QBaseReceivers(const QNmeaPositionInfoSource* self, const char* signal) {
    auto* vqnmeapositioninfosource = const_cast<VirtualQNmeaPositionInfoSource*>(dynamic_cast<const VirtualQNmeaPositionInfoSource*>(self));
    if (vqnmeapositioninfosource && vqnmeapositioninfosource->isVirtualQNmeaPositionInfoSource) {
        vqnmeapositioninfosource->setQNmeaPositionInfoSource_Receivers_IsBase(true);
        return vqnmeapositioninfosource->receivers(signal);
    } else {
        return ((VirtualQNmeaPositionInfoSource*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QNmeaPositionInfoSource_OnReceivers(const QNmeaPositionInfoSource* self, intptr_t slot) {
    auto* vqnmeapositioninfosource = const_cast<VirtualQNmeaPositionInfoSource*>(dynamic_cast<const VirtualQNmeaPositionInfoSource*>(self));
    if (vqnmeapositioninfosource && vqnmeapositioninfosource->isVirtualQNmeaPositionInfoSource) {
        vqnmeapositioninfosource->setQNmeaPositionInfoSource_Receivers_Callback(reinterpret_cast<VirtualQNmeaPositionInfoSource::QNmeaPositionInfoSource_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QNmeaPositionInfoSource_IsSignalConnected(const QNmeaPositionInfoSource* self, const QMetaMethod* signal) {
    auto* vqnmeapositioninfosource = const_cast<VirtualQNmeaPositionInfoSource*>(dynamic_cast<const VirtualQNmeaPositionInfoSource*>(self));
    if (vqnmeapositioninfosource && vqnmeapositioninfosource->isVirtualQNmeaPositionInfoSource) {
        return vqnmeapositioninfosource->isSignalConnected(*signal);
    } else {
        return ((VirtualQNmeaPositionInfoSource*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QNmeaPositionInfoSource_QBaseIsSignalConnected(const QNmeaPositionInfoSource* self, const QMetaMethod* signal) {
    auto* vqnmeapositioninfosource = const_cast<VirtualQNmeaPositionInfoSource*>(dynamic_cast<const VirtualQNmeaPositionInfoSource*>(self));
    if (vqnmeapositioninfosource && vqnmeapositioninfosource->isVirtualQNmeaPositionInfoSource) {
        vqnmeapositioninfosource->setQNmeaPositionInfoSource_IsSignalConnected_IsBase(true);
        return vqnmeapositioninfosource->isSignalConnected(*signal);
    } else {
        return ((VirtualQNmeaPositionInfoSource*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QNmeaPositionInfoSource_OnIsSignalConnected(const QNmeaPositionInfoSource* self, intptr_t slot) {
    auto* vqnmeapositioninfosource = const_cast<VirtualQNmeaPositionInfoSource*>(dynamic_cast<const VirtualQNmeaPositionInfoSource*>(self));
    if (vqnmeapositioninfosource && vqnmeapositioninfosource->isVirtualQNmeaPositionInfoSource) {
        vqnmeapositioninfosource->setQNmeaPositionInfoSource_IsSignalConnected_Callback(reinterpret_cast<VirtualQNmeaPositionInfoSource::QNmeaPositionInfoSource_IsSignalConnected_Callback>(slot));
    }
}

void QNmeaPositionInfoSource_Delete(QNmeaPositionInfoSource* self) {
    delete self;
}
