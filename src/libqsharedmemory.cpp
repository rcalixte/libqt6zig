#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QNativeIpcKey>
#include <QObject>
#include <QSharedMemory>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <qsharedmemory.h>
#include "libqsharedmemory.h"
#include "libqsharedmemory.hxx"

QSharedMemory* QSharedMemory_new() {
    return new VirtualQSharedMemory();
}

QSharedMemory* QSharedMemory_new2(const QNativeIpcKey* key) {
    return new VirtualQSharedMemory(*key);
}

QSharedMemory* QSharedMemory_new3(const libqt_string key) {
    QString key_QString = QString::fromUtf8(key.data, key.len);
    return new VirtualQSharedMemory(key_QString);
}

QSharedMemory* QSharedMemory_new4(QObject* parent) {
    return new VirtualQSharedMemory(parent);
}

QSharedMemory* QSharedMemory_new5(const QNativeIpcKey* key, QObject* parent) {
    return new VirtualQSharedMemory(*key, parent);
}

QSharedMemory* QSharedMemory_new6(const libqt_string key, QObject* parent) {
    QString key_QString = QString::fromUtf8(key.data, key.len);
    return new VirtualQSharedMemory(key_QString, parent);
}

QMetaObject* QSharedMemory_MetaObject(const QSharedMemory* self) {
    return (QMetaObject*)self->metaObject();
}

