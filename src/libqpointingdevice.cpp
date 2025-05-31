#include <QChildEvent>
#include <QEvent>
#include <QEventPoint>
#include <QInputDevice>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QPointerEvent>
#include <QPointingDevice>
#include <QPointingDeviceUniqueId>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <qpointingdevice.h>
#include "libqpointingdevice.h"
#include "libqpointingdevice.hxx"

QPointingDeviceUniqueId* QPointingDeviceUniqueId_new(const QPointingDeviceUniqueId* other) {
    return new QPointingDeviceUniqueId(*other);
}

QPointingDeviceUniqueId* QPointingDeviceUniqueId_new2(QPointingDeviceUniqueId* other) {
    return new QPointingDeviceUniqueId(std::move(*other));
}

QPointingDeviceUniqueId* QPointingDeviceUniqueId_new3() {
    return new QPointingDeviceUniqueId();
}

QPointingDeviceUniqueId* QPointingDeviceUniqueId_new4(const QPointingDeviceUniqueId* param1) {
    return new QPointingDeviceUniqueId(*param1);
}

void QPointingDeviceUniqueId_CopyAssign(QPointingDeviceUniqueId* self, QPointingDeviceUniqueId* other) {
    *self = *other;
}

void QPointingDeviceUniqueId_MoveAssign(QPointingDeviceUniqueId* self, QPointingDeviceUniqueId* other) {
    *self = std::move(*other);
}

QPointingDeviceUniqueId* QPointingDeviceUniqueId_FromNumericId(long long id) {
    return new QPointingDeviceUniqueId(QPointingDeviceUniqueId::fromNumericId(static_cast<qint64>(id)));
}

bool QPointingDeviceUniqueId_IsValid(const QPointingDeviceUniqueId* self) {
    return self->isValid();
}

long long QPointingDeviceUniqueId_NumericId(const QPointingDeviceUniqueId* self) {
    return static_cast<long long>(self->numericId());
}

void QPointingDeviceUniqueId_Delete(QPointingDeviceUniqueId* self) {
    delete self;
}

QPointingDevice* QPointingDevice_new() {
    return new VirtualQPointingDevice();
}

QPointingDevice* QPointingDevice_new2(const libqt_string name, long long systemId, int devType, int pType, int caps, int maxPoints, int buttonCount) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return new VirtualQPointingDevice(name_QString, static_cast<qint64>(systemId), static_cast<QInputDevice::DeviceType>(devType), static_cast<QPointingDevice::PointerType>(pType), static_cast<QInputDevice::Capabilities>(caps), static_cast<int>(maxPoints), static_cast<int>(buttonCount));
}

QPointingDevice* QPointingDevice_new3(QObject* parent) {
    return new VirtualQPointingDevice(parent);
}

QPointingDevice* QPointingDevice_new4(const libqt_string name, long long systemId, int devType, int pType, int caps, int maxPoints, int buttonCount, const libqt_string seatName) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QString seatName_QString = QString::fromUtf8(seatName.data, seatName.len);
    return new VirtualQPointingDevice(name_QString, static_cast<qint64>(systemId), static_cast<QInputDevice::DeviceType>(devType), static_cast<QPointingDevice::PointerType>(pType), static_cast<QInputDevice::Capabilities>(caps), static_cast<int>(maxPoints), static_cast<int>(buttonCount), seatName_QString);
}

QPointingDevice* QPointingDevice_new5(const libqt_string name, long long systemId, int devType, int pType, int caps, int maxPoints, int buttonCount, const libqt_string seatName, QPointingDeviceUniqueId* uniqueId) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QString seatName_QString = QString::fromUtf8(seatName.data, seatName.len);
    return new VirtualQPointingDevice(name_QString, static_cast<qint64>(systemId), static_cast<QInputDevice::DeviceType>(devType), static_cast<QPointingDevice::PointerType>(pType), static_cast<QInputDevice::Capabilities>(caps), static_cast<int>(maxPoints), static_cast<int>(buttonCount), seatName_QString, *uniqueId);
}

