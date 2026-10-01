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

size_t qpointingdevice_h_QHash(QPointingDeviceUniqueId* key, size_t seed) {
    return qHash(*key, static_cast<size_t>(seed));
}

QPointingDevice* QPointingDevice_new() {
    return new VirtualQPointingDevice();
}

QPointingDevice* QPointingDevice_new2(const libqt_string name, long long systemId, int devType, int pType, int caps, int maxPoints, int buttonCount) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return new VirtualQPointingDevice(name_QString, static_cast<qint64>(systemId), static_cast<QInputDevice::DeviceType>(devType), static_cast<QPointingDevice::PointerType>(pType), static_cast<QFlags<QInputDevice::Capability>>(caps), static_cast<int>(maxPoints), static_cast<int>(buttonCount));
}

QPointingDevice* QPointingDevice_new3(QObject* parent) {
    return new VirtualQPointingDevice(parent);
}

QPointingDevice* QPointingDevice_new4(const libqt_string name, long long systemId, int devType, int pType, int caps, int maxPoints, int buttonCount, const libqt_string seatName) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QString seatName_QString = QString::fromUtf8(seatName.data, seatName.len);
    return new VirtualQPointingDevice(name_QString, static_cast<qint64>(systemId), static_cast<QInputDevice::DeviceType>(devType), static_cast<QPointingDevice::PointerType>(pType), static_cast<QFlags<QInputDevice::Capability>>(caps), static_cast<int>(maxPoints), static_cast<int>(buttonCount), seatName_QString);
}

QPointingDevice* QPointingDevice_new5(const libqt_string name, long long systemId, int devType, int pType, int caps, int maxPoints, int buttonCount, const libqt_string seatName, QPointingDeviceUniqueId* uniqueId) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QString seatName_QString = QString::fromUtf8(seatName.data, seatName.len);
    return new VirtualQPointingDevice(name_QString, static_cast<qint64>(systemId), static_cast<QInputDevice::DeviceType>(devType), static_cast<QPointingDevice::PointerType>(pType), static_cast<QFlags<QInputDevice::Capability>>(caps), static_cast<int>(maxPoints), static_cast<int>(buttonCount), seatName_QString, *uniqueId);
}

QPointingDevice* QPointingDevice_new6(const libqt_string name, long long systemId, int devType, int pType, int caps, int maxPoints, int buttonCount, const libqt_string seatName, QPointingDeviceUniqueId* uniqueId, QObject* parent) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QString seatName_QString = QString::fromUtf8(seatName.data, seatName.len);
    return new VirtualQPointingDevice(name_QString, static_cast<qint64>(systemId), static_cast<QInputDevice::DeviceType>(devType), static_cast<QPointingDevice::PointerType>(pType), static_cast<QFlags<QInputDevice::Capability>>(caps), static_cast<int>(maxPoints), static_cast<int>(buttonCount), seatName_QString, *uniqueId, parent);
}

QMetaObject* QPointingDevice_MetaObject(const QPointingDevice* self) {
    return (QMetaObject*)self->metaObject();
}

