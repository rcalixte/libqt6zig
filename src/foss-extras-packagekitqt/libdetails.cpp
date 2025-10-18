#include <PackageKit/Details>
#include <QMap>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVariant>
#include <details.h>
#include "libdetails.h"
#include "libdetails.hxx"

PackageKit__Details* PackageKit__Details_new() {
    return new PackageKit::Details();
}

PackageKit__Details* PackageKit__Details_new2(const libqt_map /* of libqt_string to QVariant* */ other) {
    QMap<QString, QVariant> other_QMap;
    libqt_string* other_karr = static_cast<libqt_string*>(other.keys);
    QVariant** other_varr = static_cast<QVariant**>(other.values);
    for (size_t i = 0; i < other.len; ++i) {
        QString other_karr_i_QString = QString::fromUtf8(other_karr[i].data, other_karr[i].len);
        other_QMap[other_karr_i_QString] = *(other_varr[i]);
    }
    return new PackageKit::Details(other_QMap);
}

libqt_string PackageKit__Details_PackageId(const PackageKit__Details* self) {
    QString _ret = self->packageId();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string PackageKit__Details_Description(const PackageKit__Details* self) {
    QString _ret = self->description();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int PackageKit__Details_Group(const PackageKit__Details* self) {
    return static_cast<int>(self->group());
}

libqt_string PackageKit__Details_Summary(const PackageKit__Details* self) {
    QString _ret = self->summary();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string PackageKit__Details_Url(const PackageKit__Details* self) {
    QString _ret = self->url();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string PackageKit__Details_License(const PackageKit__Details* self) {
    QString _ret = self->license();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

unsigned long long PackageKit__Details_Size(const PackageKit__Details* self) {
    return static_cast<unsigned long long>(self->size());
}

void PackageKit__Details_Delete(PackageKit__Details* self) {
    delete self;
}
