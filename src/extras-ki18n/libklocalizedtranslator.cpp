#include <KLocalizedTranslator>
#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QTimerEvent>
#include <QTranslator>
#include <klocalizedtranslator.h>
#include "libklocalizedtranslator.h"
#include "libklocalizedtranslator.hxx"

KLocalizedTranslator* KLocalizedTranslator_new() {
    return new VirtualKLocalizedTranslator();
}

KLocalizedTranslator* KLocalizedTranslator_new2(QObject* parent) {
    return new VirtualKLocalizedTranslator(parent);
}

QMetaObject* KLocalizedTranslator_MetaObject(const KLocalizedTranslator* self) {
    return (QMetaObject*)self->metaObject();
}

void* KLocalizedTranslator_Metacast(KLocalizedTranslator* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KLocalizedTranslator_Metacall(KLocalizedTranslator* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KLocalizedTranslator_Tr(const char* s) {
    auto _ret = KLocalizedTranslator::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KLocalizedTranslator_Translate(const KLocalizedTranslator* self, const char* context, const char* sourceText, const char* disambiguation, int n) {
    auto _ret = self->translate(context, sourceText, disambiguation, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KLocalizedTranslator_SetTranslationDomain(KLocalizedTranslator* self, const libqt_string translationDomain) {
    QString translationDomain_QString = QString::fromUtf8(translationDomain.data, translationDomain.len);
    self->setTranslationDomain(translationDomain_QString);
}

void KLocalizedTranslator_AddContextToMonitor(KLocalizedTranslator* self, const libqt_string context) {
    QString context_QString = QString::fromUtf8(context.data, context.len);
    self->addContextToMonitor(context_QString);
}

void KLocalizedTranslator_RemoveContextToMonitor(KLocalizedTranslator* self, const libqt_string context) {
    QString context_QString = QString::fromUtf8(context.data, context.len);
    self->removeContextToMonitor(context_QString);
}

libqt_string KLocalizedTranslator_Tr2(const char* s, const char* c) {
    auto _ret = KLocalizedTranslator::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KLocalizedTranslator_Tr3(const char* s, const char* c, int n) {
    auto _ret = KLocalizedTranslator::tr(s, c, static_cast<int>(n));
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
QMetaObject* KLocalizedTranslator_SuperMetaObject(const KLocalizedTranslator* self) {
    return (QMetaObject*)self->KLocalizedTranslator::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KLocalizedTranslator_OnMetaObject(KLocalizedTranslator* self, intptr_t slot) {
    if (auto* vklocalizedtranslator = const_cast<VirtualKLocalizedTranslator*>(dynamic_cast<const VirtualKLocalizedTranslator*>(self)))
        vklocalizedtranslator->klocalizedtranslator_metaobject_callback = reinterpret_cast<VirtualKLocalizedTranslator::KLocalizedTranslator_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KLocalizedTranslator_SuperMetacast(KLocalizedTranslator* self, const char* param1) {
    return self->KLocalizedTranslator::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KLocalizedTranslator_OnMetacast(KLocalizedTranslator* self, intptr_t slot) {
    if (auto* vklocalizedtranslator = dynamic_cast<VirtualKLocalizedTranslator*>(self))
        vklocalizedtranslator->klocalizedtranslator_metacast_callback = reinterpret_cast<VirtualKLocalizedTranslator::KLocalizedTranslator_Metacast_Callback>(slot);
}

// Base class handler implementation
int KLocalizedTranslator_SuperMetacall(KLocalizedTranslator* self, int param1, int param2, void** param3) {
    return self->KLocalizedTranslator::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KLocalizedTranslator_OnMetacall(KLocalizedTranslator* self, intptr_t slot) {
    if (auto* vklocalizedtranslator = dynamic_cast<VirtualKLocalizedTranslator*>(self))
        vklocalizedtranslator->klocalizedtranslator_metacall_callback = reinterpret_cast<VirtualKLocalizedTranslator::KLocalizedTranslator_Metacall_Callback>(slot);
}

// Base class handler implementation
libqt_string KLocalizedTranslator_SuperTranslate(const KLocalizedTranslator* self, const char* context, const char* sourceText, const char* disambiguation, int n) {
    auto _ret = self->KLocalizedTranslator::translate(context, sourceText, disambiguation, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

// Auxiliary method to allow providing re-implementation
void KLocalizedTranslator_OnTranslate(KLocalizedTranslator* self, intptr_t slot) {
    if (auto* vklocalizedtranslator = const_cast<VirtualKLocalizedTranslator*>(dynamic_cast<const VirtualKLocalizedTranslator*>(self)))
        vklocalizedtranslator->klocalizedtranslator_translate_callback = reinterpret_cast<VirtualKLocalizedTranslator::KLocalizedTranslator_Translate_Callback>(slot);
}

// Derived class handler implementation
bool KLocalizedTranslator_IsEmpty(const KLocalizedTranslator* self) {
    return self->isEmpty();
}

// Base class handler implementation
bool KLocalizedTranslator_SuperIsEmpty(const KLocalizedTranslator* self) {
    return self->KLocalizedTranslator::isEmpty();
}

// Auxiliary method to allow providing re-implementation
void KLocalizedTranslator_OnIsEmpty(KLocalizedTranslator* self, intptr_t slot) {
    if (auto* vklocalizedtranslator = const_cast<VirtualKLocalizedTranslator*>(dynamic_cast<const VirtualKLocalizedTranslator*>(self)))
        vklocalizedtranslator->klocalizedtranslator_isempty_callback = reinterpret_cast<VirtualKLocalizedTranslator::KLocalizedTranslator_IsEmpty_Callback>(slot);
}

// Derived class handler implementation
bool KLocalizedTranslator_Event(KLocalizedTranslator* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool KLocalizedTranslator_SuperEvent(KLocalizedTranslator* self, QEvent* event) {
    return self->KLocalizedTranslator::event(event);
}

// Auxiliary method to allow providing re-implementation
void KLocalizedTranslator_OnEvent(KLocalizedTranslator* self, intptr_t slot) {
    if (auto* vklocalizedtranslator = dynamic_cast<VirtualKLocalizedTranslator*>(self))
        vklocalizedtranslator->klocalizedtranslator_event_callback = reinterpret_cast<VirtualKLocalizedTranslator::KLocalizedTranslator_Event_Callback>(slot);
}

// Derived class handler implementation
bool KLocalizedTranslator_EventFilter(KLocalizedTranslator* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool KLocalizedTranslator_SuperEventFilter(KLocalizedTranslator* self, QObject* watched, QEvent* event) {
    return self->KLocalizedTranslator::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void KLocalizedTranslator_OnEventFilter(KLocalizedTranslator* self, intptr_t slot) {
    if (auto* vklocalizedtranslator = dynamic_cast<VirtualKLocalizedTranslator*>(self))
        vklocalizedtranslator->klocalizedtranslator_eventfilter_callback = reinterpret_cast<VirtualKLocalizedTranslator::KLocalizedTranslator_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void KLocalizedTranslator_TimerEvent(KLocalizedTranslator* self, QTimerEvent* event) {
    auto* vklocalizedtranslator = dynamic_cast<VirtualKLocalizedTranslator*>(self);
    if (vklocalizedtranslator) {
        vklocalizedtranslator->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KLocalizedTranslator::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KLocalizedTranslator_SuperTimerEvent(KLocalizedTranslator* self, QTimerEvent* event) {
    if (auto* vklocalizedtranslator = dynamic_cast<VirtualKLocalizedTranslator*>(self)) {
        vklocalizedtranslator->KLocalizedTranslator::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KLocalizedTranslator::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KLocalizedTranslator_OnTimerEvent(KLocalizedTranslator* self, intptr_t slot) {
    if (auto* vklocalizedtranslator = dynamic_cast<VirtualKLocalizedTranslator*>(self))
        vklocalizedtranslator->klocalizedtranslator_timerevent_callback = reinterpret_cast<VirtualKLocalizedTranslator::KLocalizedTranslator_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KLocalizedTranslator_ChildEvent(KLocalizedTranslator* self, QChildEvent* event) {
    auto* vklocalizedtranslator = dynamic_cast<VirtualKLocalizedTranslator*>(self);
    if (vklocalizedtranslator) {
        vklocalizedtranslator->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KLocalizedTranslator::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KLocalizedTranslator_SuperChildEvent(KLocalizedTranslator* self, QChildEvent* event) {
    if (auto* vklocalizedtranslator = dynamic_cast<VirtualKLocalizedTranslator*>(self)) {
        vklocalizedtranslator->KLocalizedTranslator::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KLocalizedTranslator::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KLocalizedTranslator_OnChildEvent(KLocalizedTranslator* self, intptr_t slot) {
    if (auto* vklocalizedtranslator = dynamic_cast<VirtualKLocalizedTranslator*>(self))
        vklocalizedtranslator->klocalizedtranslator_childevent_callback = reinterpret_cast<VirtualKLocalizedTranslator::KLocalizedTranslator_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KLocalizedTranslator_CustomEvent(KLocalizedTranslator* self, QEvent* event) {
    auto* vklocalizedtranslator = dynamic_cast<VirtualKLocalizedTranslator*>(self);
    if (vklocalizedtranslator) {
        vklocalizedtranslator->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KLocalizedTranslator::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KLocalizedTranslator_SuperCustomEvent(KLocalizedTranslator* self, QEvent* event) {
    if (auto* vklocalizedtranslator = dynamic_cast<VirtualKLocalizedTranslator*>(self)) {
        vklocalizedtranslator->KLocalizedTranslator::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KLocalizedTranslator::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KLocalizedTranslator_OnCustomEvent(KLocalizedTranslator* self, intptr_t slot) {
    if (auto* vklocalizedtranslator = dynamic_cast<VirtualKLocalizedTranslator*>(self))
        vklocalizedtranslator->klocalizedtranslator_customevent_callback = reinterpret_cast<VirtualKLocalizedTranslator::KLocalizedTranslator_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KLocalizedTranslator_ConnectNotify(KLocalizedTranslator* self, const QMetaMethod* signal) {
    auto* vklocalizedtranslator = dynamic_cast<VirtualKLocalizedTranslator*>(self);
    if (vklocalizedtranslator) {
        vklocalizedtranslator->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KLocalizedTranslator::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KLocalizedTranslator_SuperConnectNotify(KLocalizedTranslator* self, const QMetaMethod* signal) {
    if (auto* vklocalizedtranslator = dynamic_cast<VirtualKLocalizedTranslator*>(self)) {
        vklocalizedtranslator->KLocalizedTranslator::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KLocalizedTranslator::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KLocalizedTranslator_OnConnectNotify(KLocalizedTranslator* self, intptr_t slot) {
    if (auto* vklocalizedtranslator = dynamic_cast<VirtualKLocalizedTranslator*>(self))
        vklocalizedtranslator->klocalizedtranslator_connectnotify_callback = reinterpret_cast<VirtualKLocalizedTranslator::KLocalizedTranslator_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KLocalizedTranslator_DisconnectNotify(KLocalizedTranslator* self, const QMetaMethod* signal) {
    auto* vklocalizedtranslator = dynamic_cast<VirtualKLocalizedTranslator*>(self);
    if (vklocalizedtranslator) {
        vklocalizedtranslator->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KLocalizedTranslator::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KLocalizedTranslator_SuperDisconnectNotify(KLocalizedTranslator* self, const QMetaMethod* signal) {
    if (auto* vklocalizedtranslator = dynamic_cast<VirtualKLocalizedTranslator*>(self)) {
        vklocalizedtranslator->KLocalizedTranslator::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KLocalizedTranslator::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KLocalizedTranslator_OnDisconnectNotify(KLocalizedTranslator* self, intptr_t slot) {
    if (auto* vklocalizedtranslator = dynamic_cast<VirtualKLocalizedTranslator*>(self))
        vklocalizedtranslator->klocalizedtranslator_disconnectnotify_callback = reinterpret_cast<VirtualKLocalizedTranslator::KLocalizedTranslator_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* KLocalizedTranslator_Sender(const KLocalizedTranslator* self) {
    if (auto* vklocalizedtranslator = const_cast<VirtualKLocalizedTranslator*>(dynamic_cast<const VirtualKLocalizedTranslator*>(self))) {
        return vklocalizedtranslator->VirtualKLocalizedTranslator::sender();
    } else
        qFatal("Error: Protected method KLocalizedTranslator::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KLocalizedTranslator_SenderSignalIndex(const KLocalizedTranslator* self) {
    if (auto* vklocalizedtranslator = const_cast<VirtualKLocalizedTranslator*>(dynamic_cast<const VirtualKLocalizedTranslator*>(self))) {
        return vklocalizedtranslator->VirtualKLocalizedTranslator::senderSignalIndex();
    } else
        qFatal("Error: Protected method KLocalizedTranslator::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KLocalizedTranslator_Receivers(const KLocalizedTranslator* self, const char* signal) {
    if (auto* vklocalizedtranslator = const_cast<VirtualKLocalizedTranslator*>(dynamic_cast<const VirtualKLocalizedTranslator*>(self))) {
        return vklocalizedtranslator->VirtualKLocalizedTranslator::receivers(signal);
    } else
        qFatal("Error: Protected method KLocalizedTranslator::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KLocalizedTranslator_IsSignalConnected(const KLocalizedTranslator* self, const QMetaMethod* signal) {
    if (auto* vklocalizedtranslator = const_cast<VirtualKLocalizedTranslator*>(dynamic_cast<const VirtualKLocalizedTranslator*>(self))) {
        return vklocalizedtranslator->VirtualKLocalizedTranslator::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KLocalizedTranslator::isSignalConnected called without a directly constructed type");
}

void KLocalizedTranslator_Delete(KLocalizedTranslator* self) {
    delete self;
}
