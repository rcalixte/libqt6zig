#include <QByteArray>
#include <QByteArrayView>
#include <QDateTime>
#include <QList>
#include <QNetworkCookie>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QUrl>
#include <qnetworkcookie.h>
#include "libqnetworkcookie.h"
#include "libqnetworkcookie.hxx"

QNetworkCookie* QNetworkCookie_new() {
    return new QNetworkCookie();
}

QNetworkCookie* QNetworkCookie_new2(const QNetworkCookie* other) {
    return new QNetworkCookie(*other);
}

QNetworkCookie* QNetworkCookie_new3(const libqt_string name) {
    QByteArray name_QByteArray(name.data, name.len);
    return new QNetworkCookie(name_QByteArray);
}

QNetworkCookie* QNetworkCookie_new4(const libqt_string name, const libqt_string value) {
    QByteArray name_QByteArray(name.data, name.len);
    QByteArray value_QByteArray(value.data, value.len);
    return new QNetworkCookie(name_QByteArray, value_QByteArray);
}

void QNetworkCookie_OperatorAssign(QNetworkCookie* self, const QNetworkCookie* other) {
    self->operator=(*other);
}

void QNetworkCookie_Swap(QNetworkCookie* self, QNetworkCookie* other) {
    self->swap(*other);
}

bool QNetworkCookie_OperatorEqual(const QNetworkCookie* self, const QNetworkCookie* other) {
    return (*self == *other);
}

bool QNetworkCookie_OperatorNotEqual(const QNetworkCookie* self, const QNetworkCookie* other) {
    return (*self != *other);
}

bool QNetworkCookie_IsSecure(const QNetworkCookie* self) {
    return self->isSecure();
}

void QNetworkCookie_SetSecure(QNetworkCookie* self, bool enable) {
    self->setSecure(enable);
}

bool QNetworkCookie_IsHttpOnly(const QNetworkCookie* self) {
    return self->isHttpOnly();
}

void QNetworkCookie_SetHttpOnly(QNetworkCookie* self, bool enable) {
    self->setHttpOnly(enable);
}

int QNetworkCookie_SameSitePolicy(const QNetworkCookie* self) {
    return static_cast<int>(self->sameSitePolicy());
}

void QNetworkCookie_SetSameSitePolicy(QNetworkCookie* self, int sameSite) {
    self->setSameSitePolicy(static_cast<QNetworkCookie::SameSite>(sameSite));
}

bool QNetworkCookie_IsSessionCookie(const QNetworkCookie* self) {
    return self->isSessionCookie();
}

QDateTime* QNetworkCookie_ExpirationDate(const QNetworkCookie* self) {
    return new QDateTime(self->expirationDate());
}

void QNetworkCookie_SetExpirationDate(QNetworkCookie* self, const QDateTime* date) {
    self->setExpirationDate(*date);
}

libqt_string QNetworkCookie_Domain(const QNetworkCookie* self) {
    QString _ret = self->domain();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QNetworkCookie_SetDomain(QNetworkCookie* self, const libqt_string domain) {
    QString domain_QString = QString::fromUtf8(domain.data, domain.len);
    self->setDomain(domain_QString);
}

libqt_string QNetworkCookie_Path(const QNetworkCookie* self) {
    QString _ret = self->path();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QNetworkCookie_SetPath(QNetworkCookie* self, const libqt_string path) {
    QString path_QString = QString::fromUtf8(path.data, path.len);
    self->setPath(path_QString);
}

libqt_string QNetworkCookie_Name(const QNetworkCookie* self) {
    QByteArray _qb = self->name();
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QNetworkCookie_SetName(QNetworkCookie* self, const libqt_string cookieName) {
    QByteArray cookieName_QByteArray(cookieName.data, cookieName.len);
    self->setName(cookieName_QByteArray);
}

libqt_string QNetworkCookie_Value(const QNetworkCookie* self) {
    QByteArray _qb = self->value();
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QNetworkCookie_SetValue(QNetworkCookie* self, const libqt_string value) {
    QByteArray value_QByteArray(value.data, value.len);
    self->setValue(value_QByteArray);
}

libqt_string QNetworkCookie_ToRawForm(const QNetworkCookie* self) {
    QByteArray _qb = self->toRawForm();
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool QNetworkCookie_HasSameIdentifier(const QNetworkCookie* self, const QNetworkCookie* other) {
    return self->hasSameIdentifier(*other);
}

void QNetworkCookie_Normalize(QNetworkCookie* self, const QUrl* url) {
    self->normalize(*url);
}

libqt_list /* of QNetworkCookie* */ QNetworkCookie_ParseCookies(QByteArrayView* cookieString) {
    QList<QNetworkCookie> _ret = QNetworkCookie::parseCookies(*cookieString);
    // Convert QList<> from C++ memory to manually-managed C memory
    QNetworkCookie** _arr = static_cast<QNetworkCookie**>(malloc(sizeof(QNetworkCookie*) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QNetworkCookie(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_string QNetworkCookie_ToRawForm1(const QNetworkCookie* self, int form) {
    QByteArray _qb = self->toRawForm(static_cast<QNetworkCookie::RawForm>(form));
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QNetworkCookie_Delete(QNetworkCookie* self) {
    delete self;
}
