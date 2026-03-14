#include <QBluetoothAddress>
#include <QBluetoothDeviceDiscoveryAgent>
#include <QBluetoothDeviceInfo>
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
#include <qbluetoothdevicediscoveryagent.h>
#include "libqbluetoothdevicediscoveryagent.h"
#include "libqbluetoothdevicediscoveryagent.hxx"

QBluetoothDeviceDiscoveryAgent* QBluetoothDeviceDiscoveryAgent_new() {
    return new VirtualQBluetoothDeviceDiscoveryAgent();
}

QBluetoothDeviceDiscoveryAgent* QBluetoothDeviceDiscoveryAgent_new2(const QBluetoothAddress* deviceAdapter) {
    return new VirtualQBluetoothDeviceDiscoveryAgent(*deviceAdapter);
}

QBluetoothDeviceDiscoveryAgent* QBluetoothDeviceDiscoveryAgent_new3(QObject* parent) {
    return new VirtualQBluetoothDeviceDiscoveryAgent(parent);
}

QBluetoothDeviceDiscoveryAgent* QBluetoothDeviceDiscoveryAgent_new4(const QBluetoothAddress* deviceAdapter, QObject* parent) {
    return new VirtualQBluetoothDeviceDiscoveryAgent(*deviceAdapter, parent);
}

QMetaObject* QBluetoothDeviceDiscoveryAgent_MetaObject(const QBluetoothDeviceDiscoveryAgent* self) {
    auto* vqbluetoothdevicediscoveryagent = dynamic_cast<const VirtualQBluetoothDeviceDiscoveryAgent*>(self);
    if (vqbluetoothdevicediscoveryagent && vqbluetoothdevicediscoveryagent->isVirtualQBluetoothDeviceDiscoveryAgent) {
        return (QMetaObject*)self->metaObject();
    } else {
        return (QMetaObject*)((VirtualQBluetoothDeviceDiscoveryAgent*)self)->metaObject();
    }
}

void* QBluetoothDeviceDiscoveryAgent_Metacast(QBluetoothDeviceDiscoveryAgent* self, const char* param1) {
    auto* vqbluetoothdevicediscoveryagent = dynamic_cast<VirtualQBluetoothDeviceDiscoveryAgent*>(self);
    if (vqbluetoothdevicediscoveryagent && vqbluetoothdevicediscoveryagent->isVirtualQBluetoothDeviceDiscoveryAgent) {
        return self->qt_metacast(param1);
    } else {
        return ((VirtualQBluetoothDeviceDiscoveryAgent*)self)->qt_metacast(param1);
    }
}

