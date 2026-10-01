#include <QAbstractExtensionFactory>
#include <QChildEvent>
#include <QEvent>
#include <QExtensionFactory>
#include <QExtensionManager>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QTimerEvent>
#include <default_extensionfactory.h>
#include "libdefault_extensionfactory.h"
#include "libdefault_extensionfactory.hxx"

QExtensionFactory* QExtensionFactory_new() {
    return new VirtualQExtensionFactory();
}

QExtensionFactory* QExtensionFactory_new2(QExtensionManager* parent) {
    return new VirtualQExtensionFactory(parent);
}

QAbstractExtensionFactory* QExtensionFactory_AsQAbstractExtensionFactory(QExtensionFactory* self) {
    return static_cast<QAbstractExtensionFactory*>(self);
}

QExtensionFactory* QExtensionFactory_FromQAbstractExtensionFactory(QAbstractExtensionFactory* _qabstractextensionfactory) {
    return dynamic_cast<QExtensionFactory*>(static_cast<QAbstractExtensionFactory*>(_qabstractextensionfactory));
}

QMetaObject* QExtensionFactory_MetaObject(const QExtensionFactory* self) {
    return (QMetaObject*)self->metaObject();
}

void* QExtensionFactory_Metacast(QExtensionFactory* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QExtensionFactory_Metacall(QExtensionFactory* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QExtensionFactory_Tr(const char* s) {
    auto _ret = QExtensionFactory::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QObject* QExtensionFactory_Extension(const QExtensionFactory* self, QObject* object, const libqt_string iid) {
    QString iid_QString = QString::fromUtf8(iid.data, iid.len);
    return self->extension(object, iid_QString);
}

QExtensionManager* QExtensionFactory_ExtensionManager(const QExtensionFactory* self) {
    return self->extensionManager();
}

QObject* QExtensionFactory_CreateExtension(const QExtensionFactory* self, QObject* object, const libqt_string iid, QObject* parent) {
    QString iid_QString = QString::fromUtf8(iid.data, iid.len);
    auto* vqextensionfactory = dynamic_cast<const VirtualQExtensionFactory*>(self);
    if (vqextensionfactory) {
        return vqextensionfactory->createExtension(object, iid_QString, parent);
    }
    qFatal("Error: Protected method QExtensionFactory::createExtension called without a directly constructed type");
}

libqt_string QExtensionFactory_Tr2(const char* s, const char* c) {
    auto _ret = QExtensionFactory::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QExtensionFactory_Tr3(const char* s, const char* c, int n) {
    auto _ret = QExtensionFactory::tr(s, c, static_cast<int>(n));
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
QMetaObject* QExtensionFactory_SuperMetaObject(const QExtensionFactory* self) {
    return (QMetaObject*)self->QExtensionFactory::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QExtensionFactory_OnMetaObject(QExtensionFactory* self, intptr_t slot) {
    if (auto* vqextensionfactory = const_cast<VirtualQExtensionFactory*>(dynamic_cast<const VirtualQExtensionFactory*>(self)))
        vqextensionfactory->qextensionfactory_metaobject_callback = reinterpret_cast<VirtualQExtensionFactory::QExtensionFactory_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QExtensionFactory_SuperMetacast(QExtensionFactory* self, const char* param1) {
    return self->QExtensionFactory::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QExtensionFactory_OnMetacast(QExtensionFactory* self, intptr_t slot) {
    if (auto* vqextensionfactory = dynamic_cast<VirtualQExtensionFactory*>(self))
        vqextensionfactory->qextensionfactory_metacast_callback = reinterpret_cast<VirtualQExtensionFactory::QExtensionFactory_Metacast_Callback>(slot);
}

// Base class handler implementation
int QExtensionFactory_SuperMetacall(QExtensionFactory* self, int param1, int param2, void** param3) {
    return self->QExtensionFactory::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QExtensionFactory_OnMetacall(QExtensionFactory* self, intptr_t slot) {
    if (auto* vqextensionfactory = dynamic_cast<VirtualQExtensionFactory*>(self))
        vqextensionfactory->qextensionfactory_metacall_callback = reinterpret_cast<VirtualQExtensionFactory::QExtensionFactory_Metacall_Callback>(slot);
}

// Base class handler implementation
QObject* QExtensionFactory_SuperExtension(const QExtensionFactory* self, QObject* object, const libqt_string iid) {
    QString iid_QString = QString::fromUtf8(iid.data, iid.len);
    return self->QExtensionFactory::extension(object, iid_QString);
}

// Auxiliary method to allow providing re-implementation
void QExtensionFactory_OnExtension(QExtensionFactory* self, intptr_t slot) {
    if (auto* vqextensionfactory = const_cast<VirtualQExtensionFactory*>(dynamic_cast<const VirtualQExtensionFactory*>(self)))
        vqextensionfactory->qextensionfactory_extension_callback = reinterpret_cast<VirtualQExtensionFactory::QExtensionFactory_Extension_Callback>(slot);
}

// Base class handler implementation
QObject* QExtensionFactory_SuperCreateExtension(const QExtensionFactory* self, QObject* object, const libqt_string iid, QObject* parent) {
    QString iid_QString = QString::fromUtf8(iid.data, iid.len);
    if (auto* vqextensionfactory = const_cast<VirtualQExtensionFactory*>(dynamic_cast<const VirtualQExtensionFactory*>(self))) {
        return vqextensionfactory->QExtensionFactory::createExtension(object, iid_QString, parent);
    } else
        qFatal("Error: Protected virtual method QExtensionFactory::createExtension called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QExtensionFactory_OnCreateExtension(QExtensionFactory* self, intptr_t slot) {
    if (auto* vqextensionfactory = const_cast<VirtualQExtensionFactory*>(dynamic_cast<const VirtualQExtensionFactory*>(self)))
        vqextensionfactory->qextensionfactory_createextension_callback = reinterpret_cast<VirtualQExtensionFactory::QExtensionFactory_CreateExtension_Callback>(slot);
}

// Derived class handler implementation
bool QExtensionFactory_Event(QExtensionFactory* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QExtensionFactory_SuperEvent(QExtensionFactory* self, QEvent* event) {
    return self->QExtensionFactory::event(event);
}

// Auxiliary method to allow providing re-implementation
void QExtensionFactory_OnEvent(QExtensionFactory* self, intptr_t slot) {
    if (auto* vqextensionfactory = dynamic_cast<VirtualQExtensionFactory*>(self))
        vqextensionfactory->qextensionfactory_event_callback = reinterpret_cast<VirtualQExtensionFactory::QExtensionFactory_Event_Callback>(slot);
}

// Derived class handler implementation
bool QExtensionFactory_EventFilter(QExtensionFactory* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QExtensionFactory_SuperEventFilter(QExtensionFactory* self, QObject* watched, QEvent* event) {
    return self->QExtensionFactory::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QExtensionFactory_OnEventFilter(QExtensionFactory* self, intptr_t slot) {
    if (auto* vqextensionfactory = dynamic_cast<VirtualQExtensionFactory*>(self))
        vqextensionfactory->qextensionfactory_eventfilter_callback = reinterpret_cast<VirtualQExtensionFactory::QExtensionFactory_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QExtensionFactory_TimerEvent(QExtensionFactory* self, QTimerEvent* event) {
    auto* vqextensionfactory = dynamic_cast<VirtualQExtensionFactory*>(self);
    if (vqextensionfactory) {
        vqextensionfactory->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QExtensionFactory::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QExtensionFactory_SuperTimerEvent(QExtensionFactory* self, QTimerEvent* event) {
    if (auto* vqextensionfactory = dynamic_cast<VirtualQExtensionFactory*>(self)) {
        vqextensionfactory->QExtensionFactory::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QExtensionFactory::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QExtensionFactory_OnTimerEvent(QExtensionFactory* self, intptr_t slot) {
    if (auto* vqextensionfactory = dynamic_cast<VirtualQExtensionFactory*>(self))
        vqextensionfactory->qextensionfactory_timerevent_callback = reinterpret_cast<VirtualQExtensionFactory::QExtensionFactory_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QExtensionFactory_ChildEvent(QExtensionFactory* self, QChildEvent* event) {
    auto* vqextensionfactory = dynamic_cast<VirtualQExtensionFactory*>(self);
    if (vqextensionfactory) {
        vqextensionfactory->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QExtensionFactory::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QExtensionFactory_SuperChildEvent(QExtensionFactory* self, QChildEvent* event) {
    if (auto* vqextensionfactory = dynamic_cast<VirtualQExtensionFactory*>(self)) {
        vqextensionfactory->QExtensionFactory::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QExtensionFactory::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QExtensionFactory_OnChildEvent(QExtensionFactory* self, intptr_t slot) {
    if (auto* vqextensionfactory = dynamic_cast<VirtualQExtensionFactory*>(self))
        vqextensionfactory->qextensionfactory_childevent_callback = reinterpret_cast<VirtualQExtensionFactory::QExtensionFactory_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QExtensionFactory_CustomEvent(QExtensionFactory* self, QEvent* event) {
    auto* vqextensionfactory = dynamic_cast<VirtualQExtensionFactory*>(self);
    if (vqextensionfactory) {
        vqextensionfactory->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QExtensionFactory::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QExtensionFactory_SuperCustomEvent(QExtensionFactory* self, QEvent* event) {
    if (auto* vqextensionfactory = dynamic_cast<VirtualQExtensionFactory*>(self)) {
        vqextensionfactory->QExtensionFactory::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QExtensionFactory::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QExtensionFactory_OnCustomEvent(QExtensionFactory* self, intptr_t slot) {
    if (auto* vqextensionfactory = dynamic_cast<VirtualQExtensionFactory*>(self))
        vqextensionfactory->qextensionfactory_customevent_callback = reinterpret_cast<VirtualQExtensionFactory::QExtensionFactory_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QExtensionFactory_ConnectNotify(QExtensionFactory* self, const QMetaMethod* signal) {
    auto* vqextensionfactory = dynamic_cast<VirtualQExtensionFactory*>(self);
    if (vqextensionfactory) {
        vqextensionfactory->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QExtensionFactory::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QExtensionFactory_SuperConnectNotify(QExtensionFactory* self, const QMetaMethod* signal) {
    if (auto* vqextensionfactory = dynamic_cast<VirtualQExtensionFactory*>(self)) {
        vqextensionfactory->QExtensionFactory::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QExtensionFactory::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QExtensionFactory_OnConnectNotify(QExtensionFactory* self, intptr_t slot) {
    if (auto* vqextensionfactory = dynamic_cast<VirtualQExtensionFactory*>(self))
        vqextensionfactory->qextensionfactory_connectnotify_callback = reinterpret_cast<VirtualQExtensionFactory::QExtensionFactory_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QExtensionFactory_DisconnectNotify(QExtensionFactory* self, const QMetaMethod* signal) {
    auto* vqextensionfactory = dynamic_cast<VirtualQExtensionFactory*>(self);
    if (vqextensionfactory) {
        vqextensionfactory->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QExtensionFactory::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QExtensionFactory_SuperDisconnectNotify(QExtensionFactory* self, const QMetaMethod* signal) {
    if (auto* vqextensionfactory = dynamic_cast<VirtualQExtensionFactory*>(self)) {
        vqextensionfactory->QExtensionFactory::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QExtensionFactory::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QExtensionFactory_OnDisconnectNotify(QExtensionFactory* self, intptr_t slot) {
    if (auto* vqextensionfactory = dynamic_cast<VirtualQExtensionFactory*>(self))
        vqextensionfactory->qextensionfactory_disconnectnotify_callback = reinterpret_cast<VirtualQExtensionFactory::QExtensionFactory_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* QExtensionFactory_Sender(const QExtensionFactory* self) {
    if (auto* vqextensionfactory = const_cast<VirtualQExtensionFactory*>(dynamic_cast<const VirtualQExtensionFactory*>(self))) {
        return vqextensionfactory->VirtualQExtensionFactory::sender();
    } else
        qFatal("Error: Protected method QExtensionFactory::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QExtensionFactory_SenderSignalIndex(const QExtensionFactory* self) {
    if (auto* vqextensionfactory = const_cast<VirtualQExtensionFactory*>(dynamic_cast<const VirtualQExtensionFactory*>(self))) {
        return vqextensionfactory->VirtualQExtensionFactory::senderSignalIndex();
    } else
        qFatal("Error: Protected method QExtensionFactory::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QExtensionFactory_Receivers(const QExtensionFactory* self, const char* signal) {
    if (auto* vqextensionfactory = const_cast<VirtualQExtensionFactory*>(dynamic_cast<const VirtualQExtensionFactory*>(self))) {
        return vqextensionfactory->VirtualQExtensionFactory::receivers(signal);
    } else
        qFatal("Error: Protected method QExtensionFactory::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QExtensionFactory_IsSignalConnected(const QExtensionFactory* self, const QMetaMethod* signal) {
    if (auto* vqextensionfactory = const_cast<VirtualQExtensionFactory*>(dynamic_cast<const VirtualQExtensionFactory*>(self))) {
        return vqextensionfactory->VirtualQExtensionFactory::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QExtensionFactory::isSignalConnected called without a directly constructed type");
}

void QExtensionFactory_Delete(QExtensionFactory* self) {
    delete self;
}
