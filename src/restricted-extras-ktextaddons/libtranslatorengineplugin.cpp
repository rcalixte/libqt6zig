#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QTimerEvent>
#define WORKAROUND_INNER_CLASS_DEFINITION_TextTranslator__TranslatorEnginePlugin
#include <translatorengineplugin.h>
#include "libtranslatorengineplugin.h"
#include "libtranslatorengineplugin.hxx"

TextTranslator__TranslatorEnginePlugin* TextTranslator__TranslatorEnginePlugin_new() {
    return new VirtualTextTranslatorTranslatorEnginePlugin();
}

TextTranslator__TranslatorEnginePlugin* TextTranslator__TranslatorEnginePlugin_new2(QObject* parent) {
    return new VirtualTextTranslatorTranslatorEnginePlugin(parent);
}

QMetaObject* TextTranslator__TranslatorEnginePlugin_MetaObject(const TextTranslator__TranslatorEnginePlugin* self) {
    return (QMetaObject*)self->metaObject();
}

void* TextTranslator__TranslatorEnginePlugin_Metacast(TextTranslator__TranslatorEnginePlugin* self, const char* param1) {
    return self->qt_metacast(param1);
}

int TextTranslator__TranslatorEnginePlugin_Metacall(TextTranslator__TranslatorEnginePlugin* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string TextTranslator__TranslatorEnginePlugin_Tr(const char* s) {
    auto _ret = TextTranslator::TranslatorEnginePlugin::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void TextTranslator__TranslatorEnginePlugin_Translate(TextTranslator__TranslatorEnginePlugin* self) {
    self->translate();
}

libqt_string TextTranslator__TranslatorEnginePlugin_ResultTranslate(const TextTranslator__TranslatorEnginePlugin* self) {
    auto _ret = self->resultTranslate();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void TextTranslator__TranslatorEnginePlugin_SetInputText(TextTranslator__TranslatorEnginePlugin* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->setInputText(text_QString);
}

void TextTranslator__TranslatorEnginePlugin_SetFrom(TextTranslator__TranslatorEnginePlugin* self, const libqt_string language) {
    QString language_QString = QString::fromUtf8(language.data, language.len);
    self->setFrom(language_QString);
}

void TextTranslator__TranslatorEnginePlugin_SetTo(TextTranslator__TranslatorEnginePlugin* self, const libqt_string language) {
    QString language_QString = QString::fromUtf8(language.data, language.len);
    self->setTo(language_QString);
}

void TextTranslator__TranslatorEnginePlugin_SetResult(TextTranslator__TranslatorEnginePlugin* self, const libqt_string result) {
    QString result_QString = QString::fromUtf8(result.data, result.len);
    self->setResult(result_QString);
}

void TextTranslator__TranslatorEnginePlugin_SetJsonDebug(TextTranslator__TranslatorEnginePlugin* self, const libqt_string debug) {
    QString debug_QString = QString::fromUtf8(debug.data, debug.len);
    self->setJsonDebug(debug_QString);
}

libqt_string TextTranslator__TranslatorEnginePlugin_InputText(const TextTranslator__TranslatorEnginePlugin* self) {
    auto _ret = self->inputText();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string TextTranslator__TranslatorEnginePlugin_From(const TextTranslator__TranslatorEnginePlugin* self) {
    auto _ret = self->from();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string TextTranslator__TranslatorEnginePlugin_To(const TextTranslator__TranslatorEnginePlugin* self) {
    auto _ret = self->to();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string TextTranslator__TranslatorEnginePlugin_Result(const TextTranslator__TranslatorEnginePlugin* self) {
    auto _ret = self->result();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string TextTranslator__TranslatorEnginePlugin_JsonDebug(const TextTranslator__TranslatorEnginePlugin* self) {
    auto _ret = self->jsonDebug();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void TextTranslator__TranslatorEnginePlugin_Clear(TextTranslator__TranslatorEnginePlugin* self) {
    self->clear();
}

void TextTranslator__TranslatorEnginePlugin_TranslateDone(TextTranslator__TranslatorEnginePlugin* self) {
    self->translateDone();
}

void TextTranslator__TranslatorEnginePlugin_Connect_TranslateDone(TextTranslator__TranslatorEnginePlugin* self, intptr_t slot) {
    void (*slotFunc)(TextTranslator__TranslatorEnginePlugin*) = reinterpret_cast<void (*)(TextTranslator__TranslatorEnginePlugin*)>(slot);
    TextTranslator::TranslatorEnginePlugin::connect(self,
                                                    static_cast<void (TextTranslator::TranslatorEnginePlugin::*)()>(&TextTranslator::TranslatorEnginePlugin::translateDone),
                                                    [self, slotFunc]() {
                                                        slotFunc(self);
                                                    });
}

void TextTranslator__TranslatorEnginePlugin_TranslateFailed(TextTranslator__TranslatorEnginePlugin* self, const libqt_string errorMessage) {
    QString errorMessage_QString = QString::fromUtf8(errorMessage.data, errorMessage.len);
    self->translateFailed(errorMessage_QString);
}

void TextTranslator__TranslatorEnginePlugin_Connect_TranslateFailed(TextTranslator__TranslatorEnginePlugin* self, intptr_t slot) {
    void (*slotFunc)(TextTranslator__TranslatorEnginePlugin*, const char*) = reinterpret_cast<void (*)(TextTranslator__TranslatorEnginePlugin*, const char*)>(slot);
    TextTranslator::TranslatorEnginePlugin::connect(self,
                                                    static_cast<void (TextTranslator::TranslatorEnginePlugin::*)(const QString&)>(&TextTranslator::TranslatorEnginePlugin::translateFailed),
                                                    [self, slotFunc](const QString& errorMessage) {
                                                        const auto errorMessage_ret = errorMessage;
                                                        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
                                                        QByteArray errorMessage_b = errorMessage_ret.toUtf8();
                                                        auto errorMessage_str_len = errorMessage_b.length();
                                                        const char* errorMessage_str = static_cast<const char*>(malloc(errorMessage_str_len + 1));
                                                        memcpy((void*)errorMessage_str, errorMessage_b.data(), errorMessage_str_len);
                                                        ((char*)errorMessage_str)[errorMessage_str_len] = '\0';
                                                        const char* sigval1 = errorMessage_str;
                                                        slotFunc(self, sigval1);
                                                        libqt_free(errorMessage_str);
                                                    });
}

void TextTranslator__TranslatorEnginePlugin_LanguagesChanged(TextTranslator__TranslatorEnginePlugin* self) {
    self->languagesChanged();
}

void TextTranslator__TranslatorEnginePlugin_Connect_LanguagesChanged(TextTranslator__TranslatorEnginePlugin* self, intptr_t slot) {
    void (*slotFunc)(TextTranslator__TranslatorEnginePlugin*) = reinterpret_cast<void (*)(TextTranslator__TranslatorEnginePlugin*)>(slot);
    TextTranslator::TranslatorEnginePlugin::connect(self,
                                                    static_cast<void (TextTranslator::TranslatorEnginePlugin::*)()>(&TextTranslator::TranslatorEnginePlugin::languagesChanged),
                                                    [self, slotFunc]() {
                                                        slotFunc(self);
                                                    });
}

libqt_string TextTranslator__TranslatorEnginePlugin_LanguageCode(TextTranslator__TranslatorEnginePlugin* self, const libqt_string langStr) {
    QString langStr_QString = QString::fromUtf8(langStr.data, langStr.len);
    auto* vtexttranslator__translatorengineplugin = dynamic_cast<VirtualTextTranslatorTranslatorEnginePlugin*>(self);
    if (vtexttranslator__translatorengineplugin) {
        auto _ret = vtexttranslator__translatorengineplugin->languageCode(langStr_QString);
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
    qFatal("Error: Protected method TextTranslator::TranslatorEnginePlugin::languageCode called without a directly constructed type");
}

libqt_string TextTranslator__TranslatorEnginePlugin_Tr2(const char* s, const char* c) {
    auto _ret = TextTranslator::TranslatorEnginePlugin::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string TextTranslator__TranslatorEnginePlugin_Tr3(const char* s, const char* c, int n) {
    auto _ret = TextTranslator::TranslatorEnginePlugin::tr(s, c, static_cast<int>(n));
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
QMetaObject* TextTranslator__TranslatorEnginePlugin_SuperMetaObject(const TextTranslator__TranslatorEnginePlugin* self) {
    return (QMetaObject*)self->TextTranslator::TranslatorEnginePlugin::metaObject();
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorEnginePlugin_OnMetaObject(TextTranslator__TranslatorEnginePlugin* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorengineplugin = const_cast<VirtualTextTranslatorTranslatorEnginePlugin*>(dynamic_cast<const VirtualTextTranslatorTranslatorEnginePlugin*>(self)))
        vtexttranslatortranslatorengineplugin->texttranslator__translatorengineplugin_metaobject_callback = reinterpret_cast<VirtualTextTranslatorTranslatorEnginePlugin::TextTranslator__TranslatorEnginePlugin_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* TextTranslator__TranslatorEnginePlugin_SuperMetacast(TextTranslator__TranslatorEnginePlugin* self, const char* param1) {
    return self->TextTranslator::TranslatorEnginePlugin::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorEnginePlugin_OnMetacast(TextTranslator__TranslatorEnginePlugin* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorengineplugin = dynamic_cast<VirtualTextTranslatorTranslatorEnginePlugin*>(self))
        vtexttranslatortranslatorengineplugin->texttranslator__translatorengineplugin_metacast_callback = reinterpret_cast<VirtualTextTranslatorTranslatorEnginePlugin::TextTranslator__TranslatorEnginePlugin_Metacast_Callback>(slot);
}

// Base class handler implementation
int TextTranslator__TranslatorEnginePlugin_SuperMetacall(TextTranslator__TranslatorEnginePlugin* self, int param1, int param2, void** param3) {
    return self->TextTranslator::TranslatorEnginePlugin::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorEnginePlugin_OnMetacall(TextTranslator__TranslatorEnginePlugin* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorengineplugin = dynamic_cast<VirtualTextTranslatorTranslatorEnginePlugin*>(self))
        vtexttranslatortranslatorengineplugin->texttranslator__translatorengineplugin_metacall_callback = reinterpret_cast<VirtualTextTranslatorTranslatorEnginePlugin::TextTranslator__TranslatorEnginePlugin_Metacall_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorEnginePlugin_OnTranslate(TextTranslator__TranslatorEnginePlugin* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorengineplugin = dynamic_cast<VirtualTextTranslatorTranslatorEnginePlugin*>(self))
        vtexttranslatortranslatorengineplugin->texttranslator__translatorengineplugin_translate_callback = reinterpret_cast<VirtualTextTranslatorTranslatorEnginePlugin::TextTranslator__TranslatorEnginePlugin_Translate_Callback>(slot);
}

// Base class handler implementation
libqt_string TextTranslator__TranslatorEnginePlugin_SuperLanguageCode(TextTranslator__TranslatorEnginePlugin* self, const libqt_string langStr) {
    QString langStr_QString = QString::fromUtf8(langStr.data, langStr.len);
    if (auto* vtexttranslatortranslatorengineplugin = dynamic_cast<VirtualTextTranslatorTranslatorEnginePlugin*>(self)) {
        auto _ret = vtexttranslatortranslatorengineplugin->TextTranslator::TranslatorEnginePlugin::languageCode(langStr_QString);
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorEnginePlugin::languageCode called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorEnginePlugin_OnLanguageCode(TextTranslator__TranslatorEnginePlugin* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorengineplugin = dynamic_cast<VirtualTextTranslatorTranslatorEnginePlugin*>(self))
        vtexttranslatortranslatorengineplugin->texttranslator__translatorengineplugin_languagecode_callback = reinterpret_cast<VirtualTextTranslatorTranslatorEnginePlugin::TextTranslator__TranslatorEnginePlugin_LanguageCode_Callback>(slot);
}

// Derived class handler implementation
bool TextTranslator__TranslatorEnginePlugin_Event(TextTranslator__TranslatorEnginePlugin* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool TextTranslator__TranslatorEnginePlugin_SuperEvent(TextTranslator__TranslatorEnginePlugin* self, QEvent* event) {
    return self->TextTranslator::TranslatorEnginePlugin::event(event);
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorEnginePlugin_OnEvent(TextTranslator__TranslatorEnginePlugin* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorengineplugin = dynamic_cast<VirtualTextTranslatorTranslatorEnginePlugin*>(self))
        vtexttranslatortranslatorengineplugin->texttranslator__translatorengineplugin_event_callback = reinterpret_cast<VirtualTextTranslatorTranslatorEnginePlugin::TextTranslator__TranslatorEnginePlugin_Event_Callback>(slot);
}

// Derived class handler implementation
bool TextTranslator__TranslatorEnginePlugin_EventFilter(TextTranslator__TranslatorEnginePlugin* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool TextTranslator__TranslatorEnginePlugin_SuperEventFilter(TextTranslator__TranslatorEnginePlugin* self, QObject* watched, QEvent* event) {
    return self->TextTranslator::TranslatorEnginePlugin::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorEnginePlugin_OnEventFilter(TextTranslator__TranslatorEnginePlugin* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorengineplugin = dynamic_cast<VirtualTextTranslatorTranslatorEnginePlugin*>(self))
        vtexttranslatortranslatorengineplugin->texttranslator__translatorengineplugin_eventfilter_callback = reinterpret_cast<VirtualTextTranslatorTranslatorEnginePlugin::TextTranslator__TranslatorEnginePlugin_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void TextTranslator__TranslatorEnginePlugin_TimerEvent(TextTranslator__TranslatorEnginePlugin* self, QTimerEvent* event) {
    auto* vtexttranslatortranslatorengineplugin = dynamic_cast<VirtualTextTranslatorTranslatorEnginePlugin*>(self);
    if (vtexttranslatortranslatorengineplugin) {
        vtexttranslatortranslatorengineplugin->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorEnginePlugin::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextTranslator__TranslatorEnginePlugin_SuperTimerEvent(TextTranslator__TranslatorEnginePlugin* self, QTimerEvent* event) {
    if (auto* vtexttranslatortranslatorengineplugin = dynamic_cast<VirtualTextTranslatorTranslatorEnginePlugin*>(self)) {
        vtexttranslatortranslatorengineplugin->TextTranslator::TranslatorEnginePlugin::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorEnginePlugin::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorEnginePlugin_OnTimerEvent(TextTranslator__TranslatorEnginePlugin* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorengineplugin = dynamic_cast<VirtualTextTranslatorTranslatorEnginePlugin*>(self))
        vtexttranslatortranslatorengineplugin->texttranslator__translatorengineplugin_timerevent_callback = reinterpret_cast<VirtualTextTranslatorTranslatorEnginePlugin::TextTranslator__TranslatorEnginePlugin_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void TextTranslator__TranslatorEnginePlugin_ChildEvent(TextTranslator__TranslatorEnginePlugin* self, QChildEvent* event) {
    auto* vtexttranslatortranslatorengineplugin = dynamic_cast<VirtualTextTranslatorTranslatorEnginePlugin*>(self);
    if (vtexttranslatortranslatorengineplugin) {
        vtexttranslatortranslatorengineplugin->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorEnginePlugin::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextTranslator__TranslatorEnginePlugin_SuperChildEvent(TextTranslator__TranslatorEnginePlugin* self, QChildEvent* event) {
    if (auto* vtexttranslatortranslatorengineplugin = dynamic_cast<VirtualTextTranslatorTranslatorEnginePlugin*>(self)) {
        vtexttranslatortranslatorengineplugin->TextTranslator::TranslatorEnginePlugin::childEvent(event);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorEnginePlugin::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorEnginePlugin_OnChildEvent(TextTranslator__TranslatorEnginePlugin* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorengineplugin = dynamic_cast<VirtualTextTranslatorTranslatorEnginePlugin*>(self))
        vtexttranslatortranslatorengineplugin->texttranslator__translatorengineplugin_childevent_callback = reinterpret_cast<VirtualTextTranslatorTranslatorEnginePlugin::TextTranslator__TranslatorEnginePlugin_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void TextTranslator__TranslatorEnginePlugin_CustomEvent(TextTranslator__TranslatorEnginePlugin* self, QEvent* event) {
    auto* vtexttranslatortranslatorengineplugin = dynamic_cast<VirtualTextTranslatorTranslatorEnginePlugin*>(self);
    if (vtexttranslatortranslatorengineplugin) {
        vtexttranslatortranslatorengineplugin->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorEnginePlugin::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextTranslator__TranslatorEnginePlugin_SuperCustomEvent(TextTranslator__TranslatorEnginePlugin* self, QEvent* event) {
    if (auto* vtexttranslatortranslatorengineplugin = dynamic_cast<VirtualTextTranslatorTranslatorEnginePlugin*>(self)) {
        vtexttranslatortranslatorengineplugin->TextTranslator::TranslatorEnginePlugin::customEvent(event);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorEnginePlugin::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorEnginePlugin_OnCustomEvent(TextTranslator__TranslatorEnginePlugin* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorengineplugin = dynamic_cast<VirtualTextTranslatorTranslatorEnginePlugin*>(self))
        vtexttranslatortranslatorengineplugin->texttranslator__translatorengineplugin_customevent_callback = reinterpret_cast<VirtualTextTranslatorTranslatorEnginePlugin::TextTranslator__TranslatorEnginePlugin_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void TextTranslator__TranslatorEnginePlugin_ConnectNotify(TextTranslator__TranslatorEnginePlugin* self, const QMetaMethod* signal) {
    auto* vtexttranslatortranslatorengineplugin = dynamic_cast<VirtualTextTranslatorTranslatorEnginePlugin*>(self);
    if (vtexttranslatortranslatorengineplugin) {
        vtexttranslatortranslatorengineplugin->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorEnginePlugin::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void TextTranslator__TranslatorEnginePlugin_SuperConnectNotify(TextTranslator__TranslatorEnginePlugin* self, const QMetaMethod* signal) {
    if (auto* vtexttranslatortranslatorengineplugin = dynamic_cast<VirtualTextTranslatorTranslatorEnginePlugin*>(self)) {
        vtexttranslatortranslatorengineplugin->TextTranslator::TranslatorEnginePlugin::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorEnginePlugin::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorEnginePlugin_OnConnectNotify(TextTranslator__TranslatorEnginePlugin* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorengineplugin = dynamic_cast<VirtualTextTranslatorTranslatorEnginePlugin*>(self))
        vtexttranslatortranslatorengineplugin->texttranslator__translatorengineplugin_connectnotify_callback = reinterpret_cast<VirtualTextTranslatorTranslatorEnginePlugin::TextTranslator__TranslatorEnginePlugin_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void TextTranslator__TranslatorEnginePlugin_DisconnectNotify(TextTranslator__TranslatorEnginePlugin* self, const QMetaMethod* signal) {
    auto* vtexttranslatortranslatorengineplugin = dynamic_cast<VirtualTextTranslatorTranslatorEnginePlugin*>(self);
    if (vtexttranslatortranslatorengineplugin) {
        vtexttranslatortranslatorengineplugin->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorEnginePlugin::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void TextTranslator__TranslatorEnginePlugin_SuperDisconnectNotify(TextTranslator__TranslatorEnginePlugin* self, const QMetaMethod* signal) {
    if (auto* vtexttranslatortranslatorengineplugin = dynamic_cast<VirtualTextTranslatorTranslatorEnginePlugin*>(self)) {
        vtexttranslatortranslatorengineplugin->TextTranslator::TranslatorEnginePlugin::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorEnginePlugin::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorEnginePlugin_OnDisconnectNotify(TextTranslator__TranslatorEnginePlugin* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorengineplugin = dynamic_cast<VirtualTextTranslatorTranslatorEnginePlugin*>(self))
        vtexttranslatortranslatorengineplugin->texttranslator__translatorengineplugin_disconnectnotify_callback = reinterpret_cast<VirtualTextTranslatorTranslatorEnginePlugin::TextTranslator__TranslatorEnginePlugin_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void TextTranslator__TranslatorEnginePlugin_AppendResult(TextTranslator__TranslatorEnginePlugin* self, const libqt_string result) {
    if (auto* vtexttranslatortranslatorengineplugin = dynamic_cast<VirtualTextTranslatorTranslatorEnginePlugin*>(self)) {
        QString result_QString = QString::fromUtf8(result.data, result.len);
        vtexttranslatortranslatorengineplugin->VirtualTextTranslatorTranslatorEnginePlugin::appendResult(result_QString);
    } else
        qFatal("Error: Protected method TextTranslator::TranslatorEnginePlugin::appendResult called without a directly constructed type");
}

// Derived class protected handler implementation
void TextTranslator__TranslatorEnginePlugin_SlotError(TextTranslator__TranslatorEnginePlugin* self, int errorVal) {
    if (auto* vtexttranslatortranslatorengineplugin = dynamic_cast<VirtualTextTranslatorTranslatorEnginePlugin*>(self)) {
        vtexttranslatortranslatorengineplugin->VirtualTextTranslatorTranslatorEnginePlugin::slotError(static_cast<QNetworkReply::NetworkError>(errorVal));
    } else
        qFatal("Error: Protected method TextTranslator::TranslatorEnginePlugin::slotError called without a directly constructed type");
}

// Derived class protected handler implementation
bool TextTranslator__TranslatorEnginePlugin_VerifyFromAndToLanguage(TextTranslator__TranslatorEnginePlugin* self) {
    if (auto* vtexttranslatortranslatorengineplugin = dynamic_cast<VirtualTextTranslatorTranslatorEnginePlugin*>(self)) {
        return vtexttranslatortranslatorengineplugin->VirtualTextTranslatorTranslatorEnginePlugin::verifyFromAndToLanguage();
    } else
        qFatal("Error: Protected method TextTranslator::TranslatorEnginePlugin::verifyFromAndToLanguage called without a directly constructed type");
}

// Derived class protected handler implementation
bool TextTranslator__TranslatorEnginePlugin_HasDebug(const TextTranslator__TranslatorEnginePlugin* self) {
    if (auto* vtexttranslatortranslatorengineplugin = const_cast<VirtualTextTranslatorTranslatorEnginePlugin*>(dynamic_cast<const VirtualTextTranslatorTranslatorEnginePlugin*>(self))) {
        return vtexttranslatortranslatorengineplugin->VirtualTextTranslatorTranslatorEnginePlugin::hasDebug();
    } else
        qFatal("Error: Protected method TextTranslator::TranslatorEnginePlugin::hasDebug called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* TextTranslator__TranslatorEnginePlugin_Sender(const TextTranslator__TranslatorEnginePlugin* self) {
    if (auto* vtexttranslatortranslatorengineplugin = const_cast<VirtualTextTranslatorTranslatorEnginePlugin*>(dynamic_cast<const VirtualTextTranslatorTranslatorEnginePlugin*>(self))) {
        return vtexttranslatortranslatorengineplugin->VirtualTextTranslatorTranslatorEnginePlugin::sender();
    } else
        qFatal("Error: Protected method TextTranslator::TranslatorEnginePlugin::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int TextTranslator__TranslatorEnginePlugin_SenderSignalIndex(const TextTranslator__TranslatorEnginePlugin* self) {
    if (auto* vtexttranslatortranslatorengineplugin = const_cast<VirtualTextTranslatorTranslatorEnginePlugin*>(dynamic_cast<const VirtualTextTranslatorTranslatorEnginePlugin*>(self))) {
        return vtexttranslatortranslatorengineplugin->VirtualTextTranslatorTranslatorEnginePlugin::senderSignalIndex();
    } else
        qFatal("Error: Protected method TextTranslator::TranslatorEnginePlugin::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int TextTranslator__TranslatorEnginePlugin_Receivers(const TextTranslator__TranslatorEnginePlugin* self, const char* signal) {
    if (auto* vtexttranslatortranslatorengineplugin = const_cast<VirtualTextTranslatorTranslatorEnginePlugin*>(dynamic_cast<const VirtualTextTranslatorTranslatorEnginePlugin*>(self))) {
        return vtexttranslatortranslatorengineplugin->VirtualTextTranslatorTranslatorEnginePlugin::receivers(signal);
    } else
        qFatal("Error: Protected method TextTranslator::TranslatorEnginePlugin::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool TextTranslator__TranslatorEnginePlugin_IsSignalConnected(const TextTranslator__TranslatorEnginePlugin* self, const QMetaMethod* signal) {
    if (auto* vtexttranslatortranslatorengineplugin = const_cast<VirtualTextTranslatorTranslatorEnginePlugin*>(dynamic_cast<const VirtualTextTranslatorTranslatorEnginePlugin*>(self))) {
        return vtexttranslatortranslatorengineplugin->VirtualTextTranslatorTranslatorEnginePlugin::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method TextTranslator::TranslatorEnginePlugin::isSignalConnected called without a directly constructed type");
}

void TextTranslator__TranslatorEnginePlugin_Delete(TextTranslator__TranslatorEnginePlugin* self) {
    delete self;
}
