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
#include <QByteArray>
#include <cstring>
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
        parameters_QMap[parameters_karr_i_QString] = *(parameters_varr[i]);
    }
    return new VirtualQGeoCodingManagerEngine(parameters_QMap);
}

QGeoCodingManagerEngine* QGeoCodingManagerEngine_new2(const libqt_map /* of libqt_string to QVariant* */ parameters, QObject* parent) {
    QMap<QString, QVariant> parameters_QMap;
    libqt_string* parameters_karr = static_cast<libqt_string*>(parameters.keys);
    QVariant** parameters_varr = static_cast<QVariant**>(parameters.values);
    for (size_t i = 0; i < parameters.len; ++i) {
        QString parameters_karr_i_QString = QString::fromUtf8(parameters_karr[i].data, parameters_karr[i].len);
        parameters_QMap[parameters_karr_i_QString] = *(parameters_varr[i]);
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
    auto* vqgeocodingmanagerengine = dynamic_cast<VirtualQGeoCodingManagerEngine*>(self);
    if (vqgeocodingmanagerengine && vqgeocodingmanagerengine->isVirtualQGeoCodingManagerEngine) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQGeoCodingManagerEngine*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QGeoCodingManagerEngine_ManagerName(const QGeoCodingManagerEngine* self) {
    QString _ret = self->managerName();
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
    auto* vqgeocodingmanagerengine = dynamic_cast<VirtualQGeoCodingManagerEngine*>(self);
    if (vqgeocodingmanagerengine && vqgeocodingmanagerengine->isVirtualQGeoCodingManagerEngine) {
        return self->geocode(*address, *bounds);
    } else {
        return ((VirtualQGeoCodingManagerEngine*)self)->geocode(*address, *bounds);
    }
}

QGeoCodeReply* QGeoCodingManagerEngine_Geocode2(QGeoCodingManagerEngine* self, const libqt_string address, int limit, int offset, const QGeoShape* bounds) {
    QString address_QString = QString::fromUtf8(address.data, address.len);
    auto* vqgeocodingmanagerengine = dynamic_cast<VirtualQGeoCodingManagerEngine*>(self);
    if (vqgeocodingmanagerengine && vqgeocodingmanagerengine->isVirtualQGeoCodingManagerEngine) {
        return self->geocode(address_QString, static_cast<int>(limit), static_cast<int>(offset), *bounds);
    } else {
        return ((VirtualQGeoCodingManagerEngine*)self)->geocode(address_QString, static_cast<int>(limit), static_cast<int>(offset), *bounds);
    }
}

QGeoCodeReply* QGeoCodingManagerEngine_ReverseGeocode(QGeoCodingManagerEngine* self, const QGeoCoordinate* coordinate, const QGeoShape* bounds) {
    auto* vqgeocodingmanagerengine = dynamic_cast<VirtualQGeoCodingManagerEngine*>(self);
    if (vqgeocodingmanagerengine && vqgeocodingmanagerengine->isVirtualQGeoCodingManagerEngine) {
        return self->reverseGeocode(*coordinate, *bounds);
    } else {
        return ((VirtualQGeoCodingManagerEngine*)self)->reverseGeocode(*coordinate, *bounds);
    }
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
    QGeoCodingManagerEngine::connect(self, &QGeoCodingManagerEngine::finished, [self, slotFunc](QGeoCodeReply* reply) {
        QGeoCodeReply* sigval1 = reply;
        slotFunc(self, sigval1);
    });
}

void QGeoCodingManagerEngine_ErrorOccurred(QGeoCodingManagerEngine* self, QGeoCodeReply* reply, int errorVal) {
    self->errorOccurred(reply, static_cast<QGeoCodeReply::Error>(errorVal));
}

void QGeoCodingManagerEngine_Connect_ErrorOccurred(QGeoCodingManagerEngine* self, intptr_t slot) {
    void (*slotFunc)(QGeoCodingManagerEngine*, QGeoCodeReply*, int) = reinterpret_cast<void (*)(QGeoCodingManagerEngine*, QGeoCodeReply*, int)>(slot);
    QGeoCodingManagerEngine::connect(self, &QGeoCodingManagerEngine::errorOccurred, [self, slotFunc](QGeoCodeReply* reply, QGeoCodeReply::Error errorVal) {
        QGeoCodeReply* sigval1 = reply;
        int sigval2 = static_cast<int>(errorVal);
        slotFunc(self, sigval1, sigval2);
    });
}

void QGeoCodingManagerEngine_ErrorOccurred3(QGeoCodingManagerEngine* self, QGeoCodeReply* reply, int errorVal, const libqt_string errorString) {
    QString errorString_QString = QString::fromUtf8(errorString.data, errorString.len);
    self->errorOccurred(reply, static_cast<QGeoCodeReply::Error>(errorVal), errorString_QString);
}

void QGeoCodingManagerEngine_Connect_ErrorOccurred3(QGeoCodingManagerEngine* self, intptr_t slot) {
    void (*slotFunc)(QGeoCodingManagerEngine*, QGeoCodeReply*, int, const char*) = reinterpret_cast<void (*)(QGeoCodingManagerEngine*, QGeoCodeReply*, int, const char*)>(slot);
    QGeoCodingManagerEngine::connect(self, &QGeoCodingManagerEngine::errorOccurred, [self, slotFunc](QGeoCodeReply* reply, QGeoCodeReply::Error errorVal, const QString& errorString) {
        QGeoCodeReply* sigval1 = reply;
        int sigval2 = static_cast<int>(errorVal);
        const QString errorString_ret = errorString;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray errorString_b = errorString_ret.toUtf8();
        const char* errorString_str = static_cast<const char*>(malloc(errorString_b.length() + 1));
        memcpy((void*)errorString_str, errorString_b.data(), errorString_b.length());
        ((char*)errorString_str)[errorString_b.length()] = '\0';
        const char* sigval3 = errorString_str;
        slotFunc(self, sigval1, sigval2, sigval3);
        libqt_free(errorString_str);
    });
}

// Base class handler implementation
int QGeoCodingManagerEngine_QBaseMetacall(QGeoCodingManagerEngine* self, int param1, int param2, void** param3) {
    auto* vqgeocodingmanagerengine = dynamic_cast<VirtualQGeoCodingManagerEngine*>(self);
    if (vqgeocodingmanagerengine && vqgeocodingmanagerengine->isVirtualQGeoCodingManagerEngine) {
        vqgeocodingmanagerengine->setQGeoCodingManagerEngine_Metacall_IsBase(true);
        return vqgeocodingmanagerengine->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->QGeoCodingManagerEngine::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void QGeoCodingManagerEngine_OnMetacall(QGeoCodingManagerEngine* self, intptr_t slot) {
    auto* vqgeocodingmanagerengine = dynamic_cast<VirtualQGeoCodingManagerEngine*>(self);
    if (vqgeocodingmanagerengine && vqgeocodingmanagerengine->isVirtualQGeoCodingManagerEngine) {
        vqgeocodingmanagerengine->setQGeoCodingManagerEngine_Metacall_Callback(reinterpret_cast<VirtualQGeoCodingManagerEngine::QGeoCodingManagerEngine_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
QGeoCodeReply* QGeoCodingManagerEngine_QBaseGeocode(QGeoCodingManagerEngine* self, const QGeoAddress* address, const QGeoShape* bounds) {
    auto* vqgeocodingmanagerengine = dynamic_cast<VirtualQGeoCodingManagerEngine*>(self);
    if (vqgeocodingmanagerengine && vqgeocodingmanagerengine->isVirtualQGeoCodingManagerEngine) {
        vqgeocodingmanagerengine->setQGeoCodingManagerEngine_Geocode_IsBase(true);
        return vqgeocodingmanagerengine->geocode(*address, *bounds);
    } else {
        return self->QGeoCodingManagerEngine::geocode(*address, *bounds);
    }
}

// Auxiliary method to allow providing re-implementation
void QGeoCodingManagerEngine_OnGeocode(QGeoCodingManagerEngine* self, intptr_t slot) {
    auto* vqgeocodingmanagerengine = dynamic_cast<VirtualQGeoCodingManagerEngine*>(self);
    if (vqgeocodingmanagerengine && vqgeocodingmanagerengine->isVirtualQGeoCodingManagerEngine) {
        vqgeocodingmanagerengine->setQGeoCodingManagerEngine_Geocode_Callback(reinterpret_cast<VirtualQGeoCodingManagerEngine::QGeoCodingManagerEngine_Geocode_Callback>(slot));
    }
}

// Base class handler implementation
QGeoCodeReply* QGeoCodingManagerEngine_QBaseGeocode2(QGeoCodingManagerEngine* self, const libqt_string address, int limit, int offset, const QGeoShape* bounds) {
    auto* vqgeocodingmanagerengine = dynamic_cast<VirtualQGeoCodingManagerEngine*>(self);
    QString address_QString = QString::fromUtf8(address.data, address.len);
    if (vqgeocodingmanagerengine && vqgeocodingmanagerengine->isVirtualQGeoCodingManagerEngine) {
        vqgeocodingmanagerengine->setQGeoCodingManagerEngine_Geocode2_IsBase(true);
        return vqgeocodingmanagerengine->geocode(address_QString, static_cast<int>(limit), static_cast<int>(offset), *bounds);
    } else {
        return self->QGeoCodingManagerEngine::geocode(address_QString, static_cast<int>(limit), static_cast<int>(offset), *bounds);
    }
}

// Auxiliary method to allow providing re-implementation
void QGeoCodingManagerEngine_OnGeocode2(QGeoCodingManagerEngine* self, intptr_t slot) {
    auto* vqgeocodingmanagerengine = dynamic_cast<VirtualQGeoCodingManagerEngine*>(self);
    if (vqgeocodingmanagerengine && vqgeocodingmanagerengine->isVirtualQGeoCodingManagerEngine) {
        vqgeocodingmanagerengine->setQGeoCodingManagerEngine_Geocode2_Callback(reinterpret_cast<VirtualQGeoCodingManagerEngine::QGeoCodingManagerEngine_Geocode2_Callback>(slot));
    }
}

// Base class handler implementation
QGeoCodeReply* QGeoCodingManagerEngine_QBaseReverseGeocode(QGeoCodingManagerEngine* self, const QGeoCoordinate* coordinate, const QGeoShape* bounds) {
    auto* vqgeocodingmanagerengine = dynamic_cast<VirtualQGeoCodingManagerEngine*>(self);
    if (vqgeocodingmanagerengine && vqgeocodingmanagerengine->isVirtualQGeoCodingManagerEngine) {
        vqgeocodingmanagerengine->setQGeoCodingManagerEngine_ReverseGeocode_IsBase(true);
        return vqgeocodingmanagerengine->reverseGeocode(*coordinate, *bounds);
    } else {
        return self->QGeoCodingManagerEngine::reverseGeocode(*coordinate, *bounds);
    }
}

// Auxiliary method to allow providing re-implementation
void QGeoCodingManagerEngine_OnReverseGeocode(QGeoCodingManagerEngine* self, intptr_t slot) {
    auto* vqgeocodingmanagerengine = dynamic_cast<VirtualQGeoCodingManagerEngine*>(self);
    if (vqgeocodingmanagerengine && vqgeocodingmanagerengine->isVirtualQGeoCodingManagerEngine) {
        vqgeocodingmanagerengine->setQGeoCodingManagerEngine_ReverseGeocode_Callback(reinterpret_cast<VirtualQGeoCodingManagerEngine::QGeoCodingManagerEngine_ReverseGeocode_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGeoCodingManagerEngine_Event(QGeoCodingManagerEngine* self, QEvent* event) {
    auto* vqgeocodingmanagerengine = dynamic_cast<VirtualQGeoCodingManagerEngine*>(self);
    if (vqgeocodingmanagerengine && vqgeocodingmanagerengine->isVirtualQGeoCodingManagerEngine) {
        return vqgeocodingmanagerengine->event(event);
    } else {
        return self->QGeoCodingManagerEngine::event(event);
    }
}

// Base class handler implementation
bool QGeoCodingManagerEngine_QBaseEvent(QGeoCodingManagerEngine* self, QEvent* event) {
    auto* vqgeocodingmanagerengine = dynamic_cast<VirtualQGeoCodingManagerEngine*>(self);
    if (vqgeocodingmanagerengine && vqgeocodingmanagerengine->isVirtualQGeoCodingManagerEngine) {
        vqgeocodingmanagerengine->setQGeoCodingManagerEngine_Event_IsBase(true);
        return vqgeocodingmanagerengine->event(event);
    } else {
        return self->QGeoCodingManagerEngine::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGeoCodingManagerEngine_OnEvent(QGeoCodingManagerEngine* self, intptr_t slot) {
    auto* vqgeocodingmanagerengine = dynamic_cast<VirtualQGeoCodingManagerEngine*>(self);
    if (vqgeocodingmanagerengine && vqgeocodingmanagerengine->isVirtualQGeoCodingManagerEngine) {
        vqgeocodingmanagerengine->setQGeoCodingManagerEngine_Event_Callback(reinterpret_cast<VirtualQGeoCodingManagerEngine::QGeoCodingManagerEngine_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGeoCodingManagerEngine_EventFilter(QGeoCodingManagerEngine* self, QObject* watched, QEvent* event) {
    auto* vqgeocodingmanagerengine = dynamic_cast<VirtualQGeoCodingManagerEngine*>(self);
    if (vqgeocodingmanagerengine && vqgeocodingmanagerengine->isVirtualQGeoCodingManagerEngine) {
        return vqgeocodingmanagerengine->eventFilter(watched, event);
    } else {
        return self->QGeoCodingManagerEngine::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QGeoCodingManagerEngine_QBaseEventFilter(QGeoCodingManagerEngine* self, QObject* watched, QEvent* event) {
    auto* vqgeocodingmanagerengine = dynamic_cast<VirtualQGeoCodingManagerEngine*>(self);
    if (vqgeocodingmanagerengine && vqgeocodingmanagerengine->isVirtualQGeoCodingManagerEngine) {
        vqgeocodingmanagerengine->setQGeoCodingManagerEngine_EventFilter_IsBase(true);
        return vqgeocodingmanagerengine->eventFilter(watched, event);
    } else {
        return self->QGeoCodingManagerEngine::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGeoCodingManagerEngine_OnEventFilter(QGeoCodingManagerEngine* self, intptr_t slot) {
    auto* vqgeocodingmanagerengine = dynamic_cast<VirtualQGeoCodingManagerEngine*>(self);
    if (vqgeocodingmanagerengine && vqgeocodingmanagerengine->isVirtualQGeoCodingManagerEngine) {
        vqgeocodingmanagerengine->setQGeoCodingManagerEngine_EventFilter_Callback(reinterpret_cast<VirtualQGeoCodingManagerEngine::QGeoCodingManagerEngine_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QGeoCodingManagerEngine_TimerEvent(QGeoCodingManagerEngine* self, QTimerEvent* event) {
    auto* vqgeocodingmanagerengine = dynamic_cast<VirtualQGeoCodingManagerEngine*>(self);
    if (vqgeocodingmanagerengine && vqgeocodingmanagerengine->isVirtualQGeoCodingManagerEngine) {
        vqgeocodingmanagerengine->timerEvent(event);
    } else {
        ((VirtualQGeoCodingManagerEngine*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QGeoCodingManagerEngine_QBaseTimerEvent(QGeoCodingManagerEngine* self, QTimerEvent* event) {
    auto* vqgeocodingmanagerengine = dynamic_cast<VirtualQGeoCodingManagerEngine*>(self);
    if (vqgeocodingmanagerengine && vqgeocodingmanagerengine->isVirtualQGeoCodingManagerEngine) {
        vqgeocodingmanagerengine->setQGeoCodingManagerEngine_TimerEvent_IsBase(true);
        vqgeocodingmanagerengine->timerEvent(event);
    } else {
        ((VirtualQGeoCodingManagerEngine*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGeoCodingManagerEngine_OnTimerEvent(QGeoCodingManagerEngine* self, intptr_t slot) {
    auto* vqgeocodingmanagerengine = dynamic_cast<VirtualQGeoCodingManagerEngine*>(self);
    if (vqgeocodingmanagerengine && vqgeocodingmanagerengine->isVirtualQGeoCodingManagerEngine) {
        vqgeocodingmanagerengine->setQGeoCodingManagerEngine_TimerEvent_Callback(reinterpret_cast<VirtualQGeoCodingManagerEngine::QGeoCodingManagerEngine_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGeoCodingManagerEngine_ChildEvent(QGeoCodingManagerEngine* self, QChildEvent* event) {
    auto* vqgeocodingmanagerengine = dynamic_cast<VirtualQGeoCodingManagerEngine*>(self);
    if (vqgeocodingmanagerengine && vqgeocodingmanagerengine->isVirtualQGeoCodingManagerEngine) {
        vqgeocodingmanagerengine->childEvent(event);
    } else {
        ((VirtualQGeoCodingManagerEngine*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QGeoCodingManagerEngine_QBaseChildEvent(QGeoCodingManagerEngine* self, QChildEvent* event) {
    auto* vqgeocodingmanagerengine = dynamic_cast<VirtualQGeoCodingManagerEngine*>(self);
    if (vqgeocodingmanagerengine && vqgeocodingmanagerengine->isVirtualQGeoCodingManagerEngine) {
        vqgeocodingmanagerengine->setQGeoCodingManagerEngine_ChildEvent_IsBase(true);
        vqgeocodingmanagerengine->childEvent(event);
    } else {
        ((VirtualQGeoCodingManagerEngine*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGeoCodingManagerEngine_OnChildEvent(QGeoCodingManagerEngine* self, intptr_t slot) {
    auto* vqgeocodingmanagerengine = dynamic_cast<VirtualQGeoCodingManagerEngine*>(self);
    if (vqgeocodingmanagerengine && vqgeocodingmanagerengine->isVirtualQGeoCodingManagerEngine) {
        vqgeocodingmanagerengine->setQGeoCodingManagerEngine_ChildEvent_Callback(reinterpret_cast<VirtualQGeoCodingManagerEngine::QGeoCodingManagerEngine_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGeoCodingManagerEngine_CustomEvent(QGeoCodingManagerEngine* self, QEvent* event) {
    auto* vqgeocodingmanagerengine = dynamic_cast<VirtualQGeoCodingManagerEngine*>(self);
    if (vqgeocodingmanagerengine && vqgeocodingmanagerengine->isVirtualQGeoCodingManagerEngine) {
        vqgeocodingmanagerengine->customEvent(event);
    } else {
        ((VirtualQGeoCodingManagerEngine*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QGeoCodingManagerEngine_QBaseCustomEvent(QGeoCodingManagerEngine* self, QEvent* event) {
    auto* vqgeocodingmanagerengine = dynamic_cast<VirtualQGeoCodingManagerEngine*>(self);
    if (vqgeocodingmanagerengine && vqgeocodingmanagerengine->isVirtualQGeoCodingManagerEngine) {
        vqgeocodingmanagerengine->setQGeoCodingManagerEngine_CustomEvent_IsBase(true);
        vqgeocodingmanagerengine->customEvent(event);
    } else {
        ((VirtualQGeoCodingManagerEngine*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGeoCodingManagerEngine_OnCustomEvent(QGeoCodingManagerEngine* self, intptr_t slot) {
    auto* vqgeocodingmanagerengine = dynamic_cast<VirtualQGeoCodingManagerEngine*>(self);
    if (vqgeocodingmanagerengine && vqgeocodingmanagerengine->isVirtualQGeoCodingManagerEngine) {
        vqgeocodingmanagerengine->setQGeoCodingManagerEngine_CustomEvent_Callback(reinterpret_cast<VirtualQGeoCodingManagerEngine::QGeoCodingManagerEngine_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGeoCodingManagerEngine_ConnectNotify(QGeoCodingManagerEngine* self, const QMetaMethod* signal) {
    auto* vqgeocodingmanagerengine = dynamic_cast<VirtualQGeoCodingManagerEngine*>(self);
    if (vqgeocodingmanagerengine && vqgeocodingmanagerengine->isVirtualQGeoCodingManagerEngine) {
        vqgeocodingmanagerengine->connectNotify(*signal);
    } else {
        ((VirtualQGeoCodingManagerEngine*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QGeoCodingManagerEngine_QBaseConnectNotify(QGeoCodingManagerEngine* self, const QMetaMethod* signal) {
    auto* vqgeocodingmanagerengine = dynamic_cast<VirtualQGeoCodingManagerEngine*>(self);
    if (vqgeocodingmanagerengine && vqgeocodingmanagerengine->isVirtualQGeoCodingManagerEngine) {
        vqgeocodingmanagerengine->setQGeoCodingManagerEngine_ConnectNotify_IsBase(true);
        vqgeocodingmanagerengine->connectNotify(*signal);
    } else {
        ((VirtualQGeoCodingManagerEngine*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QGeoCodingManagerEngine_OnConnectNotify(QGeoCodingManagerEngine* self, intptr_t slot) {
    auto* vqgeocodingmanagerengine = dynamic_cast<VirtualQGeoCodingManagerEngine*>(self);
    if (vqgeocodingmanagerengine && vqgeocodingmanagerengine->isVirtualQGeoCodingManagerEngine) {
        vqgeocodingmanagerengine->setQGeoCodingManagerEngine_ConnectNotify_Callback(reinterpret_cast<VirtualQGeoCodingManagerEngine::QGeoCodingManagerEngine_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QGeoCodingManagerEngine_DisconnectNotify(QGeoCodingManagerEngine* self, const QMetaMethod* signal) {
    auto* vqgeocodingmanagerengine = dynamic_cast<VirtualQGeoCodingManagerEngine*>(self);
    if (vqgeocodingmanagerengine && vqgeocodingmanagerengine->isVirtualQGeoCodingManagerEngine) {
        vqgeocodingmanagerengine->disconnectNotify(*signal);
    } else {
        ((VirtualQGeoCodingManagerEngine*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QGeoCodingManagerEngine_QBaseDisconnectNotify(QGeoCodingManagerEngine* self, const QMetaMethod* signal) {
    auto* vqgeocodingmanagerengine = dynamic_cast<VirtualQGeoCodingManagerEngine*>(self);
    if (vqgeocodingmanagerengine && vqgeocodingmanagerengine->isVirtualQGeoCodingManagerEngine) {
        vqgeocodingmanagerengine->setQGeoCodingManagerEngine_DisconnectNotify_IsBase(true);
        vqgeocodingmanagerengine->disconnectNotify(*signal);
    } else {
        ((VirtualQGeoCodingManagerEngine*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QGeoCodingManagerEngine_OnDisconnectNotify(QGeoCodingManagerEngine* self, intptr_t slot) {
    auto* vqgeocodingmanagerengine = dynamic_cast<VirtualQGeoCodingManagerEngine*>(self);
    if (vqgeocodingmanagerengine && vqgeocodingmanagerengine->isVirtualQGeoCodingManagerEngine) {
        vqgeocodingmanagerengine->setQGeoCodingManagerEngine_DisconnectNotify_Callback(reinterpret_cast<VirtualQGeoCodingManagerEngine::QGeoCodingManagerEngine_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QGeoCodingManagerEngine_Sender(const QGeoCodingManagerEngine* self) {
    auto* vqgeocodingmanagerengine = const_cast<VirtualQGeoCodingManagerEngine*>(dynamic_cast<const VirtualQGeoCodingManagerEngine*>(self));
    if (vqgeocodingmanagerengine && vqgeocodingmanagerengine->isVirtualQGeoCodingManagerEngine) {
        return vqgeocodingmanagerengine->sender();
    } else {
        return ((VirtualQGeoCodingManagerEngine*)self)->sender();
    }
}

// Base class handler implementation
QObject* QGeoCodingManagerEngine_QBaseSender(const QGeoCodingManagerEngine* self) {
    auto* vqgeocodingmanagerengine = const_cast<VirtualQGeoCodingManagerEngine*>(dynamic_cast<const VirtualQGeoCodingManagerEngine*>(self));
    if (vqgeocodingmanagerengine && vqgeocodingmanagerengine->isVirtualQGeoCodingManagerEngine) {
        vqgeocodingmanagerengine->setQGeoCodingManagerEngine_Sender_IsBase(true);
        return vqgeocodingmanagerengine->sender();
    } else {
        return ((VirtualQGeoCodingManagerEngine*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QGeoCodingManagerEngine_OnSender(const QGeoCodingManagerEngine* self, intptr_t slot) {
    auto* vqgeocodingmanagerengine = const_cast<VirtualQGeoCodingManagerEngine*>(dynamic_cast<const VirtualQGeoCodingManagerEngine*>(self));
    if (vqgeocodingmanagerengine && vqgeocodingmanagerengine->isVirtualQGeoCodingManagerEngine) {
        vqgeocodingmanagerengine->setQGeoCodingManagerEngine_Sender_Callback(reinterpret_cast<VirtualQGeoCodingManagerEngine::QGeoCodingManagerEngine_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QGeoCodingManagerEngine_SenderSignalIndex(const QGeoCodingManagerEngine* self) {
    auto* vqgeocodingmanagerengine = const_cast<VirtualQGeoCodingManagerEngine*>(dynamic_cast<const VirtualQGeoCodingManagerEngine*>(self));
    if (vqgeocodingmanagerengine && vqgeocodingmanagerengine->isVirtualQGeoCodingManagerEngine) {
        return vqgeocodingmanagerengine->senderSignalIndex();
    } else {
        return ((VirtualQGeoCodingManagerEngine*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QGeoCodingManagerEngine_QBaseSenderSignalIndex(const QGeoCodingManagerEngine* self) {
    auto* vqgeocodingmanagerengine = const_cast<VirtualQGeoCodingManagerEngine*>(dynamic_cast<const VirtualQGeoCodingManagerEngine*>(self));
    if (vqgeocodingmanagerengine && vqgeocodingmanagerengine->isVirtualQGeoCodingManagerEngine) {
        vqgeocodingmanagerengine->setQGeoCodingManagerEngine_SenderSignalIndex_IsBase(true);
        return vqgeocodingmanagerengine->senderSignalIndex();
    } else {
        return ((VirtualQGeoCodingManagerEngine*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QGeoCodingManagerEngine_OnSenderSignalIndex(const QGeoCodingManagerEngine* self, intptr_t slot) {
    auto* vqgeocodingmanagerengine = const_cast<VirtualQGeoCodingManagerEngine*>(dynamic_cast<const VirtualQGeoCodingManagerEngine*>(self));
    if (vqgeocodingmanagerengine && vqgeocodingmanagerengine->isVirtualQGeoCodingManagerEngine) {
        vqgeocodingmanagerengine->setQGeoCodingManagerEngine_SenderSignalIndex_Callback(reinterpret_cast<VirtualQGeoCodingManagerEngine::QGeoCodingManagerEngine_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QGeoCodingManagerEngine_Receivers(const QGeoCodingManagerEngine* self, const char* signal) {
    auto* vqgeocodingmanagerengine = const_cast<VirtualQGeoCodingManagerEngine*>(dynamic_cast<const VirtualQGeoCodingManagerEngine*>(self));
    if (vqgeocodingmanagerengine && vqgeocodingmanagerengine->isVirtualQGeoCodingManagerEngine) {
        return vqgeocodingmanagerengine->receivers(signal);
    } else {
        return ((VirtualQGeoCodingManagerEngine*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QGeoCodingManagerEngine_QBaseReceivers(const QGeoCodingManagerEngine* self, const char* signal) {
    auto* vqgeocodingmanagerengine = const_cast<VirtualQGeoCodingManagerEngine*>(dynamic_cast<const VirtualQGeoCodingManagerEngine*>(self));
    if (vqgeocodingmanagerengine && vqgeocodingmanagerengine->isVirtualQGeoCodingManagerEngine) {
        vqgeocodingmanagerengine->setQGeoCodingManagerEngine_Receivers_IsBase(true);
        return vqgeocodingmanagerengine->receivers(signal);
    } else {
        return ((VirtualQGeoCodingManagerEngine*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QGeoCodingManagerEngine_OnReceivers(const QGeoCodingManagerEngine* self, intptr_t slot) {
    auto* vqgeocodingmanagerengine = const_cast<VirtualQGeoCodingManagerEngine*>(dynamic_cast<const VirtualQGeoCodingManagerEngine*>(self));
    if (vqgeocodingmanagerengine && vqgeocodingmanagerengine->isVirtualQGeoCodingManagerEngine) {
        vqgeocodingmanagerengine->setQGeoCodingManagerEngine_Receivers_Callback(reinterpret_cast<VirtualQGeoCodingManagerEngine::QGeoCodingManagerEngine_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGeoCodingManagerEngine_IsSignalConnected(const QGeoCodingManagerEngine* self, const QMetaMethod* signal) {
    auto* vqgeocodingmanagerengine = const_cast<VirtualQGeoCodingManagerEngine*>(dynamic_cast<const VirtualQGeoCodingManagerEngine*>(self));
    if (vqgeocodingmanagerengine && vqgeocodingmanagerengine->isVirtualQGeoCodingManagerEngine) {
        return vqgeocodingmanagerengine->isSignalConnected(*signal);
    } else {
        return ((VirtualQGeoCodingManagerEngine*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QGeoCodingManagerEngine_QBaseIsSignalConnected(const QGeoCodingManagerEngine* self, const QMetaMethod* signal) {
    auto* vqgeocodingmanagerengine = const_cast<VirtualQGeoCodingManagerEngine*>(dynamic_cast<const VirtualQGeoCodingManagerEngine*>(self));
    if (vqgeocodingmanagerengine && vqgeocodingmanagerengine->isVirtualQGeoCodingManagerEngine) {
        vqgeocodingmanagerengine->setQGeoCodingManagerEngine_IsSignalConnected_IsBase(true);
        return vqgeocodingmanagerengine->isSignalConnected(*signal);
    } else {
        return ((VirtualQGeoCodingManagerEngine*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QGeoCodingManagerEngine_OnIsSignalConnected(const QGeoCodingManagerEngine* self, intptr_t slot) {
    auto* vqgeocodingmanagerengine = const_cast<VirtualQGeoCodingManagerEngine*>(dynamic_cast<const VirtualQGeoCodingManagerEngine*>(self));
    if (vqgeocodingmanagerengine && vqgeocodingmanagerengine->isVirtualQGeoCodingManagerEngine) {
        vqgeocodingmanagerengine->setQGeoCodingManagerEngine_IsSignalConnected_Callback(reinterpret_cast<VirtualQGeoCodingManagerEngine::QGeoCodingManagerEngine_IsSignalConnected_Callback>(slot));
    }
}

void QGeoCodingManagerEngine_Delete(QGeoCodingManagerEngine* self) {
    delete self;
}
