#include <KLocalizedString>
#include <QByteArray>
#include <QChar>
#include <QList>
#include <QSet>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <klocalizedstring.h>
#include "libklocalizedstring.h"
#include "libklocalizedstring.hxx"

KLocalizedString* KLocalizedString_new() {
    return new KLocalizedString();
}

KLocalizedString* KLocalizedString_new2(const KLocalizedString* rhs) {
    return new KLocalizedString(*rhs);
}

void KLocalizedString_OperatorAssign(KLocalizedString* self, const KLocalizedString* rhs) {
    self->operator=(*rhs);
}

bool KLocalizedString_IsEmpty(const KLocalizedString* self) {
    return self->isEmpty();
}

libqt_string KLocalizedString_ToString(const KLocalizedString* self) {
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

libqt_string KLocalizedString_ToString2(const KLocalizedString* self, const libqt_list /* of libqt_string */ languages) {
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

libqt_string KLocalizedString_ToString3(const KLocalizedString* self, const char* domain) {
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

libqt_string KLocalizedString_ToString4(const KLocalizedString* self, int format) {
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

KLocalizedString* KLocalizedString_WithLanguages(const KLocalizedString* self, const libqt_list /* of libqt_string */ languages) {
    QList<QString> languages_QList;
    languages_QList.reserve(languages.len);
    libqt_string* languages_arr = static_cast<libqt_string*>(languages.data);
    for (size_t i = 0; i < languages.len; ++i) {
        QString languages_arr_i_QString = QString::fromUtf8(languages_arr[i].data, languages_arr[i].len);
        languages_QList.push_back(languages_arr_i_QString);
    }
    return new KLocalizedString(self->withLanguages(languages_QList));
}

KLocalizedString* KLocalizedString_WithDomain(const KLocalizedString* self, const char* domain) {
    return new KLocalizedString(self->withDomain(domain));
}

KLocalizedString* KLocalizedString_WithFormat(const KLocalizedString* self, int format) {
    return new KLocalizedString(self->withFormat(static_cast<Kuit::VisualFormat>(format)));
}

KLocalizedString* KLocalizedString_Subs(const KLocalizedString* self, int a) {
    return new KLocalizedString(self->subs(static_cast<int>(a)));
}

KLocalizedString* KLocalizedString_Subs2(const KLocalizedString* self, unsigned int a) {
    return new KLocalizedString(self->subs(static_cast<uint>(a)));
}

KLocalizedString* KLocalizedString_Subs3(const KLocalizedString* self, long a) {
    return new KLocalizedString(self->subs(static_cast<long>(a)));
}

KLocalizedString* KLocalizedString_Subs4(const KLocalizedString* self, unsigned long a) {
    return new KLocalizedString(self->subs(static_cast<ulong>(a)));
}

KLocalizedString* KLocalizedString_Subs5(const KLocalizedString* self, long long a) {
    return new KLocalizedString(self->subs(static_cast<qlonglong>(a)));
}

KLocalizedString* KLocalizedString_Subs6(const KLocalizedString* self, unsigned long long a) {
    return new KLocalizedString(self->subs(static_cast<qulonglong>(a)));
}

KLocalizedString* KLocalizedString_Subs7(const KLocalizedString* self, double a) {
    return new KLocalizedString(self->subs(static_cast<double>(a)));
}

KLocalizedString* KLocalizedString_Subs8(const KLocalizedString* self, QChar* a) {
    return new KLocalizedString(self->subs(*a));
}

KLocalizedString* KLocalizedString_Subs9(const KLocalizedString* self, const libqt_string a) {
    QString a_QString = QString::fromUtf8(a.data, a.len);
    return new KLocalizedString(self->subs(a_QString));
}

KLocalizedString* KLocalizedString_Subs10(const KLocalizedString* self, const KLocalizedString* a) {
    return new KLocalizedString(self->subs(*a));
}

KLocalizedString* KLocalizedString_InContext(const KLocalizedString* self, const libqt_string key, const libqt_string value) {
    QString key_QString = QString::fromUtf8(key.data, key.len);
    QString value_QString = QString::fromUtf8(value.data, value.len);
    return new KLocalizedString(self->inContext(key_QString, value_QString));
}

KLocalizedString* KLocalizedString_RelaxSubs(const KLocalizedString* self) {
    return new KLocalizedString(self->relaxSubs());
}

KLocalizedString* KLocalizedString_IgnoreMarkup(const KLocalizedString* self) {
    return new KLocalizedString(self->ignoreMarkup());
}

libqt_string KLocalizedString_UntranslatedText(const KLocalizedString* self) {
    QByteArray _qb = self->untranslatedText();
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KLocalizedString_SetApplicationDomain(const libqt_string domain) {
    QByteArray domain_QByteArray(domain.data, domain.len);
    KLocalizedString::setApplicationDomain(domain_QByteArray);
}

libqt_string KLocalizedString_ApplicationDomain() {
    QByteArray _qb = KLocalizedString::applicationDomain();
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_list /* of libqt_string */ KLocalizedString_Languages() {
    QList<QString> _ret = KLocalizedString::languages();
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

void KLocalizedString_SetLanguages(const libqt_list /* of libqt_string */ languages) {
    QList<QString> languages_QList;
    languages_QList.reserve(languages.len);
    libqt_string* languages_arr = static_cast<libqt_string*>(languages.data);
    for (size_t i = 0; i < languages.len; ++i) {
        QString languages_arr_i_QString = QString::fromUtf8(languages_arr[i].data, languages_arr[i].len);
        languages_QList.push_back(languages_arr_i_QString);
    }
    KLocalizedString::setLanguages(languages_QList);
}

void KLocalizedString_ClearLanguages() {
    KLocalizedString::clearLanguages();
}

bool KLocalizedString_IsApplicationTranslatedInto(const libqt_string language) {
    QString language_QString = QString::fromUtf8(language.data, language.len);
    return KLocalizedString::isApplicationTranslatedInto(language_QString);
}

libqt_list /* set of libqt_string */ KLocalizedString_AvailableApplicationTranslations() {
    QSet<QString> _ret = KLocalizedString::availableApplicationTranslations();
    // Convert QSet<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.size()));
    int _ctr = 0;
    QSetIterator<QString> _itr(_ret);
    while (_itr.hasNext()) {
        QString _sv_ret = _itr.next();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _sv_b = _sv_ret.toUtf8();
        libqt_string _sv_str;
        _sv_str.len = _sv_b.length();
        _sv_str.data = static_cast<const char*>(malloc(_sv_str.len + 1));
        memcpy((void*)_sv_str.data, _sv_b.data(), _sv_str.len);
        ((char*)_sv_str.data)[_sv_str.len] = '\0';
        _arr[_ctr++] = _sv_str;
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_list /* set of libqt_string */ KLocalizedString_AvailableDomainTranslations(const libqt_string domain) {
    QByteArray domain_QByteArray(domain.data, domain.len);
    QSet<QString> _ret = KLocalizedString::availableDomainTranslations(domain_QByteArray);
    // Convert QSet<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.size()));
    int _ctr = 0;
    QSetIterator<QString> _itr(_ret);
    while (_itr.hasNext()) {
        QString _sv_ret = _itr.next();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _sv_b = _sv_ret.toUtf8();
        libqt_string _sv_str;
        _sv_str.len = _sv_b.length();
        _sv_str.data = static_cast<const char*>(malloc(_sv_str.len + 1));
        memcpy((void*)_sv_str.data, _sv_b.data(), _sv_str.len);
        ((char*)_sv_str.data)[_sv_str.len] = '\0';
        _arr[_ctr++] = _sv_str;
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void KLocalizedString_AddDomainLocaleDir(const libqt_string domain, const libqt_string path) {
    QByteArray domain_QByteArray(domain.data, domain.len);
    QString path_QString = QString::fromUtf8(path.data, path.len);
    KLocalizedString::addDomainLocaleDir(domain_QByteArray, path_QString);
}

libqt_string KLocalizedString_LocalizedFilePath(const libqt_string filePath) {
    QString filePath_QString = QString::fromUtf8(filePath.data, filePath.len);
    QString _ret = KLocalizedString::localizedFilePath(filePath_QString);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KLocalizedString_RemoveAcceleratorMarker(const libqt_string label) {
    QString label_QString = QString::fromUtf8(label.data, label.len);
    QString _ret = KLocalizedString::removeAcceleratorMarker(label_QString);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

KLocalizedString* KLocalizedString_Subs22(const KLocalizedString* self, int a, int fieldWidth) {
    return new KLocalizedString(self->subs(static_cast<int>(a), static_cast<int>(fieldWidth)));
}

KLocalizedString* KLocalizedString_Subs32(const KLocalizedString* self, int a, int fieldWidth, int base) {
    return new KLocalizedString(self->subs(static_cast<int>(a), static_cast<int>(fieldWidth), static_cast<int>(base)));
}

KLocalizedString* KLocalizedString_Subs42(const KLocalizedString* self, int a, int fieldWidth, int base, QChar* fillChar) {
    return new KLocalizedString(self->subs(static_cast<int>(a), static_cast<int>(fieldWidth), static_cast<int>(base), *fillChar));
}

KLocalizedString* KLocalizedString_Subs23(const KLocalizedString* self, unsigned int a, int fieldWidth) {
    return new KLocalizedString(self->subs(static_cast<uint>(a), static_cast<int>(fieldWidth)));
}

KLocalizedString* KLocalizedString_Subs33(const KLocalizedString* self, unsigned int a, int fieldWidth, int base) {
    return new KLocalizedString(self->subs(static_cast<uint>(a), static_cast<int>(fieldWidth), static_cast<int>(base)));
}

KLocalizedString* KLocalizedString_Subs43(const KLocalizedString* self, unsigned int a, int fieldWidth, int base, QChar* fillChar) {
    return new KLocalizedString(self->subs(static_cast<uint>(a), static_cast<int>(fieldWidth), static_cast<int>(base), *fillChar));
}

KLocalizedString* KLocalizedString_Subs24(const KLocalizedString* self, long a, int fieldWidth) {
    return new KLocalizedString(self->subs(static_cast<long>(a), static_cast<int>(fieldWidth)));
}

KLocalizedString* KLocalizedString_Subs34(const KLocalizedString* self, long a, int fieldWidth, int base) {
    return new KLocalizedString(self->subs(static_cast<long>(a), static_cast<int>(fieldWidth), static_cast<int>(base)));
}

KLocalizedString* KLocalizedString_Subs44(const KLocalizedString* self, long a, int fieldWidth, int base, QChar* fillChar) {
    return new KLocalizedString(self->subs(static_cast<long>(a), static_cast<int>(fieldWidth), static_cast<int>(base), *fillChar));
}

KLocalizedString* KLocalizedString_Subs25(const KLocalizedString* self, unsigned long a, int fieldWidth) {
    return new KLocalizedString(self->subs(static_cast<ulong>(a), static_cast<int>(fieldWidth)));
}

KLocalizedString* KLocalizedString_Subs35(const KLocalizedString* self, unsigned long a, int fieldWidth, int base) {
    return new KLocalizedString(self->subs(static_cast<ulong>(a), static_cast<int>(fieldWidth), static_cast<int>(base)));
}

KLocalizedString* KLocalizedString_Subs45(const KLocalizedString* self, unsigned long a, int fieldWidth, int base, QChar* fillChar) {
    return new KLocalizedString(self->subs(static_cast<ulong>(a), static_cast<int>(fieldWidth), static_cast<int>(base), *fillChar));
}

KLocalizedString* KLocalizedString_Subs26(const KLocalizedString* self, long long a, int fieldWidth) {
    return new KLocalizedString(self->subs(static_cast<qlonglong>(a), static_cast<int>(fieldWidth)));
}

KLocalizedString* KLocalizedString_Subs36(const KLocalizedString* self, long long a, int fieldWidth, int base) {
    return new KLocalizedString(self->subs(static_cast<qlonglong>(a), static_cast<int>(fieldWidth), static_cast<int>(base)));
}

KLocalizedString* KLocalizedString_Subs46(const KLocalizedString* self, long long a, int fieldWidth, int base, QChar* fillChar) {
    return new KLocalizedString(self->subs(static_cast<qlonglong>(a), static_cast<int>(fieldWidth), static_cast<int>(base), *fillChar));
}

KLocalizedString* KLocalizedString_Subs27(const KLocalizedString* self, unsigned long long a, int fieldWidth) {
    return new KLocalizedString(self->subs(static_cast<qulonglong>(a), static_cast<int>(fieldWidth)));
}

KLocalizedString* KLocalizedString_Subs37(const KLocalizedString* self, unsigned long long a, int fieldWidth, int base) {
    return new KLocalizedString(self->subs(static_cast<qulonglong>(a), static_cast<int>(fieldWidth), static_cast<int>(base)));
}

KLocalizedString* KLocalizedString_Subs47(const KLocalizedString* self, unsigned long long a, int fieldWidth, int base, QChar* fillChar) {
    return new KLocalizedString(self->subs(static_cast<qulonglong>(a), static_cast<int>(fieldWidth), static_cast<int>(base), *fillChar));
}

KLocalizedString* KLocalizedString_Subs28(const KLocalizedString* self, double a, int fieldWidth) {
    return new KLocalizedString(self->subs(static_cast<double>(a), static_cast<int>(fieldWidth)));
}

KLocalizedString* KLocalizedString_Subs38(const KLocalizedString* self, double a, int fieldWidth, char format) {
    return new KLocalizedString(self->subs(static_cast<double>(a), static_cast<int>(fieldWidth), static_cast<char>(format)));
}

KLocalizedString* KLocalizedString_Subs48(const KLocalizedString* self, double a, int fieldWidth, char format, int precision) {
    return new KLocalizedString(self->subs(static_cast<double>(a), static_cast<int>(fieldWidth), static_cast<char>(format), static_cast<int>(precision)));
}

KLocalizedString* KLocalizedString_Subs52(const KLocalizedString* self, double a, int fieldWidth, char format, int precision, QChar* fillChar) {
    return new KLocalizedString(self->subs(static_cast<double>(a), static_cast<int>(fieldWidth), static_cast<char>(format), static_cast<int>(precision), *fillChar));
}

KLocalizedString* KLocalizedString_Subs29(const KLocalizedString* self, QChar* a, int fieldWidth) {
    return new KLocalizedString(self->subs(*a, static_cast<int>(fieldWidth)));
}

KLocalizedString* KLocalizedString_Subs39(const KLocalizedString* self, QChar* a, int fieldWidth, QChar* fillChar) {
    return new KLocalizedString(self->subs(*a, static_cast<int>(fieldWidth), *fillChar));
}

KLocalizedString* KLocalizedString_Subs210(const KLocalizedString* self, const libqt_string a, int fieldWidth) {
    QString a_QString = QString::fromUtf8(a.data, a.len);
    return new KLocalizedString(self->subs(a_QString, static_cast<int>(fieldWidth)));
}

KLocalizedString* KLocalizedString_Subs310(const KLocalizedString* self, const libqt_string a, int fieldWidth, QChar* fillChar) {
    QString a_QString = QString::fromUtf8(a.data, a.len);
    return new KLocalizedString(self->subs(a_QString, static_cast<int>(fieldWidth), *fillChar));
}

KLocalizedString* KLocalizedString_Subs211(const KLocalizedString* self, const KLocalizedString* a, int fieldWidth) {
    return new KLocalizedString(self->subs(*a, static_cast<int>(fieldWidth)));
}

KLocalizedString* KLocalizedString_Subs311(const KLocalizedString* self, const KLocalizedString* a, int fieldWidth, QChar* fillChar) {
    return new KLocalizedString(self->subs(*a, static_cast<int>(fieldWidth), *fillChar));
}

void KLocalizedString_Delete(KLocalizedString* self) {
    delete self;
}
