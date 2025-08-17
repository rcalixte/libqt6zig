#include <QDateTime>
#include <QDirListing>
#define WORKAROUND_INNER_CLASS_DEFINITION_QDirListing__DirEntry
#define WORKAROUND_INNER_CLASS_DEFINITION_QDirListing__const_iterator
#define WORKAROUND_INNER_CLASS_DEFINITION_QDirListing__sentinel
#include <QFileInfo>
#include <QList>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimeZone>
#include <qdirlisting.h>
#include "libqdirlisting.h"
#include "libqdirlisting.hxx"

QDirListing* QDirListing_new(const libqt_string path) {
    QString path_QString = QString::fromUtf8(path.data, path.len);
    return new QDirListing(path_QString);
}

QDirListing* QDirListing_new2(const libqt_string path, const libqt_list /* of libqt_string */ nameFilters) {
    QString path_QString = QString::fromUtf8(path.data, path.len);
    QList<QString> nameFilters_QList;
    nameFilters_QList.reserve(nameFilters.len);
    libqt_string* nameFilters_arr = static_cast<libqt_string*>(nameFilters.data);
    for (size_t i = 0; i < nameFilters.len; ++i) {
        QString nameFilters_arr_i_QString = QString::fromUtf8(nameFilters_arr[i].data, nameFilters_arr[i].len);
        nameFilters_QList.push_back(nameFilters_arr_i_QString);
    }
    return new QDirListing(path_QString, nameFilters_QList);
}

QDirListing* QDirListing_new3(const libqt_string path, int flags) {
    QString path_QString = QString::fromUtf8(path.data, path.len);
    return new QDirListing(path_QString, static_cast<QDirListing::IteratorFlags>(flags));
}

QDirListing* QDirListing_new4(const libqt_string path, const libqt_list /* of libqt_string */ nameFilters, int flags) {
    QString path_QString = QString::fromUtf8(path.data, path.len);
    QList<QString> nameFilters_QList;
    nameFilters_QList.reserve(nameFilters.len);
    libqt_string* nameFilters_arr = static_cast<libqt_string*>(nameFilters.data);
    for (size_t i = 0; i < nameFilters.len; ++i) {
        QString nameFilters_arr_i_QString = QString::fromUtf8(nameFilters_arr[i].data, nameFilters_arr[i].len);
        nameFilters_QList.push_back(nameFilters_arr_i_QString);
    }
    return new QDirListing(path_QString, nameFilters_QList, static_cast<QDirListing::IteratorFlags>(flags));
}

void QDirListing_Swap(QDirListing* self, QDirListing* other) {
    self->swap(*other);
}

libqt_string QDirListing_IteratorPath(const QDirListing* self) {
    QString _ret = self->iteratorPath();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int QDirListing_IteratorFlags(const QDirListing* self) {
    return static_cast<int>(self->iteratorFlags());
}

libqt_list /* of libqt_string */ QDirListing_NameFilters(const QDirListing* self) {
    QList<QString> _ret = self->nameFilters();
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.size()));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        QString _lv_ret = _ret[i];
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _lv_b = _lv_ret.toUtf8();
        libqt_string _lv_str;
        _lv_str.len = _lv_b.length();
        _lv_str.data = static_cast<const char*>(malloc(_lv_str.len + 1));
        memcpy((void*)_lv_str.data, _lv_b.data(), _lv_str.len);
        ((char*)_lv_str.data)[_lv_str.len] = '\0';
        _arr[i] = _lv_str;
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

QDirListing__const_iterator* QDirListing_Begin(const QDirListing* self) {
    return new QDirListing::const_iterator(self->begin());
}

QDirListing__const_iterator* QDirListing_Cbegin(const QDirListing* self) {
    return new QDirListing::const_iterator(self->cbegin());
}

QDirListing__sentinel* QDirListing_End(const QDirListing* self) {
    return new QDirListing::sentinel(self->end());
}

QDirListing__sentinel* QDirListing_Cend(const QDirListing* self) {
    return new QDirListing::sentinel(self->cend());
}

QDirListing__const_iterator* QDirListing_ConstBegin(const QDirListing* self) {
    return new QDirListing::const_iterator(self->constBegin());
}

QDirListing__sentinel* QDirListing_ConstEnd(const QDirListing* self) {
    return new QDirListing::sentinel(self->constEnd());
}

void QDirListing_Delete(QDirListing* self) {
    delete self;
}

QDirListing__DirEntry* QDirListing__DirEntry_new(const QDirListing__DirEntry* other) {
    return new QDirListing::DirEntry(*other);
}

QDirListing__DirEntry* QDirListing__DirEntry_new2(QDirListing__DirEntry* other) {
    return new QDirListing::DirEntry(std::move(*other));
}

QDirListing__DirEntry* QDirListing__DirEntry_new3(const QDirListing__DirEntry* param1) {
    return new QDirListing::DirEntry(*param1);
}

QDirListing__DirEntry* QDirListing__DirEntry_new4() {
    return new QDirListing::DirEntry();
}

void QDirListing__DirEntry_CopyAssign(QDirListing__DirEntry* self, QDirListing__DirEntry* other) {
    *self = *other;
}

void QDirListing__DirEntry_MoveAssign(QDirListing__DirEntry* self, QDirListing__DirEntry* other) {
    *self = std::move(*other);
}

