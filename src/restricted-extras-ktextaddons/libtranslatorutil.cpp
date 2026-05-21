#include <QComboBox>
#include <QMap>
#include <QString>
#define WORKAROUND_INNER_CLASS_DEFINITION_TextTranslator__TranslatorUtil
#define WORKAROUND_INNER_CLASS_DEFINITION_TextTranslator__TranslatorUtil__TranslatorSettings
#include <translatorutil.h>
#include "libtranslatorutil.h"
#include "libtranslatorutil.hxx"

TextTranslator__TranslatorUtil* TextTranslator__TranslatorUtil_new(const TextTranslator__TranslatorUtil* other) {
    return new TextTranslator::TranslatorUtil(*other);
}

TextTranslator__TranslatorUtil* TextTranslator__TranslatorUtil_new2(TextTranslator__TranslatorUtil* other) {
    return new TextTranslator::TranslatorUtil(std::move(*other));
}

TextTranslator__TranslatorUtil* TextTranslator__TranslatorUtil_new3() {
    return new TextTranslator::TranslatorUtil();
}

void TextTranslator__TranslatorUtil_CopyAssign(TextTranslator__TranslatorUtil* self, TextTranslator__TranslatorUtil* other) {
    *self = *other;
}

void TextTranslator__TranslatorUtil_MoveAssign(TextTranslator__TranslatorUtil* self, TextTranslator__TranslatorUtil* other) {
    *self = std::move(*other);
}

void TextTranslator__TranslatorUtil_AddItemToFromComboBox(TextTranslator__TranslatorUtil* self, QComboBox* combo, const libqt_string languageCode, const libqt_string translatedStr) {
    QString languageCode_QString = QString::fromUtf8(languageCode.data, languageCode.len);
    QString translatedStr_QString = QString::fromUtf8(translatedStr.data, translatedStr.len);
    self->addItemToFromComboBox(combo, languageCode_QString, translatedStr_QString);
}

libqt_map /* of int to libqt_string */ TextTranslator__TranslatorUtil_TranslatedLanguages() {
    QMap<TextTranslator::TranslatorUtil::Language, QString> _ret = TextTranslator::TranslatorUtil::translatedLanguages();
    // Convert QMap<> from C++ memory to manually-managed C memory
    int* _karr = static_cast<int*>(malloc(sizeof(int) * _ret.size()));
    libqt_string* _varr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.size()));
    int _ctr = 0;
    for (auto _itr = _ret.keyValueBegin(); _itr != _ret.keyValueEnd(); ++_itr) {
        _karr[_ctr] = static_cast<int>(_itr->first);
        auto _mapval_ret = _itr->second;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _mapval_b = _mapval_ret.toUtf8();
        libqt_string _mapval_str;
        _mapval_str.len = _mapval_b.length();
        _mapval_str.data = static_cast<const char*>(malloc(_mapval_str.len + 1));
        memcpy((void*)_mapval_str.data, _mapval_b.data(), _mapval_str.len);
        ((char*)_mapval_str.data)[_mapval_str.len] = '\0';
        _varr[_ctr] = _mapval_str;
        _ctr++;
    }
    libqt_map _out;
    _out.len = _ret.size();
    _out.keys = static_cast<void*>(_karr);
    _out.values = static_cast<void*>(_varr);
    return _out;
}

