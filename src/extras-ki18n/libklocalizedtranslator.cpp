#include <KLocalizedTranslator>
#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
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
    auto* vklocalizedtranslator = dynamic_cast<VirtualKLocalizedTranslator*>(self);
    if (vklocalizedtranslator && vklocalizedtranslator->isVirtualKLocalizedTranslator) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKLocalizedTranslator*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void KLocalizedTranslator_OnMetacall(KLocalizedTranslator* self, intptr_t slot) {
    auto* vklocalizedtranslator = dynamic_cast<VirtualKLocalizedTranslator*>(self);
    if (vklocalizedtranslator && vklocalizedtranslator->isVirtualKLocalizedTranslator) {
        vklocalizedtranslator->setKLocalizedTranslator_Metacall_Callback(reinterpret_cast<VirtualKLocalizedTranslator::KLocalizedTranslator_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int KLocalizedTranslator_QBaseMetacall(KLocalizedTranslator* self, int param1, int param2, void** param3) {
    auto* vklocalizedtranslator = dynamic_cast<VirtualKLocalizedTranslator*>(self);
    if (vklocalizedtranslator && vklocalizedtranslator->isVirtualKLocalizedTranslator) {
        vklocalizedtranslator->setKLocalizedTranslator_Metacall_IsBase(true);
        return vklocalizedtranslator->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKLocalizedTranslator*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KLocalizedTranslator_Tr(const char* s) {
    QString _ret = KLocalizedTranslator::tr(s);
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
    QString _ret = KLocalizedTranslator::tr(s, c);
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
    QString _ret = KLocalizedTranslator::tr(s, c, static_cast<int>(n));
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
libqt_string KLocalizedTranslator_Translate(const KLocalizedTranslator* self, const char* context, const char* sourceText, const char* disambiguation, int n) {
    auto* vklocalizedtranslator = const_cast<VirtualKLocalizedTranslator*>(dynamic_cast<const VirtualKLocalizedTranslator*>(self));
    if (vklocalizedtranslator && vklocalizedtranslator->isVirtualKLocalizedTranslator) {
        QString _ret = vklocalizedtranslator->translate(context, sourceText, disambiguation, static_cast<int>(n));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = self->KLocalizedTranslator::translate(context, sourceText, disambiguation, static_cast<int>(n));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

// Base class handler implementation
libqt_string KLocalizedTranslator_QBaseTranslate(const KLocalizedTranslator* self, const char* context, const char* sourceText, const char* disambiguation, int n) {
    auto* vklocalizedtranslator = const_cast<VirtualKLocalizedTranslator*>(dynamic_cast<const VirtualKLocalizedTranslator*>(self));
    if (vklocalizedtranslator && vklocalizedtranslator->isVirtualKLocalizedTranslator) {
        vklocalizedtranslator->setKLocalizedTranslator_Translate_IsBase(true);
        QString _ret = vklocalizedtranslator->translate(context, sourceText, disambiguation, static_cast<int>(n));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = self->KLocalizedTranslator::translate(context, sourceText, disambiguation, static_cast<int>(n));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

// Auxiliary method to allow providing re-implementation
void KLocalizedTranslator_OnTranslate(const KLocalizedTranslator* self, intptr_t slot) {
    auto* vklocalizedtranslator = const_cast<VirtualKLocalizedTranslator*>(dynamic_cast<const VirtualKLocalizedTranslator*>(self));
    if (vklocalizedtranslator && vklocalizedtranslator->isVirtualKLocalizedTranslator) {
        vklocalizedtranslator->setKLocalizedTranslator_Translate_Callback(reinterpret_cast<VirtualKLocalizedTranslator::KLocalizedTranslator_Translate_Callback>(slot));
    }
}

// Derived class handler implementation
bool KLocalizedTranslator_IsEmpty(const KLocalizedTranslator* self) {
    auto* vklocalizedtranslator = const_cast<VirtualKLocalizedTranslator*>(dynamic_cast<const VirtualKLocalizedTranslator*>(self));
    if (vklocalizedtranslator && vklocalizedtranslator->isVirtualKLocalizedTranslator) {
        return vklocalizedtranslator->isEmpty();
    } else {
        return self->KLocalizedTranslator::isEmpty();
    }
}

// Base class handler implementation
bool KLocalizedTranslator_QBaseIsEmpty(const KLocalizedTranslator* self) {
    auto* vklocalizedtranslator = const_cast<VirtualKLocalizedTranslator*>(dynamic_cast<const VirtualKLocalizedTranslator*>(self));
    if (vklocalizedtranslator && vklocalizedtranslator->isVirtualKLocalizedTranslator) {
        vklocalizedtranslator->setKLocalizedTranslator_IsEmpty_IsBase(true);
        return vklocalizedtranslator->isEmpty();
    } else {
        return self->KLocalizedTranslator::isEmpty();
    }
}

// Auxiliary method to allow providing re-implementation
void KLocalizedTranslator_OnIsEmpty(const KLocalizedTranslator* self, intptr_t slot) {
    auto* vklocalizedtranslator = const_cast<VirtualKLocalizedTranslator*>(dynamic_cast<const VirtualKLocalizedTranslator*>(self));
    if (vklocalizedtranslator && vklocalizedtranslator->isVirtualKLocalizedTranslator) {
        vklocalizedtranslator->setKLocalizedTranslator_IsEmpty_Callback(reinterpret_cast<VirtualKLocalizedTranslator::KLocalizedTranslator_IsEmpty_Callback>(slot));
    }
}

// Derived class handler implementation
bool KLocalizedTranslator_Event(KLocalizedTranslator* self, QEvent* event) {
    auto* vklocalizedtranslator = dynamic_cast<VirtualKLocalizedTranslator*>(self);
    if (vklocalizedtranslator && vklocalizedtranslator->isVirtualKLocalizedTranslator) {
        return vklocalizedtranslator->event(event);
    } else {
        return self->KLocalizedTranslator::event(event);
    }
}

// Base class handler implementation
bool KLocalizedTranslator_QBaseEvent(KLocalizedTranslator* self, QEvent* event) {
    auto* vklocalizedtranslator = dynamic_cast<VirtualKLocalizedTranslator*>(self);
    if (vklocalizedtranslator && vklocalizedtranslator->isVirtualKLocalizedTranslator) {
        vklocalizedtranslator->setKLocalizedTranslator_Event_IsBase(true);
        return vklocalizedtranslator->event(event);
    } else {
        return self->KLocalizedTranslator::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KLocalizedTranslator_OnEvent(KLocalizedTranslator* self, intptr_t slot) {
    auto* vklocalizedtranslator = dynamic_cast<VirtualKLocalizedTranslator*>(self);
    if (vklocalizedtranslator && vklocalizedtranslator->isVirtualKLocalizedTranslator) {
        vklocalizedtranslator->setKLocalizedTranslator_Event_Callback(reinterpret_cast<VirtualKLocalizedTranslator::KLocalizedTranslator_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool KLocalizedTranslator_EventFilter(KLocalizedTranslator* self, QObject* watched, QEvent* event) {
    auto* vklocalizedtranslator = dynamic_cast<VirtualKLocalizedTranslator*>(self);
    if (vklocalizedtranslator && vklocalizedtranslator->isVirtualKLocalizedTranslator) {
        return vklocalizedtranslator->eventFilter(watched, event);
    } else {
        return self->KLocalizedTranslator::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool KLocalizedTranslator_QBaseEventFilter(KLocalizedTranslator* self, QObject* watched, QEvent* event) {
    auto* vklocalizedtranslator = dynamic_cast<VirtualKLocalizedTranslator*>(self);
    if (vklocalizedtranslator && vklocalizedtranslator->isVirtualKLocalizedTranslator) {
        vklocalizedtranslator->setKLocalizedTranslator_EventFilter_IsBase(true);
        return vklocalizedtranslator->eventFilter(watched, event);
    } else {
        return self->KLocalizedTranslator::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KLocalizedTranslator_OnEventFilter(KLocalizedTranslator* self, intptr_t slot) {
    auto* vklocalizedtranslator = dynamic_cast<VirtualKLocalizedTranslator*>(self);
    if (vklocalizedtranslator && vklocalizedtranslator->isVirtualKLocalizedTranslator) {
        vklocalizedtranslator->setKLocalizedTranslator_EventFilter_Callback(reinterpret_cast<VirtualKLocalizedTranslator::KLocalizedTranslator_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void KLocalizedTranslator_TimerEvent(KLocalizedTranslator* self, QTimerEvent* event) {
    auto* vklocalizedtranslator = dynamic_cast<VirtualKLocalizedTranslator*>(self);
    if (vklocalizedtranslator && vklocalizedtranslator->isVirtualKLocalizedTranslator) {
        vklocalizedtranslator->timerEvent(event);
    } else {
        ((VirtualKLocalizedTranslator*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KLocalizedTranslator_QBaseTimerEvent(KLocalizedTranslator* self, QTimerEvent* event) {
    auto* vklocalizedtranslator = dynamic_cast<VirtualKLocalizedTranslator*>(self);
    if (vklocalizedtranslator && vklocalizedtranslator->isVirtualKLocalizedTranslator) {
        vklocalizedtranslator->setKLocalizedTranslator_TimerEvent_IsBase(true);
        vklocalizedtranslator->timerEvent(event);
    } else {
        ((VirtualKLocalizedTranslator*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KLocalizedTranslator_OnTimerEvent(KLocalizedTranslator* self, intptr_t slot) {
    auto* vklocalizedtranslator = dynamic_cast<VirtualKLocalizedTranslator*>(self);
    if (vklocalizedtranslator && vklocalizedtranslator->isVirtualKLocalizedTranslator) {
        vklocalizedtranslator->setKLocalizedTranslator_TimerEvent_Callback(reinterpret_cast<VirtualKLocalizedTranslator::KLocalizedTranslator_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KLocalizedTranslator_ChildEvent(KLocalizedTranslator* self, QChildEvent* event) {
    auto* vklocalizedtranslator = dynamic_cast<VirtualKLocalizedTranslator*>(self);
    if (vklocalizedtranslator && vklocalizedtranslator->isVirtualKLocalizedTranslator) {
        vklocalizedtranslator->childEvent(event);
    } else {
        ((VirtualKLocalizedTranslator*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KLocalizedTranslator_QBaseChildEvent(KLocalizedTranslator* self, QChildEvent* event) {
    auto* vklocalizedtranslator = dynamic_cast<VirtualKLocalizedTranslator*>(self);
    if (vklocalizedtranslator && vklocalizedtranslator->isVirtualKLocalizedTranslator) {
        vklocalizedtranslator->setKLocalizedTranslator_ChildEvent_IsBase(true);
        vklocalizedtranslator->childEvent(event);
    } else {
        ((VirtualKLocalizedTranslator*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KLocalizedTranslator_OnChildEvent(KLocalizedTranslator* self, intptr_t slot) {
    auto* vklocalizedtranslator = dynamic_cast<VirtualKLocalizedTranslator*>(self);
    if (vklocalizedtranslator && vklocalizedtranslator->isVirtualKLocalizedTranslator) {
        vklocalizedtranslator->setKLocalizedTranslator_ChildEvent_Callback(reinterpret_cast<VirtualKLocalizedTranslator::KLocalizedTranslator_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KLocalizedTranslator_CustomEvent(KLocalizedTranslator* self, QEvent* event) {
    auto* vklocalizedtranslator = dynamic_cast<VirtualKLocalizedTranslator*>(self);
    if (vklocalizedtranslator && vklocalizedtranslator->isVirtualKLocalizedTranslator) {
        vklocalizedtranslator->customEvent(event);
    } else {
        ((VirtualKLocalizedTranslator*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KLocalizedTranslator_QBaseCustomEvent(KLocalizedTranslator* self, QEvent* event) {
    auto* vklocalizedtranslator = dynamic_cast<VirtualKLocalizedTranslator*>(self);
    if (vklocalizedtranslator && vklocalizedtranslator->isVirtualKLocalizedTranslator) {
        vklocalizedtranslator->setKLocalizedTranslator_CustomEvent_IsBase(true);
        vklocalizedtranslator->customEvent(event);
    } else {
        ((VirtualKLocalizedTranslator*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KLocalizedTranslator_OnCustomEvent(KLocalizedTranslator* self, intptr_t slot) {
    auto* vklocalizedtranslator = dynamic_cast<VirtualKLocalizedTranslator*>(self);
    if (vklocalizedtranslator && vklocalizedtranslator->isVirtualKLocalizedTranslator) {
        vklocalizedtranslator->setKLocalizedTranslator_CustomEvent_Callback(reinterpret_cast<VirtualKLocalizedTranslator::KLocalizedTranslator_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KLocalizedTranslator_ConnectNotify(KLocalizedTranslator* self, const QMetaMethod* signal) {
    auto* vklocalizedtranslator = dynamic_cast<VirtualKLocalizedTranslator*>(self);
    if (vklocalizedtranslator && vklocalizedtranslator->isVirtualKLocalizedTranslator) {
        vklocalizedtranslator->connectNotify(*signal);
    } else {
        ((VirtualKLocalizedTranslator*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KLocalizedTranslator_QBaseConnectNotify(KLocalizedTranslator* self, const QMetaMethod* signal) {
    auto* vklocalizedtranslator = dynamic_cast<VirtualKLocalizedTranslator*>(self);
    if (vklocalizedtranslator && vklocalizedtranslator->isVirtualKLocalizedTranslator) {
        vklocalizedtranslator->setKLocalizedTranslator_ConnectNotify_IsBase(true);
        vklocalizedtranslator->connectNotify(*signal);
    } else {
        ((VirtualKLocalizedTranslator*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KLocalizedTranslator_OnConnectNotify(KLocalizedTranslator* self, intptr_t slot) {
    auto* vklocalizedtranslator = dynamic_cast<VirtualKLocalizedTranslator*>(self);
    if (vklocalizedtranslator && vklocalizedtranslator->isVirtualKLocalizedTranslator) {
        vklocalizedtranslator->setKLocalizedTranslator_ConnectNotify_Callback(reinterpret_cast<VirtualKLocalizedTranslator::KLocalizedTranslator_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KLocalizedTranslator_DisconnectNotify(KLocalizedTranslator* self, const QMetaMethod* signal) {
    auto* vklocalizedtranslator = dynamic_cast<VirtualKLocalizedTranslator*>(self);
    if (vklocalizedtranslator && vklocalizedtranslator->isVirtualKLocalizedTranslator) {
        vklocalizedtranslator->disconnectNotify(*signal);
    } else {
        ((VirtualKLocalizedTranslator*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KLocalizedTranslator_QBaseDisconnectNotify(KLocalizedTranslator* self, const QMetaMethod* signal) {
    auto* vklocalizedtranslator = dynamic_cast<VirtualKLocalizedTranslator*>(self);
    if (vklocalizedtranslator && vklocalizedtranslator->isVirtualKLocalizedTranslator) {
        vklocalizedtranslator->setKLocalizedTranslator_DisconnectNotify_IsBase(true);
        vklocalizedtranslator->disconnectNotify(*signal);
    } else {
        ((VirtualKLocalizedTranslator*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KLocalizedTranslator_OnDisconnectNotify(KLocalizedTranslator* self, intptr_t slot) {
    auto* vklocalizedtranslator = dynamic_cast<VirtualKLocalizedTranslator*>(self);
    if (vklocalizedtranslator && vklocalizedtranslator->isVirtualKLocalizedTranslator) {
        vklocalizedtranslator->setKLocalizedTranslator_DisconnectNotify_Callback(reinterpret_cast<VirtualKLocalizedTranslator::KLocalizedTranslator_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KLocalizedTranslator_Sender(const KLocalizedTranslator* self) {
    auto* vklocalizedtranslator = const_cast<VirtualKLocalizedTranslator*>(dynamic_cast<const VirtualKLocalizedTranslator*>(self));
    if (vklocalizedtranslator && vklocalizedtranslator->isVirtualKLocalizedTranslator) {
        return vklocalizedtranslator->sender();
    } else {
        return ((VirtualKLocalizedTranslator*)self)->sender();
    }
}

// Base class handler implementation
QObject* KLocalizedTranslator_QBaseSender(const KLocalizedTranslator* self) {
    auto* vklocalizedtranslator = const_cast<VirtualKLocalizedTranslator*>(dynamic_cast<const VirtualKLocalizedTranslator*>(self));
    if (vklocalizedtranslator && vklocalizedtranslator->isVirtualKLocalizedTranslator) {
        vklocalizedtranslator->setKLocalizedTranslator_Sender_IsBase(true);
        return vklocalizedtranslator->sender();
    } else {
        return ((VirtualKLocalizedTranslator*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KLocalizedTranslator_OnSender(const KLocalizedTranslator* self, intptr_t slot) {
    auto* vklocalizedtranslator = const_cast<VirtualKLocalizedTranslator*>(dynamic_cast<const VirtualKLocalizedTranslator*>(self));
    if (vklocalizedtranslator && vklocalizedtranslator->isVirtualKLocalizedTranslator) {
        vklocalizedtranslator->setKLocalizedTranslator_Sender_Callback(reinterpret_cast<VirtualKLocalizedTranslator::KLocalizedTranslator_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KLocalizedTranslator_SenderSignalIndex(const KLocalizedTranslator* self) {
    auto* vklocalizedtranslator = const_cast<VirtualKLocalizedTranslator*>(dynamic_cast<const VirtualKLocalizedTranslator*>(self));
    if (vklocalizedtranslator && vklocalizedtranslator->isVirtualKLocalizedTranslator) {
        return vklocalizedtranslator->senderSignalIndex();
    } else {
        return ((VirtualKLocalizedTranslator*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KLocalizedTranslator_QBaseSenderSignalIndex(const KLocalizedTranslator* self) {
    auto* vklocalizedtranslator = const_cast<VirtualKLocalizedTranslator*>(dynamic_cast<const VirtualKLocalizedTranslator*>(self));
    if (vklocalizedtranslator && vklocalizedtranslator->isVirtualKLocalizedTranslator) {
        vklocalizedtranslator->setKLocalizedTranslator_SenderSignalIndex_IsBase(true);
        return vklocalizedtranslator->senderSignalIndex();
    } else {
        return ((VirtualKLocalizedTranslator*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KLocalizedTranslator_OnSenderSignalIndex(const KLocalizedTranslator* self, intptr_t slot) {
    auto* vklocalizedtranslator = const_cast<VirtualKLocalizedTranslator*>(dynamic_cast<const VirtualKLocalizedTranslator*>(self));
    if (vklocalizedtranslator && vklocalizedtranslator->isVirtualKLocalizedTranslator) {
        vklocalizedtranslator->setKLocalizedTranslator_SenderSignalIndex_Callback(reinterpret_cast<VirtualKLocalizedTranslator::KLocalizedTranslator_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KLocalizedTranslator_Receivers(const KLocalizedTranslator* self, const char* signal) {
    auto* vklocalizedtranslator = const_cast<VirtualKLocalizedTranslator*>(dynamic_cast<const VirtualKLocalizedTranslator*>(self));
    if (vklocalizedtranslator && vklocalizedtranslator->isVirtualKLocalizedTranslator) {
        return vklocalizedtranslator->receivers(signal);
    } else {
        return ((VirtualKLocalizedTranslator*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KLocalizedTranslator_QBaseReceivers(const KLocalizedTranslator* self, const char* signal) {
    auto* vklocalizedtranslator = const_cast<VirtualKLocalizedTranslator*>(dynamic_cast<const VirtualKLocalizedTranslator*>(self));
    if (vklocalizedtranslator && vklocalizedtranslator->isVirtualKLocalizedTranslator) {
        vklocalizedtranslator->setKLocalizedTranslator_Receivers_IsBase(true);
        return vklocalizedtranslator->receivers(signal);
    } else {
        return ((VirtualKLocalizedTranslator*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KLocalizedTranslator_OnReceivers(const KLocalizedTranslator* self, intptr_t slot) {
    auto* vklocalizedtranslator = const_cast<VirtualKLocalizedTranslator*>(dynamic_cast<const VirtualKLocalizedTranslator*>(self));
    if (vklocalizedtranslator && vklocalizedtranslator->isVirtualKLocalizedTranslator) {
        vklocalizedtranslator->setKLocalizedTranslator_Receivers_Callback(reinterpret_cast<VirtualKLocalizedTranslator::KLocalizedTranslator_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KLocalizedTranslator_IsSignalConnected(const KLocalizedTranslator* self, const QMetaMethod* signal) {
    auto* vklocalizedtranslator = const_cast<VirtualKLocalizedTranslator*>(dynamic_cast<const VirtualKLocalizedTranslator*>(self));
    if (vklocalizedtranslator && vklocalizedtranslator->isVirtualKLocalizedTranslator) {
        return vklocalizedtranslator->isSignalConnected(*signal);
    } else {
        return ((VirtualKLocalizedTranslator*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KLocalizedTranslator_QBaseIsSignalConnected(const KLocalizedTranslator* self, const QMetaMethod* signal) {
    auto* vklocalizedtranslator = const_cast<VirtualKLocalizedTranslator*>(dynamic_cast<const VirtualKLocalizedTranslator*>(self));
    if (vklocalizedtranslator && vklocalizedtranslator->isVirtualKLocalizedTranslator) {
        vklocalizedtranslator->setKLocalizedTranslator_IsSignalConnected_IsBase(true);
        return vklocalizedtranslator->isSignalConnected(*signal);
    } else {
        return ((VirtualKLocalizedTranslator*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KLocalizedTranslator_OnIsSignalConnected(const KLocalizedTranslator* self, intptr_t slot) {
    auto* vklocalizedtranslator = const_cast<VirtualKLocalizedTranslator*>(dynamic_cast<const VirtualKLocalizedTranslator*>(self));
    if (vklocalizedtranslator && vklocalizedtranslator->isVirtualKLocalizedTranslator) {
        vklocalizedtranslator->setKLocalizedTranslator_IsSignalConnected_Callback(reinterpret_cast<VirtualKLocalizedTranslator::KLocalizedTranslator_IsSignalConnected_Callback>(slot));
    }
}

void KLocalizedTranslator_Delete(KLocalizedTranslator* self) {
    delete self;
}
