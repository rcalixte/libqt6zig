#define WORKAROUND_INNER_CLASS_DEFINITION_Accounts__Service
#include <QDomDocument>
#include <QSet>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <service.h>
#include "libservice.h"
#include "libservice.hxx"

Accounts__Service* Accounts__Service_new() {
    return new Accounts::Service();
}

Accounts__Service* Accounts__Service_new2(const Accounts__Service* other) {
    return new Accounts::Service(*other);
}

void Accounts__Service_OperatorAssign(Accounts__Service* self, const Accounts__Service* other) {
    self->operator=(*other);
}

bool Accounts__Service_IsValid(const Accounts__Service* self) {
    return self->isValid();
}

libqt_string Accounts__Service_Name(const Accounts__Service* self) {
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

libqt_string Accounts__Service_Description(const Accounts__Service* self) {
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

libqt_string Accounts__Service_DisplayName(const Accounts__Service* self) {
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

libqt_string Accounts__Service_TrCatalog(const Accounts__Service* self) {
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

libqt_string Accounts__Service_ServiceType(const Accounts__Service* self) {
    QString _ret = self->serviceType();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string Accounts__Service_Provider(const Accounts__Service* self) {
    QString _ret = self->provider();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string Accounts__Service_IconName(const Accounts__Service* self) {
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

bool Accounts__Service_HasTag(const Accounts__Service* self, const libqt_string tag) {
    QString tag_QString = QString::fromUtf8(tag.data, tag.len);
    return self->hasTag(tag_QString);
}

libqt_list /* set of libqt_string */ Accounts__Service_Tags(const Accounts__Service* self) {
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

QDomDocument* Accounts__Service_DomDocument(const Accounts__Service* self) {
    return new QDomDocument(self->domDocument());
}

void Accounts__Service_Delete(Accounts__Service* self) {
    delete self;
}