libqt_string TextTranslator__TranslatorUtil_LoadEngine() {
    auto _ret = TextTranslator::TranslatorUtil::loadEngine();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void TextTranslator__TranslatorUtil_SaveEngineSettings(const libqt_string engineName) {
    QString engineName_QString = QString::fromUtf8(engineName.data, engineName.len);
    TextTranslator::TranslatorUtil::saveEngineSettings(engineName_QString);
}

libqt_string TextTranslator__TranslatorUtil_GroupTranslateName() {
    auto _ret = TextTranslator::TranslatorUtil::groupTranslateName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string TextTranslator__TranslatorUtil_EngineTranslateName() {
    auto _ret = TextTranslator::TranslatorUtil::engineTranslateName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string TextTranslator__TranslatorUtil_DefaultEngineName() {
    auto _ret = TextTranslator::TranslatorUtil::defaultEngineName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string TextTranslator__TranslatorUtil_TranslatedLanguage(int lang) {
    auto _ret = TextTranslator::TranslatorUtil::translatedLanguage(static_cast<TextTranslator::TranslatorUtil::Language>(lang));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string TextTranslator__TranslatorUtil_LanguageCode(int lang) {
    auto _ret = TextTranslator::TranslatorUtil::languageCode(static_cast<TextTranslator::TranslatorUtil::Language>(lang));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string TextTranslator__TranslatorUtil_SearchI18nFromLanguage(const libqt_string langCode) {
    QString langCode_QString = QString::fromUtf8(langCode.data, langCode.len);
    auto _ret = TextTranslator::TranslatorUtil::searchI18nFromLanguage(langCode_QString);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int TextTranslator__TranslatorUtil_StringToLanguage(const libqt_string str) {
    QString str_QString = QString::fromUtf8(str.data, str.len);
    return static_cast<int>(TextTranslator::TranslatorUtil::stringToLanguage(str_QString));
}

void TextTranslator__TranslatorUtil_Delete(TextTranslator__TranslatorUtil* self) {
    delete self;
}

TextTranslator__TranslatorUtil__TranslatorSettings* TextTranslator__TranslatorUtil__TranslatorSettings_new(const TextTranslator__TranslatorUtil__TranslatorSettings* param1) {
    return new TextTranslator::TranslatorUtil::TranslatorSettings(*param1);
}

libqt_string TextTranslator__TranslatorUtil__TranslatorSettings_Engine(const TextTranslator__TranslatorUtil__TranslatorSettings* self) {
    auto engine_ret = self->engine;
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray engine_b = engine_ret.toUtf8();
    libqt_string engine_str;
    engine_str.len = engine_b.length();
    engine_str.data = static_cast<const char*>(malloc(engine_str.len + 1));
    memcpy((void*)engine_str.data, engine_b.data(), engine_str.len);
    ((char*)engine_str.data)[engine_str.len] = '\0';
    return engine_str;
}

void TextTranslator__TranslatorUtil__TranslatorSettings_SetEngine(TextTranslator__TranslatorUtil__TranslatorSettings* self, libqt_string engine) {
    QString engine_QString = QString::fromUtf8(engine.data, engine.len);
    self->engine = engine_QString;
}

libqt_string TextTranslator__TranslatorUtil__TranslatorSettings_From(const TextTranslator__TranslatorUtil__TranslatorSettings* self) {
    auto from_ret = self->from;
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray from_b = from_ret.toUtf8();
    libqt_string from_str;
    from_str.len = from_b.length();
    from_str.data = static_cast<const char*>(malloc(from_str.len + 1));
    memcpy((void*)from_str.data, from_b.data(), from_str.len);
    ((char*)from_str.data)[from_str.len] = '\0';
    return from_str;
}

void TextTranslator__TranslatorUtil__TranslatorSettings_SetFrom(TextTranslator__TranslatorUtil__TranslatorSettings* self, libqt_string from) {
    QString from_QString = QString::fromUtf8(from.data, from.len);
    self->from = from_QString;
}

libqt_string TextTranslator__TranslatorUtil__TranslatorSettings_To(const TextTranslator__TranslatorUtil__TranslatorSettings* self) {
    auto to_ret = self->to;
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray to_b = to_ret.toUtf8();
    libqt_string to_str;
    to_str.len = to_b.length();
    to_str.data = static_cast<const char*>(malloc(to_str.len + 1));
    memcpy((void*)to_str.data, to_b.data(), to_str.len);
    ((char*)to_str.data)[to_str.len] = '\0';
    return to_str;
}

void TextTranslator__TranslatorUtil__TranslatorSettings_SetTo(TextTranslator__TranslatorUtil__TranslatorSettings* self, libqt_string to) {
    QString to_QString = QString::fromUtf8(to.data, to.len);
    self->to = to_QString;
}

void TextTranslator__TranslatorUtil__TranslatorSettings_OperatorAssign(TextTranslator__TranslatorUtil__TranslatorSettings* self, const TextTranslator__TranslatorUtil__TranslatorSettings* param1) {
    self->operator=(*param1);
}

void TextTranslator__TranslatorUtil__TranslatorSettings_Delete(TextTranslator__TranslatorUtil__TranslatorSettings* self) {
    delete self;
}
