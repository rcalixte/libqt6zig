#include <KEmailAddress>
#include <QByteArray>
#include <QList>
#include <QString>
#include <QUrl>
#include <kemailaddress.h>
#include "libkemailaddress.h"
#include "libkemailaddress.hxx"

libqt_list /* of libqt_string */ KEmailAddress_SplitAddressList(const libqt_string aStr) {
    QString aStr_QString = QString::fromUtf8(aStr.data, aStr.len);
    QList<QString> _ret = KEmailAddress::splitAddressList(aStr_QString);
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        auto _lv_ret = _ret[i];
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

int KEmailAddress_SplitAddress(const libqt_string address, libqt_string displayName, libqt_string addrSpec, libqt_string comment) {
    QByteArray address_QByteArray(address.data, address.len);
    QByteArray displayName_QByteArray(displayName.data, displayName.len);
    QByteArray addrSpec_QByteArray(addrSpec.data, addrSpec.len);
    QByteArray comment_QByteArray(comment.data, comment.len);
    return static_cast<int>(KEmailAddress::splitAddress(address_QByteArray, displayName_QByteArray, addrSpec_QByteArray, comment_QByteArray));
}

int KEmailAddress_SplitAddress2(const libqt_string address, libqt_string displayName, libqt_string addrSpec, libqt_string comment) {
    QString address_QString = QString::fromUtf8(address.data, address.len);
    QString displayName_QString = QString::fromUtf8(displayName.data, displayName.len);
    QString addrSpec_QString = QString::fromUtf8(addrSpec.data, addrSpec.len);
    QString comment_QString = QString::fromUtf8(comment.data, comment.len);
    return static_cast<int>(KEmailAddress::splitAddress(address_QString, displayName_QString, addrSpec_QString, comment_QString));
}

int KEmailAddress_IsValidAddress(const libqt_string aStr) {
    QString aStr_QString = QString::fromUtf8(aStr.data, aStr.len);
    return static_cast<int>(KEmailAddress::isValidAddress(aStr_QString));
}

int KEmailAddress_IsValidAddressList(const libqt_string aStr, libqt_string badAddr) {
    QString aStr_QString = QString::fromUtf8(aStr.data, aStr.len);
    QString badAddr_QString = QString::fromUtf8(badAddr.data, badAddr.len);
    return static_cast<int>(KEmailAddress::isValidAddressList(aStr_QString, badAddr_QString));
}

libqt_string KEmailAddress_EmailParseResultToString(int errorCode) {
    auto _ret = KEmailAddress::emailParseResultToString(static_cast<KEmailAddress::EmailParseResult>(errorCode));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool KEmailAddress_IsValidSimpleAddress(const libqt_string aStr) {
    QString aStr_QString = QString::fromUtf8(aStr.data, aStr.len);
    return KEmailAddress::isValidSimpleAddress(aStr_QString);
}

libqt_string KEmailAddress_SimpleEmailAddressErrorMsg() {
    auto _ret = KEmailAddress::simpleEmailAddressErrorMsg();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KEmailAddress_ExtractEmailAddress(const libqt_string address) {
    QByteArray address_QByteArray(address.data, address.len);
    QByteArray _qb = KEmailAddress::extractEmailAddress(address_QByteArray);
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<char*>(malloc(_str.len));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    return _str;
}

libqt_string KEmailAddress_ExtractEmailAddress2(const libqt_string address, libqt_string errorMessage) {
    QByteArray address_QByteArray(address.data, address.len);
    QString errorMessage_QString = QString::fromUtf8(errorMessage.data, errorMessage.len);
    QByteArray _qb = KEmailAddress::extractEmailAddress(address_QByteArray, errorMessage_QString);
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<char*>(malloc(_str.len));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    return _str;
}

libqt_string KEmailAddress_ExtractEmailAddress3(const libqt_string address) {
    QString address_QString = QString::fromUtf8(address.data, address.len);
    auto _ret = KEmailAddress::extractEmailAddress(address_QString);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KEmailAddress_ExtractEmailAddress4(const libqt_string address, libqt_string errorMessage) {
    QString address_QString = QString::fromUtf8(address.data, address.len);
    QString errorMessage_QString = QString::fromUtf8(errorMessage.data, errorMessage.len);
    auto _ret = KEmailAddress::extractEmailAddress(address_QString, errorMessage_QString);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KEmailAddress_FirstEmailAddress(const libqt_string addresses) {
    QByteArray addresses_QByteArray(addresses.data, addresses.len);
    QByteArray _qb = KEmailAddress::firstEmailAddress(addresses_QByteArray);
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<char*>(malloc(_str.len));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    return _str;
}

libqt_string KEmailAddress_FirstEmailAddress2(const libqt_string addresses, libqt_string errorMessage) {
    QByteArray addresses_QByteArray(addresses.data, addresses.len);
    QString errorMessage_QString = QString::fromUtf8(errorMessage.data, errorMessage.len);
    QByteArray _qb = KEmailAddress::firstEmailAddress(addresses_QByteArray, errorMessage_QString);
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<char*>(malloc(_str.len));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    return _str;
}

libqt_string KEmailAddress_FirstEmailAddress3(const libqt_string addresses) {
    QString addresses_QString = QString::fromUtf8(addresses.data, addresses.len);
    auto _ret = KEmailAddress::firstEmailAddress(addresses_QString);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KEmailAddress_FirstEmailAddress4(const libqt_string addresses, libqt_string errorMessage) {
    QString addresses_QString = QString::fromUtf8(addresses.data, addresses.len);
    QString errorMessage_QString = QString::fromUtf8(errorMessage.data, errorMessage.len);
    auto _ret = KEmailAddress::firstEmailAddress(addresses_QString, errorMessage_QString);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool KEmailAddress_ExtractEmailAddressAndName(const libqt_string aStr, libqt_string mail, libqt_string name) {
    QString aStr_QString = QString::fromUtf8(aStr.data, aStr.len);
    QString mail_QString = QString::fromUtf8(mail.data, mail.len);
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return KEmailAddress::extractEmailAddressAndName(aStr_QString, mail_QString, name_QString);
}

bool KEmailAddress_CompareEmail(const libqt_string email1, const libqt_string email2, bool matchName) {
    QString email1_QString = QString::fromUtf8(email1.data, email1.len);
    QString email2_QString = QString::fromUtf8(email2.data, email2.len);
    return KEmailAddress::compareEmail(email1_QString, email2_QString, matchName);
}

libqt_string KEmailAddress_NormalizedAddress(const libqt_string displayName, const libqt_string addrSpec, const libqt_string comment) {
    QString displayName_QString = QString::fromUtf8(displayName.data, displayName.len);
    QString addrSpec_QString = QString::fromUtf8(addrSpec.data, addrSpec.len);
    QString comment_QString = QString::fromUtf8(comment.data, comment.len);
    auto _ret = KEmailAddress::normalizedAddress(displayName_QString, addrSpec_QString, comment_QString);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KEmailAddress_FromIdn(const libqt_string addrSpec) {
    QString addrSpec_QString = QString::fromUtf8(addrSpec.data, addrSpec.len);
    auto _ret = KEmailAddress::fromIdn(addrSpec_QString);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KEmailAddress_ToIdn(const libqt_string addrSpec) {
    QString addrSpec_QString = QString::fromUtf8(addrSpec.data, addrSpec.len);
    auto _ret = KEmailAddress::toIdn(addrSpec_QString);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KEmailAddress_NormalizeAddressesAndDecodeIdn(const libqt_string addresses) {
    QString addresses_QString = QString::fromUtf8(addresses.data, addresses.len);
    auto _ret = KEmailAddress::normalizeAddressesAndDecodeIdn(addresses_QString);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KEmailAddress_NormalizeAddressesAndEncodeIdn(const libqt_string str) {
    QString str_QString = QString::fromUtf8(str.data, str.len);
    auto _ret = KEmailAddress::normalizeAddressesAndEncodeIdn(str_QString);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KEmailAddress_QuoteNameIfNecessary(const libqt_string str) {
    QString str_QString = QString::fromUtf8(str.data, str.len);
    auto _ret = KEmailAddress::quoteNameIfNecessary(str_QString);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QUrl* KEmailAddress_EncodeMailtoUrl(const libqt_string mailbox) {
    QString mailbox_QString = QString::fromUtf8(mailbox.data, mailbox.len);
    return new QUrl(KEmailAddress::encodeMailtoUrl(mailbox_QString));
}

libqt_string KEmailAddress_DecodeMailtoUrl(const QUrl* mailtoUrl) {
    auto _ret = KEmailAddress::decodeMailtoUrl(*mailtoUrl);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}
