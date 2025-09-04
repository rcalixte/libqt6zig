#include <QDBusObjectPath>
#include <QDBusSignature>
#include <QDBusVariant>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVariant>
#include <qdbusextratypes.h>
#include "libqdbusextratypes.h"
#include "libqdbusextratypes.hxx"

QDBusObjectPath* QDBusObjectPath_new() {
    return new QDBusObjectPath();
}

QDBusObjectPath* QDBusObjectPath_new2(const char* path) {
    return new QDBusObjectPath(path);
}

QDBusObjectPath* QDBusObjectPath_new3(const libqt_string path) {
    QString path_QString = QString::fromUtf8(path.data, path.len);
    return new QDBusObjectPath(path_QString);
}

QDBusObjectPath* QDBusObjectPath_new4(const QDBusObjectPath* param1) {
    return new QDBusObjectPath(*param1);
}

void QDBusObjectPath_Swap(QDBusObjectPath* self, QDBusObjectPath* other) {
    self->swap(*other);
}

void QDBusObjectPath_SetPath(QDBusObjectPath* self, const libqt_string path) {
    QString path_QString = QString::fromUtf8(path.data, path.len);
    self->setPath(path_QString);
}

libqt_string QDBusObjectPath_Path(const QDBusObjectPath* self) {
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

QVariant* QDBusObjectPath_ToQVariant(const QDBusObjectPath* self) {
    return new QVariant(self->operator QVariant());
}

void QDBusObjectPath_Delete(QDBusObjectPath* self) {
    delete self;
}

QDBusSignature* QDBusSignature_new() {
    return new QDBusSignature();
}

QDBusSignature* QDBusSignature_new2(const char* signature) {
    return new QDBusSignature(signature);
}

QDBusSignature* QDBusSignature_new3(const libqt_string signature) {
    QString signature_QString = QString::fromUtf8(signature.data, signature.len);
    return new QDBusSignature(signature_QString);
}

QDBusSignature* QDBusSignature_new4(const QDBusSignature* param1) {
    return new QDBusSignature(*param1);
}

void QDBusSignature_Swap(QDBusSignature* self, QDBusSignature* other) {
    self->swap(*other);
}

void QDBusSignature_SetSignature(QDBusSignature* self, const libqt_string signature) {
    QString signature_QString = QString::fromUtf8(signature.data, signature.len);
    self->setSignature(signature_QString);
}

libqt_string QDBusSignature_Signature(const QDBusSignature* self) {
    QString _ret = self->signature();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QDBusSignature_Delete(QDBusSignature* self) {
    delete self;
}

QDBusVariant* QDBusVariant_new() {
    return new QDBusVariant();
}

QDBusVariant* QDBusVariant_new2(const QVariant* variant) {
    return new QDBusVariant(*variant);
}

void QDBusVariant_Swap(QDBusVariant* self, QDBusVariant* other) {
    self->swap(*other);
}

void QDBusVariant_SetVariant(QDBusVariant* self, const QVariant* variant) {
    self->setVariant(*variant);
}

QVariant* QDBusVariant_Variant(const QDBusVariant* self) {
    return new QVariant(self->variant());
}

void QDBusVariant_OperatorAssign(QDBusVariant* self, const QDBusVariant* param1) {
    self->operator=(*param1);
}

void QDBusVariant_Delete(QDBusVariant* self) {
    delete self;
}
