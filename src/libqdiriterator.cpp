#include <QDir>
#include <QDirIterator>
#include <QFileInfo>
#include <QList>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qdiriterator.h>
#include "libqdiriterator.h"
#include "libqdiriterator.hxx"

QDirIterator* QDirIterator_new(const QDir* dir) {
    return new QDirIterator(*dir);
}

QDirIterator* QDirIterator_new2(const libqt_string path) {
    QString path_QString = QString::fromUtf8(path.data, path.len);
    return new QDirIterator(path_QString);
}

QDirIterator* QDirIterator_new3(const libqt_string path, int filter) {
    QString path_QString = QString::fromUtf8(path.data, path.len);
    return new QDirIterator(path_QString, static_cast<QDir::Filters>(filter));
}

QDirIterator* QDirIterator_new4(const libqt_string path, const libqt_list /* of libqt_string */ nameFilters) {
    QString path_QString = QString::fromUtf8(path.data, path.len);
    QList<QString> nameFilters_QList;
    nameFilters_QList.reserve(nameFilters.len);
    libqt_string* nameFilters_arr = static_cast<libqt_string*>(nameFilters.data);
    for (size_t i = 0; i < nameFilters.len; ++i) {
        QString nameFilters_arr_i_QString = QString::fromUtf8(nameFilters_arr[i].data, nameFilters_arr[i].len);
        nameFilters_QList.push_back(nameFilters_arr_i_QString);
    }
    return new QDirIterator(path_QString, nameFilters_QList);
}

QDirIterator* QDirIterator_new5(const QDir* dir, int flags) {
    return new QDirIterator(*dir, static_cast<QDirIterator::IteratorFlags>(flags));
}

QDirIterator* QDirIterator_new6(const libqt_string path, int flags) {
    QString path_QString = QString::fromUtf8(path.data, path.len);
    return new QDirIterator(path_QString, static_cast<QDirIterator::IteratorFlags>(flags));
}

QDirIterator* QDirIterator_new7(const libqt_string path, int filter, int flags) {
    QString path_QString = QString::fromUtf8(path.data, path.len);
    return new QDirIterator(path_QString, static_cast<QDir::Filters>(filter), static_cast<QDirIterator::IteratorFlags>(flags));
}

QDirIterator* QDirIterator_new8(const libqt_string path, const libqt_list /* of libqt_string */ nameFilters, int filters) {
    QString path_QString = QString::fromUtf8(path.data, path.len);
    QList<QString> nameFilters_QList;
    nameFilters_QList.reserve(nameFilters.len);
    libqt_string* nameFilters_arr = static_cast<libqt_string*>(nameFilters.data);
    for (size_t i = 0; i < nameFilters.len; ++i) {
        QString nameFilters_arr_i_QString = QString::fromUtf8(nameFilters_arr[i].data, nameFilters_arr[i].len);
        nameFilters_QList.push_back(nameFilters_arr_i_QString);
    }
    return new QDirIterator(path_QString, nameFilters_QList, static_cast<QDir::Filters>(filters));
}

QDirIterator* QDirIterator_new9(const libqt_string path, const libqt_list /* of libqt_string */ nameFilters, int filters, int flags) {
    QString path_QString = QString::fromUtf8(path.data, path.len);
    QList<QString> nameFilters_QList;
    nameFilters_QList.reserve(nameFilters.len);
    libqt_string* nameFilters_arr = static_cast<libqt_string*>(nameFilters.data);
    for (size_t i = 0; i < nameFilters.len; ++i) {
        QString nameFilters_arr_i_QString = QString::fromUtf8(nameFilters_arr[i].data, nameFilters_arr[i].len);
        nameFilters_QList.push_back(nameFilters_arr_i_QString);
    }
    return new QDirIterator(path_QString, nameFilters_QList, static_cast<QDir::Filters>(filters), static_cast<QDirIterator::IteratorFlags>(flags));
}

libqt_string QDirIterator_Next(QDirIterator* self) {
    QString _ret = self->next();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QFileInfo* QDirIterator_NextFileInfo(QDirIterator* self) {
    return new QFileInfo(self->nextFileInfo());
}

bool QDirIterator_HasNext(const QDirIterator* self) {
    return self->hasNext();
}

libqt_string QDirIterator_FileName(const QDirIterator* self) {
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

libqt_string QDirIterator_FilePath(const QDirIterator* self) {
    QString _ret = self->filePath();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QFileInfo* QDirIterator_FileInfo(const QDirIterator* self) {
    return new QFileInfo(self->fileInfo());
}

libqt_string QDirIterator_Path(const QDirIterator* self) {
    QString _ret = self->path();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QDirIterator_Delete(QDirIterator* self) {
    delete self;
}
