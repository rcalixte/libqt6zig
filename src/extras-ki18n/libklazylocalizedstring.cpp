#include <KLazyLocalizedString>
#include <KLocalizedString>
#include <QChar>
#include <QList>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <klazylocalizedstring.h>
#include "libklazylocalizedstring.h"
#include "libklazylocalizedstring.hxx"

KLazyLocalizedString* KLazyLocalizedString_new(const KLazyLocalizedString* other) {
    return new KLazyLocalizedString(*other);
}

KLazyLocalizedString* KLazyLocalizedString_new2(KLazyLocalizedString* other) {
    return new KLazyLocalizedString(std::move(*other));
}

KLazyLocalizedString* KLazyLocalizedString_new3() {
    return new KLazyLocalizedString();
}

void KLazyLocalizedString_CopyAssign(KLazyLocalizedString* self, KLazyLocalizedString* other) {
    *self = *other;
}

void KLazyLocalizedString_MoveAssign(KLazyLocalizedString* self, KLazyLocalizedString* other) {
    *self = std::move(*other);
}

KLocalizedString* KLazyLocalizedString_ToKLocalizedString(const KLazyLocalizedString* self) {
    return new KLocalizedString(self->operator KLocalizedString());
}

bool KLazyLocalizedString_IsEmpty(const KLazyLocalizedString* self) {
    return self->isEmpty();
}

const char* KLazyLocalizedString_UntranslatedText(const KLazyLocalizedString* self) {
    return (const char*)self->untranslatedText();
}

