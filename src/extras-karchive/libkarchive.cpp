#include <KArchive>
#include <KArchiveDirectory>
#include <QByteArrayView>
#include <QDateTime>
#include <QIODevice>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <karchive.h>
#include "libkarchive.h"
#include "libkarchive.hxx"

bool KArchive_Open(KArchive* self, int mode) {
    return self->open(static_cast<QIODevice::OpenMode>(mode));
}

bool KArchive_Close(KArchive* self) {
    return self->close();
}

libqt_string KArchive_ErrorString(const KArchive* self) {
    QString _ret = self->errorString();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool KArchive_IsOpen(const KArchive* self) {
    return self->isOpen();
}

int KArchive_Mode(const KArchive* self) {
    return static_cast<int>(self->mode());
}

QIODevice* KArchive_Device(const KArchive* self) {
    return self->device();
}

libqt_string KArchive_FileName(const KArchive* self) {
    QString _ret = self->fileName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

KArchiveDirectory* KArchive_Directory(const KArchive* self) {
    return (KArchiveDirectory*)self->directory();
}

bool KArchive_AddLocalFile(KArchive* self, const libqt_string fileName, const libqt_string destName) {
    QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
    QString destName_QString = QString::fromUtf8(destName.data, destName.len);
    return self->addLocalFile(fileName_QString, destName_QString);
}

bool KArchive_AddLocalDirectory(KArchive* self, const libqt_string path, const libqt_string destName) {
    QString path_QString = QString::fromUtf8(path.data, path.len);
    QString destName_QString = QString::fromUtf8(destName.data, destName.len);
    return self->addLocalDirectory(path_QString, destName_QString);
}

bool KArchive_WriteDir(KArchive* self, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return self->writeDir(name_QString);
}

bool KArchive_WriteSymLink(KArchive* self, const libqt_string name, const libqt_string target) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QString target_QString = QString::fromUtf8(target.data, target.len);
    return self->writeSymLink(name_QString, target_QString);
}

bool KArchive_WriteFile(KArchive* self, const libqt_string name, libqt_string data) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QByteArrayView data_QByteArrayView(data.data, data.len);
    return self->writeFile(name_QString, data_QByteArrayView);
}

bool KArchive_PrepareWriting(KArchive* self, const libqt_string name, const libqt_string user, const libqt_string group, long long size) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QString user_QString = QString::fromUtf8(user.data, user.len);
    QString group_QString = QString::fromUtf8(group.data, group.len);
    return self->prepareWriting(name_QString, user_QString, group_QString, static_cast<qint64>(size));
}

bool KArchive_WriteData(KArchive* self, const char* data, long long size) {
    return self->writeData(data, static_cast<qint64>(size));
}

bool KArchive_WriteData2(KArchive* self, libqt_string data) {
    QByteArrayView data_QByteArrayView(data.data, data.len);
    return self->writeData(data_QByteArrayView);
}

bool KArchive_FinishWriting(KArchive* self, long long size) {
    return self->finishWriting(static_cast<qint64>(size));
}

bool KArchive_WriteDir2(KArchive* self, const libqt_string name, const libqt_string user) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QString user_QString = QString::fromUtf8(user.data, user.len);
    return self->writeDir(name_QString, user_QString);
}

bool KArchive_WriteDir3(KArchive* self, const libqt_string name, const libqt_string user, const libqt_string group) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QString user_QString = QString::fromUtf8(user.data, user.len);
    QString group_QString = QString::fromUtf8(group.data, group.len);
    return self->writeDir(name_QString, user_QString, group_QString);
}

bool KArchive_WriteDir4(KArchive* self, const libqt_string name, const libqt_string user, const libqt_string group, mode_t perm) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QString user_QString = QString::fromUtf8(user.data, user.len);
    QString group_QString = QString::fromUtf8(group.data, group.len);
    return self->writeDir(name_QString, user_QString, group_QString, perm);
}

bool KArchive_WriteDir5(KArchive* self, const libqt_string name, const libqt_string user, const libqt_string group, mode_t perm, const QDateTime* atime) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QString user_QString = QString::fromUtf8(user.data, user.len);
    QString group_QString = QString::fromUtf8(group.data, group.len);
    return self->writeDir(name_QString, user_QString, group_QString, perm, *atime);
}

