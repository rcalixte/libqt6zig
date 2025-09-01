#include <KEmailValidator>
#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QValidator>
#include <kemailvalidator.h>
#include "libkemailvalidator.h"
#include "libkemailvalidator.hxx"

KEmailValidator* KEmailValidator_new() {
    return new VirtualKEmailValidator();
}

KEmailValidator* KEmailValidator_new2(QObject* parent) {
    return new VirtualKEmailValidator(parent);
}

QMetaObject* KEmailValidator_MetaObject(const KEmailValidator* self) {
    return (QMetaObject*)self->metaObject();
}

void* KEmailValidator_Metacast(KEmailValidator* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KEmailValidator_Metacall(KEmailValidator* self, int param1, int param2, void** param3) {
    auto* vkemailvalidator = dynamic_cast<VirtualKEmailValidator*>(self);
    if (vkemailvalidator && vkemailvalidator->isVirtualKEmailValidator) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKEmailValidator*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KEmailValidator_Tr(const char* s) {
    QString _ret = KEmailValidator::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int KEmailValidator_Validate(const KEmailValidator* self, libqt_string str, int* pos) {
    QString str_QString = QString::fromUtf8(str.data, str.len);
    auto* vkemailvalidator = dynamic_cast<const VirtualKEmailValidator*>(self);
    if (vkemailvalidator && vkemailvalidator->isVirtualKEmailValidator) {
        return static_cast<int>(self->validate(str_QString, static_cast<int&>(*pos)));
    } else {
        return static_cast<int>(((VirtualKEmailValidator*)self)->validate(str_QString, static_cast<int&>(*pos)));
    }
}

void KEmailValidator_Fixup(const KEmailValidator* self, libqt_string str) {
    QString str_QString = QString::fromUtf8(str.data, str.len);
    auto* vkemailvalidator = dynamic_cast<const VirtualKEmailValidator*>(self);
    if (vkemailvalidator && vkemailvalidator->isVirtualKEmailValidator) {
        self->fixup(str_QString);
    } else {
        ((VirtualKEmailValidator*)self)->fixup(str_QString);
    }
}

libqt_string KEmailValidator_Tr2(const char* s, const char* c) {
    QString _ret = KEmailValidator::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KEmailValidator_Tr3(const char* s, const char* c, int n) {
    QString _ret = KEmailValidator::tr(s, c, static_cast<int>(n));
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
int KEmailValidator_QBaseMetacall(KEmailValidator* self, int param1, int param2, void** param3) {
    auto* vkemailvalidator = dynamic_cast<VirtualKEmailValidator*>(self);
    if (vkemailvalidator && vkemailvalidator->isVirtualKEmailValidator) {
        vkemailvalidator->setKEmailValidator_Metacall_IsBase(true);
        return vkemailvalidator->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KEmailValidator::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KEmailValidator_OnMetacall(KEmailValidator* self, intptr_t slot) {
    auto* vkemailvalidator = dynamic_cast<VirtualKEmailValidator*>(self);
    if (vkemailvalidator && vkemailvalidator->isVirtualKEmailValidator) {
        vkemailvalidator->setKEmailValidator_Metacall_Callback(reinterpret_cast<VirtualKEmailValidator::KEmailValidator_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
int KEmailValidator_QBaseValidate(const KEmailValidator* self, libqt_string str, int* pos) {
    auto* vkemailvalidator = const_cast<VirtualKEmailValidator*>(dynamic_cast<const VirtualKEmailValidator*>(self));
    QString str_QString = QString::fromUtf8(str.data, str.len);
    if (vkemailvalidator && vkemailvalidator->isVirtualKEmailValidator) {
        vkemailvalidator->setKEmailValidator_Validate_IsBase(true);
        return static_cast<int>(vkemailvalidator->validate(str_QString, static_cast<int&>(*pos)));
    } else {
        return static_cast<int>(self->KEmailValidator::validate(str_QString, static_cast<int&>(*pos)));
    }
}

// Auxiliary method to allow providing re-implementation
void KEmailValidator_OnValidate(const KEmailValidator* self, intptr_t slot) {
    auto* vkemailvalidator = const_cast<VirtualKEmailValidator*>(dynamic_cast<const VirtualKEmailValidator*>(self));
    if (vkemailvalidator && vkemailvalidator->isVirtualKEmailValidator) {
        vkemailvalidator->setKEmailValidator_Validate_Callback(reinterpret_cast<VirtualKEmailValidator::KEmailValidator_Validate_Callback>(slot));
    }
}

// Base class handler implementation
void KEmailValidator_QBaseFixup(const KEmailValidator* self, libqt_string str) {
    auto* vkemailvalidator = const_cast<VirtualKEmailValidator*>(dynamic_cast<const VirtualKEmailValidator*>(self));
    QString str_QString = QString::fromUtf8(str.data, str.len);
    if (vkemailvalidator && vkemailvalidator->isVirtualKEmailValidator) {
        vkemailvalidator->setKEmailValidator_Fixup_IsBase(true);
        vkemailvalidator->fixup(str_QString);
    } else {
        self->KEmailValidator::fixup(str_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void KEmailValidator_OnFixup(const KEmailValidator* self, intptr_t slot) {
    auto* vkemailvalidator = const_cast<VirtualKEmailValidator*>(dynamic_cast<const VirtualKEmailValidator*>(self));
    if (vkemailvalidator && vkemailvalidator->isVirtualKEmailValidator) {
        vkemailvalidator->setKEmailValidator_Fixup_Callback(reinterpret_cast<VirtualKEmailValidator::KEmailValidator_Fixup_Callback>(slot));
    }
}

// Derived class handler implementation
bool KEmailValidator_Event(KEmailValidator* self, QEvent* event) {
    auto* vkemailvalidator = dynamic_cast<VirtualKEmailValidator*>(self);
    if (vkemailvalidator && vkemailvalidator->isVirtualKEmailValidator) {
        return vkemailvalidator->event(event);
    } else {
        return self->KEmailValidator::event(event);
    }
}

// Base class handler implementation
bool KEmailValidator_QBaseEvent(KEmailValidator* self, QEvent* event) {
    auto* vkemailvalidator = dynamic_cast<VirtualKEmailValidator*>(self);
    if (vkemailvalidator && vkemailvalidator->isVirtualKEmailValidator) {
        vkemailvalidator->setKEmailValidator_Event_IsBase(true);
        return vkemailvalidator->event(event);
    } else {
        return self->KEmailValidator::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KEmailValidator_OnEvent(KEmailValidator* self, intptr_t slot) {
    auto* vkemailvalidator = dynamic_cast<VirtualKEmailValidator*>(self);
    if (vkemailvalidator && vkemailvalidator->isVirtualKEmailValidator) {
        vkemailvalidator->setKEmailValidator_Event_Callback(reinterpret_cast<VirtualKEmailValidator::KEmailValidator_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool KEmailValidator_EventFilter(KEmailValidator* self, QObject* watched, QEvent* event) {
    auto* vkemailvalidator = dynamic_cast<VirtualKEmailValidator*>(self);
    if (vkemailvalidator && vkemailvalidator->isVirtualKEmailValidator) {
        return vkemailvalidator->eventFilter(watched, event);
    } else {
        return self->KEmailValidator::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool KEmailValidator_QBaseEventFilter(KEmailValidator* self, QObject* watched, QEvent* event) {
    auto* vkemailvalidator = dynamic_cast<VirtualKEmailValidator*>(self);
    if (vkemailvalidator && vkemailvalidator->isVirtualKEmailValidator) {
        vkemailvalidator->setKEmailValidator_EventFilter_IsBase(true);
        return vkemailvalidator->eventFilter(watched, event);
    } else {
        return self->KEmailValidator::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KEmailValidator_OnEventFilter(KEmailValidator* self, intptr_t slot) {
    auto* vkemailvalidator = dynamic_cast<VirtualKEmailValidator*>(self);
    if (vkemailvalidator && vkemailvalidator->isVirtualKEmailValidator) {
        vkemailvalidator->setKEmailValidator_EventFilter_Callback(reinterpret_cast<VirtualKEmailValidator::KEmailValidator_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void KEmailValidator_TimerEvent(KEmailValidator* self, QTimerEvent* event) {
    auto* vkemailvalidator = dynamic_cast<VirtualKEmailValidator*>(self);
    if (vkemailvalidator && vkemailvalidator->isVirtualKEmailValidator) {
        vkemailvalidator->timerEvent(event);
    } else {
        ((VirtualKEmailValidator*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KEmailValidator_QBaseTimerEvent(KEmailValidator* self, QTimerEvent* event) {
    auto* vkemailvalidator = dynamic_cast<VirtualKEmailValidator*>(self);
    if (vkemailvalidator && vkemailvalidator->isVirtualKEmailValidator) {
        vkemailvalidator->setKEmailValidator_TimerEvent_IsBase(true);
        vkemailvalidator->timerEvent(event);
    } else {
        ((VirtualKEmailValidator*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KEmailValidator_OnTimerEvent(KEmailValidator* self, intptr_t slot) {
    auto* vkemailvalidator = dynamic_cast<VirtualKEmailValidator*>(self);
    if (vkemailvalidator && vkemailvalidator->isVirtualKEmailValidator) {
        vkemailvalidator->setKEmailValidator_TimerEvent_Callback(reinterpret_cast<VirtualKEmailValidator::KEmailValidator_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KEmailValidator_ChildEvent(KEmailValidator* self, QChildEvent* event) {
    auto* vkemailvalidator = dynamic_cast<VirtualKEmailValidator*>(self);
    if (vkemailvalidator && vkemailvalidator->isVirtualKEmailValidator) {
        vkemailvalidator->childEvent(event);
    } else {
        ((VirtualKEmailValidator*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KEmailValidator_QBaseChildEvent(KEmailValidator* self, QChildEvent* event) {
    auto* vkemailvalidator = dynamic_cast<VirtualKEmailValidator*>(self);
    if (vkemailvalidator && vkemailvalidator->isVirtualKEmailValidator) {
        vkemailvalidator->setKEmailValidator_ChildEvent_IsBase(true);
        vkemailvalidator->childEvent(event);
    } else {
        ((VirtualKEmailValidator*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KEmailValidator_OnChildEvent(KEmailValidator* self, intptr_t slot) {
    auto* vkemailvalidator = dynamic_cast<VirtualKEmailValidator*>(self);
    if (vkemailvalidator && vkemailvalidator->isVirtualKEmailValidator) {
        vkemailvalidator->setKEmailValidator_ChildEvent_Callback(reinterpret_cast<VirtualKEmailValidator::KEmailValidator_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KEmailValidator_CustomEvent(KEmailValidator* self, QEvent* event) {
    auto* vkemailvalidator = dynamic_cast<VirtualKEmailValidator*>(self);
    if (vkemailvalidator && vkemailvalidator->isVirtualKEmailValidator) {
        vkemailvalidator->customEvent(event);
    } else {
        ((VirtualKEmailValidator*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KEmailValidator_QBaseCustomEvent(KEmailValidator* self, QEvent* event) {
    auto* vkemailvalidator = dynamic_cast<VirtualKEmailValidator*>(self);
    if (vkemailvalidator && vkemailvalidator->isVirtualKEmailValidator) {
        vkemailvalidator->setKEmailValidator_CustomEvent_IsBase(true);
        vkemailvalidator->customEvent(event);
    } else {
        ((VirtualKEmailValidator*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KEmailValidator_OnCustomEvent(KEmailValidator* self, intptr_t slot) {
    auto* vkemailvalidator = dynamic_cast<VirtualKEmailValidator*>(self);
    if (vkemailvalidator && vkemailvalidator->isVirtualKEmailValidator) {
        vkemailvalidator->setKEmailValidator_CustomEvent_Callback(reinterpret_cast<VirtualKEmailValidator::KEmailValidator_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KEmailValidator_ConnectNotify(KEmailValidator* self, const QMetaMethod* signal) {
    auto* vkemailvalidator = dynamic_cast<VirtualKEmailValidator*>(self);
    if (vkemailvalidator && vkemailvalidator->isVirtualKEmailValidator) {
        vkemailvalidator->connectNotify(*signal);
    } else {
        ((VirtualKEmailValidator*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KEmailValidator_QBaseConnectNotify(KEmailValidator* self, const QMetaMethod* signal) {
    auto* vkemailvalidator = dynamic_cast<VirtualKEmailValidator*>(self);
    if (vkemailvalidator && vkemailvalidator->isVirtualKEmailValidator) {
        vkemailvalidator->setKEmailValidator_ConnectNotify_IsBase(true);
        vkemailvalidator->connectNotify(*signal);
    } else {
        ((VirtualKEmailValidator*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KEmailValidator_OnConnectNotify(KEmailValidator* self, intptr_t slot) {
    auto* vkemailvalidator = dynamic_cast<VirtualKEmailValidator*>(self);
    if (vkemailvalidator && vkemailvalidator->isVirtualKEmailValidator) {
        vkemailvalidator->setKEmailValidator_ConnectNotify_Callback(reinterpret_cast<VirtualKEmailValidator::KEmailValidator_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KEmailValidator_DisconnectNotify(KEmailValidator* self, const QMetaMethod* signal) {
    auto* vkemailvalidator = dynamic_cast<VirtualKEmailValidator*>(self);
    if (vkemailvalidator && vkemailvalidator->isVirtualKEmailValidator) {
        vkemailvalidator->disconnectNotify(*signal);
    } else {
        ((VirtualKEmailValidator*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KEmailValidator_QBaseDisconnectNotify(KEmailValidator* self, const QMetaMethod* signal) {
    auto* vkemailvalidator = dynamic_cast<VirtualKEmailValidator*>(self);
    if (vkemailvalidator && vkemailvalidator->isVirtualKEmailValidator) {
        vkemailvalidator->setKEmailValidator_DisconnectNotify_IsBase(true);
        vkemailvalidator->disconnectNotify(*signal);
    } else {
        ((VirtualKEmailValidator*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KEmailValidator_OnDisconnectNotify(KEmailValidator* self, intptr_t slot) {
    auto* vkemailvalidator = dynamic_cast<VirtualKEmailValidator*>(self);
    if (vkemailvalidator && vkemailvalidator->isVirtualKEmailValidator) {
        vkemailvalidator->setKEmailValidator_DisconnectNotify_Callback(reinterpret_cast<VirtualKEmailValidator::KEmailValidator_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KEmailValidator_Sender(const KEmailValidator* self) {
    auto* vkemailvalidator = const_cast<VirtualKEmailValidator*>(dynamic_cast<const VirtualKEmailValidator*>(self));
    if (vkemailvalidator && vkemailvalidator->isVirtualKEmailValidator) {
        return vkemailvalidator->sender();
    } else {
        return ((VirtualKEmailValidator*)self)->sender();
    }
}

// Base class handler implementation
QObject* KEmailValidator_QBaseSender(const KEmailValidator* self) {
    auto* vkemailvalidator = const_cast<VirtualKEmailValidator*>(dynamic_cast<const VirtualKEmailValidator*>(self));
    if (vkemailvalidator && vkemailvalidator->isVirtualKEmailValidator) {
        vkemailvalidator->setKEmailValidator_Sender_IsBase(true);
        return vkemailvalidator->sender();
    } else {
        return ((VirtualKEmailValidator*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KEmailValidator_OnSender(const KEmailValidator* self, intptr_t slot) {
    auto* vkemailvalidator = const_cast<VirtualKEmailValidator*>(dynamic_cast<const VirtualKEmailValidator*>(self));
    if (vkemailvalidator && vkemailvalidator->isVirtualKEmailValidator) {
        vkemailvalidator->setKEmailValidator_Sender_Callback(reinterpret_cast<VirtualKEmailValidator::KEmailValidator_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KEmailValidator_SenderSignalIndex(const KEmailValidator* self) {
    auto* vkemailvalidator = const_cast<VirtualKEmailValidator*>(dynamic_cast<const VirtualKEmailValidator*>(self));
    if (vkemailvalidator && vkemailvalidator->isVirtualKEmailValidator) {
        return vkemailvalidator->senderSignalIndex();
    } else {
        return ((VirtualKEmailValidator*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KEmailValidator_QBaseSenderSignalIndex(const KEmailValidator* self) {
    auto* vkemailvalidator = const_cast<VirtualKEmailValidator*>(dynamic_cast<const VirtualKEmailValidator*>(self));
    if (vkemailvalidator && vkemailvalidator->isVirtualKEmailValidator) {
        vkemailvalidator->setKEmailValidator_SenderSignalIndex_IsBase(true);
        return vkemailvalidator->senderSignalIndex();
    } else {
        return ((VirtualKEmailValidator*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KEmailValidator_OnSenderSignalIndex(const KEmailValidator* self, intptr_t slot) {
    auto* vkemailvalidator = const_cast<VirtualKEmailValidator*>(dynamic_cast<const VirtualKEmailValidator*>(self));
    if (vkemailvalidator && vkemailvalidator->isVirtualKEmailValidator) {
        vkemailvalidator->setKEmailValidator_SenderSignalIndex_Callback(reinterpret_cast<VirtualKEmailValidator::KEmailValidator_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KEmailValidator_Receivers(const KEmailValidator* self, const char* signal) {
    auto* vkemailvalidator = const_cast<VirtualKEmailValidator*>(dynamic_cast<const VirtualKEmailValidator*>(self));
    if (vkemailvalidator && vkemailvalidator->isVirtualKEmailValidator) {
        return vkemailvalidator->receivers(signal);
    } else {
        return ((VirtualKEmailValidator*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KEmailValidator_QBaseReceivers(const KEmailValidator* self, const char* signal) {
    auto* vkemailvalidator = const_cast<VirtualKEmailValidator*>(dynamic_cast<const VirtualKEmailValidator*>(self));
    if (vkemailvalidator && vkemailvalidator->isVirtualKEmailValidator) {
        vkemailvalidator->setKEmailValidator_Receivers_IsBase(true);
        return vkemailvalidator->receivers(signal);
    } else {
        return ((VirtualKEmailValidator*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KEmailValidator_OnReceivers(const KEmailValidator* self, intptr_t slot) {
    auto* vkemailvalidator = const_cast<VirtualKEmailValidator*>(dynamic_cast<const VirtualKEmailValidator*>(self));
    if (vkemailvalidator && vkemailvalidator->isVirtualKEmailValidator) {
        vkemailvalidator->setKEmailValidator_Receivers_Callback(reinterpret_cast<VirtualKEmailValidator::KEmailValidator_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KEmailValidator_IsSignalConnected(const KEmailValidator* self, const QMetaMethod* signal) {
    auto* vkemailvalidator = const_cast<VirtualKEmailValidator*>(dynamic_cast<const VirtualKEmailValidator*>(self));
    if (vkemailvalidator && vkemailvalidator->isVirtualKEmailValidator) {
        return vkemailvalidator->isSignalConnected(*signal);
    } else {
        return ((VirtualKEmailValidator*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KEmailValidator_QBaseIsSignalConnected(const KEmailValidator* self, const QMetaMethod* signal) {
    auto* vkemailvalidator = const_cast<VirtualKEmailValidator*>(dynamic_cast<const VirtualKEmailValidator*>(self));
    if (vkemailvalidator && vkemailvalidator->isVirtualKEmailValidator) {
        vkemailvalidator->setKEmailValidator_IsSignalConnected_IsBase(true);
        return vkemailvalidator->isSignalConnected(*signal);
    } else {
        return ((VirtualKEmailValidator*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KEmailValidator_OnIsSignalConnected(const KEmailValidator* self, intptr_t slot) {
    auto* vkemailvalidator = const_cast<VirtualKEmailValidator*>(dynamic_cast<const VirtualKEmailValidator*>(self));
    if (vkemailvalidator && vkemailvalidator->isVirtualKEmailValidator) {
        vkemailvalidator->setKEmailValidator_IsSignalConnected_Callback(reinterpret_cast<VirtualKEmailValidator::KEmailValidator_IsSignalConnected_Callback>(slot));
    }
}

void KEmailValidator_Delete(KEmailValidator* self) {
    delete self;
}