libqt_string KLazyLocalizedString_ToString(const KLazyLocalizedString* self) {
    QString _ret = self->toString();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KLazyLocalizedString_ToString2(const KLazyLocalizedString* self, const libqt_list /* of libqt_string */ languages) {
    QList<QString> languages_QList;
    languages_QList.reserve(languages.len);
    libqt_string* languages_arr = static_cast<libqt_string*>(languages.data);
    for (size_t i = 0; i < languages.len; ++i) {
        QString languages_arr_i_QString = QString::fromUtf8(languages_arr[i].data, languages_arr[i].len);
        languages_QList.push_back(languages_arr_i_QString);
    }
    QString _ret = self->toString(languages_QList);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KLazyLocalizedString_ToString3(const KLazyLocalizedString* self, const char* domain) {
    QString _ret = self->toString(domain);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KLazyLocalizedString_ToString4(const KLazyLocalizedString* self, int format) {
    QString _ret = self->toString(static_cast<Kuit::VisualFormat>(format));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

KLocalizedString* KLazyLocalizedString_WithLanguages(const KLazyLocalizedString* self, const libqt_list /* of libqt_string */ languages) {
    QList<QString> languages_QList;
    languages_QList.reserve(languages.len);
    libqt_string* languages_arr = static_cast<libqt_string*>(languages.data);
    for (size_t i = 0; i < languages.len; ++i) {
        QString languages_arr_i_QString = QString::fromUtf8(languages_arr[i].data, languages_arr[i].len);
        languages_QList.push_back(languages_arr_i_QString);
    }
    return new KLocalizedString(self->withLanguages(languages_QList));
}

KLocalizedString* KLazyLocalizedString_WithDomain(const KLazyLocalizedString* self, const char* domain) {
    return new KLocalizedString(self->withDomain(domain));
}

KLocalizedString* KLazyLocalizedString_WithFormat(const KLazyLocalizedString* self, int format) {
    return new KLocalizedString(self->withFormat(static_cast<Kuit::VisualFormat>(format)));
}

KLocalizedString* KLazyLocalizedString_Subs(const KLazyLocalizedString* self, int a) {
    return new KLocalizedString(self->subs(static_cast<int>(a)));
}

KLocalizedString* KLazyLocalizedString_Subs2(const KLazyLocalizedString* self, unsigned int a) {
    return new KLocalizedString(self->subs(static_cast<uint>(a)));
}

KLocalizedString* KLazyLocalizedString_Subs3(const KLazyLocalizedString* self, long a) {
    return new KLocalizedString(self->subs(static_cast<long>(a)));
}

KLocalizedString* KLazyLocalizedString_Subs4(const KLazyLocalizedString* self, unsigned long a) {
    return new KLocalizedString(self->subs(static_cast<ulong>(a)));
}

KLocalizedString* KLazyLocalizedString_Subs5(const KLazyLocalizedString* self, long long a) {
    return new KLocalizedString(self->subs(static_cast<qlonglong>(a)));
}

KLocalizedString* KLazyLocalizedString_Subs6(const KLazyLocalizedString* self, unsigned long long a) {
    return new KLocalizedString(self->subs(static_cast<qulonglong>(a)));
}

KLocalizedString* KLazyLocalizedString_Subs7(const KLazyLocalizedString* self, double a) {
    return new KLocalizedString(self->subs(static_cast<double>(a)));
}

KLocalizedString* KLazyLocalizedString_Subs8(const KLazyLocalizedString* self, QChar* a) {
    return new KLocalizedString(self->subs(*a));
}

KLocalizedString* KLazyLocalizedString_Subs9(const KLazyLocalizedString* self, const libqt_string a) {
    QString a_QString = QString::fromUtf8(a.data, a.len);
    return new KLocalizedString(self->subs(a_QString));
}

KLocalizedString* KLazyLocalizedString_Subs10(const KLazyLocalizedString* self, const KLocalizedString* a) {
    return new KLocalizedString(self->subs(*a));
}

KLocalizedString* KLazyLocalizedString_InContext(const KLazyLocalizedString* self, const libqt_string key, const libqt_string value) {
    QString key_QString = QString::fromUtf8(key.data, key.len);
    QString value_QString = QString::fromUtf8(value.data, value.len);
    return new KLocalizedString(self->inContext(key_QString, value_QString));
}

KLocalizedString* KLazyLocalizedString_RelaxSubs(const KLazyLocalizedString* self) {
    return new KLocalizedString(self->relaxSubs());
}

KLocalizedString* KLazyLocalizedString_IgnoreMarkup(const KLazyLocalizedString* self) {
    return new KLocalizedString(self->ignoreMarkup());
}

KLocalizedString* KLazyLocalizedString_Subs22(const KLazyLocalizedString* self, int a, int fieldWidth) {
    return new KLocalizedString(self->subs(static_cast<int>(a), static_cast<int>(fieldWidth)));
}

KLocalizedString* KLazyLocalizedString_Subs32(const KLazyLocalizedString* self, int a, int fieldWidth, int base) {
    return new KLocalizedString(self->subs(static_cast<int>(a), static_cast<int>(fieldWidth), static_cast<int>(base)));
}

KLocalizedString* KLazyLocalizedString_Subs42(const KLazyLocalizedString* self, int a, int fieldWidth, int base, QChar* fillChar) {
    return new KLocalizedString(self->subs(static_cast<int>(a), static_cast<int>(fieldWidth), static_cast<int>(base), *fillChar));
}

KLocalizedString* KLazyLocalizedString_Subs23(const KLazyLocalizedString* self, unsigned int a, int fieldWidth) {
    return new KLocalizedString(self->subs(static_cast<uint>(a), static_cast<int>(fieldWidth)));
}

KLocalizedString* KLazyLocalizedString_Subs33(const KLazyLocalizedString* self, unsigned int a, int fieldWidth, int base) {
    return new KLocalizedString(self->subs(static_cast<uint>(a), static_cast<int>(fieldWidth), static_cast<int>(base)));
}

KLocalizedString* KLazyLocalizedString_Subs43(const KLazyLocalizedString* self, unsigned int a, int fieldWidth, int base, QChar* fillChar) {
    return new KLocalizedString(self->subs(static_cast<uint>(a), static_cast<int>(fieldWidth), static_cast<int>(base), *fillChar));
}

KLocalizedString* KLazyLocalizedString_Subs24(const KLazyLocalizedString* self, long a, int fieldWidth) {
    return new KLocalizedString(self->subs(static_cast<long>(a), static_cast<int>(fieldWidth)));
}

KLocalizedString* KLazyLocalizedString_Subs34(const KLazyLocalizedString* self, long a, int fieldWidth, int base) {
    return new KLocalizedString(self->subs(static_cast<long>(a), static_cast<int>(fieldWidth), static_cast<int>(base)));
}

KLocalizedString* KLazyLocalizedString_Subs44(const KLazyLocalizedString* self, long a, int fieldWidth, int base, QChar* fillChar) {
    return new KLocalizedString(self->subs(static_cast<long>(a), static_cast<int>(fieldWidth), static_cast<int>(base), *fillChar));
}

KLocalizedString* KLazyLocalizedString_Subs25(const KLazyLocalizedString* self, unsigned long a, int fieldWidth) {
    return new KLocalizedString(self->subs(static_cast<ulong>(a), static_cast<int>(fieldWidth)));
}

KLocalizedString* KLazyLocalizedString_Subs35(const KLazyLocalizedString* self, unsigned long a, int fieldWidth, int base) {
    return new KLocalizedString(self->subs(static_cast<ulong>(a), static_cast<int>(fieldWidth), static_cast<int>(base)));
}

KLocalizedString* KLazyLocalizedString_Subs45(const KLazyLocalizedString* self, unsigned long a, int fieldWidth, int base, QChar* fillChar) {
    return new KLocalizedString(self->subs(static_cast<ulong>(a), static_cast<int>(fieldWidth), static_cast<int>(base), *fillChar));
}

KLocalizedString* KLazyLocalizedString_Subs26(const KLazyLocalizedString* self, long long a, int fieldWidth) {
    return new KLocalizedString(self->subs(static_cast<qlonglong>(a), static_cast<int>(fieldWidth)));
}

KLocalizedString* KLazyLocalizedString_Subs36(const KLazyLocalizedString* self, long long a, int fieldWidth, int base) {
    return new KLocalizedString(self->subs(static_cast<qlonglong>(a), static_cast<int>(fieldWidth), static_cast<int>(base)));
}

KLocalizedString* KLazyLocalizedString_Subs46(const KLazyLocalizedString* self, long long a, int fieldWidth, int base, QChar* fillChar) {
    return new KLocalizedString(self->subs(static_cast<qlonglong>(a), static_cast<int>(fieldWidth), static_cast<int>(base), *fillChar));
}

KLocalizedString* KLazyLocalizedString_Subs27(const KLazyLocalizedString* self, unsigned long long a, int fieldWidth) {
    return new KLocalizedString(self->subs(static_cast<qulonglong>(a), static_cast<int>(fieldWidth)));
}

KLocalizedString* KLazyLocalizedString_Subs37(const KLazyLocalizedString* self, unsigned long long a, int fieldWidth, int base) {
    return new KLocalizedString(self->subs(static_cast<qulonglong>(a), static_cast<int>(fieldWidth), static_cast<int>(base)));
}

KLocalizedString* KLazyLocalizedString_Subs47(const KLazyLocalizedString* self, unsigned long long a, int fieldWidth, int base, QChar* fillChar) {
    return new KLocalizedString(self->subs(static_cast<qulonglong>(a), static_cast<int>(fieldWidth), static_cast<int>(base), *fillChar));
}

KLocalizedString* KLazyLocalizedString_Subs28(const KLazyLocalizedString* self, double a, int fieldWidth) {
    return new KLocalizedString(self->subs(static_cast<double>(a), static_cast<int>(fieldWidth)));
}

KLocalizedString* KLazyLocalizedString_Subs38(const KLazyLocalizedString* self, double a, int fieldWidth, char format) {
    return new KLocalizedString(self->subs(static_cast<double>(a), static_cast<int>(fieldWidth), static_cast<char>(format)));
}

KLocalizedString* KLazyLocalizedString_Subs48(const KLazyLocalizedString* self, double a, int fieldWidth, char format, int precision) {
    return new KLocalizedString(self->subs(static_cast<double>(a), static_cast<int>(fieldWidth), static_cast<char>(format), static_cast<int>(precision)));
}

KLocalizedString* KLazyLocalizedString_Subs52(const KLazyLocalizedString* self, double a, int fieldWidth, char format, int precision, QChar* fillChar) {
    return new KLocalizedString(self->subs(static_cast<double>(a), static_cast<int>(fieldWidth), static_cast<char>(format), static_cast<int>(precision), *fillChar));
}

KLocalizedString* KLazyLocalizedString_Subs29(const KLazyLocalizedString* self, QChar* a, int fieldWidth) {
    return new KLocalizedString(self->subs(*a, static_cast<int>(fieldWidth)));
}

KLocalizedString* KLazyLocalizedString_Subs39(const KLazyLocalizedString* self, QChar* a, int fieldWidth, QChar* fillChar) {
    return new KLocalizedString(self->subs(*a, static_cast<int>(fieldWidth), *fillChar));
}

KLocalizedString* KLazyLocalizedString_Subs210(const KLazyLocalizedString* self, const libqt_string a, int fieldWidth) {
    QString a_QString = QString::fromUtf8(a.data, a.len);
    return new KLocalizedString(self->subs(a_QString, static_cast<int>(fieldWidth)));
}

KLocalizedString* KLazyLocalizedString_Subs310(const KLazyLocalizedString* self, const libqt_string a, int fieldWidth, QChar* fillChar) {
    QString a_QString = QString::fromUtf8(a.data, a.len);
    return new KLocalizedString(self->subs(a_QString, static_cast<int>(fieldWidth), *fillChar));
}

KLocalizedString* KLazyLocalizedString_Subs211(const KLazyLocalizedString* self, const KLocalizedString* a, int fieldWidth) {
    return new KLocalizedString(self->subs(*a, static_cast<int>(fieldWidth)));
}

KLocalizedString* KLazyLocalizedString_Subs311(const KLazyLocalizedString* self, const KLocalizedString* a, int fieldWidth, QChar* fillChar) {
    return new KLocalizedString(self->subs(*a, static_cast<int>(fieldWidth), *fillChar));
}

void KLazyLocalizedString_Delete(KLazyLocalizedString* self) {
    delete self;
}
