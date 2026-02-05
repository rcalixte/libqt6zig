#define WORKAROUND_INNER_CLASS_DEFINITION_KFileMetaData__TypeInfo
#include <QList>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <typeinfo.h>
#include "libtypeinfo.h"
#include "libtypeinfo.hxx"

KFileMetaData__TypeInfo* KFileMetaData__TypeInfo_new() {
    return new KFileMetaData::TypeInfo();
}

KFileMetaData__TypeInfo* KFileMetaData__TypeInfo_new2(int typeVal) {
    return new KFileMetaData::TypeInfo(static_cast<KFileMetaData::Type::Type>(typeVal));
}

KFileMetaData__TypeInfo* KFileMetaData__TypeInfo_new3(const KFileMetaData__TypeInfo* ti) {
    return new KFileMetaData::TypeInfo(*ti);
}

void KFileMetaData__TypeInfo_OperatorAssign(KFileMetaData__TypeInfo* self, const KFileMetaData__TypeInfo* rhs) {
    self->operator=(*rhs);
}

bool KFileMetaData__TypeInfo_OperatorEqual(const KFileMetaData__TypeInfo* self, const KFileMetaData__TypeInfo* rhs) {
    return (*self == *rhs);
}

int KFileMetaData__TypeInfo_Type(const KFileMetaData__TypeInfo* self) {
    return static_cast<int>(self->type());
}

libqt_string KFileMetaData__TypeInfo_Name(const KFileMetaData__TypeInfo* self) {
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

libqt_string KFileMetaData__TypeInfo_DisplayName(const KFileMetaData__TypeInfo* self) {
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

KFileMetaData__TypeInfo* KFileMetaData__TypeInfo_FromName(const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return new KFileMetaData::TypeInfo(KFileMetaData::TypeInfo::fromName(name_QString));
}

libqt_list /* of libqt_string */ KFileMetaData__TypeInfo_AllNames() {
    QList<QString> _ret = KFileMetaData::TypeInfo::allNames();
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

void KFileMetaData__TypeInfo_Delete(KFileMetaData__TypeInfo* self) {
    delete self;
}
