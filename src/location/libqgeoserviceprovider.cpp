#include <QChildEvent>
#include <QEvent>
#include <QGeoCodingManager>
#include <QGeoRoutingManager>
#include <QGeoServiceProvider>
#include <QList>
#include <QLocale>
#include <QMap>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QPlaceManager>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QVariant>
#include <qgeoserviceprovider.h>
#include "libqgeoserviceprovider.h"
#include "libqgeoserviceprovider.hxx"

QGeoServiceProvider* QGeoServiceProvider_new(const libqt_string providerName) {
    QString providerName_QString = QString::fromUtf8(providerName.data, providerName.len);
    return new VirtualQGeoServiceProvider(providerName_QString);
}

QGeoServiceProvider* QGeoServiceProvider_new2(const libqt_string providerName, const libqt_map /* of libqt_string to QVariant* */ parameters) {
    QString providerName_QString = QString::fromUtf8(providerName.data, providerName.len);
    QMap<QString, QVariant> parameters_QMap;
    libqt_string* parameters_karr = static_cast<libqt_string*>(parameters.keys);
    QVariant** parameters_varr = static_cast<QVariant**>(parameters.values);
    for (size_t i = 0; i < parameters.len; ++i) {
        QString parameters_karr_i_QString = QString::fromUtf8(parameters_karr[i].data, parameters_karr[i].len);
        parameters_QMap[parameters_karr_i_QString] = *(parameters_varr[i]);
    }
    return new VirtualQGeoServiceProvider(providerName_QString, parameters_QMap);
}

QGeoServiceProvider* QGeoServiceProvider_new3(const libqt_string providerName, const libqt_map /* of libqt_string to QVariant* */ parameters, bool allowExperimental) {
    QString providerName_QString = QString::fromUtf8(providerName.data, providerName.len);
    QMap<QString, QVariant> parameters_QMap;
    libqt_string* parameters_karr = static_cast<libqt_string*>(parameters.keys);
    QVariant** parameters_varr = static_cast<QVariant**>(parameters.values);
    for (size_t i = 0; i < parameters.len; ++i) {
        QString parameters_karr_i_QString = QString::fromUtf8(parameters_karr[i].data, parameters_karr[i].len);
        parameters_QMap[parameters_karr_i_QString] = *(parameters_varr[i]);
    }
    return new VirtualQGeoServiceProvider(providerName_QString, parameters_QMap, allowExperimental);
}

QMetaObject* QGeoServiceProvider_MetaObject(const QGeoServiceProvider* self) {
    auto* vqgeoserviceprovider = dynamic_cast<const VirtualQGeoServiceProvider*>(self);
    if (vqgeoserviceprovider && vqgeoserviceprovider->isVirtualQGeoServiceProvider) {
        return (QMetaObject*)self->metaObject();
    } else {
        return (QMetaObject*)((VirtualQGeoServiceProvider*)self)->metaObject();
    }
}

void* QGeoServiceProvider_Metacast(QGeoServiceProvider* self, const char* param1) {
    auto* vqgeoserviceprovider = dynamic_cast<VirtualQGeoServiceProvider*>(self);
    if (vqgeoserviceprovider && vqgeoserviceprovider->isVirtualQGeoServiceProvider) {
        return self->qt_metacast(param1);
    } else {
        return ((VirtualQGeoServiceProvider*)self)->qt_metacast(param1);
    }
}

