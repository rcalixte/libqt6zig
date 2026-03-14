#include <QBluetoothAddress>
#include <QBluetoothHostInfo>
#include <QBluetoothLocalDevice>
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
#include <qbluetoothlocaldevice.h>
#include "libqbluetoothlocaldevice.h"
#include "libqbluetoothlocaldevice.hxx"

QBluetoothLocalDevice* QBluetoothLocalDevice_new() {
    return new VirtualQBluetoothLocalDevice();
}

QBluetoothLocalDevice* QBluetoothLocalDevice_new2(const QBluetoothAddress* address) {
    return new VirtualQBluetoothLocalDevice(*address);
}

QBluetoothLocalDevice* QBluetoothLocalDevice_new3(QObject* parent) {
    return new VirtualQBluetoothLocalDevice(parent);
}

QBluetoothLocalDevice* QBluetoothLocalDevice_new4(const QBluetoothAddress* address, QObject* parent) {
    return new VirtualQBluetoothLocalDevice(*address, parent);
}

QMetaObject* QBluetoothLocalDevice_MetaObject(const QBluetoothLocalDevice* self) {
    auto* vqbluetoothlocaldevice = dynamic_cast<const VirtualQBluetoothLocalDevice*>(self);
    if (vqbluetoothlocaldevice && vqbluetoothlocaldevice->isVirtualQBluetoothLocalDevice) {
        return (QMetaObject*)self->metaObject();
    } else {
        return (QMetaObject*)((VirtualQBluetoothLocalDevice*)self)->metaObject();
    }
}

void* QBluetoothLocalDevice_Metacast(QBluetoothLocalDevice* self, const char* param1) {
    auto* vqbluetoothlocaldevice = dynamic_cast<VirtualQBluetoothLocalDevice*>(self);
    if (vqbluetoothlocaldevice && vqbluetoothlocaldevice->isVirtualQBluetoothLocalDevice) {
        return self->qt_metacast(param1);
    } else {
        return ((VirtualQBluetoothLocalDevice*)self)->qt_metacast(param1);
    }
}

