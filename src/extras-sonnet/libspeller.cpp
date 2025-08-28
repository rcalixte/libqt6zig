#include <QList>
#include <QMap>
#include <QString>
#include <QByteArray>
#include <cstring>
#define WORKAROUND_INNER_CLASS_DEFINITION_Sonnet__Speller
#include <speller.h>
#include "libspeller.h"
#include "libspeller.hxx"

Sonnet__Speller* Sonnet__Speller_new() {
    return new Sonnet::Speller();
}

Sonnet__Speller* Sonnet__Speller_new2(const Sonnet__Speller* speller) {
    return new Sonnet::Speller(*speller);
}

Sonnet__Speller* Sonnet__Speller_new3(const libqt_string lang) {
    QString lang_QString = QString::fromUtf8(lang.data, lang.len);
    return new Sonnet::Speller(lang_QString);
}

void Sonnet__Speller_OperatorAssign(Sonnet__Speller* self, const Sonnet__Speller* speller) {
    self->operator=(*speller);
}

bool Sonnet__Speller_IsValid(const Sonnet__Speller* self) {
    return self->isValid();
}

void Sonnet__Speller_SetLanguage(Sonnet__Speller* self, const libqt_string lang) {
    QString lang_QString = QString::fromUtf8(lang.data, lang.len);
    self->setLanguage(lang_QString);
}

libqt_string Sonnet__Speller_Language(const Sonnet__Speller* self) {
    QString _ret = self->language();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool Sonnet__Speller_IsCorrect(const Sonnet__Speller* self, const libqt_string word) {
    QString word_QString = QString::fromUtf8(word.data, word.len);
    return self->isCorrect(word_QString);
}

bool Sonnet__Speller_IsMisspelled(const Sonnet__Speller* self, const libqt_string word) {
    QString word_QString = QString::fromUtf8(word.data, word.len);
    return self->isMisspelled(word_QString);
}

libqt_list /* of libqt_string */ Sonnet__Speller_Suggest(const Sonnet__Speller* self, const libqt_string word) {
    QString word_QString = QString::fromUtf8(word.data, word.len);
    QList<QString> _ret = self->suggest(word_QString);
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size() + 1)));
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

bool Sonnet__Speller_CheckAndSuggest(const Sonnet__Speller* self, const libqt_string word, libqt_list /* of libqt_string */ suggestions) {
    QString word_QString = QString::fromUtf8(word.data, word.len);
    QList<QString> suggestions_QList;
    suggestions_QList.reserve(suggestions.len);
    libqt_string* suggestions_arr = static_cast<libqt_string*>(suggestions.data);
    for (size_t i = 0; i < suggestions.len; ++i) {
        QString suggestions_arr_i_QString = QString::fromUtf8(suggestions_arr[i].data, suggestions_arr[i].len);
        suggestions_QList.push_back(suggestions_arr_i_QString);
    }
    return self->checkAndSuggest(word_QString, suggestions_QList);
}

bool Sonnet__Speller_StoreReplacement(Sonnet__Speller* self, const libqt_string bad, const libqt_string good) {
    QString bad_QString = QString::fromUtf8(bad.data, bad.len);
    QString good_QString = QString::fromUtf8(good.data, good.len);
    return self->storeReplacement(bad_QString, good_QString);
}

bool Sonnet__Speller_AddToPersonal(Sonnet__Speller* self, const libqt_string word) {
    QString word_QString = QString::fromUtf8(word.data, word.len);
    return self->addToPersonal(word_QString);
}

bool Sonnet__Speller_AddToSession(Sonnet__Speller* self, const libqt_string word) {
    QString word_QString = QString::fromUtf8(word.data, word.len);
    return self->addToSession(word_QString);
}

void Sonnet__Speller_Save(Sonnet__Speller* self) {
    self->save();
}

void Sonnet__Speller_Restore(Sonnet__Speller* self) {
    self->restore();
}

libqt_list /* of libqt_string */ Sonnet__Speller_AvailableBackends(const Sonnet__Speller* self) {
    QList<QString> _ret = self->availableBackends();
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size() + 1)));
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

libqt_list /* of libqt_string */ Sonnet__Speller_AvailableLanguages(const Sonnet__Speller* self) {
    QList<QString> _ret = self->availableLanguages();
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size() + 1)));
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

libqt_list /* of libqt_string */ Sonnet__Speller_AvailableLanguageNames(const Sonnet__Speller* self) {
    QList<QString> _ret = self->availableLanguageNames();
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size() + 1)));
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

