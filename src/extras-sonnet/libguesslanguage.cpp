#include <QList>
#include <QString>
#include <QByteArray>
#include <cstring>
#define WORKAROUND_INNER_CLASS_DEFINITION_Sonnet__GuessLanguage
#include <guesslanguage.h>
#include "libguesslanguage.h"
#include "libguesslanguage.hxx"

Sonnet__GuessLanguage* Sonnet__GuessLanguage_new() {
    return new Sonnet::GuessLanguage();
}

void Sonnet__GuessLanguage_SetLimits(Sonnet__GuessLanguage* self, int maxItems, double minConfidence) {
    self->setLimits(static_cast<int>(maxItems), static_cast<double>(minConfidence));
}

libqt_string Sonnet__GuessLanguage_Identify(const Sonnet__GuessLanguage* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    QString _ret = self->identify(text_QString);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string Sonnet__GuessLanguage_Identify2(const Sonnet__GuessLanguage* self, const libqt_string text, const libqt_list /* of libqt_string */ suggestions) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    QList<QString> suggestions_QList;
    suggestions_QList.reserve(suggestions.len);
    libqt_string* suggestions_arr = static_cast<libqt_string*>(suggestions.data);
    for (size_t i = 0; i < suggestions.len; ++i) {
        QString suggestions_arr_i_QString = QString::fromUtf8(suggestions_arr[i].data, suggestions_arr[i].len);
        suggestions_QList.push_back(suggestions_arr_i_QString);
    }
    QString _ret = self->identify(text_QString, suggestions_QList);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void Sonnet__GuessLanguage_Delete(Sonnet__GuessLanguage* self) {
    delete self;
}
