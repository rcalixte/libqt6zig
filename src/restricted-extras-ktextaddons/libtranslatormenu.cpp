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
    auto* vtexttranslator__translatormenu = dynamic_cast<const VirtualTextTranslatorTranslatorMenu*>(self);
    if (vtexttranslator__translatormenu && vtexttranslator__translatormenu->isVirtualTextTranslatorTranslatorMenu) {
        return (QMetaObject*)self->metaObject();
    } else {
        return (QMetaObject*)((VirtualTextTranslatorTranslatorMenu*)self)->metaObject();
    }
}

void* TextTranslator__TranslatorMenu_Metacast(TextTranslator__TranslatorMenu* self, const char* param1) {
    auto* vtexttranslator__translatormenu = dynamic_cast<VirtualTextTranslatorTranslatorMenu*>(self);
    if (vtexttranslator__translatormenu && vtexttranslator__translatormenu->isVirtualTextTranslatorTranslatorMenu) {
        return self->qt_metacast(param1);
    } else {
        return ((VirtualTextTranslatorTranslatorMenu*)self)->qt_metacast(param1);
    }
}

int TextTranslator__TranslatorMenu_Metacall(TextTranslator__TranslatorMenu* self, int param1, int param2, void** param3) {
    auto* vtexttranslator__translatormenu = dynamic_cast<VirtualTextTranslatorTranslatorMenu*>(self);
    if (vtexttranslator__translatormenu && vtexttranslator__translatormenu->isVirtualTextTranslatorTranslatorMenu) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualTextTranslatorTranslatorMenu*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
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
    TextTranslator::TranslatorMenu::connect(self, &TextTranslator::TranslatorMenu::translate, [self, slotFunc](const QString& from, const QString& to, const QPersistentModelIndex& modelIndex) {
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

// Base class handler implementation
QMetaObject* TextTranslator__TranslatorMenu_SuperMetaObject(const TextTranslator__TranslatorMenu* self) {
    auto* vtexttranslatortranslatormenu = const_cast<VirtualTextTranslatorTranslatorMenu*>(dynamic_cast<const VirtualTextTranslatorTranslatorMenu*>(self));
    if (vtexttranslatortranslatormenu && vtexttranslatortranslatormenu->isVirtualTextTranslatorTranslatorMenu) {
        vtexttranslatortranslatormenu->setTextTranslator__TranslatorMenu_MetaObject_IsBase(true);
        return (QMetaObject*)vtexttranslatortranslatormenu->metaObject();
    } else {
        return (QMetaObject*)self->TextTranslator::TranslatorMenu::metaObject();
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorMenu_OnMetaObject(const TextTranslator__TranslatorMenu* self, intptr_t slot) {
    auto* vtexttranslatortranslatormenu = const_cast<VirtualTextTranslatorTranslatorMenu*>(dynamic_cast<const VirtualTextTranslatorTranslatorMenu*>(self));
    if (vtexttranslatortranslatormenu && vtexttranslatortranslatormenu->isVirtualTextTranslatorTranslatorMenu) {
        vtexttranslatortranslatormenu->setTextTranslator__TranslatorMenu_MetaObject_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorMenu::TextTranslator__TranslatorMenu_MetaObject_Callback>(slot));
    }
}

// Base class handler implementation
void* TextTranslator__TranslatorMenu_SuperMetacast(TextTranslator__TranslatorMenu* self, const char* param1) {
    auto* vtexttranslatortranslatormenu = dynamic_cast<VirtualTextTranslatorTranslatorMenu*>(self);
    if (vtexttranslatortranslatormenu && vtexttranslatortranslatormenu->isVirtualTextTranslatorTranslatorMenu) {
        vtexttranslatortranslatormenu->setTextTranslator__TranslatorMenu_Metacast_IsBase(true);
        return vtexttranslatortranslatormenu->qt_metacast(param1);
    } else {
        return self->TextTranslator::TranslatorMenu::qt_metacast(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorMenu_OnMetacast(TextTranslator__TranslatorMenu* self, intptr_t slot) {
    auto* vtexttranslatortranslatormenu = dynamic_cast<VirtualTextTranslatorTranslatorMenu*>(self);
    if (vtexttranslatortranslatormenu && vtexttranslatortranslatormenu->isVirtualTextTranslatorTranslatorMenu) {
        vtexttranslatortranslatormenu->setTextTranslator__TranslatorMenu_Metacast_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorMenu::TextTranslator__TranslatorMenu_Metacast_Callback>(slot));
    }
}

// Base class handler implementation
int TextTranslator__TranslatorMenu_SuperMetacall(TextTranslator__TranslatorMenu* self, int param1, int param2, void** param3) {
    auto* vtexttranslatortranslatormenu = dynamic_cast<VirtualTextTranslatorTranslatorMenu*>(self);
    if (vtexttranslatortranslatormenu && vtexttranslatortranslatormenu->isVirtualTextTranslatorTranslatorMenu) {
        vtexttranslatortranslatormenu->setTextTranslator__TranslatorMenu_Metacall_IsBase(true);
        return vtexttranslatortranslatormenu->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->TextTranslator::TranslatorMenu::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorMenu_OnMetacall(TextTranslator__TranslatorMenu* self, intptr_t slot) {
    auto* vtexttranslatortranslatormenu = dynamic_cast<VirtualTextTranslatorTranslatorMenu*>(self);
    if (vtexttranslatortranslatormenu && vtexttranslatortranslatormenu->isVirtualTextTranslatorTranslatorMenu) {
        vtexttranslatortranslatormenu->setTextTranslator__TranslatorMenu_Metacall_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorMenu::TextTranslator__TranslatorMenu_Metacall_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextTranslator__TranslatorMenu_Event(TextTranslator__TranslatorMenu* self, QEvent* event) {
    auto* vtexttranslatortranslatormenu = dynamic_cast<VirtualTextTranslatorTranslatorMenu*>(self);
    if (vtexttranslatortranslatormenu && vtexttranslatortranslatormenu->isVirtualTextTranslatorTranslatorMenu) {
        return vtexttranslatortranslatormenu->event(event);
    } else {
        return self->TextTranslator::TranslatorMenu::event(event);
    }
}

// Base class handler implementation
bool TextTranslator__TranslatorMenu_SuperEvent(TextTranslator__TranslatorMenu* self, QEvent* event) {
    auto* vtexttranslatortranslatormenu = dynamic_cast<VirtualTextTranslatorTranslatorMenu*>(self);
    if (vtexttranslatortranslatormenu && vtexttranslatortranslatormenu->isVirtualTextTranslatorTranslatorMenu) {
        vtexttranslatortranslatormenu->setTextTranslator__TranslatorMenu_Event_IsBase(true);
        return vtexttranslatortranslatormenu->event(event);
    } else {
        return self->TextTranslator::TranslatorMenu::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorMenu_OnEvent(TextTranslator__TranslatorMenu* self, intptr_t slot) {
    auto* vtexttranslatortranslatormenu = dynamic_cast<VirtualTextTranslatorTranslatorMenu*>(self);
    if (vtexttranslatortranslatormenu && vtexttranslatortranslatormenu->isVirtualTextTranslatorTranslatorMenu) {
        vtexttranslatortranslatormenu->setTextTranslator__TranslatorMenu_Event_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorMenu::TextTranslator__TranslatorMenu_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextTranslator__TranslatorMenu_EventFilter(TextTranslator__TranslatorMenu* self, QObject* watched, QEvent* event) {
    auto* vtexttranslatortranslatormenu = dynamic_cast<VirtualTextTranslatorTranslatorMenu*>(self);
    if (vtexttranslatortranslatormenu && vtexttranslatortranslatormenu->isVirtualTextTranslatorTranslatorMenu) {
        return vtexttranslatortranslatormenu->eventFilter(watched, event);
    } else {
        return self->TextTranslator::TranslatorMenu::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool TextTranslator__TranslatorMenu_SuperEventFilter(TextTranslator__TranslatorMenu* self, QObject* watched, QEvent* event) {
    auto* vtexttranslatortranslatormenu = dynamic_cast<VirtualTextTranslatorTranslatorMenu*>(self);
    if (vtexttranslatortranslatormenu && vtexttranslatortranslatormenu->isVirtualTextTranslatorTranslatorMenu) {
        vtexttranslatortranslatormenu->setTextTranslator__TranslatorMenu_EventFilter_IsBase(true);
        return vtexttranslatortranslatormenu->eventFilter(watched, event);
    } else {
        return self->TextTranslator::TranslatorMenu::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorMenu_OnEventFilter(TextTranslator__TranslatorMenu* self, intptr_t slot) {
    auto* vtexttranslatortranslatormenu = dynamic_cast<VirtualTextTranslatorTranslatorMenu*>(self);
    if (vtexttranslatortranslatormenu && vtexttranslatortranslatormenu->isVirtualTextTranslatorTranslatorMenu) {
        vtexttranslatortranslatormenu->setTextTranslator__TranslatorMenu_EventFilter_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorMenu::TextTranslator__TranslatorMenu_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorMenu_TimerEvent(TextTranslator__TranslatorMenu* self, QTimerEvent* event) {
    auto* vtexttranslatortranslatormenu = dynamic_cast<VirtualTextTranslatorTranslatorMenu*>(self);
    if (vtexttranslatortranslatormenu && vtexttranslatortranslatormenu->isVirtualTextTranslatorTranslatorMenu) {
        vtexttranslatortranslatormenu->timerEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorMenu*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void TextTranslator__TranslatorMenu_SuperTimerEvent(TextTranslator__TranslatorMenu* self, QTimerEvent* event) {
    auto* vtexttranslatortranslatormenu = dynamic_cast<VirtualTextTranslatorTranslatorMenu*>(self);
    if (vtexttranslatortranslatormenu && vtexttranslatortranslatormenu->isVirtualTextTranslatorTranslatorMenu) {
        vtexttranslatortranslatormenu->setTextTranslator__TranslatorMenu_TimerEvent_IsBase(true);
        vtexttranslatortranslatormenu->timerEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorMenu*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorMenu_OnTimerEvent(TextTranslator__TranslatorMenu* self, intptr_t slot) {
    auto* vtexttranslatortranslatormenu = dynamic_cast<VirtualTextTranslatorTranslatorMenu*>(self);
    if (vtexttranslatortranslatormenu && vtexttranslatortranslatormenu->isVirtualTextTranslatorTranslatorMenu) {
        vtexttranslatortranslatormenu->setTextTranslator__TranslatorMenu_TimerEvent_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorMenu::TextTranslator__TranslatorMenu_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorMenu_ChildEvent(TextTranslator__TranslatorMenu* self, QChildEvent* event) {
    auto* vtexttranslatortranslatormenu = dynamic_cast<VirtualTextTranslatorTranslatorMenu*>(self);
    if (vtexttranslatortranslatormenu && vtexttranslatortranslatormenu->isVirtualTextTranslatorTranslatorMenu) {
        vtexttranslatortranslatormenu->childEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorMenu*)self)->childEvent(event);
    }
}

// Base class handler implementation
void TextTranslator__TranslatorMenu_SuperChildEvent(TextTranslator__TranslatorMenu* self, QChildEvent* event) {
    auto* vtexttranslatortranslatormenu = dynamic_cast<VirtualTextTranslatorTranslatorMenu*>(self);
    if (vtexttranslatortranslatormenu && vtexttranslatortranslatormenu->isVirtualTextTranslatorTranslatorMenu) {
        vtexttranslatortranslatormenu->setTextTranslator__TranslatorMenu_ChildEvent_IsBase(true);
        vtexttranslatortranslatormenu->childEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorMenu*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorMenu_OnChildEvent(TextTranslator__TranslatorMenu* self, intptr_t slot) {
    auto* vtexttranslatortranslatormenu = dynamic_cast<VirtualTextTranslatorTranslatorMenu*>(self);
    if (vtexttranslatortranslatormenu && vtexttranslatortranslatormenu->isVirtualTextTranslatorTranslatorMenu) {
        vtexttranslatortranslatormenu->setTextTranslator__TranslatorMenu_ChildEvent_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorMenu::TextTranslator__TranslatorMenu_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorMenu_CustomEvent(TextTranslator__TranslatorMenu* self, QEvent* event) {
    auto* vtexttranslatortranslatormenu = dynamic_cast<VirtualTextTranslatorTranslatorMenu*>(self);
    if (vtexttranslatortranslatormenu && vtexttranslatortranslatormenu->isVirtualTextTranslatorTranslatorMenu) {
        vtexttranslatortranslatormenu->customEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorMenu*)self)->customEvent(event);
    }
}

// Base class handler implementation
void TextTranslator__TranslatorMenu_SuperCustomEvent(TextTranslator__TranslatorMenu* self, QEvent* event) {
    auto* vtexttranslatortranslatormenu = dynamic_cast<VirtualTextTranslatorTranslatorMenu*>(self);
    if (vtexttranslatortranslatormenu && vtexttranslatortranslatormenu->isVirtualTextTranslatorTranslatorMenu) {
        vtexttranslatortranslatormenu->setTextTranslator__TranslatorMenu_CustomEvent_IsBase(true);
        vtexttranslatortranslatormenu->customEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorMenu*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorMenu_OnCustomEvent(TextTranslator__TranslatorMenu* self, intptr_t slot) {
    auto* vtexttranslatortranslatormenu = dynamic_cast<VirtualTextTranslatorTranslatorMenu*>(self);
    if (vtexttranslatortranslatormenu && vtexttranslatortranslatormenu->isVirtualTextTranslatorTranslatorMenu) {
        vtexttranslatortranslatormenu->setTextTranslator__TranslatorMenu_CustomEvent_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorMenu::TextTranslator__TranslatorMenu_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorMenu_ConnectNotify(TextTranslator__TranslatorMenu* self, const QMetaMethod* signal) {
    auto* vtexttranslatortranslatormenu = dynamic_cast<VirtualTextTranslatorTranslatorMenu*>(self);
    if (vtexttranslatortranslatormenu && vtexttranslatortranslatormenu->isVirtualTextTranslatorTranslatorMenu) {
        vtexttranslatortranslatormenu->connectNotify(*signal);
    } else {
        ((VirtualTextTranslatorTranslatorMenu*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void TextTranslator__TranslatorMenu_SuperConnectNotify(TextTranslator__TranslatorMenu* self, const QMetaMethod* signal) {
    auto* vtexttranslatortranslatormenu = dynamic_cast<VirtualTextTranslatorTranslatorMenu*>(self);
    if (vtexttranslatortranslatormenu && vtexttranslatortranslatormenu->isVirtualTextTranslatorTranslatorMenu) {
        vtexttranslatortranslatormenu->setTextTranslator__TranslatorMenu_ConnectNotify_IsBase(true);
        vtexttranslatortranslatormenu->connectNotify(*signal);
    } else {
        ((VirtualTextTranslatorTranslatorMenu*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorMenu_OnConnectNotify(TextTranslator__TranslatorMenu* self, intptr_t slot) {
    auto* vtexttranslatortranslatormenu = dynamic_cast<VirtualTextTranslatorTranslatorMenu*>(self);
    if (vtexttranslatortranslatormenu && vtexttranslatortranslatormenu->isVirtualTextTranslatorTranslatorMenu) {
        vtexttranslatortranslatormenu->setTextTranslator__TranslatorMenu_ConnectNotify_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorMenu::TextTranslator__TranslatorMenu_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorMenu_DisconnectNotify(TextTranslator__TranslatorMenu* self, const QMetaMethod* signal) {
    auto* vtexttranslatortranslatormenu = dynamic_cast<VirtualTextTranslatorTranslatorMenu*>(self);
    if (vtexttranslatortranslatormenu && vtexttranslatortranslatormenu->isVirtualTextTranslatorTranslatorMenu) {
        vtexttranslatortranslatormenu->disconnectNotify(*signal);
    } else {
        ((VirtualTextTranslatorTranslatorMenu*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void TextTranslator__TranslatorMenu_SuperDisconnectNotify(TextTranslator__TranslatorMenu* self, const QMetaMethod* signal) {
    auto* vtexttranslatortranslatormenu = dynamic_cast<VirtualTextTranslatorTranslatorMenu*>(self);
    if (vtexttranslatortranslatormenu && vtexttranslatortranslatormenu->isVirtualTextTranslatorTranslatorMenu) {
        vtexttranslatortranslatormenu->setTextTranslator__TranslatorMenu_DisconnectNotify_IsBase(true);
        vtexttranslatortranslatormenu->disconnectNotify(*signal);
    } else {
        ((VirtualTextTranslatorTranslatorMenu*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorMenu_OnDisconnectNotify(TextTranslator__TranslatorMenu* self, intptr_t slot) {
    auto* vtexttranslatortranslatormenu = dynamic_cast<VirtualTextTranslatorTranslatorMenu*>(self);
    if (vtexttranslatortranslatormenu && vtexttranslatortranslatormenu->isVirtualTextTranslatorTranslatorMenu) {
        vtexttranslatortranslatormenu->setTextTranslator__TranslatorMenu_DisconnectNotify_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorMenu::TextTranslator__TranslatorMenu_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* TextTranslator__TranslatorMenu_Sender(const TextTranslator__TranslatorMenu* self) {
    auto* vtexttranslatortranslatormenu = const_cast<VirtualTextTranslatorTranslatorMenu*>(dynamic_cast<const VirtualTextTranslatorTranslatorMenu*>(self));
    if (vtexttranslatortranslatormenu && vtexttranslatortranslatormenu->isVirtualTextTranslatorTranslatorMenu) {
        return vtexttranslatortranslatormenu->sender();
    } else {
        return ((VirtualTextTranslatorTranslatorMenu*)self)->sender();
    }
}

// Base class handler implementation
QObject* TextTranslator__TranslatorMenu_SuperSender(const TextTranslator__TranslatorMenu* self) {
    auto* vtexttranslatortranslatormenu = const_cast<VirtualTextTranslatorTranslatorMenu*>(dynamic_cast<const VirtualTextTranslatorTranslatorMenu*>(self));
    if (vtexttranslatortranslatormenu && vtexttranslatortranslatormenu->isVirtualTextTranslatorTranslatorMenu) {
        vtexttranslatortranslatormenu->setTextTranslator__TranslatorMenu_Sender_IsBase(true);
        return vtexttranslatortranslatormenu->sender();
    } else {
        return ((VirtualTextTranslatorTranslatorMenu*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorMenu_OnSender(const TextTranslator__TranslatorMenu* self, intptr_t slot) {
    auto* vtexttranslatortranslatormenu = const_cast<VirtualTextTranslatorTranslatorMenu*>(dynamic_cast<const VirtualTextTranslatorTranslatorMenu*>(self));
    if (vtexttranslatortranslatormenu && vtexttranslatortranslatormenu->isVirtualTextTranslatorTranslatorMenu) {
        vtexttranslatortranslatormenu->setTextTranslator__TranslatorMenu_Sender_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorMenu::TextTranslator__TranslatorMenu_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int TextTranslator__TranslatorMenu_SenderSignalIndex(const TextTranslator__TranslatorMenu* self) {
    auto* vtexttranslatortranslatormenu = const_cast<VirtualTextTranslatorTranslatorMenu*>(dynamic_cast<const VirtualTextTranslatorTranslatorMenu*>(self));
    if (vtexttranslatortranslatormenu && vtexttranslatortranslatormenu->isVirtualTextTranslatorTranslatorMenu) {
        return vtexttranslatortranslatormenu->senderSignalIndex();
    } else {
        return ((VirtualTextTranslatorTranslatorMenu*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int TextTranslator__TranslatorMenu_SuperSenderSignalIndex(const TextTranslator__TranslatorMenu* self) {
    auto* vtexttranslatortranslatormenu = const_cast<VirtualTextTranslatorTranslatorMenu*>(dynamic_cast<const VirtualTextTranslatorTranslatorMenu*>(self));
    if (vtexttranslatortranslatormenu && vtexttranslatortranslatormenu->isVirtualTextTranslatorTranslatorMenu) {
        vtexttranslatortranslatormenu->setTextTranslator__TranslatorMenu_SenderSignalIndex_IsBase(true);
        return vtexttranslatortranslatormenu->senderSignalIndex();
    } else {
        return ((VirtualTextTranslatorTranslatorMenu*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorMenu_OnSenderSignalIndex(const TextTranslator__TranslatorMenu* self, intptr_t slot) {
    auto* vtexttranslatortranslatormenu = const_cast<VirtualTextTranslatorTranslatorMenu*>(dynamic_cast<const VirtualTextTranslatorTranslatorMenu*>(self));
    if (vtexttranslatortranslatormenu && vtexttranslatortranslatormenu->isVirtualTextTranslatorTranslatorMenu) {
        vtexttranslatortranslatormenu->setTextTranslator__TranslatorMenu_SenderSignalIndex_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorMenu::TextTranslator__TranslatorMenu_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int TextTranslator__TranslatorMenu_Receivers(const TextTranslator__TranslatorMenu* self, const char* signal) {
    auto* vtexttranslatortranslatormenu = const_cast<VirtualTextTranslatorTranslatorMenu*>(dynamic_cast<const VirtualTextTranslatorTranslatorMenu*>(self));
    if (vtexttranslatortranslatormenu && vtexttranslatortranslatormenu->isVirtualTextTranslatorTranslatorMenu) {
        return vtexttranslatortranslatormenu->receivers(signal);
    } else {
        return ((VirtualTextTranslatorTranslatorMenu*)self)->receivers(signal);
    }
}

// Base class handler implementation
int TextTranslator__TranslatorMenu_SuperReceivers(const TextTranslator__TranslatorMenu* self, const char* signal) {
    auto* vtexttranslatortranslatormenu = const_cast<VirtualTextTranslatorTranslatorMenu*>(dynamic_cast<const VirtualTextTranslatorTranslatorMenu*>(self));
    if (vtexttranslatortranslatormenu && vtexttranslatortranslatormenu->isVirtualTextTranslatorTranslatorMenu) {
        vtexttranslatortranslatormenu->setTextTranslator__TranslatorMenu_Receivers_IsBase(true);
        return vtexttranslatortranslatormenu->receivers(signal);
    } else {
        return ((VirtualTextTranslatorTranslatorMenu*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorMenu_OnReceivers(const TextTranslator__TranslatorMenu* self, intptr_t slot) {
    auto* vtexttranslatortranslatormenu = const_cast<VirtualTextTranslatorTranslatorMenu*>(dynamic_cast<const VirtualTextTranslatorTranslatorMenu*>(self));
    if (vtexttranslatortranslatormenu && vtexttranslatortranslatormenu->isVirtualTextTranslatorTranslatorMenu) {
        vtexttranslatortranslatormenu->setTextTranslator__TranslatorMenu_Receivers_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorMenu::TextTranslator__TranslatorMenu_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextTranslator__TranslatorMenu_IsSignalConnected(const TextTranslator__TranslatorMenu* self, const QMetaMethod* signal) {
    auto* vtexttranslatortranslatormenu = const_cast<VirtualTextTranslatorTranslatorMenu*>(dynamic_cast<const VirtualTextTranslatorTranslatorMenu*>(self));
    if (vtexttranslatortranslatormenu && vtexttranslatortranslatormenu->isVirtualTextTranslatorTranslatorMenu) {
        return vtexttranslatortranslatormenu->isSignalConnected(*signal);
    } else {
        return ((VirtualTextTranslatorTranslatorMenu*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool TextTranslator__TranslatorMenu_SuperIsSignalConnected(const TextTranslator__TranslatorMenu* self, const QMetaMethod* signal) {
    auto* vtexttranslatortranslatormenu = const_cast<VirtualTextTranslatorTranslatorMenu*>(dynamic_cast<const VirtualTextTranslatorTranslatorMenu*>(self));
    if (vtexttranslatortranslatormenu && vtexttranslatortranslatormenu->isVirtualTextTranslatorTranslatorMenu) {
        vtexttranslatortranslatormenu->setTextTranslator__TranslatorMenu_IsSignalConnected_IsBase(true);
        return vtexttranslatortranslatormenu->isSignalConnected(*signal);
    } else {
        return ((VirtualTextTranslatorTranslatorMenu*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorMenu_OnIsSignalConnected(const TextTranslator__TranslatorMenu* self, intptr_t slot) {
    auto* vtexttranslatortranslatormenu = const_cast<VirtualTextTranslatorTranslatorMenu*>(dynamic_cast<const VirtualTextTranslatorTranslatorMenu*>(self));
    if (vtexttranslatortranslatormenu && vtexttranslatortranslatormenu->isVirtualTextTranslatorTranslatorMenu) {
        vtexttranslatortranslatormenu->setTextTranslator__TranslatorMenu_IsSignalConnected_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorMenu::TextTranslator__TranslatorMenu_IsSignalConnected_Callback>(slot));
    }
}

void TextTranslator__TranslatorMenu_Delete(TextTranslator__TranslatorMenu* self) {
    delete self;
}
