#define WORKAROUND_INNER_CLASS_DEFINITION_Attica__DownloadItem
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QUrl>
#include <downloaditem.h>
#include "libdownloaditem.h"
#include "libdownloaditem.hxx"

Attica__DownloadItem* Attica__DownloadItem_new() {
    return new Attica::DownloadItem();
}

Attica__DownloadItem* Attica__DownloadItem_new2(const Attica__DownloadItem* other) {
    return new Attica::DownloadItem(*other);
}

void Attica__DownloadItem_OperatorAssign(Attica__DownloadItem* self, const Attica__DownloadItem* other) {
    self->operator=(*other);
}

void Attica__DownloadItem_SetUrl(Attica__DownloadItem* self, const QUrl* url) {
    self->setUrl(*url);
}

QUrl* Attica__DownloadItem_Url(const Attica__DownloadItem* self) {
    return new QUrl(self->url());
}

void Attica__DownloadItem_SetMimeType(Attica__DownloadItem* self, const libqt_string mimeType) {
    QString mimeType_QString = QString::fromUtf8(mimeType.data, mimeType.len);
    self->setMimeType(mimeType_QString);
}

libqt_string Attica__DownloadItem_MimeType(const Attica__DownloadItem* self) {
    QString _ret = self->mimeType();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void Attica__DownloadItem_SetPackageName(Attica__DownloadItem* self, const libqt_string packageName) {
    QString packageName_QString = QString::fromUtf8(packageName.data, packageName.len);
    self->setPackageName(packageName_QString);
}

libqt_string Attica__DownloadItem_PackageName(const Attica__DownloadItem* self) {
    QString _ret = self->packageName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void Attica__DownloadItem_SetPackageRepository(Attica__DownloadItem* self, const libqt_string packageRepository) {
    QString packageRepository_QString = QString::fromUtf8(packageRepository.data, packageRepository.len);
    self->setPackageRepository(packageRepository_QString);
}

libqt_string Attica__DownloadItem_PackageRepository(const Attica__DownloadItem* self) {
    QString _ret = self->packageRepository();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void Attica__DownloadItem_SetGpgFingerprint(Attica__DownloadItem* self, const libqt_string gpgFingerprint) {
    QString gpgFingerprint_QString = QString::fromUtf8(gpgFingerprint.data, gpgFingerprint.len);
    self->setGpgFingerprint(gpgFingerprint_QString);
}

libqt_string Attica__DownloadItem_GpgFingerprint(const Attica__DownloadItem* self) {
    QString _ret = self->gpgFingerprint();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void Attica__DownloadItem_SetGpgSignature(Attica__DownloadItem* self, const libqt_string gpgSignature) {
    QString gpgSignature_QString = QString::fromUtf8(gpgSignature.data, gpgSignature.len);
    self->setGpgSignature(gpgSignature_QString);
}

libqt_string Attica__DownloadItem_GpgSignature(const Attica__DownloadItem* self) {
    QString _ret = self->gpgSignature();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void Attica__DownloadItem_SetType(Attica__DownloadItem* self, int typeVal) {
    self->setType(static_cast<Attica::DownloadDescription::Type>(typeVal));
}

int Attica__DownloadItem_Type(Attica__DownloadItem* self) {
    return static_cast<int>(self->type());
}

void Attica__DownloadItem_Delete(Attica__DownloadItem* self) {
    delete self;
}
