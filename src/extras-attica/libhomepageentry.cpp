#define WORKAROUND_INNER_CLASS_DEFINITION_Attica__HomePageEntry
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QUrl>
#include <homepageentry.h>
#include "libhomepageentry.h"
#include "libhomepageentry.hxx"

Attica__HomePageEntry* Attica__HomePageEntry_new() {
    return new Attica::HomePageEntry();
}

Attica__HomePageEntry* Attica__HomePageEntry_new2(const Attica__HomePageEntry* other) {
    return new Attica::HomePageEntry(*other);
}

void Attica__HomePageEntry_OperatorAssign(Attica__HomePageEntry* self, const Attica__HomePageEntry* other) {
    self->operator=(*other);
}

libqt_string Attica__HomePageEntry_Type(const Attica__HomePageEntry* self) {
    QString _ret = self->type();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void Attica__HomePageEntry_SetType(Attica__HomePageEntry* self, const libqt_string typeVal) {
    QString typeVal_QString = QString::fromUtf8(typeVal.data, typeVal.len);
    self->setType(typeVal_QString);
}

QUrl* Attica__HomePageEntry_Url(const Attica__HomePageEntry* self) {
    return new QUrl(self->url());
}

void Attica__HomePageEntry_SetUrl(Attica__HomePageEntry* self, const QUrl* url) {
    self->setUrl(*url);
}

void Attica__HomePageEntry_Delete(Attica__HomePageEntry* self) {
    delete self;
}
