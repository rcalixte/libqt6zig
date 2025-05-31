#include <QAnyStringView>
#include <QByteArray>
#include <QByteArrayView>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QUuid>
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

QUuid* QUuid_new5(char* stringVal) {
    return new QUuid(QAnyStringView(stringVal));
}

QUuid* QUuid_new6(const QUuid* param1) {
    return new QUuid(*param1);
}

void QUuid_CopyAssign(QUuid* self, QUuid* other) {
    *self = *other;
}

void QUuid_MoveAssign(QUuid* self, QUuid* other) {
    *self = std::move(*other);
}

QUuid* QUuid_FromString(char* stringVal) {
    return new QUuid(QUuid::fromString(QAnyStringView(stringVal)));
}

libqt_string QUuid_ToString(const QUuid* self) {
    QString _ret = self->toString();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QUuid_ToByteArray(const QUuid* self) {
    QByteArray _qb = self->toByteArray();
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _qb.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QUuid_ToRfc4122(const QUuid* self) {
    QByteArray _qb = self->toRfc4122();
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _qb.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

QUuid* QUuid_FromRfc4122(QByteArrayView* param1) {
    return new QUuid(QUuid::fromRfc4122(*param1));
}

bool QUuid_IsNull(const QUuid* self) {
    return self->isNull();
}

bool QUuid_OperatorEqual(const QUuid* self, const QUuid* orig) {
    return (*self == *orig);
}

bool QUuid_OperatorNotEqual(const QUuid* self, const QUuid* orig) {
    return (*self != *orig);
}

bool QUuid_OperatorLesser(const QUuid* self, const QUuid* other) {
    return (*self < *other);
}

bool QUuid_OperatorGreater(const QUuid* self, const QUuid* other) {
    return (*self > *other);
}

QUuid* QUuid_CreateUuid() {
    return new QUuid(QUuid::createUuid());
}

QUuid* QUuid_CreateUuidV3(const QUuid* ns, const libqt_string baseData) {
    QByteArray baseData_QByteArray(baseData.data, baseData.len);
    return new QUuid(QUuid::createUuidV3(*ns, baseData_QByteArray));
}

QUuid* QUuid_CreateUuidV5(const QUuid* ns, const libqt_string baseData) {
    QByteArray baseData_QByteArray(baseData.data, baseData.len);
    return new QUuid(QUuid::createUuidV5(*ns, baseData_QByteArray));
}

QUuid* QUuid_CreateUuidV32(const QUuid* ns, const libqt_string baseData) {
    QString baseData_QString = QString::fromUtf8(baseData.data, baseData.len);
    return new QUuid(QUuid::createUuidV3(*ns, baseData_QString));
}

QUuid* QUuid_CreateUuidV52(const QUuid* ns, const libqt_string baseData) {
    QString baseData_QString = QString::fromUtf8(baseData.data, baseData.len);
    return new QUuid(QUuid::createUuidV5(*ns, baseData_QString));
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
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QUuid_ToByteArray1(const QUuid* self, int mode) {
    QByteArray _qb = self->toByteArray(static_cast<QUuid::StringFormat>(mode));
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _qb.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QUuid_Delete(QUuid* self) {
    delete self;
}
