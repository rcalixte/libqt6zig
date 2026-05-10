#include <QList>
#include <QString>
#define WORKAROUND_INNER_CLASS_DEFINITION_TextEmoticonsCore__UnicodeEmoticon
#include <unicodeemoticon.h>
#include "libunicodeemoticon.h"
#include "libunicodeemoticon.hxx"

TextEmoticonsCore__UnicodeEmoticon* TextEmoticonsCore__UnicodeEmoticon_new() {
    return new TextEmoticonsCore::UnicodeEmoticon();
}

TextEmoticonsCore__UnicodeEmoticon* TextEmoticonsCore__UnicodeEmoticon_new2(const TextEmoticonsCore__UnicodeEmoticon* param1) {
    return new TextEmoticonsCore::UnicodeEmoticon(*param1);
}

libqt_string TextEmoticonsCore__UnicodeEmoticon_Identifier(const TextEmoticonsCore__UnicodeEmoticon* self) {
    QString _ret = self->identifier();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void TextEmoticonsCore__UnicodeEmoticon_SetIdentifier(TextEmoticonsCore__UnicodeEmoticon* self, const libqt_string identifier) {
    QString identifier_QString = QString::fromUtf8(identifier.data, identifier.len);
    self->setIdentifier(identifier_QString);
}

libqt_string TextEmoticonsCore__UnicodeEmoticon_Unicode(const TextEmoticonsCore__UnicodeEmoticon* self) {
    QString _ret = self->unicode();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string TextEmoticonsCore__UnicodeEmoticon_UnicodeDisplay(const TextEmoticonsCore__UnicodeEmoticon* self) {
    QString _ret = self->unicodeDisplay();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void TextEmoticonsCore__UnicodeEmoticon_SetUnicode(TextEmoticonsCore__UnicodeEmoticon* self, const libqt_string unicode) {
    QString unicode_QString = QString::fromUtf8(unicode.data, unicode.len);
    self->setUnicode(unicode_QString);
}

libqt_string TextEmoticonsCore__UnicodeEmoticon_Category(const TextEmoticonsCore__UnicodeEmoticon* self) {
    QString _ret = self->category();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void TextEmoticonsCore__UnicodeEmoticon_SetCategory(TextEmoticonsCore__UnicodeEmoticon* self, const libqt_string category) {
    QString category_QString = QString::fromUtf8(category.data, category.len);
    self->setCategory(category_QString);
}

libqt_list /* of libqt_string */ TextEmoticonsCore__UnicodeEmoticon_Aliases(const TextEmoticonsCore__UnicodeEmoticon* self) {
    QList<QString> _ret = self->aliases();
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

void TextEmoticonsCore__UnicodeEmoticon_SetAliases(TextEmoticonsCore__UnicodeEmoticon* self, const libqt_list /* of libqt_string */ aliases) {
    QList<QString> aliases_QList;
    aliases_QList.reserve(aliases.len);
    libqt_string* aliases_arr = static_cast<libqt_string*>(aliases.data);
    for (size_t i = 0; i < aliases.len; ++i) {
        QString aliases_arr_i_QString = QString::fromUtf8(aliases_arr[i].data, aliases_arr[i].len);
        aliases_QList.push_back(aliases_arr_i_QString);
    }
    self->setAliases(aliases_QList);
}

bool TextEmoticonsCore__UnicodeEmoticon_HasEmoji(const TextEmoticonsCore__UnicodeEmoticon* self, const libqt_string identifier) {
    QString identifier_QString = QString::fromUtf8(identifier.data, identifier.len);
    return self->hasEmoji(identifier_QString);
}

bool TextEmoticonsCore__UnicodeEmoticon_IsValid(const TextEmoticonsCore__UnicodeEmoticon* self) {
    return self->isValid();
}

int TextEmoticonsCore__UnicodeEmoticon_Order(const TextEmoticonsCore__UnicodeEmoticon* self) {
    return self->order();
}

void TextEmoticonsCore__UnicodeEmoticon_SetOrder(TextEmoticonsCore__UnicodeEmoticon* self, int order) {
    self->setOrder(static_cast<int>(order));
}

libqt_string TextEmoticonsCore__UnicodeEmoticon_Key(const TextEmoticonsCore__UnicodeEmoticon* self) {
    QString _ret = self->key();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void TextEmoticonsCore__UnicodeEmoticon_SetKey(TextEmoticonsCore__UnicodeEmoticon* self, const libqt_string key) {
    QString key_QString = QString::fromUtf8(key.data, key.len);
    self->setKey(key_QString);
}

bool TextEmoticonsCore__UnicodeEmoticon_OperatorEqual(const TextEmoticonsCore__UnicodeEmoticon* self, const TextEmoticonsCore__UnicodeEmoticon* other) {
    return (*self == *other);
}

void TextEmoticonsCore__UnicodeEmoticon_Delete(TextEmoticonsCore__UnicodeEmoticon* self) {
    delete self;
}
