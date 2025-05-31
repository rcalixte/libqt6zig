#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QSignalMapper>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <qsignalmapper.h>
#include "libqsignalmapper.h"
#include "libqsignalmapper.hxx"

QSignalMapper* QSignalMapper_new() {
    return new VirtualQSignalMapper();
}

QSignalMapper* QSignalMapper_new2(QObject* parent) {
    return new VirtualQSignalMapper(parent);
}

QMetaObject* QSignalMapper_MetaObject(const QSignalMapper* self) {
    return (QMetaObject*)self->metaObject();
}

void* QSignalMapper_Metacast(QSignalMapper* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QSignalMapper_Metacall(QSignalMapper* self, int param1, int param2, void** param3) {
    auto* vqsignalmapper = dynamic_cast<VirtualQSignalMapper*>(self);
    if (vqsignalmapper && vqsignalmapper->isVirtualQSignalMapper) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQSignalMapper*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QSignalMapper_OnMetacall(QSignalMapper* self, intptr_t slot) {
    auto* vqsignalmapper = dynamic_cast<VirtualQSignalMapper*>(self);
    if (vqsignalmapper && vqsignalmapper->isVirtualQSignalMapper) {
        vqsignalmapper->setQSignalMapper_Metacall_Callback(reinterpret_cast<VirtualQSignalMapper::QSignalMapper_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QSignalMapper_QBaseMetacall(QSignalMapper* self, int param1, int param2, void** param3) {
    auto* vqsignalmapper = dynamic_cast<VirtualQSignalMapper*>(self);
    if (vqsignalmapper && vqsignalmapper->isVirtualQSignalMapper) {
        vqsignalmapper->setQSignalMapper_Metacall_IsBase(true);
        return vqsignalmapper->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQSignalMapper*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QSignalMapper_Tr(const char* s) {
    QString _ret = QSignalMapper::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QSignalMapper_SetMapping(QSignalMapper* self, QObject* sender, int id) {
    self->setMapping(sender, static_cast<int>(id));
}

void QSignalMapper_SetMapping2(QSignalMapper* self, QObject* sender, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->setMapping(sender, text_QString);
}

void QSignalMapper_SetMapping3(QSignalMapper* self, QObject* sender, QObject* object) {
    self->setMapping(sender, object);
}

void QSignalMapper_RemoveMappings(QSignalMapper* self, QObject* sender) {
    self->removeMappings(sender);
}

QObject* QSignalMapper_Mapping(const QSignalMapper* self, int id) {
    return self->mapping(static_cast<int>(id));
}

QObject* QSignalMapper_MappingWithText(const QSignalMapper* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return self->mapping(text_QString);
}

QObject* QSignalMapper_MappingWithObject(const QSignalMapper* self, QObject* object) {
    return self->mapping(object);
}

void QSignalMapper_MappedInt(QSignalMapper* self, int param1) {
    self->mappedInt(static_cast<int>(param1));
}

void QSignalMapper_Connect_MappedInt(QSignalMapper* self, intptr_t slot) {
    void (*slotFunc)(QSignalMapper*, int) = reinterpret_cast<void (*)(QSignalMapper*, int)>(slot);
    QSignalMapper::connect(self, &QSignalMapper::mappedInt, [self, slotFunc](int param1) {
        int sigval1 = param1;
        slotFunc(self, sigval1);
    });
}

void QSignalMapper_MappedString(QSignalMapper* self, const libqt_string param1) {
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    self->mappedString(param1_QString);
}

void QSignalMapper_Connect_MappedString(QSignalMapper* self, intptr_t slot) {
    void (*slotFunc)(QSignalMapper*, libqt_string) = reinterpret_cast<void (*)(QSignalMapper*, libqt_string)>(slot);
    QSignalMapper::connect(self, &QSignalMapper::mappedString, [self, slotFunc](const QString& param1) {
        const QString param1_ret = param1;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray param1_b = param1_ret.toUtf8();
        libqt_string param1_str;
        param1_str.len = param1_b.length();
        param1_str.data = static_cast<char*>(malloc((param1_str.len + 1) * sizeof(char)));
        memcpy(param1_str.data, param1_b.data(), param1_str.len);
        param1_str.data[param1_str.len] = '\0';
        libqt_string sigval1 = param1_str;
        slotFunc(self, sigval1);
    });
}

void QSignalMapper_MappedObject(QSignalMapper* self, QObject* param1) {
    self->mappedObject(param1);
}

void QSignalMapper_Connect_MappedObject(QSignalMapper* self, intptr_t slot) {
    void (*slotFunc)(QSignalMapper*, QObject*) = reinterpret_cast<void (*)(QSignalMapper*, QObject*)>(slot);
    QSignalMapper::connect(self, &QSignalMapper::mappedObject, [self, slotFunc](QObject* param1) {
        QObject* sigval1 = param1;
        slotFunc(self, sigval1);
    });
}

void QSignalMapper_Map(QSignalMapper* self) {
    self->map();
}

void QSignalMapper_MapWithSender(QSignalMapper* self, QObject* sender) {
    self->map(sender);
}

libqt_string QSignalMapper_Tr2(const char* s, const char* c) {
    QString _ret = QSignalMapper::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QSignalMapper_Tr3(const char* s, const char* c, int n) {
    QString _ret = QSignalMapper::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

// Derived class handler implementation
bool QSignalMapper_Event(QSignalMapper* self, QEvent* event) {
    auto* vqsignalmapper = dynamic_cast<VirtualQSignalMapper*>(self);
    if (vqsignalmapper && vqsignalmapper->isVirtualQSignalMapper) {
        return vqsignalmapper->event(event);
    } else {
        return self->QSignalMapper::event(event);
    }
}

// Base class handler implementation
bool QSignalMapper_QBaseEvent(QSignalMapper* self, QEvent* event) {
    auto* vqsignalmapper = dynamic_cast<VirtualQSignalMapper*>(self);
    if (vqsignalmapper && vqsignalmapper->isVirtualQSignalMapper) {
        vqsignalmapper->setQSignalMapper_Event_IsBase(true);
        return vqsignalmapper->event(event);
    } else {
        return self->QSignalMapper::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSignalMapper_OnEvent(QSignalMapper* self, intptr_t slot) {
    auto* vqsignalmapper = dynamic_cast<VirtualQSignalMapper*>(self);
    if (vqsignalmapper && vqsignalmapper->isVirtualQSignalMapper) {
        vqsignalmapper->setQSignalMapper_Event_Callback(reinterpret_cast<VirtualQSignalMapper::QSignalMapper_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSignalMapper_EventFilter(QSignalMapper* self, QObject* watched, QEvent* event) {
    auto* vqsignalmapper = dynamic_cast<VirtualQSignalMapper*>(self);
    if (vqsignalmapper && vqsignalmapper->isVirtualQSignalMapper) {
        return vqsignalmapper->eventFilter(watched, event);
    } else {
        return self->QSignalMapper::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QSignalMapper_QBaseEventFilter(QSignalMapper* self, QObject* watched, QEvent* event) {
    auto* vqsignalmapper = dynamic_cast<VirtualQSignalMapper*>(self);
    if (vqsignalmapper && vqsignalmapper->isVirtualQSignalMapper) {
        vqsignalmapper->setQSignalMapper_EventFilter_IsBase(true);
        return vqsignalmapper->eventFilter(watched, event);
    } else {
        return self->QSignalMapper::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSignalMapper_OnEventFilter(QSignalMapper* self, intptr_t slot) {
    auto* vqsignalmapper = dynamic_cast<VirtualQSignalMapper*>(self);
    if (vqsignalmapper && vqsignalmapper->isVirtualQSignalMapper) {
        vqsignalmapper->setQSignalMapper_EventFilter_Callback(reinterpret_cast<VirtualQSignalMapper::QSignalMapper_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QSignalMapper_TimerEvent(QSignalMapper* self, QTimerEvent* event) {
    auto* vqsignalmapper = dynamic_cast<VirtualQSignalMapper*>(self);
    if (vqsignalmapper && vqsignalmapper->isVirtualQSignalMapper) {
        vqsignalmapper->timerEvent(event);
    } else {
        ((VirtualQSignalMapper*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QSignalMapper_QBaseTimerEvent(QSignalMapper* self, QTimerEvent* event) {
    auto* vqsignalmapper = dynamic_cast<VirtualQSignalMapper*>(self);
    if (vqsignalmapper && vqsignalmapper->isVirtualQSignalMapper) {
        vqsignalmapper->setQSignalMapper_TimerEvent_IsBase(true);
        vqsignalmapper->timerEvent(event);
    } else {
        ((VirtualQSignalMapper*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSignalMapper_OnTimerEvent(QSignalMapper* self, intptr_t slot) {
    auto* vqsignalmapper = dynamic_cast<VirtualQSignalMapper*>(self);
    if (vqsignalmapper && vqsignalmapper->isVirtualQSignalMapper) {
        vqsignalmapper->setQSignalMapper_TimerEvent_Callback(reinterpret_cast<VirtualQSignalMapper::QSignalMapper_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSignalMapper_ChildEvent(QSignalMapper* self, QChildEvent* event) {
    auto* vqsignalmapper = dynamic_cast<VirtualQSignalMapper*>(self);
    if (vqsignalmapper && vqsignalmapper->isVirtualQSignalMapper) {
        vqsignalmapper->childEvent(event);
    } else {
        ((VirtualQSignalMapper*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QSignalMapper_QBaseChildEvent(QSignalMapper* self, QChildEvent* event) {
    auto* vqsignalmapper = dynamic_cast<VirtualQSignalMapper*>(self);
    if (vqsignalmapper && vqsignalmapper->isVirtualQSignalMapper) {
        vqsignalmapper->setQSignalMapper_ChildEvent_IsBase(true);
        vqsignalmapper->childEvent(event);
    } else {
        ((VirtualQSignalMapper*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSignalMapper_OnChildEvent(QSignalMapper* self, intptr_t slot) {
    auto* vqsignalmapper = dynamic_cast<VirtualQSignalMapper*>(self);
    if (vqsignalmapper && vqsignalmapper->isVirtualQSignalMapper) {
        vqsignalmapper->setQSignalMapper_ChildEvent_Callback(reinterpret_cast<VirtualQSignalMapper::QSignalMapper_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSignalMapper_CustomEvent(QSignalMapper* self, QEvent* event) {
    auto* vqsignalmapper = dynamic_cast<VirtualQSignalMapper*>(self);
    if (vqsignalmapper && vqsignalmapper->isVirtualQSignalMapper) {
        vqsignalmapper->customEvent(event);
    } else {
        ((VirtualQSignalMapper*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QSignalMapper_QBaseCustomEvent(QSignalMapper* self, QEvent* event) {
    auto* vqsignalmapper = dynamic_cast<VirtualQSignalMapper*>(self);
    if (vqsignalmapper && vqsignalmapper->isVirtualQSignalMapper) {
        vqsignalmapper->setQSignalMapper_CustomEvent_IsBase(true);
        vqsignalmapper->customEvent(event);
    } else {
        ((VirtualQSignalMapper*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSignalMapper_OnCustomEvent(QSignalMapper* self, intptr_t slot) {
    auto* vqsignalmapper = dynamic_cast<VirtualQSignalMapper*>(self);
    if (vqsignalmapper && vqsignalmapper->isVirtualQSignalMapper) {
        vqsignalmapper->setQSignalMapper_CustomEvent_Callback(reinterpret_cast<VirtualQSignalMapper::QSignalMapper_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSignalMapper_ConnectNotify(QSignalMapper* self, const QMetaMethod* signal) {
    auto* vqsignalmapper = dynamic_cast<VirtualQSignalMapper*>(self);
    if (vqsignalmapper && vqsignalmapper->isVirtualQSignalMapper) {
        vqsignalmapper->connectNotify(*signal);
    } else {
        ((VirtualQSignalMapper*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QSignalMapper_QBaseConnectNotify(QSignalMapper* self, const QMetaMethod* signal) {
    auto* vqsignalmapper = dynamic_cast<VirtualQSignalMapper*>(self);
    if (vqsignalmapper && vqsignalmapper->isVirtualQSignalMapper) {
        vqsignalmapper->setQSignalMapper_ConnectNotify_IsBase(true);
        vqsignalmapper->connectNotify(*signal);
    } else {
        ((VirtualQSignalMapper*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QSignalMapper_OnConnectNotify(QSignalMapper* self, intptr_t slot) {
    auto* vqsignalmapper = dynamic_cast<VirtualQSignalMapper*>(self);
    if (vqsignalmapper && vqsignalmapper->isVirtualQSignalMapper) {
        vqsignalmapper->setQSignalMapper_ConnectNotify_Callback(reinterpret_cast<VirtualQSignalMapper::QSignalMapper_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QSignalMapper_DisconnectNotify(QSignalMapper* self, const QMetaMethod* signal) {
    auto* vqsignalmapper = dynamic_cast<VirtualQSignalMapper*>(self);
    if (vqsignalmapper && vqsignalmapper->isVirtualQSignalMapper) {
        vqsignalmapper->disconnectNotify(*signal);
    } else {
        ((VirtualQSignalMapper*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QSignalMapper_QBaseDisconnectNotify(QSignalMapper* self, const QMetaMethod* signal) {
    auto* vqsignalmapper = dynamic_cast<VirtualQSignalMapper*>(self);
    if (vqsignalmapper && vqsignalmapper->isVirtualQSignalMapper) {
        vqsignalmapper->setQSignalMapper_DisconnectNotify_IsBase(true);
        vqsignalmapper->disconnectNotify(*signal);
    } else {
        ((VirtualQSignalMapper*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QSignalMapper_OnDisconnectNotify(QSignalMapper* self, intptr_t slot) {
    auto* vqsignalmapper = dynamic_cast<VirtualQSignalMapper*>(self);
    if (vqsignalmapper && vqsignalmapper->isVirtualQSignalMapper) {
        vqsignalmapper->setQSignalMapper_DisconnectNotify_Callback(reinterpret_cast<VirtualQSignalMapper::QSignalMapper_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QSignalMapper_Sender(const QSignalMapper* self) {
    auto* vqsignalmapper = const_cast<VirtualQSignalMapper*>(dynamic_cast<const VirtualQSignalMapper*>(self));
    if (vqsignalmapper && vqsignalmapper->isVirtualQSignalMapper) {
        return vqsignalmapper->sender();
    } else {
        return ((VirtualQSignalMapper*)self)->sender();
    }
}

// Base class handler implementation
QObject* QSignalMapper_QBaseSender(const QSignalMapper* self) {
    auto* vqsignalmapper = const_cast<VirtualQSignalMapper*>(dynamic_cast<const VirtualQSignalMapper*>(self));
    if (vqsignalmapper && vqsignalmapper->isVirtualQSignalMapper) {
        vqsignalmapper->setQSignalMapper_Sender_IsBase(true);
        return vqsignalmapper->sender();
    } else {
        return ((VirtualQSignalMapper*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QSignalMapper_OnSender(const QSignalMapper* self, intptr_t slot) {
    auto* vqsignalmapper = const_cast<VirtualQSignalMapper*>(dynamic_cast<const VirtualQSignalMapper*>(self));
    if (vqsignalmapper && vqsignalmapper->isVirtualQSignalMapper) {
        vqsignalmapper->setQSignalMapper_Sender_Callback(reinterpret_cast<VirtualQSignalMapper::QSignalMapper_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QSignalMapper_SenderSignalIndex(const QSignalMapper* self) {
    auto* vqsignalmapper = const_cast<VirtualQSignalMapper*>(dynamic_cast<const VirtualQSignalMapper*>(self));
    if (vqsignalmapper && vqsignalmapper->isVirtualQSignalMapper) {
        return vqsignalmapper->senderSignalIndex();
    } else {
        return ((VirtualQSignalMapper*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QSignalMapper_QBaseSenderSignalIndex(const QSignalMapper* self) {
    auto* vqsignalmapper = const_cast<VirtualQSignalMapper*>(dynamic_cast<const VirtualQSignalMapper*>(self));
    if (vqsignalmapper && vqsignalmapper->isVirtualQSignalMapper) {
        vqsignalmapper->setQSignalMapper_SenderSignalIndex_IsBase(true);
        return vqsignalmapper->senderSignalIndex();
    } else {
        return ((VirtualQSignalMapper*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QSignalMapper_OnSenderSignalIndex(const QSignalMapper* self, intptr_t slot) {
    auto* vqsignalmapper = const_cast<VirtualQSignalMapper*>(dynamic_cast<const VirtualQSignalMapper*>(self));
    if (vqsignalmapper && vqsignalmapper->isVirtualQSignalMapper) {
        vqsignalmapper->setQSignalMapper_SenderSignalIndex_Callback(reinterpret_cast<VirtualQSignalMapper::QSignalMapper_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QSignalMapper_Receivers(const QSignalMapper* self, const char* signal) {
    auto* vqsignalmapper = const_cast<VirtualQSignalMapper*>(dynamic_cast<const VirtualQSignalMapper*>(self));
    if (vqsignalmapper && vqsignalmapper->isVirtualQSignalMapper) {
        return vqsignalmapper->receivers(signal);
    } else {
        return ((VirtualQSignalMapper*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QSignalMapper_QBaseReceivers(const QSignalMapper* self, const char* signal) {
    auto* vqsignalmapper = const_cast<VirtualQSignalMapper*>(dynamic_cast<const VirtualQSignalMapper*>(self));
    if (vqsignalmapper && vqsignalmapper->isVirtualQSignalMapper) {
        vqsignalmapper->setQSignalMapper_Receivers_IsBase(true);
        return vqsignalmapper->receivers(signal);
    } else {
        return ((VirtualQSignalMapper*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QSignalMapper_OnReceivers(const QSignalMapper* self, intptr_t slot) {
    auto* vqsignalmapper = const_cast<VirtualQSignalMapper*>(dynamic_cast<const VirtualQSignalMapper*>(self));
    if (vqsignalmapper && vqsignalmapper->isVirtualQSignalMapper) {
        vqsignalmapper->setQSignalMapper_Receivers_Callback(reinterpret_cast<VirtualQSignalMapper::QSignalMapper_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSignalMapper_IsSignalConnected(const QSignalMapper* self, const QMetaMethod* signal) {
    auto* vqsignalmapper = const_cast<VirtualQSignalMapper*>(dynamic_cast<const VirtualQSignalMapper*>(self));
    if (vqsignalmapper && vqsignalmapper->isVirtualQSignalMapper) {
        return vqsignalmapper->isSignalConnected(*signal);
    } else {
        return ((VirtualQSignalMapper*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QSignalMapper_QBaseIsSignalConnected(const QSignalMapper* self, const QMetaMethod* signal) {
    auto* vqsignalmapper = const_cast<VirtualQSignalMapper*>(dynamic_cast<const VirtualQSignalMapper*>(self));
    if (vqsignalmapper && vqsignalmapper->isVirtualQSignalMapper) {
        vqsignalmapper->setQSignalMapper_IsSignalConnected_IsBase(true);
        return vqsignalmapper->isSignalConnected(*signal);
    } else {
        return ((VirtualQSignalMapper*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QSignalMapper_OnIsSignalConnected(const QSignalMapper* self, intptr_t slot) {
    auto* vqsignalmapper = const_cast<VirtualQSignalMapper*>(dynamic_cast<const VirtualQSignalMapper*>(self));
    if (vqsignalmapper && vqsignalmapper->isVirtualQSignalMapper) {
        vqsignalmapper->setQSignalMapper_IsSignalConnected_Callback(reinterpret_cast<VirtualQSignalMapper::QSignalMapper_IsSignalConnected_Callback>(slot));
    }
}

void QSignalMapper_Delete(QSignalMapper* self) {
    delete self;
}
