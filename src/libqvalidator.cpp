#include <QChildEvent>
#include <QDoubleValidator>
#include <QEvent>
#include <QIntValidator>
#include <QLocale>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QRegularExpression>
#include <QRegularExpressionValidator>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QValidator>
#include <qvalidator.h>
#include "libqvalidator.h"
#include "libqvalidator.hxx"

QValidator* QValidator_new() {
    return new VirtualQValidator();
}

QValidator* QValidator_new2(QObject* parent) {
    return new VirtualQValidator(parent);
}

QMetaObject* QValidator_MetaObject(const QValidator* self) {
    return (QMetaObject*)self->metaObject();
}

void* QValidator_Metacast(QValidator* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QValidator_Metacall(QValidator* self, int param1, int param2, void** param3) {
    auto* vqvalidator = dynamic_cast<VirtualQValidator*>(self);
    if (vqvalidator && vqvalidator->isVirtualQValidator) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQValidator*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QValidator_OnMetacall(QValidator* self, intptr_t slot) {
    auto* vqvalidator = dynamic_cast<VirtualQValidator*>(self);
    if (vqvalidator && vqvalidator->isVirtualQValidator) {
        vqvalidator->setQValidator_Metacall_Callback(reinterpret_cast<VirtualQValidator::QValidator_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QValidator_QBaseMetacall(QValidator* self, int param1, int param2, void** param3) {
    auto* vqvalidator = dynamic_cast<VirtualQValidator*>(self);
    if (vqvalidator && vqvalidator->isVirtualQValidator) {
        vqvalidator->setQValidator_Metacall_IsBase(true);
        return vqvalidator->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQValidator*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QValidator_Tr(const char* s) {
    QString _ret = QValidator::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QValidator_SetLocale(QValidator* self, const QLocale* locale) {
    self->setLocale(*locale);
}

QLocale* QValidator_Locale(const QValidator* self) {
    return new QLocale(self->locale());
}

void QValidator_Changed(QValidator* self) {
    self->changed();
}

void QValidator_Connect_Changed(QValidator* self, intptr_t slot) {
    void (*slotFunc)(QValidator*) = reinterpret_cast<void (*)(QValidator*)>(slot);
    QValidator::connect(self, &QValidator::changed, [self, slotFunc]() {
        slotFunc(self);
    });
}

libqt_string QValidator_Tr2(const char* s, const char* c) {
    QString _ret = QValidator::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QValidator_Tr3(const char* s, const char* c, int n) {
    QString _ret = QValidator::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

// Derived class handler implementation
int QValidator_Validate(const QValidator* self, libqt_string param1, int* param2) {
    auto* vqvalidator = const_cast<VirtualQValidator*>(dynamic_cast<const VirtualQValidator*>(self));
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    if (vqvalidator && vqvalidator->isVirtualQValidator) {
        return static_cast<int>(vqvalidator->validate(param1_QString, static_cast<int&>(*param2)));
    } else {
        return static_cast<int>(((VirtualQValidator*)self)->validate(param1_QString, static_cast<int&>(*param2)));
    }
}

// Base class handler implementation
int QValidator_QBaseValidate(const QValidator* self, libqt_string param1, int* param2) {
    auto* vqvalidator = const_cast<VirtualQValidator*>(dynamic_cast<const VirtualQValidator*>(self));
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    if (vqvalidator && vqvalidator->isVirtualQValidator) {
        vqvalidator->setQValidator_Validate_IsBase(true);
        return static_cast<int>(vqvalidator->validate(param1_QString, static_cast<int&>(*param2)));
    } else {
        return static_cast<int>(((VirtualQValidator*)self)->validate(param1_QString, static_cast<int&>(*param2)));
    }
}

// Auxiliary method to allow providing re-implementation
void QValidator_OnValidate(const QValidator* self, intptr_t slot) {
    auto* vqvalidator = const_cast<VirtualQValidator*>(dynamic_cast<const VirtualQValidator*>(self));
    if (vqvalidator && vqvalidator->isVirtualQValidator) {
        vqvalidator->setQValidator_Validate_Callback(reinterpret_cast<VirtualQValidator::QValidator_Validate_Callback>(slot));
    }
}

// Derived class handler implementation
void QValidator_Fixup(const QValidator* self, libqt_string param1) {
    auto* vqvalidator = const_cast<VirtualQValidator*>(dynamic_cast<const VirtualQValidator*>(self));
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    if (vqvalidator && vqvalidator->isVirtualQValidator) {
        vqvalidator->fixup(param1_QString);
    } else {
        self->QValidator::fixup(param1_QString);
    }
}

// Base class handler implementation
void QValidator_QBaseFixup(const QValidator* self, libqt_string param1) {
    auto* vqvalidator = const_cast<VirtualQValidator*>(dynamic_cast<const VirtualQValidator*>(self));
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    if (vqvalidator && vqvalidator->isVirtualQValidator) {
        vqvalidator->setQValidator_Fixup_IsBase(true);
        vqvalidator->fixup(param1_QString);
    } else {
        self->QValidator::fixup(param1_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QValidator_OnFixup(const QValidator* self, intptr_t slot) {
    auto* vqvalidator = const_cast<VirtualQValidator*>(dynamic_cast<const VirtualQValidator*>(self));
    if (vqvalidator && vqvalidator->isVirtualQValidator) {
        vqvalidator->setQValidator_Fixup_Callback(reinterpret_cast<VirtualQValidator::QValidator_Fixup_Callback>(slot));
    }
}

// Derived class handler implementation
bool QValidator_Event(QValidator* self, QEvent* event) {
    auto* vqvalidator = dynamic_cast<VirtualQValidator*>(self);
    if (vqvalidator && vqvalidator->isVirtualQValidator) {
        return vqvalidator->event(event);
    } else {
        return self->QValidator::event(event);
    }
}

// Base class handler implementation
bool QValidator_QBaseEvent(QValidator* self, QEvent* event) {
    auto* vqvalidator = dynamic_cast<VirtualQValidator*>(self);
    if (vqvalidator && vqvalidator->isVirtualQValidator) {
        vqvalidator->setQValidator_Event_IsBase(true);
        return vqvalidator->event(event);
    } else {
        return self->QValidator::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QValidator_OnEvent(QValidator* self, intptr_t slot) {
    auto* vqvalidator = dynamic_cast<VirtualQValidator*>(self);
    if (vqvalidator && vqvalidator->isVirtualQValidator) {
        vqvalidator->setQValidator_Event_Callback(reinterpret_cast<VirtualQValidator::QValidator_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QValidator_EventFilter(QValidator* self, QObject* watched, QEvent* event) {
    auto* vqvalidator = dynamic_cast<VirtualQValidator*>(self);
    if (vqvalidator && vqvalidator->isVirtualQValidator) {
        return vqvalidator->eventFilter(watched, event);
    } else {
        return self->QValidator::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QValidator_QBaseEventFilter(QValidator* self, QObject* watched, QEvent* event) {
    auto* vqvalidator = dynamic_cast<VirtualQValidator*>(self);
    if (vqvalidator && vqvalidator->isVirtualQValidator) {
        vqvalidator->setQValidator_EventFilter_IsBase(true);
        return vqvalidator->eventFilter(watched, event);
    } else {
        return self->QValidator::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QValidator_OnEventFilter(QValidator* self, intptr_t slot) {
    auto* vqvalidator = dynamic_cast<VirtualQValidator*>(self);
    if (vqvalidator && vqvalidator->isVirtualQValidator) {
        vqvalidator->setQValidator_EventFilter_Callback(reinterpret_cast<VirtualQValidator::QValidator_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QValidator_TimerEvent(QValidator* self, QTimerEvent* event) {
    auto* vqvalidator = dynamic_cast<VirtualQValidator*>(self);
    if (vqvalidator && vqvalidator->isVirtualQValidator) {
        vqvalidator->timerEvent(event);
    } else {
        ((VirtualQValidator*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QValidator_QBaseTimerEvent(QValidator* self, QTimerEvent* event) {
    auto* vqvalidator = dynamic_cast<VirtualQValidator*>(self);
    if (vqvalidator && vqvalidator->isVirtualQValidator) {
        vqvalidator->setQValidator_TimerEvent_IsBase(true);
        vqvalidator->timerEvent(event);
    } else {
        ((VirtualQValidator*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QValidator_OnTimerEvent(QValidator* self, intptr_t slot) {
    auto* vqvalidator = dynamic_cast<VirtualQValidator*>(self);
    if (vqvalidator && vqvalidator->isVirtualQValidator) {
        vqvalidator->setQValidator_TimerEvent_Callback(reinterpret_cast<VirtualQValidator::QValidator_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QValidator_ChildEvent(QValidator* self, QChildEvent* event) {
    auto* vqvalidator = dynamic_cast<VirtualQValidator*>(self);
    if (vqvalidator && vqvalidator->isVirtualQValidator) {
        vqvalidator->childEvent(event);
    } else {
        ((VirtualQValidator*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QValidator_QBaseChildEvent(QValidator* self, QChildEvent* event) {
    auto* vqvalidator = dynamic_cast<VirtualQValidator*>(self);
    if (vqvalidator && vqvalidator->isVirtualQValidator) {
        vqvalidator->setQValidator_ChildEvent_IsBase(true);
        vqvalidator->childEvent(event);
    } else {
        ((VirtualQValidator*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QValidator_OnChildEvent(QValidator* self, intptr_t slot) {
    auto* vqvalidator = dynamic_cast<VirtualQValidator*>(self);
    if (vqvalidator && vqvalidator->isVirtualQValidator) {
        vqvalidator->setQValidator_ChildEvent_Callback(reinterpret_cast<VirtualQValidator::QValidator_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QValidator_CustomEvent(QValidator* self, QEvent* event) {
    auto* vqvalidator = dynamic_cast<VirtualQValidator*>(self);
    if (vqvalidator && vqvalidator->isVirtualQValidator) {
        vqvalidator->customEvent(event);
    } else {
        ((VirtualQValidator*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QValidator_QBaseCustomEvent(QValidator* self, QEvent* event) {
    auto* vqvalidator = dynamic_cast<VirtualQValidator*>(self);
    if (vqvalidator && vqvalidator->isVirtualQValidator) {
        vqvalidator->setQValidator_CustomEvent_IsBase(true);
        vqvalidator->customEvent(event);
    } else {
        ((VirtualQValidator*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QValidator_OnCustomEvent(QValidator* self, intptr_t slot) {
    auto* vqvalidator = dynamic_cast<VirtualQValidator*>(self);
    if (vqvalidator && vqvalidator->isVirtualQValidator) {
        vqvalidator->setQValidator_CustomEvent_Callback(reinterpret_cast<VirtualQValidator::QValidator_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QValidator_ConnectNotify(QValidator* self, const QMetaMethod* signal) {
    auto* vqvalidator = dynamic_cast<VirtualQValidator*>(self);
    if (vqvalidator && vqvalidator->isVirtualQValidator) {
        vqvalidator->connectNotify(*signal);
    } else {
        ((VirtualQValidator*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QValidator_QBaseConnectNotify(QValidator* self, const QMetaMethod* signal) {
    auto* vqvalidator = dynamic_cast<VirtualQValidator*>(self);
    if (vqvalidator && vqvalidator->isVirtualQValidator) {
        vqvalidator->setQValidator_ConnectNotify_IsBase(true);
        vqvalidator->connectNotify(*signal);
    } else {
        ((VirtualQValidator*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QValidator_OnConnectNotify(QValidator* self, intptr_t slot) {
    auto* vqvalidator = dynamic_cast<VirtualQValidator*>(self);
    if (vqvalidator && vqvalidator->isVirtualQValidator) {
        vqvalidator->setQValidator_ConnectNotify_Callback(reinterpret_cast<VirtualQValidator::QValidator_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QValidator_DisconnectNotify(QValidator* self, const QMetaMethod* signal) {
    auto* vqvalidator = dynamic_cast<VirtualQValidator*>(self);
    if (vqvalidator && vqvalidator->isVirtualQValidator) {
        vqvalidator->disconnectNotify(*signal);
    } else {
        ((VirtualQValidator*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QValidator_QBaseDisconnectNotify(QValidator* self, const QMetaMethod* signal) {
    auto* vqvalidator = dynamic_cast<VirtualQValidator*>(self);
    if (vqvalidator && vqvalidator->isVirtualQValidator) {
        vqvalidator->setQValidator_DisconnectNotify_IsBase(true);
        vqvalidator->disconnectNotify(*signal);
    } else {
        ((VirtualQValidator*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QValidator_OnDisconnectNotify(QValidator* self, intptr_t slot) {
    auto* vqvalidator = dynamic_cast<VirtualQValidator*>(self);
    if (vqvalidator && vqvalidator->isVirtualQValidator) {
        vqvalidator->setQValidator_DisconnectNotify_Callback(reinterpret_cast<VirtualQValidator::QValidator_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QValidator_Sender(const QValidator* self) {
    auto* vqvalidator = const_cast<VirtualQValidator*>(dynamic_cast<const VirtualQValidator*>(self));
    if (vqvalidator && vqvalidator->isVirtualQValidator) {
        return vqvalidator->sender();
    } else {
        return ((VirtualQValidator*)self)->sender();
    }
}

// Base class handler implementation
QObject* QValidator_QBaseSender(const QValidator* self) {
    auto* vqvalidator = const_cast<VirtualQValidator*>(dynamic_cast<const VirtualQValidator*>(self));
    if (vqvalidator && vqvalidator->isVirtualQValidator) {
        vqvalidator->setQValidator_Sender_IsBase(true);
        return vqvalidator->sender();
    } else {
        return ((VirtualQValidator*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QValidator_OnSender(const QValidator* self, intptr_t slot) {
    auto* vqvalidator = const_cast<VirtualQValidator*>(dynamic_cast<const VirtualQValidator*>(self));
    if (vqvalidator && vqvalidator->isVirtualQValidator) {
        vqvalidator->setQValidator_Sender_Callback(reinterpret_cast<VirtualQValidator::QValidator_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QValidator_SenderSignalIndex(const QValidator* self) {
    auto* vqvalidator = const_cast<VirtualQValidator*>(dynamic_cast<const VirtualQValidator*>(self));
    if (vqvalidator && vqvalidator->isVirtualQValidator) {
        return vqvalidator->senderSignalIndex();
    } else {
        return ((VirtualQValidator*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QValidator_QBaseSenderSignalIndex(const QValidator* self) {
    auto* vqvalidator = const_cast<VirtualQValidator*>(dynamic_cast<const VirtualQValidator*>(self));
    if (vqvalidator && vqvalidator->isVirtualQValidator) {
        vqvalidator->setQValidator_SenderSignalIndex_IsBase(true);
        return vqvalidator->senderSignalIndex();
    } else {
        return ((VirtualQValidator*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QValidator_OnSenderSignalIndex(const QValidator* self, intptr_t slot) {
    auto* vqvalidator = const_cast<VirtualQValidator*>(dynamic_cast<const VirtualQValidator*>(self));
    if (vqvalidator && vqvalidator->isVirtualQValidator) {
        vqvalidator->setQValidator_SenderSignalIndex_Callback(reinterpret_cast<VirtualQValidator::QValidator_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QValidator_Receivers(const QValidator* self, const char* signal) {
    auto* vqvalidator = const_cast<VirtualQValidator*>(dynamic_cast<const VirtualQValidator*>(self));
    if (vqvalidator && vqvalidator->isVirtualQValidator) {
        return vqvalidator->receivers(signal);
    } else {
        return ((VirtualQValidator*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QValidator_QBaseReceivers(const QValidator* self, const char* signal) {
    auto* vqvalidator = const_cast<VirtualQValidator*>(dynamic_cast<const VirtualQValidator*>(self));
    if (vqvalidator && vqvalidator->isVirtualQValidator) {
        vqvalidator->setQValidator_Receivers_IsBase(true);
        return vqvalidator->receivers(signal);
    } else {
        return ((VirtualQValidator*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QValidator_OnReceivers(const QValidator* self, intptr_t slot) {
    auto* vqvalidator = const_cast<VirtualQValidator*>(dynamic_cast<const VirtualQValidator*>(self));
    if (vqvalidator && vqvalidator->isVirtualQValidator) {
        vqvalidator->setQValidator_Receivers_Callback(reinterpret_cast<VirtualQValidator::QValidator_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QValidator_IsSignalConnected(const QValidator* self, const QMetaMethod* signal) {
    auto* vqvalidator = const_cast<VirtualQValidator*>(dynamic_cast<const VirtualQValidator*>(self));
    if (vqvalidator && vqvalidator->isVirtualQValidator) {
        return vqvalidator->isSignalConnected(*signal);
    } else {
        return ((VirtualQValidator*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QValidator_QBaseIsSignalConnected(const QValidator* self, const QMetaMethod* signal) {
    auto* vqvalidator = const_cast<VirtualQValidator*>(dynamic_cast<const VirtualQValidator*>(self));
    if (vqvalidator && vqvalidator->isVirtualQValidator) {
        vqvalidator->setQValidator_IsSignalConnected_IsBase(true);
        return vqvalidator->isSignalConnected(*signal);
    } else {
        return ((VirtualQValidator*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QValidator_OnIsSignalConnected(const QValidator* self, intptr_t slot) {
    auto* vqvalidator = const_cast<VirtualQValidator*>(dynamic_cast<const VirtualQValidator*>(self));
    if (vqvalidator && vqvalidator->isVirtualQValidator) {
        vqvalidator->setQValidator_IsSignalConnected_Callback(reinterpret_cast<VirtualQValidator::QValidator_IsSignalConnected_Callback>(slot));
    }
}

void QValidator_Delete(QValidator* self) {
    delete self;
}

QIntValidator* QIntValidator_new() {
    return new VirtualQIntValidator();
}

QIntValidator* QIntValidator_new2(int bottom, int top) {
    return new VirtualQIntValidator(static_cast<int>(bottom), static_cast<int>(top));
}

QIntValidator* QIntValidator_new3(QObject* parent) {
    return new VirtualQIntValidator(parent);
}

QIntValidator* QIntValidator_new4(int bottom, int top, QObject* parent) {
    return new VirtualQIntValidator(static_cast<int>(bottom), static_cast<int>(top), parent);
}

QMetaObject* QIntValidator_MetaObject(const QIntValidator* self) {
    return (QMetaObject*)self->metaObject();
}

void* QIntValidator_Metacast(QIntValidator* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QIntValidator_Metacall(QIntValidator* self, int param1, int param2, void** param3) {
    auto* vqintvalidator = dynamic_cast<VirtualQIntValidator*>(self);
    if (vqintvalidator && vqintvalidator->isVirtualQIntValidator) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQIntValidator*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QIntValidator_OnMetacall(QIntValidator* self, intptr_t slot) {
    auto* vqintvalidator = dynamic_cast<VirtualQIntValidator*>(self);
    if (vqintvalidator && vqintvalidator->isVirtualQIntValidator) {
        vqintvalidator->setQIntValidator_Metacall_Callback(reinterpret_cast<VirtualQIntValidator::QIntValidator_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QIntValidator_QBaseMetacall(QIntValidator* self, int param1, int param2, void** param3) {
    auto* vqintvalidator = dynamic_cast<VirtualQIntValidator*>(self);
    if (vqintvalidator && vqintvalidator->isVirtualQIntValidator) {
        vqintvalidator->setQIntValidator_Metacall_IsBase(true);
        return vqintvalidator->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQIntValidator*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QIntValidator_Tr(const char* s) {
    QString _ret = QIntValidator::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QIntValidator_SetBottom(QIntValidator* self, int bottom) {
    self->setBottom(static_cast<int>(bottom));
}

void QIntValidator_SetTop(QIntValidator* self, int top) {
    self->setTop(static_cast<int>(top));
}

void QIntValidator_SetRange(QIntValidator* self, int bottom, int top) {
    self->setRange(static_cast<int>(bottom), static_cast<int>(top));
}

int QIntValidator_Bottom(const QIntValidator* self) {
    return self->bottom();
}

int QIntValidator_Top(const QIntValidator* self) {
    return self->top();
}

void QIntValidator_BottomChanged(QIntValidator* self, int bottom) {
    self->bottomChanged(static_cast<int>(bottom));
}

void QIntValidator_Connect_BottomChanged(QIntValidator* self, intptr_t slot) {
    void (*slotFunc)(QIntValidator*, int) = reinterpret_cast<void (*)(QIntValidator*, int)>(slot);
    QIntValidator::connect(self, &QIntValidator::bottomChanged, [self, slotFunc](int bottom) {
        int sigval1 = bottom;
        slotFunc(self, sigval1);
    });
}

void QIntValidator_TopChanged(QIntValidator* self, int top) {
    self->topChanged(static_cast<int>(top));
}

void QIntValidator_Connect_TopChanged(QIntValidator* self, intptr_t slot) {
    void (*slotFunc)(QIntValidator*, int) = reinterpret_cast<void (*)(QIntValidator*, int)>(slot);
    QIntValidator::connect(self, &QIntValidator::topChanged, [self, slotFunc](int top) {
        int sigval1 = top;
        slotFunc(self, sigval1);
    });
}

libqt_string QIntValidator_Tr2(const char* s, const char* c) {
    QString _ret = QIntValidator::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QIntValidator_Tr3(const char* s, const char* c, int n) {
    QString _ret = QIntValidator::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

// Derived class handler implementation
int QIntValidator_Validate(const QIntValidator* self, libqt_string param1, int* param2) {
    auto* vqintvalidator = const_cast<VirtualQIntValidator*>(dynamic_cast<const VirtualQIntValidator*>(self));
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    if (vqintvalidator && vqintvalidator->isVirtualQIntValidator) {
        return static_cast<int>(vqintvalidator->validate(param1_QString, static_cast<int&>(*param2)));
    } else {
        return static_cast<int>(self->QIntValidator::validate(param1_QString, static_cast<int&>(*param2)));
    }
}

// Base class handler implementation
int QIntValidator_QBaseValidate(const QIntValidator* self, libqt_string param1, int* param2) {
    auto* vqintvalidator = const_cast<VirtualQIntValidator*>(dynamic_cast<const VirtualQIntValidator*>(self));
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    if (vqintvalidator && vqintvalidator->isVirtualQIntValidator) {
        vqintvalidator->setQIntValidator_Validate_IsBase(true);
        return static_cast<int>(vqintvalidator->validate(param1_QString, static_cast<int&>(*param2)));
    } else {
        return static_cast<int>(self->QIntValidator::validate(param1_QString, static_cast<int&>(*param2)));
    }
}

// Auxiliary method to allow providing re-implementation
void QIntValidator_OnValidate(const QIntValidator* self, intptr_t slot) {
    auto* vqintvalidator = const_cast<VirtualQIntValidator*>(dynamic_cast<const VirtualQIntValidator*>(self));
    if (vqintvalidator && vqintvalidator->isVirtualQIntValidator) {
        vqintvalidator->setQIntValidator_Validate_Callback(reinterpret_cast<VirtualQIntValidator::QIntValidator_Validate_Callback>(slot));
    }
}

// Derived class handler implementation
void QIntValidator_Fixup(const QIntValidator* self, libqt_string input) {
    auto* vqintvalidator = const_cast<VirtualQIntValidator*>(dynamic_cast<const VirtualQIntValidator*>(self));
    QString input_QString = QString::fromUtf8(input.data, input.len);
    if (vqintvalidator && vqintvalidator->isVirtualQIntValidator) {
        vqintvalidator->fixup(input_QString);
    } else {
        self->QIntValidator::fixup(input_QString);
    }
}

// Base class handler implementation
void QIntValidator_QBaseFixup(const QIntValidator* self, libqt_string input) {
    auto* vqintvalidator = const_cast<VirtualQIntValidator*>(dynamic_cast<const VirtualQIntValidator*>(self));
    QString input_QString = QString::fromUtf8(input.data, input.len);
    if (vqintvalidator && vqintvalidator->isVirtualQIntValidator) {
        vqintvalidator->setQIntValidator_Fixup_IsBase(true);
        vqintvalidator->fixup(input_QString);
    } else {
        self->QIntValidator::fixup(input_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QIntValidator_OnFixup(const QIntValidator* self, intptr_t slot) {
    auto* vqintvalidator = const_cast<VirtualQIntValidator*>(dynamic_cast<const VirtualQIntValidator*>(self));
    if (vqintvalidator && vqintvalidator->isVirtualQIntValidator) {
        vqintvalidator->setQIntValidator_Fixup_Callback(reinterpret_cast<VirtualQIntValidator::QIntValidator_Fixup_Callback>(slot));
    }
}

// Derived class handler implementation
bool QIntValidator_Event(QIntValidator* self, QEvent* event) {
    auto* vqintvalidator = dynamic_cast<VirtualQIntValidator*>(self);
    if (vqintvalidator && vqintvalidator->isVirtualQIntValidator) {
        return vqintvalidator->event(event);
    } else {
        return self->QIntValidator::event(event);
    }
}

// Base class handler implementation
bool QIntValidator_QBaseEvent(QIntValidator* self, QEvent* event) {
    auto* vqintvalidator = dynamic_cast<VirtualQIntValidator*>(self);
    if (vqintvalidator && vqintvalidator->isVirtualQIntValidator) {
        vqintvalidator->setQIntValidator_Event_IsBase(true);
        return vqintvalidator->event(event);
    } else {
        return self->QIntValidator::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QIntValidator_OnEvent(QIntValidator* self, intptr_t slot) {
    auto* vqintvalidator = dynamic_cast<VirtualQIntValidator*>(self);
    if (vqintvalidator && vqintvalidator->isVirtualQIntValidator) {
        vqintvalidator->setQIntValidator_Event_Callback(reinterpret_cast<VirtualQIntValidator::QIntValidator_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QIntValidator_EventFilter(QIntValidator* self, QObject* watched, QEvent* event) {
    auto* vqintvalidator = dynamic_cast<VirtualQIntValidator*>(self);
    if (vqintvalidator && vqintvalidator->isVirtualQIntValidator) {
        return vqintvalidator->eventFilter(watched, event);
    } else {
        return self->QIntValidator::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QIntValidator_QBaseEventFilter(QIntValidator* self, QObject* watched, QEvent* event) {
    auto* vqintvalidator = dynamic_cast<VirtualQIntValidator*>(self);
    if (vqintvalidator && vqintvalidator->isVirtualQIntValidator) {
        vqintvalidator->setQIntValidator_EventFilter_IsBase(true);
        return vqintvalidator->eventFilter(watched, event);
    } else {
        return self->QIntValidator::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QIntValidator_OnEventFilter(QIntValidator* self, intptr_t slot) {
    auto* vqintvalidator = dynamic_cast<VirtualQIntValidator*>(self);
    if (vqintvalidator && vqintvalidator->isVirtualQIntValidator) {
        vqintvalidator->setQIntValidator_EventFilter_Callback(reinterpret_cast<VirtualQIntValidator::QIntValidator_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QIntValidator_TimerEvent(QIntValidator* self, QTimerEvent* event) {
    auto* vqintvalidator = dynamic_cast<VirtualQIntValidator*>(self);
    if (vqintvalidator && vqintvalidator->isVirtualQIntValidator) {
        vqintvalidator->timerEvent(event);
    } else {
        ((VirtualQIntValidator*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QIntValidator_QBaseTimerEvent(QIntValidator* self, QTimerEvent* event) {
    auto* vqintvalidator = dynamic_cast<VirtualQIntValidator*>(self);
    if (vqintvalidator && vqintvalidator->isVirtualQIntValidator) {
        vqintvalidator->setQIntValidator_TimerEvent_IsBase(true);
        vqintvalidator->timerEvent(event);
    } else {
        ((VirtualQIntValidator*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QIntValidator_OnTimerEvent(QIntValidator* self, intptr_t slot) {
    auto* vqintvalidator = dynamic_cast<VirtualQIntValidator*>(self);
    if (vqintvalidator && vqintvalidator->isVirtualQIntValidator) {
        vqintvalidator->setQIntValidator_TimerEvent_Callback(reinterpret_cast<VirtualQIntValidator::QIntValidator_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QIntValidator_ChildEvent(QIntValidator* self, QChildEvent* event) {
    auto* vqintvalidator = dynamic_cast<VirtualQIntValidator*>(self);
    if (vqintvalidator && vqintvalidator->isVirtualQIntValidator) {
        vqintvalidator->childEvent(event);
    } else {
        ((VirtualQIntValidator*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QIntValidator_QBaseChildEvent(QIntValidator* self, QChildEvent* event) {
    auto* vqintvalidator = dynamic_cast<VirtualQIntValidator*>(self);
    if (vqintvalidator && vqintvalidator->isVirtualQIntValidator) {
        vqintvalidator->setQIntValidator_ChildEvent_IsBase(true);
        vqintvalidator->childEvent(event);
    } else {
        ((VirtualQIntValidator*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QIntValidator_OnChildEvent(QIntValidator* self, intptr_t slot) {
    auto* vqintvalidator = dynamic_cast<VirtualQIntValidator*>(self);
    if (vqintvalidator && vqintvalidator->isVirtualQIntValidator) {
        vqintvalidator->setQIntValidator_ChildEvent_Callback(reinterpret_cast<VirtualQIntValidator::QIntValidator_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QIntValidator_CustomEvent(QIntValidator* self, QEvent* event) {
    auto* vqintvalidator = dynamic_cast<VirtualQIntValidator*>(self);
    if (vqintvalidator && vqintvalidator->isVirtualQIntValidator) {
        vqintvalidator->customEvent(event);
    } else {
        ((VirtualQIntValidator*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QIntValidator_QBaseCustomEvent(QIntValidator* self, QEvent* event) {
    auto* vqintvalidator = dynamic_cast<VirtualQIntValidator*>(self);
    if (vqintvalidator && vqintvalidator->isVirtualQIntValidator) {
        vqintvalidator->setQIntValidator_CustomEvent_IsBase(true);
        vqintvalidator->customEvent(event);
    } else {
        ((VirtualQIntValidator*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QIntValidator_OnCustomEvent(QIntValidator* self, intptr_t slot) {
    auto* vqintvalidator = dynamic_cast<VirtualQIntValidator*>(self);
    if (vqintvalidator && vqintvalidator->isVirtualQIntValidator) {
        vqintvalidator->setQIntValidator_CustomEvent_Callback(reinterpret_cast<VirtualQIntValidator::QIntValidator_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QIntValidator_ConnectNotify(QIntValidator* self, const QMetaMethod* signal) {
    auto* vqintvalidator = dynamic_cast<VirtualQIntValidator*>(self);
    if (vqintvalidator && vqintvalidator->isVirtualQIntValidator) {
        vqintvalidator->connectNotify(*signal);
    } else {
        ((VirtualQIntValidator*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QIntValidator_QBaseConnectNotify(QIntValidator* self, const QMetaMethod* signal) {
    auto* vqintvalidator = dynamic_cast<VirtualQIntValidator*>(self);
    if (vqintvalidator && vqintvalidator->isVirtualQIntValidator) {
        vqintvalidator->setQIntValidator_ConnectNotify_IsBase(true);
        vqintvalidator->connectNotify(*signal);
    } else {
        ((VirtualQIntValidator*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QIntValidator_OnConnectNotify(QIntValidator* self, intptr_t slot) {
    auto* vqintvalidator = dynamic_cast<VirtualQIntValidator*>(self);
    if (vqintvalidator && vqintvalidator->isVirtualQIntValidator) {
        vqintvalidator->setQIntValidator_ConnectNotify_Callback(reinterpret_cast<VirtualQIntValidator::QIntValidator_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QIntValidator_DisconnectNotify(QIntValidator* self, const QMetaMethod* signal) {
    auto* vqintvalidator = dynamic_cast<VirtualQIntValidator*>(self);
    if (vqintvalidator && vqintvalidator->isVirtualQIntValidator) {
        vqintvalidator->disconnectNotify(*signal);
    } else {
        ((VirtualQIntValidator*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QIntValidator_QBaseDisconnectNotify(QIntValidator* self, const QMetaMethod* signal) {
    auto* vqintvalidator = dynamic_cast<VirtualQIntValidator*>(self);
    if (vqintvalidator && vqintvalidator->isVirtualQIntValidator) {
        vqintvalidator->setQIntValidator_DisconnectNotify_IsBase(true);
        vqintvalidator->disconnectNotify(*signal);
    } else {
        ((VirtualQIntValidator*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QIntValidator_OnDisconnectNotify(QIntValidator* self, intptr_t slot) {
    auto* vqintvalidator = dynamic_cast<VirtualQIntValidator*>(self);
    if (vqintvalidator && vqintvalidator->isVirtualQIntValidator) {
        vqintvalidator->setQIntValidator_DisconnectNotify_Callback(reinterpret_cast<VirtualQIntValidator::QIntValidator_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QIntValidator_Sender(const QIntValidator* self) {
    auto* vqintvalidator = const_cast<VirtualQIntValidator*>(dynamic_cast<const VirtualQIntValidator*>(self));
    if (vqintvalidator && vqintvalidator->isVirtualQIntValidator) {
        return vqintvalidator->sender();
    } else {
        return ((VirtualQIntValidator*)self)->sender();
    }
}

// Base class handler implementation
QObject* QIntValidator_QBaseSender(const QIntValidator* self) {
    auto* vqintvalidator = const_cast<VirtualQIntValidator*>(dynamic_cast<const VirtualQIntValidator*>(self));
    if (vqintvalidator && vqintvalidator->isVirtualQIntValidator) {
        vqintvalidator->setQIntValidator_Sender_IsBase(true);
        return vqintvalidator->sender();
    } else {
        return ((VirtualQIntValidator*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QIntValidator_OnSender(const QIntValidator* self, intptr_t slot) {
    auto* vqintvalidator = const_cast<VirtualQIntValidator*>(dynamic_cast<const VirtualQIntValidator*>(self));
    if (vqintvalidator && vqintvalidator->isVirtualQIntValidator) {
        vqintvalidator->setQIntValidator_Sender_Callback(reinterpret_cast<VirtualQIntValidator::QIntValidator_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QIntValidator_SenderSignalIndex(const QIntValidator* self) {
    auto* vqintvalidator = const_cast<VirtualQIntValidator*>(dynamic_cast<const VirtualQIntValidator*>(self));
    if (vqintvalidator && vqintvalidator->isVirtualQIntValidator) {
        return vqintvalidator->senderSignalIndex();
    } else {
        return ((VirtualQIntValidator*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QIntValidator_QBaseSenderSignalIndex(const QIntValidator* self) {
    auto* vqintvalidator = const_cast<VirtualQIntValidator*>(dynamic_cast<const VirtualQIntValidator*>(self));
    if (vqintvalidator && vqintvalidator->isVirtualQIntValidator) {
        vqintvalidator->setQIntValidator_SenderSignalIndex_IsBase(true);
        return vqintvalidator->senderSignalIndex();
    } else {
        return ((VirtualQIntValidator*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QIntValidator_OnSenderSignalIndex(const QIntValidator* self, intptr_t slot) {
    auto* vqintvalidator = const_cast<VirtualQIntValidator*>(dynamic_cast<const VirtualQIntValidator*>(self));
    if (vqintvalidator && vqintvalidator->isVirtualQIntValidator) {
        vqintvalidator->setQIntValidator_SenderSignalIndex_Callback(reinterpret_cast<VirtualQIntValidator::QIntValidator_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QIntValidator_Receivers(const QIntValidator* self, const char* signal) {
    auto* vqintvalidator = const_cast<VirtualQIntValidator*>(dynamic_cast<const VirtualQIntValidator*>(self));
    if (vqintvalidator && vqintvalidator->isVirtualQIntValidator) {
        return vqintvalidator->receivers(signal);
    } else {
        return ((VirtualQIntValidator*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QIntValidator_QBaseReceivers(const QIntValidator* self, const char* signal) {
    auto* vqintvalidator = const_cast<VirtualQIntValidator*>(dynamic_cast<const VirtualQIntValidator*>(self));
    if (vqintvalidator && vqintvalidator->isVirtualQIntValidator) {
        vqintvalidator->setQIntValidator_Receivers_IsBase(true);
        return vqintvalidator->receivers(signal);
    } else {
        return ((VirtualQIntValidator*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QIntValidator_OnReceivers(const QIntValidator* self, intptr_t slot) {
    auto* vqintvalidator = const_cast<VirtualQIntValidator*>(dynamic_cast<const VirtualQIntValidator*>(self));
    if (vqintvalidator && vqintvalidator->isVirtualQIntValidator) {
        vqintvalidator->setQIntValidator_Receivers_Callback(reinterpret_cast<VirtualQIntValidator::QIntValidator_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QIntValidator_IsSignalConnected(const QIntValidator* self, const QMetaMethod* signal) {
    auto* vqintvalidator = const_cast<VirtualQIntValidator*>(dynamic_cast<const VirtualQIntValidator*>(self));
    if (vqintvalidator && vqintvalidator->isVirtualQIntValidator) {
        return vqintvalidator->isSignalConnected(*signal);
    } else {
        return ((VirtualQIntValidator*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QIntValidator_QBaseIsSignalConnected(const QIntValidator* self, const QMetaMethod* signal) {
    auto* vqintvalidator = const_cast<VirtualQIntValidator*>(dynamic_cast<const VirtualQIntValidator*>(self));
    if (vqintvalidator && vqintvalidator->isVirtualQIntValidator) {
        vqintvalidator->setQIntValidator_IsSignalConnected_IsBase(true);
        return vqintvalidator->isSignalConnected(*signal);
    } else {
        return ((VirtualQIntValidator*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QIntValidator_OnIsSignalConnected(const QIntValidator* self, intptr_t slot) {
    auto* vqintvalidator = const_cast<VirtualQIntValidator*>(dynamic_cast<const VirtualQIntValidator*>(self));
    if (vqintvalidator && vqintvalidator->isVirtualQIntValidator) {
        vqintvalidator->setQIntValidator_IsSignalConnected_Callback(reinterpret_cast<VirtualQIntValidator::QIntValidator_IsSignalConnected_Callback>(slot));
    }
}

void QIntValidator_Delete(QIntValidator* self) {
    delete self;
}

QDoubleValidator* QDoubleValidator_new() {
    return new VirtualQDoubleValidator();
}

QDoubleValidator* QDoubleValidator_new2(double bottom, double top, int decimals) {
    return new VirtualQDoubleValidator(static_cast<double>(bottom), static_cast<double>(top), static_cast<int>(decimals));
}

QDoubleValidator* QDoubleValidator_new3(QObject* parent) {
    return new VirtualQDoubleValidator(parent);
}

QDoubleValidator* QDoubleValidator_new4(double bottom, double top, int decimals, QObject* parent) {
    return new VirtualQDoubleValidator(static_cast<double>(bottom), static_cast<double>(top), static_cast<int>(decimals), parent);
}

QMetaObject* QDoubleValidator_MetaObject(const QDoubleValidator* self) {
    return (QMetaObject*)self->metaObject();
}

void* QDoubleValidator_Metacast(QDoubleValidator* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QDoubleValidator_Metacall(QDoubleValidator* self, int param1, int param2, void** param3) {
    auto* vqdoublevalidator = dynamic_cast<VirtualQDoubleValidator*>(self);
    if (vqdoublevalidator && vqdoublevalidator->isVirtualQDoubleValidator) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQDoubleValidator*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QDoubleValidator_OnMetacall(QDoubleValidator* self, intptr_t slot) {
    auto* vqdoublevalidator = dynamic_cast<VirtualQDoubleValidator*>(self);
    if (vqdoublevalidator && vqdoublevalidator->isVirtualQDoubleValidator) {
        vqdoublevalidator->setQDoubleValidator_Metacall_Callback(reinterpret_cast<VirtualQDoubleValidator::QDoubleValidator_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QDoubleValidator_QBaseMetacall(QDoubleValidator* self, int param1, int param2, void** param3) {
    auto* vqdoublevalidator = dynamic_cast<VirtualQDoubleValidator*>(self);
    if (vqdoublevalidator && vqdoublevalidator->isVirtualQDoubleValidator) {
        vqdoublevalidator->setQDoubleValidator_Metacall_IsBase(true);
        return vqdoublevalidator->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQDoubleValidator*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QDoubleValidator_Tr(const char* s) {
    QString _ret = QDoubleValidator::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QDoubleValidator_SetRange(QDoubleValidator* self, double bottom, double top, int decimals) {
    self->setRange(static_cast<double>(bottom), static_cast<double>(top), static_cast<int>(decimals));
}

void QDoubleValidator_SetRange2(QDoubleValidator* self, double bottom, double top) {
    self->setRange(static_cast<double>(bottom), static_cast<double>(top));
}

void QDoubleValidator_SetBottom(QDoubleValidator* self, double bottom) {
    self->setBottom(static_cast<double>(bottom));
}

void QDoubleValidator_SetTop(QDoubleValidator* self, double top) {
    self->setTop(static_cast<double>(top));
}

void QDoubleValidator_SetDecimals(QDoubleValidator* self, int decimals) {
    self->setDecimals(static_cast<int>(decimals));
}

void QDoubleValidator_SetNotation(QDoubleValidator* self, int notation) {
    self->setNotation(static_cast<QDoubleValidator::Notation>(notation));
}

double QDoubleValidator_Bottom(const QDoubleValidator* self) {
    return self->bottom();
}

double QDoubleValidator_Top(const QDoubleValidator* self) {
    return self->top();
}

int QDoubleValidator_Decimals(const QDoubleValidator* self) {
    return self->decimals();
}

int QDoubleValidator_Notation(const QDoubleValidator* self) {
    return static_cast<int>(self->notation());
}

void QDoubleValidator_BottomChanged(QDoubleValidator* self, double bottom) {
    self->bottomChanged(static_cast<double>(bottom));
}

void QDoubleValidator_Connect_BottomChanged(QDoubleValidator* self, intptr_t slot) {
    void (*slotFunc)(QDoubleValidator*, double) = reinterpret_cast<void (*)(QDoubleValidator*, double)>(slot);
    QDoubleValidator::connect(self, &QDoubleValidator::bottomChanged, [self, slotFunc](double bottom) {
        double sigval1 = bottom;
        slotFunc(self, sigval1);
    });
}

void QDoubleValidator_TopChanged(QDoubleValidator* self, double top) {
    self->topChanged(static_cast<double>(top));
}

void QDoubleValidator_Connect_TopChanged(QDoubleValidator* self, intptr_t slot) {
    void (*slotFunc)(QDoubleValidator*, double) = reinterpret_cast<void (*)(QDoubleValidator*, double)>(slot);
    QDoubleValidator::connect(self, &QDoubleValidator::topChanged, [self, slotFunc](double top) {
        double sigval1 = top;
        slotFunc(self, sigval1);
    });
}

void QDoubleValidator_DecimalsChanged(QDoubleValidator* self, int decimals) {
    self->decimalsChanged(static_cast<int>(decimals));
}

void QDoubleValidator_Connect_DecimalsChanged(QDoubleValidator* self, intptr_t slot) {
    void (*slotFunc)(QDoubleValidator*, int) = reinterpret_cast<void (*)(QDoubleValidator*, int)>(slot);
    QDoubleValidator::connect(self, &QDoubleValidator::decimalsChanged, [self, slotFunc](int decimals) {
        int sigval1 = decimals;
        slotFunc(self, sigval1);
    });
}

void QDoubleValidator_NotationChanged(QDoubleValidator* self, int notation) {
    self->notationChanged(static_cast<QDoubleValidator::Notation>(notation));
}

void QDoubleValidator_Connect_NotationChanged(QDoubleValidator* self, intptr_t slot) {
    void (*slotFunc)(QDoubleValidator*, int) = reinterpret_cast<void (*)(QDoubleValidator*, int)>(slot);
    QDoubleValidator::connect(self, &QDoubleValidator::notationChanged, [self, slotFunc](QDoubleValidator::Notation notation) {
        int sigval1 = static_cast<int>(notation);
        slotFunc(self, sigval1);
    });
}

libqt_string QDoubleValidator_Tr2(const char* s, const char* c) {
    QString _ret = QDoubleValidator::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QDoubleValidator_Tr3(const char* s, const char* c, int n) {
    QString _ret = QDoubleValidator::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

// Derived class handler implementation
int QDoubleValidator_Validate(const QDoubleValidator* self, libqt_string param1, int* param2) {
    auto* vqdoublevalidator = const_cast<VirtualQDoubleValidator*>(dynamic_cast<const VirtualQDoubleValidator*>(self));
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    if (vqdoublevalidator && vqdoublevalidator->isVirtualQDoubleValidator) {
        return static_cast<int>(vqdoublevalidator->validate(param1_QString, static_cast<int&>(*param2)));
    } else {
        return static_cast<int>(self->QDoubleValidator::validate(param1_QString, static_cast<int&>(*param2)));
    }
}

// Base class handler implementation
int QDoubleValidator_QBaseValidate(const QDoubleValidator* self, libqt_string param1, int* param2) {
    auto* vqdoublevalidator = const_cast<VirtualQDoubleValidator*>(dynamic_cast<const VirtualQDoubleValidator*>(self));
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    if (vqdoublevalidator && vqdoublevalidator->isVirtualQDoubleValidator) {
        vqdoublevalidator->setQDoubleValidator_Validate_IsBase(true);
        return static_cast<int>(vqdoublevalidator->validate(param1_QString, static_cast<int&>(*param2)));
    } else {
        return static_cast<int>(self->QDoubleValidator::validate(param1_QString, static_cast<int&>(*param2)));
    }
}

// Auxiliary method to allow providing re-implementation
void QDoubleValidator_OnValidate(const QDoubleValidator* self, intptr_t slot) {
    auto* vqdoublevalidator = const_cast<VirtualQDoubleValidator*>(dynamic_cast<const VirtualQDoubleValidator*>(self));
    if (vqdoublevalidator && vqdoublevalidator->isVirtualQDoubleValidator) {
        vqdoublevalidator->setQDoubleValidator_Validate_Callback(reinterpret_cast<VirtualQDoubleValidator::QDoubleValidator_Validate_Callback>(slot));
    }
}

// Derived class handler implementation
void QDoubleValidator_Fixup(const QDoubleValidator* self, libqt_string input) {
    auto* vqdoublevalidator = const_cast<VirtualQDoubleValidator*>(dynamic_cast<const VirtualQDoubleValidator*>(self));
    QString input_QString = QString::fromUtf8(input.data, input.len);
    if (vqdoublevalidator && vqdoublevalidator->isVirtualQDoubleValidator) {
        vqdoublevalidator->fixup(input_QString);
    } else {
        self->QDoubleValidator::fixup(input_QString);
    }
}

// Base class handler implementation
void QDoubleValidator_QBaseFixup(const QDoubleValidator* self, libqt_string input) {
    auto* vqdoublevalidator = const_cast<VirtualQDoubleValidator*>(dynamic_cast<const VirtualQDoubleValidator*>(self));
    QString input_QString = QString::fromUtf8(input.data, input.len);
    if (vqdoublevalidator && vqdoublevalidator->isVirtualQDoubleValidator) {
        vqdoublevalidator->setQDoubleValidator_Fixup_IsBase(true);
        vqdoublevalidator->fixup(input_QString);
    } else {
        self->QDoubleValidator::fixup(input_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QDoubleValidator_OnFixup(const QDoubleValidator* self, intptr_t slot) {
    auto* vqdoublevalidator = const_cast<VirtualQDoubleValidator*>(dynamic_cast<const VirtualQDoubleValidator*>(self));
    if (vqdoublevalidator && vqdoublevalidator->isVirtualQDoubleValidator) {
        vqdoublevalidator->setQDoubleValidator_Fixup_Callback(reinterpret_cast<VirtualQDoubleValidator::QDoubleValidator_Fixup_Callback>(slot));
    }
}

// Derived class handler implementation
bool QDoubleValidator_Event(QDoubleValidator* self, QEvent* event) {
    auto* vqdoublevalidator = dynamic_cast<VirtualQDoubleValidator*>(self);
    if (vqdoublevalidator && vqdoublevalidator->isVirtualQDoubleValidator) {
        return vqdoublevalidator->event(event);
    } else {
        return self->QDoubleValidator::event(event);
    }
}

// Base class handler implementation
bool QDoubleValidator_QBaseEvent(QDoubleValidator* self, QEvent* event) {
    auto* vqdoublevalidator = dynamic_cast<VirtualQDoubleValidator*>(self);
    if (vqdoublevalidator && vqdoublevalidator->isVirtualQDoubleValidator) {
        vqdoublevalidator->setQDoubleValidator_Event_IsBase(true);
        return vqdoublevalidator->event(event);
    } else {
        return self->QDoubleValidator::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDoubleValidator_OnEvent(QDoubleValidator* self, intptr_t slot) {
    auto* vqdoublevalidator = dynamic_cast<VirtualQDoubleValidator*>(self);
    if (vqdoublevalidator && vqdoublevalidator->isVirtualQDoubleValidator) {
        vqdoublevalidator->setQDoubleValidator_Event_Callback(reinterpret_cast<VirtualQDoubleValidator::QDoubleValidator_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QDoubleValidator_EventFilter(QDoubleValidator* self, QObject* watched, QEvent* event) {
    auto* vqdoublevalidator = dynamic_cast<VirtualQDoubleValidator*>(self);
    if (vqdoublevalidator && vqdoublevalidator->isVirtualQDoubleValidator) {
        return vqdoublevalidator->eventFilter(watched, event);
    } else {
        return self->QDoubleValidator::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QDoubleValidator_QBaseEventFilter(QDoubleValidator* self, QObject* watched, QEvent* event) {
    auto* vqdoublevalidator = dynamic_cast<VirtualQDoubleValidator*>(self);
    if (vqdoublevalidator && vqdoublevalidator->isVirtualQDoubleValidator) {
        vqdoublevalidator->setQDoubleValidator_EventFilter_IsBase(true);
        return vqdoublevalidator->eventFilter(watched, event);
    } else {
        return self->QDoubleValidator::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDoubleValidator_OnEventFilter(QDoubleValidator* self, intptr_t slot) {
    auto* vqdoublevalidator = dynamic_cast<VirtualQDoubleValidator*>(self);
    if (vqdoublevalidator && vqdoublevalidator->isVirtualQDoubleValidator) {
        vqdoublevalidator->setQDoubleValidator_EventFilter_Callback(reinterpret_cast<VirtualQDoubleValidator::QDoubleValidator_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QDoubleValidator_TimerEvent(QDoubleValidator* self, QTimerEvent* event) {
    auto* vqdoublevalidator = dynamic_cast<VirtualQDoubleValidator*>(self);
    if (vqdoublevalidator && vqdoublevalidator->isVirtualQDoubleValidator) {
        vqdoublevalidator->timerEvent(event);
    } else {
        ((VirtualQDoubleValidator*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QDoubleValidator_QBaseTimerEvent(QDoubleValidator* self, QTimerEvent* event) {
    auto* vqdoublevalidator = dynamic_cast<VirtualQDoubleValidator*>(self);
    if (vqdoublevalidator && vqdoublevalidator->isVirtualQDoubleValidator) {
        vqdoublevalidator->setQDoubleValidator_TimerEvent_IsBase(true);
        vqdoublevalidator->timerEvent(event);
    } else {
        ((VirtualQDoubleValidator*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDoubleValidator_OnTimerEvent(QDoubleValidator* self, intptr_t slot) {
    auto* vqdoublevalidator = dynamic_cast<VirtualQDoubleValidator*>(self);
    if (vqdoublevalidator && vqdoublevalidator->isVirtualQDoubleValidator) {
        vqdoublevalidator->setQDoubleValidator_TimerEvent_Callback(reinterpret_cast<VirtualQDoubleValidator::QDoubleValidator_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDoubleValidator_ChildEvent(QDoubleValidator* self, QChildEvent* event) {
    auto* vqdoublevalidator = dynamic_cast<VirtualQDoubleValidator*>(self);
    if (vqdoublevalidator && vqdoublevalidator->isVirtualQDoubleValidator) {
        vqdoublevalidator->childEvent(event);
    } else {
        ((VirtualQDoubleValidator*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QDoubleValidator_QBaseChildEvent(QDoubleValidator* self, QChildEvent* event) {
    auto* vqdoublevalidator = dynamic_cast<VirtualQDoubleValidator*>(self);
    if (vqdoublevalidator && vqdoublevalidator->isVirtualQDoubleValidator) {
        vqdoublevalidator->setQDoubleValidator_ChildEvent_IsBase(true);
        vqdoublevalidator->childEvent(event);
    } else {
        ((VirtualQDoubleValidator*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDoubleValidator_OnChildEvent(QDoubleValidator* self, intptr_t slot) {
    auto* vqdoublevalidator = dynamic_cast<VirtualQDoubleValidator*>(self);
    if (vqdoublevalidator && vqdoublevalidator->isVirtualQDoubleValidator) {
        vqdoublevalidator->setQDoubleValidator_ChildEvent_Callback(reinterpret_cast<VirtualQDoubleValidator::QDoubleValidator_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDoubleValidator_CustomEvent(QDoubleValidator* self, QEvent* event) {
    auto* vqdoublevalidator = dynamic_cast<VirtualQDoubleValidator*>(self);
    if (vqdoublevalidator && vqdoublevalidator->isVirtualQDoubleValidator) {
        vqdoublevalidator->customEvent(event);
    } else {
        ((VirtualQDoubleValidator*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QDoubleValidator_QBaseCustomEvent(QDoubleValidator* self, QEvent* event) {
    auto* vqdoublevalidator = dynamic_cast<VirtualQDoubleValidator*>(self);
    if (vqdoublevalidator && vqdoublevalidator->isVirtualQDoubleValidator) {
        vqdoublevalidator->setQDoubleValidator_CustomEvent_IsBase(true);
        vqdoublevalidator->customEvent(event);
    } else {
        ((VirtualQDoubleValidator*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDoubleValidator_OnCustomEvent(QDoubleValidator* self, intptr_t slot) {
    auto* vqdoublevalidator = dynamic_cast<VirtualQDoubleValidator*>(self);
    if (vqdoublevalidator && vqdoublevalidator->isVirtualQDoubleValidator) {
        vqdoublevalidator->setQDoubleValidator_CustomEvent_Callback(reinterpret_cast<VirtualQDoubleValidator::QDoubleValidator_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDoubleValidator_ConnectNotify(QDoubleValidator* self, const QMetaMethod* signal) {
    auto* vqdoublevalidator = dynamic_cast<VirtualQDoubleValidator*>(self);
    if (vqdoublevalidator && vqdoublevalidator->isVirtualQDoubleValidator) {
        vqdoublevalidator->connectNotify(*signal);
    } else {
        ((VirtualQDoubleValidator*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QDoubleValidator_QBaseConnectNotify(QDoubleValidator* self, const QMetaMethod* signal) {
    auto* vqdoublevalidator = dynamic_cast<VirtualQDoubleValidator*>(self);
    if (vqdoublevalidator && vqdoublevalidator->isVirtualQDoubleValidator) {
        vqdoublevalidator->setQDoubleValidator_ConnectNotify_IsBase(true);
        vqdoublevalidator->connectNotify(*signal);
    } else {
        ((VirtualQDoubleValidator*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QDoubleValidator_OnConnectNotify(QDoubleValidator* self, intptr_t slot) {
    auto* vqdoublevalidator = dynamic_cast<VirtualQDoubleValidator*>(self);
    if (vqdoublevalidator && vqdoublevalidator->isVirtualQDoubleValidator) {
        vqdoublevalidator->setQDoubleValidator_ConnectNotify_Callback(reinterpret_cast<VirtualQDoubleValidator::QDoubleValidator_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QDoubleValidator_DisconnectNotify(QDoubleValidator* self, const QMetaMethod* signal) {
    auto* vqdoublevalidator = dynamic_cast<VirtualQDoubleValidator*>(self);
    if (vqdoublevalidator && vqdoublevalidator->isVirtualQDoubleValidator) {
        vqdoublevalidator->disconnectNotify(*signal);
    } else {
        ((VirtualQDoubleValidator*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QDoubleValidator_QBaseDisconnectNotify(QDoubleValidator* self, const QMetaMethod* signal) {
    auto* vqdoublevalidator = dynamic_cast<VirtualQDoubleValidator*>(self);
    if (vqdoublevalidator && vqdoublevalidator->isVirtualQDoubleValidator) {
        vqdoublevalidator->setQDoubleValidator_DisconnectNotify_IsBase(true);
        vqdoublevalidator->disconnectNotify(*signal);
    } else {
        ((VirtualQDoubleValidator*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QDoubleValidator_OnDisconnectNotify(QDoubleValidator* self, intptr_t slot) {
    auto* vqdoublevalidator = dynamic_cast<VirtualQDoubleValidator*>(self);
    if (vqdoublevalidator && vqdoublevalidator->isVirtualQDoubleValidator) {
        vqdoublevalidator->setQDoubleValidator_DisconnectNotify_Callback(reinterpret_cast<VirtualQDoubleValidator::QDoubleValidator_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QDoubleValidator_Sender(const QDoubleValidator* self) {
    auto* vqdoublevalidator = const_cast<VirtualQDoubleValidator*>(dynamic_cast<const VirtualQDoubleValidator*>(self));
    if (vqdoublevalidator && vqdoublevalidator->isVirtualQDoubleValidator) {
        return vqdoublevalidator->sender();
    } else {
        return ((VirtualQDoubleValidator*)self)->sender();
    }
}

// Base class handler implementation
QObject* QDoubleValidator_QBaseSender(const QDoubleValidator* self) {
    auto* vqdoublevalidator = const_cast<VirtualQDoubleValidator*>(dynamic_cast<const VirtualQDoubleValidator*>(self));
    if (vqdoublevalidator && vqdoublevalidator->isVirtualQDoubleValidator) {
        vqdoublevalidator->setQDoubleValidator_Sender_IsBase(true);
        return vqdoublevalidator->sender();
    } else {
        return ((VirtualQDoubleValidator*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QDoubleValidator_OnSender(const QDoubleValidator* self, intptr_t slot) {
    auto* vqdoublevalidator = const_cast<VirtualQDoubleValidator*>(dynamic_cast<const VirtualQDoubleValidator*>(self));
    if (vqdoublevalidator && vqdoublevalidator->isVirtualQDoubleValidator) {
        vqdoublevalidator->setQDoubleValidator_Sender_Callback(reinterpret_cast<VirtualQDoubleValidator::QDoubleValidator_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QDoubleValidator_SenderSignalIndex(const QDoubleValidator* self) {
    auto* vqdoublevalidator = const_cast<VirtualQDoubleValidator*>(dynamic_cast<const VirtualQDoubleValidator*>(self));
    if (vqdoublevalidator && vqdoublevalidator->isVirtualQDoubleValidator) {
        return vqdoublevalidator->senderSignalIndex();
    } else {
        return ((VirtualQDoubleValidator*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QDoubleValidator_QBaseSenderSignalIndex(const QDoubleValidator* self) {
    auto* vqdoublevalidator = const_cast<VirtualQDoubleValidator*>(dynamic_cast<const VirtualQDoubleValidator*>(self));
    if (vqdoublevalidator && vqdoublevalidator->isVirtualQDoubleValidator) {
        vqdoublevalidator->setQDoubleValidator_SenderSignalIndex_IsBase(true);
        return vqdoublevalidator->senderSignalIndex();
    } else {
        return ((VirtualQDoubleValidator*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QDoubleValidator_OnSenderSignalIndex(const QDoubleValidator* self, intptr_t slot) {
    auto* vqdoublevalidator = const_cast<VirtualQDoubleValidator*>(dynamic_cast<const VirtualQDoubleValidator*>(self));
    if (vqdoublevalidator && vqdoublevalidator->isVirtualQDoubleValidator) {
        vqdoublevalidator->setQDoubleValidator_SenderSignalIndex_Callback(reinterpret_cast<VirtualQDoubleValidator::QDoubleValidator_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QDoubleValidator_Receivers(const QDoubleValidator* self, const char* signal) {
    auto* vqdoublevalidator = const_cast<VirtualQDoubleValidator*>(dynamic_cast<const VirtualQDoubleValidator*>(self));
    if (vqdoublevalidator && vqdoublevalidator->isVirtualQDoubleValidator) {
        return vqdoublevalidator->receivers(signal);
    } else {
        return ((VirtualQDoubleValidator*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QDoubleValidator_QBaseReceivers(const QDoubleValidator* self, const char* signal) {
    auto* vqdoublevalidator = const_cast<VirtualQDoubleValidator*>(dynamic_cast<const VirtualQDoubleValidator*>(self));
    if (vqdoublevalidator && vqdoublevalidator->isVirtualQDoubleValidator) {
        vqdoublevalidator->setQDoubleValidator_Receivers_IsBase(true);
        return vqdoublevalidator->receivers(signal);
    } else {
        return ((VirtualQDoubleValidator*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QDoubleValidator_OnReceivers(const QDoubleValidator* self, intptr_t slot) {
    auto* vqdoublevalidator = const_cast<VirtualQDoubleValidator*>(dynamic_cast<const VirtualQDoubleValidator*>(self));
    if (vqdoublevalidator && vqdoublevalidator->isVirtualQDoubleValidator) {
        vqdoublevalidator->setQDoubleValidator_Receivers_Callback(reinterpret_cast<VirtualQDoubleValidator::QDoubleValidator_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QDoubleValidator_IsSignalConnected(const QDoubleValidator* self, const QMetaMethod* signal) {
    auto* vqdoublevalidator = const_cast<VirtualQDoubleValidator*>(dynamic_cast<const VirtualQDoubleValidator*>(self));
    if (vqdoublevalidator && vqdoublevalidator->isVirtualQDoubleValidator) {
        return vqdoublevalidator->isSignalConnected(*signal);
    } else {
        return ((VirtualQDoubleValidator*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QDoubleValidator_QBaseIsSignalConnected(const QDoubleValidator* self, const QMetaMethod* signal) {
    auto* vqdoublevalidator = const_cast<VirtualQDoubleValidator*>(dynamic_cast<const VirtualQDoubleValidator*>(self));
    if (vqdoublevalidator && vqdoublevalidator->isVirtualQDoubleValidator) {
        vqdoublevalidator->setQDoubleValidator_IsSignalConnected_IsBase(true);
        return vqdoublevalidator->isSignalConnected(*signal);
    } else {
        return ((VirtualQDoubleValidator*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QDoubleValidator_OnIsSignalConnected(const QDoubleValidator* self, intptr_t slot) {
    auto* vqdoublevalidator = const_cast<VirtualQDoubleValidator*>(dynamic_cast<const VirtualQDoubleValidator*>(self));
    if (vqdoublevalidator && vqdoublevalidator->isVirtualQDoubleValidator) {
        vqdoublevalidator->setQDoubleValidator_IsSignalConnected_Callback(reinterpret_cast<VirtualQDoubleValidator::QDoubleValidator_IsSignalConnected_Callback>(slot));
    }
}

void QDoubleValidator_Delete(QDoubleValidator* self) {
    delete self;
}

QRegularExpressionValidator* QRegularExpressionValidator_new() {
    return new VirtualQRegularExpressionValidator();
}

QRegularExpressionValidator* QRegularExpressionValidator_new2(const QRegularExpression* re) {
    return new VirtualQRegularExpressionValidator(*re);
}

QRegularExpressionValidator* QRegularExpressionValidator_new3(QObject* parent) {
    return new VirtualQRegularExpressionValidator(parent);
}

QRegularExpressionValidator* QRegularExpressionValidator_new4(const QRegularExpression* re, QObject* parent) {
    return new VirtualQRegularExpressionValidator(*re, parent);
}

QMetaObject* QRegularExpressionValidator_MetaObject(const QRegularExpressionValidator* self) {
    return (QMetaObject*)self->metaObject();
}

void* QRegularExpressionValidator_Metacast(QRegularExpressionValidator* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QRegularExpressionValidator_Metacall(QRegularExpressionValidator* self, int param1, int param2, void** param3) {
    auto* vqregularexpressionvalidator = dynamic_cast<VirtualQRegularExpressionValidator*>(self);
    if (vqregularexpressionvalidator && vqregularexpressionvalidator->isVirtualQRegularExpressionValidator) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQRegularExpressionValidator*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QRegularExpressionValidator_OnMetacall(QRegularExpressionValidator* self, intptr_t slot) {
    auto* vqregularexpressionvalidator = dynamic_cast<VirtualQRegularExpressionValidator*>(self);
    if (vqregularexpressionvalidator && vqregularexpressionvalidator->isVirtualQRegularExpressionValidator) {
        vqregularexpressionvalidator->setQRegularExpressionValidator_Metacall_Callback(reinterpret_cast<VirtualQRegularExpressionValidator::QRegularExpressionValidator_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QRegularExpressionValidator_QBaseMetacall(QRegularExpressionValidator* self, int param1, int param2, void** param3) {
    auto* vqregularexpressionvalidator = dynamic_cast<VirtualQRegularExpressionValidator*>(self);
    if (vqregularexpressionvalidator && vqregularexpressionvalidator->isVirtualQRegularExpressionValidator) {
        vqregularexpressionvalidator->setQRegularExpressionValidator_Metacall_IsBase(true);
        return vqregularexpressionvalidator->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQRegularExpressionValidator*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QRegularExpressionValidator_Tr(const char* s) {
    QString _ret = QRegularExpressionValidator::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QRegularExpression* QRegularExpressionValidator_RegularExpression(const QRegularExpressionValidator* self) {
    return new QRegularExpression(self->regularExpression());
}

void QRegularExpressionValidator_SetRegularExpression(QRegularExpressionValidator* self, const QRegularExpression* re) {
    self->setRegularExpression(*re);
}

void QRegularExpressionValidator_RegularExpressionChanged(QRegularExpressionValidator* self, const QRegularExpression* re) {
    self->regularExpressionChanged(*re);
}

void QRegularExpressionValidator_Connect_RegularExpressionChanged(QRegularExpressionValidator* self, intptr_t slot) {
    void (*slotFunc)(QRegularExpressionValidator*, QRegularExpression*) = reinterpret_cast<void (*)(QRegularExpressionValidator*, QRegularExpression*)>(slot);
    QRegularExpressionValidator::connect(self, &QRegularExpressionValidator::regularExpressionChanged, [self, slotFunc](const QRegularExpression& re) {
        const QRegularExpression& re_ret = re;
        // Cast returned reference into pointer
        QRegularExpression* sigval1 = const_cast<QRegularExpression*>(&re_ret);
        slotFunc(self, sigval1);
    });
}

libqt_string QRegularExpressionValidator_Tr2(const char* s, const char* c) {
    QString _ret = QRegularExpressionValidator::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QRegularExpressionValidator_Tr3(const char* s, const char* c, int n) {
    QString _ret = QRegularExpressionValidator::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

// Derived class handler implementation
int QRegularExpressionValidator_Validate(const QRegularExpressionValidator* self, libqt_string input, int* pos) {
    auto* vqregularexpressionvalidator = const_cast<VirtualQRegularExpressionValidator*>(dynamic_cast<const VirtualQRegularExpressionValidator*>(self));
    QString input_QString = QString::fromUtf8(input.data, input.len);
    if (vqregularexpressionvalidator && vqregularexpressionvalidator->isVirtualQRegularExpressionValidator) {
        return static_cast<int>(vqregularexpressionvalidator->validate(input_QString, static_cast<int&>(*pos)));
    } else {
        return static_cast<int>(self->QRegularExpressionValidator::validate(input_QString, static_cast<int&>(*pos)));
    }
}

// Base class handler implementation
int QRegularExpressionValidator_QBaseValidate(const QRegularExpressionValidator* self, libqt_string input, int* pos) {
    auto* vqregularexpressionvalidator = const_cast<VirtualQRegularExpressionValidator*>(dynamic_cast<const VirtualQRegularExpressionValidator*>(self));
    QString input_QString = QString::fromUtf8(input.data, input.len);
    if (vqregularexpressionvalidator && vqregularexpressionvalidator->isVirtualQRegularExpressionValidator) {
        vqregularexpressionvalidator->setQRegularExpressionValidator_Validate_IsBase(true);
        return static_cast<int>(vqregularexpressionvalidator->validate(input_QString, static_cast<int&>(*pos)));
    } else {
        return static_cast<int>(self->QRegularExpressionValidator::validate(input_QString, static_cast<int&>(*pos)));
    }
}

// Auxiliary method to allow providing re-implementation
void QRegularExpressionValidator_OnValidate(const QRegularExpressionValidator* self, intptr_t slot) {
    auto* vqregularexpressionvalidator = const_cast<VirtualQRegularExpressionValidator*>(dynamic_cast<const VirtualQRegularExpressionValidator*>(self));
    if (vqregularexpressionvalidator && vqregularexpressionvalidator->isVirtualQRegularExpressionValidator) {
        vqregularexpressionvalidator->setQRegularExpressionValidator_Validate_Callback(reinterpret_cast<VirtualQRegularExpressionValidator::QRegularExpressionValidator_Validate_Callback>(slot));
    }
}

// Derived class handler implementation
void QRegularExpressionValidator_Fixup(const QRegularExpressionValidator* self, libqt_string param1) {
    auto* vqregularexpressionvalidator = const_cast<VirtualQRegularExpressionValidator*>(dynamic_cast<const VirtualQRegularExpressionValidator*>(self));
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    if (vqregularexpressionvalidator && vqregularexpressionvalidator->isVirtualQRegularExpressionValidator) {
        vqregularexpressionvalidator->fixup(param1_QString);
    } else {
        self->QRegularExpressionValidator::fixup(param1_QString);
    }
}

// Base class handler implementation
void QRegularExpressionValidator_QBaseFixup(const QRegularExpressionValidator* self, libqt_string param1) {
    auto* vqregularexpressionvalidator = const_cast<VirtualQRegularExpressionValidator*>(dynamic_cast<const VirtualQRegularExpressionValidator*>(self));
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    if (vqregularexpressionvalidator && vqregularexpressionvalidator->isVirtualQRegularExpressionValidator) {
        vqregularexpressionvalidator->setQRegularExpressionValidator_Fixup_IsBase(true);
        vqregularexpressionvalidator->fixup(param1_QString);
    } else {
        self->QRegularExpressionValidator::fixup(param1_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QRegularExpressionValidator_OnFixup(const QRegularExpressionValidator* self, intptr_t slot) {
    auto* vqregularexpressionvalidator = const_cast<VirtualQRegularExpressionValidator*>(dynamic_cast<const VirtualQRegularExpressionValidator*>(self));
    if (vqregularexpressionvalidator && vqregularexpressionvalidator->isVirtualQRegularExpressionValidator) {
        vqregularexpressionvalidator->setQRegularExpressionValidator_Fixup_Callback(reinterpret_cast<VirtualQRegularExpressionValidator::QRegularExpressionValidator_Fixup_Callback>(slot));
    }
}

// Derived class handler implementation
bool QRegularExpressionValidator_Event(QRegularExpressionValidator* self, QEvent* event) {
    auto* vqregularexpressionvalidator = dynamic_cast<VirtualQRegularExpressionValidator*>(self);
    if (vqregularexpressionvalidator && vqregularexpressionvalidator->isVirtualQRegularExpressionValidator) {
        return vqregularexpressionvalidator->event(event);
    } else {
        return self->QRegularExpressionValidator::event(event);
    }
}

// Base class handler implementation
bool QRegularExpressionValidator_QBaseEvent(QRegularExpressionValidator* self, QEvent* event) {
    auto* vqregularexpressionvalidator = dynamic_cast<VirtualQRegularExpressionValidator*>(self);
    if (vqregularexpressionvalidator && vqregularexpressionvalidator->isVirtualQRegularExpressionValidator) {
        vqregularexpressionvalidator->setQRegularExpressionValidator_Event_IsBase(true);
        return vqregularexpressionvalidator->event(event);
    } else {
        return self->QRegularExpressionValidator::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QRegularExpressionValidator_OnEvent(QRegularExpressionValidator* self, intptr_t slot) {
    auto* vqregularexpressionvalidator = dynamic_cast<VirtualQRegularExpressionValidator*>(self);
    if (vqregularexpressionvalidator && vqregularexpressionvalidator->isVirtualQRegularExpressionValidator) {
        vqregularexpressionvalidator->setQRegularExpressionValidator_Event_Callback(reinterpret_cast<VirtualQRegularExpressionValidator::QRegularExpressionValidator_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QRegularExpressionValidator_EventFilter(QRegularExpressionValidator* self, QObject* watched, QEvent* event) {
    auto* vqregularexpressionvalidator = dynamic_cast<VirtualQRegularExpressionValidator*>(self);
    if (vqregularexpressionvalidator && vqregularexpressionvalidator->isVirtualQRegularExpressionValidator) {
        return vqregularexpressionvalidator->eventFilter(watched, event);
    } else {
        return self->QRegularExpressionValidator::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QRegularExpressionValidator_QBaseEventFilter(QRegularExpressionValidator* self, QObject* watched, QEvent* event) {
    auto* vqregularexpressionvalidator = dynamic_cast<VirtualQRegularExpressionValidator*>(self);
    if (vqregularexpressionvalidator && vqregularexpressionvalidator->isVirtualQRegularExpressionValidator) {
        vqregularexpressionvalidator->setQRegularExpressionValidator_EventFilter_IsBase(true);
        return vqregularexpressionvalidator->eventFilter(watched, event);
    } else {
        return self->QRegularExpressionValidator::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QRegularExpressionValidator_OnEventFilter(QRegularExpressionValidator* self, intptr_t slot) {
    auto* vqregularexpressionvalidator = dynamic_cast<VirtualQRegularExpressionValidator*>(self);
    if (vqregularexpressionvalidator && vqregularexpressionvalidator->isVirtualQRegularExpressionValidator) {
        vqregularexpressionvalidator->setQRegularExpressionValidator_EventFilter_Callback(reinterpret_cast<VirtualQRegularExpressionValidator::QRegularExpressionValidator_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QRegularExpressionValidator_TimerEvent(QRegularExpressionValidator* self, QTimerEvent* event) {
    auto* vqregularexpressionvalidator = dynamic_cast<VirtualQRegularExpressionValidator*>(self);
    if (vqregularexpressionvalidator && vqregularexpressionvalidator->isVirtualQRegularExpressionValidator) {
        vqregularexpressionvalidator->timerEvent(event);
    } else {
        ((VirtualQRegularExpressionValidator*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QRegularExpressionValidator_QBaseTimerEvent(QRegularExpressionValidator* self, QTimerEvent* event) {
    auto* vqregularexpressionvalidator = dynamic_cast<VirtualQRegularExpressionValidator*>(self);
    if (vqregularexpressionvalidator && vqregularexpressionvalidator->isVirtualQRegularExpressionValidator) {
        vqregularexpressionvalidator->setQRegularExpressionValidator_TimerEvent_IsBase(true);
        vqregularexpressionvalidator->timerEvent(event);
    } else {
        ((VirtualQRegularExpressionValidator*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QRegularExpressionValidator_OnTimerEvent(QRegularExpressionValidator* self, intptr_t slot) {
    auto* vqregularexpressionvalidator = dynamic_cast<VirtualQRegularExpressionValidator*>(self);
    if (vqregularexpressionvalidator && vqregularexpressionvalidator->isVirtualQRegularExpressionValidator) {
        vqregularexpressionvalidator->setQRegularExpressionValidator_TimerEvent_Callback(reinterpret_cast<VirtualQRegularExpressionValidator::QRegularExpressionValidator_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QRegularExpressionValidator_ChildEvent(QRegularExpressionValidator* self, QChildEvent* event) {
    auto* vqregularexpressionvalidator = dynamic_cast<VirtualQRegularExpressionValidator*>(self);
    if (vqregularexpressionvalidator && vqregularexpressionvalidator->isVirtualQRegularExpressionValidator) {
        vqregularexpressionvalidator->childEvent(event);
    } else {
        ((VirtualQRegularExpressionValidator*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QRegularExpressionValidator_QBaseChildEvent(QRegularExpressionValidator* self, QChildEvent* event) {
    auto* vqregularexpressionvalidator = dynamic_cast<VirtualQRegularExpressionValidator*>(self);
    if (vqregularexpressionvalidator && vqregularexpressionvalidator->isVirtualQRegularExpressionValidator) {
        vqregularexpressionvalidator->setQRegularExpressionValidator_ChildEvent_IsBase(true);
        vqregularexpressionvalidator->childEvent(event);
    } else {
        ((VirtualQRegularExpressionValidator*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QRegularExpressionValidator_OnChildEvent(QRegularExpressionValidator* self, intptr_t slot) {
    auto* vqregularexpressionvalidator = dynamic_cast<VirtualQRegularExpressionValidator*>(self);
    if (vqregularexpressionvalidator && vqregularexpressionvalidator->isVirtualQRegularExpressionValidator) {
        vqregularexpressionvalidator->setQRegularExpressionValidator_ChildEvent_Callback(reinterpret_cast<VirtualQRegularExpressionValidator::QRegularExpressionValidator_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QRegularExpressionValidator_CustomEvent(QRegularExpressionValidator* self, QEvent* event) {
    auto* vqregularexpressionvalidator = dynamic_cast<VirtualQRegularExpressionValidator*>(self);
    if (vqregularexpressionvalidator && vqregularexpressionvalidator->isVirtualQRegularExpressionValidator) {
        vqregularexpressionvalidator->customEvent(event);
    } else {
        ((VirtualQRegularExpressionValidator*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QRegularExpressionValidator_QBaseCustomEvent(QRegularExpressionValidator* self, QEvent* event) {
    auto* vqregularexpressionvalidator = dynamic_cast<VirtualQRegularExpressionValidator*>(self);
    if (vqregularexpressionvalidator && vqregularexpressionvalidator->isVirtualQRegularExpressionValidator) {
        vqregularexpressionvalidator->setQRegularExpressionValidator_CustomEvent_IsBase(true);
        vqregularexpressionvalidator->customEvent(event);
    } else {
        ((VirtualQRegularExpressionValidator*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QRegularExpressionValidator_OnCustomEvent(QRegularExpressionValidator* self, intptr_t slot) {
    auto* vqregularexpressionvalidator = dynamic_cast<VirtualQRegularExpressionValidator*>(self);
    if (vqregularexpressionvalidator && vqregularexpressionvalidator->isVirtualQRegularExpressionValidator) {
        vqregularexpressionvalidator->setQRegularExpressionValidator_CustomEvent_Callback(reinterpret_cast<VirtualQRegularExpressionValidator::QRegularExpressionValidator_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QRegularExpressionValidator_ConnectNotify(QRegularExpressionValidator* self, const QMetaMethod* signal) {
    auto* vqregularexpressionvalidator = dynamic_cast<VirtualQRegularExpressionValidator*>(self);
    if (vqregularexpressionvalidator && vqregularexpressionvalidator->isVirtualQRegularExpressionValidator) {
        vqregularexpressionvalidator->connectNotify(*signal);
    } else {
        ((VirtualQRegularExpressionValidator*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QRegularExpressionValidator_QBaseConnectNotify(QRegularExpressionValidator* self, const QMetaMethod* signal) {
    auto* vqregularexpressionvalidator = dynamic_cast<VirtualQRegularExpressionValidator*>(self);
    if (vqregularexpressionvalidator && vqregularexpressionvalidator->isVirtualQRegularExpressionValidator) {
        vqregularexpressionvalidator->setQRegularExpressionValidator_ConnectNotify_IsBase(true);
        vqregularexpressionvalidator->connectNotify(*signal);
    } else {
        ((VirtualQRegularExpressionValidator*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QRegularExpressionValidator_OnConnectNotify(QRegularExpressionValidator* self, intptr_t slot) {
    auto* vqregularexpressionvalidator = dynamic_cast<VirtualQRegularExpressionValidator*>(self);
    if (vqregularexpressionvalidator && vqregularexpressionvalidator->isVirtualQRegularExpressionValidator) {
        vqregularexpressionvalidator->setQRegularExpressionValidator_ConnectNotify_Callback(reinterpret_cast<VirtualQRegularExpressionValidator::QRegularExpressionValidator_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QRegularExpressionValidator_DisconnectNotify(QRegularExpressionValidator* self, const QMetaMethod* signal) {
    auto* vqregularexpressionvalidator = dynamic_cast<VirtualQRegularExpressionValidator*>(self);
    if (vqregularexpressionvalidator && vqregularexpressionvalidator->isVirtualQRegularExpressionValidator) {
        vqregularexpressionvalidator->disconnectNotify(*signal);
    } else {
        ((VirtualQRegularExpressionValidator*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QRegularExpressionValidator_QBaseDisconnectNotify(QRegularExpressionValidator* self, const QMetaMethod* signal) {
    auto* vqregularexpressionvalidator = dynamic_cast<VirtualQRegularExpressionValidator*>(self);
    if (vqregularexpressionvalidator && vqregularexpressionvalidator->isVirtualQRegularExpressionValidator) {
        vqregularexpressionvalidator->setQRegularExpressionValidator_DisconnectNotify_IsBase(true);
        vqregularexpressionvalidator->disconnectNotify(*signal);
    } else {
        ((VirtualQRegularExpressionValidator*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QRegularExpressionValidator_OnDisconnectNotify(QRegularExpressionValidator* self, intptr_t slot) {
    auto* vqregularexpressionvalidator = dynamic_cast<VirtualQRegularExpressionValidator*>(self);
    if (vqregularexpressionvalidator && vqregularexpressionvalidator->isVirtualQRegularExpressionValidator) {
        vqregularexpressionvalidator->setQRegularExpressionValidator_DisconnectNotify_Callback(reinterpret_cast<VirtualQRegularExpressionValidator::QRegularExpressionValidator_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QRegularExpressionValidator_Sender(const QRegularExpressionValidator* self) {
    auto* vqregularexpressionvalidator = const_cast<VirtualQRegularExpressionValidator*>(dynamic_cast<const VirtualQRegularExpressionValidator*>(self));
    if (vqregularexpressionvalidator && vqregularexpressionvalidator->isVirtualQRegularExpressionValidator) {
        return vqregularexpressionvalidator->sender();
    } else {
        return ((VirtualQRegularExpressionValidator*)self)->sender();
    }
}

// Base class handler implementation
QObject* QRegularExpressionValidator_QBaseSender(const QRegularExpressionValidator* self) {
    auto* vqregularexpressionvalidator = const_cast<VirtualQRegularExpressionValidator*>(dynamic_cast<const VirtualQRegularExpressionValidator*>(self));
    if (vqregularexpressionvalidator && vqregularexpressionvalidator->isVirtualQRegularExpressionValidator) {
        vqregularexpressionvalidator->setQRegularExpressionValidator_Sender_IsBase(true);
        return vqregularexpressionvalidator->sender();
    } else {
        return ((VirtualQRegularExpressionValidator*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QRegularExpressionValidator_OnSender(const QRegularExpressionValidator* self, intptr_t slot) {
    auto* vqregularexpressionvalidator = const_cast<VirtualQRegularExpressionValidator*>(dynamic_cast<const VirtualQRegularExpressionValidator*>(self));
    if (vqregularexpressionvalidator && vqregularexpressionvalidator->isVirtualQRegularExpressionValidator) {
        vqregularexpressionvalidator->setQRegularExpressionValidator_Sender_Callback(reinterpret_cast<VirtualQRegularExpressionValidator::QRegularExpressionValidator_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QRegularExpressionValidator_SenderSignalIndex(const QRegularExpressionValidator* self) {
    auto* vqregularexpressionvalidator = const_cast<VirtualQRegularExpressionValidator*>(dynamic_cast<const VirtualQRegularExpressionValidator*>(self));
    if (vqregularexpressionvalidator && vqregularexpressionvalidator->isVirtualQRegularExpressionValidator) {
        return vqregularexpressionvalidator->senderSignalIndex();
    } else {
        return ((VirtualQRegularExpressionValidator*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QRegularExpressionValidator_QBaseSenderSignalIndex(const QRegularExpressionValidator* self) {
    auto* vqregularexpressionvalidator = const_cast<VirtualQRegularExpressionValidator*>(dynamic_cast<const VirtualQRegularExpressionValidator*>(self));
    if (vqregularexpressionvalidator && vqregularexpressionvalidator->isVirtualQRegularExpressionValidator) {
        vqregularexpressionvalidator->setQRegularExpressionValidator_SenderSignalIndex_IsBase(true);
        return vqregularexpressionvalidator->senderSignalIndex();
    } else {
        return ((VirtualQRegularExpressionValidator*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QRegularExpressionValidator_OnSenderSignalIndex(const QRegularExpressionValidator* self, intptr_t slot) {
    auto* vqregularexpressionvalidator = const_cast<VirtualQRegularExpressionValidator*>(dynamic_cast<const VirtualQRegularExpressionValidator*>(self));
    if (vqregularexpressionvalidator && vqregularexpressionvalidator->isVirtualQRegularExpressionValidator) {
        vqregularexpressionvalidator->setQRegularExpressionValidator_SenderSignalIndex_Callback(reinterpret_cast<VirtualQRegularExpressionValidator::QRegularExpressionValidator_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QRegularExpressionValidator_Receivers(const QRegularExpressionValidator* self, const char* signal) {
    auto* vqregularexpressionvalidator = const_cast<VirtualQRegularExpressionValidator*>(dynamic_cast<const VirtualQRegularExpressionValidator*>(self));
    if (vqregularexpressionvalidator && vqregularexpressionvalidator->isVirtualQRegularExpressionValidator) {
        return vqregularexpressionvalidator->receivers(signal);
    } else {
        return ((VirtualQRegularExpressionValidator*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QRegularExpressionValidator_QBaseReceivers(const QRegularExpressionValidator* self, const char* signal) {
    auto* vqregularexpressionvalidator = const_cast<VirtualQRegularExpressionValidator*>(dynamic_cast<const VirtualQRegularExpressionValidator*>(self));
    if (vqregularexpressionvalidator && vqregularexpressionvalidator->isVirtualQRegularExpressionValidator) {
        vqregularexpressionvalidator->setQRegularExpressionValidator_Receivers_IsBase(true);
        return vqregularexpressionvalidator->receivers(signal);
    } else {
        return ((VirtualQRegularExpressionValidator*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QRegularExpressionValidator_OnReceivers(const QRegularExpressionValidator* self, intptr_t slot) {
    auto* vqregularexpressionvalidator = const_cast<VirtualQRegularExpressionValidator*>(dynamic_cast<const VirtualQRegularExpressionValidator*>(self));
    if (vqregularexpressionvalidator && vqregularexpressionvalidator->isVirtualQRegularExpressionValidator) {
        vqregularexpressionvalidator->setQRegularExpressionValidator_Receivers_Callback(reinterpret_cast<VirtualQRegularExpressionValidator::QRegularExpressionValidator_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QRegularExpressionValidator_IsSignalConnected(const QRegularExpressionValidator* self, const QMetaMethod* signal) {
    auto* vqregularexpressionvalidator = const_cast<VirtualQRegularExpressionValidator*>(dynamic_cast<const VirtualQRegularExpressionValidator*>(self));
    if (vqregularexpressionvalidator && vqregularexpressionvalidator->isVirtualQRegularExpressionValidator) {
        return vqregularexpressionvalidator->isSignalConnected(*signal);
    } else {
        return ((VirtualQRegularExpressionValidator*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QRegularExpressionValidator_QBaseIsSignalConnected(const QRegularExpressionValidator* self, const QMetaMethod* signal) {
    auto* vqregularexpressionvalidator = const_cast<VirtualQRegularExpressionValidator*>(dynamic_cast<const VirtualQRegularExpressionValidator*>(self));
    if (vqregularexpressionvalidator && vqregularexpressionvalidator->isVirtualQRegularExpressionValidator) {
        vqregularexpressionvalidator->setQRegularExpressionValidator_IsSignalConnected_IsBase(true);
        return vqregularexpressionvalidator->isSignalConnected(*signal);
    } else {
        return ((VirtualQRegularExpressionValidator*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QRegularExpressionValidator_OnIsSignalConnected(const QRegularExpressionValidator* self, intptr_t slot) {
    auto* vqregularexpressionvalidator = const_cast<VirtualQRegularExpressionValidator*>(dynamic_cast<const VirtualQRegularExpressionValidator*>(self));
    if (vqregularexpressionvalidator && vqregularexpressionvalidator->isVirtualQRegularExpressionValidator) {
        vqregularexpressionvalidator->setQRegularExpressionValidator_IsSignalConnected_Callback(reinterpret_cast<VirtualQRegularExpressionValidator::QRegularExpressionValidator_IsSignalConnected_Callback>(slot));
    }
}

void QRegularExpressionValidator_Delete(QRegularExpressionValidator* self) {
    delete self;
}
