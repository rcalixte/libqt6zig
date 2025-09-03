#include <KIconColors>
#include <QColor>
#include <QPalette>
#include <kiconcolors.h>
#include "libkiconcolors.h"
#include "libkiconcolors.hxx"

KIconColors* KIconColors_new() {
    return new KIconColors();
}

KIconColors* KIconColors_new2(const QColor* color) {
    return new KIconColors(*color);
}

KIconColors* KIconColors_new3(const QPalette* palette) {
    return new KIconColors(*palette);
}

KIconColors* KIconColors_new4(const KIconColors* other) {
    return new KIconColors(*other);
}

void KIconColors_OperatorAssign(KIconColors* self, const KIconColors* other) {
    self->operator=(*other);
}

QColor* KIconColors_Text(const KIconColors* self) {
    return new QColor(self->text());
}

QColor* KIconColors_Highlight(const KIconColors* self) {
    return new QColor(self->highlight());
}

QColor* KIconColors_HighlightedText(const KIconColors* self) {
    return new QColor(self->highlightedText());
}

QColor* KIconColors_Accent(const KIconColors* self) {
    return new QColor(self->accent());
}

QColor* KIconColors_Background(const KIconColors* self) {
    return new QColor(self->background());
}

QColor* KIconColors_NeutralText(const KIconColors* self) {
    return new QColor(self->neutralText());
}

QColor* KIconColors_PositiveText(const KIconColors* self) {
    return new QColor(self->positiveText());
}

QColor* KIconColors_NegativeText(const KIconColors* self) {
    return new QColor(self->negativeText());
}

QColor* KIconColors_ActiveText(const KIconColors* self) {
    return new QColor(self->activeText());
}

void KIconColors_SetText(KIconColors* self, const QColor* color) {
    self->setText(*color);
}

void KIconColors_SetHighlight(KIconColors* self, const QColor* color) {
    self->setHighlight(*color);
}

void KIconColors_SetHighlightedText(KIconColors* self, const QColor* color) {
    self->setHighlightedText(*color);
}

void KIconColors_SetAccent(KIconColors* self, const QColor* color) {
    self->setAccent(*color);
}

void KIconColors_SetBackground(KIconColors* self, const QColor* color) {
    self->setBackground(*color);
}

void KIconColors_SetNeutralText(KIconColors* self, const QColor* color) {
    self->setNeutralText(*color);
}

void KIconColors_SetPositiveText(KIconColors* self, const QColor* color) {
    self->setPositiveText(*color);
}

void KIconColors_SetNegativeText(KIconColors* self, const QColor* color) {
    self->setNegativeText(*color);
}

void KIconColors_SetActiveText(KIconColors* self, const QColor* color) {
    self->setActiveText(*color);
}

void KIconColors_Delete(KIconColors* self) {
    delete self;
}
