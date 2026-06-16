#include <QChildEvent>
#include <QEvent>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QTimerEvent>
#define WORKAROUND_INNER_CLASS_DEFINITION_TextEmoticonsCore__EmoticonCategory
#define WORKAROUND_INNER_CLASS_DEFINITION_TextEmoticonsCore__UnicodeEmoticon
#define WORKAROUND_INNER_CLASS_DEFINITION_TextEmoticonsCore__UnicodeEmoticonManager
#include <unicodeemoticonmanager.h>
#include "libunicodeemoticonmanager.h"
#include "libunicodeemoticonmanager.hxx"

TextEmoticonsCore__UnicodeEmoticonManager* TextEmoticonsCore__UnicodeEmoticonManager_new() {
    return new VirtualTextEmoticonsCoreUnicodeEmoticonManager();
}

TextEmoticonsCore__UnicodeEmoticonManager* TextEmoticonsCore__UnicodeEmoticonManager_new2(QObject* parent) {
    return new VirtualTextEmoticonsCoreUnicodeEmoticonManager(parent);
}

QMetaObject* TextEmoticonsCore__UnicodeEmoticonManager_MetaObject(const TextEmoticonsCore__UnicodeEmoticonManager* self) {
    return (QMetaObject*)self->metaObject();
}

void* TextEmoticonsCore__UnicodeEmoticonManager_Metacast(TextEmoticonsCore__UnicodeEmoticonManager* self, const char* param1) {
    return self->qt_metacast(param1);
}

