#define WORKAROUND_INNER_CLASS_DEFINITION_Accounts__ServiceType
#include <QDomDocument>
#include <QSet>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <service-type.h>
#include "libservice-type.h"
#include "libservice-type.hxx"

Accounts__ServiceType* Accounts__ServiceType_new() {
    return new Accounts::ServiceType();
}

Accounts__ServiceType* Accounts__ServiceType_new2(const Accounts__ServiceType* other) {
    return new Accounts::ServiceType(*other);
}

void Accounts__ServiceType_OperatorAssign(Accounts__ServiceType* self, const Accounts__ServiceType* other) {
    self->operator=(*other);
}

bool Accounts__ServiceType_IsValid(const Accounts__ServiceType* self) {
    return self->isValid();
}

libqt_string Accounts__ServiceType_Name(const Accounts__ServiceType* self) {
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

libqt_string Accounts__ServiceType_Description(const Accounts__ServiceType* self) {
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

libqt_string Accounts__ServiceType_DisplayName(const Accounts__ServiceType* self) {
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

libqt_string Accounts__ServiceType_TrCatalog(const Accounts__ServiceType* self) {
    QString _ret = self->trCatalog();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string Accounts__ServiceType_IconName(const Accounts__ServiceType* self) {
    QString _ret = self->iconName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool Accounts__ServiceType_HasTag(const Accounts__ServiceType* self, const libqt_string tag) {
    QString tag_QString = QString::fromUtf8(tag.data, tag.len);
    return self->hasTag(tag_QString);
}

libqt_list /* set of libqt_string */ Accounts__ServiceType_Tags(const Accounts__ServiceType* self) {
    QSet<QString> _ret = self->tags();
    // Convert QSet<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.size()));
    int _ctr = 0;
    QSetIterator<QString> _itr(_ret);
    while (_itr.hasNext()) {
        QString _sv_ret = _itr.next();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _sv_b = _sv_ret.toUtf8();
        libqt_string _sv_str;
        _sv_str.len = _sv_b.length();
        _sv_str.data = static_cast<const char*>(malloc(_sv_str.len + 1));
        memcpy((void*)_sv_str.data, _sv_b.data(), _sv_str.len);
        ((char*)_sv_str.data)[_sv_str.len] = '\0';
        _arr[_ctr++] = _sv_str;
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

QDomDocument* Accounts__ServiceType_DomDocument(const Accounts__ServiceType* self) {
    return new QDomDocument(self->domDocument());
}

void Accounts__ServiceType_Delete(Accounts__ServiceType* self) {
    delete self;
}
