#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QPlainTextEdit>
#include <QString>
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
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string Sonnet__SpellCheckDecorator_Tr(const char* s) {
    auto _ret = Sonnet::SpellCheckDecorator::tr(s);
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
    if (vsonnet__spellcheckdecorator) {
        return vsonnet__spellcheckdecorator->eventFilter(obj, event);
    }
    qFatal("Error: Protected method Sonnet::SpellCheckDecorator::eventFilter called without a directly constructed type");
}

bool Sonnet__SpellCheckDecorator_IsSpellCheckingEnabledForBlock(const Sonnet__SpellCheckDecorator* self, const libqt_string textBlock) {
    QString textBlock_QString = QString::fromUtf8(textBlock.data, textBlock.len);
    auto* vsonnet__spellcheckdecorator = dynamic_cast<const VirtualSonnetSpellCheckDecorator*>(self);
    if (vsonnet__spellcheckdecorator) {
        return vsonnet__spellcheckdecorator->isSpellCheckingEnabledForBlock(textBlock_QString);
    }
    qFatal("Error: Protected method Sonnet::SpellCheckDecorator::isSpellCheckingEnabledForBlock called without a directly constructed type");
}

libqt_string Sonnet__SpellCheckDecorator_Tr2(const char* s, const char* c) {
    auto _ret = Sonnet::SpellCheckDecorator::tr(s, c);
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
    auto _ret = Sonnet::SpellCheckDecorator::tr(s, c, static_cast<int>(n));
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
QMetaObject* Sonnet__SpellCheckDecorator_SuperMetaObject(const Sonnet__SpellCheckDecorator* self) {
    return (QMetaObject*)self->Sonnet::SpellCheckDecorator::metaObject();
}

// Auxiliary method to allow providing re-implementation
void Sonnet__SpellCheckDecorator_OnMetaObject(Sonnet__SpellCheckDecorator* self, intptr_t slot) {
    if (auto* vsonnetspellcheckdecorator = const_cast<VirtualSonnetSpellCheckDecorator*>(dynamic_cast<const VirtualSonnetSpellCheckDecorator*>(self)))
        vsonnetspellcheckdecorator->sonnet__spellcheckdecorator_metaobject_callback = reinterpret_cast<VirtualSonnetSpellCheckDecorator::Sonnet__SpellCheckDecorator_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* Sonnet__SpellCheckDecorator_SuperMetacast(Sonnet__SpellCheckDecorator* self, const char* param1) {
    return self->Sonnet::SpellCheckDecorator::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void Sonnet__SpellCheckDecorator_OnMetacast(Sonnet__SpellCheckDecorator* self, intptr_t slot) {
    if (auto* vsonnetspellcheckdecorator = dynamic_cast<VirtualSonnetSpellCheckDecorator*>(self))
        vsonnetspellcheckdecorator->sonnet__spellcheckdecorator_metacast_callback = reinterpret_cast<VirtualSonnetSpellCheckDecorator::Sonnet__SpellCheckDecorator_Metacast_Callback>(slot);
}

// Base class handler implementation
int Sonnet__SpellCheckDecorator_SuperMetacall(Sonnet__SpellCheckDecorator* self, int param1, int param2, void** param3) {
    return self->Sonnet::SpellCheckDecorator::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void Sonnet__SpellCheckDecorator_OnMetacall(Sonnet__SpellCheckDecorator* self, intptr_t slot) {
    if (auto* vsonnetspellcheckdecorator = dynamic_cast<VirtualSonnetSpellCheckDecorator*>(self))
        vsonnetspellcheckdecorator->sonnet__spellcheckdecorator_metacall_callback = reinterpret_cast<VirtualSonnetSpellCheckDecorator::Sonnet__SpellCheckDecorator_Metacall_Callback>(slot);
}

// Base class handler implementation
bool Sonnet__SpellCheckDecorator_SuperEventFilter(Sonnet__SpellCheckDecorator* self, QObject* obj, QEvent* event) {
    if (auto* vsonnetspellcheckdecorator = dynamic_cast<VirtualSonnetSpellCheckDecorator*>(self)) {
        return vsonnetspellcheckdecorator->Sonnet::SpellCheckDecorator::eventFilter(obj, event);
    } else
        qFatal("Error: Protected virtual method Sonnet::SpellCheckDecorator::eventFilter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__SpellCheckDecorator_OnEventFilter(Sonnet__SpellCheckDecorator* self, intptr_t slot) {
    if (auto* vsonnetspellcheckdecorator = dynamic_cast<VirtualSonnetSpellCheckDecorator*>(self))
        vsonnetspellcheckdecorator->sonnet__spellcheckdecorator_eventfilter_callback = reinterpret_cast<VirtualSonnetSpellCheckDecorator::Sonnet__SpellCheckDecorator_EventFilter_Callback>(slot);
}

// Base class handler implementation
bool Sonnet__SpellCheckDecorator_SuperIsSpellCheckingEnabledForBlock(const Sonnet__SpellCheckDecorator* self, const libqt_string textBlock) {
    QString textBlock_QString = QString::fromUtf8(textBlock.data, textBlock.len);
    if (auto* vsonnetspellcheckdecorator = const_cast<VirtualSonnetSpellCheckDecorator*>(dynamic_cast<const VirtualSonnetSpellCheckDecorator*>(self))) {
        return vsonnetspellcheckdecorator->Sonnet::SpellCheckDecorator::isSpellCheckingEnabledForBlock(textBlock_QString);
    } else
        qFatal("Error: Protected virtual method Sonnet::SpellCheckDecorator::isSpellCheckingEnabledForBlock called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__SpellCheckDecorator_OnIsSpellCheckingEnabledForBlock(Sonnet__SpellCheckDecorator* self, intptr_t slot) {
    if (auto* vsonnetspellcheckdecorator = const_cast<VirtualSonnetSpellCheckDecorator*>(dynamic_cast<const VirtualSonnetSpellCheckDecorator*>(self)))
        vsonnetspellcheckdecorator->sonnet__spellcheckdecorator_isspellcheckingenabledforblock_callback = reinterpret_cast<VirtualSonnetSpellCheckDecorator::Sonnet__SpellCheckDecorator_IsSpellCheckingEnabledForBlock_Callback>(slot);
}

// Derived class handler implementation
bool Sonnet__SpellCheckDecorator_Event(Sonnet__SpellCheckDecorator* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool Sonnet__SpellCheckDecorator_SuperEvent(Sonnet__SpellCheckDecorator* self, QEvent* event) {
    return self->Sonnet::SpellCheckDecorator::event(event);
}

// Auxiliary method to allow providing re-implementation
void Sonnet__SpellCheckDecorator_OnEvent(Sonnet__SpellCheckDecorator* self, intptr_t slot) {
    if (auto* vsonnetspellcheckdecorator = dynamic_cast<VirtualSonnetSpellCheckDecorator*>(self))
        vsonnetspellcheckdecorator->sonnet__spellcheckdecorator_event_callback = reinterpret_cast<VirtualSonnetSpellCheckDecorator::Sonnet__SpellCheckDecorator_Event_Callback>(slot);
}

// Derived class handler implementation
void Sonnet__SpellCheckDecorator_TimerEvent(Sonnet__SpellCheckDecorator* self, QTimerEvent* event) {
    auto* vsonnetspellcheckdecorator = dynamic_cast<VirtualSonnetSpellCheckDecorator*>(self);
    if (vsonnetspellcheckdecorator) {
        vsonnetspellcheckdecorator->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method Sonnet::SpellCheckDecorator::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Sonnet__SpellCheckDecorator_SuperTimerEvent(Sonnet__SpellCheckDecorator* self, QTimerEvent* event) {
    if (auto* vsonnetspellcheckdecorator = dynamic_cast<VirtualSonnetSpellCheckDecorator*>(self)) {
        vsonnetspellcheckdecorator->Sonnet::SpellCheckDecorator::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method Sonnet::SpellCheckDecorator::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__SpellCheckDecorator_OnTimerEvent(Sonnet__SpellCheckDecorator* self, intptr_t slot) {
    if (auto* vsonnetspellcheckdecorator = dynamic_cast<VirtualSonnetSpellCheckDecorator*>(self))
        vsonnetspellcheckdecorator->sonnet__spellcheckdecorator_timerevent_callback = reinterpret_cast<VirtualSonnetSpellCheckDecorator::Sonnet__SpellCheckDecorator_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void Sonnet__SpellCheckDecorator_ChildEvent(Sonnet__SpellCheckDecorator* self, QChildEvent* event) {
    auto* vsonnetspellcheckdecorator = dynamic_cast<VirtualSonnetSpellCheckDecorator*>(self);
    if (vsonnetspellcheckdecorator) {
        vsonnetspellcheckdecorator->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method Sonnet::SpellCheckDecorator::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Sonnet__SpellCheckDecorator_SuperChildEvent(Sonnet__SpellCheckDecorator* self, QChildEvent* event) {
    if (auto* vsonnetspellcheckdecorator = dynamic_cast<VirtualSonnetSpellCheckDecorator*>(self)) {
        vsonnetspellcheckdecorator->Sonnet::SpellCheckDecorator::childEvent(event);
    } else
        qFatal("Error: Protected virtual method Sonnet::SpellCheckDecorator::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__SpellCheckDecorator_OnChildEvent(Sonnet__SpellCheckDecorator* self, intptr_t slot) {
    if (auto* vsonnetspellcheckdecorator = dynamic_cast<VirtualSonnetSpellCheckDecorator*>(self))
        vsonnetspellcheckdecorator->sonnet__spellcheckdecorator_childevent_callback = reinterpret_cast<VirtualSonnetSpellCheckDecorator::Sonnet__SpellCheckDecorator_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void Sonnet__SpellCheckDecorator_CustomEvent(Sonnet__SpellCheckDecorator* self, QEvent* event) {
    auto* vsonnetspellcheckdecorator = dynamic_cast<VirtualSonnetSpellCheckDecorator*>(self);
    if (vsonnetspellcheckdecorator) {
        vsonnetspellcheckdecorator->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method Sonnet::SpellCheckDecorator::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Sonnet__SpellCheckDecorator_SuperCustomEvent(Sonnet__SpellCheckDecorator* self, QEvent* event) {
    if (auto* vsonnetspellcheckdecorator = dynamic_cast<VirtualSonnetSpellCheckDecorator*>(self)) {
        vsonnetspellcheckdecorator->Sonnet::SpellCheckDecorator::customEvent(event);
    } else
        qFatal("Error: Protected virtual method Sonnet::SpellCheckDecorator::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__SpellCheckDecorator_OnCustomEvent(Sonnet__SpellCheckDecorator* self, intptr_t slot) {
    if (auto* vsonnetspellcheckdecorator = dynamic_cast<VirtualSonnetSpellCheckDecorator*>(self))
        vsonnetspellcheckdecorator->sonnet__spellcheckdecorator_customevent_callback = reinterpret_cast<VirtualSonnetSpellCheckDecorator::Sonnet__SpellCheckDecorator_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void Sonnet__SpellCheckDecorator_ConnectNotify(Sonnet__SpellCheckDecorator* self, const QMetaMethod* signal) {
    auto* vsonnetspellcheckdecorator = dynamic_cast<VirtualSonnetSpellCheckDecorator*>(self);
    if (vsonnetspellcheckdecorator) {
        vsonnetspellcheckdecorator->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method Sonnet::SpellCheckDecorator::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void Sonnet__SpellCheckDecorator_SuperConnectNotify(Sonnet__SpellCheckDecorator* self, const QMetaMethod* signal) {
    if (auto* vsonnetspellcheckdecorator = dynamic_cast<VirtualSonnetSpellCheckDecorator*>(self)) {
        vsonnetspellcheckdecorator->Sonnet::SpellCheckDecorator::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method Sonnet::SpellCheckDecorator::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__SpellCheckDecorator_OnConnectNotify(Sonnet__SpellCheckDecorator* self, intptr_t slot) {
    if (auto* vsonnetspellcheckdecorator = dynamic_cast<VirtualSonnetSpellCheckDecorator*>(self))
        vsonnetspellcheckdecorator->sonnet__spellcheckdecorator_connectnotify_callback = reinterpret_cast<VirtualSonnetSpellCheckDecorator::Sonnet__SpellCheckDecorator_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void Sonnet__SpellCheckDecorator_DisconnectNotify(Sonnet__SpellCheckDecorator* self, const QMetaMethod* signal) {
    auto* vsonnetspellcheckdecorator = dynamic_cast<VirtualSonnetSpellCheckDecorator*>(self);
    if (vsonnetspellcheckdecorator) {
        vsonnetspellcheckdecorator->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method Sonnet::SpellCheckDecorator::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void Sonnet__SpellCheckDecorator_SuperDisconnectNotify(Sonnet__SpellCheckDecorator* self, const QMetaMethod* signal) {
    if (auto* vsonnetspellcheckdecorator = dynamic_cast<VirtualSonnetSpellCheckDecorator*>(self)) {
        vsonnetspellcheckdecorator->Sonnet::SpellCheckDecorator::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method Sonnet::SpellCheckDecorator::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__SpellCheckDecorator_OnDisconnectNotify(Sonnet__SpellCheckDecorator* self, intptr_t slot) {
    if (auto* vsonnetspellcheckdecorator = dynamic_cast<VirtualSonnetSpellCheckDecorator*>(self))
        vsonnetspellcheckdecorator->sonnet__spellcheckdecorator_disconnectnotify_callback = reinterpret_cast<VirtualSonnetSpellCheckDecorator::Sonnet__SpellCheckDecorator_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* Sonnet__SpellCheckDecorator_Sender(const Sonnet__SpellCheckDecorator* self) {
    if (auto* vsonnetspellcheckdecorator = const_cast<VirtualSonnetSpellCheckDecorator*>(dynamic_cast<const VirtualSonnetSpellCheckDecorator*>(self))) {
        return vsonnetspellcheckdecorator->VirtualSonnetSpellCheckDecorator::sender();
    } else
        qFatal("Error: Protected method Sonnet::SpellCheckDecorator::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int Sonnet__SpellCheckDecorator_SenderSignalIndex(const Sonnet__SpellCheckDecorator* self) {
    if (auto* vsonnetspellcheckdecorator = const_cast<VirtualSonnetSpellCheckDecorator*>(dynamic_cast<const VirtualSonnetSpellCheckDecorator*>(self))) {
        return vsonnetspellcheckdecorator->VirtualSonnetSpellCheckDecorator::senderSignalIndex();
    } else
        qFatal("Error: Protected method Sonnet::SpellCheckDecorator::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int Sonnet__SpellCheckDecorator_Receivers(const Sonnet__SpellCheckDecorator* self, const char* signal) {
    if (auto* vsonnetspellcheckdecorator = const_cast<VirtualSonnetSpellCheckDecorator*>(dynamic_cast<const VirtualSonnetSpellCheckDecorator*>(self))) {
        return vsonnetspellcheckdecorator->VirtualSonnetSpellCheckDecorator::receivers(signal);
    } else
        qFatal("Error: Protected method Sonnet::SpellCheckDecorator::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool Sonnet__SpellCheckDecorator_IsSignalConnected(const Sonnet__SpellCheckDecorator* self, const QMetaMethod* signal) {
    if (auto* vsonnetspellcheckdecorator = const_cast<VirtualSonnetSpellCheckDecorator*>(dynamic_cast<const VirtualSonnetSpellCheckDecorator*>(self))) {
        return vsonnetspellcheckdecorator->VirtualSonnetSpellCheckDecorator::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method Sonnet::SpellCheckDecorator::isSignalConnected called without a directly constructed type");
}

void Sonnet__SpellCheckDecorator_Delete(Sonnet__SpellCheckDecorator* self) {
    delete self;
}
