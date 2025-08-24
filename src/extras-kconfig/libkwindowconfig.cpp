#include <KConfigGroup>
#include <KWindowConfig>
#include <QScreen>
#include <QWindow>
#include <kwindowconfig.h>
#include "libkwindowconfig.h"
#include "libkwindowconfig.hxx"

void KWindowConfig_SaveWindowSize(const QWindow* param1, KConfigGroup* param2, int param3) {
    KWindowConfig::saveWindowSize(param1, *param2, static_cast<KConfigGroup::WriteConfigFlags>(param3));
}

bool KWindowConfig_HasSavedWindowSize(KConfigGroup* param1) {
    return KWindowConfig::hasSavedWindowSize(*param1);
}

void KWindowConfig_RestoreWindowSize(QWindow* param1, const KConfigGroup* param2) {
    KWindowConfig::restoreWindowSize(param1, *param2);
}

void KWindowConfig_SaveWindowPosition(const QWindow* param1, KConfigGroup* param2, int param3) {
    KWindowConfig::saveWindowPosition(param1, *param2, static_cast<KConfigGroup::WriteConfigFlags>(param3));
}

bool KWindowConfig_HasSavedWindowPosition(KConfigGroup* param1) {
    return KWindowConfig::hasSavedWindowPosition(*param1);
}

void KWindowConfig_RestoreWindowPosition(QWindow* param1, const KConfigGroup* param2) {
    KWindowConfig::restoreWindowPosition(param1, *param2);
}

void KWindowConfig_RestoreWindowScreenPosition(QWindow* param1, const QScreen* param2, const KConfigGroup* param3) {
    KWindowConfig::restoreWindowScreenPosition(param1, param2, *param3);
}
