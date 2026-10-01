#include <QChildEvent>
#include <QEvent>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QQmlContext>
#include <QQmlEngine>
#include <QQmlTypeNotAvailable>
#include <QString>
#include <QTimerEvent>
#include <QUrl>
#include <qqml.h>
#include "libqqml.h"
#include "libqqml.hxx"

void qqml_h_QmlClearTypeRegistrations() {
    qmlClearTypeRegistrations();
}

int qqml_h_QmlRegisterTypeNotAvailable(const char* uri, int versionMajor, int versionMinor, const char* qmlName, const libqt_string message) {
    QString message_QString = QString::fromUtf8(message.data, message.len);
    return qmlRegisterTypeNotAvailable(uri, static_cast<int>(versionMajor), static_cast<int>(versionMinor), qmlName, message_QString);
}

int qqml_h_QmlRegisterUncreatableMetaObject(const QMetaObject* staticMetaObject, const char* uri, int versionMajor, int versionMinor, const char* qmlName, const libqt_string reason) {
    QString reason_QString = QString::fromUtf8(reason.data, reason.len);
    return qmlRegisterUncreatableMetaObject(*staticMetaObject, uri, static_cast<int>(versionMajor), static_cast<int>(versionMinor), qmlName, reason_QString);
}

void qqml_h_QmlExecuteDeferred(QObject* param1) {
    qmlExecuteDeferred(param1);
}

QQmlContext* qqml_h_QmlContext(const QObject* param1) {
    return qmlContext(param1);
}

QQmlEngine* qqml_h_QmlEngine(const QObject* param1) {
    return qmlEngine(param1);
}

intptr_t qqml_h_QmlAttachedPropertiesFunction(QObject* param1, const QMetaObject* param2) {
    return reinterpret_cast<intptr_t>(qmlAttachedPropertiesFunction(param1, param2));
}

QObject* qqml_h_QmlAttachedPropertiesObject(QObject* param1, intptr_t func, bool create) {
    auto func_func = reinterpret_cast<QQmlAttachedPropertiesFunc>(func);
    return qmlAttachedPropertiesObject(param1, func_func, create);
}

QObject* qqml_h_QmlExtendedObject(QObject* param1) {
    return qmlExtendedObject(param1);
}

bool qqml_h_QmlProtectModule(const char* uri, int majVersion) {
    return qmlProtectModule(uri, static_cast<int>(majVersion));
}

void qqml_h_QmlRegisterModule(const char* uri, int versionMajor, int versionMinor) {
    qmlRegisterModule(uri, static_cast<int>(versionMajor), static_cast<int>(versionMinor));
}

void qqml_h_QmlRegisterModuleImport(const char* uri, int moduleMajor, const char* import, int importMajor, int importMinor) {
    qmlRegisterModuleImport(uri, static_cast<int>(moduleMajor), import, static_cast<int>(importMajor), static_cast<int>(importMinor));
}

void qqml_h_QmlUnregisterModuleImport(const char* uri, int moduleMajor, const char* import, int importMajor, int importMinor) {
    qmlUnregisterModuleImport(uri, static_cast<int>(moduleMajor), import, static_cast<int>(importMajor), static_cast<int>(importMinor));
}

int qqml_h_QmlRegisterSingletonType(const QUrl* url, const char* uri, int versionMajor, int versionMinor, const char* qmlName) {
    return qmlRegisterSingletonType(*url, uri, static_cast<int>(versionMajor), static_cast<int>(versionMinor), qmlName);
}

int qqml_h_QmlRegisterType(const QUrl* url, const char* uri, int versionMajor, int versionMinor, const char* qmlName) {
    return qmlRegisterType(*url, uri, static_cast<int>(versionMajor), static_cast<int>(versionMinor), qmlName);
}

void qqml_h_QmlRegisterNamespaceAndRevisions(const QMetaObject* metaObject, const char* uri, int versionMajor, libqt_list /* of int */ qmlTypeIds, const QMetaObject* classInfoMetaObject, const QMetaObject* extensionMetaObject) {
    QList<int>* qmlTypeIds_QList = new QList<int>();
    qmlTypeIds_QList->reserve(qmlTypeIds.len);
    int* qmlTypeIds_arr = static_cast<int*>(qmlTypeIds.data);
    for (size_t i = 0; i < qmlTypeIds.len; ++i) {
        qmlTypeIds_QList->push_back(static_cast<int>(qmlTypeIds_arr[i]));
    }
    qmlRegisterNamespaceAndRevisions(metaObject, uri, static_cast<int>(versionMajor), qmlTypeIds_QList, classInfoMetaObject, extensionMetaObject);
}

