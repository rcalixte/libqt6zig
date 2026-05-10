#include <QChar>
#include <QHash>
#include <QSet>
#include <QString>
#define WORKAROUND_INNER_CLASS_DEFINITION_TextAutoCorrectionCore__AutoCorrectionSettings
#define WORKAROUND_INNER_CLASS_DEFINITION_TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes
#include <autocorrectionsettings.h>
#include "libautocorrectionsettings.h"
#include "libautocorrectionsettings.hxx"

TextAutoCorrectionCore__AutoCorrectionSettings* TextAutoCorrectionCore__AutoCorrectionSettings_new() {
    return new TextAutoCorrectionCore::AutoCorrectionSettings();
}

bool TextAutoCorrectionCore__AutoCorrectionSettings_IsEnabledAutoCorrection(const TextAutoCorrectionCore__AutoCorrectionSettings* self) {
    return self->isEnabledAutoCorrection();
}

bool TextAutoCorrectionCore__AutoCorrectionSettings_IsUppercaseFirstCharOfSentence(const TextAutoCorrectionCore__AutoCorrectionSettings* self) {
    return self->isUppercaseFirstCharOfSentence();
}

bool TextAutoCorrectionCore__AutoCorrectionSettings_IsFixTwoUppercaseChars(const TextAutoCorrectionCore__AutoCorrectionSettings* self) {
    return self->isFixTwoUppercaseChars();
}

bool TextAutoCorrectionCore__AutoCorrectionSettings_IsSingleSpaces(const TextAutoCorrectionCore__AutoCorrectionSettings* self) {
    return self->isSingleSpaces();
}

bool TextAutoCorrectionCore__AutoCorrectionSettings_IsAutoFractions(const TextAutoCorrectionCore__AutoCorrectionSettings* self) {
    return self->isAutoFractions();
}

bool TextAutoCorrectionCore__AutoCorrectionSettings_IsCapitalizeWeekDays(const TextAutoCorrectionCore__AutoCorrectionSettings* self) {
    return self->isCapitalizeWeekDays();
}

bool TextAutoCorrectionCore__AutoCorrectionSettings_IsReplaceDoubleQuotes(const TextAutoCorrectionCore__AutoCorrectionSettings* self) {
    return self->isReplaceDoubleQuotes();
}

bool TextAutoCorrectionCore__AutoCorrectionSettings_IsReplaceSingleQuotes(const TextAutoCorrectionCore__AutoCorrectionSettings* self) {
    return self->isReplaceSingleQuotes();
}

bool TextAutoCorrectionCore__AutoCorrectionSettings_IsAdvancedAutocorrect(const TextAutoCorrectionCore__AutoCorrectionSettings* self) {
    return self->isAdvancedAutocorrect();
}

bool TextAutoCorrectionCore__AutoCorrectionSettings_IsAutoFormatUrl(const TextAutoCorrectionCore__AutoCorrectionSettings* self) {
    return self->isAutoFormatUrl();
}

bool TextAutoCorrectionCore__AutoCorrectionSettings_IsAutoBoldUnderline(const TextAutoCorrectionCore__AutoCorrectionSettings* self) {
    return self->isAutoBoldUnderline();
}

bool TextAutoCorrectionCore__AutoCorrectionSettings_IsSuperScript(const TextAutoCorrectionCore__AutoCorrectionSettings* self) {
    return self->isSuperScript();
}

bool TextAutoCorrectionCore__AutoCorrectionSettings_IsAddNonBreakingSpace(const TextAutoCorrectionCore__AutoCorrectionSettings* self) {
    return self->isAddNonBreakingSpace();
}

bool TextAutoCorrectionCore__AutoCorrectionSettings_IsReplaceDoubleQuotesByFrenchQuotes(const TextAutoCorrectionCore__AutoCorrectionSettings* self) {
    return self->isReplaceDoubleQuotesByFrenchQuotes();
}

TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes* TextAutoCorrectionCore__AutoCorrectionSettings_TypographicSingleQuotes(const TextAutoCorrectionCore__AutoCorrectionSettings* self) {
    return new TextAutoCorrectionCore::AutoCorrectionUtils::TypographicQuotes(self->typographicSingleQuotes());
}

TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes* TextAutoCorrectionCore__AutoCorrectionSettings_TypographicDoubleQuotes(const TextAutoCorrectionCore__AutoCorrectionSettings* self) {
    return new TextAutoCorrectionCore::AutoCorrectionUtils::TypographicQuotes(self->typographicDoubleQuotes());
}

