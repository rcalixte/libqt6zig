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
#include <QByteArray>
#include <cstring>
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
    auto* vqgeosatelliteinfosource = dynamic_cast<VirtualQGeoSatelliteInfoSource*>(self);
    if (vqgeosatelliteinfosource && vqgeosatelliteinfosource->isVirtualQGeoSatelliteInfoSource) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQGeoSatelliteInfoSource*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
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
        parameters_QMap[parameters_karr_i_QString] = *(parameters_varr[i]);
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
        parameters_QMap[parameters_karr_i_QString] = *(parameters_varr[i]);
    }
    return QGeoSatelliteInfoSource::createSource(sourceName_QString, parameters_QMap, parent);
}

libqt_list /* of libqt_string */ QGeoSatelliteInfoSource_AvailableSources() {
    QList<QString> _ret = QGeoSatelliteInfoSource::availableSources();
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

libqt_string QGeoSatelliteInfoSource_SourceName(const QGeoSatelliteInfoSource* self) {
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

void QGeoSatelliteInfoSource_SetUpdateInterval(QGeoSatelliteInfoSource* self, int msec) {
    auto* vqgeosatelliteinfosource = dynamic_cast<VirtualQGeoSatelliteInfoSource*>(self);
    if (vqgeosatelliteinfosource && vqgeosatelliteinfosource->isVirtualQGeoSatelliteInfoSource) {
        self->setUpdateInterval(static_cast<int>(msec));
    } else {
        ((VirtualQGeoSatelliteInfoSource*)self)->setUpdateInterval(static_cast<int>(msec));
    }
}

int QGeoSatelliteInfoSource_UpdateInterval(const QGeoSatelliteInfoSource* self) {
    return self->updateInterval();
}

int QGeoSatelliteInfoSource_MinimumUpdateInterval(const QGeoSatelliteInfoSource* self) {
    auto* vqgeosatelliteinfosource = dynamic_cast<const VirtualQGeoSatelliteInfoSource*>(self);
    if (vqgeosatelliteinfosource && vqgeosatelliteinfosource->isVirtualQGeoSatelliteInfoSource) {
        return vqgeosatelliteinfosource->minimumUpdateInterval();
    } else {
        return ((VirtualQGeoSatelliteInfoSource*)self)->minimumUpdateInterval();
    }
}

int QGeoSatelliteInfoSource_Error(const QGeoSatelliteInfoSource* self) {
    auto* vqgeosatelliteinfosource = dynamic_cast<const VirtualQGeoSatelliteInfoSource*>(self);
    if (vqgeosatelliteinfosource && vqgeosatelliteinfosource->isVirtualQGeoSatelliteInfoSource) {
        return static_cast<int>(vqgeosatelliteinfosource->error());
    } else {
        return static_cast<int>(((VirtualQGeoSatelliteInfoSource*)self)->error());
    }
}

bool QGeoSatelliteInfoSource_SetBackendProperty(QGeoSatelliteInfoSource* self, const libqt_string name, const QVariant* value) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    auto* vqgeosatelliteinfosource = dynamic_cast<VirtualQGeoSatelliteInfoSource*>(self);
    if (vqgeosatelliteinfosource && vqgeosatelliteinfosource->isVirtualQGeoSatelliteInfoSource) {
        return self->setBackendProperty(name_QString, *value);
    } else {
        return ((VirtualQGeoSatelliteInfoSource*)self)->setBackendProperty(name_QString, *value);
    }
}

QVariant* QGeoSatelliteInfoSource_BackendProperty(const QGeoSatelliteInfoSource* self, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    auto* vqgeosatelliteinfosource = dynamic_cast<const VirtualQGeoSatelliteInfoSource*>(self);
    if (vqgeosatelliteinfosource && vqgeosatelliteinfosource->isVirtualQGeoSatelliteInfoSource) {
        return new QVariant(self->backendProperty(name_QString));
    } else {
        return new QVariant(((VirtualQGeoSatelliteInfoSource*)self)->backendProperty(name_QString));
    }
}

void QGeoSatelliteInfoSource_StartUpdates(QGeoSatelliteInfoSource* self) {
    auto* vqgeosatelliteinfosource = dynamic_cast<VirtualQGeoSatelliteInfoSource*>(self);
    if (vqgeosatelliteinfosource && vqgeosatelliteinfosource->isVirtualQGeoSatelliteInfoSource) {
        vqgeosatelliteinfosource->startUpdates();
    } else {
        ((VirtualQGeoSatelliteInfoSource*)self)->startUpdates();
    }
}

void QGeoSatelliteInfoSource_StopUpdates(QGeoSatelliteInfoSource* self) {
    auto* vqgeosatelliteinfosource = dynamic_cast<VirtualQGeoSatelliteInfoSource*>(self);
    if (vqgeosatelliteinfosource && vqgeosatelliteinfosource->isVirtualQGeoSatelliteInfoSource) {
        vqgeosatelliteinfosource->stopUpdates();
    } else {
        ((VirtualQGeoSatelliteInfoSource*)self)->stopUpdates();
    }
}

void QGeoSatelliteInfoSource_RequestUpdate(QGeoSatelliteInfoSource* self, int timeout) {
    auto* vqgeosatelliteinfosource = dynamic_cast<VirtualQGeoSatelliteInfoSource*>(self);
    if (vqgeosatelliteinfosource && vqgeosatelliteinfosource->isVirtualQGeoSatelliteInfoSource) {
        vqgeosatelliteinfosource->requestUpdate(static_cast<int>(timeout));
    } else {
        ((VirtualQGeoSatelliteInfoSource*)self)->requestUpdate(static_cast<int>(timeout));
    }
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
    void (*slotFunc)(QGeoSatelliteInfoSource*, QGeoSatelliteInfo**) = reinterpret_cast<void (*)(QGeoSatelliteInfoSource*, QGeoSatelliteInfo**)>(slot);
    QGeoSatelliteInfoSource::connect(self, &QGeoSatelliteInfoSource::satellitesInViewUpdated, [self, slotFunc](const QList<QGeoSatelliteInfo>& satellites) {
        const QList<QGeoSatelliteInfo>& satellites_ret = satellites;
        // Convert QList<> from C++ memory to manually-managed C memory
        QGeoSatelliteInfo** satellites_arr = static_cast<QGeoSatelliteInfo**>(malloc(sizeof(QGeoSatelliteInfo*) * (satellites_ret.size() + 1)));
        for (qsizetype i = 0; i < satellites_ret.size(); ++i) {
            satellites_arr[i] = new QGeoSatelliteInfo(satellites_ret[i]);
        }
        // Append sentinel value to the list
        satellites_arr[satellites_ret.size()] = nullptr;
        QGeoSatelliteInfo** sigval1 = satellites_arr;
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
    void (*slotFunc)(QGeoSatelliteInfoSource*, QGeoSatelliteInfo**) = reinterpret_cast<void (*)(QGeoSatelliteInfoSource*, QGeoSatelliteInfo**)>(slot);
    QGeoSatelliteInfoSource::connect(self, &QGeoSatelliteInfoSource::satellitesInUseUpdated, [self, slotFunc](const QList<QGeoSatelliteInfo>& satellites) {
        const QList<QGeoSatelliteInfo>& satellites_ret = satellites;
        // Convert QList<> from C++ memory to manually-managed C memory
        QGeoSatelliteInfo** satellites_arr = static_cast<QGeoSatelliteInfo**>(malloc(sizeof(QGeoSatelliteInfo*) * (satellites_ret.size() + 1)));
        for (qsizetype i = 0; i < satellites_ret.size(); ++i) {
            satellites_arr[i] = new QGeoSatelliteInfo(satellites_ret[i]);
        }
        // Append sentinel value to the list
        satellites_arr[satellites_ret.size()] = nullptr;
        QGeoSatelliteInfo** sigval1 = satellites_arr;
        slotFunc(self, sigval1);
        free(satellites_arr);
    });
}

void QGeoSatelliteInfoSource_ErrorOccurred(QGeoSatelliteInfoSource* self, int param1) {
    self->errorOccurred(static_cast<QGeoSatelliteInfoSource::Error>(param1));
}

void QGeoSatelliteInfoSource_Connect_ErrorOccurred(QGeoSatelliteInfoSource* self, intptr_t slot) {
    void (*slotFunc)(QGeoSatelliteInfoSource*, int) = reinterpret_cast<void (*)(QGeoSatelliteInfoSource*, int)>(slot);
    QGeoSatelliteInfoSource::connect(self, &QGeoSatelliteInfoSource::errorOccurred, [self, slotFunc](QGeoSatelliteInfoSource::Error param1) {
        int sigval1 = static_cast<int>(param1);
        slotFunc(self, sigval1);
    });
}

// Base class handler implementation
int QGeoSatelliteInfoSource_QBaseMetacall(QGeoSatelliteInfoSource* self, int param1, int param2, void** param3) {
    auto* vqgeosatelliteinfosource = dynamic_cast<VirtualQGeoSatelliteInfoSource*>(self);
    if (vqgeosatelliteinfosource && vqgeosatelliteinfosource->isVirtualQGeoSatelliteInfoSource) {
        vqgeosatelliteinfosource->setQGeoSatelliteInfoSource_Metacall_IsBase(true);
        return vqgeosatelliteinfosource->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->QGeoSatelliteInfoSource::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void QGeoSatelliteInfoSource_OnMetacall(QGeoSatelliteInfoSource* self, intptr_t slot) {
    auto* vqgeosatelliteinfosource = dynamic_cast<VirtualQGeoSatelliteInfoSource*>(self);
    if (vqgeosatelliteinfosource && vqgeosatelliteinfosource->isVirtualQGeoSatelliteInfoSource) {
        vqgeosatelliteinfosource->setQGeoSatelliteInfoSource_Metacall_Callback(reinterpret_cast<VirtualQGeoSatelliteInfoSource::QGeoSatelliteInfoSource_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
void QGeoSatelliteInfoSource_QBaseSetUpdateInterval(QGeoSatelliteInfoSource* self, int msec) {
    auto* vqgeosatelliteinfosource = dynamic_cast<VirtualQGeoSatelliteInfoSource*>(self);
    if (vqgeosatelliteinfosource && vqgeosatelliteinfosource->isVirtualQGeoSatelliteInfoSource) {
        vqgeosatelliteinfosource->setQGeoSatelliteInfoSource_SetUpdateInterval_IsBase(true);
        vqgeosatelliteinfosource->setUpdateInterval(static_cast<int>(msec));
    } else {
        self->QGeoSatelliteInfoSource::setUpdateInterval(static_cast<int>(msec));
    }
}

// Auxiliary method to allow providing re-implementation
void QGeoSatelliteInfoSource_OnSetUpdateInterval(QGeoSatelliteInfoSource* self, intptr_t slot) {
    auto* vqgeosatelliteinfosource = dynamic_cast<VirtualQGeoSatelliteInfoSource*>(self);
    if (vqgeosatelliteinfosource && vqgeosatelliteinfosource->isVirtualQGeoSatelliteInfoSource) {
        vqgeosatelliteinfosource->setQGeoSatelliteInfoSource_SetUpdateInterval_Callback(reinterpret_cast<VirtualQGeoSatelliteInfoSource::QGeoSatelliteInfoSource_SetUpdateInterval_Callback>(slot));
    }
}

// Base class handler implementation
int QGeoSatelliteInfoSource_QBaseMinimumUpdateInterval(const QGeoSatelliteInfoSource* self) {
    auto* vqgeosatelliteinfosource = const_cast<VirtualQGeoSatelliteInfoSource*>(dynamic_cast<const VirtualQGeoSatelliteInfoSource*>(self));
    if (vqgeosatelliteinfosource && vqgeosatelliteinfosource->isVirtualQGeoSatelliteInfoSource) {
        vqgeosatelliteinfosource->setQGeoSatelliteInfoSource_MinimumUpdateInterval_IsBase(true);
        return vqgeosatelliteinfosource->minimumUpdateInterval();
    } else {
        return ((VirtualQGeoSatelliteInfoSource*)self)->minimumUpdateInterval();
    }
}

// Auxiliary method to allow providing re-implementation
void QGeoSatelliteInfoSource_OnMinimumUpdateInterval(const QGeoSatelliteInfoSource* self, intptr_t slot) {
    auto* vqgeosatelliteinfosource = const_cast<VirtualQGeoSatelliteInfoSource*>(dynamic_cast<const VirtualQGeoSatelliteInfoSource*>(self));
    if (vqgeosatelliteinfosource && vqgeosatelliteinfosource->isVirtualQGeoSatelliteInfoSource) {
        vqgeosatelliteinfosource->setQGeoSatelliteInfoSource_MinimumUpdateInterval_Callback(reinterpret_cast<VirtualQGeoSatelliteInfoSource::QGeoSatelliteInfoSource_MinimumUpdateInterval_Callback>(slot));
    }
}

// Base class handler implementation
int QGeoSatelliteInfoSource_QBaseError(const QGeoSatelliteInfoSource* self) {
    auto* vqgeosatelliteinfosource = const_cast<VirtualQGeoSatelliteInfoSource*>(dynamic_cast<const VirtualQGeoSatelliteInfoSource*>(self));
    if (vqgeosatelliteinfosource && vqgeosatelliteinfosource->isVirtualQGeoSatelliteInfoSource) {
        vqgeosatelliteinfosource->setQGeoSatelliteInfoSource_Error_IsBase(true);
        return static_cast<int>(vqgeosatelliteinfosource->error());
    } else {
        return static_cast<int>(((VirtualQGeoSatelliteInfoSource*)self)->error());
    }
}

// Auxiliary method to allow providing re-implementation
void QGeoSatelliteInfoSource_OnError(const QGeoSatelliteInfoSource* self, intptr_t slot) {
    auto* vqgeosatelliteinfosource = const_cast<VirtualQGeoSatelliteInfoSource*>(dynamic_cast<const VirtualQGeoSatelliteInfoSource*>(self));
    if (vqgeosatelliteinfosource && vqgeosatelliteinfosource->isVirtualQGeoSatelliteInfoSource) {
        vqgeosatelliteinfosource->setQGeoSatelliteInfoSource_Error_Callback(reinterpret_cast<VirtualQGeoSatelliteInfoSource::QGeoSatelliteInfoSource_Error_Callback>(slot));
    }
}

// Base class handler implementation
bool QGeoSatelliteInfoSource_QBaseSetBackendProperty(QGeoSatelliteInfoSource* self, const libqt_string name, const QVariant* value) {
    auto* vqgeosatelliteinfosource = dynamic_cast<VirtualQGeoSatelliteInfoSource*>(self);
    QString name_QString = QString::fromUtf8(name.data, name.len);
    if (vqgeosatelliteinfosource && vqgeosatelliteinfosource->isVirtualQGeoSatelliteInfoSource) {
        vqgeosatelliteinfosource->setQGeoSatelliteInfoSource_SetBackendProperty_IsBase(true);
        return vqgeosatelliteinfosource->setBackendProperty(name_QString, *value);
    } else {
        return self->QGeoSatelliteInfoSource::setBackendProperty(name_QString, *value);
    }
}

// Auxiliary method to allow providing re-implementation
void QGeoSatelliteInfoSource_OnSetBackendProperty(QGeoSatelliteInfoSource* self, intptr_t slot) {
    auto* vqgeosatelliteinfosource = dynamic_cast<VirtualQGeoSatelliteInfoSource*>(self);
    if (vqgeosatelliteinfosource && vqgeosatelliteinfosource->isVirtualQGeoSatelliteInfoSource) {
        vqgeosatelliteinfosource->setQGeoSatelliteInfoSource_SetBackendProperty_Callback(reinterpret_cast<VirtualQGeoSatelliteInfoSource::QGeoSatelliteInfoSource_SetBackendProperty_Callback>(slot));
    }
}

// Base class handler implementation
QVariant* QGeoSatelliteInfoSource_QBaseBackendProperty(const QGeoSatelliteInfoSource* self, const libqt_string name) {
    auto* vqgeosatelliteinfosource = const_cast<VirtualQGeoSatelliteInfoSource*>(dynamic_cast<const VirtualQGeoSatelliteInfoSource*>(self));
    QString name_QString = QString::fromUtf8(name.data, name.len);
    if (vqgeosatelliteinfosource && vqgeosatelliteinfosource->isVirtualQGeoSatelliteInfoSource) {
        vqgeosatelliteinfosource->setQGeoSatelliteInfoSource_BackendProperty_IsBase(true);
        return new QVariant(vqgeosatelliteinfosource->backendProperty(name_QString));
    } else {
        return new QVariant(((VirtualQGeoSatelliteInfoSource*)self)->backendProperty(name_QString));
    }
}

// Auxiliary method to allow providing re-implementation
void QGeoSatelliteInfoSource_OnBackendProperty(const QGeoSatelliteInfoSource* self, intptr_t slot) {
    auto* vqgeosatelliteinfosource = const_cast<VirtualQGeoSatelliteInfoSource*>(dynamic_cast<const VirtualQGeoSatelliteInfoSource*>(self));
    if (vqgeosatelliteinfosource && vqgeosatelliteinfosource->isVirtualQGeoSatelliteInfoSource) {
        vqgeosatelliteinfosource->setQGeoSatelliteInfoSource_BackendProperty_Callback(reinterpret_cast<VirtualQGeoSatelliteInfoSource::QGeoSatelliteInfoSource_BackendProperty_Callback>(slot));
    }
}

// Base class handler implementation
void QGeoSatelliteInfoSource_QBaseStartUpdates(QGeoSatelliteInfoSource* self) {
    auto* vqgeosatelliteinfosource = dynamic_cast<VirtualQGeoSatelliteInfoSource*>(self);
    if (vqgeosatelliteinfosource && vqgeosatelliteinfosource->isVirtualQGeoSatelliteInfoSource) {
        vqgeosatelliteinfosource->setQGeoSatelliteInfoSource_StartUpdates_IsBase(true);
        vqgeosatelliteinfosource->startUpdates();
    } else {
        ((VirtualQGeoSatelliteInfoSource*)self)->startUpdates();
    }
}

// Auxiliary method to allow providing re-implementation
void QGeoSatelliteInfoSource_OnStartUpdates(QGeoSatelliteInfoSource* self, intptr_t slot) {
    auto* vqgeosatelliteinfosource = dynamic_cast<VirtualQGeoSatelliteInfoSource*>(self);
    if (vqgeosatelliteinfosource && vqgeosatelliteinfosource->isVirtualQGeoSatelliteInfoSource) {
        vqgeosatelliteinfosource->setQGeoSatelliteInfoSource_StartUpdates_Callback(reinterpret_cast<VirtualQGeoSatelliteInfoSource::QGeoSatelliteInfoSource_StartUpdates_Callback>(slot));
    }
}

// Base class handler implementation
void QGeoSatelliteInfoSource_QBaseStopUpdates(QGeoSatelliteInfoSource* self) {
    auto* vqgeosatelliteinfosource = dynamic_cast<VirtualQGeoSatelliteInfoSource*>(self);
    if (vqgeosatelliteinfosource && vqgeosatelliteinfosource->isVirtualQGeoSatelliteInfoSource) {
        vqgeosatelliteinfosource->setQGeoSatelliteInfoSource_StopUpdates_IsBase(true);
        vqgeosatelliteinfosource->stopUpdates();
    } else {
        ((VirtualQGeoSatelliteInfoSource*)self)->stopUpdates();
    }
}

// Auxiliary method to allow providing re-implementation
void QGeoSatelliteInfoSource_OnStopUpdates(QGeoSatelliteInfoSource* self, intptr_t slot) {
    auto* vqgeosatelliteinfosource = dynamic_cast<VirtualQGeoSatelliteInfoSource*>(self);
    if (vqgeosatelliteinfosource && vqgeosatelliteinfosource->isVirtualQGeoSatelliteInfoSource) {
        vqgeosatelliteinfosource->setQGeoSatelliteInfoSource_StopUpdates_Callback(reinterpret_cast<VirtualQGeoSatelliteInfoSource::QGeoSatelliteInfoSource_StopUpdates_Callback>(slot));
    }
}

// Base class handler implementation
void QGeoSatelliteInfoSource_QBaseRequestUpdate(QGeoSatelliteInfoSource* self, int timeout) {
    auto* vqgeosatelliteinfosource = dynamic_cast<VirtualQGeoSatelliteInfoSource*>(self);
    if (vqgeosatelliteinfosource && vqgeosatelliteinfosource->isVirtualQGeoSatelliteInfoSource) {
        vqgeosatelliteinfosource->setQGeoSatelliteInfoSource_RequestUpdate_IsBase(true);
        vqgeosatelliteinfosource->requestUpdate(static_cast<int>(timeout));
    } else {
        ((VirtualQGeoSatelliteInfoSource*)self)->requestUpdate(static_cast<int>(timeout));
    }
}

// Auxiliary method to allow providing re-implementation
void QGeoSatelliteInfoSource_OnRequestUpdate(QGeoSatelliteInfoSource* self, intptr_t slot) {
    auto* vqgeosatelliteinfosource = dynamic_cast<VirtualQGeoSatelliteInfoSource*>(self);
    if (vqgeosatelliteinfosource && vqgeosatelliteinfosource->isVirtualQGeoSatelliteInfoSource) {
        vqgeosatelliteinfosource->setQGeoSatelliteInfoSource_RequestUpdate_Callback(reinterpret_cast<VirtualQGeoSatelliteInfoSource::QGeoSatelliteInfoSource_RequestUpdate_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGeoSatelliteInfoSource_Event(QGeoSatelliteInfoSource* self, QEvent* event) {
    auto* vqgeosatelliteinfosource = dynamic_cast<VirtualQGeoSatelliteInfoSource*>(self);
    if (vqgeosatelliteinfosource && vqgeosatelliteinfosource->isVirtualQGeoSatelliteInfoSource) {
        return vqgeosatelliteinfosource->event(event);
    } else {
        return self->QGeoSatelliteInfoSource::event(event);
    }
}

// Base class handler implementation
bool QGeoSatelliteInfoSource_QBaseEvent(QGeoSatelliteInfoSource* self, QEvent* event) {
    auto* vqgeosatelliteinfosource = dynamic_cast<VirtualQGeoSatelliteInfoSource*>(self);
    if (vqgeosatelliteinfosource && vqgeosatelliteinfosource->isVirtualQGeoSatelliteInfoSource) {
        vqgeosatelliteinfosource->setQGeoSatelliteInfoSource_Event_IsBase(true);
        return vqgeosatelliteinfosource->event(event);
    } else {
        return self->QGeoSatelliteInfoSource::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGeoSatelliteInfoSource_OnEvent(QGeoSatelliteInfoSource* self, intptr_t slot) {
    auto* vqgeosatelliteinfosource = dynamic_cast<VirtualQGeoSatelliteInfoSource*>(self);
    if (vqgeosatelliteinfosource && vqgeosatelliteinfosource->isVirtualQGeoSatelliteInfoSource) {
        vqgeosatelliteinfosource->setQGeoSatelliteInfoSource_Event_Callback(reinterpret_cast<VirtualQGeoSatelliteInfoSource::QGeoSatelliteInfoSource_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGeoSatelliteInfoSource_EventFilter(QGeoSatelliteInfoSource* self, QObject* watched, QEvent* event) {
    auto* vqgeosatelliteinfosource = dynamic_cast<VirtualQGeoSatelliteInfoSource*>(self);
    if (vqgeosatelliteinfosource && vqgeosatelliteinfosource->isVirtualQGeoSatelliteInfoSource) {
        return vqgeosatelliteinfosource->eventFilter(watched, event);
    } else {
        return self->QGeoSatelliteInfoSource::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QGeoSatelliteInfoSource_QBaseEventFilter(QGeoSatelliteInfoSource* self, QObject* watched, QEvent* event) {
    auto* vqgeosatelliteinfosource = dynamic_cast<VirtualQGeoSatelliteInfoSource*>(self);
    if (vqgeosatelliteinfosource && vqgeosatelliteinfosource->isVirtualQGeoSatelliteInfoSource) {
        vqgeosatelliteinfosource->setQGeoSatelliteInfoSource_EventFilter_IsBase(true);
        return vqgeosatelliteinfosource->eventFilter(watched, event);
    } else {
        return self->QGeoSatelliteInfoSource::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGeoSatelliteInfoSource_OnEventFilter(QGeoSatelliteInfoSource* self, intptr_t slot) {
    auto* vqgeosatelliteinfosource = dynamic_cast<VirtualQGeoSatelliteInfoSource*>(self);
    if (vqgeosatelliteinfosource && vqgeosatelliteinfosource->isVirtualQGeoSatelliteInfoSource) {
        vqgeosatelliteinfosource->setQGeoSatelliteInfoSource_EventFilter_Callback(reinterpret_cast<VirtualQGeoSatelliteInfoSource::QGeoSatelliteInfoSource_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QGeoSatelliteInfoSource_TimerEvent(QGeoSatelliteInfoSource* self, QTimerEvent* event) {
    auto* vqgeosatelliteinfosource = dynamic_cast<VirtualQGeoSatelliteInfoSource*>(self);
    if (vqgeosatelliteinfosource && vqgeosatelliteinfosource->isVirtualQGeoSatelliteInfoSource) {
        vqgeosatelliteinfosource->timerEvent(event);
    } else {
        ((VirtualQGeoSatelliteInfoSource*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QGeoSatelliteInfoSource_QBaseTimerEvent(QGeoSatelliteInfoSource* self, QTimerEvent* event) {
    auto* vqgeosatelliteinfosource = dynamic_cast<VirtualQGeoSatelliteInfoSource*>(self);
    if (vqgeosatelliteinfosource && vqgeosatelliteinfosource->isVirtualQGeoSatelliteInfoSource) {
        vqgeosatelliteinfosource->setQGeoSatelliteInfoSource_TimerEvent_IsBase(true);
        vqgeosatelliteinfosource->timerEvent(event);
    } else {
        ((VirtualQGeoSatelliteInfoSource*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGeoSatelliteInfoSource_OnTimerEvent(QGeoSatelliteInfoSource* self, intptr_t slot) {
    auto* vqgeosatelliteinfosource = dynamic_cast<VirtualQGeoSatelliteInfoSource*>(self);
    if (vqgeosatelliteinfosource && vqgeosatelliteinfosource->isVirtualQGeoSatelliteInfoSource) {
        vqgeosatelliteinfosource->setQGeoSatelliteInfoSource_TimerEvent_Callback(reinterpret_cast<VirtualQGeoSatelliteInfoSource::QGeoSatelliteInfoSource_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGeoSatelliteInfoSource_ChildEvent(QGeoSatelliteInfoSource* self, QChildEvent* event) {
    auto* vqgeosatelliteinfosource = dynamic_cast<VirtualQGeoSatelliteInfoSource*>(self);
    if (vqgeosatelliteinfosource && vqgeosatelliteinfosource->isVirtualQGeoSatelliteInfoSource) {
        vqgeosatelliteinfosource->childEvent(event);
    } else {
        ((VirtualQGeoSatelliteInfoSource*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QGeoSatelliteInfoSource_QBaseChildEvent(QGeoSatelliteInfoSource* self, QChildEvent* event) {
    auto* vqgeosatelliteinfosource = dynamic_cast<VirtualQGeoSatelliteInfoSource*>(self);
    if (vqgeosatelliteinfosource && vqgeosatelliteinfosource->isVirtualQGeoSatelliteInfoSource) {
        vqgeosatelliteinfosource->setQGeoSatelliteInfoSource_ChildEvent_IsBase(true);
        vqgeosatelliteinfosource->childEvent(event);
    } else {
        ((VirtualQGeoSatelliteInfoSource*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGeoSatelliteInfoSource_OnChildEvent(QGeoSatelliteInfoSource* self, intptr_t slot) {
    auto* vqgeosatelliteinfosource = dynamic_cast<VirtualQGeoSatelliteInfoSource*>(self);
    if (vqgeosatelliteinfosource && vqgeosatelliteinfosource->isVirtualQGeoSatelliteInfoSource) {
        vqgeosatelliteinfosource->setQGeoSatelliteInfoSource_ChildEvent_Callback(reinterpret_cast<VirtualQGeoSatelliteInfoSource::QGeoSatelliteInfoSource_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGeoSatelliteInfoSource_CustomEvent(QGeoSatelliteInfoSource* self, QEvent* event) {
    auto* vqgeosatelliteinfosource = dynamic_cast<VirtualQGeoSatelliteInfoSource*>(self);
    if (vqgeosatelliteinfosource && vqgeosatelliteinfosource->isVirtualQGeoSatelliteInfoSource) {
        vqgeosatelliteinfosource->customEvent(event);
    } else {
        ((VirtualQGeoSatelliteInfoSource*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QGeoSatelliteInfoSource_QBaseCustomEvent(QGeoSatelliteInfoSource* self, QEvent* event) {
    auto* vqgeosatelliteinfosource = dynamic_cast<VirtualQGeoSatelliteInfoSource*>(self);
    if (vqgeosatelliteinfosource && vqgeosatelliteinfosource->isVirtualQGeoSatelliteInfoSource) {
        vqgeosatelliteinfosource->setQGeoSatelliteInfoSource_CustomEvent_IsBase(true);
        vqgeosatelliteinfosource->customEvent(event);
    } else {
        ((VirtualQGeoSatelliteInfoSource*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGeoSatelliteInfoSource_OnCustomEvent(QGeoSatelliteInfoSource* self, intptr_t slot) {
    auto* vqgeosatelliteinfosource = dynamic_cast<VirtualQGeoSatelliteInfoSource*>(self);
    if (vqgeosatelliteinfosource && vqgeosatelliteinfosource->isVirtualQGeoSatelliteInfoSource) {
        vqgeosatelliteinfosource->setQGeoSatelliteInfoSource_CustomEvent_Callback(reinterpret_cast<VirtualQGeoSatelliteInfoSource::QGeoSatelliteInfoSource_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGeoSatelliteInfoSource_ConnectNotify(QGeoSatelliteInfoSource* self, const QMetaMethod* signal) {
    auto* vqgeosatelliteinfosource = dynamic_cast<VirtualQGeoSatelliteInfoSource*>(self);
    if (vqgeosatelliteinfosource && vqgeosatelliteinfosource->isVirtualQGeoSatelliteInfoSource) {
        vqgeosatelliteinfosource->connectNotify(*signal);
    } else {
        ((VirtualQGeoSatelliteInfoSource*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QGeoSatelliteInfoSource_QBaseConnectNotify(QGeoSatelliteInfoSource* self, const QMetaMethod* signal) {
    auto* vqgeosatelliteinfosource = dynamic_cast<VirtualQGeoSatelliteInfoSource*>(self);
    if (vqgeosatelliteinfosource && vqgeosatelliteinfosource->isVirtualQGeoSatelliteInfoSource) {
        vqgeosatelliteinfosource->setQGeoSatelliteInfoSource_ConnectNotify_IsBase(true);
        vqgeosatelliteinfosource->connectNotify(*signal);
    } else {
        ((VirtualQGeoSatelliteInfoSource*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QGeoSatelliteInfoSource_OnConnectNotify(QGeoSatelliteInfoSource* self, intptr_t slot) {
    auto* vqgeosatelliteinfosource = dynamic_cast<VirtualQGeoSatelliteInfoSource*>(self);
    if (vqgeosatelliteinfosource && vqgeosatelliteinfosource->isVirtualQGeoSatelliteInfoSource) {
        vqgeosatelliteinfosource->setQGeoSatelliteInfoSource_ConnectNotify_Callback(reinterpret_cast<VirtualQGeoSatelliteInfoSource::QGeoSatelliteInfoSource_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QGeoSatelliteInfoSource_DisconnectNotify(QGeoSatelliteInfoSource* self, const QMetaMethod* signal) {
    auto* vqgeosatelliteinfosource = dynamic_cast<VirtualQGeoSatelliteInfoSource*>(self);
    if (vqgeosatelliteinfosource && vqgeosatelliteinfosource->isVirtualQGeoSatelliteInfoSource) {
        vqgeosatelliteinfosource->disconnectNotify(*signal);
    } else {
        ((VirtualQGeoSatelliteInfoSource*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QGeoSatelliteInfoSource_QBaseDisconnectNotify(QGeoSatelliteInfoSource* self, const QMetaMethod* signal) {
    auto* vqgeosatelliteinfosource = dynamic_cast<VirtualQGeoSatelliteInfoSource*>(self);
    if (vqgeosatelliteinfosource && vqgeosatelliteinfosource->isVirtualQGeoSatelliteInfoSource) {
        vqgeosatelliteinfosource->setQGeoSatelliteInfoSource_DisconnectNotify_IsBase(true);
        vqgeosatelliteinfosource->disconnectNotify(*signal);
    } else {
        ((VirtualQGeoSatelliteInfoSource*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QGeoSatelliteInfoSource_OnDisconnectNotify(QGeoSatelliteInfoSource* self, intptr_t slot) {
    auto* vqgeosatelliteinfosource = dynamic_cast<VirtualQGeoSatelliteInfoSource*>(self);
    if (vqgeosatelliteinfosource && vqgeosatelliteinfosource->isVirtualQGeoSatelliteInfoSource) {
        vqgeosatelliteinfosource->setQGeoSatelliteInfoSource_DisconnectNotify_Callback(reinterpret_cast<VirtualQGeoSatelliteInfoSource::QGeoSatelliteInfoSource_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QGeoSatelliteInfoSource_Sender(const QGeoSatelliteInfoSource* self) {
    auto* vqgeosatelliteinfosource = const_cast<VirtualQGeoSatelliteInfoSource*>(dynamic_cast<const VirtualQGeoSatelliteInfoSource*>(self));
    if (vqgeosatelliteinfosource && vqgeosatelliteinfosource->isVirtualQGeoSatelliteInfoSource) {
        return vqgeosatelliteinfosource->sender();
    } else {
        return ((VirtualQGeoSatelliteInfoSource*)self)->sender();
    }
}

// Base class handler implementation
QObject* QGeoSatelliteInfoSource_QBaseSender(const QGeoSatelliteInfoSource* self) {
    auto* vqgeosatelliteinfosource = const_cast<VirtualQGeoSatelliteInfoSource*>(dynamic_cast<const VirtualQGeoSatelliteInfoSource*>(self));
    if (vqgeosatelliteinfosource && vqgeosatelliteinfosource->isVirtualQGeoSatelliteInfoSource) {
        vqgeosatelliteinfosource->setQGeoSatelliteInfoSource_Sender_IsBase(true);
        return vqgeosatelliteinfosource->sender();
    } else {
        return ((VirtualQGeoSatelliteInfoSource*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QGeoSatelliteInfoSource_OnSender(const QGeoSatelliteInfoSource* self, intptr_t slot) {
    auto* vqgeosatelliteinfosource = const_cast<VirtualQGeoSatelliteInfoSource*>(dynamic_cast<const VirtualQGeoSatelliteInfoSource*>(self));
    if (vqgeosatelliteinfosource && vqgeosatelliteinfosource->isVirtualQGeoSatelliteInfoSource) {
        vqgeosatelliteinfosource->setQGeoSatelliteInfoSource_Sender_Callback(reinterpret_cast<VirtualQGeoSatelliteInfoSource::QGeoSatelliteInfoSource_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QGeoSatelliteInfoSource_SenderSignalIndex(const QGeoSatelliteInfoSource* self) {
    auto* vqgeosatelliteinfosource = const_cast<VirtualQGeoSatelliteInfoSource*>(dynamic_cast<const VirtualQGeoSatelliteInfoSource*>(self));
    if (vqgeosatelliteinfosource && vqgeosatelliteinfosource->isVirtualQGeoSatelliteInfoSource) {
        return vqgeosatelliteinfosource->senderSignalIndex();
    } else {
        return ((VirtualQGeoSatelliteInfoSource*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QGeoSatelliteInfoSource_QBaseSenderSignalIndex(const QGeoSatelliteInfoSource* self) {
    auto* vqgeosatelliteinfosource = const_cast<VirtualQGeoSatelliteInfoSource*>(dynamic_cast<const VirtualQGeoSatelliteInfoSource*>(self));
    if (vqgeosatelliteinfosource && vqgeosatelliteinfosource->isVirtualQGeoSatelliteInfoSource) {
        vqgeosatelliteinfosource->setQGeoSatelliteInfoSource_SenderSignalIndex_IsBase(true);
        return vqgeosatelliteinfosource->senderSignalIndex();
    } else {
        return ((VirtualQGeoSatelliteInfoSource*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QGeoSatelliteInfoSource_OnSenderSignalIndex(const QGeoSatelliteInfoSource* self, intptr_t slot) {
    auto* vqgeosatelliteinfosource = const_cast<VirtualQGeoSatelliteInfoSource*>(dynamic_cast<const VirtualQGeoSatelliteInfoSource*>(self));
    if (vqgeosatelliteinfosource && vqgeosatelliteinfosource->isVirtualQGeoSatelliteInfoSource) {
        vqgeosatelliteinfosource->setQGeoSatelliteInfoSource_SenderSignalIndex_Callback(reinterpret_cast<VirtualQGeoSatelliteInfoSource::QGeoSatelliteInfoSource_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QGeoSatelliteInfoSource_Receivers(const QGeoSatelliteInfoSource* self, const char* signal) {
    auto* vqgeosatelliteinfosource = const_cast<VirtualQGeoSatelliteInfoSource*>(dynamic_cast<const VirtualQGeoSatelliteInfoSource*>(self));
    if (vqgeosatelliteinfosource && vqgeosatelliteinfosource->isVirtualQGeoSatelliteInfoSource) {
        return vqgeosatelliteinfosource->receivers(signal);
    } else {
        return ((VirtualQGeoSatelliteInfoSource*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QGeoSatelliteInfoSource_QBaseReceivers(const QGeoSatelliteInfoSource* self, const char* signal) {
    auto* vqgeosatelliteinfosource = const_cast<VirtualQGeoSatelliteInfoSource*>(dynamic_cast<const VirtualQGeoSatelliteInfoSource*>(self));
    if (vqgeosatelliteinfosource && vqgeosatelliteinfosource->isVirtualQGeoSatelliteInfoSource) {
        vqgeosatelliteinfosource->setQGeoSatelliteInfoSource_Receivers_IsBase(true);
        return vqgeosatelliteinfosource->receivers(signal);
    } else {
        return ((VirtualQGeoSatelliteInfoSource*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QGeoSatelliteInfoSource_OnReceivers(const QGeoSatelliteInfoSource* self, intptr_t slot) {
    auto* vqgeosatelliteinfosource = const_cast<VirtualQGeoSatelliteInfoSource*>(dynamic_cast<const VirtualQGeoSatelliteInfoSource*>(self));
    if (vqgeosatelliteinfosource && vqgeosatelliteinfosource->isVirtualQGeoSatelliteInfoSource) {
        vqgeosatelliteinfosource->setQGeoSatelliteInfoSource_Receivers_Callback(reinterpret_cast<VirtualQGeoSatelliteInfoSource::QGeoSatelliteInfoSource_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGeoSatelliteInfoSource_IsSignalConnected(const QGeoSatelliteInfoSource* self, const QMetaMethod* signal) {
    auto* vqgeosatelliteinfosource = const_cast<VirtualQGeoSatelliteInfoSource*>(dynamic_cast<const VirtualQGeoSatelliteInfoSource*>(self));
    if (vqgeosatelliteinfosource && vqgeosatelliteinfosource->isVirtualQGeoSatelliteInfoSource) {
        return vqgeosatelliteinfosource->isSignalConnected(*signal);
    } else {
        return ((VirtualQGeoSatelliteInfoSource*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QGeoSatelliteInfoSource_QBaseIsSignalConnected(const QGeoSatelliteInfoSource* self, const QMetaMethod* signal) {
    auto* vqgeosatelliteinfosource = const_cast<VirtualQGeoSatelliteInfoSource*>(dynamic_cast<const VirtualQGeoSatelliteInfoSource*>(self));
    if (vqgeosatelliteinfosource && vqgeosatelliteinfosource->isVirtualQGeoSatelliteInfoSource) {
        vqgeosatelliteinfosource->setQGeoSatelliteInfoSource_IsSignalConnected_IsBase(true);
        return vqgeosatelliteinfosource->isSignalConnected(*signal);
    } else {
        return ((VirtualQGeoSatelliteInfoSource*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QGeoSatelliteInfoSource_OnIsSignalConnected(const QGeoSatelliteInfoSource* self, intptr_t slot) {
    auto* vqgeosatelliteinfosource = const_cast<VirtualQGeoSatelliteInfoSource*>(dynamic_cast<const VirtualQGeoSatelliteInfoSource*>(self));
    if (vqgeosatelliteinfosource && vqgeosatelliteinfosource->isVirtualQGeoSatelliteInfoSource) {
        vqgeosatelliteinfosource->setQGeoSatelliteInfoSource_IsSignalConnected_Callback(reinterpret_cast<VirtualQGeoSatelliteInfoSource::QGeoSatelliteInfoSource_IsSignalConnected_Callback>(slot));
    }
}

void QGeoSatelliteInfoSource_Delete(QGeoSatelliteInfoSource* self) {
    delete self;
}
