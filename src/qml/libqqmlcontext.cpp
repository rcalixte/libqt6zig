#include <QChildEvent>
#include <QEvent>
#include <QJSValue>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QQmlContext>
#define WORKAROUND_INNER_CLASS_DEFINITION_QQmlContext__PropertyPair
#include <QQmlEngine>
#include <QString>
#include <QTimerEvent>
#include <QUrl>
#include <QVariant>
#include <qqmlcontext.h>
#include "libqqmlcontext.h"
#include "libqqmlcontext.hxx"

QQmlContext* QQmlContext_new(QQmlEngine* parent) {
    return new VirtualQQmlContext(parent);
}

QQmlContext* QQmlContext_new2(QQmlContext* parent) {
    return new VirtualQQmlContext(parent);
}

QQmlContext* QQmlContext_new3(QQmlEngine* parent, QObject* objParent) {
    return new VirtualQQmlContext(parent, objParent);
}

QQmlContext* QQmlContext_new4(QQmlContext* parent, QObject* objParent) {
    return new VirtualQQmlContext(parent, objParent);
}

QMetaObject* QQmlContext_MetaObject(const QQmlContext* self) {
    return (QMetaObject*)self->metaObject();
}

void* QQmlContext_Metacast(QQmlContext* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QQmlContext_Metacall(QQmlContext* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QQmlContext_Tr(const char* s) {
    auto _ret = QQmlContext::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool QQmlContext_IsValid(const QQmlContext* self) {
    return self->isValid();
}

QQmlEngine* QQmlContext_Engine(const QQmlContext* self) {
    return self->engine();
}

QQmlContext* QQmlContext_ParentContext(const QQmlContext* self) {
    return self->parentContext();
}

QObject* QQmlContext_ContextObject(const QQmlContext* self) {
    return self->contextObject();
}

void QQmlContext_SetContextObject(QQmlContext* self, QObject* contextObject) {
    self->setContextObject(contextObject);
}

QVariant* QQmlContext_ContextProperty(const QQmlContext* self, const libqt_string param1) {
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    return new QVariant(self->contextProperty(param1_QString));
}

void QQmlContext_SetContextProperty(QQmlContext* self, const libqt_string param1, QObject* param2) {
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    self->setContextProperty(param1_QString, param2);
}

void QQmlContext_SetContextProperty2(QQmlContext* self, const libqt_string param1, const QVariant* param2) {
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    self->setContextProperty(param1_QString, *param2);
}

void QQmlContext_SetContextProperties(QQmlContext* self, const libqt_list /* of QQmlContext__PropertyPair* */ properties) {
    QList<QQmlContext::PropertyPair> properties_QList;
    properties_QList.reserve(properties.len);
    QQmlContext__PropertyPair** properties_arr = static_cast<QQmlContext__PropertyPair**>(properties.data);
    for (size_t i = 0; i < properties.len; ++i) {
        properties_QList.push_back(*(properties_arr[i]));
    }
    self->setContextProperties(properties_QList);
}

libqt_string QQmlContext_NameForObject(const QQmlContext* self, const QObject* param1) {
    auto _ret = self->nameForObject(param1);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QObject* QQmlContext_ObjectForName(const QQmlContext* self, const libqt_string param1) {
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    return self->objectForName(param1_QString);
}

QUrl* QQmlContext_ResolvedUrl(const QQmlContext* self, const QUrl* param1) {
    return new QUrl(self->resolvedUrl(*param1));
}

void QQmlContext_SetBaseUrl(QQmlContext* self, const QUrl* baseUrl) {
    self->setBaseUrl(*baseUrl);
}

QUrl* QQmlContext_BaseUrl(const QQmlContext* self) {
    return new QUrl(self->baseUrl());
}

QJSValue* QQmlContext_ImportedScript(const QQmlContext* self, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return new QJSValue(self->importedScript(name_QString));
}

libqt_string QQmlContext_Tr2(const char* s, const char* c) {
    auto _ret = QQmlContext::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QQmlContext_Tr3(const char* s, const char* c, int n) {
    auto _ret = QQmlContext::tr(s, c, static_cast<int>(n));
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
QMetaObject* QQmlContext_SuperMetaObject(const QQmlContext* self) {
    auto* vqqmlcontext = const_cast<VirtualQQmlContext*>(dynamic_cast<const VirtualQQmlContext*>(self));
    if (vqqmlcontext && vqqmlcontext->isVirtualQQmlContext) {
        vqqmlcontext->setQQmlContext_MetaObject_IsBase(true);
        return (QMetaObject*)vqqmlcontext->metaObject();
    } else {
        return (QMetaObject*)self->QQmlContext::metaObject();
    }
}

// Auxiliary method to allow providing re-implementation
void QQmlContext_OnMetaObject(const QQmlContext* self, intptr_t slot) {
    auto* vqqmlcontext = const_cast<VirtualQQmlContext*>(dynamic_cast<const VirtualQQmlContext*>(self));
    if (vqqmlcontext && vqqmlcontext->isVirtualQQmlContext)
        vqqmlcontext->setQQmlContext_MetaObject_Callback(reinterpret_cast<VirtualQQmlContext::QQmlContext_MetaObject_Callback>(slot));
}

// Base class handler implementation
void* QQmlContext_SuperMetacast(QQmlContext* self, const char* param1) {
    auto* vqqmlcontext = dynamic_cast<VirtualQQmlContext*>(self);
    if (vqqmlcontext && vqqmlcontext->isVirtualQQmlContext) {
        vqqmlcontext->setQQmlContext_Metacast_IsBase(true);
        return vqqmlcontext->qt_metacast(param1);
    } else {
        return self->QQmlContext::qt_metacast(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QQmlContext_OnMetacast(QQmlContext* self, intptr_t slot) {
    auto* vqqmlcontext = dynamic_cast<VirtualQQmlContext*>(self);
    if (vqqmlcontext && vqqmlcontext->isVirtualQQmlContext)
        vqqmlcontext->setQQmlContext_Metacast_Callback(reinterpret_cast<VirtualQQmlContext::QQmlContext_Metacast_Callback>(slot));
}

// Base class handler implementation
int QQmlContext_SuperMetacall(QQmlContext* self, int param1, int param2, void** param3) {
    auto* vqqmlcontext = dynamic_cast<VirtualQQmlContext*>(self);
    if (vqqmlcontext && vqqmlcontext->isVirtualQQmlContext) {
        vqqmlcontext->setQQmlContext_Metacall_IsBase(true);
        return vqqmlcontext->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->QQmlContext::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void QQmlContext_OnMetacall(QQmlContext* self, intptr_t slot) {
    auto* vqqmlcontext = dynamic_cast<VirtualQQmlContext*>(self);
    if (vqqmlcontext && vqqmlcontext->isVirtualQQmlContext)
        vqqmlcontext->setQQmlContext_Metacall_Callback(reinterpret_cast<VirtualQQmlContext::QQmlContext_Metacall_Callback>(slot));
}

// Derived class handler implementation
bool QQmlContext_Event(QQmlContext* self, QEvent* event) {
    auto* vqqmlcontext = dynamic_cast<VirtualQQmlContext*>(self);
    if (vqqmlcontext && vqqmlcontext->isVirtualQQmlContext) {
        return vqqmlcontext->event(event);
    } else {
        return self->QQmlContext::event(event);
    }
}

// Base class handler implementation
bool QQmlContext_SuperEvent(QQmlContext* self, QEvent* event) {
    auto* vqqmlcontext = dynamic_cast<VirtualQQmlContext*>(self);
    if (vqqmlcontext && vqqmlcontext->isVirtualQQmlContext) {
        vqqmlcontext->setQQmlContext_Event_IsBase(true);
        return vqqmlcontext->event(event);
    } else {
        return self->QQmlContext::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QQmlContext_OnEvent(QQmlContext* self, intptr_t slot) {
    auto* vqqmlcontext = dynamic_cast<VirtualQQmlContext*>(self);
    if (vqqmlcontext && vqqmlcontext->isVirtualQQmlContext)
        vqqmlcontext->setQQmlContext_Event_Callback(reinterpret_cast<VirtualQQmlContext::QQmlContext_Event_Callback>(slot));
}

// Derived class handler implementation
bool QQmlContext_EventFilter(QQmlContext* self, QObject* watched, QEvent* event) {
    auto* vqqmlcontext = dynamic_cast<VirtualQQmlContext*>(self);
    if (vqqmlcontext && vqqmlcontext->isVirtualQQmlContext) {
        return vqqmlcontext->eventFilter(watched, event);
    } else {
        return self->QQmlContext::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QQmlContext_SuperEventFilter(QQmlContext* self, QObject* watched, QEvent* event) {
    auto* vqqmlcontext = dynamic_cast<VirtualQQmlContext*>(self);
    if (vqqmlcontext && vqqmlcontext->isVirtualQQmlContext) {
        vqqmlcontext->setQQmlContext_EventFilter_IsBase(true);
        return vqqmlcontext->eventFilter(watched, event);
    } else {
        return self->QQmlContext::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QQmlContext_OnEventFilter(QQmlContext* self, intptr_t slot) {
    auto* vqqmlcontext = dynamic_cast<VirtualQQmlContext*>(self);
    if (vqqmlcontext && vqqmlcontext->isVirtualQQmlContext)
        vqqmlcontext->setQQmlContext_EventFilter_Callback(reinterpret_cast<VirtualQQmlContext::QQmlContext_EventFilter_Callback>(slot));
}

// Derived class handler implementation
void QQmlContext_TimerEvent(QQmlContext* self, QTimerEvent* event) {
    auto* vqqmlcontext = dynamic_cast<VirtualQQmlContext*>(self);
    if (vqqmlcontext && vqqmlcontext->isVirtualQQmlContext) {
        vqqmlcontext->timerEvent(event);
    } else {
        ((VirtualQQmlContext*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QQmlContext_SuperTimerEvent(QQmlContext* self, QTimerEvent* event) {
    auto* vqqmlcontext = dynamic_cast<VirtualQQmlContext*>(self);
    if (vqqmlcontext && vqqmlcontext->isVirtualQQmlContext) {
        vqqmlcontext->setQQmlContext_TimerEvent_IsBase(true);
        vqqmlcontext->timerEvent(event);
    } else {
        ((VirtualQQmlContext*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QQmlContext_OnTimerEvent(QQmlContext* self, intptr_t slot) {
    auto* vqqmlcontext = dynamic_cast<VirtualQQmlContext*>(self);
    if (vqqmlcontext && vqqmlcontext->isVirtualQQmlContext)
        vqqmlcontext->setQQmlContext_TimerEvent_Callback(reinterpret_cast<VirtualQQmlContext::QQmlContext_TimerEvent_Callback>(slot));
}

// Derived class handler implementation
void QQmlContext_ChildEvent(QQmlContext* self, QChildEvent* event) {
    auto* vqqmlcontext = dynamic_cast<VirtualQQmlContext*>(self);
    if (vqqmlcontext && vqqmlcontext->isVirtualQQmlContext) {
        vqqmlcontext->childEvent(event);
    } else {
        ((VirtualQQmlContext*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QQmlContext_SuperChildEvent(QQmlContext* self, QChildEvent* event) {
    auto* vqqmlcontext = dynamic_cast<VirtualQQmlContext*>(self);
    if (vqqmlcontext && vqqmlcontext->isVirtualQQmlContext) {
        vqqmlcontext->setQQmlContext_ChildEvent_IsBase(true);
        vqqmlcontext->childEvent(event);
    } else {
        ((VirtualQQmlContext*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QQmlContext_OnChildEvent(QQmlContext* self, intptr_t slot) {
    auto* vqqmlcontext = dynamic_cast<VirtualQQmlContext*>(self);
    if (vqqmlcontext && vqqmlcontext->isVirtualQQmlContext)
        vqqmlcontext->setQQmlContext_ChildEvent_Callback(reinterpret_cast<VirtualQQmlContext::QQmlContext_ChildEvent_Callback>(slot));
}

// Derived class handler implementation
void QQmlContext_CustomEvent(QQmlContext* self, QEvent* event) {
    auto* vqqmlcontext = dynamic_cast<VirtualQQmlContext*>(self);
    if (vqqmlcontext && vqqmlcontext->isVirtualQQmlContext) {
        vqqmlcontext->customEvent(event);
    } else {
        ((VirtualQQmlContext*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QQmlContext_SuperCustomEvent(QQmlContext* self, QEvent* event) {
    auto* vqqmlcontext = dynamic_cast<VirtualQQmlContext*>(self);
    if (vqqmlcontext && vqqmlcontext->isVirtualQQmlContext) {
        vqqmlcontext->setQQmlContext_CustomEvent_IsBase(true);
        vqqmlcontext->customEvent(event);
    } else {
        ((VirtualQQmlContext*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QQmlContext_OnCustomEvent(QQmlContext* self, intptr_t slot) {
    auto* vqqmlcontext = dynamic_cast<VirtualQQmlContext*>(self);
    if (vqqmlcontext && vqqmlcontext->isVirtualQQmlContext)
        vqqmlcontext->setQQmlContext_CustomEvent_Callback(reinterpret_cast<VirtualQQmlContext::QQmlContext_CustomEvent_Callback>(slot));
}

// Derived class handler implementation
void QQmlContext_ConnectNotify(QQmlContext* self, const QMetaMethod* signal) {
    auto* vqqmlcontext = dynamic_cast<VirtualQQmlContext*>(self);
    if (vqqmlcontext && vqqmlcontext->isVirtualQQmlContext) {
        vqqmlcontext->connectNotify(*signal);
    } else {
        ((VirtualQQmlContext*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QQmlContext_SuperConnectNotify(QQmlContext* self, const QMetaMethod* signal) {
    auto* vqqmlcontext = dynamic_cast<VirtualQQmlContext*>(self);
    if (vqqmlcontext && vqqmlcontext->isVirtualQQmlContext) {
        vqqmlcontext->setQQmlContext_ConnectNotify_IsBase(true);
        vqqmlcontext->connectNotify(*signal);
    } else {
        ((VirtualQQmlContext*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QQmlContext_OnConnectNotify(QQmlContext* self, intptr_t slot) {
    auto* vqqmlcontext = dynamic_cast<VirtualQQmlContext*>(self);
    if (vqqmlcontext && vqqmlcontext->isVirtualQQmlContext)
        vqqmlcontext->setQQmlContext_ConnectNotify_Callback(reinterpret_cast<VirtualQQmlContext::QQmlContext_ConnectNotify_Callback>(slot));
}

// Derived class handler implementation
void QQmlContext_DisconnectNotify(QQmlContext* self, const QMetaMethod* signal) {
    auto* vqqmlcontext = dynamic_cast<VirtualQQmlContext*>(self);
    if (vqqmlcontext && vqqmlcontext->isVirtualQQmlContext) {
        vqqmlcontext->disconnectNotify(*signal);
    } else {
        ((VirtualQQmlContext*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QQmlContext_SuperDisconnectNotify(QQmlContext* self, const QMetaMethod* signal) {
    auto* vqqmlcontext = dynamic_cast<VirtualQQmlContext*>(self);
    if (vqqmlcontext && vqqmlcontext->isVirtualQQmlContext) {
        vqqmlcontext->setQQmlContext_DisconnectNotify_IsBase(true);
        vqqmlcontext->disconnectNotify(*signal);
    } else {
        ((VirtualQQmlContext*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QQmlContext_OnDisconnectNotify(QQmlContext* self, intptr_t slot) {
    auto* vqqmlcontext = dynamic_cast<VirtualQQmlContext*>(self);
    if (vqqmlcontext && vqqmlcontext->isVirtualQQmlContext)
        vqqmlcontext->setQQmlContext_DisconnectNotify_Callback(reinterpret_cast<VirtualQQmlContext::QQmlContext_DisconnectNotify_Callback>(slot));
}

// Derived class handler implementation
QObject* QQmlContext_Sender(const QQmlContext* self) {
    auto* vqqmlcontext = const_cast<VirtualQQmlContext*>(dynamic_cast<const VirtualQQmlContext*>(self));
    if (vqqmlcontext && vqqmlcontext->isVirtualQQmlContext) {
        return vqqmlcontext->sender();
    } else {
        return ((VirtualQQmlContext*)self)->sender();
    }
}

// Base class handler implementation
QObject* QQmlContext_SuperSender(const QQmlContext* self) {
    auto* vqqmlcontext = const_cast<VirtualQQmlContext*>(dynamic_cast<const VirtualQQmlContext*>(self));
    if (vqqmlcontext && vqqmlcontext->isVirtualQQmlContext) {
        vqqmlcontext->setQQmlContext_Sender_IsBase(true);
        return vqqmlcontext->sender();
    } else {
        return ((VirtualQQmlContext*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QQmlContext_OnSender(const QQmlContext* self, intptr_t slot) {
    auto* vqqmlcontext = const_cast<VirtualQQmlContext*>(dynamic_cast<const VirtualQQmlContext*>(self));
    if (vqqmlcontext && vqqmlcontext->isVirtualQQmlContext)
        vqqmlcontext->setQQmlContext_Sender_Callback(reinterpret_cast<VirtualQQmlContext::QQmlContext_Sender_Callback>(slot));
}

// Derived class handler implementation
int QQmlContext_SenderSignalIndex(const QQmlContext* self) {
    auto* vqqmlcontext = const_cast<VirtualQQmlContext*>(dynamic_cast<const VirtualQQmlContext*>(self));
    if (vqqmlcontext && vqqmlcontext->isVirtualQQmlContext) {
        return vqqmlcontext->senderSignalIndex();
    } else {
        return ((VirtualQQmlContext*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QQmlContext_SuperSenderSignalIndex(const QQmlContext* self) {
    auto* vqqmlcontext = const_cast<VirtualQQmlContext*>(dynamic_cast<const VirtualQQmlContext*>(self));
    if (vqqmlcontext && vqqmlcontext->isVirtualQQmlContext) {
        vqqmlcontext->setQQmlContext_SenderSignalIndex_IsBase(true);
        return vqqmlcontext->senderSignalIndex();
    } else {
        return ((VirtualQQmlContext*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QQmlContext_OnSenderSignalIndex(const QQmlContext* self, intptr_t slot) {
    auto* vqqmlcontext = const_cast<VirtualQQmlContext*>(dynamic_cast<const VirtualQQmlContext*>(self));
    if (vqqmlcontext && vqqmlcontext->isVirtualQQmlContext)
        vqqmlcontext->setQQmlContext_SenderSignalIndex_Callback(reinterpret_cast<VirtualQQmlContext::QQmlContext_SenderSignalIndex_Callback>(slot));
}

// Derived class handler implementation
int QQmlContext_Receivers(const QQmlContext* self, const char* signal) {
    auto* vqqmlcontext = const_cast<VirtualQQmlContext*>(dynamic_cast<const VirtualQQmlContext*>(self));
    if (vqqmlcontext && vqqmlcontext->isVirtualQQmlContext) {
        return vqqmlcontext->receivers(signal);
    } else {
        return ((VirtualQQmlContext*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QQmlContext_SuperReceivers(const QQmlContext* self, const char* signal) {
    auto* vqqmlcontext = const_cast<VirtualQQmlContext*>(dynamic_cast<const VirtualQQmlContext*>(self));
    if (vqqmlcontext && vqqmlcontext->isVirtualQQmlContext) {
        vqqmlcontext->setQQmlContext_Receivers_IsBase(true);
        return vqqmlcontext->receivers(signal);
    } else {
        return ((VirtualQQmlContext*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QQmlContext_OnReceivers(const QQmlContext* self, intptr_t slot) {
    auto* vqqmlcontext = const_cast<VirtualQQmlContext*>(dynamic_cast<const VirtualQQmlContext*>(self));
    if (vqqmlcontext && vqqmlcontext->isVirtualQQmlContext)
        vqqmlcontext->setQQmlContext_Receivers_Callback(reinterpret_cast<VirtualQQmlContext::QQmlContext_Receivers_Callback>(slot));
}

// Derived class handler implementation
bool QQmlContext_IsSignalConnected(const QQmlContext* self, const QMetaMethod* signal) {
    auto* vqqmlcontext = const_cast<VirtualQQmlContext*>(dynamic_cast<const VirtualQQmlContext*>(self));
    if (vqqmlcontext && vqqmlcontext->isVirtualQQmlContext) {
        return vqqmlcontext->isSignalConnected(*signal);
    } else {
        return ((VirtualQQmlContext*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QQmlContext_SuperIsSignalConnected(const QQmlContext* self, const QMetaMethod* signal) {
    auto* vqqmlcontext = const_cast<VirtualQQmlContext*>(dynamic_cast<const VirtualQQmlContext*>(self));
    if (vqqmlcontext && vqqmlcontext->isVirtualQQmlContext) {
        vqqmlcontext->setQQmlContext_IsSignalConnected_IsBase(true);
        return vqqmlcontext->isSignalConnected(*signal);
    } else {
        return ((VirtualQQmlContext*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QQmlContext_OnIsSignalConnected(const QQmlContext* self, intptr_t slot) {
    auto* vqqmlcontext = const_cast<VirtualQQmlContext*>(dynamic_cast<const VirtualQQmlContext*>(self));
    if (vqqmlcontext && vqqmlcontext->isVirtualQQmlContext)
        vqqmlcontext->setQQmlContext_IsSignalConnected_Callback(reinterpret_cast<VirtualQQmlContext::QQmlContext_IsSignalConnected_Callback>(slot));
}

void QQmlContext_Delete(QQmlContext* self) {
    delete self;
}

QQmlContext__PropertyPair* QQmlContext__PropertyPair_new() {
    return new QQmlContext::PropertyPair();
}

QQmlContext__PropertyPair* QQmlContext__PropertyPair_new2(const QQmlContext__PropertyPair* param1) {
    return new QQmlContext::PropertyPair(*param1);
}

libqt_string QQmlContext__PropertyPair_Name(const QQmlContext__PropertyPair* self) {
    auto name_ret = self->name;
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray name_b = name_ret.toUtf8();
    libqt_string name_str;
    name_str.len = name_b.length();
    name_str.data = static_cast<const char*>(malloc(name_str.len + 1));
    memcpy((void*)name_str.data, name_b.data(), name_str.len);
    ((char*)name_str.data)[name_str.len] = '\0';
    return name_str;
}

void QQmlContext__PropertyPair_SetName(QQmlContext__PropertyPair* self, libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    self->name = name_QString;
}

QVariant* QQmlContext__PropertyPair_Value(const QQmlContext__PropertyPair* self) {
    return new QVariant(self->value);
}

void QQmlContext__PropertyPair_SetValue(QQmlContext__PropertyPair* self, QVariant* value) {
    self->value = *value;
}

void QQmlContext__PropertyPair_OperatorAssign(QQmlContext__PropertyPair* self, const QQmlContext__PropertyPair* param1) {
    self->operator=(*param1);
}

void QQmlContext__PropertyPair_Delete(QQmlContext__PropertyPair* self) {
    delete self;
}
