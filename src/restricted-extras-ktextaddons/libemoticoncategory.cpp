#include <QString>
#define WORKAROUND_INNER_CLASS_DEFINITION_TextEmoticonsCore__EmoticonCategory
#include <emoticoncategory.h>
#include "libemoticoncategory.h"
#include "libemoticoncategory.hxx"

TextEmoticonsCore__EmoticonCategory* TextEmoticonsCore__EmoticonCategory_new() {
    return new TextEmoticonsCore::EmoticonCategory();
}

TextEmoticonsCore__EmoticonCategory* TextEmoticonsCore__EmoticonCategory_new2(const TextEmoticonsCore__EmoticonCategory* param1) {
    return new TextEmoticonsCore::EmoticonCategory(*param1);
}

libqt_string TextEmoticonsCore__EmoticonCategory_Name(const TextEmoticonsCore__EmoticonCategory* self) {
    auto _ret = self->name();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void TextEmoticonsCore__EmoticonCategory_SetName(TextEmoticonsCore__EmoticonCategory* self, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    self->setName(name_QString);
}

libqt_string TextEmoticonsCore__EmoticonCategory_Category(const TextEmoticonsCore__EmoticonCategory* self) {
    auto _ret = self->category();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void TextEmoticonsCore__EmoticonCategory_SetCategory(TextEmoticonsCore__EmoticonCategory* self, const libqt_string category) {
    QString category_QString = QString::fromUtf8(category.data, category.len);
    self->setCategory(category_QString);
}

libqt_string TextEmoticonsCore__EmoticonCategory_I18nName(const TextEmoticonsCore__EmoticonCategory* self) {
    const auto _ret = self->i18nName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void TextEmoticonsCore__EmoticonCategory_SetI18nName(TextEmoticonsCore__EmoticonCategory* self, const libqt_string newI18nName) {
    QString newI18nName_QString = QString::fromUtf8(newI18nName.data, newI18nName.len);
    self->setI18nName(newI18nName_QString);
}

bool TextEmoticonsCore__EmoticonCategory_OperatorLesser(const TextEmoticonsCore__EmoticonCategory* self, const TextEmoticonsCore__EmoticonCategory* other) {
    return (*self < *other);
}

int TextEmoticonsCore__EmoticonCategory_Order(const TextEmoticonsCore__EmoticonCategory* self) {
    return self->order();
}

void TextEmoticonsCore__EmoticonCategory_SetOrder(TextEmoticonsCore__EmoticonCategory* self, int newOrder) {
    self->setOrder(static_cast<int>(newOrder));
}

void TextEmoticonsCore__EmoticonCategory_Delete(TextEmoticonsCore__EmoticonCategory* self) {
    delete self;
}