bool KArchive_WriteDir6(KArchive* self, const libqt_string name, const libqt_string user, const libqt_string group, mode_t perm, const QDateTime* atime, const QDateTime* mtime) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QString user_QString = QString::fromUtf8(user.data, user.len);
    QString group_QString = QString::fromUtf8(group.data, group.len);
    return self->writeDir(name_QString, user_QString, group_QString, perm, *atime, *mtime);
}

bool KArchive_WriteDir7(KArchive* self, const libqt_string name, const libqt_string user, const libqt_string group, mode_t perm, const QDateTime* atime, const QDateTime* mtime, const QDateTime* ctime) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QString user_QString = QString::fromUtf8(user.data, user.len);
    QString group_QString = QString::fromUtf8(group.data, group.len);
    return self->writeDir(name_QString, user_QString, group_QString, perm, *atime, *mtime, *ctime);
}

bool KArchive_WriteSymLink3(KArchive* self, const libqt_string name, const libqt_string target, const libqt_string user) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QString target_QString = QString::fromUtf8(target.data, target.len);
    QString user_QString = QString::fromUtf8(user.data, user.len);
    return self->writeSymLink(name_QString, target_QString, user_QString);
}

bool KArchive_WriteSymLink4(KArchive* self, const libqt_string name, const libqt_string target, const libqt_string user, const libqt_string group) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QString target_QString = QString::fromUtf8(target.data, target.len);
    QString user_QString = QString::fromUtf8(user.data, user.len);
    QString group_QString = QString::fromUtf8(group.data, group.len);
    return self->writeSymLink(name_QString, target_QString, user_QString, group_QString);
}

bool KArchive_WriteSymLink5(KArchive* self, const libqt_string name, const libqt_string target, const libqt_string user, const libqt_string group, mode_t perm) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QString target_QString = QString::fromUtf8(target.data, target.len);
    QString user_QString = QString::fromUtf8(user.data, user.len);
    QString group_QString = QString::fromUtf8(group.data, group.len);
    return self->writeSymLink(name_QString, target_QString, user_QString, group_QString, perm);
}

bool KArchive_WriteSymLink6(KArchive* self, const libqt_string name, const libqt_string target, const libqt_string user, const libqt_string group, mode_t perm, const QDateTime* atime) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QString target_QString = QString::fromUtf8(target.data, target.len);
    QString user_QString = QString::fromUtf8(user.data, user.len);
    QString group_QString = QString::fromUtf8(group.data, group.len);
    return self->writeSymLink(name_QString, target_QString, user_QString, group_QString, perm, *atime);
}

bool KArchive_WriteSymLink7(KArchive* self, const libqt_string name, const libqt_string target, const libqt_string user, const libqt_string group, mode_t perm, const QDateTime* atime, const QDateTime* mtime) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QString target_QString = QString::fromUtf8(target.data, target.len);
    QString user_QString = QString::fromUtf8(user.data, user.len);
    QString group_QString = QString::fromUtf8(group.data, group.len);
    return self->writeSymLink(name_QString, target_QString, user_QString, group_QString, perm, *atime, *mtime);
}

bool KArchive_WriteSymLink8(KArchive* self, const libqt_string name, const libqt_string target, const libqt_string user, const libqt_string group, mode_t perm, const QDateTime* atime, const QDateTime* mtime, const QDateTime* ctime) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QString target_QString = QString::fromUtf8(target.data, target.len);
    QString user_QString = QString::fromUtf8(user.data, user.len);
    QString group_QString = QString::fromUtf8(group.data, group.len);
    return self->writeSymLink(name_QString, target_QString, user_QString, group_QString, perm, *atime, *mtime, *ctime);
}

bool KArchive_WriteFile3(KArchive* self, const libqt_string name, libqt_string data, mode_t perm) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QByteArrayView data_QByteArrayView(data.data, data.len);
    return self->writeFile(name_QString, data_QByteArrayView, perm);
}

