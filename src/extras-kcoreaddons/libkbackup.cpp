#include <KBackup>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <kbackup.h>
#include "libkbackup.h"
#include "libkbackup.hxx"

bool KBackup_SimpleBackupFile(const libqt_string param1, const libqt_string param2, const libqt_string param3) {
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    QString param2_QString = QString::fromUtf8(param2.data, param2.len);
    QString param3_QString = QString::fromUtf8(param3.data, param3.len);
    return KBackup::simpleBackupFile(param1_QString, param2_QString, param3_QString);
}

bool KBackup_NumberedBackupFile(const libqt_string param1, const libqt_string param2, const libqt_string param3, const unsigned int param4) {
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    QString param2_QString = QString::fromUtf8(param2.data, param2.len);
    QString param3_QString = QString::fromUtf8(param3.data, param3.len);
    return KBackup::numberedBackupFile(param1_QString, param2_QString, param3_QString, static_cast<const uint>(param4));
}
