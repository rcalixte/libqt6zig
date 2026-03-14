#include <QBluetoothAddress>
#include <QBluetoothServiceDiscoveryAgent>
#include <QBluetoothServiceInfo>
#include <QBluetoothUuid>
#include <QChildEvent>
#include <QEvent>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <qbluetoothservicediscoveryagent.h>
#include "libqbluetoothservicediscoveryagent.h"
#include "libqbluetoothservicediscoveryagent.hxx"

QBluetoothServiceDiscoveryAgent* QBluetoothServiceDiscoveryAgent_new() {
    return new VirtualQBluetoothServiceDiscoveryAgent();
}

QBluetoothServiceDiscoveryAgent* QBluetoothServiceDiscoveryAgent_new2(const QBluetoothAddress* deviceAdapter) {
    return new VirtualQBluetoothServiceDiscoveryAgent(*deviceAdapter);
}

QBluetoothServiceDiscoveryAgent* QBluetoothServiceDiscoveryAgent_new3(QObject* parent) {
    return new VirtualQBluetoothServiceDiscoveryAgent(parent);
}

QBluetoothServiceDiscoveryAgent* QBluetoothServiceDiscoveryAgent_new4(const QBluetoothAddress* deviceAdapter, QObject* parent) {
    return new VirtualQBluetoothServiceDiscoveryAgent(*deviceAdapter, parent);
}

QMetaObject* QBluetoothServiceDiscoveryAgent_MetaObject(const QBluetoothServiceDiscoveryAgent* self) {
    auto* vqbluetoothservicediscoveryagent = dynamic_cast<const VirtualQBluetoothServiceDiscoveryAgent*>(self);
    if (vqbluetoothservicediscoveryagent && vqbluetoothservicediscoveryagent->isVirtualQBluetoothServiceDiscoveryAgent) {
        return (QMetaObject*)self->metaObject();
    } else {
        return (QMetaObject*)((VirtualQBluetoothServiceDiscoveryAgent*)self)->metaObject();
    }
}

void* QBluetoothServiceDiscoveryAgent_Metacast(QBluetoothServiceDiscoveryAgent* self, const char* param1) {
    auto* vqbluetoothservicediscoveryagent = dynamic_cast<VirtualQBluetoothServiceDiscoveryAgent*>(self);
    if (vqbluetoothservicediscoveryagent && vqbluetoothservicediscoveryagent->isVirtualQBluetoothServiceDiscoveryAgent) {
        return self->qt_metacast(param1);
    } else {
        return ((VirtualQBluetoothServiceDiscoveryAgent*)self)->qt_metacast(param1);
    }
}

