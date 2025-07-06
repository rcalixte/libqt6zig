#include <QNativeIpcKey>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qtipccommon.h>
#include "libqtipccommon.h"
#include "libqtipccommon.hxx"

QNativeIpcKey* QNativeIpcKey_new() {
    return new QNativeIpcKey();
}

QNativeIpcKey* QNativeIpcKey_new2(uint16_t typeVal) {
    return new QNativeIpcKey(static_cast<QNativeIpcKey::Type>(typeVal));
}

QNativeIpcKey* QNativeIpcKey_new3(const libqt_string k) {
    QString k_QString = QString::fromUtf8(k.data, k.len);
    return new QNativeIpcKey(k_QString);
}

QNativeIpcKey* QNativeIpcKey_new4(const QNativeIpcKey* other) {
    return new QNativeIpcKey(*other);
}

QNativeIpcKey* QNativeIpcKey_new5(const libqt_string k, uint16_t typeVal) {
    QString k_QString = QString::fromUtf8(k.data, k.len);
    return new QNativeIpcKey(k_QString, static_cast<QNativeIpcKey::Type>(typeVal));
}

uint16_t QNativeIpcKey_LegacyDefaultTypeForOs() {
    return static_cast<uint16_t>(QNativeIpcKey::legacyDefaultTypeForOs());
}

void QNativeIpcKey_OperatorAssign(QNativeIpcKey* self, const QNativeIpcKey* other) {
    self->operator=(*other);
}

void QNativeIpcKey_Swap(QNativeIpcKey* self, QNativeIpcKey* other) {
    self->swap(*other);
}

bool QNativeIpcKey_IsEmpty(const QNativeIpcKey* self) {
    return self->isEmpty();
}

bool QNativeIpcKey_IsValid(const QNativeIpcKey* self) {
    return self->isValid();
}

uint16_t QNativeIpcKey_Type(const QNativeIpcKey* self) {
    return static_cast<uint16_t>(self->type());
}

void QNativeIpcKey_SetType(QNativeIpcKey* self, uint16_t typeVal) {
    self->setType(static_cast<QNativeIpcKey::Type>(typeVal));
}

libqt_string QNativeIpcKey_NativeKey(const QNativeIpcKey* self) {
    QString _ret = self->nativeKey();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QNativeIpcKey_SetNativeKey(QNativeIpcKey* self, const libqt_string newKey) {
    QString newKey_QString = QString::fromUtf8(newKey.data, newKey.len);
    self->setNativeKey(newKey_QString);
}

libqt_string QNativeIpcKey_ToString(const QNativeIpcKey* self) {
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

QNativeIpcKey* QNativeIpcKey_FromString(const libqt_string stringVal) {
    QString stringVal_QString = QString::fromUtf8(stringVal.data, stringVal.len);
    return new QNativeIpcKey(QNativeIpcKey::fromString(stringVal_QString));
}

void QNativeIpcKey_Delete(QNativeIpcKey* self) {
    delete self;
}
