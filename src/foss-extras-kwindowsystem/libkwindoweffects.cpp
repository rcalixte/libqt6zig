#include <KWindowEffects>
#include <QRegion>
#include <QWindow>
#include <kwindoweffects.h>
#include "libkwindoweffects.h"
#include "libkwindoweffects.hxx"

bool KWindowEffects_IsEffectAvailable(int param1) {
    return KWindowEffects::isEffectAvailable(static_cast<KWindowEffects::Effect>(param1));
}

void KWindowEffects_EnableBlurBehind(QWindow* param1, bool param2, const QRegion* param3) {
    KWindowEffects::enableBlurBehind(param1, param2, *param3);
}

void KWindowEffects_EnableBackgroundContrast(QWindow* param1, bool param2, double param3, double param4, double param5, const QRegion* param6) {
    KWindowEffects::enableBackgroundContrast(param1, param2, static_cast<qreal>(param3), static_cast<qreal>(param4), static_cast<qreal>(param5), *param6);
}

void KWindowEffects_SlideWindow(QWindow* param1, int param2, int param3) {
    KWindowEffects::slideWindow(param1, static_cast<KWindowEffects::SlideFromLocation>(param2), static_cast<int>(param3));
}
