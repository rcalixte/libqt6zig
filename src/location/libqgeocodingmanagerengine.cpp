#include <QChildEvent>
#include <QEvent>
#include <QGeoAddress>
#include <QGeoCodeReply>
#include <QGeoCodingManagerEngine>
#include <QGeoCoordinate>
#include <QGeoShape>
#include <QLocale>
#include <QMap>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QTimerEvent>
#include <QVariant>
#include <qgeocodingmanagerengine.h>
#include "libqgeocodingmanagerengine.h"
#include "libqgeocodingmanagerengine.hxx"

QGeoCodingManagerEngine* QGeoCodingManagerEngine_new(const libqt_map /* of libqt_string to QVariant* */ parameters) {
    QMap<QString, QVariant> parameters_QMap;
    libqt_string* parameters_karr = static_cast<libqt_string*>(parameters.keys);
    QVariant** parameters_varr = static_cast<QVariant**>(parameters.values);
    for (size_t i = 0; i < parameters.len; ++i) {
        QString parameters_karr_i_QString = QString::fromUtf8(parameters_karr[i].data, parameters_karr[i].len);
        parameters_QMap.insert(parameters_karr_i_QString, *(parameters_varr[i]));
    }
    return new VirtualQGeoCodingManagerEngine(parameters_QMap);
}

QGeoCodingManagerEngine* QGeoCodingManagerEngine_new2(const libqt_map /* of libqt_string to QVariant* */ parameters, QObject* parent) {
    QMap<QString, QVariant> parameters_QMap;
    libqt_string* parameters_karr = static_cast<libqt_string*>(parameters.keys);
    QVariant** parameters_varr = static_cast<QVariant**>(parameters.values);
    for (size_t i = 0; i < parameters.len; ++i) {
        QString parameters_karr_i_QString = QString::fromUtf8(parameters_karr[i].data, parameters_karr[i].len);
        parameters_QMap.insert(parameters_karr_i_QString, *(parameters_varr[i]));
    }
    return new VirtualQGeoCodingManagerEngine(parameters_QMap, parent);
}

QMetaObject* QGeoCodingManagerEngine_MetaObject(const QGeoCodingManagerEngine* self) {
    return (QMetaObject*)self->metaObject();
}

