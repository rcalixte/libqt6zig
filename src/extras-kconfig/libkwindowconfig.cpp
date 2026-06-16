#include <KConfigGroup>
#include <KWindowConfig>
#include <QScreen>
#include <QWindow>
#include <kwindowconfig.h>
#include "libkwindowconfig.h"
#include "libkwindowconfig.hxx"

void KWindowConfig_SaveWindowSize(const QWindow* window, KConfigGroup* config, int options) {
    KWindowConfig::saveWindowSize(window, *config, static_cast<KConfigGroup::WriteConfigFlags>(options));
}

bool KWindowConfig_HasSavedWindowSize(KConfigGroup* config) {
    return KWindowConfig::hasSavedWindowSize(*config);
}

void KWindowConfig_RestoreWindowSize(QWindow* window, const KConfigGroup* config) {
    KWindowConfig::restoreWindowSize(window, *config);
}

void KWindowConfig_SaveWindowPosition(const QWindow* window, KConfigGroup* config, int options) {
    KWindowConfig::saveWindowPosition(window, *config, static_cast<KConfigGroup::WriteConfigFlags>(options));
}

bool KWindowConfig_HasSavedWindowPosition(KConfigGroup* config) {
    return KWindowConfig::hasSavedWindowPosition(*config);
}

void KWindowConfig_RestoreWindowPosition(QWindow* window, const KConfigGroup* config) {
    KWindowConfig::restoreWindowPosition(window, *config);
}

void KWindowConfig_RestoreWindowScreenPosition(QWindow* window, const QScreen* screen, const KConfigGroup* config) {
    KWindowConfig::restoreWindowScreenPosition(window, screen, *config);
}
