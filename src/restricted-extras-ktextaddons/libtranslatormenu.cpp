#include <QChildEvent>
#include <QEvent>
#include <QMenu>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QPersistentModelIndex>
#include <QString>
#include <QTimerEvent>
#define WORKAROUND_INNER_CLASS_DEFINITION_TextTranslator__TranslatorMenu
#include <translatormenu.h>
#include "libtranslatormenu.h"
#include "libtranslatormenu.hxx"

TextTranslator__TranslatorMenu* TextTranslator__TranslatorMenu_new() {
    return new VirtualTextTranslatorTranslatorMenu();
}

TextTranslator__TranslatorMenu* TextTranslator__TranslatorMenu_new2(QObject* parent) {
    return new VirtualTextTranslatorTranslatorMenu(parent);
}

QMetaObject* TextTranslator__TranslatorMenu_MetaObject(const TextTranslator__TranslatorMenu* self) {
    return (QMetaObject*)self->metaObject();
}

void* TextTranslator__TranslatorMenu_Metacast(TextTranslator__TranslatorMenu* self, const char* param1) {
    return self->qt_metacast(param1);
}

int TextTranslator__TranslatorMenu_Metacall(TextTranslator__TranslatorMenu* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string TextTranslator__TranslatorMenu_Tr(const char* s) {
    auto _ret = TextTranslator::TranslatorMenu::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QMenu* TextTranslator__TranslatorMenu_Menu(const TextTranslator__TranslatorMenu* self) {
    return self->menu();
}

bool TextTranslator__TranslatorMenu_IsEmpty(const TextTranslator__TranslatorMenu* self) {
    return self->isEmpty();
}

QPersistentModelIndex* TextTranslator__TranslatorMenu_ModelIndex(const TextTranslator__TranslatorMenu* self) {
    const QPersistentModelIndex& _ret = self->modelIndex();
    // Cast returned reference into pointer
    return const_cast<QPersistentModelIndex*>(&_ret);
}

void TextTranslator__TranslatorMenu_SetModelIndex(TextTranslator__TranslatorMenu* self, const QPersistentModelIndex* newModelIndex) {
    self->setModelIndex(*newModelIndex);
}

void TextTranslator__TranslatorMenu_UpdateMenu(TextTranslator__TranslatorMenu* self) {
    self->updateMenu();
}

void TextTranslator__TranslatorMenu_Translate(TextTranslator__TranslatorMenu* self, const libqt_string from, const libqt_string to, const QPersistentModelIndex* modelIndex) {
    QString from_QString = QString::fromUtf8(from.data, from.len);
    QString to_QString = QString::fromUtf8(to.data, to.len);
    self->translate(from_QString, to_QString, *modelIndex);
}

void TextTranslator__TranslatorMenu_Connect_Translate(TextTranslator__TranslatorMenu* self, intptr_t slot) {
    void (*slotFunc)(TextTranslator__TranslatorMenu*, const char*, const char*, QPersistentModelIndex*) = reinterpret_cast<void (*)(TextTranslator__TranslatorMenu*, const char*, const char*, QPersistentModelIndex*)>(slot);
    TextTranslator::TranslatorMenu::connect(self,
                                            static_cast<void (TextTranslator::TranslatorMenu::*)(const QString&, const QString&, const QPersistentModelIndex&)>(&TextTranslator::TranslatorMenu::translate),
                                            [self, slotFunc](const QString& from, const QString& to, const QPersistentModelIndex& modelIndex) {
                                                const auto from_ret = from;
                                                // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
                                                QByteArray from_b = from_ret.toUtf8();
                                                auto from_str_len = from_b.length();
                                                const char* from_str = static_cast<const char*>(malloc(from_str_len + 1));
                                                memcpy((void*)from_str, from_b.data(), from_str_len);
                                                ((char*)from_str)[from_str_len] = '\0';
                                                const char* sigval1 = from_str;
                                                const auto to_ret = to;
                                                // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
                                                QByteArray to_b = to_ret.toUtf8();
                                                auto to_str_len = to_b.length();
                                                const char* to_str = static_cast<const char*>(malloc(to_str_len + 1));
                                                memcpy((void*)to_str, to_b.data(), to_str_len);
                                                ((char*)to_str)[to_str_len] = '\0';
                                                const char* sigval2 = to_str;
                                                const QPersistentModelIndex& modelIndex_ret = modelIndex;
                                                // Cast returned reference into pointer
                                                QPersistentModelIndex* sigval3 = const_cast<QPersistentModelIndex*>(&modelIndex_ret);
                                                slotFunc(self, sigval1, sigval2, sigval3);
                                                libqt_free(from_str);
                                                libqt_free(to_str);
                                            });
}

libqt_string TextTranslator__TranslatorMenu_Tr2(const char* s, const char* c) {
    auto _ret = TextTranslator::TranslatorMenu::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string TextTranslator__TranslatorMenu_Tr3(const char* s, const char* c, int n) {
    auto _ret = TextTranslator::TranslatorMenu::tr(s, c, static_cast<int>(n));
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
QMetaObject* TextTranslator__TranslatorMenu_SuperMetaObject(const TextTranslator__TranslatorMenu* self) {
    return (QMetaObject*)self->TextTranslator::TranslatorMenu::metaObject();
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorMenu_OnMetaObject(TextTranslator__TranslatorMenu* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatormenu = const_cast<VirtualTextTranslatorTranslatorMenu*>(dynamic_cast<const VirtualTextTranslatorTranslatorMenu*>(self)))
        vtexttranslatortranslatormenu->texttranslator__translatormenu_metaobject_callback = reinterpret_cast<VirtualTextTranslatorTranslatorMenu::TextTranslator__TranslatorMenu_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* TextTranslator__TranslatorMenu_SuperMetacast(TextTranslator__TranslatorMenu* self, const char* param1) {
    return self->TextTranslator::TranslatorMenu::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorMenu_OnMetacast(TextTranslator__TranslatorMenu* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatormenu = dynamic_cast<VirtualTextTranslatorTranslatorMenu*>(self))
        vtexttranslatortranslatormenu->texttranslator__translatormenu_metacast_callback = reinterpret_cast<VirtualTextTranslatorTranslatorMenu::TextTranslator__TranslatorMenu_Metacast_Callback>(slot);
}

// Base class handler implementation
int TextTranslator__TranslatorMenu_SuperMetacall(TextTranslator__TranslatorMenu* self, int param1, int param2, void** param3) {
    return self->TextTranslator::TranslatorMenu::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorMenu_OnMetacall(TextTranslator__TranslatorMenu* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatormenu = dynamic_cast<VirtualTextTranslatorTranslatorMenu*>(self))
        vtexttranslatortranslatormenu->texttranslator__translatormenu_metacall_callback = reinterpret_cast<VirtualTextTranslatorTranslatorMenu::TextTranslator__TranslatorMenu_Metacall_Callback>(slot);
}

// Derived class handler implementation
bool TextTranslator__TranslatorMenu_Event(TextTranslator__TranslatorMenu* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool TextTranslator__TranslatorMenu_SuperEvent(TextTranslator__TranslatorMenu* self, QEvent* event) {
    return self->TextTranslator::TranslatorMenu::event(event);
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorMenu_OnEvent(TextTranslator__TranslatorMenu* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatormenu = dynamic_cast<VirtualTextTranslatorTranslatorMenu*>(self))
        vtexttranslatortranslatormenu->texttranslator__translatormenu_event_callback = reinterpret_cast<VirtualTextTranslatorTranslatorMenu::TextTranslator__TranslatorMenu_Event_Callback>(slot);
}

// Derived class handler implementation
bool TextTranslator__TranslatorMenu_EventFilter(TextTranslator__TranslatorMenu* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool TextTranslator__TranslatorMenu_SuperEventFilter(TextTranslator__TranslatorMenu* self, QObject* watched, QEvent* event) {
    return self->TextTranslator::TranslatorMenu::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorMenu_OnEventFilter(TextTranslator__TranslatorMenu* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatormenu = dynamic_cast<VirtualTextTranslatorTranslatorMenu*>(self))
        vtexttranslatortranslatormenu->texttranslator__translatormenu_eventfilter_callback = reinterpret_cast<VirtualTextTranslatorTranslatorMenu::TextTranslator__TranslatorMenu_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void TextTranslator__TranslatorMenu_TimerEvent(TextTranslator__TranslatorMenu* self, QTimerEvent* event) {
    auto* vtexttranslatortranslatormenu = dynamic_cast<VirtualTextTranslatorTranslatorMenu*>(self);
    if (vtexttranslatortranslatormenu) {
        vtexttranslatortranslatormenu->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorMenu::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextTranslator__TranslatorMenu_SuperTimerEvent(TextTranslator__TranslatorMenu* self, QTimerEvent* event) {
    if (auto* vtexttranslatortranslatormenu = dynamic_cast<VirtualTextTranslatorTranslatorMenu*>(self)) {
        vtexttranslatortranslatormenu->TextTranslator::TranslatorMenu::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorMenu::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorMenu_OnTimerEvent(TextTranslator__TranslatorMenu* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatormenu = dynamic_cast<VirtualTextTranslatorTranslatorMenu*>(self))
        vtexttranslatortranslatormenu->texttranslator__translatormenu_timerevent_callback = reinterpret_cast<VirtualTextTranslatorTranslatorMenu::TextTranslator__TranslatorMenu_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void TextTranslator__TranslatorMenu_ChildEvent(TextTranslator__TranslatorMenu* self, QChildEvent* event) {
    auto* vtexttranslatortranslatormenu = dynamic_cast<VirtualTextTranslatorTranslatorMenu*>(self);
    if (vtexttranslatortranslatormenu) {
        vtexttranslatortranslatormenu->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorMenu::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextTranslator__TranslatorMenu_SuperChildEvent(TextTranslator__TranslatorMenu* self, QChildEvent* event) {
    if (auto* vtexttranslatortranslatormenu = dynamic_cast<VirtualTextTranslatorTranslatorMenu*>(self)) {
        vtexttranslatortranslatormenu->TextTranslator::TranslatorMenu::childEvent(event);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorMenu::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorMenu_OnChildEvent(TextTranslator__TranslatorMenu* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatormenu = dynamic_cast<VirtualTextTranslatorTranslatorMenu*>(self))
        vtexttranslatortranslatormenu->texttranslator__translatormenu_childevent_callback = reinterpret_cast<VirtualTextTranslatorTranslatorMenu::TextTranslator__TranslatorMenu_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void TextTranslator__TranslatorMenu_CustomEvent(TextTranslator__TranslatorMenu* self, QEvent* event) {
    auto* vtexttranslatortranslatormenu = dynamic_cast<VirtualTextTranslatorTranslatorMenu*>(self);
    if (vtexttranslatortranslatormenu) {
        vtexttranslatortranslatormenu->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorMenu::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextTranslator__TranslatorMenu_SuperCustomEvent(TextTranslator__TranslatorMenu* self, QEvent* event) {
    if (auto* vtexttranslatortranslatormenu = dynamic_cast<VirtualTextTranslatorTranslatorMenu*>(self)) {
        vtexttranslatortranslatormenu->TextTranslator::TranslatorMenu::customEvent(event);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorMenu::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorMenu_OnCustomEvent(TextTranslator__TranslatorMenu* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatormenu = dynamic_cast<VirtualTextTranslatorTranslatorMenu*>(self))
        vtexttranslatortranslatormenu->texttranslator__translatormenu_customevent_callback = reinterpret_cast<VirtualTextTranslatorTranslatorMenu::TextTranslator__TranslatorMenu_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void TextTranslator__TranslatorMenu_ConnectNotify(TextTranslator__TranslatorMenu* self, const QMetaMethod* signal) {
    auto* vtexttranslatortranslatormenu = dynamic_cast<VirtualTextTranslatorTranslatorMenu*>(self);
    if (vtexttranslatortranslatormenu) {
        vtexttranslatortranslatormenu->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorMenu::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void TextTranslator__TranslatorMenu_SuperConnectNotify(TextTranslator__TranslatorMenu* self, const QMetaMethod* signal) {
    if (auto* vtexttranslatortranslatormenu = dynamic_cast<VirtualTextTranslatorTranslatorMenu*>(self)) {
        vtexttranslatortranslatormenu->TextTranslator::TranslatorMenu::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorMenu::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorMenu_OnConnectNotify(TextTranslator__TranslatorMenu* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatormenu = dynamic_cast<VirtualTextTranslatorTranslatorMenu*>(self))
        vtexttranslatortranslatormenu->texttranslator__translatormenu_connectnotify_callback = reinterpret_cast<VirtualTextTranslatorTranslatorMenu::TextTranslator__TranslatorMenu_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void TextTranslator__TranslatorMenu_DisconnectNotify(TextTranslator__TranslatorMenu* self, const QMetaMethod* signal) {
    auto* vtexttranslatortranslatormenu = dynamic_cast<VirtualTextTranslatorTranslatorMenu*>(self);
    if (vtexttranslatortranslatormenu) {
        vtexttranslatortranslatormenu->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorMenu::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void TextTranslator__TranslatorMenu_SuperDisconnectNotify(TextTranslator__TranslatorMenu* self, const QMetaMethod* signal) {
    if (auto* vtexttranslatortranslatormenu = dynamic_cast<VirtualTextTranslatorTranslatorMenu*>(self)) {
        vtexttranslatortranslatormenu->TextTranslator::TranslatorMenu::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorMenu::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorMenu_OnDisconnectNotify(TextTranslator__TranslatorMenu* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatormenu = dynamic_cast<VirtualTextTranslatorTranslatorMenu*>(self))
        vtexttranslatortranslatormenu->texttranslator__translatormenu_disconnectnotify_callback = reinterpret_cast<VirtualTextTranslatorTranslatorMenu::TextTranslator__TranslatorMenu_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* TextTranslator__TranslatorMenu_Sender(const TextTranslator__TranslatorMenu* self) {
    if (auto* vtexttranslatortranslatormenu = const_cast<VirtualTextTranslatorTranslatorMenu*>(dynamic_cast<const VirtualTextTranslatorTranslatorMenu*>(self))) {
        return vtexttranslatortranslatormenu->VirtualTextTranslatorTranslatorMenu::sender();
    } else
        qFatal("Error: Protected method TextTranslator::TranslatorMenu::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int TextTranslator__TranslatorMenu_SenderSignalIndex(const TextTranslator__TranslatorMenu* self) {
    if (auto* vtexttranslatortranslatormenu = const_cast<VirtualTextTranslatorTranslatorMenu*>(dynamic_cast<const VirtualTextTranslatorTranslatorMenu*>(self))) {
        return vtexttranslatortranslatormenu->VirtualTextTranslatorTranslatorMenu::senderSignalIndex();
    } else
        qFatal("Error: Protected method TextTranslator::TranslatorMenu::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int TextTranslator__TranslatorMenu_Receivers(const TextTranslator__TranslatorMenu* self, const char* signal) {
    if (auto* vtexttranslatortranslatormenu = const_cast<VirtualTextTranslatorTranslatorMenu*>(dynamic_cast<const VirtualTextTranslatorTranslatorMenu*>(self))) {
        return vtexttranslatortranslatormenu->VirtualTextTranslatorTranslatorMenu::receivers(signal);
    } else
        qFatal("Error: Protected method TextTranslator::TranslatorMenu::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool TextTranslator__TranslatorMenu_IsSignalConnected(const TextTranslator__TranslatorMenu* self, const QMetaMethod* signal) {
    if (auto* vtexttranslatortranslatormenu = const_cast<VirtualTextTranslatorTranslatorMenu*>(dynamic_cast<const VirtualTextTranslatorTranslatorMenu*>(self))) {
        return vtexttranslatortranslatormenu->VirtualTextTranslatorTranslatorMenu::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method TextTranslator::TranslatorMenu::isSignalConnected called without a directly constructed type");
}

void TextTranslator__TranslatorMenu_Delete(TextTranslator__TranslatorMenu* self) {
    delete self;
}
