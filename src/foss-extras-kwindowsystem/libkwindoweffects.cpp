#include <KWindowEffects>
#include <QRegion>
#include <QWindow>
#include <kwindoweffects.h>
#include "libkwindoweffects.h"
#include "libkwindoweffects.hxx"

bool KWindowEffects_IsEffectAvailable(int effect) {
    return KWindowEffects::isEffectAvailable(static_cast<KWindowEffects::Effect>(effect));
}

void KWindowEffects_EnableBlurBehind(QWindow* window, bool enable, const QRegion* region) {
    KWindowEffects::enableBlurBehind(window, enable, *region);
}

void KWindowEffects_EnableBackgroundContrast(QWindow* window, bool enable, double contrast, double intensity, double saturation, const QRegion* region) {
    KWindowEffects::enableBackgroundContrast(window, enable, static_cast<qreal>(contrast), static_cast<qreal>(intensity), static_cast<qreal>(saturation), *region);
}

void KWindowEffects_SlideWindow(QWindow* window, int location, int offset) {
    KWindowEffects::slideWindow(window, static_cast<KWindowEffects::SlideFromLocation>(location), static_cast<int>(offset));
}
