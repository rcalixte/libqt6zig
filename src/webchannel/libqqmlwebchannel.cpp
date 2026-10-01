#include <QChildEvent>
#include <QEvent>
#include <QMap>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QQmlWebChannel>
#include <QString>
#include <QTimerEvent>
#include <QVariant>
#include <QWebChannel>
#include <qqmlwebchannel.h>
#include "libqqmlwebchannel.h"
#include "libqqmlwebchannel.hxx"

QQmlWebChannel* QQmlWebChannel_new() {
    return new VirtualQQmlWebChannel();
}

QQmlWebChannel* QQmlWebChannel_new2(QObject* parent) {
    return new VirtualQQmlWebChannel(parent);
}

QMetaObject* QQmlWebChannel_MetaObject(const QQmlWebChannel* self) {
    return (QMetaObject*)self->metaObject();
}

void* QQmlWebChannel_Metacast(QQmlWebChannel* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QQmlWebChannel_Metacall(QQmlWebChannel* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QQmlWebChannel_Tr(const char* s) {
    auto _ret = QQmlWebChannel::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QQmlWebChannel_RegisterObjects(QQmlWebChannel* self, const libqt_map /* of libqt_string to QVariant* */ objects) {
    QMap<QString, QVariant> objects_QMap;
    libqt_string* objects_karr = static_cast<libqt_string*>(objects.keys);
    QVariant** objects_varr = static_cast<QVariant**>(objects.values);
    for (size_t i = 0; i < objects.len; ++i) {
        QString objects_karr_i_QString = QString::fromUtf8(objects_karr[i].data, objects_karr[i].len);
        objects_QMap.insert(objects_karr_i_QString, *(objects_varr[i]));
    }
    self->registerObjects(objects_QMap);
}

void QQmlWebChannel_ConnectTo(QQmlWebChannel* self, QObject* transport) {
    self->connectTo(transport);
}

void QQmlWebChannel_DisconnectFrom(QQmlWebChannel* self, QObject* transport) {
    self->disconnectFrom(transport);
}

libqt_string QQmlWebChannel_Tr2(const char* s, const char* c) {
    auto _ret = QQmlWebChannel::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QQmlWebChannel_Tr3(const char* s, const char* c, int n) {
    auto _ret = QQmlWebChannel::tr(s, c, static_cast<int>(n));
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
QMetaObject* QQmlWebChannel_SuperMetaObject(const QQmlWebChannel* self) {
    return (QMetaObject*)self->QQmlWebChannel::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QQmlWebChannel_OnMetaObject(QQmlWebChannel* self, intptr_t slot) {
    if (auto* vqqmlwebchannel = const_cast<VirtualQQmlWebChannel*>(dynamic_cast<const VirtualQQmlWebChannel*>(self)))
        vqqmlwebchannel->qqmlwebchannel_metaobject_callback = reinterpret_cast<VirtualQQmlWebChannel::QQmlWebChannel_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QQmlWebChannel_SuperMetacast(QQmlWebChannel* self, const char* param1) {
    return self->QQmlWebChannel::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QQmlWebChannel_OnMetacast(QQmlWebChannel* self, intptr_t slot) {
    if (auto* vqqmlwebchannel = dynamic_cast<VirtualQQmlWebChannel*>(self))
        vqqmlwebchannel->qqmlwebchannel_metacast_callback = reinterpret_cast<VirtualQQmlWebChannel::QQmlWebChannel_Metacast_Callback>(slot);
}

// Base class handler implementation
int QQmlWebChannel_SuperMetacall(QQmlWebChannel* self, int param1, int param2, void** param3) {
    return self->QQmlWebChannel::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QQmlWebChannel_OnMetacall(QQmlWebChannel* self, intptr_t slot) {
    if (auto* vqqmlwebchannel = dynamic_cast<VirtualQQmlWebChannel*>(self))
        vqqmlwebchannel->qqmlwebchannel_metacall_callback = reinterpret_cast<VirtualQQmlWebChannel::QQmlWebChannel_Metacall_Callback>(slot);
}

// Derived class handler implementation
bool QQmlWebChannel_Event(QQmlWebChannel* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QQmlWebChannel_SuperEvent(QQmlWebChannel* self, QEvent* event) {
    return self->QQmlWebChannel::event(event);
}

// Auxiliary method to allow providing re-implementation
void QQmlWebChannel_OnEvent(QQmlWebChannel* self, intptr_t slot) {
    if (auto* vqqmlwebchannel = dynamic_cast<VirtualQQmlWebChannel*>(self))
        vqqmlwebchannel->qqmlwebchannel_event_callback = reinterpret_cast<VirtualQQmlWebChannel::QQmlWebChannel_Event_Callback>(slot);
}

// Derived class handler implementation
bool QQmlWebChannel_EventFilter(QQmlWebChannel* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QQmlWebChannel_SuperEventFilter(QQmlWebChannel* self, QObject* watched, QEvent* event) {
    return self->QQmlWebChannel::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QQmlWebChannel_OnEventFilter(QQmlWebChannel* self, intptr_t slot) {
    if (auto* vqqmlwebchannel = dynamic_cast<VirtualQQmlWebChannel*>(self))
        vqqmlwebchannel->qqmlwebchannel_eventfilter_callback = reinterpret_cast<VirtualQQmlWebChannel::QQmlWebChannel_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QQmlWebChannel_TimerEvent(QQmlWebChannel* self, QTimerEvent* event) {
    auto* vqqmlwebchannel = dynamic_cast<VirtualQQmlWebChannel*>(self);
    if (vqqmlwebchannel) {
        vqqmlwebchannel->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QQmlWebChannel::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QQmlWebChannel_SuperTimerEvent(QQmlWebChannel* self, QTimerEvent* event) {
    if (auto* vqqmlwebchannel = dynamic_cast<VirtualQQmlWebChannel*>(self)) {
        vqqmlwebchannel->QQmlWebChannel::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QQmlWebChannel::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQmlWebChannel_OnTimerEvent(QQmlWebChannel* self, intptr_t slot) {
    if (auto* vqqmlwebchannel = dynamic_cast<VirtualQQmlWebChannel*>(self))
        vqqmlwebchannel->qqmlwebchannel_timerevent_callback = reinterpret_cast<VirtualQQmlWebChannel::QQmlWebChannel_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QQmlWebChannel_ChildEvent(QQmlWebChannel* self, QChildEvent* event) {
    auto* vqqmlwebchannel = dynamic_cast<VirtualQQmlWebChannel*>(self);
    if (vqqmlwebchannel) {
        vqqmlwebchannel->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QQmlWebChannel::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QQmlWebChannel_SuperChildEvent(QQmlWebChannel* self, QChildEvent* event) {
    if (auto* vqqmlwebchannel = dynamic_cast<VirtualQQmlWebChannel*>(self)) {
        vqqmlwebchannel->QQmlWebChannel::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QQmlWebChannel::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQmlWebChannel_OnChildEvent(QQmlWebChannel* self, intptr_t slot) {
    if (auto* vqqmlwebchannel = dynamic_cast<VirtualQQmlWebChannel*>(self))
        vqqmlwebchannel->qqmlwebchannel_childevent_callback = reinterpret_cast<VirtualQQmlWebChannel::QQmlWebChannel_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QQmlWebChannel_CustomEvent(QQmlWebChannel* self, QEvent* event) {
    auto* vqqmlwebchannel = dynamic_cast<VirtualQQmlWebChannel*>(self);
    if (vqqmlwebchannel) {
        vqqmlwebchannel->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QQmlWebChannel::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QQmlWebChannel_SuperCustomEvent(QQmlWebChannel* self, QEvent* event) {
    if (auto* vqqmlwebchannel = dynamic_cast<VirtualQQmlWebChannel*>(self)) {
        vqqmlwebchannel->QQmlWebChannel::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QQmlWebChannel::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQmlWebChannel_OnCustomEvent(QQmlWebChannel* self, intptr_t slot) {
    if (auto* vqqmlwebchannel = dynamic_cast<VirtualQQmlWebChannel*>(self))
        vqqmlwebchannel->qqmlwebchannel_customevent_callback = reinterpret_cast<VirtualQQmlWebChannel::QQmlWebChannel_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QQmlWebChannel_ConnectNotify(QQmlWebChannel* self, const QMetaMethod* signal) {
    auto* vqqmlwebchannel = dynamic_cast<VirtualQQmlWebChannel*>(self);
    if (vqqmlwebchannel) {
        vqqmlwebchannel->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QQmlWebChannel::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QQmlWebChannel_SuperConnectNotify(QQmlWebChannel* self, const QMetaMethod* signal) {
    if (auto* vqqmlwebchannel = dynamic_cast<VirtualQQmlWebChannel*>(self)) {
        vqqmlwebchannel->QQmlWebChannel::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QQmlWebChannel::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQmlWebChannel_OnConnectNotify(QQmlWebChannel* self, intptr_t slot) {
    if (auto* vqqmlwebchannel = dynamic_cast<VirtualQQmlWebChannel*>(self))
        vqqmlwebchannel->qqmlwebchannel_connectnotify_callback = reinterpret_cast<VirtualQQmlWebChannel::QQmlWebChannel_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QQmlWebChannel_DisconnectNotify(QQmlWebChannel* self, const QMetaMethod* signal) {
    auto* vqqmlwebchannel = dynamic_cast<VirtualQQmlWebChannel*>(self);
    if (vqqmlwebchannel) {
        vqqmlwebchannel->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QQmlWebChannel::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QQmlWebChannel_SuperDisconnectNotify(QQmlWebChannel* self, const QMetaMethod* signal) {
    if (auto* vqqmlwebchannel = dynamic_cast<VirtualQQmlWebChannel*>(self)) {
        vqqmlwebchannel->QQmlWebChannel::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QQmlWebChannel::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQmlWebChannel_OnDisconnectNotify(QQmlWebChannel* self, intptr_t slot) {
    if (auto* vqqmlwebchannel = dynamic_cast<VirtualQQmlWebChannel*>(self))
        vqqmlwebchannel->qqmlwebchannel_disconnectnotify_callback = reinterpret_cast<VirtualQQmlWebChannel::QQmlWebChannel_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* QQmlWebChannel_Sender(const QQmlWebChannel* self) {
    if (auto* vqqmlwebchannel = const_cast<VirtualQQmlWebChannel*>(dynamic_cast<const VirtualQQmlWebChannel*>(self))) {
        return vqqmlwebchannel->VirtualQQmlWebChannel::sender();
    } else
        qFatal("Error: Protected method QQmlWebChannel::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QQmlWebChannel_SenderSignalIndex(const QQmlWebChannel* self) {
    if (auto* vqqmlwebchannel = const_cast<VirtualQQmlWebChannel*>(dynamic_cast<const VirtualQQmlWebChannel*>(self))) {
        return vqqmlwebchannel->VirtualQQmlWebChannel::senderSignalIndex();
    } else
        qFatal("Error: Protected method QQmlWebChannel::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QQmlWebChannel_Receivers(const QQmlWebChannel* self, const char* signal) {
    if (auto* vqqmlwebchannel = const_cast<VirtualQQmlWebChannel*>(dynamic_cast<const VirtualQQmlWebChannel*>(self))) {
        return vqqmlwebchannel->VirtualQQmlWebChannel::receivers(signal);
    } else
        qFatal("Error: Protected method QQmlWebChannel::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QQmlWebChannel_IsSignalConnected(const QQmlWebChannel* self, const QMetaMethod* signal) {
    if (auto* vqqmlwebchannel = const_cast<VirtualQQmlWebChannel*>(dynamic_cast<const VirtualQQmlWebChannel*>(self))) {
        return vqqmlwebchannel->VirtualQQmlWebChannel::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QQmlWebChannel::isSignalConnected called without a directly constructed type");
}

void QQmlWebChannel_Delete(QQmlWebChannel* self) {
    delete self;
}
