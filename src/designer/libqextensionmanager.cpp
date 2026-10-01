#include <QAbstractExtensionFactory>
#include <QAbstractExtensionManager>
#include <QChildEvent>
#include <QEvent>
#include <QExtensionManager>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QTimerEvent>
#include <qextensionmanager.h>
#include "libqextensionmanager.h"
#include "libqextensionmanager.hxx"

QExtensionManager* QExtensionManager_new() {
    return new VirtualQExtensionManager();
}

QExtensionManager* QExtensionManager_new2(QObject* parent) {
    return new VirtualQExtensionManager(parent);
}

QAbstractExtensionManager* QExtensionManager_AsQAbstractExtensionManager(const QExtensionManager* self) {
    return const_cast<QExtensionManager*>(self);
}

QExtensionManager* QExtensionManager_FromQAbstractExtensionManager(const QAbstractExtensionManager* _qabstractextensionmanager) {
    return dynamic_cast<QExtensionManager*>(const_cast<QAbstractExtensionManager*>(_qabstractextensionmanager));
}

QMetaObject* QExtensionManager_MetaObject(const QExtensionManager* self) {
    return (QMetaObject*)self->metaObject();
}

void* QExtensionManager_Metacast(QExtensionManager* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QExtensionManager_Metacall(QExtensionManager* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QExtensionManager_Tr(const char* s) {
    auto _ret = QExtensionManager::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QExtensionManager_RegisterExtensions(QExtensionManager* self, QAbstractExtensionFactory* factory, const libqt_string iid) {
    QString iid_QString = QString::fromUtf8(iid.data, iid.len);
    self->registerExtensions(factory, iid_QString);
}

void QExtensionManager_UnregisterExtensions(QExtensionManager* self, QAbstractExtensionFactory* factory, const libqt_string iid) {
    QString iid_QString = QString::fromUtf8(iid.data, iid.len);
    self->unregisterExtensions(factory, iid_QString);
}

QObject* QExtensionManager_Extension(const QExtensionManager* self, QObject* object, const libqt_string iid) {
    QString iid_QString = QString::fromUtf8(iid.data, iid.len);
    return self->extension(object, iid_QString);
}

libqt_string QExtensionManager_Tr2(const char* s, const char* c) {
    auto _ret = QExtensionManager::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QExtensionManager_Tr3(const char* s, const char* c, int n) {
    auto _ret = QExtensionManager::tr(s, c, static_cast<int>(n));
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
QMetaObject* QExtensionManager_SuperMetaObject(const QExtensionManager* self) {
    return (QMetaObject*)self->QExtensionManager::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QExtensionManager_OnMetaObject(QExtensionManager* self, intptr_t slot) {
    if (auto* vqextensionmanager = const_cast<VirtualQExtensionManager*>(dynamic_cast<const VirtualQExtensionManager*>(self)))
        vqextensionmanager->qextensionmanager_metaobject_callback = reinterpret_cast<VirtualQExtensionManager::QExtensionManager_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QExtensionManager_SuperMetacast(QExtensionManager* self, const char* param1) {
    return self->QExtensionManager::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QExtensionManager_OnMetacast(QExtensionManager* self, intptr_t slot) {
    if (auto* vqextensionmanager = dynamic_cast<VirtualQExtensionManager*>(self))
        vqextensionmanager->qextensionmanager_metacast_callback = reinterpret_cast<VirtualQExtensionManager::QExtensionManager_Metacast_Callback>(slot);
}

// Base class handler implementation
int QExtensionManager_SuperMetacall(QExtensionManager* self, int param1, int param2, void** param3) {
    return self->QExtensionManager::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QExtensionManager_OnMetacall(QExtensionManager* self, intptr_t slot) {
    if (auto* vqextensionmanager = dynamic_cast<VirtualQExtensionManager*>(self))
        vqextensionmanager->qextensionmanager_metacall_callback = reinterpret_cast<VirtualQExtensionManager::QExtensionManager_Metacall_Callback>(slot);
}

// Base class handler implementation
void QExtensionManager_SuperRegisterExtensions(QExtensionManager* self, QAbstractExtensionFactory* factory, const libqt_string iid) {
    QString iid_QString = QString::fromUtf8(iid.data, iid.len);
    self->QExtensionManager::registerExtensions(factory, iid_QString);
}

// Auxiliary method to allow providing re-implementation
void QExtensionManager_OnRegisterExtensions(QExtensionManager* self, intptr_t slot) {
    if (auto* vqextensionmanager = dynamic_cast<VirtualQExtensionManager*>(self))
        vqextensionmanager->qextensionmanager_registerextensions_callback = reinterpret_cast<VirtualQExtensionManager::QExtensionManager_RegisterExtensions_Callback>(slot);
}

// Base class handler implementation
void QExtensionManager_SuperUnregisterExtensions(QExtensionManager* self, QAbstractExtensionFactory* factory, const libqt_string iid) {
    QString iid_QString = QString::fromUtf8(iid.data, iid.len);
    self->QExtensionManager::unregisterExtensions(factory, iid_QString);
}

// Auxiliary method to allow providing re-implementation
void QExtensionManager_OnUnregisterExtensions(QExtensionManager* self, intptr_t slot) {
    if (auto* vqextensionmanager = dynamic_cast<VirtualQExtensionManager*>(self))
        vqextensionmanager->qextensionmanager_unregisterextensions_callback = reinterpret_cast<VirtualQExtensionManager::QExtensionManager_UnregisterExtensions_Callback>(slot);
}

// Base class handler implementation
QObject* QExtensionManager_SuperExtension(const QExtensionManager* self, QObject* object, const libqt_string iid) {
    QString iid_QString = QString::fromUtf8(iid.data, iid.len);
    return self->QExtensionManager::extension(object, iid_QString);
}

// Auxiliary method to allow providing re-implementation
void QExtensionManager_OnExtension(QExtensionManager* self, intptr_t slot) {
    if (auto* vqextensionmanager = const_cast<VirtualQExtensionManager*>(dynamic_cast<const VirtualQExtensionManager*>(self)))
        vqextensionmanager->qextensionmanager_extension_callback = reinterpret_cast<VirtualQExtensionManager::QExtensionManager_Extension_Callback>(slot);
}

// Derived class handler implementation
bool QExtensionManager_Event(QExtensionManager* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QExtensionManager_SuperEvent(QExtensionManager* self, QEvent* event) {
    return self->QExtensionManager::event(event);
}

// Auxiliary method to allow providing re-implementation
void QExtensionManager_OnEvent(QExtensionManager* self, intptr_t slot) {
    if (auto* vqextensionmanager = dynamic_cast<VirtualQExtensionManager*>(self))
        vqextensionmanager->qextensionmanager_event_callback = reinterpret_cast<VirtualQExtensionManager::QExtensionManager_Event_Callback>(slot);
}

// Derived class handler implementation
bool QExtensionManager_EventFilter(QExtensionManager* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QExtensionManager_SuperEventFilter(QExtensionManager* self, QObject* watched, QEvent* event) {
    return self->QExtensionManager::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QExtensionManager_OnEventFilter(QExtensionManager* self, intptr_t slot) {
    if (auto* vqextensionmanager = dynamic_cast<VirtualQExtensionManager*>(self))
        vqextensionmanager->qextensionmanager_eventfilter_callback = reinterpret_cast<VirtualQExtensionManager::QExtensionManager_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QExtensionManager_TimerEvent(QExtensionManager* self, QTimerEvent* event) {
    auto* vqextensionmanager = dynamic_cast<VirtualQExtensionManager*>(self);
    if (vqextensionmanager) {
        vqextensionmanager->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QExtensionManager::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QExtensionManager_SuperTimerEvent(QExtensionManager* self, QTimerEvent* event) {
    if (auto* vqextensionmanager = dynamic_cast<VirtualQExtensionManager*>(self)) {
        vqextensionmanager->QExtensionManager::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QExtensionManager::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QExtensionManager_OnTimerEvent(QExtensionManager* self, intptr_t slot) {
    if (auto* vqextensionmanager = dynamic_cast<VirtualQExtensionManager*>(self))
        vqextensionmanager->qextensionmanager_timerevent_callback = reinterpret_cast<VirtualQExtensionManager::QExtensionManager_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QExtensionManager_ChildEvent(QExtensionManager* self, QChildEvent* event) {
    auto* vqextensionmanager = dynamic_cast<VirtualQExtensionManager*>(self);
    if (vqextensionmanager) {
        vqextensionmanager->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QExtensionManager::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QExtensionManager_SuperChildEvent(QExtensionManager* self, QChildEvent* event) {
    if (auto* vqextensionmanager = dynamic_cast<VirtualQExtensionManager*>(self)) {
        vqextensionmanager->QExtensionManager::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QExtensionManager::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QExtensionManager_OnChildEvent(QExtensionManager* self, intptr_t slot) {
    if (auto* vqextensionmanager = dynamic_cast<VirtualQExtensionManager*>(self))
        vqextensionmanager->qextensionmanager_childevent_callback = reinterpret_cast<VirtualQExtensionManager::QExtensionManager_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QExtensionManager_CustomEvent(QExtensionManager* self, QEvent* event) {
    auto* vqextensionmanager = dynamic_cast<VirtualQExtensionManager*>(self);
    if (vqextensionmanager) {
        vqextensionmanager->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QExtensionManager::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QExtensionManager_SuperCustomEvent(QExtensionManager* self, QEvent* event) {
    if (auto* vqextensionmanager = dynamic_cast<VirtualQExtensionManager*>(self)) {
        vqextensionmanager->QExtensionManager::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QExtensionManager::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QExtensionManager_OnCustomEvent(QExtensionManager* self, intptr_t slot) {
    if (auto* vqextensionmanager = dynamic_cast<VirtualQExtensionManager*>(self))
        vqextensionmanager->qextensionmanager_customevent_callback = reinterpret_cast<VirtualQExtensionManager::QExtensionManager_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QExtensionManager_ConnectNotify(QExtensionManager* self, const QMetaMethod* signal) {
    auto* vqextensionmanager = dynamic_cast<VirtualQExtensionManager*>(self);
    if (vqextensionmanager) {
        vqextensionmanager->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QExtensionManager::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QExtensionManager_SuperConnectNotify(QExtensionManager* self, const QMetaMethod* signal) {
    if (auto* vqextensionmanager = dynamic_cast<VirtualQExtensionManager*>(self)) {
        vqextensionmanager->QExtensionManager::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QExtensionManager::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QExtensionManager_OnConnectNotify(QExtensionManager* self, intptr_t slot) {
    if (auto* vqextensionmanager = dynamic_cast<VirtualQExtensionManager*>(self))
        vqextensionmanager->qextensionmanager_connectnotify_callback = reinterpret_cast<VirtualQExtensionManager::QExtensionManager_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QExtensionManager_DisconnectNotify(QExtensionManager* self, const QMetaMethod* signal) {
    auto* vqextensionmanager = dynamic_cast<VirtualQExtensionManager*>(self);
    if (vqextensionmanager) {
        vqextensionmanager->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QExtensionManager::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QExtensionManager_SuperDisconnectNotify(QExtensionManager* self, const QMetaMethod* signal) {
    if (auto* vqextensionmanager = dynamic_cast<VirtualQExtensionManager*>(self)) {
        vqextensionmanager->QExtensionManager::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QExtensionManager::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QExtensionManager_OnDisconnectNotify(QExtensionManager* self, intptr_t slot) {
    if (auto* vqextensionmanager = dynamic_cast<VirtualQExtensionManager*>(self))
        vqextensionmanager->qextensionmanager_disconnectnotify_callback = reinterpret_cast<VirtualQExtensionManager::QExtensionManager_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* QExtensionManager_Sender(const QExtensionManager* self) {
    if (auto* vqextensionmanager = const_cast<VirtualQExtensionManager*>(dynamic_cast<const VirtualQExtensionManager*>(self))) {
        return vqextensionmanager->VirtualQExtensionManager::sender();
    } else
        qFatal("Error: Protected method QExtensionManager::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QExtensionManager_SenderSignalIndex(const QExtensionManager* self) {
    if (auto* vqextensionmanager = const_cast<VirtualQExtensionManager*>(dynamic_cast<const VirtualQExtensionManager*>(self))) {
        return vqextensionmanager->VirtualQExtensionManager::senderSignalIndex();
    } else
        qFatal("Error: Protected method QExtensionManager::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QExtensionManager_Receivers(const QExtensionManager* self, const char* signal) {
    if (auto* vqextensionmanager = const_cast<VirtualQExtensionManager*>(dynamic_cast<const VirtualQExtensionManager*>(self))) {
        return vqextensionmanager->VirtualQExtensionManager::receivers(signal);
    } else
        qFatal("Error: Protected method QExtensionManager::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QExtensionManager_IsSignalConnected(const QExtensionManager* self, const QMetaMethod* signal) {
    if (auto* vqextensionmanager = const_cast<VirtualQExtensionManager*>(dynamic_cast<const VirtualQExtensionManager*>(self))) {
        return vqextensionmanager->VirtualQExtensionManager::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QExtensionManager::isSignalConnected called without a directly constructed type");
}

void QExtensionManager_Delete(QExtensionManager* self) {
    delete self;
}
