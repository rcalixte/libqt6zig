#include <QChildEvent>
#include <QEvent>
#include <QIcon>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QTimerEvent>
#define WORKAROUND_INNER_CLASS_DEFINITION_TextEmoticonsCore__CustomEmojiIconManager
#include <customemojiiconmanager.h>
#include "libcustomemojiiconmanager.h"
#include "libcustomemojiiconmanager.hxx"

TextEmoticonsCore__CustomEmojiIconManager* TextEmoticonsCore__CustomEmojiIconManager_new() {
    return new VirtualTextEmoticonsCoreCustomEmojiIconManager();
}

TextEmoticonsCore__CustomEmojiIconManager* TextEmoticonsCore__CustomEmojiIconManager_new2(QObject* parent) {
    return new VirtualTextEmoticonsCoreCustomEmojiIconManager(parent);
}

QIcon* TextEmoticonsCore__CustomEmojiIconManager_GenerateIcon(TextEmoticonsCore__CustomEmojiIconManager* self, const libqt_string customIdentifier) {
    QString customIdentifier_QString = QString::fromUtf8(customIdentifier.data, customIdentifier.len);
    auto* vtextemoticonscore__customemojiiconmanager = dynamic_cast<VirtualTextEmoticonsCoreCustomEmojiIconManager*>(self);
    if (vtextemoticonscore__customemojiiconmanager && vtextemoticonscore__customemojiiconmanager->isVirtualTextEmoticonsCoreCustomEmojiIconManager) {
        return new QIcon(self->generateIcon(customIdentifier_QString));
    } else {
        return new QIcon(((VirtualTextEmoticonsCoreCustomEmojiIconManager*)self)->generateIcon(customIdentifier_QString));
    }
}

