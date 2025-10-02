#include <KSyntaxHighlighting/Format>
#include <KSyntaxHighlighting/Theme>
#include <QColor>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <format.h>
#include "libformat.h"
#include "libformat.hxx"

KSyntaxHighlighting__Format* KSyntaxHighlighting__Format_new() {
    return new KSyntaxHighlighting::Format();
}

KSyntaxHighlighting__Format* KSyntaxHighlighting__Format_new2(const KSyntaxHighlighting__Format* other) {
    return new KSyntaxHighlighting::Format(*other);
}

void KSyntaxHighlighting__Format_OperatorAssign(KSyntaxHighlighting__Format* self, const KSyntaxHighlighting__Format* other) {
    self->operator=(*other);
}

bool KSyntaxHighlighting__Format_IsValid(const KSyntaxHighlighting__Format* self) {
    return self->isValid();
}

libqt_string KSyntaxHighlighting__Format_Name(const KSyntaxHighlighting__Format* self) {
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

int KSyntaxHighlighting__Format_Id(const KSyntaxHighlighting__Format* self) {
    return self->id();
}

int KSyntaxHighlighting__Format_TextStyle(const KSyntaxHighlighting__Format* self) {
    return static_cast<int>(self->textStyle());
}

bool KSyntaxHighlighting__Format_IsDefaultTextStyle(const KSyntaxHighlighting__Format* self, const KSyntaxHighlighting__Theme* theme) {
    return self->isDefaultTextStyle(*theme);
}

bool KSyntaxHighlighting__Format_HasTextColor(const KSyntaxHighlighting__Format* self, const KSyntaxHighlighting__Theme* theme) {
    return self->hasTextColor(*theme);
}

QColor* KSyntaxHighlighting__Format_TextColor(const KSyntaxHighlighting__Format* self, const KSyntaxHighlighting__Theme* theme) {
    return new QColor(self->textColor(*theme));
}

QColor* KSyntaxHighlighting__Format_SelectedTextColor(const KSyntaxHighlighting__Format* self, const KSyntaxHighlighting__Theme* theme) {
    return new QColor(self->selectedTextColor(*theme));
}

bool KSyntaxHighlighting__Format_HasBackgroundColor(const KSyntaxHighlighting__Format* self, const KSyntaxHighlighting__Theme* theme) {
    return self->hasBackgroundColor(*theme);
}

QColor* KSyntaxHighlighting__Format_BackgroundColor(const KSyntaxHighlighting__Format* self, const KSyntaxHighlighting__Theme* theme) {
    return new QColor(self->backgroundColor(*theme));
}

QColor* KSyntaxHighlighting__Format_SelectedBackgroundColor(const KSyntaxHighlighting__Format* self, const KSyntaxHighlighting__Theme* theme) {
    return new QColor(self->selectedBackgroundColor(*theme));
}

bool KSyntaxHighlighting__Format_IsBold(const KSyntaxHighlighting__Format* self, const KSyntaxHighlighting__Theme* theme) {
    return self->isBold(*theme);
}

bool KSyntaxHighlighting__Format_IsItalic(const KSyntaxHighlighting__Format* self, const KSyntaxHighlighting__Theme* theme) {
    return self->isItalic(*theme);
}

bool KSyntaxHighlighting__Format_IsUnderline(const KSyntaxHighlighting__Format* self, const KSyntaxHighlighting__Theme* theme) {
    return self->isUnderline(*theme);
}

bool KSyntaxHighlighting__Format_IsStrikeThrough(const KSyntaxHighlighting__Format* self, const KSyntaxHighlighting__Theme* theme) {
    return self->isStrikeThrough(*theme);
}

bool KSyntaxHighlighting__Format_SpellCheck(const KSyntaxHighlighting__Format* self) {
    return self->spellCheck();
}

bool KSyntaxHighlighting__Format_HasBoldOverride(const KSyntaxHighlighting__Format* self) {
    return self->hasBoldOverride();
}

bool KSyntaxHighlighting__Format_HasItalicOverride(const KSyntaxHighlighting__Format* self) {
    return self->hasItalicOverride();
}

bool KSyntaxHighlighting__Format_HasUnderlineOverride(const KSyntaxHighlighting__Format* self) {
    return self->hasUnderlineOverride();
}

bool KSyntaxHighlighting__Format_HasStrikeThroughOverride(const KSyntaxHighlighting__Format* self) {
    return self->hasStrikeThroughOverride();
}

bool KSyntaxHighlighting__Format_HasTextColorOverride(const KSyntaxHighlighting__Format* self) {
    return self->hasTextColorOverride();
}

bool KSyntaxHighlighting__Format_HasBackgroundColorOverride(const KSyntaxHighlighting__Format* self) {
    return self->hasBackgroundColorOverride();
}

bool KSyntaxHighlighting__Format_HasSelectedTextColorOverride(const KSyntaxHighlighting__Format* self) {
    return self->hasSelectedTextColorOverride();
}

bool KSyntaxHighlighting__Format_HasSelectedBackgroundColorOverride(const KSyntaxHighlighting__Format* self) {
    return self->hasSelectedBackgroundColorOverride();
}

void KSyntaxHighlighting__Format_Delete(KSyntaxHighlighting__Format* self) {
    delete self;
}
