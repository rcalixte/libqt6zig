#define WORKAROUND_INNER_CLASS_DEFINITION_Attica__DownloadDescription
#include <QList>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <downloaddescription.h>
#include "libdownloaddescription.h"
#include "libdownloaddescription.hxx"

Attica__DownloadDescription* Attica__DownloadDescription_new() {
    return new Attica::DownloadDescription();
}

Attica__DownloadDescription* Attica__DownloadDescription_new2(const Attica__DownloadDescription* other) {
    return new Attica::DownloadDescription(*other);
}

void Attica__DownloadDescription_OperatorAssign(Attica__DownloadDescription* self, const Attica__DownloadDescription* other) {
    self->operator=(*other);
}

int Attica__DownloadDescription_Id(const Attica__DownloadDescription* self) {
    return self->id();
}

int Attica__DownloadDescription_Type(const Attica__DownloadDescription* self) {
    return static_cast<int>(self->type());
}

bool Attica__DownloadDescription_HasPrice(const Attica__DownloadDescription* self) {
    return self->hasPrice();
}

libqt_string Attica__DownloadDescription_Category(const Attica__DownloadDescription* self) {
    QString _ret = self->category();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string Attica__DownloadDescription_Name(const Attica__DownloadDescription* self) {
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

libqt_string Attica__DownloadDescription_Link(const Attica__DownloadDescription* self) {
    QString _ret = self->link();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string Attica__DownloadDescription_DistributionType(const Attica__DownloadDescription* self) {
    QString _ret = self->distributionType();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string Attica__DownloadDescription_PriceReason(const Attica__DownloadDescription* self) {
    QString _ret = self->priceReason();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string Attica__DownloadDescription_PriceAmount(const Attica__DownloadDescription* self) {
    QString _ret = self->priceAmount();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

unsigned int Attica__DownloadDescription_Size(const Attica__DownloadDescription* self) {
    return static_cast<unsigned int>(self->size());
}

libqt_string Attica__DownloadDescription_GpgFingerprint(const Attica__DownloadDescription* self) {
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

libqt_string Attica__DownloadDescription_GpgSignature(const Attica__DownloadDescription* self) {
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

libqt_string Attica__DownloadDescription_PackageName(const Attica__DownloadDescription* self) {
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

libqt_string Attica__DownloadDescription_Repository(const Attica__DownloadDescription* self) {
    QString _ret = self->repository();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_list /* of libqt_string */ Attica__DownloadDescription_Tags(const Attica__DownloadDescription* self) {
    QList<QString> _ret = self->tags();
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size() + 1)));
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

void Attica__DownloadDescription_SetId(Attica__DownloadDescription* self, int id) {
    self->setId(static_cast<int>(id));
}

void Attica__DownloadDescription_SetType(Attica__DownloadDescription* self, int typeVal) {
    self->setType(static_cast<Attica::DownloadDescription::Type>(typeVal));
}

void Attica__DownloadDescription_SetHasPrice(Attica__DownloadDescription* self, bool hasPrice) {
    self->setHasPrice(hasPrice);
}

void Attica__DownloadDescription_SetCategory(Attica__DownloadDescription* self, const libqt_string category) {
    QString category_QString = QString::fromUtf8(category.data, category.len);
    self->setCategory(category_QString);
}

void Attica__DownloadDescription_SetName(Attica__DownloadDescription* self, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    self->setName(name_QString);
}

void Attica__DownloadDescription_SetLink(Attica__DownloadDescription* self, const libqt_string link) {
    QString link_QString = QString::fromUtf8(link.data, link.len);
    self->setLink(link_QString);
}

void Attica__DownloadDescription_SetDistributionType(Attica__DownloadDescription* self, const libqt_string distributionType) {
    QString distributionType_QString = QString::fromUtf8(distributionType.data, distributionType.len);
    self->setDistributionType(distributionType_QString);
}

void Attica__DownloadDescription_SetPriceReason(Attica__DownloadDescription* self, const libqt_string priceReason) {
    QString priceReason_QString = QString::fromUtf8(priceReason.data, priceReason.len);
    self->setPriceReason(priceReason_QString);
}

void Attica__DownloadDescription_SetPriceAmount(Attica__DownloadDescription* self, const libqt_string priceAmount) {
    QString priceAmount_QString = QString::fromUtf8(priceAmount.data, priceAmount.len);
    self->setPriceAmount(priceAmount_QString);
}

void Attica__DownloadDescription_SetSize(Attica__DownloadDescription* self, unsigned int size) {
    self->setSize(static_cast<uint>(size));
}

void Attica__DownloadDescription_SetGpgFingerprint(Attica__DownloadDescription* self, const libqt_string fingerprint) {
    QString fingerprint_QString = QString::fromUtf8(fingerprint.data, fingerprint.len);
    self->setGpgFingerprint(fingerprint_QString);
}

void Attica__DownloadDescription_SetGpgSignature(Attica__DownloadDescription* self, const libqt_string signature) {
    QString signature_QString = QString::fromUtf8(signature.data, signature.len);
    self->setGpgSignature(signature_QString);
}

void Attica__DownloadDescription_SetPackageName(Attica__DownloadDescription* self, const libqt_string packageName) {
    QString packageName_QString = QString::fromUtf8(packageName.data, packageName.len);
    self->setPackageName(packageName_QString);
}

void Attica__DownloadDescription_SetRepository(Attica__DownloadDescription* self, const libqt_string repository) {
    QString repository_QString = QString::fromUtf8(repository.data, repository.len);
    self->setRepository(repository_QString);
}

void Attica__DownloadDescription_SetTags(Attica__DownloadDescription* self, const libqt_list /* of libqt_string */ tags) {
    QList<QString> tags_QList;
    tags_QList.reserve(tags.len);
    libqt_string* tags_arr = static_cast<libqt_string*>(tags.data);
    for (size_t i = 0; i < tags.len; ++i) {
        QString tags_arr_i_QString = QString::fromUtf8(tags_arr[i].data, tags_arr[i].len);
        tags_QList.push_back(tags_arr_i_QString);
    }
    self->setTags(tags_QList);
}

libqt_string Attica__DownloadDescription_Version(const Attica__DownloadDescription* self) {
    QString _ret = self->version();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void Attica__DownloadDescription_SetVersion(Attica__DownloadDescription* self, const libqt_string version) {
    QString version_QString = QString::fromUtf8(version.data, version.len);
    self->setVersion(version_QString);
}

void Attica__DownloadDescription_Delete(Attica__DownloadDescription* self) {
    delete self;
}