libqt_string TextEmoticonsCore__CustomEmojiIconManager_FileName(TextEmoticonsCore__CustomEmojiIconManager* self, const libqt_string customIdentifier) {
    QString customIdentifier_QString = QString::fromUtf8(customIdentifier.data, customIdentifier.len);
    auto* vtextemoticonscore__customemojiiconmanager = dynamic_cast<VirtualTextEmoticonsCoreCustomEmojiIconManager*>(self);
    if (vtextemoticonscore__customemojiiconmanager && vtextemoticonscore__customemojiiconmanager->isVirtualTextEmoticonsCoreCustomEmojiIconManager) {
        QString _ret = self->fileName(customIdentifier_QString);
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualTextEmoticonsCoreCustomEmojiIconManager*)self)->fileName(customIdentifier_QString);
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
QIcon* TextEmoticonsCore__CustomEmojiIconManager_SuperGenerateIcon(TextEmoticonsCore__CustomEmojiIconManager* self, const libqt_string customIdentifier) {
    auto* vtextemoticonscorecustomemojiiconmanager = dynamic_cast<VirtualTextEmoticonsCoreCustomEmojiIconManager*>(self);
    QString customIdentifier_QString = QString::fromUtf8(customIdentifier.data, customIdentifier.len);
    if (vtextemoticonscorecustomemojiiconmanager && vtextemoticonscorecustomemojiiconmanager->isVirtualTextEmoticonsCoreCustomEmojiIconManager) {
        vtextemoticonscorecustomemojiiconmanager->setTextEmoticonsCore__CustomEmojiIconManager_GenerateIcon_IsBase(true);
        return new QIcon(vtextemoticonscorecustomemojiiconmanager->generateIcon(customIdentifier_QString));
    } else {
        return new QIcon(((VirtualTextEmoticonsCoreCustomEmojiIconManager*)self)->generateIcon(customIdentifier_QString));
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__CustomEmojiIconManager_OnGenerateIcon(TextEmoticonsCore__CustomEmojiIconManager* self, intptr_t slot) {
    auto* vtextemoticonscorecustomemojiiconmanager = dynamic_cast<VirtualTextEmoticonsCoreCustomEmojiIconManager*>(self);
    if (vtextemoticonscorecustomemojiiconmanager && vtextemoticonscorecustomemojiiconmanager->isVirtualTextEmoticonsCoreCustomEmojiIconManager) {
        vtextemoticonscorecustomemojiiconmanager->setTextEmoticonsCore__CustomEmojiIconManager_GenerateIcon_Callback(reinterpret_cast<VirtualTextEmoticonsCoreCustomEmojiIconManager::TextEmoticonsCore__CustomEmojiIconManager_GenerateIcon_Callback>(slot));
    }
}

// Base class handler implementation
libqt_string TextEmoticonsCore__CustomEmojiIconManager_SuperFileName(TextEmoticonsCore__CustomEmojiIconManager* self, const libqt_string customIdentifier) {
    auto* vtextemoticonscorecustomemojiiconmanager = dynamic_cast<VirtualTextEmoticonsCoreCustomEmojiIconManager*>(self);
    QString customIdentifier_QString = QString::fromUtf8(customIdentifier.data, customIdentifier.len);
    if (vtextemoticonscorecustomemojiiconmanager && vtextemoticonscorecustomemojiiconmanager->isVirtualTextEmoticonsCoreCustomEmojiIconManager) {
        vtextemoticonscorecustomemojiiconmanager->setTextEmoticonsCore__CustomEmojiIconManager_FileName_IsBase(true);
        QString _ret = vtextemoticonscorecustomemojiiconmanager->fileName(customIdentifier_QString);
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = self->TextEmoticonsCore::CustomEmojiIconManager::fileName(customIdentifier_QString);
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
void TextEmoticonsCore__CustomEmojiIconManager_OnFileName(TextEmoticonsCore__CustomEmojiIconManager* self, intptr_t slot) {
    auto* vtextemoticonscorecustomemojiiconmanager = dynamic_cast<VirtualTextEmoticonsCoreCustomEmojiIconManager*>(self);
    if (vtextemoticonscorecustomemojiiconmanager && vtextemoticonscorecustomemojiiconmanager->isVirtualTextEmoticonsCoreCustomEmojiIconManager) {
        vtextemoticonscorecustomemojiiconmanager->setTextEmoticonsCore__CustomEmojiIconManager_FileName_Callback(reinterpret_cast<VirtualTextEmoticonsCoreCustomEmojiIconManager::TextEmoticonsCore__CustomEmojiIconManager_FileName_Callback>(slot));
    }
}

// Derived class handler implementation
QMetaObject* TextEmoticonsCore__CustomEmojiIconManager_MetaObject(const TextEmoticonsCore__CustomEmojiIconManager* self) {
    auto* vtextemoticonscorecustomemojiiconmanager = const_cast<VirtualTextEmoticonsCoreCustomEmojiIconManager*>(dynamic_cast<const VirtualTextEmoticonsCoreCustomEmojiIconManager*>(self));
    if (vtextemoticonscorecustomemojiiconmanager && vtextemoticonscorecustomemojiiconmanager->isVirtualTextEmoticonsCoreCustomEmojiIconManager) {
        return (QMetaObject*)vtextemoticonscorecustomemojiiconmanager->metaObject();
    } else {
        return (QMetaObject*)self->TextEmoticonsCore::CustomEmojiIconManager::metaObject();
    }
}

// Base class handler implementation
QMetaObject* TextEmoticonsCore__CustomEmojiIconManager_SuperMetaObject(const TextEmoticonsCore__CustomEmojiIconManager* self) {
    auto* vtextemoticonscorecustomemojiiconmanager = const_cast<VirtualTextEmoticonsCoreCustomEmojiIconManager*>(dynamic_cast<const VirtualTextEmoticonsCoreCustomEmojiIconManager*>(self));
    if (vtextemoticonscorecustomemojiiconmanager && vtextemoticonscorecustomemojiiconmanager->isVirtualTextEmoticonsCoreCustomEmojiIconManager) {
        vtextemoticonscorecustomemojiiconmanager->setTextEmoticonsCore__CustomEmojiIconManager_MetaObject_IsBase(true);
        return (QMetaObject*)vtextemoticonscorecustomemojiiconmanager->metaObject();
    } else {
        return (QMetaObject*)self->TextEmoticonsCore::CustomEmojiIconManager::metaObject();
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__CustomEmojiIconManager_OnMetaObject(const TextEmoticonsCore__CustomEmojiIconManager* self, intptr_t slot) {
    auto* vtextemoticonscorecustomemojiiconmanager = const_cast<VirtualTextEmoticonsCoreCustomEmojiIconManager*>(dynamic_cast<const VirtualTextEmoticonsCoreCustomEmojiIconManager*>(self));
    if (vtextemoticonscorecustomemojiiconmanager && vtextemoticonscorecustomemojiiconmanager->isVirtualTextEmoticonsCoreCustomEmojiIconManager) {
        vtextemoticonscorecustomemojiiconmanager->setTextEmoticonsCore__CustomEmojiIconManager_MetaObject_Callback(reinterpret_cast<VirtualTextEmoticonsCoreCustomEmojiIconManager::TextEmoticonsCore__CustomEmojiIconManager_MetaObject_Callback>(slot));
    }
}

// Derived class handler implementation
void* TextEmoticonsCore__CustomEmojiIconManager_Metacast(TextEmoticonsCore__CustomEmojiIconManager* self, const char* param1) {
    auto* vtextemoticonscorecustomemojiiconmanager = dynamic_cast<VirtualTextEmoticonsCoreCustomEmojiIconManager*>(self);
    if (vtextemoticonscorecustomemojiiconmanager && vtextemoticonscorecustomemojiiconmanager->isVirtualTextEmoticonsCoreCustomEmojiIconManager) {
        return vtextemoticonscorecustomemojiiconmanager->qt_metacast(param1);
    } else {
        return self->TextEmoticonsCore::CustomEmojiIconManager::qt_metacast(param1);
    }
}

// Base class handler implementation
void* TextEmoticonsCore__CustomEmojiIconManager_SuperMetacast(TextEmoticonsCore__CustomEmojiIconManager* self, const char* param1) {
    auto* vtextemoticonscorecustomemojiiconmanager = dynamic_cast<VirtualTextEmoticonsCoreCustomEmojiIconManager*>(self);
    if (vtextemoticonscorecustomemojiiconmanager && vtextemoticonscorecustomemojiiconmanager->isVirtualTextEmoticonsCoreCustomEmojiIconManager) {
        vtextemoticonscorecustomemojiiconmanager->setTextEmoticonsCore__CustomEmojiIconManager_Metacast_IsBase(true);
        return vtextemoticonscorecustomemojiiconmanager->qt_metacast(param1);
    } else {
        return self->TextEmoticonsCore::CustomEmojiIconManager::qt_metacast(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__CustomEmojiIconManager_OnMetacast(TextEmoticonsCore__CustomEmojiIconManager* self, intptr_t slot) {
    auto* vtextemoticonscorecustomemojiiconmanager = dynamic_cast<VirtualTextEmoticonsCoreCustomEmojiIconManager*>(self);
    if (vtextemoticonscorecustomemojiiconmanager && vtextemoticonscorecustomemojiiconmanager->isVirtualTextEmoticonsCoreCustomEmojiIconManager) {
        vtextemoticonscorecustomemojiiconmanager->setTextEmoticonsCore__CustomEmojiIconManager_Metacast_Callback(reinterpret_cast<VirtualTextEmoticonsCoreCustomEmojiIconManager::TextEmoticonsCore__CustomEmojiIconManager_Metacast_Callback>(slot));
    }
}

// Derived class handler implementation
int TextEmoticonsCore__CustomEmojiIconManager_Metacall(TextEmoticonsCore__CustomEmojiIconManager* self, int param1, int param2, void** param3) {
    auto* vtextemoticonscorecustomemojiiconmanager = dynamic_cast<VirtualTextEmoticonsCoreCustomEmojiIconManager*>(self);
    if (vtextemoticonscorecustomemojiiconmanager && vtextemoticonscorecustomemojiiconmanager->isVirtualTextEmoticonsCoreCustomEmojiIconManager) {
        return vtextemoticonscorecustomemojiiconmanager->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->TextEmoticonsCore::CustomEmojiIconManager::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Base class handler implementation
int TextEmoticonsCore__CustomEmojiIconManager_SuperMetacall(TextEmoticonsCore__CustomEmojiIconManager* self, int param1, int param2, void** param3) {
    auto* vtextemoticonscorecustomemojiiconmanager = dynamic_cast<VirtualTextEmoticonsCoreCustomEmojiIconManager*>(self);
    if (vtextemoticonscorecustomemojiiconmanager && vtextemoticonscorecustomemojiiconmanager->isVirtualTextEmoticonsCoreCustomEmojiIconManager) {
        vtextemoticonscorecustomemojiiconmanager->setTextEmoticonsCore__CustomEmojiIconManager_Metacall_IsBase(true);
        return vtextemoticonscorecustomemojiiconmanager->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->TextEmoticonsCore::CustomEmojiIconManager::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__CustomEmojiIconManager_OnMetacall(TextEmoticonsCore__CustomEmojiIconManager* self, intptr_t slot) {
    auto* vtextemoticonscorecustomemojiiconmanager = dynamic_cast<VirtualTextEmoticonsCoreCustomEmojiIconManager*>(self);
    if (vtextemoticonscorecustomemojiiconmanager && vtextemoticonscorecustomemojiiconmanager->isVirtualTextEmoticonsCoreCustomEmojiIconManager) {
        vtextemoticonscorecustomemojiiconmanager->setTextEmoticonsCore__CustomEmojiIconManager_Metacall_Callback(reinterpret_cast<VirtualTextEmoticonsCoreCustomEmojiIconManager::TextEmoticonsCore__CustomEmojiIconManager_Metacall_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextEmoticonsCore__CustomEmojiIconManager_Event(TextEmoticonsCore__CustomEmojiIconManager* self, QEvent* event) {
    auto* vtextemoticonscorecustomemojiiconmanager = dynamic_cast<VirtualTextEmoticonsCoreCustomEmojiIconManager*>(self);
    if (vtextemoticonscorecustomemojiiconmanager && vtextemoticonscorecustomemojiiconmanager->isVirtualTextEmoticonsCoreCustomEmojiIconManager) {
        return vtextemoticonscorecustomemojiiconmanager->event(event);
    } else {
        return self->TextEmoticonsCore::CustomEmojiIconManager::event(event);
    }
}

// Base class handler implementation
bool TextEmoticonsCore__CustomEmojiIconManager_SuperEvent(TextEmoticonsCore__CustomEmojiIconManager* self, QEvent* event) {
    auto* vtextemoticonscorecustomemojiiconmanager = dynamic_cast<VirtualTextEmoticonsCoreCustomEmojiIconManager*>(self);
    if (vtextemoticonscorecustomemojiiconmanager && vtextemoticonscorecustomemojiiconmanager->isVirtualTextEmoticonsCoreCustomEmojiIconManager) {
        vtextemoticonscorecustomemojiiconmanager->setTextEmoticonsCore__CustomEmojiIconManager_Event_IsBase(true);
        return vtextemoticonscorecustomemojiiconmanager->event(event);
    } else {
        return self->TextEmoticonsCore::CustomEmojiIconManager::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__CustomEmojiIconManager_OnEvent(TextEmoticonsCore__CustomEmojiIconManager* self, intptr_t slot) {
    auto* vtextemoticonscorecustomemojiiconmanager = dynamic_cast<VirtualTextEmoticonsCoreCustomEmojiIconManager*>(self);
    if (vtextemoticonscorecustomemojiiconmanager && vtextemoticonscorecustomemojiiconmanager->isVirtualTextEmoticonsCoreCustomEmojiIconManager) {
        vtextemoticonscorecustomemojiiconmanager->setTextEmoticonsCore__CustomEmojiIconManager_Event_Callback(reinterpret_cast<VirtualTextEmoticonsCoreCustomEmojiIconManager::TextEmoticonsCore__CustomEmojiIconManager_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextEmoticonsCore__CustomEmojiIconManager_EventFilter(TextEmoticonsCore__CustomEmojiIconManager* self, QObject* watched, QEvent* event) {
    auto* vtextemoticonscorecustomemojiiconmanager = dynamic_cast<VirtualTextEmoticonsCoreCustomEmojiIconManager*>(self);
    if (vtextemoticonscorecustomemojiiconmanager && vtextemoticonscorecustomemojiiconmanager->isVirtualTextEmoticonsCoreCustomEmojiIconManager) {
        return vtextemoticonscorecustomemojiiconmanager->eventFilter(watched, event);
    } else {
        return self->TextEmoticonsCore::CustomEmojiIconManager::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool TextEmoticonsCore__CustomEmojiIconManager_SuperEventFilter(TextEmoticonsCore__CustomEmojiIconManager* self, QObject* watched, QEvent* event) {
    auto* vtextemoticonscorecustomemojiiconmanager = dynamic_cast<VirtualTextEmoticonsCoreCustomEmojiIconManager*>(self);
    if (vtextemoticonscorecustomemojiiconmanager && vtextemoticonscorecustomemojiiconmanager->isVirtualTextEmoticonsCoreCustomEmojiIconManager) {
        vtextemoticonscorecustomemojiiconmanager->setTextEmoticonsCore__CustomEmojiIconManager_EventFilter_IsBase(true);
        return vtextemoticonscorecustomemojiiconmanager->eventFilter(watched, event);
    } else {
        return self->TextEmoticonsCore::CustomEmojiIconManager::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__CustomEmojiIconManager_OnEventFilter(TextEmoticonsCore__CustomEmojiIconManager* self, intptr_t slot) {
    auto* vtextemoticonscorecustomemojiiconmanager = dynamic_cast<VirtualTextEmoticonsCoreCustomEmojiIconManager*>(self);
    if (vtextemoticonscorecustomemojiiconmanager && vtextemoticonscorecustomemojiiconmanager->isVirtualTextEmoticonsCoreCustomEmojiIconManager) {
        vtextemoticonscorecustomemojiiconmanager->setTextEmoticonsCore__CustomEmojiIconManager_EventFilter_Callback(reinterpret_cast<VirtualTextEmoticonsCoreCustomEmojiIconManager::TextEmoticonsCore__CustomEmojiIconManager_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEmoticonsCore__CustomEmojiIconManager_TimerEvent(TextEmoticonsCore__CustomEmojiIconManager* self, QTimerEvent* event) {
    auto* vtextemoticonscorecustomemojiiconmanager = dynamic_cast<VirtualTextEmoticonsCoreCustomEmojiIconManager*>(self);
    if (vtextemoticonscorecustomemojiiconmanager && vtextemoticonscorecustomemojiiconmanager->isVirtualTextEmoticonsCoreCustomEmojiIconManager) {
        vtextemoticonscorecustomemojiiconmanager->timerEvent(event);
    } else {
        ((VirtualTextEmoticonsCoreCustomEmojiIconManager*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void TextEmoticonsCore__CustomEmojiIconManager_SuperTimerEvent(TextEmoticonsCore__CustomEmojiIconManager* self, QTimerEvent* event) {
    auto* vtextemoticonscorecustomemojiiconmanager = dynamic_cast<VirtualTextEmoticonsCoreCustomEmojiIconManager*>(self);
    if (vtextemoticonscorecustomemojiiconmanager && vtextemoticonscorecustomemojiiconmanager->isVirtualTextEmoticonsCoreCustomEmojiIconManager) {
        vtextemoticonscorecustomemojiiconmanager->setTextEmoticonsCore__CustomEmojiIconManager_TimerEvent_IsBase(true);
        vtextemoticonscorecustomemojiiconmanager->timerEvent(event);
    } else {
        ((VirtualTextEmoticonsCoreCustomEmojiIconManager*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__CustomEmojiIconManager_OnTimerEvent(TextEmoticonsCore__CustomEmojiIconManager* self, intptr_t slot) {
    auto* vtextemoticonscorecustomemojiiconmanager = dynamic_cast<VirtualTextEmoticonsCoreCustomEmojiIconManager*>(self);
    if (vtextemoticonscorecustomemojiiconmanager && vtextemoticonscorecustomemojiiconmanager->isVirtualTextEmoticonsCoreCustomEmojiIconManager) {
        vtextemoticonscorecustomemojiiconmanager->setTextEmoticonsCore__CustomEmojiIconManager_TimerEvent_Callback(reinterpret_cast<VirtualTextEmoticonsCoreCustomEmojiIconManager::TextEmoticonsCore__CustomEmojiIconManager_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEmoticonsCore__CustomEmojiIconManager_ChildEvent(TextEmoticonsCore__CustomEmojiIconManager* self, QChildEvent* event) {
    auto* vtextemoticonscorecustomemojiiconmanager = dynamic_cast<VirtualTextEmoticonsCoreCustomEmojiIconManager*>(self);
    if (vtextemoticonscorecustomemojiiconmanager && vtextemoticonscorecustomemojiiconmanager->isVirtualTextEmoticonsCoreCustomEmojiIconManager) {
        vtextemoticonscorecustomemojiiconmanager->childEvent(event);
    } else {
        ((VirtualTextEmoticonsCoreCustomEmojiIconManager*)self)->childEvent(event);
    }
}

// Base class handler implementation
void TextEmoticonsCore__CustomEmojiIconManager_SuperChildEvent(TextEmoticonsCore__CustomEmojiIconManager* self, QChildEvent* event) {
    auto* vtextemoticonscorecustomemojiiconmanager = dynamic_cast<VirtualTextEmoticonsCoreCustomEmojiIconManager*>(self);
    if (vtextemoticonscorecustomemojiiconmanager && vtextemoticonscorecustomemojiiconmanager->isVirtualTextEmoticonsCoreCustomEmojiIconManager) {
        vtextemoticonscorecustomemojiiconmanager->setTextEmoticonsCore__CustomEmojiIconManager_ChildEvent_IsBase(true);
        vtextemoticonscorecustomemojiiconmanager->childEvent(event);
    } else {
        ((VirtualTextEmoticonsCoreCustomEmojiIconManager*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__CustomEmojiIconManager_OnChildEvent(TextEmoticonsCore__CustomEmojiIconManager* self, intptr_t slot) {
    auto* vtextemoticonscorecustomemojiiconmanager = dynamic_cast<VirtualTextEmoticonsCoreCustomEmojiIconManager*>(self);
    if (vtextemoticonscorecustomemojiiconmanager && vtextemoticonscorecustomemojiiconmanager->isVirtualTextEmoticonsCoreCustomEmojiIconManager) {
        vtextemoticonscorecustomemojiiconmanager->setTextEmoticonsCore__CustomEmojiIconManager_ChildEvent_Callback(reinterpret_cast<VirtualTextEmoticonsCoreCustomEmojiIconManager::TextEmoticonsCore__CustomEmojiIconManager_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEmoticonsCore__CustomEmojiIconManager_CustomEvent(TextEmoticonsCore__CustomEmojiIconManager* self, QEvent* event) {
    auto* vtextemoticonscorecustomemojiiconmanager = dynamic_cast<VirtualTextEmoticonsCoreCustomEmojiIconManager*>(self);
    if (vtextemoticonscorecustomemojiiconmanager && vtextemoticonscorecustomemojiiconmanager->isVirtualTextEmoticonsCoreCustomEmojiIconManager) {
        vtextemoticonscorecustomemojiiconmanager->customEvent(event);
    } else {
        ((VirtualTextEmoticonsCoreCustomEmojiIconManager*)self)->customEvent(event);
    }
}

// Base class handler implementation
void TextEmoticonsCore__CustomEmojiIconManager_SuperCustomEvent(TextEmoticonsCore__CustomEmojiIconManager* self, QEvent* event) {
    auto* vtextemoticonscorecustomemojiiconmanager = dynamic_cast<VirtualTextEmoticonsCoreCustomEmojiIconManager*>(self);
    if (vtextemoticonscorecustomemojiiconmanager && vtextemoticonscorecustomemojiiconmanager->isVirtualTextEmoticonsCoreCustomEmojiIconManager) {
        vtextemoticonscorecustomemojiiconmanager->setTextEmoticonsCore__CustomEmojiIconManager_CustomEvent_IsBase(true);
        vtextemoticonscorecustomemojiiconmanager->customEvent(event);
    } else {
        ((VirtualTextEmoticonsCoreCustomEmojiIconManager*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__CustomEmojiIconManager_OnCustomEvent(TextEmoticonsCore__CustomEmojiIconManager* self, intptr_t slot) {
    auto* vtextemoticonscorecustomemojiiconmanager = dynamic_cast<VirtualTextEmoticonsCoreCustomEmojiIconManager*>(self);
    if (vtextemoticonscorecustomemojiiconmanager && vtextemoticonscorecustomemojiiconmanager->isVirtualTextEmoticonsCoreCustomEmojiIconManager) {
        vtextemoticonscorecustomemojiiconmanager->setTextEmoticonsCore__CustomEmojiIconManager_CustomEvent_Callback(reinterpret_cast<VirtualTextEmoticonsCoreCustomEmojiIconManager::TextEmoticonsCore__CustomEmojiIconManager_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEmoticonsCore__CustomEmojiIconManager_ConnectNotify(TextEmoticonsCore__CustomEmojiIconManager* self, const QMetaMethod* signal) {
    auto* vtextemoticonscorecustomemojiiconmanager = dynamic_cast<VirtualTextEmoticonsCoreCustomEmojiIconManager*>(self);
    if (vtextemoticonscorecustomemojiiconmanager && vtextemoticonscorecustomemojiiconmanager->isVirtualTextEmoticonsCoreCustomEmojiIconManager) {
        vtextemoticonscorecustomemojiiconmanager->connectNotify(*signal);
    } else {
        ((VirtualTextEmoticonsCoreCustomEmojiIconManager*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void TextEmoticonsCore__CustomEmojiIconManager_SuperConnectNotify(TextEmoticonsCore__CustomEmojiIconManager* self, const QMetaMethod* signal) {
    auto* vtextemoticonscorecustomemojiiconmanager = dynamic_cast<VirtualTextEmoticonsCoreCustomEmojiIconManager*>(self);
    if (vtextemoticonscorecustomemojiiconmanager && vtextemoticonscorecustomemojiiconmanager->isVirtualTextEmoticonsCoreCustomEmojiIconManager) {
        vtextemoticonscorecustomemojiiconmanager->setTextEmoticonsCore__CustomEmojiIconManager_ConnectNotify_IsBase(true);
        vtextemoticonscorecustomemojiiconmanager->connectNotify(*signal);
    } else {
        ((VirtualTextEmoticonsCoreCustomEmojiIconManager*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__CustomEmojiIconManager_OnConnectNotify(TextEmoticonsCore__CustomEmojiIconManager* self, intptr_t slot) {
    auto* vtextemoticonscorecustomemojiiconmanager = dynamic_cast<VirtualTextEmoticonsCoreCustomEmojiIconManager*>(self);
    if (vtextemoticonscorecustomemojiiconmanager && vtextemoticonscorecustomemojiiconmanager->isVirtualTextEmoticonsCoreCustomEmojiIconManager) {
        vtextemoticonscorecustomemojiiconmanager->setTextEmoticonsCore__CustomEmojiIconManager_ConnectNotify_Callback(reinterpret_cast<VirtualTextEmoticonsCoreCustomEmojiIconManager::TextEmoticonsCore__CustomEmojiIconManager_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEmoticonsCore__CustomEmojiIconManager_DisconnectNotify(TextEmoticonsCore__CustomEmojiIconManager* self, const QMetaMethod* signal) {
    auto* vtextemoticonscorecustomemojiiconmanager = dynamic_cast<VirtualTextEmoticonsCoreCustomEmojiIconManager*>(self);
    if (vtextemoticonscorecustomemojiiconmanager && vtextemoticonscorecustomemojiiconmanager->isVirtualTextEmoticonsCoreCustomEmojiIconManager) {
        vtextemoticonscorecustomemojiiconmanager->disconnectNotify(*signal);
    } else {
        ((VirtualTextEmoticonsCoreCustomEmojiIconManager*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void TextEmoticonsCore__CustomEmojiIconManager_SuperDisconnectNotify(TextEmoticonsCore__CustomEmojiIconManager* self, const QMetaMethod* signal) {
    auto* vtextemoticonscorecustomemojiiconmanager = dynamic_cast<VirtualTextEmoticonsCoreCustomEmojiIconManager*>(self);
    if (vtextemoticonscorecustomemojiiconmanager && vtextemoticonscorecustomemojiiconmanager->isVirtualTextEmoticonsCoreCustomEmojiIconManager) {
        vtextemoticonscorecustomemojiiconmanager->setTextEmoticonsCore__CustomEmojiIconManager_DisconnectNotify_IsBase(true);
        vtextemoticonscorecustomemojiiconmanager->disconnectNotify(*signal);
    } else {
        ((VirtualTextEmoticonsCoreCustomEmojiIconManager*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__CustomEmojiIconManager_OnDisconnectNotify(TextEmoticonsCore__CustomEmojiIconManager* self, intptr_t slot) {
    auto* vtextemoticonscorecustomemojiiconmanager = dynamic_cast<VirtualTextEmoticonsCoreCustomEmojiIconManager*>(self);
    if (vtextemoticonscorecustomemojiiconmanager && vtextemoticonscorecustomemojiiconmanager->isVirtualTextEmoticonsCoreCustomEmojiIconManager) {
        vtextemoticonscorecustomemojiiconmanager->setTextEmoticonsCore__CustomEmojiIconManager_DisconnectNotify_Callback(reinterpret_cast<VirtualTextEmoticonsCoreCustomEmojiIconManager::TextEmoticonsCore__CustomEmojiIconManager_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* TextEmoticonsCore__CustomEmojiIconManager_Sender(const TextEmoticonsCore__CustomEmojiIconManager* self) {
    auto* vtextemoticonscorecustomemojiiconmanager = const_cast<VirtualTextEmoticonsCoreCustomEmojiIconManager*>(dynamic_cast<const VirtualTextEmoticonsCoreCustomEmojiIconManager*>(self));
    if (vtextemoticonscorecustomemojiiconmanager && vtextemoticonscorecustomemojiiconmanager->isVirtualTextEmoticonsCoreCustomEmojiIconManager) {
        return vtextemoticonscorecustomemojiiconmanager->sender();
    } else {
        return ((VirtualTextEmoticonsCoreCustomEmojiIconManager*)self)->sender();
    }
}

// Base class handler implementation
QObject* TextEmoticonsCore__CustomEmojiIconManager_SuperSender(const TextEmoticonsCore__CustomEmojiIconManager* self) {
    auto* vtextemoticonscorecustomemojiiconmanager = const_cast<VirtualTextEmoticonsCoreCustomEmojiIconManager*>(dynamic_cast<const VirtualTextEmoticonsCoreCustomEmojiIconManager*>(self));
    if (vtextemoticonscorecustomemojiiconmanager && vtextemoticonscorecustomemojiiconmanager->isVirtualTextEmoticonsCoreCustomEmojiIconManager) {
        vtextemoticonscorecustomemojiiconmanager->setTextEmoticonsCore__CustomEmojiIconManager_Sender_IsBase(true);
        return vtextemoticonscorecustomemojiiconmanager->sender();
    } else {
        return ((VirtualTextEmoticonsCoreCustomEmojiIconManager*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__CustomEmojiIconManager_OnSender(const TextEmoticonsCore__CustomEmojiIconManager* self, intptr_t slot) {
    auto* vtextemoticonscorecustomemojiiconmanager = const_cast<VirtualTextEmoticonsCoreCustomEmojiIconManager*>(dynamic_cast<const VirtualTextEmoticonsCoreCustomEmojiIconManager*>(self));
    if (vtextemoticonscorecustomemojiiconmanager && vtextemoticonscorecustomemojiiconmanager->isVirtualTextEmoticonsCoreCustomEmojiIconManager) {
        vtextemoticonscorecustomemojiiconmanager->setTextEmoticonsCore__CustomEmojiIconManager_Sender_Callback(reinterpret_cast<VirtualTextEmoticonsCoreCustomEmojiIconManager::TextEmoticonsCore__CustomEmojiIconManager_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int TextEmoticonsCore__CustomEmojiIconManager_SenderSignalIndex(const TextEmoticonsCore__CustomEmojiIconManager* self) {
    auto* vtextemoticonscorecustomemojiiconmanager = const_cast<VirtualTextEmoticonsCoreCustomEmojiIconManager*>(dynamic_cast<const VirtualTextEmoticonsCoreCustomEmojiIconManager*>(self));
    if (vtextemoticonscorecustomemojiiconmanager && vtextemoticonscorecustomemojiiconmanager->isVirtualTextEmoticonsCoreCustomEmojiIconManager) {
        return vtextemoticonscorecustomemojiiconmanager->senderSignalIndex();
    } else {
        return ((VirtualTextEmoticonsCoreCustomEmojiIconManager*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int TextEmoticonsCore__CustomEmojiIconManager_SuperSenderSignalIndex(const TextEmoticonsCore__CustomEmojiIconManager* self) {
    auto* vtextemoticonscorecustomemojiiconmanager = const_cast<VirtualTextEmoticonsCoreCustomEmojiIconManager*>(dynamic_cast<const VirtualTextEmoticonsCoreCustomEmojiIconManager*>(self));
    if (vtextemoticonscorecustomemojiiconmanager && vtextemoticonscorecustomemojiiconmanager->isVirtualTextEmoticonsCoreCustomEmojiIconManager) {
        vtextemoticonscorecustomemojiiconmanager->setTextEmoticonsCore__CustomEmojiIconManager_SenderSignalIndex_IsBase(true);
        return vtextemoticonscorecustomemojiiconmanager->senderSignalIndex();
    } else {
        return ((VirtualTextEmoticonsCoreCustomEmojiIconManager*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__CustomEmojiIconManager_OnSenderSignalIndex(const TextEmoticonsCore__CustomEmojiIconManager* self, intptr_t slot) {
    auto* vtextemoticonscorecustomemojiiconmanager = const_cast<VirtualTextEmoticonsCoreCustomEmojiIconManager*>(dynamic_cast<const VirtualTextEmoticonsCoreCustomEmojiIconManager*>(self));
    if (vtextemoticonscorecustomemojiiconmanager && vtextemoticonscorecustomemojiiconmanager->isVirtualTextEmoticonsCoreCustomEmojiIconManager) {
        vtextemoticonscorecustomemojiiconmanager->setTextEmoticonsCore__CustomEmojiIconManager_SenderSignalIndex_Callback(reinterpret_cast<VirtualTextEmoticonsCoreCustomEmojiIconManager::TextEmoticonsCore__CustomEmojiIconManager_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int TextEmoticonsCore__CustomEmojiIconManager_Receivers(const TextEmoticonsCore__CustomEmojiIconManager* self, const char* signal) {
    auto* vtextemoticonscorecustomemojiiconmanager = const_cast<VirtualTextEmoticonsCoreCustomEmojiIconManager*>(dynamic_cast<const VirtualTextEmoticonsCoreCustomEmojiIconManager*>(self));
    if (vtextemoticonscorecustomemojiiconmanager && vtextemoticonscorecustomemojiiconmanager->isVirtualTextEmoticonsCoreCustomEmojiIconManager) {
        return vtextemoticonscorecustomemojiiconmanager->receivers(signal);
    } else {
        return ((VirtualTextEmoticonsCoreCustomEmojiIconManager*)self)->receivers(signal);
    }
}

// Base class handler implementation
int TextEmoticonsCore__CustomEmojiIconManager_SuperReceivers(const TextEmoticonsCore__CustomEmojiIconManager* self, const char* signal) {
    auto* vtextemoticonscorecustomemojiiconmanager = const_cast<VirtualTextEmoticonsCoreCustomEmojiIconManager*>(dynamic_cast<const VirtualTextEmoticonsCoreCustomEmojiIconManager*>(self));
    if (vtextemoticonscorecustomemojiiconmanager && vtextemoticonscorecustomemojiiconmanager->isVirtualTextEmoticonsCoreCustomEmojiIconManager) {
        vtextemoticonscorecustomemojiiconmanager->setTextEmoticonsCore__CustomEmojiIconManager_Receivers_IsBase(true);
        return vtextemoticonscorecustomemojiiconmanager->receivers(signal);
    } else {
        return ((VirtualTextEmoticonsCoreCustomEmojiIconManager*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__CustomEmojiIconManager_OnReceivers(const TextEmoticonsCore__CustomEmojiIconManager* self, intptr_t slot) {
    auto* vtextemoticonscorecustomemojiiconmanager = const_cast<VirtualTextEmoticonsCoreCustomEmojiIconManager*>(dynamic_cast<const VirtualTextEmoticonsCoreCustomEmojiIconManager*>(self));
    if (vtextemoticonscorecustomemojiiconmanager && vtextemoticonscorecustomemojiiconmanager->isVirtualTextEmoticonsCoreCustomEmojiIconManager) {
        vtextemoticonscorecustomemojiiconmanager->setTextEmoticonsCore__CustomEmojiIconManager_Receivers_Callback(reinterpret_cast<VirtualTextEmoticonsCoreCustomEmojiIconManager::TextEmoticonsCore__CustomEmojiIconManager_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextEmoticonsCore__CustomEmojiIconManager_IsSignalConnected(const TextEmoticonsCore__CustomEmojiIconManager* self, const QMetaMethod* signal) {
    auto* vtextemoticonscorecustomemojiiconmanager = const_cast<VirtualTextEmoticonsCoreCustomEmojiIconManager*>(dynamic_cast<const VirtualTextEmoticonsCoreCustomEmojiIconManager*>(self));
    if (vtextemoticonscorecustomemojiiconmanager && vtextemoticonscorecustomemojiiconmanager->isVirtualTextEmoticonsCoreCustomEmojiIconManager) {
        return vtextemoticonscorecustomemojiiconmanager->isSignalConnected(*signal);
    } else {
        return ((VirtualTextEmoticonsCoreCustomEmojiIconManager*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool TextEmoticonsCore__CustomEmojiIconManager_SuperIsSignalConnected(const TextEmoticonsCore__CustomEmojiIconManager* self, const QMetaMethod* signal) {
    auto* vtextemoticonscorecustomemojiiconmanager = const_cast<VirtualTextEmoticonsCoreCustomEmojiIconManager*>(dynamic_cast<const VirtualTextEmoticonsCoreCustomEmojiIconManager*>(self));
    if (vtextemoticonscorecustomemojiiconmanager && vtextemoticonscorecustomemojiiconmanager->isVirtualTextEmoticonsCoreCustomEmojiIconManager) {
        vtextemoticonscorecustomemojiiconmanager->setTextEmoticonsCore__CustomEmojiIconManager_IsSignalConnected_IsBase(true);
        return vtextemoticonscorecustomemojiiconmanager->isSignalConnected(*signal);
    } else {
        return ((VirtualTextEmoticonsCoreCustomEmojiIconManager*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__CustomEmojiIconManager_OnIsSignalConnected(const TextEmoticonsCore__CustomEmojiIconManager* self, intptr_t slot) {
    auto* vtextemoticonscorecustomemojiiconmanager = const_cast<VirtualTextEmoticonsCoreCustomEmojiIconManager*>(dynamic_cast<const VirtualTextEmoticonsCoreCustomEmojiIconManager*>(self));
    if (vtextemoticonscorecustomemojiiconmanager && vtextemoticonscorecustomemojiiconmanager->isVirtualTextEmoticonsCoreCustomEmojiIconManager) {
        vtextemoticonscorecustomemojiiconmanager->setTextEmoticonsCore__CustomEmojiIconManager_IsSignalConnected_Callback(reinterpret_cast<VirtualTextEmoticonsCoreCustomEmojiIconManager::TextEmoticonsCore__CustomEmojiIconManager_IsSignalConnected_Callback>(slot));
    }
}

void TextEmoticonsCore__CustomEmojiIconManager_Delete(TextEmoticonsCore__CustomEmojiIconManager* self) {
    delete self;
}
