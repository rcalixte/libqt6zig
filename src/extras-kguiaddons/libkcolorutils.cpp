#include <KColorUtils>
#include <QColor>
#include <kcolorutils.h>
#include "libkcolorutils.h"
#include "libkcolorutils.hxx"

double KColorUtils_Hue(const QColor* param1) {
    return static_cast<double>(KColorUtils::hue(*param1));
}

double KColorUtils_Chroma(const QColor* param1) {
    return static_cast<double>(KColorUtils::chroma(*param1));
}

double KColorUtils_Luma(const QColor* param1) {
    return static_cast<double>(KColorUtils::luma(*param1));
}

void KColorUtils_GetHcy(const QColor* param1, double* hue, double* chroma, double* luma, double* alpha) {
    KColorUtils::getHcy(*param1, static_cast<qreal*>(hue), static_cast<qreal*>(chroma), static_cast<qreal*>(luma), static_cast<qreal*>(alpha));
}

QColor* KColorUtils_HcyColor(double hue, double chroma, double luma, double alpha) {
    return new QColor(KColorUtils::hcyColor(static_cast<qreal>(hue), static_cast<qreal>(chroma), static_cast<qreal>(luma), static_cast<qreal>(alpha)));
}

double KColorUtils_ContrastRatio(const QColor* param1, const QColor* param2) {
    return static_cast<double>(KColorUtils::contrastRatio(*param1, *param2));
}

QColor* KColorUtils_Lighten(const QColor* param1, double amount, double chromaInverseGain) {
    return new QColor(KColorUtils::lighten(*param1, static_cast<qreal>(amount), static_cast<qreal>(chromaInverseGain)));
}

QColor* KColorUtils_Darken(const QColor* param1, double amount, double chromaGain) {
    return new QColor(KColorUtils::darken(*param1, static_cast<qreal>(amount), static_cast<qreal>(chromaGain)));
}

QColor* KColorUtils_Shade(const QColor* param1, double lumaAmount, double chromaAmount) {
    return new QColor(KColorUtils::shade(*param1, static_cast<qreal>(lumaAmount), static_cast<qreal>(chromaAmount)));
}

QColor* KColorUtils_Tint(const QColor* base, const QColor* color, double amount) {
    return new QColor(KColorUtils::tint(*base, *color, static_cast<qreal>(amount)));
}

QColor* KColorUtils_Mix(const QColor* c1, const QColor* c2, double bias) {
    return new QColor(KColorUtils::mix(*c1, *c2, static_cast<qreal>(bias)));
}

QColor* KColorUtils_OverlayColors(const QColor* base, const QColor* paint, int comp) {
    return new QColor(KColorUtils::overlayColors(*base, *paint, static_cast<QPainter::CompositionMode>(comp)));
}