void TextAutoCorrectionCore__AutoCorrectionSettings_SetTypographicSingleQuotes(TextAutoCorrectionCore__AutoCorrectionSettings* self, TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes* singleQuote) {
    self->setTypographicSingleQuotes(*singleQuote);
}

void TextAutoCorrectionCore__AutoCorrectionSettings_SetTypographicDoubleQuotes(TextAutoCorrectionCore__AutoCorrectionSettings* self, TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes* doubleQuote) {
    self->setTypographicDoubleQuotes(*doubleQuote);
}

void TextAutoCorrectionCore__AutoCorrectionSettings_SetAutoFormatUrl(TextAutoCorrectionCore__AutoCorrectionSettings* self, bool b) {
    self->setAutoFormatUrl(b);
}

void TextAutoCorrectionCore__AutoCorrectionSettings_SetAutoBoldUnderline(TextAutoCorrectionCore__AutoCorrectionSettings* self, bool b) {
    self->setAutoBoldUnderline(b);
}

void TextAutoCorrectionCore__AutoCorrectionSettings_SetSuperScript(TextAutoCorrectionCore__AutoCorrectionSettings* self, bool b) {
    self->setSuperScript(b);
}

void TextAutoCorrectionCore__AutoCorrectionSettings_SetAddNonBreakingSpace(TextAutoCorrectionCore__AutoCorrectionSettings* self, bool b) {
    self->setAddNonBreakingSpace(b);
}

void TextAutoCorrectionCore__AutoCorrectionSettings_SetCapitalizeWeekDays(TextAutoCorrectionCore__AutoCorrectionSettings* self, bool b) {
    self->setCapitalizeWeekDays(b);
}

void TextAutoCorrectionCore__AutoCorrectionSettings_SetReplaceDoubleQuotes(TextAutoCorrectionCore__AutoCorrectionSettings* self, bool b) {
    self->setReplaceDoubleQuotes(b);
}

void TextAutoCorrectionCore__AutoCorrectionSettings_SetReplaceSingleQuotes(TextAutoCorrectionCore__AutoCorrectionSettings* self, bool b) {
    self->setReplaceSingleQuotes(b);
}

void TextAutoCorrectionCore__AutoCorrectionSettings_SetAdvancedAutocorrect(TextAutoCorrectionCore__AutoCorrectionSettings* self, bool b) {
    self->setAdvancedAutocorrect(b);
}

void TextAutoCorrectionCore__AutoCorrectionSettings_SetEnabledAutoCorrection(TextAutoCorrectionCore__AutoCorrectionSettings* self, bool b) {
    self->setEnabledAutoCorrection(b);
}

void TextAutoCorrectionCore__AutoCorrectionSettings_SetReplaceDoubleQuotesByFrenchQuotes(TextAutoCorrectionCore__AutoCorrectionSettings* self, bool b) {
    self->setReplaceDoubleQuotesByFrenchQuotes(b);
}

void TextAutoCorrectionCore__AutoCorrectionSettings_ReadConfig(TextAutoCorrectionCore__AutoCorrectionSettings* self) {
    self->readConfig();
}

void TextAutoCorrectionCore__AutoCorrectionSettings_WriteConfig(TextAutoCorrectionCore__AutoCorrectionSettings* self) {
    self->writeConfig();
}

void TextAutoCorrectionCore__AutoCorrectionSettings_SetAutoFractions(TextAutoCorrectionCore__AutoCorrectionSettings* self, bool newAutoFractions) {
    self->setAutoFractions(newAutoFractions);
}

void TextAutoCorrectionCore__AutoCorrectionSettings_SetSingleSpaces(TextAutoCorrectionCore__AutoCorrectionSettings* self, bool newSingleSpaces) {
    self->setSingleSpaces(newSingleSpaces);
}

void TextAutoCorrectionCore__AutoCorrectionSettings_SetFixTwoUppercaseChars(TextAutoCorrectionCore__AutoCorrectionSettings* self, bool newFixTwoUppercaseChars) {
    self->setFixTwoUppercaseChars(newFixTwoUppercaseChars);
}

void TextAutoCorrectionCore__AutoCorrectionSettings_SetUppercaseFirstCharOfSentence(TextAutoCorrectionCore__AutoCorrectionSettings* self, bool newUppercaseFirstCharOfSentence) {
    self->setUppercaseFirstCharOfSentence(newUppercaseFirstCharOfSentence);
}

