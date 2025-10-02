#include <KSyntaxHighlighting/Theme>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <theme.h>
#include "libtheme.h"
#include "libtheme.hxx"

KSyntaxHighlighting__Theme* KSyntaxHighlighting__Theme_new() {
    return new KSyntaxHighlighting::Theme();
}

KSyntaxHighlighting__Theme* KSyntaxHighlighting__Theme_new2(const KSyntaxHighlighting__Theme* copyVal) {
    return new KSyntaxHighlighting::Theme(*copyVal);
}

void KSyntaxHighlighting__Theme_OperatorAssign(KSyntaxHighlighting__Theme* self, const KSyntaxHighlighting__Theme* other) {
    self->operator=(*other);
}

bool KSyntaxHighlighting__Theme_IsValid(const KSyntaxHighlighting__Theme* self) {
    return self->isValid();
}

libqt_string KSyntaxHighlighting__Theme_Name(const KSyntaxHighlighting__Theme* self) {
    QString _ret = self->name();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KSyntaxHighlighting__Theme_TranslatedName(const KSyntaxHighlighting__Theme* self) {
    QString _ret = self->translatedName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool KSyntaxHighlighting__Theme_IsReadOnly(const KSyntaxHighlighting__Theme* self) {
    return self->isReadOnly();
}

libqt_string KSyntaxHighlighting__Theme_FilePath(const KSyntaxHighlighting__Theme* self) {
    QString _ret = self->filePath();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

unsigned int KSyntaxHighlighting__Theme_TextColor(const KSyntaxHighlighting__Theme* self, int style) {
    return static_cast<unsigned int>(self->textColor(static_cast<KSyntaxHighlighting::Theme::TextStyle>(style)));
}

unsigned int KSyntaxHighlighting__Theme_SelectedTextColor(const KSyntaxHighlighting__Theme* self, int style) {
    return static_cast<unsigned int>(self->selectedTextColor(static_cast<KSyntaxHighlighting::Theme::TextStyle>(style)));
}

unsigned int KSyntaxHighlighting__Theme_BackgroundColor(const KSyntaxHighlighting__Theme* self, int style) {
    return static_cast<unsigned int>(self->backgroundColor(static_cast<KSyntaxHighlighting::Theme::TextStyle>(style)));
}

unsigned int KSyntaxHighlighting__Theme_SelectedBackgroundColor(const KSyntaxHighlighting__Theme* self, int style) {
    return static_cast<unsigned int>(self->selectedBackgroundColor(static_cast<KSyntaxHighlighting::Theme::TextStyle>(style)));
}

bool KSyntaxHighlighting__Theme_IsBold(const KSyntaxHighlighting__Theme* self, int style) {
    return self->isBold(static_cast<KSyntaxHighlighting::Theme::TextStyle>(style));
}

bool KSyntaxHighlighting__Theme_IsItalic(const KSyntaxHighlighting__Theme* self, int style) {
    return self->isItalic(static_cast<KSyntaxHighlighting::Theme::TextStyle>(style));
}

bool KSyntaxHighlighting__Theme_IsUnderline(const KSyntaxHighlighting__Theme* self, int style) {
    return self->isUnderline(static_cast<KSyntaxHighlighting::Theme::TextStyle>(style));
}

bool KSyntaxHighlighting__Theme_IsStrikeThrough(const KSyntaxHighlighting__Theme* self, int style) {
    return self->isStrikeThrough(static_cast<KSyntaxHighlighting::Theme::TextStyle>(style));
}

unsigned int KSyntaxHighlighting__Theme_EditorColor(const KSyntaxHighlighting__Theme* self, int role) {
    return static_cast<unsigned int>(self->editorColor(static_cast<KSyntaxHighlighting::Theme::EditorColorRole>(role)));
}

void KSyntaxHighlighting__Theme_Delete(KSyntaxHighlighting__Theme* self) {
    delete self;
}
