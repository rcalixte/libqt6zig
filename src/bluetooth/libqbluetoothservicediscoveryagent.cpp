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
    return (QMetaObject*)self->metaObject();
}

void* QBluetoothServiceDiscoveryAgent_Metacast(QBluetoothServiceDiscoveryAgent* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QBluetoothServiceDiscoveryAgent_Metacall(QBluetoothServiceDiscoveryAgent* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QBluetoothServiceDiscoveryAgent_Tr(const char* s) {
    auto _ret = QBluetoothServiceDiscoveryAgent::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool QBluetoothServiceDiscoveryAgent_IsActive(const QBluetoothServiceDiscoveryAgent* self) {
    return self->isActive();
}

int QBluetoothServiceDiscoveryAgent_Error(const QBluetoothServiceDiscoveryAgent* self) {
    return static_cast<int>(self->error());
}

libqt_string QBluetoothServiceDiscoveryAgent_ErrorString(const QBluetoothServiceDiscoveryAgent* self) {
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
    QBluetoothServiceDiscoveryAgent::connect(self,
                                             static_cast<void (QBluetoothServiceDiscoveryAgent::*)(const QBluetoothServiceInfo&)>(&QBluetoothServiceDiscoveryAgent::serviceDiscovered),
                                             [self, slotFunc](const QBluetoothServiceInfo& info) {
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
    QBluetoothServiceDiscoveryAgent::connect(self,
                                             static_cast<void (QBluetoothServiceDiscoveryAgent::*)()>(&QBluetoothServiceDiscoveryAgent::finished),
                                             [self, slotFunc]() {
                                                 slotFunc(self);
                                             });
}

void QBluetoothServiceDiscoveryAgent_Canceled(QBluetoothServiceDiscoveryAgent* self) {
    self->canceled();
}

void QBluetoothServiceDiscoveryAgent_Connect_Canceled(QBluetoothServiceDiscoveryAgent* self, intptr_t slot) {
    void (*slotFunc)(QBluetoothServiceDiscoveryAgent*) = reinterpret_cast<void (*)(QBluetoothServiceDiscoveryAgent*)>(slot);
    QBluetoothServiceDiscoveryAgent::connect(self,
                                             static_cast<void (QBluetoothServiceDiscoveryAgent::*)()>(&QBluetoothServiceDiscoveryAgent::canceled),
                                             [self, slotFunc]() {
                                                 slotFunc(self);
                                             });
}

void QBluetoothServiceDiscoveryAgent_ErrorOccurred(QBluetoothServiceDiscoveryAgent* self, int errorVal) {
    self->errorOccurred(static_cast<QBluetoothServiceDiscoveryAgent::Error>(errorVal));
}

void QBluetoothServiceDiscoveryAgent_Connect_ErrorOccurred(QBluetoothServiceDiscoveryAgent* self, intptr_t slot) {
    void (*slotFunc)(QBluetoothServiceDiscoveryAgent*, int) = reinterpret_cast<void (*)(QBluetoothServiceDiscoveryAgent*, int)>(slot);
    QBluetoothServiceDiscoveryAgent::connect(self,
                                             static_cast<void (QBluetoothServiceDiscoveryAgent::*)(QBluetoothServiceDiscoveryAgent::Error)>(&QBluetoothServiceDiscoveryAgent::errorOccurred),
                                             [self, slotFunc](QBluetoothServiceDiscoveryAgent::Error errorVal) {
                                                 int sigval1 = static_cast<int>(errorVal);
                                                 slotFunc(self, sigval1);
                                             });
}

libqt_string QBluetoothServiceDiscoveryAgent_Tr2(const char* s, const char* c) {
    auto _ret = QBluetoothServiceDiscoveryAgent::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QBluetoothServiceDiscoveryAgent_Tr3(const char* s, const char* c, int n) {
    auto _ret = QBluetoothServiceDiscoveryAgent::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QBluetoothServiceDiscoveryAgent_Start1(QBluetoothServiceDiscoveryAgent* self, int mode) {
    self->start(static_cast<QBluetoothServiceDiscoveryAgent::DiscoveryMode>(mode));
}

// Base class handler implementation
QMetaObject* QBluetoothServiceDiscoveryAgent_SuperMetaObject(const QBluetoothServiceDiscoveryAgent* self) {
    return (QMetaObject*)self->QBluetoothServiceDiscoveryAgent::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QBluetoothServiceDiscoveryAgent_OnMetaObject(QBluetoothServiceDiscoveryAgent* self, intptr_t slot) {
    if (auto* vqbluetoothservicediscoveryagent = const_cast<VirtualQBluetoothServiceDiscoveryAgent*>(dynamic_cast<const VirtualQBluetoothServiceDiscoveryAgent*>(self)))
        vqbluetoothservicediscoveryagent->qbluetoothservicediscoveryagent_metaobject_callback = reinterpret_cast<VirtualQBluetoothServiceDiscoveryAgent::QBluetoothServiceDiscoveryAgent_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QBluetoothServiceDiscoveryAgent_SuperMetacast(QBluetoothServiceDiscoveryAgent* self, const char* param1) {
    return self->QBluetoothServiceDiscoveryAgent::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QBluetoothServiceDiscoveryAgent_OnMetacast(QBluetoothServiceDiscoveryAgent* self, intptr_t slot) {
    if (auto* vqbluetoothservicediscoveryagent = dynamic_cast<VirtualQBluetoothServiceDiscoveryAgent*>(self))
        vqbluetoothservicediscoveryagent->qbluetoothservicediscoveryagent_metacast_callback = reinterpret_cast<VirtualQBluetoothServiceDiscoveryAgent::QBluetoothServiceDiscoveryAgent_Metacast_Callback>(slot);
}

// Base class handler implementation
int QBluetoothServiceDiscoveryAgent_SuperMetacall(QBluetoothServiceDiscoveryAgent* self, int param1, int param2, void** param3) {
    return self->QBluetoothServiceDiscoveryAgent::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QBluetoothServiceDiscoveryAgent_OnMetacall(QBluetoothServiceDiscoveryAgent* self, intptr_t slot) {
    if (auto* vqbluetoothservicediscoveryagent = dynamic_cast<VirtualQBluetoothServiceDiscoveryAgent*>(self))
        vqbluetoothservicediscoveryagent->qbluetoothservicediscoveryagent_metacall_callback = reinterpret_cast<VirtualQBluetoothServiceDiscoveryAgent::QBluetoothServiceDiscoveryAgent_Metacall_Callback>(slot);
}

// Derived class handler implementation
bool QBluetoothServiceDiscoveryAgent_Event(QBluetoothServiceDiscoveryAgent* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QBluetoothServiceDiscoveryAgent_SuperEvent(QBluetoothServiceDiscoveryAgent* self, QEvent* event) {
    return self->QBluetoothServiceDiscoveryAgent::event(event);
}

// Auxiliary method to allow providing re-implementation
void QBluetoothServiceDiscoveryAgent_OnEvent(QBluetoothServiceDiscoveryAgent* self, intptr_t slot) {
    if (auto* vqbluetoothservicediscoveryagent = dynamic_cast<VirtualQBluetoothServiceDiscoveryAgent*>(self))
        vqbluetoothservicediscoveryagent->qbluetoothservicediscoveryagent_event_callback = reinterpret_cast<VirtualQBluetoothServiceDiscoveryAgent::QBluetoothServiceDiscoveryAgent_Event_Callback>(slot);
}

// Derived class handler implementation
bool QBluetoothServiceDiscoveryAgent_EventFilter(QBluetoothServiceDiscoveryAgent* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QBluetoothServiceDiscoveryAgent_SuperEventFilter(QBluetoothServiceDiscoveryAgent* self, QObject* watched, QEvent* event) {
    return self->QBluetoothServiceDiscoveryAgent::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QBluetoothServiceDiscoveryAgent_OnEventFilter(QBluetoothServiceDiscoveryAgent* self, intptr_t slot) {
    if (auto* vqbluetoothservicediscoveryagent = dynamic_cast<VirtualQBluetoothServiceDiscoveryAgent*>(self))
        vqbluetoothservicediscoveryagent->qbluetoothservicediscoveryagent_eventfilter_callback = reinterpret_cast<VirtualQBluetoothServiceDiscoveryAgent::QBluetoothServiceDiscoveryAgent_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QBluetoothServiceDiscoveryAgent_TimerEvent(QBluetoothServiceDiscoveryAgent* self, QTimerEvent* event) {
    auto* vqbluetoothservicediscoveryagent = dynamic_cast<VirtualQBluetoothServiceDiscoveryAgent*>(self);
    if (vqbluetoothservicediscoveryagent) {
        vqbluetoothservicediscoveryagent->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QBluetoothServiceDiscoveryAgent::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QBluetoothServiceDiscoveryAgent_SuperTimerEvent(QBluetoothServiceDiscoveryAgent* self, QTimerEvent* event) {
    if (auto* vqbluetoothservicediscoveryagent = dynamic_cast<VirtualQBluetoothServiceDiscoveryAgent*>(self)) {
        vqbluetoothservicediscoveryagent->QBluetoothServiceDiscoveryAgent::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QBluetoothServiceDiscoveryAgent::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QBluetoothServiceDiscoveryAgent_OnTimerEvent(QBluetoothServiceDiscoveryAgent* self, intptr_t slot) {
    if (auto* vqbluetoothservicediscoveryagent = dynamic_cast<VirtualQBluetoothServiceDiscoveryAgent*>(self))
        vqbluetoothservicediscoveryagent->qbluetoothservicediscoveryagent_timerevent_callback = reinterpret_cast<VirtualQBluetoothServiceDiscoveryAgent::QBluetoothServiceDiscoveryAgent_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QBluetoothServiceDiscoveryAgent_ChildEvent(QBluetoothServiceDiscoveryAgent* self, QChildEvent* event) {
    auto* vqbluetoothservicediscoveryagent = dynamic_cast<VirtualQBluetoothServiceDiscoveryAgent*>(self);
    if (vqbluetoothservicediscoveryagent) {
        vqbluetoothservicediscoveryagent->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QBluetoothServiceDiscoveryAgent::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QBluetoothServiceDiscoveryAgent_SuperChildEvent(QBluetoothServiceDiscoveryAgent* self, QChildEvent* event) {
    if (auto* vqbluetoothservicediscoveryagent = dynamic_cast<VirtualQBluetoothServiceDiscoveryAgent*>(self)) {
        vqbluetoothservicediscoveryagent->QBluetoothServiceDiscoveryAgent::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QBluetoothServiceDiscoveryAgent::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QBluetoothServiceDiscoveryAgent_OnChildEvent(QBluetoothServiceDiscoveryAgent* self, intptr_t slot) {
    if (auto* vqbluetoothservicediscoveryagent = dynamic_cast<VirtualQBluetoothServiceDiscoveryAgent*>(self))
        vqbluetoothservicediscoveryagent->qbluetoothservicediscoveryagent_childevent_callback = reinterpret_cast<VirtualQBluetoothServiceDiscoveryAgent::QBluetoothServiceDiscoveryAgent_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QBluetoothServiceDiscoveryAgent_CustomEvent(QBluetoothServiceDiscoveryAgent* self, QEvent* event) {
    auto* vqbluetoothservicediscoveryagent = dynamic_cast<VirtualQBluetoothServiceDiscoveryAgent*>(self);
    if (vqbluetoothservicediscoveryagent) {
        vqbluetoothservicediscoveryagent->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QBluetoothServiceDiscoveryAgent::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QBluetoothServiceDiscoveryAgent_SuperCustomEvent(QBluetoothServiceDiscoveryAgent* self, QEvent* event) {
    if (auto* vqbluetoothservicediscoveryagent = dynamic_cast<VirtualQBluetoothServiceDiscoveryAgent*>(self)) {
        vqbluetoothservicediscoveryagent->QBluetoothServiceDiscoveryAgent::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QBluetoothServiceDiscoveryAgent::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QBluetoothServiceDiscoveryAgent_OnCustomEvent(QBluetoothServiceDiscoveryAgent* self, intptr_t slot) {
    if (auto* vqbluetoothservicediscoveryagent = dynamic_cast<VirtualQBluetoothServiceDiscoveryAgent*>(self))
        vqbluetoothservicediscoveryagent->qbluetoothservicediscoveryagent_customevent_callback = reinterpret_cast<VirtualQBluetoothServiceDiscoveryAgent::QBluetoothServiceDiscoveryAgent_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QBluetoothServiceDiscoveryAgent_ConnectNotify(QBluetoothServiceDiscoveryAgent* self, const QMetaMethod* signal) {
    auto* vqbluetoothservicediscoveryagent = dynamic_cast<VirtualQBluetoothServiceDiscoveryAgent*>(self);
    if (vqbluetoothservicediscoveryagent) {
        vqbluetoothservicediscoveryagent->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QBluetoothServiceDiscoveryAgent::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QBluetoothServiceDiscoveryAgent_SuperConnectNotify(QBluetoothServiceDiscoveryAgent* self, const QMetaMethod* signal) {
    if (auto* vqbluetoothservicediscoveryagent = dynamic_cast<VirtualQBluetoothServiceDiscoveryAgent*>(self)) {
        vqbluetoothservicediscoveryagent->QBluetoothServiceDiscoveryAgent::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QBluetoothServiceDiscoveryAgent::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QBluetoothServiceDiscoveryAgent_OnConnectNotify(QBluetoothServiceDiscoveryAgent* self, intptr_t slot) {
    if (auto* vqbluetoothservicediscoveryagent = dynamic_cast<VirtualQBluetoothServiceDiscoveryAgent*>(self))
        vqbluetoothservicediscoveryagent->qbluetoothservicediscoveryagent_connectnotify_callback = reinterpret_cast<VirtualQBluetoothServiceDiscoveryAgent::QBluetoothServiceDiscoveryAgent_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QBluetoothServiceDiscoveryAgent_DisconnectNotify(QBluetoothServiceDiscoveryAgent* self, const QMetaMethod* signal) {
    auto* vqbluetoothservicediscoveryagent = dynamic_cast<VirtualQBluetoothServiceDiscoveryAgent*>(self);
    if (vqbluetoothservicediscoveryagent) {
        vqbluetoothservicediscoveryagent->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QBluetoothServiceDiscoveryAgent::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QBluetoothServiceDiscoveryAgent_SuperDisconnectNotify(QBluetoothServiceDiscoveryAgent* self, const QMetaMethod* signal) {
    if (auto* vqbluetoothservicediscoveryagent = dynamic_cast<VirtualQBluetoothServiceDiscoveryAgent*>(self)) {
        vqbluetoothservicediscoveryagent->QBluetoothServiceDiscoveryAgent::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QBluetoothServiceDiscoveryAgent::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QBluetoothServiceDiscoveryAgent_OnDisconnectNotify(QBluetoothServiceDiscoveryAgent* self, intptr_t slot) {
    if (auto* vqbluetoothservicediscoveryagent = dynamic_cast<VirtualQBluetoothServiceDiscoveryAgent*>(self))
        vqbluetoothservicediscoveryagent->qbluetoothservicediscoveryagent_disconnectnotify_callback = reinterpret_cast<VirtualQBluetoothServiceDiscoveryAgent::QBluetoothServiceDiscoveryAgent_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* QBluetoothServiceDiscoveryAgent_Sender(const QBluetoothServiceDiscoveryAgent* self) {
    if (auto* vqbluetoothservicediscoveryagent = const_cast<VirtualQBluetoothServiceDiscoveryAgent*>(dynamic_cast<const VirtualQBluetoothServiceDiscoveryAgent*>(self))) {
        return vqbluetoothservicediscoveryagent->VirtualQBluetoothServiceDiscoveryAgent::sender();
    } else
        qFatal("Error: Protected method QBluetoothServiceDiscoveryAgent::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QBluetoothServiceDiscoveryAgent_SenderSignalIndex(const QBluetoothServiceDiscoveryAgent* self) {
    if (auto* vqbluetoothservicediscoveryagent = const_cast<VirtualQBluetoothServiceDiscoveryAgent*>(dynamic_cast<const VirtualQBluetoothServiceDiscoveryAgent*>(self))) {
        return vqbluetoothservicediscoveryagent->VirtualQBluetoothServiceDiscoveryAgent::senderSignalIndex();
    } else
        qFatal("Error: Protected method QBluetoothServiceDiscoveryAgent::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QBluetoothServiceDiscoveryAgent_Receivers(const QBluetoothServiceDiscoveryAgent* self, const char* signal) {
    if (auto* vqbluetoothservicediscoveryagent = const_cast<VirtualQBluetoothServiceDiscoveryAgent*>(dynamic_cast<const VirtualQBluetoothServiceDiscoveryAgent*>(self))) {
        return vqbluetoothservicediscoveryagent->VirtualQBluetoothServiceDiscoveryAgent::receivers(signal);
    } else
        qFatal("Error: Protected method QBluetoothServiceDiscoveryAgent::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QBluetoothServiceDiscoveryAgent_IsSignalConnected(const QBluetoothServiceDiscoveryAgent* self, const QMetaMethod* signal) {
    if (auto* vqbluetoothservicediscoveryagent = const_cast<VirtualQBluetoothServiceDiscoveryAgent*>(dynamic_cast<const VirtualQBluetoothServiceDiscoveryAgent*>(self))) {
        return vqbluetoothservicediscoveryagent->VirtualQBluetoothServiceDiscoveryAgent::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QBluetoothServiceDiscoveryAgent::isSignalConnected called without a directly constructed type");
}

void QBluetoothServiceDiscoveryAgent_Delete(QBluetoothServiceDiscoveryAgent* self) {
    delete self;
}
