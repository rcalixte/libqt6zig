#include <QChildEvent>
#include <QColor>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QNetworkAccessManager>
#include <QObject>
#include <QString>
#include <QTimerEvent>
#define WORKAROUND_INNER_CLASS_DEFINITION_TextGrammarCheck__LanguageToolManager
#include <languagetoolmanager.h>
#include "liblanguagetoolmanager.h"
#include "liblanguagetoolmanager.hxx"

TextGrammarCheck__LanguageToolManager* TextGrammarCheck__LanguageToolManager_new() {
    return new VirtualTextGrammarCheckLanguageToolManager();
}

TextGrammarCheck__LanguageToolManager* TextGrammarCheck__LanguageToolManager_new2(QObject* parent) {
    return new VirtualTextGrammarCheckLanguageToolManager(parent);
}

QMetaObject* TextGrammarCheck__LanguageToolManager_MetaObject(const TextGrammarCheck__LanguageToolManager* self) {
    auto* vtextgrammarcheck__languagetoolmanager = dynamic_cast<const VirtualTextGrammarCheckLanguageToolManager*>(self);
    if (vtextgrammarcheck__languagetoolmanager && vtextgrammarcheck__languagetoolmanager->isVirtualTextGrammarCheckLanguageToolManager) {
        return (QMetaObject*)self->metaObject();
    } else {
        return (QMetaObject*)((VirtualTextGrammarCheckLanguageToolManager*)self)->metaObject();
    }
}

void* TextGrammarCheck__LanguageToolManager_Metacast(TextGrammarCheck__LanguageToolManager* self, const char* param1) {
    auto* vtextgrammarcheck__languagetoolmanager = dynamic_cast<VirtualTextGrammarCheckLanguageToolManager*>(self);
    if (vtextgrammarcheck__languagetoolmanager && vtextgrammarcheck__languagetoolmanager->isVirtualTextGrammarCheckLanguageToolManager) {
        return self->qt_metacast(param1);
    } else {
        return ((VirtualTextGrammarCheckLanguageToolManager*)self)->qt_metacast(param1);
    }
}

