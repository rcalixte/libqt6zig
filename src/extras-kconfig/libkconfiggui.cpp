#include <KConfig>
#include <KConfigGui>
#include <QString>
#include <kconfiggui.h>
#include "libkconfiggui.h"
#include "libkconfiggui.hxx"

KConfig* KConfigGui_SessionConfig() {
    return KConfigGui::sessionConfig();
}

void KConfigGui_SetSessionConfig(const libqt_string id, const libqt_string key) {
    QString id_QString = QString::fromUtf8(id.data, id.len);
    QString key_QString = QString::fromUtf8(key.data, key.len);
    KConfigGui::setSessionConfig(id_QString, key_QString);
}

bool KConfigGui_HasSessionConfig() {
    return KConfigGui::hasSessionConfig();
}
