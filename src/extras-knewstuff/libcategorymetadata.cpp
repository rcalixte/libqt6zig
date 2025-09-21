#define WORKAROUND_INNER_CLASS_DEFINITION_KNSCore__CategoryMetadata
#include <QString>
#include <QByteArray>
#include <cstring>
#include <categorymetadata.h>
#include "libcategorymetadata.h"
#include "libcategorymetadata.hxx"

KNSCore__CategoryMetadata* KNSCore__CategoryMetadata_new(const KNSCore__CategoryMetadata* param1) {
    return new KNSCore::CategoryMetadata(*param1);
}

libqt_string KNSCore__CategoryMetadata_Id(const KNSCore__CategoryMetadata* self) {
    QString _ret = self->id();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KNSCore__CategoryMetadata_Name(const KNSCore__CategoryMetadata* self) {
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

libqt_string KNSCore__CategoryMetadata_DisplayName(const KNSCore__CategoryMetadata* self) {
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

void KNSCore__CategoryMetadata_Delete(KNSCore__CategoryMetadata* self) {
    delete self;
}
