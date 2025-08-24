#include <KConfig>
#include <KConfigGui>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <kconfiggui.h>
#include "libkconfiggui.h"
#include "libkconfiggui.hxx"

KConfig* KConfigGui_SessionConfig() {
    return KConfigGui::sessionConfig();
}

void KConfigGui_SetSessionConfig(const libqt_string param1, const libqt_string param2) {
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    QString param2_QString = QString::fromUtf8(param2.data, param2.len);
    KConfigGui::setSessionConfig(param1_QString, param2_QString);
}

bool KConfigGui_HasSessionConfig() {
    return KConfigGui::hasSessionConfig();
}
