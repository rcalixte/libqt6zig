#include <QDateTime>
#include <QFileDevice>
#include <QIODevice>
#include <QIODeviceBase>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qfiledevice.h>
#include "libqfiledevice.h"
#include "libqfiledevice.hxx"

QMetaObject* QFileDevice_MetaObject(const QFileDevice* self) {
    return (QMetaObject*)self->metaObject();
}

void* QFileDevice_Metacast(QFileDevice* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QFileDevice_Metacall(QFileDevice* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QFileDevice_Tr(const char* s) {
    QString _ret = QFileDevice::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int QFileDevice_Error(const QFileDevice* self) {
    return static_cast<int>(self->error());
}

void QFileDevice_UnsetError(QFileDevice* self) {
    self->unsetError();
}

void QFileDevice_Close(QFileDevice* self) {
    self->close();
}

bool QFileDevice_IsSequential(const QFileDevice* self) {
    return self->isSequential();
}

int QFileDevice_Handle(const QFileDevice* self) {
    return self->handle();
}

libqt_string QFileDevice_FileName(const QFileDevice* self) {
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

long long QFileDevice_Pos(const QFileDevice* self) {
    return static_cast<long long>(self->pos());
}

bool QFileDevice_Seek(QFileDevice* self, long long offset) {
    return self->seek(static_cast<qint64>(offset));
}

bool QFileDevice_AtEnd(const QFileDevice* self) {
    return self->atEnd();
}

bool QFileDevice_Flush(QFileDevice* self) {
    return self->flush();
}

long long QFileDevice_Size(const QFileDevice* self) {
    return static_cast<long long>(self->size());
}

bool QFileDevice_Resize(QFileDevice* self, long long sz) {
    return self->resize(static_cast<qint64>(sz));
}

int QFileDevice_Permissions(const QFileDevice* self) {
    return static_cast<int>(self->permissions());
}

bool QFileDevice_SetPermissions(QFileDevice* self, int permissionSpec) {
    return self->setPermissions(static_cast<QFileDevice::Permissions>(permissionSpec));
}

unsigned char* QFileDevice_Map(QFileDevice* self, long long offset, long long size) {
    return static_cast<unsigned char*>(self->map(static_cast<qint64>(offset), static_cast<qint64>(size)));
}

bool QFileDevice_Unmap(QFileDevice* self, unsigned char* address) {
    return self->unmap(static_cast<uchar*>(address));
}

QDateTime* QFileDevice_FileTime(const QFileDevice* self, int time) {
    return new QDateTime(self->fileTime(static_cast<QFileDevice::FileTime>(time)));
}

bool QFileDevice_SetFileTime(QFileDevice* self, const QDateTime* newDate, int fileTime) {
    return self->setFileTime(*newDate, static_cast<QFileDevice::FileTime>(fileTime));
}

libqt_string QFileDevice_Tr2(const char* s, const char* c) {
    QString _ret = QFileDevice::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QFileDevice_Tr3(const char* s, const char* c, int n) {
    QString _ret = QFileDevice::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

unsigned char* QFileDevice_Map3(QFileDevice* self, long long offset, long long size, int flags) {
    return static_cast<unsigned char*>(self->map(static_cast<qint64>(offset), static_cast<qint64>(size), static_cast<QFileDevice::MemoryMapFlags>(flags)));
}

void QFileDevice_Delete(QFileDevice* self) {
    delete self;
}