void TextAutoCorrectionCore__AutoCorrectionSettings_SetUpperCaseExceptions(TextAutoCorrectionCore__AutoCorrectionSettings* self, const libqt_list /* set of libqt_string */ exceptions) {
    // Convert libqt_list to QSet<>
    QSet<QString> exceptions_set;
    exceptions_set.reserve(exceptions.len);
    const libqt_string* exceptions_strarr = static_cast<const libqt_string*>(exceptions.data);
    for (size_t i = 0; i < exceptions.len; ++i) {
        exceptions_set.insert(QString::fromUtf8(exceptions_strarr[i].data));
    }
    self->setUpperCaseExceptions(exceptions_set);
}

void TextAutoCorrectionCore__AutoCorrectionSettings_SetTwoUpperLetterExceptions(TextAutoCorrectionCore__AutoCorrectionSettings* self, const libqt_list /* set of libqt_string */ exceptions) {
    // Convert libqt_list to QSet<>
    QSet<QString> exceptions_set;
    exceptions_set.reserve(exceptions.len);
    const libqt_string* exceptions_strarr = static_cast<const libqt_string*>(exceptions.data);
    for (size_t i = 0; i < exceptions.len; ++i) {
        exceptions_set.insert(QString::fromUtf8(exceptions_strarr[i].data));
    }
    self->setTwoUpperLetterExceptions(exceptions_set);
}

libqt_list /* set of libqt_string */ TextAutoCorrectionCore__AutoCorrectionSettings_UpperCaseExceptions(const TextAutoCorrectionCore__AutoCorrectionSettings* self) {
    QSet<QString> _ret = self->upperCaseExceptions();
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

libqt_list /* set of libqt_string */ TextAutoCorrectionCore__AutoCorrectionSettings_TwoUpperLetterExceptions(const TextAutoCorrectionCore__AutoCorrectionSettings* self) {
    QSet<QString> _ret = self->twoUpperLetterExceptions();
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

void TextAutoCorrectionCore__AutoCorrectionSettings_SetLanguage(TextAutoCorrectionCore__AutoCorrectionSettings* self, const libqt_string lang) {
    QString lang_QString = QString::fromUtf8(lang.data, lang.len);
    self->setLanguage(lang_QString);
}

libqt_string TextAutoCorrectionCore__AutoCorrectionSettings_Language(const TextAutoCorrectionCore__AutoCorrectionSettings* self) {
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

bool TextAutoCorrectionCore__AutoCorrectionSettings_IsFrenchLanguage(const TextAutoCorrectionCore__AutoCorrectionSettings* self) {
    return self->isFrenchLanguage();
}

void TextAutoCorrectionCore__AutoCorrectionSettings_SetAutocorrectEntries(TextAutoCorrectionCore__AutoCorrectionSettings* self, const libqt_map /* of libqt_string to libqt_string */ entries) {
    QHash<QString, QString> entries_QHash;
    entries_QHash.reserve(entries.len);
    libqt_string* entries_karr = static_cast<libqt_string*>(entries.keys);
    libqt_string* entries_varr = static_cast<libqt_string*>(entries.values);
    for (size_t i = 0; i < entries.len; ++i) {
        QString entries_karr_i_QString = QString::fromUtf8(entries_karr[i].data, entries_karr[i].len);
        QString entries_varr_i_QString = QString::fromUtf8(entries_varr[i].data, entries_varr[i].len);
        entries_QHash[entries_karr_i_QString] = entries_varr_i_QString;
    }
    self->setAutocorrectEntries(entries_QHash);
}

libqt_map /* of libqt_string to libqt_string */ TextAutoCorrectionCore__AutoCorrectionSettings_AutocorrectEntries(const TextAutoCorrectionCore__AutoCorrectionSettings* self) {
    QHash<QString, QString> _ret = self->autocorrectEntries();
    // Convert QHash<> from C++ memory to manually-managed C memory
    libqt_string* _karr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.size()));
    libqt_string* _varr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.size()));
    int _ctr = 0;
    for (auto _itr = _ret.keyValueBegin(); _itr != _ret.keyValueEnd(); ++_itr) {
        QString _hashkey_ret = _itr->first;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _hashkey_b = _hashkey_ret.toUtf8();
        libqt_string _hashkey_str;
        _hashkey_str.len = _hashkey_b.length();
        _hashkey_str.data = static_cast<const char*>(malloc(_hashkey_str.len + 1));
        memcpy((void*)_hashkey_str.data, _hashkey_b.data(), _hashkey_str.len);
        ((char*)_hashkey_str.data)[_hashkey_str.len] = '\0';
        _karr[_ctr] = _hashkey_str;
        QString _hashval_ret = _itr->second;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _hashval_b = _hashval_ret.toUtf8();
        libqt_string _hashval_str;
        _hashval_str.len = _hashval_b.length();
        _hashval_str.data = static_cast<const char*>(malloc(_hashval_str.len + 1));
        memcpy((void*)_hashval_str.data, _hashval_b.data(), _hashval_str.len);
        ((char*)_hashval_str.data)[_hashval_str.len] = '\0';
        _varr[_ctr] = _hashval_str;
        _ctr++;
    }
    libqt_map _out;
    _out.len = _ret.size();
    _out.keys = static_cast<void*>(_karr);
    _out.values = static_cast<void*>(_varr);
    return _out;
}

