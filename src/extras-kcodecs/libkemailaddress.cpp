#include <KEmailAddress>
#include <QByteArray>
#include <QList>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QUrl>
#include <kemailaddress.h>
#include "libkemailaddress.h"
#include "libkemailaddress.hxx"

libqt_list /* of libqt_string */ KEmailAddress_SplitAddressList(const libqt_string param1) {
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    QList<QString> _ret = KEmailAddress::splitAddressList(param1_QString);
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.size()));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        QString _lv_ret = _ret[i];
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _lv_b = _lv_ret.toUtf8();
        libqt_string _lv_str;
        _lv_str.len = _lv_b.length();
        _lv_str.data = static_cast<const char*>(malloc(_lv_str.len + 1));
        memcpy((void*)_lv_str.data, _lv_b.data(), _lv_str.len);
        ((char*)_lv_str.data)[_lv_str.len] = '\0';
        _arr[i] = _lv_str;
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

int KEmailAddress_SplitAddress(const libqt_string param1, libqt_string param2, libqt_string param3, libqt_string param4) {
    QByteArray param1_QByteArray(param1.data, param1.len);
    QByteArray param2_QByteArray(param2.data, param2.len);
    QByteArray param3_QByteArray(param3.data, param3.len);
    QByteArray param4_QByteArray(param4.data, param4.len);
    return static_cast<int>(KEmailAddress::splitAddress(param1_QByteArray, param2_QByteArray, param3_QByteArray, param4_QByteArray));
}

int KEmailAddress_SplitAddress2(const libqt_string param1, libqt_string param2, libqt_string param3, libqt_string param4) {
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    QString param2_QString = QString::fromUtf8(param2.data, param2.len);
    QString param3_QString = QString::fromUtf8(param3.data, param3.len);
    QString param4_QString = QString::fromUtf8(param4.data, param4.len);
    return static_cast<int>(KEmailAddress::splitAddress(param1_QString, param2_QString, param3_QString, param4_QString));
}

int KEmailAddress_IsValidAddress(const libqt_string param1) {
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    return static_cast<int>(KEmailAddress::isValidAddress(param1_QString));
}

int KEmailAddress_IsValidAddressList(const libqt_string param1, libqt_string param2) {
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    QString param2_QString = QString::fromUtf8(param2.data, param2.len);
    return static_cast<int>(KEmailAddress::isValidAddressList(param1_QString, param2_QString));
}

libqt_string KEmailAddress_EmailParseResultToString(int param1) {
    QString _ret = KEmailAddress::emailParseResultToString(static_cast<KEmailAddress::EmailParseResult>(param1));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool KEmailAddress_IsValidSimpleAddress(const libqt_string param1) {
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    return KEmailAddress::isValidSimpleAddress(param1_QString);
}

libqt_string KEmailAddress_SimpleEmailAddressErrorMsg() {
    QString _ret = KEmailAddress::simpleEmailAddressErrorMsg();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KEmailAddress_ExtractEmailAddress(const libqt_string param1) {
    QByteArray param1_QByteArray(param1.data, param1.len);
    QByteArray _qb = KEmailAddress::extractEmailAddress(param1_QByteArray);
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KEmailAddress_ExtractEmailAddress2(const libqt_string param1, libqt_string param2) {
    QByteArray param1_QByteArray(param1.data, param1.len);
    QString param2_QString = QString::fromUtf8(param2.data, param2.len);
    QByteArray _qb = KEmailAddress::extractEmailAddress(param1_QByteArray, param2_QString);
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KEmailAddress_ExtractEmailAddress3(const libqt_string param1) {
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    QString _ret = KEmailAddress::extractEmailAddress(param1_QString);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KEmailAddress_ExtractEmailAddress4(const libqt_string param1, libqt_string param2) {
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    QString param2_QString = QString::fromUtf8(param2.data, param2.len);
    QString _ret = KEmailAddress::extractEmailAddress(param1_QString, param2_QString);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KEmailAddress_FirstEmailAddress(const libqt_string param1) {
    QByteArray param1_QByteArray(param1.data, param1.len);
    QByteArray _qb = KEmailAddress::firstEmailAddress(param1_QByteArray);
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KEmailAddress_FirstEmailAddress2(const libqt_string param1, libqt_string param2) {
    QByteArray param1_QByteArray(param1.data, param1.len);
    QString param2_QString = QString::fromUtf8(param2.data, param2.len);
    QByteArray _qb = KEmailAddress::firstEmailAddress(param1_QByteArray, param2_QString);
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KEmailAddress_FirstEmailAddress3(const libqt_string param1) {
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    QString _ret = KEmailAddress::firstEmailAddress(param1_QString);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KEmailAddress_FirstEmailAddress4(const libqt_string param1, libqt_string param2) {
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    QString param2_QString = QString::fromUtf8(param2.data, param2.len);
    QString _ret = KEmailAddress::firstEmailAddress(param1_QString, param2_QString);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool KEmailAddress_ExtractEmailAddressAndName(const libqt_string param1, libqt_string param2, libqt_string param3) {
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    QString param2_QString = QString::fromUtf8(param2.data, param2.len);
    QString param3_QString = QString::fromUtf8(param3.data, param3.len);
    return KEmailAddress::extractEmailAddressAndName(param1_QString, param2_QString, param3_QString);
}

bool KEmailAddress_CompareEmail(const libqt_string param1, const libqt_string param2, bool param3) {
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    QString param2_QString = QString::fromUtf8(param2.data, param2.len);
    return KEmailAddress::compareEmail(param1_QString, param2_QString, param3);
}

libqt_string KEmailAddress_NormalizedAddress(const libqt_string param1, const libqt_string param2, const libqt_string param3) {
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    QString param2_QString = QString::fromUtf8(param2.data, param2.len);
    QString param3_QString = QString::fromUtf8(param3.data, param3.len);
    QString _ret = KEmailAddress::normalizedAddress(param1_QString, param2_QString, param3_QString);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KEmailAddress_FromIdn(const libqt_string param1) {
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    QString _ret = KEmailAddress::fromIdn(param1_QString);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KEmailAddress_ToIdn(const libqt_string param1) {
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    QString _ret = KEmailAddress::toIdn(param1_QString);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KEmailAddress_NormalizeAddressesAndDecodeIdn(const libqt_string param1) {
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    QString _ret = KEmailAddress::normalizeAddressesAndDecodeIdn(param1_QString);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KEmailAddress_NormalizeAddressesAndEncodeIdn(const libqt_string param1) {
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    QString _ret = KEmailAddress::normalizeAddressesAndEncodeIdn(param1_QString);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KEmailAddress_QuoteNameIfNecessary(const libqt_string param1) {
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    QString _ret = KEmailAddress::quoteNameIfNecessary(param1_QString);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QUrl* KEmailAddress_EncodeMailtoUrl(const libqt_string param1) {
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    return new QUrl(KEmailAddress::encodeMailtoUrl(param1_QString));
}

libqt_string KEmailAddress_DecodeMailtoUrl(const QUrl* param1) {
    QString _ret = KEmailAddress::decodeMailtoUrl(*param1);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}
