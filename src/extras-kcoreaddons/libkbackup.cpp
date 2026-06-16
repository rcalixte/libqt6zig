#include <KBackup>
#include <QString>
#include <kbackup.h>
#include "libkbackup.h"
#include "libkbackup.hxx"

bool KBackup_SimpleBackupFile(const libqt_string filename, const libqt_string backupDir, const libqt_string backupExtension) {
    QString filename_QString = QString::fromUtf8(filename.data, filename.len);
    QString backupDir_QString = QString::fromUtf8(backupDir.data, backupDir.len);
    QString backupExtension_QString = QString::fromUtf8(backupExtension.data, backupExtension.len);
    return KBackup::simpleBackupFile(filename_QString, backupDir_QString, backupExtension_QString);
}

bool KBackup_NumberedBackupFile(const libqt_string filename, const libqt_string backupDir, const libqt_string backupExtension, const unsigned int maxBackups) {
    QString filename_QString = QString::fromUtf8(filename.data, filename.len);
    QString backupDir_QString = QString::fromUtf8(backupDir.data, backupDir.len);
    QString backupExtension_QString = QString::fromUtf8(backupExtension.data, backupExtension.len);
    return KBackup::numberedBackupFile(filename_QString, backupDir_QString, backupExtension_QString, static_cast<const uint>(maxBackups));
}
