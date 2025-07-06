#include <QChildEvent>
#include <QEvent>
#include <QInputDevice>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QRect>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <qinputdevice.h>
#include "libqinputdevice.h"
#include "libqinputdevice.hxx"

QInputDevice* QInputDevice_new() {
    return new VirtualQInputDevice();
}

QInputDevice* QInputDevice_new2(const libqt_string name, long long systemId, int typeVal) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return new VirtualQInputDevice(name_QString, static_cast<qint64>(systemId), static_cast<QInputDevice::DeviceType>(typeVal));
}

QInputDevice* QInputDevice_new3(QObject* parent) {
    return new VirtualQInputDevice(parent);
}

QInputDevice* QInputDevice_new4(const libqt_string name, long long systemId, int typeVal, const libqt_string seatName) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QString seatName_QString = QString::fromUtf8(seatName.data, seatName.len);
    return new VirtualQInputDevice(name_QString, static_cast<qint64>(systemId), static_cast<QInputDevice::DeviceType>(typeVal), seatName_QString);
}

QInputDevice* QInputDevice_new5(const libqt_string name, long long systemId, int typeVal, const libqt_string seatName, QObject* parent) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QString seatName_QString = QString::fromUtf8(seatName.data, seatName.len);
    return new VirtualQInputDevice(name_QString, static_cast<qint64>(systemId), static_cast<QInputDevice::DeviceType>(typeVal), seatName_QString, parent);
}

QMetaObject* QInputDevice_MetaObject(const QInputDevice* self) {
    return (QMetaObject*)self->metaObject();
}