void* QPointingDevice_Metacast(QPointingDevice* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QPointingDevice_Metacall(QPointingDevice* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QPointingDevice_Tr(const char* s) {
    auto _ret = QPointingDevice::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
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

void QPointingDevice_Connect_GrabChanged(const QPointingDevice* self, intptr_t slot) {
    void (*slotFunc)(const QPointingDevice*, QObject*, int, QPointerEvent*, QEventPoint*) = reinterpret_cast<void (*)(const QPointingDevice*, QObject*, int, QPointerEvent*, QEventPoint*)>(slot);
    QPointingDevice::connect(self,
                             static_cast<void (QPointingDevice::*)(QObject*, QPointingDevice::GrabTransition, const QPointerEvent*, const QEventPoint&) const>(&QPointingDevice::grabChanged),
                             [self, slotFunc](QObject* grabber, QPointingDevice::GrabTransition transition, const QPointerEvent* event, const QEventPoint& point) {
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
    auto _ret = QPointingDevice::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QPointingDevice_Tr3(const char* s, const char* c, int n) {
    auto _ret = QPointingDevice::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QPointingDevice* QPointingDevice_PrimaryPointingDevice1(const libqt_string seatName) {
    QString seatName_QString = QString::fromUtf8(seatName.data, seatName.len);
    return (QPointingDevice*)QPointingDevice::primaryPointingDevice(seatName_QString);
}

// Base class handler implementation
QMetaObject* QPointingDevice_SuperMetaObject(const QPointingDevice* self) {
    return (QMetaObject*)self->QPointingDevice::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QPointingDevice_OnMetaObject(QPointingDevice* self, intptr_t slot) {
    if (auto* vqpointingdevice = const_cast<VirtualQPointingDevice*>(dynamic_cast<const VirtualQPointingDevice*>(self)))
        vqpointingdevice->qpointingdevice_metaobject_callback = reinterpret_cast<VirtualQPointingDevice::QPointingDevice_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QPointingDevice_SuperMetacast(QPointingDevice* self, const char* param1) {
    return self->QPointingDevice::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QPointingDevice_OnMetacast(QPointingDevice* self, intptr_t slot) {
    if (auto* vqpointingdevice = dynamic_cast<VirtualQPointingDevice*>(self))
        vqpointingdevice->qpointingdevice_metacast_callback = reinterpret_cast<VirtualQPointingDevice::QPointingDevice_Metacast_Callback>(slot);
}

// Base class handler implementation
int QPointingDevice_SuperMetacall(QPointingDevice* self, int param1, int param2, void** param3) {
    return self->QPointingDevice::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QPointingDevice_OnMetacall(QPointingDevice* self, intptr_t slot) {
    if (auto* vqpointingdevice = dynamic_cast<VirtualQPointingDevice*>(self))
        vqpointingdevice->qpointingdevice_metacall_callback = reinterpret_cast<VirtualQPointingDevice::QPointingDevice_Metacall_Callback>(slot);
}

// Derived class handler implementation
bool QPointingDevice_Event(QPointingDevice* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QPointingDevice_SuperEvent(QPointingDevice* self, QEvent* event) {
    return self->QPointingDevice::event(event);
}

// Auxiliary method to allow providing re-implementation
void QPointingDevice_OnEvent(QPointingDevice* self, intptr_t slot) {
    if (auto* vqpointingdevice = dynamic_cast<VirtualQPointingDevice*>(self))
        vqpointingdevice->qpointingdevice_event_callback = reinterpret_cast<VirtualQPointingDevice::QPointingDevice_Event_Callback>(slot);
}

// Derived class handler implementation
bool QPointingDevice_EventFilter(QPointingDevice* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QPointingDevice_SuperEventFilter(QPointingDevice* self, QObject* watched, QEvent* event) {
    return self->QPointingDevice::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QPointingDevice_OnEventFilter(QPointingDevice* self, intptr_t slot) {
    if (auto* vqpointingdevice = dynamic_cast<VirtualQPointingDevice*>(self))
        vqpointingdevice->qpointingdevice_eventfilter_callback = reinterpret_cast<VirtualQPointingDevice::QPointingDevice_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QPointingDevice_TimerEvent(QPointingDevice* self, QTimerEvent* event) {
    auto* vqpointingdevice = dynamic_cast<VirtualQPointingDevice*>(self);
    if (vqpointingdevice) {
        vqpointingdevice->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPointingDevice::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPointingDevice_SuperTimerEvent(QPointingDevice* self, QTimerEvent* event) {
    if (auto* vqpointingdevice = dynamic_cast<VirtualQPointingDevice*>(self)) {
        vqpointingdevice->QPointingDevice::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QPointingDevice::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPointingDevice_OnTimerEvent(QPointingDevice* self, intptr_t slot) {
    if (auto* vqpointingdevice = dynamic_cast<VirtualQPointingDevice*>(self))
        vqpointingdevice->qpointingdevice_timerevent_callback = reinterpret_cast<VirtualQPointingDevice::QPointingDevice_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QPointingDevice_ChildEvent(QPointingDevice* self, QChildEvent* event) {
    auto* vqpointingdevice = dynamic_cast<VirtualQPointingDevice*>(self);
    if (vqpointingdevice) {
        vqpointingdevice->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPointingDevice::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPointingDevice_SuperChildEvent(QPointingDevice* self, QChildEvent* event) {
    if (auto* vqpointingdevice = dynamic_cast<VirtualQPointingDevice*>(self)) {
        vqpointingdevice->QPointingDevice::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QPointingDevice::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPointingDevice_OnChildEvent(QPointingDevice* self, intptr_t slot) {
    if (auto* vqpointingdevice = dynamic_cast<VirtualQPointingDevice*>(self))
        vqpointingdevice->qpointingdevice_childevent_callback = reinterpret_cast<VirtualQPointingDevice::QPointingDevice_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QPointingDevice_CustomEvent(QPointingDevice* self, QEvent* event) {
    auto* vqpointingdevice = dynamic_cast<VirtualQPointingDevice*>(self);
    if (vqpointingdevice) {
        vqpointingdevice->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPointingDevice::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPointingDevice_SuperCustomEvent(QPointingDevice* self, QEvent* event) {
    if (auto* vqpointingdevice = dynamic_cast<VirtualQPointingDevice*>(self)) {
        vqpointingdevice->QPointingDevice::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QPointingDevice::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPointingDevice_OnCustomEvent(QPointingDevice* self, intptr_t slot) {
    if (auto* vqpointingdevice = dynamic_cast<VirtualQPointingDevice*>(self))
        vqpointingdevice->qpointingdevice_customevent_callback = reinterpret_cast<VirtualQPointingDevice::QPointingDevice_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QPointingDevice_ConnectNotify(QPointingDevice* self, const QMetaMethod* signal) {
    auto* vqpointingdevice = dynamic_cast<VirtualQPointingDevice*>(self);
    if (vqpointingdevice) {
        vqpointingdevice->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QPointingDevice::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QPointingDevice_SuperConnectNotify(QPointingDevice* self, const QMetaMethod* signal) {
    if (auto* vqpointingdevice = dynamic_cast<VirtualQPointingDevice*>(self)) {
        vqpointingdevice->QPointingDevice::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QPointingDevice::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPointingDevice_OnConnectNotify(QPointingDevice* self, intptr_t slot) {
    if (auto* vqpointingdevice = dynamic_cast<VirtualQPointingDevice*>(self))
        vqpointingdevice->qpointingdevice_connectnotify_callback = reinterpret_cast<VirtualQPointingDevice::QPointingDevice_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QPointingDevice_DisconnectNotify(QPointingDevice* self, const QMetaMethod* signal) {
    auto* vqpointingdevice = dynamic_cast<VirtualQPointingDevice*>(self);
    if (vqpointingdevice) {
        vqpointingdevice->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QPointingDevice::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QPointingDevice_SuperDisconnectNotify(QPointingDevice* self, const QMetaMethod* signal) {
    if (auto* vqpointingdevice = dynamic_cast<VirtualQPointingDevice*>(self)) {
        vqpointingdevice->QPointingDevice::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QPointingDevice::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPointingDevice_OnDisconnectNotify(QPointingDevice* self, intptr_t slot) {
    if (auto* vqpointingdevice = dynamic_cast<VirtualQPointingDevice*>(self))
        vqpointingdevice->qpointingdevice_disconnectnotify_callback = reinterpret_cast<VirtualQPointingDevice::QPointingDevice_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* QPointingDevice_Sender(const QPointingDevice* self) {
    if (auto* vqpointingdevice = const_cast<VirtualQPointingDevice*>(dynamic_cast<const VirtualQPointingDevice*>(self))) {
        return vqpointingdevice->VirtualQPointingDevice::sender();
    } else
        qFatal("Error: Protected method QPointingDevice::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QPointingDevice_SenderSignalIndex(const QPointingDevice* self) {
    if (auto* vqpointingdevice = const_cast<VirtualQPointingDevice*>(dynamic_cast<const VirtualQPointingDevice*>(self))) {
        return vqpointingdevice->VirtualQPointingDevice::senderSignalIndex();
    } else
        qFatal("Error: Protected method QPointingDevice::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QPointingDevice_Receivers(const QPointingDevice* self, const char* signal) {
    if (auto* vqpointingdevice = const_cast<VirtualQPointingDevice*>(dynamic_cast<const VirtualQPointingDevice*>(self))) {
        return vqpointingdevice->VirtualQPointingDevice::receivers(signal);
    } else
        qFatal("Error: Protected method QPointingDevice::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QPointingDevice_IsSignalConnected(const QPointingDevice* self, const QMetaMethod* signal) {
    if (auto* vqpointingdevice = const_cast<VirtualQPointingDevice*>(dynamic_cast<const VirtualQPointingDevice*>(self))) {
        return vqpointingdevice->VirtualQPointingDevice::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QPointingDevice::isSignalConnected called without a directly constructed type");
}

void QPointingDevice_Delete(QPointingDevice* self) {
    delete self;
}
