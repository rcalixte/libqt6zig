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
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QValidator_Tr(const char* s) {
    auto _ret = QValidator::tr(s);
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

int QValidator_Validate(const QValidator* self, libqt_string param1, int* param2) {
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    return static_cast<int>(self->validate(param1_QString, static_cast<int&>(*param2)));
}

void QValidator_Fixup(const QValidator* self, libqt_string param1) {
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    self->fixup(param1_QString);
}

void QValidator_Changed(QValidator* self) {
    self->changed();
}

void QValidator_Connect_Changed(QValidator* self, intptr_t slot) {
    void (*slotFunc)(QValidator*) = reinterpret_cast<void (*)(QValidator*)>(slot);
    QValidator::connect(self,
                        static_cast<void (QValidator::*)()>(&QValidator::changed),
                        [self, slotFunc]() {
                            slotFunc(self);
                        });
}

libqt_string QValidator_Tr2(const char* s, const char* c) {
    auto _ret = QValidator::tr(s, c);
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
    auto _ret = QValidator::tr(s, c, static_cast<int>(n));
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
QMetaObject* QValidator_SuperMetaObject(const QValidator* self) {
    return (QMetaObject*)self->QValidator::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QValidator_OnMetaObject(QValidator* self, intptr_t slot) {
    if (auto* vqvalidator = const_cast<VirtualQValidator*>(dynamic_cast<const VirtualQValidator*>(self)))
        vqvalidator->qvalidator_metaobject_callback = reinterpret_cast<VirtualQValidator::QValidator_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QValidator_SuperMetacast(QValidator* self, const char* param1) {
    return self->QValidator::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QValidator_OnMetacast(QValidator* self, intptr_t slot) {
    if (auto* vqvalidator = dynamic_cast<VirtualQValidator*>(self))
        vqvalidator->qvalidator_metacast_callback = reinterpret_cast<VirtualQValidator::QValidator_Metacast_Callback>(slot);
}

// Base class handler implementation
int QValidator_SuperMetacall(QValidator* self, int param1, int param2, void** param3) {
    return self->QValidator::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QValidator_OnMetacall(QValidator* self, intptr_t slot) {
    if (auto* vqvalidator = dynamic_cast<VirtualQValidator*>(self))
        vqvalidator->qvalidator_metacall_callback = reinterpret_cast<VirtualQValidator::QValidator_Metacall_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QValidator_OnValidate(QValidator* self, intptr_t slot) {
    if (auto* vqvalidator = const_cast<VirtualQValidator*>(dynamic_cast<const VirtualQValidator*>(self)))
        vqvalidator->qvalidator_validate_callback = reinterpret_cast<VirtualQValidator::QValidator_Validate_Callback>(slot);
}

// Base class handler implementation
void QValidator_SuperFixup(const QValidator* self, libqt_string param1) {
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    self->QValidator::fixup(param1_QString);
}

// Auxiliary method to allow providing re-implementation
void QValidator_OnFixup(QValidator* self, intptr_t slot) {
    if (auto* vqvalidator = const_cast<VirtualQValidator*>(dynamic_cast<const VirtualQValidator*>(self)))
        vqvalidator->qvalidator_fixup_callback = reinterpret_cast<VirtualQValidator::QValidator_Fixup_Callback>(slot);
}

// Derived class handler implementation
bool QValidator_Event(QValidator* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QValidator_SuperEvent(QValidator* self, QEvent* event) {
    return self->QValidator::event(event);
}

// Auxiliary method to allow providing re-implementation
void QValidator_OnEvent(QValidator* self, intptr_t slot) {
    if (auto* vqvalidator = dynamic_cast<VirtualQValidator*>(self))
        vqvalidator->qvalidator_event_callback = reinterpret_cast<VirtualQValidator::QValidator_Event_Callback>(slot);
}

// Derived class handler implementation
bool QValidator_EventFilter(QValidator* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QValidator_SuperEventFilter(QValidator* self, QObject* watched, QEvent* event) {
    return self->QValidator::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QValidator_OnEventFilter(QValidator* self, intptr_t slot) {
    if (auto* vqvalidator = dynamic_cast<VirtualQValidator*>(self))
        vqvalidator->qvalidator_eventfilter_callback = reinterpret_cast<VirtualQValidator::QValidator_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QValidator_TimerEvent(QValidator* self, QTimerEvent* event) {
    auto* vqvalidator = dynamic_cast<VirtualQValidator*>(self);
    if (vqvalidator) {
        vqvalidator->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QValidator::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QValidator_SuperTimerEvent(QValidator* self, QTimerEvent* event) {
    if (auto* vqvalidator = dynamic_cast<VirtualQValidator*>(self)) {
        vqvalidator->QValidator::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QValidator::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QValidator_OnTimerEvent(QValidator* self, intptr_t slot) {
    if (auto* vqvalidator = dynamic_cast<VirtualQValidator*>(self))
        vqvalidator->qvalidator_timerevent_callback = reinterpret_cast<VirtualQValidator::QValidator_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QValidator_ChildEvent(QValidator* self, QChildEvent* event) {
    auto* vqvalidator = dynamic_cast<VirtualQValidator*>(self);
    if (vqvalidator) {
        vqvalidator->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QValidator::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QValidator_SuperChildEvent(QValidator* self, QChildEvent* event) {
    if (auto* vqvalidator = dynamic_cast<VirtualQValidator*>(self)) {
        vqvalidator->QValidator::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QValidator::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QValidator_OnChildEvent(QValidator* self, intptr_t slot) {
    if (auto* vqvalidator = dynamic_cast<VirtualQValidator*>(self))
        vqvalidator->qvalidator_childevent_callback = reinterpret_cast<VirtualQValidator::QValidator_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QValidator_CustomEvent(QValidator* self, QEvent* event) {
    auto* vqvalidator = dynamic_cast<VirtualQValidator*>(self);
    if (vqvalidator) {
        vqvalidator->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QValidator::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QValidator_SuperCustomEvent(QValidator* self, QEvent* event) {
    if (auto* vqvalidator = dynamic_cast<VirtualQValidator*>(self)) {
        vqvalidator->QValidator::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QValidator::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QValidator_OnCustomEvent(QValidator* self, intptr_t slot) {
    if (auto* vqvalidator = dynamic_cast<VirtualQValidator*>(self))
        vqvalidator->qvalidator_customevent_callback = reinterpret_cast<VirtualQValidator::QValidator_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QValidator_ConnectNotify(QValidator* self, const QMetaMethod* signal) {
    auto* vqvalidator = dynamic_cast<VirtualQValidator*>(self);
    if (vqvalidator) {
        vqvalidator->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QValidator::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QValidator_SuperConnectNotify(QValidator* self, const QMetaMethod* signal) {
    if (auto* vqvalidator = dynamic_cast<VirtualQValidator*>(self)) {
        vqvalidator->QValidator::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QValidator::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QValidator_OnConnectNotify(QValidator* self, intptr_t slot) {
    if (auto* vqvalidator = dynamic_cast<VirtualQValidator*>(self))
        vqvalidator->qvalidator_connectnotify_callback = reinterpret_cast<VirtualQValidator::QValidator_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QValidator_DisconnectNotify(QValidator* self, const QMetaMethod* signal) {
    auto* vqvalidator = dynamic_cast<VirtualQValidator*>(self);
    if (vqvalidator) {
        vqvalidator->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QValidator::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QValidator_SuperDisconnectNotify(QValidator* self, const QMetaMethod* signal) {
    if (auto* vqvalidator = dynamic_cast<VirtualQValidator*>(self)) {
        vqvalidator->QValidator::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QValidator::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QValidator_OnDisconnectNotify(QValidator* self, intptr_t slot) {
    if (auto* vqvalidator = dynamic_cast<VirtualQValidator*>(self))
        vqvalidator->qvalidator_disconnectnotify_callback = reinterpret_cast<VirtualQValidator::QValidator_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* QValidator_Sender(const QValidator* self) {
    if (auto* vqvalidator = const_cast<VirtualQValidator*>(dynamic_cast<const VirtualQValidator*>(self))) {
        return vqvalidator->VirtualQValidator::sender();
    } else
        qFatal("Error: Protected method QValidator::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QValidator_SenderSignalIndex(const QValidator* self) {
    if (auto* vqvalidator = const_cast<VirtualQValidator*>(dynamic_cast<const VirtualQValidator*>(self))) {
        return vqvalidator->VirtualQValidator::senderSignalIndex();
    } else
        qFatal("Error: Protected method QValidator::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QValidator_Receivers(const QValidator* self, const char* signal) {
    if (auto* vqvalidator = const_cast<VirtualQValidator*>(dynamic_cast<const VirtualQValidator*>(self))) {
        return vqvalidator->VirtualQValidator::receivers(signal);
    } else
        qFatal("Error: Protected method QValidator::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QValidator_IsSignalConnected(const QValidator* self, const QMetaMethod* signal) {
    if (auto* vqvalidator = const_cast<VirtualQValidator*>(dynamic_cast<const VirtualQValidator*>(self))) {
        return vqvalidator->VirtualQValidator::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QValidator::isSignalConnected called without a directly constructed type");
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
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QIntValidator_Tr(const char* s) {
    auto _ret = QIntValidator::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int QIntValidator_Validate(const QIntValidator* self, libqt_string param1, int* param2) {
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    return static_cast<int>(self->validate(param1_QString, static_cast<int&>(*param2)));
}

void QIntValidator_Fixup(const QIntValidator* self, libqt_string input) {
    QString input_QString = QString::fromUtf8(input.data, input.len);
    self->fixup(input_QString);
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
    QIntValidator::connect(self,
                           static_cast<void (QIntValidator::*)(int)>(&QIntValidator::bottomChanged),
                           [self, slotFunc](int bottom) {
                               int sigval1 = bottom;
                               slotFunc(self, sigval1);
                           });
}

void QIntValidator_TopChanged(QIntValidator* self, int top) {
    self->topChanged(static_cast<int>(top));
}

void QIntValidator_Connect_TopChanged(QIntValidator* self, intptr_t slot) {
    void (*slotFunc)(QIntValidator*, int) = reinterpret_cast<void (*)(QIntValidator*, int)>(slot);
    QIntValidator::connect(self,
                           static_cast<void (QIntValidator::*)(int)>(&QIntValidator::topChanged),
                           [self, slotFunc](int top) {
                               int sigval1 = top;
                               slotFunc(self, sigval1);
                           });
}

libqt_string QIntValidator_Tr2(const char* s, const char* c) {
    auto _ret = QIntValidator::tr(s, c);
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
    auto _ret = QIntValidator::tr(s, c, static_cast<int>(n));
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
QMetaObject* QIntValidator_SuperMetaObject(const QIntValidator* self) {
    return (QMetaObject*)self->QIntValidator::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QIntValidator_OnMetaObject(QIntValidator* self, intptr_t slot) {
    if (auto* vqintvalidator = const_cast<VirtualQIntValidator*>(dynamic_cast<const VirtualQIntValidator*>(self)))
        vqintvalidator->qintvalidator_metaobject_callback = reinterpret_cast<VirtualQIntValidator::QIntValidator_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QIntValidator_SuperMetacast(QIntValidator* self, const char* param1) {
    return self->QIntValidator::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QIntValidator_OnMetacast(QIntValidator* self, intptr_t slot) {
    if (auto* vqintvalidator = dynamic_cast<VirtualQIntValidator*>(self))
        vqintvalidator->qintvalidator_metacast_callback = reinterpret_cast<VirtualQIntValidator::QIntValidator_Metacast_Callback>(slot);
}

// Base class handler implementation
int QIntValidator_SuperMetacall(QIntValidator* self, int param1, int param2, void** param3) {
    return self->QIntValidator::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QIntValidator_OnMetacall(QIntValidator* self, intptr_t slot) {
    if (auto* vqintvalidator = dynamic_cast<VirtualQIntValidator*>(self))
        vqintvalidator->qintvalidator_metacall_callback = reinterpret_cast<VirtualQIntValidator::QIntValidator_Metacall_Callback>(slot);
}

// Base class handler implementation
int QIntValidator_SuperValidate(const QIntValidator* self, libqt_string param1, int* param2) {
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    return static_cast<int>(self->QIntValidator::validate(param1_QString, static_cast<int&>(*param2)));
}

// Auxiliary method to allow providing re-implementation
void QIntValidator_OnValidate(QIntValidator* self, intptr_t slot) {
    if (auto* vqintvalidator = const_cast<VirtualQIntValidator*>(dynamic_cast<const VirtualQIntValidator*>(self)))
        vqintvalidator->qintvalidator_validate_callback = reinterpret_cast<VirtualQIntValidator::QIntValidator_Validate_Callback>(slot);
}

// Base class handler implementation
void QIntValidator_SuperFixup(const QIntValidator* self, libqt_string input) {
    QString input_QString = QString::fromUtf8(input.data, input.len);
    self->QIntValidator::fixup(input_QString);
}

// Auxiliary method to allow providing re-implementation
void QIntValidator_OnFixup(QIntValidator* self, intptr_t slot) {
    if (auto* vqintvalidator = const_cast<VirtualQIntValidator*>(dynamic_cast<const VirtualQIntValidator*>(self)))
        vqintvalidator->qintvalidator_fixup_callback = reinterpret_cast<VirtualQIntValidator::QIntValidator_Fixup_Callback>(slot);
}

// Derived class handler implementation
bool QIntValidator_Event(QIntValidator* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QIntValidator_SuperEvent(QIntValidator* self, QEvent* event) {
    return self->QIntValidator::event(event);
}

// Auxiliary method to allow providing re-implementation
void QIntValidator_OnEvent(QIntValidator* self, intptr_t slot) {
    if (auto* vqintvalidator = dynamic_cast<VirtualQIntValidator*>(self))
        vqintvalidator->qintvalidator_event_callback = reinterpret_cast<VirtualQIntValidator::QIntValidator_Event_Callback>(slot);
}

// Derived class handler implementation
bool QIntValidator_EventFilter(QIntValidator* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QIntValidator_SuperEventFilter(QIntValidator* self, QObject* watched, QEvent* event) {
    return self->QIntValidator::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QIntValidator_OnEventFilter(QIntValidator* self, intptr_t slot) {
    if (auto* vqintvalidator = dynamic_cast<VirtualQIntValidator*>(self))
        vqintvalidator->qintvalidator_eventfilter_callback = reinterpret_cast<VirtualQIntValidator::QIntValidator_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QIntValidator_TimerEvent(QIntValidator* self, QTimerEvent* event) {
    auto* vqintvalidator = dynamic_cast<VirtualQIntValidator*>(self);
    if (vqintvalidator) {
        vqintvalidator->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QIntValidator::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QIntValidator_SuperTimerEvent(QIntValidator* self, QTimerEvent* event) {
    if (auto* vqintvalidator = dynamic_cast<VirtualQIntValidator*>(self)) {
        vqintvalidator->QIntValidator::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QIntValidator::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QIntValidator_OnTimerEvent(QIntValidator* self, intptr_t slot) {
    if (auto* vqintvalidator = dynamic_cast<VirtualQIntValidator*>(self))
        vqintvalidator->qintvalidator_timerevent_callback = reinterpret_cast<VirtualQIntValidator::QIntValidator_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QIntValidator_ChildEvent(QIntValidator* self, QChildEvent* event) {
    auto* vqintvalidator = dynamic_cast<VirtualQIntValidator*>(self);
    if (vqintvalidator) {
        vqintvalidator->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QIntValidator::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QIntValidator_SuperChildEvent(QIntValidator* self, QChildEvent* event) {
    if (auto* vqintvalidator = dynamic_cast<VirtualQIntValidator*>(self)) {
        vqintvalidator->QIntValidator::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QIntValidator::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QIntValidator_OnChildEvent(QIntValidator* self, intptr_t slot) {
    if (auto* vqintvalidator = dynamic_cast<VirtualQIntValidator*>(self))
        vqintvalidator->qintvalidator_childevent_callback = reinterpret_cast<VirtualQIntValidator::QIntValidator_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QIntValidator_CustomEvent(QIntValidator* self, QEvent* event) {
    auto* vqintvalidator = dynamic_cast<VirtualQIntValidator*>(self);
    if (vqintvalidator) {
        vqintvalidator->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QIntValidator::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QIntValidator_SuperCustomEvent(QIntValidator* self, QEvent* event) {
    if (auto* vqintvalidator = dynamic_cast<VirtualQIntValidator*>(self)) {
        vqintvalidator->QIntValidator::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QIntValidator::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QIntValidator_OnCustomEvent(QIntValidator* self, intptr_t slot) {
    if (auto* vqintvalidator = dynamic_cast<VirtualQIntValidator*>(self))
        vqintvalidator->qintvalidator_customevent_callback = reinterpret_cast<VirtualQIntValidator::QIntValidator_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QIntValidator_ConnectNotify(QIntValidator* self, const QMetaMethod* signal) {
    auto* vqintvalidator = dynamic_cast<VirtualQIntValidator*>(self);
    if (vqintvalidator) {
        vqintvalidator->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QIntValidator::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QIntValidator_SuperConnectNotify(QIntValidator* self, const QMetaMethod* signal) {
    if (auto* vqintvalidator = dynamic_cast<VirtualQIntValidator*>(self)) {
        vqintvalidator->QIntValidator::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QIntValidator::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QIntValidator_OnConnectNotify(QIntValidator* self, intptr_t slot) {
    if (auto* vqintvalidator = dynamic_cast<VirtualQIntValidator*>(self))
        vqintvalidator->qintvalidator_connectnotify_callback = reinterpret_cast<VirtualQIntValidator::QIntValidator_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QIntValidator_DisconnectNotify(QIntValidator* self, const QMetaMethod* signal) {
    auto* vqintvalidator = dynamic_cast<VirtualQIntValidator*>(self);
    if (vqintvalidator) {
        vqintvalidator->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QIntValidator::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QIntValidator_SuperDisconnectNotify(QIntValidator* self, const QMetaMethod* signal) {
    if (auto* vqintvalidator = dynamic_cast<VirtualQIntValidator*>(self)) {
        vqintvalidator->QIntValidator::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QIntValidator::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QIntValidator_OnDisconnectNotify(QIntValidator* self, intptr_t slot) {
    if (auto* vqintvalidator = dynamic_cast<VirtualQIntValidator*>(self))
        vqintvalidator->qintvalidator_disconnectnotify_callback = reinterpret_cast<VirtualQIntValidator::QIntValidator_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* QIntValidator_Sender(const QIntValidator* self) {
    if (auto* vqintvalidator = const_cast<VirtualQIntValidator*>(dynamic_cast<const VirtualQIntValidator*>(self))) {
        return vqintvalidator->VirtualQIntValidator::sender();
    } else
        qFatal("Error: Protected method QIntValidator::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QIntValidator_SenderSignalIndex(const QIntValidator* self) {
    if (auto* vqintvalidator = const_cast<VirtualQIntValidator*>(dynamic_cast<const VirtualQIntValidator*>(self))) {
        return vqintvalidator->VirtualQIntValidator::senderSignalIndex();
    } else
        qFatal("Error: Protected method QIntValidator::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QIntValidator_Receivers(const QIntValidator* self, const char* signal) {
    if (auto* vqintvalidator = const_cast<VirtualQIntValidator*>(dynamic_cast<const VirtualQIntValidator*>(self))) {
        return vqintvalidator->VirtualQIntValidator::receivers(signal);
    } else
        qFatal("Error: Protected method QIntValidator::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QIntValidator_IsSignalConnected(const QIntValidator* self, const QMetaMethod* signal) {
    if (auto* vqintvalidator = const_cast<VirtualQIntValidator*>(dynamic_cast<const VirtualQIntValidator*>(self))) {
        return vqintvalidator->VirtualQIntValidator::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QIntValidator::isSignalConnected called without a directly constructed type");
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
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QDoubleValidator_Tr(const char* s) {
    auto _ret = QDoubleValidator::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int QDoubleValidator_Validate(const QDoubleValidator* self, libqt_string param1, int* param2) {
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    return static_cast<int>(self->validate(param1_QString, static_cast<int&>(*param2)));
}

void QDoubleValidator_Fixup(const QDoubleValidator* self, libqt_string input) {
    QString input_QString = QString::fromUtf8(input.data, input.len);
    self->fixup(input_QString);
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
    QDoubleValidator::connect(self,
                              static_cast<void (QDoubleValidator::*)(double)>(&QDoubleValidator::bottomChanged),
                              [self, slotFunc](double bottom) {
                                  double sigval1 = bottom;
                                  slotFunc(self, sigval1);
                              });
}

void QDoubleValidator_TopChanged(QDoubleValidator* self, double top) {
    self->topChanged(static_cast<double>(top));
}

void QDoubleValidator_Connect_TopChanged(QDoubleValidator* self, intptr_t slot) {
    void (*slotFunc)(QDoubleValidator*, double) = reinterpret_cast<void (*)(QDoubleValidator*, double)>(slot);
    QDoubleValidator::connect(self,
                              static_cast<void (QDoubleValidator::*)(double)>(&QDoubleValidator::topChanged),
                              [self, slotFunc](double top) {
                                  double sigval1 = top;
                                  slotFunc(self, sigval1);
                              });
}

void QDoubleValidator_DecimalsChanged(QDoubleValidator* self, int decimals) {
    self->decimalsChanged(static_cast<int>(decimals));
}

void QDoubleValidator_Connect_DecimalsChanged(QDoubleValidator* self, intptr_t slot) {
    void (*slotFunc)(QDoubleValidator*, int) = reinterpret_cast<void (*)(QDoubleValidator*, int)>(slot);
    QDoubleValidator::connect(self,
                              static_cast<void (QDoubleValidator::*)(int)>(&QDoubleValidator::decimalsChanged),
                              [self, slotFunc](int decimals) {
                                  int sigval1 = decimals;
                                  slotFunc(self, sigval1);
                              });
}

void QDoubleValidator_NotationChanged(QDoubleValidator* self, int notation) {
    self->notationChanged(static_cast<QDoubleValidator::Notation>(notation));
}

void QDoubleValidator_Connect_NotationChanged(QDoubleValidator* self, intptr_t slot) {
    void (*slotFunc)(QDoubleValidator*, int) = reinterpret_cast<void (*)(QDoubleValidator*, int)>(slot);
    QDoubleValidator::connect(self,
                              static_cast<void (QDoubleValidator::*)(QDoubleValidator::Notation)>(&QDoubleValidator::notationChanged),
                              [self, slotFunc](QDoubleValidator::Notation notation) {
                                  int sigval1 = static_cast<int>(notation);
                                  slotFunc(self, sigval1);
                              });
}

libqt_string QDoubleValidator_Tr2(const char* s, const char* c) {
    auto _ret = QDoubleValidator::tr(s, c);
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
    auto _ret = QDoubleValidator::tr(s, c, static_cast<int>(n));
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
QMetaObject* QDoubleValidator_SuperMetaObject(const QDoubleValidator* self) {
    return (QMetaObject*)self->QDoubleValidator::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QDoubleValidator_OnMetaObject(QDoubleValidator* self, intptr_t slot) {
    if (auto* vqdoublevalidator = const_cast<VirtualQDoubleValidator*>(dynamic_cast<const VirtualQDoubleValidator*>(self)))
        vqdoublevalidator->qdoublevalidator_metaobject_callback = reinterpret_cast<VirtualQDoubleValidator::QDoubleValidator_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QDoubleValidator_SuperMetacast(QDoubleValidator* self, const char* param1) {
    return self->QDoubleValidator::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QDoubleValidator_OnMetacast(QDoubleValidator* self, intptr_t slot) {
    if (auto* vqdoublevalidator = dynamic_cast<VirtualQDoubleValidator*>(self))
        vqdoublevalidator->qdoublevalidator_metacast_callback = reinterpret_cast<VirtualQDoubleValidator::QDoubleValidator_Metacast_Callback>(slot);
}

// Base class handler implementation
int QDoubleValidator_SuperMetacall(QDoubleValidator* self, int param1, int param2, void** param3) {
    return self->QDoubleValidator::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QDoubleValidator_OnMetacall(QDoubleValidator* self, intptr_t slot) {
    if (auto* vqdoublevalidator = dynamic_cast<VirtualQDoubleValidator*>(self))
        vqdoublevalidator->qdoublevalidator_metacall_callback = reinterpret_cast<VirtualQDoubleValidator::QDoubleValidator_Metacall_Callback>(slot);
}

// Base class handler implementation
int QDoubleValidator_SuperValidate(const QDoubleValidator* self, libqt_string param1, int* param2) {
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    return static_cast<int>(self->QDoubleValidator::validate(param1_QString, static_cast<int&>(*param2)));
}

// Auxiliary method to allow providing re-implementation
void QDoubleValidator_OnValidate(QDoubleValidator* self, intptr_t slot) {
    if (auto* vqdoublevalidator = const_cast<VirtualQDoubleValidator*>(dynamic_cast<const VirtualQDoubleValidator*>(self)))
        vqdoublevalidator->qdoublevalidator_validate_callback = reinterpret_cast<VirtualQDoubleValidator::QDoubleValidator_Validate_Callback>(slot);
}

// Base class handler implementation
void QDoubleValidator_SuperFixup(const QDoubleValidator* self, libqt_string input) {
    QString input_QString = QString::fromUtf8(input.data, input.len);
    self->QDoubleValidator::fixup(input_QString);
}

// Auxiliary method to allow providing re-implementation
void QDoubleValidator_OnFixup(QDoubleValidator* self, intptr_t slot) {
    if (auto* vqdoublevalidator = const_cast<VirtualQDoubleValidator*>(dynamic_cast<const VirtualQDoubleValidator*>(self)))
        vqdoublevalidator->qdoublevalidator_fixup_callback = reinterpret_cast<VirtualQDoubleValidator::QDoubleValidator_Fixup_Callback>(slot);
}

// Derived class handler implementation
bool QDoubleValidator_Event(QDoubleValidator* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QDoubleValidator_SuperEvent(QDoubleValidator* self, QEvent* event) {
    return self->QDoubleValidator::event(event);
}

// Auxiliary method to allow providing re-implementation
void QDoubleValidator_OnEvent(QDoubleValidator* self, intptr_t slot) {
    if (auto* vqdoublevalidator = dynamic_cast<VirtualQDoubleValidator*>(self))
        vqdoublevalidator->qdoublevalidator_event_callback = reinterpret_cast<VirtualQDoubleValidator::QDoubleValidator_Event_Callback>(slot);
}

// Derived class handler implementation
bool QDoubleValidator_EventFilter(QDoubleValidator* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QDoubleValidator_SuperEventFilter(QDoubleValidator* self, QObject* watched, QEvent* event) {
    return self->QDoubleValidator::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QDoubleValidator_OnEventFilter(QDoubleValidator* self, intptr_t slot) {
    if (auto* vqdoublevalidator = dynamic_cast<VirtualQDoubleValidator*>(self))
        vqdoublevalidator->qdoublevalidator_eventfilter_callback = reinterpret_cast<VirtualQDoubleValidator::QDoubleValidator_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QDoubleValidator_TimerEvent(QDoubleValidator* self, QTimerEvent* event) {
    auto* vqdoublevalidator = dynamic_cast<VirtualQDoubleValidator*>(self);
    if (vqdoublevalidator) {
        vqdoublevalidator->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDoubleValidator::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDoubleValidator_SuperTimerEvent(QDoubleValidator* self, QTimerEvent* event) {
    if (auto* vqdoublevalidator = dynamic_cast<VirtualQDoubleValidator*>(self)) {
        vqdoublevalidator->QDoubleValidator::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QDoubleValidator::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDoubleValidator_OnTimerEvent(QDoubleValidator* self, intptr_t slot) {
    if (auto* vqdoublevalidator = dynamic_cast<VirtualQDoubleValidator*>(self))
        vqdoublevalidator->qdoublevalidator_timerevent_callback = reinterpret_cast<VirtualQDoubleValidator::QDoubleValidator_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QDoubleValidator_ChildEvent(QDoubleValidator* self, QChildEvent* event) {
    auto* vqdoublevalidator = dynamic_cast<VirtualQDoubleValidator*>(self);
    if (vqdoublevalidator) {
        vqdoublevalidator->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDoubleValidator::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDoubleValidator_SuperChildEvent(QDoubleValidator* self, QChildEvent* event) {
    if (auto* vqdoublevalidator = dynamic_cast<VirtualQDoubleValidator*>(self)) {
        vqdoublevalidator->QDoubleValidator::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QDoubleValidator::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDoubleValidator_OnChildEvent(QDoubleValidator* self, intptr_t slot) {
    if (auto* vqdoublevalidator = dynamic_cast<VirtualQDoubleValidator*>(self))
        vqdoublevalidator->qdoublevalidator_childevent_callback = reinterpret_cast<VirtualQDoubleValidator::QDoubleValidator_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QDoubleValidator_CustomEvent(QDoubleValidator* self, QEvent* event) {
    auto* vqdoublevalidator = dynamic_cast<VirtualQDoubleValidator*>(self);
    if (vqdoublevalidator) {
        vqdoublevalidator->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDoubleValidator::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDoubleValidator_SuperCustomEvent(QDoubleValidator* self, QEvent* event) {
    if (auto* vqdoublevalidator = dynamic_cast<VirtualQDoubleValidator*>(self)) {
        vqdoublevalidator->QDoubleValidator::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QDoubleValidator::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDoubleValidator_OnCustomEvent(QDoubleValidator* self, intptr_t slot) {
    if (auto* vqdoublevalidator = dynamic_cast<VirtualQDoubleValidator*>(self))
        vqdoublevalidator->qdoublevalidator_customevent_callback = reinterpret_cast<VirtualQDoubleValidator::QDoubleValidator_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QDoubleValidator_ConnectNotify(QDoubleValidator* self, const QMetaMethod* signal) {
    auto* vqdoublevalidator = dynamic_cast<VirtualQDoubleValidator*>(self);
    if (vqdoublevalidator) {
        vqdoublevalidator->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QDoubleValidator::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QDoubleValidator_SuperConnectNotify(QDoubleValidator* self, const QMetaMethod* signal) {
    if (auto* vqdoublevalidator = dynamic_cast<VirtualQDoubleValidator*>(self)) {
        vqdoublevalidator->QDoubleValidator::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QDoubleValidator::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDoubleValidator_OnConnectNotify(QDoubleValidator* self, intptr_t slot) {
    if (auto* vqdoublevalidator = dynamic_cast<VirtualQDoubleValidator*>(self))
        vqdoublevalidator->qdoublevalidator_connectnotify_callback = reinterpret_cast<VirtualQDoubleValidator::QDoubleValidator_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QDoubleValidator_DisconnectNotify(QDoubleValidator* self, const QMetaMethod* signal) {
    auto* vqdoublevalidator = dynamic_cast<VirtualQDoubleValidator*>(self);
    if (vqdoublevalidator) {
        vqdoublevalidator->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QDoubleValidator::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QDoubleValidator_SuperDisconnectNotify(QDoubleValidator* self, const QMetaMethod* signal) {
    if (auto* vqdoublevalidator = dynamic_cast<VirtualQDoubleValidator*>(self)) {
        vqdoublevalidator->QDoubleValidator::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QDoubleValidator::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDoubleValidator_OnDisconnectNotify(QDoubleValidator* self, intptr_t slot) {
    if (auto* vqdoublevalidator = dynamic_cast<VirtualQDoubleValidator*>(self))
        vqdoublevalidator->qdoublevalidator_disconnectnotify_callback = reinterpret_cast<VirtualQDoubleValidator::QDoubleValidator_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* QDoubleValidator_Sender(const QDoubleValidator* self) {
    if (auto* vqdoublevalidator = const_cast<VirtualQDoubleValidator*>(dynamic_cast<const VirtualQDoubleValidator*>(self))) {
        return vqdoublevalidator->VirtualQDoubleValidator::sender();
    } else
        qFatal("Error: Protected method QDoubleValidator::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QDoubleValidator_SenderSignalIndex(const QDoubleValidator* self) {
    if (auto* vqdoublevalidator = const_cast<VirtualQDoubleValidator*>(dynamic_cast<const VirtualQDoubleValidator*>(self))) {
        return vqdoublevalidator->VirtualQDoubleValidator::senderSignalIndex();
    } else
        qFatal("Error: Protected method QDoubleValidator::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QDoubleValidator_Receivers(const QDoubleValidator* self, const char* signal) {
    if (auto* vqdoublevalidator = const_cast<VirtualQDoubleValidator*>(dynamic_cast<const VirtualQDoubleValidator*>(self))) {
        return vqdoublevalidator->VirtualQDoubleValidator::receivers(signal);
    } else
        qFatal("Error: Protected method QDoubleValidator::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QDoubleValidator_IsSignalConnected(const QDoubleValidator* self, const QMetaMethod* signal) {
    if (auto* vqdoublevalidator = const_cast<VirtualQDoubleValidator*>(dynamic_cast<const VirtualQDoubleValidator*>(self))) {
        return vqdoublevalidator->VirtualQDoubleValidator::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QDoubleValidator::isSignalConnected called without a directly constructed type");
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
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QRegularExpressionValidator_Tr(const char* s) {
    auto _ret = QRegularExpressionValidator::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int QRegularExpressionValidator_Validate(const QRegularExpressionValidator* self, libqt_string input, int* pos) {
    QString input_QString = QString::fromUtf8(input.data, input.len);
    return static_cast<int>(self->validate(input_QString, static_cast<int&>(*pos)));
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
    QRegularExpressionValidator::connect(self,
                                         static_cast<void (QRegularExpressionValidator::*)(const QRegularExpression&)>(&QRegularExpressionValidator::regularExpressionChanged),
                                         [self, slotFunc](const QRegularExpression& re) {
                                             const QRegularExpression& re_ret = re;
                                             // Cast returned reference into pointer
                                             QRegularExpression* sigval1 = const_cast<QRegularExpression*>(&re_ret);
                                             slotFunc(self, sigval1);
                                         });
}

libqt_string QRegularExpressionValidator_Tr2(const char* s, const char* c) {
    auto _ret = QRegularExpressionValidator::tr(s, c);
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
    auto _ret = QRegularExpressionValidator::tr(s, c, static_cast<int>(n));
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
QMetaObject* QRegularExpressionValidator_SuperMetaObject(const QRegularExpressionValidator* self) {
    return (QMetaObject*)self->QRegularExpressionValidator::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QRegularExpressionValidator_OnMetaObject(QRegularExpressionValidator* self, intptr_t slot) {
    if (auto* vqregularexpressionvalidator = const_cast<VirtualQRegularExpressionValidator*>(dynamic_cast<const VirtualQRegularExpressionValidator*>(self)))
        vqregularexpressionvalidator->qregularexpressionvalidator_metaobject_callback = reinterpret_cast<VirtualQRegularExpressionValidator::QRegularExpressionValidator_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QRegularExpressionValidator_SuperMetacast(QRegularExpressionValidator* self, const char* param1) {
    return self->QRegularExpressionValidator::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QRegularExpressionValidator_OnMetacast(QRegularExpressionValidator* self, intptr_t slot) {
    if (auto* vqregularexpressionvalidator = dynamic_cast<VirtualQRegularExpressionValidator*>(self))
        vqregularexpressionvalidator->qregularexpressionvalidator_metacast_callback = reinterpret_cast<VirtualQRegularExpressionValidator::QRegularExpressionValidator_Metacast_Callback>(slot);
}

// Base class handler implementation
int QRegularExpressionValidator_SuperMetacall(QRegularExpressionValidator* self, int param1, int param2, void** param3) {
    return self->QRegularExpressionValidator::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QRegularExpressionValidator_OnMetacall(QRegularExpressionValidator* self, intptr_t slot) {
    if (auto* vqregularexpressionvalidator = dynamic_cast<VirtualQRegularExpressionValidator*>(self))
        vqregularexpressionvalidator->qregularexpressionvalidator_metacall_callback = reinterpret_cast<VirtualQRegularExpressionValidator::QRegularExpressionValidator_Metacall_Callback>(slot);
}

// Base class handler implementation
int QRegularExpressionValidator_SuperValidate(const QRegularExpressionValidator* self, libqt_string input, int* pos) {
    QString input_QString = QString::fromUtf8(input.data, input.len);
    return static_cast<int>(self->QRegularExpressionValidator::validate(input_QString, static_cast<int&>(*pos)));
}

// Auxiliary method to allow providing re-implementation
void QRegularExpressionValidator_OnValidate(QRegularExpressionValidator* self, intptr_t slot) {
    if (auto* vqregularexpressionvalidator = const_cast<VirtualQRegularExpressionValidator*>(dynamic_cast<const VirtualQRegularExpressionValidator*>(self)))
        vqregularexpressionvalidator->qregularexpressionvalidator_validate_callback = reinterpret_cast<VirtualQRegularExpressionValidator::QRegularExpressionValidator_Validate_Callback>(slot);
}

// Derived class handler implementation
void QRegularExpressionValidator_Fixup(const QRegularExpressionValidator* self, libqt_string param1) {
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    self->fixup(param1_QString);
}

// Base class handler implementation
void QRegularExpressionValidator_SuperFixup(const QRegularExpressionValidator* self, libqt_string param1) {
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    self->QRegularExpressionValidator::fixup(param1_QString);
}

// Auxiliary method to allow providing re-implementation
void QRegularExpressionValidator_OnFixup(QRegularExpressionValidator* self, intptr_t slot) {
    if (auto* vqregularexpressionvalidator = const_cast<VirtualQRegularExpressionValidator*>(dynamic_cast<const VirtualQRegularExpressionValidator*>(self)))
        vqregularexpressionvalidator->qregularexpressionvalidator_fixup_callback = reinterpret_cast<VirtualQRegularExpressionValidator::QRegularExpressionValidator_Fixup_Callback>(slot);
}

// Derived class handler implementation
bool QRegularExpressionValidator_Event(QRegularExpressionValidator* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QRegularExpressionValidator_SuperEvent(QRegularExpressionValidator* self, QEvent* event) {
    return self->QRegularExpressionValidator::event(event);
}

// Auxiliary method to allow providing re-implementation
void QRegularExpressionValidator_OnEvent(QRegularExpressionValidator* self, intptr_t slot) {
    if (auto* vqregularexpressionvalidator = dynamic_cast<VirtualQRegularExpressionValidator*>(self))
        vqregularexpressionvalidator->qregularexpressionvalidator_event_callback = reinterpret_cast<VirtualQRegularExpressionValidator::QRegularExpressionValidator_Event_Callback>(slot);
}

// Derived class handler implementation
bool QRegularExpressionValidator_EventFilter(QRegularExpressionValidator* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QRegularExpressionValidator_SuperEventFilter(QRegularExpressionValidator* self, QObject* watched, QEvent* event) {
    return self->QRegularExpressionValidator::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QRegularExpressionValidator_OnEventFilter(QRegularExpressionValidator* self, intptr_t slot) {
    if (auto* vqregularexpressionvalidator = dynamic_cast<VirtualQRegularExpressionValidator*>(self))
        vqregularexpressionvalidator->qregularexpressionvalidator_eventfilter_callback = reinterpret_cast<VirtualQRegularExpressionValidator::QRegularExpressionValidator_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QRegularExpressionValidator_TimerEvent(QRegularExpressionValidator* self, QTimerEvent* event) {
    auto* vqregularexpressionvalidator = dynamic_cast<VirtualQRegularExpressionValidator*>(self);
    if (vqregularexpressionvalidator) {
        vqregularexpressionvalidator->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QRegularExpressionValidator::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QRegularExpressionValidator_SuperTimerEvent(QRegularExpressionValidator* self, QTimerEvent* event) {
    if (auto* vqregularexpressionvalidator = dynamic_cast<VirtualQRegularExpressionValidator*>(self)) {
        vqregularexpressionvalidator->QRegularExpressionValidator::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QRegularExpressionValidator::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QRegularExpressionValidator_OnTimerEvent(QRegularExpressionValidator* self, intptr_t slot) {
    if (auto* vqregularexpressionvalidator = dynamic_cast<VirtualQRegularExpressionValidator*>(self))
        vqregularexpressionvalidator->qregularexpressionvalidator_timerevent_callback = reinterpret_cast<VirtualQRegularExpressionValidator::QRegularExpressionValidator_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QRegularExpressionValidator_ChildEvent(QRegularExpressionValidator* self, QChildEvent* event) {
    auto* vqregularexpressionvalidator = dynamic_cast<VirtualQRegularExpressionValidator*>(self);
    if (vqregularexpressionvalidator) {
        vqregularexpressionvalidator->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QRegularExpressionValidator::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QRegularExpressionValidator_SuperChildEvent(QRegularExpressionValidator* self, QChildEvent* event) {
    if (auto* vqregularexpressionvalidator = dynamic_cast<VirtualQRegularExpressionValidator*>(self)) {
        vqregularexpressionvalidator->QRegularExpressionValidator::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QRegularExpressionValidator::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QRegularExpressionValidator_OnChildEvent(QRegularExpressionValidator* self, intptr_t slot) {
    if (auto* vqregularexpressionvalidator = dynamic_cast<VirtualQRegularExpressionValidator*>(self))
        vqregularexpressionvalidator->qregularexpressionvalidator_childevent_callback = reinterpret_cast<VirtualQRegularExpressionValidator::QRegularExpressionValidator_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QRegularExpressionValidator_CustomEvent(QRegularExpressionValidator* self, QEvent* event) {
    auto* vqregularexpressionvalidator = dynamic_cast<VirtualQRegularExpressionValidator*>(self);
    if (vqregularexpressionvalidator) {
        vqregularexpressionvalidator->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QRegularExpressionValidator::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QRegularExpressionValidator_SuperCustomEvent(QRegularExpressionValidator* self, QEvent* event) {
    if (auto* vqregularexpressionvalidator = dynamic_cast<VirtualQRegularExpressionValidator*>(self)) {
        vqregularexpressionvalidator->QRegularExpressionValidator::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QRegularExpressionValidator::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QRegularExpressionValidator_OnCustomEvent(QRegularExpressionValidator* self, intptr_t slot) {
    if (auto* vqregularexpressionvalidator = dynamic_cast<VirtualQRegularExpressionValidator*>(self))
        vqregularexpressionvalidator->qregularexpressionvalidator_customevent_callback = reinterpret_cast<VirtualQRegularExpressionValidator::QRegularExpressionValidator_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QRegularExpressionValidator_ConnectNotify(QRegularExpressionValidator* self, const QMetaMethod* signal) {
    auto* vqregularexpressionvalidator = dynamic_cast<VirtualQRegularExpressionValidator*>(self);
    if (vqregularexpressionvalidator) {
        vqregularexpressionvalidator->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QRegularExpressionValidator::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QRegularExpressionValidator_SuperConnectNotify(QRegularExpressionValidator* self, const QMetaMethod* signal) {
    if (auto* vqregularexpressionvalidator = dynamic_cast<VirtualQRegularExpressionValidator*>(self)) {
        vqregularexpressionvalidator->QRegularExpressionValidator::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QRegularExpressionValidator::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QRegularExpressionValidator_OnConnectNotify(QRegularExpressionValidator* self, intptr_t slot) {
    if (auto* vqregularexpressionvalidator = dynamic_cast<VirtualQRegularExpressionValidator*>(self))
        vqregularexpressionvalidator->qregularexpressionvalidator_connectnotify_callback = reinterpret_cast<VirtualQRegularExpressionValidator::QRegularExpressionValidator_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QRegularExpressionValidator_DisconnectNotify(QRegularExpressionValidator* self, const QMetaMethod* signal) {
    auto* vqregularexpressionvalidator = dynamic_cast<VirtualQRegularExpressionValidator*>(self);
    if (vqregularexpressionvalidator) {
        vqregularexpressionvalidator->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QRegularExpressionValidator::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QRegularExpressionValidator_SuperDisconnectNotify(QRegularExpressionValidator* self, const QMetaMethod* signal) {
    if (auto* vqregularexpressionvalidator = dynamic_cast<VirtualQRegularExpressionValidator*>(self)) {
        vqregularexpressionvalidator->QRegularExpressionValidator::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QRegularExpressionValidator::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QRegularExpressionValidator_OnDisconnectNotify(QRegularExpressionValidator* self, intptr_t slot) {
    if (auto* vqregularexpressionvalidator = dynamic_cast<VirtualQRegularExpressionValidator*>(self))
        vqregularexpressionvalidator->qregularexpressionvalidator_disconnectnotify_callback = reinterpret_cast<VirtualQRegularExpressionValidator::QRegularExpressionValidator_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* QRegularExpressionValidator_Sender(const QRegularExpressionValidator* self) {
    if (auto* vqregularexpressionvalidator = const_cast<VirtualQRegularExpressionValidator*>(dynamic_cast<const VirtualQRegularExpressionValidator*>(self))) {
        return vqregularexpressionvalidator->VirtualQRegularExpressionValidator::sender();
    } else
        qFatal("Error: Protected method QRegularExpressionValidator::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QRegularExpressionValidator_SenderSignalIndex(const QRegularExpressionValidator* self) {
    if (auto* vqregularexpressionvalidator = const_cast<VirtualQRegularExpressionValidator*>(dynamic_cast<const VirtualQRegularExpressionValidator*>(self))) {
        return vqregularexpressionvalidator->VirtualQRegularExpressionValidator::senderSignalIndex();
    } else
        qFatal("Error: Protected method QRegularExpressionValidator::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QRegularExpressionValidator_Receivers(const QRegularExpressionValidator* self, const char* signal) {
    if (auto* vqregularexpressionvalidator = const_cast<VirtualQRegularExpressionValidator*>(dynamic_cast<const VirtualQRegularExpressionValidator*>(self))) {
        return vqregularexpressionvalidator->VirtualQRegularExpressionValidator::receivers(signal);
    } else
        qFatal("Error: Protected method QRegularExpressionValidator::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QRegularExpressionValidator_IsSignalConnected(const QRegularExpressionValidator* self, const QMetaMethod* signal) {
    if (auto* vqregularexpressionvalidator = const_cast<VirtualQRegularExpressionValidator*>(dynamic_cast<const VirtualQRegularExpressionValidator*>(self))) {
        return vqregularexpressionvalidator->VirtualQRegularExpressionValidator::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QRegularExpressionValidator::isSignalConnected called without a directly constructed type");
}

void QRegularExpressionValidator_Delete(QRegularExpressionValidator* self) {
    delete self;
}
