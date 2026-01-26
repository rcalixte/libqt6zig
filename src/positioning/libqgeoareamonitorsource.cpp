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
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QVariant>
#include <qgeoareamonitorsource.h>
#include "libqgeoareamonitorsource.h"
#include "libqgeoareamonitorsource.hxx"

QGeoAreaMonitorSource* QGeoAreaMonitorSource_new(QObject* parent) {
    return new VirtualQGeoAreaMonitorSource(parent);
}

QMetaObject* QGeoAreaMonitorSource_MetaObject(const QGeoAreaMonitorSource* self) {
    auto* vqgeoareamonitorsource = dynamic_cast<const VirtualQGeoAreaMonitorSource*>(self);
    if (vqgeoareamonitorsource && vqgeoareamonitorsource->isVirtualQGeoAreaMonitorSource) {
        return (QMetaObject*)self->metaObject();
    } else {
        return (QMetaObject*)((VirtualQGeoAreaMonitorSource*)self)->metaObject();
    }
}

void* QGeoAreaMonitorSource_Metacast(QGeoAreaMonitorSource* self, const char* param1) {
    auto* vqgeoareamonitorsource = dynamic_cast<VirtualQGeoAreaMonitorSource*>(self);
    if (vqgeoareamonitorsource && vqgeoareamonitorsource->isVirtualQGeoAreaMonitorSource) {
        return self->qt_metacast(param1);
    } else {
        return ((VirtualQGeoAreaMonitorSource*)self)->qt_metacast(param1);
    }
}

