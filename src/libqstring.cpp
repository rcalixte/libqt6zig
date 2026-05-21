#include <QByteArray>
#include <QByteArrayView>
#include <QChar>
#include <QList>
#include <QRegularExpression>
#include <QRegularExpressionMatch>
#include <QString>
#include <qstring.h>
#include "libqstring.h"
#include "libqstring.hxx"

ptrdiff_t QString_MaxSize() {
    return static_cast<ptrdiff_t>(QString::maxSize());
}

libqt_string QString_FromLatin1(libqt_string ba) {
    QByteArrayView ba_QByteArrayView(ba.data, ba.len);
    auto _ret = QString::fromLatin1(ba_QByteArrayView);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QString_FromLatin12(const char* str, ptrdiff_t size) {
    auto _ret = QString::fromLatin1(str, (qsizetype)(size));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QString_FromUtf8(libqt_string utf8) {
    QByteArrayView utf8_QByteArrayView(utf8.data, utf8.len);
    auto _ret = QString::fromUtf8(utf8_QByteArrayView);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QString_FromUtf82(const char* utf8, ptrdiff_t size) {
    auto _ret = QString::fromUtf8(utf8, (qsizetype)(size));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QString_FromLocal8Bit(libqt_string ba) {
    QByteArrayView ba_QByteArrayView(ba.data, ba.len);
    auto _ret = QString::fromLocal8Bit(ba_QByteArrayView);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QString_FromLocal8Bit2(const char* str, ptrdiff_t size) {
    auto _ret = QString::fromLocal8Bit(str, (qsizetype)(size));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QString_FromRawData(const QChar* param1, ptrdiff_t size) {
    auto _ret = QString::fromRawData(param1, (qsizetype)(size));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QString_FromUtf162(const uint16_t* str) {
    auto _ret = QString::fromUtf16(static_cast<const ushort*>(str));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QString_FromUcs42(const unsigned int* str) {
    auto _ret = QString::fromUcs4(static_cast<const uint*>(str));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int QString_Compare5(const libqt_string s1, const libqt_string s2) {
    QString s1_QString = QString::fromUtf8(s1.data, s1.len);
    QString s2_QString = QString::fromUtf8(s2.data, s2.len);
    return QString::compare(s1_QString, s2_QString);
}

int QString_Compare6(const libqt_string s1, libqt_string s2) {
    QString s1_QString = QString::fromUtf8(s1.data, s1.len);
    QLatin1StringView s2_QLatin1StringView(s2.data, s2.len);
    return QString::compare(s1_QString, s2_QLatin1StringView);
}

int QString_Compare7(libqt_string s1, const libqt_string s2) {
    QLatin1StringView s1_QLatin1StringView(s1.data, s1.len);
    QString s2_QString = QString::fromUtf8(s2.data, s2.len);
    return QString::compare(s1_QLatin1StringView, s2_QString);
}

int QString_Compare8(const libqt_string s1, libqt_string s2) {
    QString s1_QString = QString::fromUtf8(s1.data, s1.len);
    QString s2_QString = QString::fromUtf8(s2.data, s2.len);
    return QString::compare(s1_QString, s2_QString);
}

int QString_Compare9(libqt_string s1, const libqt_string s2) {
    QString s1_QString = QString::fromUtf8(s1.data, s1.len);
    QString s2_QString = QString::fromUtf8(s2.data, s2.len);
    return QString::compare(s1_QString, s2_QString);
}

int QString_LocaleAwareCompare3(const libqt_string s1, const libqt_string s2) {
    QString s1_QString = QString::fromUtf8(s1.data, s1.len);
    QString s2_QString = QString::fromUtf8(s2.data, s2.len);
    return QString::localeAwareCompare(s1_QString, s2_QString);
}

int QString_LocaleAwareCompare4(libqt_string s1, libqt_string s2) {
    QString s1_QString = QString::fromUtf8(s1.data, s1.len);
    QString s2_QString = QString::fromUtf8(s2.data, s2.len);
    return QString::localeAwareCompare(s1_QString, s2_QString);
}

libqt_string QString_Number(int param1) {
    auto _ret = QString::number(static_cast<int>(param1));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QString_Number2(unsigned int param1) {
    auto _ret = QString::number(static_cast<uint>(param1));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QString_Number3(long param1) {
    auto _ret = QString::number(static_cast<long>(param1));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QString_Number4(unsigned long param1) {
    auto _ret = QString::number(static_cast<ulong>(param1));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QString_Number5(long long param1) {
    auto _ret = QString::number(static_cast<qlonglong>(param1));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QString_Number6(unsigned long long param1) {
    auto _ret = QString::number(static_cast<qulonglong>(param1));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QString_Number7(double param1) {
    auto _ret = QString::number(static_cast<double>(param1));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QString_FromUtf1623(const uint16_t* str, ptrdiff_t size) {
    auto _ret = QString::fromUtf16(static_cast<const ushort*>(str), (qsizetype)(size));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QString_FromUcs423(const unsigned int* str, ptrdiff_t size) {
    auto _ret = QString::fromUcs4(static_cast<const uint*>(str), (qsizetype)(size));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int QString_Compare32(const libqt_string s1, const libqt_string s2, int cs) {
    QString s1_QString = QString::fromUtf8(s1.data, s1.len);
    QString s2_QString = QString::fromUtf8(s2.data, s2.len);
    return QString::compare(s1_QString, s2_QString, static_cast<Qt::CaseSensitivity>(cs));
}

int QString_Compare33(const libqt_string s1, libqt_string s2, int cs) {
    QString s1_QString = QString::fromUtf8(s1.data, s1.len);
    QLatin1StringView s2_QLatin1StringView(s2.data, s2.len);
    return QString::compare(s1_QString, s2_QLatin1StringView, static_cast<Qt::CaseSensitivity>(cs));
}

int QString_Compare34(libqt_string s1, const libqt_string s2, int cs) {
    QLatin1StringView s1_QLatin1StringView(s1.data, s1.len);
    QString s2_QString = QString::fromUtf8(s2.data, s2.len);
    return QString::compare(s1_QLatin1StringView, s2_QString, static_cast<Qt::CaseSensitivity>(cs));
}

int QString_Compare35(const libqt_string s1, libqt_string s2, int cs) {
    QString s1_QString = QString::fromUtf8(s1.data, s1.len);
    QString s2_QString = QString::fromUtf8(s2.data, s2.len);
    return QString::compare(s1_QString, s2_QString, static_cast<Qt::CaseSensitivity>(cs));
}

int QString_Compare36(libqt_string s1, const libqt_string s2, int cs) {
    QString s1_QString = QString::fromUtf8(s1.data, s1.len);
    QString s2_QString = QString::fromUtf8(s2.data, s2.len);
    return QString::compare(s1_QString, s2_QString, static_cast<Qt::CaseSensitivity>(cs));
}

libqt_string QString_Number22(int param1, int base) {
    auto _ret = QString::number(static_cast<int>(param1), static_cast<int>(base));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QString_Number23(unsigned int param1, int base) {
    auto _ret = QString::number(static_cast<uint>(param1), static_cast<int>(base));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QString_Number24(long param1, int base) {
    auto _ret = QString::number(static_cast<long>(param1), static_cast<int>(base));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QString_Number25(unsigned long param1, int base) {
    auto _ret = QString::number(static_cast<ulong>(param1), static_cast<int>(base));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QString_Number26(long long param1, int base) {
    auto _ret = QString::number(static_cast<qlonglong>(param1), static_cast<int>(base));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QString_Number27(unsigned long long param1, int base) {
    auto _ret = QString::number(static_cast<qulonglong>(param1), static_cast<int>(base));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QString_Number28(double param1, char format) {
    auto _ret = QString::number(static_cast<double>(param1), static_cast<char>(format));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QString_Number32(double param1, char format, int precision) {
    auto _ret = QString::number(static_cast<double>(param1), static_cast<char>(format), static_cast<int>(precision));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}
