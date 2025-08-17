#include <QSslEllipticCurve>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qsslellipticcurve.h>
#include "libqsslellipticcurve.h"
#include "libqsslellipticcurve.hxx"

QSslEllipticCurve* QSslEllipticCurve_new(const QSslEllipticCurve* other) {
    return new QSslEllipticCurve(*other);
}

QSslEllipticCurve* QSslEllipticCurve_new2(QSslEllipticCurve* other) {
    return new QSslEllipticCurve(std::move(*other));
}

QSslEllipticCurve* QSslEllipticCurve_new3() {
    return new QSslEllipticCurve();
}

QSslEllipticCurve* QSslEllipticCurve_new4(const QSslEllipticCurve* param1) {
    return new QSslEllipticCurve(*param1);
}

void QSslEllipticCurve_CopyAssign(QSslEllipticCurve* self, QSslEllipticCurve* other) {
    *self = *other;
}

void QSslEllipticCurve_MoveAssign(QSslEllipticCurve* self, QSslEllipticCurve* other) {
    *self = std::move(*other);
}

QSslEllipticCurve* QSslEllipticCurve_FromShortName(const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return new QSslEllipticCurve(QSslEllipticCurve::fromShortName(name_QString));
}

QSslEllipticCurve* QSslEllipticCurve_FromLongName(const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return new QSslEllipticCurve(QSslEllipticCurve::fromLongName(name_QString));
}

libqt_string QSslEllipticCurve_ShortName(const QSslEllipticCurve* self) {
    QString _ret = self->shortName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QSslEllipticCurve_LongName(const QSslEllipticCurve* self) {
    QString _ret = self->longName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool QSslEllipticCurve_IsValid(const QSslEllipticCurve* self) {
    return self->isValid();
}

bool QSslEllipticCurve_IsTlsNamedCurve(const QSslEllipticCurve* self) {
    return self->isTlsNamedCurve();
}

void QSslEllipticCurve_Delete(QSslEllipticCurve* self) {
    delete self;
}
