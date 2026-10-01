#include <QChildEvent>
#include <QEvent>
#include <QHash>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QTimerEvent>
#include <QWebChannel>
#include <QWebChannelAbstractTransport>
#include <qwebchannel.h>
#include "libqwebchannel.h"
#include "libqwebchannel.hxx"

QWebChannel* QWebChannel_new() {
    return new VirtualQWebChannel();
}

QWebChannel* QWebChannel_new2(QObject* parent) {
    return new VirtualQWebChannel(parent);
}

QMetaObject* QWebChannel_MetaObject(const QWebChannel* self) {
    return (QMetaObject*)self->metaObject();
}

void* QWebChannel_Metacast(QWebChannel* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QWebChannel_Metacall(QWebChannel* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QWebChannel_Tr(const char* s) {
    auto _ret = QWebChannel::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QWebChannel_RegisterObjects(QWebChannel* self, const libqt_map /* of libqt_string to QObject* */ objects) {
    QHash<QString, QObject*> objects_QHash;
    objects_QHash.reserve(objects.len);
    libqt_string* objects_karr = static_cast<libqt_string*>(objects.keys);
    QObject** objects_varr = static_cast<QObject**>(objects.values);
    for (size_t i = 0; i < objects.len; ++i) {
        QString objects_karr_i_QString = QString::fromUtf8(objects_karr[i].data, objects_karr[i].len);
        objects_QHash.insert(objects_karr_i_QString, objects_varr[i]);
    }
    self->registerObjects(objects_QHash);
}

libqt_map /* of libqt_string to QObject* */ QWebChannel_RegisteredObjects(const QWebChannel* self) {
    QHash<QString, QObject*> _ret = self->registeredObjects();
    // Convert QHash<> from C++ memory to manually-managed C memory
    libqt_string* _karr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.size()));
    QObject** _varr = static_cast<QObject**>(malloc(sizeof(QObject*) * _ret.size()));
    int _ctr = 0;
    for (auto _itr = _ret.keyValueBegin(); _itr != _ret.keyValueEnd(); ++_itr) {
        auto _hashkey_ret = _itr->first;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _hashkey_b = _hashkey_ret.toUtf8();
        libqt_string _hashkey_str;
        _hashkey_str.len = _hashkey_b.length();
        _hashkey_str.data = static_cast<const char*>(malloc(_hashkey_str.len + 1));
        memcpy((void*)_hashkey_str.data, _hashkey_b.data(), _hashkey_str.len);
        ((char*)_hashkey_str.data)[_hashkey_str.len] = '\0';
        _karr[_ctr] = _hashkey_str;
        _varr[_ctr] = _itr->second;
        _ctr++;
    }
    libqt_map _out;
    _out.len = _ret.size();
    _out.keys = static_cast<void*>(_karr);
    _out.values = static_cast<void*>(_varr);
    return _out;
}

void QWebChannel_RegisterObject(QWebChannel* self, const libqt_string id, QObject* object) {
    QString id_QString = QString::fromUtf8(id.data, id.len);
    self->registerObject(id_QString, object);
}

void QWebChannel_DeregisterObject(QWebChannel* self, QObject* object) {
    self->deregisterObject(object);
}

bool QWebChannel_BlockUpdates(const QWebChannel* self) {
    return self->blockUpdates();
}

void QWebChannel_SetBlockUpdates(QWebChannel* self, bool block) {
    self->setBlockUpdates(block);
}

int QWebChannel_PropertyUpdateInterval(const QWebChannel* self) {
    return self->propertyUpdateInterval();
}

void QWebChannel_SetPropertyUpdateInterval(QWebChannel* self, int ms) {
    self->setPropertyUpdateInterval(static_cast<int>(ms));
}

void QWebChannel_BlockUpdatesChanged(QWebChannel* self, bool block) {
    self->blockUpdatesChanged(block);
}

void QWebChannel_Connect_BlockUpdatesChanged(QWebChannel* self, intptr_t slot) {
    void (*slotFunc)(QWebChannel*, bool) = reinterpret_cast<void (*)(QWebChannel*, bool)>(slot);
    QWebChannel::connect(self,
                         static_cast<void (QWebChannel::*)(bool)>(&QWebChannel::blockUpdatesChanged),
                         [self, slotFunc](bool block) {
                             bool sigval1 = block;
                             slotFunc(self, sigval1);
                         });
}

void QWebChannel_ConnectTo(QWebChannel* self, QWebChannelAbstractTransport* transport) {
    self->connectTo(transport);
}

void QWebChannel_DisconnectFrom(QWebChannel* self, QWebChannelAbstractTransport* transport) {
    self->disconnectFrom(transport);
}

libqt_string QWebChannel_Tr2(const char* s, const char* c) {
    auto _ret = QWebChannel::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QWebChannel_Tr3(const char* s, const char* c, int n) {
    auto _ret = QWebChannel::tr(s, c, static_cast<int>(n));
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
QMetaObject* QWebChannel_SuperMetaObject(const QWebChannel* self) {
    return (QMetaObject*)self->QWebChannel::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QWebChannel_OnMetaObject(QWebChannel* self, intptr_t slot) {
    if (auto* vqwebchannel = const_cast<VirtualQWebChannel*>(dynamic_cast<const VirtualQWebChannel*>(self)))
        vqwebchannel->qwebchannel_metaobject_callback = reinterpret_cast<VirtualQWebChannel::QWebChannel_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QWebChannel_SuperMetacast(QWebChannel* self, const char* param1) {
    return self->QWebChannel::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QWebChannel_OnMetacast(QWebChannel* self, intptr_t slot) {
    if (auto* vqwebchannel = dynamic_cast<VirtualQWebChannel*>(self))
        vqwebchannel->qwebchannel_metacast_callback = reinterpret_cast<VirtualQWebChannel::QWebChannel_Metacast_Callback>(slot);
}

// Base class handler implementation
int QWebChannel_SuperMetacall(QWebChannel* self, int param1, int param2, void** param3) {
    return self->QWebChannel::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QWebChannel_OnMetacall(QWebChannel* self, intptr_t slot) {
    if (auto* vqwebchannel = dynamic_cast<VirtualQWebChannel*>(self))
        vqwebchannel->qwebchannel_metacall_callback = reinterpret_cast<VirtualQWebChannel::QWebChannel_Metacall_Callback>(slot);
}

// Derived class handler implementation
bool QWebChannel_Event(QWebChannel* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QWebChannel_SuperEvent(QWebChannel* self, QEvent* event) {
    return self->QWebChannel::event(event);
}

// Auxiliary method to allow providing re-implementation
void QWebChannel_OnEvent(QWebChannel* self, intptr_t slot) {
    if (auto* vqwebchannel = dynamic_cast<VirtualQWebChannel*>(self))
        vqwebchannel->qwebchannel_event_callback = reinterpret_cast<VirtualQWebChannel::QWebChannel_Event_Callback>(slot);
}

// Derived class handler implementation
bool QWebChannel_EventFilter(QWebChannel* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QWebChannel_SuperEventFilter(QWebChannel* self, QObject* watched, QEvent* event) {
    return self->QWebChannel::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QWebChannel_OnEventFilter(QWebChannel* self, intptr_t slot) {
    if (auto* vqwebchannel = dynamic_cast<VirtualQWebChannel*>(self))
        vqwebchannel->qwebchannel_eventfilter_callback = reinterpret_cast<VirtualQWebChannel::QWebChannel_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QWebChannel_TimerEvent(QWebChannel* self, QTimerEvent* event) {
    auto* vqwebchannel = dynamic_cast<VirtualQWebChannel*>(self);
    if (vqwebchannel) {
        vqwebchannel->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QWebChannel::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QWebChannel_SuperTimerEvent(QWebChannel* self, QTimerEvent* event) {
    if (auto* vqwebchannel = dynamic_cast<VirtualQWebChannel*>(self)) {
        vqwebchannel->QWebChannel::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QWebChannel::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QWebChannel_OnTimerEvent(QWebChannel* self, intptr_t slot) {
    if (auto* vqwebchannel = dynamic_cast<VirtualQWebChannel*>(self))
        vqwebchannel->qwebchannel_timerevent_callback = reinterpret_cast<VirtualQWebChannel::QWebChannel_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QWebChannel_ChildEvent(QWebChannel* self, QChildEvent* event) {
    auto* vqwebchannel = dynamic_cast<VirtualQWebChannel*>(self);
    if (vqwebchannel) {
        vqwebchannel->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QWebChannel::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QWebChannel_SuperChildEvent(QWebChannel* self, QChildEvent* event) {
    if (auto* vqwebchannel = dynamic_cast<VirtualQWebChannel*>(self)) {
        vqwebchannel->QWebChannel::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QWebChannel::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QWebChannel_OnChildEvent(QWebChannel* self, intptr_t slot) {
    if (auto* vqwebchannel = dynamic_cast<VirtualQWebChannel*>(self))
        vqwebchannel->qwebchannel_childevent_callback = reinterpret_cast<VirtualQWebChannel::QWebChannel_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QWebChannel_CustomEvent(QWebChannel* self, QEvent* event) {
    auto* vqwebchannel = dynamic_cast<VirtualQWebChannel*>(self);
    if (vqwebchannel) {
        vqwebchannel->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QWebChannel::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QWebChannel_SuperCustomEvent(QWebChannel* self, QEvent* event) {
    if (auto* vqwebchannel = dynamic_cast<VirtualQWebChannel*>(self)) {
        vqwebchannel->QWebChannel::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QWebChannel::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QWebChannel_OnCustomEvent(QWebChannel* self, intptr_t slot) {
    if (auto* vqwebchannel = dynamic_cast<VirtualQWebChannel*>(self))
        vqwebchannel->qwebchannel_customevent_callback = reinterpret_cast<VirtualQWebChannel::QWebChannel_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QWebChannel_ConnectNotify(QWebChannel* self, const QMetaMethod* signal) {
    auto* vqwebchannel = dynamic_cast<VirtualQWebChannel*>(self);
    if (vqwebchannel) {
        vqwebchannel->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QWebChannel::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QWebChannel_SuperConnectNotify(QWebChannel* self, const QMetaMethod* signal) {
    if (auto* vqwebchannel = dynamic_cast<VirtualQWebChannel*>(self)) {
        vqwebchannel->QWebChannel::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QWebChannel::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QWebChannel_OnConnectNotify(QWebChannel* self, intptr_t slot) {
    if (auto* vqwebchannel = dynamic_cast<VirtualQWebChannel*>(self))
        vqwebchannel->qwebchannel_connectnotify_callback = reinterpret_cast<VirtualQWebChannel::QWebChannel_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QWebChannel_DisconnectNotify(QWebChannel* self, const QMetaMethod* signal) {
    auto* vqwebchannel = dynamic_cast<VirtualQWebChannel*>(self);
    if (vqwebchannel) {
        vqwebchannel->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QWebChannel::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QWebChannel_SuperDisconnectNotify(QWebChannel* self, const QMetaMethod* signal) {
    if (auto* vqwebchannel = dynamic_cast<VirtualQWebChannel*>(self)) {
        vqwebchannel->QWebChannel::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QWebChannel::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QWebChannel_OnDisconnectNotify(QWebChannel* self, intptr_t slot) {
    if (auto* vqwebchannel = dynamic_cast<VirtualQWebChannel*>(self))
        vqwebchannel->qwebchannel_disconnectnotify_callback = reinterpret_cast<VirtualQWebChannel::QWebChannel_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* QWebChannel_Sender(const QWebChannel* self) {
    if (auto* vqwebchannel = const_cast<VirtualQWebChannel*>(dynamic_cast<const VirtualQWebChannel*>(self))) {
        return vqwebchannel->VirtualQWebChannel::sender();
    } else
        qFatal("Error: Protected method QWebChannel::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QWebChannel_SenderSignalIndex(const QWebChannel* self) {
    if (auto* vqwebchannel = const_cast<VirtualQWebChannel*>(dynamic_cast<const VirtualQWebChannel*>(self))) {
        return vqwebchannel->VirtualQWebChannel::senderSignalIndex();
    } else
        qFatal("Error: Protected method QWebChannel::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QWebChannel_Receivers(const QWebChannel* self, const char* signal) {
    if (auto* vqwebchannel = const_cast<VirtualQWebChannel*>(dynamic_cast<const VirtualQWebChannel*>(self))) {
        return vqwebchannel->VirtualQWebChannel::receivers(signal);
    } else
        qFatal("Error: Protected method QWebChannel::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QWebChannel_IsSignalConnected(const QWebChannel* self, const QMetaMethod* signal) {
    if (auto* vqwebchannel = const_cast<VirtualQWebChannel*>(dynamic_cast<const VirtualQWebChannel*>(self))) {
        return vqwebchannel->VirtualQWebChannel::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QWebChannel::isSignalConnected called without a directly constructed type");
}

void QWebChannel_Delete(QWebChannel* self) {
    delete self;
}