void qqml_h_QmlRegisterNamespaceAndRevisions2(const QMetaObject* metaObject, const char* uri, int versionMajor, libqt_list /* of int */ qmlTypeIds, const QMetaObject* classInfoMetaObject) {
    QList<int>* qmlTypeIds_QList = new QList<int>();
    qmlTypeIds_QList->reserve(qmlTypeIds.len);
    int* qmlTypeIds_arr = static_cast<int*>(qmlTypeIds.data);
    for (size_t i = 0; i < qmlTypeIds.len; ++i) {
        qmlTypeIds_QList->push_back(static_cast<int>(qmlTypeIds_arr[i]));
    }
    qmlRegisterNamespaceAndRevisions(metaObject, uri, static_cast<int>(versionMajor), qmlTypeIds_QList, classInfoMetaObject);
}

int qqml_h_QmlTypeId(const char* uri, int versionMajor, int versionMinor, const char* qmlName) {
    return qmlTypeId(uri, static_cast<int>(versionMajor), static_cast<int>(versionMinor), qmlName);
}

QQmlTypeNotAvailable* QQmlTypeNotAvailable_new() {
    return new VirtualQQmlTypeNotAvailable();
}

QMetaObject* QQmlTypeNotAvailable_MetaObject(const QQmlTypeNotAvailable* self) {
    return (QMetaObject*)self->metaObject();
}

