#include <QChar>
#include <QList>
#include <QString>
#define WORKAROUND_INNER_CLASS_DEFINITION_TextAutoCorrectionCore__AutoCorrectionUtils
#define WORKAROUND_INNER_CLASS_DEFINITION_TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes
#include <autocorrectionutils.h>
#include "libautocorrectionutils.h"
#include "libautocorrectionutils.hxx"

TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes* TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes_new(const TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes* other) {
    return new TextAutoCorrectionCore::AutoCorrectionUtils::TypographicQuotes(*other);
}

TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes* TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes_new2(TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes* other) {
    return new TextAutoCorrectionCore::AutoCorrectionUtils::TypographicQuotes(std::move(*other));
}

void TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes_CopyAssign(TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes* self, TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes* other) {
    *self = *other;
}

void TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes_MoveAssign(TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes* self, TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes* other) {
    *self = std::move(*other);
}

QChar* TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes_Begin(const TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes* self) {
    return new QChar(self->begin);
}

void TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes_SetBegin(TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes* self, QChar* begin) {
    self->begin = *begin;
}

QChar* TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes_End(const TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes* self) {
    return new QChar(self->end);
}

void TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes_SetEnd(TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes* self, QChar* end) {
    self->end = *end;
}

libqt_string TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes_ToString(const TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes* self) {
    QString _ret = self->toString();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes_IsEmpty(const TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes* self) {
    return self->isEmpty();
}

TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes* TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes_FromString(const libqt_string str) {
    QString str_QString = QString::fromUtf8(str.data, str.len);
    return new TextAutoCorrectionCore::AutoCorrectionUtils::TypographicQuotes(TextAutoCorrectionCore::AutoCorrectionUtils::TypographicQuotes::fromString(str_QString));
}

void TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes_Delete(TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes* self) {
    delete self;
}

TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes* TextAutoCorrectionCore__AutoCorrectionUtils_TypographicDefaultSingleQuotes() {
    return new TextAutoCorrectionCore::AutoCorrectionUtils::TypographicQuotes(TextAutoCorrectionCore::AutoCorrectionUtils::typographicDefaultSingleQuotes());
}

TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes* TextAutoCorrectionCore__AutoCorrectionUtils_TypographicDefaultDoubleQuotes() {
    return new TextAutoCorrectionCore::AutoCorrectionUtils::TypographicQuotes(TextAutoCorrectionCore::AutoCorrectionUtils::typographicDefaultDoubleQuotes());
}

TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes* TextAutoCorrectionCore__AutoCorrectionUtils_TypographicDefaultFrenchQuotes() {
    return new TextAutoCorrectionCore::AutoCorrectionUtils::TypographicQuotes(TextAutoCorrectionCore::AutoCorrectionUtils::typographicDefaultFrenchQuotes());
}

libqt_string TextAutoCorrectionCore__AutoCorrectionUtils_LibreofficeFile(const libqt_string param1) {
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    QString _ret = TextAutoCorrectionCore::AutoCorrectionUtils::libreofficeFile(param1_QString);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_list /* of libqt_string */ TextAutoCorrectionCore__AutoCorrectionUtils_LibreOfficeAutoCorrectionPath() {
    QList<QString> _ret = TextAutoCorrectionCore::AutoCorrectionUtils::libreOfficeAutoCorrectionPath();
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        QString _lv_ret = _ret[i];
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _lv_b = _lv_ret.toUtf8();
        libqt_string _lv_str;
        _lv_str.len = _lv_b.length();
        _lv_str.data = static_cast<const char*>(malloc(_lv_str.len + 1));
        memcpy((void*)_lv_str.data, _lv_b.data(), _lv_str.len);
        ((char*)_lv_str.data)[_lv_str.len] = '\0';
        _arr[i] = _lv_str;
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_list /* of libqt_string */ TextAutoCorrectionCore__AutoCorrectionUtils_SearchAutoCorrectLibreOfficeFiles() {
    QList<QString> _ret = TextAutoCorrectionCore::AutoCorrectionUtils::searchAutoCorrectLibreOfficeFiles();
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        QString _lv_ret = _ret[i];
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _lv_b = _lv_ret.toUtf8();
        libqt_string _lv_str;
        _lv_str.len = _lv_b.length();
        _lv_str.data = static_cast<const char*>(malloc(_lv_str.len + 1));
        memcpy((void*)_lv_str.data, _lv_b.data(), _lv_str.len);
        ((char*)_lv_str.data)[_lv_str.len] = '\0';
        _arr[i] = _lv_str;
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_list /* of libqt_string */ TextAutoCorrectionCore__AutoCorrectionUtils_AutoCorrectLibreOfficeLanguageToString(const libqt_list /* of libqt_string */ param1) {
    QList<QString> param1_QList;
    param1_QList.reserve(param1.len);
    libqt_string* param1_arr = static_cast<libqt_string*>(param1.data);
    for (size_t i = 0; i < param1.len; ++i) {
        QString param1_arr_i_QString = QString::fromUtf8(param1_arr[i].data, param1_arr[i].len);
        param1_QList.push_back(param1_arr_i_QString);
    }
    QList<QString> _ret = TextAutoCorrectionCore::AutoCorrectionUtils::autoCorrectLibreOfficeLanguageToString(param1_QList);
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        QString _lv_ret = _ret[i];
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _lv_b = _lv_ret.toUtf8();
        libqt_string _lv_str;
        _lv_str.len = _lv_b.length();
        _lv_str.data = static_cast<const char*>(malloc(_lv_str.len + 1));
        memcpy((void*)_lv_str.data, _lv_b.data(), _lv_str.len);
        ((char*)_lv_str.data)[_lv_str.len] = '\0';
        _arr[i] = _lv_str;
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_string TextAutoCorrectionCore__AutoCorrectionUtils_LibreOfficeWritableLocalAutoCorrectionPath() {
    QString _ret = TextAutoCorrectionCore::AutoCorrectionUtils::libreOfficeWritableLocalAutoCorrectionPath();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string TextAutoCorrectionCore__AutoCorrectionUtils_ContainsAutoCorrectionFile(const libqt_string param1, const libqt_string param2, const libqt_string param3) {
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    QString param2_QString = QString::fromUtf8(param2.data, param2.len);
    QString param3_QString = QString::fromUtf8(param3.data, param3.len);
    QString _ret = TextAutoCorrectionCore::AutoCorrectionUtils::containsAutoCorrectionFile(param1_QString, param2_QString, param3_QString);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string TextAutoCorrectionCore__AutoCorrectionUtils_LibreOfficeSystemPath() {
    QString _ret = TextAutoCorrectionCore::AutoCorrectionUtils::libreOfficeSystemPath();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string TextAutoCorrectionCore__AutoCorrectionUtils_LibreOfficeLocalPath() {
    QString _ret = TextAutoCorrectionCore::AutoCorrectionUtils::libreOfficeLocalPath();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_list /* of libqt_string */ TextAutoCorrectionCore__AutoCorrectionUtils_WordsFromSentence(const libqt_string param1) {
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    QList<QString> _ret = TextAutoCorrectionCore::AutoCorrectionUtils::wordsFromSentence(param1_QString);
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        QString _lv_ret = _ret[i];
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _lv_b = _lv_ret.toUtf8();
        libqt_string _lv_str;
        _lv_str.len = _lv_b.length();
        _lv_str.data = static_cast<const char*>(malloc(_lv_str.len + 1));
        memcpy((void*)_lv_str.data, _lv_b.data(), _lv_str.len);
        ((char*)_lv_str.data)[_lv_str.len] = '\0';
        _arr[i] = _lv_str;
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}
