#include <QHash>
#include <QSet>
#include <QString>
#define WORKAROUND_INNER_CLASS_DEFINITION_TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes
#define WORKAROUND_INNER_CLASS_DEFINITION_TextAutoCorrectionCore__ImportAbstractAutocorrection
#include <importabstractautocorrection.h>
#include "libimportabstractautocorrection.h"
#include "libimportabstractautocorrection.hxx"

TextAutoCorrectionCore__ImportAbstractAutocorrection* TextAutoCorrectionCore__ImportAbstractAutocorrection_new() {
    return new VirtualTextAutoCorrectionCoreImportAbstractAutocorrection();
}

TextAutoCorrectionCore__ImportAbstractAutocorrection* TextAutoCorrectionCore__ImportAbstractAutocorrection_new2(const TextAutoCorrectionCore__ImportAbstractAutocorrection* param1) {
    return new VirtualTextAutoCorrectionCoreImportAbstractAutocorrection(*param1);
}

bool TextAutoCorrectionCore__ImportAbstractAutocorrection_Import(TextAutoCorrectionCore__ImportAbstractAutocorrection* self, const libqt_string fileName, libqt_string errorMessage, int loadAttribute) {
    QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
    QString errorMessage_QString = QString::fromUtf8(errorMessage.data, errorMessage.len);
    return self->import(fileName_QString, errorMessage_QString, static_cast<TextAutoCorrectionCore::ImportAbstractAutocorrection::LoadAttribute>(loadAttribute));
}

