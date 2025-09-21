#define WORKAROUND_INNER_CLASS_DEFINITION_KNSCore__Author
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QUrl>
#include <author.h>
#include "libauthor.h"
#include "libauthor.hxx"

KNSCore__Author* KNSCore__Author_new() {
    return new KNSCore::Author();
}

KNSCore__Author* KNSCore__Author_new2(const KNSCore__Author* other) {
    return new KNSCore::Author(*other);
}

void KNSCore__Author_OperatorAssign(KNSCore__Author* self, const KNSCore__Author* other) {
    self->operator=(*other);
}

void KNSCore__Author_SetId(KNSCore__Author* self, const libqt_string id) {
    QString id_QString = QString::fromUtf8(id.data, id.len);
    self->setId(id_QString);
}

libqt_string KNSCore__Author_Id(const KNSCore__Author* self) {
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

void KNSCore__Author_SetName(KNSCore__Author* self, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    self->setName(name_QString);
}

libqt_string KNSCore__Author_Name(const KNSCore__Author* self) {
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

void KNSCore__Author_SetEmail(KNSCore__Author* self, const libqt_string email) {
    QString email_QString = QString::fromUtf8(email.data, email.len);
    self->setEmail(email_QString);
}

libqt_string KNSCore__Author_Email(const KNSCore__Author* self) {
    QString _ret = self->email();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KNSCore__Author_SetJabber(KNSCore__Author* self, const libqt_string jabber) {
    QString jabber_QString = QString::fromUtf8(jabber.data, jabber.len);
    self->setJabber(jabber_QString);
}

libqt_string KNSCore__Author_Jabber(const KNSCore__Author* self) {
    QString _ret = self->jabber();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KNSCore__Author_SetHomepage(KNSCore__Author* self, const libqt_string homepage) {
    QString homepage_QString = QString::fromUtf8(homepage.data, homepage.len);
    self->setHomepage(homepage_QString);
}

libqt_string KNSCore__Author_Homepage(const KNSCore__Author* self) {
    QString _ret = self->homepage();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KNSCore__Author_SetProfilepage(KNSCore__Author* self, const libqt_string profilepage) {
    QString profilepage_QString = QString::fromUtf8(profilepage.data, profilepage.len);
    self->setProfilepage(profilepage_QString);
}

libqt_string KNSCore__Author_Profilepage(const KNSCore__Author* self) {
    QString _ret = self->profilepage();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KNSCore__Author_SetAvatarUrl(KNSCore__Author* self, const QUrl* avatarUrl) {
    self->setAvatarUrl(*avatarUrl);
}

QUrl* KNSCore__Author_AvatarUrl(const KNSCore__Author* self) {
    return new QUrl(self->avatarUrl());
}

libqt_string KNSCore__Author_Description(const KNSCore__Author* self) {
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

void KNSCore__Author_SetDescription(KNSCore__Author* self, const libqt_string description) {
    QString description_QString = QString::fromUtf8(description.data, description.len);
    self->setDescription(description_QString);
}

void KNSCore__Author_Delete(KNSCore__Author* self) {
    delete self;
}
