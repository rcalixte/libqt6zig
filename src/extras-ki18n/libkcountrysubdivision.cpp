#include <KCountry>
#include <KCountrySubdivision>
#include <QList>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <kcountrysubdivision.h>
#include "libkcountrysubdivision.h"
#include "libkcountrysubdivision.hxx"

KCountrySubdivision* KCountrySubdivision_new() {
    return new KCountrySubdivision();
}

KCountrySubdivision* KCountrySubdivision_new2(const KCountrySubdivision* param1) {
    return new KCountrySubdivision(*param1);
}

void KCountrySubdivision_OperatorAssign(KCountrySubdivision* self, const KCountrySubdivision* param1) {
    self->operator=(*param1);
}

bool KCountrySubdivision_OperatorEqual(const KCountrySubdivision* self, const KCountrySubdivision* other) {
    return (*self == *other);
}

bool KCountrySubdivision_OperatorNotEqual(const KCountrySubdivision* self, const KCountrySubdivision* other) {
    return (*self != *other);
}

bool KCountrySubdivision_IsValid(const KCountrySubdivision* self) {
    return self->isValid();
}

libqt_string KCountrySubdivision_Code(const KCountrySubdivision* self) {
    QString _ret = self->code();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KCountrySubdivision_Name(const KCountrySubdivision* self) {
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

KCountry* KCountrySubdivision_Country(const KCountrySubdivision* self) {
    return new KCountry(self->country());
}

KCountrySubdivision* KCountrySubdivision_Parent(const KCountrySubdivision* self) {
    return new KCountrySubdivision(self->parent());
}

libqt_list /* of const char* */ KCountrySubdivision_TimeZoneIds(const KCountrySubdivision* self) {
    QList<const char*> _ret = self->timeZoneIds();
    // Convert QList<> from C++ memory to manually-managed C memory
    const char** _arr = static_cast<const char**>(malloc(sizeof(const char*) * _ret.size()));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = (const char*)_ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_list /* of KCountrySubdivision* */ KCountrySubdivision_Subdivisions(const KCountrySubdivision* self) {
    QList<KCountrySubdivision> _ret = self->subdivisions();
    // Convert QList<> from C++ memory to manually-managed C memory
    KCountrySubdivision** _arr = static_cast<KCountrySubdivision**>(malloc(sizeof(KCountrySubdivision*) * _ret.size()));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new KCountrySubdivision(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

KCountrySubdivision* KCountrySubdivision_FromCode2(const char* code) {
    return new KCountrySubdivision(KCountrySubdivision::fromCode(code));
}

KCountrySubdivision* KCountrySubdivision_FromLocation(float latitude, float longitude) {
    return new KCountrySubdivision(KCountrySubdivision::fromLocation(static_cast<float>(latitude), static_cast<float>(longitude)));
}

void KCountrySubdivision_Delete(KCountrySubdivision* self) {
    delete self;
}
