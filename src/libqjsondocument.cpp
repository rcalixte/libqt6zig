#include <QByteArray>
#include <QJsonArray>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonParseError>
#include <QJsonValue>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVariant>
#include <qjsondocument.h>
#include "libqjsondocument.h"
#include "libqjsondocument.hxx"

QJsonParseError* QJsonParseError_new(const QJsonParseError* other) {
    return new QJsonParseError(*other);
}

QJsonParseError* QJsonParseError_new2(QJsonParseError* other) {
    return new QJsonParseError(std::move(*other));
}

void QJsonParseError_CopyAssign(QJsonParseError* self, QJsonParseError* other) {
    *self = *other;
}

void QJsonParseError_MoveAssign(QJsonParseError* self, QJsonParseError* other) {
    *self = std::move(*other);
}

libqt_string QJsonParseError_ErrorString(const QJsonParseError* self) {
    QString _ret = self->errorString();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QJsonParseError_Delete(QJsonParseError* self) {
    delete self;
}

QJsonDocument* QJsonDocument_new() {
    return new QJsonDocument();
}

QJsonDocument* QJsonDocument_new2(const QJsonObject* object) {
    return new QJsonDocument(*object);
}

QJsonDocument* QJsonDocument_new3(const QJsonArray* array) {
    return new QJsonDocument(*array);
}

QJsonDocument* QJsonDocument_new4(const QJsonDocument* other) {
    return new QJsonDocument(*other);
}

void QJsonDocument_OperatorAssign(QJsonDocument* self, const QJsonDocument* other) {
    self->operator=(*other);
}

void QJsonDocument_Swap(QJsonDocument* self, QJsonDocument* other) {
    self->swap(*other);
}

QJsonDocument* QJsonDocument_FromVariant(const QVariant* variant) {
    return new QJsonDocument(QJsonDocument::fromVariant(*variant));
}

QVariant* QJsonDocument_ToVariant(const QJsonDocument* self) {
    return new QVariant(self->toVariant());
}

QJsonDocument* QJsonDocument_FromJson(const libqt_string json) {
    QByteArray json_QByteArray(json.data, json.len);
    return new QJsonDocument(QJsonDocument::fromJson(json_QByteArray));
}

libqt_string QJsonDocument_ToJson(const QJsonDocument* self) {
    QByteArray _qb = self->toJson();
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool QJsonDocument_IsEmpty(const QJsonDocument* self) {
    return self->isEmpty();
}

bool QJsonDocument_IsArray(const QJsonDocument* self) {
    return self->isArray();
}

bool QJsonDocument_IsObject(const QJsonDocument* self) {
    return self->isObject();
}

QJsonObject* QJsonDocument_Object(const QJsonDocument* self) {
    return new QJsonObject(self->object());
}

QJsonArray* QJsonDocument_Array(const QJsonDocument* self) {
    return new QJsonArray(self->array());
}

void QJsonDocument_SetObject(QJsonDocument* self, const QJsonObject* object) {
    self->setObject(*object);
}

void QJsonDocument_SetArray(QJsonDocument* self, const QJsonArray* array) {
    self->setArray(*array);
}

QJsonValue* QJsonDocument_OperatorSubscript(const QJsonDocument* self, const libqt_string key) {
    QString key_QString = QString::fromUtf8(key.data, key.len);
    return new QJsonValue(self->operator[](key_QString));
}

QJsonValue* QJsonDocument_OperatorSubscript4(const QJsonDocument* self, ptrdiff_t i) {
    return new QJsonValue(self->operator[]((qsizetype)(i)));
}

bool QJsonDocument_IsNull(const QJsonDocument* self) {
    return self->isNull();
}

QJsonDocument* QJsonDocument_FromJson2(const libqt_string json, QJsonParseError* errorVal) {
    QByteArray json_QByteArray(json.data, json.len);
    return new QJsonDocument(QJsonDocument::fromJson(json_QByteArray, errorVal));
}

libqt_string QJsonDocument_ToJson1(const QJsonDocument* self, int format) {
    QByteArray _qb = self->toJson(static_cast<QJsonDocument::JsonFormat>(format));
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QJsonDocument_Delete(QJsonDocument* self) {
    delete self;
}
