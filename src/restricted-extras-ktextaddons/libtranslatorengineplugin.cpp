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
    auto* vtexttranslator__translatorengineplugin = dynamic_cast<const VirtualTextTranslatorTranslatorEnginePlugin*>(self);
    if (vtexttranslator__translatorengineplugin && vtexttranslator__translatorengineplugin->isVirtualTextTranslatorTranslatorEnginePlugin) {
        return (QMetaObject*)self->metaObject();
    } else {
        return (QMetaObject*)((VirtualTextTranslatorTranslatorEnginePlugin*)self)->metaObject();
    }
}

void* TextTranslator__TranslatorEnginePlugin_Metacast(TextTranslator__TranslatorEnginePlugin* self, const char* param1) {
    auto* vtexttranslator__translatorengineplugin = dynamic_cast<VirtualTextTranslatorTranslatorEnginePlugin*>(self);
    if (vtexttranslator__translatorengineplugin && vtexttranslator__translatorengineplugin->isVirtualTextTranslatorTranslatorEnginePlugin) {
        return self->qt_metacast(param1);
    } else {
        return ((VirtualTextTranslatorTranslatorEnginePlugin*)self)->qt_metacast(param1);
    }
}

int TextTranslator__TranslatorEnginePlugin_Metacall(TextTranslator__TranslatorEnginePlugin* self, int param1, int param2, void** param3) {
    auto* vtexttranslator__translatorengineplugin = dynamic_cast<VirtualTextTranslatorTranslatorEnginePlugin*>(self);
    if (vtexttranslator__translatorengineplugin && vtexttranslator__translatorengineplugin->isVirtualTextTranslatorTranslatorEnginePlugin) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualTextTranslatorTranslatorEnginePlugin*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

void TextTranslator__TranslatorEnginePlugin_Translate(TextTranslator__TranslatorEnginePlugin* self) {
    auto* vtexttranslator__translatorengineplugin = dynamic_cast<VirtualTextTranslatorTranslatorEnginePlugin*>(self);
    if (vtexttranslator__translatorengineplugin && vtexttranslator__translatorengineplugin->isVirtualTextTranslatorTranslatorEnginePlugin) {
        vtexttranslator__translatorengineplugin->translate();
    } else {
        ((VirtualTextTranslatorTranslatorEnginePlugin*)self)->translate();
    }
}

libqt_string TextTranslator__TranslatorEnginePlugin_ResultTranslate(const TextTranslator__TranslatorEnginePlugin* self) {
    QString _ret = self->resultTranslate();
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
    QString _ret = self->inputText();
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
    QString _ret = self->from();
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
    QString _ret = self->to();
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
    QString _ret = self->result();
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
    QString _ret = self->jsonDebug();
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
    TextTranslator::TranslatorEnginePlugin::connect(self, &TextTranslator::TranslatorEnginePlugin::translateDone, [self, slotFunc]() {
        slotFunc(self);
    });
}

void TextTranslator__TranslatorEnginePlugin_TranslateFailed(TextTranslator__TranslatorEnginePlugin* self, const libqt_string errorMessage) {
    QString errorMessage_QString = QString::fromUtf8(errorMessage.data, errorMessage.len);
    self->translateFailed(errorMessage_QString);
}

void TextTranslator__TranslatorEnginePlugin_Connect_TranslateFailed(TextTranslator__TranslatorEnginePlugin* self, intptr_t slot) {
    void (*slotFunc)(TextTranslator__TranslatorEnginePlugin*, const char*) = reinterpret_cast<void (*)(TextTranslator__TranslatorEnginePlugin*, const char*)>(slot);
    TextTranslator::TranslatorEnginePlugin::connect(self, &TextTranslator::TranslatorEnginePlugin::translateFailed, [self, slotFunc](const QString& errorMessage) {
        const QString errorMessage_ret = errorMessage;
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
    TextTranslator::TranslatorEnginePlugin::connect(self, &TextTranslator::TranslatorEnginePlugin::languagesChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

libqt_string TextTranslator__TranslatorEnginePlugin_LanguageCode(TextTranslator__TranslatorEnginePlugin* self, const libqt_string langStr) {
    QString langStr_QString = QString::fromUtf8(langStr.data, langStr.len);
    auto* vtexttranslator__translatorengineplugin = dynamic_cast<VirtualTextTranslatorTranslatorEnginePlugin*>(self);
    if (vtexttranslator__translatorengineplugin && vtexttranslator__translatorengineplugin->isVirtualTextTranslatorTranslatorEnginePlugin) {
        QString _ret = vtexttranslator__translatorengineplugin->languageCode(langStr_QString);
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
    return {};
}

// Base class handler implementation
QMetaObject* TextTranslator__TranslatorEnginePlugin_SuperMetaObject(const TextTranslator__TranslatorEnginePlugin* self) {
    auto* vtexttranslatortranslatorengineplugin = const_cast<VirtualTextTranslatorTranslatorEnginePlugin*>(dynamic_cast<const VirtualTextTranslatorTranslatorEnginePlugin*>(self));
    if (vtexttranslatortranslatorengineplugin && vtexttranslatortranslatorengineplugin->isVirtualTextTranslatorTranslatorEnginePlugin) {
        vtexttranslatortranslatorengineplugin->setTextTranslator__TranslatorEnginePlugin_MetaObject_IsBase(true);
        return (QMetaObject*)vtexttranslatortranslatorengineplugin->metaObject();
    } else {
        return (QMetaObject*)self->TextTranslator::TranslatorEnginePlugin::metaObject();
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorEnginePlugin_OnMetaObject(const TextTranslator__TranslatorEnginePlugin* self, intptr_t slot) {
    auto* vtexttranslatortranslatorengineplugin = const_cast<VirtualTextTranslatorTranslatorEnginePlugin*>(dynamic_cast<const VirtualTextTranslatorTranslatorEnginePlugin*>(self));
    if (vtexttranslatortranslatorengineplugin && vtexttranslatortranslatorengineplugin->isVirtualTextTranslatorTranslatorEnginePlugin) {
        vtexttranslatortranslatorengineplugin->setTextTranslator__TranslatorEnginePlugin_MetaObject_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorEnginePlugin::TextTranslator__TranslatorEnginePlugin_MetaObject_Callback>(slot));
    }
}

// Base class handler implementation
void* TextTranslator__TranslatorEnginePlugin_SuperMetacast(TextTranslator__TranslatorEnginePlugin* self, const char* param1) {
    auto* vtexttranslatortranslatorengineplugin = dynamic_cast<VirtualTextTranslatorTranslatorEnginePlugin*>(self);
    if (vtexttranslatortranslatorengineplugin && vtexttranslatortranslatorengineplugin->isVirtualTextTranslatorTranslatorEnginePlugin) {
        vtexttranslatortranslatorengineplugin->setTextTranslator__TranslatorEnginePlugin_Metacast_IsBase(true);
        return vtexttranslatortranslatorengineplugin->qt_metacast(param1);
    } else {
        return self->TextTranslator::TranslatorEnginePlugin::qt_metacast(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorEnginePlugin_OnMetacast(TextTranslator__TranslatorEnginePlugin* self, intptr_t slot) {
    auto* vtexttranslatortranslatorengineplugin = dynamic_cast<VirtualTextTranslatorTranslatorEnginePlugin*>(self);
    if (vtexttranslatortranslatorengineplugin && vtexttranslatortranslatorengineplugin->isVirtualTextTranslatorTranslatorEnginePlugin) {
        vtexttranslatortranslatorengineplugin->setTextTranslator__TranslatorEnginePlugin_Metacast_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorEnginePlugin::TextTranslator__TranslatorEnginePlugin_Metacast_Callback>(slot));
    }
}

// Base class handler implementation
int TextTranslator__TranslatorEnginePlugin_SuperMetacall(TextTranslator__TranslatorEnginePlugin* self, int param1, int param2, void** param3) {
    auto* vtexttranslatortranslatorengineplugin = dynamic_cast<VirtualTextTranslatorTranslatorEnginePlugin*>(self);
    if (vtexttranslatortranslatorengineplugin && vtexttranslatortranslatorengineplugin->isVirtualTextTranslatorTranslatorEnginePlugin) {
        vtexttranslatortranslatorengineplugin->setTextTranslator__TranslatorEnginePlugin_Metacall_IsBase(true);
        return vtexttranslatortranslatorengineplugin->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->TextTranslator::TranslatorEnginePlugin::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorEnginePlugin_OnMetacall(TextTranslator__TranslatorEnginePlugin* self, intptr_t slot) {
    auto* vtexttranslatortranslatorengineplugin = dynamic_cast<VirtualTextTranslatorTranslatorEnginePlugin*>(self);
    if (vtexttranslatortranslatorengineplugin && vtexttranslatortranslatorengineplugin->isVirtualTextTranslatorTranslatorEnginePlugin) {
        vtexttranslatortranslatorengineplugin->setTextTranslator__TranslatorEnginePlugin_Metacall_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorEnginePlugin::TextTranslator__TranslatorEnginePlugin_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
void TextTranslator__TranslatorEnginePlugin_SuperTranslate(TextTranslator__TranslatorEnginePlugin* self) {
    auto* vtexttranslatortranslatorengineplugin = dynamic_cast<VirtualTextTranslatorTranslatorEnginePlugin*>(self);
    if (vtexttranslatortranslatorengineplugin && vtexttranslatortranslatorengineplugin->isVirtualTextTranslatorTranslatorEnginePlugin) {
        vtexttranslatortranslatorengineplugin->setTextTranslator__TranslatorEnginePlugin_Translate_IsBase(true);
        vtexttranslatortranslatorengineplugin->translate();
    } else {
        ((VirtualTextTranslatorTranslatorEnginePlugin*)self)->translate();
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorEnginePlugin_OnTranslate(TextTranslator__TranslatorEnginePlugin* self, intptr_t slot) {
    auto* vtexttranslatortranslatorengineplugin = dynamic_cast<VirtualTextTranslatorTranslatorEnginePlugin*>(self);
    if (vtexttranslatortranslatorengineplugin && vtexttranslatortranslatorengineplugin->isVirtualTextTranslatorTranslatorEnginePlugin) {
        vtexttranslatortranslatorengineplugin->setTextTranslator__TranslatorEnginePlugin_Translate_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorEnginePlugin::TextTranslator__TranslatorEnginePlugin_Translate_Callback>(slot));
    }
}

// Base class handler implementation
libqt_string TextTranslator__TranslatorEnginePlugin_SuperLanguageCode(TextTranslator__TranslatorEnginePlugin* self, const libqt_string langStr) {
    auto* vtexttranslatortranslatorengineplugin = dynamic_cast<VirtualTextTranslatorTranslatorEnginePlugin*>(self);
    QString langStr_QString = QString::fromUtf8(langStr.data, langStr.len);
    if (vtexttranslatortranslatorengineplugin && vtexttranslatortranslatorengineplugin->isVirtualTextTranslatorTranslatorEnginePlugin) {
        vtexttranslatortranslatorengineplugin->setTextTranslator__TranslatorEnginePlugin_LanguageCode_IsBase(true);
        QString _ret = vtexttranslatortranslatorengineplugin->languageCode(langStr_QString);
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualTextTranslatorTranslatorEnginePlugin*)self)->languageCode(langStr_QString);
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
void TextTranslator__TranslatorEnginePlugin_OnLanguageCode(TextTranslator__TranslatorEnginePlugin* self, intptr_t slot) {
    auto* vtexttranslatortranslatorengineplugin = dynamic_cast<VirtualTextTranslatorTranslatorEnginePlugin*>(self);
    if (vtexttranslatortranslatorengineplugin && vtexttranslatortranslatorengineplugin->isVirtualTextTranslatorTranslatorEnginePlugin) {
        vtexttranslatortranslatorengineplugin->setTextTranslator__TranslatorEnginePlugin_LanguageCode_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorEnginePlugin::TextTranslator__TranslatorEnginePlugin_LanguageCode_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextTranslator__TranslatorEnginePlugin_Event(TextTranslator__TranslatorEnginePlugin* self, QEvent* event) {
    auto* vtexttranslatortranslatorengineplugin = dynamic_cast<VirtualTextTranslatorTranslatorEnginePlugin*>(self);
    if (vtexttranslatortranslatorengineplugin && vtexttranslatortranslatorengineplugin->isVirtualTextTranslatorTranslatorEnginePlugin) {
        return vtexttranslatortranslatorengineplugin->event(event);
    } else {
        return self->TextTranslator::TranslatorEnginePlugin::event(event);
    }
}

// Base class handler implementation
bool TextTranslator__TranslatorEnginePlugin_SuperEvent(TextTranslator__TranslatorEnginePlugin* self, QEvent* event) {
    auto* vtexttranslatortranslatorengineplugin = dynamic_cast<VirtualTextTranslatorTranslatorEnginePlugin*>(self);
    if (vtexttranslatortranslatorengineplugin && vtexttranslatortranslatorengineplugin->isVirtualTextTranslatorTranslatorEnginePlugin) {
        vtexttranslatortranslatorengineplugin->setTextTranslator__TranslatorEnginePlugin_Event_IsBase(true);
        return vtexttranslatortranslatorengineplugin->event(event);
    } else {
        return self->TextTranslator::TranslatorEnginePlugin::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorEnginePlugin_OnEvent(TextTranslator__TranslatorEnginePlugin* self, intptr_t slot) {
    auto* vtexttranslatortranslatorengineplugin = dynamic_cast<VirtualTextTranslatorTranslatorEnginePlugin*>(self);
    if (vtexttranslatortranslatorengineplugin && vtexttranslatortranslatorengineplugin->isVirtualTextTranslatorTranslatorEnginePlugin) {
        vtexttranslatortranslatorengineplugin->setTextTranslator__TranslatorEnginePlugin_Event_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorEnginePlugin::TextTranslator__TranslatorEnginePlugin_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextTranslator__TranslatorEnginePlugin_EventFilter(TextTranslator__TranslatorEnginePlugin* self, QObject* watched, QEvent* event) {
    auto* vtexttranslatortranslatorengineplugin = dynamic_cast<VirtualTextTranslatorTranslatorEnginePlugin*>(self);
    if (vtexttranslatortranslatorengineplugin && vtexttranslatortranslatorengineplugin->isVirtualTextTranslatorTranslatorEnginePlugin) {
        return vtexttranslatortranslatorengineplugin->eventFilter(watched, event);
    } else {
        return self->TextTranslator::TranslatorEnginePlugin::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool TextTranslator__TranslatorEnginePlugin_SuperEventFilter(TextTranslator__TranslatorEnginePlugin* self, QObject* watched, QEvent* event) {
    auto* vtexttranslatortranslatorengineplugin = dynamic_cast<VirtualTextTranslatorTranslatorEnginePlugin*>(self);
    if (vtexttranslatortranslatorengineplugin && vtexttranslatortranslatorengineplugin->isVirtualTextTranslatorTranslatorEnginePlugin) {
        vtexttranslatortranslatorengineplugin->setTextTranslator__TranslatorEnginePlugin_EventFilter_IsBase(true);
        return vtexttranslatortranslatorengineplugin->eventFilter(watched, event);
    } else {
        return self->TextTranslator::TranslatorEnginePlugin::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorEnginePlugin_OnEventFilter(TextTranslator__TranslatorEnginePlugin* self, intptr_t slot) {
    auto* vtexttranslatortranslatorengineplugin = dynamic_cast<VirtualTextTranslatorTranslatorEnginePlugin*>(self);
    if (vtexttranslatortranslatorengineplugin && vtexttranslatortranslatorengineplugin->isVirtualTextTranslatorTranslatorEnginePlugin) {
        vtexttranslatortranslatorengineplugin->setTextTranslator__TranslatorEnginePlugin_EventFilter_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorEnginePlugin::TextTranslator__TranslatorEnginePlugin_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorEnginePlugin_TimerEvent(TextTranslator__TranslatorEnginePlugin* self, QTimerEvent* event) {
    auto* vtexttranslatortranslatorengineplugin = dynamic_cast<VirtualTextTranslatorTranslatorEnginePlugin*>(self);
    if (vtexttranslatortranslatorengineplugin && vtexttranslatortranslatorengineplugin->isVirtualTextTranslatorTranslatorEnginePlugin) {
        vtexttranslatortranslatorengineplugin->timerEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorEnginePlugin*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void TextTranslator__TranslatorEnginePlugin_SuperTimerEvent(TextTranslator__TranslatorEnginePlugin* self, QTimerEvent* event) {
    auto* vtexttranslatortranslatorengineplugin = dynamic_cast<VirtualTextTranslatorTranslatorEnginePlugin*>(self);
    if (vtexttranslatortranslatorengineplugin && vtexttranslatortranslatorengineplugin->isVirtualTextTranslatorTranslatorEnginePlugin) {
        vtexttranslatortranslatorengineplugin->setTextTranslator__TranslatorEnginePlugin_TimerEvent_IsBase(true);
        vtexttranslatortranslatorengineplugin->timerEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorEnginePlugin*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorEnginePlugin_OnTimerEvent(TextTranslator__TranslatorEnginePlugin* self, intptr_t slot) {
    auto* vtexttranslatortranslatorengineplugin = dynamic_cast<VirtualTextTranslatorTranslatorEnginePlugin*>(self);
    if (vtexttranslatortranslatorengineplugin && vtexttranslatortranslatorengineplugin->isVirtualTextTranslatorTranslatorEnginePlugin) {
        vtexttranslatortranslatorengineplugin->setTextTranslator__TranslatorEnginePlugin_TimerEvent_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorEnginePlugin::TextTranslator__TranslatorEnginePlugin_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorEnginePlugin_ChildEvent(TextTranslator__TranslatorEnginePlugin* self, QChildEvent* event) {
    auto* vtexttranslatortranslatorengineplugin = dynamic_cast<VirtualTextTranslatorTranslatorEnginePlugin*>(self);
    if (vtexttranslatortranslatorengineplugin && vtexttranslatortranslatorengineplugin->isVirtualTextTranslatorTranslatorEnginePlugin) {
        vtexttranslatortranslatorengineplugin->childEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorEnginePlugin*)self)->childEvent(event);
    }
}

// Base class handler implementation
void TextTranslator__TranslatorEnginePlugin_SuperChildEvent(TextTranslator__TranslatorEnginePlugin* self, QChildEvent* event) {
    auto* vtexttranslatortranslatorengineplugin = dynamic_cast<VirtualTextTranslatorTranslatorEnginePlugin*>(self);
    if (vtexttranslatortranslatorengineplugin && vtexttranslatortranslatorengineplugin->isVirtualTextTranslatorTranslatorEnginePlugin) {
        vtexttranslatortranslatorengineplugin->setTextTranslator__TranslatorEnginePlugin_ChildEvent_IsBase(true);
        vtexttranslatortranslatorengineplugin->childEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorEnginePlugin*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorEnginePlugin_OnChildEvent(TextTranslator__TranslatorEnginePlugin* self, intptr_t slot) {
    auto* vtexttranslatortranslatorengineplugin = dynamic_cast<VirtualTextTranslatorTranslatorEnginePlugin*>(self);
    if (vtexttranslatortranslatorengineplugin && vtexttranslatortranslatorengineplugin->isVirtualTextTranslatorTranslatorEnginePlugin) {
        vtexttranslatortranslatorengineplugin->setTextTranslator__TranslatorEnginePlugin_ChildEvent_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorEnginePlugin::TextTranslator__TranslatorEnginePlugin_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorEnginePlugin_CustomEvent(TextTranslator__TranslatorEnginePlugin* self, QEvent* event) {
    auto* vtexttranslatortranslatorengineplugin = dynamic_cast<VirtualTextTranslatorTranslatorEnginePlugin*>(self);
    if (vtexttranslatortranslatorengineplugin && vtexttranslatortranslatorengineplugin->isVirtualTextTranslatorTranslatorEnginePlugin) {
        vtexttranslatortranslatorengineplugin->customEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorEnginePlugin*)self)->customEvent(event);
    }
}

// Base class handler implementation
void TextTranslator__TranslatorEnginePlugin_SuperCustomEvent(TextTranslator__TranslatorEnginePlugin* self, QEvent* event) {
    auto* vtexttranslatortranslatorengineplugin = dynamic_cast<VirtualTextTranslatorTranslatorEnginePlugin*>(self);
    if (vtexttranslatortranslatorengineplugin && vtexttranslatortranslatorengineplugin->isVirtualTextTranslatorTranslatorEnginePlugin) {
        vtexttranslatortranslatorengineplugin->setTextTranslator__TranslatorEnginePlugin_CustomEvent_IsBase(true);
        vtexttranslatortranslatorengineplugin->customEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorEnginePlugin*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorEnginePlugin_OnCustomEvent(TextTranslator__TranslatorEnginePlugin* self, intptr_t slot) {
    auto* vtexttranslatortranslatorengineplugin = dynamic_cast<VirtualTextTranslatorTranslatorEnginePlugin*>(self);
    if (vtexttranslatortranslatorengineplugin && vtexttranslatortranslatorengineplugin->isVirtualTextTranslatorTranslatorEnginePlugin) {
        vtexttranslatortranslatorengineplugin->setTextTranslator__TranslatorEnginePlugin_CustomEvent_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorEnginePlugin::TextTranslator__TranslatorEnginePlugin_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorEnginePlugin_ConnectNotify(TextTranslator__TranslatorEnginePlugin* self, const QMetaMethod* signal) {
    auto* vtexttranslatortranslatorengineplugin = dynamic_cast<VirtualTextTranslatorTranslatorEnginePlugin*>(self);
    if (vtexttranslatortranslatorengineplugin && vtexttranslatortranslatorengineplugin->isVirtualTextTranslatorTranslatorEnginePlugin) {
        vtexttranslatortranslatorengineplugin->connectNotify(*signal);
    } else {
        ((VirtualTextTranslatorTranslatorEnginePlugin*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void TextTranslator__TranslatorEnginePlugin_SuperConnectNotify(TextTranslator__TranslatorEnginePlugin* self, const QMetaMethod* signal) {
    auto* vtexttranslatortranslatorengineplugin = dynamic_cast<VirtualTextTranslatorTranslatorEnginePlugin*>(self);
    if (vtexttranslatortranslatorengineplugin && vtexttranslatortranslatorengineplugin->isVirtualTextTranslatorTranslatorEnginePlugin) {
        vtexttranslatortranslatorengineplugin->setTextTranslator__TranslatorEnginePlugin_ConnectNotify_IsBase(true);
        vtexttranslatortranslatorengineplugin->connectNotify(*signal);
    } else {
        ((VirtualTextTranslatorTranslatorEnginePlugin*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorEnginePlugin_OnConnectNotify(TextTranslator__TranslatorEnginePlugin* self, intptr_t slot) {
    auto* vtexttranslatortranslatorengineplugin = dynamic_cast<VirtualTextTranslatorTranslatorEnginePlugin*>(self);
    if (vtexttranslatortranslatorengineplugin && vtexttranslatortranslatorengineplugin->isVirtualTextTranslatorTranslatorEnginePlugin) {
        vtexttranslatortranslatorengineplugin->setTextTranslator__TranslatorEnginePlugin_ConnectNotify_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorEnginePlugin::TextTranslator__TranslatorEnginePlugin_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorEnginePlugin_DisconnectNotify(TextTranslator__TranslatorEnginePlugin* self, const QMetaMethod* signal) {
    auto* vtexttranslatortranslatorengineplugin = dynamic_cast<VirtualTextTranslatorTranslatorEnginePlugin*>(self);
    if (vtexttranslatortranslatorengineplugin && vtexttranslatortranslatorengineplugin->isVirtualTextTranslatorTranslatorEnginePlugin) {
        vtexttranslatortranslatorengineplugin->disconnectNotify(*signal);
    } else {
        ((VirtualTextTranslatorTranslatorEnginePlugin*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void TextTranslator__TranslatorEnginePlugin_SuperDisconnectNotify(TextTranslator__TranslatorEnginePlugin* self, const QMetaMethod* signal) {
    auto* vtexttranslatortranslatorengineplugin = dynamic_cast<VirtualTextTranslatorTranslatorEnginePlugin*>(self);
    if (vtexttranslatortranslatorengineplugin && vtexttranslatortranslatorengineplugin->isVirtualTextTranslatorTranslatorEnginePlugin) {
        vtexttranslatortranslatorengineplugin->setTextTranslator__TranslatorEnginePlugin_DisconnectNotify_IsBase(true);
        vtexttranslatortranslatorengineplugin->disconnectNotify(*signal);
    } else {
        ((VirtualTextTranslatorTranslatorEnginePlugin*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorEnginePlugin_OnDisconnectNotify(TextTranslator__TranslatorEnginePlugin* self, intptr_t slot) {
    auto* vtexttranslatortranslatorengineplugin = dynamic_cast<VirtualTextTranslatorTranslatorEnginePlugin*>(self);
    if (vtexttranslatortranslatorengineplugin && vtexttranslatortranslatorengineplugin->isVirtualTextTranslatorTranslatorEnginePlugin) {
        vtexttranslatortranslatorengineplugin->setTextTranslator__TranslatorEnginePlugin_DisconnectNotify_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorEnginePlugin::TextTranslator__TranslatorEnginePlugin_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorEnginePlugin_AppendResult(TextTranslator__TranslatorEnginePlugin* self, const libqt_string result) {
    auto* vtexttranslatortranslatorengineplugin = dynamic_cast<VirtualTextTranslatorTranslatorEnginePlugin*>(self);
    QString result_QString = QString::fromUtf8(result.data, result.len);
    if (vtexttranslatortranslatorengineplugin && vtexttranslatortranslatorengineplugin->isVirtualTextTranslatorTranslatorEnginePlugin) {
        vtexttranslatortranslatorengineplugin->appendResult(result_QString);
    } else {
        ((VirtualTextTranslatorTranslatorEnginePlugin*)self)->appendResult(result_QString);
    }
}

// Base class handler implementation
void TextTranslator__TranslatorEnginePlugin_SuperAppendResult(TextTranslator__TranslatorEnginePlugin* self, const libqt_string result) {
    auto* vtexttranslatortranslatorengineplugin = dynamic_cast<VirtualTextTranslatorTranslatorEnginePlugin*>(self);
    QString result_QString = QString::fromUtf8(result.data, result.len);
    if (vtexttranslatortranslatorengineplugin && vtexttranslatortranslatorengineplugin->isVirtualTextTranslatorTranslatorEnginePlugin) {
        vtexttranslatortranslatorengineplugin->setTextTranslator__TranslatorEnginePlugin_AppendResult_IsBase(true);
        vtexttranslatortranslatorengineplugin->appendResult(result_QString);
    } else {
        ((VirtualTextTranslatorTranslatorEnginePlugin*)self)->appendResult(result_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorEnginePlugin_OnAppendResult(TextTranslator__TranslatorEnginePlugin* self, intptr_t slot) {
    auto* vtexttranslatortranslatorengineplugin = dynamic_cast<VirtualTextTranslatorTranslatorEnginePlugin*>(self);
    if (vtexttranslatortranslatorengineplugin && vtexttranslatortranslatorengineplugin->isVirtualTextTranslatorTranslatorEnginePlugin) {
        vtexttranslatortranslatorengineplugin->setTextTranslator__TranslatorEnginePlugin_AppendResult_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorEnginePlugin::TextTranslator__TranslatorEnginePlugin_AppendResult_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorEnginePlugin_SlotError(TextTranslator__TranslatorEnginePlugin* self, int errorVal) {
    auto* vtexttranslatortranslatorengineplugin = dynamic_cast<VirtualTextTranslatorTranslatorEnginePlugin*>(self);
    if (vtexttranslatortranslatorengineplugin && vtexttranslatortranslatorengineplugin->isVirtualTextTranslatorTranslatorEnginePlugin) {
        vtexttranslatortranslatorengineplugin->slotError(static_cast<QNetworkReply::NetworkError>(errorVal));
    } else {
        ((VirtualTextTranslatorTranslatorEnginePlugin*)self)->slotError(static_cast<QNetworkReply::NetworkError>(errorVal));
    }
}

// Base class handler implementation
void TextTranslator__TranslatorEnginePlugin_SuperSlotError(TextTranslator__TranslatorEnginePlugin* self, int errorVal) {
    auto* vtexttranslatortranslatorengineplugin = dynamic_cast<VirtualTextTranslatorTranslatorEnginePlugin*>(self);
    if (vtexttranslatortranslatorengineplugin && vtexttranslatortranslatorengineplugin->isVirtualTextTranslatorTranslatorEnginePlugin) {
        vtexttranslatortranslatorengineplugin->setTextTranslator__TranslatorEnginePlugin_SlotError_IsBase(true);
        vtexttranslatortranslatorengineplugin->slotError(static_cast<QNetworkReply::NetworkError>(errorVal));
    } else {
        ((VirtualTextTranslatorTranslatorEnginePlugin*)self)->slotError(static_cast<QNetworkReply::NetworkError>(errorVal));
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorEnginePlugin_OnSlotError(TextTranslator__TranslatorEnginePlugin* self, intptr_t slot) {
    auto* vtexttranslatortranslatorengineplugin = dynamic_cast<VirtualTextTranslatorTranslatorEnginePlugin*>(self);
    if (vtexttranslatortranslatorengineplugin && vtexttranslatortranslatorengineplugin->isVirtualTextTranslatorTranslatorEnginePlugin) {
        vtexttranslatortranslatorengineplugin->setTextTranslator__TranslatorEnginePlugin_SlotError_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorEnginePlugin::TextTranslator__TranslatorEnginePlugin_SlotError_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextTranslator__TranslatorEnginePlugin_VerifyFromAndToLanguage(TextTranslator__TranslatorEnginePlugin* self) {
    auto* vtexttranslatortranslatorengineplugin = dynamic_cast<VirtualTextTranslatorTranslatorEnginePlugin*>(self);
    if (vtexttranslatortranslatorengineplugin && vtexttranslatortranslatorengineplugin->isVirtualTextTranslatorTranslatorEnginePlugin) {
        return vtexttranslatortranslatorengineplugin->verifyFromAndToLanguage();
    } else {
        return ((VirtualTextTranslatorTranslatorEnginePlugin*)self)->verifyFromAndToLanguage();
    }
}

// Base class handler implementation
bool TextTranslator__TranslatorEnginePlugin_SuperVerifyFromAndToLanguage(TextTranslator__TranslatorEnginePlugin* self) {
    auto* vtexttranslatortranslatorengineplugin = dynamic_cast<VirtualTextTranslatorTranslatorEnginePlugin*>(self);
    if (vtexttranslatortranslatorengineplugin && vtexttranslatortranslatorengineplugin->isVirtualTextTranslatorTranslatorEnginePlugin) {
        vtexttranslatortranslatorengineplugin->setTextTranslator__TranslatorEnginePlugin_VerifyFromAndToLanguage_IsBase(true);
        return vtexttranslatortranslatorengineplugin->verifyFromAndToLanguage();
    } else {
        return ((VirtualTextTranslatorTranslatorEnginePlugin*)self)->verifyFromAndToLanguage();
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorEnginePlugin_OnVerifyFromAndToLanguage(TextTranslator__TranslatorEnginePlugin* self, intptr_t slot) {
    auto* vtexttranslatortranslatorengineplugin = dynamic_cast<VirtualTextTranslatorTranslatorEnginePlugin*>(self);
    if (vtexttranslatortranslatorengineplugin && vtexttranslatortranslatorengineplugin->isVirtualTextTranslatorTranslatorEnginePlugin) {
        vtexttranslatortranslatorengineplugin->setTextTranslator__TranslatorEnginePlugin_VerifyFromAndToLanguage_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorEnginePlugin::TextTranslator__TranslatorEnginePlugin_VerifyFromAndToLanguage_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextTranslator__TranslatorEnginePlugin_HasDebug(const TextTranslator__TranslatorEnginePlugin* self) {
    auto* vtexttranslatortranslatorengineplugin = const_cast<VirtualTextTranslatorTranslatorEnginePlugin*>(dynamic_cast<const VirtualTextTranslatorTranslatorEnginePlugin*>(self));
    if (vtexttranslatortranslatorengineplugin && vtexttranslatortranslatorengineplugin->isVirtualTextTranslatorTranslatorEnginePlugin) {
        return vtexttranslatortranslatorengineplugin->hasDebug();
    } else {
        return ((VirtualTextTranslatorTranslatorEnginePlugin*)self)->hasDebug();
    }
}

// Base class handler implementation
bool TextTranslator__TranslatorEnginePlugin_SuperHasDebug(const TextTranslator__TranslatorEnginePlugin* self) {
    auto* vtexttranslatortranslatorengineplugin = const_cast<VirtualTextTranslatorTranslatorEnginePlugin*>(dynamic_cast<const VirtualTextTranslatorTranslatorEnginePlugin*>(self));
    if (vtexttranslatortranslatorengineplugin && vtexttranslatortranslatorengineplugin->isVirtualTextTranslatorTranslatorEnginePlugin) {
        vtexttranslatortranslatorengineplugin->setTextTranslator__TranslatorEnginePlugin_HasDebug_IsBase(true);
        return vtexttranslatortranslatorengineplugin->hasDebug();
    } else {
        return ((VirtualTextTranslatorTranslatorEnginePlugin*)self)->hasDebug();
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorEnginePlugin_OnHasDebug(const TextTranslator__TranslatorEnginePlugin* self, intptr_t slot) {
    auto* vtexttranslatortranslatorengineplugin = const_cast<VirtualTextTranslatorTranslatorEnginePlugin*>(dynamic_cast<const VirtualTextTranslatorTranslatorEnginePlugin*>(self));
    if (vtexttranslatortranslatorengineplugin && vtexttranslatortranslatorengineplugin->isVirtualTextTranslatorTranslatorEnginePlugin) {
        vtexttranslatortranslatorengineplugin->setTextTranslator__TranslatorEnginePlugin_HasDebug_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorEnginePlugin::TextTranslator__TranslatorEnginePlugin_HasDebug_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* TextTranslator__TranslatorEnginePlugin_Sender(const TextTranslator__TranslatorEnginePlugin* self) {
    auto* vtexttranslatortranslatorengineplugin = const_cast<VirtualTextTranslatorTranslatorEnginePlugin*>(dynamic_cast<const VirtualTextTranslatorTranslatorEnginePlugin*>(self));
    if (vtexttranslatortranslatorengineplugin && vtexttranslatortranslatorengineplugin->isVirtualTextTranslatorTranslatorEnginePlugin) {
        return vtexttranslatortranslatorengineplugin->sender();
    } else {
        return ((VirtualTextTranslatorTranslatorEnginePlugin*)self)->sender();
    }
}

// Base class handler implementation
QObject* TextTranslator__TranslatorEnginePlugin_SuperSender(const TextTranslator__TranslatorEnginePlugin* self) {
    auto* vtexttranslatortranslatorengineplugin = const_cast<VirtualTextTranslatorTranslatorEnginePlugin*>(dynamic_cast<const VirtualTextTranslatorTranslatorEnginePlugin*>(self));
    if (vtexttranslatortranslatorengineplugin && vtexttranslatortranslatorengineplugin->isVirtualTextTranslatorTranslatorEnginePlugin) {
        vtexttranslatortranslatorengineplugin->setTextTranslator__TranslatorEnginePlugin_Sender_IsBase(true);
        return vtexttranslatortranslatorengineplugin->sender();
    } else {
        return ((VirtualTextTranslatorTranslatorEnginePlugin*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorEnginePlugin_OnSender(const TextTranslator__TranslatorEnginePlugin* self, intptr_t slot) {
    auto* vtexttranslatortranslatorengineplugin = const_cast<VirtualTextTranslatorTranslatorEnginePlugin*>(dynamic_cast<const VirtualTextTranslatorTranslatorEnginePlugin*>(self));
    if (vtexttranslatortranslatorengineplugin && vtexttranslatortranslatorengineplugin->isVirtualTextTranslatorTranslatorEnginePlugin) {
        vtexttranslatortranslatorengineplugin->setTextTranslator__TranslatorEnginePlugin_Sender_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorEnginePlugin::TextTranslator__TranslatorEnginePlugin_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int TextTranslator__TranslatorEnginePlugin_SenderSignalIndex(const TextTranslator__TranslatorEnginePlugin* self) {
    auto* vtexttranslatortranslatorengineplugin = const_cast<VirtualTextTranslatorTranslatorEnginePlugin*>(dynamic_cast<const VirtualTextTranslatorTranslatorEnginePlugin*>(self));
    if (vtexttranslatortranslatorengineplugin && vtexttranslatortranslatorengineplugin->isVirtualTextTranslatorTranslatorEnginePlugin) {
        return vtexttranslatortranslatorengineplugin->senderSignalIndex();
    } else {
        return ((VirtualTextTranslatorTranslatorEnginePlugin*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int TextTranslator__TranslatorEnginePlugin_SuperSenderSignalIndex(const TextTranslator__TranslatorEnginePlugin* self) {
    auto* vtexttranslatortranslatorengineplugin = const_cast<VirtualTextTranslatorTranslatorEnginePlugin*>(dynamic_cast<const VirtualTextTranslatorTranslatorEnginePlugin*>(self));
    if (vtexttranslatortranslatorengineplugin && vtexttranslatortranslatorengineplugin->isVirtualTextTranslatorTranslatorEnginePlugin) {
        vtexttranslatortranslatorengineplugin->setTextTranslator__TranslatorEnginePlugin_SenderSignalIndex_IsBase(true);
        return vtexttranslatortranslatorengineplugin->senderSignalIndex();
    } else {
        return ((VirtualTextTranslatorTranslatorEnginePlugin*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorEnginePlugin_OnSenderSignalIndex(const TextTranslator__TranslatorEnginePlugin* self, intptr_t slot) {
    auto* vtexttranslatortranslatorengineplugin = const_cast<VirtualTextTranslatorTranslatorEnginePlugin*>(dynamic_cast<const VirtualTextTranslatorTranslatorEnginePlugin*>(self));
    if (vtexttranslatortranslatorengineplugin && vtexttranslatortranslatorengineplugin->isVirtualTextTranslatorTranslatorEnginePlugin) {
        vtexttranslatortranslatorengineplugin->setTextTranslator__TranslatorEnginePlugin_SenderSignalIndex_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorEnginePlugin::TextTranslator__TranslatorEnginePlugin_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int TextTranslator__TranslatorEnginePlugin_Receivers(const TextTranslator__TranslatorEnginePlugin* self, const char* signal) {
    auto* vtexttranslatortranslatorengineplugin = const_cast<VirtualTextTranslatorTranslatorEnginePlugin*>(dynamic_cast<const VirtualTextTranslatorTranslatorEnginePlugin*>(self));
    if (vtexttranslatortranslatorengineplugin && vtexttranslatortranslatorengineplugin->isVirtualTextTranslatorTranslatorEnginePlugin) {
        return vtexttranslatortranslatorengineplugin->receivers(signal);
    } else {
        return ((VirtualTextTranslatorTranslatorEnginePlugin*)self)->receivers(signal);
    }
}

// Base class handler implementation
int TextTranslator__TranslatorEnginePlugin_SuperReceivers(const TextTranslator__TranslatorEnginePlugin* self, const char* signal) {
    auto* vtexttranslatortranslatorengineplugin = const_cast<VirtualTextTranslatorTranslatorEnginePlugin*>(dynamic_cast<const VirtualTextTranslatorTranslatorEnginePlugin*>(self));
    if (vtexttranslatortranslatorengineplugin && vtexttranslatortranslatorengineplugin->isVirtualTextTranslatorTranslatorEnginePlugin) {
        vtexttranslatortranslatorengineplugin->setTextTranslator__TranslatorEnginePlugin_Receivers_IsBase(true);
        return vtexttranslatortranslatorengineplugin->receivers(signal);
    } else {
        return ((VirtualTextTranslatorTranslatorEnginePlugin*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorEnginePlugin_OnReceivers(const TextTranslator__TranslatorEnginePlugin* self, intptr_t slot) {
    auto* vtexttranslatortranslatorengineplugin = const_cast<VirtualTextTranslatorTranslatorEnginePlugin*>(dynamic_cast<const VirtualTextTranslatorTranslatorEnginePlugin*>(self));
    if (vtexttranslatortranslatorengineplugin && vtexttranslatortranslatorengineplugin->isVirtualTextTranslatorTranslatorEnginePlugin) {
        vtexttranslatortranslatorengineplugin->setTextTranslator__TranslatorEnginePlugin_Receivers_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorEnginePlugin::TextTranslator__TranslatorEnginePlugin_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextTranslator__TranslatorEnginePlugin_IsSignalConnected(const TextTranslator__TranslatorEnginePlugin* self, const QMetaMethod* signal) {
    auto* vtexttranslatortranslatorengineplugin = const_cast<VirtualTextTranslatorTranslatorEnginePlugin*>(dynamic_cast<const VirtualTextTranslatorTranslatorEnginePlugin*>(self));
    if (vtexttranslatortranslatorengineplugin && vtexttranslatortranslatorengineplugin->isVirtualTextTranslatorTranslatorEnginePlugin) {
        return vtexttranslatortranslatorengineplugin->isSignalConnected(*signal);
    } else {
        return ((VirtualTextTranslatorTranslatorEnginePlugin*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool TextTranslator__TranslatorEnginePlugin_SuperIsSignalConnected(const TextTranslator__TranslatorEnginePlugin* self, const QMetaMethod* signal) {
    auto* vtexttranslatortranslatorengineplugin = const_cast<VirtualTextTranslatorTranslatorEnginePlugin*>(dynamic_cast<const VirtualTextTranslatorTranslatorEnginePlugin*>(self));
    if (vtexttranslatortranslatorengineplugin && vtexttranslatortranslatorengineplugin->isVirtualTextTranslatorTranslatorEnginePlugin) {
        vtexttranslatortranslatorengineplugin->setTextTranslator__TranslatorEnginePlugin_IsSignalConnected_IsBase(true);
        return vtexttranslatortranslatorengineplugin->isSignalConnected(*signal);
    } else {
        return ((VirtualTextTranslatorTranslatorEnginePlugin*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorEnginePlugin_OnIsSignalConnected(const TextTranslator__TranslatorEnginePlugin* self, intptr_t slot) {
    auto* vtexttranslatortranslatorengineplugin = const_cast<VirtualTextTranslatorTranslatorEnginePlugin*>(dynamic_cast<const VirtualTextTranslatorTranslatorEnginePlugin*>(self));
    if (vtexttranslatortranslatorengineplugin && vtexttranslatortranslatorengineplugin->isVirtualTextTranslatorTranslatorEnginePlugin) {
        vtexttranslatortranslatorengineplugin->setTextTranslator__TranslatorEnginePlugin_IsSignalConnected_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorEnginePlugin::TextTranslator__TranslatorEnginePlugin_IsSignalConnected_Callback>(slot));
    }
}

void TextTranslator__TranslatorEnginePlugin_Delete(TextTranslator__TranslatorEnginePlugin* self) {
    delete self;
}