bool KArchive_WriteFile4(KArchive* self, const libqt_string name, libqt_string data, mode_t perm, const libqt_string user) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QByteArrayView data_QByteArrayView(data.data, data.len);
    QString user_QString = QString::fromUtf8(user.data, user.len);
    return self->writeFile(name_QString, data_QByteArrayView, perm, user_QString);
}

bool KArchive_WriteFile5(KArchive* self, const libqt_string name, libqt_string data, mode_t perm, const libqt_string user, const libqt_string group) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QByteArrayView data_QByteArrayView(data.data, data.len);
    QString user_QString = QString::fromUtf8(user.data, user.len);
    QString group_QString = QString::fromUtf8(group.data, group.len);
    return self->writeFile(name_QString, data_QByteArrayView, perm, user_QString, group_QString);
}

bool KArchive_WriteFile6(KArchive* self, const libqt_string name, libqt_string data, mode_t perm, const libqt_string user, const libqt_string group, const QDateTime* atime) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QByteArrayView data_QByteArrayView(data.data, data.len);
    QString user_QString = QString::fromUtf8(user.data, user.len);
    QString group_QString = QString::fromUtf8(group.data, group.len);
    return self->writeFile(name_QString, data_QByteArrayView, perm, user_QString, group_QString, *atime);
}

bool KArchive_WriteFile7(KArchive* self, const libqt_string name, libqt_string data, mode_t perm, const libqt_string user, const libqt_string group, const QDateTime* atime, const QDateTime* mtime) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QByteArrayView data_QByteArrayView(data.data, data.len);
    QString user_QString = QString::fromUtf8(user.data, user.len);
    QString group_QString = QString::fromUtf8(group.data, group.len);
    return self->writeFile(name_QString, data_QByteArrayView, perm, user_QString, group_QString, *atime, *mtime);
}

bool KArchive_WriteFile8(KArchive* self, const libqt_string name, libqt_string data, mode_t perm, const libqt_string user, const libqt_string group, const QDateTime* atime, const QDateTime* mtime, const QDateTime* ctime) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QByteArrayView data_QByteArrayView(data.data, data.len);
    QString user_QString = QString::fromUtf8(user.data, user.len);
    QString group_QString = QString::fromUtf8(group.data, group.len);
    return self->writeFile(name_QString, data_QByteArrayView, perm, user_QString, group_QString, *atime, *mtime, *ctime);
}

bool KArchive_PrepareWriting5(KArchive* self, const libqt_string name, const libqt_string user, const libqt_string group, long long size, mode_t perm) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QString user_QString = QString::fromUtf8(user.data, user.len);
    QString group_QString = QString::fromUtf8(group.data, group.len);
    return self->prepareWriting(name_QString, user_QString, group_QString, static_cast<qint64>(size), perm);
}

bool KArchive_PrepareWriting6(KArchive* self, const libqt_string name, const libqt_string user, const libqt_string group, long long size, mode_t perm, const QDateTime* atime) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QString user_QString = QString::fromUtf8(user.data, user.len);
    QString group_QString = QString::fromUtf8(group.data, group.len);
    return self->prepareWriting(name_QString, user_QString, group_QString, static_cast<qint64>(size), perm, *atime);
}

bool KArchive_PrepareWriting7(KArchive* self, const libqt_string name, const libqt_string user, const libqt_string group, long long size, mode_t perm, const QDateTime* atime, const QDateTime* mtime) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QString user_QString = QString::fromUtf8(user.data, user.len);
    QString group_QString = QString::fromUtf8(group.data, group.len);
    return self->prepareWriting(name_QString, user_QString, group_QString, static_cast<qint64>(size), perm, *atime, *mtime);
}

bool KArchive_PrepareWriting8(KArchive* self, const libqt_string name, const libqt_string user, const libqt_string group, long long size, mode_t perm, const QDateTime* atime, const QDateTime* mtime, const QDateTime* ctime) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QString user_QString = QString::fromUtf8(user.data, user.len);
    QString group_QString = QString::fromUtf8(group.data, group.len);
    return self->prepareWriting(name_QString, user_QString, group_QString, static_cast<qint64>(size), perm, *atime, *mtime, *ctime);
}

void KArchive_Delete(KArchive* self) {
    delete self;
}