bool TextAutoCorrectionCore__AutoCorrectionSettings_AddAutoCorrect(TextAutoCorrectionCore__AutoCorrectionSettings* self, const libqt_string currentWord, const libqt_string replaceWord) {
    QString currentWord_QString = QString::fromUtf8(currentWord.data, currentWord.len);
    QString replaceWord_QString = QString::fromUtf8(replaceWord.data, replaceWord.len);
    return self->addAutoCorrect(currentWord_QString, replaceWord_QString);
}

QChar* TextAutoCorrectionCore__AutoCorrectionSettings_NonBreakingSpace(const TextAutoCorrectionCore__AutoCorrectionSettings* self) {
    return new QChar(self->nonBreakingSpace());
}

void TextAutoCorrectionCore__AutoCorrectionSettings_SetNonBreakingSpace(TextAutoCorrectionCore__AutoCorrectionSettings* self, const QChar* newNonBreakingSpace) {
    self->setNonBreakingSpace(*newNonBreakingSpace);
}

libqt_map /* of libqt_string to libqt_string */ TextAutoCorrectionCore__AutoCorrectionSettings_SuperScriptEntries(const TextAutoCorrectionCore__AutoCorrectionSettings* self) {
    QHash<QString, QString> _ret = self->superScriptEntries();
    // Convert QHash<> from C++ memory to manually-managed C memory
    libqt_string* _karr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.size()));
    libqt_string* _varr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.size()));
    int _ctr = 0;
    for (auto _itr = _ret.keyValueBegin(); _itr != _ret.keyValueEnd(); ++_itr) {
        QString _hashkey_ret = _itr->first;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _hashkey_b = _hashkey_ret.toUtf8();
        libqt_string _hashkey_str;
        _hashkey_str.len = _hashkey_b.length();
        _hashkey_str.data = static_cast<const char*>(malloc(_hashkey_str.len + 1));
        memcpy((void*)_hashkey_str.data, _hashkey_b.data(), _hashkey_str.len);
        ((char*)_hashkey_str.data)[_hashkey_str.len] = '\0';
        _karr[_ctr] = _hashkey_str;
        QString _hashval_ret = _itr->second;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _hashval_b = _hashval_ret.toUtf8();
        libqt_string _hashval_str;
        _hashval_str.len = _hashval_b.length();
        _hashval_str.data = static_cast<const char*>(malloc(_hashval_str.len + 1));
        memcpy((void*)_hashval_str.data, _hashval_b.data(), _hashval_str.len);
        ((char*)_hashval_str.data)[_hashval_str.len] = '\0';
        _varr[_ctr] = _hashval_str;
        _ctr++;
    }
    libqt_map _out;
    _out.len = _ret.size();
    _out.keys = static_cast<void*>(_karr);
    _out.values = static_cast<void*>(_varr);
    return _out;
}

void TextAutoCorrectionCore__AutoCorrectionSettings_SetSuperScriptEntries(TextAutoCorrectionCore__AutoCorrectionSettings* self, const libqt_map /* of libqt_string to libqt_string */ newSuperScriptEntries) {
    QHash<QString, QString> newSuperScriptEntries_QHash;
    newSuperScriptEntries_QHash.reserve(newSuperScriptEntries.len);
    libqt_string* newSuperScriptEntries_karr = static_cast<libqt_string*>(newSuperScriptEntries.keys);
    libqt_string* newSuperScriptEntries_varr = static_cast<libqt_string*>(newSuperScriptEntries.values);
    for (size_t i = 0; i < newSuperScriptEntries.len; ++i) {
        QString newSuperScriptEntries_karr_i_QString = QString::fromUtf8(newSuperScriptEntries_karr[i].data, newSuperScriptEntries_karr[i].len);
        QString newSuperScriptEntries_varr_i_QString = QString::fromUtf8(newSuperScriptEntries_varr[i].data, newSuperScriptEntries_varr[i].len);
        newSuperScriptEntries_QHash[newSuperScriptEntries_karr_i_QString] = newSuperScriptEntries_varr_i_QString;
    }
    self->setSuperScriptEntries(newSuperScriptEntries_QHash);
}

