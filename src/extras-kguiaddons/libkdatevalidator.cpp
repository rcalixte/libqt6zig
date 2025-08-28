#include <KDateValidator>
#include <QChildEvent>
#include <QDate>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QValidator>
#include <kdatevalidator.h>
#include "libkdatevalidator.h"
#include "libkdatevalidator.hxx"

KDateValidator* KDateValidator_new() {
    return new VirtualKDateValidator();
}

KDateValidator* KDateValidator_new2(QObject* parent) {
    return new VirtualKDateValidator(parent);
}

QMetaObject* KDateValidator_MetaObject(const KDateValidator* self) {
    return (QMetaObject*)self->metaObject();
}

void* KDateValidator_Metacast(KDateValidator* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KDateValidator_Metacall(KDateValidator* self, int param1, int param2, void** param3) {
    auto* vkdatevalidator = dynamic_cast<VirtualKDateValidator*>(self);
    if (vkdatevalidator && vkdatevalidator->isVirtualKDateValidator) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKDateValidator*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KDateValidator_Tr(const char* s) {
    QString _ret = KDateValidator::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int KDateValidator_Validate(const KDateValidator* self, libqt_string text, int* e) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    auto* vkdatevalidator = dynamic_cast<const VirtualKDateValidator*>(self);
    if (vkdatevalidator && vkdatevalidator->isVirtualKDateValidator) {
        return static_cast<int>(self->validate(text_QString, static_cast<int&>(*e)));
    } else {
        return static_cast<int>(((VirtualKDateValidator*)self)->validate(text_QString, static_cast<int&>(*e)));
    }
}

void KDateValidator_Fixup(const KDateValidator* self, libqt_string input) {
    QString input_QString = QString::fromUtf8(input.data, input.len);
    auto* vkdatevalidator = dynamic_cast<const VirtualKDateValidator*>(self);
    if (vkdatevalidator && vkdatevalidator->isVirtualKDateValidator) {
        self->fixup(input_QString);
    } else {
        ((VirtualKDateValidator*)self)->fixup(input_QString);
    }
}

int KDateValidator_Date(const KDateValidator* self, const libqt_string text, QDate* date) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return static_cast<int>(self->date(text_QString, *date));
}

libqt_string KDateValidator_Tr2(const char* s, const char* c) {
    QString _ret = KDateValidator::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KDateValidator_Tr3(const char* s, const char* c, int n) {
    QString _ret = KDateValidator::tr(s, c, static_cast<int>(n));
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
int KDateValidator_QBaseMetacall(KDateValidator* self, int param1, int param2, void** param3) {
    auto* vkdatevalidator = dynamic_cast<VirtualKDateValidator*>(self);
    if (vkdatevalidator && vkdatevalidator->isVirtualKDateValidator) {
        vkdatevalidator->setKDateValidator_Metacall_IsBase(true);
        return vkdatevalidator->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KDateValidator::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KDateValidator_OnMetacall(KDateValidator* self, intptr_t slot) {
    auto* vkdatevalidator = dynamic_cast<VirtualKDateValidator*>(self);
    if (vkdatevalidator && vkdatevalidator->isVirtualKDateValidator) {
        vkdatevalidator->setKDateValidator_Metacall_Callback(reinterpret_cast<VirtualKDateValidator::KDateValidator_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
int KDateValidator_QBaseValidate(const KDateValidator* self, libqt_string text, int* e) {
    auto* vkdatevalidator = const_cast<VirtualKDateValidator*>(dynamic_cast<const VirtualKDateValidator*>(self));
    QString text_QString = QString::fromUtf8(text.data, text.len);
    if (vkdatevalidator && vkdatevalidator->isVirtualKDateValidator) {
        vkdatevalidator->setKDateValidator_Validate_IsBase(true);
        return static_cast<int>(vkdatevalidator->validate(text_QString, static_cast<int&>(*e)));
    } else {
        return static_cast<int>(self->KDateValidator::validate(text_QString, static_cast<int&>(*e)));
    }
}

// Auxiliary method to allow providing re-implementation
void KDateValidator_OnValidate(const KDateValidator* self, intptr_t slot) {
    auto* vkdatevalidator = const_cast<VirtualKDateValidator*>(dynamic_cast<const VirtualKDateValidator*>(self));
    if (vkdatevalidator && vkdatevalidator->isVirtualKDateValidator) {
        vkdatevalidator->setKDateValidator_Validate_Callback(reinterpret_cast<VirtualKDateValidator::KDateValidator_Validate_Callback>(slot));
    }
}

// Base class handler implementation
void KDateValidator_QBaseFixup(const KDateValidator* self, libqt_string input) {
    auto* vkdatevalidator = const_cast<VirtualKDateValidator*>(dynamic_cast<const VirtualKDateValidator*>(self));
    QString input_QString = QString::fromUtf8(input.data, input.len);
    if (vkdatevalidator && vkdatevalidator->isVirtualKDateValidator) {
        vkdatevalidator->setKDateValidator_Fixup_IsBase(true);
        vkdatevalidator->fixup(input_QString);
    } else {
        self->KDateValidator::fixup(input_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void KDateValidator_OnFixup(const KDateValidator* self, intptr_t slot) {
    auto* vkdatevalidator = const_cast<VirtualKDateValidator*>(dynamic_cast<const VirtualKDateValidator*>(self));
    if (vkdatevalidator && vkdatevalidator->isVirtualKDateValidator) {
        vkdatevalidator->setKDateValidator_Fixup_Callback(reinterpret_cast<VirtualKDateValidator::KDateValidator_Fixup_Callback>(slot));
    }
}

// Derived class handler implementation
bool KDateValidator_Event(KDateValidator* self, QEvent* event) {
    auto* vkdatevalidator = dynamic_cast<VirtualKDateValidator*>(self);
    if (vkdatevalidator && vkdatevalidator->isVirtualKDateValidator) {
        return vkdatevalidator->event(event);
    } else {
        return self->KDateValidator::event(event);
    }
}

// Base class handler implementation
bool KDateValidator_QBaseEvent(KDateValidator* self, QEvent* event) {
    auto* vkdatevalidator = dynamic_cast<VirtualKDateValidator*>(self);
    if (vkdatevalidator && vkdatevalidator->isVirtualKDateValidator) {
        vkdatevalidator->setKDateValidator_Event_IsBase(true);
        return vkdatevalidator->event(event);
    } else {
        return self->KDateValidator::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KDateValidator_OnEvent(KDateValidator* self, intptr_t slot) {
    auto* vkdatevalidator = dynamic_cast<VirtualKDateValidator*>(self);
    if (vkdatevalidator && vkdatevalidator->isVirtualKDateValidator) {
        vkdatevalidator->setKDateValidator_Event_Callback(reinterpret_cast<VirtualKDateValidator::KDateValidator_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool KDateValidator_EventFilter(KDateValidator* self, QObject* watched, QEvent* event) {
    auto* vkdatevalidator = dynamic_cast<VirtualKDateValidator*>(self);
    if (vkdatevalidator && vkdatevalidator->isVirtualKDateValidator) {
        return vkdatevalidator->eventFilter(watched, event);
    } else {
        return self->KDateValidator::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool KDateValidator_QBaseEventFilter(KDateValidator* self, QObject* watched, QEvent* event) {
    auto* vkdatevalidator = dynamic_cast<VirtualKDateValidator*>(self);
    if (vkdatevalidator && vkdatevalidator->isVirtualKDateValidator) {
        vkdatevalidator->setKDateValidator_EventFilter_IsBase(true);
        return vkdatevalidator->eventFilter(watched, event);
    } else {
        return self->KDateValidator::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KDateValidator_OnEventFilter(KDateValidator* self, intptr_t slot) {
    auto* vkdatevalidator = dynamic_cast<VirtualKDateValidator*>(self);
    if (vkdatevalidator && vkdatevalidator->isVirtualKDateValidator) {
        vkdatevalidator->setKDateValidator_EventFilter_Callback(reinterpret_cast<VirtualKDateValidator::KDateValidator_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void KDateValidator_TimerEvent(KDateValidator* self, QTimerEvent* event) {
    auto* vkdatevalidator = dynamic_cast<VirtualKDateValidator*>(self);
    if (vkdatevalidator && vkdatevalidator->isVirtualKDateValidator) {
        vkdatevalidator->timerEvent(event);
    } else {
        ((VirtualKDateValidator*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KDateValidator_QBaseTimerEvent(KDateValidator* self, QTimerEvent* event) {
    auto* vkdatevalidator = dynamic_cast<VirtualKDateValidator*>(self);
    if (vkdatevalidator && vkdatevalidator->isVirtualKDateValidator) {
        vkdatevalidator->setKDateValidator_TimerEvent_IsBase(true);
        vkdatevalidator->timerEvent(event);
    } else {
        ((VirtualKDateValidator*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KDateValidator_OnTimerEvent(KDateValidator* self, intptr_t slot) {
    auto* vkdatevalidator = dynamic_cast<VirtualKDateValidator*>(self);
    if (vkdatevalidator && vkdatevalidator->isVirtualKDateValidator) {
        vkdatevalidator->setKDateValidator_TimerEvent_Callback(reinterpret_cast<VirtualKDateValidator::KDateValidator_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KDateValidator_ChildEvent(KDateValidator* self, QChildEvent* event) {
    auto* vkdatevalidator = dynamic_cast<VirtualKDateValidator*>(self);
    if (vkdatevalidator && vkdatevalidator->isVirtualKDateValidator) {
        vkdatevalidator->childEvent(event);
    } else {
        ((VirtualKDateValidator*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KDateValidator_QBaseChildEvent(KDateValidator* self, QChildEvent* event) {
    auto* vkdatevalidator = dynamic_cast<VirtualKDateValidator*>(self);
    if (vkdatevalidator && vkdatevalidator->isVirtualKDateValidator) {
        vkdatevalidator->setKDateValidator_ChildEvent_IsBase(true);
        vkdatevalidator->childEvent(event);
    } else {
        ((VirtualKDateValidator*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KDateValidator_OnChildEvent(KDateValidator* self, intptr_t slot) {
    auto* vkdatevalidator = dynamic_cast<VirtualKDateValidator*>(self);
    if (vkdatevalidator && vkdatevalidator->isVirtualKDateValidator) {
        vkdatevalidator->setKDateValidator_ChildEvent_Callback(reinterpret_cast<VirtualKDateValidator::KDateValidator_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KDateValidator_CustomEvent(KDateValidator* self, QEvent* event) {
    auto* vkdatevalidator = dynamic_cast<VirtualKDateValidator*>(self);
    if (vkdatevalidator && vkdatevalidator->isVirtualKDateValidator) {
        vkdatevalidator->customEvent(event);
    } else {
        ((VirtualKDateValidator*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KDateValidator_QBaseCustomEvent(KDateValidator* self, QEvent* event) {
    auto* vkdatevalidator = dynamic_cast<VirtualKDateValidator*>(self);
    if (vkdatevalidator && vkdatevalidator->isVirtualKDateValidator) {
        vkdatevalidator->setKDateValidator_CustomEvent_IsBase(true);
        vkdatevalidator->customEvent(event);
    } else {
        ((VirtualKDateValidator*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KDateValidator_OnCustomEvent(KDateValidator* self, intptr_t slot) {
    auto* vkdatevalidator = dynamic_cast<VirtualKDateValidator*>(self);
    if (vkdatevalidator && vkdatevalidator->isVirtualKDateValidator) {
        vkdatevalidator->setKDateValidator_CustomEvent_Callback(reinterpret_cast<VirtualKDateValidator::KDateValidator_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KDateValidator_ConnectNotify(KDateValidator* self, const QMetaMethod* signal) {
    auto* vkdatevalidator = dynamic_cast<VirtualKDateValidator*>(self);
    if (vkdatevalidator && vkdatevalidator->isVirtualKDateValidator) {
        vkdatevalidator->connectNotify(*signal);
    } else {
        ((VirtualKDateValidator*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KDateValidator_QBaseConnectNotify(KDateValidator* self, const QMetaMethod* signal) {
    auto* vkdatevalidator = dynamic_cast<VirtualKDateValidator*>(self);
    if (vkdatevalidator && vkdatevalidator->isVirtualKDateValidator) {
        vkdatevalidator->setKDateValidator_ConnectNotify_IsBase(true);
        vkdatevalidator->connectNotify(*signal);
    } else {
        ((VirtualKDateValidator*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KDateValidator_OnConnectNotify(KDateValidator* self, intptr_t slot) {
    auto* vkdatevalidator = dynamic_cast<VirtualKDateValidator*>(self);
    if (vkdatevalidator && vkdatevalidator->isVirtualKDateValidator) {
        vkdatevalidator->setKDateValidator_ConnectNotify_Callback(reinterpret_cast<VirtualKDateValidator::KDateValidator_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KDateValidator_DisconnectNotify(KDateValidator* self, const QMetaMethod* signal) {
    auto* vkdatevalidator = dynamic_cast<VirtualKDateValidator*>(self);
    if (vkdatevalidator && vkdatevalidator->isVirtualKDateValidator) {
        vkdatevalidator->disconnectNotify(*signal);
    } else {
        ((VirtualKDateValidator*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KDateValidator_QBaseDisconnectNotify(KDateValidator* self, const QMetaMethod* signal) {
    auto* vkdatevalidator = dynamic_cast<VirtualKDateValidator*>(self);
    if (vkdatevalidator && vkdatevalidator->isVirtualKDateValidator) {
        vkdatevalidator->setKDateValidator_DisconnectNotify_IsBase(true);
        vkdatevalidator->disconnectNotify(*signal);
    } else {
        ((VirtualKDateValidator*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KDateValidator_OnDisconnectNotify(KDateValidator* self, intptr_t slot) {
    auto* vkdatevalidator = dynamic_cast<VirtualKDateValidator*>(self);
    if (vkdatevalidator && vkdatevalidator->isVirtualKDateValidator) {
        vkdatevalidator->setKDateValidator_DisconnectNotify_Callback(reinterpret_cast<VirtualKDateValidator::KDateValidator_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KDateValidator_Sender(const KDateValidator* self) {
    auto* vkdatevalidator = const_cast<VirtualKDateValidator*>(dynamic_cast<const VirtualKDateValidator*>(self));
    if (vkdatevalidator && vkdatevalidator->isVirtualKDateValidator) {
        return vkdatevalidator->sender();
    } else {
        return ((VirtualKDateValidator*)self)->sender();
    }
}

// Base class handler implementation
QObject* KDateValidator_QBaseSender(const KDateValidator* self) {
    auto* vkdatevalidator = const_cast<VirtualKDateValidator*>(dynamic_cast<const VirtualKDateValidator*>(self));
    if (vkdatevalidator && vkdatevalidator->isVirtualKDateValidator) {
        vkdatevalidator->setKDateValidator_Sender_IsBase(true);
        return vkdatevalidator->sender();
    } else {
        return ((VirtualKDateValidator*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KDateValidator_OnSender(const KDateValidator* self, intptr_t slot) {
    auto* vkdatevalidator = const_cast<VirtualKDateValidator*>(dynamic_cast<const VirtualKDateValidator*>(self));
    if (vkdatevalidator && vkdatevalidator->isVirtualKDateValidator) {
        vkdatevalidator->setKDateValidator_Sender_Callback(reinterpret_cast<VirtualKDateValidator::KDateValidator_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KDateValidator_SenderSignalIndex(const KDateValidator* self) {
    auto* vkdatevalidator = const_cast<VirtualKDateValidator*>(dynamic_cast<const VirtualKDateValidator*>(self));
    if (vkdatevalidator && vkdatevalidator->isVirtualKDateValidator) {
        return vkdatevalidator->senderSignalIndex();
    } else {
        return ((VirtualKDateValidator*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KDateValidator_QBaseSenderSignalIndex(const KDateValidator* self) {
    auto* vkdatevalidator = const_cast<VirtualKDateValidator*>(dynamic_cast<const VirtualKDateValidator*>(self));
    if (vkdatevalidator && vkdatevalidator->isVirtualKDateValidator) {
        vkdatevalidator->setKDateValidator_SenderSignalIndex_IsBase(true);
        return vkdatevalidator->senderSignalIndex();
    } else {
        return ((VirtualKDateValidator*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KDateValidator_OnSenderSignalIndex(const KDateValidator* self, intptr_t slot) {
    auto* vkdatevalidator = const_cast<VirtualKDateValidator*>(dynamic_cast<const VirtualKDateValidator*>(self));
    if (vkdatevalidator && vkdatevalidator->isVirtualKDateValidator) {
        vkdatevalidator->setKDateValidator_SenderSignalIndex_Callback(reinterpret_cast<VirtualKDateValidator::KDateValidator_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KDateValidator_Receivers(const KDateValidator* self, const char* signal) {
    auto* vkdatevalidator = const_cast<VirtualKDateValidator*>(dynamic_cast<const VirtualKDateValidator*>(self));
    if (vkdatevalidator && vkdatevalidator->isVirtualKDateValidator) {
        return vkdatevalidator->receivers(signal);
    } else {
        return ((VirtualKDateValidator*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KDateValidator_QBaseReceivers(const KDateValidator* self, const char* signal) {
    auto* vkdatevalidator = const_cast<VirtualKDateValidator*>(dynamic_cast<const VirtualKDateValidator*>(self));
    if (vkdatevalidator && vkdatevalidator->isVirtualKDateValidator) {
        vkdatevalidator->setKDateValidator_Receivers_IsBase(true);
        return vkdatevalidator->receivers(signal);
    } else {
        return ((VirtualKDateValidator*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KDateValidator_OnReceivers(const KDateValidator* self, intptr_t slot) {
    auto* vkdatevalidator = const_cast<VirtualKDateValidator*>(dynamic_cast<const VirtualKDateValidator*>(self));
    if (vkdatevalidator && vkdatevalidator->isVirtualKDateValidator) {
        vkdatevalidator->setKDateValidator_Receivers_Callback(reinterpret_cast<VirtualKDateValidator::KDateValidator_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KDateValidator_IsSignalConnected(const KDateValidator* self, const QMetaMethod* signal) {
    auto* vkdatevalidator = const_cast<VirtualKDateValidator*>(dynamic_cast<const VirtualKDateValidator*>(self));
    if (vkdatevalidator && vkdatevalidator->isVirtualKDateValidator) {
        return vkdatevalidator->isSignalConnected(*signal);
    } else {
        return ((VirtualKDateValidator*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KDateValidator_QBaseIsSignalConnected(const KDateValidator* self, const QMetaMethod* signal) {
    auto* vkdatevalidator = const_cast<VirtualKDateValidator*>(dynamic_cast<const VirtualKDateValidator*>(self));
    if (vkdatevalidator && vkdatevalidator->isVirtualKDateValidator) {
        vkdatevalidator->setKDateValidator_IsSignalConnected_IsBase(true);
        return vkdatevalidator->isSignalConnected(*signal);
    } else {
        return ((VirtualKDateValidator*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KDateValidator_OnIsSignalConnected(const KDateValidator* self, intptr_t slot) {
    auto* vkdatevalidator = const_cast<VirtualKDateValidator*>(dynamic_cast<const VirtualKDateValidator*>(self));
    if (vkdatevalidator && vkdatevalidator->isVirtualKDateValidator) {
        vkdatevalidator->setKDateValidator_IsSignalConnected_Callback(reinterpret_cast<VirtualKDateValidator::KDateValidator_IsSignalConnected_Callback>(slot));
    }
}

void KDateValidator_Delete(KDateValidator* self) {
    delete self;
}