void* QGeoCodingManagerEngine_Metacast(QGeoCodingManagerEngine* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QGeoCodingManagerEngine_Metacall(QGeoCodingManagerEngine* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QGeoCodingManagerEngine_Tr(const char* s) {
    auto _ret = QGeoCodingManagerEngine::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QGeoCodingManagerEngine_ManagerName(const QGeoCodingManagerEngine* self) {
    auto _ret = self->managerName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int QGeoCodingManagerEngine_ManagerVersion(const QGeoCodingManagerEngine* self) {
    return self->managerVersion();
}

QGeoCodeReply* QGeoCodingManagerEngine_Geocode(QGeoCodingManagerEngine* self, const QGeoAddress* address, const QGeoShape* bounds) {
    return self->geocode(*address, *bounds);
}

QGeoCodeReply* QGeoCodingManagerEngine_Geocode2(QGeoCodingManagerEngine* self, const libqt_string address, int limit, int offset, const QGeoShape* bounds) {
    QString address_QString = QString::fromUtf8(address.data, address.len);
    return self->geocode(address_QString, static_cast<int>(limit), static_cast<int>(offset), *bounds);
}

QGeoCodeReply* QGeoCodingManagerEngine_ReverseGeocode(QGeoCodingManagerEngine* self, const QGeoCoordinate* coordinate, const QGeoShape* bounds) {
    return self->reverseGeocode(*coordinate, *bounds);
}

void QGeoCodingManagerEngine_SetLocale(QGeoCodingManagerEngine* self, const QLocale* locale) {
    self->setLocale(*locale);
}

QLocale* QGeoCodingManagerEngine_Locale(const QGeoCodingManagerEngine* self) {
    return new QLocale(self->locale());
}

void QGeoCodingManagerEngine_Finished(QGeoCodingManagerEngine* self, QGeoCodeReply* reply) {
    self->finished(reply);
}

void QGeoCodingManagerEngine_Connect_Finished(QGeoCodingManagerEngine* self, intptr_t slot) {
    void (*slotFunc)(QGeoCodingManagerEngine*, QGeoCodeReply*) = reinterpret_cast<void (*)(QGeoCodingManagerEngine*, QGeoCodeReply*)>(slot);
    QGeoCodingManagerEngine::connect(self,
                                     static_cast<void (QGeoCodingManagerEngine::*)(QGeoCodeReply*)>(&QGeoCodingManagerEngine::finished),
                                     [self, slotFunc](QGeoCodeReply* reply) {
                                         QGeoCodeReply* sigval1 = reply;
                                         slotFunc(self, sigval1);
                                     });
}

void QGeoCodingManagerEngine_ErrorOccurred(QGeoCodingManagerEngine* self, QGeoCodeReply* reply, int errorVal) {
    self->errorOccurred(reply, static_cast<QGeoCodeReply::Error>(errorVal));
}

void QGeoCodingManagerEngine_Connect_ErrorOccurred(QGeoCodingManagerEngine* self, intptr_t slot) {
    void (*slotFunc)(QGeoCodingManagerEngine*, QGeoCodeReply*, int) = reinterpret_cast<void (*)(QGeoCodingManagerEngine*, QGeoCodeReply*, int)>(slot);
    QGeoCodingManagerEngine::connect(self,
                                     static_cast<void (QGeoCodingManagerEngine::*)(QGeoCodeReply*, QGeoCodeReply::Error, const QString&)>(&QGeoCodingManagerEngine::errorOccurred),
                                     [self, slotFunc](QGeoCodeReply* reply, QGeoCodeReply::Error errorVal) {
                                         QGeoCodeReply* sigval1 = reply;
                                         int sigval2 = static_cast<int>(errorVal);
                                         slotFunc(self, sigval1, sigval2);
                                     });
}

libqt_string QGeoCodingManagerEngine_Tr2(const char* s, const char* c) {
    auto _ret = QGeoCodingManagerEngine::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QGeoCodingManagerEngine_Tr3(const char* s, const char* c, int n) {
    auto _ret = QGeoCodingManagerEngine::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QGeoCodingManagerEngine_ErrorOccurred3(QGeoCodingManagerEngine* self, QGeoCodeReply* reply, int errorVal, const libqt_string errorString) {
    QString errorString_QString = QString::fromUtf8(errorString.data, errorString.len);
    self->errorOccurred(reply, static_cast<QGeoCodeReply::Error>(errorVal), errorString_QString);
}

void QGeoCodingManagerEngine_Connect_ErrorOccurred3(QGeoCodingManagerEngine* self, intptr_t slot) {
    void (*slotFunc)(QGeoCodingManagerEngine*, QGeoCodeReply*, int, const char*) = reinterpret_cast<void (*)(QGeoCodingManagerEngine*, QGeoCodeReply*, int, const char*)>(slot);
    QGeoCodingManagerEngine::connect(self,
                                     static_cast<void (QGeoCodingManagerEngine::*)(QGeoCodeReply*, QGeoCodeReply::Error, const QString&)>(&QGeoCodingManagerEngine::errorOccurred),
                                     [self, slotFunc](QGeoCodeReply* reply, QGeoCodeReply::Error errorVal, const QString& errorString) {
                                         QGeoCodeReply* sigval1 = reply;
                                         int sigval2 = static_cast<int>(errorVal);
                                         const auto errorString_ret = errorString;
                                         // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
                                         QByteArray errorString_b = errorString_ret.toUtf8();
                                         auto errorString_str_len = errorString_b.length();
                                         const char* errorString_str = static_cast<const char*>(malloc(errorString_str_len + 1));
                                         memcpy((void*)errorString_str, errorString_b.data(), errorString_str_len);
                                         ((char*)errorString_str)[errorString_str_len] = '\0';
                                         const char* sigval3 = errorString_str;
                                         slotFunc(self, sigval1, sigval2, sigval3);
                                         libqt_free(errorString_str);
                                     });
}

// Base class handler implementation
QMetaObject* QGeoCodingManagerEngine_SuperMetaObject(const QGeoCodingManagerEngine* self) {
    return (QMetaObject*)self->QGeoCodingManagerEngine::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QGeoCodingManagerEngine_OnMetaObject(QGeoCodingManagerEngine* self, intptr_t slot) {
    if (auto* vqgeocodingmanagerengine = const_cast<VirtualQGeoCodingManagerEngine*>(dynamic_cast<const VirtualQGeoCodingManagerEngine*>(self)))
        vqgeocodingmanagerengine->qgeocodingmanagerengine_metaobject_callback = reinterpret_cast<VirtualQGeoCodingManagerEngine::QGeoCodingManagerEngine_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QGeoCodingManagerEngine_SuperMetacast(QGeoCodingManagerEngine* self, const char* param1) {
    return self->QGeoCodingManagerEngine::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QGeoCodingManagerEngine_OnMetacast(QGeoCodingManagerEngine* self, intptr_t slot) {
    if (auto* vqgeocodingmanagerengine = dynamic_cast<VirtualQGeoCodingManagerEngine*>(self))
        vqgeocodingmanagerengine->qgeocodingmanagerengine_metacast_callback = reinterpret_cast<VirtualQGeoCodingManagerEngine::QGeoCodingManagerEngine_Metacast_Callback>(slot);
}

// Base class handler implementation
int QGeoCodingManagerEngine_SuperMetacall(QGeoCodingManagerEngine* self, int param1, int param2, void** param3) {
    return self->QGeoCodingManagerEngine::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QGeoCodingManagerEngine_OnMetacall(QGeoCodingManagerEngine* self, intptr_t slot) {
    if (auto* vqgeocodingmanagerengine = dynamic_cast<VirtualQGeoCodingManagerEngine*>(self))
        vqgeocodingmanagerengine->qgeocodingmanagerengine_metacall_callback = reinterpret_cast<VirtualQGeoCodingManagerEngine::QGeoCodingManagerEngine_Metacall_Callback>(slot);
}

// Base class handler implementation
QGeoCodeReply* QGeoCodingManagerEngine_SuperGeocode(QGeoCodingManagerEngine* self, const QGeoAddress* address, const QGeoShape* bounds) {
    return self->QGeoCodingManagerEngine::geocode(*address, *bounds);
}

// Auxiliary method to allow providing re-implementation
void QGeoCodingManagerEngine_OnGeocode(QGeoCodingManagerEngine* self, intptr_t slot) {
    if (auto* vqgeocodingmanagerengine = dynamic_cast<VirtualQGeoCodingManagerEngine*>(self))
        vqgeocodingmanagerengine->qgeocodingmanagerengine_geocode_callback = reinterpret_cast<VirtualQGeoCodingManagerEngine::QGeoCodingManagerEngine_Geocode_Callback>(slot);
}

// Base class handler implementation
QGeoCodeReply* QGeoCodingManagerEngine_SuperGeocode2(QGeoCodingManagerEngine* self, const libqt_string address, int limit, int offset, const QGeoShape* bounds) {
    QString address_QString = QString::fromUtf8(address.data, address.len);
    return self->QGeoCodingManagerEngine::geocode(address_QString, static_cast<int>(limit), static_cast<int>(offset), *bounds);
}

// Auxiliary method to allow providing re-implementation
void QGeoCodingManagerEngine_OnGeocode2(QGeoCodingManagerEngine* self, intptr_t slot) {
    if (auto* vqgeocodingmanagerengine = dynamic_cast<VirtualQGeoCodingManagerEngine*>(self))
        vqgeocodingmanagerengine->qgeocodingmanagerengine_geocode2_callback = reinterpret_cast<VirtualQGeoCodingManagerEngine::QGeoCodingManagerEngine_Geocode2_Callback>(slot);
}

// Base class handler implementation
QGeoCodeReply* QGeoCodingManagerEngine_SuperReverseGeocode(QGeoCodingManagerEngine* self, const QGeoCoordinate* coordinate, const QGeoShape* bounds) {
    return self->QGeoCodingManagerEngine::reverseGeocode(*coordinate, *bounds);
}

// Auxiliary method to allow providing re-implementation
void QGeoCodingManagerEngine_OnReverseGeocode(QGeoCodingManagerEngine* self, intptr_t slot) {
    if (auto* vqgeocodingmanagerengine = dynamic_cast<VirtualQGeoCodingManagerEngine*>(self))
        vqgeocodingmanagerengine->qgeocodingmanagerengine_reversegeocode_callback = reinterpret_cast<VirtualQGeoCodingManagerEngine::QGeoCodingManagerEngine_ReverseGeocode_Callback>(slot);
}

// Derived class handler implementation
bool QGeoCodingManagerEngine_Event(QGeoCodingManagerEngine* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QGeoCodingManagerEngine_SuperEvent(QGeoCodingManagerEngine* self, QEvent* event) {
    return self->QGeoCodingManagerEngine::event(event);
}

// Auxiliary method to allow providing re-implementation
void QGeoCodingManagerEngine_OnEvent(QGeoCodingManagerEngine* self, intptr_t slot) {
    if (auto* vqgeocodingmanagerengine = dynamic_cast<VirtualQGeoCodingManagerEngine*>(self))
        vqgeocodingmanagerengine->qgeocodingmanagerengine_event_callback = reinterpret_cast<VirtualQGeoCodingManagerEngine::QGeoCodingManagerEngine_Event_Callback>(slot);
}

// Derived class handler implementation
bool QGeoCodingManagerEngine_EventFilter(QGeoCodingManagerEngine* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QGeoCodingManagerEngine_SuperEventFilter(QGeoCodingManagerEngine* self, QObject* watched, QEvent* event) {
    return self->QGeoCodingManagerEngine::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QGeoCodingManagerEngine_OnEventFilter(QGeoCodingManagerEngine* self, intptr_t slot) {
    if (auto* vqgeocodingmanagerengine = dynamic_cast<VirtualQGeoCodingManagerEngine*>(self))
        vqgeocodingmanagerengine->qgeocodingmanagerengine_eventfilter_callback = reinterpret_cast<VirtualQGeoCodingManagerEngine::QGeoCodingManagerEngine_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QGeoCodingManagerEngine_TimerEvent(QGeoCodingManagerEngine* self, QTimerEvent* event) {
    auto* vqgeocodingmanagerengine = dynamic_cast<VirtualQGeoCodingManagerEngine*>(self);
    if (vqgeocodingmanagerengine) {
        vqgeocodingmanagerengine->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGeoCodingManagerEngine::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGeoCodingManagerEngine_SuperTimerEvent(QGeoCodingManagerEngine* self, QTimerEvent* event) {
    if (auto* vqgeocodingmanagerengine = dynamic_cast<VirtualQGeoCodingManagerEngine*>(self)) {
        vqgeocodingmanagerengine->QGeoCodingManagerEngine::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QGeoCodingManagerEngine::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGeoCodingManagerEngine_OnTimerEvent(QGeoCodingManagerEngine* self, intptr_t slot) {
    if (auto* vqgeocodingmanagerengine = dynamic_cast<VirtualQGeoCodingManagerEngine*>(self))
        vqgeocodingmanagerengine->qgeocodingmanagerengine_timerevent_callback = reinterpret_cast<VirtualQGeoCodingManagerEngine::QGeoCodingManagerEngine_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QGeoCodingManagerEngine_ChildEvent(QGeoCodingManagerEngine* self, QChildEvent* event) {
    auto* vqgeocodingmanagerengine = dynamic_cast<VirtualQGeoCodingManagerEngine*>(self);
    if (vqgeocodingmanagerengine) {
        vqgeocodingmanagerengine->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGeoCodingManagerEngine::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGeoCodingManagerEngine_SuperChildEvent(QGeoCodingManagerEngine* self, QChildEvent* event) {
    if (auto* vqgeocodingmanagerengine = dynamic_cast<VirtualQGeoCodingManagerEngine*>(self)) {
        vqgeocodingmanagerengine->QGeoCodingManagerEngine::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QGeoCodingManagerEngine::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGeoCodingManagerEngine_OnChildEvent(QGeoCodingManagerEngine* self, intptr_t slot) {
    if (auto* vqgeocodingmanagerengine = dynamic_cast<VirtualQGeoCodingManagerEngine*>(self))
        vqgeocodingmanagerengine->qgeocodingmanagerengine_childevent_callback = reinterpret_cast<VirtualQGeoCodingManagerEngine::QGeoCodingManagerEngine_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QGeoCodingManagerEngine_CustomEvent(QGeoCodingManagerEngine* self, QEvent* event) {
    auto* vqgeocodingmanagerengine = dynamic_cast<VirtualQGeoCodingManagerEngine*>(self);
    if (vqgeocodingmanagerengine) {
        vqgeocodingmanagerengine->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGeoCodingManagerEngine::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGeoCodingManagerEngine_SuperCustomEvent(QGeoCodingManagerEngine* self, QEvent* event) {
    if (auto* vqgeocodingmanagerengine = dynamic_cast<VirtualQGeoCodingManagerEngine*>(self)) {
        vqgeocodingmanagerengine->QGeoCodingManagerEngine::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QGeoCodingManagerEngine::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGeoCodingManagerEngine_OnCustomEvent(QGeoCodingManagerEngine* self, intptr_t slot) {
    if (auto* vqgeocodingmanagerengine = dynamic_cast<VirtualQGeoCodingManagerEngine*>(self))
        vqgeocodingmanagerengine->qgeocodingmanagerengine_customevent_callback = reinterpret_cast<VirtualQGeoCodingManagerEngine::QGeoCodingManagerEngine_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QGeoCodingManagerEngine_ConnectNotify(QGeoCodingManagerEngine* self, const QMetaMethod* signal) {
    auto* vqgeocodingmanagerengine = dynamic_cast<VirtualQGeoCodingManagerEngine*>(self);
    if (vqgeocodingmanagerengine) {
        vqgeocodingmanagerengine->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QGeoCodingManagerEngine::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QGeoCodingManagerEngine_SuperConnectNotify(QGeoCodingManagerEngine* self, const QMetaMethod* signal) {
    if (auto* vqgeocodingmanagerengine = dynamic_cast<VirtualQGeoCodingManagerEngine*>(self)) {
        vqgeocodingmanagerengine->QGeoCodingManagerEngine::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QGeoCodingManagerEngine::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGeoCodingManagerEngine_OnConnectNotify(QGeoCodingManagerEngine* self, intptr_t slot) {
    if (auto* vqgeocodingmanagerengine = dynamic_cast<VirtualQGeoCodingManagerEngine*>(self))
        vqgeocodingmanagerengine->qgeocodingmanagerengine_connectnotify_callback = reinterpret_cast<VirtualQGeoCodingManagerEngine::QGeoCodingManagerEngine_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QGeoCodingManagerEngine_DisconnectNotify(QGeoCodingManagerEngine* self, const QMetaMethod* signal) {
    auto* vqgeocodingmanagerengine = dynamic_cast<VirtualQGeoCodingManagerEngine*>(self);
    if (vqgeocodingmanagerengine) {
        vqgeocodingmanagerengine->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QGeoCodingManagerEngine::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QGeoCodingManagerEngine_SuperDisconnectNotify(QGeoCodingManagerEngine* self, const QMetaMethod* signal) {
    if (auto* vqgeocodingmanagerengine = dynamic_cast<VirtualQGeoCodingManagerEngine*>(self)) {
        vqgeocodingmanagerengine->QGeoCodingManagerEngine::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QGeoCodingManagerEngine::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGeoCodingManagerEngine_OnDisconnectNotify(QGeoCodingManagerEngine* self, intptr_t slot) {
    if (auto* vqgeocodingmanagerengine = dynamic_cast<VirtualQGeoCodingManagerEngine*>(self))
        vqgeocodingmanagerengine->qgeocodingmanagerengine_disconnectnotify_callback = reinterpret_cast<VirtualQGeoCodingManagerEngine::QGeoCodingManagerEngine_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* QGeoCodingManagerEngine_Sender(const QGeoCodingManagerEngine* self) {
    if (auto* vqgeocodingmanagerengine = const_cast<VirtualQGeoCodingManagerEngine*>(dynamic_cast<const VirtualQGeoCodingManagerEngine*>(self))) {
        return vqgeocodingmanagerengine->VirtualQGeoCodingManagerEngine::sender();
    } else
        qFatal("Error: Protected method QGeoCodingManagerEngine::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QGeoCodingManagerEngine_SenderSignalIndex(const QGeoCodingManagerEngine* self) {
    if (auto* vqgeocodingmanagerengine = const_cast<VirtualQGeoCodingManagerEngine*>(dynamic_cast<const VirtualQGeoCodingManagerEngine*>(self))) {
        return vqgeocodingmanagerengine->VirtualQGeoCodingManagerEngine::senderSignalIndex();
    } else
        qFatal("Error: Protected method QGeoCodingManagerEngine::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QGeoCodingManagerEngine_Receivers(const QGeoCodingManagerEngine* self, const char* signal) {
    if (auto* vqgeocodingmanagerengine = const_cast<VirtualQGeoCodingManagerEngine*>(dynamic_cast<const VirtualQGeoCodingManagerEngine*>(self))) {
        return vqgeocodingmanagerengine->VirtualQGeoCodingManagerEngine::receivers(signal);
    } else
        qFatal("Error: Protected method QGeoCodingManagerEngine::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QGeoCodingManagerEngine_IsSignalConnected(const QGeoCodingManagerEngine* self, const QMetaMethod* signal) {
    if (auto* vqgeocodingmanagerengine = const_cast<VirtualQGeoCodingManagerEngine*>(dynamic_cast<const VirtualQGeoCodingManagerEngine*>(self))) {
        return vqgeocodingmanagerengine->VirtualQGeoCodingManagerEngine::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QGeoCodingManagerEngine::isSignalConnected called without a directly constructed type");
}

void QGeoCodingManagerEngine_Delete(QGeoCodingManagerEngine* self) {
    delete self;
}
