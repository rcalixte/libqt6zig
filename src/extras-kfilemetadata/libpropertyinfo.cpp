#define WORKAROUND_INNER_CLASS_DEFINITION_KFileMetaData__PropertyInfo
#include <QList>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVariant>
#include <propertyinfo.h>
#include "libpropertyinfo.h"
#include "libpropertyinfo.hxx"

KFileMetaData__PropertyInfo* KFileMetaData__PropertyInfo_new() {
    return new KFileMetaData::PropertyInfo();
}

KFileMetaData__PropertyInfo* KFileMetaData__PropertyInfo_new2(int property) {
    return new KFileMetaData::PropertyInfo(static_cast<KFileMetaData::Property::Property>(property));
}

KFileMetaData__PropertyInfo* KFileMetaData__PropertyInfo_new3(const KFileMetaData__PropertyInfo* pi) {
    return new KFileMetaData::PropertyInfo(*pi);
}

void KFileMetaData__PropertyInfo_OperatorAssign(KFileMetaData__PropertyInfo* self, const KFileMetaData__PropertyInfo* rhs) {
    self->operator=(*rhs);
}

bool KFileMetaData__PropertyInfo_OperatorEqual(const KFileMetaData__PropertyInfo* self, const KFileMetaData__PropertyInfo* rhs) {
    return (*self == *rhs);
}

int KFileMetaData__PropertyInfo_Property(const KFileMetaData__PropertyInfo* self) {
    return static_cast<int>(self->property());
}

libqt_string KFileMetaData__PropertyInfo_Name(const KFileMetaData__PropertyInfo* self) {
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

libqt_string KFileMetaData__PropertyInfo_DisplayName(const KFileMetaData__PropertyInfo* self) {
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

int KFileMetaData__PropertyInfo_ValueType(const KFileMetaData__PropertyInfo* self) {
    return static_cast<int>(self->valueType());
}

bool KFileMetaData__PropertyInfo_ShouldBeIndexed(const KFileMetaData__PropertyInfo* self) {
    return self->shouldBeIndexed();
}

KFileMetaData__PropertyInfo* KFileMetaData__PropertyInfo_FromName(const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return new KFileMetaData::PropertyInfo(KFileMetaData::PropertyInfo::fromName(name_QString));
}

libqt_list /* of libqt_string */ KFileMetaData__PropertyInfo_AllNames() {
    QList<QString> _ret = KFileMetaData::PropertyInfo::allNames();
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size())));
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

libqt_string KFileMetaData__PropertyInfo_FormatAsDisplayString(const KFileMetaData__PropertyInfo* self, const QVariant* value) {
    QString _ret = self->formatAsDisplayString(*value);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KFileMetaData__PropertyInfo_Delete(KFileMetaData__PropertyInfo* self) {
    delete self;
}
