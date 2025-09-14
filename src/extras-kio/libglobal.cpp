#include <QString>
#include <QByteArray>
#include <cstring>
#include <QUrl>
#include <global.h>
#include "libglobal.h"
#include "libglobal.hxx"

libqt_string KIO_ConvertSize(unsigned long long param1) {
    QString _ret = KIO::convertSize(static_cast<KIO::filesize_t>(param1));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KIO_Number(unsigned long long param1) {
    QString _ret = KIO::number(static_cast<KIO::filesize_t>(param1));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KIO_ConvertSizeFromKiB(unsigned long long param1) {
    QString _ret = KIO::convertSizeFromKiB(static_cast<KIO::filesize_t>(param1));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

unsigned int KIO_CalculateRemainingSeconds(unsigned long long param1, unsigned long long param2, unsigned long long param3) {
    return KIO::calculateRemainingSeconds(static_cast<KIO::filesize_t>(param1), static_cast<KIO::filesize_t>(param2), static_cast<KIO::filesize_t>(param3));
}

libqt_string KIO_ConvertSeconds(unsigned int param1) {
    QString _ret = KIO::convertSeconds(static_cast<unsigned int>(param1));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KIO_ItemsSummaryString(unsigned int param1, unsigned int param2, unsigned int param3, unsigned long long param4, bool param5) {
    QString _ret = KIO::itemsSummaryString(static_cast<uint>(param1), static_cast<uint>(param2), static_cast<uint>(param3), static_cast<KIO::filesize_t>(param4), param5);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KIO_EncodeFileName(const libqt_string param1) {
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    QString _ret = KIO::encodeFileName(param1_QString);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KIO_DecodeFileName(const libqt_string param1) {
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    QString _ret = KIO::decodeFileName(param1_QString);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int KIO_ParseCacheControl(const libqt_string param1) {
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    return static_cast<int>(KIO::parseCacheControl(param1_QString));
}

libqt_string KIO_GetCacheControlString(int param1) {
    QString _ret = KIO::getCacheControlString(static_cast<KIO::CacheControl>(param1));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KIO_FavIconForUrl(const QUrl* param1) {
    QString _ret = KIO::favIconForUrl(*param1);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int KIO_ConvertPermissions(int param1) {
    return static_cast<int>(KIO::convertPermissions(static_cast<int>(param1)));
}

libqt_string KIO_IconNameForUrl(const QUrl* param1) {
    QString _ret = KIO::iconNameForUrl(*param1);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QUrl* KIO_UpUrl(const QUrl* param1) {
    return new QUrl(KIO::upUrl(*param1));
}