int QBluetoothDeviceDiscoveryAgent_Metacall(QBluetoothDeviceDiscoveryAgent* self, int param1, int param2, void** param3) {
    auto* vqbluetoothdevicediscoveryagent = dynamic_cast<VirtualQBluetoothDeviceDiscoveryAgent*>(self);
    if (vqbluetoothdevicediscoveryagent && vqbluetoothdevicediscoveryagent->isVirtualQBluetoothDeviceDiscoveryAgent) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQBluetoothDeviceDiscoveryAgent*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

bool QBluetoothDeviceDiscoveryAgent_IsActive(const QBluetoothDeviceDiscoveryAgent* self) {
    return self->isActive();
}

int QBluetoothDeviceDiscoveryAgent_Error(const QBluetoothDeviceDiscoveryAgent* self) {
    return static_cast<int>(self->error());
}

libqt_string QBluetoothDeviceDiscoveryAgent_ErrorString(const QBluetoothDeviceDiscoveryAgent* self) {
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

libqt_list /* of QBluetoothDeviceInfo* */ QBluetoothDeviceDiscoveryAgent_DiscoveredDevices(const QBluetoothDeviceDiscoveryAgent* self) {
    QList<QBluetoothDeviceInfo> _ret = self->discoveredDevices();
    // Convert QList<> from C++ memory to manually-managed C memory
    QBluetoothDeviceInfo** _arr = static_cast<QBluetoothDeviceInfo**>(malloc(sizeof(QBluetoothDeviceInfo*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QBluetoothDeviceInfo(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void QBluetoothDeviceDiscoveryAgent_SetLowEnergyDiscoveryTimeout(QBluetoothDeviceDiscoveryAgent* self, int msTimeout) {
    self->setLowEnergyDiscoveryTimeout(static_cast<int>(msTimeout));
}

int QBluetoothDeviceDiscoveryAgent_LowEnergyDiscoveryTimeout(const QBluetoothDeviceDiscoveryAgent* self) {
    return self->lowEnergyDiscoveryTimeout();
}

int QBluetoothDeviceDiscoveryAgent_SupportedDiscoveryMethods() {
    return static_cast<int>(QBluetoothDeviceDiscoveryAgent::supportedDiscoveryMethods());
}

void QBluetoothDeviceDiscoveryAgent_Start(QBluetoothDeviceDiscoveryAgent* self) {
    self->start();
}

void QBluetoothDeviceDiscoveryAgent_Start2(QBluetoothDeviceDiscoveryAgent* self, int method) {
    self->start(static_cast<QBluetoothDeviceDiscoveryAgent::DiscoveryMethods>(method));
}

void QBluetoothDeviceDiscoveryAgent_Stop(QBluetoothDeviceDiscoveryAgent* self) {
    self->stop();
}

void QBluetoothDeviceDiscoveryAgent_DeviceDiscovered(QBluetoothDeviceDiscoveryAgent* self, const QBluetoothDeviceInfo* info) {
    self->deviceDiscovered(*info);
}

void QBluetoothDeviceDiscoveryAgent_Connect_DeviceDiscovered(QBluetoothDeviceDiscoveryAgent* self, intptr_t slot) {
    void (*slotFunc)(QBluetoothDeviceDiscoveryAgent*, QBluetoothDeviceInfo*) = reinterpret_cast<void (*)(QBluetoothDeviceDiscoveryAgent*, QBluetoothDeviceInfo*)>(slot);
    QBluetoothDeviceDiscoveryAgent::connect(self, &QBluetoothDeviceDiscoveryAgent::deviceDiscovered, [self, slotFunc](const QBluetoothDeviceInfo& info) {
        const QBluetoothDeviceInfo& info_ret = info;
        // Cast returned reference into pointer
        QBluetoothDeviceInfo* sigval1 = const_cast<QBluetoothDeviceInfo*>(&info_ret);
        slotFunc(self, sigval1);
    });
}

void QBluetoothDeviceDiscoveryAgent_DeviceUpdated(QBluetoothDeviceDiscoveryAgent* self, const QBluetoothDeviceInfo* info, int updatedFields) {
    self->deviceUpdated(*info, static_cast<QBluetoothDeviceInfo::Fields>(updatedFields));
}

void QBluetoothDeviceDiscoveryAgent_Connect_DeviceUpdated(QBluetoothDeviceDiscoveryAgent* self, intptr_t slot) {
    void (*slotFunc)(QBluetoothDeviceDiscoveryAgent*, QBluetoothDeviceInfo*, int) = reinterpret_cast<void (*)(QBluetoothDeviceDiscoveryAgent*, QBluetoothDeviceInfo*, int)>(slot);
    QBluetoothDeviceDiscoveryAgent::connect(self, &QBluetoothDeviceDiscoveryAgent::deviceUpdated, [self, slotFunc](const QBluetoothDeviceInfo& info, QBluetoothDeviceInfo::Fields updatedFields) {
        const QBluetoothDeviceInfo& info_ret = info;
        // Cast returned reference into pointer
        QBluetoothDeviceInfo* sigval1 = const_cast<QBluetoothDeviceInfo*>(&info_ret);
        int sigval2 = static_cast<int>(updatedFields);
        slotFunc(self, sigval1, sigval2);
    });
}

void QBluetoothDeviceDiscoveryAgent_Finished(QBluetoothDeviceDiscoveryAgent* self) {
    self->finished();
}

void QBluetoothDeviceDiscoveryAgent_Connect_Finished(QBluetoothDeviceDiscoveryAgent* self, intptr_t slot) {
    void (*slotFunc)(QBluetoothDeviceDiscoveryAgent*) = reinterpret_cast<void (*)(QBluetoothDeviceDiscoveryAgent*)>(slot);
    QBluetoothDeviceDiscoveryAgent::connect(self, &QBluetoothDeviceDiscoveryAgent::finished, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QBluetoothDeviceDiscoveryAgent_ErrorOccurred(QBluetoothDeviceDiscoveryAgent* self, int errorVal) {
    self->errorOccurred(static_cast<QBluetoothDeviceDiscoveryAgent::Error>(errorVal));
}

void QBluetoothDeviceDiscoveryAgent_Connect_ErrorOccurred(QBluetoothDeviceDiscoveryAgent* self, intptr_t slot) {
    void (*slotFunc)(QBluetoothDeviceDiscoveryAgent*, int) = reinterpret_cast<void (*)(QBluetoothDeviceDiscoveryAgent*, int)>(slot);
    QBluetoothDeviceDiscoveryAgent::connect(self, &QBluetoothDeviceDiscoveryAgent::errorOccurred, [self, slotFunc](QBluetoothDeviceDiscoveryAgent::Error errorVal) {
        int sigval1 = static_cast<int>(errorVal);
        slotFunc(self, sigval1);
    });
}

void QBluetoothDeviceDiscoveryAgent_Canceled(QBluetoothDeviceDiscoveryAgent* self) {
    self->canceled();
}

void QBluetoothDeviceDiscoveryAgent_Connect_Canceled(QBluetoothDeviceDiscoveryAgent* self, intptr_t slot) {
    void (*slotFunc)(QBluetoothDeviceDiscoveryAgent*) = reinterpret_cast<void (*)(QBluetoothDeviceDiscoveryAgent*)>(slot);
    QBluetoothDeviceDiscoveryAgent::connect(self, &QBluetoothDeviceDiscoveryAgent::canceled, [self, slotFunc]() {
        slotFunc(self);
    });
}

// Base class handler implementation
QMetaObject* QBluetoothDeviceDiscoveryAgent_SuperMetaObject(const QBluetoothDeviceDiscoveryAgent* self) {
    auto* vqbluetoothdevicediscoveryagent = const_cast<VirtualQBluetoothDeviceDiscoveryAgent*>(dynamic_cast<const VirtualQBluetoothDeviceDiscoveryAgent*>(self));
    if (vqbluetoothdevicediscoveryagent && vqbluetoothdevicediscoveryagent->isVirtualQBluetoothDeviceDiscoveryAgent) {
        vqbluetoothdevicediscoveryagent->setQBluetoothDeviceDiscoveryAgent_MetaObject_IsBase(true);
        return (QMetaObject*)vqbluetoothdevicediscoveryagent->metaObject();
    } else {
        return (QMetaObject*)self->QBluetoothDeviceDiscoveryAgent::metaObject();
    }
}

// Auxiliary method to allow providing re-implementation
void QBluetoothDeviceDiscoveryAgent_OnMetaObject(const QBluetoothDeviceDiscoveryAgent* self, intptr_t slot) {
    auto* vqbluetoothdevicediscoveryagent = const_cast<VirtualQBluetoothDeviceDiscoveryAgent*>(dynamic_cast<const VirtualQBluetoothDeviceDiscoveryAgent*>(self));
    if (vqbluetoothdevicediscoveryagent && vqbluetoothdevicediscoveryagent->isVirtualQBluetoothDeviceDiscoveryAgent) {
        vqbluetoothdevicediscoveryagent->setQBluetoothDeviceDiscoveryAgent_MetaObject_Callback(reinterpret_cast<VirtualQBluetoothDeviceDiscoveryAgent::QBluetoothDeviceDiscoveryAgent_MetaObject_Callback>(slot));
    }
}

// Base class handler implementation
void* QBluetoothDeviceDiscoveryAgent_SuperMetacast(QBluetoothDeviceDiscoveryAgent* self, const char* param1) {
    auto* vqbluetoothdevicediscoveryagent = dynamic_cast<VirtualQBluetoothDeviceDiscoveryAgent*>(self);
    if (vqbluetoothdevicediscoveryagent && vqbluetoothdevicediscoveryagent->isVirtualQBluetoothDeviceDiscoveryAgent) {
        vqbluetoothdevicediscoveryagent->setQBluetoothDeviceDiscoveryAgent_Metacast_IsBase(true);
        return vqbluetoothdevicediscoveryagent->qt_metacast(param1);
    } else {
        return self->QBluetoothDeviceDiscoveryAgent::qt_metacast(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QBluetoothDeviceDiscoveryAgent_OnMetacast(QBluetoothDeviceDiscoveryAgent* self, intptr_t slot) {
    auto* vqbluetoothdevicediscoveryagent = dynamic_cast<VirtualQBluetoothDeviceDiscoveryAgent*>(self);
    if (vqbluetoothdevicediscoveryagent && vqbluetoothdevicediscoveryagent->isVirtualQBluetoothDeviceDiscoveryAgent) {
        vqbluetoothdevicediscoveryagent->setQBluetoothDeviceDiscoveryAgent_Metacast_Callback(reinterpret_cast<VirtualQBluetoothDeviceDiscoveryAgent::QBluetoothDeviceDiscoveryAgent_Metacast_Callback>(slot));
    }
}

// Base class handler implementation
int QBluetoothDeviceDiscoveryAgent_SuperMetacall(QBluetoothDeviceDiscoveryAgent* self, int param1, int param2, void** param3) {
    auto* vqbluetoothdevicediscoveryagent = dynamic_cast<VirtualQBluetoothDeviceDiscoveryAgent*>(self);
    if (vqbluetoothdevicediscoveryagent && vqbluetoothdevicediscoveryagent->isVirtualQBluetoothDeviceDiscoveryAgent) {
        vqbluetoothdevicediscoveryagent->setQBluetoothDeviceDiscoveryAgent_Metacall_IsBase(true);
        return vqbluetoothdevicediscoveryagent->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->QBluetoothDeviceDiscoveryAgent::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void QBluetoothDeviceDiscoveryAgent_OnMetacall(QBluetoothDeviceDiscoveryAgent* self, intptr_t slot) {
    auto* vqbluetoothdevicediscoveryagent = dynamic_cast<VirtualQBluetoothDeviceDiscoveryAgent*>(self);
    if (vqbluetoothdevicediscoveryagent && vqbluetoothdevicediscoveryagent->isVirtualQBluetoothDeviceDiscoveryAgent) {
        vqbluetoothdevicediscoveryagent->setQBluetoothDeviceDiscoveryAgent_Metacall_Callback(reinterpret_cast<VirtualQBluetoothDeviceDiscoveryAgent::QBluetoothDeviceDiscoveryAgent_Metacall_Callback>(slot));
    }
}

// Derived class handler implementation
bool QBluetoothDeviceDiscoveryAgent_Event(QBluetoothDeviceDiscoveryAgent* self, QEvent* event) {
    auto* vqbluetoothdevicediscoveryagent = dynamic_cast<VirtualQBluetoothDeviceDiscoveryAgent*>(self);
    if (vqbluetoothdevicediscoveryagent && vqbluetoothdevicediscoveryagent->isVirtualQBluetoothDeviceDiscoveryAgent) {
        return vqbluetoothdevicediscoveryagent->event(event);
    } else {
        return self->QBluetoothDeviceDiscoveryAgent::event(event);
    }
}

// Base class handler implementation
bool QBluetoothDeviceDiscoveryAgent_SuperEvent(QBluetoothDeviceDiscoveryAgent* self, QEvent* event) {
    auto* vqbluetoothdevicediscoveryagent = dynamic_cast<VirtualQBluetoothDeviceDiscoveryAgent*>(self);
    if (vqbluetoothdevicediscoveryagent && vqbluetoothdevicediscoveryagent->isVirtualQBluetoothDeviceDiscoveryAgent) {
        vqbluetoothdevicediscoveryagent->setQBluetoothDeviceDiscoveryAgent_Event_IsBase(true);
        return vqbluetoothdevicediscoveryagent->event(event);
    } else {
        return self->QBluetoothDeviceDiscoveryAgent::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QBluetoothDeviceDiscoveryAgent_OnEvent(QBluetoothDeviceDiscoveryAgent* self, intptr_t slot) {
    auto* vqbluetoothdevicediscoveryagent = dynamic_cast<VirtualQBluetoothDeviceDiscoveryAgent*>(self);
    if (vqbluetoothdevicediscoveryagent && vqbluetoothdevicediscoveryagent->isVirtualQBluetoothDeviceDiscoveryAgent) {
        vqbluetoothdevicediscoveryagent->setQBluetoothDeviceDiscoveryAgent_Event_Callback(reinterpret_cast<VirtualQBluetoothDeviceDiscoveryAgent::QBluetoothDeviceDiscoveryAgent_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QBluetoothDeviceDiscoveryAgent_EventFilter(QBluetoothDeviceDiscoveryAgent* self, QObject* watched, QEvent* event) {
    auto* vqbluetoothdevicediscoveryagent = dynamic_cast<VirtualQBluetoothDeviceDiscoveryAgent*>(self);
    if (vqbluetoothdevicediscoveryagent && vqbluetoothdevicediscoveryagent->isVirtualQBluetoothDeviceDiscoveryAgent) {
        return vqbluetoothdevicediscoveryagent->eventFilter(watched, event);
    } else {
        return self->QBluetoothDeviceDiscoveryAgent::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QBluetoothDeviceDiscoveryAgent_SuperEventFilter(QBluetoothDeviceDiscoveryAgent* self, QObject* watched, QEvent* event) {
    auto* vqbluetoothdevicediscoveryagent = dynamic_cast<VirtualQBluetoothDeviceDiscoveryAgent*>(self);
    if (vqbluetoothdevicediscoveryagent && vqbluetoothdevicediscoveryagent->isVirtualQBluetoothDeviceDiscoveryAgent) {
        vqbluetoothdevicediscoveryagent->setQBluetoothDeviceDiscoveryAgent_EventFilter_IsBase(true);
        return vqbluetoothdevicediscoveryagent->eventFilter(watched, event);
    } else {
        return self->QBluetoothDeviceDiscoveryAgent::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QBluetoothDeviceDiscoveryAgent_OnEventFilter(QBluetoothDeviceDiscoveryAgent* self, intptr_t slot) {
    auto* vqbluetoothdevicediscoveryagent = dynamic_cast<VirtualQBluetoothDeviceDiscoveryAgent*>(self);
    if (vqbluetoothdevicediscoveryagent && vqbluetoothdevicediscoveryagent->isVirtualQBluetoothDeviceDiscoveryAgent) {
        vqbluetoothdevicediscoveryagent->setQBluetoothDeviceDiscoveryAgent_EventFilter_Callback(reinterpret_cast<VirtualQBluetoothDeviceDiscoveryAgent::QBluetoothDeviceDiscoveryAgent_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QBluetoothDeviceDiscoveryAgent_TimerEvent(QBluetoothDeviceDiscoveryAgent* self, QTimerEvent* event) {
    auto* vqbluetoothdevicediscoveryagent = dynamic_cast<VirtualQBluetoothDeviceDiscoveryAgent*>(self);
    if (vqbluetoothdevicediscoveryagent && vqbluetoothdevicediscoveryagent->isVirtualQBluetoothDeviceDiscoveryAgent) {
        vqbluetoothdevicediscoveryagent->timerEvent(event);
    } else {
        ((VirtualQBluetoothDeviceDiscoveryAgent*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QBluetoothDeviceDiscoveryAgent_SuperTimerEvent(QBluetoothDeviceDiscoveryAgent* self, QTimerEvent* event) {
    auto* vqbluetoothdevicediscoveryagent = dynamic_cast<VirtualQBluetoothDeviceDiscoveryAgent*>(self);
    if (vqbluetoothdevicediscoveryagent && vqbluetoothdevicediscoveryagent->isVirtualQBluetoothDeviceDiscoveryAgent) {
        vqbluetoothdevicediscoveryagent->setQBluetoothDeviceDiscoveryAgent_TimerEvent_IsBase(true);
        vqbluetoothdevicediscoveryagent->timerEvent(event);
    } else {
        ((VirtualQBluetoothDeviceDiscoveryAgent*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QBluetoothDeviceDiscoveryAgent_OnTimerEvent(QBluetoothDeviceDiscoveryAgent* self, intptr_t slot) {
    auto* vqbluetoothdevicediscoveryagent = dynamic_cast<VirtualQBluetoothDeviceDiscoveryAgent*>(self);
    if (vqbluetoothdevicediscoveryagent && vqbluetoothdevicediscoveryagent->isVirtualQBluetoothDeviceDiscoveryAgent) {
        vqbluetoothdevicediscoveryagent->setQBluetoothDeviceDiscoveryAgent_TimerEvent_Callback(reinterpret_cast<VirtualQBluetoothDeviceDiscoveryAgent::QBluetoothDeviceDiscoveryAgent_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QBluetoothDeviceDiscoveryAgent_ChildEvent(QBluetoothDeviceDiscoveryAgent* self, QChildEvent* event) {
    auto* vqbluetoothdevicediscoveryagent = dynamic_cast<VirtualQBluetoothDeviceDiscoveryAgent*>(self);
    if (vqbluetoothdevicediscoveryagent && vqbluetoothdevicediscoveryagent->isVirtualQBluetoothDeviceDiscoveryAgent) {
        vqbluetoothdevicediscoveryagent->childEvent(event);
    } else {
        ((VirtualQBluetoothDeviceDiscoveryAgent*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QBluetoothDeviceDiscoveryAgent_SuperChildEvent(QBluetoothDeviceDiscoveryAgent* self, QChildEvent* event) {
    auto* vqbluetoothdevicediscoveryagent = dynamic_cast<VirtualQBluetoothDeviceDiscoveryAgent*>(self);
    if (vqbluetoothdevicediscoveryagent && vqbluetoothdevicediscoveryagent->isVirtualQBluetoothDeviceDiscoveryAgent) {
        vqbluetoothdevicediscoveryagent->setQBluetoothDeviceDiscoveryAgent_ChildEvent_IsBase(true);
        vqbluetoothdevicediscoveryagent->childEvent(event);
    } else {
        ((VirtualQBluetoothDeviceDiscoveryAgent*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QBluetoothDeviceDiscoveryAgent_OnChildEvent(QBluetoothDeviceDiscoveryAgent* self, intptr_t slot) {
    auto* vqbluetoothdevicediscoveryagent = dynamic_cast<VirtualQBluetoothDeviceDiscoveryAgent*>(self);
    if (vqbluetoothdevicediscoveryagent && vqbluetoothdevicediscoveryagent->isVirtualQBluetoothDeviceDiscoveryAgent) {
        vqbluetoothdevicediscoveryagent->setQBluetoothDeviceDiscoveryAgent_ChildEvent_Callback(reinterpret_cast<VirtualQBluetoothDeviceDiscoveryAgent::QBluetoothDeviceDiscoveryAgent_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QBluetoothDeviceDiscoveryAgent_CustomEvent(QBluetoothDeviceDiscoveryAgent* self, QEvent* event) {
    auto* vqbluetoothdevicediscoveryagent = dynamic_cast<VirtualQBluetoothDeviceDiscoveryAgent*>(self);
    if (vqbluetoothdevicediscoveryagent && vqbluetoothdevicediscoveryagent->isVirtualQBluetoothDeviceDiscoveryAgent) {
        vqbluetoothdevicediscoveryagent->customEvent(event);
    } else {
        ((VirtualQBluetoothDeviceDiscoveryAgent*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QBluetoothDeviceDiscoveryAgent_SuperCustomEvent(QBluetoothDeviceDiscoveryAgent* self, QEvent* event) {
    auto* vqbluetoothdevicediscoveryagent = dynamic_cast<VirtualQBluetoothDeviceDiscoveryAgent*>(self);
    if (vqbluetoothdevicediscoveryagent && vqbluetoothdevicediscoveryagent->isVirtualQBluetoothDeviceDiscoveryAgent) {
        vqbluetoothdevicediscoveryagent->setQBluetoothDeviceDiscoveryAgent_CustomEvent_IsBase(true);
        vqbluetoothdevicediscoveryagent->customEvent(event);
    } else {
        ((VirtualQBluetoothDeviceDiscoveryAgent*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QBluetoothDeviceDiscoveryAgent_OnCustomEvent(QBluetoothDeviceDiscoveryAgent* self, intptr_t slot) {
    auto* vqbluetoothdevicediscoveryagent = dynamic_cast<VirtualQBluetoothDeviceDiscoveryAgent*>(self);
    if (vqbluetoothdevicediscoveryagent && vqbluetoothdevicediscoveryagent->isVirtualQBluetoothDeviceDiscoveryAgent) {
        vqbluetoothdevicediscoveryagent->setQBluetoothDeviceDiscoveryAgent_CustomEvent_Callback(reinterpret_cast<VirtualQBluetoothDeviceDiscoveryAgent::QBluetoothDeviceDiscoveryAgent_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QBluetoothDeviceDiscoveryAgent_ConnectNotify(QBluetoothDeviceDiscoveryAgent* self, const QMetaMethod* signal) {
    auto* vqbluetoothdevicediscoveryagent = dynamic_cast<VirtualQBluetoothDeviceDiscoveryAgent*>(self);
    if (vqbluetoothdevicediscoveryagent && vqbluetoothdevicediscoveryagent->isVirtualQBluetoothDeviceDiscoveryAgent) {
        vqbluetoothdevicediscoveryagent->connectNotify(*signal);
    } else {
        ((VirtualQBluetoothDeviceDiscoveryAgent*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QBluetoothDeviceDiscoveryAgent_SuperConnectNotify(QBluetoothDeviceDiscoveryAgent* self, const QMetaMethod* signal) {
    auto* vqbluetoothdevicediscoveryagent = dynamic_cast<VirtualQBluetoothDeviceDiscoveryAgent*>(self);
    if (vqbluetoothdevicediscoveryagent && vqbluetoothdevicediscoveryagent->isVirtualQBluetoothDeviceDiscoveryAgent) {
        vqbluetoothdevicediscoveryagent->setQBluetoothDeviceDiscoveryAgent_ConnectNotify_IsBase(true);
        vqbluetoothdevicediscoveryagent->connectNotify(*signal);
    } else {
        ((VirtualQBluetoothDeviceDiscoveryAgent*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QBluetoothDeviceDiscoveryAgent_OnConnectNotify(QBluetoothDeviceDiscoveryAgent* self, intptr_t slot) {
    auto* vqbluetoothdevicediscoveryagent = dynamic_cast<VirtualQBluetoothDeviceDiscoveryAgent*>(self);
    if (vqbluetoothdevicediscoveryagent && vqbluetoothdevicediscoveryagent->isVirtualQBluetoothDeviceDiscoveryAgent) {
        vqbluetoothdevicediscoveryagent->setQBluetoothDeviceDiscoveryAgent_ConnectNotify_Callback(reinterpret_cast<VirtualQBluetoothDeviceDiscoveryAgent::QBluetoothDeviceDiscoveryAgent_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QBluetoothDeviceDiscoveryAgent_DisconnectNotify(QBluetoothDeviceDiscoveryAgent* self, const QMetaMethod* signal) {
    auto* vqbluetoothdevicediscoveryagent = dynamic_cast<VirtualQBluetoothDeviceDiscoveryAgent*>(self);
    if (vqbluetoothdevicediscoveryagent && vqbluetoothdevicediscoveryagent->isVirtualQBluetoothDeviceDiscoveryAgent) {
        vqbluetoothdevicediscoveryagent->disconnectNotify(*signal);
    } else {
        ((VirtualQBluetoothDeviceDiscoveryAgent*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QBluetoothDeviceDiscoveryAgent_SuperDisconnectNotify(QBluetoothDeviceDiscoveryAgent* self, const QMetaMethod* signal) {
    auto* vqbluetoothdevicediscoveryagent = dynamic_cast<VirtualQBluetoothDeviceDiscoveryAgent*>(self);
    if (vqbluetoothdevicediscoveryagent && vqbluetoothdevicediscoveryagent->isVirtualQBluetoothDeviceDiscoveryAgent) {
        vqbluetoothdevicediscoveryagent->setQBluetoothDeviceDiscoveryAgent_DisconnectNotify_IsBase(true);
        vqbluetoothdevicediscoveryagent->disconnectNotify(*signal);
    } else {
        ((VirtualQBluetoothDeviceDiscoveryAgent*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QBluetoothDeviceDiscoveryAgent_OnDisconnectNotify(QBluetoothDeviceDiscoveryAgent* self, intptr_t slot) {
    auto* vqbluetoothdevicediscoveryagent = dynamic_cast<VirtualQBluetoothDeviceDiscoveryAgent*>(self);
    if (vqbluetoothdevicediscoveryagent && vqbluetoothdevicediscoveryagent->isVirtualQBluetoothDeviceDiscoveryAgent) {
        vqbluetoothdevicediscoveryagent->setQBluetoothDeviceDiscoveryAgent_DisconnectNotify_Callback(reinterpret_cast<VirtualQBluetoothDeviceDiscoveryAgent::QBluetoothDeviceDiscoveryAgent_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QBluetoothDeviceDiscoveryAgent_Sender(const QBluetoothDeviceDiscoveryAgent* self) {
    auto* vqbluetoothdevicediscoveryagent = const_cast<VirtualQBluetoothDeviceDiscoveryAgent*>(dynamic_cast<const VirtualQBluetoothDeviceDiscoveryAgent*>(self));
    if (vqbluetoothdevicediscoveryagent && vqbluetoothdevicediscoveryagent->isVirtualQBluetoothDeviceDiscoveryAgent) {
        return vqbluetoothdevicediscoveryagent->sender();
    } else {
        return ((VirtualQBluetoothDeviceDiscoveryAgent*)self)->sender();
    }
}

// Base class handler implementation
QObject* QBluetoothDeviceDiscoveryAgent_SuperSender(const QBluetoothDeviceDiscoveryAgent* self) {
    auto* vqbluetoothdevicediscoveryagent = const_cast<VirtualQBluetoothDeviceDiscoveryAgent*>(dynamic_cast<const VirtualQBluetoothDeviceDiscoveryAgent*>(self));
    if (vqbluetoothdevicediscoveryagent && vqbluetoothdevicediscoveryagent->isVirtualQBluetoothDeviceDiscoveryAgent) {
        vqbluetoothdevicediscoveryagent->setQBluetoothDeviceDiscoveryAgent_Sender_IsBase(true);
        return vqbluetoothdevicediscoveryagent->sender();
    } else {
        return ((VirtualQBluetoothDeviceDiscoveryAgent*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QBluetoothDeviceDiscoveryAgent_OnSender(const QBluetoothDeviceDiscoveryAgent* self, intptr_t slot) {
    auto* vqbluetoothdevicediscoveryagent = const_cast<VirtualQBluetoothDeviceDiscoveryAgent*>(dynamic_cast<const VirtualQBluetoothDeviceDiscoveryAgent*>(self));
    if (vqbluetoothdevicediscoveryagent && vqbluetoothdevicediscoveryagent->isVirtualQBluetoothDeviceDiscoveryAgent) {
        vqbluetoothdevicediscoveryagent->setQBluetoothDeviceDiscoveryAgent_Sender_Callback(reinterpret_cast<VirtualQBluetoothDeviceDiscoveryAgent::QBluetoothDeviceDiscoveryAgent_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QBluetoothDeviceDiscoveryAgent_SenderSignalIndex(const QBluetoothDeviceDiscoveryAgent* self) {
    auto* vqbluetoothdevicediscoveryagent = const_cast<VirtualQBluetoothDeviceDiscoveryAgent*>(dynamic_cast<const VirtualQBluetoothDeviceDiscoveryAgent*>(self));
    if (vqbluetoothdevicediscoveryagent && vqbluetoothdevicediscoveryagent->isVirtualQBluetoothDeviceDiscoveryAgent) {
        return vqbluetoothdevicediscoveryagent->senderSignalIndex();
    } else {
        return ((VirtualQBluetoothDeviceDiscoveryAgent*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QBluetoothDeviceDiscoveryAgent_SuperSenderSignalIndex(const QBluetoothDeviceDiscoveryAgent* self) {
    auto* vqbluetoothdevicediscoveryagent = const_cast<VirtualQBluetoothDeviceDiscoveryAgent*>(dynamic_cast<const VirtualQBluetoothDeviceDiscoveryAgent*>(self));
    if (vqbluetoothdevicediscoveryagent && vqbluetoothdevicediscoveryagent->isVirtualQBluetoothDeviceDiscoveryAgent) {
        vqbluetoothdevicediscoveryagent->setQBluetoothDeviceDiscoveryAgent_SenderSignalIndex_IsBase(true);
        return vqbluetoothdevicediscoveryagent->senderSignalIndex();
    } else {
        return ((VirtualQBluetoothDeviceDiscoveryAgent*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QBluetoothDeviceDiscoveryAgent_OnSenderSignalIndex(const QBluetoothDeviceDiscoveryAgent* self, intptr_t slot) {
    auto* vqbluetoothdevicediscoveryagent = const_cast<VirtualQBluetoothDeviceDiscoveryAgent*>(dynamic_cast<const VirtualQBluetoothDeviceDiscoveryAgent*>(self));
    if (vqbluetoothdevicediscoveryagent && vqbluetoothdevicediscoveryagent->isVirtualQBluetoothDeviceDiscoveryAgent) {
        vqbluetoothdevicediscoveryagent->setQBluetoothDeviceDiscoveryAgent_SenderSignalIndex_Callback(reinterpret_cast<VirtualQBluetoothDeviceDiscoveryAgent::QBluetoothDeviceDiscoveryAgent_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QBluetoothDeviceDiscoveryAgent_Receivers(const QBluetoothDeviceDiscoveryAgent* self, const char* signal) {
    auto* vqbluetoothdevicediscoveryagent = const_cast<VirtualQBluetoothDeviceDiscoveryAgent*>(dynamic_cast<const VirtualQBluetoothDeviceDiscoveryAgent*>(self));
    if (vqbluetoothdevicediscoveryagent && vqbluetoothdevicediscoveryagent->isVirtualQBluetoothDeviceDiscoveryAgent) {
        return vqbluetoothdevicediscoveryagent->receivers(signal);
    } else {
        return ((VirtualQBluetoothDeviceDiscoveryAgent*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QBluetoothDeviceDiscoveryAgent_SuperReceivers(const QBluetoothDeviceDiscoveryAgent* self, const char* signal) {
    auto* vqbluetoothdevicediscoveryagent = const_cast<VirtualQBluetoothDeviceDiscoveryAgent*>(dynamic_cast<const VirtualQBluetoothDeviceDiscoveryAgent*>(self));
    if (vqbluetoothdevicediscoveryagent && vqbluetoothdevicediscoveryagent->isVirtualQBluetoothDeviceDiscoveryAgent) {
        vqbluetoothdevicediscoveryagent->setQBluetoothDeviceDiscoveryAgent_Receivers_IsBase(true);
        return vqbluetoothdevicediscoveryagent->receivers(signal);
    } else {
        return ((VirtualQBluetoothDeviceDiscoveryAgent*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QBluetoothDeviceDiscoveryAgent_OnReceivers(const QBluetoothDeviceDiscoveryAgent* self, intptr_t slot) {
    auto* vqbluetoothdevicediscoveryagent = const_cast<VirtualQBluetoothDeviceDiscoveryAgent*>(dynamic_cast<const VirtualQBluetoothDeviceDiscoveryAgent*>(self));
    if (vqbluetoothdevicediscoveryagent && vqbluetoothdevicediscoveryagent->isVirtualQBluetoothDeviceDiscoveryAgent) {
        vqbluetoothdevicediscoveryagent->setQBluetoothDeviceDiscoveryAgent_Receivers_Callback(reinterpret_cast<VirtualQBluetoothDeviceDiscoveryAgent::QBluetoothDeviceDiscoveryAgent_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QBluetoothDeviceDiscoveryAgent_IsSignalConnected(const QBluetoothDeviceDiscoveryAgent* self, const QMetaMethod* signal) {
    auto* vqbluetoothdevicediscoveryagent = const_cast<VirtualQBluetoothDeviceDiscoveryAgent*>(dynamic_cast<const VirtualQBluetoothDeviceDiscoveryAgent*>(self));
    if (vqbluetoothdevicediscoveryagent && vqbluetoothdevicediscoveryagent->isVirtualQBluetoothDeviceDiscoveryAgent) {
        return vqbluetoothdevicediscoveryagent->isSignalConnected(*signal);
    } else {
        return ((VirtualQBluetoothDeviceDiscoveryAgent*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QBluetoothDeviceDiscoveryAgent_SuperIsSignalConnected(const QBluetoothDeviceDiscoveryAgent* self, const QMetaMethod* signal) {
    auto* vqbluetoothdevicediscoveryagent = const_cast<VirtualQBluetoothDeviceDiscoveryAgent*>(dynamic_cast<const VirtualQBluetoothDeviceDiscoveryAgent*>(self));
    if (vqbluetoothdevicediscoveryagent && vqbluetoothdevicediscoveryagent->isVirtualQBluetoothDeviceDiscoveryAgent) {
        vqbluetoothdevicediscoveryagent->setQBluetoothDeviceDiscoveryAgent_IsSignalConnected_IsBase(true);
        return vqbluetoothdevicediscoveryagent->isSignalConnected(*signal);
    } else {
        return ((VirtualQBluetoothDeviceDiscoveryAgent*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QBluetoothDeviceDiscoveryAgent_OnIsSignalConnected(const QBluetoothDeviceDiscoveryAgent* self, intptr_t slot) {
    auto* vqbluetoothdevicediscoveryagent = const_cast<VirtualQBluetoothDeviceDiscoveryAgent*>(dynamic_cast<const VirtualQBluetoothDeviceDiscoveryAgent*>(self));
    if (vqbluetoothdevicediscoveryagent && vqbluetoothdevicediscoveryagent->isVirtualQBluetoothDeviceDiscoveryAgent) {
        vqbluetoothdevicediscoveryagent->setQBluetoothDeviceDiscoveryAgent_IsSignalConnected_Callback(reinterpret_cast<VirtualQBluetoothDeviceDiscoveryAgent::QBluetoothDeviceDiscoveryAgent_IsSignalConnected_Callback>(slot));
    }
}

void QBluetoothDeviceDiscoveryAgent_Delete(QBluetoothDeviceDiscoveryAgent* self) {
    delete self;
}
