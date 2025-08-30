#include <KColorScheme>
#include <QBrush>
#include <QColor>
#include <QPalette>
#include <kcolorscheme.h>
#include "libkcolorscheme.h"
#include "libkcolorscheme.hxx"

KColorScheme* KColorScheme_new(const KColorScheme* param1) {
    return new KColorScheme(*param1);
}

KColorScheme* KColorScheme_new2() {
    return new KColorScheme();
}

KColorScheme* KColorScheme_new3(int param1) {
    return new KColorScheme(static_cast<QPalette::ColorGroup>(param1));
}

KColorScheme* KColorScheme_new4(int param1, int param2) {
    return new KColorScheme(static_cast<QPalette::ColorGroup>(param1), static_cast<KColorScheme::ColorSet>(param2));
}

void KColorScheme_OperatorAssign(KColorScheme* self, const KColorScheme* param1) {
    self->operator=(*param1);
}

QBrush* KColorScheme_Background(const KColorScheme* self) {
    return new QBrush(self->background());
}

QBrush* KColorScheme_Foreground(const KColorScheme* self) {
    return new QBrush(self->foreground());
}

QBrush* KColorScheme_Decoration(const KColorScheme* self, int param1) {
    return new QBrush(self->decoration(static_cast<KColorScheme::DecorationRole>(param1)));
}

QColor* KColorScheme_Shade(const KColorScheme* self, int param1) {
    return new QColor(self->shade(static_cast<KColorScheme::ShadeRole>(param1)));
}

double KColorScheme_ContrastF() {
    return static_cast<double>(KColorScheme::contrastF());
}

QColor* KColorScheme_Shade2(const QColor* param1, int param2) {
    return new QColor(KColorScheme::shade(*param1, static_cast<KColorScheme::ShadeRole>(param2)));
}

QColor* KColorScheme_Shade3(const QColor* param1, int param2, double contrast) {
    return new QColor(KColorScheme::shade(*param1, static_cast<KColorScheme::ShadeRole>(param2), static_cast<qreal>(contrast)));
}

void KColorScheme_AdjustBackground(QPalette* param1) {
    KColorScheme::adjustBackground(*param1);
}

void KColorScheme_AdjustForeground(QPalette* param1) {
    KColorScheme::adjustForeground(*param1);
}

bool KColorScheme_OperatorEqual(const KColorScheme* self, const KColorScheme* other) {
    return (*self == *other);
}

QBrush* KColorScheme_Background1(const KColorScheme* self, int param1) {
    return new QBrush(self->background(static_cast<KColorScheme::BackgroundRole>(param1)));
}

QBrush* KColorScheme_Foreground1(const KColorScheme* self, int param1) {
    return new QBrush(self->foreground(static_cast<KColorScheme::ForegroundRole>(param1)));
}

QColor* KColorScheme_Shade4(const QColor* param1, int param2, double contrast, double chromaAdjust) {
    return new QColor(KColorScheme::shade(*param1, static_cast<KColorScheme::ShadeRole>(param2), static_cast<qreal>(contrast), static_cast<qreal>(chromaAdjust)));
}

void KColorScheme_AdjustBackground2(QPalette* param1, int newRole) {
    KColorScheme::adjustBackground(*param1, static_cast<KColorScheme::BackgroundRole>(newRole));
}

void KColorScheme_AdjustBackground3(QPalette* param1, int newRole, int color) {
    KColorScheme::adjustBackground(*param1, static_cast<KColorScheme::BackgroundRole>(newRole), static_cast<QPalette::ColorRole>(color));
}

void KColorScheme_AdjustBackground4(QPalette* param1, int newRole, int color, int set) {
    KColorScheme::adjustBackground(*param1, static_cast<KColorScheme::BackgroundRole>(newRole), static_cast<QPalette::ColorRole>(color), static_cast<KColorScheme::ColorSet>(set));
}

void KColorScheme_AdjustForeground2(QPalette* param1, int newRole) {
    KColorScheme::adjustForeground(*param1, static_cast<KColorScheme::ForegroundRole>(newRole));
}

void KColorScheme_AdjustForeground3(QPalette* param1, int newRole, int color) {
    KColorScheme::adjustForeground(*param1, static_cast<KColorScheme::ForegroundRole>(newRole), static_cast<QPalette::ColorRole>(color));
}

void KColorScheme_AdjustForeground4(QPalette* param1, int newRole, int color, int set) {
    KColorScheme::adjustForeground(*param1, static_cast<KColorScheme::ForegroundRole>(newRole), static_cast<QPalette::ColorRole>(color), static_cast<KColorScheme::ColorSet>(set));
}

void KColorScheme_Delete(KColorScheme* self) {
    delete self;
}
