#include <QString>
#define WORKAROUND_INNER_CLASS_DEFINITION_TextEmoticonsCore__CustomEmoji
#include <customemoji.h>
#include "libcustomemoji.h"
#include "libcustomemoji.hxx"

TextEmoticonsCore__CustomEmoji* TextEmoticonsCore__CustomEmoji_new() {
    return new TextEmoticonsCore::CustomEmoji();
}

TextEmoticonsCore__CustomEmoji* TextEmoticonsCore__CustomEmoji_new2(const TextEmoticonsCore__CustomEmoji* param1) {
    return new TextEmoticonsCore::CustomEmoji(*param1);
}

libqt_string TextEmoticonsCore__CustomEmoji_Identifier(const TextEmoticonsCore__CustomEmoji* self) {
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

void TextEmoticonsCore__CustomEmoji_SetIdentifier(TextEmoticonsCore__CustomEmoji* self, const libqt_string newIdentifier) {
    QString newIdentifier_QString = QString::fromUtf8(newIdentifier.data, newIdentifier.len);
    self->setIdentifier(newIdentifier_QString);
}

libqt_string TextEmoticonsCore__CustomEmoji_Category(const TextEmoticonsCore__CustomEmoji* self) {
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

bool TextEmoticonsCore__CustomEmoji_IsAnimatedEmoji(const TextEmoticonsCore__CustomEmoji* self) {
    return self->isAnimatedEmoji();
}

void TextEmoticonsCore__CustomEmoji_SetIsAnimatedEmoji(TextEmoticonsCore__CustomEmoji* self, bool newIsAnimatedEmoji) {
    self->setIsAnimatedEmoji(newIsAnimatedEmoji);
}

void TextEmoticonsCore__CustomEmoji_Delete(TextEmoticonsCore__CustomEmoji* self) {
    delete self;
}
