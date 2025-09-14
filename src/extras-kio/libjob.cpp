#include <QByteArray>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QUrl>
#include <job.h>
#include "libjob.h"
#include "libjob.hxx"

libqt_string KIO_BuildErrorString(int param1, const libqt_string param2) {
    QString param2_QString = QString::fromUtf8(param2.data, param2.len);
    QString _ret = KIO::buildErrorString(static_cast<int>(param1), param2_QString);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KIO_RawErrorDetail(int param1, const libqt_string param2, const QUrl* param3, int param4) {
    QString param2_QString = QString::fromUtf8(param2.data, param2.len);
    QByteArray _qb = KIO::rawErrorDetail(static_cast<int>(param1), param2_QString, param3, static_cast<int>(param4));
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}
