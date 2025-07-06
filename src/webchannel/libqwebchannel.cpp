#include <QChildEvent>
#include <QEvent>
#include <QHash>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
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
    auto* vqwebchannel = dynamic_cast<VirtualQWebChannel*>(self);
    if (vqwebchannel && vqwebchannel->isVirtualQWebChannel) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQWebChannel*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QWebChannel_OnMetacall(QWebChannel* self, intptr_t slot) {
    auto* vqwebchannel = dynamic_cast<VirtualQWebChannel*>(self);
    if (vqwebchannel && vqwebchannel->isVirtualQWebChannel) {
        vqwebchannel->setQWebChannel_Metacall_Callback(reinterpret_cast<VirtualQWebChannel::QWebChannel_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QWebChannel_QBaseMetacall(QWebChannel* self, int param1, int param2, void** param3) {
    auto* vqwebchannel = dynamic_cast<VirtualQWebChannel*>(self);
    if (vqwebchannel && vqwebchannel->isVirtualQWebChannel) {
        vqwebchannel->setQWebChannel_Metacall_IsBase(true);
        return vqwebchannel->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQWebChannel*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QWebChannel_Tr(const char* s) {
    QString _ret = QWebChannel::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QWebChannel_RegisterObjects(QWebChannel* self, const libqt_map /* of libqt_string to QObject* */ objects) {
    QHash<QString, QObject*> objects_QMap;
    objects_QMap.reserve(objects.len);
    libqt_string* objects_karr = static_cast<libqt_string*>(objects.keys);
    QObject** objects_varr = static_cast<QObject**>(objects.values);
    for (size_t i = 0; i < objects.len; ++i) {
        QString objects_karr_i_QString = QString::fromUtf8(objects_karr[i].data, objects_karr[i].len);
        objects_QMap[objects_karr_i_QString] = objects_varr[i];
    }
    self->registerObjects(objects_QMap);
}

libqt_map /* of libqt_string to QObject* */ QWebChannel_RegisteredObjects(const QWebChannel* self) {
    QHash<QString, QObject*> _ret = self->registeredObjects();
    // Convert QHash<> from C++ memory to manually-managed C memory
    libqt_string* _karr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.size()));
    QObject** _varr = static_cast<QObject**>(malloc(sizeof(QObject*) * _ret.size()));
    int _ctr = 0;
    for (auto _itr = _ret.keyValueBegin(); _itr != _ret.keyValueEnd(); ++_itr) {
        QString _hashkey_ret = _itr->first;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _hashkey_b = _hashkey_ret.toUtf8();
        libqt_string _hashkey_str;
        _hashkey_str.len = _hashkey_b.length();
        _hashkey_str.data = static_cast<const char*>(malloc((_hashkey_str.len + 1) * sizeof(char)));
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
    QWebChannel::connect(self, &QWebChannel::blockUpdatesChanged, [self, slotFunc](bool block) {
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
    QString _ret = QWebChannel::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QWebChannel_Tr3(const char* s, const char* c, int n) {
    QString _ret = QWebChannel::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

// Derived class handler implementation
bool QWebChannel_Event(QWebChannel* self, QEvent* event) {
    auto* vqwebchannel = dynamic_cast<VirtualQWebChannel*>(self);
    if (vqwebchannel && vqwebchannel->isVirtualQWebChannel) {
        return vqwebchannel->event(event);
    } else {
        return self->QWebChannel::event(event);
    }
}

// Base class handler implementation
bool QWebChannel_QBaseEvent(QWebChannel* self, QEvent* event) {
    auto* vqwebchannel = dynamic_cast<VirtualQWebChannel*>(self);
    if (vqwebchannel && vqwebchannel->isVirtualQWebChannel) {
        vqwebchannel->setQWebChannel_Event_IsBase(true);
        return vqwebchannel->event(event);
    } else {
        return self->QWebChannel::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWebChannel_OnEvent(QWebChannel* self, intptr_t slot) {
    auto* vqwebchannel = dynamic_cast<VirtualQWebChannel*>(self);
    if (vqwebchannel && vqwebchannel->isVirtualQWebChannel) {
        vqwebchannel->setQWebChannel_Event_Callback(reinterpret_cast<VirtualQWebChannel::QWebChannel_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QWebChannel_EventFilter(QWebChannel* self, QObject* watched, QEvent* event) {
    auto* vqwebchannel = dynamic_cast<VirtualQWebChannel*>(self);
    if (vqwebchannel && vqwebchannel->isVirtualQWebChannel) {
        return vqwebchannel->eventFilter(watched, event);
    } else {
        return self->QWebChannel::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QWebChannel_QBaseEventFilter(QWebChannel* self, QObject* watched, QEvent* event) {
    auto* vqwebchannel = dynamic_cast<VirtualQWebChannel*>(self);
    if (vqwebchannel && vqwebchannel->isVirtualQWebChannel) {
        vqwebchannel->setQWebChannel_EventFilter_IsBase(true);
        return vqwebchannel->eventFilter(watched, event);
    } else {
        return self->QWebChannel::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWebChannel_OnEventFilter(QWebChannel* self, intptr_t slot) {
    auto* vqwebchannel = dynamic_cast<VirtualQWebChannel*>(self);
    if (vqwebchannel && vqwebchannel->isVirtualQWebChannel) {
        vqwebchannel->setQWebChannel_EventFilter_Callback(reinterpret_cast<VirtualQWebChannel::QWebChannel_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QWebChannel_TimerEvent(QWebChannel* self, QTimerEvent* event) {
    auto* vqwebchannel = dynamic_cast<VirtualQWebChannel*>(self);
    if (vqwebchannel && vqwebchannel->isVirtualQWebChannel) {
        vqwebchannel->timerEvent(event);
    } else {
        ((VirtualQWebChannel*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QWebChannel_QBaseTimerEvent(QWebChannel* self, QTimerEvent* event) {
    auto* vqwebchannel = dynamic_cast<VirtualQWebChannel*>(self);
    if (vqwebchannel && vqwebchannel->isVirtualQWebChannel) {
        vqwebchannel->setQWebChannel_TimerEvent_IsBase(true);
        vqwebchannel->timerEvent(event);
    } else {
        ((VirtualQWebChannel*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWebChannel_OnTimerEvent(QWebChannel* self, intptr_t slot) {
    auto* vqwebchannel = dynamic_cast<VirtualQWebChannel*>(self);
    if (vqwebchannel && vqwebchannel->isVirtualQWebChannel) {
        vqwebchannel->setQWebChannel_TimerEvent_Callback(reinterpret_cast<VirtualQWebChannel::QWebChannel_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWebChannel_ChildEvent(QWebChannel* self, QChildEvent* event) {
    auto* vqwebchannel = dynamic_cast<VirtualQWebChannel*>(self);
    if (vqwebchannel && vqwebchannel->isVirtualQWebChannel) {
        vqwebchannel->childEvent(event);
    } else {
        ((VirtualQWebChannel*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QWebChannel_QBaseChildEvent(QWebChannel* self, QChildEvent* event) {
    auto* vqwebchannel = dynamic_cast<VirtualQWebChannel*>(self);
    if (vqwebchannel && vqwebchannel->isVirtualQWebChannel) {
        vqwebchannel->setQWebChannel_ChildEvent_IsBase(true);
        vqwebchannel->childEvent(event);
    } else {
        ((VirtualQWebChannel*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWebChannel_OnChildEvent(QWebChannel* self, intptr_t slot) {
    auto* vqwebchannel = dynamic_cast<VirtualQWebChannel*>(self);
    if (vqwebchannel && vqwebchannel->isVirtualQWebChannel) {
        vqwebchannel->setQWebChannel_ChildEvent_Callback(reinterpret_cast<VirtualQWebChannel::QWebChannel_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWebChannel_CustomEvent(QWebChannel* self, QEvent* event) {
    auto* vqwebchannel = dynamic_cast<VirtualQWebChannel*>(self);
    if (vqwebchannel && vqwebchannel->isVirtualQWebChannel) {
        vqwebchannel->customEvent(event);
    } else {
        ((VirtualQWebChannel*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QWebChannel_QBaseCustomEvent(QWebChannel* self, QEvent* event) {
    auto* vqwebchannel = dynamic_cast<VirtualQWebChannel*>(self);
    if (vqwebchannel && vqwebchannel->isVirtualQWebChannel) {
        vqwebchannel->setQWebChannel_CustomEvent_IsBase(true);
        vqwebchannel->customEvent(event);
    } else {
        ((VirtualQWebChannel*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWebChannel_OnCustomEvent(QWebChannel* self, intptr_t slot) {
    auto* vqwebchannel = dynamic_cast<VirtualQWebChannel*>(self);
    if (vqwebchannel && vqwebchannel->isVirtualQWebChannel) {
        vqwebchannel->setQWebChannel_CustomEvent_Callback(reinterpret_cast<VirtualQWebChannel::QWebChannel_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWebChannel_ConnectNotify(QWebChannel* self, const QMetaMethod* signal) {
    auto* vqwebchannel = dynamic_cast<VirtualQWebChannel*>(self);
    if (vqwebchannel && vqwebchannel->isVirtualQWebChannel) {
        vqwebchannel->connectNotify(*signal);
    } else {
        ((VirtualQWebChannel*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QWebChannel_QBaseConnectNotify(QWebChannel* self, const QMetaMethod* signal) {
    auto* vqwebchannel = dynamic_cast<VirtualQWebChannel*>(self);
    if (vqwebchannel && vqwebchannel->isVirtualQWebChannel) {
        vqwebchannel->setQWebChannel_ConnectNotify_IsBase(true);
        vqwebchannel->connectNotify(*signal);
    } else {
        ((VirtualQWebChannel*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QWebChannel_OnConnectNotify(QWebChannel* self, intptr_t slot) {
    auto* vqwebchannel = dynamic_cast<VirtualQWebChannel*>(self);
    if (vqwebchannel && vqwebchannel->isVirtualQWebChannel) {
        vqwebchannel->setQWebChannel_ConnectNotify_Callback(reinterpret_cast<VirtualQWebChannel::QWebChannel_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QWebChannel_DisconnectNotify(QWebChannel* self, const QMetaMethod* signal) {
    auto* vqwebchannel = dynamic_cast<VirtualQWebChannel*>(self);
    if (vqwebchannel && vqwebchannel->isVirtualQWebChannel) {
        vqwebchannel->disconnectNotify(*signal);
    } else {
        ((VirtualQWebChannel*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QWebChannel_QBaseDisconnectNotify(QWebChannel* self, const QMetaMethod* signal) {
    auto* vqwebchannel = dynamic_cast<VirtualQWebChannel*>(self);
    if (vqwebchannel && vqwebchannel->isVirtualQWebChannel) {
        vqwebchannel->setQWebChannel_DisconnectNotify_IsBase(true);
        vqwebchannel->disconnectNotify(*signal);
    } else {
        ((VirtualQWebChannel*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QWebChannel_OnDisconnectNotify(QWebChannel* self, intptr_t slot) {
    auto* vqwebchannel = dynamic_cast<VirtualQWebChannel*>(self);
    if (vqwebchannel && vqwebchannel->isVirtualQWebChannel) {
        vqwebchannel->setQWebChannel_DisconnectNotify_Callback(reinterpret_cast<VirtualQWebChannel::QWebChannel_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QWebChannel_Sender(const QWebChannel* self) {
    auto* vqwebchannel = const_cast<VirtualQWebChannel*>(dynamic_cast<const VirtualQWebChannel*>(self));
    if (vqwebchannel && vqwebchannel->isVirtualQWebChannel) {
        return vqwebchannel->sender();
    } else {
        return ((VirtualQWebChannel*)self)->sender();
    }
}

// Base class handler implementation
QObject* QWebChannel_QBaseSender(const QWebChannel* self) {
    auto* vqwebchannel = const_cast<VirtualQWebChannel*>(dynamic_cast<const VirtualQWebChannel*>(self));
    if (vqwebchannel && vqwebchannel->isVirtualQWebChannel) {
        vqwebchannel->setQWebChannel_Sender_IsBase(true);
        return vqwebchannel->sender();
    } else {
        return ((VirtualQWebChannel*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QWebChannel_OnSender(const QWebChannel* self, intptr_t slot) {
    auto* vqwebchannel = const_cast<VirtualQWebChannel*>(dynamic_cast<const VirtualQWebChannel*>(self));
    if (vqwebchannel && vqwebchannel->isVirtualQWebChannel) {
        vqwebchannel->setQWebChannel_Sender_Callback(reinterpret_cast<VirtualQWebChannel::QWebChannel_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QWebChannel_SenderSignalIndex(const QWebChannel* self) {
    auto* vqwebchannel = const_cast<VirtualQWebChannel*>(dynamic_cast<const VirtualQWebChannel*>(self));
    if (vqwebchannel && vqwebchannel->isVirtualQWebChannel) {
        return vqwebchannel->senderSignalIndex();
    } else {
        return ((VirtualQWebChannel*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QWebChannel_QBaseSenderSignalIndex(const QWebChannel* self) {
    auto* vqwebchannel = const_cast<VirtualQWebChannel*>(dynamic_cast<const VirtualQWebChannel*>(self));
    if (vqwebchannel && vqwebchannel->isVirtualQWebChannel) {
        vqwebchannel->setQWebChannel_SenderSignalIndex_IsBase(true);
        return vqwebchannel->senderSignalIndex();
    } else {
        return ((VirtualQWebChannel*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QWebChannel_OnSenderSignalIndex(const QWebChannel* self, intptr_t slot) {
    auto* vqwebchannel = const_cast<VirtualQWebChannel*>(dynamic_cast<const VirtualQWebChannel*>(self));
    if (vqwebchannel && vqwebchannel->isVirtualQWebChannel) {
        vqwebchannel->setQWebChannel_SenderSignalIndex_Callback(reinterpret_cast<VirtualQWebChannel::QWebChannel_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QWebChannel_Receivers(const QWebChannel* self, const char* signal) {
    auto* vqwebchannel = const_cast<VirtualQWebChannel*>(dynamic_cast<const VirtualQWebChannel*>(self));
    if (vqwebchannel && vqwebchannel->isVirtualQWebChannel) {
        return vqwebchannel->receivers(signal);
    } else {
        return ((VirtualQWebChannel*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QWebChannel_QBaseReceivers(const QWebChannel* self, const char* signal) {
    auto* vqwebchannel = const_cast<VirtualQWebChannel*>(dynamic_cast<const VirtualQWebChannel*>(self));
    if (vqwebchannel && vqwebchannel->isVirtualQWebChannel) {
        vqwebchannel->setQWebChannel_Receivers_IsBase(true);
        return vqwebchannel->receivers(signal);
    } else {
        return ((VirtualQWebChannel*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QWebChannel_OnReceivers(const QWebChannel* self, intptr_t slot) {
    auto* vqwebchannel = const_cast<VirtualQWebChannel*>(dynamic_cast<const VirtualQWebChannel*>(self));
    if (vqwebchannel && vqwebchannel->isVirtualQWebChannel) {
        vqwebchannel->setQWebChannel_Receivers_Callback(reinterpret_cast<VirtualQWebChannel::QWebChannel_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QWebChannel_IsSignalConnected(const QWebChannel* self, const QMetaMethod* signal) {
    auto* vqwebchannel = const_cast<VirtualQWebChannel*>(dynamic_cast<const VirtualQWebChannel*>(self));
    if (vqwebchannel && vqwebchannel->isVirtualQWebChannel) {
        return vqwebchannel->isSignalConnected(*signal);
    } else {
        return ((VirtualQWebChannel*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QWebChannel_QBaseIsSignalConnected(const QWebChannel* self, const QMetaMethod* signal) {
    auto* vqwebchannel = const_cast<VirtualQWebChannel*>(dynamic_cast<const VirtualQWebChannel*>(self));
    if (vqwebchannel && vqwebchannel->isVirtualQWebChannel) {
        vqwebchannel->setQWebChannel_IsSignalConnected_IsBase(true);
        return vqwebchannel->isSignalConnected(*signal);
    } else {
        return ((VirtualQWebChannel*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QWebChannel_OnIsSignalConnected(const QWebChannel* self, intptr_t slot) {
    auto* vqwebchannel = const_cast<VirtualQWebChannel*>(dynamic_cast<const VirtualQWebChannel*>(self));
    if (vqwebchannel && vqwebchannel->isVirtualQWebChannel) {
        vqwebchannel->setQWebChannel_IsSignalConnected_Callback(reinterpret_cast<VirtualQWebChannel::QWebChannel_IsSignalConnected_Callback>(slot));
    }
}

void QWebChannel_Delete(QWebChannel* self) {
    delete self;
}