void* QSharedMemory_Metacast(QSharedMemory* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QSharedMemory_Metacall(QSharedMemory* self, int param1, int param2, void** param3) {
    auto* vqsharedmemory = dynamic_cast<VirtualQSharedMemory*>(self);
    if (vqsharedmemory && vqsharedmemory->isVirtualQSharedMemory) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQSharedMemory*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QSharedMemory_Tr(const char* s) {
    QString _ret = QSharedMemory::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QSharedMemory_SetKey(QSharedMemory* self, const libqt_string key) {
    QString key_QString = QString::fromUtf8(key.data, key.len);
    self->setKey(key_QString);
}

libqt_string QSharedMemory_Key(const QSharedMemory* self) {
    QString _ret = self->key();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QSharedMemory_SetNativeKey(QSharedMemory* self, const QNativeIpcKey* key) {
    self->setNativeKey(*key);
}

void QSharedMemory_SetNativeKey2(QSharedMemory* self, const libqt_string key) {
    QString key_QString = QString::fromUtf8(key.data, key.len);
    self->setNativeKey(key_QString);
}

libqt_string QSharedMemory_NativeKey(const QSharedMemory* self) {
    QString _ret = self->nativeKey();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QNativeIpcKey* QSharedMemory_NativeIpcKey(const QSharedMemory* self) {
    return new QNativeIpcKey(self->nativeIpcKey());
}

bool QSharedMemory_Create(QSharedMemory* self, ptrdiff_t size) {
    return self->create((qsizetype)(size));
}

ptrdiff_t QSharedMemory_Size(const QSharedMemory* self) {
    return static_cast<ptrdiff_t>(self->size());
}

bool QSharedMemory_Attach(QSharedMemory* self) {
    return self->attach();
}

bool QSharedMemory_IsAttached(const QSharedMemory* self) {
    return self->isAttached();
}

bool QSharedMemory_Detach(QSharedMemory* self) {
    return self->detach();
}

void* QSharedMemory_Data(QSharedMemory* self) {
    return self->data();
}

const void* QSharedMemory_ConstData(const QSharedMemory* self) {
    return (const void*)self->constData();
}

const void* QSharedMemory_Data2(const QSharedMemory* self) {
    return (const void*)self->data();
}

bool QSharedMemory_Lock(QSharedMemory* self) {
    return self->lock();
}

bool QSharedMemory_Unlock(QSharedMemory* self) {
    return self->unlock();
}

int QSharedMemory_Error(const QSharedMemory* self) {
    return static_cast<int>(self->error());
}

libqt_string QSharedMemory_ErrorString(const QSharedMemory* self) {
    QString _ret = self->errorString();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool QSharedMemory_IsKeyTypeSupported(uint16_t typeVal) {
    return QSharedMemory::isKeyTypeSupported(static_cast<QNativeIpcKey::Type>(typeVal));
}

QNativeIpcKey* QSharedMemory_PlatformSafeKey(const libqt_string key) {
    QString key_QString = QString::fromUtf8(key.data, key.len);
    return new QNativeIpcKey(QSharedMemory::platformSafeKey(key_QString));
}

QNativeIpcKey* QSharedMemory_LegacyNativeKey(const libqt_string key) {
    QString key_QString = QString::fromUtf8(key.data, key.len);
    return new QNativeIpcKey(QSharedMemory::legacyNativeKey(key_QString));
}

libqt_string QSharedMemory_Tr2(const char* s, const char* c) {
    QString _ret = QSharedMemory::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QSharedMemory_Tr3(const char* s, const char* c, int n) {
    QString _ret = QSharedMemory::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QSharedMemory_SetNativeKey22(QSharedMemory* self, const libqt_string key, uint16_t typeVal) {
    QString key_QString = QString::fromUtf8(key.data, key.len);
    self->setNativeKey(key_QString, static_cast<QNativeIpcKey::Type>(typeVal));
}

bool QSharedMemory_Create2(QSharedMemory* self, ptrdiff_t size, int mode) {
    return self->create((qsizetype)(size), static_cast<QSharedMemory::AccessMode>(mode));
}

bool QSharedMemory_Attach1(QSharedMemory* self, int mode) {
    return self->attach(static_cast<QSharedMemory::AccessMode>(mode));
}

QNativeIpcKey* QSharedMemory_PlatformSafeKey2(const libqt_string key, uint16_t typeVal) {
    QString key_QString = QString::fromUtf8(key.data, key.len);
    return new QNativeIpcKey(QSharedMemory::platformSafeKey(key_QString, static_cast<QNativeIpcKey::Type>(typeVal)));
}

QNativeIpcKey* QSharedMemory_LegacyNativeKey2(const libqt_string key, uint16_t typeVal) {
    QString key_QString = QString::fromUtf8(key.data, key.len);
    return new QNativeIpcKey(QSharedMemory::legacyNativeKey(key_QString, static_cast<QNativeIpcKey::Type>(typeVal)));
}

// Base class handler implementation
int QSharedMemory_QBaseMetacall(QSharedMemory* self, int param1, int param2, void** param3) {
    auto* vqsharedmemory = dynamic_cast<VirtualQSharedMemory*>(self);
    if (vqsharedmemory && vqsharedmemory->isVirtualQSharedMemory) {
        vqsharedmemory->setQSharedMemory_Metacall_IsBase(true);
        return vqsharedmemory->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->QSharedMemory::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void QSharedMemory_OnMetacall(QSharedMemory* self, intptr_t slot) {
    auto* vqsharedmemory = dynamic_cast<VirtualQSharedMemory*>(self);
    if (vqsharedmemory && vqsharedmemory->isVirtualQSharedMemory) {
        vqsharedmemory->setQSharedMemory_Metacall_Callback(reinterpret_cast<VirtualQSharedMemory::QSharedMemory_Metacall_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSharedMemory_Event(QSharedMemory* self, QEvent* event) {
    auto* vqsharedmemory = dynamic_cast<VirtualQSharedMemory*>(self);
    if (vqsharedmemory && vqsharedmemory->isVirtualQSharedMemory) {
        return vqsharedmemory->event(event);
    } else {
        return self->QSharedMemory::event(event);
    }
}

// Base class handler implementation
bool QSharedMemory_QBaseEvent(QSharedMemory* self, QEvent* event) {
    auto* vqsharedmemory = dynamic_cast<VirtualQSharedMemory*>(self);
    if (vqsharedmemory && vqsharedmemory->isVirtualQSharedMemory) {
        vqsharedmemory->setQSharedMemory_Event_IsBase(true);
        return vqsharedmemory->event(event);
    } else {
        return self->QSharedMemory::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSharedMemory_OnEvent(QSharedMemory* self, intptr_t slot) {
    auto* vqsharedmemory = dynamic_cast<VirtualQSharedMemory*>(self);
    if (vqsharedmemory && vqsharedmemory->isVirtualQSharedMemory) {
        vqsharedmemory->setQSharedMemory_Event_Callback(reinterpret_cast<VirtualQSharedMemory::QSharedMemory_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSharedMemory_EventFilter(QSharedMemory* self, QObject* watched, QEvent* event) {
    auto* vqsharedmemory = dynamic_cast<VirtualQSharedMemory*>(self);
    if (vqsharedmemory && vqsharedmemory->isVirtualQSharedMemory) {
        return vqsharedmemory->eventFilter(watched, event);
    } else {
        return self->QSharedMemory::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QSharedMemory_QBaseEventFilter(QSharedMemory* self, QObject* watched, QEvent* event) {
    auto* vqsharedmemory = dynamic_cast<VirtualQSharedMemory*>(self);
    if (vqsharedmemory && vqsharedmemory->isVirtualQSharedMemory) {
        vqsharedmemory->setQSharedMemory_EventFilter_IsBase(true);
        return vqsharedmemory->eventFilter(watched, event);
    } else {
        return self->QSharedMemory::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSharedMemory_OnEventFilter(QSharedMemory* self, intptr_t slot) {
    auto* vqsharedmemory = dynamic_cast<VirtualQSharedMemory*>(self);
    if (vqsharedmemory && vqsharedmemory->isVirtualQSharedMemory) {
        vqsharedmemory->setQSharedMemory_EventFilter_Callback(reinterpret_cast<VirtualQSharedMemory::QSharedMemory_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QSharedMemory_TimerEvent(QSharedMemory* self, QTimerEvent* event) {
    auto* vqsharedmemory = dynamic_cast<VirtualQSharedMemory*>(self);
    if (vqsharedmemory && vqsharedmemory->isVirtualQSharedMemory) {
        vqsharedmemory->timerEvent(event);
    } else {
        ((VirtualQSharedMemory*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QSharedMemory_QBaseTimerEvent(QSharedMemory* self, QTimerEvent* event) {
    auto* vqsharedmemory = dynamic_cast<VirtualQSharedMemory*>(self);
    if (vqsharedmemory && vqsharedmemory->isVirtualQSharedMemory) {
        vqsharedmemory->setQSharedMemory_TimerEvent_IsBase(true);
        vqsharedmemory->timerEvent(event);
    } else {
        ((VirtualQSharedMemory*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSharedMemory_OnTimerEvent(QSharedMemory* self, intptr_t slot) {
    auto* vqsharedmemory = dynamic_cast<VirtualQSharedMemory*>(self);
    if (vqsharedmemory && vqsharedmemory->isVirtualQSharedMemory) {
        vqsharedmemory->setQSharedMemory_TimerEvent_Callback(reinterpret_cast<VirtualQSharedMemory::QSharedMemory_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSharedMemory_ChildEvent(QSharedMemory* self, QChildEvent* event) {
    auto* vqsharedmemory = dynamic_cast<VirtualQSharedMemory*>(self);
    if (vqsharedmemory && vqsharedmemory->isVirtualQSharedMemory) {
        vqsharedmemory->childEvent(event);
    } else {
        ((VirtualQSharedMemory*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QSharedMemory_QBaseChildEvent(QSharedMemory* self, QChildEvent* event) {
    auto* vqsharedmemory = dynamic_cast<VirtualQSharedMemory*>(self);
    if (vqsharedmemory && vqsharedmemory->isVirtualQSharedMemory) {
        vqsharedmemory->setQSharedMemory_ChildEvent_IsBase(true);
        vqsharedmemory->childEvent(event);
    } else {
        ((VirtualQSharedMemory*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSharedMemory_OnChildEvent(QSharedMemory* self, intptr_t slot) {
    auto* vqsharedmemory = dynamic_cast<VirtualQSharedMemory*>(self);
    if (vqsharedmemory && vqsharedmemory->isVirtualQSharedMemory) {
        vqsharedmemory->setQSharedMemory_ChildEvent_Callback(reinterpret_cast<VirtualQSharedMemory::QSharedMemory_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSharedMemory_CustomEvent(QSharedMemory* self, QEvent* event) {
    auto* vqsharedmemory = dynamic_cast<VirtualQSharedMemory*>(self);
    if (vqsharedmemory && vqsharedmemory->isVirtualQSharedMemory) {
        vqsharedmemory->customEvent(event);
    } else {
        ((VirtualQSharedMemory*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QSharedMemory_QBaseCustomEvent(QSharedMemory* self, QEvent* event) {
    auto* vqsharedmemory = dynamic_cast<VirtualQSharedMemory*>(self);
    if (vqsharedmemory && vqsharedmemory->isVirtualQSharedMemory) {
        vqsharedmemory->setQSharedMemory_CustomEvent_IsBase(true);
        vqsharedmemory->customEvent(event);
    } else {
        ((VirtualQSharedMemory*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSharedMemory_OnCustomEvent(QSharedMemory* self, intptr_t slot) {
    auto* vqsharedmemory = dynamic_cast<VirtualQSharedMemory*>(self);
    if (vqsharedmemory && vqsharedmemory->isVirtualQSharedMemory) {
        vqsharedmemory->setQSharedMemory_CustomEvent_Callback(reinterpret_cast<VirtualQSharedMemory::QSharedMemory_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSharedMemory_ConnectNotify(QSharedMemory* self, const QMetaMethod* signal) {
    auto* vqsharedmemory = dynamic_cast<VirtualQSharedMemory*>(self);
    if (vqsharedmemory && vqsharedmemory->isVirtualQSharedMemory) {
        vqsharedmemory->connectNotify(*signal);
    } else {
        ((VirtualQSharedMemory*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QSharedMemory_QBaseConnectNotify(QSharedMemory* self, const QMetaMethod* signal) {
    auto* vqsharedmemory = dynamic_cast<VirtualQSharedMemory*>(self);
    if (vqsharedmemory && vqsharedmemory->isVirtualQSharedMemory) {
        vqsharedmemory->setQSharedMemory_ConnectNotify_IsBase(true);
        vqsharedmemory->connectNotify(*signal);
    } else {
        ((VirtualQSharedMemory*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QSharedMemory_OnConnectNotify(QSharedMemory* self, intptr_t slot) {
    auto* vqsharedmemory = dynamic_cast<VirtualQSharedMemory*>(self);
    if (vqsharedmemory && vqsharedmemory->isVirtualQSharedMemory) {
        vqsharedmemory->setQSharedMemory_ConnectNotify_Callback(reinterpret_cast<VirtualQSharedMemory::QSharedMemory_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QSharedMemory_DisconnectNotify(QSharedMemory* self, const QMetaMethod* signal) {
    auto* vqsharedmemory = dynamic_cast<VirtualQSharedMemory*>(self);
    if (vqsharedmemory && vqsharedmemory->isVirtualQSharedMemory) {
        vqsharedmemory->disconnectNotify(*signal);
    } else {
        ((VirtualQSharedMemory*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QSharedMemory_QBaseDisconnectNotify(QSharedMemory* self, const QMetaMethod* signal) {
    auto* vqsharedmemory = dynamic_cast<VirtualQSharedMemory*>(self);
    if (vqsharedmemory && vqsharedmemory->isVirtualQSharedMemory) {
        vqsharedmemory->setQSharedMemory_DisconnectNotify_IsBase(true);
        vqsharedmemory->disconnectNotify(*signal);
    } else {
        ((VirtualQSharedMemory*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QSharedMemory_OnDisconnectNotify(QSharedMemory* self, intptr_t slot) {
    auto* vqsharedmemory = dynamic_cast<VirtualQSharedMemory*>(self);
    if (vqsharedmemory && vqsharedmemory->isVirtualQSharedMemory) {
        vqsharedmemory->setQSharedMemory_DisconnectNotify_Callback(reinterpret_cast<VirtualQSharedMemory::QSharedMemory_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QSharedMemory_Sender(const QSharedMemory* self) {
    auto* vqsharedmemory = const_cast<VirtualQSharedMemory*>(dynamic_cast<const VirtualQSharedMemory*>(self));
    if (vqsharedmemory && vqsharedmemory->isVirtualQSharedMemory) {
        return vqsharedmemory->sender();
    } else {
        return ((VirtualQSharedMemory*)self)->sender();
    }
}

// Base class handler implementation
QObject* QSharedMemory_QBaseSender(const QSharedMemory* self) {
    auto* vqsharedmemory = const_cast<VirtualQSharedMemory*>(dynamic_cast<const VirtualQSharedMemory*>(self));
    if (vqsharedmemory && vqsharedmemory->isVirtualQSharedMemory) {
        vqsharedmemory->setQSharedMemory_Sender_IsBase(true);
        return vqsharedmemory->sender();
    } else {
        return ((VirtualQSharedMemory*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QSharedMemory_OnSender(const QSharedMemory* self, intptr_t slot) {
    auto* vqsharedmemory = const_cast<VirtualQSharedMemory*>(dynamic_cast<const VirtualQSharedMemory*>(self));
    if (vqsharedmemory && vqsharedmemory->isVirtualQSharedMemory) {
        vqsharedmemory->setQSharedMemory_Sender_Callback(reinterpret_cast<VirtualQSharedMemory::QSharedMemory_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QSharedMemory_SenderSignalIndex(const QSharedMemory* self) {
    auto* vqsharedmemory = const_cast<VirtualQSharedMemory*>(dynamic_cast<const VirtualQSharedMemory*>(self));
    if (vqsharedmemory && vqsharedmemory->isVirtualQSharedMemory) {
        return vqsharedmemory->senderSignalIndex();
    } else {
        return ((VirtualQSharedMemory*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QSharedMemory_QBaseSenderSignalIndex(const QSharedMemory* self) {
    auto* vqsharedmemory = const_cast<VirtualQSharedMemory*>(dynamic_cast<const VirtualQSharedMemory*>(self));
    if (vqsharedmemory && vqsharedmemory->isVirtualQSharedMemory) {
        vqsharedmemory->setQSharedMemory_SenderSignalIndex_IsBase(true);
        return vqsharedmemory->senderSignalIndex();
    } else {
        return ((VirtualQSharedMemory*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QSharedMemory_OnSenderSignalIndex(const QSharedMemory* self, intptr_t slot) {
    auto* vqsharedmemory = const_cast<VirtualQSharedMemory*>(dynamic_cast<const VirtualQSharedMemory*>(self));
    if (vqsharedmemory && vqsharedmemory->isVirtualQSharedMemory) {
        vqsharedmemory->setQSharedMemory_SenderSignalIndex_Callback(reinterpret_cast<VirtualQSharedMemory::QSharedMemory_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QSharedMemory_Receivers(const QSharedMemory* self, const char* signal) {
    auto* vqsharedmemory = const_cast<VirtualQSharedMemory*>(dynamic_cast<const VirtualQSharedMemory*>(self));
    if (vqsharedmemory && vqsharedmemory->isVirtualQSharedMemory) {
        return vqsharedmemory->receivers(signal);
    } else {
        return ((VirtualQSharedMemory*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QSharedMemory_QBaseReceivers(const QSharedMemory* self, const char* signal) {
    auto* vqsharedmemory = const_cast<VirtualQSharedMemory*>(dynamic_cast<const VirtualQSharedMemory*>(self));
    if (vqsharedmemory && vqsharedmemory->isVirtualQSharedMemory) {
        vqsharedmemory->setQSharedMemory_Receivers_IsBase(true);
        return vqsharedmemory->receivers(signal);
    } else {
        return ((VirtualQSharedMemory*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QSharedMemory_OnReceivers(const QSharedMemory* self, intptr_t slot) {
    auto* vqsharedmemory = const_cast<VirtualQSharedMemory*>(dynamic_cast<const VirtualQSharedMemory*>(self));
    if (vqsharedmemory && vqsharedmemory->isVirtualQSharedMemory) {
        vqsharedmemory->setQSharedMemory_Receivers_Callback(reinterpret_cast<VirtualQSharedMemory::QSharedMemory_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSharedMemory_IsSignalConnected(const QSharedMemory* self, const QMetaMethod* signal) {
    auto* vqsharedmemory = const_cast<VirtualQSharedMemory*>(dynamic_cast<const VirtualQSharedMemory*>(self));
    if (vqsharedmemory && vqsharedmemory->isVirtualQSharedMemory) {
        return vqsharedmemory->isSignalConnected(*signal);
    } else {
        return ((VirtualQSharedMemory*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QSharedMemory_QBaseIsSignalConnected(const QSharedMemory* self, const QMetaMethod* signal) {
    auto* vqsharedmemory = const_cast<VirtualQSharedMemory*>(dynamic_cast<const VirtualQSharedMemory*>(self));
    if (vqsharedmemory && vqsharedmemory->isVirtualQSharedMemory) {
        vqsharedmemory->setQSharedMemory_IsSignalConnected_IsBase(true);
        return vqsharedmemory->isSignalConnected(*signal);
    } else {
        return ((VirtualQSharedMemory*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QSharedMemory_OnIsSignalConnected(const QSharedMemory* self, intptr_t slot) {
    auto* vqsharedmemory = const_cast<VirtualQSharedMemory*>(dynamic_cast<const VirtualQSharedMemory*>(self));
    if (vqsharedmemory && vqsharedmemory->isVirtualQSharedMemory) {
        vqsharedmemory->setQSharedMemory_IsSignalConnected_Callback(reinterpret_cast<VirtualQSharedMemory::QSharedMemory_IsSignalConnected_Callback>(slot));
    }
}

void QSharedMemory_Delete(QSharedMemory* self) {
    delete self;
}