void* QQmlTypeNotAvailable_Metacast(QQmlTypeNotAvailable* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QQmlTypeNotAvailable_Metacall(QQmlTypeNotAvailable* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QQmlTypeNotAvailable_Tr(const char* s) {
    auto _ret = QQmlTypeNotAvailable::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QQmlTypeNotAvailable_Tr2(const char* s, const char* c) {
    auto _ret = QQmlTypeNotAvailable::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QQmlTypeNotAvailable_Tr3(const char* s, const char* c, int n) {
    auto _ret = QQmlTypeNotAvailable::tr(s, c, static_cast<int>(n));
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
QMetaObject* QQmlTypeNotAvailable_SuperMetaObject(const QQmlTypeNotAvailable* self) {
    return (QMetaObject*)self->QQmlTypeNotAvailable::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QQmlTypeNotAvailable_OnMetaObject(QQmlTypeNotAvailable* self, intptr_t slot) {
    if (auto* vqqmltypenotavailable = const_cast<VirtualQQmlTypeNotAvailable*>(dynamic_cast<const VirtualQQmlTypeNotAvailable*>(self)))
        vqqmltypenotavailable->qqmltypenotavailable_metaobject_callback = reinterpret_cast<VirtualQQmlTypeNotAvailable::QQmlTypeNotAvailable_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QQmlTypeNotAvailable_SuperMetacast(QQmlTypeNotAvailable* self, const char* param1) {
    return self->QQmlTypeNotAvailable::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QQmlTypeNotAvailable_OnMetacast(QQmlTypeNotAvailable* self, intptr_t slot) {
    if (auto* vqqmltypenotavailable = dynamic_cast<VirtualQQmlTypeNotAvailable*>(self))
        vqqmltypenotavailable->qqmltypenotavailable_metacast_callback = reinterpret_cast<VirtualQQmlTypeNotAvailable::QQmlTypeNotAvailable_Metacast_Callback>(slot);
}

// Base class handler implementation
int QQmlTypeNotAvailable_SuperMetacall(QQmlTypeNotAvailable* self, int param1, int param2, void** param3) {
    return self->QQmlTypeNotAvailable::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QQmlTypeNotAvailable_OnMetacall(QQmlTypeNotAvailable* self, intptr_t slot) {
    if (auto* vqqmltypenotavailable = dynamic_cast<VirtualQQmlTypeNotAvailable*>(self))
        vqqmltypenotavailable->qqmltypenotavailable_metacall_callback = reinterpret_cast<VirtualQQmlTypeNotAvailable::QQmlTypeNotAvailable_Metacall_Callback>(slot);
}

// Derived class handler implementation
bool QQmlTypeNotAvailable_Event(QQmlTypeNotAvailable* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QQmlTypeNotAvailable_SuperEvent(QQmlTypeNotAvailable* self, QEvent* event) {
    return self->QQmlTypeNotAvailable::event(event);
}

// Auxiliary method to allow providing re-implementation
void QQmlTypeNotAvailable_OnEvent(QQmlTypeNotAvailable* self, intptr_t slot) {
    if (auto* vqqmltypenotavailable = dynamic_cast<VirtualQQmlTypeNotAvailable*>(self))
        vqqmltypenotavailable->qqmltypenotavailable_event_callback = reinterpret_cast<VirtualQQmlTypeNotAvailable::QQmlTypeNotAvailable_Event_Callback>(slot);
}

// Derived class handler implementation
bool QQmlTypeNotAvailable_EventFilter(QQmlTypeNotAvailable* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QQmlTypeNotAvailable_SuperEventFilter(QQmlTypeNotAvailable* self, QObject* watched, QEvent* event) {
    return self->QQmlTypeNotAvailable::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QQmlTypeNotAvailable_OnEventFilter(QQmlTypeNotAvailable* self, intptr_t slot) {
    if (auto* vqqmltypenotavailable = dynamic_cast<VirtualQQmlTypeNotAvailable*>(self))
        vqqmltypenotavailable->qqmltypenotavailable_eventfilter_callback = reinterpret_cast<VirtualQQmlTypeNotAvailable::QQmlTypeNotAvailable_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QQmlTypeNotAvailable_TimerEvent(QQmlTypeNotAvailable* self, QTimerEvent* event) {
    auto* vqqmltypenotavailable = dynamic_cast<VirtualQQmlTypeNotAvailable*>(self);
    if (vqqmltypenotavailable) {
        vqqmltypenotavailable->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QQmlTypeNotAvailable::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QQmlTypeNotAvailable_SuperTimerEvent(QQmlTypeNotAvailable* self, QTimerEvent* event) {
    if (auto* vqqmltypenotavailable = dynamic_cast<VirtualQQmlTypeNotAvailable*>(self)) {
        vqqmltypenotavailable->QQmlTypeNotAvailable::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QQmlTypeNotAvailable::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQmlTypeNotAvailable_OnTimerEvent(QQmlTypeNotAvailable* self, intptr_t slot) {
    if (auto* vqqmltypenotavailable = dynamic_cast<VirtualQQmlTypeNotAvailable*>(self))
        vqqmltypenotavailable->qqmltypenotavailable_timerevent_callback = reinterpret_cast<VirtualQQmlTypeNotAvailable::QQmlTypeNotAvailable_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QQmlTypeNotAvailable_ChildEvent(QQmlTypeNotAvailable* self, QChildEvent* event) {
    auto* vqqmltypenotavailable = dynamic_cast<VirtualQQmlTypeNotAvailable*>(self);
    if (vqqmltypenotavailable) {
        vqqmltypenotavailable->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QQmlTypeNotAvailable::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QQmlTypeNotAvailable_SuperChildEvent(QQmlTypeNotAvailable* self, QChildEvent* event) {
    if (auto* vqqmltypenotavailable = dynamic_cast<VirtualQQmlTypeNotAvailable*>(self)) {
        vqqmltypenotavailable->QQmlTypeNotAvailable::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QQmlTypeNotAvailable::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQmlTypeNotAvailable_OnChildEvent(QQmlTypeNotAvailable* self, intptr_t slot) {
    if (auto* vqqmltypenotavailable = dynamic_cast<VirtualQQmlTypeNotAvailable*>(self))
        vqqmltypenotavailable->qqmltypenotavailable_childevent_callback = reinterpret_cast<VirtualQQmlTypeNotAvailable::QQmlTypeNotAvailable_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QQmlTypeNotAvailable_CustomEvent(QQmlTypeNotAvailable* self, QEvent* event) {
    auto* vqqmltypenotavailable = dynamic_cast<VirtualQQmlTypeNotAvailable*>(self);
    if (vqqmltypenotavailable) {
        vqqmltypenotavailable->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QQmlTypeNotAvailable::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QQmlTypeNotAvailable_SuperCustomEvent(QQmlTypeNotAvailable* self, QEvent* event) {
    if (auto* vqqmltypenotavailable = dynamic_cast<VirtualQQmlTypeNotAvailable*>(self)) {
        vqqmltypenotavailable->QQmlTypeNotAvailable::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QQmlTypeNotAvailable::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQmlTypeNotAvailable_OnCustomEvent(QQmlTypeNotAvailable* self, intptr_t slot) {
    if (auto* vqqmltypenotavailable = dynamic_cast<VirtualQQmlTypeNotAvailable*>(self))
        vqqmltypenotavailable->qqmltypenotavailable_customevent_callback = reinterpret_cast<VirtualQQmlTypeNotAvailable::QQmlTypeNotAvailable_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QQmlTypeNotAvailable_ConnectNotify(QQmlTypeNotAvailable* self, const QMetaMethod* signal) {
    auto* vqqmltypenotavailable = dynamic_cast<VirtualQQmlTypeNotAvailable*>(self);
    if (vqqmltypenotavailable) {
        vqqmltypenotavailable->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QQmlTypeNotAvailable::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QQmlTypeNotAvailable_SuperConnectNotify(QQmlTypeNotAvailable* self, const QMetaMethod* signal) {
    if (auto* vqqmltypenotavailable = dynamic_cast<VirtualQQmlTypeNotAvailable*>(self)) {
        vqqmltypenotavailable->QQmlTypeNotAvailable::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QQmlTypeNotAvailable::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQmlTypeNotAvailable_OnConnectNotify(QQmlTypeNotAvailable* self, intptr_t slot) {
    if (auto* vqqmltypenotavailable = dynamic_cast<VirtualQQmlTypeNotAvailable*>(self))
        vqqmltypenotavailable->qqmltypenotavailable_connectnotify_callback = reinterpret_cast<VirtualQQmlTypeNotAvailable::QQmlTypeNotAvailable_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QQmlTypeNotAvailable_DisconnectNotify(QQmlTypeNotAvailable* self, const QMetaMethod* signal) {
    auto* vqqmltypenotavailable = dynamic_cast<VirtualQQmlTypeNotAvailable*>(self);
    if (vqqmltypenotavailable) {
        vqqmltypenotavailable->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QQmlTypeNotAvailable::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QQmlTypeNotAvailable_SuperDisconnectNotify(QQmlTypeNotAvailable* self, const QMetaMethod* signal) {
    if (auto* vqqmltypenotavailable = dynamic_cast<VirtualQQmlTypeNotAvailable*>(self)) {
        vqqmltypenotavailable->QQmlTypeNotAvailable::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QQmlTypeNotAvailable::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQmlTypeNotAvailable_OnDisconnectNotify(QQmlTypeNotAvailable* self, intptr_t slot) {
    if (auto* vqqmltypenotavailable = dynamic_cast<VirtualQQmlTypeNotAvailable*>(self))
        vqqmltypenotavailable->qqmltypenotavailable_disconnectnotify_callback = reinterpret_cast<VirtualQQmlTypeNotAvailable::QQmlTypeNotAvailable_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* QQmlTypeNotAvailable_Sender(const QQmlTypeNotAvailable* self) {
    if (auto* vqqmltypenotavailable = const_cast<VirtualQQmlTypeNotAvailable*>(dynamic_cast<const VirtualQQmlTypeNotAvailable*>(self))) {
        return vqqmltypenotavailable->VirtualQQmlTypeNotAvailable::sender();
    } else
        qFatal("Error: Protected method QQmlTypeNotAvailable::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QQmlTypeNotAvailable_SenderSignalIndex(const QQmlTypeNotAvailable* self) {
    if (auto* vqqmltypenotavailable = const_cast<VirtualQQmlTypeNotAvailable*>(dynamic_cast<const VirtualQQmlTypeNotAvailable*>(self))) {
        return vqqmltypenotavailable->VirtualQQmlTypeNotAvailable::senderSignalIndex();
    } else
        qFatal("Error: Protected method QQmlTypeNotAvailable::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QQmlTypeNotAvailable_Receivers(const QQmlTypeNotAvailable* self, const char* signal) {
    if (auto* vqqmltypenotavailable = const_cast<VirtualQQmlTypeNotAvailable*>(dynamic_cast<const VirtualQQmlTypeNotAvailable*>(self))) {
        return vqqmltypenotavailable->VirtualQQmlTypeNotAvailable::receivers(signal);
    } else
        qFatal("Error: Protected method QQmlTypeNotAvailable::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QQmlTypeNotAvailable_IsSignalConnected(const QQmlTypeNotAvailable* self, const QMetaMethod* signal) {
    if (auto* vqqmltypenotavailable = const_cast<VirtualQQmlTypeNotAvailable*>(dynamic_cast<const VirtualQQmlTypeNotAvailable*>(self))) {
        return vqqmltypenotavailable->VirtualQQmlTypeNotAvailable::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QQmlTypeNotAvailable::isSignalConnected called without a directly constructed type");
}

void QQmlTypeNotAvailable_Delete(QQmlTypeNotAvailable* self) {
    delete self;
}
