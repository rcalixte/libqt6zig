#define WORKAROUND_INNER_CLASS_DEFINITION_KTextEditor__Attribute
#define WORKAROUND_INNER_CLASS_DEFINITION_KTextEditor__AttributeBlock
#include <QBrush>
#include <QSharedData>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTextCharFormat>
#include <QTextFormat>
#include <attribute.h>
#include "libattribute.h"
#include "libattribute.hxx"

KTextEditor__Attribute* KTextEditor__Attribute_new() {
    return new KTextEditor::Attribute();
}

KTextEditor__Attribute* KTextEditor__Attribute_new2(const libqt_string name, int style) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return new KTextEditor::Attribute(name_QString, static_cast<KSyntaxHighlighting::Theme::TextStyle>(style));
}

KTextEditor__Attribute* KTextEditor__Attribute_new3(const KTextEditor__Attribute* a) {
    return new KTextEditor::Attribute(*a);
}

libqt_string KTextEditor__Attribute_Name(const KTextEditor__Attribute* self) {
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

void KTextEditor__Attribute_SetName(KTextEditor__Attribute* self, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    self->setName(name_QString);
}

int KTextEditor__Attribute_DefaultStyle(const KTextEditor__Attribute* self) {
    return static_cast<int>(self->defaultStyle());
}

void KTextEditor__Attribute_SetDefaultStyle(KTextEditor__Attribute* self, int style) {
    self->setDefaultStyle(static_cast<KSyntaxHighlighting::Theme::TextStyle>(style));
}

bool KTextEditor__Attribute_SkipSpellChecking(const KTextEditor__Attribute* self) {
    return self->skipSpellChecking();
}

void KTextEditor__Attribute_SetSkipSpellChecking(KTextEditor__Attribute* self, bool skipspellchecking) {
    self->setSkipSpellChecking(skipspellchecking);
}

bool KTextEditor__Attribute_FontBold(const KTextEditor__Attribute* self) {
    return self->fontBold();
}

void KTextEditor__Attribute_SetFontBold(KTextEditor__Attribute* self) {
    self->setFontBold();
}

QBrush* KTextEditor__Attribute_Outline(const KTextEditor__Attribute* self) {
    return new QBrush(self->outline());
}

void KTextEditor__Attribute_SetOutline(KTextEditor__Attribute* self, const QBrush* brush) {
    self->setOutline(*brush);
}

QBrush* KTextEditor__Attribute_SelectedForeground(const KTextEditor__Attribute* self) {
    return new QBrush(self->selectedForeground());
}

void KTextEditor__Attribute_SetSelectedForeground(KTextEditor__Attribute* self, const QBrush* foreground) {
    self->setSelectedForeground(*foreground);
}

QBrush* KTextEditor__Attribute_SelectedBackground(const KTextEditor__Attribute* self) {
    return new QBrush(self->selectedBackground());
}

void KTextEditor__Attribute_SetSelectedBackground(KTextEditor__Attribute* self, const QBrush* brush) {
    self->setSelectedBackground(*brush);
}

bool KTextEditor__Attribute_BackgroundFillWhitespace(const KTextEditor__Attribute* self) {
    return self->backgroundFillWhitespace();
}

void KTextEditor__Attribute_SetBackgroundFillWhitespace(KTextEditor__Attribute* self, bool fillWhitespace) {
    self->setBackgroundFillWhitespace(fillWhitespace);
}

void KTextEditor__Attribute_Clear(KTextEditor__Attribute* self) {
    self->clear();
}

bool KTextEditor__Attribute_HasAnyProperty(const KTextEditor__Attribute* self) {
    return self->hasAnyProperty();
}

void KTextEditor__Attribute_OperatorAssign(KTextEditor__Attribute* self, const KTextEditor__Attribute* a) {
    self->operator=(*a);
}

void KTextEditor__Attribute_SetFontBold1(KTextEditor__Attribute* self, bool bold) {
    self->setFontBold(bold);
}

void KTextEditor__Attribute_Delete(KTextEditor__Attribute* self) {
    delete self;
}

KTextEditor__AttributeBlock* KTextEditor__AttributeBlock_new(const KTextEditor__AttributeBlock* param1) {
    return new KTextEditor::AttributeBlock(*param1);
}

int KTextEditor__AttributeBlock_Start(const KTextEditor__AttributeBlock* self) {
    return self->start;
}

void KTextEditor__AttributeBlock_SetStart(KTextEditor__AttributeBlock* self, int start) {
    self->start = static_cast<int>(start);
}

int KTextEditor__AttributeBlock_Length(const KTextEditor__AttributeBlock* self) {
    return self->length;
}

void KTextEditor__AttributeBlock_SetLength(KTextEditor__AttributeBlock* self, int length) {
    self->length = static_cast<int>(length);
}

void KTextEditor__AttributeBlock_OperatorAssign(KTextEditor__AttributeBlock* self, const KTextEditor__AttributeBlock* param1) {
    self->operator=(*param1);
}

void KTextEditor__AttributeBlock_Delete(KTextEditor__AttributeBlock* self) {
    delete self;
}
