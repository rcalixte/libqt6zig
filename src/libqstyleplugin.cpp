#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QStyle>
#include <QStylePlugin>
#include <QTimerEvent>
#include <qstyleplugin.h>
#include "libqstyleplugin.h"
#include "libqstyleplugin.hxx"

QStylePlugin* QStylePlugin_new() {
    return new VirtualQStylePlugin();
}

QStylePlugin* QStylePlugin_new2(QObject* parent) {
    return new VirtualQStylePlugin(parent);
}

QMetaObject* QStylePlugin_MetaObject(const QStylePlugin* self) {
    return (QMetaObject*)self->metaObject();
}

void* QStylePlugin_Metacast(QStylePlugin* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QStylePlugin_Metacall(QStylePlugin* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QStylePlugin_Tr(const char* s) {
    auto _ret = QStylePlugin::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QStyle* QStylePlugin_Create(QStylePlugin* self, const libqt_string key) {
    QString key_QString = QString::fromUtf8(key.data, key.len);
    return self->create(key_QString);
}

libqt_string QStylePlugin_Tr2(const char* s, const char* c) {
    auto _ret = QStylePlugin::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QStylePlugin_Tr3(const char* s, const char* c, int n) {
    auto _ret = QStylePlugin::tr(s, c, static_cast<int>(n));
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
QMetaObject* QStylePlugin_SuperMetaObject(const QStylePlugin* self) {
    return (QMetaObject*)self->QStylePlugin::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QStylePlugin_OnMetaObject(QStylePlugin* self, intptr_t slot) {
    if (auto* vqstyleplugin = const_cast<VirtualQStylePlugin*>(dynamic_cast<const VirtualQStylePlugin*>(self)))
        vqstyleplugin->qstyleplugin_metaobject_callback = reinterpret_cast<VirtualQStylePlugin::QStylePlugin_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QStylePlugin_SuperMetacast(QStylePlugin* self, const char* param1) {
    return self->QStylePlugin::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QStylePlugin_OnMetacast(QStylePlugin* self, intptr_t slot) {
    if (auto* vqstyleplugin = dynamic_cast<VirtualQStylePlugin*>(self))
        vqstyleplugin->qstyleplugin_metacast_callback = reinterpret_cast<VirtualQStylePlugin::QStylePlugin_Metacast_Callback>(slot);
}

// Base class handler implementation
int QStylePlugin_SuperMetacall(QStylePlugin* self, int param1, int param2, void** param3) {
    return self->QStylePlugin::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QStylePlugin_OnMetacall(QStylePlugin* self, intptr_t slot) {
    if (auto* vqstyleplugin = dynamic_cast<VirtualQStylePlugin*>(self))
        vqstyleplugin->qstyleplugin_metacall_callback = reinterpret_cast<VirtualQStylePlugin::QStylePlugin_Metacall_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QStylePlugin_OnCreate(QStylePlugin* self, intptr_t slot) {
    if (auto* vqstyleplugin = dynamic_cast<VirtualQStylePlugin*>(self))
        vqstyleplugin->qstyleplugin_create_callback = reinterpret_cast<VirtualQStylePlugin::QStylePlugin_Create_Callback>(slot);
}

// Derived class handler implementation
bool QStylePlugin_Event(QStylePlugin* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QStylePlugin_SuperEvent(QStylePlugin* self, QEvent* event) {
    return self->QStylePlugin::event(event);
}

// Auxiliary method to allow providing re-implementation
void QStylePlugin_OnEvent(QStylePlugin* self, intptr_t slot) {
    if (auto* vqstyleplugin = dynamic_cast<VirtualQStylePlugin*>(self))
        vqstyleplugin->qstyleplugin_event_callback = reinterpret_cast<VirtualQStylePlugin::QStylePlugin_Event_Callback>(slot);
}

// Derived class handler implementation
bool QStylePlugin_EventFilter(QStylePlugin* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QStylePlugin_SuperEventFilter(QStylePlugin* self, QObject* watched, QEvent* event) {
    return self->QStylePlugin::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QStylePlugin_OnEventFilter(QStylePlugin* self, intptr_t slot) {
    if (auto* vqstyleplugin = dynamic_cast<VirtualQStylePlugin*>(self))
        vqstyleplugin->qstyleplugin_eventfilter_callback = reinterpret_cast<VirtualQStylePlugin::QStylePlugin_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QStylePlugin_TimerEvent(QStylePlugin* self, QTimerEvent* event) {
    auto* vqstyleplugin = dynamic_cast<VirtualQStylePlugin*>(self);
    if (vqstyleplugin) {
        vqstyleplugin->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QStylePlugin::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QStylePlugin_SuperTimerEvent(QStylePlugin* self, QTimerEvent* event) {
    if (auto* vqstyleplugin = dynamic_cast<VirtualQStylePlugin*>(self)) {
        vqstyleplugin->QStylePlugin::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QStylePlugin::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QStylePlugin_OnTimerEvent(QStylePlugin* self, intptr_t slot) {
    if (auto* vqstyleplugin = dynamic_cast<VirtualQStylePlugin*>(self))
        vqstyleplugin->qstyleplugin_timerevent_callback = reinterpret_cast<VirtualQStylePlugin::QStylePlugin_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QStylePlugin_ChildEvent(QStylePlugin* self, QChildEvent* event) {
    auto* vqstyleplugin = dynamic_cast<VirtualQStylePlugin*>(self);
    if (vqstyleplugin) {
        vqstyleplugin->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QStylePlugin::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QStylePlugin_SuperChildEvent(QStylePlugin* self, QChildEvent* event) {
    if (auto* vqstyleplugin = dynamic_cast<VirtualQStylePlugin*>(self)) {
        vqstyleplugin->QStylePlugin::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QStylePlugin::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QStylePlugin_OnChildEvent(QStylePlugin* self, intptr_t slot) {
    if (auto* vqstyleplugin = dynamic_cast<VirtualQStylePlugin*>(self))
        vqstyleplugin->qstyleplugin_childevent_callback = reinterpret_cast<VirtualQStylePlugin::QStylePlugin_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QStylePlugin_CustomEvent(QStylePlugin* self, QEvent* event) {
    auto* vqstyleplugin = dynamic_cast<VirtualQStylePlugin*>(self);
    if (vqstyleplugin) {
        vqstyleplugin->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QStylePlugin::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QStylePlugin_SuperCustomEvent(QStylePlugin* self, QEvent* event) {
    if (auto* vqstyleplugin = dynamic_cast<VirtualQStylePlugin*>(self)) {
        vqstyleplugin->QStylePlugin::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QStylePlugin::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QStylePlugin_OnCustomEvent(QStylePlugin* self, intptr_t slot) {
    if (auto* vqstyleplugin = dynamic_cast<VirtualQStylePlugin*>(self))
        vqstyleplugin->qstyleplugin_customevent_callback = reinterpret_cast<VirtualQStylePlugin::QStylePlugin_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QStylePlugin_ConnectNotify(QStylePlugin* self, const QMetaMethod* signal) {
    auto* vqstyleplugin = dynamic_cast<VirtualQStylePlugin*>(self);
    if (vqstyleplugin) {
        vqstyleplugin->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QStylePlugin::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QStylePlugin_SuperConnectNotify(QStylePlugin* self, const QMetaMethod* signal) {
    if (auto* vqstyleplugin = dynamic_cast<VirtualQStylePlugin*>(self)) {
        vqstyleplugin->QStylePlugin::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QStylePlugin::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QStylePlugin_OnConnectNotify(QStylePlugin* self, intptr_t slot) {
    if (auto* vqstyleplugin = dynamic_cast<VirtualQStylePlugin*>(self))
        vqstyleplugin->qstyleplugin_connectnotify_callback = reinterpret_cast<VirtualQStylePlugin::QStylePlugin_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QStylePlugin_DisconnectNotify(QStylePlugin* self, const QMetaMethod* signal) {
    auto* vqstyleplugin = dynamic_cast<VirtualQStylePlugin*>(self);
    if (vqstyleplugin) {
        vqstyleplugin->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QStylePlugin::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QStylePlugin_SuperDisconnectNotify(QStylePlugin* self, const QMetaMethod* signal) {
    if (auto* vqstyleplugin = dynamic_cast<VirtualQStylePlugin*>(self)) {
        vqstyleplugin->QStylePlugin::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QStylePlugin::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QStylePlugin_OnDisconnectNotify(QStylePlugin* self, intptr_t slot) {
    if (auto* vqstyleplugin = dynamic_cast<VirtualQStylePlugin*>(self))
        vqstyleplugin->qstyleplugin_disconnectnotify_callback = reinterpret_cast<VirtualQStylePlugin::QStylePlugin_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* QStylePlugin_Sender(const QStylePlugin* self) {
    if (auto* vqstyleplugin = const_cast<VirtualQStylePlugin*>(dynamic_cast<const VirtualQStylePlugin*>(self))) {
        return vqstyleplugin->VirtualQStylePlugin::sender();
    } else
        qFatal("Error: Protected method QStylePlugin::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QStylePlugin_SenderSignalIndex(const QStylePlugin* self) {
    if (auto* vqstyleplugin = const_cast<VirtualQStylePlugin*>(dynamic_cast<const VirtualQStylePlugin*>(self))) {
        return vqstyleplugin->VirtualQStylePlugin::senderSignalIndex();
    } else
        qFatal("Error: Protected method QStylePlugin::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QStylePlugin_Receivers(const QStylePlugin* self, const char* signal) {
    if (auto* vqstyleplugin = const_cast<VirtualQStylePlugin*>(dynamic_cast<const VirtualQStylePlugin*>(self))) {
        return vqstyleplugin->VirtualQStylePlugin::receivers(signal);
    } else
        qFatal("Error: Protected method QStylePlugin::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QStylePlugin_IsSignalConnected(const QStylePlugin* self, const QMetaMethod* signal) {
    if (auto* vqstyleplugin = const_cast<VirtualQStylePlugin*>(dynamic_cast<const VirtualQStylePlugin*>(self))) {
        return vqstyleplugin->VirtualQStylePlugin::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QStylePlugin::isSignalConnected called without a directly constructed type");
}

void QStylePlugin_Delete(QStylePlugin* self) {
    delete self;
}
