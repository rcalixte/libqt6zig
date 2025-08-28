#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QPlainTextEdit>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTextEdit>
#include <QTimerEvent>
#define WORKAROUND_INNER_CLASS_DEFINITION_Sonnet__Highlighter
#define WORKAROUND_INNER_CLASS_DEFINITION_Sonnet__SpellCheckDecorator
#include <spellcheckdecorator.h>
#include "libspellcheckdecorator.h"
#include "libspellcheckdecorator.hxx"

Sonnet__SpellCheckDecorator* Sonnet__SpellCheckDecorator_new(QTextEdit* textEdit) {
    return new VirtualSonnetSpellCheckDecorator(textEdit);
}

Sonnet__SpellCheckDecorator* Sonnet__SpellCheckDecorator_new2(QPlainTextEdit* textEdit) {
    return new VirtualSonnetSpellCheckDecorator(textEdit);
}

QMetaObject* Sonnet__SpellCheckDecorator_MetaObject(const Sonnet__SpellCheckDecorator* self) {
    return (QMetaObject*)self->metaObject();
}

void* Sonnet__SpellCheckDecorator_Metacast(Sonnet__SpellCheckDecorator* self, const char* param1) {
    return self->qt_metacast(param1);
}

int Sonnet__SpellCheckDecorator_Metacall(Sonnet__SpellCheckDecorator* self, int param1, int param2, void** param3) {
    auto* vsonnet__spellcheckdecorator = dynamic_cast<VirtualSonnetSpellCheckDecorator*>(self);
    if (vsonnet__spellcheckdecorator && vsonnet__spellcheckdecorator->isVirtualSonnetSpellCheckDecorator) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualSonnetSpellCheckDecorator*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string Sonnet__SpellCheckDecorator_Tr(const char* s) {
    QString _ret = Sonnet::SpellCheckDecorator::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void Sonnet__SpellCheckDecorator_SetHighlighter(Sonnet__SpellCheckDecorator* self, Sonnet__Highlighter* highlighter) {
    self->setHighlighter(highlighter);
}

Sonnet__Highlighter* Sonnet__SpellCheckDecorator_Highlighter(const Sonnet__SpellCheckDecorator* self) {
    return self->highlighter();
}

bool Sonnet__SpellCheckDecorator_EventFilter(Sonnet__SpellCheckDecorator* self, QObject* obj, QEvent* event) {
    auto* vsonnet__spellcheckdecorator = dynamic_cast<VirtualSonnetSpellCheckDecorator*>(self);
    if (vsonnet__spellcheckdecorator && vsonnet__spellcheckdecorator->isVirtualSonnetSpellCheckDecorator) {
        return vsonnet__spellcheckdecorator->eventFilter(obj, event);
    }
    return {};
}

bool Sonnet__SpellCheckDecorator_IsSpellCheckingEnabledForBlock(const Sonnet__SpellCheckDecorator* self, const libqt_string textBlock) {
    QString textBlock_QString = QString::fromUtf8(textBlock.data, textBlock.len);
    auto* vsonnet__spellcheckdecorator = dynamic_cast<const VirtualSonnetSpellCheckDecorator*>(self);
    if (vsonnet__spellcheckdecorator && vsonnet__spellcheckdecorator->isVirtualSonnetSpellCheckDecorator) {
        return vsonnet__spellcheckdecorator->isSpellCheckingEnabledForBlock(textBlock_QString);
    }
    return {};
}

libqt_string Sonnet__SpellCheckDecorator_Tr2(const char* s, const char* c) {
    QString _ret = Sonnet::SpellCheckDecorator::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string Sonnet__SpellCheckDecorator_Tr3(const char* s, const char* c, int n) {
    QString _ret = Sonnet::SpellCheckDecorator::tr(s, c, static_cast<int>(n));
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
int Sonnet__SpellCheckDecorator_QBaseMetacall(Sonnet__SpellCheckDecorator* self, int param1, int param2, void** param3) {
    auto* vsonnetspellcheckdecorator = dynamic_cast<VirtualSonnetSpellCheckDecorator*>(self);
    if (vsonnetspellcheckdecorator && vsonnetspellcheckdecorator->isVirtualSonnetSpellCheckDecorator) {
        vsonnetspellcheckdecorator->setSonnet__SpellCheckDecorator_Metacall_IsBase(true);
        return vsonnetspellcheckdecorator->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->Sonnet::SpellCheckDecorator::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__SpellCheckDecorator_OnMetacall(Sonnet__SpellCheckDecorator* self, intptr_t slot) {
    auto* vsonnetspellcheckdecorator = dynamic_cast<VirtualSonnetSpellCheckDecorator*>(self);
    if (vsonnetspellcheckdecorator && vsonnetspellcheckdecorator->isVirtualSonnetSpellCheckDecorator) {
        vsonnetspellcheckdecorator->setSonnet__SpellCheckDecorator_Metacall_Callback(reinterpret_cast<VirtualSonnetSpellCheckDecorator::Sonnet__SpellCheckDecorator_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
bool Sonnet__SpellCheckDecorator_QBaseEventFilter(Sonnet__SpellCheckDecorator* self, QObject* obj, QEvent* event) {
    auto* vsonnetspellcheckdecorator = dynamic_cast<VirtualSonnetSpellCheckDecorator*>(self);
    if (vsonnetspellcheckdecorator && vsonnetspellcheckdecorator->isVirtualSonnetSpellCheckDecorator) {
        vsonnetspellcheckdecorator->setSonnet__SpellCheckDecorator_EventFilter_IsBase(true);
        return vsonnetspellcheckdecorator->eventFilter(obj, event);
    } else {
        return ((VirtualSonnetSpellCheckDecorator*)self)->eventFilter(obj, event);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__SpellCheckDecorator_OnEventFilter(Sonnet__SpellCheckDecorator* self, intptr_t slot) {
    auto* vsonnetspellcheckdecorator = dynamic_cast<VirtualSonnetSpellCheckDecorator*>(self);
    if (vsonnetspellcheckdecorator && vsonnetspellcheckdecorator->isVirtualSonnetSpellCheckDecorator) {
        vsonnetspellcheckdecorator->setSonnet__SpellCheckDecorator_EventFilter_Callback(reinterpret_cast<VirtualSonnetSpellCheckDecorator::Sonnet__SpellCheckDecorator_EventFilter_Callback>(slot));
    }
}

// Base class handler implementation
bool Sonnet__SpellCheckDecorator_QBaseIsSpellCheckingEnabledForBlock(const Sonnet__SpellCheckDecorator* self, const libqt_string textBlock) {
    auto* vsonnetspellcheckdecorator = const_cast<VirtualSonnetSpellCheckDecorator*>(dynamic_cast<const VirtualSonnetSpellCheckDecorator*>(self));
    QString textBlock_QString = QString::fromUtf8(textBlock.data, textBlock.len);
    if (vsonnetspellcheckdecorator && vsonnetspellcheckdecorator->isVirtualSonnetSpellCheckDecorator) {
        vsonnetspellcheckdecorator->setSonnet__SpellCheckDecorator_IsSpellCheckingEnabledForBlock_IsBase(true);
        return vsonnetspellcheckdecorator->isSpellCheckingEnabledForBlock(textBlock_QString);
    } else {
        return ((VirtualSonnetSpellCheckDecorator*)self)->isSpellCheckingEnabledForBlock(textBlock_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__SpellCheckDecorator_OnIsSpellCheckingEnabledForBlock(const Sonnet__SpellCheckDecorator* self, intptr_t slot) {
    auto* vsonnetspellcheckdecorator = const_cast<VirtualSonnetSpellCheckDecorator*>(dynamic_cast<const VirtualSonnetSpellCheckDecorator*>(self));
    if (vsonnetspellcheckdecorator && vsonnetspellcheckdecorator->isVirtualSonnetSpellCheckDecorator) {
        vsonnetspellcheckdecorator->setSonnet__SpellCheckDecorator_IsSpellCheckingEnabledForBlock_Callback(reinterpret_cast<VirtualSonnetSpellCheckDecorator::Sonnet__SpellCheckDecorator_IsSpellCheckingEnabledForBlock_Callback>(slot));
    }
}

// Derived class handler implementation
bool Sonnet__SpellCheckDecorator_Event(Sonnet__SpellCheckDecorator* self, QEvent* event) {
    auto* vsonnetspellcheckdecorator = dynamic_cast<VirtualSonnetSpellCheckDecorator*>(self);
    if (vsonnetspellcheckdecorator && vsonnetspellcheckdecorator->isVirtualSonnetSpellCheckDecorator) {
        return vsonnetspellcheckdecorator->event(event);
    } else {
        return self->Sonnet::SpellCheckDecorator::event(event);
    }
}

// Base class handler implementation
bool Sonnet__SpellCheckDecorator_QBaseEvent(Sonnet__SpellCheckDecorator* self, QEvent* event) {
    auto* vsonnetspellcheckdecorator = dynamic_cast<VirtualSonnetSpellCheckDecorator*>(self);
    if (vsonnetspellcheckdecorator && vsonnetspellcheckdecorator->isVirtualSonnetSpellCheckDecorator) {
        vsonnetspellcheckdecorator->setSonnet__SpellCheckDecorator_Event_IsBase(true);
        return vsonnetspellcheckdecorator->event(event);
    } else {
        return self->Sonnet::SpellCheckDecorator::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__SpellCheckDecorator_OnEvent(Sonnet__SpellCheckDecorator* self, intptr_t slot) {
    auto* vsonnetspellcheckdecorator = dynamic_cast<VirtualSonnetSpellCheckDecorator*>(self);
    if (vsonnetspellcheckdecorator && vsonnetspellcheckdecorator->isVirtualSonnetSpellCheckDecorator) {
        vsonnetspellcheckdecorator->setSonnet__SpellCheckDecorator_Event_Callback(reinterpret_cast<VirtualSonnetSpellCheckDecorator::Sonnet__SpellCheckDecorator_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__SpellCheckDecorator_TimerEvent(Sonnet__SpellCheckDecorator* self, QTimerEvent* event) {
    auto* vsonnetspellcheckdecorator = dynamic_cast<VirtualSonnetSpellCheckDecorator*>(self);
    if (vsonnetspellcheckdecorator && vsonnetspellcheckdecorator->isVirtualSonnetSpellCheckDecorator) {
        vsonnetspellcheckdecorator->timerEvent(event);
    } else {
        ((VirtualSonnetSpellCheckDecorator*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void Sonnet__SpellCheckDecorator_QBaseTimerEvent(Sonnet__SpellCheckDecorator* self, QTimerEvent* event) {
    auto* vsonnetspellcheckdecorator = dynamic_cast<VirtualSonnetSpellCheckDecorator*>(self);
    if (vsonnetspellcheckdecorator && vsonnetspellcheckdecorator->isVirtualSonnetSpellCheckDecorator) {
        vsonnetspellcheckdecorator->setSonnet__SpellCheckDecorator_TimerEvent_IsBase(true);
        vsonnetspellcheckdecorator->timerEvent(event);
    } else {
        ((VirtualSonnetSpellCheckDecorator*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__SpellCheckDecorator_OnTimerEvent(Sonnet__SpellCheckDecorator* self, intptr_t slot) {
    auto* vsonnetspellcheckdecorator = dynamic_cast<VirtualSonnetSpellCheckDecorator*>(self);
    if (vsonnetspellcheckdecorator && vsonnetspellcheckdecorator->isVirtualSonnetSpellCheckDecorator) {
        vsonnetspellcheckdecorator->setSonnet__SpellCheckDecorator_TimerEvent_Callback(reinterpret_cast<VirtualSonnetSpellCheckDecorator::Sonnet__SpellCheckDecorator_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__SpellCheckDecorator_ChildEvent(Sonnet__SpellCheckDecorator* self, QChildEvent* event) {
    auto* vsonnetspellcheckdecorator = dynamic_cast<VirtualSonnetSpellCheckDecorator*>(self);
    if (vsonnetspellcheckdecorator && vsonnetspellcheckdecorator->isVirtualSonnetSpellCheckDecorator) {
        vsonnetspellcheckdecorator->childEvent(event);
    } else {
        ((VirtualSonnetSpellCheckDecorator*)self)->childEvent(event);
    }
}

// Base class handler implementation
void Sonnet__SpellCheckDecorator_QBaseChildEvent(Sonnet__SpellCheckDecorator* self, QChildEvent* event) {
    auto* vsonnetspellcheckdecorator = dynamic_cast<VirtualSonnetSpellCheckDecorator*>(self);
    if (vsonnetspellcheckdecorator && vsonnetspellcheckdecorator->isVirtualSonnetSpellCheckDecorator) {
        vsonnetspellcheckdecorator->setSonnet__SpellCheckDecorator_ChildEvent_IsBase(true);
        vsonnetspellcheckdecorator->childEvent(event);
    } else {
        ((VirtualSonnetSpellCheckDecorator*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__SpellCheckDecorator_OnChildEvent(Sonnet__SpellCheckDecorator* self, intptr_t slot) {
    auto* vsonnetspellcheckdecorator = dynamic_cast<VirtualSonnetSpellCheckDecorator*>(self);
    if (vsonnetspellcheckdecorator && vsonnetspellcheckdecorator->isVirtualSonnetSpellCheckDecorator) {
        vsonnetspellcheckdecorator->setSonnet__SpellCheckDecorator_ChildEvent_Callback(reinterpret_cast<VirtualSonnetSpellCheckDecorator::Sonnet__SpellCheckDecorator_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__SpellCheckDecorator_CustomEvent(Sonnet__SpellCheckDecorator* self, QEvent* event) {
    auto* vsonnetspellcheckdecorator = dynamic_cast<VirtualSonnetSpellCheckDecorator*>(self);
    if (vsonnetspellcheckdecorator && vsonnetspellcheckdecorator->isVirtualSonnetSpellCheckDecorator) {
        vsonnetspellcheckdecorator->customEvent(event);
    } else {
        ((VirtualSonnetSpellCheckDecorator*)self)->customEvent(event);
    }
}

// Base class handler implementation
void Sonnet__SpellCheckDecorator_QBaseCustomEvent(Sonnet__SpellCheckDecorator* self, QEvent* event) {
    auto* vsonnetspellcheckdecorator = dynamic_cast<VirtualSonnetSpellCheckDecorator*>(self);
    if (vsonnetspellcheckdecorator && vsonnetspellcheckdecorator->isVirtualSonnetSpellCheckDecorator) {
        vsonnetspellcheckdecorator->setSonnet__SpellCheckDecorator_CustomEvent_IsBase(true);
        vsonnetspellcheckdecorator->customEvent(event);
    } else {
        ((VirtualSonnetSpellCheckDecorator*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__SpellCheckDecorator_OnCustomEvent(Sonnet__SpellCheckDecorator* self, intptr_t slot) {
    auto* vsonnetspellcheckdecorator = dynamic_cast<VirtualSonnetSpellCheckDecorator*>(self);
    if (vsonnetspellcheckdecorator && vsonnetspellcheckdecorator->isVirtualSonnetSpellCheckDecorator) {
        vsonnetspellcheckdecorator->setSonnet__SpellCheckDecorator_CustomEvent_Callback(reinterpret_cast<VirtualSonnetSpellCheckDecorator::Sonnet__SpellCheckDecorator_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__SpellCheckDecorator_ConnectNotify(Sonnet__SpellCheckDecorator* self, const QMetaMethod* signal) {
    auto* vsonnetspellcheckdecorator = dynamic_cast<VirtualSonnetSpellCheckDecorator*>(self);
    if (vsonnetspellcheckdecorator && vsonnetspellcheckdecorator->isVirtualSonnetSpellCheckDecorator) {
        vsonnetspellcheckdecorator->connectNotify(*signal);
    } else {
        ((VirtualSonnetSpellCheckDecorator*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void Sonnet__SpellCheckDecorator_QBaseConnectNotify(Sonnet__SpellCheckDecorator* self, const QMetaMethod* signal) {
    auto* vsonnetspellcheckdecorator = dynamic_cast<VirtualSonnetSpellCheckDecorator*>(self);
    if (vsonnetspellcheckdecorator && vsonnetspellcheckdecorator->isVirtualSonnetSpellCheckDecorator) {
        vsonnetspellcheckdecorator->setSonnet__SpellCheckDecorator_ConnectNotify_IsBase(true);
        vsonnetspellcheckdecorator->connectNotify(*signal);
    } else {
        ((VirtualSonnetSpellCheckDecorator*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__SpellCheckDecorator_OnConnectNotify(Sonnet__SpellCheckDecorator* self, intptr_t slot) {
    auto* vsonnetspellcheckdecorator = dynamic_cast<VirtualSonnetSpellCheckDecorator*>(self);
    if (vsonnetspellcheckdecorator && vsonnetspellcheckdecorator->isVirtualSonnetSpellCheckDecorator) {
        vsonnetspellcheckdecorator->setSonnet__SpellCheckDecorator_ConnectNotify_Callback(reinterpret_cast<VirtualSonnetSpellCheckDecorator::Sonnet__SpellCheckDecorator_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__SpellCheckDecorator_DisconnectNotify(Sonnet__SpellCheckDecorator* self, const QMetaMethod* signal) {
    auto* vsonnetspellcheckdecorator = dynamic_cast<VirtualSonnetSpellCheckDecorator*>(self);
    if (vsonnetspellcheckdecorator && vsonnetspellcheckdecorator->isVirtualSonnetSpellCheckDecorator) {
        vsonnetspellcheckdecorator->disconnectNotify(*signal);
    } else {
        ((VirtualSonnetSpellCheckDecorator*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void Sonnet__SpellCheckDecorator_QBaseDisconnectNotify(Sonnet__SpellCheckDecorator* self, const QMetaMethod* signal) {
    auto* vsonnetspellcheckdecorator = dynamic_cast<VirtualSonnetSpellCheckDecorator*>(self);
    if (vsonnetspellcheckdecorator && vsonnetspellcheckdecorator->isVirtualSonnetSpellCheckDecorator) {
        vsonnetspellcheckdecorator->setSonnet__SpellCheckDecorator_DisconnectNotify_IsBase(true);
        vsonnetspellcheckdecorator->disconnectNotify(*signal);
    } else {
        ((VirtualSonnetSpellCheckDecorator*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__SpellCheckDecorator_OnDisconnectNotify(Sonnet__SpellCheckDecorator* self, intptr_t slot) {
    auto* vsonnetspellcheckdecorator = dynamic_cast<VirtualSonnetSpellCheckDecorator*>(self);
    if (vsonnetspellcheckdecorator && vsonnetspellcheckdecorator->isVirtualSonnetSpellCheckDecorator) {
        vsonnetspellcheckdecorator->setSonnet__SpellCheckDecorator_DisconnectNotify_Callback(reinterpret_cast<VirtualSonnetSpellCheckDecorator::Sonnet__SpellCheckDecorator_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* Sonnet__SpellCheckDecorator_Sender(const Sonnet__SpellCheckDecorator* self) {
    auto* vsonnetspellcheckdecorator = const_cast<VirtualSonnetSpellCheckDecorator*>(dynamic_cast<const VirtualSonnetSpellCheckDecorator*>(self));
    if (vsonnetspellcheckdecorator && vsonnetspellcheckdecorator->isVirtualSonnetSpellCheckDecorator) {
        return vsonnetspellcheckdecorator->sender();
    } else {
        return ((VirtualSonnetSpellCheckDecorator*)self)->sender();
    }
}

// Base class handler implementation
QObject* Sonnet__SpellCheckDecorator_QBaseSender(const Sonnet__SpellCheckDecorator* self) {
    auto* vsonnetspellcheckdecorator = const_cast<VirtualSonnetSpellCheckDecorator*>(dynamic_cast<const VirtualSonnetSpellCheckDecorator*>(self));
    if (vsonnetspellcheckdecorator && vsonnetspellcheckdecorator->isVirtualSonnetSpellCheckDecorator) {
        vsonnetspellcheckdecorator->setSonnet__SpellCheckDecorator_Sender_IsBase(true);
        return vsonnetspellcheckdecorator->sender();
    } else {
        return ((VirtualSonnetSpellCheckDecorator*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__SpellCheckDecorator_OnSender(const Sonnet__SpellCheckDecorator* self, intptr_t slot) {
    auto* vsonnetspellcheckdecorator = const_cast<VirtualSonnetSpellCheckDecorator*>(dynamic_cast<const VirtualSonnetSpellCheckDecorator*>(self));
    if (vsonnetspellcheckdecorator && vsonnetspellcheckdecorator->isVirtualSonnetSpellCheckDecorator) {
        vsonnetspellcheckdecorator->setSonnet__SpellCheckDecorator_Sender_Callback(reinterpret_cast<VirtualSonnetSpellCheckDecorator::Sonnet__SpellCheckDecorator_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int Sonnet__SpellCheckDecorator_SenderSignalIndex(const Sonnet__SpellCheckDecorator* self) {
    auto* vsonnetspellcheckdecorator = const_cast<VirtualSonnetSpellCheckDecorator*>(dynamic_cast<const VirtualSonnetSpellCheckDecorator*>(self));
    if (vsonnetspellcheckdecorator && vsonnetspellcheckdecorator->isVirtualSonnetSpellCheckDecorator) {
        return vsonnetspellcheckdecorator->senderSignalIndex();
    } else {
        return ((VirtualSonnetSpellCheckDecorator*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int Sonnet__SpellCheckDecorator_QBaseSenderSignalIndex(const Sonnet__SpellCheckDecorator* self) {
    auto* vsonnetspellcheckdecorator = const_cast<VirtualSonnetSpellCheckDecorator*>(dynamic_cast<const VirtualSonnetSpellCheckDecorator*>(self));
    if (vsonnetspellcheckdecorator && vsonnetspellcheckdecorator->isVirtualSonnetSpellCheckDecorator) {
        vsonnetspellcheckdecorator->setSonnet__SpellCheckDecorator_SenderSignalIndex_IsBase(true);
        return vsonnetspellcheckdecorator->senderSignalIndex();
    } else {
        return ((VirtualSonnetSpellCheckDecorator*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__SpellCheckDecorator_OnSenderSignalIndex(const Sonnet__SpellCheckDecorator* self, intptr_t slot) {
    auto* vsonnetspellcheckdecorator = const_cast<VirtualSonnetSpellCheckDecorator*>(dynamic_cast<const VirtualSonnetSpellCheckDecorator*>(self));
    if (vsonnetspellcheckdecorator && vsonnetspellcheckdecorator->isVirtualSonnetSpellCheckDecorator) {
        vsonnetspellcheckdecorator->setSonnet__SpellCheckDecorator_SenderSignalIndex_Callback(reinterpret_cast<VirtualSonnetSpellCheckDecorator::Sonnet__SpellCheckDecorator_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int Sonnet__SpellCheckDecorator_Receivers(const Sonnet__SpellCheckDecorator* self, const char* signal) {
    auto* vsonnetspellcheckdecorator = const_cast<VirtualSonnetSpellCheckDecorator*>(dynamic_cast<const VirtualSonnetSpellCheckDecorator*>(self));
    if (vsonnetspellcheckdecorator && vsonnetspellcheckdecorator->isVirtualSonnetSpellCheckDecorator) {
        return vsonnetspellcheckdecorator->receivers(signal);
    } else {
        return ((VirtualSonnetSpellCheckDecorator*)self)->receivers(signal);
    }
}

// Base class handler implementation
int Sonnet__SpellCheckDecorator_QBaseReceivers(const Sonnet__SpellCheckDecorator* self, const char* signal) {
    auto* vsonnetspellcheckdecorator = const_cast<VirtualSonnetSpellCheckDecorator*>(dynamic_cast<const VirtualSonnetSpellCheckDecorator*>(self));
    if (vsonnetspellcheckdecorator && vsonnetspellcheckdecorator->isVirtualSonnetSpellCheckDecorator) {
        vsonnetspellcheckdecorator->setSonnet__SpellCheckDecorator_Receivers_IsBase(true);
        return vsonnetspellcheckdecorator->receivers(signal);
    } else {
        return ((VirtualSonnetSpellCheckDecorator*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__SpellCheckDecorator_OnReceivers(const Sonnet__SpellCheckDecorator* self, intptr_t slot) {
    auto* vsonnetspellcheckdecorator = const_cast<VirtualSonnetSpellCheckDecorator*>(dynamic_cast<const VirtualSonnetSpellCheckDecorator*>(self));
    if (vsonnetspellcheckdecorator && vsonnetspellcheckdecorator->isVirtualSonnetSpellCheckDecorator) {
        vsonnetspellcheckdecorator->setSonnet__SpellCheckDecorator_Receivers_Callback(reinterpret_cast<VirtualSonnetSpellCheckDecorator::Sonnet__SpellCheckDecorator_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool Sonnet__SpellCheckDecorator_IsSignalConnected(const Sonnet__SpellCheckDecorator* self, const QMetaMethod* signal) {
    auto* vsonnetspellcheckdecorator = const_cast<VirtualSonnetSpellCheckDecorator*>(dynamic_cast<const VirtualSonnetSpellCheckDecorator*>(self));
    if (vsonnetspellcheckdecorator && vsonnetspellcheckdecorator->isVirtualSonnetSpellCheckDecorator) {
        return vsonnetspellcheckdecorator->isSignalConnected(*signal);
    } else {
        return ((VirtualSonnetSpellCheckDecorator*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool Sonnet__SpellCheckDecorator_QBaseIsSignalConnected(const Sonnet__SpellCheckDecorator* self, const QMetaMethod* signal) {
    auto* vsonnetspellcheckdecorator = const_cast<VirtualSonnetSpellCheckDecorator*>(dynamic_cast<const VirtualSonnetSpellCheckDecorator*>(self));
    if (vsonnetspellcheckdecorator && vsonnetspellcheckdecorator->isVirtualSonnetSpellCheckDecorator) {
        vsonnetspellcheckdecorator->setSonnet__SpellCheckDecorator_IsSignalConnected_IsBase(true);
        return vsonnetspellcheckdecorator->isSignalConnected(*signal);
    } else {
        return ((VirtualSonnetSpellCheckDecorator*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__SpellCheckDecorator_OnIsSignalConnected(const Sonnet__SpellCheckDecorator* self, intptr_t slot) {
    auto* vsonnetspellcheckdecorator = const_cast<VirtualSonnetSpellCheckDecorator*>(dynamic_cast<const VirtualSonnetSpellCheckDecorator*>(self));
    if (vsonnetspellcheckdecorator && vsonnetspellcheckdecorator->isVirtualSonnetSpellCheckDecorator) {
        vsonnetspellcheckdecorator->setSonnet__SpellCheckDecorator_IsSignalConnected_Callback(reinterpret_cast<VirtualSonnetSpellCheckDecorator::Sonnet__SpellCheckDecorator_IsSignalConnected_Callback>(slot));
    }
}

void Sonnet__SpellCheckDecorator_Delete(Sonnet__SpellCheckDecorator* self) {
    delete self;
}