libqt_string QDirListing__DirEntry_FileName(const QDirListing__DirEntry* self) {
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

libqt_string QDirListing__DirEntry_BaseName(const QDirListing__DirEntry* self) {
    QString _ret = self->baseName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QDirListing__DirEntry_CompleteBaseName(const QDirListing__DirEntry* self) {
    QString _ret = self->completeBaseName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QDirListing__DirEntry_Suffix(const QDirListing__DirEntry* self) {
    QString _ret = self->suffix();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QDirListing__DirEntry_BundleName(const QDirListing__DirEntry* self) {
    QString _ret = self->bundleName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QDirListing__DirEntry_CompleteSuffix(const QDirListing__DirEntry* self) {
    QString _ret = self->completeSuffix();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QDirListing__DirEntry_FilePath(const QDirListing__DirEntry* self) {
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

bool QDirListing__DirEntry_IsDir(const QDirListing__DirEntry* self) {
    return self->isDir();
}

bool QDirListing__DirEntry_IsFile(const QDirListing__DirEntry* self) {
    return self->isFile();
}

bool QDirListing__DirEntry_IsSymLink(const QDirListing__DirEntry* self) {
    return self->isSymLink();
}

bool QDirListing__DirEntry_Exists(const QDirListing__DirEntry* self) {
    return self->exists();
}

bool QDirListing__DirEntry_IsHidden(const QDirListing__DirEntry* self) {
    return self->isHidden();
}

bool QDirListing__DirEntry_IsReadable(const QDirListing__DirEntry* self) {
    return self->isReadable();
}

bool QDirListing__DirEntry_IsWritable(const QDirListing__DirEntry* self) {
    return self->isWritable();
}

bool QDirListing__DirEntry_IsExecutable(const QDirListing__DirEntry* self) {
    return self->isExecutable();
}

QFileInfo* QDirListing__DirEntry_FileInfo(const QDirListing__DirEntry* self) {
    return new QFileInfo(self->fileInfo());
}

libqt_string QDirListing__DirEntry_CanonicalFilePath(const QDirListing__DirEntry* self) {
    QString _ret = self->canonicalFilePath();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QDirListing__DirEntry_AbsoluteFilePath(const QDirListing__DirEntry* self) {
    QString _ret = self->absoluteFilePath();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QDirListing__DirEntry_AbsolutePath(const QDirListing__DirEntry* self) {
    QString _ret = self->absolutePath();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

long long QDirListing__DirEntry_Size(const QDirListing__DirEntry* self) {
    return static_cast<long long>(self->size());
}

QDateTime* QDirListing__DirEntry_BirthTime(const QDirListing__DirEntry* self, const QTimeZone* tz) {
    return new QDateTime(self->birthTime(*tz));
}

QDateTime* QDirListing__DirEntry_MetadataChangeTime(const QDirListing__DirEntry* self, const QTimeZone* tz) {
    return new QDateTime(self->metadataChangeTime(*tz));
}

QDateTime* QDirListing__DirEntry_LastModified(const QDirListing__DirEntry* self, const QTimeZone* tz) {
    return new QDateTime(self->lastModified(*tz));
}

QDateTime* QDirListing__DirEntry_LastRead(const QDirListing__DirEntry* self, const QTimeZone* tz) {
    return new QDateTime(self->lastRead(*tz));
}

QDateTime* QDirListing__DirEntry_FileTime(const QDirListing__DirEntry* self, int typeVal, const QTimeZone* tz) {
    return new QDateTime(self->fileTime(static_cast<QFileDevice::FileTime>(typeVal), *tz));
}

void QDirListing__DirEntry_OperatorAssign(QDirListing__DirEntry* self, const QDirListing__DirEntry* param1) {
    self->operator=(*param1);
}

void QDirListing__DirEntry_Delete(QDirListing__DirEntry* self) {
    delete self;
}

QDirListing__sentinel* QDirListing__sentinel_new(const QDirListing__sentinel* other) {
    return new QDirListing::sentinel(*other);
}

QDirListing__sentinel* QDirListing__sentinel_new2(QDirListing__sentinel* other) {
    return new QDirListing::sentinel(std::move(*other));
}

QDirListing__sentinel* QDirListing__sentinel_new3() {
    return new QDirListing::sentinel();
}

QDirListing__sentinel* QDirListing__sentinel_new4(const QDirListing__sentinel* param1) {
    return new QDirListing::sentinel(*param1);
}

void QDirListing__sentinel_CopyAssign(QDirListing__sentinel* self, QDirListing__sentinel* other) {
    *self = *other;
}

void QDirListing__sentinel_MoveAssign(QDirListing__sentinel* self, QDirListing__sentinel* other) {
    *self = std::move(*other);
}

void QDirListing__sentinel_Delete(QDirListing__sentinel* self) {
    delete self;
}

QDirListing__const_iterator* QDirListing__const_iterator_new2(QDirListing__const_iterator* other) {
    return new QDirListing::const_iterator(std::move(*other));
}

void QDirListing__const_iterator_MoveAssign(QDirListing__const_iterator* self, QDirListing__const_iterator* other) {
    *self = std::move(*other);
}

QDirListing__DirEntry* QDirListing__const_iterator_OperatorMultiply(const QDirListing__const_iterator* self) {
    return new QDirListing::DirEntry(self->operator*());
}

QDirListing__const_iterator* QDirListing__const_iterator_OperatorPlusPlus(QDirListing__const_iterator* self) {
    QDirListing::const_iterator& _ret = self->operator++();
    // Cast returned reference into pointer
    return &_ret;
}

void QDirListing__const_iterator_OperatorPlusPlus2(QDirListing__const_iterator* self, int param1) {
    self->operator++(static_cast<int>(param1));
}

void QDirListing__const_iterator_Delete(QDirListing__const_iterator* self) {
    delete self;
}
