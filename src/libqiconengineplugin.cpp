#include <QChildEvent>
#include <QEvent>
#include <QIconEngine>
#include <QIconEnginePlugin>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QTimerEvent>
#include <qiconengineplugin.h>
#include "libqiconengineplugin.h"
#include "libqiconengineplugin.hxx"

QIconEnginePlugin* QIconEnginePlugin_new() {
    return new VirtualQIconEnginePlugin();
}

QIconEnginePlugin* QIconEnginePlugin_new2(QObject* parent) {
    return new VirtualQIconEnginePlugin(parent);
}

QMetaObject* QIconEnginePlugin_MetaObject(const QIconEnginePlugin* self) {
    return (QMetaObject*)self->metaObject();
}

void* QIconEnginePlugin_Metacast(QIconEnginePlugin* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QIconEnginePlugin_Metacall(QIconEnginePlugin* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QIconEnginePlugin_Tr(const char* s) {
    auto _ret = QIconEnginePlugin::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QIconEngine* QIconEnginePlugin_Create(QIconEnginePlugin* self, const libqt_string filename) {
    QString filename_QString = QString::fromUtf8(filename.data, filename.len);
    return self->create(filename_QString);
}

libqt_string QIconEnginePlugin_Tr2(const char* s, const char* c) {
    auto _ret = QIconEnginePlugin::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QIconEnginePlugin_Tr3(const char* s, const char* c, int n) {
    auto _ret = QIconEnginePlugin::tr(s, c, static_cast<int>(n));
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
QMetaObject* QIconEnginePlugin_SuperMetaObject(const QIconEnginePlugin* self) {
    return (QMetaObject*)self->QIconEnginePlugin::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QIconEnginePlugin_OnMetaObject(QIconEnginePlugin* self, intptr_t slot) {
    if (auto* vqiconengineplugin = const_cast<VirtualQIconEnginePlugin*>(dynamic_cast<const VirtualQIconEnginePlugin*>(self)))
        vqiconengineplugin->qiconengineplugin_metaobject_callback = reinterpret_cast<VirtualQIconEnginePlugin::QIconEnginePlugin_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QIconEnginePlugin_SuperMetacast(QIconEnginePlugin* self, const char* param1) {
    return self->QIconEnginePlugin::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QIconEnginePlugin_OnMetacast(QIconEnginePlugin* self, intptr_t slot) {
    if (auto* vqiconengineplugin = dynamic_cast<VirtualQIconEnginePlugin*>(self))
        vqiconengineplugin->qiconengineplugin_metacast_callback = reinterpret_cast<VirtualQIconEnginePlugin::QIconEnginePlugin_Metacast_Callback>(slot);
}

// Base class handler implementation
int QIconEnginePlugin_SuperMetacall(QIconEnginePlugin* self, int param1, int param2, void** param3) {
    return self->QIconEnginePlugin::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QIconEnginePlugin_OnMetacall(QIconEnginePlugin* self, intptr_t slot) {
    if (auto* vqiconengineplugin = dynamic_cast<VirtualQIconEnginePlugin*>(self))
        vqiconengineplugin->qiconengineplugin_metacall_callback = reinterpret_cast<VirtualQIconEnginePlugin::QIconEnginePlugin_Metacall_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QIconEnginePlugin_OnCreate(QIconEnginePlugin* self, intptr_t slot) {
    if (auto* vqiconengineplugin = dynamic_cast<VirtualQIconEnginePlugin*>(self))
        vqiconengineplugin->qiconengineplugin_create_callback = reinterpret_cast<VirtualQIconEnginePlugin::QIconEnginePlugin_Create_Callback>(slot);
}

// Derived class handler implementation
bool QIconEnginePlugin_Event(QIconEnginePlugin* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QIconEnginePlugin_SuperEvent(QIconEnginePlugin* self, QEvent* event) {
    return self->QIconEnginePlugin::event(event);
}

// Auxiliary method to allow providing re-implementation
void QIconEnginePlugin_OnEvent(QIconEnginePlugin* self, intptr_t slot) {
    if (auto* vqiconengineplugin = dynamic_cast<VirtualQIconEnginePlugin*>(self))
        vqiconengineplugin->qiconengineplugin_event_callback = reinterpret_cast<VirtualQIconEnginePlugin::QIconEnginePlugin_Event_Callback>(slot);
}

// Derived class handler implementation
bool QIconEnginePlugin_EventFilter(QIconEnginePlugin* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QIconEnginePlugin_SuperEventFilter(QIconEnginePlugin* self, QObject* watched, QEvent* event) {
    return self->QIconEnginePlugin::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QIconEnginePlugin_OnEventFilter(QIconEnginePlugin* self, intptr_t slot) {
    if (auto* vqiconengineplugin = dynamic_cast<VirtualQIconEnginePlugin*>(self))
        vqiconengineplugin->qiconengineplugin_eventfilter_callback = reinterpret_cast<VirtualQIconEnginePlugin::QIconEnginePlugin_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QIconEnginePlugin_TimerEvent(QIconEnginePlugin* self, QTimerEvent* event) {
    auto* vqiconengineplugin = dynamic_cast<VirtualQIconEnginePlugin*>(self);
    if (vqiconengineplugin) {
        vqiconengineplugin->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QIconEnginePlugin::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QIconEnginePlugin_SuperTimerEvent(QIconEnginePlugin* self, QTimerEvent* event) {
    if (auto* vqiconengineplugin = dynamic_cast<VirtualQIconEnginePlugin*>(self)) {
        vqiconengineplugin->QIconEnginePlugin::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QIconEnginePlugin::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QIconEnginePlugin_OnTimerEvent(QIconEnginePlugin* self, intptr_t slot) {
    if (auto* vqiconengineplugin = dynamic_cast<VirtualQIconEnginePlugin*>(self))
        vqiconengineplugin->qiconengineplugin_timerevent_callback = reinterpret_cast<VirtualQIconEnginePlugin::QIconEnginePlugin_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QIconEnginePlugin_ChildEvent(QIconEnginePlugin* self, QChildEvent* event) {
    auto* vqiconengineplugin = dynamic_cast<VirtualQIconEnginePlugin*>(self);
    if (vqiconengineplugin) {
        vqiconengineplugin->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QIconEnginePlugin::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QIconEnginePlugin_SuperChildEvent(QIconEnginePlugin* self, QChildEvent* event) {
    if (auto* vqiconengineplugin = dynamic_cast<VirtualQIconEnginePlugin*>(self)) {
        vqiconengineplugin->QIconEnginePlugin::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QIconEnginePlugin::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QIconEnginePlugin_OnChildEvent(QIconEnginePlugin* self, intptr_t slot) {
    if (auto* vqiconengineplugin = dynamic_cast<VirtualQIconEnginePlugin*>(self))
        vqiconengineplugin->qiconengineplugin_childevent_callback = reinterpret_cast<VirtualQIconEnginePlugin::QIconEnginePlugin_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QIconEnginePlugin_CustomEvent(QIconEnginePlugin* self, QEvent* event) {
    auto* vqiconengineplugin = dynamic_cast<VirtualQIconEnginePlugin*>(self);
    if (vqiconengineplugin) {
        vqiconengineplugin->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QIconEnginePlugin::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QIconEnginePlugin_SuperCustomEvent(QIconEnginePlugin* self, QEvent* event) {
    if (auto* vqiconengineplugin = dynamic_cast<VirtualQIconEnginePlugin*>(self)) {
        vqiconengineplugin->QIconEnginePlugin::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QIconEnginePlugin::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QIconEnginePlugin_OnCustomEvent(QIconEnginePlugin* self, intptr_t slot) {
    if (auto* vqiconengineplugin = dynamic_cast<VirtualQIconEnginePlugin*>(self))
        vqiconengineplugin->qiconengineplugin_customevent_callback = reinterpret_cast<VirtualQIconEnginePlugin::QIconEnginePlugin_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QIconEnginePlugin_ConnectNotify(QIconEnginePlugin* self, const QMetaMethod* signal) {
    auto* vqiconengineplugin = dynamic_cast<VirtualQIconEnginePlugin*>(self);
    if (vqiconengineplugin) {
        vqiconengineplugin->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QIconEnginePlugin::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QIconEnginePlugin_SuperConnectNotify(QIconEnginePlugin* self, const QMetaMethod* signal) {
    if (auto* vqiconengineplugin = dynamic_cast<VirtualQIconEnginePlugin*>(self)) {
        vqiconengineplugin->QIconEnginePlugin::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QIconEnginePlugin::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QIconEnginePlugin_OnConnectNotify(QIconEnginePlugin* self, intptr_t slot) {
    if (auto* vqiconengineplugin = dynamic_cast<VirtualQIconEnginePlugin*>(self))
        vqiconengineplugin->qiconengineplugin_connectnotify_callback = reinterpret_cast<VirtualQIconEnginePlugin::QIconEnginePlugin_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QIconEnginePlugin_DisconnectNotify(QIconEnginePlugin* self, const QMetaMethod* signal) {
    auto* vqiconengineplugin = dynamic_cast<VirtualQIconEnginePlugin*>(self);
    if (vqiconengineplugin) {
        vqiconengineplugin->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QIconEnginePlugin::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QIconEnginePlugin_SuperDisconnectNotify(QIconEnginePlugin* self, const QMetaMethod* signal) {
    if (auto* vqiconengineplugin = dynamic_cast<VirtualQIconEnginePlugin*>(self)) {
        vqiconengineplugin->QIconEnginePlugin::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QIconEnginePlugin::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QIconEnginePlugin_OnDisconnectNotify(QIconEnginePlugin* self, intptr_t slot) {
    if (auto* vqiconengineplugin = dynamic_cast<VirtualQIconEnginePlugin*>(self))
        vqiconengineplugin->qiconengineplugin_disconnectnotify_callback = reinterpret_cast<VirtualQIconEnginePlugin::QIconEnginePlugin_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* QIconEnginePlugin_Sender(const QIconEnginePlugin* self) {
    if (auto* vqiconengineplugin = const_cast<VirtualQIconEnginePlugin*>(dynamic_cast<const VirtualQIconEnginePlugin*>(self))) {
        return vqiconengineplugin->VirtualQIconEnginePlugin::sender();
    } else
        qFatal("Error: Protected method QIconEnginePlugin::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QIconEnginePlugin_SenderSignalIndex(const QIconEnginePlugin* self) {
    if (auto* vqiconengineplugin = const_cast<VirtualQIconEnginePlugin*>(dynamic_cast<const VirtualQIconEnginePlugin*>(self))) {
        return vqiconengineplugin->VirtualQIconEnginePlugin::senderSignalIndex();
    } else
        qFatal("Error: Protected method QIconEnginePlugin::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QIconEnginePlugin_Receivers(const QIconEnginePlugin* self, const char* signal) {
    if (auto* vqiconengineplugin = const_cast<VirtualQIconEnginePlugin*>(dynamic_cast<const VirtualQIconEnginePlugin*>(self))) {
        return vqiconengineplugin->VirtualQIconEnginePlugin::receivers(signal);
    } else
        qFatal("Error: Protected method QIconEnginePlugin::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QIconEnginePlugin_IsSignalConnected(const QIconEnginePlugin* self, const QMetaMethod* signal) {
    if (auto* vqiconengineplugin = const_cast<VirtualQIconEnginePlugin*>(dynamic_cast<const VirtualQIconEnginePlugin*>(self))) {
        return vqiconengineplugin->VirtualQIconEnginePlugin::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QIconEnginePlugin::isSignalConnected called without a directly constructed type");
}

void QIconEnginePlugin_Delete(QIconEnginePlugin* self) {
    delete self;
}