int QGeoServiceProvider_Metacall(QGeoServiceProvider* self, int param1, int param2, void** param3) {
    auto* vqgeoserviceprovider = dynamic_cast<VirtualQGeoServiceProvider*>(self);
    if (vqgeoserviceprovider && vqgeoserviceprovider->isVirtualQGeoServiceProvider) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQGeoServiceProvider*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_list /* of libqt_string */ QGeoServiceProvider_AvailableServiceProviders() {
    QList<QString> _ret = QGeoServiceProvider::availableServiceProviders();
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

int QGeoServiceProvider_RoutingFeatures(const QGeoServiceProvider* self) {
    return static_cast<int>(self->routingFeatures());
}

int QGeoServiceProvider_GeocodingFeatures(const QGeoServiceProvider* self) {
    return static_cast<int>(self->geocodingFeatures());
}

int QGeoServiceProvider_MappingFeatures(const QGeoServiceProvider* self) {
    return static_cast<int>(self->mappingFeatures());
}

int QGeoServiceProvider_PlacesFeatures(const QGeoServiceProvider* self) {
    return static_cast<int>(self->placesFeatures());
}

int QGeoServiceProvider_NavigationFeatures(const QGeoServiceProvider* self) {
    return static_cast<int>(self->navigationFeatures());
}

QGeoCodingManager* QGeoServiceProvider_GeocodingManager(const QGeoServiceProvider* self) {
    return self->geocodingManager();
}

QGeoRoutingManager* QGeoServiceProvider_RoutingManager(const QGeoServiceProvider* self) {
    return self->routingManager();
}

QPlaceManager* QGeoServiceProvider_PlaceManager(const QGeoServiceProvider* self) {
    return self->placeManager();
}

int QGeoServiceProvider_Error(const QGeoServiceProvider* self) {
    return static_cast<int>(self->error());
}

libqt_string QGeoServiceProvider_ErrorString(const QGeoServiceProvider* self) {
    QString _ret = self->errorString();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int QGeoServiceProvider_MappingError(const QGeoServiceProvider* self) {
    return static_cast<int>(self->mappingError());
}

libqt_string QGeoServiceProvider_MappingErrorString(const QGeoServiceProvider* self) {
    QString _ret = self->mappingErrorString();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int QGeoServiceProvider_GeocodingError(const QGeoServiceProvider* self) {
    return static_cast<int>(self->geocodingError());
}

libqt_string QGeoServiceProvider_GeocodingErrorString(const QGeoServiceProvider* self) {
    QString _ret = self->geocodingErrorString();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int QGeoServiceProvider_RoutingError(const QGeoServiceProvider* self) {
    return static_cast<int>(self->routingError());
}

libqt_string QGeoServiceProvider_RoutingErrorString(const QGeoServiceProvider* self) {
    QString _ret = self->routingErrorString();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int QGeoServiceProvider_PlacesError(const QGeoServiceProvider* self) {
    return static_cast<int>(self->placesError());
}

libqt_string QGeoServiceProvider_PlacesErrorString(const QGeoServiceProvider* self) {
    QString _ret = self->placesErrorString();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int QGeoServiceProvider_NavigationError(const QGeoServiceProvider* self) {
    return static_cast<int>(self->navigationError());
}

libqt_string QGeoServiceProvider_NavigationErrorString(const QGeoServiceProvider* self) {
    QString _ret = self->navigationErrorString();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QGeoServiceProvider_SetParameters(QGeoServiceProvider* self, const libqt_map /* of libqt_string to QVariant* */ parameters) {
    QMap<QString, QVariant> parameters_QMap;
    libqt_string* parameters_karr = static_cast<libqt_string*>(parameters.keys);
    QVariant** parameters_varr = static_cast<QVariant**>(parameters.values);
    for (size_t i = 0; i < parameters.len; ++i) {
        QString parameters_karr_i_QString = QString::fromUtf8(parameters_karr[i].data, parameters_karr[i].len);
        parameters_QMap[parameters_karr_i_QString] = *(parameters_varr[i]);
    }
    self->setParameters(parameters_QMap);
}

void QGeoServiceProvider_SetLocale(QGeoServiceProvider* self, const QLocale* locale) {
    self->setLocale(*locale);
}

void QGeoServiceProvider_SetAllowExperimental(QGeoServiceProvider* self, bool allow) {
    self->setAllowExperimental(allow);
}

// Base class handler implementation
QMetaObject* QGeoServiceProvider_QBaseMetaObject(const QGeoServiceProvider* self) {
    auto* vqgeoserviceprovider = const_cast<VirtualQGeoServiceProvider*>(dynamic_cast<const VirtualQGeoServiceProvider*>(self));
    if (vqgeoserviceprovider && vqgeoserviceprovider->isVirtualQGeoServiceProvider) {
        vqgeoserviceprovider->setQGeoServiceProvider_MetaObject_IsBase(true);
        return (QMetaObject*)vqgeoserviceprovider->metaObject();
    } else {
        return (QMetaObject*)self->QGeoServiceProvider::metaObject();
    }
}

// Auxiliary method to allow providing re-implementation
void QGeoServiceProvider_OnMetaObject(const QGeoServiceProvider* self, intptr_t slot) {
    auto* vqgeoserviceprovider = const_cast<VirtualQGeoServiceProvider*>(dynamic_cast<const VirtualQGeoServiceProvider*>(self));
    if (vqgeoserviceprovider && vqgeoserviceprovider->isVirtualQGeoServiceProvider) {
        vqgeoserviceprovider->setQGeoServiceProvider_MetaObject_Callback(reinterpret_cast<VirtualQGeoServiceProvider::QGeoServiceProvider_MetaObject_Callback>(slot));
    }
}

// Base class handler implementation
void* QGeoServiceProvider_QBaseMetacast(QGeoServiceProvider* self, const char* param1) {
    auto* vqgeoserviceprovider = dynamic_cast<VirtualQGeoServiceProvider*>(self);
    if (vqgeoserviceprovider && vqgeoserviceprovider->isVirtualQGeoServiceProvider) {
        vqgeoserviceprovider->setQGeoServiceProvider_Metacast_IsBase(true);
        return vqgeoserviceprovider->qt_metacast(param1);
    } else {
        return self->QGeoServiceProvider::qt_metacast(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QGeoServiceProvider_OnMetacast(QGeoServiceProvider* self, intptr_t slot) {
    auto* vqgeoserviceprovider = dynamic_cast<VirtualQGeoServiceProvider*>(self);
    if (vqgeoserviceprovider && vqgeoserviceprovider->isVirtualQGeoServiceProvider) {
        vqgeoserviceprovider->setQGeoServiceProvider_Metacast_Callback(reinterpret_cast<VirtualQGeoServiceProvider::QGeoServiceProvider_Metacast_Callback>(slot));
    }
}

// Base class handler implementation
int QGeoServiceProvider_QBaseMetacall(QGeoServiceProvider* self, int param1, int param2, void** param3) {
    auto* vqgeoserviceprovider = dynamic_cast<VirtualQGeoServiceProvider*>(self);
    if (vqgeoserviceprovider && vqgeoserviceprovider->isVirtualQGeoServiceProvider) {
        vqgeoserviceprovider->setQGeoServiceProvider_Metacall_IsBase(true);
        return vqgeoserviceprovider->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->QGeoServiceProvider::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void QGeoServiceProvider_OnMetacall(QGeoServiceProvider* self, intptr_t slot) {
    auto* vqgeoserviceprovider = dynamic_cast<VirtualQGeoServiceProvider*>(self);
    if (vqgeoserviceprovider && vqgeoserviceprovider->isVirtualQGeoServiceProvider) {
        vqgeoserviceprovider->setQGeoServiceProvider_Metacall_Callback(reinterpret_cast<VirtualQGeoServiceProvider::QGeoServiceProvider_Metacall_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGeoServiceProvider_Event(QGeoServiceProvider* self, QEvent* event) {
    auto* vqgeoserviceprovider = dynamic_cast<VirtualQGeoServiceProvider*>(self);
    if (vqgeoserviceprovider && vqgeoserviceprovider->isVirtualQGeoServiceProvider) {
        return vqgeoserviceprovider->event(event);
    } else {
        return self->QGeoServiceProvider::event(event);
    }
}

// Base class handler implementation
bool QGeoServiceProvider_QBaseEvent(QGeoServiceProvider* self, QEvent* event) {
    auto* vqgeoserviceprovider = dynamic_cast<VirtualQGeoServiceProvider*>(self);
    if (vqgeoserviceprovider && vqgeoserviceprovider->isVirtualQGeoServiceProvider) {
        vqgeoserviceprovider->setQGeoServiceProvider_Event_IsBase(true);
        return vqgeoserviceprovider->event(event);
    } else {
        return self->QGeoServiceProvider::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGeoServiceProvider_OnEvent(QGeoServiceProvider* self, intptr_t slot) {
    auto* vqgeoserviceprovider = dynamic_cast<VirtualQGeoServiceProvider*>(self);
    if (vqgeoserviceprovider && vqgeoserviceprovider->isVirtualQGeoServiceProvider) {
        vqgeoserviceprovider->setQGeoServiceProvider_Event_Callback(reinterpret_cast<VirtualQGeoServiceProvider::QGeoServiceProvider_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGeoServiceProvider_EventFilter(QGeoServiceProvider* self, QObject* watched, QEvent* event) {
    auto* vqgeoserviceprovider = dynamic_cast<VirtualQGeoServiceProvider*>(self);
    if (vqgeoserviceprovider && vqgeoserviceprovider->isVirtualQGeoServiceProvider) {
        return vqgeoserviceprovider->eventFilter(watched, event);
    } else {
        return self->QGeoServiceProvider::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QGeoServiceProvider_QBaseEventFilter(QGeoServiceProvider* self, QObject* watched, QEvent* event) {
    auto* vqgeoserviceprovider = dynamic_cast<VirtualQGeoServiceProvider*>(self);
    if (vqgeoserviceprovider && vqgeoserviceprovider->isVirtualQGeoServiceProvider) {
        vqgeoserviceprovider->setQGeoServiceProvider_EventFilter_IsBase(true);
        return vqgeoserviceprovider->eventFilter(watched, event);
    } else {
        return self->QGeoServiceProvider::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGeoServiceProvider_OnEventFilter(QGeoServiceProvider* self, intptr_t slot) {
    auto* vqgeoserviceprovider = dynamic_cast<VirtualQGeoServiceProvider*>(self);
    if (vqgeoserviceprovider && vqgeoserviceprovider->isVirtualQGeoServiceProvider) {
        vqgeoserviceprovider->setQGeoServiceProvider_EventFilter_Callback(reinterpret_cast<VirtualQGeoServiceProvider::QGeoServiceProvider_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QGeoServiceProvider_TimerEvent(QGeoServiceProvider* self, QTimerEvent* event) {
    auto* vqgeoserviceprovider = dynamic_cast<VirtualQGeoServiceProvider*>(self);
    if (vqgeoserviceprovider && vqgeoserviceprovider->isVirtualQGeoServiceProvider) {
        vqgeoserviceprovider->timerEvent(event);
    } else {
        ((VirtualQGeoServiceProvider*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QGeoServiceProvider_QBaseTimerEvent(QGeoServiceProvider* self, QTimerEvent* event) {
    auto* vqgeoserviceprovider = dynamic_cast<VirtualQGeoServiceProvider*>(self);
    if (vqgeoserviceprovider && vqgeoserviceprovider->isVirtualQGeoServiceProvider) {
        vqgeoserviceprovider->setQGeoServiceProvider_TimerEvent_IsBase(true);
        vqgeoserviceprovider->timerEvent(event);
    } else {
        ((VirtualQGeoServiceProvider*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGeoServiceProvider_OnTimerEvent(QGeoServiceProvider* self, intptr_t slot) {
    auto* vqgeoserviceprovider = dynamic_cast<VirtualQGeoServiceProvider*>(self);
    if (vqgeoserviceprovider && vqgeoserviceprovider->isVirtualQGeoServiceProvider) {
        vqgeoserviceprovider->setQGeoServiceProvider_TimerEvent_Callback(reinterpret_cast<VirtualQGeoServiceProvider::QGeoServiceProvider_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGeoServiceProvider_ChildEvent(QGeoServiceProvider* self, QChildEvent* event) {
    auto* vqgeoserviceprovider = dynamic_cast<VirtualQGeoServiceProvider*>(self);
    if (vqgeoserviceprovider && vqgeoserviceprovider->isVirtualQGeoServiceProvider) {
        vqgeoserviceprovider->childEvent(event);
    } else {
        ((VirtualQGeoServiceProvider*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QGeoServiceProvider_QBaseChildEvent(QGeoServiceProvider* self, QChildEvent* event) {
    auto* vqgeoserviceprovider = dynamic_cast<VirtualQGeoServiceProvider*>(self);
    if (vqgeoserviceprovider && vqgeoserviceprovider->isVirtualQGeoServiceProvider) {
        vqgeoserviceprovider->setQGeoServiceProvider_ChildEvent_IsBase(true);
        vqgeoserviceprovider->childEvent(event);
    } else {
        ((VirtualQGeoServiceProvider*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGeoServiceProvider_OnChildEvent(QGeoServiceProvider* self, intptr_t slot) {
    auto* vqgeoserviceprovider = dynamic_cast<VirtualQGeoServiceProvider*>(self);
    if (vqgeoserviceprovider && vqgeoserviceprovider->isVirtualQGeoServiceProvider) {
        vqgeoserviceprovider->setQGeoServiceProvider_ChildEvent_Callback(reinterpret_cast<VirtualQGeoServiceProvider::QGeoServiceProvider_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGeoServiceProvider_CustomEvent(QGeoServiceProvider* self, QEvent* event) {
    auto* vqgeoserviceprovider = dynamic_cast<VirtualQGeoServiceProvider*>(self);
    if (vqgeoserviceprovider && vqgeoserviceprovider->isVirtualQGeoServiceProvider) {
        vqgeoserviceprovider->customEvent(event);
    } else {
        ((VirtualQGeoServiceProvider*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QGeoServiceProvider_QBaseCustomEvent(QGeoServiceProvider* self, QEvent* event) {
    auto* vqgeoserviceprovider = dynamic_cast<VirtualQGeoServiceProvider*>(self);
    if (vqgeoserviceprovider && vqgeoserviceprovider->isVirtualQGeoServiceProvider) {
        vqgeoserviceprovider->setQGeoServiceProvider_CustomEvent_IsBase(true);
        vqgeoserviceprovider->customEvent(event);
    } else {
        ((VirtualQGeoServiceProvider*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGeoServiceProvider_OnCustomEvent(QGeoServiceProvider* self, intptr_t slot) {
    auto* vqgeoserviceprovider = dynamic_cast<VirtualQGeoServiceProvider*>(self);
    if (vqgeoserviceprovider && vqgeoserviceprovider->isVirtualQGeoServiceProvider) {
        vqgeoserviceprovider->setQGeoServiceProvider_CustomEvent_Callback(reinterpret_cast<VirtualQGeoServiceProvider::QGeoServiceProvider_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGeoServiceProvider_ConnectNotify(QGeoServiceProvider* self, const QMetaMethod* signal) {
    auto* vqgeoserviceprovider = dynamic_cast<VirtualQGeoServiceProvider*>(self);
    if (vqgeoserviceprovider && vqgeoserviceprovider->isVirtualQGeoServiceProvider) {
        vqgeoserviceprovider->connectNotify(*signal);
    } else {
        ((VirtualQGeoServiceProvider*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QGeoServiceProvider_QBaseConnectNotify(QGeoServiceProvider* self, const QMetaMethod* signal) {
    auto* vqgeoserviceprovider = dynamic_cast<VirtualQGeoServiceProvider*>(self);
    if (vqgeoserviceprovider && vqgeoserviceprovider->isVirtualQGeoServiceProvider) {
        vqgeoserviceprovider->setQGeoServiceProvider_ConnectNotify_IsBase(true);
        vqgeoserviceprovider->connectNotify(*signal);
    } else {
        ((VirtualQGeoServiceProvider*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QGeoServiceProvider_OnConnectNotify(QGeoServiceProvider* self, intptr_t slot) {
    auto* vqgeoserviceprovider = dynamic_cast<VirtualQGeoServiceProvider*>(self);
    if (vqgeoserviceprovider && vqgeoserviceprovider->isVirtualQGeoServiceProvider) {
        vqgeoserviceprovider->setQGeoServiceProvider_ConnectNotify_Callback(reinterpret_cast<VirtualQGeoServiceProvider::QGeoServiceProvider_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QGeoServiceProvider_DisconnectNotify(QGeoServiceProvider* self, const QMetaMethod* signal) {
    auto* vqgeoserviceprovider = dynamic_cast<VirtualQGeoServiceProvider*>(self);
    if (vqgeoserviceprovider && vqgeoserviceprovider->isVirtualQGeoServiceProvider) {
        vqgeoserviceprovider->disconnectNotify(*signal);
    } else {
        ((VirtualQGeoServiceProvider*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QGeoServiceProvider_QBaseDisconnectNotify(QGeoServiceProvider* self, const QMetaMethod* signal) {
    auto* vqgeoserviceprovider = dynamic_cast<VirtualQGeoServiceProvider*>(self);
    if (vqgeoserviceprovider && vqgeoserviceprovider->isVirtualQGeoServiceProvider) {
        vqgeoserviceprovider->setQGeoServiceProvider_DisconnectNotify_IsBase(true);
        vqgeoserviceprovider->disconnectNotify(*signal);
    } else {
        ((VirtualQGeoServiceProvider*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QGeoServiceProvider_OnDisconnectNotify(QGeoServiceProvider* self, intptr_t slot) {
    auto* vqgeoserviceprovider = dynamic_cast<VirtualQGeoServiceProvider*>(self);
    if (vqgeoserviceprovider && vqgeoserviceprovider->isVirtualQGeoServiceProvider) {
        vqgeoserviceprovider->setQGeoServiceProvider_DisconnectNotify_Callback(reinterpret_cast<VirtualQGeoServiceProvider::QGeoServiceProvider_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QGeoServiceProvider_Sender(const QGeoServiceProvider* self) {
    auto* vqgeoserviceprovider = const_cast<VirtualQGeoServiceProvider*>(dynamic_cast<const VirtualQGeoServiceProvider*>(self));
    if (vqgeoserviceprovider && vqgeoserviceprovider->isVirtualQGeoServiceProvider) {
        return vqgeoserviceprovider->sender();
    } else {
        return ((VirtualQGeoServiceProvider*)self)->sender();
    }
}

// Base class handler implementation
QObject* QGeoServiceProvider_QBaseSender(const QGeoServiceProvider* self) {
    auto* vqgeoserviceprovider = const_cast<VirtualQGeoServiceProvider*>(dynamic_cast<const VirtualQGeoServiceProvider*>(self));
    if (vqgeoserviceprovider && vqgeoserviceprovider->isVirtualQGeoServiceProvider) {
        vqgeoserviceprovider->setQGeoServiceProvider_Sender_IsBase(true);
        return vqgeoserviceprovider->sender();
    } else {
        return ((VirtualQGeoServiceProvider*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QGeoServiceProvider_OnSender(const QGeoServiceProvider* self, intptr_t slot) {
    auto* vqgeoserviceprovider = const_cast<VirtualQGeoServiceProvider*>(dynamic_cast<const VirtualQGeoServiceProvider*>(self));
    if (vqgeoserviceprovider && vqgeoserviceprovider->isVirtualQGeoServiceProvider) {
        vqgeoserviceprovider->setQGeoServiceProvider_Sender_Callback(reinterpret_cast<VirtualQGeoServiceProvider::QGeoServiceProvider_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QGeoServiceProvider_SenderSignalIndex(const QGeoServiceProvider* self) {
    auto* vqgeoserviceprovider = const_cast<VirtualQGeoServiceProvider*>(dynamic_cast<const VirtualQGeoServiceProvider*>(self));
    if (vqgeoserviceprovider && vqgeoserviceprovider->isVirtualQGeoServiceProvider) {
        return vqgeoserviceprovider->senderSignalIndex();
    } else {
        return ((VirtualQGeoServiceProvider*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QGeoServiceProvider_QBaseSenderSignalIndex(const QGeoServiceProvider* self) {
    auto* vqgeoserviceprovider = const_cast<VirtualQGeoServiceProvider*>(dynamic_cast<const VirtualQGeoServiceProvider*>(self));
    if (vqgeoserviceprovider && vqgeoserviceprovider->isVirtualQGeoServiceProvider) {
        vqgeoserviceprovider->setQGeoServiceProvider_SenderSignalIndex_IsBase(true);
        return vqgeoserviceprovider->senderSignalIndex();
    } else {
        return ((VirtualQGeoServiceProvider*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QGeoServiceProvider_OnSenderSignalIndex(const QGeoServiceProvider* self, intptr_t slot) {
    auto* vqgeoserviceprovider = const_cast<VirtualQGeoServiceProvider*>(dynamic_cast<const VirtualQGeoServiceProvider*>(self));
    if (vqgeoserviceprovider && vqgeoserviceprovider->isVirtualQGeoServiceProvider) {
        vqgeoserviceprovider->setQGeoServiceProvider_SenderSignalIndex_Callback(reinterpret_cast<VirtualQGeoServiceProvider::QGeoServiceProvider_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QGeoServiceProvider_Receivers(const QGeoServiceProvider* self, const char* signal) {
    auto* vqgeoserviceprovider = const_cast<VirtualQGeoServiceProvider*>(dynamic_cast<const VirtualQGeoServiceProvider*>(self));
    if (vqgeoserviceprovider && vqgeoserviceprovider->isVirtualQGeoServiceProvider) {
        return vqgeoserviceprovider->receivers(signal);
    } else {
        return ((VirtualQGeoServiceProvider*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QGeoServiceProvider_QBaseReceivers(const QGeoServiceProvider* self, const char* signal) {
    auto* vqgeoserviceprovider = const_cast<VirtualQGeoServiceProvider*>(dynamic_cast<const VirtualQGeoServiceProvider*>(self));
    if (vqgeoserviceprovider && vqgeoserviceprovider->isVirtualQGeoServiceProvider) {
        vqgeoserviceprovider->setQGeoServiceProvider_Receivers_IsBase(true);
        return vqgeoserviceprovider->receivers(signal);
    } else {
        return ((VirtualQGeoServiceProvider*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QGeoServiceProvider_OnReceivers(const QGeoServiceProvider* self, intptr_t slot) {
    auto* vqgeoserviceprovider = const_cast<VirtualQGeoServiceProvider*>(dynamic_cast<const VirtualQGeoServiceProvider*>(self));
    if (vqgeoserviceprovider && vqgeoserviceprovider->isVirtualQGeoServiceProvider) {
        vqgeoserviceprovider->setQGeoServiceProvider_Receivers_Callback(reinterpret_cast<VirtualQGeoServiceProvider::QGeoServiceProvider_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGeoServiceProvider_IsSignalConnected(const QGeoServiceProvider* self, const QMetaMethod* signal) {
    auto* vqgeoserviceprovider = const_cast<VirtualQGeoServiceProvider*>(dynamic_cast<const VirtualQGeoServiceProvider*>(self));
    if (vqgeoserviceprovider && vqgeoserviceprovider->isVirtualQGeoServiceProvider) {
        return vqgeoserviceprovider->isSignalConnected(*signal);
    } else {
        return ((VirtualQGeoServiceProvider*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QGeoServiceProvider_QBaseIsSignalConnected(const QGeoServiceProvider* self, const QMetaMethod* signal) {
    auto* vqgeoserviceprovider = const_cast<VirtualQGeoServiceProvider*>(dynamic_cast<const VirtualQGeoServiceProvider*>(self));
    if (vqgeoserviceprovider && vqgeoserviceprovider->isVirtualQGeoServiceProvider) {
        vqgeoserviceprovider->setQGeoServiceProvider_IsSignalConnected_IsBase(true);
        return vqgeoserviceprovider->isSignalConnected(*signal);
    } else {
        return ((VirtualQGeoServiceProvider*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QGeoServiceProvider_OnIsSignalConnected(const QGeoServiceProvider* self, intptr_t slot) {
    auto* vqgeoserviceprovider = const_cast<VirtualQGeoServiceProvider*>(dynamic_cast<const VirtualQGeoServiceProvider*>(self));
    if (vqgeoserviceprovider && vqgeoserviceprovider->isVirtualQGeoServiceProvider) {
        vqgeoserviceprovider->setQGeoServiceProvider_IsSignalConnected_Callback(reinterpret_cast<VirtualQGeoServiceProvider::QGeoServiceProvider_IsSignalConnected_Callback>(slot));
    }
}

void QGeoServiceProvider_Delete(QGeoServiceProvider* self) {
    delete self;
}
