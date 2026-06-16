#include <QString>
#include <QUrl>
#include <global.h>
#include "libglobal.h"
#include "libglobal.hxx"

libqt_string KIO_ConvertSize(unsigned long long size) {
    auto _ret = KIO::convertSize(static_cast<KIO::filesize_t>(size));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KIO_Number(unsigned long long size) {
    auto _ret = KIO::number(static_cast<KIO::filesize_t>(size));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KIO_ConvertSizeFromKiB(unsigned long long kibSize) {
    auto _ret = KIO::convertSizeFromKiB(static_cast<KIO::filesize_t>(kibSize));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

unsigned int KIO_CalculateRemainingSeconds(unsigned long long totalSize, unsigned long long processedSize, unsigned long long speed) {
    return KIO::calculateRemainingSeconds(static_cast<KIO::filesize_t>(totalSize), static_cast<KIO::filesize_t>(processedSize), static_cast<KIO::filesize_t>(speed));
}

libqt_string KIO_ConvertSeconds(unsigned int seconds) {
    auto _ret = KIO::convertSeconds(static_cast<unsigned int>(seconds));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KIO_ItemsSummaryString(unsigned int items, unsigned int files, unsigned int dirs, unsigned long long size, bool showSize) {
    auto _ret = KIO::itemsSummaryString(static_cast<uint>(items), static_cast<uint>(files), static_cast<uint>(dirs), static_cast<KIO::filesize_t>(size), showSize);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KIO_EncodeFileName(const libqt_string str) {
    QString str_QString = QString::fromUtf8(str.data, str.len);
    auto _ret = KIO::encodeFileName(str_QString);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KIO_DecodeFileName(const libqt_string str) {
    QString str_QString = QString::fromUtf8(str.data, str.len);
    auto _ret = KIO::decodeFileName(str_QString);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int KIO_ParseCacheControl(const libqt_string cacheControl) {
    QString cacheControl_QString = QString::fromUtf8(cacheControl.data, cacheControl.len);
    return static_cast<int>(KIO::parseCacheControl(cacheControl_QString));
}

libqt_string KIO_GetCacheControlString(int cacheControl) {
    auto _ret = KIO::getCacheControlString(static_cast<KIO::CacheControl>(cacheControl));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KIO_FavIconForUrl(const QUrl* url) {
    auto _ret = KIO::favIconForUrl(*url);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int KIO_ConvertPermissions(int permissions) {
    return static_cast<int>(KIO::convertPermissions(static_cast<int>(permissions)));
}

libqt_string KIO_IconNameForUrl(const QUrl* url) {
    auto _ret = KIO::iconNameForUrl(*url);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QUrl* KIO_UpUrl(const QUrl* url) {
    return new QUrl(KIO::upUrl(*url));
}
