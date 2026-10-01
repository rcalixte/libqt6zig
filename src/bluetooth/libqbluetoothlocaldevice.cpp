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
    return (QMetaObject*)self->metaObject();
}

void* QBluetoothLocalDevice_Metacast(QBluetoothLocalDevice* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QBluetoothLocalDevice_Metacall(QBluetoothLocalDevice* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QBluetoothLocalDevice_Tr(const char* s) {
    auto _ret = QBluetoothLocalDevice::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
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
    auto _ret = self->name();
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
    QBluetoothLocalDevice::connect(self,
                                   static_cast<void (QBluetoothLocalDevice::*)(QBluetoothLocalDevice::HostMode)>(&QBluetoothLocalDevice::hostModeStateChanged),
                                   [self, slotFunc](QBluetoothLocalDevice::HostMode state) {
                                       int sigval1 = static_cast<int>(state);
                                       slotFunc(self, sigval1);
                                   });
}

void QBluetoothLocalDevice_DeviceConnected(QBluetoothLocalDevice* self, const QBluetoothAddress* address) {
    self->deviceConnected(*address);
}

void QBluetoothLocalDevice_Connect_DeviceConnected(QBluetoothLocalDevice* self, intptr_t slot) {
    void (*slotFunc)(QBluetoothLocalDevice*, QBluetoothAddress*) = reinterpret_cast<void (*)(QBluetoothLocalDevice*, QBluetoothAddress*)>(slot);
    QBluetoothLocalDevice::connect(self,
                                   static_cast<void (QBluetoothLocalDevice::*)(const QBluetoothAddress&)>(&QBluetoothLocalDevice::deviceConnected),
                                   [self, slotFunc](const QBluetoothAddress& address) {
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
    QBluetoothLocalDevice::connect(self,
                                   static_cast<void (QBluetoothLocalDevice::*)(const QBluetoothAddress&)>(&QBluetoothLocalDevice::deviceDisconnected),
                                   [self, slotFunc](const QBluetoothAddress& address) {
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
    QBluetoothLocalDevice::connect(self,
                                   static_cast<void (QBluetoothLocalDevice::*)(const QBluetoothAddress&, QBluetoothLocalDevice::Pairing)>(&QBluetoothLocalDevice::pairingFinished),
                                   [self, slotFunc](const QBluetoothAddress& address, QBluetoothLocalDevice::Pairing pairing) {
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
    QBluetoothLocalDevice::connect(self,
                                   static_cast<void (QBluetoothLocalDevice::*)(QBluetoothLocalDevice::Error)>(&QBluetoothLocalDevice::errorOccurred),
                                   [self, slotFunc](QBluetoothLocalDevice::Error errorVal) {
                                       int sigval1 = static_cast<int>(errorVal);
                                       slotFunc(self, sigval1);
                                   });
}

libqt_string QBluetoothLocalDevice_Tr2(const char* s, const char* c) {
    auto _ret = QBluetoothLocalDevice::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QBluetoothLocalDevice_Tr3(const char* s, const char* c, int n) {
    auto _ret = QBluetoothLocalDevice::tr(s, c, static_cast<int>(n));
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
QMetaObject* QBluetoothLocalDevice_SuperMetaObject(const QBluetoothLocalDevice* self) {
    return (QMetaObject*)self->QBluetoothLocalDevice::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QBluetoothLocalDevice_OnMetaObject(QBluetoothLocalDevice* self, intptr_t slot) {
    if (auto* vqbluetoothlocaldevice = const_cast<VirtualQBluetoothLocalDevice*>(dynamic_cast<const VirtualQBluetoothLocalDevice*>(self)))
        vqbluetoothlocaldevice->qbluetoothlocaldevice_metaobject_callback = reinterpret_cast<VirtualQBluetoothLocalDevice::QBluetoothLocalDevice_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QBluetoothLocalDevice_SuperMetacast(QBluetoothLocalDevice* self, const char* param1) {
    return self->QBluetoothLocalDevice::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QBluetoothLocalDevice_OnMetacast(QBluetoothLocalDevice* self, intptr_t slot) {
    if (auto* vqbluetoothlocaldevice = dynamic_cast<VirtualQBluetoothLocalDevice*>(self))
        vqbluetoothlocaldevice->qbluetoothlocaldevice_metacast_callback = reinterpret_cast<VirtualQBluetoothLocalDevice::QBluetoothLocalDevice_Metacast_Callback>(slot);
}

// Base class handler implementation
int QBluetoothLocalDevice_SuperMetacall(QBluetoothLocalDevice* self, int param1, int param2, void** param3) {
    return self->QBluetoothLocalDevice::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QBluetoothLocalDevice_OnMetacall(QBluetoothLocalDevice* self, intptr_t slot) {
    if (auto* vqbluetoothlocaldevice = dynamic_cast<VirtualQBluetoothLocalDevice*>(self))
        vqbluetoothlocaldevice->qbluetoothlocaldevice_metacall_callback = reinterpret_cast<VirtualQBluetoothLocalDevice::QBluetoothLocalDevice_Metacall_Callback>(slot);
}

// Derived class handler implementation
bool QBluetoothLocalDevice_Event(QBluetoothLocalDevice* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QBluetoothLocalDevice_SuperEvent(QBluetoothLocalDevice* self, QEvent* event) {
    return self->QBluetoothLocalDevice::event(event);
}

// Auxiliary method to allow providing re-implementation
void QBluetoothLocalDevice_OnEvent(QBluetoothLocalDevice* self, intptr_t slot) {
    if (auto* vqbluetoothlocaldevice = dynamic_cast<VirtualQBluetoothLocalDevice*>(self))
        vqbluetoothlocaldevice->qbluetoothlocaldevice_event_callback = reinterpret_cast<VirtualQBluetoothLocalDevice::QBluetoothLocalDevice_Event_Callback>(slot);
}

// Derived class handler implementation
bool QBluetoothLocalDevice_EventFilter(QBluetoothLocalDevice* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QBluetoothLocalDevice_SuperEventFilter(QBluetoothLocalDevice* self, QObject* watched, QEvent* event) {
    return self->QBluetoothLocalDevice::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QBluetoothLocalDevice_OnEventFilter(QBluetoothLocalDevice* self, intptr_t slot) {
    if (auto* vqbluetoothlocaldevice = dynamic_cast<VirtualQBluetoothLocalDevice*>(self))
        vqbluetoothlocaldevice->qbluetoothlocaldevice_eventfilter_callback = reinterpret_cast<VirtualQBluetoothLocalDevice::QBluetoothLocalDevice_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QBluetoothLocalDevice_TimerEvent(QBluetoothLocalDevice* self, QTimerEvent* event) {
    auto* vqbluetoothlocaldevice = dynamic_cast<VirtualQBluetoothLocalDevice*>(self);
    if (vqbluetoothlocaldevice) {
        vqbluetoothlocaldevice->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QBluetoothLocalDevice::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QBluetoothLocalDevice_SuperTimerEvent(QBluetoothLocalDevice* self, QTimerEvent* event) {
    if (auto* vqbluetoothlocaldevice = dynamic_cast<VirtualQBluetoothLocalDevice*>(self)) {
        vqbluetoothlocaldevice->QBluetoothLocalDevice::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QBluetoothLocalDevice::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QBluetoothLocalDevice_OnTimerEvent(QBluetoothLocalDevice* self, intptr_t slot) {
    if (auto* vqbluetoothlocaldevice = dynamic_cast<VirtualQBluetoothLocalDevice*>(self))
        vqbluetoothlocaldevice->qbluetoothlocaldevice_timerevent_callback = reinterpret_cast<VirtualQBluetoothLocalDevice::QBluetoothLocalDevice_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QBluetoothLocalDevice_ChildEvent(QBluetoothLocalDevice* self, QChildEvent* event) {
    auto* vqbluetoothlocaldevice = dynamic_cast<VirtualQBluetoothLocalDevice*>(self);
    if (vqbluetoothlocaldevice) {
        vqbluetoothlocaldevice->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QBluetoothLocalDevice::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QBluetoothLocalDevice_SuperChildEvent(QBluetoothLocalDevice* self, QChildEvent* event) {
    if (auto* vqbluetoothlocaldevice = dynamic_cast<VirtualQBluetoothLocalDevice*>(self)) {
        vqbluetoothlocaldevice->QBluetoothLocalDevice::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QBluetoothLocalDevice::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QBluetoothLocalDevice_OnChildEvent(QBluetoothLocalDevice* self, intptr_t slot) {
    if (auto* vqbluetoothlocaldevice = dynamic_cast<VirtualQBluetoothLocalDevice*>(self))
        vqbluetoothlocaldevice->qbluetoothlocaldevice_childevent_callback = reinterpret_cast<VirtualQBluetoothLocalDevice::QBluetoothLocalDevice_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QBluetoothLocalDevice_CustomEvent(QBluetoothLocalDevice* self, QEvent* event) {
    auto* vqbluetoothlocaldevice = dynamic_cast<VirtualQBluetoothLocalDevice*>(self);
    if (vqbluetoothlocaldevice) {
        vqbluetoothlocaldevice->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QBluetoothLocalDevice::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QBluetoothLocalDevice_SuperCustomEvent(QBluetoothLocalDevice* self, QEvent* event) {
    if (auto* vqbluetoothlocaldevice = dynamic_cast<VirtualQBluetoothLocalDevice*>(self)) {
        vqbluetoothlocaldevice->QBluetoothLocalDevice::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QBluetoothLocalDevice::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QBluetoothLocalDevice_OnCustomEvent(QBluetoothLocalDevice* self, intptr_t slot) {
    if (auto* vqbluetoothlocaldevice = dynamic_cast<VirtualQBluetoothLocalDevice*>(self))
        vqbluetoothlocaldevice->qbluetoothlocaldevice_customevent_callback = reinterpret_cast<VirtualQBluetoothLocalDevice::QBluetoothLocalDevice_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QBluetoothLocalDevice_ConnectNotify(QBluetoothLocalDevice* self, const QMetaMethod* signal) {
    auto* vqbluetoothlocaldevice = dynamic_cast<VirtualQBluetoothLocalDevice*>(self);
    if (vqbluetoothlocaldevice) {
        vqbluetoothlocaldevice->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QBluetoothLocalDevice::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QBluetoothLocalDevice_SuperConnectNotify(QBluetoothLocalDevice* self, const QMetaMethod* signal) {
    if (auto* vqbluetoothlocaldevice = dynamic_cast<VirtualQBluetoothLocalDevice*>(self)) {
        vqbluetoothlocaldevice->QBluetoothLocalDevice::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QBluetoothLocalDevice::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QBluetoothLocalDevice_OnConnectNotify(QBluetoothLocalDevice* self, intptr_t slot) {
    if (auto* vqbluetoothlocaldevice = dynamic_cast<VirtualQBluetoothLocalDevice*>(self))
        vqbluetoothlocaldevice->qbluetoothlocaldevice_connectnotify_callback = reinterpret_cast<VirtualQBluetoothLocalDevice::QBluetoothLocalDevice_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QBluetoothLocalDevice_DisconnectNotify(QBluetoothLocalDevice* self, const QMetaMethod* signal) {
    auto* vqbluetoothlocaldevice = dynamic_cast<VirtualQBluetoothLocalDevice*>(self);
    if (vqbluetoothlocaldevice) {
        vqbluetoothlocaldevice->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QBluetoothLocalDevice::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QBluetoothLocalDevice_SuperDisconnectNotify(QBluetoothLocalDevice* self, const QMetaMethod* signal) {
    if (auto* vqbluetoothlocaldevice = dynamic_cast<VirtualQBluetoothLocalDevice*>(self)) {
        vqbluetoothlocaldevice->QBluetoothLocalDevice::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QBluetoothLocalDevice::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QBluetoothLocalDevice_OnDisconnectNotify(QBluetoothLocalDevice* self, intptr_t slot) {
    if (auto* vqbluetoothlocaldevice = dynamic_cast<VirtualQBluetoothLocalDevice*>(self))
        vqbluetoothlocaldevice->qbluetoothlocaldevice_disconnectnotify_callback = reinterpret_cast<VirtualQBluetoothLocalDevice::QBluetoothLocalDevice_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* QBluetoothLocalDevice_Sender(const QBluetoothLocalDevice* self) {
    if (auto* vqbluetoothlocaldevice = const_cast<VirtualQBluetoothLocalDevice*>(dynamic_cast<const VirtualQBluetoothLocalDevice*>(self))) {
        return vqbluetoothlocaldevice->VirtualQBluetoothLocalDevice::sender();
    } else
        qFatal("Error: Protected method QBluetoothLocalDevice::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QBluetoothLocalDevice_SenderSignalIndex(const QBluetoothLocalDevice* self) {
    if (auto* vqbluetoothlocaldevice = const_cast<VirtualQBluetoothLocalDevice*>(dynamic_cast<const VirtualQBluetoothLocalDevice*>(self))) {
        return vqbluetoothlocaldevice->VirtualQBluetoothLocalDevice::senderSignalIndex();
    } else
        qFatal("Error: Protected method QBluetoothLocalDevice::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QBluetoothLocalDevice_Receivers(const QBluetoothLocalDevice* self, const char* signal) {
    if (auto* vqbluetoothlocaldevice = const_cast<VirtualQBluetoothLocalDevice*>(dynamic_cast<const VirtualQBluetoothLocalDevice*>(self))) {
        return vqbluetoothlocaldevice->VirtualQBluetoothLocalDevice::receivers(signal);
    } else
        qFatal("Error: Protected method QBluetoothLocalDevice::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QBluetoothLocalDevice_IsSignalConnected(const QBluetoothLocalDevice* self, const QMetaMethod* signal) {
    if (auto* vqbluetoothlocaldevice = const_cast<VirtualQBluetoothLocalDevice*>(dynamic_cast<const VirtualQBluetoothLocalDevice*>(self))) {
        return vqbluetoothlocaldevice->VirtualQBluetoothLocalDevice::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QBluetoothLocalDevice::isSignalConnected called without a directly constructed type");
}

void QBluetoothLocalDevice_Delete(QBluetoothLocalDevice* self) {
    delete self;
}
