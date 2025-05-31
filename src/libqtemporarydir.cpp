#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTemporaryDir>
#include <qtemporarydir.h>
#include "libqtemporarydir.h"
#include "libqtemporarydir.hxx"

QTemporaryDir* QTemporaryDir_new() {
    return new QTemporaryDir();
}

QTemporaryDir* QTemporaryDir_new2(const libqt_string templateName) {
    QString templateName_QString = QString::fromUtf8(templateName.data, templateName.len);
    return new QTemporaryDir(templateName_QString);
}

void QTemporaryDir_Swap(QTemporaryDir* self, QTemporaryDir* other) {
    self->swap(*other);
}

bool QTemporaryDir_IsValid(const QTemporaryDir* self) {
    return self->isValid();
}

libqt_string QTemporaryDir_ErrorString(const QTemporaryDir* self) {
    QString _ret = self->errorString();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

bool QTemporaryDir_AutoRemove(const QTemporaryDir* self) {
    return self->autoRemove();
}

void QTemporaryDir_SetAutoRemove(QTemporaryDir* self, bool b) {
    self->setAutoRemove(b);
}

bool QTemporaryDir_Remove(QTemporaryDir* self) {
    return self->remove();
}

libqt_string QTemporaryDir_Path(const QTemporaryDir* self) {
    QString _ret = self->path();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QTemporaryDir_FilePath(const QTemporaryDir* self, const libqt_string fileName) {
    QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
    QString _ret = self->filePath(fileName_QString);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QTemporaryDir_Delete(QTemporaryDir* self) {
    delete self;
}
