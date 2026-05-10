#include <QColor>
#include <QJsonObject>
#include <QList>
#include <QString>
#define WORKAROUND_INNER_CLASS_DEFINITION_TextGrammarCheck__GrammarError
#include <grammarerror.h>
#include "libgrammarerror.h"
#include "libgrammarerror.hxx"

TextGrammarCheck__GrammarError* TextGrammarCheck__GrammarError_new() {
    return new VirtualTextGrammarCheckGrammarError();
}

TextGrammarCheck__GrammarError* TextGrammarCheck__GrammarError_new2(const TextGrammarCheck__GrammarError* param1) {
    return new VirtualTextGrammarCheckGrammarError(*param1);
}

QColor* TextGrammarCheck__GrammarError_Color(const TextGrammarCheck__GrammarError* self) {
    return new QColor(self->color());
}

void TextGrammarCheck__GrammarError_SetColor(TextGrammarCheck__GrammarError* self, const QColor* color) {
    self->setColor(*color);
}

libqt_string TextGrammarCheck__GrammarError_Error(const TextGrammarCheck__GrammarError* self) {
    QString _ret = self->error();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void TextGrammarCheck__GrammarError_SetError(TextGrammarCheck__GrammarError* self, const libqt_string errorVal) {
    QString errorVal_QString = QString::fromUtf8(errorVal.data, errorVal.len);
    self->setError(errorVal_QString);
}

int TextGrammarCheck__GrammarError_BlockId(const TextGrammarCheck__GrammarError* self) {
    return self->blockId();
}

void TextGrammarCheck__GrammarError_SetBlockId(TextGrammarCheck__GrammarError* self, int blockId) {
    self->setBlockId(static_cast<int>(blockId));
}

int TextGrammarCheck__GrammarError_Start(const TextGrammarCheck__GrammarError* self) {
    return self->start();
}

void TextGrammarCheck__GrammarError_SetStart(TextGrammarCheck__GrammarError* self, int start) {
    self->setStart(static_cast<int>(start));
}

int TextGrammarCheck__GrammarError_Length(const TextGrammarCheck__GrammarError* self) {
    return self->length();
}

void TextGrammarCheck__GrammarError_SetLength(TextGrammarCheck__GrammarError* self, int length) {
    self->setLength(static_cast<int>(length));
}

libqt_list /* of libqt_string */ TextGrammarCheck__GrammarError_Suggestions(const TextGrammarCheck__GrammarError* self) {
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

void TextGrammarCheck__GrammarError_SetSuggestions(TextGrammarCheck__GrammarError* self, const libqt_list /* of libqt_string */ suggestions) {
    QList<QString> suggestions_QList;
    suggestions_QList.reserve(suggestions.len);
    libqt_string* suggestions_arr = static_cast<libqt_string*>(suggestions.data);
    for (size_t i = 0; i < suggestions.len; ++i) {
        QString suggestions_arr_i_QString = QString::fromUtf8(suggestions_arr[i].data, suggestions_arr[i].len);
        suggestions_QList.push_back(suggestions_arr_i_QString);
    }
    self->setSuggestions(suggestions_QList);
}

bool TextGrammarCheck__GrammarError_IsValid(const TextGrammarCheck__GrammarError* self) {
    return self->isValid();
}

void TextGrammarCheck__GrammarError_Parse(TextGrammarCheck__GrammarError* self, const QJsonObject* obj, int blockindex) {
    auto* vtextgrammarcheck__grammarerror = dynamic_cast<VirtualTextGrammarCheckGrammarError*>(self);
    if (vtextgrammarcheck__grammarerror && vtextgrammarcheck__grammarerror->isVirtualTextGrammarCheckGrammarError) {
        self->parse(*obj, static_cast<int>(blockindex));
    } else {
        ((VirtualTextGrammarCheckGrammarError*)self)->parse(*obj, static_cast<int>(blockindex));
    }
}

bool TextGrammarCheck__GrammarError_OperatorEqual(const TextGrammarCheck__GrammarError* self, const TextGrammarCheck__GrammarError* other) {
    return (*self == *other);
}

libqt_string TextGrammarCheck__GrammarError_Option(const TextGrammarCheck__GrammarError* self) {
    QString _ret = self->option();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void TextGrammarCheck__GrammarError_SetOption(TextGrammarCheck__GrammarError* self, const libqt_string option) {
    QString option_QString = QString::fromUtf8(option.data, option.len);
    self->setOption(option_QString);
}

libqt_string TextGrammarCheck__GrammarError_Rule(const TextGrammarCheck__GrammarError* self) {
    QString _ret = self->rule();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void TextGrammarCheck__GrammarError_SetRule(TextGrammarCheck__GrammarError* self, const libqt_string rule) {
    QString rule_QString = QString::fromUtf8(rule.data, rule.len);
    self->setRule(rule_QString);
}

libqt_string TextGrammarCheck__GrammarError_Url(const TextGrammarCheck__GrammarError* self) {
    QString _ret = self->url();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void TextGrammarCheck__GrammarError_SetUrl(TextGrammarCheck__GrammarError* self, const libqt_string url) {
    QString url_QString = QString::fromUtf8(url.data, url.len);
    self->setUrl(url_QString);
}

// Base class handler implementation
void TextGrammarCheck__GrammarError_SuperParse(TextGrammarCheck__GrammarError* self, const QJsonObject* obj, int blockindex) {
    auto* vtextgrammarcheckgrammarerror = dynamic_cast<VirtualTextGrammarCheckGrammarError*>(self);
    if (vtextgrammarcheckgrammarerror && vtextgrammarcheckgrammarerror->isVirtualTextGrammarCheckGrammarError) {
        vtextgrammarcheckgrammarerror->setTextGrammarCheck__GrammarError_Parse_IsBase(true);
        vtextgrammarcheckgrammarerror->parse(*obj, static_cast<int>(blockindex));
    } else {
        self->TextGrammarCheck::GrammarError::parse(*obj, static_cast<int>(blockindex));
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarError_OnParse(TextGrammarCheck__GrammarError* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammarerror = dynamic_cast<VirtualTextGrammarCheckGrammarError*>(self);
    if (vtextgrammarcheckgrammarerror && vtextgrammarcheckgrammarerror->isVirtualTextGrammarCheckGrammarError) {
        vtextgrammarcheckgrammarerror->setTextGrammarCheck__GrammarError_Parse_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammarError::TextGrammarCheck__GrammarError_Parse_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammarError_OperatorAssign(TextGrammarCheck__GrammarError* self, const TextGrammarCheck__GrammarError* param1) {
    auto* vtextgrammarcheckgrammarerror = dynamic_cast<VirtualTextGrammarCheckGrammarError*>(self);
    if (vtextgrammarcheckgrammarerror && vtextgrammarcheckgrammarerror->isVirtualTextGrammarCheckGrammarError) {
        vtextgrammarcheckgrammarerror->operator=(*param1);
    } else {
        ((VirtualTextGrammarCheckGrammarError*)self)->operator=(*param1);
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammarError_SuperOperatorAssign(TextGrammarCheck__GrammarError* self, const TextGrammarCheck__GrammarError* param1) {
    auto* vtextgrammarcheckgrammarerror = dynamic_cast<VirtualTextGrammarCheckGrammarError*>(self);
    if (vtextgrammarcheckgrammarerror && vtextgrammarcheckgrammarerror->isVirtualTextGrammarCheckGrammarError) {
        vtextgrammarcheckgrammarerror->setTextGrammarCheck__GrammarError_OperatorAssign_IsBase(true);
        vtextgrammarcheckgrammarerror->operator=(*param1);
    } else {
        ((VirtualTextGrammarCheckGrammarError*)self)->operator=(*param1);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarError_OnOperatorAssign(TextGrammarCheck__GrammarError* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammarerror = dynamic_cast<VirtualTextGrammarCheckGrammarError*>(self);
    if (vtextgrammarcheckgrammarerror && vtextgrammarcheckgrammarerror->isVirtualTextGrammarCheckGrammarError) {
        vtextgrammarcheckgrammarerror->setTextGrammarCheck__GrammarError_OperatorAssign_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammarError::TextGrammarCheck__GrammarError_OperatorAssign_Callback>(slot));
    }
}

void TextGrammarCheck__GrammarError_Delete(TextGrammarCheck__GrammarError* self) {
    delete self;
}