void TextAutoCorrectionCore__AutoCorrectionSettings_WriteAutoCorrectionFile(TextAutoCorrectionCore__AutoCorrectionSettings* self) {
    self->writeAutoCorrectionFile();
}

int TextAutoCorrectionCore__AutoCorrectionSettings_MaxFindStringLength(const TextAutoCorrectionCore__AutoCorrectionSettings* self) {
    return self->maxFindStringLength();
}

int TextAutoCorrectionCore__AutoCorrectionSettings_MinFindStringLength(const TextAutoCorrectionCore__AutoCorrectionSettings* self) {
    return self->minFindStringLength();
}

void TextAutoCorrectionCore__AutoCorrectionSettings_LoadLocalFileName(TextAutoCorrectionCore__AutoCorrectionSettings* self, const libqt_string localFileName, const libqt_string fname) {
    QString localFileName_QString = QString::fromUtf8(localFileName.data, localFileName.len);
    QString fname_QString = QString::fromUtf8(fname.data, fname.len);
    self->loadLocalFileName(localFileName_QString, fname_QString);
}

void TextAutoCorrectionCore__AutoCorrectionSettings_LoadGlobalFileName(TextAutoCorrectionCore__AutoCorrectionSettings* self, const libqt_string fname) {
    QString fname_QString = QString::fromUtf8(fname.data, fname.len);
    self->loadGlobalFileName(fname_QString);
}

TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes* TextAutoCorrectionCore__AutoCorrectionSettings_DoubleFrenchQuotes(const TextAutoCorrectionCore__AutoCorrectionSettings* self) {
    return new TextAutoCorrectionCore::AutoCorrectionUtils::TypographicQuotes(self->doubleFrenchQuotes());
}

void TextAutoCorrectionCore__AutoCorrectionSettings_SetDoubleFrenchQuotes(TextAutoCorrectionCore__AutoCorrectionSettings* self, const TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes* newDoubleFrenchQuotes) {
    self->setDoubleFrenchQuotes(*newDoubleFrenchQuotes);
}

libqt_string TextAutoCorrectionCore__AutoCorrectionSettings_CustomWritablePath(const TextAutoCorrectionCore__AutoCorrectionSettings* self) {
    QString _ret = self->customWritablePath();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void TextAutoCorrectionCore__AutoCorrectionSettings_SetCustomWritablePath(TextAutoCorrectionCore__AutoCorrectionSettings* self, const libqt_string path) {
    QString path_QString = QString::fromUtf8(path.data, path.len);
    self->setCustomWritablePath(path_QString);
}

libqt_string TextAutoCorrectionCore__AutoCorrectionSettings_CustomSystemPath(const TextAutoCorrectionCore__AutoCorrectionSettings* self) {
    QString _ret = self->customSystemPath();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void TextAutoCorrectionCore__AutoCorrectionSettings_SetCustomSystemPath(TextAutoCorrectionCore__AutoCorrectionSettings* self, const libqt_string path) {
    QString path_QString = QString::fromUtf8(path.data, path.len);
    self->setCustomSystemPath(path_QString);
}

void TextAutoCorrectionCore__AutoCorrectionSettings_SetLanguage2(TextAutoCorrectionCore__AutoCorrectionSettings* self, const libqt_string lang, bool forceGlobal) {
    QString lang_QString = QString::fromUtf8(lang.data, lang.len);
    self->setLanguage(lang_QString, forceGlobal);
}

void TextAutoCorrectionCore__AutoCorrectionSettings_WriteAutoCorrectionFile1(TextAutoCorrectionCore__AutoCorrectionSettings* self, const libqt_string filename) {
    QString filename_QString = QString::fromUtf8(filename.data, filename.len);
    self->writeAutoCorrectionFile(filename_QString);
}

void TextAutoCorrectionCore__AutoCorrectionSettings_Delete(TextAutoCorrectionCore__AutoCorrectionSettings* self) {
    delete self;
}