libqt_list /* set of libqt_string */ TextAutoCorrectionCore__ImportAbstractAutocorrection_UpperCaseExceptions(const TextAutoCorrectionCore__ImportAbstractAutocorrection* self) {
    QSet<QString> _ret = self->upperCaseExceptions();
    // Convert QSet<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.size()));
    int _ctr = 0;
    QSetIterator<QString> _itr(_ret);
    while (_itr.hasNext()) {
        auto _sv_ret = _itr.next();
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

libqt_list /* set of libqt_string */ TextAutoCorrectionCore__ImportAbstractAutocorrection_TwoUpperLetterExceptions(const TextAutoCorrectionCore__ImportAbstractAutocorrection* self) {
    QSet<QString> _ret = self->twoUpperLetterExceptions();
    // Convert QSet<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.size()));
    int _ctr = 0;
    QSetIterator<QString> _itr(_ret);
    while (_itr.hasNext()) {
        auto _sv_ret = _itr.next();
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

libqt_map /* of libqt_string to libqt_string */ TextAutoCorrectionCore__ImportAbstractAutocorrection_AutocorrectEntries(const TextAutoCorrectionCore__ImportAbstractAutocorrection* self) {
    QHash<QString, QString> _ret = self->autocorrectEntries();
    // Convert QHash<> from C++ memory to manually-managed C memory
    libqt_string* _karr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.size()));
    libqt_string* _varr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.size()));
    int _ctr = 0;
    for (auto _itr = _ret.keyValueBegin(); _itr != _ret.keyValueEnd(); ++_itr) {
        auto _hashkey_ret = _itr->first;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _hashkey_b = _hashkey_ret.toUtf8();
        libqt_string _hashkey_str;
        _hashkey_str.len = _hashkey_b.length();
        _hashkey_str.data = static_cast<const char*>(malloc(_hashkey_str.len + 1));
        memcpy((void*)_hashkey_str.data, _hashkey_b.data(), _hashkey_str.len);
        ((char*)_hashkey_str.data)[_hashkey_str.len] = '\0';
        _karr[_ctr] = _hashkey_str;
        auto _hashval_ret = _itr->second;
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

libqt_map /* of libqt_string to libqt_string */ TextAutoCorrectionCore__ImportAbstractAutocorrection_SuperScriptEntries(const TextAutoCorrectionCore__ImportAbstractAutocorrection* self) {
    QHash<QString, QString> _ret = self->superScriptEntries();
    // Convert QHash<> from C++ memory to manually-managed C memory
    libqt_string* _karr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.size()));
    libqt_string* _varr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.size()));
    int _ctr = 0;
    for (auto _itr = _ret.keyValueBegin(); _itr != _ret.keyValueEnd(); ++_itr) {
        auto _hashkey_ret = _itr->first;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _hashkey_b = _hashkey_ret.toUtf8();
        libqt_string _hashkey_str;
        _hashkey_str.len = _hashkey_b.length();
        _hashkey_str.data = static_cast<const char*>(malloc(_hashkey_str.len + 1));
        memcpy((void*)_hashkey_str.data, _hashkey_b.data(), _hashkey_str.len);
        ((char*)_hashkey_str.data)[_hashkey_str.len] = '\0';
        _karr[_ctr] = _hashkey_str;
        auto _hashval_ret = _itr->second;
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

TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes* TextAutoCorrectionCore__ImportAbstractAutocorrection_TypographicSingleQuotes(const TextAutoCorrectionCore__ImportAbstractAutocorrection* self) {
    return new TextAutoCorrectionCore::AutoCorrectionUtils::TypographicQuotes(self->typographicSingleQuotes());
}

TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes* TextAutoCorrectionCore__ImportAbstractAutocorrection_TypographicDoubleQuotes(const TextAutoCorrectionCore__ImportAbstractAutocorrection* self) {
    return new TextAutoCorrectionCore::AutoCorrectionUtils::TypographicQuotes(self->typographicDoubleQuotes());
}

int TextAutoCorrectionCore__ImportAbstractAutocorrection_MaxFindStringLenght(const TextAutoCorrectionCore__ImportAbstractAutocorrection* self) {
    return self->maxFindStringLenght();
}

int TextAutoCorrectionCore__ImportAbstractAutocorrection_MinFindStringLenght(const TextAutoCorrectionCore__ImportAbstractAutocorrection* self) {
    return self->minFindStringLenght();
}

// Base class handler implementation
bool TextAutoCorrectionCore__ImportAbstractAutocorrection_SuperImport(TextAutoCorrectionCore__ImportAbstractAutocorrection* self, const libqt_string fileName, libqt_string errorMessage, int loadAttribute) {
    auto* vtextautocorrectioncoreimportabstractautocorrection = dynamic_cast<VirtualTextAutoCorrectionCoreImportAbstractAutocorrection*>(self);
    QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
    QString errorMessage_QString = QString::fromUtf8(errorMessage.data, errorMessage.len);
    if (vtextautocorrectioncoreimportabstractautocorrection && vtextautocorrectioncoreimportabstractautocorrection->isVirtualTextAutoCorrectionCoreImportAbstractAutocorrection) {
        vtextautocorrectioncoreimportabstractautocorrection->setTextAutoCorrectionCore__ImportAbstractAutocorrection_Import_IsBase(true);
        return vtextautocorrectioncoreimportabstractautocorrection->import(fileName_QString, errorMessage_QString, static_cast<TextAutoCorrectionCore::ImportAbstractAutocorrection::LoadAttribute>(loadAttribute));
    } else {
        return ((VirtualTextAutoCorrectionCoreImportAbstractAutocorrection*)self)->import(fileName_QString, errorMessage_QString, static_cast<TextAutoCorrectionCore::ImportAbstractAutocorrection::LoadAttribute>(loadAttribute));
    }
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionCore__ImportAbstractAutocorrection_OnImport(TextAutoCorrectionCore__ImportAbstractAutocorrection* self, intptr_t slot) {
    auto* vtextautocorrectioncoreimportabstractautocorrection = dynamic_cast<VirtualTextAutoCorrectionCoreImportAbstractAutocorrection*>(self);
    if (vtextautocorrectioncoreimportabstractautocorrection && vtextautocorrectioncoreimportabstractautocorrection->isVirtualTextAutoCorrectionCoreImportAbstractAutocorrection) {
        vtextautocorrectioncoreimportabstractautocorrection->setTextAutoCorrectionCore__ImportAbstractAutocorrection_Import_Callback(reinterpret_cast<VirtualTextAutoCorrectionCoreImportAbstractAutocorrection::TextAutoCorrectionCore__ImportAbstractAutocorrection_Import_Callback>(slot));
    }
}

// Derived class handler implementation
void TextAutoCorrectionCore__ImportAbstractAutocorrection_OperatorAssign(TextAutoCorrectionCore__ImportAbstractAutocorrection* self, const TextAutoCorrectionCore__ImportAbstractAutocorrection* param1) {
    auto* vtextautocorrectioncoreimportabstractautocorrection = dynamic_cast<VirtualTextAutoCorrectionCoreImportAbstractAutocorrection*>(self);
    if (vtextautocorrectioncoreimportabstractautocorrection && vtextautocorrectioncoreimportabstractautocorrection->isVirtualTextAutoCorrectionCoreImportAbstractAutocorrection) {
        vtextautocorrectioncoreimportabstractautocorrection->operator=(*param1);
    } else {
        ((VirtualTextAutoCorrectionCoreImportAbstractAutocorrection*)self)->operator=(*param1);
    }
}

// Base class handler implementation
void TextAutoCorrectionCore__ImportAbstractAutocorrection_SuperOperatorAssign(TextAutoCorrectionCore__ImportAbstractAutocorrection* self, const TextAutoCorrectionCore__ImportAbstractAutocorrection* param1) {
    auto* vtextautocorrectioncoreimportabstractautocorrection = dynamic_cast<VirtualTextAutoCorrectionCoreImportAbstractAutocorrection*>(self);
    if (vtextautocorrectioncoreimportabstractautocorrection && vtextautocorrectioncoreimportabstractautocorrection->isVirtualTextAutoCorrectionCoreImportAbstractAutocorrection) {
        vtextautocorrectioncoreimportabstractautocorrection->setTextAutoCorrectionCore__ImportAbstractAutocorrection_OperatorAssign_IsBase(true);
        vtextautocorrectioncoreimportabstractautocorrection->operator=(*param1);
    } else {
        ((VirtualTextAutoCorrectionCoreImportAbstractAutocorrection*)self)->operator=(*param1);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionCore__ImportAbstractAutocorrection_OnOperatorAssign(TextAutoCorrectionCore__ImportAbstractAutocorrection* self, intptr_t slot) {
    auto* vtextautocorrectioncoreimportabstractautocorrection = dynamic_cast<VirtualTextAutoCorrectionCoreImportAbstractAutocorrection*>(self);
    if (vtextautocorrectioncoreimportabstractautocorrection && vtextautocorrectioncoreimportabstractautocorrection->isVirtualTextAutoCorrectionCoreImportAbstractAutocorrection) {
        vtextautocorrectioncoreimportabstractautocorrection->setTextAutoCorrectionCore__ImportAbstractAutocorrection_OperatorAssign_Callback(reinterpret_cast<VirtualTextAutoCorrectionCoreImportAbstractAutocorrection::TextAutoCorrectionCore__ImportAbstractAutocorrection_OperatorAssign_Callback>(slot));
    }
}

void TextAutoCorrectionCore__ImportAbstractAutocorrection_Delete(TextAutoCorrectionCore__ImportAbstractAutocorrection* self) {
    delete self;
}
