#include <QByteArray>
#include <QString>
#include <QUrl>
#include <job.h>
#include "libjob.h"
#include "libjob.hxx"

libqt_string KIO_BuildErrorString(int errorCode, const libqt_string errorText) {
    QString errorText_QString = QString::fromUtf8(errorText.data, errorText.len);
    auto _ret = KIO::buildErrorString(static_cast<int>(errorCode), errorText_QString);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KIO_RawErrorDetail(int errorCode, const libqt_string errorText, const QUrl* reqUrl, int method) {
    QString errorText_QString = QString::fromUtf8(errorText.data, errorText.len);
    QByteArray _qb = KIO::rawErrorDetail(static_cast<int>(errorCode), errorText_QString, reqUrl, static_cast<int>(method));
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<char*>(malloc(_str.len));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    return _str;
}
