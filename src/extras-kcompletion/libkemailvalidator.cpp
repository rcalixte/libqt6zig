#include <KEmailValidator>
#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
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
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KEmailValidator_Tr(const char* s) {
    auto _ret = KEmailValidator::tr(s);
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
    return static_cast<int>(self->validate(str_QString, static_cast<int&>(*pos)));
}

void KEmailValidator_Fixup(const KEmailValidator* self, libqt_string str) {
    QString str_QString = QString::fromUtf8(str.data, str.len);
    self->fixup(str_QString);
}

libqt_string KEmailValidator_Tr2(const char* s, const char* c) {
    auto _ret = KEmailValidator::tr(s, c);
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
    auto _ret = KEmailValidator::tr(s, c, static_cast<int>(n));
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
QMetaObject* KEmailValidator_SuperMetaObject(const KEmailValidator* self) {
    return (QMetaObject*)self->KEmailValidator::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KEmailValidator_OnMetaObject(KEmailValidator* self, intptr_t slot) {
    if (auto* vkemailvalidator = const_cast<VirtualKEmailValidator*>(dynamic_cast<const VirtualKEmailValidator*>(self)))
        vkemailvalidator->kemailvalidator_metaobject_callback = reinterpret_cast<VirtualKEmailValidator::KEmailValidator_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KEmailValidator_SuperMetacast(KEmailValidator* self, const char* param1) {
    return self->KEmailValidator::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KEmailValidator_OnMetacast(KEmailValidator* self, intptr_t slot) {
    if (auto* vkemailvalidator = dynamic_cast<VirtualKEmailValidator*>(self))
        vkemailvalidator->kemailvalidator_metacast_callback = reinterpret_cast<VirtualKEmailValidator::KEmailValidator_Metacast_Callback>(slot);
}

// Base class handler implementation
int KEmailValidator_SuperMetacall(KEmailValidator* self, int param1, int param2, void** param3) {
    return self->KEmailValidator::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KEmailValidator_OnMetacall(KEmailValidator* self, intptr_t slot) {
    if (auto* vkemailvalidator = dynamic_cast<VirtualKEmailValidator*>(self))
        vkemailvalidator->kemailvalidator_metacall_callback = reinterpret_cast<VirtualKEmailValidator::KEmailValidator_Metacall_Callback>(slot);
}

// Base class handler implementation
int KEmailValidator_SuperValidate(const KEmailValidator* self, libqt_string str, int* pos) {
    QString str_QString = QString::fromUtf8(str.data, str.len);
    return static_cast<int>(self->KEmailValidator::validate(str_QString, static_cast<int&>(*pos)));
}

// Auxiliary method to allow providing re-implementation
void KEmailValidator_OnValidate(KEmailValidator* self, intptr_t slot) {
    if (auto* vkemailvalidator = const_cast<VirtualKEmailValidator*>(dynamic_cast<const VirtualKEmailValidator*>(self)))
        vkemailvalidator->kemailvalidator_validate_callback = reinterpret_cast<VirtualKEmailValidator::KEmailValidator_Validate_Callback>(slot);
}

// Base class handler implementation
void KEmailValidator_SuperFixup(const KEmailValidator* self, libqt_string str) {
    QString str_QString = QString::fromUtf8(str.data, str.len);
    self->KEmailValidator::fixup(str_QString);
}

// Auxiliary method to allow providing re-implementation
void KEmailValidator_OnFixup(KEmailValidator* self, intptr_t slot) {
    if (auto* vkemailvalidator = const_cast<VirtualKEmailValidator*>(dynamic_cast<const VirtualKEmailValidator*>(self)))
        vkemailvalidator->kemailvalidator_fixup_callback = reinterpret_cast<VirtualKEmailValidator::KEmailValidator_Fixup_Callback>(slot);
}

// Derived class handler implementation
bool KEmailValidator_Event(KEmailValidator* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool KEmailValidator_SuperEvent(KEmailValidator* self, QEvent* event) {
    return self->KEmailValidator::event(event);
}

// Auxiliary method to allow providing re-implementation
void KEmailValidator_OnEvent(KEmailValidator* self, intptr_t slot) {
    if (auto* vkemailvalidator = dynamic_cast<VirtualKEmailValidator*>(self))
        vkemailvalidator->kemailvalidator_event_callback = reinterpret_cast<VirtualKEmailValidator::KEmailValidator_Event_Callback>(slot);
}

// Derived class handler implementation
bool KEmailValidator_EventFilter(KEmailValidator* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool KEmailValidator_SuperEventFilter(KEmailValidator* self, QObject* watched, QEvent* event) {
    return self->KEmailValidator::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void KEmailValidator_OnEventFilter(KEmailValidator* self, intptr_t slot) {
    if (auto* vkemailvalidator = dynamic_cast<VirtualKEmailValidator*>(self))
        vkemailvalidator->kemailvalidator_eventfilter_callback = reinterpret_cast<VirtualKEmailValidator::KEmailValidator_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void KEmailValidator_TimerEvent(KEmailValidator* self, QTimerEvent* event) {
    auto* vkemailvalidator = dynamic_cast<VirtualKEmailValidator*>(self);
    if (vkemailvalidator) {
        vkemailvalidator->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KEmailValidator::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KEmailValidator_SuperTimerEvent(KEmailValidator* self, QTimerEvent* event) {
    if (auto* vkemailvalidator = dynamic_cast<VirtualKEmailValidator*>(self)) {
        vkemailvalidator->KEmailValidator::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KEmailValidator::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KEmailValidator_OnTimerEvent(KEmailValidator* self, intptr_t slot) {
    if (auto* vkemailvalidator = dynamic_cast<VirtualKEmailValidator*>(self))
        vkemailvalidator->kemailvalidator_timerevent_callback = reinterpret_cast<VirtualKEmailValidator::KEmailValidator_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KEmailValidator_ChildEvent(KEmailValidator* self, QChildEvent* event) {
    auto* vkemailvalidator = dynamic_cast<VirtualKEmailValidator*>(self);
    if (vkemailvalidator) {
        vkemailvalidator->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KEmailValidator::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KEmailValidator_SuperChildEvent(KEmailValidator* self, QChildEvent* event) {
    if (auto* vkemailvalidator = dynamic_cast<VirtualKEmailValidator*>(self)) {
        vkemailvalidator->KEmailValidator::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KEmailValidator::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KEmailValidator_OnChildEvent(KEmailValidator* self, intptr_t slot) {
    if (auto* vkemailvalidator = dynamic_cast<VirtualKEmailValidator*>(self))
        vkemailvalidator->kemailvalidator_childevent_callback = reinterpret_cast<VirtualKEmailValidator::KEmailValidator_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KEmailValidator_CustomEvent(KEmailValidator* self, QEvent* event) {
    auto* vkemailvalidator = dynamic_cast<VirtualKEmailValidator*>(self);
    if (vkemailvalidator) {
        vkemailvalidator->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KEmailValidator::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KEmailValidator_SuperCustomEvent(KEmailValidator* self, QEvent* event) {
    if (auto* vkemailvalidator = dynamic_cast<VirtualKEmailValidator*>(self)) {
        vkemailvalidator->KEmailValidator::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KEmailValidator::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KEmailValidator_OnCustomEvent(KEmailValidator* self, intptr_t slot) {
    if (auto* vkemailvalidator = dynamic_cast<VirtualKEmailValidator*>(self))
        vkemailvalidator->kemailvalidator_customevent_callback = reinterpret_cast<VirtualKEmailValidator::KEmailValidator_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KEmailValidator_ConnectNotify(KEmailValidator* self, const QMetaMethod* signal) {
    auto* vkemailvalidator = dynamic_cast<VirtualKEmailValidator*>(self);
    if (vkemailvalidator) {
        vkemailvalidator->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KEmailValidator::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KEmailValidator_SuperConnectNotify(KEmailValidator* self, const QMetaMethod* signal) {
    if (auto* vkemailvalidator = dynamic_cast<VirtualKEmailValidator*>(self)) {
        vkemailvalidator->KEmailValidator::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KEmailValidator::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KEmailValidator_OnConnectNotify(KEmailValidator* self, intptr_t slot) {
    if (auto* vkemailvalidator = dynamic_cast<VirtualKEmailValidator*>(self))
        vkemailvalidator->kemailvalidator_connectnotify_callback = reinterpret_cast<VirtualKEmailValidator::KEmailValidator_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KEmailValidator_DisconnectNotify(KEmailValidator* self, const QMetaMethod* signal) {
    auto* vkemailvalidator = dynamic_cast<VirtualKEmailValidator*>(self);
    if (vkemailvalidator) {
        vkemailvalidator->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KEmailValidator::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KEmailValidator_SuperDisconnectNotify(KEmailValidator* self, const QMetaMethod* signal) {
    if (auto* vkemailvalidator = dynamic_cast<VirtualKEmailValidator*>(self)) {
        vkemailvalidator->KEmailValidator::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KEmailValidator::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KEmailValidator_OnDisconnectNotify(KEmailValidator* self, intptr_t slot) {
    if (auto* vkemailvalidator = dynamic_cast<VirtualKEmailValidator*>(self))
        vkemailvalidator->kemailvalidator_disconnectnotify_callback = reinterpret_cast<VirtualKEmailValidator::KEmailValidator_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* KEmailValidator_Sender(const KEmailValidator* self) {
    if (auto* vkemailvalidator = const_cast<VirtualKEmailValidator*>(dynamic_cast<const VirtualKEmailValidator*>(self))) {
        return vkemailvalidator->VirtualKEmailValidator::sender();
    } else
        qFatal("Error: Protected method KEmailValidator::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KEmailValidator_SenderSignalIndex(const KEmailValidator* self) {
    if (auto* vkemailvalidator = const_cast<VirtualKEmailValidator*>(dynamic_cast<const VirtualKEmailValidator*>(self))) {
        return vkemailvalidator->VirtualKEmailValidator::senderSignalIndex();
    } else
        qFatal("Error: Protected method KEmailValidator::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KEmailValidator_Receivers(const KEmailValidator* self, const char* signal) {
    if (auto* vkemailvalidator = const_cast<VirtualKEmailValidator*>(dynamic_cast<const VirtualKEmailValidator*>(self))) {
        return vkemailvalidator->VirtualKEmailValidator::receivers(signal);
    } else
        qFatal("Error: Protected method KEmailValidator::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KEmailValidator_IsSignalConnected(const KEmailValidator* self, const QMetaMethod* signal) {
    if (auto* vkemailvalidator = const_cast<VirtualKEmailValidator*>(dynamic_cast<const VirtualKEmailValidator*>(self))) {
        return vkemailvalidator->VirtualKEmailValidator::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KEmailValidator::isSignalConnected called without a directly constructed type");
}

void KEmailValidator_Delete(KEmailValidator* self) {
    delete self;
}