int QBluetoothLocalDevice_Metacall(QBluetoothLocalDevice* self, int param1, int param2, void** param3) {
    auto* vqbluetoothlocaldevice = dynamic_cast<VirtualQBluetoothLocalDevice*>(self);
    if (vqbluetoothlocaldevice && vqbluetoothlocaldevice->isVirtualQBluetoothLocalDevice) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQBluetoothLocalDevice*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

bool QBluetoothLocalDevice_IsValid(const QBluetoothLocalDevice* self) {
    return self->isValid();
}

void QBluetoothLocalDevice_RequestPairing(QBluetoothLocalDevice* self, const QBluetoothAddress* address, int pairing) {
    self->requestPairing(*address, static_cast<QBluetoothLocalDevice::Pairing>(pairing));
}

int QBluetoothLocalDevice_PairingStatus(const QBluetoothLocalDevice* self, const QBluetoothAddress* address) {
    return static_cast<int>(self->pairingStatus(*address));
}

void QBluetoothLocalDevice_SetHostMode(QBluetoothLocalDevice* self, int mode) {
    self->setHostMode(static_cast<QBluetoothLocalDevice::HostMode>(mode));
}

int QBluetoothLocalDevice_HostMode(const QBluetoothLocalDevice* self) {
    return static_cast<int>(self->hostMode());
}

libqt_list /* of QBluetoothAddress* */ QBluetoothLocalDevice_ConnectedDevices(const QBluetoothLocalDevice* self) {
    QList<QBluetoothAddress> _ret = self->connectedDevices();
    // Convert QList<> from C++ memory to manually-managed C memory
    QBluetoothAddress** _arr = static_cast<QBluetoothAddress**>(malloc(sizeof(QBluetoothAddress*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QBluetoothAddress(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void QBluetoothLocalDevice_PowerOn(QBluetoothLocalDevice* self) {
    self->powerOn();
}

libqt_string QBluetoothLocalDevice_Name(const QBluetoothLocalDevice* self) {
    QString _ret = self->name();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QBluetoothAddress* QBluetoothLocalDevice_Address(const QBluetoothLocalDevice* self) {
    return new QBluetoothAddress(self->address());
}

libqt_list /* of QBluetoothHostInfo* */ QBluetoothLocalDevice_AllDevices() {
    QList<QBluetoothHostInfo> _ret = QBluetoothLocalDevice::allDevices();
    // Convert QList<> from C++ memory to manually-managed C memory
    QBluetoothHostInfo** _arr = static_cast<QBluetoothHostInfo**>(malloc(sizeof(QBluetoothHostInfo*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QBluetoothHostInfo(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void QBluetoothLocalDevice_HostModeStateChanged(QBluetoothLocalDevice* self, int state) {
    self->hostModeStateChanged(static_cast<QBluetoothLocalDevice::HostMode>(state));
}

void QBluetoothLocalDevice_Connect_HostModeStateChanged(QBluetoothLocalDevice* self, intptr_t slot) {
    void (*slotFunc)(QBluetoothLocalDevice*, int) = reinterpret_cast<void (*)(QBluetoothLocalDevice*, int)>(slot);
    QBluetoothLocalDevice::connect(self, &QBluetoothLocalDevice::hostModeStateChanged, [self, slotFunc](QBluetoothLocalDevice::HostMode state) {
        int sigval1 = static_cast<int>(state);
        slotFunc(self, sigval1);
    });
}

void QBluetoothLocalDevice_DeviceConnected(QBluetoothLocalDevice* self, const QBluetoothAddress* address) {
    self->deviceConnected(*address);
}

void QBluetoothLocalDevice_Connect_DeviceConnected(QBluetoothLocalDevice* self, intptr_t slot) {
    void (*slotFunc)(QBluetoothLocalDevice*, QBluetoothAddress*) = reinterpret_cast<void (*)(QBluetoothLocalDevice*, QBluetoothAddress*)>(slot);
    QBluetoothLocalDevice::connect(self, &QBluetoothLocalDevice::deviceConnected, [self, slotFunc](const QBluetoothAddress& address) {
        const QBluetoothAddress& address_ret = address;
        // Cast returned reference into pointer
        QBluetoothAddress* sigval1 = const_cast<QBluetoothAddress*>(&address_ret);
        slotFunc(self, sigval1);
    });
}

void QBluetoothLocalDevice_DeviceDisconnected(QBluetoothLocalDevice* self, const QBluetoothAddress* address) {
    self->deviceDisconnected(*address);
}

void QBluetoothLocalDevice_Connect_DeviceDisconnected(QBluetoothLocalDevice* self, intptr_t slot) {
    void (*slotFunc)(QBluetoothLocalDevice*, QBluetoothAddress*) = reinterpret_cast<void (*)(QBluetoothLocalDevice*, QBluetoothAddress*)>(slot);
    QBluetoothLocalDevice::connect(self, &QBluetoothLocalDevice::deviceDisconnected, [self, slotFunc](const QBluetoothAddress& address) {
        const QBluetoothAddress& address_ret = address;
        // Cast returned reference into pointer
        QBluetoothAddress* sigval1 = const_cast<QBluetoothAddress*>(&address_ret);
        slotFunc(self, sigval1);
    });
}

void QBluetoothLocalDevice_PairingFinished(QBluetoothLocalDevice* self, const QBluetoothAddress* address, int pairing) {
    self->pairingFinished(*address, static_cast<QBluetoothLocalDevice::Pairing>(pairing));
}

void QBluetoothLocalDevice_Connect_PairingFinished(QBluetoothLocalDevice* self, intptr_t slot) {
    void (*slotFunc)(QBluetoothLocalDevice*, QBluetoothAddress*, int) = reinterpret_cast<void (*)(QBluetoothLocalDevice*, QBluetoothAddress*, int)>(slot);
    QBluetoothLocalDevice::connect(self, &QBluetoothLocalDevice::pairingFinished, [self, slotFunc](const QBluetoothAddress& address, QBluetoothLocalDevice::Pairing pairing) {
        const QBluetoothAddress& address_ret = address;
        // Cast returned reference into pointer
        QBluetoothAddress* sigval1 = const_cast<QBluetoothAddress*>(&address_ret);
        int sigval2 = static_cast<int>(pairing);
        slotFunc(self, sigval1, sigval2);
    });
}

void QBluetoothLocalDevice_ErrorOccurred(QBluetoothLocalDevice* self, int errorVal) {
    self->errorOccurred(static_cast<QBluetoothLocalDevice::Error>(errorVal));
}

void QBluetoothLocalDevice_Connect_ErrorOccurred(QBluetoothLocalDevice* self, intptr_t slot) {
    void (*slotFunc)(QBluetoothLocalDevice*, int) = reinterpret_cast<void (*)(QBluetoothLocalDevice*, int)>(slot);
    QBluetoothLocalDevice::connect(self, &QBluetoothLocalDevice::errorOccurred, [self, slotFunc](QBluetoothLocalDevice::Error errorVal) {
        int sigval1 = static_cast<int>(errorVal);
        slotFunc(self, sigval1);
    });
}

// Base class handler implementation
QMetaObject* QBluetoothLocalDevice_SuperMetaObject(const QBluetoothLocalDevice* self) {
    auto* vqbluetoothlocaldevice = const_cast<VirtualQBluetoothLocalDevice*>(dynamic_cast<const VirtualQBluetoothLocalDevice*>(self));
    if (vqbluetoothlocaldevice && vqbluetoothlocaldevice->isVirtualQBluetoothLocalDevice) {
        vqbluetoothlocaldevice->setQBluetoothLocalDevice_MetaObject_IsBase(true);
        return (QMetaObject*)vqbluetoothlocaldevice->metaObject();
    } else {
        return (QMetaObject*)self->QBluetoothLocalDevice::metaObject();
    }
}

// Auxiliary method to allow providing re-implementation
void QBluetoothLocalDevice_OnMetaObject(const QBluetoothLocalDevice* self, intptr_t slot) {
    auto* vqbluetoothlocaldevice = const_cast<VirtualQBluetoothLocalDevice*>(dynamic_cast<const VirtualQBluetoothLocalDevice*>(self));
    if (vqbluetoothlocaldevice && vqbluetoothlocaldevice->isVirtualQBluetoothLocalDevice) {
        vqbluetoothlocaldevice->setQBluetoothLocalDevice_MetaObject_Callback(reinterpret_cast<VirtualQBluetoothLocalDevice::QBluetoothLocalDevice_MetaObject_Callback>(slot));
    }
}

// Base class handler implementation
void* QBluetoothLocalDevice_SuperMetacast(QBluetoothLocalDevice* self, const char* param1) {
    auto* vqbluetoothlocaldevice = dynamic_cast<VirtualQBluetoothLocalDevice*>(self);
    if (vqbluetoothlocaldevice && vqbluetoothlocaldevice->isVirtualQBluetoothLocalDevice) {
        vqbluetoothlocaldevice->setQBluetoothLocalDevice_Metacast_IsBase(true);
        return vqbluetoothlocaldevice->qt_metacast(param1);
    } else {
        return self->QBluetoothLocalDevice::qt_metacast(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QBluetoothLocalDevice_OnMetacast(QBluetoothLocalDevice* self, intptr_t slot) {
    auto* vqbluetoothlocaldevice = dynamic_cast<VirtualQBluetoothLocalDevice*>(self);
    if (vqbluetoothlocaldevice && vqbluetoothlocaldevice->isVirtualQBluetoothLocalDevice) {
        vqbluetoothlocaldevice->setQBluetoothLocalDevice_Metacast_Callback(reinterpret_cast<VirtualQBluetoothLocalDevice::QBluetoothLocalDevice_Metacast_Callback>(slot));
    }
}

// Base class handler implementation
int QBluetoothLocalDevice_SuperMetacall(QBluetoothLocalDevice* self, int param1, int param2, void** param3) {
    auto* vqbluetoothlocaldevice = dynamic_cast<VirtualQBluetoothLocalDevice*>(self);
    if (vqbluetoothlocaldevice && vqbluetoothlocaldevice->isVirtualQBluetoothLocalDevice) {
        vqbluetoothlocaldevice->setQBluetoothLocalDevice_Metacall_IsBase(true);
        return vqbluetoothlocaldevice->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->QBluetoothLocalDevice::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void QBluetoothLocalDevice_OnMetacall(QBluetoothLocalDevice* self, intptr_t slot) {
    auto* vqbluetoothlocaldevice = dynamic_cast<VirtualQBluetoothLocalDevice*>(self);
    if (vqbluetoothlocaldevice && vqbluetoothlocaldevice->isVirtualQBluetoothLocalDevice) {
        vqbluetoothlocaldevice->setQBluetoothLocalDevice_Metacall_Callback(reinterpret_cast<VirtualQBluetoothLocalDevice::QBluetoothLocalDevice_Metacall_Callback>(slot));
    }
}

// Derived class handler implementation
bool QBluetoothLocalDevice_Event(QBluetoothLocalDevice* self, QEvent* event) {
    auto* vqbluetoothlocaldevice = dynamic_cast<VirtualQBluetoothLocalDevice*>(self);
    if (vqbluetoothlocaldevice && vqbluetoothlocaldevice->isVirtualQBluetoothLocalDevice) {
        return vqbluetoothlocaldevice->event(event);
    } else {
        return self->QBluetoothLocalDevice::event(event);
    }
}

// Base class handler implementation
bool QBluetoothLocalDevice_SuperEvent(QBluetoothLocalDevice* self, QEvent* event) {
    auto* vqbluetoothlocaldevice = dynamic_cast<VirtualQBluetoothLocalDevice*>(self);
    if (vqbluetoothlocaldevice && vqbluetoothlocaldevice->isVirtualQBluetoothLocalDevice) {
        vqbluetoothlocaldevice->setQBluetoothLocalDevice_Event_IsBase(true);
        return vqbluetoothlocaldevice->event(event);
    } else {
        return self->QBluetoothLocalDevice::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QBluetoothLocalDevice_OnEvent(QBluetoothLocalDevice* self, intptr_t slot) {
    auto* vqbluetoothlocaldevice = dynamic_cast<VirtualQBluetoothLocalDevice*>(self);
    if (vqbluetoothlocaldevice && vqbluetoothlocaldevice->isVirtualQBluetoothLocalDevice) {
        vqbluetoothlocaldevice->setQBluetoothLocalDevice_Event_Callback(reinterpret_cast<VirtualQBluetoothLocalDevice::QBluetoothLocalDevice_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QBluetoothLocalDevice_EventFilter(QBluetoothLocalDevice* self, QObject* watched, QEvent* event) {
    auto* vqbluetoothlocaldevice = dynamic_cast<VirtualQBluetoothLocalDevice*>(self);
    if (vqbluetoothlocaldevice && vqbluetoothlocaldevice->isVirtualQBluetoothLocalDevice) {
        return vqbluetoothlocaldevice->eventFilter(watched, event);
    } else {
        return self->QBluetoothLocalDevice::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QBluetoothLocalDevice_SuperEventFilter(QBluetoothLocalDevice* self, QObject* watched, QEvent* event) {
    auto* vqbluetoothlocaldevice = dynamic_cast<VirtualQBluetoothLocalDevice*>(self);
    if (vqbluetoothlocaldevice && vqbluetoothlocaldevice->isVirtualQBluetoothLocalDevice) {
        vqbluetoothlocaldevice->setQBluetoothLocalDevice_EventFilter_IsBase(true);
        return vqbluetoothlocaldevice->eventFilter(watched, event);
    } else {
        return self->QBluetoothLocalDevice::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QBluetoothLocalDevice_OnEventFilter(QBluetoothLocalDevice* self, intptr_t slot) {
    auto* vqbluetoothlocaldevice = dynamic_cast<VirtualQBluetoothLocalDevice*>(self);
    if (vqbluetoothlocaldevice && vqbluetoothlocaldevice->isVirtualQBluetoothLocalDevice) {
        vqbluetoothlocaldevice->setQBluetoothLocalDevice_EventFilter_Callback(reinterpret_cast<VirtualQBluetoothLocalDevice::QBluetoothLocalDevice_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QBluetoothLocalDevice_TimerEvent(QBluetoothLocalDevice* self, QTimerEvent* event) {
    auto* vqbluetoothlocaldevice = dynamic_cast<VirtualQBluetoothLocalDevice*>(self);
    if (vqbluetoothlocaldevice && vqbluetoothlocaldevice->isVirtualQBluetoothLocalDevice) {
        vqbluetoothlocaldevice->timerEvent(event);
    } else {
        ((VirtualQBluetoothLocalDevice*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QBluetoothLocalDevice_SuperTimerEvent(QBluetoothLocalDevice* self, QTimerEvent* event) {
    auto* vqbluetoothlocaldevice = dynamic_cast<VirtualQBluetoothLocalDevice*>(self);
    if (vqbluetoothlocaldevice && vqbluetoothlocaldevice->isVirtualQBluetoothLocalDevice) {
        vqbluetoothlocaldevice->setQBluetoothLocalDevice_TimerEvent_IsBase(true);
        vqbluetoothlocaldevice->timerEvent(event);
    } else {
        ((VirtualQBluetoothLocalDevice*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QBluetoothLocalDevice_OnTimerEvent(QBluetoothLocalDevice* self, intptr_t slot) {
    auto* vqbluetoothlocaldevice = dynamic_cast<VirtualQBluetoothLocalDevice*>(self);
    if (vqbluetoothlocaldevice && vqbluetoothlocaldevice->isVirtualQBluetoothLocalDevice) {
        vqbluetoothlocaldevice->setQBluetoothLocalDevice_TimerEvent_Callback(reinterpret_cast<VirtualQBluetoothLocalDevice::QBluetoothLocalDevice_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QBluetoothLocalDevice_ChildEvent(QBluetoothLocalDevice* self, QChildEvent* event) {
    auto* vqbluetoothlocaldevice = dynamic_cast<VirtualQBluetoothLocalDevice*>(self);
    if (vqbluetoothlocaldevice && vqbluetoothlocaldevice->isVirtualQBluetoothLocalDevice) {
        vqbluetoothlocaldevice->childEvent(event);
    } else {
        ((VirtualQBluetoothLocalDevice*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QBluetoothLocalDevice_SuperChildEvent(QBluetoothLocalDevice* self, QChildEvent* event) {
    auto* vqbluetoothlocaldevice = dynamic_cast<VirtualQBluetoothLocalDevice*>(self);
    if (vqbluetoothlocaldevice && vqbluetoothlocaldevice->isVirtualQBluetoothLocalDevice) {
        vqbluetoothlocaldevice->setQBluetoothLocalDevice_ChildEvent_IsBase(true);
        vqbluetoothlocaldevice->childEvent(event);
    } else {
        ((VirtualQBluetoothLocalDevice*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QBluetoothLocalDevice_OnChildEvent(QBluetoothLocalDevice* self, intptr_t slot) {
    auto* vqbluetoothlocaldevice = dynamic_cast<VirtualQBluetoothLocalDevice*>(self);
    if (vqbluetoothlocaldevice && vqbluetoothlocaldevice->isVirtualQBluetoothLocalDevice) {
        vqbluetoothlocaldevice->setQBluetoothLocalDevice_ChildEvent_Callback(reinterpret_cast<VirtualQBluetoothLocalDevice::QBluetoothLocalDevice_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QBluetoothLocalDevice_CustomEvent(QBluetoothLocalDevice* self, QEvent* event) {
    auto* vqbluetoothlocaldevice = dynamic_cast<VirtualQBluetoothLocalDevice*>(self);
    if (vqbluetoothlocaldevice && vqbluetoothlocaldevice->isVirtualQBluetoothLocalDevice) {
        vqbluetoothlocaldevice->customEvent(event);
    } else {
        ((VirtualQBluetoothLocalDevice*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QBluetoothLocalDevice_SuperCustomEvent(QBluetoothLocalDevice* self, QEvent* event) {
    auto* vqbluetoothlocaldevice = dynamic_cast<VirtualQBluetoothLocalDevice*>(self);
    if (vqbluetoothlocaldevice && vqbluetoothlocaldevice->isVirtualQBluetoothLocalDevice) {
        vqbluetoothlocaldevice->setQBluetoothLocalDevice_CustomEvent_IsBase(true);
        vqbluetoothlocaldevice->customEvent(event);
    } else {
        ((VirtualQBluetoothLocalDevice*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QBluetoothLocalDevice_OnCustomEvent(QBluetoothLocalDevice* self, intptr_t slot) {
    auto* vqbluetoothlocaldevice = dynamic_cast<VirtualQBluetoothLocalDevice*>(self);
    if (vqbluetoothlocaldevice && vqbluetoothlocaldevice->isVirtualQBluetoothLocalDevice) {
        vqbluetoothlocaldevice->setQBluetoothLocalDevice_CustomEvent_Callback(reinterpret_cast<VirtualQBluetoothLocalDevice::QBluetoothLocalDevice_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QBluetoothLocalDevice_ConnectNotify(QBluetoothLocalDevice* self, const QMetaMethod* signal) {
    auto* vqbluetoothlocaldevice = dynamic_cast<VirtualQBluetoothLocalDevice*>(self);
    if (vqbluetoothlocaldevice && vqbluetoothlocaldevice->isVirtualQBluetoothLocalDevice) {
        vqbluetoothlocaldevice->connectNotify(*signal);
    } else {
        ((VirtualQBluetoothLocalDevice*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QBluetoothLocalDevice_SuperConnectNotify(QBluetoothLocalDevice* self, const QMetaMethod* signal) {
    auto* vqbluetoothlocaldevice = dynamic_cast<VirtualQBluetoothLocalDevice*>(self);
    if (vqbluetoothlocaldevice && vqbluetoothlocaldevice->isVirtualQBluetoothLocalDevice) {
        vqbluetoothlocaldevice->setQBluetoothLocalDevice_ConnectNotify_IsBase(true);
        vqbluetoothlocaldevice->connectNotify(*signal);
    } else {
        ((VirtualQBluetoothLocalDevice*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QBluetoothLocalDevice_OnConnectNotify(QBluetoothLocalDevice* self, intptr_t slot) {
    auto* vqbluetoothlocaldevice = dynamic_cast<VirtualQBluetoothLocalDevice*>(self);
    if (vqbluetoothlocaldevice && vqbluetoothlocaldevice->isVirtualQBluetoothLocalDevice) {
        vqbluetoothlocaldevice->setQBluetoothLocalDevice_ConnectNotify_Callback(reinterpret_cast<VirtualQBluetoothLocalDevice::QBluetoothLocalDevice_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QBluetoothLocalDevice_DisconnectNotify(QBluetoothLocalDevice* self, const QMetaMethod* signal) {
    auto* vqbluetoothlocaldevice = dynamic_cast<VirtualQBluetoothLocalDevice*>(self);
    if (vqbluetoothlocaldevice && vqbluetoothlocaldevice->isVirtualQBluetoothLocalDevice) {
        vqbluetoothlocaldevice->disconnectNotify(*signal);
    } else {
        ((VirtualQBluetoothLocalDevice*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QBluetoothLocalDevice_SuperDisconnectNotify(QBluetoothLocalDevice* self, const QMetaMethod* signal) {
    auto* vqbluetoothlocaldevice = dynamic_cast<VirtualQBluetoothLocalDevice*>(self);
    if (vqbluetoothlocaldevice && vqbluetoothlocaldevice->isVirtualQBluetoothLocalDevice) {
        vqbluetoothlocaldevice->setQBluetoothLocalDevice_DisconnectNotify_IsBase(true);
        vqbluetoothlocaldevice->disconnectNotify(*signal);
    } else {
        ((VirtualQBluetoothLocalDevice*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QBluetoothLocalDevice_OnDisconnectNotify(QBluetoothLocalDevice* self, intptr_t slot) {
    auto* vqbluetoothlocaldevice = dynamic_cast<VirtualQBluetoothLocalDevice*>(self);
    if (vqbluetoothlocaldevice && vqbluetoothlocaldevice->isVirtualQBluetoothLocalDevice) {
        vqbluetoothlocaldevice->setQBluetoothLocalDevice_DisconnectNotify_Callback(reinterpret_cast<VirtualQBluetoothLocalDevice::QBluetoothLocalDevice_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QBluetoothLocalDevice_Sender(const QBluetoothLocalDevice* self) {
    auto* vqbluetoothlocaldevice = const_cast<VirtualQBluetoothLocalDevice*>(dynamic_cast<const VirtualQBluetoothLocalDevice*>(self));
    if (vqbluetoothlocaldevice && vqbluetoothlocaldevice->isVirtualQBluetoothLocalDevice) {
        return vqbluetoothlocaldevice->sender();
    } else {
        return ((VirtualQBluetoothLocalDevice*)self)->sender();
    }
}

// Base class handler implementation
QObject* QBluetoothLocalDevice_SuperSender(const QBluetoothLocalDevice* self) {
    auto* vqbluetoothlocaldevice = const_cast<VirtualQBluetoothLocalDevice*>(dynamic_cast<const VirtualQBluetoothLocalDevice*>(self));
    if (vqbluetoothlocaldevice && vqbluetoothlocaldevice->isVirtualQBluetoothLocalDevice) {
        vqbluetoothlocaldevice->setQBluetoothLocalDevice_Sender_IsBase(true);
        return vqbluetoothlocaldevice->sender();
    } else {
        return ((VirtualQBluetoothLocalDevice*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QBluetoothLocalDevice_OnSender(const QBluetoothLocalDevice* self, intptr_t slot) {
    auto* vqbluetoothlocaldevice = const_cast<VirtualQBluetoothLocalDevice*>(dynamic_cast<const VirtualQBluetoothLocalDevice*>(self));
    if (vqbluetoothlocaldevice && vqbluetoothlocaldevice->isVirtualQBluetoothLocalDevice) {
        vqbluetoothlocaldevice->setQBluetoothLocalDevice_Sender_Callback(reinterpret_cast<VirtualQBluetoothLocalDevice::QBluetoothLocalDevice_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QBluetoothLocalDevice_SenderSignalIndex(const QBluetoothLocalDevice* self) {
    auto* vqbluetoothlocaldevice = const_cast<VirtualQBluetoothLocalDevice*>(dynamic_cast<const VirtualQBluetoothLocalDevice*>(self));
    if (vqbluetoothlocaldevice && vqbluetoothlocaldevice->isVirtualQBluetoothLocalDevice) {
        return vqbluetoothlocaldevice->senderSignalIndex();
    } else {
        return ((VirtualQBluetoothLocalDevice*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QBluetoothLocalDevice_SuperSenderSignalIndex(const QBluetoothLocalDevice* self) {
    auto* vqbluetoothlocaldevice = const_cast<VirtualQBluetoothLocalDevice*>(dynamic_cast<const VirtualQBluetoothLocalDevice*>(self));
    if (vqbluetoothlocaldevice && vqbluetoothlocaldevice->isVirtualQBluetoothLocalDevice) {
        vqbluetoothlocaldevice->setQBluetoothLocalDevice_SenderSignalIndex_IsBase(true);
        return vqbluetoothlocaldevice->senderSignalIndex();
    } else {
        return ((VirtualQBluetoothLocalDevice*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QBluetoothLocalDevice_OnSenderSignalIndex(const QBluetoothLocalDevice* self, intptr_t slot) {
    auto* vqbluetoothlocaldevice = const_cast<VirtualQBluetoothLocalDevice*>(dynamic_cast<const VirtualQBluetoothLocalDevice*>(self));
    if (vqbluetoothlocaldevice && vqbluetoothlocaldevice->isVirtualQBluetoothLocalDevice) {
        vqbluetoothlocaldevice->setQBluetoothLocalDevice_SenderSignalIndex_Callback(reinterpret_cast<VirtualQBluetoothLocalDevice::QBluetoothLocalDevice_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QBluetoothLocalDevice_Receivers(const QBluetoothLocalDevice* self, const char* signal) {
    auto* vqbluetoothlocaldevice = const_cast<VirtualQBluetoothLocalDevice*>(dynamic_cast<const VirtualQBluetoothLocalDevice*>(self));
    if (vqbluetoothlocaldevice && vqbluetoothlocaldevice->isVirtualQBluetoothLocalDevice) {
        return vqbluetoothlocaldevice->receivers(signal);
    } else {
        return ((VirtualQBluetoothLocalDevice*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QBluetoothLocalDevice_SuperReceivers(const QBluetoothLocalDevice* self, const char* signal) {
    auto* vqbluetoothlocaldevice = const_cast<VirtualQBluetoothLocalDevice*>(dynamic_cast<const VirtualQBluetoothLocalDevice*>(self));
    if (vqbluetoothlocaldevice && vqbluetoothlocaldevice->isVirtualQBluetoothLocalDevice) {
        vqbluetoothlocaldevice->setQBluetoothLocalDevice_Receivers_IsBase(true);
        return vqbluetoothlocaldevice->receivers(signal);
    } else {
        return ((VirtualQBluetoothLocalDevice*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QBluetoothLocalDevice_OnReceivers(const QBluetoothLocalDevice* self, intptr_t slot) {
    auto* vqbluetoothlocaldevice = const_cast<VirtualQBluetoothLocalDevice*>(dynamic_cast<const VirtualQBluetoothLocalDevice*>(self));
    if (vqbluetoothlocaldevice && vqbluetoothlocaldevice->isVirtualQBluetoothLocalDevice) {
        vqbluetoothlocaldevice->setQBluetoothLocalDevice_Receivers_Callback(reinterpret_cast<VirtualQBluetoothLocalDevice::QBluetoothLocalDevice_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QBluetoothLocalDevice_IsSignalConnected(const QBluetoothLocalDevice* self, const QMetaMethod* signal) {
    auto* vqbluetoothlocaldevice = const_cast<VirtualQBluetoothLocalDevice*>(dynamic_cast<const VirtualQBluetoothLocalDevice*>(self));
    if (vqbluetoothlocaldevice && vqbluetoothlocaldevice->isVirtualQBluetoothLocalDevice) {
        return vqbluetoothlocaldevice->isSignalConnected(*signal);
    } else {
        return ((VirtualQBluetoothLocalDevice*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QBluetoothLocalDevice_SuperIsSignalConnected(const QBluetoothLocalDevice* self, const QMetaMethod* signal) {
    auto* vqbluetoothlocaldevice = const_cast<VirtualQBluetoothLocalDevice*>(dynamic_cast<const VirtualQBluetoothLocalDevice*>(self));
    if (vqbluetoothlocaldevice && vqbluetoothlocaldevice->isVirtualQBluetoothLocalDevice) {
        vqbluetoothlocaldevice->setQBluetoothLocalDevice_IsSignalConnected_IsBase(true);
        return vqbluetoothlocaldevice->isSignalConnected(*signal);
    } else {
        return ((VirtualQBluetoothLocalDevice*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QBluetoothLocalDevice_OnIsSignalConnected(const QBluetoothLocalDevice* self, intptr_t slot) {
    auto* vqbluetoothlocaldevice = const_cast<VirtualQBluetoothLocalDevice*>(dynamic_cast<const VirtualQBluetoothLocalDevice*>(self));
    if (vqbluetoothlocaldevice && vqbluetoothlocaldevice->isVirtualQBluetoothLocalDevice) {
        vqbluetoothlocaldevice->setQBluetoothLocalDevice_IsSignalConnected_Callback(reinterpret_cast<VirtualQBluetoothLocalDevice::QBluetoothLocalDevice_IsSignalConnected_Callback>(slot));
    }
}

void QBluetoothLocalDevice_Delete(QBluetoothLocalDevice* self) {
    delete self;
}
