#include <QDateTime>
#include <QDir>
#include <QFileDevice>
#include <QFileInfo>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qfileinfo.h>
#include "libqfileinfo.h"
#include "libqfileinfo.hxx"

QFileInfo* QFileInfo_new() {
    return new QFileInfo();
}

QFileInfo* QFileInfo_new2(const libqt_string file) {
    QString file_QString = QString::fromUtf8(file.data, file.len);
    return new QFileInfo(file_QString);
}

QFileInfo* QFileInfo_new3(const QFileDevice* file) {
    return new QFileInfo(*file);
}

QFileInfo* QFileInfo_new4(const QDir* dir, const libqt_string file) {
    QString file_QString = QString::fromUtf8(file.data, file.len);
    return new QFileInfo(*dir, file_QString);
}

QFileInfo* QFileInfo_new5(const QFileInfo* fileinfo) {
    return new QFileInfo(*fileinfo);
}

void QFileInfo_OperatorAssign(QFileInfo* self, const QFileInfo* fileinfo) {
    self->operator=(*fileinfo);
}

void QFileInfo_Swap(QFileInfo* self, QFileInfo* other) {
    self->swap(*other);
}

bool QFileInfo_OperatorEqual(const QFileInfo* self, const QFileInfo* fileinfo) {
    return (*self == *fileinfo);
}

bool QFileInfo_OperatorNotEqual(const QFileInfo* self, const QFileInfo* fileinfo) {
    return (*self != *fileinfo);
}

void QFileInfo_SetFile(QFileInfo* self, const libqt_string file) {
    QString file_QString = QString::fromUtf8(file.data, file.len);
    self->setFile(file_QString);
}

void QFileInfo_SetFileWithFile(QFileInfo* self, const QFileDevice* file) {
    self->setFile(*file);
}

void QFileInfo_SetFile2(QFileInfo* self, const QDir* dir, const libqt_string file) {
    QString file_QString = QString::fromUtf8(file.data, file.len);
    self->setFile(*dir, file_QString);
}

bool QFileInfo_Exists(const QFileInfo* self) {
    return self->exists();
}

bool QFileInfo_ExistsWithFile(const libqt_string file) {
    QString file_QString = QString::fromUtf8(file.data, file.len);
    return QFileInfo::exists(file_QString);
}

void QFileInfo_Refresh(QFileInfo* self) {
    self->refresh();
}

libqt_string QFileInfo_FilePath(const QFileInfo* self) {
    QString _ret = self->filePath();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QFileInfo_AbsoluteFilePath(const QFileInfo* self) {
    QString _ret = self->absoluteFilePath();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QFileInfo_CanonicalFilePath(const QFileInfo* self) {
    QString _ret = self->canonicalFilePath();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QFileInfo_FileName(const QFileInfo* self) {
    QString _ret = self->fileName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QFileInfo_BaseName(const QFileInfo* self) {
    QString _ret = self->baseName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QFileInfo_CompleteBaseName(const QFileInfo* self) {
    QString _ret = self->completeBaseName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QFileInfo_Suffix(const QFileInfo* self) {
    QString _ret = self->suffix();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QFileInfo_BundleName(const QFileInfo* self) {
    QString _ret = self->bundleName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QFileInfo_CompleteSuffix(const QFileInfo* self) {
    QString _ret = self->completeSuffix();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QFileInfo_Path(const QFileInfo* self) {
    QString _ret = self->path();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QFileInfo_AbsolutePath(const QFileInfo* self) {
    QString _ret = self->absolutePath();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QFileInfo_CanonicalPath(const QFileInfo* self) {
    QString _ret = self->canonicalPath();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QDir* QFileInfo_Dir(const QFileInfo* self) {
    return new QDir(self->dir());
}

QDir* QFileInfo_AbsoluteDir(const QFileInfo* self) {
    return new QDir(self->absoluteDir());
}

bool QFileInfo_IsReadable(const QFileInfo* self) {
    return self->isReadable();
}

bool QFileInfo_IsWritable(const QFileInfo* self) {
    return self->isWritable();
}

bool QFileInfo_IsExecutable(const QFileInfo* self) {
    return self->isExecutable();
}

bool QFileInfo_IsHidden(const QFileInfo* self) {
    return self->isHidden();
}

bool QFileInfo_IsNativePath(const QFileInfo* self) {
    return self->isNativePath();
}

bool QFileInfo_IsRelative(const QFileInfo* self) {
    return self->isRelative();
}

bool QFileInfo_IsAbsolute(const QFileInfo* self) {
    return self->isAbsolute();
}

bool QFileInfo_MakeAbsolute(QFileInfo* self) {
    return self->makeAbsolute();
}

bool QFileInfo_IsFile(const QFileInfo* self) {
    return self->isFile();
}

bool QFileInfo_IsDir(const QFileInfo* self) {
    return self->isDir();
}

bool QFileInfo_IsSymLink(const QFileInfo* self) {
    return self->isSymLink();
}

bool QFileInfo_IsSymbolicLink(const QFileInfo* self) {
    return self->isSymbolicLink();
}

bool QFileInfo_IsShortcut(const QFileInfo* self) {
    return self->isShortcut();
}

bool QFileInfo_IsAlias(const QFileInfo* self) {
    return self->isAlias();
}

bool QFileInfo_IsJunction(const QFileInfo* self) {
    return self->isJunction();
}

bool QFileInfo_IsRoot(const QFileInfo* self) {
    return self->isRoot();
}

bool QFileInfo_IsBundle(const QFileInfo* self) {
    return self->isBundle();
}

libqt_string QFileInfo_SymLinkTarget(const QFileInfo* self) {
    QString _ret = self->symLinkTarget();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QFileInfo_JunctionTarget(const QFileInfo* self) {
    QString _ret = self->junctionTarget();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QFileInfo_Owner(const QFileInfo* self) {
    QString _ret = self->owner();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

unsigned int QFileInfo_OwnerId(const QFileInfo* self) {
    return static_cast<unsigned int>(self->ownerId());
}

libqt_string QFileInfo_Group(const QFileInfo* self) {
    QString _ret = self->group();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

unsigned int QFileInfo_GroupId(const QFileInfo* self) {
    return static_cast<unsigned int>(self->groupId());
}

bool QFileInfo_Permission(const QFileInfo* self, int permissions) {
    return self->permission(static_cast<QFile::Permissions>(permissions));
}

int QFileInfo_Permissions(const QFileInfo* self) {
    return static_cast<int>(self->permissions());
}

long long QFileInfo_Size(const QFileInfo* self) {
    return static_cast<long long>(self->size());
}

QDateTime* QFileInfo_BirthTime(const QFileInfo* self) {
    return new QDateTime(self->birthTime());
}

QDateTime* QFileInfo_MetadataChangeTime(const QFileInfo* self) {
    return new QDateTime(self->metadataChangeTime());
}

QDateTime* QFileInfo_LastModified(const QFileInfo* self) {
    return new QDateTime(self->lastModified());
}

QDateTime* QFileInfo_LastRead(const QFileInfo* self) {
    return new QDateTime(self->lastRead());
}

QDateTime* QFileInfo_FileTime(const QFileInfo* self, int time) {
    return new QDateTime(self->fileTime(static_cast<QFile::FileTime>(time)));
}

bool QFileInfo_Caching(const QFileInfo* self) {
    return self->caching();
}

void QFileInfo_SetCaching(QFileInfo* self, bool on) {
    self->setCaching(on);
}

void QFileInfo_Stat(QFileInfo* self) {
    self->stat();
}

void QFileInfo_Delete(QFileInfo* self) {
    delete self;
}
