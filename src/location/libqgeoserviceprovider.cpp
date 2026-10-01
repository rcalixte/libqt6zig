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
#include <QQmlEngine>
#include <QString>
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
        parameters_QMap.insert(parameters_karr_i_QString, *(parameters_varr[i]));
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
        parameters_QMap.insert(parameters_karr_i_QString, *(parameters_varr[i]));
    }
    return new VirtualQGeoServiceProvider(providerName_QString, parameters_QMap, allowExperimental);
}

QMetaObject* QGeoServiceProvider_MetaObject(const QGeoServiceProvider* self) {
    return (QMetaObject*)self->metaObject();
}

void* QGeoServiceProvider_Metacast(QGeoServiceProvider* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QGeoServiceProvider_Metacall(QGeoServiceProvider* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QGeoServiceProvider_Tr(const char* s) {
    auto _ret = QGeoServiceProvider::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_list /* of libqt_string */ QGeoServiceProvider_AvailableServiceProviders() {
    QList<QString> _ret = QGeoServiceProvider::availableServiceProviders();
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
    auto _ret = self->errorString();
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
    auto _ret = self->mappingErrorString();
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
    auto _ret = self->geocodingErrorString();
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
    auto _ret = self->routingErrorString();
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
    auto _ret = self->placesErrorString();
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
    auto _ret = self->navigationErrorString();
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
        parameters_QMap.insert(parameters_karr_i_QString, *(parameters_varr[i]));
    }
    self->setParameters(parameters_QMap);
}

void QGeoServiceProvider_SetLocale(QGeoServiceProvider* self, const QLocale* locale) {
    self->setLocale(*locale);
}

void QGeoServiceProvider_SetAllowExperimental(QGeoServiceProvider* self, bool allow) {
    self->setAllowExperimental(allow);
}

void QGeoServiceProvider_SetQmlEngine(QGeoServiceProvider* self, QQmlEngine* engine) {
    self->setQmlEngine(engine);
}

libqt_string QGeoServiceProvider_Tr2(const char* s, const char* c) {
    auto _ret = QGeoServiceProvider::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QGeoServiceProvider_Tr3(const char* s, const char* c, int n) {
    auto _ret = QGeoServiceProvider::tr(s, c, static_cast<int>(n));
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
QMetaObject* QGeoServiceProvider_SuperMetaObject(const QGeoServiceProvider* self) {
    return (QMetaObject*)self->QGeoServiceProvider::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QGeoServiceProvider_OnMetaObject(QGeoServiceProvider* self, intptr_t slot) {
    if (auto* vqgeoserviceprovider = const_cast<VirtualQGeoServiceProvider*>(dynamic_cast<const VirtualQGeoServiceProvider*>(self)))
        vqgeoserviceprovider->qgeoserviceprovider_metaobject_callback = reinterpret_cast<VirtualQGeoServiceProvider::QGeoServiceProvider_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QGeoServiceProvider_SuperMetacast(QGeoServiceProvider* self, const char* param1) {
    return self->QGeoServiceProvider::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QGeoServiceProvider_OnMetacast(QGeoServiceProvider* self, intptr_t slot) {
    if (auto* vqgeoserviceprovider = dynamic_cast<VirtualQGeoServiceProvider*>(self))
        vqgeoserviceprovider->qgeoserviceprovider_metacast_callback = reinterpret_cast<VirtualQGeoServiceProvider::QGeoServiceProvider_Metacast_Callback>(slot);
}

// Base class handler implementation
int QGeoServiceProvider_SuperMetacall(QGeoServiceProvider* self, int param1, int param2, void** param3) {
    return self->QGeoServiceProvider::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QGeoServiceProvider_OnMetacall(QGeoServiceProvider* self, intptr_t slot) {
    if (auto* vqgeoserviceprovider = dynamic_cast<VirtualQGeoServiceProvider*>(self))
        vqgeoserviceprovider->qgeoserviceprovider_metacall_callback = reinterpret_cast<VirtualQGeoServiceProvider::QGeoServiceProvider_Metacall_Callback>(slot);
}

// Derived class handler implementation
bool QGeoServiceProvider_Event(QGeoServiceProvider* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QGeoServiceProvider_SuperEvent(QGeoServiceProvider* self, QEvent* event) {
    return self->QGeoServiceProvider::event(event);
}

// Auxiliary method to allow providing re-implementation
void QGeoServiceProvider_OnEvent(QGeoServiceProvider* self, intptr_t slot) {
    if (auto* vqgeoserviceprovider = dynamic_cast<VirtualQGeoServiceProvider*>(self))
        vqgeoserviceprovider->qgeoserviceprovider_event_callback = reinterpret_cast<VirtualQGeoServiceProvider::QGeoServiceProvider_Event_Callback>(slot);
}

// Derived class handler implementation
bool QGeoServiceProvider_EventFilter(QGeoServiceProvider* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QGeoServiceProvider_SuperEventFilter(QGeoServiceProvider* self, QObject* watched, QEvent* event) {
    return self->QGeoServiceProvider::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QGeoServiceProvider_OnEventFilter(QGeoServiceProvider* self, intptr_t slot) {
    if (auto* vqgeoserviceprovider = dynamic_cast<VirtualQGeoServiceProvider*>(self))
        vqgeoserviceprovider->qgeoserviceprovider_eventfilter_callback = reinterpret_cast<VirtualQGeoServiceProvider::QGeoServiceProvider_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QGeoServiceProvider_TimerEvent(QGeoServiceProvider* self, QTimerEvent* event) {
    auto* vqgeoserviceprovider = dynamic_cast<VirtualQGeoServiceProvider*>(self);
    if (vqgeoserviceprovider) {
        vqgeoserviceprovider->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGeoServiceProvider::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGeoServiceProvider_SuperTimerEvent(QGeoServiceProvider* self, QTimerEvent* event) {
    if (auto* vqgeoserviceprovider = dynamic_cast<VirtualQGeoServiceProvider*>(self)) {
        vqgeoserviceprovider->QGeoServiceProvider::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QGeoServiceProvider::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGeoServiceProvider_OnTimerEvent(QGeoServiceProvider* self, intptr_t slot) {
    if (auto* vqgeoserviceprovider = dynamic_cast<VirtualQGeoServiceProvider*>(self))
        vqgeoserviceprovider->qgeoserviceprovider_timerevent_callback = reinterpret_cast<VirtualQGeoServiceProvider::QGeoServiceProvider_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QGeoServiceProvider_ChildEvent(QGeoServiceProvider* self, QChildEvent* event) {
    auto* vqgeoserviceprovider = dynamic_cast<VirtualQGeoServiceProvider*>(self);
    if (vqgeoserviceprovider) {
        vqgeoserviceprovider->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGeoServiceProvider::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGeoServiceProvider_SuperChildEvent(QGeoServiceProvider* self, QChildEvent* event) {
    if (auto* vqgeoserviceprovider = dynamic_cast<VirtualQGeoServiceProvider*>(self)) {
        vqgeoserviceprovider->QGeoServiceProvider::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QGeoServiceProvider::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGeoServiceProvider_OnChildEvent(QGeoServiceProvider* self, intptr_t slot) {
    if (auto* vqgeoserviceprovider = dynamic_cast<VirtualQGeoServiceProvider*>(self))
        vqgeoserviceprovider->qgeoserviceprovider_childevent_callback = reinterpret_cast<VirtualQGeoServiceProvider::QGeoServiceProvider_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QGeoServiceProvider_CustomEvent(QGeoServiceProvider* self, QEvent* event) {
    auto* vqgeoserviceprovider = dynamic_cast<VirtualQGeoServiceProvider*>(self);
    if (vqgeoserviceprovider) {
        vqgeoserviceprovider->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGeoServiceProvider::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGeoServiceProvider_SuperCustomEvent(QGeoServiceProvider* self, QEvent* event) {
    if (auto* vqgeoserviceprovider = dynamic_cast<VirtualQGeoServiceProvider*>(self)) {
        vqgeoserviceprovider->QGeoServiceProvider::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QGeoServiceProvider::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGeoServiceProvider_OnCustomEvent(QGeoServiceProvider* self, intptr_t slot) {
    if (auto* vqgeoserviceprovider = dynamic_cast<VirtualQGeoServiceProvider*>(self))
        vqgeoserviceprovider->qgeoserviceprovider_customevent_callback = reinterpret_cast<VirtualQGeoServiceProvider::QGeoServiceProvider_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QGeoServiceProvider_ConnectNotify(QGeoServiceProvider* self, const QMetaMethod* signal) {
    auto* vqgeoserviceprovider = dynamic_cast<VirtualQGeoServiceProvider*>(self);
    if (vqgeoserviceprovider) {
        vqgeoserviceprovider->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QGeoServiceProvider::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QGeoServiceProvider_SuperConnectNotify(QGeoServiceProvider* self, const QMetaMethod* signal) {
    if (auto* vqgeoserviceprovider = dynamic_cast<VirtualQGeoServiceProvider*>(self)) {
        vqgeoserviceprovider->QGeoServiceProvider::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QGeoServiceProvider::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGeoServiceProvider_OnConnectNotify(QGeoServiceProvider* self, intptr_t slot) {
    if (auto* vqgeoserviceprovider = dynamic_cast<VirtualQGeoServiceProvider*>(self))
        vqgeoserviceprovider->qgeoserviceprovider_connectnotify_callback = reinterpret_cast<VirtualQGeoServiceProvider::QGeoServiceProvider_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QGeoServiceProvider_DisconnectNotify(QGeoServiceProvider* self, const QMetaMethod* signal) {
    auto* vqgeoserviceprovider = dynamic_cast<VirtualQGeoServiceProvider*>(self);
    if (vqgeoserviceprovider) {
        vqgeoserviceprovider->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QGeoServiceProvider::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QGeoServiceProvider_SuperDisconnectNotify(QGeoServiceProvider* self, const QMetaMethod* signal) {
    if (auto* vqgeoserviceprovider = dynamic_cast<VirtualQGeoServiceProvider*>(self)) {
        vqgeoserviceprovider->QGeoServiceProvider::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QGeoServiceProvider::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGeoServiceProvider_OnDisconnectNotify(QGeoServiceProvider* self, intptr_t slot) {
    if (auto* vqgeoserviceprovider = dynamic_cast<VirtualQGeoServiceProvider*>(self))
        vqgeoserviceprovider->qgeoserviceprovider_disconnectnotify_callback = reinterpret_cast<VirtualQGeoServiceProvider::QGeoServiceProvider_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* QGeoServiceProvider_Sender(const QGeoServiceProvider* self) {
    if (auto* vqgeoserviceprovider = const_cast<VirtualQGeoServiceProvider*>(dynamic_cast<const VirtualQGeoServiceProvider*>(self))) {
        return vqgeoserviceprovider->VirtualQGeoServiceProvider::sender();
    } else
        qFatal("Error: Protected method QGeoServiceProvider::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QGeoServiceProvider_SenderSignalIndex(const QGeoServiceProvider* self) {
    if (auto* vqgeoserviceprovider = const_cast<VirtualQGeoServiceProvider*>(dynamic_cast<const VirtualQGeoServiceProvider*>(self))) {
        return vqgeoserviceprovider->VirtualQGeoServiceProvider::senderSignalIndex();
    } else
        qFatal("Error: Protected method QGeoServiceProvider::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QGeoServiceProvider_Receivers(const QGeoServiceProvider* self, const char* signal) {
    if (auto* vqgeoserviceprovider = const_cast<VirtualQGeoServiceProvider*>(dynamic_cast<const VirtualQGeoServiceProvider*>(self))) {
        return vqgeoserviceprovider->VirtualQGeoServiceProvider::receivers(signal);
    } else
        qFatal("Error: Protected method QGeoServiceProvider::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QGeoServiceProvider_IsSignalConnected(const QGeoServiceProvider* self, const QMetaMethod* signal) {
    if (auto* vqgeoserviceprovider = const_cast<VirtualQGeoServiceProvider*>(dynamic_cast<const VirtualQGeoServiceProvider*>(self))) {
        return vqgeoserviceprovider->VirtualQGeoServiceProvider::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QGeoServiceProvider::isSignalConnected called without a directly constructed type");
}

void QGeoServiceProvider_Delete(QGeoServiceProvider* self) {
    delete self;
}
