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

TextTranslator__TranslatorEngineAccessManager* TextTranslator__TranslatorEngineAccessManager_Self() {
    return TextTranslator::TranslatorEngineAccessManager::self();
}

QNetworkAccessManager* TextTranslator__TranslatorEngineAccessManager_NetworkManager(TextTranslator__TranslatorEngineAccessManager* self) {
    return self->networkManager();
}

// Base class handler implementation
QMetaObject* TextTranslator__TranslatorEngineAccessManager_SuperMetaObject(const TextTranslator__TranslatorEngineAccessManager* self) {
    auto* vtexttranslatortranslatorengineaccessmanager = const_cast<VirtualTextTranslatorTranslatorEngineAccessManager*>(dynamic_cast<const VirtualTextTranslatorTranslatorEngineAccessManager*>(self));
    if (vtexttranslatortranslatorengineaccessmanager && vtexttranslatortranslatorengineaccessmanager->isVirtualTextTranslatorTranslatorEngineAccessManager) {
        vtexttranslatortranslatorengineaccessmanager->setTextTranslator__TranslatorEngineAccessManager_MetaObject_IsBase(true);
        return (QMetaObject*)vtexttranslatortranslatorengineaccessmanager->metaObject();
    } else {
        return (QMetaObject*)self->TextTranslator::TranslatorEngineAccessManager::metaObject();
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorEngineAccessManager_OnMetaObject(const TextTranslator__TranslatorEngineAccessManager* self, intptr_t slot) {
    auto* vtexttranslatortranslatorengineaccessmanager = const_cast<VirtualTextTranslatorTranslatorEngineAccessManager*>(dynamic_cast<const VirtualTextTranslatorTranslatorEngineAccessManager*>(self));
    if (vtexttranslatortranslatorengineaccessmanager && vtexttranslatortranslatorengineaccessmanager->isVirtualTextTranslatorTranslatorEngineAccessManager) {
        vtexttranslatortranslatorengineaccessmanager->setTextTranslator__TranslatorEngineAccessManager_MetaObject_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorEngineAccessManager::TextTranslator__TranslatorEngineAccessManager_MetaObject_Callback>(slot));
    }
}

// Base class handler implementation
void* TextTranslator__TranslatorEngineAccessManager_SuperMetacast(TextTranslator__TranslatorEngineAccessManager* self, const char* param1) {
    auto* vtexttranslatortranslatorengineaccessmanager = dynamic_cast<VirtualTextTranslatorTranslatorEngineAccessManager*>(self);
    if (vtexttranslatortranslatorengineaccessmanager && vtexttranslatortranslatorengineaccessmanager->isVirtualTextTranslatorTranslatorEngineAccessManager) {
        vtexttranslatortranslatorengineaccessmanager->setTextTranslator__TranslatorEngineAccessManager_Metacast_IsBase(true);
        return vtexttranslatortranslatorengineaccessmanager->qt_metacast(param1);
    } else {
        return self->TextTranslator::TranslatorEngineAccessManager::qt_metacast(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorEngineAccessManager_OnMetacast(TextTranslator__TranslatorEngineAccessManager* self, intptr_t slot) {
    auto* vtexttranslatortranslatorengineaccessmanager = dynamic_cast<VirtualTextTranslatorTranslatorEngineAccessManager*>(self);
    if (vtexttranslatortranslatorengineaccessmanager && vtexttranslatortranslatorengineaccessmanager->isVirtualTextTranslatorTranslatorEngineAccessManager) {
        vtexttranslatortranslatorengineaccessmanager->setTextTranslator__TranslatorEngineAccessManager_Metacast_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorEngineAccessManager::TextTranslator__TranslatorEngineAccessManager_Metacast_Callback>(slot));
    }
}

// Base class handler implementation
int TextTranslator__TranslatorEngineAccessManager_SuperMetacall(TextTranslator__TranslatorEngineAccessManager* self, int param1, int param2, void** param3) {
    auto* vtexttranslatortranslatorengineaccessmanager = dynamic_cast<VirtualTextTranslatorTranslatorEngineAccessManager*>(self);
    if (vtexttranslatortranslatorengineaccessmanager && vtexttranslatortranslatorengineaccessmanager->isVirtualTextTranslatorTranslatorEngineAccessManager) {
        vtexttranslatortranslatorengineaccessmanager->setTextTranslator__TranslatorEngineAccessManager_Metacall_IsBase(true);
        return vtexttranslatortranslatorengineaccessmanager->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->TextTranslator::TranslatorEngineAccessManager::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorEngineAccessManager_OnMetacall(TextTranslator__TranslatorEngineAccessManager* self, intptr_t slot) {
    auto* vtexttranslatortranslatorengineaccessmanager = dynamic_cast<VirtualTextTranslatorTranslatorEngineAccessManager*>(self);
    if (vtexttranslatortranslatorengineaccessmanager && vtexttranslatortranslatorengineaccessmanager->isVirtualTextTranslatorTranslatorEngineAccessManager) {
        vtexttranslatortranslatorengineaccessmanager->setTextTranslator__TranslatorEngineAccessManager_Metacall_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorEngineAccessManager::TextTranslator__TranslatorEngineAccessManager_Metacall_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextTranslator__TranslatorEngineAccessManager_Event(TextTranslator__TranslatorEngineAccessManager* self, QEvent* event) {
    auto* vtexttranslatortranslatorengineaccessmanager = dynamic_cast<VirtualTextTranslatorTranslatorEngineAccessManager*>(self);
    if (vtexttranslatortranslatorengineaccessmanager && vtexttranslatortranslatorengineaccessmanager->isVirtualTextTranslatorTranslatorEngineAccessManager) {
        return vtexttranslatortranslatorengineaccessmanager->event(event);
    } else {
        return self->TextTranslator::TranslatorEngineAccessManager::event(event);
    }
}

// Base class handler implementation
bool TextTranslator__TranslatorEngineAccessManager_SuperEvent(TextTranslator__TranslatorEngineAccessManager* self, QEvent* event) {
    auto* vtexttranslatortranslatorengineaccessmanager = dynamic_cast<VirtualTextTranslatorTranslatorEngineAccessManager*>(self);
    if (vtexttranslatortranslatorengineaccessmanager && vtexttranslatortranslatorengineaccessmanager->isVirtualTextTranslatorTranslatorEngineAccessManager) {
        vtexttranslatortranslatorengineaccessmanager->setTextTranslator__TranslatorEngineAccessManager_Event_IsBase(true);
        return vtexttranslatortranslatorengineaccessmanager->event(event);
    } else {
        return self->TextTranslator::TranslatorEngineAccessManager::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorEngineAccessManager_OnEvent(TextTranslator__TranslatorEngineAccessManager* self, intptr_t slot) {
    auto* vtexttranslatortranslatorengineaccessmanager = dynamic_cast<VirtualTextTranslatorTranslatorEngineAccessManager*>(self);
    if (vtexttranslatortranslatorengineaccessmanager && vtexttranslatortranslatorengineaccessmanager->isVirtualTextTranslatorTranslatorEngineAccessManager) {
        vtexttranslatortranslatorengineaccessmanager->setTextTranslator__TranslatorEngineAccessManager_Event_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorEngineAccessManager::TextTranslator__TranslatorEngineAccessManager_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextTranslator__TranslatorEngineAccessManager_EventFilter(TextTranslator__TranslatorEngineAccessManager* self, QObject* watched, QEvent* event) {
    auto* vtexttranslatortranslatorengineaccessmanager = dynamic_cast<VirtualTextTranslatorTranslatorEngineAccessManager*>(self);
    if (vtexttranslatortranslatorengineaccessmanager && vtexttranslatortranslatorengineaccessmanager->isVirtualTextTranslatorTranslatorEngineAccessManager) {
        return vtexttranslatortranslatorengineaccessmanager->eventFilter(watched, event);
    } else {
        return self->TextTranslator::TranslatorEngineAccessManager::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool TextTranslator__TranslatorEngineAccessManager_SuperEventFilter(TextTranslator__TranslatorEngineAccessManager* self, QObject* watched, QEvent* event) {
    auto* vtexttranslatortranslatorengineaccessmanager = dynamic_cast<VirtualTextTranslatorTranslatorEngineAccessManager*>(self);
    if (vtexttranslatortranslatorengineaccessmanager && vtexttranslatortranslatorengineaccessmanager->isVirtualTextTranslatorTranslatorEngineAccessManager) {
        vtexttranslatortranslatorengineaccessmanager->setTextTranslator__TranslatorEngineAccessManager_EventFilter_IsBase(true);
        return vtexttranslatortranslatorengineaccessmanager->eventFilter(watched, event);
    } else {
        return self->TextTranslator::TranslatorEngineAccessManager::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorEngineAccessManager_OnEventFilter(TextTranslator__TranslatorEngineAccessManager* self, intptr_t slot) {
    auto* vtexttranslatortranslatorengineaccessmanager = dynamic_cast<VirtualTextTranslatorTranslatorEngineAccessManager*>(self);
    if (vtexttranslatortranslatorengineaccessmanager && vtexttranslatortranslatorengineaccessmanager->isVirtualTextTranslatorTranslatorEngineAccessManager) {
        vtexttranslatortranslatorengineaccessmanager->setTextTranslator__TranslatorEngineAccessManager_EventFilter_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorEngineAccessManager::TextTranslator__TranslatorEngineAccessManager_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorEngineAccessManager_TimerEvent(TextTranslator__TranslatorEngineAccessManager* self, QTimerEvent* event) {
    auto* vtexttranslatortranslatorengineaccessmanager = dynamic_cast<VirtualTextTranslatorTranslatorEngineAccessManager*>(self);
    if (vtexttranslatortranslatorengineaccessmanager && vtexttranslatortranslatorengineaccessmanager->isVirtualTextTranslatorTranslatorEngineAccessManager) {
        vtexttranslatortranslatorengineaccessmanager->timerEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorEngineAccessManager*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void TextTranslator__TranslatorEngineAccessManager_SuperTimerEvent(TextTranslator__TranslatorEngineAccessManager* self, QTimerEvent* event) {
    auto* vtexttranslatortranslatorengineaccessmanager = dynamic_cast<VirtualTextTranslatorTranslatorEngineAccessManager*>(self);
    if (vtexttranslatortranslatorengineaccessmanager && vtexttranslatortranslatorengineaccessmanager->isVirtualTextTranslatorTranslatorEngineAccessManager) {
        vtexttranslatortranslatorengineaccessmanager->setTextTranslator__TranslatorEngineAccessManager_TimerEvent_IsBase(true);
        vtexttranslatortranslatorengineaccessmanager->timerEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorEngineAccessManager*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorEngineAccessManager_OnTimerEvent(TextTranslator__TranslatorEngineAccessManager* self, intptr_t slot) {
    auto* vtexttranslatortranslatorengineaccessmanager = dynamic_cast<VirtualTextTranslatorTranslatorEngineAccessManager*>(self);
    if (vtexttranslatortranslatorengineaccessmanager && vtexttranslatortranslatorengineaccessmanager->isVirtualTextTranslatorTranslatorEngineAccessManager) {
        vtexttranslatortranslatorengineaccessmanager->setTextTranslator__TranslatorEngineAccessManager_TimerEvent_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorEngineAccessManager::TextTranslator__TranslatorEngineAccessManager_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorEngineAccessManager_ChildEvent(TextTranslator__TranslatorEngineAccessManager* self, QChildEvent* event) {
    auto* vtexttranslatortranslatorengineaccessmanager = dynamic_cast<VirtualTextTranslatorTranslatorEngineAccessManager*>(self);
    if (vtexttranslatortranslatorengineaccessmanager && vtexttranslatortranslatorengineaccessmanager->isVirtualTextTranslatorTranslatorEngineAccessManager) {
        vtexttranslatortranslatorengineaccessmanager->childEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorEngineAccessManager*)self)->childEvent(event);
    }
}

// Base class handler implementation
void TextTranslator__TranslatorEngineAccessManager_SuperChildEvent(TextTranslator__TranslatorEngineAccessManager* self, QChildEvent* event) {
    auto* vtexttranslatortranslatorengineaccessmanager = dynamic_cast<VirtualTextTranslatorTranslatorEngineAccessManager*>(self);
    if (vtexttranslatortranslatorengineaccessmanager && vtexttranslatortranslatorengineaccessmanager->isVirtualTextTranslatorTranslatorEngineAccessManager) {
        vtexttranslatortranslatorengineaccessmanager->setTextTranslator__TranslatorEngineAccessManager_ChildEvent_IsBase(true);
        vtexttranslatortranslatorengineaccessmanager->childEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorEngineAccessManager*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorEngineAccessManager_OnChildEvent(TextTranslator__TranslatorEngineAccessManager* self, intptr_t slot) {
    auto* vtexttranslatortranslatorengineaccessmanager = dynamic_cast<VirtualTextTranslatorTranslatorEngineAccessManager*>(self);
    if (vtexttranslatortranslatorengineaccessmanager && vtexttranslatortranslatorengineaccessmanager->isVirtualTextTranslatorTranslatorEngineAccessManager) {
        vtexttranslatortranslatorengineaccessmanager->setTextTranslator__TranslatorEngineAccessManager_ChildEvent_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorEngineAccessManager::TextTranslator__TranslatorEngineAccessManager_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorEngineAccessManager_CustomEvent(TextTranslator__TranslatorEngineAccessManager* self, QEvent* event) {
    auto* vtexttranslatortranslatorengineaccessmanager = dynamic_cast<VirtualTextTranslatorTranslatorEngineAccessManager*>(self);
    if (vtexttranslatortranslatorengineaccessmanager && vtexttranslatortranslatorengineaccessmanager->isVirtualTextTranslatorTranslatorEngineAccessManager) {
        vtexttranslatortranslatorengineaccessmanager->customEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorEngineAccessManager*)self)->customEvent(event);
    }
}

// Base class handler implementation
void TextTranslator__TranslatorEngineAccessManager_SuperCustomEvent(TextTranslator__TranslatorEngineAccessManager* self, QEvent* event) {
    auto* vtexttranslatortranslatorengineaccessmanager = dynamic_cast<VirtualTextTranslatorTranslatorEngineAccessManager*>(self);
    if (vtexttranslatortranslatorengineaccessmanager && vtexttranslatortranslatorengineaccessmanager->isVirtualTextTranslatorTranslatorEngineAccessManager) {
        vtexttranslatortranslatorengineaccessmanager->setTextTranslator__TranslatorEngineAccessManager_CustomEvent_IsBase(true);
        vtexttranslatortranslatorengineaccessmanager->customEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorEngineAccessManager*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorEngineAccessManager_OnCustomEvent(TextTranslator__TranslatorEngineAccessManager* self, intptr_t slot) {
    auto* vtexttranslatortranslatorengineaccessmanager = dynamic_cast<VirtualTextTranslatorTranslatorEngineAccessManager*>(self);
    if (vtexttranslatortranslatorengineaccessmanager && vtexttranslatortranslatorengineaccessmanager->isVirtualTextTranslatorTranslatorEngineAccessManager) {
        vtexttranslatortranslatorengineaccessmanager->setTextTranslator__TranslatorEngineAccessManager_CustomEvent_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorEngineAccessManager::TextTranslator__TranslatorEngineAccessManager_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorEngineAccessManager_ConnectNotify(TextTranslator__TranslatorEngineAccessManager* self, const QMetaMethod* signal) {
    auto* vtexttranslatortranslatorengineaccessmanager = dynamic_cast<VirtualTextTranslatorTranslatorEngineAccessManager*>(self);
    if (vtexttranslatortranslatorengineaccessmanager && vtexttranslatortranslatorengineaccessmanager->isVirtualTextTranslatorTranslatorEngineAccessManager) {
        vtexttranslatortranslatorengineaccessmanager->connectNotify(*signal);
    } else {
        ((VirtualTextTranslatorTranslatorEngineAccessManager*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void TextTranslator__TranslatorEngineAccessManager_SuperConnectNotify(TextTranslator__TranslatorEngineAccessManager* self, const QMetaMethod* signal) {
    auto* vtexttranslatortranslatorengineaccessmanager = dynamic_cast<VirtualTextTranslatorTranslatorEngineAccessManager*>(self);
    if (vtexttranslatortranslatorengineaccessmanager && vtexttranslatortranslatorengineaccessmanager->isVirtualTextTranslatorTranslatorEngineAccessManager) {
        vtexttranslatortranslatorengineaccessmanager->setTextTranslator__TranslatorEngineAccessManager_ConnectNotify_IsBase(true);
        vtexttranslatortranslatorengineaccessmanager->connectNotify(*signal);
    } else {
        ((VirtualTextTranslatorTranslatorEngineAccessManager*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorEngineAccessManager_OnConnectNotify(TextTranslator__TranslatorEngineAccessManager* self, intptr_t slot) {
    auto* vtexttranslatortranslatorengineaccessmanager = dynamic_cast<VirtualTextTranslatorTranslatorEngineAccessManager*>(self);
    if (vtexttranslatortranslatorengineaccessmanager && vtexttranslatortranslatorengineaccessmanager->isVirtualTextTranslatorTranslatorEngineAccessManager) {
        vtexttranslatortranslatorengineaccessmanager->setTextTranslator__TranslatorEngineAccessManager_ConnectNotify_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorEngineAccessManager::TextTranslator__TranslatorEngineAccessManager_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorEngineAccessManager_DisconnectNotify(TextTranslator__TranslatorEngineAccessManager* self, const QMetaMethod* signal) {
    auto* vtexttranslatortranslatorengineaccessmanager = dynamic_cast<VirtualTextTranslatorTranslatorEngineAccessManager*>(self);
    if (vtexttranslatortranslatorengineaccessmanager && vtexttranslatortranslatorengineaccessmanager->isVirtualTextTranslatorTranslatorEngineAccessManager) {
        vtexttranslatortranslatorengineaccessmanager->disconnectNotify(*signal);
    } else {
        ((VirtualTextTranslatorTranslatorEngineAccessManager*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void TextTranslator__TranslatorEngineAccessManager_SuperDisconnectNotify(TextTranslator__TranslatorEngineAccessManager* self, const QMetaMethod* signal) {
    auto* vtexttranslatortranslatorengineaccessmanager = dynamic_cast<VirtualTextTranslatorTranslatorEngineAccessManager*>(self);
    if (vtexttranslatortranslatorengineaccessmanager && vtexttranslatortranslatorengineaccessmanager->isVirtualTextTranslatorTranslatorEngineAccessManager) {
        vtexttranslatortranslatorengineaccessmanager->setTextTranslator__TranslatorEngineAccessManager_DisconnectNotify_IsBase(true);
        vtexttranslatortranslatorengineaccessmanager->disconnectNotify(*signal);
    } else {
        ((VirtualTextTranslatorTranslatorEngineAccessManager*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorEngineAccessManager_OnDisconnectNotify(TextTranslator__TranslatorEngineAccessManager* self, intptr_t slot) {
    auto* vtexttranslatortranslatorengineaccessmanager = dynamic_cast<VirtualTextTranslatorTranslatorEngineAccessManager*>(self);
    if (vtexttranslatortranslatorengineaccessmanager && vtexttranslatortranslatorengineaccessmanager->isVirtualTextTranslatorTranslatorEngineAccessManager) {
        vtexttranslatortranslatorengineaccessmanager->setTextTranslator__TranslatorEngineAccessManager_DisconnectNotify_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorEngineAccessManager::TextTranslator__TranslatorEngineAccessManager_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* TextTranslator__TranslatorEngineAccessManager_Sender(const TextTranslator__TranslatorEngineAccessManager* self) {
    auto* vtexttranslatortranslatorengineaccessmanager = const_cast<VirtualTextTranslatorTranslatorEngineAccessManager*>(dynamic_cast<const VirtualTextTranslatorTranslatorEngineAccessManager*>(self));
    if (vtexttranslatortranslatorengineaccessmanager && vtexttranslatortranslatorengineaccessmanager->isVirtualTextTranslatorTranslatorEngineAccessManager) {
        return vtexttranslatortranslatorengineaccessmanager->sender();
    } else {
        return ((VirtualTextTranslatorTranslatorEngineAccessManager*)self)->sender();
    }
}

// Base class handler implementation
QObject* TextTranslator__TranslatorEngineAccessManager_SuperSender(const TextTranslator__TranslatorEngineAccessManager* self) {
    auto* vtexttranslatortranslatorengineaccessmanager = const_cast<VirtualTextTranslatorTranslatorEngineAccessManager*>(dynamic_cast<const VirtualTextTranslatorTranslatorEngineAccessManager*>(self));
    if (vtexttranslatortranslatorengineaccessmanager && vtexttranslatortranslatorengineaccessmanager->isVirtualTextTranslatorTranslatorEngineAccessManager) {
        vtexttranslatortranslatorengineaccessmanager->setTextTranslator__TranslatorEngineAccessManager_Sender_IsBase(true);
        return vtexttranslatortranslatorengineaccessmanager->sender();
    } else {
        return ((VirtualTextTranslatorTranslatorEngineAccessManager*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorEngineAccessManager_OnSender(const TextTranslator__TranslatorEngineAccessManager* self, intptr_t slot) {
    auto* vtexttranslatortranslatorengineaccessmanager = const_cast<VirtualTextTranslatorTranslatorEngineAccessManager*>(dynamic_cast<const VirtualTextTranslatorTranslatorEngineAccessManager*>(self));
    if (vtexttranslatortranslatorengineaccessmanager && vtexttranslatortranslatorengineaccessmanager->isVirtualTextTranslatorTranslatorEngineAccessManager) {
        vtexttranslatortranslatorengineaccessmanager->setTextTranslator__TranslatorEngineAccessManager_Sender_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorEngineAccessManager::TextTranslator__TranslatorEngineAccessManager_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int TextTranslator__TranslatorEngineAccessManager_SenderSignalIndex(const TextTranslator__TranslatorEngineAccessManager* self) {
    auto* vtexttranslatortranslatorengineaccessmanager = const_cast<VirtualTextTranslatorTranslatorEngineAccessManager*>(dynamic_cast<const VirtualTextTranslatorTranslatorEngineAccessManager*>(self));
    if (vtexttranslatortranslatorengineaccessmanager && vtexttranslatortranslatorengineaccessmanager->isVirtualTextTranslatorTranslatorEngineAccessManager) {
        return vtexttranslatortranslatorengineaccessmanager->senderSignalIndex();
    } else {
        return ((VirtualTextTranslatorTranslatorEngineAccessManager*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int TextTranslator__TranslatorEngineAccessManager_SuperSenderSignalIndex(const TextTranslator__TranslatorEngineAccessManager* self) {
    auto* vtexttranslatortranslatorengineaccessmanager = const_cast<VirtualTextTranslatorTranslatorEngineAccessManager*>(dynamic_cast<const VirtualTextTranslatorTranslatorEngineAccessManager*>(self));
    if (vtexttranslatortranslatorengineaccessmanager && vtexttranslatortranslatorengineaccessmanager->isVirtualTextTranslatorTranslatorEngineAccessManager) {
        vtexttranslatortranslatorengineaccessmanager->setTextTranslator__TranslatorEngineAccessManager_SenderSignalIndex_IsBase(true);
        return vtexttranslatortranslatorengineaccessmanager->senderSignalIndex();
    } else {
        return ((VirtualTextTranslatorTranslatorEngineAccessManager*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorEngineAccessManager_OnSenderSignalIndex(const TextTranslator__TranslatorEngineAccessManager* self, intptr_t slot) {
    auto* vtexttranslatortranslatorengineaccessmanager = const_cast<VirtualTextTranslatorTranslatorEngineAccessManager*>(dynamic_cast<const VirtualTextTranslatorTranslatorEngineAccessManager*>(self));
    if (vtexttranslatortranslatorengineaccessmanager && vtexttranslatortranslatorengineaccessmanager->isVirtualTextTranslatorTranslatorEngineAccessManager) {
        vtexttranslatortranslatorengineaccessmanager->setTextTranslator__TranslatorEngineAccessManager_SenderSignalIndex_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorEngineAccessManager::TextTranslator__TranslatorEngineAccessManager_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int TextTranslator__TranslatorEngineAccessManager_Receivers(const TextTranslator__TranslatorEngineAccessManager* self, const char* signal) {
    auto* vtexttranslatortranslatorengineaccessmanager = const_cast<VirtualTextTranslatorTranslatorEngineAccessManager*>(dynamic_cast<const VirtualTextTranslatorTranslatorEngineAccessManager*>(self));
    if (vtexttranslatortranslatorengineaccessmanager && vtexttranslatortranslatorengineaccessmanager->isVirtualTextTranslatorTranslatorEngineAccessManager) {
        return vtexttranslatortranslatorengineaccessmanager->receivers(signal);
    } else {
        return ((VirtualTextTranslatorTranslatorEngineAccessManager*)self)->receivers(signal);
    }
}

// Base class handler implementation
int TextTranslator__TranslatorEngineAccessManager_SuperReceivers(const TextTranslator__TranslatorEngineAccessManager* self, const char* signal) {
    auto* vtexttranslatortranslatorengineaccessmanager = const_cast<VirtualTextTranslatorTranslatorEngineAccessManager*>(dynamic_cast<const VirtualTextTranslatorTranslatorEngineAccessManager*>(self));
    if (vtexttranslatortranslatorengineaccessmanager && vtexttranslatortranslatorengineaccessmanager->isVirtualTextTranslatorTranslatorEngineAccessManager) {
        vtexttranslatortranslatorengineaccessmanager->setTextTranslator__TranslatorEngineAccessManager_Receivers_IsBase(true);
        return vtexttranslatortranslatorengineaccessmanager->receivers(signal);
    } else {
        return ((VirtualTextTranslatorTranslatorEngineAccessManager*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorEngineAccessManager_OnReceivers(const TextTranslator__TranslatorEngineAccessManager* self, intptr_t slot) {
    auto* vtexttranslatortranslatorengineaccessmanager = const_cast<VirtualTextTranslatorTranslatorEngineAccessManager*>(dynamic_cast<const VirtualTextTranslatorTranslatorEngineAccessManager*>(self));
    if (vtexttranslatortranslatorengineaccessmanager && vtexttranslatortranslatorengineaccessmanager->isVirtualTextTranslatorTranslatorEngineAccessManager) {
        vtexttranslatortranslatorengineaccessmanager->setTextTranslator__TranslatorEngineAccessManager_Receivers_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorEngineAccessManager::TextTranslator__TranslatorEngineAccessManager_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextTranslator__TranslatorEngineAccessManager_IsSignalConnected(const TextTranslator__TranslatorEngineAccessManager* self, const QMetaMethod* signal) {
    auto* vtexttranslatortranslatorengineaccessmanager = const_cast<VirtualTextTranslatorTranslatorEngineAccessManager*>(dynamic_cast<const VirtualTextTranslatorTranslatorEngineAccessManager*>(self));
    if (vtexttranslatortranslatorengineaccessmanager && vtexttranslatortranslatorengineaccessmanager->isVirtualTextTranslatorTranslatorEngineAccessManager) {
        return vtexttranslatortranslatorengineaccessmanager->isSignalConnected(*signal);
    } else {
        return ((VirtualTextTranslatorTranslatorEngineAccessManager*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool TextTranslator__TranslatorEngineAccessManager_SuperIsSignalConnected(const TextTranslator__TranslatorEngineAccessManager* self, const QMetaMethod* signal) {
    auto* vtexttranslatortranslatorengineaccessmanager = const_cast<VirtualTextTranslatorTranslatorEngineAccessManager*>(dynamic_cast<const VirtualTextTranslatorTranslatorEngineAccessManager*>(self));
    if (vtexttranslatortranslatorengineaccessmanager && vtexttranslatortranslatorengineaccessmanager->isVirtualTextTranslatorTranslatorEngineAccessManager) {
        vtexttranslatortranslatorengineaccessmanager->setTextTranslator__TranslatorEngineAccessManager_IsSignalConnected_IsBase(true);
        return vtexttranslatortranslatorengineaccessmanager->isSignalConnected(*signal);
    } else {
        return ((VirtualTextTranslatorTranslatorEngineAccessManager*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorEngineAccessManager_OnIsSignalConnected(const TextTranslator__TranslatorEngineAccessManager* self, intptr_t slot) {
    auto* vtexttranslatortranslatorengineaccessmanager = const_cast<VirtualTextTranslatorTranslatorEngineAccessManager*>(dynamic_cast<const VirtualTextTranslatorTranslatorEngineAccessManager*>(self));
    if (vtexttranslatortranslatorengineaccessmanager && vtexttranslatortranslatorengineaccessmanager->isVirtualTextTranslatorTranslatorEngineAccessManager) {
        vtexttranslatortranslatorengineaccessmanager->setTextTranslator__TranslatorEngineAccessManager_IsSignalConnected_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorEngineAccessManager::TextTranslator__TranslatorEngineAccessManager_IsSignalConnected_Callback>(slot));
    }
}

void TextTranslator__TranslatorEngineAccessManager_Delete(TextTranslator__TranslatorEngineAccessManager* self) {
    delete self;
}
