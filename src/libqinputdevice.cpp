#include <QChildEvent>
#include <QEvent>
#include <QInputDevice>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QRect>
#include <QString>
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
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QInputDevice_Tr(const char* s) {
    auto _ret = QInputDevice::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QInputDevice_Name(const QInputDevice* self) {
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
    auto _ret = self->seatName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
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
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        auto _lv_ret = _ret[i];
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

libqt_list /* of QInputDevice* */ QInputDevice_Devices() {
    QList<const QInputDevice*> _ret = QInputDevice::devices();
    // Convert QList<> from C++ memory to manually-managed C memory
    QInputDevice** _arr = static_cast<QInputDevice**>(malloc(sizeof(QInputDevice*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
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
    QInputDevice::connect(self,
                          static_cast<void (QInputDevice::*)(QRect)>(&QInputDevice::availableVirtualGeometryChanged),
                          [self, slotFunc](QRect area) {
                              QRect* sigval1 = new QRect(area);
                              slotFunc(self, sigval1);
                          });
}

libqt_string QInputDevice_Tr2(const char* s, const char* c) {
    auto _ret = QInputDevice::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QInputDevice_Tr3(const char* s, const char* c, int n) {
    auto _ret = QInputDevice::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QInputDevice* QInputDevice_PrimaryKeyboard1(const libqt_string seatName) {
    QString seatName_QString = QString::fromUtf8(seatName.data, seatName.len);
    return (QInputDevice*)QInputDevice::primaryKeyboard(seatName_QString);
}

// Base class handler implementation
QMetaObject* QInputDevice_SuperMetaObject(const QInputDevice* self) {
    return (QMetaObject*)self->QInputDevice::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QInputDevice_OnMetaObject(QInputDevice* self, intptr_t slot) {
    if (auto* vqinputdevice = const_cast<VirtualQInputDevice*>(dynamic_cast<const VirtualQInputDevice*>(self)))
        vqinputdevice->qinputdevice_metaobject_callback = reinterpret_cast<VirtualQInputDevice::QInputDevice_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QInputDevice_SuperMetacast(QInputDevice* self, const char* param1) {
    return self->QInputDevice::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QInputDevice_OnMetacast(QInputDevice* self, intptr_t slot) {
    if (auto* vqinputdevice = dynamic_cast<VirtualQInputDevice*>(self))
        vqinputdevice->qinputdevice_metacast_callback = reinterpret_cast<VirtualQInputDevice::QInputDevice_Metacast_Callback>(slot);
}

// Base class handler implementation
int QInputDevice_SuperMetacall(QInputDevice* self, int param1, int param2, void** param3) {
    return self->QInputDevice::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QInputDevice_OnMetacall(QInputDevice* self, intptr_t slot) {
    if (auto* vqinputdevice = dynamic_cast<VirtualQInputDevice*>(self))
        vqinputdevice->qinputdevice_metacall_callback = reinterpret_cast<VirtualQInputDevice::QInputDevice_Metacall_Callback>(slot);
}

// Derived class handler implementation
bool QInputDevice_Event(QInputDevice* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QInputDevice_SuperEvent(QInputDevice* self, QEvent* event) {
    return self->QInputDevice::event(event);
}

// Auxiliary method to allow providing re-implementation
void QInputDevice_OnEvent(QInputDevice* self, intptr_t slot) {
    if (auto* vqinputdevice = dynamic_cast<VirtualQInputDevice*>(self))
        vqinputdevice->qinputdevice_event_callback = reinterpret_cast<VirtualQInputDevice::QInputDevice_Event_Callback>(slot);
}

// Derived class handler implementation
bool QInputDevice_EventFilter(QInputDevice* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QInputDevice_SuperEventFilter(QInputDevice* self, QObject* watched, QEvent* event) {
    return self->QInputDevice::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QInputDevice_OnEventFilter(QInputDevice* self, intptr_t slot) {
    if (auto* vqinputdevice = dynamic_cast<VirtualQInputDevice*>(self))
        vqinputdevice->qinputdevice_eventfilter_callback = reinterpret_cast<VirtualQInputDevice::QInputDevice_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QInputDevice_TimerEvent(QInputDevice* self, QTimerEvent* event) {
    auto* vqinputdevice = dynamic_cast<VirtualQInputDevice*>(self);
    if (vqinputdevice) {
        vqinputdevice->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QInputDevice::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QInputDevice_SuperTimerEvent(QInputDevice* self, QTimerEvent* event) {
    if (auto* vqinputdevice = dynamic_cast<VirtualQInputDevice*>(self)) {
        vqinputdevice->QInputDevice::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QInputDevice::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QInputDevice_OnTimerEvent(QInputDevice* self, intptr_t slot) {
    if (auto* vqinputdevice = dynamic_cast<VirtualQInputDevice*>(self))
        vqinputdevice->qinputdevice_timerevent_callback = reinterpret_cast<VirtualQInputDevice::QInputDevice_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QInputDevice_ChildEvent(QInputDevice* self, QChildEvent* event) {
    auto* vqinputdevice = dynamic_cast<VirtualQInputDevice*>(self);
    if (vqinputdevice) {
        vqinputdevice->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QInputDevice::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QInputDevice_SuperChildEvent(QInputDevice* self, QChildEvent* event) {
    if (auto* vqinputdevice = dynamic_cast<VirtualQInputDevice*>(self)) {
        vqinputdevice->QInputDevice::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QInputDevice::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QInputDevice_OnChildEvent(QInputDevice* self, intptr_t slot) {
    if (auto* vqinputdevice = dynamic_cast<VirtualQInputDevice*>(self))
        vqinputdevice->qinputdevice_childevent_callback = reinterpret_cast<VirtualQInputDevice::QInputDevice_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QInputDevice_CustomEvent(QInputDevice* self, QEvent* event) {
    auto* vqinputdevice = dynamic_cast<VirtualQInputDevice*>(self);
    if (vqinputdevice) {
        vqinputdevice->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QInputDevice::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QInputDevice_SuperCustomEvent(QInputDevice* self, QEvent* event) {
    if (auto* vqinputdevice = dynamic_cast<VirtualQInputDevice*>(self)) {
        vqinputdevice->QInputDevice::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QInputDevice::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QInputDevice_OnCustomEvent(QInputDevice* self, intptr_t slot) {
    if (auto* vqinputdevice = dynamic_cast<VirtualQInputDevice*>(self))
        vqinputdevice->qinputdevice_customevent_callback = reinterpret_cast<VirtualQInputDevice::QInputDevice_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QInputDevice_ConnectNotify(QInputDevice* self, const QMetaMethod* signal) {
    auto* vqinputdevice = dynamic_cast<VirtualQInputDevice*>(self);
    if (vqinputdevice) {
        vqinputdevice->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QInputDevice::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QInputDevice_SuperConnectNotify(QInputDevice* self, const QMetaMethod* signal) {
    if (auto* vqinputdevice = dynamic_cast<VirtualQInputDevice*>(self)) {
        vqinputdevice->QInputDevice::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QInputDevice::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QInputDevice_OnConnectNotify(QInputDevice* self, intptr_t slot) {
    if (auto* vqinputdevice = dynamic_cast<VirtualQInputDevice*>(self))
        vqinputdevice->qinputdevice_connectnotify_callback = reinterpret_cast<VirtualQInputDevice::QInputDevice_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QInputDevice_DisconnectNotify(QInputDevice* self, const QMetaMethod* signal) {
    auto* vqinputdevice = dynamic_cast<VirtualQInputDevice*>(self);
    if (vqinputdevice) {
        vqinputdevice->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QInputDevice::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QInputDevice_SuperDisconnectNotify(QInputDevice* self, const QMetaMethod* signal) {
    if (auto* vqinputdevice = dynamic_cast<VirtualQInputDevice*>(self)) {
        vqinputdevice->QInputDevice::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QInputDevice::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QInputDevice_OnDisconnectNotify(QInputDevice* self, intptr_t slot) {
    if (auto* vqinputdevice = dynamic_cast<VirtualQInputDevice*>(self))
        vqinputdevice->qinputdevice_disconnectnotify_callback = reinterpret_cast<VirtualQInputDevice::QInputDevice_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* QInputDevice_Sender(const QInputDevice* self) {
    if (auto* vqinputdevice = const_cast<VirtualQInputDevice*>(dynamic_cast<const VirtualQInputDevice*>(self))) {
        return vqinputdevice->VirtualQInputDevice::sender();
    } else
        qFatal("Error: Protected method QInputDevice::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QInputDevice_SenderSignalIndex(const QInputDevice* self) {
    if (auto* vqinputdevice = const_cast<VirtualQInputDevice*>(dynamic_cast<const VirtualQInputDevice*>(self))) {
        return vqinputdevice->VirtualQInputDevice::senderSignalIndex();
    } else
        qFatal("Error: Protected method QInputDevice::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QInputDevice_Receivers(const QInputDevice* self, const char* signal) {
    if (auto* vqinputdevice = const_cast<VirtualQInputDevice*>(dynamic_cast<const VirtualQInputDevice*>(self))) {
        return vqinputdevice->VirtualQInputDevice::receivers(signal);
    } else
        qFatal("Error: Protected method QInputDevice::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QInputDevice_IsSignalConnected(const QInputDevice* self, const QMetaMethod* signal) {
    if (auto* vqinputdevice = const_cast<VirtualQInputDevice*>(dynamic_cast<const VirtualQInputDevice*>(self))) {
        return vqinputdevice->VirtualQInputDevice::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QInputDevice::isSignalConnected called without a directly constructed type");
}

void QInputDevice_Delete(QInputDevice* self) {
    delete self;
}
