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

void KColorUtils_GetHcy(const QColor* param1, double* param2, double* param3, double* param4, double* param5) {
    KColorUtils::getHcy(*param1, static_cast<qreal*>(param2), static_cast<qreal*>(param3), static_cast<qreal*>(param4), static_cast<qreal*>(param5));
}

QColor* KColorUtils_HcyColor(double param1, double param2, double param3, double param4) {
    return new QColor(KColorUtils::hcyColor(static_cast<qreal>(param1), static_cast<qreal>(param2), static_cast<qreal>(param3), static_cast<qreal>(param4)));
}

double KColorUtils_ContrastRatio(const QColor* param1, const QColor* param2) {
    return static_cast<double>(KColorUtils::contrastRatio(*param1, *param2));
}

QColor* KColorUtils_Lighten(const QColor* param1, double param2, double param3) {
    return new QColor(KColorUtils::lighten(*param1, static_cast<qreal>(param2), static_cast<qreal>(param3)));
}

QColor* KColorUtils_Darken(const QColor* param1, double param2, double param3) {
    return new QColor(KColorUtils::darken(*param1, static_cast<qreal>(param2), static_cast<qreal>(param3)));
}

QColor* KColorUtils_Shade(const QColor* param1, double param2, double param3) {
    return new QColor(KColorUtils::shade(*param1, static_cast<qreal>(param2), static_cast<qreal>(param3)));
}

QColor* KColorUtils_Tint(const QColor* param1, const QColor* param2, double param3) {
    return new QColor(KColorUtils::tint(*param1, *param2, static_cast<qreal>(param3)));
}

QColor* KColorUtils_Mix(const QColor* param1, const QColor* param2, double param3) {
    return new QColor(KColorUtils::mix(*param1, *param2, static_cast<qreal>(param3)));
}

QColor* KColorUtils_OverlayColors(const QColor* param1, const QColor* param2, int param3) {
    return new QColor(KColorUtils::overlayColors(*param1, *param2, static_cast<QPainter::CompositionMode>(param3)));
}
