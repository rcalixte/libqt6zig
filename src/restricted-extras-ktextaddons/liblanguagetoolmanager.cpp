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
    return (QMetaObject*)self->metaObject();
}

void* TextGrammarCheck__LanguageToolManager_Metacast(TextGrammarCheck__LanguageToolManager* self, const char* param1) {
    return self->qt_metacast(param1);
}

int TextGrammarCheck__LanguageToolManager_Metacall(TextGrammarCheck__LanguageToolManager* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string TextGrammarCheck__LanguageToolManager_Tr(const char* s) {
    auto _ret = TextGrammarCheck::LanguageToolManager::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

TextGrammarCheck__LanguageToolManager* TextGrammarCheck__LanguageToolManager_Self() {
    return TextGrammarCheck::LanguageToolManager::self();
}

QNetworkAccessManager* TextGrammarCheck__LanguageToolManager_NetworkAccessManager(const TextGrammarCheck__LanguageToolManager* self) {
    return self->networkAccessManager();
}

libqt_string TextGrammarCheck__LanguageToolManager_LanguageToolPath(const TextGrammarCheck__LanguageToolManager* self) {
    auto _ret = self->languageToolPath();
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
    auto _ret = self->language();
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
    auto _ret = self->languageToolCheckPath();
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
    auto _ret = self->languageToolLanguagesPath();
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
    auto _ret = TextGrammarCheck::LanguageToolManager::convertToLanguagePath(path_QString);
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

libqt_string TextGrammarCheck__LanguageToolManager_Tr2(const char* s, const char* c) {
    auto _ret = TextGrammarCheck::LanguageToolManager::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string TextGrammarCheck__LanguageToolManager_Tr3(const char* s, const char* c, int n) {
    auto _ret = TextGrammarCheck::LanguageToolManager::tr(s, c, static_cast<int>(n));
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
QMetaObject* TextGrammarCheck__LanguageToolManager_SuperMetaObject(const TextGrammarCheck__LanguageToolManager* self) {
    return (QMetaObject*)self->TextGrammarCheck::LanguageToolManager::metaObject();
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolManager_OnMetaObject(TextGrammarCheck__LanguageToolManager* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolmanager = const_cast<VirtualTextGrammarCheckLanguageToolManager*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolManager*>(self)))
        vtextgrammarchecklanguagetoolmanager->textgrammarcheck__languagetoolmanager_metaobject_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolManager::TextGrammarCheck__LanguageToolManager_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* TextGrammarCheck__LanguageToolManager_SuperMetacast(TextGrammarCheck__LanguageToolManager* self, const char* param1) {
    return self->TextGrammarCheck::LanguageToolManager::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolManager_OnMetacast(TextGrammarCheck__LanguageToolManager* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolmanager = dynamic_cast<VirtualTextGrammarCheckLanguageToolManager*>(self))
        vtextgrammarchecklanguagetoolmanager->textgrammarcheck__languagetoolmanager_metacast_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolManager::TextGrammarCheck__LanguageToolManager_Metacast_Callback>(slot);
}

// Base class handler implementation
int TextGrammarCheck__LanguageToolManager_SuperMetacall(TextGrammarCheck__LanguageToolManager* self, int param1, int param2, void** param3) {
    return self->TextGrammarCheck::LanguageToolManager::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolManager_OnMetacall(TextGrammarCheck__LanguageToolManager* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolmanager = dynamic_cast<VirtualTextGrammarCheckLanguageToolManager*>(self))
        vtextgrammarchecklanguagetoolmanager->textgrammarcheck__languagetoolmanager_metacall_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolManager::TextGrammarCheck__LanguageToolManager_Metacall_Callback>(slot);
}

// Derived class handler implementation
bool TextGrammarCheck__LanguageToolManager_Event(TextGrammarCheck__LanguageToolManager* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool TextGrammarCheck__LanguageToolManager_SuperEvent(TextGrammarCheck__LanguageToolManager* self, QEvent* event) {
    return self->TextGrammarCheck::LanguageToolManager::event(event);
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolManager_OnEvent(TextGrammarCheck__LanguageToolManager* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolmanager = dynamic_cast<VirtualTextGrammarCheckLanguageToolManager*>(self))
        vtextgrammarchecklanguagetoolmanager->textgrammarcheck__languagetoolmanager_event_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolManager::TextGrammarCheck__LanguageToolManager_Event_Callback>(slot);
}

// Derived class handler implementation
bool TextGrammarCheck__LanguageToolManager_EventFilter(TextGrammarCheck__LanguageToolManager* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool TextGrammarCheck__LanguageToolManager_SuperEventFilter(TextGrammarCheck__LanguageToolManager* self, QObject* watched, QEvent* event) {
    return self->TextGrammarCheck::LanguageToolManager::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolManager_OnEventFilter(TextGrammarCheck__LanguageToolManager* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolmanager = dynamic_cast<VirtualTextGrammarCheckLanguageToolManager*>(self))
        vtextgrammarchecklanguagetoolmanager->textgrammarcheck__languagetoolmanager_eventfilter_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolManager::TextGrammarCheck__LanguageToolManager_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolManager_TimerEvent(TextGrammarCheck__LanguageToolManager* self, QTimerEvent* event) {
    auto* vtextgrammarchecklanguagetoolmanager = dynamic_cast<VirtualTextGrammarCheckLanguageToolManager*>(self);
    if (vtextgrammarchecklanguagetoolmanager) {
        vtextgrammarchecklanguagetoolmanager->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolManager::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolManager_SuperTimerEvent(TextGrammarCheck__LanguageToolManager* self, QTimerEvent* event) {
    if (auto* vtextgrammarchecklanguagetoolmanager = dynamic_cast<VirtualTextGrammarCheckLanguageToolManager*>(self)) {
        vtextgrammarchecklanguagetoolmanager->TextGrammarCheck::LanguageToolManager::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolManager::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolManager_OnTimerEvent(TextGrammarCheck__LanguageToolManager* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolmanager = dynamic_cast<VirtualTextGrammarCheckLanguageToolManager*>(self))
        vtextgrammarchecklanguagetoolmanager->textgrammarcheck__languagetoolmanager_timerevent_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolManager::TextGrammarCheck__LanguageToolManager_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolManager_ChildEvent(TextGrammarCheck__LanguageToolManager* self, QChildEvent* event) {
    auto* vtextgrammarchecklanguagetoolmanager = dynamic_cast<VirtualTextGrammarCheckLanguageToolManager*>(self);
    if (vtextgrammarchecklanguagetoolmanager) {
        vtextgrammarchecklanguagetoolmanager->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolManager::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolManager_SuperChildEvent(TextGrammarCheck__LanguageToolManager* self, QChildEvent* event) {
    if (auto* vtextgrammarchecklanguagetoolmanager = dynamic_cast<VirtualTextGrammarCheckLanguageToolManager*>(self)) {
        vtextgrammarchecklanguagetoolmanager->TextGrammarCheck::LanguageToolManager::childEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolManager::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolManager_OnChildEvent(TextGrammarCheck__LanguageToolManager* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolmanager = dynamic_cast<VirtualTextGrammarCheckLanguageToolManager*>(self))
        vtextgrammarchecklanguagetoolmanager->textgrammarcheck__languagetoolmanager_childevent_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolManager::TextGrammarCheck__LanguageToolManager_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolManager_CustomEvent(TextGrammarCheck__LanguageToolManager* self, QEvent* event) {
    auto* vtextgrammarchecklanguagetoolmanager = dynamic_cast<VirtualTextGrammarCheckLanguageToolManager*>(self);
    if (vtextgrammarchecklanguagetoolmanager) {
        vtextgrammarchecklanguagetoolmanager->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolManager::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolManager_SuperCustomEvent(TextGrammarCheck__LanguageToolManager* self, QEvent* event) {
    if (auto* vtextgrammarchecklanguagetoolmanager = dynamic_cast<VirtualTextGrammarCheckLanguageToolManager*>(self)) {
        vtextgrammarchecklanguagetoolmanager->TextGrammarCheck::LanguageToolManager::customEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolManager::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolManager_OnCustomEvent(TextGrammarCheck__LanguageToolManager* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolmanager = dynamic_cast<VirtualTextGrammarCheckLanguageToolManager*>(self))
        vtextgrammarchecklanguagetoolmanager->textgrammarcheck__languagetoolmanager_customevent_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolManager::TextGrammarCheck__LanguageToolManager_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolManager_ConnectNotify(TextGrammarCheck__LanguageToolManager* self, const QMetaMethod* signal) {
    auto* vtextgrammarchecklanguagetoolmanager = dynamic_cast<VirtualTextGrammarCheckLanguageToolManager*>(self);
    if (vtextgrammarchecklanguagetoolmanager) {
        vtextgrammarchecklanguagetoolmanager->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolManager::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolManager_SuperConnectNotify(TextGrammarCheck__LanguageToolManager* self, const QMetaMethod* signal) {
    if (auto* vtextgrammarchecklanguagetoolmanager = dynamic_cast<VirtualTextGrammarCheckLanguageToolManager*>(self)) {
        vtextgrammarchecklanguagetoolmanager->TextGrammarCheck::LanguageToolManager::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolManager::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolManager_OnConnectNotify(TextGrammarCheck__LanguageToolManager* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolmanager = dynamic_cast<VirtualTextGrammarCheckLanguageToolManager*>(self))
        vtextgrammarchecklanguagetoolmanager->textgrammarcheck__languagetoolmanager_connectnotify_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolManager::TextGrammarCheck__LanguageToolManager_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolManager_DisconnectNotify(TextGrammarCheck__LanguageToolManager* self, const QMetaMethod* signal) {
    auto* vtextgrammarchecklanguagetoolmanager = dynamic_cast<VirtualTextGrammarCheckLanguageToolManager*>(self);
    if (vtextgrammarchecklanguagetoolmanager) {
        vtextgrammarchecklanguagetoolmanager->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolManager::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolManager_SuperDisconnectNotify(TextGrammarCheck__LanguageToolManager* self, const QMetaMethod* signal) {
    if (auto* vtextgrammarchecklanguagetoolmanager = dynamic_cast<VirtualTextGrammarCheckLanguageToolManager*>(self)) {
        vtextgrammarchecklanguagetoolmanager->TextGrammarCheck::LanguageToolManager::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolManager::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolManager_OnDisconnectNotify(TextGrammarCheck__LanguageToolManager* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolmanager = dynamic_cast<VirtualTextGrammarCheckLanguageToolManager*>(self))
        vtextgrammarchecklanguagetoolmanager->textgrammarcheck__languagetoolmanager_disconnectnotify_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolManager::TextGrammarCheck__LanguageToolManager_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* TextGrammarCheck__LanguageToolManager_Sender(const TextGrammarCheck__LanguageToolManager* self) {
    if (auto* vtextgrammarchecklanguagetoolmanager = const_cast<VirtualTextGrammarCheckLanguageToolManager*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolManager*>(self))) {
        return vtextgrammarchecklanguagetoolmanager->VirtualTextGrammarCheckLanguageToolManager::sender();
    } else
        qFatal("Error: Protected method TextGrammarCheck::LanguageToolManager::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int TextGrammarCheck__LanguageToolManager_SenderSignalIndex(const TextGrammarCheck__LanguageToolManager* self) {
    if (auto* vtextgrammarchecklanguagetoolmanager = const_cast<VirtualTextGrammarCheckLanguageToolManager*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolManager*>(self))) {
        return vtextgrammarchecklanguagetoolmanager->VirtualTextGrammarCheckLanguageToolManager::senderSignalIndex();
    } else
        qFatal("Error: Protected method TextGrammarCheck::LanguageToolManager::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int TextGrammarCheck__LanguageToolManager_Receivers(const TextGrammarCheck__LanguageToolManager* self, const char* signal) {
    if (auto* vtextgrammarchecklanguagetoolmanager = const_cast<VirtualTextGrammarCheckLanguageToolManager*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolManager*>(self))) {
        return vtextgrammarchecklanguagetoolmanager->VirtualTextGrammarCheckLanguageToolManager::receivers(signal);
    } else
        qFatal("Error: Protected method TextGrammarCheck::LanguageToolManager::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool TextGrammarCheck__LanguageToolManager_IsSignalConnected(const TextGrammarCheck__LanguageToolManager* self, const QMetaMethod* signal) {
    if (auto* vtextgrammarchecklanguagetoolmanager = const_cast<VirtualTextGrammarCheckLanguageToolManager*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolManager*>(self))) {
        return vtextgrammarchecklanguagetoolmanager->VirtualTextGrammarCheckLanguageToolManager::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method TextGrammarCheck::LanguageToolManager::isSignalConnected called without a directly constructed type");
}

void TextGrammarCheck__LanguageToolManager_Delete(TextGrammarCheck__LanguageToolManager* self) {
    delete self;
}