void* QInputDevice_Metacast(QInputDevice* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QInputDevice_Metacall(QInputDevice* self, int param1, int param2, void** param3) {
    auto* vqinputdevice = dynamic_cast<VirtualQInputDevice*>(self);
    if (vqinputdevice && vqinputdevice->isVirtualQInputDevice) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQInputDevice*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QInputDevice_OnMetacall(QInputDevice* self, intptr_t slot) {
    auto* vqinputdevice = dynamic_cast<VirtualQInputDevice*>(self);
    if (vqinputdevice && vqinputdevice->isVirtualQInputDevice) {
        vqinputdevice->setQInputDevice_Metacall_Callback(reinterpret_cast<VirtualQInputDevice::QInputDevice_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QInputDevice_QBaseMetacall(QInputDevice* self, int param1, int param2, void** param3) {
    auto* vqinputdevice = dynamic_cast<VirtualQInputDevice*>(self);
    if (vqinputdevice && vqinputdevice->isVirtualQInputDevice) {
        vqinputdevice->setQInputDevice_Metacall_IsBase(true);
        return vqinputdevice->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQInputDevice*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QInputDevice_Tr(const char* s) {
    QString _ret = QInputDevice::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QInputDevice_Name(const QInputDevice* self) {
    QString _ret = self->name();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int QInputDevice_Type(const QInputDevice* self) {
    return static_cast<int>(self->type());
}

int QInputDevice_Capabilities(const QInputDevice* self) {
    return static_cast<int>(self->capabilities());
}

bool QInputDevice_HasCapability(const QInputDevice* self, int cap) {
    return self->hasCapability(static_cast<QInputDevice::Capability>(cap));
}

long long QInputDevice_SystemId(const QInputDevice* self) {
    return static_cast<long long>(self->systemId());
}

libqt_string QInputDevice_SeatName(const QInputDevice* self) {
    QString _ret = self->seatName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QRect* QInputDevice_AvailableVirtualGeometry(const QInputDevice* self) {
    return new QRect(self->availableVirtualGeometry());
}

libqt_list /* of libqt_string */ QInputDevice_SeatNames() {
    QList<QString> _ret = QInputDevice::seatNames();
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.size()));
    for (size_t i = 0; i < _ret.size(); ++i) {
        QString _lv_ret = _ret[i];
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _lv_b = _lv_ret.toUtf8();
        libqt_string _lv_str;
        _lv_str.len = _lv_b.length();
        _lv_str.data = static_cast<const char*>(malloc((_lv_str.len + 1) * sizeof(char)));
        memcpy((void*)_lv_str.data, _lv_b.data(), _lv_str.len);
        ((char*)_lv_str.data)[_lv_str.len] = '\0';
        _arr[i] = _lv_str;
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_list /* of QInputDevice* */ QInputDevice_Devices() {
    QList<const QInputDevice*> _ret = QInputDevice::devices();
    // Convert QList<> from C++ memory to manually-managed C memory
    QInputDevice** _arr = static_cast<QInputDevice**>(malloc(sizeof(QInputDevice*) * _ret.size()));
    for (size_t i = 0; i < _ret.size(); ++i) {
        _arr[i] = (QInputDevice*)_ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

QInputDevice* QInputDevice_PrimaryKeyboard() {
    return (QInputDevice*)QInputDevice::primaryKeyboard();
}

bool QInputDevice_OperatorEqual(const QInputDevice* self, const QInputDevice* other) {
    return (*self == *other);
}

void QInputDevice_AvailableVirtualGeometryChanged(QInputDevice* self, QRect* area) {
    self->availableVirtualGeometryChanged(*area);
}

void QInputDevice_Connect_AvailableVirtualGeometryChanged(QInputDevice* self, intptr_t slot) {
    void (*slotFunc)(QInputDevice*, QRect*) = reinterpret_cast<void (*)(QInputDevice*, QRect*)>(slot);
    QInputDevice::connect(self, &QInputDevice::availableVirtualGeometryChanged, [self, slotFunc](QRect area) {
        QRect* sigval1 = new QRect(area);
        slotFunc(self, sigval1);
    });
}

libqt_string QInputDevice_Tr2(const char* s, const char* c) {
    QString _ret = QInputDevice::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QInputDevice_Tr3(const char* s, const char* c, int n) {
    QString _ret = QInputDevice::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QInputDevice* QInputDevice_PrimaryKeyboard1(const libqt_string seatName) {
    QString seatName_QString = QString::fromUtf8(seatName.data, seatName.len);
    return (QInputDevice*)QInputDevice::primaryKeyboard(seatName_QString);
}

// Derived class handler implementation
bool QInputDevice_Event(QInputDevice* self, QEvent* event) {
    auto* vqinputdevice = dynamic_cast<VirtualQInputDevice*>(self);
    if (vqinputdevice && vqinputdevice->isVirtualQInputDevice) {
        return vqinputdevice->event(event);
    } else {
        return self->QInputDevice::event(event);
    }
}

// Base class handler implementation
bool QInputDevice_QBaseEvent(QInputDevice* self, QEvent* event) {
    auto* vqinputdevice = dynamic_cast<VirtualQInputDevice*>(self);
    if (vqinputdevice && vqinputdevice->isVirtualQInputDevice) {
        vqinputdevice->setQInputDevice_Event_IsBase(true);
        return vqinputdevice->event(event);
    } else {
        return self->QInputDevice::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QInputDevice_OnEvent(QInputDevice* self, intptr_t slot) {
    auto* vqinputdevice = dynamic_cast<VirtualQInputDevice*>(self);
    if (vqinputdevice && vqinputdevice->isVirtualQInputDevice) {
        vqinputdevice->setQInputDevice_Event_Callback(reinterpret_cast<VirtualQInputDevice::QInputDevice_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QInputDevice_EventFilter(QInputDevice* self, QObject* watched, QEvent* event) {
    auto* vqinputdevice = dynamic_cast<VirtualQInputDevice*>(self);
    if (vqinputdevice && vqinputdevice->isVirtualQInputDevice) {
        return vqinputdevice->eventFilter(watched, event);
    } else {
        return self->QInputDevice::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QInputDevice_QBaseEventFilter(QInputDevice* self, QObject* watched, QEvent* event) {
    auto* vqinputdevice = dynamic_cast<VirtualQInputDevice*>(self);
    if (vqinputdevice && vqinputdevice->isVirtualQInputDevice) {
        vqinputdevice->setQInputDevice_EventFilter_IsBase(true);
        return vqinputdevice->eventFilter(watched, event);
    } else {
        return self->QInputDevice::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QInputDevice_OnEventFilter(QInputDevice* self, intptr_t slot) {
    auto* vqinputdevice = dynamic_cast<VirtualQInputDevice*>(self);
    if (vqinputdevice && vqinputdevice->isVirtualQInputDevice) {
        vqinputdevice->setQInputDevice_EventFilter_Callback(reinterpret_cast<VirtualQInputDevice::QInputDevice_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QInputDevice_TimerEvent(QInputDevice* self, QTimerEvent* event) {
    auto* vqinputdevice = dynamic_cast<VirtualQInputDevice*>(self);
    if (vqinputdevice && vqinputdevice->isVirtualQInputDevice) {
        vqinputdevice->timerEvent(event);
    } else {
        ((VirtualQInputDevice*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QInputDevice_QBaseTimerEvent(QInputDevice* self, QTimerEvent* event) {
    auto* vqinputdevice = dynamic_cast<VirtualQInputDevice*>(self);
    if (vqinputdevice && vqinputdevice->isVirtualQInputDevice) {
        vqinputdevice->setQInputDevice_TimerEvent_IsBase(true);
        vqinputdevice->timerEvent(event);
    } else {
        ((VirtualQInputDevice*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QInputDevice_OnTimerEvent(QInputDevice* self, intptr_t slot) {
    auto* vqinputdevice = dynamic_cast<VirtualQInputDevice*>(self);
    if (vqinputdevice && vqinputdevice->isVirtualQInputDevice) {
        vqinputdevice->setQInputDevice_TimerEvent_Callback(reinterpret_cast<VirtualQInputDevice::QInputDevice_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QInputDevice_ChildEvent(QInputDevice* self, QChildEvent* event) {
    auto* vqinputdevice = dynamic_cast<VirtualQInputDevice*>(self);
    if (vqinputdevice && vqinputdevice->isVirtualQInputDevice) {
        vqinputdevice->childEvent(event);
    } else {
        ((VirtualQInputDevice*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QInputDevice_QBaseChildEvent(QInputDevice* self, QChildEvent* event) {
    auto* vqinputdevice = dynamic_cast<VirtualQInputDevice*>(self);
    if (vqinputdevice && vqinputdevice->isVirtualQInputDevice) {
        vqinputdevice->setQInputDevice_ChildEvent_IsBase(true);
        vqinputdevice->childEvent(event);
    } else {
        ((VirtualQInputDevice*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QInputDevice_OnChildEvent(QInputDevice* self, intptr_t slot) {
    auto* vqinputdevice = dynamic_cast<VirtualQInputDevice*>(self);
    if (vqinputdevice && vqinputdevice->isVirtualQInputDevice) {
        vqinputdevice->setQInputDevice_ChildEvent_Callback(reinterpret_cast<VirtualQInputDevice::QInputDevice_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QInputDevice_CustomEvent(QInputDevice* self, QEvent* event) {
    auto* vqinputdevice = dynamic_cast<VirtualQInputDevice*>(self);
    if (vqinputdevice && vqinputdevice->isVirtualQInputDevice) {
        vqinputdevice->customEvent(event);
    } else {
        ((VirtualQInputDevice*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QInputDevice_QBaseCustomEvent(QInputDevice* self, QEvent* event) {
    auto* vqinputdevice = dynamic_cast<VirtualQInputDevice*>(self);
    if (vqinputdevice && vqinputdevice->isVirtualQInputDevice) {
        vqinputdevice->setQInputDevice_CustomEvent_IsBase(true);
        vqinputdevice->customEvent(event);
    } else {
        ((VirtualQInputDevice*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QInputDevice_OnCustomEvent(QInputDevice* self, intptr_t slot) {
    auto* vqinputdevice = dynamic_cast<VirtualQInputDevice*>(self);
    if (vqinputdevice && vqinputdevice->isVirtualQInputDevice) {
        vqinputdevice->setQInputDevice_CustomEvent_Callback(reinterpret_cast<VirtualQInputDevice::QInputDevice_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QInputDevice_ConnectNotify(QInputDevice* self, const QMetaMethod* signal) {
    auto* vqinputdevice = dynamic_cast<VirtualQInputDevice*>(self);
    if (vqinputdevice && vqinputdevice->isVirtualQInputDevice) {
        vqinputdevice->connectNotify(*signal);
    } else {
        ((VirtualQInputDevice*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QInputDevice_QBaseConnectNotify(QInputDevice* self, const QMetaMethod* signal) {
    auto* vqinputdevice = dynamic_cast<VirtualQInputDevice*>(self);
    if (vqinputdevice && vqinputdevice->isVirtualQInputDevice) {
        vqinputdevice->setQInputDevice_ConnectNotify_IsBase(true);
        vqinputdevice->connectNotify(*signal);
    } else {
        ((VirtualQInputDevice*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QInputDevice_OnConnectNotify(QInputDevice* self, intptr_t slot) {
    auto* vqinputdevice = dynamic_cast<VirtualQInputDevice*>(self);
    if (vqinputdevice && vqinputdevice->isVirtualQInputDevice) {
        vqinputdevice->setQInputDevice_ConnectNotify_Callback(reinterpret_cast<VirtualQInputDevice::QInputDevice_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QInputDevice_DisconnectNotify(QInputDevice* self, const QMetaMethod* signal) {
    auto* vqinputdevice = dynamic_cast<VirtualQInputDevice*>(self);
    if (vqinputdevice && vqinputdevice->isVirtualQInputDevice) {
        vqinputdevice->disconnectNotify(*signal);
    } else {
        ((VirtualQInputDevice*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QInputDevice_QBaseDisconnectNotify(QInputDevice* self, const QMetaMethod* signal) {
    auto* vqinputdevice = dynamic_cast<VirtualQInputDevice*>(self);
    if (vqinputdevice && vqinputdevice->isVirtualQInputDevice) {
        vqinputdevice->setQInputDevice_DisconnectNotify_IsBase(true);
        vqinputdevice->disconnectNotify(*signal);
    } else {
        ((VirtualQInputDevice*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QInputDevice_OnDisconnectNotify(QInputDevice* self, intptr_t slot) {
    auto* vqinputdevice = dynamic_cast<VirtualQInputDevice*>(self);
    if (vqinputdevice && vqinputdevice->isVirtualQInputDevice) {
        vqinputdevice->setQInputDevice_DisconnectNotify_Callback(reinterpret_cast<VirtualQInputDevice::QInputDevice_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QInputDevice_Sender(const QInputDevice* self) {
    auto* vqinputdevice = const_cast<VirtualQInputDevice*>(dynamic_cast<const VirtualQInputDevice*>(self));
    if (vqinputdevice && vqinputdevice->isVirtualQInputDevice) {
        return vqinputdevice->sender();
    } else {
        return ((VirtualQInputDevice*)self)->sender();
    }
}

// Base class handler implementation
QObject* QInputDevice_QBaseSender(const QInputDevice* self) {
    auto* vqinputdevice = const_cast<VirtualQInputDevice*>(dynamic_cast<const VirtualQInputDevice*>(self));
    if (vqinputdevice && vqinputdevice->isVirtualQInputDevice) {
        vqinputdevice->setQInputDevice_Sender_IsBase(true);
        return vqinputdevice->sender();
    } else {
        return ((VirtualQInputDevice*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QInputDevice_OnSender(const QInputDevice* self, intptr_t slot) {
    auto* vqinputdevice = const_cast<VirtualQInputDevice*>(dynamic_cast<const VirtualQInputDevice*>(self));
    if (vqinputdevice && vqinputdevice->isVirtualQInputDevice) {
        vqinputdevice->setQInputDevice_Sender_Callback(reinterpret_cast<VirtualQInputDevice::QInputDevice_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QInputDevice_SenderSignalIndex(const QInputDevice* self) {
    auto* vqinputdevice = const_cast<VirtualQInputDevice*>(dynamic_cast<const VirtualQInputDevice*>(self));
    if (vqinputdevice && vqinputdevice->isVirtualQInputDevice) {
        return vqinputdevice->senderSignalIndex();
    } else {
        return ((VirtualQInputDevice*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QInputDevice_QBaseSenderSignalIndex(const QInputDevice* self) {
    auto* vqinputdevice = const_cast<VirtualQInputDevice*>(dynamic_cast<const VirtualQInputDevice*>(self));
    if (vqinputdevice && vqinputdevice->isVirtualQInputDevice) {
        vqinputdevice->setQInputDevice_SenderSignalIndex_IsBase(true);
        return vqinputdevice->senderSignalIndex();
    } else {
        return ((VirtualQInputDevice*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QInputDevice_OnSenderSignalIndex(const QInputDevice* self, intptr_t slot) {
    auto* vqinputdevice = const_cast<VirtualQInputDevice*>(dynamic_cast<const VirtualQInputDevice*>(self));
    if (vqinputdevice && vqinputdevice->isVirtualQInputDevice) {
        vqinputdevice->setQInputDevice_SenderSignalIndex_Callback(reinterpret_cast<VirtualQInputDevice::QInputDevice_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QInputDevice_Receivers(const QInputDevice* self, const char* signal) {
    auto* vqinputdevice = const_cast<VirtualQInputDevice*>(dynamic_cast<const VirtualQInputDevice*>(self));
    if (vqinputdevice && vqinputdevice->isVirtualQInputDevice) {
        return vqinputdevice->receivers(signal);
    } else {
        return ((VirtualQInputDevice*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QInputDevice_QBaseReceivers(const QInputDevice* self, const char* signal) {
    auto* vqinputdevice = const_cast<VirtualQInputDevice*>(dynamic_cast<const VirtualQInputDevice*>(self));
    if (vqinputdevice && vqinputdevice->isVirtualQInputDevice) {
        vqinputdevice->setQInputDevice_Receivers_IsBase(true);
        return vqinputdevice->receivers(signal);
    } else {
        return ((VirtualQInputDevice*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QInputDevice_OnReceivers(const QInputDevice* self, intptr_t slot) {
    auto* vqinputdevice = const_cast<VirtualQInputDevice*>(dynamic_cast<const VirtualQInputDevice*>(self));
    if (vqinputdevice && vqinputdevice->isVirtualQInputDevice) {
        vqinputdevice->setQInputDevice_Receivers_Callback(reinterpret_cast<VirtualQInputDevice::QInputDevice_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QInputDevice_IsSignalConnected(const QInputDevice* self, const QMetaMethod* signal) {
    auto* vqinputdevice = const_cast<VirtualQInputDevice*>(dynamic_cast<const VirtualQInputDevice*>(self));
    if (vqinputdevice && vqinputdevice->isVirtualQInputDevice) {
        return vqinputdevice->isSignalConnected(*signal);
    } else {
        return ((VirtualQInputDevice*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QInputDevice_QBaseIsSignalConnected(const QInputDevice* self, const QMetaMethod* signal) {
    auto* vqinputdevice = const_cast<VirtualQInputDevice*>(dynamic_cast<const VirtualQInputDevice*>(self));
    if (vqinputdevice && vqinputdevice->isVirtualQInputDevice) {
        vqinputdevice->setQInputDevice_IsSignalConnected_IsBase(true);
        return vqinputdevice->isSignalConnected(*signal);
    } else {
        return ((VirtualQInputDevice*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QInputDevice_OnIsSignalConnected(const QInputDevice* self, intptr_t slot) {
    auto* vqinputdevice = const_cast<VirtualQInputDevice*>(dynamic_cast<const VirtualQInputDevice*>(self));
    if (vqinputdevice && vqinputdevice->isVirtualQInputDevice) {
        vqinputdevice->setQInputDevice_IsSignalConnected_Callback(reinterpret_cast<VirtualQInputDevice::QInputDevice_IsSignalConnected_Callback>(slot));
    }
}

void QInputDevice_Delete(QInputDevice* self) {
    delete self;
}