int QBluetoothServiceDiscoveryAgent_Metacall(QBluetoothServiceDiscoveryAgent* self, int param1, int param2, void** param3) {
    auto* vqbluetoothservicediscoveryagent = dynamic_cast<VirtualQBluetoothServiceDiscoveryAgent*>(self);
    if (vqbluetoothservicediscoveryagent && vqbluetoothservicediscoveryagent->isVirtualQBluetoothServiceDiscoveryAgent) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQBluetoothServiceDiscoveryAgent*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

bool QBluetoothServiceDiscoveryAgent_IsActive(const QBluetoothServiceDiscoveryAgent* self) {
    return self->isActive();
}

int QBluetoothServiceDiscoveryAgent_Error(const QBluetoothServiceDiscoveryAgent* self) {
    return static_cast<int>(self->error());
}

libqt_string QBluetoothServiceDiscoveryAgent_ErrorString(const QBluetoothServiceDiscoveryAgent* self) {
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

libqt_list /* of QBluetoothServiceInfo* */ QBluetoothServiceDiscoveryAgent_DiscoveredServices(const QBluetoothServiceDiscoveryAgent* self) {
    QList<QBluetoothServiceInfo> _ret = self->discoveredServices();
    // Convert QList<> from C++ memory to manually-managed C memory
    QBluetoothServiceInfo** _arr = static_cast<QBluetoothServiceInfo**>(malloc(sizeof(QBluetoothServiceInfo*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QBluetoothServiceInfo(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void QBluetoothServiceDiscoveryAgent_SetUuidFilter(QBluetoothServiceDiscoveryAgent* self, const libqt_list /* of QBluetoothUuid* */ uuids) {
    QList<QBluetoothUuid> uuids_QList;
    uuids_QList.reserve(uuids.len);
    QBluetoothUuid** uuids_arr = static_cast<QBluetoothUuid**>(uuids.data);
    for (size_t i = 0; i < uuids.len; ++i) {
        uuids_QList.push_back(*(uuids_arr[i]));
    }
    self->setUuidFilter(uuids_QList);
}

void QBluetoothServiceDiscoveryAgent_SetUuidFilter2(QBluetoothServiceDiscoveryAgent* self, const QBluetoothUuid* uuid) {
    self->setUuidFilter(*uuid);
}

libqt_list /* of QBluetoothUuid* */ QBluetoothServiceDiscoveryAgent_UuidFilter(const QBluetoothServiceDiscoveryAgent* self) {
    QList<QBluetoothUuid> _ret = self->uuidFilter();
    // Convert QList<> from C++ memory to manually-managed C memory
    QBluetoothUuid** _arr = static_cast<QBluetoothUuid**>(malloc(sizeof(QBluetoothUuid*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QBluetoothUuid(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

bool QBluetoothServiceDiscoveryAgent_SetRemoteAddress(QBluetoothServiceDiscoveryAgent* self, const QBluetoothAddress* address) {
    return self->setRemoteAddress(*address);
}

QBluetoothAddress* QBluetoothServiceDiscoveryAgent_RemoteAddress(const QBluetoothServiceDiscoveryAgent* self) {
    return new QBluetoothAddress(self->remoteAddress());
}

void QBluetoothServiceDiscoveryAgent_Start(QBluetoothServiceDiscoveryAgent* self) {
    self->start();
}

void QBluetoothServiceDiscoveryAgent_Stop(QBluetoothServiceDiscoveryAgent* self) {
    self->stop();
}

void QBluetoothServiceDiscoveryAgent_Clear(QBluetoothServiceDiscoveryAgent* self) {
    self->clear();
}

void QBluetoothServiceDiscoveryAgent_ServiceDiscovered(QBluetoothServiceDiscoveryAgent* self, const QBluetoothServiceInfo* info) {
    self->serviceDiscovered(*info);
}

void QBluetoothServiceDiscoveryAgent_Connect_ServiceDiscovered(QBluetoothServiceDiscoveryAgent* self, intptr_t slot) {
    void (*slotFunc)(QBluetoothServiceDiscoveryAgent*, QBluetoothServiceInfo*) = reinterpret_cast<void (*)(QBluetoothServiceDiscoveryAgent*, QBluetoothServiceInfo*)>(slot);
    QBluetoothServiceDiscoveryAgent::connect(self, &QBluetoothServiceDiscoveryAgent::serviceDiscovered, [self, slotFunc](const QBluetoothServiceInfo& info) {
        const QBluetoothServiceInfo& info_ret = info;
        // Cast returned reference into pointer
        QBluetoothServiceInfo* sigval1 = const_cast<QBluetoothServiceInfo*>(&info_ret);
        slotFunc(self, sigval1);
    });
}

void QBluetoothServiceDiscoveryAgent_Finished(QBluetoothServiceDiscoveryAgent* self) {
    self->finished();
}

void QBluetoothServiceDiscoveryAgent_Connect_Finished(QBluetoothServiceDiscoveryAgent* self, intptr_t slot) {
    void (*slotFunc)(QBluetoothServiceDiscoveryAgent*) = reinterpret_cast<void (*)(QBluetoothServiceDiscoveryAgent*)>(slot);
    QBluetoothServiceDiscoveryAgent::connect(self, &QBluetoothServiceDiscoveryAgent::finished, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QBluetoothServiceDiscoveryAgent_Canceled(QBluetoothServiceDiscoveryAgent* self) {
    self->canceled();
}

void QBluetoothServiceDiscoveryAgent_Connect_Canceled(QBluetoothServiceDiscoveryAgent* self, intptr_t slot) {
    void (*slotFunc)(QBluetoothServiceDiscoveryAgent*) = reinterpret_cast<void (*)(QBluetoothServiceDiscoveryAgent*)>(slot);
    QBluetoothServiceDiscoveryAgent::connect(self, &QBluetoothServiceDiscoveryAgent::canceled, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QBluetoothServiceDiscoveryAgent_ErrorOccurred(QBluetoothServiceDiscoveryAgent* self, int errorVal) {
    self->errorOccurred(static_cast<QBluetoothServiceDiscoveryAgent::Error>(errorVal));
}

void QBluetoothServiceDiscoveryAgent_Connect_ErrorOccurred(QBluetoothServiceDiscoveryAgent* self, intptr_t slot) {
    void (*slotFunc)(QBluetoothServiceDiscoveryAgent*, int) = reinterpret_cast<void (*)(QBluetoothServiceDiscoveryAgent*, int)>(slot);
    QBluetoothServiceDiscoveryAgent::connect(self, &QBluetoothServiceDiscoveryAgent::errorOccurred, [self, slotFunc](QBluetoothServiceDiscoveryAgent::Error errorVal) {
        int sigval1 = static_cast<int>(errorVal);
        slotFunc(self, sigval1);
    });
}

void QBluetoothServiceDiscoveryAgent_Start1(QBluetoothServiceDiscoveryAgent* self, int mode) {
    self->start(static_cast<QBluetoothServiceDiscoveryAgent::DiscoveryMode>(mode));
}

// Base class handler implementation
QMetaObject* QBluetoothServiceDiscoveryAgent_SuperMetaObject(const QBluetoothServiceDiscoveryAgent* self) {
    auto* vqbluetoothservicediscoveryagent = const_cast<VirtualQBluetoothServiceDiscoveryAgent*>(dynamic_cast<const VirtualQBluetoothServiceDiscoveryAgent*>(self));
    if (vqbluetoothservicediscoveryagent && vqbluetoothservicediscoveryagent->isVirtualQBluetoothServiceDiscoveryAgent) {
        vqbluetoothservicediscoveryagent->setQBluetoothServiceDiscoveryAgent_MetaObject_IsBase(true);
        return (QMetaObject*)vqbluetoothservicediscoveryagent->metaObject();
    } else {
        return (QMetaObject*)self->QBluetoothServiceDiscoveryAgent::metaObject();
    }
}

// Auxiliary method to allow providing re-implementation
void QBluetoothServiceDiscoveryAgent_OnMetaObject(const QBluetoothServiceDiscoveryAgent* self, intptr_t slot) {
    auto* vqbluetoothservicediscoveryagent = const_cast<VirtualQBluetoothServiceDiscoveryAgent*>(dynamic_cast<const VirtualQBluetoothServiceDiscoveryAgent*>(self));
    if (vqbluetoothservicediscoveryagent && vqbluetoothservicediscoveryagent->isVirtualQBluetoothServiceDiscoveryAgent) {
        vqbluetoothservicediscoveryagent->setQBluetoothServiceDiscoveryAgent_MetaObject_Callback(reinterpret_cast<VirtualQBluetoothServiceDiscoveryAgent::QBluetoothServiceDiscoveryAgent_MetaObject_Callback>(slot));
    }
}

// Base class handler implementation
void* QBluetoothServiceDiscoveryAgent_SuperMetacast(QBluetoothServiceDiscoveryAgent* self, const char* param1) {
    auto* vqbluetoothservicediscoveryagent = dynamic_cast<VirtualQBluetoothServiceDiscoveryAgent*>(self);
    if (vqbluetoothservicediscoveryagent && vqbluetoothservicediscoveryagent->isVirtualQBluetoothServiceDiscoveryAgent) {
        vqbluetoothservicediscoveryagent->setQBluetoothServiceDiscoveryAgent_Metacast_IsBase(true);
        return vqbluetoothservicediscoveryagent->qt_metacast(param1);
    } else {
        return self->QBluetoothServiceDiscoveryAgent::qt_metacast(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QBluetoothServiceDiscoveryAgent_OnMetacast(QBluetoothServiceDiscoveryAgent* self, intptr_t slot) {
    auto* vqbluetoothservicediscoveryagent = dynamic_cast<VirtualQBluetoothServiceDiscoveryAgent*>(self);
    if (vqbluetoothservicediscoveryagent && vqbluetoothservicediscoveryagent->isVirtualQBluetoothServiceDiscoveryAgent) {
        vqbluetoothservicediscoveryagent->setQBluetoothServiceDiscoveryAgent_Metacast_Callback(reinterpret_cast<VirtualQBluetoothServiceDiscoveryAgent::QBluetoothServiceDiscoveryAgent_Metacast_Callback>(slot));
    }
}

// Base class handler implementation
int QBluetoothServiceDiscoveryAgent_SuperMetacall(QBluetoothServiceDiscoveryAgent* self, int param1, int param2, void** param3) {
    auto* vqbluetoothservicediscoveryagent = dynamic_cast<VirtualQBluetoothServiceDiscoveryAgent*>(self);
    if (vqbluetoothservicediscoveryagent && vqbluetoothservicediscoveryagent->isVirtualQBluetoothServiceDiscoveryAgent) {
        vqbluetoothservicediscoveryagent->setQBluetoothServiceDiscoveryAgent_Metacall_IsBase(true);
        return vqbluetoothservicediscoveryagent->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->QBluetoothServiceDiscoveryAgent::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void QBluetoothServiceDiscoveryAgent_OnMetacall(QBluetoothServiceDiscoveryAgent* self, intptr_t slot) {
    auto* vqbluetoothservicediscoveryagent = dynamic_cast<VirtualQBluetoothServiceDiscoveryAgent*>(self);
    if (vqbluetoothservicediscoveryagent && vqbluetoothservicediscoveryagent->isVirtualQBluetoothServiceDiscoveryAgent) {
        vqbluetoothservicediscoveryagent->setQBluetoothServiceDiscoveryAgent_Metacall_Callback(reinterpret_cast<VirtualQBluetoothServiceDiscoveryAgent::QBluetoothServiceDiscoveryAgent_Metacall_Callback>(slot));
    }
}

// Derived class handler implementation
bool QBluetoothServiceDiscoveryAgent_Event(QBluetoothServiceDiscoveryAgent* self, QEvent* event) {
    auto* vqbluetoothservicediscoveryagent = dynamic_cast<VirtualQBluetoothServiceDiscoveryAgent*>(self);
    if (vqbluetoothservicediscoveryagent && vqbluetoothservicediscoveryagent->isVirtualQBluetoothServiceDiscoveryAgent) {
        return vqbluetoothservicediscoveryagent->event(event);
    } else {
        return self->QBluetoothServiceDiscoveryAgent::event(event);
    }
}

// Base class handler implementation
bool QBluetoothServiceDiscoveryAgent_SuperEvent(QBluetoothServiceDiscoveryAgent* self, QEvent* event) {
    auto* vqbluetoothservicediscoveryagent = dynamic_cast<VirtualQBluetoothServiceDiscoveryAgent*>(self);
    if (vqbluetoothservicediscoveryagent && vqbluetoothservicediscoveryagent->isVirtualQBluetoothServiceDiscoveryAgent) {
        vqbluetoothservicediscoveryagent->setQBluetoothServiceDiscoveryAgent_Event_IsBase(true);
        return vqbluetoothservicediscoveryagent->event(event);
    } else {
        return self->QBluetoothServiceDiscoveryAgent::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QBluetoothServiceDiscoveryAgent_OnEvent(QBluetoothServiceDiscoveryAgent* self, intptr_t slot) {
    auto* vqbluetoothservicediscoveryagent = dynamic_cast<VirtualQBluetoothServiceDiscoveryAgent*>(self);
    if (vqbluetoothservicediscoveryagent && vqbluetoothservicediscoveryagent->isVirtualQBluetoothServiceDiscoveryAgent) {
        vqbluetoothservicediscoveryagent->setQBluetoothServiceDiscoveryAgent_Event_Callback(reinterpret_cast<VirtualQBluetoothServiceDiscoveryAgent::QBluetoothServiceDiscoveryAgent_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QBluetoothServiceDiscoveryAgent_EventFilter(QBluetoothServiceDiscoveryAgent* self, QObject* watched, QEvent* event) {
    auto* vqbluetoothservicediscoveryagent = dynamic_cast<VirtualQBluetoothServiceDiscoveryAgent*>(self);
    if (vqbluetoothservicediscoveryagent && vqbluetoothservicediscoveryagent->isVirtualQBluetoothServiceDiscoveryAgent) {
        return vqbluetoothservicediscoveryagent->eventFilter(watched, event);
    } else {
        return self->QBluetoothServiceDiscoveryAgent::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QBluetoothServiceDiscoveryAgent_SuperEventFilter(QBluetoothServiceDiscoveryAgent* self, QObject* watched, QEvent* event) {
    auto* vqbluetoothservicediscoveryagent = dynamic_cast<VirtualQBluetoothServiceDiscoveryAgent*>(self);
    if (vqbluetoothservicediscoveryagent && vqbluetoothservicediscoveryagent->isVirtualQBluetoothServiceDiscoveryAgent) {
        vqbluetoothservicediscoveryagent->setQBluetoothServiceDiscoveryAgent_EventFilter_IsBase(true);
        return vqbluetoothservicediscoveryagent->eventFilter(watched, event);
    } else {
        return self->QBluetoothServiceDiscoveryAgent::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QBluetoothServiceDiscoveryAgent_OnEventFilter(QBluetoothServiceDiscoveryAgent* self, intptr_t slot) {
    auto* vqbluetoothservicediscoveryagent = dynamic_cast<VirtualQBluetoothServiceDiscoveryAgent*>(self);
    if (vqbluetoothservicediscoveryagent && vqbluetoothservicediscoveryagent->isVirtualQBluetoothServiceDiscoveryAgent) {
        vqbluetoothservicediscoveryagent->setQBluetoothServiceDiscoveryAgent_EventFilter_Callback(reinterpret_cast<VirtualQBluetoothServiceDiscoveryAgent::QBluetoothServiceDiscoveryAgent_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QBluetoothServiceDiscoveryAgent_TimerEvent(QBluetoothServiceDiscoveryAgent* self, QTimerEvent* event) {
    auto* vqbluetoothservicediscoveryagent = dynamic_cast<VirtualQBluetoothServiceDiscoveryAgent*>(self);
    if (vqbluetoothservicediscoveryagent && vqbluetoothservicediscoveryagent->isVirtualQBluetoothServiceDiscoveryAgent) {
        vqbluetoothservicediscoveryagent->timerEvent(event);
    } else {
        ((VirtualQBluetoothServiceDiscoveryAgent*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QBluetoothServiceDiscoveryAgent_SuperTimerEvent(QBluetoothServiceDiscoveryAgent* self, QTimerEvent* event) {
    auto* vqbluetoothservicediscoveryagent = dynamic_cast<VirtualQBluetoothServiceDiscoveryAgent*>(self);
    if (vqbluetoothservicediscoveryagent && vqbluetoothservicediscoveryagent->isVirtualQBluetoothServiceDiscoveryAgent) {
        vqbluetoothservicediscoveryagent->setQBluetoothServiceDiscoveryAgent_TimerEvent_IsBase(true);
        vqbluetoothservicediscoveryagent->timerEvent(event);
    } else {
        ((VirtualQBluetoothServiceDiscoveryAgent*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QBluetoothServiceDiscoveryAgent_OnTimerEvent(QBluetoothServiceDiscoveryAgent* self, intptr_t slot) {
    auto* vqbluetoothservicediscoveryagent = dynamic_cast<VirtualQBluetoothServiceDiscoveryAgent*>(self);
    if (vqbluetoothservicediscoveryagent && vqbluetoothservicediscoveryagent->isVirtualQBluetoothServiceDiscoveryAgent) {
        vqbluetoothservicediscoveryagent->setQBluetoothServiceDiscoveryAgent_TimerEvent_Callback(reinterpret_cast<VirtualQBluetoothServiceDiscoveryAgent::QBluetoothServiceDiscoveryAgent_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QBluetoothServiceDiscoveryAgent_ChildEvent(QBluetoothServiceDiscoveryAgent* self, QChildEvent* event) {
    auto* vqbluetoothservicediscoveryagent = dynamic_cast<VirtualQBluetoothServiceDiscoveryAgent*>(self);
    if (vqbluetoothservicediscoveryagent && vqbluetoothservicediscoveryagent->isVirtualQBluetoothServiceDiscoveryAgent) {
        vqbluetoothservicediscoveryagent->childEvent(event);
    } else {
        ((VirtualQBluetoothServiceDiscoveryAgent*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QBluetoothServiceDiscoveryAgent_SuperChildEvent(QBluetoothServiceDiscoveryAgent* self, QChildEvent* event) {
    auto* vqbluetoothservicediscoveryagent = dynamic_cast<VirtualQBluetoothServiceDiscoveryAgent*>(self);
    if (vqbluetoothservicediscoveryagent && vqbluetoothservicediscoveryagent->isVirtualQBluetoothServiceDiscoveryAgent) {
        vqbluetoothservicediscoveryagent->setQBluetoothServiceDiscoveryAgent_ChildEvent_IsBase(true);
        vqbluetoothservicediscoveryagent->childEvent(event);
    } else {
        ((VirtualQBluetoothServiceDiscoveryAgent*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QBluetoothServiceDiscoveryAgent_OnChildEvent(QBluetoothServiceDiscoveryAgent* self, intptr_t slot) {
    auto* vqbluetoothservicediscoveryagent = dynamic_cast<VirtualQBluetoothServiceDiscoveryAgent*>(self);
    if (vqbluetoothservicediscoveryagent && vqbluetoothservicediscoveryagent->isVirtualQBluetoothServiceDiscoveryAgent) {
        vqbluetoothservicediscoveryagent->setQBluetoothServiceDiscoveryAgent_ChildEvent_Callback(reinterpret_cast<VirtualQBluetoothServiceDiscoveryAgent::QBluetoothServiceDiscoveryAgent_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QBluetoothServiceDiscoveryAgent_CustomEvent(QBluetoothServiceDiscoveryAgent* self, QEvent* event) {
    auto* vqbluetoothservicediscoveryagent = dynamic_cast<VirtualQBluetoothServiceDiscoveryAgent*>(self);
    if (vqbluetoothservicediscoveryagent && vqbluetoothservicediscoveryagent->isVirtualQBluetoothServiceDiscoveryAgent) {
        vqbluetoothservicediscoveryagent->customEvent(event);
    } else {
        ((VirtualQBluetoothServiceDiscoveryAgent*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QBluetoothServiceDiscoveryAgent_SuperCustomEvent(QBluetoothServiceDiscoveryAgent* self, QEvent* event) {
    auto* vqbluetoothservicediscoveryagent = dynamic_cast<VirtualQBluetoothServiceDiscoveryAgent*>(self);
    if (vqbluetoothservicediscoveryagent && vqbluetoothservicediscoveryagent->isVirtualQBluetoothServiceDiscoveryAgent) {
        vqbluetoothservicediscoveryagent->setQBluetoothServiceDiscoveryAgent_CustomEvent_IsBase(true);
        vqbluetoothservicediscoveryagent->customEvent(event);
    } else {
        ((VirtualQBluetoothServiceDiscoveryAgent*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QBluetoothServiceDiscoveryAgent_OnCustomEvent(QBluetoothServiceDiscoveryAgent* self, intptr_t slot) {
    auto* vqbluetoothservicediscoveryagent = dynamic_cast<VirtualQBluetoothServiceDiscoveryAgent*>(self);
    if (vqbluetoothservicediscoveryagent && vqbluetoothservicediscoveryagent->isVirtualQBluetoothServiceDiscoveryAgent) {
        vqbluetoothservicediscoveryagent->setQBluetoothServiceDiscoveryAgent_CustomEvent_Callback(reinterpret_cast<VirtualQBluetoothServiceDiscoveryAgent::QBluetoothServiceDiscoveryAgent_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QBluetoothServiceDiscoveryAgent_ConnectNotify(QBluetoothServiceDiscoveryAgent* self, const QMetaMethod* signal) {
    auto* vqbluetoothservicediscoveryagent = dynamic_cast<VirtualQBluetoothServiceDiscoveryAgent*>(self);
    if (vqbluetoothservicediscoveryagent && vqbluetoothservicediscoveryagent->isVirtualQBluetoothServiceDiscoveryAgent) {
        vqbluetoothservicediscoveryagent->connectNotify(*signal);
    } else {
        ((VirtualQBluetoothServiceDiscoveryAgent*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QBluetoothServiceDiscoveryAgent_SuperConnectNotify(QBluetoothServiceDiscoveryAgent* self, const QMetaMethod* signal) {
    auto* vqbluetoothservicediscoveryagent = dynamic_cast<VirtualQBluetoothServiceDiscoveryAgent*>(self);
    if (vqbluetoothservicediscoveryagent && vqbluetoothservicediscoveryagent->isVirtualQBluetoothServiceDiscoveryAgent) {
        vqbluetoothservicediscoveryagent->setQBluetoothServiceDiscoveryAgent_ConnectNotify_IsBase(true);
        vqbluetoothservicediscoveryagent->connectNotify(*signal);
    } else {
        ((VirtualQBluetoothServiceDiscoveryAgent*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QBluetoothServiceDiscoveryAgent_OnConnectNotify(QBluetoothServiceDiscoveryAgent* self, intptr_t slot) {
    auto* vqbluetoothservicediscoveryagent = dynamic_cast<VirtualQBluetoothServiceDiscoveryAgent*>(self);
    if (vqbluetoothservicediscoveryagent && vqbluetoothservicediscoveryagent->isVirtualQBluetoothServiceDiscoveryAgent) {
        vqbluetoothservicediscoveryagent->setQBluetoothServiceDiscoveryAgent_ConnectNotify_Callback(reinterpret_cast<VirtualQBluetoothServiceDiscoveryAgent::QBluetoothServiceDiscoveryAgent_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QBluetoothServiceDiscoveryAgent_DisconnectNotify(QBluetoothServiceDiscoveryAgent* self, const QMetaMethod* signal) {
    auto* vqbluetoothservicediscoveryagent = dynamic_cast<VirtualQBluetoothServiceDiscoveryAgent*>(self);
    if (vqbluetoothservicediscoveryagent && vqbluetoothservicediscoveryagent->isVirtualQBluetoothServiceDiscoveryAgent) {
        vqbluetoothservicediscoveryagent->disconnectNotify(*signal);
    } else {
        ((VirtualQBluetoothServiceDiscoveryAgent*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QBluetoothServiceDiscoveryAgent_SuperDisconnectNotify(QBluetoothServiceDiscoveryAgent* self, const QMetaMethod* signal) {
    auto* vqbluetoothservicediscoveryagent = dynamic_cast<VirtualQBluetoothServiceDiscoveryAgent*>(self);
    if (vqbluetoothservicediscoveryagent && vqbluetoothservicediscoveryagent->isVirtualQBluetoothServiceDiscoveryAgent) {
        vqbluetoothservicediscoveryagent->setQBluetoothServiceDiscoveryAgent_DisconnectNotify_IsBase(true);
        vqbluetoothservicediscoveryagent->disconnectNotify(*signal);
    } else {
        ((VirtualQBluetoothServiceDiscoveryAgent*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QBluetoothServiceDiscoveryAgent_OnDisconnectNotify(QBluetoothServiceDiscoveryAgent* self, intptr_t slot) {
    auto* vqbluetoothservicediscoveryagent = dynamic_cast<VirtualQBluetoothServiceDiscoveryAgent*>(self);
    if (vqbluetoothservicediscoveryagent && vqbluetoothservicediscoveryagent->isVirtualQBluetoothServiceDiscoveryAgent) {
        vqbluetoothservicediscoveryagent->setQBluetoothServiceDiscoveryAgent_DisconnectNotify_Callback(reinterpret_cast<VirtualQBluetoothServiceDiscoveryAgent::QBluetoothServiceDiscoveryAgent_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QBluetoothServiceDiscoveryAgent_Sender(const QBluetoothServiceDiscoveryAgent* self) {
    auto* vqbluetoothservicediscoveryagent = const_cast<VirtualQBluetoothServiceDiscoveryAgent*>(dynamic_cast<const VirtualQBluetoothServiceDiscoveryAgent*>(self));
    if (vqbluetoothservicediscoveryagent && vqbluetoothservicediscoveryagent->isVirtualQBluetoothServiceDiscoveryAgent) {
        return vqbluetoothservicediscoveryagent->sender();
    } else {
        return ((VirtualQBluetoothServiceDiscoveryAgent*)self)->sender();
    }
}

// Base class handler implementation
QObject* QBluetoothServiceDiscoveryAgent_SuperSender(const QBluetoothServiceDiscoveryAgent* self) {
    auto* vqbluetoothservicediscoveryagent = const_cast<VirtualQBluetoothServiceDiscoveryAgent*>(dynamic_cast<const VirtualQBluetoothServiceDiscoveryAgent*>(self));
    if (vqbluetoothservicediscoveryagent && vqbluetoothservicediscoveryagent->isVirtualQBluetoothServiceDiscoveryAgent) {
        vqbluetoothservicediscoveryagent->setQBluetoothServiceDiscoveryAgent_Sender_IsBase(true);
        return vqbluetoothservicediscoveryagent->sender();
    } else {
        return ((VirtualQBluetoothServiceDiscoveryAgent*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QBluetoothServiceDiscoveryAgent_OnSender(const QBluetoothServiceDiscoveryAgent* self, intptr_t slot) {
    auto* vqbluetoothservicediscoveryagent = const_cast<VirtualQBluetoothServiceDiscoveryAgent*>(dynamic_cast<const VirtualQBluetoothServiceDiscoveryAgent*>(self));
    if (vqbluetoothservicediscoveryagent && vqbluetoothservicediscoveryagent->isVirtualQBluetoothServiceDiscoveryAgent) {
        vqbluetoothservicediscoveryagent->setQBluetoothServiceDiscoveryAgent_Sender_Callback(reinterpret_cast<VirtualQBluetoothServiceDiscoveryAgent::QBluetoothServiceDiscoveryAgent_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QBluetoothServiceDiscoveryAgent_SenderSignalIndex(const QBluetoothServiceDiscoveryAgent* self) {
    auto* vqbluetoothservicediscoveryagent = const_cast<VirtualQBluetoothServiceDiscoveryAgent*>(dynamic_cast<const VirtualQBluetoothServiceDiscoveryAgent*>(self));
    if (vqbluetoothservicediscoveryagent && vqbluetoothservicediscoveryagent->isVirtualQBluetoothServiceDiscoveryAgent) {
        return vqbluetoothservicediscoveryagent->senderSignalIndex();
    } else {
        return ((VirtualQBluetoothServiceDiscoveryAgent*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QBluetoothServiceDiscoveryAgent_SuperSenderSignalIndex(const QBluetoothServiceDiscoveryAgent* self) {
    auto* vqbluetoothservicediscoveryagent = const_cast<VirtualQBluetoothServiceDiscoveryAgent*>(dynamic_cast<const VirtualQBluetoothServiceDiscoveryAgent*>(self));
    if (vqbluetoothservicediscoveryagent && vqbluetoothservicediscoveryagent->isVirtualQBluetoothServiceDiscoveryAgent) {
        vqbluetoothservicediscoveryagent->setQBluetoothServiceDiscoveryAgent_SenderSignalIndex_IsBase(true);
        return vqbluetoothservicediscoveryagent->senderSignalIndex();
    } else {
        return ((VirtualQBluetoothServiceDiscoveryAgent*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QBluetoothServiceDiscoveryAgent_OnSenderSignalIndex(const QBluetoothServiceDiscoveryAgent* self, intptr_t slot) {
    auto* vqbluetoothservicediscoveryagent = const_cast<VirtualQBluetoothServiceDiscoveryAgent*>(dynamic_cast<const VirtualQBluetoothServiceDiscoveryAgent*>(self));
    if (vqbluetoothservicediscoveryagent && vqbluetoothservicediscoveryagent->isVirtualQBluetoothServiceDiscoveryAgent) {
        vqbluetoothservicediscoveryagent->setQBluetoothServiceDiscoveryAgent_SenderSignalIndex_Callback(reinterpret_cast<VirtualQBluetoothServiceDiscoveryAgent::QBluetoothServiceDiscoveryAgent_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QBluetoothServiceDiscoveryAgent_Receivers(const QBluetoothServiceDiscoveryAgent* self, const char* signal) {
    auto* vqbluetoothservicediscoveryagent = const_cast<VirtualQBluetoothServiceDiscoveryAgent*>(dynamic_cast<const VirtualQBluetoothServiceDiscoveryAgent*>(self));
    if (vqbluetoothservicediscoveryagent && vqbluetoothservicediscoveryagent->isVirtualQBluetoothServiceDiscoveryAgent) {
        return vqbluetoothservicediscoveryagent->receivers(signal);
    } else {
        return ((VirtualQBluetoothServiceDiscoveryAgent*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QBluetoothServiceDiscoveryAgent_SuperReceivers(const QBluetoothServiceDiscoveryAgent* self, const char* signal) {
    auto* vqbluetoothservicediscoveryagent = const_cast<VirtualQBluetoothServiceDiscoveryAgent*>(dynamic_cast<const VirtualQBluetoothServiceDiscoveryAgent*>(self));
    if (vqbluetoothservicediscoveryagent && vqbluetoothservicediscoveryagent->isVirtualQBluetoothServiceDiscoveryAgent) {
        vqbluetoothservicediscoveryagent->setQBluetoothServiceDiscoveryAgent_Receivers_IsBase(true);
        return vqbluetoothservicediscoveryagent->receivers(signal);
    } else {
        return ((VirtualQBluetoothServiceDiscoveryAgent*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QBluetoothServiceDiscoveryAgent_OnReceivers(const QBluetoothServiceDiscoveryAgent* self, intptr_t slot) {
    auto* vqbluetoothservicediscoveryagent = const_cast<VirtualQBluetoothServiceDiscoveryAgent*>(dynamic_cast<const VirtualQBluetoothServiceDiscoveryAgent*>(self));
    if (vqbluetoothservicediscoveryagent && vqbluetoothservicediscoveryagent->isVirtualQBluetoothServiceDiscoveryAgent) {
        vqbluetoothservicediscoveryagent->setQBluetoothServiceDiscoveryAgent_Receivers_Callback(reinterpret_cast<VirtualQBluetoothServiceDiscoveryAgent::QBluetoothServiceDiscoveryAgent_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QBluetoothServiceDiscoveryAgent_IsSignalConnected(const QBluetoothServiceDiscoveryAgent* self, const QMetaMethod* signal) {
    auto* vqbluetoothservicediscoveryagent = const_cast<VirtualQBluetoothServiceDiscoveryAgent*>(dynamic_cast<const VirtualQBluetoothServiceDiscoveryAgent*>(self));
    if (vqbluetoothservicediscoveryagent && vqbluetoothservicediscoveryagent->isVirtualQBluetoothServiceDiscoveryAgent) {
        return vqbluetoothservicediscoveryagent->isSignalConnected(*signal);
    } else {
        return ((VirtualQBluetoothServiceDiscoveryAgent*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QBluetoothServiceDiscoveryAgent_SuperIsSignalConnected(const QBluetoothServiceDiscoveryAgent* self, const QMetaMethod* signal) {
    auto* vqbluetoothservicediscoveryagent = const_cast<VirtualQBluetoothServiceDiscoveryAgent*>(dynamic_cast<const VirtualQBluetoothServiceDiscoveryAgent*>(self));
    if (vqbluetoothservicediscoveryagent && vqbluetoothservicediscoveryagent->isVirtualQBluetoothServiceDiscoveryAgent) {
        vqbluetoothservicediscoveryagent->setQBluetoothServiceDiscoveryAgent_IsSignalConnected_IsBase(true);
        return vqbluetoothservicediscoveryagent->isSignalConnected(*signal);
    } else {
        return ((VirtualQBluetoothServiceDiscoveryAgent*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QBluetoothServiceDiscoveryAgent_OnIsSignalConnected(const QBluetoothServiceDiscoveryAgent* self, intptr_t slot) {
    auto* vqbluetoothservicediscoveryagent = const_cast<VirtualQBluetoothServiceDiscoveryAgent*>(dynamic_cast<const VirtualQBluetoothServiceDiscoveryAgent*>(self));
    if (vqbluetoothservicediscoveryagent && vqbluetoothservicediscoveryagent->isVirtualQBluetoothServiceDiscoveryAgent) {
        vqbluetoothservicediscoveryagent->setQBluetoothServiceDiscoveryAgent_IsSignalConnected_Callback(reinterpret_cast<VirtualQBluetoothServiceDiscoveryAgent::QBluetoothServiceDiscoveryAgent_IsSignalConnected_Callback>(slot));
    }
}

void QBluetoothServiceDiscoveryAgent_Delete(QBluetoothServiceDiscoveryAgent* self) {
    delete self;
}
