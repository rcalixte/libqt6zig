#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QNetworkAccessManager>
#include <QObject>
#include <QString>
#include <QTimerEvent>
#define WORKAROUND_INNER_CLASS_DEFINITION_TextTranslator__TranslatorEngineAccessManager
#include <translatorengineaccessmanager.h>
#include "libtranslatorengineaccessmanager.h"
#include "libtranslatorengineaccessmanager.hxx"

TextTranslator__TranslatorEngineAccessManager* TextTranslator__TranslatorEngineAccessManager_new() {
    return new VirtualTextTranslatorTranslatorEngineAccessManager();
}

TextTranslator__TranslatorEngineAccessManager* TextTranslator__TranslatorEngineAccessManager_new2(QObject* parent) {
    return new VirtualTextTranslatorTranslatorEngineAccessManager(parent);
}

QMetaObject* TextTranslator__TranslatorEngineAccessManager_MetaObject(const TextTranslator__TranslatorEngineAccessManager* self) {
    return (QMetaObject*)self->metaObject();
}

void* TextTranslator__TranslatorEngineAccessManager_Metacast(TextTranslator__TranslatorEngineAccessManager* self, const char* param1) {
    return self->qt_metacast(param1);
}

int TextTranslator__TranslatorEngineAccessManager_Metacall(TextTranslator__TranslatorEngineAccessManager* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string TextTranslator__TranslatorEngineAccessManager_Tr(const char* s) {
    auto _ret = TextTranslator::TranslatorEngineAccessManager::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

TextTranslator__TranslatorEngineAccessManager* TextTranslator__TranslatorEngineAccessManager_Self() {
    return TextTranslator::TranslatorEngineAccessManager::self();
}

QNetworkAccessManager* TextTranslator__TranslatorEngineAccessManager_NetworkManager(TextTranslator__TranslatorEngineAccessManager* self) {
    return self->networkManager();
}

libqt_string TextTranslator__TranslatorEngineAccessManager_Tr2(const char* s, const char* c) {
    auto _ret = TextTranslator::TranslatorEngineAccessManager::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string TextTranslator__TranslatorEngineAccessManager_Tr3(const char* s, const char* c, int n) {
    auto _ret = TextTranslator::TranslatorEngineAccessManager::tr(s, c, static_cast<int>(n));
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
QMetaObject* TextTranslator__TranslatorEngineAccessManager_SuperMetaObject(const TextTranslator__TranslatorEngineAccessManager* self) {
    return (QMetaObject*)self->TextTranslator::TranslatorEngineAccessManager::metaObject();
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorEngineAccessManager_OnMetaObject(TextTranslator__TranslatorEngineAccessManager* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorengineaccessmanager = const_cast<VirtualTextTranslatorTranslatorEngineAccessManager*>(dynamic_cast<const VirtualTextTranslatorTranslatorEngineAccessManager*>(self)))
        vtexttranslatortranslatorengineaccessmanager->texttranslator__translatorengineaccessmanager_metaobject_callback = reinterpret_cast<VirtualTextTranslatorTranslatorEngineAccessManager::TextTranslator__TranslatorEngineAccessManager_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* TextTranslator__TranslatorEngineAccessManager_SuperMetacast(TextTranslator__TranslatorEngineAccessManager* self, const char* param1) {
    return self->TextTranslator::TranslatorEngineAccessManager::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorEngineAccessManager_OnMetacast(TextTranslator__TranslatorEngineAccessManager* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorengineaccessmanager = dynamic_cast<VirtualTextTranslatorTranslatorEngineAccessManager*>(self))
        vtexttranslatortranslatorengineaccessmanager->texttranslator__translatorengineaccessmanager_metacast_callback = reinterpret_cast<VirtualTextTranslatorTranslatorEngineAccessManager::TextTranslator__TranslatorEngineAccessManager_Metacast_Callback>(slot);
}

// Base class handler implementation
int TextTranslator__TranslatorEngineAccessManager_SuperMetacall(TextTranslator__TranslatorEngineAccessManager* self, int param1, int param2, void** param3) {
    return self->TextTranslator::TranslatorEngineAccessManager::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorEngineAccessManager_OnMetacall(TextTranslator__TranslatorEngineAccessManager* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorengineaccessmanager = dynamic_cast<VirtualTextTranslatorTranslatorEngineAccessManager*>(self))
        vtexttranslatortranslatorengineaccessmanager->texttranslator__translatorengineaccessmanager_metacall_callback = reinterpret_cast<VirtualTextTranslatorTranslatorEngineAccessManager::TextTranslator__TranslatorEngineAccessManager_Metacall_Callback>(slot);
}

// Derived class handler implementation
bool TextTranslator__TranslatorEngineAccessManager_Event(TextTranslator__TranslatorEngineAccessManager* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool TextTranslator__TranslatorEngineAccessManager_SuperEvent(TextTranslator__TranslatorEngineAccessManager* self, QEvent* event) {
    return self->TextTranslator::TranslatorEngineAccessManager::event(event);
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorEngineAccessManager_OnEvent(TextTranslator__TranslatorEngineAccessManager* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorengineaccessmanager = dynamic_cast<VirtualTextTranslatorTranslatorEngineAccessManager*>(self))
        vtexttranslatortranslatorengineaccessmanager->texttranslator__translatorengineaccessmanager_event_callback = reinterpret_cast<VirtualTextTranslatorTranslatorEngineAccessManager::TextTranslator__TranslatorEngineAccessManager_Event_Callback>(slot);
}

// Derived class handler implementation
bool TextTranslator__TranslatorEngineAccessManager_EventFilter(TextTranslator__TranslatorEngineAccessManager* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool TextTranslator__TranslatorEngineAccessManager_SuperEventFilter(TextTranslator__TranslatorEngineAccessManager* self, QObject* watched, QEvent* event) {
    return self->TextTranslator::TranslatorEngineAccessManager::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorEngineAccessManager_OnEventFilter(TextTranslator__TranslatorEngineAccessManager* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorengineaccessmanager = dynamic_cast<VirtualTextTranslatorTranslatorEngineAccessManager*>(self))
        vtexttranslatortranslatorengineaccessmanager->texttranslator__translatorengineaccessmanager_eventfilter_callback = reinterpret_cast<VirtualTextTranslatorTranslatorEngineAccessManager::TextTranslator__TranslatorEngineAccessManager_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void TextTranslator__TranslatorEngineAccessManager_TimerEvent(TextTranslator__TranslatorEngineAccessManager* self, QTimerEvent* event) {
    auto* vtexttranslatortranslatorengineaccessmanager = dynamic_cast<VirtualTextTranslatorTranslatorEngineAccessManager*>(self);
    if (vtexttranslatortranslatorengineaccessmanager) {
        vtexttranslatortranslatorengineaccessmanager->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorEngineAccessManager::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextTranslator__TranslatorEngineAccessManager_SuperTimerEvent(TextTranslator__TranslatorEngineAccessManager* self, QTimerEvent* event) {
    if (auto* vtexttranslatortranslatorengineaccessmanager = dynamic_cast<VirtualTextTranslatorTranslatorEngineAccessManager*>(self)) {
        vtexttranslatortranslatorengineaccessmanager->TextTranslator::TranslatorEngineAccessManager::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorEngineAccessManager::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorEngineAccessManager_OnTimerEvent(TextTranslator__TranslatorEngineAccessManager* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorengineaccessmanager = dynamic_cast<VirtualTextTranslatorTranslatorEngineAccessManager*>(self))
        vtexttranslatortranslatorengineaccessmanager->texttranslator__translatorengineaccessmanager_timerevent_callback = reinterpret_cast<VirtualTextTranslatorTranslatorEngineAccessManager::TextTranslator__TranslatorEngineAccessManager_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void TextTranslator__TranslatorEngineAccessManager_ChildEvent(TextTranslator__TranslatorEngineAccessManager* self, QChildEvent* event) {
    auto* vtexttranslatortranslatorengineaccessmanager = dynamic_cast<VirtualTextTranslatorTranslatorEngineAccessManager*>(self);
    if (vtexttranslatortranslatorengineaccessmanager) {
        vtexttranslatortranslatorengineaccessmanager->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorEngineAccessManager::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextTranslator__TranslatorEngineAccessManager_SuperChildEvent(TextTranslator__TranslatorEngineAccessManager* self, QChildEvent* event) {
    if (auto* vtexttranslatortranslatorengineaccessmanager = dynamic_cast<VirtualTextTranslatorTranslatorEngineAccessManager*>(self)) {
        vtexttranslatortranslatorengineaccessmanager->TextTranslator::TranslatorEngineAccessManager::childEvent(event);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorEngineAccessManager::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorEngineAccessManager_OnChildEvent(TextTranslator__TranslatorEngineAccessManager* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorengineaccessmanager = dynamic_cast<VirtualTextTranslatorTranslatorEngineAccessManager*>(self))
        vtexttranslatortranslatorengineaccessmanager->texttranslator__translatorengineaccessmanager_childevent_callback = reinterpret_cast<VirtualTextTranslatorTranslatorEngineAccessManager::TextTranslator__TranslatorEngineAccessManager_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void TextTranslator__TranslatorEngineAccessManager_CustomEvent(TextTranslator__TranslatorEngineAccessManager* self, QEvent* event) {
    auto* vtexttranslatortranslatorengineaccessmanager = dynamic_cast<VirtualTextTranslatorTranslatorEngineAccessManager*>(self);
    if (vtexttranslatortranslatorengineaccessmanager) {
        vtexttranslatortranslatorengineaccessmanager->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorEngineAccessManager::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextTranslator__TranslatorEngineAccessManager_SuperCustomEvent(TextTranslator__TranslatorEngineAccessManager* self, QEvent* event) {
    if (auto* vtexttranslatortranslatorengineaccessmanager = dynamic_cast<VirtualTextTranslatorTranslatorEngineAccessManager*>(self)) {
        vtexttranslatortranslatorengineaccessmanager->TextTranslator::TranslatorEngineAccessManager::customEvent(event);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorEngineAccessManager::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorEngineAccessManager_OnCustomEvent(TextTranslator__TranslatorEngineAccessManager* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorengineaccessmanager = dynamic_cast<VirtualTextTranslatorTranslatorEngineAccessManager*>(self))
        vtexttranslatortranslatorengineaccessmanager->texttranslator__translatorengineaccessmanager_customevent_callback = reinterpret_cast<VirtualTextTranslatorTranslatorEngineAccessManager::TextTranslator__TranslatorEngineAccessManager_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void TextTranslator__TranslatorEngineAccessManager_ConnectNotify(TextTranslator__TranslatorEngineAccessManager* self, const QMetaMethod* signal) {
    auto* vtexttranslatortranslatorengineaccessmanager = dynamic_cast<VirtualTextTranslatorTranslatorEngineAccessManager*>(self);
    if (vtexttranslatortranslatorengineaccessmanager) {
        vtexttranslatortranslatorengineaccessmanager->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorEngineAccessManager::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void TextTranslator__TranslatorEngineAccessManager_SuperConnectNotify(TextTranslator__TranslatorEngineAccessManager* self, const QMetaMethod* signal) {
    if (auto* vtexttranslatortranslatorengineaccessmanager = dynamic_cast<VirtualTextTranslatorTranslatorEngineAccessManager*>(self)) {
        vtexttranslatortranslatorengineaccessmanager->TextTranslator::TranslatorEngineAccessManager::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorEngineAccessManager::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorEngineAccessManager_OnConnectNotify(TextTranslator__TranslatorEngineAccessManager* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorengineaccessmanager = dynamic_cast<VirtualTextTranslatorTranslatorEngineAccessManager*>(self))
        vtexttranslatortranslatorengineaccessmanager->texttranslator__translatorengineaccessmanager_connectnotify_callback = reinterpret_cast<VirtualTextTranslatorTranslatorEngineAccessManager::TextTranslator__TranslatorEngineAccessManager_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void TextTranslator__TranslatorEngineAccessManager_DisconnectNotify(TextTranslator__TranslatorEngineAccessManager* self, const QMetaMethod* signal) {
    auto* vtexttranslatortranslatorengineaccessmanager = dynamic_cast<VirtualTextTranslatorTranslatorEngineAccessManager*>(self);
    if (vtexttranslatortranslatorengineaccessmanager) {
        vtexttranslatortranslatorengineaccessmanager->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorEngineAccessManager::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void TextTranslator__TranslatorEngineAccessManager_SuperDisconnectNotify(TextTranslator__TranslatorEngineAccessManager* self, const QMetaMethod* signal) {
    if (auto* vtexttranslatortranslatorengineaccessmanager = dynamic_cast<VirtualTextTranslatorTranslatorEngineAccessManager*>(self)) {
        vtexttranslatortranslatorengineaccessmanager->TextTranslator::TranslatorEngineAccessManager::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorEngineAccessManager::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorEngineAccessManager_OnDisconnectNotify(TextTranslator__TranslatorEngineAccessManager* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorengineaccessmanager = dynamic_cast<VirtualTextTranslatorTranslatorEngineAccessManager*>(self))
        vtexttranslatortranslatorengineaccessmanager->texttranslator__translatorengineaccessmanager_disconnectnotify_callback = reinterpret_cast<VirtualTextTranslatorTranslatorEngineAccessManager::TextTranslator__TranslatorEngineAccessManager_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* TextTranslator__TranslatorEngineAccessManager_Sender(const TextTranslator__TranslatorEngineAccessManager* self) {
    if (auto* vtexttranslatortranslatorengineaccessmanager = const_cast<VirtualTextTranslatorTranslatorEngineAccessManager*>(dynamic_cast<const VirtualTextTranslatorTranslatorEngineAccessManager*>(self))) {
        return vtexttranslatortranslatorengineaccessmanager->VirtualTextTranslatorTranslatorEngineAccessManager::sender();
    } else
        qFatal("Error: Protected method TextTranslator::TranslatorEngineAccessManager::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int TextTranslator__TranslatorEngineAccessManager_SenderSignalIndex(const TextTranslator__TranslatorEngineAccessManager* self) {
    if (auto* vtexttranslatortranslatorengineaccessmanager = const_cast<VirtualTextTranslatorTranslatorEngineAccessManager*>(dynamic_cast<const VirtualTextTranslatorTranslatorEngineAccessManager*>(self))) {
        return vtexttranslatortranslatorengineaccessmanager->VirtualTextTranslatorTranslatorEngineAccessManager::senderSignalIndex();
    } else
        qFatal("Error: Protected method TextTranslator::TranslatorEngineAccessManager::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int TextTranslator__TranslatorEngineAccessManager_Receivers(const TextTranslator__TranslatorEngineAccessManager* self, const char* signal) {
    if (auto* vtexttranslatortranslatorengineaccessmanager = const_cast<VirtualTextTranslatorTranslatorEngineAccessManager*>(dynamic_cast<const VirtualTextTranslatorTranslatorEngineAccessManager*>(self))) {
        return vtexttranslatortranslatorengineaccessmanager->VirtualTextTranslatorTranslatorEngineAccessManager::receivers(signal);
    } else
        qFatal("Error: Protected method TextTranslator::TranslatorEngineAccessManager::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool TextTranslator__TranslatorEngineAccessManager_IsSignalConnected(const TextTranslator__TranslatorEngineAccessManager* self, const QMetaMethod* signal) {
    if (auto* vtexttranslatortranslatorengineaccessmanager = const_cast<VirtualTextTranslatorTranslatorEngineAccessManager*>(dynamic_cast<const VirtualTextTranslatorTranslatorEngineAccessManager*>(self))) {
        return vtexttranslatortranslatorengineaccessmanager->VirtualTextTranslatorTranslatorEngineAccessManager::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method TextTranslator::TranslatorEngineAccessManager::isSignalConnected called without a directly constructed type");
}

void TextTranslator__TranslatorEngineAccessManager_Delete(TextTranslator__TranslatorEngineAccessManager* self) {
    delete self;
}
