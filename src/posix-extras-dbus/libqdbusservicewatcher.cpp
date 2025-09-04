#include <QChildEvent>
#include <QDBusConnection>
#include <QDBusServiceWatcher>
#include <QEvent>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <qdbusservicewatcher.h>
#include "libqdbusservicewatcher.h"
#include "libqdbusservicewatcher.hxx"

QDBusServiceWatcher* QDBusServiceWatcher_new() {
    return new VirtualQDBusServiceWatcher();
}

QDBusServiceWatcher* QDBusServiceWatcher_new2(const libqt_string service, const QDBusConnection* connection) {
    QString service_QString = QString::fromUtf8(service.data, service.len);
    return new VirtualQDBusServiceWatcher(service_QString, *connection);
}

QDBusServiceWatcher* QDBusServiceWatcher_new3(QObject* parent) {
    return new VirtualQDBusServiceWatcher(parent);
}

QDBusServiceWatcher* QDBusServiceWatcher_new4(const libqt_string service, const QDBusConnection* connection, int watchMode) {
    QString service_QString = QString::fromUtf8(service.data, service.len);
    return new VirtualQDBusServiceWatcher(service_QString, *connection, static_cast<QDBusServiceWatcher::WatchMode>(watchMode));
}

QDBusServiceWatcher* QDBusServiceWatcher_new5(const libqt_string service, const QDBusConnection* connection, int watchMode, QObject* parent) {
    QString service_QString = QString::fromUtf8(service.data, service.len);
    return new VirtualQDBusServiceWatcher(service_QString, *connection, static_cast<QDBusServiceWatcher::WatchMode>(watchMode), parent);
}

QMetaObject* QDBusServiceWatcher_MetaObject(const QDBusServiceWatcher* self) {
    return (QMetaObject*)self->metaObject();
}

