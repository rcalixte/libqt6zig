#include <QByteArray>
#include <QFileInfo>
#include <QIODevice>
#include <QList>
#include <QMimeDatabase>
#include <QMimeType>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QUrl>
#include <qmimedatabase.h>
#include "libqmimedatabase.h"
#include "libqmimedatabase.hxx"

QMimeDatabase* QMimeDatabase_new() {
    return new QMimeDatabase();
}

QMimeType* QMimeDatabase_MimeTypeForName(const QMimeDatabase* self, const libqt_string nameOrAlias) {
    QString nameOrAlias_QString = QString::fromUtf8(nameOrAlias.data, nameOrAlias.len);
    return new QMimeType(self->mimeTypeForName(nameOrAlias_QString));
}

QMimeType* QMimeDatabase_MimeTypeForFile(const QMimeDatabase* self, const libqt_string fileName) {
    QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
    return new QMimeType(self->mimeTypeForFile(fileName_QString));
}

QMimeType* QMimeDatabase_MimeTypeForFile2(const QMimeDatabase* self, const QFileInfo* fileInfo) {
    return new QMimeType(self->mimeTypeForFile(*fileInfo));
}

libqt_list /* of QMimeType* */ QMimeDatabase_MimeTypesForFileName(const QMimeDatabase* self, const libqt_string fileName) {
    QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
    QList<QMimeType> _ret = self->mimeTypesForFileName(fileName_QString);
    // Convert QList<> from C++ memory to manually-managed C memory
    QMimeType** _arr = static_cast<QMimeType**>(malloc(sizeof(QMimeType*) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QMimeType(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

QMimeType* QMimeDatabase_MimeTypeForData(const QMimeDatabase* self, const libqt_string data) {
    QByteArray data_QByteArray(data.data, data.len);
    return new QMimeType(self->mimeTypeForData(data_QByteArray));
}

QMimeType* QMimeDatabase_MimeTypeForData2(const QMimeDatabase* self, QIODevice* device) {
    return new QMimeType(self->mimeTypeForData(device));
}

QMimeType* QMimeDatabase_MimeTypeForUrl(const QMimeDatabase* self, const QUrl* url) {
    return new QMimeType(self->mimeTypeForUrl(*url));
}

QMimeType* QMimeDatabase_MimeTypeForFileNameAndData(const QMimeDatabase* self, const libqt_string fileName, QIODevice* device) {
    QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
    return new QMimeType(self->mimeTypeForFileNameAndData(fileName_QString, device));
}

QMimeType* QMimeDatabase_MimeTypeForFileNameAndData2(const QMimeDatabase* self, const libqt_string fileName, const libqt_string data) {
    QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
    QByteArray data_QByteArray(data.data, data.len);
    return new QMimeType(self->mimeTypeForFileNameAndData(fileName_QString, data_QByteArray));
}

libqt_string QMimeDatabase_SuffixForFileName(const QMimeDatabase* self, const libqt_string fileName) {
    QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
    QString _ret = self->suffixForFileName(fileName_QString);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_list /* of QMimeType* */ QMimeDatabase_AllMimeTypes(const QMimeDatabase* self) {
    QList<QMimeType> _ret = self->allMimeTypes();
    // Convert QList<> from C++ memory to manually-managed C memory
    QMimeType** _arr = static_cast<QMimeType**>(malloc(sizeof(QMimeType*) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QMimeType(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

QMimeType* QMimeDatabase_MimeTypeForFile22(const QMimeDatabase* self, const libqt_string fileName, int mode) {
    QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
    return new QMimeType(self->mimeTypeForFile(fileName_QString, static_cast<QMimeDatabase::MatchMode>(mode)));
}

QMimeType* QMimeDatabase_MimeTypeForFile23(const QMimeDatabase* self, const QFileInfo* fileInfo, int mode) {
    return new QMimeType(self->mimeTypeForFile(*fileInfo, static_cast<QMimeDatabase::MatchMode>(mode)));
}

void QMimeDatabase_Delete(QMimeDatabase* self) {
    delete self;
}