int QGeoAreaMonitorSource_Metacall(QGeoAreaMonitorSource* self, int param1, int param2, void** param3) {
    auto* vqgeoareamonitorsource = dynamic_cast<VirtualQGeoAreaMonitorSource*>(self);
    if (vqgeoareamonitorsource && vqgeoareamonitorsource->isVirtualQGeoAreaMonitorSource) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQGeoAreaMonitorSource*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
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

void QGeoAreaMonitorSource_SetPositionInfoSource(QGeoAreaMonitorSource* self, QGeoPositionInfoSource* source) {
    auto* vqgeoareamonitorsource = dynamic_cast<VirtualQGeoAreaMonitorSource*>(self);
    if (vqgeoareamonitorsource && vqgeoareamonitorsource->isVirtualQGeoAreaMonitorSource) {
        self->setPositionInfoSource(source);
    } else {
        ((VirtualQGeoAreaMonitorSource*)self)->setPositionInfoSource(source);
    }
}

QGeoPositionInfoSource* QGeoAreaMonitorSource_PositionInfoSource(const QGeoAreaMonitorSource* self) {
    auto* vqgeoareamonitorsource = dynamic_cast<const VirtualQGeoAreaMonitorSource*>(self);
    if (vqgeoareamonitorsource && vqgeoareamonitorsource->isVirtualQGeoAreaMonitorSource) {
        return self->positionInfoSource();
    } else {
        return ((VirtualQGeoAreaMonitorSource*)self)->positionInfoSource();
    }
}

libqt_string QGeoAreaMonitorSource_SourceName(const QGeoAreaMonitorSource* self) {
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

int QGeoAreaMonitorSource_Error(const QGeoAreaMonitorSource* self) {
    auto* vqgeoareamonitorsource = dynamic_cast<const VirtualQGeoAreaMonitorSource*>(self);
    if (vqgeoareamonitorsource && vqgeoareamonitorsource->isVirtualQGeoAreaMonitorSource) {
        return static_cast<int>(vqgeoareamonitorsource->error());
    } else {
        return static_cast<int>(((VirtualQGeoAreaMonitorSource*)self)->error());
    }
}

int QGeoAreaMonitorSource_SupportedAreaMonitorFeatures(const QGeoAreaMonitorSource* self) {
    auto* vqgeoareamonitorsource = dynamic_cast<const VirtualQGeoAreaMonitorSource*>(self);
    if (vqgeoareamonitorsource && vqgeoareamonitorsource->isVirtualQGeoAreaMonitorSource) {
        return static_cast<int>(vqgeoareamonitorsource->supportedAreaMonitorFeatures());
    } else {
        return static_cast<int>(((VirtualQGeoAreaMonitorSource*)self)->supportedAreaMonitorFeatures());
    }
}

bool QGeoAreaMonitorSource_StartMonitoring(QGeoAreaMonitorSource* self, const QGeoAreaMonitorInfo* monitor) {
    auto* vqgeoareamonitorsource = dynamic_cast<VirtualQGeoAreaMonitorSource*>(self);
    if (vqgeoareamonitorsource && vqgeoareamonitorsource->isVirtualQGeoAreaMonitorSource) {
        return vqgeoareamonitorsource->startMonitoring(*monitor);
    } else {
        return ((VirtualQGeoAreaMonitorSource*)self)->startMonitoring(*monitor);
    }
}

bool QGeoAreaMonitorSource_StopMonitoring(QGeoAreaMonitorSource* self, const QGeoAreaMonitorInfo* monitor) {
    auto* vqgeoareamonitorsource = dynamic_cast<VirtualQGeoAreaMonitorSource*>(self);
    if (vqgeoareamonitorsource && vqgeoareamonitorsource->isVirtualQGeoAreaMonitorSource) {
        return vqgeoareamonitorsource->stopMonitoring(*monitor);
    } else {
        return ((VirtualQGeoAreaMonitorSource*)self)->stopMonitoring(*monitor);
    }
}

bool QGeoAreaMonitorSource_RequestUpdate(QGeoAreaMonitorSource* self, const QGeoAreaMonitorInfo* monitor, const char* signal) {
    auto* vqgeoareamonitorsource = dynamic_cast<VirtualQGeoAreaMonitorSource*>(self);
    if (vqgeoareamonitorsource && vqgeoareamonitorsource->isVirtualQGeoAreaMonitorSource) {
        return vqgeoareamonitorsource->requestUpdate(*monitor, signal);
    } else {
        return ((VirtualQGeoAreaMonitorSource*)self)->requestUpdate(*monitor, signal);
    }
}

libqt_list /* of QGeoAreaMonitorInfo* */ QGeoAreaMonitorSource_ActiveMonitors(const QGeoAreaMonitorSource* self) {
    auto* vqgeoareamonitorsource = dynamic_cast<const VirtualQGeoAreaMonitorSource*>(self);
    if (vqgeoareamonitorsource && vqgeoareamonitorsource->isVirtualQGeoAreaMonitorSource) {
        QList<QGeoAreaMonitorInfo> _ret = vqgeoareamonitorsource->activeMonitors();
        // Convert QList<> from C++ memory to manually-managed C memory
        QGeoAreaMonitorInfo** _arr = static_cast<QGeoAreaMonitorInfo**>(malloc(sizeof(QGeoAreaMonitorInfo*) * (_ret.size())));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = new QGeoAreaMonitorInfo(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else {
        QList<QGeoAreaMonitorInfo> _ret = ((VirtualQGeoAreaMonitorSource*)self)->activeMonitors();
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
}

libqt_list /* of QGeoAreaMonitorInfo* */ QGeoAreaMonitorSource_ActiveMonitors2(const QGeoAreaMonitorSource* self, const QGeoShape* lookupArea) {
    auto* vqgeoareamonitorsource = dynamic_cast<const VirtualQGeoAreaMonitorSource*>(self);
    if (vqgeoareamonitorsource && vqgeoareamonitorsource->isVirtualQGeoAreaMonitorSource) {
        QList<QGeoAreaMonitorInfo> _ret = vqgeoareamonitorsource->activeMonitors(*lookupArea);
        // Convert QList<> from C++ memory to manually-managed C memory
        QGeoAreaMonitorInfo** _arr = static_cast<QGeoAreaMonitorInfo**>(malloc(sizeof(QGeoAreaMonitorInfo*) * (_ret.size())));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = new QGeoAreaMonitorInfo(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else {
        QList<QGeoAreaMonitorInfo> _ret = ((VirtualQGeoAreaMonitorSource*)self)->activeMonitors(*lookupArea);
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
}

bool QGeoAreaMonitorSource_SetBackendProperty(QGeoAreaMonitorSource* self, const libqt_string name, const QVariant* value) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    auto* vqgeoareamonitorsource = dynamic_cast<VirtualQGeoAreaMonitorSource*>(self);
    if (vqgeoareamonitorsource && vqgeoareamonitorsource->isVirtualQGeoAreaMonitorSource) {
        return self->setBackendProperty(name_QString, *value);
    } else {
        return ((VirtualQGeoAreaMonitorSource*)self)->setBackendProperty(name_QString, *value);
    }
}

QVariant* QGeoAreaMonitorSource_BackendProperty(const QGeoAreaMonitorSource* self, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    auto* vqgeoareamonitorsource = dynamic_cast<const VirtualQGeoAreaMonitorSource*>(self);
    if (vqgeoareamonitorsource && vqgeoareamonitorsource->isVirtualQGeoAreaMonitorSource) {
        return new QVariant(self->backendProperty(name_QString));
    } else {
        return new QVariant(((VirtualQGeoAreaMonitorSource*)self)->backendProperty(name_QString));
    }
}

void QGeoAreaMonitorSource_AreaEntered(QGeoAreaMonitorSource* self, const QGeoAreaMonitorInfo* monitor, const QGeoPositionInfo* update) {
    self->areaEntered(*monitor, *update);
}

void QGeoAreaMonitorSource_Connect_AreaEntered(QGeoAreaMonitorSource* self, intptr_t slot) {
    void (*slotFunc)(QGeoAreaMonitorSource*, QGeoAreaMonitorInfo*, QGeoPositionInfo*) = reinterpret_cast<void (*)(QGeoAreaMonitorSource*, QGeoAreaMonitorInfo*, QGeoPositionInfo*)>(slot);
    QGeoAreaMonitorSource::connect(self, &QGeoAreaMonitorSource::areaEntered, [self, slotFunc](const QGeoAreaMonitorInfo& monitor, const QGeoPositionInfo& update) {
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
    QGeoAreaMonitorSource::connect(self, &QGeoAreaMonitorSource::areaExited, [self, slotFunc](const QGeoAreaMonitorInfo& monitor, const QGeoPositionInfo& update) {
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
    QGeoAreaMonitorSource::connect(self, &QGeoAreaMonitorSource::monitorExpired, [self, slotFunc](const QGeoAreaMonitorInfo& monitor) {
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
    QGeoAreaMonitorSource::connect(self, &QGeoAreaMonitorSource::errorOccurred, [self, slotFunc](QGeoAreaMonitorSource::Error errorVal) {
        int sigval1 = static_cast<int>(errorVal);
        slotFunc(self, sigval1);
    });
}

// Base class handler implementation
QMetaObject* QGeoAreaMonitorSource_QBaseMetaObject(const QGeoAreaMonitorSource* self) {
    auto* vqgeoareamonitorsource = const_cast<VirtualQGeoAreaMonitorSource*>(dynamic_cast<const VirtualQGeoAreaMonitorSource*>(self));
    if (vqgeoareamonitorsource && vqgeoareamonitorsource->isVirtualQGeoAreaMonitorSource) {
        vqgeoareamonitorsource->setQGeoAreaMonitorSource_MetaObject_IsBase(true);
        return (QMetaObject*)vqgeoareamonitorsource->metaObject();
    } else {
        return (QMetaObject*)self->QGeoAreaMonitorSource::metaObject();
    }
}

// Auxiliary method to allow providing re-implementation
void QGeoAreaMonitorSource_OnMetaObject(const QGeoAreaMonitorSource* self, intptr_t slot) {
    auto* vqgeoareamonitorsource = const_cast<VirtualQGeoAreaMonitorSource*>(dynamic_cast<const VirtualQGeoAreaMonitorSource*>(self));
    if (vqgeoareamonitorsource && vqgeoareamonitorsource->isVirtualQGeoAreaMonitorSource) {
        vqgeoareamonitorsource->setQGeoAreaMonitorSource_MetaObject_Callback(reinterpret_cast<VirtualQGeoAreaMonitorSource::QGeoAreaMonitorSource_MetaObject_Callback>(slot));
    }
}

// Base class handler implementation
void* QGeoAreaMonitorSource_QBaseMetacast(QGeoAreaMonitorSource* self, const char* param1) {
    auto* vqgeoareamonitorsource = dynamic_cast<VirtualQGeoAreaMonitorSource*>(self);
    if (vqgeoareamonitorsource && vqgeoareamonitorsource->isVirtualQGeoAreaMonitorSource) {
        vqgeoareamonitorsource->setQGeoAreaMonitorSource_Metacast_IsBase(true);
        return vqgeoareamonitorsource->qt_metacast(param1);
    } else {
        return self->QGeoAreaMonitorSource::qt_metacast(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QGeoAreaMonitorSource_OnMetacast(QGeoAreaMonitorSource* self, intptr_t slot) {
    auto* vqgeoareamonitorsource = dynamic_cast<VirtualQGeoAreaMonitorSource*>(self);
    if (vqgeoareamonitorsource && vqgeoareamonitorsource->isVirtualQGeoAreaMonitorSource) {
        vqgeoareamonitorsource->setQGeoAreaMonitorSource_Metacast_Callback(reinterpret_cast<VirtualQGeoAreaMonitorSource::QGeoAreaMonitorSource_Metacast_Callback>(slot));
    }
}

// Base class handler implementation
int QGeoAreaMonitorSource_QBaseMetacall(QGeoAreaMonitorSource* self, int param1, int param2, void** param3) {
    auto* vqgeoareamonitorsource = dynamic_cast<VirtualQGeoAreaMonitorSource*>(self);
    if (vqgeoareamonitorsource && vqgeoareamonitorsource->isVirtualQGeoAreaMonitorSource) {
        vqgeoareamonitorsource->setQGeoAreaMonitorSource_Metacall_IsBase(true);
        return vqgeoareamonitorsource->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->QGeoAreaMonitorSource::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void QGeoAreaMonitorSource_OnMetacall(QGeoAreaMonitorSource* self, intptr_t slot) {
    auto* vqgeoareamonitorsource = dynamic_cast<VirtualQGeoAreaMonitorSource*>(self);
    if (vqgeoareamonitorsource && vqgeoareamonitorsource->isVirtualQGeoAreaMonitorSource) {
        vqgeoareamonitorsource->setQGeoAreaMonitorSource_Metacall_Callback(reinterpret_cast<VirtualQGeoAreaMonitorSource::QGeoAreaMonitorSource_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
void QGeoAreaMonitorSource_QBaseSetPositionInfoSource(QGeoAreaMonitorSource* self, QGeoPositionInfoSource* source) {
    auto* vqgeoareamonitorsource = dynamic_cast<VirtualQGeoAreaMonitorSource*>(self);
    if (vqgeoareamonitorsource && vqgeoareamonitorsource->isVirtualQGeoAreaMonitorSource) {
        vqgeoareamonitorsource->setQGeoAreaMonitorSource_SetPositionInfoSource_IsBase(true);
        vqgeoareamonitorsource->setPositionInfoSource(source);
    } else {
        self->QGeoAreaMonitorSource::setPositionInfoSource(source);
    }
}

// Auxiliary method to allow providing re-implementation
void QGeoAreaMonitorSource_OnSetPositionInfoSource(QGeoAreaMonitorSource* self, intptr_t slot) {
    auto* vqgeoareamonitorsource = dynamic_cast<VirtualQGeoAreaMonitorSource*>(self);
    if (vqgeoareamonitorsource && vqgeoareamonitorsource->isVirtualQGeoAreaMonitorSource) {
        vqgeoareamonitorsource->setQGeoAreaMonitorSource_SetPositionInfoSource_Callback(reinterpret_cast<VirtualQGeoAreaMonitorSource::QGeoAreaMonitorSource_SetPositionInfoSource_Callback>(slot));
    }
}

// Base class handler implementation
QGeoPositionInfoSource* QGeoAreaMonitorSource_QBasePositionInfoSource(const QGeoAreaMonitorSource* self) {
    auto* vqgeoareamonitorsource = const_cast<VirtualQGeoAreaMonitorSource*>(dynamic_cast<const VirtualQGeoAreaMonitorSource*>(self));
    if (vqgeoareamonitorsource && vqgeoareamonitorsource->isVirtualQGeoAreaMonitorSource) {
        vqgeoareamonitorsource->setQGeoAreaMonitorSource_PositionInfoSource_IsBase(true);
        return vqgeoareamonitorsource->positionInfoSource();
    } else {
        return self->QGeoAreaMonitorSource::positionInfoSource();
    }
}

// Auxiliary method to allow providing re-implementation
void QGeoAreaMonitorSource_OnPositionInfoSource(const QGeoAreaMonitorSource* self, intptr_t slot) {
    auto* vqgeoareamonitorsource = const_cast<VirtualQGeoAreaMonitorSource*>(dynamic_cast<const VirtualQGeoAreaMonitorSource*>(self));
    if (vqgeoareamonitorsource && vqgeoareamonitorsource->isVirtualQGeoAreaMonitorSource) {
        vqgeoareamonitorsource->setQGeoAreaMonitorSource_PositionInfoSource_Callback(reinterpret_cast<VirtualQGeoAreaMonitorSource::QGeoAreaMonitorSource_PositionInfoSource_Callback>(slot));
    }
}

// Base class handler implementation
int QGeoAreaMonitorSource_QBaseError(const QGeoAreaMonitorSource* self) {
    auto* vqgeoareamonitorsource = const_cast<VirtualQGeoAreaMonitorSource*>(dynamic_cast<const VirtualQGeoAreaMonitorSource*>(self));
    if (vqgeoareamonitorsource && vqgeoareamonitorsource->isVirtualQGeoAreaMonitorSource) {
        vqgeoareamonitorsource->setQGeoAreaMonitorSource_Error_IsBase(true);
        return static_cast<int>(vqgeoareamonitorsource->error());
    } else {
        return static_cast<int>(((VirtualQGeoAreaMonitorSource*)self)->error());
    }
}

// Auxiliary method to allow providing re-implementation
void QGeoAreaMonitorSource_OnError(const QGeoAreaMonitorSource* self, intptr_t slot) {
    auto* vqgeoareamonitorsource = const_cast<VirtualQGeoAreaMonitorSource*>(dynamic_cast<const VirtualQGeoAreaMonitorSource*>(self));
    if (vqgeoareamonitorsource && vqgeoareamonitorsource->isVirtualQGeoAreaMonitorSource) {
        vqgeoareamonitorsource->setQGeoAreaMonitorSource_Error_Callback(reinterpret_cast<VirtualQGeoAreaMonitorSource::QGeoAreaMonitorSource_Error_Callback>(slot));
    }
}

// Base class handler implementation
int QGeoAreaMonitorSource_QBaseSupportedAreaMonitorFeatures(const QGeoAreaMonitorSource* self) {
    auto* vqgeoareamonitorsource = const_cast<VirtualQGeoAreaMonitorSource*>(dynamic_cast<const VirtualQGeoAreaMonitorSource*>(self));
    if (vqgeoareamonitorsource && vqgeoareamonitorsource->isVirtualQGeoAreaMonitorSource) {
        vqgeoareamonitorsource->setQGeoAreaMonitorSource_SupportedAreaMonitorFeatures_IsBase(true);
        return static_cast<int>(vqgeoareamonitorsource->supportedAreaMonitorFeatures());
    } else {
        return static_cast<int>(((VirtualQGeoAreaMonitorSource*)self)->supportedAreaMonitorFeatures());
    }
}

// Auxiliary method to allow providing re-implementation
void QGeoAreaMonitorSource_OnSupportedAreaMonitorFeatures(const QGeoAreaMonitorSource* self, intptr_t slot) {
    auto* vqgeoareamonitorsource = const_cast<VirtualQGeoAreaMonitorSource*>(dynamic_cast<const VirtualQGeoAreaMonitorSource*>(self));
    if (vqgeoareamonitorsource && vqgeoareamonitorsource->isVirtualQGeoAreaMonitorSource) {
        vqgeoareamonitorsource->setQGeoAreaMonitorSource_SupportedAreaMonitorFeatures_Callback(reinterpret_cast<VirtualQGeoAreaMonitorSource::QGeoAreaMonitorSource_SupportedAreaMonitorFeatures_Callback>(slot));
    }
}

// Base class handler implementation
bool QGeoAreaMonitorSource_QBaseStartMonitoring(QGeoAreaMonitorSource* self, const QGeoAreaMonitorInfo* monitor) {
    auto* vqgeoareamonitorsource = dynamic_cast<VirtualQGeoAreaMonitorSource*>(self);
    if (vqgeoareamonitorsource && vqgeoareamonitorsource->isVirtualQGeoAreaMonitorSource) {
        vqgeoareamonitorsource->setQGeoAreaMonitorSource_StartMonitoring_IsBase(true);
        return vqgeoareamonitorsource->startMonitoring(*monitor);
    } else {
        return ((VirtualQGeoAreaMonitorSource*)self)->startMonitoring(*monitor);
    }
}

// Auxiliary method to allow providing re-implementation
void QGeoAreaMonitorSource_OnStartMonitoring(QGeoAreaMonitorSource* self, intptr_t slot) {
    auto* vqgeoareamonitorsource = dynamic_cast<VirtualQGeoAreaMonitorSource*>(self);
    if (vqgeoareamonitorsource && vqgeoareamonitorsource->isVirtualQGeoAreaMonitorSource) {
        vqgeoareamonitorsource->setQGeoAreaMonitorSource_StartMonitoring_Callback(reinterpret_cast<VirtualQGeoAreaMonitorSource::QGeoAreaMonitorSource_StartMonitoring_Callback>(slot));
    }
}

// Base class handler implementation
bool QGeoAreaMonitorSource_QBaseStopMonitoring(QGeoAreaMonitorSource* self, const QGeoAreaMonitorInfo* monitor) {
    auto* vqgeoareamonitorsource = dynamic_cast<VirtualQGeoAreaMonitorSource*>(self);
    if (vqgeoareamonitorsource && vqgeoareamonitorsource->isVirtualQGeoAreaMonitorSource) {
        vqgeoareamonitorsource->setQGeoAreaMonitorSource_StopMonitoring_IsBase(true);
        return vqgeoareamonitorsource->stopMonitoring(*monitor);
    } else {
        return ((VirtualQGeoAreaMonitorSource*)self)->stopMonitoring(*monitor);
    }
}

// Auxiliary method to allow providing re-implementation
void QGeoAreaMonitorSource_OnStopMonitoring(QGeoAreaMonitorSource* self, intptr_t slot) {
    auto* vqgeoareamonitorsource = dynamic_cast<VirtualQGeoAreaMonitorSource*>(self);
    if (vqgeoareamonitorsource && vqgeoareamonitorsource->isVirtualQGeoAreaMonitorSource) {
        vqgeoareamonitorsource->setQGeoAreaMonitorSource_StopMonitoring_Callback(reinterpret_cast<VirtualQGeoAreaMonitorSource::QGeoAreaMonitorSource_StopMonitoring_Callback>(slot));
    }
}

// Base class handler implementation
bool QGeoAreaMonitorSource_QBaseRequestUpdate(QGeoAreaMonitorSource* self, const QGeoAreaMonitorInfo* monitor, const char* signal) {
    auto* vqgeoareamonitorsource = dynamic_cast<VirtualQGeoAreaMonitorSource*>(self);
    if (vqgeoareamonitorsource && vqgeoareamonitorsource->isVirtualQGeoAreaMonitorSource) {
        vqgeoareamonitorsource->setQGeoAreaMonitorSource_RequestUpdate_IsBase(true);
        return vqgeoareamonitorsource->requestUpdate(*monitor, signal);
    } else {
        return ((VirtualQGeoAreaMonitorSource*)self)->requestUpdate(*monitor, signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QGeoAreaMonitorSource_OnRequestUpdate(QGeoAreaMonitorSource* self, intptr_t slot) {
    auto* vqgeoareamonitorsource = dynamic_cast<VirtualQGeoAreaMonitorSource*>(self);
    if (vqgeoareamonitorsource && vqgeoareamonitorsource->isVirtualQGeoAreaMonitorSource) {
        vqgeoareamonitorsource->setQGeoAreaMonitorSource_RequestUpdate_Callback(reinterpret_cast<VirtualQGeoAreaMonitorSource::QGeoAreaMonitorSource_RequestUpdate_Callback>(slot));
    }
}

// Base class handler implementation
libqt_list /* of QGeoAreaMonitorInfo* */ QGeoAreaMonitorSource_QBaseActiveMonitors(const QGeoAreaMonitorSource* self) {
    auto* vqgeoareamonitorsource = const_cast<VirtualQGeoAreaMonitorSource*>(dynamic_cast<const VirtualQGeoAreaMonitorSource*>(self));
    if (vqgeoareamonitorsource && vqgeoareamonitorsource->isVirtualQGeoAreaMonitorSource) {
        vqgeoareamonitorsource->setQGeoAreaMonitorSource_ActiveMonitors_IsBase(true);
        QList<QGeoAreaMonitorInfo> _ret = vqgeoareamonitorsource->activeMonitors();
        // Convert QList<> from C++ memory to manually-managed C memory
        QGeoAreaMonitorInfo** _arr = static_cast<QGeoAreaMonitorInfo**>(malloc(sizeof(QGeoAreaMonitorInfo*) * (_ret.size())));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = new QGeoAreaMonitorInfo(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else {
        QList<QGeoAreaMonitorInfo> _ret = ((VirtualQGeoAreaMonitorSource*)self)->activeMonitors();
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
}

// Auxiliary method to allow providing re-implementation
void QGeoAreaMonitorSource_OnActiveMonitors(const QGeoAreaMonitorSource* self, intptr_t slot) {
    auto* vqgeoareamonitorsource = const_cast<VirtualQGeoAreaMonitorSource*>(dynamic_cast<const VirtualQGeoAreaMonitorSource*>(self));
    if (vqgeoareamonitorsource && vqgeoareamonitorsource->isVirtualQGeoAreaMonitorSource) {
        vqgeoareamonitorsource->setQGeoAreaMonitorSource_ActiveMonitors_Callback(reinterpret_cast<VirtualQGeoAreaMonitorSource::QGeoAreaMonitorSource_ActiveMonitors_Callback>(slot));
    }
}

// Base class handler implementation
libqt_list /* of QGeoAreaMonitorInfo* */ QGeoAreaMonitorSource_QBaseActiveMonitors2(const QGeoAreaMonitorSource* self, const QGeoShape* lookupArea) {
    auto* vqgeoareamonitorsource = const_cast<VirtualQGeoAreaMonitorSource*>(dynamic_cast<const VirtualQGeoAreaMonitorSource*>(self));
    if (vqgeoareamonitorsource && vqgeoareamonitorsource->isVirtualQGeoAreaMonitorSource) {
        vqgeoareamonitorsource->setQGeoAreaMonitorSource_ActiveMonitors2_IsBase(true);
        QList<QGeoAreaMonitorInfo> _ret = vqgeoareamonitorsource->activeMonitors(*lookupArea);
        // Convert QList<> from C++ memory to manually-managed C memory
        QGeoAreaMonitorInfo** _arr = static_cast<QGeoAreaMonitorInfo**>(malloc(sizeof(QGeoAreaMonitorInfo*) * (_ret.size())));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = new QGeoAreaMonitorInfo(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else {
        QList<QGeoAreaMonitorInfo> _ret = ((VirtualQGeoAreaMonitorSource*)self)->activeMonitors(*lookupArea);
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
}

// Auxiliary method to allow providing re-implementation
void QGeoAreaMonitorSource_OnActiveMonitors2(const QGeoAreaMonitorSource* self, intptr_t slot) {
    auto* vqgeoareamonitorsource = const_cast<VirtualQGeoAreaMonitorSource*>(dynamic_cast<const VirtualQGeoAreaMonitorSource*>(self));
    if (vqgeoareamonitorsource && vqgeoareamonitorsource->isVirtualQGeoAreaMonitorSource) {
        vqgeoareamonitorsource->setQGeoAreaMonitorSource_ActiveMonitors2_Callback(reinterpret_cast<VirtualQGeoAreaMonitorSource::QGeoAreaMonitorSource_ActiveMonitors2_Callback>(slot));
    }
}

// Base class handler implementation
bool QGeoAreaMonitorSource_QBaseSetBackendProperty(QGeoAreaMonitorSource* self, const libqt_string name, const QVariant* value) {
    auto* vqgeoareamonitorsource = dynamic_cast<VirtualQGeoAreaMonitorSource*>(self);
    QString name_QString = QString::fromUtf8(name.data, name.len);
    if (vqgeoareamonitorsource && vqgeoareamonitorsource->isVirtualQGeoAreaMonitorSource) {
        vqgeoareamonitorsource->setQGeoAreaMonitorSource_SetBackendProperty_IsBase(true);
        return vqgeoareamonitorsource->setBackendProperty(name_QString, *value);
    } else {
        return self->QGeoAreaMonitorSource::setBackendProperty(name_QString, *value);
    }
}

// Auxiliary method to allow providing re-implementation
void QGeoAreaMonitorSource_OnSetBackendProperty(QGeoAreaMonitorSource* self, intptr_t slot) {
    auto* vqgeoareamonitorsource = dynamic_cast<VirtualQGeoAreaMonitorSource*>(self);
    if (vqgeoareamonitorsource && vqgeoareamonitorsource->isVirtualQGeoAreaMonitorSource) {
        vqgeoareamonitorsource->setQGeoAreaMonitorSource_SetBackendProperty_Callback(reinterpret_cast<VirtualQGeoAreaMonitorSource::QGeoAreaMonitorSource_SetBackendProperty_Callback>(slot));
    }
}

// Base class handler implementation
QVariant* QGeoAreaMonitorSource_QBaseBackendProperty(const QGeoAreaMonitorSource* self, const libqt_string name) {
    auto* vqgeoareamonitorsource = const_cast<VirtualQGeoAreaMonitorSource*>(dynamic_cast<const VirtualQGeoAreaMonitorSource*>(self));
    QString name_QString = QString::fromUtf8(name.data, name.len);
    if (vqgeoareamonitorsource && vqgeoareamonitorsource->isVirtualQGeoAreaMonitorSource) {
        vqgeoareamonitorsource->setQGeoAreaMonitorSource_BackendProperty_IsBase(true);
        return new QVariant(vqgeoareamonitorsource->backendProperty(name_QString));
    } else {
        return new QVariant(((VirtualQGeoAreaMonitorSource*)self)->backendProperty(name_QString));
    }
}

// Auxiliary method to allow providing re-implementation
void QGeoAreaMonitorSource_OnBackendProperty(const QGeoAreaMonitorSource* self, intptr_t slot) {
    auto* vqgeoareamonitorsource = const_cast<VirtualQGeoAreaMonitorSource*>(dynamic_cast<const VirtualQGeoAreaMonitorSource*>(self));
    if (vqgeoareamonitorsource && vqgeoareamonitorsource->isVirtualQGeoAreaMonitorSource) {
        vqgeoareamonitorsource->setQGeoAreaMonitorSource_BackendProperty_Callback(reinterpret_cast<VirtualQGeoAreaMonitorSource::QGeoAreaMonitorSource_BackendProperty_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGeoAreaMonitorSource_Event(QGeoAreaMonitorSource* self, QEvent* event) {
    auto* vqgeoareamonitorsource = dynamic_cast<VirtualQGeoAreaMonitorSource*>(self);
    if (vqgeoareamonitorsource && vqgeoareamonitorsource->isVirtualQGeoAreaMonitorSource) {
        return vqgeoareamonitorsource->event(event);
    } else {
        return self->QGeoAreaMonitorSource::event(event);
    }
}

// Base class handler implementation
bool QGeoAreaMonitorSource_QBaseEvent(QGeoAreaMonitorSource* self, QEvent* event) {
    auto* vqgeoareamonitorsource = dynamic_cast<VirtualQGeoAreaMonitorSource*>(self);
    if (vqgeoareamonitorsource && vqgeoareamonitorsource->isVirtualQGeoAreaMonitorSource) {
        vqgeoareamonitorsource->setQGeoAreaMonitorSource_Event_IsBase(true);
        return vqgeoareamonitorsource->event(event);
    } else {
        return self->QGeoAreaMonitorSource::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGeoAreaMonitorSource_OnEvent(QGeoAreaMonitorSource* self, intptr_t slot) {
    auto* vqgeoareamonitorsource = dynamic_cast<VirtualQGeoAreaMonitorSource*>(self);
    if (vqgeoareamonitorsource && vqgeoareamonitorsource->isVirtualQGeoAreaMonitorSource) {
        vqgeoareamonitorsource->setQGeoAreaMonitorSource_Event_Callback(reinterpret_cast<VirtualQGeoAreaMonitorSource::QGeoAreaMonitorSource_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGeoAreaMonitorSource_EventFilter(QGeoAreaMonitorSource* self, QObject* watched, QEvent* event) {
    auto* vqgeoareamonitorsource = dynamic_cast<VirtualQGeoAreaMonitorSource*>(self);
    if (vqgeoareamonitorsource && vqgeoareamonitorsource->isVirtualQGeoAreaMonitorSource) {
        return vqgeoareamonitorsource->eventFilter(watched, event);
    } else {
        return self->QGeoAreaMonitorSource::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QGeoAreaMonitorSource_QBaseEventFilter(QGeoAreaMonitorSource* self, QObject* watched, QEvent* event) {
    auto* vqgeoareamonitorsource = dynamic_cast<VirtualQGeoAreaMonitorSource*>(self);
    if (vqgeoareamonitorsource && vqgeoareamonitorsource->isVirtualQGeoAreaMonitorSource) {
        vqgeoareamonitorsource->setQGeoAreaMonitorSource_EventFilter_IsBase(true);
        return vqgeoareamonitorsource->eventFilter(watched, event);
    } else {
        return self->QGeoAreaMonitorSource::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGeoAreaMonitorSource_OnEventFilter(QGeoAreaMonitorSource* self, intptr_t slot) {
    auto* vqgeoareamonitorsource = dynamic_cast<VirtualQGeoAreaMonitorSource*>(self);
    if (vqgeoareamonitorsource && vqgeoareamonitorsource->isVirtualQGeoAreaMonitorSource) {
        vqgeoareamonitorsource->setQGeoAreaMonitorSource_EventFilter_Callback(reinterpret_cast<VirtualQGeoAreaMonitorSource::QGeoAreaMonitorSource_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QGeoAreaMonitorSource_TimerEvent(QGeoAreaMonitorSource* self, QTimerEvent* event) {
    auto* vqgeoareamonitorsource = dynamic_cast<VirtualQGeoAreaMonitorSource*>(self);
    if (vqgeoareamonitorsource && vqgeoareamonitorsource->isVirtualQGeoAreaMonitorSource) {
        vqgeoareamonitorsource->timerEvent(event);
    } else {
        ((VirtualQGeoAreaMonitorSource*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QGeoAreaMonitorSource_QBaseTimerEvent(QGeoAreaMonitorSource* self, QTimerEvent* event) {
    auto* vqgeoareamonitorsource = dynamic_cast<VirtualQGeoAreaMonitorSource*>(self);
    if (vqgeoareamonitorsource && vqgeoareamonitorsource->isVirtualQGeoAreaMonitorSource) {
        vqgeoareamonitorsource->setQGeoAreaMonitorSource_TimerEvent_IsBase(true);
        vqgeoareamonitorsource->timerEvent(event);
    } else {
        ((VirtualQGeoAreaMonitorSource*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGeoAreaMonitorSource_OnTimerEvent(QGeoAreaMonitorSource* self, intptr_t slot) {
    auto* vqgeoareamonitorsource = dynamic_cast<VirtualQGeoAreaMonitorSource*>(self);
    if (vqgeoareamonitorsource && vqgeoareamonitorsource->isVirtualQGeoAreaMonitorSource) {
        vqgeoareamonitorsource->setQGeoAreaMonitorSource_TimerEvent_Callback(reinterpret_cast<VirtualQGeoAreaMonitorSource::QGeoAreaMonitorSource_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGeoAreaMonitorSource_ChildEvent(QGeoAreaMonitorSource* self, QChildEvent* event) {
    auto* vqgeoareamonitorsource = dynamic_cast<VirtualQGeoAreaMonitorSource*>(self);
    if (vqgeoareamonitorsource && vqgeoareamonitorsource->isVirtualQGeoAreaMonitorSource) {
        vqgeoareamonitorsource->childEvent(event);
    } else {
        ((VirtualQGeoAreaMonitorSource*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QGeoAreaMonitorSource_QBaseChildEvent(QGeoAreaMonitorSource* self, QChildEvent* event) {
    auto* vqgeoareamonitorsource = dynamic_cast<VirtualQGeoAreaMonitorSource*>(self);
    if (vqgeoareamonitorsource && vqgeoareamonitorsource->isVirtualQGeoAreaMonitorSource) {
        vqgeoareamonitorsource->setQGeoAreaMonitorSource_ChildEvent_IsBase(true);
        vqgeoareamonitorsource->childEvent(event);
    } else {
        ((VirtualQGeoAreaMonitorSource*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGeoAreaMonitorSource_OnChildEvent(QGeoAreaMonitorSource* self, intptr_t slot) {
    auto* vqgeoareamonitorsource = dynamic_cast<VirtualQGeoAreaMonitorSource*>(self);
    if (vqgeoareamonitorsource && vqgeoareamonitorsource->isVirtualQGeoAreaMonitorSource) {
        vqgeoareamonitorsource->setQGeoAreaMonitorSource_ChildEvent_Callback(reinterpret_cast<VirtualQGeoAreaMonitorSource::QGeoAreaMonitorSource_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGeoAreaMonitorSource_CustomEvent(QGeoAreaMonitorSource* self, QEvent* event) {
    auto* vqgeoareamonitorsource = dynamic_cast<VirtualQGeoAreaMonitorSource*>(self);
    if (vqgeoareamonitorsource && vqgeoareamonitorsource->isVirtualQGeoAreaMonitorSource) {
        vqgeoareamonitorsource->customEvent(event);
    } else {
        ((VirtualQGeoAreaMonitorSource*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QGeoAreaMonitorSource_QBaseCustomEvent(QGeoAreaMonitorSource* self, QEvent* event) {
    auto* vqgeoareamonitorsource = dynamic_cast<VirtualQGeoAreaMonitorSource*>(self);
    if (vqgeoareamonitorsource && vqgeoareamonitorsource->isVirtualQGeoAreaMonitorSource) {
        vqgeoareamonitorsource->setQGeoAreaMonitorSource_CustomEvent_IsBase(true);
        vqgeoareamonitorsource->customEvent(event);
    } else {
        ((VirtualQGeoAreaMonitorSource*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGeoAreaMonitorSource_OnCustomEvent(QGeoAreaMonitorSource* self, intptr_t slot) {
    auto* vqgeoareamonitorsource = dynamic_cast<VirtualQGeoAreaMonitorSource*>(self);
    if (vqgeoareamonitorsource && vqgeoareamonitorsource->isVirtualQGeoAreaMonitorSource) {
        vqgeoareamonitorsource->setQGeoAreaMonitorSource_CustomEvent_Callback(reinterpret_cast<VirtualQGeoAreaMonitorSource::QGeoAreaMonitorSource_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGeoAreaMonitorSource_ConnectNotify(QGeoAreaMonitorSource* self, const QMetaMethod* signal) {
    auto* vqgeoareamonitorsource = dynamic_cast<VirtualQGeoAreaMonitorSource*>(self);
    if (vqgeoareamonitorsource && vqgeoareamonitorsource->isVirtualQGeoAreaMonitorSource) {
        vqgeoareamonitorsource->connectNotify(*signal);
    } else {
        ((VirtualQGeoAreaMonitorSource*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QGeoAreaMonitorSource_QBaseConnectNotify(QGeoAreaMonitorSource* self, const QMetaMethod* signal) {
    auto* vqgeoareamonitorsource = dynamic_cast<VirtualQGeoAreaMonitorSource*>(self);
    if (vqgeoareamonitorsource && vqgeoareamonitorsource->isVirtualQGeoAreaMonitorSource) {
        vqgeoareamonitorsource->setQGeoAreaMonitorSource_ConnectNotify_IsBase(true);
        vqgeoareamonitorsource->connectNotify(*signal);
    } else {
        ((VirtualQGeoAreaMonitorSource*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QGeoAreaMonitorSource_OnConnectNotify(QGeoAreaMonitorSource* self, intptr_t slot) {
    auto* vqgeoareamonitorsource = dynamic_cast<VirtualQGeoAreaMonitorSource*>(self);
    if (vqgeoareamonitorsource && vqgeoareamonitorsource->isVirtualQGeoAreaMonitorSource) {
        vqgeoareamonitorsource->setQGeoAreaMonitorSource_ConnectNotify_Callback(reinterpret_cast<VirtualQGeoAreaMonitorSource::QGeoAreaMonitorSource_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QGeoAreaMonitorSource_DisconnectNotify(QGeoAreaMonitorSource* self, const QMetaMethod* signal) {
    auto* vqgeoareamonitorsource = dynamic_cast<VirtualQGeoAreaMonitorSource*>(self);
    if (vqgeoareamonitorsource && vqgeoareamonitorsource->isVirtualQGeoAreaMonitorSource) {
        vqgeoareamonitorsource->disconnectNotify(*signal);
    } else {
        ((VirtualQGeoAreaMonitorSource*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QGeoAreaMonitorSource_QBaseDisconnectNotify(QGeoAreaMonitorSource* self, const QMetaMethod* signal) {
    auto* vqgeoareamonitorsource = dynamic_cast<VirtualQGeoAreaMonitorSource*>(self);
    if (vqgeoareamonitorsource && vqgeoareamonitorsource->isVirtualQGeoAreaMonitorSource) {
        vqgeoareamonitorsource->setQGeoAreaMonitorSource_DisconnectNotify_IsBase(true);
        vqgeoareamonitorsource->disconnectNotify(*signal);
    } else {
        ((VirtualQGeoAreaMonitorSource*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QGeoAreaMonitorSource_OnDisconnectNotify(QGeoAreaMonitorSource* self, intptr_t slot) {
    auto* vqgeoareamonitorsource = dynamic_cast<VirtualQGeoAreaMonitorSource*>(self);
    if (vqgeoareamonitorsource && vqgeoareamonitorsource->isVirtualQGeoAreaMonitorSource) {
        vqgeoareamonitorsource->setQGeoAreaMonitorSource_DisconnectNotify_Callback(reinterpret_cast<VirtualQGeoAreaMonitorSource::QGeoAreaMonitorSource_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QGeoAreaMonitorSource_Sender(const QGeoAreaMonitorSource* self) {
    auto* vqgeoareamonitorsource = const_cast<VirtualQGeoAreaMonitorSource*>(dynamic_cast<const VirtualQGeoAreaMonitorSource*>(self));
    if (vqgeoareamonitorsource && vqgeoareamonitorsource->isVirtualQGeoAreaMonitorSource) {
        return vqgeoareamonitorsource->sender();
    } else {
        return ((VirtualQGeoAreaMonitorSource*)self)->sender();
    }
}

// Base class handler implementation
QObject* QGeoAreaMonitorSource_QBaseSender(const QGeoAreaMonitorSource* self) {
    auto* vqgeoareamonitorsource = const_cast<VirtualQGeoAreaMonitorSource*>(dynamic_cast<const VirtualQGeoAreaMonitorSource*>(self));
    if (vqgeoareamonitorsource && vqgeoareamonitorsource->isVirtualQGeoAreaMonitorSource) {
        vqgeoareamonitorsource->setQGeoAreaMonitorSource_Sender_IsBase(true);
        return vqgeoareamonitorsource->sender();
    } else {
        return ((VirtualQGeoAreaMonitorSource*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QGeoAreaMonitorSource_OnSender(const QGeoAreaMonitorSource* self, intptr_t slot) {
    auto* vqgeoareamonitorsource = const_cast<VirtualQGeoAreaMonitorSource*>(dynamic_cast<const VirtualQGeoAreaMonitorSource*>(self));
    if (vqgeoareamonitorsource && vqgeoareamonitorsource->isVirtualQGeoAreaMonitorSource) {
        vqgeoareamonitorsource->setQGeoAreaMonitorSource_Sender_Callback(reinterpret_cast<VirtualQGeoAreaMonitorSource::QGeoAreaMonitorSource_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QGeoAreaMonitorSource_SenderSignalIndex(const QGeoAreaMonitorSource* self) {
    auto* vqgeoareamonitorsource = const_cast<VirtualQGeoAreaMonitorSource*>(dynamic_cast<const VirtualQGeoAreaMonitorSource*>(self));
    if (vqgeoareamonitorsource && vqgeoareamonitorsource->isVirtualQGeoAreaMonitorSource) {
        return vqgeoareamonitorsource->senderSignalIndex();
    } else {
        return ((VirtualQGeoAreaMonitorSource*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QGeoAreaMonitorSource_QBaseSenderSignalIndex(const QGeoAreaMonitorSource* self) {
    auto* vqgeoareamonitorsource = const_cast<VirtualQGeoAreaMonitorSource*>(dynamic_cast<const VirtualQGeoAreaMonitorSource*>(self));
    if (vqgeoareamonitorsource && vqgeoareamonitorsource->isVirtualQGeoAreaMonitorSource) {
        vqgeoareamonitorsource->setQGeoAreaMonitorSource_SenderSignalIndex_IsBase(true);
        return vqgeoareamonitorsource->senderSignalIndex();
    } else {
        return ((VirtualQGeoAreaMonitorSource*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QGeoAreaMonitorSource_OnSenderSignalIndex(const QGeoAreaMonitorSource* self, intptr_t slot) {
    auto* vqgeoareamonitorsource = const_cast<VirtualQGeoAreaMonitorSource*>(dynamic_cast<const VirtualQGeoAreaMonitorSource*>(self));
    if (vqgeoareamonitorsource && vqgeoareamonitorsource->isVirtualQGeoAreaMonitorSource) {
        vqgeoareamonitorsource->setQGeoAreaMonitorSource_SenderSignalIndex_Callback(reinterpret_cast<VirtualQGeoAreaMonitorSource::QGeoAreaMonitorSource_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QGeoAreaMonitorSource_Receivers(const QGeoAreaMonitorSource* self, const char* signal) {
    auto* vqgeoareamonitorsource = const_cast<VirtualQGeoAreaMonitorSource*>(dynamic_cast<const VirtualQGeoAreaMonitorSource*>(self));
    if (vqgeoareamonitorsource && vqgeoareamonitorsource->isVirtualQGeoAreaMonitorSource) {
        return vqgeoareamonitorsource->receivers(signal);
    } else {
        return ((VirtualQGeoAreaMonitorSource*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QGeoAreaMonitorSource_QBaseReceivers(const QGeoAreaMonitorSource* self, const char* signal) {
    auto* vqgeoareamonitorsource = const_cast<VirtualQGeoAreaMonitorSource*>(dynamic_cast<const VirtualQGeoAreaMonitorSource*>(self));
    if (vqgeoareamonitorsource && vqgeoareamonitorsource->isVirtualQGeoAreaMonitorSource) {
        vqgeoareamonitorsource->setQGeoAreaMonitorSource_Receivers_IsBase(true);
        return vqgeoareamonitorsource->receivers(signal);
    } else {
        return ((VirtualQGeoAreaMonitorSource*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QGeoAreaMonitorSource_OnReceivers(const QGeoAreaMonitorSource* self, intptr_t slot) {
    auto* vqgeoareamonitorsource = const_cast<VirtualQGeoAreaMonitorSource*>(dynamic_cast<const VirtualQGeoAreaMonitorSource*>(self));
    if (vqgeoareamonitorsource && vqgeoareamonitorsource->isVirtualQGeoAreaMonitorSource) {
        vqgeoareamonitorsource->setQGeoAreaMonitorSource_Receivers_Callback(reinterpret_cast<VirtualQGeoAreaMonitorSource::QGeoAreaMonitorSource_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGeoAreaMonitorSource_IsSignalConnected(const QGeoAreaMonitorSource* self, const QMetaMethod* signal) {
    auto* vqgeoareamonitorsource = const_cast<VirtualQGeoAreaMonitorSource*>(dynamic_cast<const VirtualQGeoAreaMonitorSource*>(self));
    if (vqgeoareamonitorsource && vqgeoareamonitorsource->isVirtualQGeoAreaMonitorSource) {
        return vqgeoareamonitorsource->isSignalConnected(*signal);
    } else {
        return ((VirtualQGeoAreaMonitorSource*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QGeoAreaMonitorSource_QBaseIsSignalConnected(const QGeoAreaMonitorSource* self, const QMetaMethod* signal) {
    auto* vqgeoareamonitorsource = const_cast<VirtualQGeoAreaMonitorSource*>(dynamic_cast<const VirtualQGeoAreaMonitorSource*>(self));
    if (vqgeoareamonitorsource && vqgeoareamonitorsource->isVirtualQGeoAreaMonitorSource) {
        vqgeoareamonitorsource->setQGeoAreaMonitorSource_IsSignalConnected_IsBase(true);
        return vqgeoareamonitorsource->isSignalConnected(*signal);
    } else {
        return ((VirtualQGeoAreaMonitorSource*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QGeoAreaMonitorSource_OnIsSignalConnected(const QGeoAreaMonitorSource* self, intptr_t slot) {
    auto* vqgeoareamonitorsource = const_cast<VirtualQGeoAreaMonitorSource*>(dynamic_cast<const VirtualQGeoAreaMonitorSource*>(self));
    if (vqgeoareamonitorsource && vqgeoareamonitorsource->isVirtualQGeoAreaMonitorSource) {
        vqgeoareamonitorsource->setQGeoAreaMonitorSource_IsSignalConnected_Callback(reinterpret_cast<VirtualQGeoAreaMonitorSource::QGeoAreaMonitorSource_IsSignalConnected_Callback>(slot));
    }
}

void QGeoAreaMonitorSource_Delete(QGeoAreaMonitorSource* self) {
    delete self;
}
