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
    return (QMetaObject*)self->metaObject();
}

void* QBluetoothDeviceDiscoveryAgent_Metacast(QBluetoothDeviceDiscoveryAgent* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QBluetoothDeviceDiscoveryAgent_Metacall(QBluetoothDeviceDiscoveryAgent* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QBluetoothDeviceDiscoveryAgent_Tr(const char* s) {
    auto _ret = QBluetoothDeviceDiscoveryAgent::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool QBluetoothDeviceDiscoveryAgent_IsActive(const QBluetoothDeviceDiscoveryAgent* self) {
    return self->isActive();
}

int QBluetoothDeviceDiscoveryAgent_Error(const QBluetoothDeviceDiscoveryAgent* self) {
    return static_cast<int>(self->error());
}

libqt_string QBluetoothDeviceDiscoveryAgent_ErrorString(const QBluetoothDeviceDiscoveryAgent* self) {
    auto _ret = self->errorString();
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
    QBluetoothDeviceDiscoveryAgent::connect(self,
                                            static_cast<void (QBluetoothDeviceDiscoveryAgent::*)(const QBluetoothDeviceInfo&)>(&QBluetoothDeviceDiscoveryAgent::deviceDiscovered),
                                            [self, slotFunc](const QBluetoothDeviceInfo& info) {
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
    QBluetoothDeviceDiscoveryAgent::connect(self,
                                            static_cast<void (QBluetoothDeviceDiscoveryAgent::*)(const QBluetoothDeviceInfo&, QBluetoothDeviceInfo::Fields)>(&QBluetoothDeviceDiscoveryAgent::deviceUpdated),
                                            [self, slotFunc](const QBluetoothDeviceInfo& info, QBluetoothDeviceInfo::Fields updatedFields) {
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
    QBluetoothDeviceDiscoveryAgent::connect(self,
                                            static_cast<void (QBluetoothDeviceDiscoveryAgent::*)()>(&QBluetoothDeviceDiscoveryAgent::finished),
                                            [self, slotFunc]() {
                                                slotFunc(self);
                                            });
}

void QBluetoothDeviceDiscoveryAgent_ErrorOccurred(QBluetoothDeviceDiscoveryAgent* self, int errorVal) {
    self->errorOccurred(static_cast<QBluetoothDeviceDiscoveryAgent::Error>(errorVal));
}

void QBluetoothDeviceDiscoveryAgent_Connect_ErrorOccurred(QBluetoothDeviceDiscoveryAgent* self, intptr_t slot) {
    void (*slotFunc)(QBluetoothDeviceDiscoveryAgent*, int) = reinterpret_cast<void (*)(QBluetoothDeviceDiscoveryAgent*, int)>(slot);
    QBluetoothDeviceDiscoveryAgent::connect(self,
                                            static_cast<void (QBluetoothDeviceDiscoveryAgent::*)(QBluetoothDeviceDiscoveryAgent::Error)>(&QBluetoothDeviceDiscoveryAgent::errorOccurred),
                                            [self, slotFunc](QBluetoothDeviceDiscoveryAgent::Error errorVal) {
                                                int sigval1 = static_cast<int>(errorVal);
                                                slotFunc(self, sigval1);
                                            });
}

void QBluetoothDeviceDiscoveryAgent_Canceled(QBluetoothDeviceDiscoveryAgent* self) {
    self->canceled();
}

void QBluetoothDeviceDiscoveryAgent_Connect_Canceled(QBluetoothDeviceDiscoveryAgent* self, intptr_t slot) {
    void (*slotFunc)(QBluetoothDeviceDiscoveryAgent*) = reinterpret_cast<void (*)(QBluetoothDeviceDiscoveryAgent*)>(slot);
    QBluetoothDeviceDiscoveryAgent::connect(self,
                                            static_cast<void (QBluetoothDeviceDiscoveryAgent::*)()>(&QBluetoothDeviceDiscoveryAgent::canceled),
                                            [self, slotFunc]() {
                                                slotFunc(self);
                                            });
}

libqt_string QBluetoothDeviceDiscoveryAgent_Tr2(const char* s, const char* c) {
    auto _ret = QBluetoothDeviceDiscoveryAgent::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QBluetoothDeviceDiscoveryAgent_Tr3(const char* s, const char* c, int n) {
    auto _ret = QBluetoothDeviceDiscoveryAgent::tr(s, c, static_cast<int>(n));
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
QMetaObject* QBluetoothDeviceDiscoveryAgent_SuperMetaObject(const QBluetoothDeviceDiscoveryAgent* self) {
    return (QMetaObject*)self->QBluetoothDeviceDiscoveryAgent::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QBluetoothDeviceDiscoveryAgent_OnMetaObject(QBluetoothDeviceDiscoveryAgent* self, intptr_t slot) {
    if (auto* vqbluetoothdevicediscoveryagent = const_cast<VirtualQBluetoothDeviceDiscoveryAgent*>(dynamic_cast<const VirtualQBluetoothDeviceDiscoveryAgent*>(self)))
        vqbluetoothdevicediscoveryagent->qbluetoothdevicediscoveryagent_metaobject_callback = reinterpret_cast<VirtualQBluetoothDeviceDiscoveryAgent::QBluetoothDeviceDiscoveryAgent_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QBluetoothDeviceDiscoveryAgent_SuperMetacast(QBluetoothDeviceDiscoveryAgent* self, const char* param1) {
    return self->QBluetoothDeviceDiscoveryAgent::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QBluetoothDeviceDiscoveryAgent_OnMetacast(QBluetoothDeviceDiscoveryAgent* self, intptr_t slot) {
    if (auto* vqbluetoothdevicediscoveryagent = dynamic_cast<VirtualQBluetoothDeviceDiscoveryAgent*>(self))
        vqbluetoothdevicediscoveryagent->qbluetoothdevicediscoveryagent_metacast_callback = reinterpret_cast<VirtualQBluetoothDeviceDiscoveryAgent::QBluetoothDeviceDiscoveryAgent_Metacast_Callback>(slot);
}

// Base class handler implementation
int QBluetoothDeviceDiscoveryAgent_SuperMetacall(QBluetoothDeviceDiscoveryAgent* self, int param1, int param2, void** param3) {
    return self->QBluetoothDeviceDiscoveryAgent::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QBluetoothDeviceDiscoveryAgent_OnMetacall(QBluetoothDeviceDiscoveryAgent* self, intptr_t slot) {
    if (auto* vqbluetoothdevicediscoveryagent = dynamic_cast<VirtualQBluetoothDeviceDiscoveryAgent*>(self))
        vqbluetoothdevicediscoveryagent->qbluetoothdevicediscoveryagent_metacall_callback = reinterpret_cast<VirtualQBluetoothDeviceDiscoveryAgent::QBluetoothDeviceDiscoveryAgent_Metacall_Callback>(slot);
}

// Derived class handler implementation
bool QBluetoothDeviceDiscoveryAgent_Event(QBluetoothDeviceDiscoveryAgent* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QBluetoothDeviceDiscoveryAgent_SuperEvent(QBluetoothDeviceDiscoveryAgent* self, QEvent* event) {
    return self->QBluetoothDeviceDiscoveryAgent::event(event);
}

// Auxiliary method to allow providing re-implementation
void QBluetoothDeviceDiscoveryAgent_OnEvent(QBluetoothDeviceDiscoveryAgent* self, intptr_t slot) {
    if (auto* vqbluetoothdevicediscoveryagent = dynamic_cast<VirtualQBluetoothDeviceDiscoveryAgent*>(self))
        vqbluetoothdevicediscoveryagent->qbluetoothdevicediscoveryagent_event_callback = reinterpret_cast<VirtualQBluetoothDeviceDiscoveryAgent::QBluetoothDeviceDiscoveryAgent_Event_Callback>(slot);
}

// Derived class handler implementation
bool QBluetoothDeviceDiscoveryAgent_EventFilter(QBluetoothDeviceDiscoveryAgent* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QBluetoothDeviceDiscoveryAgent_SuperEventFilter(QBluetoothDeviceDiscoveryAgent* self, QObject* watched, QEvent* event) {
    return self->QBluetoothDeviceDiscoveryAgent::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QBluetoothDeviceDiscoveryAgent_OnEventFilter(QBluetoothDeviceDiscoveryAgent* self, intptr_t slot) {
    if (auto* vqbluetoothdevicediscoveryagent = dynamic_cast<VirtualQBluetoothDeviceDiscoveryAgent*>(self))
        vqbluetoothdevicediscoveryagent->qbluetoothdevicediscoveryagent_eventfilter_callback = reinterpret_cast<VirtualQBluetoothDeviceDiscoveryAgent::QBluetoothDeviceDiscoveryAgent_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QBluetoothDeviceDiscoveryAgent_TimerEvent(QBluetoothDeviceDiscoveryAgent* self, QTimerEvent* event) {
    auto* vqbluetoothdevicediscoveryagent = dynamic_cast<VirtualQBluetoothDeviceDiscoveryAgent*>(self);
    if (vqbluetoothdevicediscoveryagent) {
        vqbluetoothdevicediscoveryagent->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QBluetoothDeviceDiscoveryAgent::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QBluetoothDeviceDiscoveryAgent_SuperTimerEvent(QBluetoothDeviceDiscoveryAgent* self, QTimerEvent* event) {
    if (auto* vqbluetoothdevicediscoveryagent = dynamic_cast<VirtualQBluetoothDeviceDiscoveryAgent*>(self)) {
        vqbluetoothdevicediscoveryagent->QBluetoothDeviceDiscoveryAgent::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QBluetoothDeviceDiscoveryAgent::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QBluetoothDeviceDiscoveryAgent_OnTimerEvent(QBluetoothDeviceDiscoveryAgent* self, intptr_t slot) {
    if (auto* vqbluetoothdevicediscoveryagent = dynamic_cast<VirtualQBluetoothDeviceDiscoveryAgent*>(self))
        vqbluetoothdevicediscoveryagent->qbluetoothdevicediscoveryagent_timerevent_callback = reinterpret_cast<VirtualQBluetoothDeviceDiscoveryAgent::QBluetoothDeviceDiscoveryAgent_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QBluetoothDeviceDiscoveryAgent_ChildEvent(QBluetoothDeviceDiscoveryAgent* self, QChildEvent* event) {
    auto* vqbluetoothdevicediscoveryagent = dynamic_cast<VirtualQBluetoothDeviceDiscoveryAgent*>(self);
    if (vqbluetoothdevicediscoveryagent) {
        vqbluetoothdevicediscoveryagent->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QBluetoothDeviceDiscoveryAgent::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QBluetoothDeviceDiscoveryAgent_SuperChildEvent(QBluetoothDeviceDiscoveryAgent* self, QChildEvent* event) {
    if (auto* vqbluetoothdevicediscoveryagent = dynamic_cast<VirtualQBluetoothDeviceDiscoveryAgent*>(self)) {
        vqbluetoothdevicediscoveryagent->QBluetoothDeviceDiscoveryAgent::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QBluetoothDeviceDiscoveryAgent::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QBluetoothDeviceDiscoveryAgent_OnChildEvent(QBluetoothDeviceDiscoveryAgent* self, intptr_t slot) {
    if (auto* vqbluetoothdevicediscoveryagent = dynamic_cast<VirtualQBluetoothDeviceDiscoveryAgent*>(self))
        vqbluetoothdevicediscoveryagent->qbluetoothdevicediscoveryagent_childevent_callback = reinterpret_cast<VirtualQBluetoothDeviceDiscoveryAgent::QBluetoothDeviceDiscoveryAgent_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QBluetoothDeviceDiscoveryAgent_CustomEvent(QBluetoothDeviceDiscoveryAgent* self, QEvent* event) {
    auto* vqbluetoothdevicediscoveryagent = dynamic_cast<VirtualQBluetoothDeviceDiscoveryAgent*>(self);
    if (vqbluetoothdevicediscoveryagent) {
        vqbluetoothdevicediscoveryagent->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QBluetoothDeviceDiscoveryAgent::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QBluetoothDeviceDiscoveryAgent_SuperCustomEvent(QBluetoothDeviceDiscoveryAgent* self, QEvent* event) {
    if (auto* vqbluetoothdevicediscoveryagent = dynamic_cast<VirtualQBluetoothDeviceDiscoveryAgent*>(self)) {
        vqbluetoothdevicediscoveryagent->QBluetoothDeviceDiscoveryAgent::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QBluetoothDeviceDiscoveryAgent::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QBluetoothDeviceDiscoveryAgent_OnCustomEvent(QBluetoothDeviceDiscoveryAgent* self, intptr_t slot) {
    if (auto* vqbluetoothdevicediscoveryagent = dynamic_cast<VirtualQBluetoothDeviceDiscoveryAgent*>(self))
        vqbluetoothdevicediscoveryagent->qbluetoothdevicediscoveryagent_customevent_callback = reinterpret_cast<VirtualQBluetoothDeviceDiscoveryAgent::QBluetoothDeviceDiscoveryAgent_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QBluetoothDeviceDiscoveryAgent_ConnectNotify(QBluetoothDeviceDiscoveryAgent* self, const QMetaMethod* signal) {
    auto* vqbluetoothdevicediscoveryagent = dynamic_cast<VirtualQBluetoothDeviceDiscoveryAgent*>(self);
    if (vqbluetoothdevicediscoveryagent) {
        vqbluetoothdevicediscoveryagent->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QBluetoothDeviceDiscoveryAgent::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QBluetoothDeviceDiscoveryAgent_SuperConnectNotify(QBluetoothDeviceDiscoveryAgent* self, const QMetaMethod* signal) {
    if (auto* vqbluetoothdevicediscoveryagent = dynamic_cast<VirtualQBluetoothDeviceDiscoveryAgent*>(self)) {
        vqbluetoothdevicediscoveryagent->QBluetoothDeviceDiscoveryAgent::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QBluetoothDeviceDiscoveryAgent::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QBluetoothDeviceDiscoveryAgent_OnConnectNotify(QBluetoothDeviceDiscoveryAgent* self, intptr_t slot) {
    if (auto* vqbluetoothdevicediscoveryagent = dynamic_cast<VirtualQBluetoothDeviceDiscoveryAgent*>(self))
        vqbluetoothdevicediscoveryagent->qbluetoothdevicediscoveryagent_connectnotify_callback = reinterpret_cast<VirtualQBluetoothDeviceDiscoveryAgent::QBluetoothDeviceDiscoveryAgent_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QBluetoothDeviceDiscoveryAgent_DisconnectNotify(QBluetoothDeviceDiscoveryAgent* self, const QMetaMethod* signal) {
    auto* vqbluetoothdevicediscoveryagent = dynamic_cast<VirtualQBluetoothDeviceDiscoveryAgent*>(self);
    if (vqbluetoothdevicediscoveryagent) {
        vqbluetoothdevicediscoveryagent->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QBluetoothDeviceDiscoveryAgent::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QBluetoothDeviceDiscoveryAgent_SuperDisconnectNotify(QBluetoothDeviceDiscoveryAgent* self, const QMetaMethod* signal) {
    if (auto* vqbluetoothdevicediscoveryagent = dynamic_cast<VirtualQBluetoothDeviceDiscoveryAgent*>(self)) {
        vqbluetoothdevicediscoveryagent->QBluetoothDeviceDiscoveryAgent::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QBluetoothDeviceDiscoveryAgent::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QBluetoothDeviceDiscoveryAgent_OnDisconnectNotify(QBluetoothDeviceDiscoveryAgent* self, intptr_t slot) {
    if (auto* vqbluetoothdevicediscoveryagent = dynamic_cast<VirtualQBluetoothDeviceDiscoveryAgent*>(self))
        vqbluetoothdevicediscoveryagent->qbluetoothdevicediscoveryagent_disconnectnotify_callback = reinterpret_cast<VirtualQBluetoothDeviceDiscoveryAgent::QBluetoothDeviceDiscoveryAgent_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* QBluetoothDeviceDiscoveryAgent_Sender(const QBluetoothDeviceDiscoveryAgent* self) {
    if (auto* vqbluetoothdevicediscoveryagent = const_cast<VirtualQBluetoothDeviceDiscoveryAgent*>(dynamic_cast<const VirtualQBluetoothDeviceDiscoveryAgent*>(self))) {
        return vqbluetoothdevicediscoveryagent->VirtualQBluetoothDeviceDiscoveryAgent::sender();
    } else
        qFatal("Error: Protected method QBluetoothDeviceDiscoveryAgent::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QBluetoothDeviceDiscoveryAgent_SenderSignalIndex(const QBluetoothDeviceDiscoveryAgent* self) {
    if (auto* vqbluetoothdevicediscoveryagent = const_cast<VirtualQBluetoothDeviceDiscoveryAgent*>(dynamic_cast<const VirtualQBluetoothDeviceDiscoveryAgent*>(self))) {
        return vqbluetoothdevicediscoveryagent->VirtualQBluetoothDeviceDiscoveryAgent::senderSignalIndex();
    } else
        qFatal("Error: Protected method QBluetoothDeviceDiscoveryAgent::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QBluetoothDeviceDiscoveryAgent_Receivers(const QBluetoothDeviceDiscoveryAgent* self, const char* signal) {
    if (auto* vqbluetoothdevicediscoveryagent = const_cast<VirtualQBluetoothDeviceDiscoveryAgent*>(dynamic_cast<const VirtualQBluetoothDeviceDiscoveryAgent*>(self))) {
        return vqbluetoothdevicediscoveryagent->VirtualQBluetoothDeviceDiscoveryAgent::receivers(signal);
    } else
        qFatal("Error: Protected method QBluetoothDeviceDiscoveryAgent::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QBluetoothDeviceDiscoveryAgent_IsSignalConnected(const QBluetoothDeviceDiscoveryAgent* self, const QMetaMethod* signal) {
    if (auto* vqbluetoothdevicediscoveryagent = const_cast<VirtualQBluetoothDeviceDiscoveryAgent*>(dynamic_cast<const VirtualQBluetoothDeviceDiscoveryAgent*>(self))) {
        return vqbluetoothdevicediscoveryagent->VirtualQBluetoothDeviceDiscoveryAgent::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QBluetoothDeviceDiscoveryAgent::isSignalConnected called without a directly constructed type");
}

void QBluetoothDeviceDiscoveryAgent_Delete(QBluetoothDeviceDiscoveryAgent* self) {
    delete self;
}