int TextGrammarCheck__LanguageToolManager_Metacall(TextGrammarCheck__LanguageToolManager* self, int param1, int param2, void** param3) {
    auto* vtextgrammarcheck__languagetoolmanager = dynamic_cast<VirtualTextGrammarCheckLanguageToolManager*>(self);
    if (vtextgrammarcheck__languagetoolmanager && vtextgrammarcheck__languagetoolmanager->isVirtualTextGrammarCheckLanguageToolManager) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualTextGrammarCheckLanguageToolManager*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

TextGrammarCheck__LanguageToolManager* TextGrammarCheck__LanguageToolManager_Self() {
    return TextGrammarCheck::LanguageToolManager::self();
}

QNetworkAccessManager* TextGrammarCheck__LanguageToolManager_NetworkAccessManager(const TextGrammarCheck__LanguageToolManager* self) {
    return self->networkAccessManager();
}

libqt_string TextGrammarCheck__LanguageToolManager_LanguageToolPath(const TextGrammarCheck__LanguageToolManager* self) {
    QString _ret = self->languageToolPath();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void TextGrammarCheck__LanguageToolManager_SetLanguageToolPath(TextGrammarCheck__LanguageToolManager* self, const libqt_string path) {
    QString path_QString = QString::fromUtf8(path.data, path.len);
    self->setLanguageToolPath(path_QString);
}

void TextGrammarCheck__LanguageToolManager_LoadSettings(TextGrammarCheck__LanguageToolManager* self) {
    self->loadSettings();
}

void TextGrammarCheck__LanguageToolManager_SaveSettings(TextGrammarCheck__LanguageToolManager* self) {
    self->saveSettings();
}

libqt_string TextGrammarCheck__LanguageToolManager_Language(const TextGrammarCheck__LanguageToolManager* self) {
    QString _ret = self->language();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void TextGrammarCheck__LanguageToolManager_SetLanguage(TextGrammarCheck__LanguageToolManager* self, const libqt_string language) {
    QString language_QString = QString::fromUtf8(language.data, language.len);
    self->setLanguage(language_QString);
}

bool TextGrammarCheck__LanguageToolManager_UseLocalInstance(const TextGrammarCheck__LanguageToolManager* self) {
    return self->useLocalInstance();
}

void TextGrammarCheck__LanguageToolManager_SetUseLocalInstance(TextGrammarCheck__LanguageToolManager* self, bool useLocalInstance) {
    self->setUseLocalInstance(useLocalInstance);
}

libqt_string TextGrammarCheck__LanguageToolManager_LanguageToolCheckPath(const TextGrammarCheck__LanguageToolManager* self) {
    QString _ret = self->languageToolCheckPath();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string TextGrammarCheck__LanguageToolManager_LanguageToolLanguagesPath(const TextGrammarCheck__LanguageToolManager* self) {
    QString _ret = self->languageToolLanguagesPath();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string TextGrammarCheck__LanguageToolManager_ConvertToLanguagePath(const libqt_string path) {
    QString path_QString = QString::fromUtf8(path.data, path.len);
    QString _ret = TextGrammarCheck::LanguageToolManager::convertToLanguagePath(path_QString);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QColor* TextGrammarCheck__LanguageToolManager_GrammarColorForError(TextGrammarCheck__LanguageToolManager* self, const libqt_string errorVal) {
    QString errorVal_QString = QString::fromUtf8(errorVal.data, errorVal.len);
    return new QColor(self->grammarColorForError(errorVal_QString));
}

bool TextGrammarCheck__LanguageToolManager_AllowToGetListOfLanguages(const TextGrammarCheck__LanguageToolManager* self) {
    return self->allowToGetListOfLanguages();
}

// Base class handler implementation
QMetaObject* TextGrammarCheck__LanguageToolManager_SuperMetaObject(const TextGrammarCheck__LanguageToolManager* self) {
    auto* vtextgrammarchecklanguagetoolmanager = const_cast<VirtualTextGrammarCheckLanguageToolManager*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolManager*>(self));
    if (vtextgrammarchecklanguagetoolmanager && vtextgrammarchecklanguagetoolmanager->isVirtualTextGrammarCheckLanguageToolManager) {
        vtextgrammarchecklanguagetoolmanager->setTextGrammarCheck__LanguageToolManager_MetaObject_IsBase(true);
        return (QMetaObject*)vtextgrammarchecklanguagetoolmanager->metaObject();
    } else {
        return (QMetaObject*)self->TextGrammarCheck::LanguageToolManager::metaObject();
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolManager_OnMetaObject(const TextGrammarCheck__LanguageToolManager* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolmanager = const_cast<VirtualTextGrammarCheckLanguageToolManager*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolManager*>(self));
    if (vtextgrammarchecklanguagetoolmanager && vtextgrammarchecklanguagetoolmanager->isVirtualTextGrammarCheckLanguageToolManager) {
        vtextgrammarchecklanguagetoolmanager->setTextGrammarCheck__LanguageToolManager_MetaObject_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolManager::TextGrammarCheck__LanguageToolManager_MetaObject_Callback>(slot));
    }
}

// Base class handler implementation
void* TextGrammarCheck__LanguageToolManager_SuperMetacast(TextGrammarCheck__LanguageToolManager* self, const char* param1) {
    auto* vtextgrammarchecklanguagetoolmanager = dynamic_cast<VirtualTextGrammarCheckLanguageToolManager*>(self);
    if (vtextgrammarchecklanguagetoolmanager && vtextgrammarchecklanguagetoolmanager->isVirtualTextGrammarCheckLanguageToolManager) {
        vtextgrammarchecklanguagetoolmanager->setTextGrammarCheck__LanguageToolManager_Metacast_IsBase(true);
        return vtextgrammarchecklanguagetoolmanager->qt_metacast(param1);
    } else {
        return self->TextGrammarCheck::LanguageToolManager::qt_metacast(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolManager_OnMetacast(TextGrammarCheck__LanguageToolManager* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolmanager = dynamic_cast<VirtualTextGrammarCheckLanguageToolManager*>(self);
    if (vtextgrammarchecklanguagetoolmanager && vtextgrammarchecklanguagetoolmanager->isVirtualTextGrammarCheckLanguageToolManager) {
        vtextgrammarchecklanguagetoolmanager->setTextGrammarCheck__LanguageToolManager_Metacast_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolManager::TextGrammarCheck__LanguageToolManager_Metacast_Callback>(slot));
    }
}

// Base class handler implementation
int TextGrammarCheck__LanguageToolManager_SuperMetacall(TextGrammarCheck__LanguageToolManager* self, int param1, int param2, void** param3) {
    auto* vtextgrammarchecklanguagetoolmanager = dynamic_cast<VirtualTextGrammarCheckLanguageToolManager*>(self);
    if (vtextgrammarchecklanguagetoolmanager && vtextgrammarchecklanguagetoolmanager->isVirtualTextGrammarCheckLanguageToolManager) {
        vtextgrammarchecklanguagetoolmanager->setTextGrammarCheck__LanguageToolManager_Metacall_IsBase(true);
        return vtextgrammarchecklanguagetoolmanager->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->TextGrammarCheck::LanguageToolManager::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolManager_OnMetacall(TextGrammarCheck__LanguageToolManager* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolmanager = dynamic_cast<VirtualTextGrammarCheckLanguageToolManager*>(self);
    if (vtextgrammarchecklanguagetoolmanager && vtextgrammarchecklanguagetoolmanager->isVirtualTextGrammarCheckLanguageToolManager) {
        vtextgrammarchecklanguagetoolmanager->setTextGrammarCheck__LanguageToolManager_Metacall_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolManager::TextGrammarCheck__LanguageToolManager_Metacall_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextGrammarCheck__LanguageToolManager_Event(TextGrammarCheck__LanguageToolManager* self, QEvent* event) {
    auto* vtextgrammarchecklanguagetoolmanager = dynamic_cast<VirtualTextGrammarCheckLanguageToolManager*>(self);
    if (vtextgrammarchecklanguagetoolmanager && vtextgrammarchecklanguagetoolmanager->isVirtualTextGrammarCheckLanguageToolManager) {
        return vtextgrammarchecklanguagetoolmanager->event(event);
    } else {
        return self->TextGrammarCheck::LanguageToolManager::event(event);
    }
}

// Base class handler implementation
bool TextGrammarCheck__LanguageToolManager_SuperEvent(TextGrammarCheck__LanguageToolManager* self, QEvent* event) {
    auto* vtextgrammarchecklanguagetoolmanager = dynamic_cast<VirtualTextGrammarCheckLanguageToolManager*>(self);
    if (vtextgrammarchecklanguagetoolmanager && vtextgrammarchecklanguagetoolmanager->isVirtualTextGrammarCheckLanguageToolManager) {
        vtextgrammarchecklanguagetoolmanager->setTextGrammarCheck__LanguageToolManager_Event_IsBase(true);
        return vtextgrammarchecklanguagetoolmanager->event(event);
    } else {
        return self->TextGrammarCheck::LanguageToolManager::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolManager_OnEvent(TextGrammarCheck__LanguageToolManager* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolmanager = dynamic_cast<VirtualTextGrammarCheckLanguageToolManager*>(self);
    if (vtextgrammarchecklanguagetoolmanager && vtextgrammarchecklanguagetoolmanager->isVirtualTextGrammarCheckLanguageToolManager) {
        vtextgrammarchecklanguagetoolmanager->setTextGrammarCheck__LanguageToolManager_Event_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolManager::TextGrammarCheck__LanguageToolManager_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextGrammarCheck__LanguageToolManager_EventFilter(TextGrammarCheck__LanguageToolManager* self, QObject* watched, QEvent* event) {
    auto* vtextgrammarchecklanguagetoolmanager = dynamic_cast<VirtualTextGrammarCheckLanguageToolManager*>(self);
    if (vtextgrammarchecklanguagetoolmanager && vtextgrammarchecklanguagetoolmanager->isVirtualTextGrammarCheckLanguageToolManager) {
        return vtextgrammarchecklanguagetoolmanager->eventFilter(watched, event);
    } else {
        return self->TextGrammarCheck::LanguageToolManager::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool TextGrammarCheck__LanguageToolManager_SuperEventFilter(TextGrammarCheck__LanguageToolManager* self, QObject* watched, QEvent* event) {
    auto* vtextgrammarchecklanguagetoolmanager = dynamic_cast<VirtualTextGrammarCheckLanguageToolManager*>(self);
    if (vtextgrammarchecklanguagetoolmanager && vtextgrammarchecklanguagetoolmanager->isVirtualTextGrammarCheckLanguageToolManager) {
        vtextgrammarchecklanguagetoolmanager->setTextGrammarCheck__LanguageToolManager_EventFilter_IsBase(true);
        return vtextgrammarchecklanguagetoolmanager->eventFilter(watched, event);
    } else {
        return self->TextGrammarCheck::LanguageToolManager::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolManager_OnEventFilter(TextGrammarCheck__LanguageToolManager* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolmanager = dynamic_cast<VirtualTextGrammarCheckLanguageToolManager*>(self);
    if (vtextgrammarchecklanguagetoolmanager && vtextgrammarchecklanguagetoolmanager->isVirtualTextGrammarCheckLanguageToolManager) {
        vtextgrammarchecklanguagetoolmanager->setTextGrammarCheck__LanguageToolManager_EventFilter_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolManager::TextGrammarCheck__LanguageToolManager_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolManager_TimerEvent(TextGrammarCheck__LanguageToolManager* self, QTimerEvent* event) {
    auto* vtextgrammarchecklanguagetoolmanager = dynamic_cast<VirtualTextGrammarCheckLanguageToolManager*>(self);
    if (vtextgrammarchecklanguagetoolmanager && vtextgrammarchecklanguagetoolmanager->isVirtualTextGrammarCheckLanguageToolManager) {
        vtextgrammarchecklanguagetoolmanager->timerEvent(event);
    } else {
        ((VirtualTextGrammarCheckLanguageToolManager*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolManager_SuperTimerEvent(TextGrammarCheck__LanguageToolManager* self, QTimerEvent* event) {
    auto* vtextgrammarchecklanguagetoolmanager = dynamic_cast<VirtualTextGrammarCheckLanguageToolManager*>(self);
    if (vtextgrammarchecklanguagetoolmanager && vtextgrammarchecklanguagetoolmanager->isVirtualTextGrammarCheckLanguageToolManager) {
        vtextgrammarchecklanguagetoolmanager->setTextGrammarCheck__LanguageToolManager_TimerEvent_IsBase(true);
        vtextgrammarchecklanguagetoolmanager->timerEvent(event);
    } else {
        ((VirtualTextGrammarCheckLanguageToolManager*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolManager_OnTimerEvent(TextGrammarCheck__LanguageToolManager* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolmanager = dynamic_cast<VirtualTextGrammarCheckLanguageToolManager*>(self);
    if (vtextgrammarchecklanguagetoolmanager && vtextgrammarchecklanguagetoolmanager->isVirtualTextGrammarCheckLanguageToolManager) {
        vtextgrammarchecklanguagetoolmanager->setTextGrammarCheck__LanguageToolManager_TimerEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolManager::TextGrammarCheck__LanguageToolManager_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolManager_ChildEvent(TextGrammarCheck__LanguageToolManager* self, QChildEvent* event) {
    auto* vtextgrammarchecklanguagetoolmanager = dynamic_cast<VirtualTextGrammarCheckLanguageToolManager*>(self);
    if (vtextgrammarchecklanguagetoolmanager && vtextgrammarchecklanguagetoolmanager->isVirtualTextGrammarCheckLanguageToolManager) {
        vtextgrammarchecklanguagetoolmanager->childEvent(event);
    } else {
        ((VirtualTextGrammarCheckLanguageToolManager*)self)->childEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolManager_SuperChildEvent(TextGrammarCheck__LanguageToolManager* self, QChildEvent* event) {
    auto* vtextgrammarchecklanguagetoolmanager = dynamic_cast<VirtualTextGrammarCheckLanguageToolManager*>(self);
    if (vtextgrammarchecklanguagetoolmanager && vtextgrammarchecklanguagetoolmanager->isVirtualTextGrammarCheckLanguageToolManager) {
        vtextgrammarchecklanguagetoolmanager->setTextGrammarCheck__LanguageToolManager_ChildEvent_IsBase(true);
        vtextgrammarchecklanguagetoolmanager->childEvent(event);
    } else {
        ((VirtualTextGrammarCheckLanguageToolManager*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolManager_OnChildEvent(TextGrammarCheck__LanguageToolManager* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolmanager = dynamic_cast<VirtualTextGrammarCheckLanguageToolManager*>(self);
    if (vtextgrammarchecklanguagetoolmanager && vtextgrammarchecklanguagetoolmanager->isVirtualTextGrammarCheckLanguageToolManager) {
        vtextgrammarchecklanguagetoolmanager->setTextGrammarCheck__LanguageToolManager_ChildEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolManager::TextGrammarCheck__LanguageToolManager_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolManager_CustomEvent(TextGrammarCheck__LanguageToolManager* self, QEvent* event) {
    auto* vtextgrammarchecklanguagetoolmanager = dynamic_cast<VirtualTextGrammarCheckLanguageToolManager*>(self);
    if (vtextgrammarchecklanguagetoolmanager && vtextgrammarchecklanguagetoolmanager->isVirtualTextGrammarCheckLanguageToolManager) {
        vtextgrammarchecklanguagetoolmanager->customEvent(event);
    } else {
        ((VirtualTextGrammarCheckLanguageToolManager*)self)->customEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolManager_SuperCustomEvent(TextGrammarCheck__LanguageToolManager* self, QEvent* event) {
    auto* vtextgrammarchecklanguagetoolmanager = dynamic_cast<VirtualTextGrammarCheckLanguageToolManager*>(self);
    if (vtextgrammarchecklanguagetoolmanager && vtextgrammarchecklanguagetoolmanager->isVirtualTextGrammarCheckLanguageToolManager) {
        vtextgrammarchecklanguagetoolmanager->setTextGrammarCheck__LanguageToolManager_CustomEvent_IsBase(true);
        vtextgrammarchecklanguagetoolmanager->customEvent(event);
    } else {
        ((VirtualTextGrammarCheckLanguageToolManager*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolManager_OnCustomEvent(TextGrammarCheck__LanguageToolManager* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolmanager = dynamic_cast<VirtualTextGrammarCheckLanguageToolManager*>(self);
    if (vtextgrammarchecklanguagetoolmanager && vtextgrammarchecklanguagetoolmanager->isVirtualTextGrammarCheckLanguageToolManager) {
        vtextgrammarchecklanguagetoolmanager->setTextGrammarCheck__LanguageToolManager_CustomEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolManager::TextGrammarCheck__LanguageToolManager_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolManager_ConnectNotify(TextGrammarCheck__LanguageToolManager* self, const QMetaMethod* signal) {
    auto* vtextgrammarchecklanguagetoolmanager = dynamic_cast<VirtualTextGrammarCheckLanguageToolManager*>(self);
    if (vtextgrammarchecklanguagetoolmanager && vtextgrammarchecklanguagetoolmanager->isVirtualTextGrammarCheckLanguageToolManager) {
        vtextgrammarchecklanguagetoolmanager->connectNotify(*signal);
    } else {
        ((VirtualTextGrammarCheckLanguageToolManager*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolManager_SuperConnectNotify(TextGrammarCheck__LanguageToolManager* self, const QMetaMethod* signal) {
    auto* vtextgrammarchecklanguagetoolmanager = dynamic_cast<VirtualTextGrammarCheckLanguageToolManager*>(self);
    if (vtextgrammarchecklanguagetoolmanager && vtextgrammarchecklanguagetoolmanager->isVirtualTextGrammarCheckLanguageToolManager) {
        vtextgrammarchecklanguagetoolmanager->setTextGrammarCheck__LanguageToolManager_ConnectNotify_IsBase(true);
        vtextgrammarchecklanguagetoolmanager->connectNotify(*signal);
    } else {
        ((VirtualTextGrammarCheckLanguageToolManager*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolManager_OnConnectNotify(TextGrammarCheck__LanguageToolManager* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolmanager = dynamic_cast<VirtualTextGrammarCheckLanguageToolManager*>(self);
    if (vtextgrammarchecklanguagetoolmanager && vtextgrammarchecklanguagetoolmanager->isVirtualTextGrammarCheckLanguageToolManager) {
        vtextgrammarchecklanguagetoolmanager->setTextGrammarCheck__LanguageToolManager_ConnectNotify_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolManager::TextGrammarCheck__LanguageToolManager_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolManager_DisconnectNotify(TextGrammarCheck__LanguageToolManager* self, const QMetaMethod* signal) {
    auto* vtextgrammarchecklanguagetoolmanager = dynamic_cast<VirtualTextGrammarCheckLanguageToolManager*>(self);
    if (vtextgrammarchecklanguagetoolmanager && vtextgrammarchecklanguagetoolmanager->isVirtualTextGrammarCheckLanguageToolManager) {
        vtextgrammarchecklanguagetoolmanager->disconnectNotify(*signal);
    } else {
        ((VirtualTextGrammarCheckLanguageToolManager*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolManager_SuperDisconnectNotify(TextGrammarCheck__LanguageToolManager* self, const QMetaMethod* signal) {
    auto* vtextgrammarchecklanguagetoolmanager = dynamic_cast<VirtualTextGrammarCheckLanguageToolManager*>(self);
    if (vtextgrammarchecklanguagetoolmanager && vtextgrammarchecklanguagetoolmanager->isVirtualTextGrammarCheckLanguageToolManager) {
        vtextgrammarchecklanguagetoolmanager->setTextGrammarCheck__LanguageToolManager_DisconnectNotify_IsBase(true);
        vtextgrammarchecklanguagetoolmanager->disconnectNotify(*signal);
    } else {
        ((VirtualTextGrammarCheckLanguageToolManager*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolManager_OnDisconnectNotify(TextGrammarCheck__LanguageToolManager* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolmanager = dynamic_cast<VirtualTextGrammarCheckLanguageToolManager*>(self);
    if (vtextgrammarchecklanguagetoolmanager && vtextgrammarchecklanguagetoolmanager->isVirtualTextGrammarCheckLanguageToolManager) {
        vtextgrammarchecklanguagetoolmanager->setTextGrammarCheck__LanguageToolManager_DisconnectNotify_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolManager::TextGrammarCheck__LanguageToolManager_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* TextGrammarCheck__LanguageToolManager_Sender(const TextGrammarCheck__LanguageToolManager* self) {
    auto* vtextgrammarchecklanguagetoolmanager = const_cast<VirtualTextGrammarCheckLanguageToolManager*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolManager*>(self));
    if (vtextgrammarchecklanguagetoolmanager && vtextgrammarchecklanguagetoolmanager->isVirtualTextGrammarCheckLanguageToolManager) {
        return vtextgrammarchecklanguagetoolmanager->sender();
    } else {
        return ((VirtualTextGrammarCheckLanguageToolManager*)self)->sender();
    }
}

// Base class handler implementation
QObject* TextGrammarCheck__LanguageToolManager_SuperSender(const TextGrammarCheck__LanguageToolManager* self) {
    auto* vtextgrammarchecklanguagetoolmanager = const_cast<VirtualTextGrammarCheckLanguageToolManager*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolManager*>(self));
    if (vtextgrammarchecklanguagetoolmanager && vtextgrammarchecklanguagetoolmanager->isVirtualTextGrammarCheckLanguageToolManager) {
        vtextgrammarchecklanguagetoolmanager->setTextGrammarCheck__LanguageToolManager_Sender_IsBase(true);
        return vtextgrammarchecklanguagetoolmanager->sender();
    } else {
        return ((VirtualTextGrammarCheckLanguageToolManager*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolManager_OnSender(const TextGrammarCheck__LanguageToolManager* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolmanager = const_cast<VirtualTextGrammarCheckLanguageToolManager*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolManager*>(self));
    if (vtextgrammarchecklanguagetoolmanager && vtextgrammarchecklanguagetoolmanager->isVirtualTextGrammarCheckLanguageToolManager) {
        vtextgrammarchecklanguagetoolmanager->setTextGrammarCheck__LanguageToolManager_Sender_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolManager::TextGrammarCheck__LanguageToolManager_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int TextGrammarCheck__LanguageToolManager_SenderSignalIndex(const TextGrammarCheck__LanguageToolManager* self) {
    auto* vtextgrammarchecklanguagetoolmanager = const_cast<VirtualTextGrammarCheckLanguageToolManager*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolManager*>(self));
    if (vtextgrammarchecklanguagetoolmanager && vtextgrammarchecklanguagetoolmanager->isVirtualTextGrammarCheckLanguageToolManager) {
        return vtextgrammarchecklanguagetoolmanager->senderSignalIndex();
    } else {
        return ((VirtualTextGrammarCheckLanguageToolManager*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int TextGrammarCheck__LanguageToolManager_SuperSenderSignalIndex(const TextGrammarCheck__LanguageToolManager* self) {
    auto* vtextgrammarchecklanguagetoolmanager = const_cast<VirtualTextGrammarCheckLanguageToolManager*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolManager*>(self));
    if (vtextgrammarchecklanguagetoolmanager && vtextgrammarchecklanguagetoolmanager->isVirtualTextGrammarCheckLanguageToolManager) {
        vtextgrammarchecklanguagetoolmanager->setTextGrammarCheck__LanguageToolManager_SenderSignalIndex_IsBase(true);
        return vtextgrammarchecklanguagetoolmanager->senderSignalIndex();
    } else {
        return ((VirtualTextGrammarCheckLanguageToolManager*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolManager_OnSenderSignalIndex(const TextGrammarCheck__LanguageToolManager* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolmanager = const_cast<VirtualTextGrammarCheckLanguageToolManager*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolManager*>(self));
    if (vtextgrammarchecklanguagetoolmanager && vtextgrammarchecklanguagetoolmanager->isVirtualTextGrammarCheckLanguageToolManager) {
        vtextgrammarchecklanguagetoolmanager->setTextGrammarCheck__LanguageToolManager_SenderSignalIndex_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolManager::TextGrammarCheck__LanguageToolManager_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int TextGrammarCheck__LanguageToolManager_Receivers(const TextGrammarCheck__LanguageToolManager* self, const char* signal) {
    auto* vtextgrammarchecklanguagetoolmanager = const_cast<VirtualTextGrammarCheckLanguageToolManager*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolManager*>(self));
    if (vtextgrammarchecklanguagetoolmanager && vtextgrammarchecklanguagetoolmanager->isVirtualTextGrammarCheckLanguageToolManager) {
        return vtextgrammarchecklanguagetoolmanager->receivers(signal);
    } else {
        return ((VirtualTextGrammarCheckLanguageToolManager*)self)->receivers(signal);
    }
}

// Base class handler implementation
int TextGrammarCheck__LanguageToolManager_SuperReceivers(const TextGrammarCheck__LanguageToolManager* self, const char* signal) {
    auto* vtextgrammarchecklanguagetoolmanager = const_cast<VirtualTextGrammarCheckLanguageToolManager*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolManager*>(self));
    if (vtextgrammarchecklanguagetoolmanager && vtextgrammarchecklanguagetoolmanager->isVirtualTextGrammarCheckLanguageToolManager) {
        vtextgrammarchecklanguagetoolmanager->setTextGrammarCheck__LanguageToolManager_Receivers_IsBase(true);
        return vtextgrammarchecklanguagetoolmanager->receivers(signal);
    } else {
        return ((VirtualTextGrammarCheckLanguageToolManager*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolManager_OnReceivers(const TextGrammarCheck__LanguageToolManager* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolmanager = const_cast<VirtualTextGrammarCheckLanguageToolManager*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolManager*>(self));
    if (vtextgrammarchecklanguagetoolmanager && vtextgrammarchecklanguagetoolmanager->isVirtualTextGrammarCheckLanguageToolManager) {
        vtextgrammarchecklanguagetoolmanager->setTextGrammarCheck__LanguageToolManager_Receivers_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolManager::TextGrammarCheck__LanguageToolManager_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextGrammarCheck__LanguageToolManager_IsSignalConnected(const TextGrammarCheck__LanguageToolManager* self, const QMetaMethod* signal) {
    auto* vtextgrammarchecklanguagetoolmanager = const_cast<VirtualTextGrammarCheckLanguageToolManager*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolManager*>(self));
    if (vtextgrammarchecklanguagetoolmanager && vtextgrammarchecklanguagetoolmanager->isVirtualTextGrammarCheckLanguageToolManager) {
        return vtextgrammarchecklanguagetoolmanager->isSignalConnected(*signal);
    } else {
        return ((VirtualTextGrammarCheckLanguageToolManager*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool TextGrammarCheck__LanguageToolManager_SuperIsSignalConnected(const TextGrammarCheck__LanguageToolManager* self, const QMetaMethod* signal) {
    auto* vtextgrammarchecklanguagetoolmanager = const_cast<VirtualTextGrammarCheckLanguageToolManager*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolManager*>(self));
    if (vtextgrammarchecklanguagetoolmanager && vtextgrammarchecklanguagetoolmanager->isVirtualTextGrammarCheckLanguageToolManager) {
        vtextgrammarchecklanguagetoolmanager->setTextGrammarCheck__LanguageToolManager_IsSignalConnected_IsBase(true);
        return vtextgrammarchecklanguagetoolmanager->isSignalConnected(*signal);
    } else {
        return ((VirtualTextGrammarCheckLanguageToolManager*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolManager_OnIsSignalConnected(const TextGrammarCheck__LanguageToolManager* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolmanager = const_cast<VirtualTextGrammarCheckLanguageToolManager*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolManager*>(self));
    if (vtextgrammarchecklanguagetoolmanager && vtextgrammarchecklanguagetoolmanager->isVirtualTextGrammarCheckLanguageToolManager) {
        vtextgrammarchecklanguagetoolmanager->setTextGrammarCheck__LanguageToolManager_IsSignalConnected_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolManager::TextGrammarCheck__LanguageToolManager_IsSignalConnected_Callback>(slot));
    }
}

void TextGrammarCheck__LanguageToolManager_Delete(TextGrammarCheck__LanguageToolManager* self) {
    delete self;
}
