#include <QByteArray>
#include <QDir>
#include <QList>
#include <QStorageInfo>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qstorageinfo.h>
#include "libqstorageinfo.h"
#include "libqstorageinfo.hxx"

QStorageInfo* QStorageInfo_new() {
    return new QStorageInfo();
}

QStorageInfo* QStorageInfo_new2(const libqt_string path) {
    QString path_QString = QString::fromUtf8(path.data, path.len);
    return new QStorageInfo(path_QString);
}

QStorageInfo* QStorageInfo_new3(const QDir* dir) {
    return new QStorageInfo(*dir);
}

QStorageInfo* QStorageInfo_new4(const QStorageInfo* other) {
    return new QStorageInfo(*other);
}

void QStorageInfo_OperatorAssign(QStorageInfo* self, const QStorageInfo* other) {
    self->operator=(*other);
}

void QStorageInfo_Swap(QStorageInfo* self, QStorageInfo* other) {
    self->swap(*other);
}

void QStorageInfo_SetPath(QStorageInfo* self, const libqt_string path) {
    QString path_QString = QString::fromUtf8(path.data, path.len);
    self->setPath(path_QString);
}

libqt_string QStorageInfo_RootPath(const QStorageInfo* self) {
    QString _ret = self->rootPath();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QStorageInfo_Device(const QStorageInfo* self) {
    QByteArray _qb = self->device();
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QStorageInfo_Subvolume(const QStorageInfo* self) {
    QByteArray _qb = self->subvolume();
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QStorageInfo_FileSystemType(const QStorageInfo* self) {
    QByteArray _qb = self->fileSystemType();
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QStorageInfo_Name(const QStorageInfo* self) {
    QString _ret = self->name();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QStorageInfo_DisplayName(const QStorageInfo* self) {
    QString _ret = self->displayName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

long long QStorageInfo_BytesTotal(const QStorageInfo* self) {
    return static_cast<long long>(self->bytesTotal());
}

long long QStorageInfo_BytesFree(const QStorageInfo* self) {
    return static_cast<long long>(self->bytesFree());
}

long long QStorageInfo_BytesAvailable(const QStorageInfo* self) {
    return static_cast<long long>(self->bytesAvailable());
}

int QStorageInfo_BlockSize(const QStorageInfo* self) {
    return self->blockSize();
}

bool QStorageInfo_IsRoot(const QStorageInfo* self) {
    return self->isRoot();
}

bool QStorageInfo_IsReadOnly(const QStorageInfo* self) {
    return self->isReadOnly();
}

bool QStorageInfo_IsReady(const QStorageInfo* self) {
    return self->isReady();
}

bool QStorageInfo_IsValid(const QStorageInfo* self) {
    return self->isValid();
}

void QStorageInfo_Refresh(QStorageInfo* self) {
    self->refresh();
}

libqt_list /* of QStorageInfo* */ QStorageInfo_MountedVolumes() {
    QList<QStorageInfo> _ret = QStorageInfo::mountedVolumes();
    // Convert QList<> from C++ memory to manually-managed C memory
    QStorageInfo** _arr = static_cast<QStorageInfo**>(malloc(sizeof(QStorageInfo*) * _ret.size()));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QStorageInfo(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

QStorageInfo* QStorageInfo_Root() {
    return new QStorageInfo(QStorageInfo::root());
}

void QStorageInfo_Delete(QStorageInfo* self) {
    delete self;
}
