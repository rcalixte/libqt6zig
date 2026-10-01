#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QSqlDriver>
#include <QSqlDriverPlugin>
#include <QString>
#include <QTimerEvent>
#include <qsqldriverplugin.h>
#include "libqsqldriverplugin.h"
#include "libqsqldriverplugin.hxx"

QSqlDriverPlugin* QSqlDriverPlugin_new() {
    return new VirtualQSqlDriverPlugin();
}

QSqlDriverPlugin* QSqlDriverPlugin_new2(QObject* parent) {
    return new VirtualQSqlDriverPlugin(parent);
}

QMetaObject* QSqlDriverPlugin_MetaObject(const QSqlDriverPlugin* self) {
    return (QMetaObject*)self->metaObject();
}

void* QSqlDriverPlugin_Metacast(QSqlDriverPlugin* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QSqlDriverPlugin_Metacall(QSqlDriverPlugin* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QSqlDriverPlugin_Tr(const char* s) {
    auto _ret = QSqlDriverPlugin::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QSqlDriver* QSqlDriverPlugin_Create(QSqlDriverPlugin* self, const libqt_string key) {
    QString key_QString = QString::fromUtf8(key.data, key.len);
    return self->create(key_QString);
}

libqt_string QSqlDriverPlugin_Tr2(const char* s, const char* c) {
    auto _ret = QSqlDriverPlugin::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QSqlDriverPlugin_Tr3(const char* s, const char* c, int n) {
    auto _ret = QSqlDriverPlugin::tr(s, c, static_cast<int>(n));
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
QMetaObject* QSqlDriverPlugin_SuperMetaObject(const QSqlDriverPlugin* self) {
    return (QMetaObject*)self->QSqlDriverPlugin::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QSqlDriverPlugin_OnMetaObject(QSqlDriverPlugin* self, intptr_t slot) {
    if (auto* vqsqldriverplugin = const_cast<VirtualQSqlDriverPlugin*>(dynamic_cast<const VirtualQSqlDriverPlugin*>(self)))
        vqsqldriverplugin->qsqldriverplugin_metaobject_callback = reinterpret_cast<VirtualQSqlDriverPlugin::QSqlDriverPlugin_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QSqlDriverPlugin_SuperMetacast(QSqlDriverPlugin* self, const char* param1) {
    return self->QSqlDriverPlugin::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QSqlDriverPlugin_OnMetacast(QSqlDriverPlugin* self, intptr_t slot) {
    if (auto* vqsqldriverplugin = dynamic_cast<VirtualQSqlDriverPlugin*>(self))
        vqsqldriverplugin->qsqldriverplugin_metacast_callback = reinterpret_cast<VirtualQSqlDriverPlugin::QSqlDriverPlugin_Metacast_Callback>(slot);
}

// Base class handler implementation
int QSqlDriverPlugin_SuperMetacall(QSqlDriverPlugin* self, int param1, int param2, void** param3) {
    return self->QSqlDriverPlugin::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QSqlDriverPlugin_OnMetacall(QSqlDriverPlugin* self, intptr_t slot) {
    if (auto* vqsqldriverplugin = dynamic_cast<VirtualQSqlDriverPlugin*>(self))
        vqsqldriverplugin->qsqldriverplugin_metacall_callback = reinterpret_cast<VirtualQSqlDriverPlugin::QSqlDriverPlugin_Metacall_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QSqlDriverPlugin_OnCreate(QSqlDriverPlugin* self, intptr_t slot) {
    if (auto* vqsqldriverplugin = dynamic_cast<VirtualQSqlDriverPlugin*>(self))
        vqsqldriverplugin->qsqldriverplugin_create_callback = reinterpret_cast<VirtualQSqlDriverPlugin::QSqlDriverPlugin_Create_Callback>(slot);
}

// Derived class handler implementation
bool QSqlDriverPlugin_Event(QSqlDriverPlugin* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QSqlDriverPlugin_SuperEvent(QSqlDriverPlugin* self, QEvent* event) {
    return self->QSqlDriverPlugin::event(event);
}

// Auxiliary method to allow providing re-implementation
void QSqlDriverPlugin_OnEvent(QSqlDriverPlugin* self, intptr_t slot) {
    if (auto* vqsqldriverplugin = dynamic_cast<VirtualQSqlDriverPlugin*>(self))
        vqsqldriverplugin->qsqldriverplugin_event_callback = reinterpret_cast<VirtualQSqlDriverPlugin::QSqlDriverPlugin_Event_Callback>(slot);
}

// Derived class handler implementation
bool QSqlDriverPlugin_EventFilter(QSqlDriverPlugin* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QSqlDriverPlugin_SuperEventFilter(QSqlDriverPlugin* self, QObject* watched, QEvent* event) {
    return self->QSqlDriverPlugin::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QSqlDriverPlugin_OnEventFilter(QSqlDriverPlugin* self, intptr_t slot) {
    if (auto* vqsqldriverplugin = dynamic_cast<VirtualQSqlDriverPlugin*>(self))
        vqsqldriverplugin->qsqldriverplugin_eventfilter_callback = reinterpret_cast<VirtualQSqlDriverPlugin::QSqlDriverPlugin_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QSqlDriverPlugin_TimerEvent(QSqlDriverPlugin* self, QTimerEvent* event) {
    auto* vqsqldriverplugin = dynamic_cast<VirtualQSqlDriverPlugin*>(self);
    if (vqsqldriverplugin) {
        vqsqldriverplugin->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSqlDriverPlugin::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSqlDriverPlugin_SuperTimerEvent(QSqlDriverPlugin* self, QTimerEvent* event) {
    if (auto* vqsqldriverplugin = dynamic_cast<VirtualQSqlDriverPlugin*>(self)) {
        vqsqldriverplugin->QSqlDriverPlugin::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QSqlDriverPlugin::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSqlDriverPlugin_OnTimerEvent(QSqlDriverPlugin* self, intptr_t slot) {
    if (auto* vqsqldriverplugin = dynamic_cast<VirtualQSqlDriverPlugin*>(self))
        vqsqldriverplugin->qsqldriverplugin_timerevent_callback = reinterpret_cast<VirtualQSqlDriverPlugin::QSqlDriverPlugin_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QSqlDriverPlugin_ChildEvent(QSqlDriverPlugin* self, QChildEvent* event) {
    auto* vqsqldriverplugin = dynamic_cast<VirtualQSqlDriverPlugin*>(self);
    if (vqsqldriverplugin) {
        vqsqldriverplugin->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSqlDriverPlugin::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSqlDriverPlugin_SuperChildEvent(QSqlDriverPlugin* self, QChildEvent* event) {
    if (auto* vqsqldriverplugin = dynamic_cast<VirtualQSqlDriverPlugin*>(self)) {
        vqsqldriverplugin->QSqlDriverPlugin::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QSqlDriverPlugin::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSqlDriverPlugin_OnChildEvent(QSqlDriverPlugin* self, intptr_t slot) {
    if (auto* vqsqldriverplugin = dynamic_cast<VirtualQSqlDriverPlugin*>(self))
        vqsqldriverplugin->qsqldriverplugin_childevent_callback = reinterpret_cast<VirtualQSqlDriverPlugin::QSqlDriverPlugin_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QSqlDriverPlugin_CustomEvent(QSqlDriverPlugin* self, QEvent* event) {
    auto* vqsqldriverplugin = dynamic_cast<VirtualQSqlDriverPlugin*>(self);
    if (vqsqldriverplugin) {
        vqsqldriverplugin->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSqlDriverPlugin::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSqlDriverPlugin_SuperCustomEvent(QSqlDriverPlugin* self, QEvent* event) {
    if (auto* vqsqldriverplugin = dynamic_cast<VirtualQSqlDriverPlugin*>(self)) {
        vqsqldriverplugin->QSqlDriverPlugin::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QSqlDriverPlugin::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSqlDriverPlugin_OnCustomEvent(QSqlDriverPlugin* self, intptr_t slot) {
    if (auto* vqsqldriverplugin = dynamic_cast<VirtualQSqlDriverPlugin*>(self))
        vqsqldriverplugin->qsqldriverplugin_customevent_callback = reinterpret_cast<VirtualQSqlDriverPlugin::QSqlDriverPlugin_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QSqlDriverPlugin_ConnectNotify(QSqlDriverPlugin* self, const QMetaMethod* signal) {
    auto* vqsqldriverplugin = dynamic_cast<VirtualQSqlDriverPlugin*>(self);
    if (vqsqldriverplugin) {
        vqsqldriverplugin->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QSqlDriverPlugin::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QSqlDriverPlugin_SuperConnectNotify(QSqlDriverPlugin* self, const QMetaMethod* signal) {
    if (auto* vqsqldriverplugin = dynamic_cast<VirtualQSqlDriverPlugin*>(self)) {
        vqsqldriverplugin->QSqlDriverPlugin::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QSqlDriverPlugin::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSqlDriverPlugin_OnConnectNotify(QSqlDriverPlugin* self, intptr_t slot) {
    if (auto* vqsqldriverplugin = dynamic_cast<VirtualQSqlDriverPlugin*>(self))
        vqsqldriverplugin->qsqldriverplugin_connectnotify_callback = reinterpret_cast<VirtualQSqlDriverPlugin::QSqlDriverPlugin_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QSqlDriverPlugin_DisconnectNotify(QSqlDriverPlugin* self, const QMetaMethod* signal) {
    auto* vqsqldriverplugin = dynamic_cast<VirtualQSqlDriverPlugin*>(self);
    if (vqsqldriverplugin) {
        vqsqldriverplugin->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QSqlDriverPlugin::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QSqlDriverPlugin_SuperDisconnectNotify(QSqlDriverPlugin* self, const QMetaMethod* signal) {
    if (auto* vqsqldriverplugin = dynamic_cast<VirtualQSqlDriverPlugin*>(self)) {
        vqsqldriverplugin->QSqlDriverPlugin::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QSqlDriverPlugin::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSqlDriverPlugin_OnDisconnectNotify(QSqlDriverPlugin* self, intptr_t slot) {
    if (auto* vqsqldriverplugin = dynamic_cast<VirtualQSqlDriverPlugin*>(self))
        vqsqldriverplugin->qsqldriverplugin_disconnectnotify_callback = reinterpret_cast<VirtualQSqlDriverPlugin::QSqlDriverPlugin_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* QSqlDriverPlugin_Sender(const QSqlDriverPlugin* self) {
    if (auto* vqsqldriverplugin = const_cast<VirtualQSqlDriverPlugin*>(dynamic_cast<const VirtualQSqlDriverPlugin*>(self))) {
        return vqsqldriverplugin->VirtualQSqlDriverPlugin::sender();
    } else
        qFatal("Error: Protected method QSqlDriverPlugin::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QSqlDriverPlugin_SenderSignalIndex(const QSqlDriverPlugin* self) {
    if (auto* vqsqldriverplugin = const_cast<VirtualQSqlDriverPlugin*>(dynamic_cast<const VirtualQSqlDriverPlugin*>(self))) {
        return vqsqldriverplugin->VirtualQSqlDriverPlugin::senderSignalIndex();
    } else
        qFatal("Error: Protected method QSqlDriverPlugin::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QSqlDriverPlugin_Receivers(const QSqlDriverPlugin* self, const char* signal) {
    if (auto* vqsqldriverplugin = const_cast<VirtualQSqlDriverPlugin*>(dynamic_cast<const VirtualQSqlDriverPlugin*>(self))) {
        return vqsqldriverplugin->VirtualQSqlDriverPlugin::receivers(signal);
    } else
        qFatal("Error: Protected method QSqlDriverPlugin::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QSqlDriverPlugin_IsSignalConnected(const QSqlDriverPlugin* self, const QMetaMethod* signal) {
    if (auto* vqsqldriverplugin = const_cast<VirtualQSqlDriverPlugin*>(dynamic_cast<const VirtualQSqlDriverPlugin*>(self))) {
        return vqsqldriverplugin->VirtualQSqlDriverPlugin::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QSqlDriverPlugin::isSignalConnected called without a directly constructed type");
}

void QSqlDriverPlugin_Delete(QSqlDriverPlugin* self) {
    delete self;
}
