#include <QList>
#include <QString>
#define WORKAROUND_INNER_CLASS_DEFINITION_TextGrammarCheck__GrammarAction
#include <grammaraction.h>
#include "libgrammaraction.h"
#include "libgrammaraction.hxx"

TextGrammarCheck__GrammarAction* TextGrammarCheck__GrammarAction_new() {
    return new TextGrammarCheck::GrammarAction();
}

TextGrammarCheck__GrammarAction* TextGrammarCheck__GrammarAction_new2(const TextGrammarCheck__GrammarAction* param1) {
    return new TextGrammarCheck::GrammarAction(*param1);
}

libqt_string TextGrammarCheck__GrammarAction_Replacement(const TextGrammarCheck__GrammarAction* self) {
    QString _ret = self->replacement();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void TextGrammarCheck__GrammarAction_SetReplacement(TextGrammarCheck__GrammarAction* self, const libqt_string replacement) {
    QString replacement_QString = QString::fromUtf8(replacement.data, replacement.len);
    self->setReplacement(replacement_QString);
}

int TextGrammarCheck__GrammarAction_Start(const TextGrammarCheck__GrammarAction* self) {
    return self->start();
}

void TextGrammarCheck__GrammarAction_SetStart(TextGrammarCheck__GrammarAction* self, int start) {
    self->setStart(static_cast<int>(start));
}

int TextGrammarCheck__GrammarAction_Length(const TextGrammarCheck__GrammarAction* self) {
    return self->length();
}

void TextGrammarCheck__GrammarAction_SetLength(TextGrammarCheck__GrammarAction* self, int length) {
    self->setLength(static_cast<int>(length));
}

libqt_list /* of libqt_string */ TextGrammarCheck__GrammarAction_Suggestions(const TextGrammarCheck__GrammarAction* self) {
    QList<QString> _ret = self->suggestions();
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

void TextGrammarCheck__GrammarAction_SetSuggestions(TextGrammarCheck__GrammarAction* self, const libqt_list /* of libqt_string */ suggestions) {
    QList<QString> suggestions_QList;
    suggestions_QList.reserve(suggestions.len);
    libqt_string* suggestions_arr = static_cast<libqt_string*>(suggestions.data);
    for (size_t i = 0; i < suggestions.len; ++i) {
        QString suggestions_arr_i_QString = QString::fromUtf8(suggestions_arr[i].data, suggestions_arr[i].len);
        suggestions_QList.push_back(suggestions_arr_i_QString);
    }
    self->setSuggestions(suggestions_QList);
}

int TextGrammarCheck__GrammarAction_BlockId(const TextGrammarCheck__GrammarAction* self) {
    return self->blockId();
}

void TextGrammarCheck__GrammarAction_SetBlockId(TextGrammarCheck__GrammarAction* self, int blockId) {
    self->setBlockId(static_cast<int>(blockId));
}

libqt_list /* of libqt_string */ TextGrammarCheck__GrammarAction_InfoUrls(const TextGrammarCheck__GrammarAction* self) {
    QList<QString> _ret = self->infoUrls();
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

void TextGrammarCheck__GrammarAction_SetInfoUrls(TextGrammarCheck__GrammarAction* self, const libqt_list /* of libqt_string */ urls) {
    QList<QString> urls_QList;
    urls_QList.reserve(urls.len);
    libqt_string* urls_arr = static_cast<libqt_string*>(urls.data);
    for (size_t i = 0; i < urls.len; ++i) {
        QString urls_arr_i_QString = QString::fromUtf8(urls_arr[i].data, urls_arr[i].len);
        urls_QList.push_back(urls_arr_i_QString);
    }
    self->setInfoUrls(urls_QList);
}

void TextGrammarCheck__GrammarAction_Delete(TextGrammarCheck__GrammarAction* self) {
    delete self;
}