int TextEmoticonsCore__UnicodeEmoticonManager_Metacall(TextEmoticonsCore__UnicodeEmoticonManager* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

TextEmoticonsCore__UnicodeEmoticonManager* TextEmoticonsCore__UnicodeEmoticonManager_Self() {
    return TextEmoticonsCore::UnicodeEmoticonManager::self();
}

libqt_list /* of TextEmoticonsCore__UnicodeEmoticon* */ TextEmoticonsCore__UnicodeEmoticonManager_UnicodeEmojiList(const TextEmoticonsCore__UnicodeEmoticonManager* self) {
    QList<TextEmoticonsCore::UnicodeEmoticon> _ret = self->unicodeEmojiList();
    // Convert QList<> from C++ memory to manually-managed C memory
    TextEmoticonsCore__UnicodeEmoticon** _arr = static_cast<TextEmoticonsCore__UnicodeEmoticon**>(malloc(sizeof(TextEmoticonsCore__UnicodeEmoticon*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new TextEmoticonsCore::UnicodeEmoticon(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_list /* of TextEmoticonsCore__UnicodeEmoticon* */ TextEmoticonsCore__UnicodeEmoticonManager_EmojisForCategory(const TextEmoticonsCore__UnicodeEmoticonManager* self, const libqt_string category) {
    QString category_QString = QString::fromUtf8(category.data, category.len);
    QList<TextEmoticonsCore::UnicodeEmoticon> _ret = self->emojisForCategory(category_QString);
    // Convert QList<> from C++ memory to manually-managed C memory
    TextEmoticonsCore__UnicodeEmoticon** _arr = static_cast<TextEmoticonsCore__UnicodeEmoticon**>(malloc(sizeof(TextEmoticonsCore__UnicodeEmoticon*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new TextEmoticonsCore::UnicodeEmoticon(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_list /* of TextEmoticonsCore__EmoticonCategory* */ TextEmoticonsCore__UnicodeEmoticonManager_Categories(const TextEmoticonsCore__UnicodeEmoticonManager* self) {
    QList<TextEmoticonsCore::EmoticonCategory> _ret = self->categories();
    // Convert QList<> from C++ memory to manually-managed C memory
    TextEmoticonsCore__EmoticonCategory** _arr = static_cast<TextEmoticonsCore__EmoticonCategory**>(malloc(sizeof(TextEmoticonsCore__EmoticonCategory*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new TextEmoticonsCore::EmoticonCategory(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

TextEmoticonsCore__UnicodeEmoticon* TextEmoticonsCore__UnicodeEmoticonManager_UnicodeEmoticonForEmoji(const TextEmoticonsCore__UnicodeEmoticonManager* self, const libqt_string emojiIdentifier) {
    QString emojiIdentifier_QString = QString::fromUtf8(emojiIdentifier.data, emojiIdentifier.len);
    return new TextEmoticonsCore::UnicodeEmoticon(self->unicodeEmoticonForEmoji(emojiIdentifier_QString));
}

int TextEmoticonsCore__UnicodeEmoticonManager_Count(const TextEmoticonsCore__UnicodeEmoticonManager* self) {
    return self->count();
}

// Base class handler implementation
QMetaObject* TextEmoticonsCore__UnicodeEmoticonManager_SuperMetaObject(const TextEmoticonsCore__UnicodeEmoticonManager* self) {
    auto* vtextemoticonscoreunicodeemoticonmanager = const_cast<VirtualTextEmoticonsCoreUnicodeEmoticonManager*>(dynamic_cast<const VirtualTextEmoticonsCoreUnicodeEmoticonManager*>(self));
    if (vtextemoticonscoreunicodeemoticonmanager && vtextemoticonscoreunicodeemoticonmanager->isVirtualTextEmoticonsCoreUnicodeEmoticonManager) {
        vtextemoticonscoreunicodeemoticonmanager->setTextEmoticonsCore__UnicodeEmoticonManager_MetaObject_IsBase(true);
        return (QMetaObject*)vtextemoticonscoreunicodeemoticonmanager->metaObject();
    } else {
        return (QMetaObject*)self->TextEmoticonsCore::UnicodeEmoticonManager::metaObject();
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__UnicodeEmoticonManager_OnMetaObject(const TextEmoticonsCore__UnicodeEmoticonManager* self, intptr_t slot) {
    auto* vtextemoticonscoreunicodeemoticonmanager = const_cast<VirtualTextEmoticonsCoreUnicodeEmoticonManager*>(dynamic_cast<const VirtualTextEmoticonsCoreUnicodeEmoticonManager*>(self));
    if (vtextemoticonscoreunicodeemoticonmanager && vtextemoticonscoreunicodeemoticonmanager->isVirtualTextEmoticonsCoreUnicodeEmoticonManager) {
        vtextemoticonscoreunicodeemoticonmanager->setTextEmoticonsCore__UnicodeEmoticonManager_MetaObject_Callback(reinterpret_cast<VirtualTextEmoticonsCoreUnicodeEmoticonManager::TextEmoticonsCore__UnicodeEmoticonManager_MetaObject_Callback>(slot));
    }
}

// Base class handler implementation
void* TextEmoticonsCore__UnicodeEmoticonManager_SuperMetacast(TextEmoticonsCore__UnicodeEmoticonManager* self, const char* param1) {
    auto* vtextemoticonscoreunicodeemoticonmanager = dynamic_cast<VirtualTextEmoticonsCoreUnicodeEmoticonManager*>(self);
    if (vtextemoticonscoreunicodeemoticonmanager && vtextemoticonscoreunicodeemoticonmanager->isVirtualTextEmoticonsCoreUnicodeEmoticonManager) {
        vtextemoticonscoreunicodeemoticonmanager->setTextEmoticonsCore__UnicodeEmoticonManager_Metacast_IsBase(true);
        return vtextemoticonscoreunicodeemoticonmanager->qt_metacast(param1);
    } else {
        return self->TextEmoticonsCore::UnicodeEmoticonManager::qt_metacast(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__UnicodeEmoticonManager_OnMetacast(TextEmoticonsCore__UnicodeEmoticonManager* self, intptr_t slot) {
    auto* vtextemoticonscoreunicodeemoticonmanager = dynamic_cast<VirtualTextEmoticonsCoreUnicodeEmoticonManager*>(self);
    if (vtextemoticonscoreunicodeemoticonmanager && vtextemoticonscoreunicodeemoticonmanager->isVirtualTextEmoticonsCoreUnicodeEmoticonManager) {
        vtextemoticonscoreunicodeemoticonmanager->setTextEmoticonsCore__UnicodeEmoticonManager_Metacast_Callback(reinterpret_cast<VirtualTextEmoticonsCoreUnicodeEmoticonManager::TextEmoticonsCore__UnicodeEmoticonManager_Metacast_Callback>(slot));
    }
}

// Base class handler implementation
int TextEmoticonsCore__UnicodeEmoticonManager_SuperMetacall(TextEmoticonsCore__UnicodeEmoticonManager* self, int param1, int param2, void** param3) {
    auto* vtextemoticonscoreunicodeemoticonmanager = dynamic_cast<VirtualTextEmoticonsCoreUnicodeEmoticonManager*>(self);
    if (vtextemoticonscoreunicodeemoticonmanager && vtextemoticonscoreunicodeemoticonmanager->isVirtualTextEmoticonsCoreUnicodeEmoticonManager) {
        vtextemoticonscoreunicodeemoticonmanager->setTextEmoticonsCore__UnicodeEmoticonManager_Metacall_IsBase(true);
        return vtextemoticonscoreunicodeemoticonmanager->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->TextEmoticonsCore::UnicodeEmoticonManager::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__UnicodeEmoticonManager_OnMetacall(TextEmoticonsCore__UnicodeEmoticonManager* self, intptr_t slot) {
    auto* vtextemoticonscoreunicodeemoticonmanager = dynamic_cast<VirtualTextEmoticonsCoreUnicodeEmoticonManager*>(self);
    if (vtextemoticonscoreunicodeemoticonmanager && vtextemoticonscoreunicodeemoticonmanager->isVirtualTextEmoticonsCoreUnicodeEmoticonManager) {
        vtextemoticonscoreunicodeemoticonmanager->setTextEmoticonsCore__UnicodeEmoticonManager_Metacall_Callback(reinterpret_cast<VirtualTextEmoticonsCoreUnicodeEmoticonManager::TextEmoticonsCore__UnicodeEmoticonManager_Metacall_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextEmoticonsCore__UnicodeEmoticonManager_Event(TextEmoticonsCore__UnicodeEmoticonManager* self, QEvent* event) {
    auto* vtextemoticonscoreunicodeemoticonmanager = dynamic_cast<VirtualTextEmoticonsCoreUnicodeEmoticonManager*>(self);
    if (vtextemoticonscoreunicodeemoticonmanager && vtextemoticonscoreunicodeemoticonmanager->isVirtualTextEmoticonsCoreUnicodeEmoticonManager) {
        return vtextemoticonscoreunicodeemoticonmanager->event(event);
    } else {
        return self->TextEmoticonsCore::UnicodeEmoticonManager::event(event);
    }
}

// Base class handler implementation
bool TextEmoticonsCore__UnicodeEmoticonManager_SuperEvent(TextEmoticonsCore__UnicodeEmoticonManager* self, QEvent* event) {
    auto* vtextemoticonscoreunicodeemoticonmanager = dynamic_cast<VirtualTextEmoticonsCoreUnicodeEmoticonManager*>(self);
    if (vtextemoticonscoreunicodeemoticonmanager && vtextemoticonscoreunicodeemoticonmanager->isVirtualTextEmoticonsCoreUnicodeEmoticonManager) {
        vtextemoticonscoreunicodeemoticonmanager->setTextEmoticonsCore__UnicodeEmoticonManager_Event_IsBase(true);
        return vtextemoticonscoreunicodeemoticonmanager->event(event);
    } else {
        return self->TextEmoticonsCore::UnicodeEmoticonManager::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__UnicodeEmoticonManager_OnEvent(TextEmoticonsCore__UnicodeEmoticonManager* self, intptr_t slot) {
    auto* vtextemoticonscoreunicodeemoticonmanager = dynamic_cast<VirtualTextEmoticonsCoreUnicodeEmoticonManager*>(self);
    if (vtextemoticonscoreunicodeemoticonmanager && vtextemoticonscoreunicodeemoticonmanager->isVirtualTextEmoticonsCoreUnicodeEmoticonManager) {
        vtextemoticonscoreunicodeemoticonmanager->setTextEmoticonsCore__UnicodeEmoticonManager_Event_Callback(reinterpret_cast<VirtualTextEmoticonsCoreUnicodeEmoticonManager::TextEmoticonsCore__UnicodeEmoticonManager_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextEmoticonsCore__UnicodeEmoticonManager_EventFilter(TextEmoticonsCore__UnicodeEmoticonManager* self, QObject* watched, QEvent* event) {
    auto* vtextemoticonscoreunicodeemoticonmanager = dynamic_cast<VirtualTextEmoticonsCoreUnicodeEmoticonManager*>(self);
    if (vtextemoticonscoreunicodeemoticonmanager && vtextemoticonscoreunicodeemoticonmanager->isVirtualTextEmoticonsCoreUnicodeEmoticonManager) {
        return vtextemoticonscoreunicodeemoticonmanager->eventFilter(watched, event);
    } else {
        return self->TextEmoticonsCore::UnicodeEmoticonManager::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool TextEmoticonsCore__UnicodeEmoticonManager_SuperEventFilter(TextEmoticonsCore__UnicodeEmoticonManager* self, QObject* watched, QEvent* event) {
    auto* vtextemoticonscoreunicodeemoticonmanager = dynamic_cast<VirtualTextEmoticonsCoreUnicodeEmoticonManager*>(self);
    if (vtextemoticonscoreunicodeemoticonmanager && vtextemoticonscoreunicodeemoticonmanager->isVirtualTextEmoticonsCoreUnicodeEmoticonManager) {
        vtextemoticonscoreunicodeemoticonmanager->setTextEmoticonsCore__UnicodeEmoticonManager_EventFilter_IsBase(true);
        return vtextemoticonscoreunicodeemoticonmanager->eventFilter(watched, event);
    } else {
        return self->TextEmoticonsCore::UnicodeEmoticonManager::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__UnicodeEmoticonManager_OnEventFilter(TextEmoticonsCore__UnicodeEmoticonManager* self, intptr_t slot) {
    auto* vtextemoticonscoreunicodeemoticonmanager = dynamic_cast<VirtualTextEmoticonsCoreUnicodeEmoticonManager*>(self);
    if (vtextemoticonscoreunicodeemoticonmanager && vtextemoticonscoreunicodeemoticonmanager->isVirtualTextEmoticonsCoreUnicodeEmoticonManager) {
        vtextemoticonscoreunicodeemoticonmanager->setTextEmoticonsCore__UnicodeEmoticonManager_EventFilter_Callback(reinterpret_cast<VirtualTextEmoticonsCoreUnicodeEmoticonManager::TextEmoticonsCore__UnicodeEmoticonManager_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEmoticonsCore__UnicodeEmoticonManager_TimerEvent(TextEmoticonsCore__UnicodeEmoticonManager* self, QTimerEvent* event) {
    auto* vtextemoticonscoreunicodeemoticonmanager = dynamic_cast<VirtualTextEmoticonsCoreUnicodeEmoticonManager*>(self);
    if (vtextemoticonscoreunicodeemoticonmanager && vtextemoticonscoreunicodeemoticonmanager->isVirtualTextEmoticonsCoreUnicodeEmoticonManager) {
        vtextemoticonscoreunicodeemoticonmanager->timerEvent(event);
    } else {
        ((VirtualTextEmoticonsCoreUnicodeEmoticonManager*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void TextEmoticonsCore__UnicodeEmoticonManager_SuperTimerEvent(TextEmoticonsCore__UnicodeEmoticonManager* self, QTimerEvent* event) {
    auto* vtextemoticonscoreunicodeemoticonmanager = dynamic_cast<VirtualTextEmoticonsCoreUnicodeEmoticonManager*>(self);
    if (vtextemoticonscoreunicodeemoticonmanager && vtextemoticonscoreunicodeemoticonmanager->isVirtualTextEmoticonsCoreUnicodeEmoticonManager) {
        vtextemoticonscoreunicodeemoticonmanager->setTextEmoticonsCore__UnicodeEmoticonManager_TimerEvent_IsBase(true);
        vtextemoticonscoreunicodeemoticonmanager->timerEvent(event);
    } else {
        ((VirtualTextEmoticonsCoreUnicodeEmoticonManager*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__UnicodeEmoticonManager_OnTimerEvent(TextEmoticonsCore__UnicodeEmoticonManager* self, intptr_t slot) {
    auto* vtextemoticonscoreunicodeemoticonmanager = dynamic_cast<VirtualTextEmoticonsCoreUnicodeEmoticonManager*>(self);
    if (vtextemoticonscoreunicodeemoticonmanager && vtextemoticonscoreunicodeemoticonmanager->isVirtualTextEmoticonsCoreUnicodeEmoticonManager) {
        vtextemoticonscoreunicodeemoticonmanager->setTextEmoticonsCore__UnicodeEmoticonManager_TimerEvent_Callback(reinterpret_cast<VirtualTextEmoticonsCoreUnicodeEmoticonManager::TextEmoticonsCore__UnicodeEmoticonManager_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEmoticonsCore__UnicodeEmoticonManager_ChildEvent(TextEmoticonsCore__UnicodeEmoticonManager* self, QChildEvent* event) {
    auto* vtextemoticonscoreunicodeemoticonmanager = dynamic_cast<VirtualTextEmoticonsCoreUnicodeEmoticonManager*>(self);
    if (vtextemoticonscoreunicodeemoticonmanager && vtextemoticonscoreunicodeemoticonmanager->isVirtualTextEmoticonsCoreUnicodeEmoticonManager) {
        vtextemoticonscoreunicodeemoticonmanager->childEvent(event);
    } else {
        ((VirtualTextEmoticonsCoreUnicodeEmoticonManager*)self)->childEvent(event);
    }
}

// Base class handler implementation
void TextEmoticonsCore__UnicodeEmoticonManager_SuperChildEvent(TextEmoticonsCore__UnicodeEmoticonManager* self, QChildEvent* event) {
    auto* vtextemoticonscoreunicodeemoticonmanager = dynamic_cast<VirtualTextEmoticonsCoreUnicodeEmoticonManager*>(self);
    if (vtextemoticonscoreunicodeemoticonmanager && vtextemoticonscoreunicodeemoticonmanager->isVirtualTextEmoticonsCoreUnicodeEmoticonManager) {
        vtextemoticonscoreunicodeemoticonmanager->setTextEmoticonsCore__UnicodeEmoticonManager_ChildEvent_IsBase(true);
        vtextemoticonscoreunicodeemoticonmanager->childEvent(event);
    } else {
        ((VirtualTextEmoticonsCoreUnicodeEmoticonManager*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__UnicodeEmoticonManager_OnChildEvent(TextEmoticonsCore__UnicodeEmoticonManager* self, intptr_t slot) {
    auto* vtextemoticonscoreunicodeemoticonmanager = dynamic_cast<VirtualTextEmoticonsCoreUnicodeEmoticonManager*>(self);
    if (vtextemoticonscoreunicodeemoticonmanager && vtextemoticonscoreunicodeemoticonmanager->isVirtualTextEmoticonsCoreUnicodeEmoticonManager) {
        vtextemoticonscoreunicodeemoticonmanager->setTextEmoticonsCore__UnicodeEmoticonManager_ChildEvent_Callback(reinterpret_cast<VirtualTextEmoticonsCoreUnicodeEmoticonManager::TextEmoticonsCore__UnicodeEmoticonManager_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEmoticonsCore__UnicodeEmoticonManager_CustomEvent(TextEmoticonsCore__UnicodeEmoticonManager* self, QEvent* event) {
    auto* vtextemoticonscoreunicodeemoticonmanager = dynamic_cast<VirtualTextEmoticonsCoreUnicodeEmoticonManager*>(self);
    if (vtextemoticonscoreunicodeemoticonmanager && vtextemoticonscoreunicodeemoticonmanager->isVirtualTextEmoticonsCoreUnicodeEmoticonManager) {
        vtextemoticonscoreunicodeemoticonmanager->customEvent(event);
    } else {
        ((VirtualTextEmoticonsCoreUnicodeEmoticonManager*)self)->customEvent(event);
    }
}

// Base class handler implementation
void TextEmoticonsCore__UnicodeEmoticonManager_SuperCustomEvent(TextEmoticonsCore__UnicodeEmoticonManager* self, QEvent* event) {
    auto* vtextemoticonscoreunicodeemoticonmanager = dynamic_cast<VirtualTextEmoticonsCoreUnicodeEmoticonManager*>(self);
    if (vtextemoticonscoreunicodeemoticonmanager && vtextemoticonscoreunicodeemoticonmanager->isVirtualTextEmoticonsCoreUnicodeEmoticonManager) {
        vtextemoticonscoreunicodeemoticonmanager->setTextEmoticonsCore__UnicodeEmoticonManager_CustomEvent_IsBase(true);
        vtextemoticonscoreunicodeemoticonmanager->customEvent(event);
    } else {
        ((VirtualTextEmoticonsCoreUnicodeEmoticonManager*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__UnicodeEmoticonManager_OnCustomEvent(TextEmoticonsCore__UnicodeEmoticonManager* self, intptr_t slot) {
    auto* vtextemoticonscoreunicodeemoticonmanager = dynamic_cast<VirtualTextEmoticonsCoreUnicodeEmoticonManager*>(self);
    if (vtextemoticonscoreunicodeemoticonmanager && vtextemoticonscoreunicodeemoticonmanager->isVirtualTextEmoticonsCoreUnicodeEmoticonManager) {
        vtextemoticonscoreunicodeemoticonmanager->setTextEmoticonsCore__UnicodeEmoticonManager_CustomEvent_Callback(reinterpret_cast<VirtualTextEmoticonsCoreUnicodeEmoticonManager::TextEmoticonsCore__UnicodeEmoticonManager_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEmoticonsCore__UnicodeEmoticonManager_ConnectNotify(TextEmoticonsCore__UnicodeEmoticonManager* self, const QMetaMethod* signal) {
    auto* vtextemoticonscoreunicodeemoticonmanager = dynamic_cast<VirtualTextEmoticonsCoreUnicodeEmoticonManager*>(self);
    if (vtextemoticonscoreunicodeemoticonmanager && vtextemoticonscoreunicodeemoticonmanager->isVirtualTextEmoticonsCoreUnicodeEmoticonManager) {
        vtextemoticonscoreunicodeemoticonmanager->connectNotify(*signal);
    } else {
        ((VirtualTextEmoticonsCoreUnicodeEmoticonManager*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void TextEmoticonsCore__UnicodeEmoticonManager_SuperConnectNotify(TextEmoticonsCore__UnicodeEmoticonManager* self, const QMetaMethod* signal) {
    auto* vtextemoticonscoreunicodeemoticonmanager = dynamic_cast<VirtualTextEmoticonsCoreUnicodeEmoticonManager*>(self);
    if (vtextemoticonscoreunicodeemoticonmanager && vtextemoticonscoreunicodeemoticonmanager->isVirtualTextEmoticonsCoreUnicodeEmoticonManager) {
        vtextemoticonscoreunicodeemoticonmanager->setTextEmoticonsCore__UnicodeEmoticonManager_ConnectNotify_IsBase(true);
        vtextemoticonscoreunicodeemoticonmanager->connectNotify(*signal);
    } else {
        ((VirtualTextEmoticonsCoreUnicodeEmoticonManager*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__UnicodeEmoticonManager_OnConnectNotify(TextEmoticonsCore__UnicodeEmoticonManager* self, intptr_t slot) {
    auto* vtextemoticonscoreunicodeemoticonmanager = dynamic_cast<VirtualTextEmoticonsCoreUnicodeEmoticonManager*>(self);
    if (vtextemoticonscoreunicodeemoticonmanager && vtextemoticonscoreunicodeemoticonmanager->isVirtualTextEmoticonsCoreUnicodeEmoticonManager) {
        vtextemoticonscoreunicodeemoticonmanager->setTextEmoticonsCore__UnicodeEmoticonManager_ConnectNotify_Callback(reinterpret_cast<VirtualTextEmoticonsCoreUnicodeEmoticonManager::TextEmoticonsCore__UnicodeEmoticonManager_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEmoticonsCore__UnicodeEmoticonManager_DisconnectNotify(TextEmoticonsCore__UnicodeEmoticonManager* self, const QMetaMethod* signal) {
    auto* vtextemoticonscoreunicodeemoticonmanager = dynamic_cast<VirtualTextEmoticonsCoreUnicodeEmoticonManager*>(self);
    if (vtextemoticonscoreunicodeemoticonmanager && vtextemoticonscoreunicodeemoticonmanager->isVirtualTextEmoticonsCoreUnicodeEmoticonManager) {
        vtextemoticonscoreunicodeemoticonmanager->disconnectNotify(*signal);
    } else {
        ((VirtualTextEmoticonsCoreUnicodeEmoticonManager*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void TextEmoticonsCore__UnicodeEmoticonManager_SuperDisconnectNotify(TextEmoticonsCore__UnicodeEmoticonManager* self, const QMetaMethod* signal) {
    auto* vtextemoticonscoreunicodeemoticonmanager = dynamic_cast<VirtualTextEmoticonsCoreUnicodeEmoticonManager*>(self);
    if (vtextemoticonscoreunicodeemoticonmanager && vtextemoticonscoreunicodeemoticonmanager->isVirtualTextEmoticonsCoreUnicodeEmoticonManager) {
        vtextemoticonscoreunicodeemoticonmanager->setTextEmoticonsCore__UnicodeEmoticonManager_DisconnectNotify_IsBase(true);
        vtextemoticonscoreunicodeemoticonmanager->disconnectNotify(*signal);
    } else {
        ((VirtualTextEmoticonsCoreUnicodeEmoticonManager*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__UnicodeEmoticonManager_OnDisconnectNotify(TextEmoticonsCore__UnicodeEmoticonManager* self, intptr_t slot) {
    auto* vtextemoticonscoreunicodeemoticonmanager = dynamic_cast<VirtualTextEmoticonsCoreUnicodeEmoticonManager*>(self);
    if (vtextemoticonscoreunicodeemoticonmanager && vtextemoticonscoreunicodeemoticonmanager->isVirtualTextEmoticonsCoreUnicodeEmoticonManager) {
        vtextemoticonscoreunicodeemoticonmanager->setTextEmoticonsCore__UnicodeEmoticonManager_DisconnectNotify_Callback(reinterpret_cast<VirtualTextEmoticonsCoreUnicodeEmoticonManager::TextEmoticonsCore__UnicodeEmoticonManager_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* TextEmoticonsCore__UnicodeEmoticonManager_Sender(const TextEmoticonsCore__UnicodeEmoticonManager* self) {
    auto* vtextemoticonscoreunicodeemoticonmanager = const_cast<VirtualTextEmoticonsCoreUnicodeEmoticonManager*>(dynamic_cast<const VirtualTextEmoticonsCoreUnicodeEmoticonManager*>(self));
    if (vtextemoticonscoreunicodeemoticonmanager && vtextemoticonscoreunicodeemoticonmanager->isVirtualTextEmoticonsCoreUnicodeEmoticonManager) {
        return vtextemoticonscoreunicodeemoticonmanager->sender();
    } else {
        return ((VirtualTextEmoticonsCoreUnicodeEmoticonManager*)self)->sender();
    }
}

// Base class handler implementation
QObject* TextEmoticonsCore__UnicodeEmoticonManager_SuperSender(const TextEmoticonsCore__UnicodeEmoticonManager* self) {
    auto* vtextemoticonscoreunicodeemoticonmanager = const_cast<VirtualTextEmoticonsCoreUnicodeEmoticonManager*>(dynamic_cast<const VirtualTextEmoticonsCoreUnicodeEmoticonManager*>(self));
    if (vtextemoticonscoreunicodeemoticonmanager && vtextemoticonscoreunicodeemoticonmanager->isVirtualTextEmoticonsCoreUnicodeEmoticonManager) {
        vtextemoticonscoreunicodeemoticonmanager->setTextEmoticonsCore__UnicodeEmoticonManager_Sender_IsBase(true);
        return vtextemoticonscoreunicodeemoticonmanager->sender();
    } else {
        return ((VirtualTextEmoticonsCoreUnicodeEmoticonManager*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__UnicodeEmoticonManager_OnSender(const TextEmoticonsCore__UnicodeEmoticonManager* self, intptr_t slot) {
    auto* vtextemoticonscoreunicodeemoticonmanager = const_cast<VirtualTextEmoticonsCoreUnicodeEmoticonManager*>(dynamic_cast<const VirtualTextEmoticonsCoreUnicodeEmoticonManager*>(self));
    if (vtextemoticonscoreunicodeemoticonmanager && vtextemoticonscoreunicodeemoticonmanager->isVirtualTextEmoticonsCoreUnicodeEmoticonManager) {
        vtextemoticonscoreunicodeemoticonmanager->setTextEmoticonsCore__UnicodeEmoticonManager_Sender_Callback(reinterpret_cast<VirtualTextEmoticonsCoreUnicodeEmoticonManager::TextEmoticonsCore__UnicodeEmoticonManager_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int TextEmoticonsCore__UnicodeEmoticonManager_SenderSignalIndex(const TextEmoticonsCore__UnicodeEmoticonManager* self) {
    auto* vtextemoticonscoreunicodeemoticonmanager = const_cast<VirtualTextEmoticonsCoreUnicodeEmoticonManager*>(dynamic_cast<const VirtualTextEmoticonsCoreUnicodeEmoticonManager*>(self));
    if (vtextemoticonscoreunicodeemoticonmanager && vtextemoticonscoreunicodeemoticonmanager->isVirtualTextEmoticonsCoreUnicodeEmoticonManager) {
        return vtextemoticonscoreunicodeemoticonmanager->senderSignalIndex();
    } else {
        return ((VirtualTextEmoticonsCoreUnicodeEmoticonManager*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int TextEmoticonsCore__UnicodeEmoticonManager_SuperSenderSignalIndex(const TextEmoticonsCore__UnicodeEmoticonManager* self) {
    auto* vtextemoticonscoreunicodeemoticonmanager = const_cast<VirtualTextEmoticonsCoreUnicodeEmoticonManager*>(dynamic_cast<const VirtualTextEmoticonsCoreUnicodeEmoticonManager*>(self));
    if (vtextemoticonscoreunicodeemoticonmanager && vtextemoticonscoreunicodeemoticonmanager->isVirtualTextEmoticonsCoreUnicodeEmoticonManager) {
        vtextemoticonscoreunicodeemoticonmanager->setTextEmoticonsCore__UnicodeEmoticonManager_SenderSignalIndex_IsBase(true);
        return vtextemoticonscoreunicodeemoticonmanager->senderSignalIndex();
    } else {
        return ((VirtualTextEmoticonsCoreUnicodeEmoticonManager*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__UnicodeEmoticonManager_OnSenderSignalIndex(const TextEmoticonsCore__UnicodeEmoticonManager* self, intptr_t slot) {
    auto* vtextemoticonscoreunicodeemoticonmanager = const_cast<VirtualTextEmoticonsCoreUnicodeEmoticonManager*>(dynamic_cast<const VirtualTextEmoticonsCoreUnicodeEmoticonManager*>(self));
    if (vtextemoticonscoreunicodeemoticonmanager && vtextemoticonscoreunicodeemoticonmanager->isVirtualTextEmoticonsCoreUnicodeEmoticonManager) {
        vtextemoticonscoreunicodeemoticonmanager->setTextEmoticonsCore__UnicodeEmoticonManager_SenderSignalIndex_Callback(reinterpret_cast<VirtualTextEmoticonsCoreUnicodeEmoticonManager::TextEmoticonsCore__UnicodeEmoticonManager_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int TextEmoticonsCore__UnicodeEmoticonManager_Receivers(const TextEmoticonsCore__UnicodeEmoticonManager* self, const char* signal) {
    auto* vtextemoticonscoreunicodeemoticonmanager = const_cast<VirtualTextEmoticonsCoreUnicodeEmoticonManager*>(dynamic_cast<const VirtualTextEmoticonsCoreUnicodeEmoticonManager*>(self));
    if (vtextemoticonscoreunicodeemoticonmanager && vtextemoticonscoreunicodeemoticonmanager->isVirtualTextEmoticonsCoreUnicodeEmoticonManager) {
        return vtextemoticonscoreunicodeemoticonmanager->receivers(signal);
    } else {
        return ((VirtualTextEmoticonsCoreUnicodeEmoticonManager*)self)->receivers(signal);
    }
}

// Base class handler implementation
int TextEmoticonsCore__UnicodeEmoticonManager_SuperReceivers(const TextEmoticonsCore__UnicodeEmoticonManager* self, const char* signal) {
    auto* vtextemoticonscoreunicodeemoticonmanager = const_cast<VirtualTextEmoticonsCoreUnicodeEmoticonManager*>(dynamic_cast<const VirtualTextEmoticonsCoreUnicodeEmoticonManager*>(self));
    if (vtextemoticonscoreunicodeemoticonmanager && vtextemoticonscoreunicodeemoticonmanager->isVirtualTextEmoticonsCoreUnicodeEmoticonManager) {
        vtextemoticonscoreunicodeemoticonmanager->setTextEmoticonsCore__UnicodeEmoticonManager_Receivers_IsBase(true);
        return vtextemoticonscoreunicodeemoticonmanager->receivers(signal);
    } else {
        return ((VirtualTextEmoticonsCoreUnicodeEmoticonManager*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__UnicodeEmoticonManager_OnReceivers(const TextEmoticonsCore__UnicodeEmoticonManager* self, intptr_t slot) {
    auto* vtextemoticonscoreunicodeemoticonmanager = const_cast<VirtualTextEmoticonsCoreUnicodeEmoticonManager*>(dynamic_cast<const VirtualTextEmoticonsCoreUnicodeEmoticonManager*>(self));
    if (vtextemoticonscoreunicodeemoticonmanager && vtextemoticonscoreunicodeemoticonmanager->isVirtualTextEmoticonsCoreUnicodeEmoticonManager) {
        vtextemoticonscoreunicodeemoticonmanager->setTextEmoticonsCore__UnicodeEmoticonManager_Receivers_Callback(reinterpret_cast<VirtualTextEmoticonsCoreUnicodeEmoticonManager::TextEmoticonsCore__UnicodeEmoticonManager_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextEmoticonsCore__UnicodeEmoticonManager_IsSignalConnected(const TextEmoticonsCore__UnicodeEmoticonManager* self, const QMetaMethod* signal) {
    auto* vtextemoticonscoreunicodeemoticonmanager = const_cast<VirtualTextEmoticonsCoreUnicodeEmoticonManager*>(dynamic_cast<const VirtualTextEmoticonsCoreUnicodeEmoticonManager*>(self));
    if (vtextemoticonscoreunicodeemoticonmanager && vtextemoticonscoreunicodeemoticonmanager->isVirtualTextEmoticonsCoreUnicodeEmoticonManager) {
        return vtextemoticonscoreunicodeemoticonmanager->isSignalConnected(*signal);
    } else {
        return ((VirtualTextEmoticonsCoreUnicodeEmoticonManager*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool TextEmoticonsCore__UnicodeEmoticonManager_SuperIsSignalConnected(const TextEmoticonsCore__UnicodeEmoticonManager* self, const QMetaMethod* signal) {
    auto* vtextemoticonscoreunicodeemoticonmanager = const_cast<VirtualTextEmoticonsCoreUnicodeEmoticonManager*>(dynamic_cast<const VirtualTextEmoticonsCoreUnicodeEmoticonManager*>(self));
    if (vtextemoticonscoreunicodeemoticonmanager && vtextemoticonscoreunicodeemoticonmanager->isVirtualTextEmoticonsCoreUnicodeEmoticonManager) {
        vtextemoticonscoreunicodeemoticonmanager->setTextEmoticonsCore__UnicodeEmoticonManager_IsSignalConnected_IsBase(true);
        return vtextemoticonscoreunicodeemoticonmanager->isSignalConnected(*signal);
    } else {
        return ((VirtualTextEmoticonsCoreUnicodeEmoticonManager*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__UnicodeEmoticonManager_OnIsSignalConnected(const TextEmoticonsCore__UnicodeEmoticonManager* self, intptr_t slot) {
    auto* vtextemoticonscoreunicodeemoticonmanager = const_cast<VirtualTextEmoticonsCoreUnicodeEmoticonManager*>(dynamic_cast<const VirtualTextEmoticonsCoreUnicodeEmoticonManager*>(self));
    if (vtextemoticonscoreunicodeemoticonmanager && vtextemoticonscoreunicodeemoticonmanager->isVirtualTextEmoticonsCoreUnicodeEmoticonManager) {
        vtextemoticonscoreunicodeemoticonmanager->setTextEmoticonsCore__UnicodeEmoticonManager_IsSignalConnected_Callback(reinterpret_cast<VirtualTextEmoticonsCoreUnicodeEmoticonManager::TextEmoticonsCore__UnicodeEmoticonManager_IsSignalConnected_Callback>(slot));
    }
}

void TextEmoticonsCore__UnicodeEmoticonManager_Delete(TextEmoticonsCore__UnicodeEmoticonManager* self) {
    delete self;
}