libqt_map /* of libqt_string to libqt_string */ Sonnet__Speller_AvailableDictionaries(const Sonnet__Speller* self) {
    QMap<QString, QString> _ret = self->availableDictionaries();
    // Convert QMap<> from C++ memory to manually-managed C memory
    libqt_string* _karr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.size()));
    libqt_string* _varr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.size()));
    int _ctr = 0;
    for (auto _itr = _ret.keyValueBegin(); _itr != _ret.keyValueEnd(); ++_itr) {
        QString _mapkey_ret = _itr->first;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _mapkey_b = _mapkey_ret.toUtf8();
        libqt_string _mapkey_str;
        _mapkey_str.len = _mapkey_b.length();
        _mapkey_str.data = static_cast<const char*>(malloc(_mapkey_str.len + 1));
        memcpy((void*)_mapkey_str.data, _mapkey_b.data(), _mapkey_str.len);
        ((char*)_mapkey_str.data)[_mapkey_str.len] = '\0';
        _karr[_ctr] = _mapkey_str;
        QString _mapval_ret = _itr->second;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _mapval_b = _mapval_ret.toUtf8();
        libqt_string _mapval_str;
        _mapval_str.len = _mapval_b.length();
        _mapval_str.data = static_cast<const char*>(malloc(_mapval_str.len + 1));
        memcpy((void*)_mapval_str.data, _mapval_b.data(), _mapval_str.len);
        ((char*)_mapval_str.data)[_mapval_str.len] = '\0';
        _varr[_ctr] = _mapval_str;
        _ctr++;
    }
    libqt_map _out;
    _out.len = _ret.size();
    _out.keys = static_cast<void*>(_karr);
    _out.values = static_cast<void*>(_varr);
    return _out;
}

libqt_map /* of libqt_string to libqt_string */ Sonnet__Speller_PreferredDictionaries(const Sonnet__Speller* self) {
    QMap<QString, QString> _ret = self->preferredDictionaries();
    // Convert QMap<> from C++ memory to manually-managed C memory
    libqt_string* _karr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.size()));
    libqt_string* _varr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.size()));
    int _ctr = 0;
    for (auto _itr = _ret.keyValueBegin(); _itr != _ret.keyValueEnd(); ++_itr) {
        QString _mapkey_ret = _itr->first;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _mapkey_b = _mapkey_ret.toUtf8();
        libqt_string _mapkey_str;
        _mapkey_str.len = _mapkey_b.length();
        _mapkey_str.data = static_cast<const char*>(malloc(_mapkey_str.len + 1));
        memcpy((void*)_mapkey_str.data, _mapkey_b.data(), _mapkey_str.len);
        ((char*)_mapkey_str.data)[_mapkey_str.len] = '\0';
        _karr[_ctr] = _mapkey_str;
        QString _mapval_ret = _itr->second;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _mapval_b = _mapval_ret.toUtf8();
        libqt_string _mapval_str;
        _mapval_str.len = _mapval_b.length();
        _mapval_str.data = static_cast<const char*>(malloc(_mapval_str.len + 1));
        memcpy((void*)_mapval_str.data, _mapval_b.data(), _mapval_str.len);
        ((char*)_mapval_str.data)[_mapval_str.len] = '\0';
        _varr[_ctr] = _mapval_str;
        _ctr++;
    }
    libqt_map _out;
    _out.len = _ret.size();
    _out.keys = static_cast<void*>(_karr);
    _out.values = static_cast<void*>(_varr);
    return _out;
}

void Sonnet__Speller_SetDefaultLanguage(Sonnet__Speller* self, const libqt_string lang) {
    QString lang_QString = QString::fromUtf8(lang.data, lang.len);
    self->setDefaultLanguage(lang_QString);
}

libqt_string Sonnet__Speller_DefaultLanguage(const Sonnet__Speller* self) {
    QString _ret = self->defaultLanguage();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void Sonnet__Speller_SetDefaultClient(Sonnet__Speller* self, const libqt_string client) {
    QString client_QString = QString::fromUtf8(client.data, client.len);
    self->setDefaultClient(client_QString);
}

libqt_string Sonnet__Speller_DefaultClient(const Sonnet__Speller* self) {
    QString _ret = self->defaultClient();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void Sonnet__Speller_SetAttribute(Sonnet__Speller* self, int attr) {
    self->setAttribute(static_cast<Sonnet::Speller::Attribute>(attr));
}

bool Sonnet__Speller_TestAttribute(const Sonnet__Speller* self, int attr) {
    return self->testAttribute(static_cast<Sonnet::Speller::Attribute>(attr));
}

void Sonnet__Speller_SetAttribute2(Sonnet__Speller* self, int attr, bool b) {
    self->setAttribute(static_cast<Sonnet::Speller::Attribute>(attr), b);
}

void Sonnet__Speller_Delete(Sonnet__Speller* self) {
    delete self;
}