void* QDBusServiceWatcher_Metacast(QDBusServiceWatcher* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QDBusServiceWatcher_Metacall(QDBusServiceWatcher* self, int param1, int param2, void** param3) {
    auto* vqdbusservicewatcher = dynamic_cast<VirtualQDBusServiceWatcher*>(self);
    if (vqdbusservicewatcher && vqdbusservicewatcher->isVirtualQDBusServiceWatcher) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQDBusServiceWatcher*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QDBusServiceWatcher_Tr(const char* s) {
    QString _ret = QDBusServiceWatcher::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_list /* of libqt_string */ QDBusServiceWatcher_WatchedServices(const QDBusServiceWatcher* self) {
    QList<QString> _ret = self->watchedServices();
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

void QDBusServiceWatcher_SetWatchedServices(QDBusServiceWatcher* self, const libqt_list /* of libqt_string */ services) {
    QList<QString> services_QList;
    services_QList.reserve(services.len);
    libqt_string* services_arr = static_cast<libqt_string*>(services.data);
    for (size_t i = 0; i < services.len; ++i) {
        QString services_arr_i_QString = QString::fromUtf8(services_arr[i].data, services_arr[i].len);
        services_QList.push_back(services_arr_i_QString);
    }
    self->setWatchedServices(services_QList);
}

void QDBusServiceWatcher_AddWatchedService(QDBusServiceWatcher* self, const libqt_string newService) {
    QString newService_QString = QString::fromUtf8(newService.data, newService.len);
    self->addWatchedService(newService_QString);
}

bool QDBusServiceWatcher_RemoveWatchedService(QDBusServiceWatcher* self, const libqt_string service) {
    QString service_QString = QString::fromUtf8(service.data, service.len);
    return self->removeWatchedService(service_QString);
}

int QDBusServiceWatcher_WatchMode(const QDBusServiceWatcher* self) {
    return static_cast<int>(self->watchMode());
}

void QDBusServiceWatcher_SetWatchMode(QDBusServiceWatcher* self, int mode) {
    self->setWatchMode(static_cast<QDBusServiceWatcher::WatchMode>(mode));
}

QDBusConnection* QDBusServiceWatcher_Connection(const QDBusServiceWatcher* self) {
    return new QDBusConnection(self->connection());
}

void QDBusServiceWatcher_SetConnection(QDBusServiceWatcher* self, const QDBusConnection* connection) {
    self->setConnection(*connection);
}

void QDBusServiceWatcher_ServiceRegistered(QDBusServiceWatcher* self, const libqt_string service) {
    QString service_QString = QString::fromUtf8(service.data, service.len);
    self->serviceRegistered(service_QString);
}

void QDBusServiceWatcher_Connect_ServiceRegistered(QDBusServiceWatcher* self, intptr_t slot) {
    void (*slotFunc)(QDBusServiceWatcher*, const char*) = reinterpret_cast<void (*)(QDBusServiceWatcher*, const char*)>(slot);
    QDBusServiceWatcher::connect(self, &QDBusServiceWatcher::serviceRegistered, [self, slotFunc](const QString& service) {
        const QString service_ret = service;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray service_b = service_ret.toUtf8();
        const char* service_str = static_cast<const char*>(malloc(service_b.length() + 1));
        memcpy((void*)service_str, service_b.data(), service_b.length());
        ((char*)service_str)[service_b.length()] = '\0';
        const char* sigval1 = service_str;
        slotFunc(self, sigval1);
        libqt_free(service_str);
    });
}

void QDBusServiceWatcher_ServiceUnregistered(QDBusServiceWatcher* self, const libqt_string service) {
    QString service_QString = QString::fromUtf8(service.data, service.len);
    self->serviceUnregistered(service_QString);
}

void QDBusServiceWatcher_Connect_ServiceUnregistered(QDBusServiceWatcher* self, intptr_t slot) {
    void (*slotFunc)(QDBusServiceWatcher*, const char*) = reinterpret_cast<void (*)(QDBusServiceWatcher*, const char*)>(slot);
    QDBusServiceWatcher::connect(self, &QDBusServiceWatcher::serviceUnregistered, [self, slotFunc](const QString& service) {
        const QString service_ret = service;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray service_b = service_ret.toUtf8();
        const char* service_str = static_cast<const char*>(malloc(service_b.length() + 1));
        memcpy((void*)service_str, service_b.data(), service_b.length());
        ((char*)service_str)[service_b.length()] = '\0';
        const char* sigval1 = service_str;
        slotFunc(self, sigval1);
        libqt_free(service_str);
    });
}

void QDBusServiceWatcher_ServiceOwnerChanged(QDBusServiceWatcher* self, const libqt_string service, const libqt_string oldOwner, const libqt_string newOwner) {
    QString service_QString = QString::fromUtf8(service.data, service.len);
    QString oldOwner_QString = QString::fromUtf8(oldOwner.data, oldOwner.len);
    QString newOwner_QString = QString::fromUtf8(newOwner.data, newOwner.len);
    self->serviceOwnerChanged(service_QString, oldOwner_QString, newOwner_QString);
}

void QDBusServiceWatcher_Connect_ServiceOwnerChanged(QDBusServiceWatcher* self, intptr_t slot) {
    void (*slotFunc)(QDBusServiceWatcher*, const char*, const char*, const char*) = reinterpret_cast<void (*)(QDBusServiceWatcher*, const char*, const char*, const char*)>(slot);
    QDBusServiceWatcher::connect(self, &QDBusServiceWatcher::serviceOwnerChanged, [self, slotFunc](const QString& service, const QString& oldOwner, const QString& newOwner) {
        const QString service_ret = service;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray service_b = service_ret.toUtf8();
        const char* service_str = static_cast<const char*>(malloc(service_b.length() + 1));
        memcpy((void*)service_str, service_b.data(), service_b.length());
        ((char*)service_str)[service_b.length()] = '\0';
        const char* sigval1 = service_str;
        const QString oldOwner_ret = oldOwner;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray oldOwner_b = oldOwner_ret.toUtf8();
        const char* oldOwner_str = static_cast<const char*>(malloc(oldOwner_b.length() + 1));
        memcpy((void*)oldOwner_str, oldOwner_b.data(), oldOwner_b.length());
        ((char*)oldOwner_str)[oldOwner_b.length()] = '\0';
        const char* sigval2 = oldOwner_str;
        const QString newOwner_ret = newOwner;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray newOwner_b = newOwner_ret.toUtf8();
        const char* newOwner_str = static_cast<const char*>(malloc(newOwner_b.length() + 1));
        memcpy((void*)newOwner_str, newOwner_b.data(), newOwner_b.length());
        ((char*)newOwner_str)[newOwner_b.length()] = '\0';
        const char* sigval3 = newOwner_str;
        slotFunc(self, sigval1, sigval2, sigval3);
        libqt_free(service_str);
        libqt_free(oldOwner_str);
        libqt_free(newOwner_str);
    });
}

libqt_string QDBusServiceWatcher_Tr2(const char* s, const char* c) {
    QString _ret = QDBusServiceWatcher::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QDBusServiceWatcher_Tr3(const char* s, const char* c, int n) {
    QString _ret = QDBusServiceWatcher::tr(s, c, static_cast<int>(n));
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
int QDBusServiceWatcher_QBaseMetacall(QDBusServiceWatcher* self, int param1, int param2, void** param3) {
    auto* vqdbusservicewatcher = dynamic_cast<VirtualQDBusServiceWatcher*>(self);
    if (vqdbusservicewatcher && vqdbusservicewatcher->isVirtualQDBusServiceWatcher) {
        vqdbusservicewatcher->setQDBusServiceWatcher_Metacall_IsBase(true);
        return vqdbusservicewatcher->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->QDBusServiceWatcher::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void QDBusServiceWatcher_OnMetacall(QDBusServiceWatcher* self, intptr_t slot) {
    auto* vqdbusservicewatcher = dynamic_cast<VirtualQDBusServiceWatcher*>(self);
    if (vqdbusservicewatcher && vqdbusservicewatcher->isVirtualQDBusServiceWatcher) {
        vqdbusservicewatcher->setQDBusServiceWatcher_Metacall_Callback(reinterpret_cast<VirtualQDBusServiceWatcher::QDBusServiceWatcher_Metacall_Callback>(slot));
    }
}

// Derived class handler implementation
bool QDBusServiceWatcher_Event(QDBusServiceWatcher* self, QEvent* event) {
    auto* vqdbusservicewatcher = dynamic_cast<VirtualQDBusServiceWatcher*>(self);
    if (vqdbusservicewatcher && vqdbusservicewatcher->isVirtualQDBusServiceWatcher) {
        return vqdbusservicewatcher->event(event);
    } else {
        return self->QDBusServiceWatcher::event(event);
    }
}

// Base class handler implementation
bool QDBusServiceWatcher_QBaseEvent(QDBusServiceWatcher* self, QEvent* event) {
    auto* vqdbusservicewatcher = dynamic_cast<VirtualQDBusServiceWatcher*>(self);
    if (vqdbusservicewatcher && vqdbusservicewatcher->isVirtualQDBusServiceWatcher) {
        vqdbusservicewatcher->setQDBusServiceWatcher_Event_IsBase(true);
        return vqdbusservicewatcher->event(event);
    } else {
        return self->QDBusServiceWatcher::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDBusServiceWatcher_OnEvent(QDBusServiceWatcher* self, intptr_t slot) {
    auto* vqdbusservicewatcher = dynamic_cast<VirtualQDBusServiceWatcher*>(self);
    if (vqdbusservicewatcher && vqdbusservicewatcher->isVirtualQDBusServiceWatcher) {
        vqdbusservicewatcher->setQDBusServiceWatcher_Event_Callback(reinterpret_cast<VirtualQDBusServiceWatcher::QDBusServiceWatcher_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QDBusServiceWatcher_EventFilter(QDBusServiceWatcher* self, QObject* watched, QEvent* event) {
    auto* vqdbusservicewatcher = dynamic_cast<VirtualQDBusServiceWatcher*>(self);
    if (vqdbusservicewatcher && vqdbusservicewatcher->isVirtualQDBusServiceWatcher) {
        return vqdbusservicewatcher->eventFilter(watched, event);
    } else {
        return self->QDBusServiceWatcher::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QDBusServiceWatcher_QBaseEventFilter(QDBusServiceWatcher* self, QObject* watched, QEvent* event) {
    auto* vqdbusservicewatcher = dynamic_cast<VirtualQDBusServiceWatcher*>(self);
    if (vqdbusservicewatcher && vqdbusservicewatcher->isVirtualQDBusServiceWatcher) {
        vqdbusservicewatcher->setQDBusServiceWatcher_EventFilter_IsBase(true);
        return vqdbusservicewatcher->eventFilter(watched, event);
    } else {
        return self->QDBusServiceWatcher::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDBusServiceWatcher_OnEventFilter(QDBusServiceWatcher* self, intptr_t slot) {
    auto* vqdbusservicewatcher = dynamic_cast<VirtualQDBusServiceWatcher*>(self);
    if (vqdbusservicewatcher && vqdbusservicewatcher->isVirtualQDBusServiceWatcher) {
        vqdbusservicewatcher->setQDBusServiceWatcher_EventFilter_Callback(reinterpret_cast<VirtualQDBusServiceWatcher::QDBusServiceWatcher_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QDBusServiceWatcher_TimerEvent(QDBusServiceWatcher* self, QTimerEvent* event) {
    auto* vqdbusservicewatcher = dynamic_cast<VirtualQDBusServiceWatcher*>(self);
    if (vqdbusservicewatcher && vqdbusservicewatcher->isVirtualQDBusServiceWatcher) {
        vqdbusservicewatcher->timerEvent(event);
    } else {
        ((VirtualQDBusServiceWatcher*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QDBusServiceWatcher_QBaseTimerEvent(QDBusServiceWatcher* self, QTimerEvent* event) {
    auto* vqdbusservicewatcher = dynamic_cast<VirtualQDBusServiceWatcher*>(self);
    if (vqdbusservicewatcher && vqdbusservicewatcher->isVirtualQDBusServiceWatcher) {
        vqdbusservicewatcher->setQDBusServiceWatcher_TimerEvent_IsBase(true);
        vqdbusservicewatcher->timerEvent(event);
    } else {
        ((VirtualQDBusServiceWatcher*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDBusServiceWatcher_OnTimerEvent(QDBusServiceWatcher* self, intptr_t slot) {
    auto* vqdbusservicewatcher = dynamic_cast<VirtualQDBusServiceWatcher*>(self);
    if (vqdbusservicewatcher && vqdbusservicewatcher->isVirtualQDBusServiceWatcher) {
        vqdbusservicewatcher->setQDBusServiceWatcher_TimerEvent_Callback(reinterpret_cast<VirtualQDBusServiceWatcher::QDBusServiceWatcher_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDBusServiceWatcher_ChildEvent(QDBusServiceWatcher* self, QChildEvent* event) {
    auto* vqdbusservicewatcher = dynamic_cast<VirtualQDBusServiceWatcher*>(self);
    if (vqdbusservicewatcher && vqdbusservicewatcher->isVirtualQDBusServiceWatcher) {
        vqdbusservicewatcher->childEvent(event);
    } else {
        ((VirtualQDBusServiceWatcher*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QDBusServiceWatcher_QBaseChildEvent(QDBusServiceWatcher* self, QChildEvent* event) {
    auto* vqdbusservicewatcher = dynamic_cast<VirtualQDBusServiceWatcher*>(self);
    if (vqdbusservicewatcher && vqdbusservicewatcher->isVirtualQDBusServiceWatcher) {
        vqdbusservicewatcher->setQDBusServiceWatcher_ChildEvent_IsBase(true);
        vqdbusservicewatcher->childEvent(event);
    } else {
        ((VirtualQDBusServiceWatcher*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDBusServiceWatcher_OnChildEvent(QDBusServiceWatcher* self, intptr_t slot) {
    auto* vqdbusservicewatcher = dynamic_cast<VirtualQDBusServiceWatcher*>(self);
    if (vqdbusservicewatcher && vqdbusservicewatcher->isVirtualQDBusServiceWatcher) {
        vqdbusservicewatcher->setQDBusServiceWatcher_ChildEvent_Callback(reinterpret_cast<VirtualQDBusServiceWatcher::QDBusServiceWatcher_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDBusServiceWatcher_CustomEvent(QDBusServiceWatcher* self, QEvent* event) {
    auto* vqdbusservicewatcher = dynamic_cast<VirtualQDBusServiceWatcher*>(self);
    if (vqdbusservicewatcher && vqdbusservicewatcher->isVirtualQDBusServiceWatcher) {
        vqdbusservicewatcher->customEvent(event);
    } else {
        ((VirtualQDBusServiceWatcher*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QDBusServiceWatcher_QBaseCustomEvent(QDBusServiceWatcher* self, QEvent* event) {
    auto* vqdbusservicewatcher = dynamic_cast<VirtualQDBusServiceWatcher*>(self);
    if (vqdbusservicewatcher && vqdbusservicewatcher->isVirtualQDBusServiceWatcher) {
        vqdbusservicewatcher->setQDBusServiceWatcher_CustomEvent_IsBase(true);
        vqdbusservicewatcher->customEvent(event);
    } else {
        ((VirtualQDBusServiceWatcher*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDBusServiceWatcher_OnCustomEvent(QDBusServiceWatcher* self, intptr_t slot) {
    auto* vqdbusservicewatcher = dynamic_cast<VirtualQDBusServiceWatcher*>(self);
    if (vqdbusservicewatcher && vqdbusservicewatcher->isVirtualQDBusServiceWatcher) {
        vqdbusservicewatcher->setQDBusServiceWatcher_CustomEvent_Callback(reinterpret_cast<VirtualQDBusServiceWatcher::QDBusServiceWatcher_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDBusServiceWatcher_ConnectNotify(QDBusServiceWatcher* self, const QMetaMethod* signal) {
    auto* vqdbusservicewatcher = dynamic_cast<VirtualQDBusServiceWatcher*>(self);
    if (vqdbusservicewatcher && vqdbusservicewatcher->isVirtualQDBusServiceWatcher) {
        vqdbusservicewatcher->connectNotify(*signal);
    } else {
        ((VirtualQDBusServiceWatcher*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QDBusServiceWatcher_QBaseConnectNotify(QDBusServiceWatcher* self, const QMetaMethod* signal) {
    auto* vqdbusservicewatcher = dynamic_cast<VirtualQDBusServiceWatcher*>(self);
    if (vqdbusservicewatcher && vqdbusservicewatcher->isVirtualQDBusServiceWatcher) {
        vqdbusservicewatcher->setQDBusServiceWatcher_ConnectNotify_IsBase(true);
        vqdbusservicewatcher->connectNotify(*signal);
    } else {
        ((VirtualQDBusServiceWatcher*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QDBusServiceWatcher_OnConnectNotify(QDBusServiceWatcher* self, intptr_t slot) {
    auto* vqdbusservicewatcher = dynamic_cast<VirtualQDBusServiceWatcher*>(self);
    if (vqdbusservicewatcher && vqdbusservicewatcher->isVirtualQDBusServiceWatcher) {
        vqdbusservicewatcher->setQDBusServiceWatcher_ConnectNotify_Callback(reinterpret_cast<VirtualQDBusServiceWatcher::QDBusServiceWatcher_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QDBusServiceWatcher_DisconnectNotify(QDBusServiceWatcher* self, const QMetaMethod* signal) {
    auto* vqdbusservicewatcher = dynamic_cast<VirtualQDBusServiceWatcher*>(self);
    if (vqdbusservicewatcher && vqdbusservicewatcher->isVirtualQDBusServiceWatcher) {
        vqdbusservicewatcher->disconnectNotify(*signal);
    } else {
        ((VirtualQDBusServiceWatcher*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QDBusServiceWatcher_QBaseDisconnectNotify(QDBusServiceWatcher* self, const QMetaMethod* signal) {
    auto* vqdbusservicewatcher = dynamic_cast<VirtualQDBusServiceWatcher*>(self);
    if (vqdbusservicewatcher && vqdbusservicewatcher->isVirtualQDBusServiceWatcher) {
        vqdbusservicewatcher->setQDBusServiceWatcher_DisconnectNotify_IsBase(true);
        vqdbusservicewatcher->disconnectNotify(*signal);
    } else {
        ((VirtualQDBusServiceWatcher*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QDBusServiceWatcher_OnDisconnectNotify(QDBusServiceWatcher* self, intptr_t slot) {
    auto* vqdbusservicewatcher = dynamic_cast<VirtualQDBusServiceWatcher*>(self);
    if (vqdbusservicewatcher && vqdbusservicewatcher->isVirtualQDBusServiceWatcher) {
        vqdbusservicewatcher->setQDBusServiceWatcher_DisconnectNotify_Callback(reinterpret_cast<VirtualQDBusServiceWatcher::QDBusServiceWatcher_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QDBusServiceWatcher_Sender(const QDBusServiceWatcher* self) {
    auto* vqdbusservicewatcher = const_cast<VirtualQDBusServiceWatcher*>(dynamic_cast<const VirtualQDBusServiceWatcher*>(self));
    if (vqdbusservicewatcher && vqdbusservicewatcher->isVirtualQDBusServiceWatcher) {
        return vqdbusservicewatcher->sender();
    } else {
        return ((VirtualQDBusServiceWatcher*)self)->sender();
    }
}

// Base class handler implementation
QObject* QDBusServiceWatcher_QBaseSender(const QDBusServiceWatcher* self) {
    auto* vqdbusservicewatcher = const_cast<VirtualQDBusServiceWatcher*>(dynamic_cast<const VirtualQDBusServiceWatcher*>(self));
    if (vqdbusservicewatcher && vqdbusservicewatcher->isVirtualQDBusServiceWatcher) {
        vqdbusservicewatcher->setQDBusServiceWatcher_Sender_IsBase(true);
        return vqdbusservicewatcher->sender();
    } else {
        return ((VirtualQDBusServiceWatcher*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QDBusServiceWatcher_OnSender(const QDBusServiceWatcher* self, intptr_t slot) {
    auto* vqdbusservicewatcher = const_cast<VirtualQDBusServiceWatcher*>(dynamic_cast<const VirtualQDBusServiceWatcher*>(self));
    if (vqdbusservicewatcher && vqdbusservicewatcher->isVirtualQDBusServiceWatcher) {
        vqdbusservicewatcher->setQDBusServiceWatcher_Sender_Callback(reinterpret_cast<VirtualQDBusServiceWatcher::QDBusServiceWatcher_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QDBusServiceWatcher_SenderSignalIndex(const QDBusServiceWatcher* self) {
    auto* vqdbusservicewatcher = const_cast<VirtualQDBusServiceWatcher*>(dynamic_cast<const VirtualQDBusServiceWatcher*>(self));
    if (vqdbusservicewatcher && vqdbusservicewatcher->isVirtualQDBusServiceWatcher) {
        return vqdbusservicewatcher->senderSignalIndex();
    } else {
        return ((VirtualQDBusServiceWatcher*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QDBusServiceWatcher_QBaseSenderSignalIndex(const QDBusServiceWatcher* self) {
    auto* vqdbusservicewatcher = const_cast<VirtualQDBusServiceWatcher*>(dynamic_cast<const VirtualQDBusServiceWatcher*>(self));
    if (vqdbusservicewatcher && vqdbusservicewatcher->isVirtualQDBusServiceWatcher) {
        vqdbusservicewatcher->setQDBusServiceWatcher_SenderSignalIndex_IsBase(true);
        return vqdbusservicewatcher->senderSignalIndex();
    } else {
        return ((VirtualQDBusServiceWatcher*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QDBusServiceWatcher_OnSenderSignalIndex(const QDBusServiceWatcher* self, intptr_t slot) {
    auto* vqdbusservicewatcher = const_cast<VirtualQDBusServiceWatcher*>(dynamic_cast<const VirtualQDBusServiceWatcher*>(self));
    if (vqdbusservicewatcher && vqdbusservicewatcher->isVirtualQDBusServiceWatcher) {
        vqdbusservicewatcher->setQDBusServiceWatcher_SenderSignalIndex_Callback(reinterpret_cast<VirtualQDBusServiceWatcher::QDBusServiceWatcher_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QDBusServiceWatcher_Receivers(const QDBusServiceWatcher* self, const char* signal) {
    auto* vqdbusservicewatcher = const_cast<VirtualQDBusServiceWatcher*>(dynamic_cast<const VirtualQDBusServiceWatcher*>(self));
    if (vqdbusservicewatcher && vqdbusservicewatcher->isVirtualQDBusServiceWatcher) {
        return vqdbusservicewatcher->receivers(signal);
    } else {
        return ((VirtualQDBusServiceWatcher*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QDBusServiceWatcher_QBaseReceivers(const QDBusServiceWatcher* self, const char* signal) {
    auto* vqdbusservicewatcher = const_cast<VirtualQDBusServiceWatcher*>(dynamic_cast<const VirtualQDBusServiceWatcher*>(self));
    if (vqdbusservicewatcher && vqdbusservicewatcher->isVirtualQDBusServiceWatcher) {
        vqdbusservicewatcher->setQDBusServiceWatcher_Receivers_IsBase(true);
        return vqdbusservicewatcher->receivers(signal);
    } else {
        return ((VirtualQDBusServiceWatcher*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QDBusServiceWatcher_OnReceivers(const QDBusServiceWatcher* self, intptr_t slot) {
    auto* vqdbusservicewatcher = const_cast<VirtualQDBusServiceWatcher*>(dynamic_cast<const VirtualQDBusServiceWatcher*>(self));
    if (vqdbusservicewatcher && vqdbusservicewatcher->isVirtualQDBusServiceWatcher) {
        vqdbusservicewatcher->setQDBusServiceWatcher_Receivers_Callback(reinterpret_cast<VirtualQDBusServiceWatcher::QDBusServiceWatcher_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QDBusServiceWatcher_IsSignalConnected(const QDBusServiceWatcher* self, const QMetaMethod* signal) {
    auto* vqdbusservicewatcher = const_cast<VirtualQDBusServiceWatcher*>(dynamic_cast<const VirtualQDBusServiceWatcher*>(self));
    if (vqdbusservicewatcher && vqdbusservicewatcher->isVirtualQDBusServiceWatcher) {
        return vqdbusservicewatcher->isSignalConnected(*signal);
    } else {
        return ((VirtualQDBusServiceWatcher*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QDBusServiceWatcher_QBaseIsSignalConnected(const QDBusServiceWatcher* self, const QMetaMethod* signal) {
    auto* vqdbusservicewatcher = const_cast<VirtualQDBusServiceWatcher*>(dynamic_cast<const VirtualQDBusServiceWatcher*>(self));
    if (vqdbusservicewatcher && vqdbusservicewatcher->isVirtualQDBusServiceWatcher) {
        vqdbusservicewatcher->setQDBusServiceWatcher_IsSignalConnected_IsBase(true);
        return vqdbusservicewatcher->isSignalConnected(*signal);
    } else {
        return ((VirtualQDBusServiceWatcher*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QDBusServiceWatcher_OnIsSignalConnected(const QDBusServiceWatcher* self, intptr_t slot) {
    auto* vqdbusservicewatcher = const_cast<VirtualQDBusServiceWatcher*>(dynamic_cast<const VirtualQDBusServiceWatcher*>(self));
    if (vqdbusservicewatcher && vqdbusservicewatcher->isVirtualQDBusServiceWatcher) {
        vqdbusservicewatcher->setQDBusServiceWatcher_IsSignalConnected_Callback(reinterpret_cast<VirtualQDBusServiceWatcher::QDBusServiceWatcher_IsSignalConnected_Callback>(slot));
    }
}

void QDBusServiceWatcher_Delete(QDBusServiceWatcher* self) {
    delete self;
}
