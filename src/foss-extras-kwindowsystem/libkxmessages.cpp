#include <KXMessages>
#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <kxmessages.h>
#include "libkxmessages.h"
#include "libkxmessages.hxx"

KXMessages* KXMessages_new() {
    return new VirtualKXMessages();
}

KXMessages* KXMessages_new2(const char* accept_broadcast) {
    return new VirtualKXMessages(accept_broadcast);
}

KXMessages* KXMessages_new3(const char* accept_broadcast, QObject* parent) {
    return new VirtualKXMessages(accept_broadcast, parent);
}

QMetaObject* KXMessages_MetaObject(const KXMessages* self) {
    return (QMetaObject*)self->metaObject();
}

void* KXMessages_Metacast(KXMessages* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KXMessages_Metacall(KXMessages* self, int param1, int param2, void** param3) {
    auto* vkxmessages = dynamic_cast<VirtualKXMessages*>(self);
    if (vkxmessages && vkxmessages->isVirtualKXMessages) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKXMessages*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KXMessages_Tr(const char* s) {
    QString _ret = KXMessages::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KXMessages_BroadcastMessage(KXMessages* self, const char* msg_type, const libqt_string message) {
    QString message_QString = QString::fromUtf8(message.data, message.len);
    self->broadcastMessage(msg_type, message_QString);
}

void KXMessages_GotMessage(KXMessages* self, const libqt_string message) {
    QString message_QString = QString::fromUtf8(message.data, message.len);
    self->gotMessage(message_QString);
}

void KXMessages_Connect_GotMessage(KXMessages* self, intptr_t slot) {
    void (*slotFunc)(KXMessages*, const char*) = reinterpret_cast<void (*)(KXMessages*, const char*)>(slot);
    KXMessages::connect(self, &KXMessages::gotMessage, [self, slotFunc](const QString& message) {
        const QString message_ret = message;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray message_b = message_ret.toUtf8();
        const char* message_str = static_cast<const char*>(malloc(message_b.length() + 1));
        memcpy((void*)message_str, message_b.data(), message_b.length());
        ((char*)message_str)[message_b.length()] = '\0';
        const char* sigval1 = message_str;
        slotFunc(self, sigval1);
        libqt_free(message_str);
    });
}

libqt_string KXMessages_Tr2(const char* s, const char* c) {
    QString _ret = KXMessages::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KXMessages_Tr3(const char* s, const char* c, int n) {
    QString _ret = KXMessages::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KXMessages_BroadcastMessage3(KXMessages* self, const char* msg_type, const libqt_string message, int screen) {
    QString message_QString = QString::fromUtf8(message.data, message.len);
    self->broadcastMessage(msg_type, message_QString, static_cast<int>(screen));
}

// Base class handler implementation
int KXMessages_QBaseMetacall(KXMessages* self, int param1, int param2, void** param3) {
    auto* vkxmessages = dynamic_cast<VirtualKXMessages*>(self);
    if (vkxmessages && vkxmessages->isVirtualKXMessages) {
        vkxmessages->setKXMessages_Metacall_IsBase(true);
        return vkxmessages->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KXMessages::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KXMessages_OnMetacall(KXMessages* self, intptr_t slot) {
    auto* vkxmessages = dynamic_cast<VirtualKXMessages*>(self);
    if (vkxmessages && vkxmessages->isVirtualKXMessages) {
        vkxmessages->setKXMessages_Metacall_Callback(reinterpret_cast<VirtualKXMessages::KXMessages_Metacall_Callback>(slot));
    }
}

// Derived class handler implementation
bool KXMessages_Event(KXMessages* self, QEvent* event) {
    auto* vkxmessages = dynamic_cast<VirtualKXMessages*>(self);
    if (vkxmessages && vkxmessages->isVirtualKXMessages) {
        return vkxmessages->event(event);
    } else {
        return self->KXMessages::event(event);
    }
}

// Base class handler implementation
bool KXMessages_QBaseEvent(KXMessages* self, QEvent* event) {
    auto* vkxmessages = dynamic_cast<VirtualKXMessages*>(self);
    if (vkxmessages && vkxmessages->isVirtualKXMessages) {
        vkxmessages->setKXMessages_Event_IsBase(true);
        return vkxmessages->event(event);
    } else {
        return self->KXMessages::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KXMessages_OnEvent(KXMessages* self, intptr_t slot) {
    auto* vkxmessages = dynamic_cast<VirtualKXMessages*>(self);
    if (vkxmessages && vkxmessages->isVirtualKXMessages) {
        vkxmessages->setKXMessages_Event_Callback(reinterpret_cast<VirtualKXMessages::KXMessages_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool KXMessages_EventFilter(KXMessages* self, QObject* watched, QEvent* event) {
    auto* vkxmessages = dynamic_cast<VirtualKXMessages*>(self);
    if (vkxmessages && vkxmessages->isVirtualKXMessages) {
        return vkxmessages->eventFilter(watched, event);
    } else {
        return self->KXMessages::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool KXMessages_QBaseEventFilter(KXMessages* self, QObject* watched, QEvent* event) {
    auto* vkxmessages = dynamic_cast<VirtualKXMessages*>(self);
    if (vkxmessages && vkxmessages->isVirtualKXMessages) {
        vkxmessages->setKXMessages_EventFilter_IsBase(true);
        return vkxmessages->eventFilter(watched, event);
    } else {
        return self->KXMessages::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KXMessages_OnEventFilter(KXMessages* self, intptr_t slot) {
    auto* vkxmessages = dynamic_cast<VirtualKXMessages*>(self);
    if (vkxmessages && vkxmessages->isVirtualKXMessages) {
        vkxmessages->setKXMessages_EventFilter_Callback(reinterpret_cast<VirtualKXMessages::KXMessages_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void KXMessages_TimerEvent(KXMessages* self, QTimerEvent* event) {
    auto* vkxmessages = dynamic_cast<VirtualKXMessages*>(self);
    if (vkxmessages && vkxmessages->isVirtualKXMessages) {
        vkxmessages->timerEvent(event);
    } else {
        ((VirtualKXMessages*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KXMessages_QBaseTimerEvent(KXMessages* self, QTimerEvent* event) {
    auto* vkxmessages = dynamic_cast<VirtualKXMessages*>(self);
    if (vkxmessages && vkxmessages->isVirtualKXMessages) {
        vkxmessages->setKXMessages_TimerEvent_IsBase(true);
        vkxmessages->timerEvent(event);
    } else {
        ((VirtualKXMessages*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KXMessages_OnTimerEvent(KXMessages* self, intptr_t slot) {
    auto* vkxmessages = dynamic_cast<VirtualKXMessages*>(self);
    if (vkxmessages && vkxmessages->isVirtualKXMessages) {
        vkxmessages->setKXMessages_TimerEvent_Callback(reinterpret_cast<VirtualKXMessages::KXMessages_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KXMessages_ChildEvent(KXMessages* self, QChildEvent* event) {
    auto* vkxmessages = dynamic_cast<VirtualKXMessages*>(self);
    if (vkxmessages && vkxmessages->isVirtualKXMessages) {
        vkxmessages->childEvent(event);
    } else {
        ((VirtualKXMessages*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KXMessages_QBaseChildEvent(KXMessages* self, QChildEvent* event) {
    auto* vkxmessages = dynamic_cast<VirtualKXMessages*>(self);
    if (vkxmessages && vkxmessages->isVirtualKXMessages) {
        vkxmessages->setKXMessages_ChildEvent_IsBase(true);
        vkxmessages->childEvent(event);
    } else {
        ((VirtualKXMessages*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KXMessages_OnChildEvent(KXMessages* self, intptr_t slot) {
    auto* vkxmessages = dynamic_cast<VirtualKXMessages*>(self);
    if (vkxmessages && vkxmessages->isVirtualKXMessages) {
        vkxmessages->setKXMessages_ChildEvent_Callback(reinterpret_cast<VirtualKXMessages::KXMessages_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KXMessages_CustomEvent(KXMessages* self, QEvent* event) {
    auto* vkxmessages = dynamic_cast<VirtualKXMessages*>(self);
    if (vkxmessages && vkxmessages->isVirtualKXMessages) {
        vkxmessages->customEvent(event);
    } else {
        ((VirtualKXMessages*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KXMessages_QBaseCustomEvent(KXMessages* self, QEvent* event) {
    auto* vkxmessages = dynamic_cast<VirtualKXMessages*>(self);
    if (vkxmessages && vkxmessages->isVirtualKXMessages) {
        vkxmessages->setKXMessages_CustomEvent_IsBase(true);
        vkxmessages->customEvent(event);
    } else {
        ((VirtualKXMessages*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KXMessages_OnCustomEvent(KXMessages* self, intptr_t slot) {
    auto* vkxmessages = dynamic_cast<VirtualKXMessages*>(self);
    if (vkxmessages && vkxmessages->isVirtualKXMessages) {
        vkxmessages->setKXMessages_CustomEvent_Callback(reinterpret_cast<VirtualKXMessages::KXMessages_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KXMessages_ConnectNotify(KXMessages* self, const QMetaMethod* signal) {
    auto* vkxmessages = dynamic_cast<VirtualKXMessages*>(self);
    if (vkxmessages && vkxmessages->isVirtualKXMessages) {
        vkxmessages->connectNotify(*signal);
    } else {
        ((VirtualKXMessages*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KXMessages_QBaseConnectNotify(KXMessages* self, const QMetaMethod* signal) {
    auto* vkxmessages = dynamic_cast<VirtualKXMessages*>(self);
    if (vkxmessages && vkxmessages->isVirtualKXMessages) {
        vkxmessages->setKXMessages_ConnectNotify_IsBase(true);
        vkxmessages->connectNotify(*signal);
    } else {
        ((VirtualKXMessages*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KXMessages_OnConnectNotify(KXMessages* self, intptr_t slot) {
    auto* vkxmessages = dynamic_cast<VirtualKXMessages*>(self);
    if (vkxmessages && vkxmessages->isVirtualKXMessages) {
        vkxmessages->setKXMessages_ConnectNotify_Callback(reinterpret_cast<VirtualKXMessages::KXMessages_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KXMessages_DisconnectNotify(KXMessages* self, const QMetaMethod* signal) {
    auto* vkxmessages = dynamic_cast<VirtualKXMessages*>(self);
    if (vkxmessages && vkxmessages->isVirtualKXMessages) {
        vkxmessages->disconnectNotify(*signal);
    } else {
        ((VirtualKXMessages*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KXMessages_QBaseDisconnectNotify(KXMessages* self, const QMetaMethod* signal) {
    auto* vkxmessages = dynamic_cast<VirtualKXMessages*>(self);
    if (vkxmessages && vkxmessages->isVirtualKXMessages) {
        vkxmessages->setKXMessages_DisconnectNotify_IsBase(true);
        vkxmessages->disconnectNotify(*signal);
    } else {
        ((VirtualKXMessages*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KXMessages_OnDisconnectNotify(KXMessages* self, intptr_t slot) {
    auto* vkxmessages = dynamic_cast<VirtualKXMessages*>(self);
    if (vkxmessages && vkxmessages->isVirtualKXMessages) {
        vkxmessages->setKXMessages_DisconnectNotify_Callback(reinterpret_cast<VirtualKXMessages::KXMessages_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KXMessages_Sender(const KXMessages* self) {
    auto* vkxmessages = const_cast<VirtualKXMessages*>(dynamic_cast<const VirtualKXMessages*>(self));
    if (vkxmessages && vkxmessages->isVirtualKXMessages) {
        return vkxmessages->sender();
    } else {
        return ((VirtualKXMessages*)self)->sender();
    }
}

// Base class handler implementation
QObject* KXMessages_QBaseSender(const KXMessages* self) {
    auto* vkxmessages = const_cast<VirtualKXMessages*>(dynamic_cast<const VirtualKXMessages*>(self));
    if (vkxmessages && vkxmessages->isVirtualKXMessages) {
        vkxmessages->setKXMessages_Sender_IsBase(true);
        return vkxmessages->sender();
    } else {
        return ((VirtualKXMessages*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KXMessages_OnSender(const KXMessages* self, intptr_t slot) {
    auto* vkxmessages = const_cast<VirtualKXMessages*>(dynamic_cast<const VirtualKXMessages*>(self));
    if (vkxmessages && vkxmessages->isVirtualKXMessages) {
        vkxmessages->setKXMessages_Sender_Callback(reinterpret_cast<VirtualKXMessages::KXMessages_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KXMessages_SenderSignalIndex(const KXMessages* self) {
    auto* vkxmessages = const_cast<VirtualKXMessages*>(dynamic_cast<const VirtualKXMessages*>(self));
    if (vkxmessages && vkxmessages->isVirtualKXMessages) {
        return vkxmessages->senderSignalIndex();
    } else {
        return ((VirtualKXMessages*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KXMessages_QBaseSenderSignalIndex(const KXMessages* self) {
    auto* vkxmessages = const_cast<VirtualKXMessages*>(dynamic_cast<const VirtualKXMessages*>(self));
    if (vkxmessages && vkxmessages->isVirtualKXMessages) {
        vkxmessages->setKXMessages_SenderSignalIndex_IsBase(true);
        return vkxmessages->senderSignalIndex();
    } else {
        return ((VirtualKXMessages*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KXMessages_OnSenderSignalIndex(const KXMessages* self, intptr_t slot) {
    auto* vkxmessages = const_cast<VirtualKXMessages*>(dynamic_cast<const VirtualKXMessages*>(self));
    if (vkxmessages && vkxmessages->isVirtualKXMessages) {
        vkxmessages->setKXMessages_SenderSignalIndex_Callback(reinterpret_cast<VirtualKXMessages::KXMessages_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KXMessages_Receivers(const KXMessages* self, const char* signal) {
    auto* vkxmessages = const_cast<VirtualKXMessages*>(dynamic_cast<const VirtualKXMessages*>(self));
    if (vkxmessages && vkxmessages->isVirtualKXMessages) {
        return vkxmessages->receivers(signal);
    } else {
        return ((VirtualKXMessages*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KXMessages_QBaseReceivers(const KXMessages* self, const char* signal) {
    auto* vkxmessages = const_cast<VirtualKXMessages*>(dynamic_cast<const VirtualKXMessages*>(self));
    if (vkxmessages && vkxmessages->isVirtualKXMessages) {
        vkxmessages->setKXMessages_Receivers_IsBase(true);
        return vkxmessages->receivers(signal);
    } else {
        return ((VirtualKXMessages*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KXMessages_OnReceivers(const KXMessages* self, intptr_t slot) {
    auto* vkxmessages = const_cast<VirtualKXMessages*>(dynamic_cast<const VirtualKXMessages*>(self));
    if (vkxmessages && vkxmessages->isVirtualKXMessages) {
        vkxmessages->setKXMessages_Receivers_Callback(reinterpret_cast<VirtualKXMessages::KXMessages_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KXMessages_IsSignalConnected(const KXMessages* self, const QMetaMethod* signal) {
    auto* vkxmessages = const_cast<VirtualKXMessages*>(dynamic_cast<const VirtualKXMessages*>(self));
    if (vkxmessages && vkxmessages->isVirtualKXMessages) {
        return vkxmessages->isSignalConnected(*signal);
    } else {
        return ((VirtualKXMessages*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KXMessages_QBaseIsSignalConnected(const KXMessages* self, const QMetaMethod* signal) {
    auto* vkxmessages = const_cast<VirtualKXMessages*>(dynamic_cast<const VirtualKXMessages*>(self));
    if (vkxmessages && vkxmessages->isVirtualKXMessages) {
        vkxmessages->setKXMessages_IsSignalConnected_IsBase(true);
        return vkxmessages->isSignalConnected(*signal);
    } else {
        return ((VirtualKXMessages*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KXMessages_OnIsSignalConnected(const KXMessages* self, intptr_t slot) {
    auto* vkxmessages = const_cast<VirtualKXMessages*>(dynamic_cast<const VirtualKXMessages*>(self));
    if (vkxmessages && vkxmessages->isVirtualKXMessages) {
        vkxmessages->setKXMessages_IsSignalConnected_Callback(reinterpret_cast<VirtualKXMessages::KXMessages_IsSignalConnected_Callback>(slot));
    }
}

void KXMessages_Delete(KXMessages* self) {
    delete self;
}
