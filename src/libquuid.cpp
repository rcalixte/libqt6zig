#include <QAnyStringView>
#include <QByteArray>
#include <QByteArrayView>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QUuid>
#define WORKAROUND_INNER_CLASS_DEFINITION_QUuid__Id128Bytes
#include <quuid.h>
#include "libquuid.h"
#include "libquuid.hxx"

QUuid* QUuid_new(const QUuid* other) {
    return new QUuid(*other);
}

QUuid* QUuid_new2(QUuid* other) {
    return new QUuid(std::move(*other));
}

QUuid* QUuid_new3() {
    return new QUuid();
}

QUuid* QUuid_new4(unsigned int l, uint16_t w1, uint16_t w2, unsigned char b1, unsigned char b2, unsigned char b3, unsigned char b4, unsigned char b5, unsigned char b6, unsigned char b7, unsigned char b8) {
    return new QUuid(static_cast<uint>(l), static_cast<ushort>(w1), static_cast<ushort>(w2), static_cast<uchar>(b1), static_cast<uchar>(b2), static_cast<uchar>(b3), static_cast<uchar>(b4), static_cast<uchar>(b5), static_cast<uchar>(b6), static_cast<uchar>(b7), static_cast<uchar>(b8));
}

QUuid* QUuid_new5(QUuid__Id128Bytes* id128) {
    return new QUuid(*id128);
}

QUuid* QUuid_new6(libqt_string stringVal) {
    QString stringVal_QString = QString::fromUtf8(stringVal.data, stringVal.len);
    return new QUuid(QAnyStringView(stringVal_QString));
}

QUuid* QUuid_new7(const QUuid* param1) {
    return new QUuid(*param1);
}

QUuid* QUuid_new8(QUuid__Id128Bytes* id128, int order) {
    return new QUuid(*id128, static_cast<QSysInfo::Endian>(order));
}

void QUuid_CopyAssign(QUuid* self, QUuid* other) {
    *self = *other;
}

void QUuid_MoveAssign(QUuid* self, QUuid* other) {
    *self = std::move(*other);
}

QUuid* QUuid_FromString(libqt_string stringVal) {
    QString stringVal_QString = QString::fromUtf8(stringVal.data, stringVal.len);
    return new QUuid(QUuid::fromString(QAnyStringView(stringVal_QString)));
}

libqt_string QUuid_ToString(const QUuid* self) {
    QString _ret = self->toString();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QUuid_ToByteArray(const QUuid* self) {
    QByteArray _qb = self->toByteArray();
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QUuid__Id128Bytes* QUuid_ToBytes(const QUuid* self) {
    return new QUuid::Id128Bytes(self->toBytes());
}

libqt_string QUuid_ToRfc4122(const QUuid* self) {
    QByteArray _qb = self->toRfc4122();
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QUuid* QUuid_FromBytes(const void* bytes) {
    return new QUuid(QUuid::fromBytes(bytes));
}

QUuid* QUuid_FromRfc4122(QByteArrayView* param1) {
    return new QUuid(QUuid::fromRfc4122(*param1));
}

bool QUuid_IsNull(const QUuid* self) {
    return self->isNull();
}

QUuid* QUuid_CreateUuid() {
    return new QUuid(QUuid::createUuid());
}

QUuid* QUuid_CreateUuidV5(QUuid* ns, QByteArrayView* baseData) {
    return new QUuid(QUuid::createUuidV5(*ns, *baseData));
}

QUuid* QUuid_CreateUuidV3(QUuid* ns, QByteArrayView* baseData) {
    return new QUuid(QUuid::createUuidV3(*ns, *baseData));
}

int QUuid_Variant(const QUuid* self) {
    return static_cast<int>(self->variant());
}

int QUuid_Version(const QUuid* self) {
    return static_cast<int>(self->version());
}

libqt_string QUuid_ToString1(const QUuid* self, int mode) {
    QString _ret = self->toString(static_cast<QUuid::StringFormat>(mode));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QUuid_ToByteArray1(const QUuid* self, int mode) {
    QByteArray _qb = self->toByteArray(static_cast<QUuid::StringFormat>(mode));
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QUuid__Id128Bytes* QUuid_ToBytes1(const QUuid* self, int order) {
    return new QUuid::Id128Bytes(self->toBytes(static_cast<QSysInfo::Endian>(order)));
}

QUuid* QUuid_FromBytes2(const void* bytes, int order) {
    return new QUuid(QUuid::fromBytes(bytes, static_cast<QSysInfo::Endian>(order)));
}

void QUuid_Delete(QUuid* self) {
    delete self;
}

QUuid__Id128Bytes* QUuid__Id128Bytes_new() {
    return new QUuid::Id128Bytes();
}

QUuid__Id128Bytes* QUuid__Id128Bytes_new2(const QUuid__Id128Bytes* param1) {
    return new QUuid::Id128Bytes(*param1);
}

QByteArrayView* QUuid__Id128Bytes_ToQByteArrayView(const QUuid__Id128Bytes* self) {
    return new QByteArrayView(self->operator QByteArrayView());
}

void QUuid__Id128Bytes_Delete(QUuid__Id128Bytes* self) {
    delete self;
}