QPointingDevice* QPointingDevice_new6(const libqt_string name, long long systemId, int devType, int pType, int caps, int maxPoints, int buttonCount, const libqt_string seatName, QPointingDeviceUniqueId* uniqueId, QObject* parent) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QString seatName_QString = QString::fromUtf8(seatName.data, seatName.len);
    return new VirtualQPointingDevice(name_QString, static_cast<qint64>(systemId), static_cast<QInputDevice::DeviceType>(devType), static_cast<QPointingDevice::PointerType>(pType), static_cast<QInputDevice::Capabilities>(caps), static_cast<int>(maxPoints), static_cast<int>(buttonCount), seatName_QString, *uniqueId, parent);
}

QMetaObject* QPointingDevice_MetaObject(const QPointingDevice* self) {
    return (QMetaObject*)self->metaObject();
}

void* QPointingDevice_Metacast(QPointingDevice* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QPointingDevice_Metacall(QPointingDevice* self, int param1, int param2, void** param3) {
    auto* vqpointingdevice = dynamic_cast<VirtualQPointingDevice*>(self);
    if (vqpointingdevice && vqpointingdevice->isVirtualQPointingDevice) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQPointingDevice*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QPointingDevice_OnMetacall(QPointingDevice* self, intptr_t slot) {
    auto* vqpointingdevice = dynamic_cast<VirtualQPointingDevice*>(self);
    if (vqpointingdevice && vqpointingdevice->isVirtualQPointingDevice) {
        vqpointingdevice->setQPointingDevice_Metacall_Callback(reinterpret_cast<VirtualQPointingDevice::QPointingDevice_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QPointingDevice_QBaseMetacall(QPointingDevice* self, int param1, int param2, void** param3) {
    auto* vqpointingdevice = dynamic_cast<VirtualQPointingDevice*>(self);
    if (vqpointingdevice && vqpointingdevice->isVirtualQPointingDevice) {
        vqpointingdevice->setQPointingDevice_Metacall_IsBase(true);
        return vqpointingdevice->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQPointingDevice*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QPointingDevice_Tr(const char* s) {
    QString _ret = QPointingDevice::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QPointingDevice_SetType(QPointingDevice* self, int devType) {
    self->setType(static_cast<QInputDevice::DeviceType>(devType));
}

void QPointingDevice_SetCapabilities(QPointingDevice* self, int caps) {
    self->setCapabilities(static_cast<QInputDevice::Capabilities>(caps));
}

void QPointingDevice_SetMaximumTouchPoints(QPointingDevice* self, int c) {
    self->setMaximumTouchPoints(static_cast<int>(c));
}

int QPointingDevice_PointerType(const QPointingDevice* self) {
    return static_cast<int>(self->pointerType());
}

int QPointingDevice_MaximumPoints(const QPointingDevice* self) {
    return self->maximumPoints();
}

int QPointingDevice_ButtonCount(const QPointingDevice* self) {
    return self->buttonCount();
}

QPointingDeviceUniqueId* QPointingDevice_UniqueId(const QPointingDevice* self) {
    return new QPointingDeviceUniqueId(self->uniqueId());
}

QPointingDevice* QPointingDevice_PrimaryPointingDevice() {
    return (QPointingDevice*)QPointingDevice::primaryPointingDevice();
}

bool QPointingDevice_OperatorEqual(const QPointingDevice* self, const QPointingDevice* other) {
    return (*self == *other);
}

void QPointingDevice_GrabChanged(const QPointingDevice* self, QObject* grabber, int transition, const QPointerEvent* event, const QEventPoint* point) {
    self->grabChanged(grabber, static_cast<QPointingDevice::GrabTransition>(transition), event, *point);
}

void QPointingDevice_Connect_GrabChanged(QPointingDevice* self, intptr_t slot) {
    void (*slotFunc)(QPointingDevice*, QObject*, int, QPointerEvent*, QEventPoint*) = reinterpret_cast<void (*)(QPointingDevice*, QObject*, int, QPointerEvent*, QEventPoint*)>(slot);
    QPointingDevice::connect(self, &QPointingDevice::grabChanged, [self, slotFunc](QObject* grabber, QPointingDevice::GrabTransition transition, const QPointerEvent* event, const QEventPoint& point) {
        QObject* sigval1 = grabber;
        int sigval2 = static_cast<int>(transition);
        QPointerEvent* sigval3 = (QPointerEvent*)event;
        const QEventPoint& point_ret = point;
        // Cast returned reference into pointer
        QEventPoint* sigval4 = const_cast<QEventPoint*>(&point_ret);
        slotFunc(self, sigval1, sigval2, sigval3, sigval4);
    });
}

libqt_string QPointingDevice_Tr2(const char* s, const char* c) {
    QString _ret = QPointingDevice::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QPointingDevice_Tr3(const char* s, const char* c, int n) {
    QString _ret = QPointingDevice::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

QPointingDevice* QPointingDevice_PrimaryPointingDevice1(const libqt_string seatName) {
    QString seatName_QString = QString::fromUtf8(seatName.data, seatName.len);
    return (QPointingDevice*)QPointingDevice::primaryPointingDevice(seatName_QString);
}

// Derived class handler implementation
bool QPointingDevice_Event(QPointingDevice* self, QEvent* event) {
    auto* vqpointingdevice = dynamic_cast<VirtualQPointingDevice*>(self);
    if (vqpointingdevice && vqpointingdevice->isVirtualQPointingDevice) {
        return vqpointingdevice->event(event);
    } else {
        return self->QPointingDevice::event(event);
    }
}

// Base class handler implementation
bool QPointingDevice_QBaseEvent(QPointingDevice* self, QEvent* event) {
    auto* vqpointingdevice = dynamic_cast<VirtualQPointingDevice*>(self);
    if (vqpointingdevice && vqpointingdevice->isVirtualQPointingDevice) {
        vqpointingdevice->setQPointingDevice_Event_IsBase(true);
        return vqpointingdevice->event(event);
    } else {
        return self->QPointingDevice::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPointingDevice_OnEvent(QPointingDevice* self, intptr_t slot) {
    auto* vqpointingdevice = dynamic_cast<VirtualQPointingDevice*>(self);
    if (vqpointingdevice && vqpointingdevice->isVirtualQPointingDevice) {
        vqpointingdevice->setQPointingDevice_Event_Callback(reinterpret_cast<VirtualQPointingDevice::QPointingDevice_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPointingDevice_EventFilter(QPointingDevice* self, QObject* watched, QEvent* event) {
    auto* vqpointingdevice = dynamic_cast<VirtualQPointingDevice*>(self);
    if (vqpointingdevice && vqpointingdevice->isVirtualQPointingDevice) {
        return vqpointingdevice->eventFilter(watched, event);
    } else {
        return self->QPointingDevice::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QPointingDevice_QBaseEventFilter(QPointingDevice* self, QObject* watched, QEvent* event) {
    auto* vqpointingdevice = dynamic_cast<VirtualQPointingDevice*>(self);
    if (vqpointingdevice && vqpointingdevice->isVirtualQPointingDevice) {
        vqpointingdevice->setQPointingDevice_EventFilter_IsBase(true);
        return vqpointingdevice->eventFilter(watched, event);
    } else {
        return self->QPointingDevice::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPointingDevice_OnEventFilter(QPointingDevice* self, intptr_t slot) {
    auto* vqpointingdevice = dynamic_cast<VirtualQPointingDevice*>(self);
    if (vqpointingdevice && vqpointingdevice->isVirtualQPointingDevice) {
        vqpointingdevice->setQPointingDevice_EventFilter_Callback(reinterpret_cast<VirtualQPointingDevice::QPointingDevice_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QPointingDevice_TimerEvent(QPointingDevice* self, QTimerEvent* event) {
    auto* vqpointingdevice = dynamic_cast<VirtualQPointingDevice*>(self);
    if (vqpointingdevice && vqpointingdevice->isVirtualQPointingDevice) {
        vqpointingdevice->timerEvent(event);
    } else {
        ((VirtualQPointingDevice*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QPointingDevice_QBaseTimerEvent(QPointingDevice* self, QTimerEvent* event) {
    auto* vqpointingdevice = dynamic_cast<VirtualQPointingDevice*>(self);
    if (vqpointingdevice && vqpointingdevice->isVirtualQPointingDevice) {
        vqpointingdevice->setQPointingDevice_TimerEvent_IsBase(true);
        vqpointingdevice->timerEvent(event);
    } else {
        ((VirtualQPointingDevice*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPointingDevice_OnTimerEvent(QPointingDevice* self, intptr_t slot) {
    auto* vqpointingdevice = dynamic_cast<VirtualQPointingDevice*>(self);
    if (vqpointingdevice && vqpointingdevice->isVirtualQPointingDevice) {
        vqpointingdevice->setQPointingDevice_TimerEvent_Callback(reinterpret_cast<VirtualQPointingDevice::QPointingDevice_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPointingDevice_ChildEvent(QPointingDevice* self, QChildEvent* event) {
    auto* vqpointingdevice = dynamic_cast<VirtualQPointingDevice*>(self);
    if (vqpointingdevice && vqpointingdevice->isVirtualQPointingDevice) {
        vqpointingdevice->childEvent(event);
    } else {
        ((VirtualQPointingDevice*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QPointingDevice_QBaseChildEvent(QPointingDevice* self, QChildEvent* event) {
    auto* vqpointingdevice = dynamic_cast<VirtualQPointingDevice*>(self);
    if (vqpointingdevice && vqpointingdevice->isVirtualQPointingDevice) {
        vqpointingdevice->setQPointingDevice_ChildEvent_IsBase(true);
        vqpointingdevice->childEvent(event);
    } else {
        ((VirtualQPointingDevice*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPointingDevice_OnChildEvent(QPointingDevice* self, intptr_t slot) {
    auto* vqpointingdevice = dynamic_cast<VirtualQPointingDevice*>(self);
    if (vqpointingdevice && vqpointingdevice->isVirtualQPointingDevice) {
        vqpointingdevice->setQPointingDevice_ChildEvent_Callback(reinterpret_cast<VirtualQPointingDevice::QPointingDevice_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPointingDevice_CustomEvent(QPointingDevice* self, QEvent* event) {
    auto* vqpointingdevice = dynamic_cast<VirtualQPointingDevice*>(self);
    if (vqpointingdevice && vqpointingdevice->isVirtualQPointingDevice) {
        vqpointingdevice->customEvent(event);
    } else {
        ((VirtualQPointingDevice*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QPointingDevice_QBaseCustomEvent(QPointingDevice* self, QEvent* event) {
    auto* vqpointingdevice = dynamic_cast<VirtualQPointingDevice*>(self);
    if (vqpointingdevice && vqpointingdevice->isVirtualQPointingDevice) {
        vqpointingdevice->setQPointingDevice_CustomEvent_IsBase(true);
        vqpointingdevice->customEvent(event);
    } else {
        ((VirtualQPointingDevice*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPointingDevice_OnCustomEvent(QPointingDevice* self, intptr_t slot) {
    auto* vqpointingdevice = dynamic_cast<VirtualQPointingDevice*>(self);
    if (vqpointingdevice && vqpointingdevice->isVirtualQPointingDevice) {
        vqpointingdevice->setQPointingDevice_CustomEvent_Callback(reinterpret_cast<VirtualQPointingDevice::QPointingDevice_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPointingDevice_ConnectNotify(QPointingDevice* self, const QMetaMethod* signal) {
    auto* vqpointingdevice = dynamic_cast<VirtualQPointingDevice*>(self);
    if (vqpointingdevice && vqpointingdevice->isVirtualQPointingDevice) {
        vqpointingdevice->connectNotify(*signal);
    } else {
        ((VirtualQPointingDevice*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QPointingDevice_QBaseConnectNotify(QPointingDevice* self, const QMetaMethod* signal) {
    auto* vqpointingdevice = dynamic_cast<VirtualQPointingDevice*>(self);
    if (vqpointingdevice && vqpointingdevice->isVirtualQPointingDevice) {
        vqpointingdevice->setQPointingDevice_ConnectNotify_IsBase(true);
        vqpointingdevice->connectNotify(*signal);
    } else {
        ((VirtualQPointingDevice*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QPointingDevice_OnConnectNotify(QPointingDevice* self, intptr_t slot) {
    auto* vqpointingdevice = dynamic_cast<VirtualQPointingDevice*>(self);
    if (vqpointingdevice && vqpointingdevice->isVirtualQPointingDevice) {
        vqpointingdevice->setQPointingDevice_ConnectNotify_Callback(reinterpret_cast<VirtualQPointingDevice::QPointingDevice_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QPointingDevice_DisconnectNotify(QPointingDevice* self, const QMetaMethod* signal) {
    auto* vqpointingdevice = dynamic_cast<VirtualQPointingDevice*>(self);
    if (vqpointingdevice && vqpointingdevice->isVirtualQPointingDevice) {
        vqpointingdevice->disconnectNotify(*signal);
    } else {
        ((VirtualQPointingDevice*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QPointingDevice_QBaseDisconnectNotify(QPointingDevice* self, const QMetaMethod* signal) {
    auto* vqpointingdevice = dynamic_cast<VirtualQPointingDevice*>(self);
    if (vqpointingdevice && vqpointingdevice->isVirtualQPointingDevice) {
        vqpointingdevice->setQPointingDevice_DisconnectNotify_IsBase(true);
        vqpointingdevice->disconnectNotify(*signal);
    } else {
        ((VirtualQPointingDevice*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QPointingDevice_OnDisconnectNotify(QPointingDevice* self, intptr_t slot) {
    auto* vqpointingdevice = dynamic_cast<VirtualQPointingDevice*>(self);
    if (vqpointingdevice && vqpointingdevice->isVirtualQPointingDevice) {
        vqpointingdevice->setQPointingDevice_DisconnectNotify_Callback(reinterpret_cast<VirtualQPointingDevice::QPointingDevice_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QPointingDevice_Sender(const QPointingDevice* self) {
    auto* vqpointingdevice = const_cast<VirtualQPointingDevice*>(dynamic_cast<const VirtualQPointingDevice*>(self));
    if (vqpointingdevice && vqpointingdevice->isVirtualQPointingDevice) {
        return vqpointingdevice->sender();
    } else {
        return ((VirtualQPointingDevice*)self)->sender();
    }
}

// Base class handler implementation
QObject* QPointingDevice_QBaseSender(const QPointingDevice* self) {
    auto* vqpointingdevice = const_cast<VirtualQPointingDevice*>(dynamic_cast<const VirtualQPointingDevice*>(self));
    if (vqpointingdevice && vqpointingdevice->isVirtualQPointingDevice) {
        vqpointingdevice->setQPointingDevice_Sender_IsBase(true);
        return vqpointingdevice->sender();
    } else {
        return ((VirtualQPointingDevice*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QPointingDevice_OnSender(const QPointingDevice* self, intptr_t slot) {
    auto* vqpointingdevice = const_cast<VirtualQPointingDevice*>(dynamic_cast<const VirtualQPointingDevice*>(self));
    if (vqpointingdevice && vqpointingdevice->isVirtualQPointingDevice) {
        vqpointingdevice->setQPointingDevice_Sender_Callback(reinterpret_cast<VirtualQPointingDevice::QPointingDevice_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QPointingDevice_SenderSignalIndex(const QPointingDevice* self) {
    auto* vqpointingdevice = const_cast<VirtualQPointingDevice*>(dynamic_cast<const VirtualQPointingDevice*>(self));
    if (vqpointingdevice && vqpointingdevice->isVirtualQPointingDevice) {
        return vqpointingdevice->senderSignalIndex();
    } else {
        return ((VirtualQPointingDevice*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QPointingDevice_QBaseSenderSignalIndex(const QPointingDevice* self) {
    auto* vqpointingdevice = const_cast<VirtualQPointingDevice*>(dynamic_cast<const VirtualQPointingDevice*>(self));
    if (vqpointingdevice && vqpointingdevice->isVirtualQPointingDevice) {
        vqpointingdevice->setQPointingDevice_SenderSignalIndex_IsBase(true);
        return vqpointingdevice->senderSignalIndex();
    } else {
        return ((VirtualQPointingDevice*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QPointingDevice_OnSenderSignalIndex(const QPointingDevice* self, intptr_t slot) {
    auto* vqpointingdevice = const_cast<VirtualQPointingDevice*>(dynamic_cast<const VirtualQPointingDevice*>(self));
    if (vqpointingdevice && vqpointingdevice->isVirtualQPointingDevice) {
        vqpointingdevice->setQPointingDevice_SenderSignalIndex_Callback(reinterpret_cast<VirtualQPointingDevice::QPointingDevice_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QPointingDevice_Receivers(const QPointingDevice* self, const char* signal) {
    auto* vqpointingdevice = const_cast<VirtualQPointingDevice*>(dynamic_cast<const VirtualQPointingDevice*>(self));
    if (vqpointingdevice && vqpointingdevice->isVirtualQPointingDevice) {
        return vqpointingdevice->receivers(signal);
    } else {
        return ((VirtualQPointingDevice*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QPointingDevice_QBaseReceivers(const QPointingDevice* self, const char* signal) {
    auto* vqpointingdevice = const_cast<VirtualQPointingDevice*>(dynamic_cast<const VirtualQPointingDevice*>(self));
    if (vqpointingdevice && vqpointingdevice->isVirtualQPointingDevice) {
        vqpointingdevice->setQPointingDevice_Receivers_IsBase(true);
        return vqpointingdevice->receivers(signal);
    } else {
        return ((VirtualQPointingDevice*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QPointingDevice_OnReceivers(const QPointingDevice* self, intptr_t slot) {
    auto* vqpointingdevice = const_cast<VirtualQPointingDevice*>(dynamic_cast<const VirtualQPointingDevice*>(self));
    if (vqpointingdevice && vqpointingdevice->isVirtualQPointingDevice) {
        vqpointingdevice->setQPointingDevice_Receivers_Callback(reinterpret_cast<VirtualQPointingDevice::QPointingDevice_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPointingDevice_IsSignalConnected(const QPointingDevice* self, const QMetaMethod* signal) {
    auto* vqpointingdevice = const_cast<VirtualQPointingDevice*>(dynamic_cast<const VirtualQPointingDevice*>(self));
    if (vqpointingdevice && vqpointingdevice->isVirtualQPointingDevice) {
        return vqpointingdevice->isSignalConnected(*signal);
    } else {
        return ((VirtualQPointingDevice*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QPointingDevice_QBaseIsSignalConnected(const QPointingDevice* self, const QMetaMethod* signal) {
    auto* vqpointingdevice = const_cast<VirtualQPointingDevice*>(dynamic_cast<const VirtualQPointingDevice*>(self));
    if (vqpointingdevice && vqpointingdevice->isVirtualQPointingDevice) {
        vqpointingdevice->setQPointingDevice_IsSignalConnected_IsBase(true);
        return vqpointingdevice->isSignalConnected(*signal);
    } else {
        return ((VirtualQPointingDevice*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QPointingDevice_OnIsSignalConnected(const QPointingDevice* self, intptr_t slot) {
    auto* vqpointingdevice = const_cast<VirtualQPointingDevice*>(dynamic_cast<const VirtualQPointingDevice*>(self));
    if (vqpointingdevice && vqpointingdevice->isVirtualQPointingDevice) {
        vqpointingdevice->setQPointingDevice_IsSignalConnected_Callback(reinterpret_cast<VirtualQPointingDevice::QPointingDevice_IsSignalConnected_Callback>(slot));
    }
}

void QPointingDevice_Delete(QPointingDevice* self) {
    delete self;
}
