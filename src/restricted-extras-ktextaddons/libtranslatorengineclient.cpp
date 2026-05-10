#include <QChildEvent>
#include <QEvent>
#include <QMap>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QTimerEvent>
#include <QWidget>
#define WORKAROUND_INNER_CLASS_DEFINITION_TextTranslator__TranslatorEngineClient
#define WORKAROUND_INNER_CLASS_DEFINITION_TextTranslator__TranslatorEnginePlugin
#include <translatorengineclient.h>
#include "libtranslatorengineclient.h"
#include "libtranslatorengineclient.hxx"

TextTranslator__TranslatorEngineClient* TextTranslator__TranslatorEngineClient_new() {
    return new VirtualTextTranslatorTranslatorEngineClient();
}

TextTranslator__TranslatorEngineClient* TextTranslator__TranslatorEngineClient_new2(QObject* parent) {
    return new VirtualTextTranslatorTranslatorEngineClient(parent);
}

QMetaObject* TextTranslator__TranslatorEngineClient_MetaObject(const TextTranslator__TranslatorEngineClient* self) {
    auto* vtexttranslator__translatorengineclient = dynamic_cast<const VirtualTextTranslatorTranslatorEngineClient*>(self);
    if (vtexttranslator__translatorengineclient && vtexttranslator__translatorengineclient->isVirtualTextTranslatorTranslatorEngineClient) {
        return (QMetaObject*)self->metaObject();
    } else {
        return (QMetaObject*)((VirtualTextTranslatorTranslatorEngineClient*)self)->metaObject();
    }
}

void* TextTranslator__TranslatorEngineClient_Metacast(TextTranslator__TranslatorEngineClient* self, const char* param1) {
    auto* vtexttranslator__translatorengineclient = dynamic_cast<VirtualTextTranslatorTranslatorEngineClient*>(self);
    if (vtexttranslator__translatorengineclient && vtexttranslator__translatorengineclient->isVirtualTextTranslatorTranslatorEngineClient) {
        return self->qt_metacast(param1);
    } else {
        return ((VirtualTextTranslatorTranslatorEngineClient*)self)->qt_metacast(param1);
    }
}

int TextTranslator__TranslatorEngineClient_Metacall(TextTranslator__TranslatorEngineClient* self, int param1, int param2, void** param3) {
    auto* vtexttranslator__translatorengineclient = dynamic_cast<VirtualTextTranslatorTranslatorEngineClient*>(self);
    if (vtexttranslator__translatorengineclient && vtexttranslator__translatorengineclient->isVirtualTextTranslatorTranslatorEngineClient) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualTextTranslatorTranslatorEngineClient*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string TextTranslator__TranslatorEngineClient_Name(const TextTranslator__TranslatorEngineClient* self) {
    auto* vtexttranslator__translatorengineclient = dynamic_cast<const VirtualTextTranslatorTranslatorEngineClient*>(self);
    if (vtexttranslator__translatorengineclient && vtexttranslator__translatorengineclient->isVirtualTextTranslatorTranslatorEngineClient) {
        QString _ret = vtexttranslator__translatorengineclient->name();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualTextTranslatorTranslatorEngineClient*)self)->name();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

libqt_string TextTranslator__TranslatorEngineClient_TranslatedName(const TextTranslator__TranslatorEngineClient* self) {
    auto* vtexttranslator__translatorengineclient = dynamic_cast<const VirtualTextTranslatorTranslatorEngineClient*>(self);
    if (vtexttranslator__translatorengineclient && vtexttranslator__translatorengineclient->isVirtualTextTranslatorTranslatorEngineClient) {
        QString _ret = vtexttranslator__translatorengineclient->translatedName();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualTextTranslatorTranslatorEngineClient*)self)->translatedName();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

TextTranslator__TranslatorEnginePlugin* TextTranslator__TranslatorEngineClient_CreateTranslator(TextTranslator__TranslatorEngineClient* self) {
    auto* vtexttranslator__translatorengineclient = dynamic_cast<VirtualTextTranslatorTranslatorEngineClient*>(self);
    if (vtexttranslator__translatorengineclient && vtexttranslator__translatorengineclient->isVirtualTextTranslatorTranslatorEngineClient) {
        return vtexttranslator__translatorengineclient->createTranslator();
    } else {
        return ((VirtualTextTranslatorTranslatorEngineClient*)self)->createTranslator();
    }
}

libqt_map /* of int to libqt_string */ TextTranslator__TranslatorEngineClient_SupportedFromLanguages(TextTranslator__TranslatorEngineClient* self) {
    auto* vtexttranslator__translatorengineclient = dynamic_cast<VirtualTextTranslatorTranslatorEngineClient*>(self);
    if (vtexttranslator__translatorengineclient && vtexttranslator__translatorengineclient->isVirtualTextTranslatorTranslatorEngineClient) {
        QMap<TextTranslator::TranslatorUtil::Language, QString> _ret = vtexttranslator__translatorengineclient->supportedFromLanguages();
        // Convert QMap<> from C++ memory to manually-managed C memory
        int* _karr = static_cast<int*>(malloc(sizeof(int) * _ret.size()));
        libqt_string* _varr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.size()));
        int _ctr = 0;
        for (auto _itr = _ret.keyValueBegin(); _itr != _ret.keyValueEnd(); ++_itr) {
            _karr[_ctr] = static_cast<int>(_itr->first);
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
    } else {
        QMap<TextTranslator::TranslatorUtil::Language, QString> _ret = ((VirtualTextTranslatorTranslatorEngineClient*)self)->supportedFromLanguages();
        // Convert QMap<> from C++ memory to manually-managed C memory
        int* _karr = static_cast<int*>(malloc(sizeof(int) * _ret.size()));
        libqt_string* _varr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.size()));
        int _ctr = 0;
        for (auto _itr = _ret.keyValueBegin(); _itr != _ret.keyValueEnd(); ++_itr) {
            _karr[_ctr] = static_cast<int>(_itr->first);
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
}

libqt_map /* of int to libqt_string */ TextTranslator__TranslatorEngineClient_SupportedToLanguages(TextTranslator__TranslatorEngineClient* self) {
    auto* vtexttranslator__translatorengineclient = dynamic_cast<VirtualTextTranslatorTranslatorEngineClient*>(self);
    if (vtexttranslator__translatorengineclient && vtexttranslator__translatorengineclient->isVirtualTextTranslatorTranslatorEngineClient) {
        QMap<TextTranslator::TranslatorUtil::Language, QString> _ret = vtexttranslator__translatorengineclient->supportedToLanguages();
        // Convert QMap<> from C++ memory to manually-managed C memory
        int* _karr = static_cast<int*>(malloc(sizeof(int) * _ret.size()));
        libqt_string* _varr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.size()));
        int _ctr = 0;
        for (auto _itr = _ret.keyValueBegin(); _itr != _ret.keyValueEnd(); ++_itr) {
            _karr[_ctr] = static_cast<int>(_itr->first);
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
    } else {
        QMap<TextTranslator::TranslatorUtil::Language, QString> _ret = ((VirtualTextTranslatorTranslatorEngineClient*)self)->supportedToLanguages();
        // Convert QMap<> from C++ memory to manually-managed C memory
        int* _karr = static_cast<int*>(malloc(sizeof(int) * _ret.size()));
        libqt_string* _varr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.size()));
        int _ctr = 0;
        for (auto _itr = _ret.keyValueBegin(); _itr != _ret.keyValueEnd(); ++_itr) {
            _karr[_ctr] = static_cast<int>(_itr->first);
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
}

void TextTranslator__TranslatorEngineClient_UpdateListLanguages(TextTranslator__TranslatorEngineClient* self) {
    auto* vtexttranslator__translatorengineclient = dynamic_cast<VirtualTextTranslatorTranslatorEngineClient*>(self);
    if (vtexttranslator__translatorengineclient && vtexttranslator__translatorengineclient->isVirtualTextTranslatorTranslatorEngineClient) {
        self->updateListLanguages();
    } else {
        ((VirtualTextTranslatorTranslatorEngineClient*)self)->updateListLanguages();
    }
}

bool TextTranslator__TranslatorEngineClient_HasConfigurationDialog(const TextTranslator__TranslatorEngineClient* self) {
    auto* vtexttranslator__translatorengineclient = dynamic_cast<const VirtualTextTranslatorTranslatorEngineClient*>(self);
    if (vtexttranslator__translatorengineclient && vtexttranslator__translatorengineclient->isVirtualTextTranslatorTranslatorEngineClient) {
        return self->hasConfigurationDialog();
    } else {
        return ((VirtualTextTranslatorTranslatorEngineClient*)self)->hasConfigurationDialog();
    }
}

bool TextTranslator__TranslatorEngineClient_ShowConfigureDialog(TextTranslator__TranslatorEngineClient* self, QWidget* parentWidget) {
    auto* vtexttranslator__translatorengineclient = dynamic_cast<VirtualTextTranslatorTranslatorEngineClient*>(self);
    if (vtexttranslator__translatorengineclient && vtexttranslator__translatorengineclient->isVirtualTextTranslatorTranslatorEngineClient) {
        return self->showConfigureDialog(parentWidget);
    } else {
        return ((VirtualTextTranslatorTranslatorEngineClient*)self)->showConfigureDialog(parentWidget);
    }
}

void TextTranslator__TranslatorEngineClient_GenerateToListFromCurrentToLanguage(TextTranslator__TranslatorEngineClient* self, const libqt_string languageCode) {
    QString languageCode_QString = QString::fromUtf8(languageCode.data, languageCode.len);
    auto* vtexttranslator__translatorengineclient = dynamic_cast<VirtualTextTranslatorTranslatorEngineClient*>(self);
    if (vtexttranslator__translatorengineclient && vtexttranslator__translatorengineclient->isVirtualTextTranslatorTranslatorEngineClient) {
        self->generateToListFromCurrentToLanguage(languageCode_QString);
    } else {
        ((VirtualTextTranslatorTranslatorEngineClient*)self)->generateToListFromCurrentToLanguage(languageCode_QString);
    }
}

bool TextTranslator__TranslatorEngineClient_HasInvertSupport(const TextTranslator__TranslatorEngineClient* self) {
    auto* vtexttranslator__translatorengineclient = dynamic_cast<const VirtualTextTranslatorTranslatorEngineClient*>(self);
    if (vtexttranslator__translatorengineclient && vtexttranslator__translatorengineclient->isVirtualTextTranslatorTranslatorEngineClient) {
        return self->hasInvertSupport();
    } else {
        return ((VirtualTextTranslatorTranslatorEngineClient*)self)->hasInvertSupport();
    }
}

int TextTranslator__TranslatorEngineClient_EngineType(const TextTranslator__TranslatorEngineClient* self) {
    auto* vtexttranslator__translatorengineclient = dynamic_cast<const VirtualTextTranslatorTranslatorEngineClient*>(self);
    if (vtexttranslator__translatorengineclient && vtexttranslator__translatorengineclient->isVirtualTextTranslatorTranslatorEngineClient) {
        return static_cast<int>(vtexttranslator__translatorengineclient->engineType());
    } else {
        return static_cast<int>(((VirtualTextTranslatorTranslatorEngineClient*)self)->engineType());
    }
}

void TextTranslator__TranslatorEngineClient_ConfigureChanged(TextTranslator__TranslatorEngineClient* self) {
    self->configureChanged();
}

void TextTranslator__TranslatorEngineClient_Connect_ConfigureChanged(TextTranslator__TranslatorEngineClient* self, intptr_t slot) {
    void (*slotFunc)(TextTranslator__TranslatorEngineClient*) = reinterpret_cast<void (*)(TextTranslator__TranslatorEngineClient*)>(slot);
    TextTranslator::TranslatorEngineClient::connect(self, &TextTranslator::TranslatorEngineClient::configureChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

bool TextTranslator__TranslatorEngineClient_IsSupported(const TextTranslator__TranslatorEngineClient* self, int lang) {
    auto* vtexttranslator__translatorengineclient = dynamic_cast<const VirtualTextTranslatorTranslatorEngineClient*>(self);
    if (vtexttranslator__translatorengineclient && vtexttranslator__translatorengineclient->isVirtualTextTranslatorTranslatorEngineClient) {
        return vtexttranslator__translatorengineclient->isSupported(static_cast<TextTranslator::TranslatorUtil::Language>(lang));
    }
    return {};
}

// Base class handler implementation
QMetaObject* TextTranslator__TranslatorEngineClient_SuperMetaObject(const TextTranslator__TranslatorEngineClient* self) {
    auto* vtexttranslatortranslatorengineclient = const_cast<VirtualTextTranslatorTranslatorEngineClient*>(dynamic_cast<const VirtualTextTranslatorTranslatorEngineClient*>(self));
    if (vtexttranslatortranslatorengineclient && vtexttranslatortranslatorengineclient->isVirtualTextTranslatorTranslatorEngineClient) {
        vtexttranslatortranslatorengineclient->setTextTranslator__TranslatorEngineClient_MetaObject_IsBase(true);
        return (QMetaObject*)vtexttranslatortranslatorengineclient->metaObject();
    } else {
        return (QMetaObject*)self->TextTranslator::TranslatorEngineClient::metaObject();
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorEngineClient_OnMetaObject(const TextTranslator__TranslatorEngineClient* self, intptr_t slot) {
    auto* vtexttranslatortranslatorengineclient = const_cast<VirtualTextTranslatorTranslatorEngineClient*>(dynamic_cast<const VirtualTextTranslatorTranslatorEngineClient*>(self));
    if (vtexttranslatortranslatorengineclient && vtexttranslatortranslatorengineclient->isVirtualTextTranslatorTranslatorEngineClient) {
        vtexttranslatortranslatorengineclient->setTextTranslator__TranslatorEngineClient_MetaObject_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorEngineClient::TextTranslator__TranslatorEngineClient_MetaObject_Callback>(slot));
    }
}

// Base class handler implementation
void* TextTranslator__TranslatorEngineClient_SuperMetacast(TextTranslator__TranslatorEngineClient* self, const char* param1) {
    auto* vtexttranslatortranslatorengineclient = dynamic_cast<VirtualTextTranslatorTranslatorEngineClient*>(self);
    if (vtexttranslatortranslatorengineclient && vtexttranslatortranslatorengineclient->isVirtualTextTranslatorTranslatorEngineClient) {
        vtexttranslatortranslatorengineclient->setTextTranslator__TranslatorEngineClient_Metacast_IsBase(true);
        return vtexttranslatortranslatorengineclient->qt_metacast(param1);
    } else {
        return self->TextTranslator::TranslatorEngineClient::qt_metacast(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorEngineClient_OnMetacast(TextTranslator__TranslatorEngineClient* self, intptr_t slot) {
    auto* vtexttranslatortranslatorengineclient = dynamic_cast<VirtualTextTranslatorTranslatorEngineClient*>(self);
    if (vtexttranslatortranslatorengineclient && vtexttranslatortranslatorengineclient->isVirtualTextTranslatorTranslatorEngineClient) {
        vtexttranslatortranslatorengineclient->setTextTranslator__TranslatorEngineClient_Metacast_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorEngineClient::TextTranslator__TranslatorEngineClient_Metacast_Callback>(slot));
    }
}

// Base class handler implementation
int TextTranslator__TranslatorEngineClient_SuperMetacall(TextTranslator__TranslatorEngineClient* self, int param1, int param2, void** param3) {
    auto* vtexttranslatortranslatorengineclient = dynamic_cast<VirtualTextTranslatorTranslatorEngineClient*>(self);
    if (vtexttranslatortranslatorengineclient && vtexttranslatortranslatorengineclient->isVirtualTextTranslatorTranslatorEngineClient) {
        vtexttranslatortranslatorengineclient->setTextTranslator__TranslatorEngineClient_Metacall_IsBase(true);
        return vtexttranslatortranslatorengineclient->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->TextTranslator::TranslatorEngineClient::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorEngineClient_OnMetacall(TextTranslator__TranslatorEngineClient* self, intptr_t slot) {
    auto* vtexttranslatortranslatorengineclient = dynamic_cast<VirtualTextTranslatorTranslatorEngineClient*>(self);
    if (vtexttranslatortranslatorengineclient && vtexttranslatortranslatorengineclient->isVirtualTextTranslatorTranslatorEngineClient) {
        vtexttranslatortranslatorengineclient->setTextTranslator__TranslatorEngineClient_Metacall_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorEngineClient::TextTranslator__TranslatorEngineClient_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
libqt_string TextTranslator__TranslatorEngineClient_SuperName(const TextTranslator__TranslatorEngineClient* self) {
    auto* vtexttranslatortranslatorengineclient = const_cast<VirtualTextTranslatorTranslatorEngineClient*>(dynamic_cast<const VirtualTextTranslatorTranslatorEngineClient*>(self));
    if (vtexttranslatortranslatorengineclient && vtexttranslatortranslatorengineclient->isVirtualTextTranslatorTranslatorEngineClient) {
        vtexttranslatortranslatorengineclient->setTextTranslator__TranslatorEngineClient_Name_IsBase(true);
        QString _ret = vtexttranslatortranslatorengineclient->name();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualTextTranslatorTranslatorEngineClient*)self)->name();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorEngineClient_OnName(const TextTranslator__TranslatorEngineClient* self, intptr_t slot) {
    auto* vtexttranslatortranslatorengineclient = const_cast<VirtualTextTranslatorTranslatorEngineClient*>(dynamic_cast<const VirtualTextTranslatorTranslatorEngineClient*>(self));
    if (vtexttranslatortranslatorengineclient && vtexttranslatortranslatorengineclient->isVirtualTextTranslatorTranslatorEngineClient) {
        vtexttranslatortranslatorengineclient->setTextTranslator__TranslatorEngineClient_Name_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorEngineClient::TextTranslator__TranslatorEngineClient_Name_Callback>(slot));
    }
}

// Base class handler implementation
libqt_string TextTranslator__TranslatorEngineClient_SuperTranslatedName(const TextTranslator__TranslatorEngineClient* self) {
    auto* vtexttranslatortranslatorengineclient = const_cast<VirtualTextTranslatorTranslatorEngineClient*>(dynamic_cast<const VirtualTextTranslatorTranslatorEngineClient*>(self));
    if (vtexttranslatortranslatorengineclient && vtexttranslatortranslatorengineclient->isVirtualTextTranslatorTranslatorEngineClient) {
        vtexttranslatortranslatorengineclient->setTextTranslator__TranslatorEngineClient_TranslatedName_IsBase(true);
        QString _ret = vtexttranslatortranslatorengineclient->translatedName();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualTextTranslatorTranslatorEngineClient*)self)->translatedName();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorEngineClient_OnTranslatedName(const TextTranslator__TranslatorEngineClient* self, intptr_t slot) {
    auto* vtexttranslatortranslatorengineclient = const_cast<VirtualTextTranslatorTranslatorEngineClient*>(dynamic_cast<const VirtualTextTranslatorTranslatorEngineClient*>(self));
    if (vtexttranslatortranslatorengineclient && vtexttranslatortranslatorengineclient->isVirtualTextTranslatorTranslatorEngineClient) {
        vtexttranslatortranslatorengineclient->setTextTranslator__TranslatorEngineClient_TranslatedName_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorEngineClient::TextTranslator__TranslatorEngineClient_TranslatedName_Callback>(slot));
    }
}

// Base class handler implementation
TextTranslator__TranslatorEnginePlugin* TextTranslator__TranslatorEngineClient_SuperCreateTranslator(TextTranslator__TranslatorEngineClient* self) {
    auto* vtexttranslatortranslatorengineclient = dynamic_cast<VirtualTextTranslatorTranslatorEngineClient*>(self);
    if (vtexttranslatortranslatorengineclient && vtexttranslatortranslatorengineclient->isVirtualTextTranslatorTranslatorEngineClient) {
        vtexttranslatortranslatorengineclient->setTextTranslator__TranslatorEngineClient_CreateTranslator_IsBase(true);
        return vtexttranslatortranslatorengineclient->createTranslator();
    } else {
        return ((VirtualTextTranslatorTranslatorEngineClient*)self)->createTranslator();
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorEngineClient_OnCreateTranslator(TextTranslator__TranslatorEngineClient* self, intptr_t slot) {
    auto* vtexttranslatortranslatorengineclient = dynamic_cast<VirtualTextTranslatorTranslatorEngineClient*>(self);
    if (vtexttranslatortranslatorengineclient && vtexttranslatortranslatorengineclient->isVirtualTextTranslatorTranslatorEngineClient) {
        vtexttranslatortranslatorengineclient->setTextTranslator__TranslatorEngineClient_CreateTranslator_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorEngineClient::TextTranslator__TranslatorEngineClient_CreateTranslator_Callback>(slot));
    }
}

// Base class handler implementation
libqt_map /* of int to libqt_string */ TextTranslator__TranslatorEngineClient_SuperSupportedFromLanguages(TextTranslator__TranslatorEngineClient* self) {
    auto* vtexttranslatortranslatorengineclient = dynamic_cast<VirtualTextTranslatorTranslatorEngineClient*>(self);
    if (vtexttranslatortranslatorengineclient && vtexttranslatortranslatorengineclient->isVirtualTextTranslatorTranslatorEngineClient) {
        vtexttranslatortranslatorengineclient->setTextTranslator__TranslatorEngineClient_SupportedFromLanguages_IsBase(true);
        QMap<TextTranslator::TranslatorUtil::Language, QString> _ret = vtexttranslatortranslatorengineclient->supportedFromLanguages();
        // Convert QMap<> from C++ memory to manually-managed C memory
        int* _karr = static_cast<int*>(malloc(sizeof(int) * _ret.size()));
        libqt_string* _varr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.size()));
        int _ctr = 0;
        for (auto _itr = _ret.keyValueBegin(); _itr != _ret.keyValueEnd(); ++_itr) {
            _karr[_ctr] = static_cast<int>(_itr->first);
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
    } else {
        QMap<TextTranslator::TranslatorUtil::Language, QString> _ret = ((VirtualTextTranslatorTranslatorEngineClient*)self)->supportedFromLanguages();
        // Convert QMap<> from C++ memory to manually-managed C memory
        int* _karr = static_cast<int*>(malloc(sizeof(int) * _ret.size()));
        libqt_string* _varr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.size()));
        int _ctr = 0;
        for (auto _itr = _ret.keyValueBegin(); _itr != _ret.keyValueEnd(); ++_itr) {
            _karr[_ctr] = static_cast<int>(_itr->first);
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
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorEngineClient_OnSupportedFromLanguages(TextTranslator__TranslatorEngineClient* self, intptr_t slot) {
    auto* vtexttranslatortranslatorengineclient = dynamic_cast<VirtualTextTranslatorTranslatorEngineClient*>(self);
    if (vtexttranslatortranslatorengineclient && vtexttranslatortranslatorengineclient->isVirtualTextTranslatorTranslatorEngineClient) {
        vtexttranslatortranslatorengineclient->setTextTranslator__TranslatorEngineClient_SupportedFromLanguages_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorEngineClient::TextTranslator__TranslatorEngineClient_SupportedFromLanguages_Callback>(slot));
    }
}

// Base class handler implementation
libqt_map /* of int to libqt_string */ TextTranslator__TranslatorEngineClient_SuperSupportedToLanguages(TextTranslator__TranslatorEngineClient* self) {
    auto* vtexttranslatortranslatorengineclient = dynamic_cast<VirtualTextTranslatorTranslatorEngineClient*>(self);
    if (vtexttranslatortranslatorengineclient && vtexttranslatortranslatorengineclient->isVirtualTextTranslatorTranslatorEngineClient) {
        vtexttranslatortranslatorengineclient->setTextTranslator__TranslatorEngineClient_SupportedToLanguages_IsBase(true);
        QMap<TextTranslator::TranslatorUtil::Language, QString> _ret = vtexttranslatortranslatorengineclient->supportedToLanguages();
        // Convert QMap<> from C++ memory to manually-managed C memory
        int* _karr = static_cast<int*>(malloc(sizeof(int) * _ret.size()));
        libqt_string* _varr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.size()));
        int _ctr = 0;
        for (auto _itr = _ret.keyValueBegin(); _itr != _ret.keyValueEnd(); ++_itr) {
            _karr[_ctr] = static_cast<int>(_itr->first);
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
    } else {
        QMap<TextTranslator::TranslatorUtil::Language, QString> _ret = ((VirtualTextTranslatorTranslatorEngineClient*)self)->supportedToLanguages();
        // Convert QMap<> from C++ memory to manually-managed C memory
        int* _karr = static_cast<int*>(malloc(sizeof(int) * _ret.size()));
        libqt_string* _varr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.size()));
        int _ctr = 0;
        for (auto _itr = _ret.keyValueBegin(); _itr != _ret.keyValueEnd(); ++_itr) {
            _karr[_ctr] = static_cast<int>(_itr->first);
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
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorEngineClient_OnSupportedToLanguages(TextTranslator__TranslatorEngineClient* self, intptr_t slot) {
    auto* vtexttranslatortranslatorengineclient = dynamic_cast<VirtualTextTranslatorTranslatorEngineClient*>(self);
    if (vtexttranslatortranslatorengineclient && vtexttranslatortranslatorengineclient->isVirtualTextTranslatorTranslatorEngineClient) {
        vtexttranslatortranslatorengineclient->setTextTranslator__TranslatorEngineClient_SupportedToLanguages_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorEngineClient::TextTranslator__TranslatorEngineClient_SupportedToLanguages_Callback>(slot));
    }
}

// Base class handler implementation
void TextTranslator__TranslatorEngineClient_SuperUpdateListLanguages(TextTranslator__TranslatorEngineClient* self) {
    auto* vtexttranslatortranslatorengineclient = dynamic_cast<VirtualTextTranslatorTranslatorEngineClient*>(self);
    if (vtexttranslatortranslatorengineclient && vtexttranslatortranslatorengineclient->isVirtualTextTranslatorTranslatorEngineClient) {
        vtexttranslatortranslatorengineclient->setTextTranslator__TranslatorEngineClient_UpdateListLanguages_IsBase(true);
        vtexttranslatortranslatorengineclient->updateListLanguages();
    } else {
        self->TextTranslator::TranslatorEngineClient::updateListLanguages();
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorEngineClient_OnUpdateListLanguages(TextTranslator__TranslatorEngineClient* self, intptr_t slot) {
    auto* vtexttranslatortranslatorengineclient = dynamic_cast<VirtualTextTranslatorTranslatorEngineClient*>(self);
    if (vtexttranslatortranslatorengineclient && vtexttranslatortranslatorengineclient->isVirtualTextTranslatorTranslatorEngineClient) {
        vtexttranslatortranslatorengineclient->setTextTranslator__TranslatorEngineClient_UpdateListLanguages_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorEngineClient::TextTranslator__TranslatorEngineClient_UpdateListLanguages_Callback>(slot));
    }
}

// Base class handler implementation
bool TextTranslator__TranslatorEngineClient_SuperHasConfigurationDialog(const TextTranslator__TranslatorEngineClient* self) {
    auto* vtexttranslatortranslatorengineclient = const_cast<VirtualTextTranslatorTranslatorEngineClient*>(dynamic_cast<const VirtualTextTranslatorTranslatorEngineClient*>(self));
    if (vtexttranslatortranslatorengineclient && vtexttranslatortranslatorengineclient->isVirtualTextTranslatorTranslatorEngineClient) {
        vtexttranslatortranslatorengineclient->setTextTranslator__TranslatorEngineClient_HasConfigurationDialog_IsBase(true);
        return vtexttranslatortranslatorengineclient->hasConfigurationDialog();
    } else {
        return self->TextTranslator::TranslatorEngineClient::hasConfigurationDialog();
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorEngineClient_OnHasConfigurationDialog(const TextTranslator__TranslatorEngineClient* self, intptr_t slot) {
    auto* vtexttranslatortranslatorengineclient = const_cast<VirtualTextTranslatorTranslatorEngineClient*>(dynamic_cast<const VirtualTextTranslatorTranslatorEngineClient*>(self));
    if (vtexttranslatortranslatorengineclient && vtexttranslatortranslatorengineclient->isVirtualTextTranslatorTranslatorEngineClient) {
        vtexttranslatortranslatorengineclient->setTextTranslator__TranslatorEngineClient_HasConfigurationDialog_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorEngineClient::TextTranslator__TranslatorEngineClient_HasConfigurationDialog_Callback>(slot));
    }
}

// Base class handler implementation
bool TextTranslator__TranslatorEngineClient_SuperShowConfigureDialog(TextTranslator__TranslatorEngineClient* self, QWidget* parentWidget) {
    auto* vtexttranslatortranslatorengineclient = dynamic_cast<VirtualTextTranslatorTranslatorEngineClient*>(self);
    if (vtexttranslatortranslatorengineclient && vtexttranslatortranslatorengineclient->isVirtualTextTranslatorTranslatorEngineClient) {
        vtexttranslatortranslatorengineclient->setTextTranslator__TranslatorEngineClient_ShowConfigureDialog_IsBase(true);
        return vtexttranslatortranslatorengineclient->showConfigureDialog(parentWidget);
    } else {
        return self->TextTranslator::TranslatorEngineClient::showConfigureDialog(parentWidget);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorEngineClient_OnShowConfigureDialog(TextTranslator__TranslatorEngineClient* self, intptr_t slot) {
    auto* vtexttranslatortranslatorengineclient = dynamic_cast<VirtualTextTranslatorTranslatorEngineClient*>(self);
    if (vtexttranslatortranslatorengineclient && vtexttranslatortranslatorengineclient->isVirtualTextTranslatorTranslatorEngineClient) {
        vtexttranslatortranslatorengineclient->setTextTranslator__TranslatorEngineClient_ShowConfigureDialog_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorEngineClient::TextTranslator__TranslatorEngineClient_ShowConfigureDialog_Callback>(slot));
    }
}

// Base class handler implementation
void TextTranslator__TranslatorEngineClient_SuperGenerateToListFromCurrentToLanguage(TextTranslator__TranslatorEngineClient* self, const libqt_string languageCode) {
    auto* vtexttranslatortranslatorengineclient = dynamic_cast<VirtualTextTranslatorTranslatorEngineClient*>(self);
    QString languageCode_QString = QString::fromUtf8(languageCode.data, languageCode.len);
    if (vtexttranslatortranslatorengineclient && vtexttranslatortranslatorengineclient->isVirtualTextTranslatorTranslatorEngineClient) {
        vtexttranslatortranslatorengineclient->setTextTranslator__TranslatorEngineClient_GenerateToListFromCurrentToLanguage_IsBase(true);
        vtexttranslatortranslatorengineclient->generateToListFromCurrentToLanguage(languageCode_QString);
    } else {
        self->TextTranslator::TranslatorEngineClient::generateToListFromCurrentToLanguage(languageCode_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorEngineClient_OnGenerateToListFromCurrentToLanguage(TextTranslator__TranslatorEngineClient* self, intptr_t slot) {
    auto* vtexttranslatortranslatorengineclient = dynamic_cast<VirtualTextTranslatorTranslatorEngineClient*>(self);
    if (vtexttranslatortranslatorengineclient && vtexttranslatortranslatorengineclient->isVirtualTextTranslatorTranslatorEngineClient) {
        vtexttranslatortranslatorengineclient->setTextTranslator__TranslatorEngineClient_GenerateToListFromCurrentToLanguage_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorEngineClient::TextTranslator__TranslatorEngineClient_GenerateToListFromCurrentToLanguage_Callback>(slot));
    }
}

// Base class handler implementation
bool TextTranslator__TranslatorEngineClient_SuperHasInvertSupport(const TextTranslator__TranslatorEngineClient* self) {
    auto* vtexttranslatortranslatorengineclient = const_cast<VirtualTextTranslatorTranslatorEngineClient*>(dynamic_cast<const VirtualTextTranslatorTranslatorEngineClient*>(self));
    if (vtexttranslatortranslatorengineclient && vtexttranslatortranslatorengineclient->isVirtualTextTranslatorTranslatorEngineClient) {
        vtexttranslatortranslatorengineclient->setTextTranslator__TranslatorEngineClient_HasInvertSupport_IsBase(true);
        return vtexttranslatortranslatorengineclient->hasInvertSupport();
    } else {
        return self->TextTranslator::TranslatorEngineClient::hasInvertSupport();
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorEngineClient_OnHasInvertSupport(const TextTranslator__TranslatorEngineClient* self, intptr_t slot) {
    auto* vtexttranslatortranslatorengineclient = const_cast<VirtualTextTranslatorTranslatorEngineClient*>(dynamic_cast<const VirtualTextTranslatorTranslatorEngineClient*>(self));
    if (vtexttranslatortranslatorengineclient && vtexttranslatortranslatorengineclient->isVirtualTextTranslatorTranslatorEngineClient) {
        vtexttranslatortranslatorengineclient->setTextTranslator__TranslatorEngineClient_HasInvertSupport_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorEngineClient::TextTranslator__TranslatorEngineClient_HasInvertSupport_Callback>(slot));
    }
}

// Base class handler implementation
int TextTranslator__TranslatorEngineClient_SuperEngineType(const TextTranslator__TranslatorEngineClient* self) {
    auto* vtexttranslatortranslatorengineclient = const_cast<VirtualTextTranslatorTranslatorEngineClient*>(dynamic_cast<const VirtualTextTranslatorTranslatorEngineClient*>(self));
    if (vtexttranslatortranslatorengineclient && vtexttranslatortranslatorengineclient->isVirtualTextTranslatorTranslatorEngineClient) {
        vtexttranslatortranslatorengineclient->setTextTranslator__TranslatorEngineClient_EngineType_IsBase(true);
        return static_cast<int>(vtexttranslatortranslatorengineclient->engineType());
    } else {
        return static_cast<int>(((VirtualTextTranslatorTranslatorEngineClient*)self)->engineType());
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorEngineClient_OnEngineType(const TextTranslator__TranslatorEngineClient* self, intptr_t slot) {
    auto* vtexttranslatortranslatorengineclient = const_cast<VirtualTextTranslatorTranslatorEngineClient*>(dynamic_cast<const VirtualTextTranslatorTranslatorEngineClient*>(self));
    if (vtexttranslatortranslatorengineclient && vtexttranslatortranslatorengineclient->isVirtualTextTranslatorTranslatorEngineClient) {
        vtexttranslatortranslatorengineclient->setTextTranslator__TranslatorEngineClient_EngineType_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorEngineClient::TextTranslator__TranslatorEngineClient_EngineType_Callback>(slot));
    }
}

// Base class handler implementation
bool TextTranslator__TranslatorEngineClient_SuperIsSupported(const TextTranslator__TranslatorEngineClient* self, int lang) {
    auto* vtexttranslatortranslatorengineclient = const_cast<VirtualTextTranslatorTranslatorEngineClient*>(dynamic_cast<const VirtualTextTranslatorTranslatorEngineClient*>(self));
    if (vtexttranslatortranslatorengineclient && vtexttranslatortranslatorengineclient->isVirtualTextTranslatorTranslatorEngineClient) {
        vtexttranslatortranslatorengineclient->setTextTranslator__TranslatorEngineClient_IsSupported_IsBase(true);
        return vtexttranslatortranslatorengineclient->isSupported(static_cast<TextTranslator::TranslatorUtil::Language>(lang));
    } else {
        return ((VirtualTextTranslatorTranslatorEngineClient*)self)->isSupported(static_cast<TextTranslator::TranslatorUtil::Language>(lang));
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorEngineClient_OnIsSupported(const TextTranslator__TranslatorEngineClient* self, intptr_t slot) {
    auto* vtexttranslatortranslatorengineclient = const_cast<VirtualTextTranslatorTranslatorEngineClient*>(dynamic_cast<const VirtualTextTranslatorTranslatorEngineClient*>(self));
    if (vtexttranslatortranslatorengineclient && vtexttranslatortranslatorengineclient->isVirtualTextTranslatorTranslatorEngineClient) {
        vtexttranslatortranslatorengineclient->setTextTranslator__TranslatorEngineClient_IsSupported_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorEngineClient::TextTranslator__TranslatorEngineClient_IsSupported_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextTranslator__TranslatorEngineClient_Event(TextTranslator__TranslatorEngineClient* self, QEvent* event) {
    auto* vtexttranslatortranslatorengineclient = dynamic_cast<VirtualTextTranslatorTranslatorEngineClient*>(self);
    if (vtexttranslatortranslatorengineclient && vtexttranslatortranslatorengineclient->isVirtualTextTranslatorTranslatorEngineClient) {
        return vtexttranslatortranslatorengineclient->event(event);
    } else {
        return self->TextTranslator::TranslatorEngineClient::event(event);
    }
}

// Base class handler implementation
bool TextTranslator__TranslatorEngineClient_SuperEvent(TextTranslator__TranslatorEngineClient* self, QEvent* event) {
    auto* vtexttranslatortranslatorengineclient = dynamic_cast<VirtualTextTranslatorTranslatorEngineClient*>(self);
    if (vtexttranslatortranslatorengineclient && vtexttranslatortranslatorengineclient->isVirtualTextTranslatorTranslatorEngineClient) {
        vtexttranslatortranslatorengineclient->setTextTranslator__TranslatorEngineClient_Event_IsBase(true);
        return vtexttranslatortranslatorengineclient->event(event);
    } else {
        return self->TextTranslator::TranslatorEngineClient::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorEngineClient_OnEvent(TextTranslator__TranslatorEngineClient* self, intptr_t slot) {
    auto* vtexttranslatortranslatorengineclient = dynamic_cast<VirtualTextTranslatorTranslatorEngineClient*>(self);
    if (vtexttranslatortranslatorengineclient && vtexttranslatortranslatorengineclient->isVirtualTextTranslatorTranslatorEngineClient) {
        vtexttranslatortranslatorengineclient->setTextTranslator__TranslatorEngineClient_Event_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorEngineClient::TextTranslator__TranslatorEngineClient_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextTranslator__TranslatorEngineClient_EventFilter(TextTranslator__TranslatorEngineClient* self, QObject* watched, QEvent* event) {
    auto* vtexttranslatortranslatorengineclient = dynamic_cast<VirtualTextTranslatorTranslatorEngineClient*>(self);
    if (vtexttranslatortranslatorengineclient && vtexttranslatortranslatorengineclient->isVirtualTextTranslatorTranslatorEngineClient) {
        return vtexttranslatortranslatorengineclient->eventFilter(watched, event);
    } else {
        return self->TextTranslator::TranslatorEngineClient::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool TextTranslator__TranslatorEngineClient_SuperEventFilter(TextTranslator__TranslatorEngineClient* self, QObject* watched, QEvent* event) {
    auto* vtexttranslatortranslatorengineclient = dynamic_cast<VirtualTextTranslatorTranslatorEngineClient*>(self);
    if (vtexttranslatortranslatorengineclient && vtexttranslatortranslatorengineclient->isVirtualTextTranslatorTranslatorEngineClient) {
        vtexttranslatortranslatorengineclient->setTextTranslator__TranslatorEngineClient_EventFilter_IsBase(true);
        return vtexttranslatortranslatorengineclient->eventFilter(watched, event);
    } else {
        return self->TextTranslator::TranslatorEngineClient::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorEngineClient_OnEventFilter(TextTranslator__TranslatorEngineClient* self, intptr_t slot) {
    auto* vtexttranslatortranslatorengineclient = dynamic_cast<VirtualTextTranslatorTranslatorEngineClient*>(self);
    if (vtexttranslatortranslatorengineclient && vtexttranslatortranslatorengineclient->isVirtualTextTranslatorTranslatorEngineClient) {
        vtexttranslatortranslatorengineclient->setTextTranslator__TranslatorEngineClient_EventFilter_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorEngineClient::TextTranslator__TranslatorEngineClient_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorEngineClient_TimerEvent(TextTranslator__TranslatorEngineClient* self, QTimerEvent* event) {
    auto* vtexttranslatortranslatorengineclient = dynamic_cast<VirtualTextTranslatorTranslatorEngineClient*>(self);
    if (vtexttranslatortranslatorengineclient && vtexttranslatortranslatorengineclient->isVirtualTextTranslatorTranslatorEngineClient) {
        vtexttranslatortranslatorengineclient->timerEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorEngineClient*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void TextTranslator__TranslatorEngineClient_SuperTimerEvent(TextTranslator__TranslatorEngineClient* self, QTimerEvent* event) {
    auto* vtexttranslatortranslatorengineclient = dynamic_cast<VirtualTextTranslatorTranslatorEngineClient*>(self);
    if (vtexttranslatortranslatorengineclient && vtexttranslatortranslatorengineclient->isVirtualTextTranslatorTranslatorEngineClient) {
        vtexttranslatortranslatorengineclient->setTextTranslator__TranslatorEngineClient_TimerEvent_IsBase(true);
        vtexttranslatortranslatorengineclient->timerEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorEngineClient*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorEngineClient_OnTimerEvent(TextTranslator__TranslatorEngineClient* self, intptr_t slot) {
    auto* vtexttranslatortranslatorengineclient = dynamic_cast<VirtualTextTranslatorTranslatorEngineClient*>(self);
    if (vtexttranslatortranslatorengineclient && vtexttranslatortranslatorengineclient->isVirtualTextTranslatorTranslatorEngineClient) {
        vtexttranslatortranslatorengineclient->setTextTranslator__TranslatorEngineClient_TimerEvent_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorEngineClient::TextTranslator__TranslatorEngineClient_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorEngineClient_ChildEvent(TextTranslator__TranslatorEngineClient* self, QChildEvent* event) {
    auto* vtexttranslatortranslatorengineclient = dynamic_cast<VirtualTextTranslatorTranslatorEngineClient*>(self);
    if (vtexttranslatortranslatorengineclient && vtexttranslatortranslatorengineclient->isVirtualTextTranslatorTranslatorEngineClient) {
        vtexttranslatortranslatorengineclient->childEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorEngineClient*)self)->childEvent(event);
    }
}

// Base class handler implementation
void TextTranslator__TranslatorEngineClient_SuperChildEvent(TextTranslator__TranslatorEngineClient* self, QChildEvent* event) {
    auto* vtexttranslatortranslatorengineclient = dynamic_cast<VirtualTextTranslatorTranslatorEngineClient*>(self);
    if (vtexttranslatortranslatorengineclient && vtexttranslatortranslatorengineclient->isVirtualTextTranslatorTranslatorEngineClient) {
        vtexttranslatortranslatorengineclient->setTextTranslator__TranslatorEngineClient_ChildEvent_IsBase(true);
        vtexttranslatortranslatorengineclient->childEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorEngineClient*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorEngineClient_OnChildEvent(TextTranslator__TranslatorEngineClient* self, intptr_t slot) {
    auto* vtexttranslatortranslatorengineclient = dynamic_cast<VirtualTextTranslatorTranslatorEngineClient*>(self);
    if (vtexttranslatortranslatorengineclient && vtexttranslatortranslatorengineclient->isVirtualTextTranslatorTranslatorEngineClient) {
        vtexttranslatortranslatorengineclient->setTextTranslator__TranslatorEngineClient_ChildEvent_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorEngineClient::TextTranslator__TranslatorEngineClient_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorEngineClient_CustomEvent(TextTranslator__TranslatorEngineClient* self, QEvent* event) {
    auto* vtexttranslatortranslatorengineclient = dynamic_cast<VirtualTextTranslatorTranslatorEngineClient*>(self);
    if (vtexttranslatortranslatorengineclient && vtexttranslatortranslatorengineclient->isVirtualTextTranslatorTranslatorEngineClient) {
        vtexttranslatortranslatorengineclient->customEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorEngineClient*)self)->customEvent(event);
    }
}

// Base class handler implementation
void TextTranslator__TranslatorEngineClient_SuperCustomEvent(TextTranslator__TranslatorEngineClient* self, QEvent* event) {
    auto* vtexttranslatortranslatorengineclient = dynamic_cast<VirtualTextTranslatorTranslatorEngineClient*>(self);
    if (vtexttranslatortranslatorengineclient && vtexttranslatortranslatorengineclient->isVirtualTextTranslatorTranslatorEngineClient) {
        vtexttranslatortranslatorengineclient->setTextTranslator__TranslatorEngineClient_CustomEvent_IsBase(true);
        vtexttranslatortranslatorengineclient->customEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorEngineClient*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorEngineClient_OnCustomEvent(TextTranslator__TranslatorEngineClient* self, intptr_t slot) {
    auto* vtexttranslatortranslatorengineclient = dynamic_cast<VirtualTextTranslatorTranslatorEngineClient*>(self);
    if (vtexttranslatortranslatorengineclient && vtexttranslatortranslatorengineclient->isVirtualTextTranslatorTranslatorEngineClient) {
        vtexttranslatortranslatorengineclient->setTextTranslator__TranslatorEngineClient_CustomEvent_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorEngineClient::TextTranslator__TranslatorEngineClient_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorEngineClient_ConnectNotify(TextTranslator__TranslatorEngineClient* self, const QMetaMethod* signal) {
    auto* vtexttranslatortranslatorengineclient = dynamic_cast<VirtualTextTranslatorTranslatorEngineClient*>(self);
    if (vtexttranslatortranslatorengineclient && vtexttranslatortranslatorengineclient->isVirtualTextTranslatorTranslatorEngineClient) {
        vtexttranslatortranslatorengineclient->connectNotify(*signal);
    } else {
        ((VirtualTextTranslatorTranslatorEngineClient*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void TextTranslator__TranslatorEngineClient_SuperConnectNotify(TextTranslator__TranslatorEngineClient* self, const QMetaMethod* signal) {
    auto* vtexttranslatortranslatorengineclient = dynamic_cast<VirtualTextTranslatorTranslatorEngineClient*>(self);
    if (vtexttranslatortranslatorengineclient && vtexttranslatortranslatorengineclient->isVirtualTextTranslatorTranslatorEngineClient) {
        vtexttranslatortranslatorengineclient->setTextTranslator__TranslatorEngineClient_ConnectNotify_IsBase(true);
        vtexttranslatortranslatorengineclient->connectNotify(*signal);
    } else {
        ((VirtualTextTranslatorTranslatorEngineClient*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorEngineClient_OnConnectNotify(TextTranslator__TranslatorEngineClient* self, intptr_t slot) {
    auto* vtexttranslatortranslatorengineclient = dynamic_cast<VirtualTextTranslatorTranslatorEngineClient*>(self);
    if (vtexttranslatortranslatorengineclient && vtexttranslatortranslatorengineclient->isVirtualTextTranslatorTranslatorEngineClient) {
        vtexttranslatortranslatorengineclient->setTextTranslator__TranslatorEngineClient_ConnectNotify_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorEngineClient::TextTranslator__TranslatorEngineClient_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorEngineClient_DisconnectNotify(TextTranslator__TranslatorEngineClient* self, const QMetaMethod* signal) {
    auto* vtexttranslatortranslatorengineclient = dynamic_cast<VirtualTextTranslatorTranslatorEngineClient*>(self);
    if (vtexttranslatortranslatorengineclient && vtexttranslatortranslatorengineclient->isVirtualTextTranslatorTranslatorEngineClient) {
        vtexttranslatortranslatorengineclient->disconnectNotify(*signal);
    } else {
        ((VirtualTextTranslatorTranslatorEngineClient*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void TextTranslator__TranslatorEngineClient_SuperDisconnectNotify(TextTranslator__TranslatorEngineClient* self, const QMetaMethod* signal) {
    auto* vtexttranslatortranslatorengineclient = dynamic_cast<VirtualTextTranslatorTranslatorEngineClient*>(self);
    if (vtexttranslatortranslatorengineclient && vtexttranslatortranslatorengineclient->isVirtualTextTranslatorTranslatorEngineClient) {
        vtexttranslatortranslatorengineclient->setTextTranslator__TranslatorEngineClient_DisconnectNotify_IsBase(true);
        vtexttranslatortranslatorengineclient->disconnectNotify(*signal);
    } else {
        ((VirtualTextTranslatorTranslatorEngineClient*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorEngineClient_OnDisconnectNotify(TextTranslator__TranslatorEngineClient* self, intptr_t slot) {
    auto* vtexttranslatortranslatorengineclient = dynamic_cast<VirtualTextTranslatorTranslatorEngineClient*>(self);
    if (vtexttranslatortranslatorengineclient && vtexttranslatortranslatorengineclient->isVirtualTextTranslatorTranslatorEngineClient) {
        vtexttranslatortranslatorengineclient->setTextTranslator__TranslatorEngineClient_DisconnectNotify_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorEngineClient::TextTranslator__TranslatorEngineClient_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_map /* of int to libqt_string */ TextTranslator__TranslatorEngineClient_FillLanguages(TextTranslator__TranslatorEngineClient* self) {
    auto* vtexttranslatortranslatorengineclient = dynamic_cast<VirtualTextTranslatorTranslatorEngineClient*>(self);
    if (vtexttranslatortranslatorengineclient && vtexttranslatortranslatorengineclient->isVirtualTextTranslatorTranslatorEngineClient) {
        QMap<TextTranslator::TranslatorUtil::Language, QString> _ret = vtexttranslatortranslatorengineclient->fillLanguages();
        // Convert QMap<> from C++ memory to manually-managed C memory
        int* _karr = static_cast<int*>(malloc(sizeof(int) * _ret.size()));
        libqt_string* _varr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.size()));
        int _ctr = 0;
        for (auto _itr = _ret.keyValueBegin(); _itr != _ret.keyValueEnd(); ++_itr) {
            _karr[_ctr] = static_cast<int>(_itr->first);
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
    } else {
        QMap<TextTranslator::TranslatorUtil::Language, QString> _ret = ((VirtualTextTranslatorTranslatorEngineClient*)self)->fillLanguages();
        // Convert QMap<> from C++ memory to manually-managed C memory
        int* _karr = static_cast<int*>(malloc(sizeof(int) * _ret.size()));
        libqt_string* _varr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.size()));
        int _ctr = 0;
        for (auto _itr = _ret.keyValueBegin(); _itr != _ret.keyValueEnd(); ++_itr) {
            _karr[_ctr] = static_cast<int>(_itr->first);
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
}

// Base class handler implementation
libqt_map /* of int to libqt_string */ TextTranslator__TranslatorEngineClient_SuperFillLanguages(TextTranslator__TranslatorEngineClient* self) {
    auto* vtexttranslatortranslatorengineclient = dynamic_cast<VirtualTextTranslatorTranslatorEngineClient*>(self);
    if (vtexttranslatortranslatorengineclient && vtexttranslatortranslatorengineclient->isVirtualTextTranslatorTranslatorEngineClient) {
        vtexttranslatortranslatorengineclient->setTextTranslator__TranslatorEngineClient_FillLanguages_IsBase(true);
        QMap<TextTranslator::TranslatorUtil::Language, QString> _ret = vtexttranslatortranslatorengineclient->fillLanguages();
        // Convert QMap<> from C++ memory to manually-managed C memory
        int* _karr = static_cast<int*>(malloc(sizeof(int) * _ret.size()));
        libqt_string* _varr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.size()));
        int _ctr = 0;
        for (auto _itr = _ret.keyValueBegin(); _itr != _ret.keyValueEnd(); ++_itr) {
            _karr[_ctr] = static_cast<int>(_itr->first);
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
    } else {
        QMap<TextTranslator::TranslatorUtil::Language, QString> _ret = ((VirtualTextTranslatorTranslatorEngineClient*)self)->fillLanguages();
        // Convert QMap<> from C++ memory to manually-managed C memory
        int* _karr = static_cast<int*>(malloc(sizeof(int) * _ret.size()));
        libqt_string* _varr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.size()));
        int _ctr = 0;
        for (auto _itr = _ret.keyValueBegin(); _itr != _ret.keyValueEnd(); ++_itr) {
            _karr[_ctr] = static_cast<int>(_itr->first);
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
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorEngineClient_OnFillLanguages(TextTranslator__TranslatorEngineClient* self, intptr_t slot) {
    auto* vtexttranslatortranslatorengineclient = dynamic_cast<VirtualTextTranslatorTranslatorEngineClient*>(self);
    if (vtexttranslatortranslatorengineclient && vtexttranslatortranslatorengineclient->isVirtualTextTranslatorTranslatorEngineClient) {
        vtexttranslatortranslatorengineclient->setTextTranslator__TranslatorEngineClient_FillLanguages_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorEngineClient::TextTranslator__TranslatorEngineClient_FillLanguages_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* TextTranslator__TranslatorEngineClient_Sender(const TextTranslator__TranslatorEngineClient* self) {
    auto* vtexttranslatortranslatorengineclient = const_cast<VirtualTextTranslatorTranslatorEngineClient*>(dynamic_cast<const VirtualTextTranslatorTranslatorEngineClient*>(self));
    if (vtexttranslatortranslatorengineclient && vtexttranslatortranslatorengineclient->isVirtualTextTranslatorTranslatorEngineClient) {
        return vtexttranslatortranslatorengineclient->sender();
    } else {
        return ((VirtualTextTranslatorTranslatorEngineClient*)self)->sender();
    }
}

// Base class handler implementation
QObject* TextTranslator__TranslatorEngineClient_SuperSender(const TextTranslator__TranslatorEngineClient* self) {
    auto* vtexttranslatortranslatorengineclient = const_cast<VirtualTextTranslatorTranslatorEngineClient*>(dynamic_cast<const VirtualTextTranslatorTranslatorEngineClient*>(self));
    if (vtexttranslatortranslatorengineclient && vtexttranslatortranslatorengineclient->isVirtualTextTranslatorTranslatorEngineClient) {
        vtexttranslatortranslatorengineclient->setTextTranslator__TranslatorEngineClient_Sender_IsBase(true);
        return vtexttranslatortranslatorengineclient->sender();
    } else {
        return ((VirtualTextTranslatorTranslatorEngineClient*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorEngineClient_OnSender(const TextTranslator__TranslatorEngineClient* self, intptr_t slot) {
    auto* vtexttranslatortranslatorengineclient = const_cast<VirtualTextTranslatorTranslatorEngineClient*>(dynamic_cast<const VirtualTextTranslatorTranslatorEngineClient*>(self));
    if (vtexttranslatortranslatorengineclient && vtexttranslatortranslatorengineclient->isVirtualTextTranslatorTranslatorEngineClient) {
        vtexttranslatortranslatorengineclient->setTextTranslator__TranslatorEngineClient_Sender_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorEngineClient::TextTranslator__TranslatorEngineClient_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int TextTranslator__TranslatorEngineClient_SenderSignalIndex(const TextTranslator__TranslatorEngineClient* self) {
    auto* vtexttranslatortranslatorengineclient = const_cast<VirtualTextTranslatorTranslatorEngineClient*>(dynamic_cast<const VirtualTextTranslatorTranslatorEngineClient*>(self));
    if (vtexttranslatortranslatorengineclient && vtexttranslatortranslatorengineclient->isVirtualTextTranslatorTranslatorEngineClient) {
        return vtexttranslatortranslatorengineclient->senderSignalIndex();
    } else {
        return ((VirtualTextTranslatorTranslatorEngineClient*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int TextTranslator__TranslatorEngineClient_SuperSenderSignalIndex(const TextTranslator__TranslatorEngineClient* self) {
    auto* vtexttranslatortranslatorengineclient = const_cast<VirtualTextTranslatorTranslatorEngineClient*>(dynamic_cast<const VirtualTextTranslatorTranslatorEngineClient*>(self));
    if (vtexttranslatortranslatorengineclient && vtexttranslatortranslatorengineclient->isVirtualTextTranslatorTranslatorEngineClient) {
        vtexttranslatortranslatorengineclient->setTextTranslator__TranslatorEngineClient_SenderSignalIndex_IsBase(true);
        return vtexttranslatortranslatorengineclient->senderSignalIndex();
    } else {
        return ((VirtualTextTranslatorTranslatorEngineClient*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorEngineClient_OnSenderSignalIndex(const TextTranslator__TranslatorEngineClient* self, intptr_t slot) {
    auto* vtexttranslatortranslatorengineclient = const_cast<VirtualTextTranslatorTranslatorEngineClient*>(dynamic_cast<const VirtualTextTranslatorTranslatorEngineClient*>(self));
    if (vtexttranslatortranslatorengineclient && vtexttranslatortranslatorengineclient->isVirtualTextTranslatorTranslatorEngineClient) {
        vtexttranslatortranslatorengineclient->setTextTranslator__TranslatorEngineClient_SenderSignalIndex_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorEngineClient::TextTranslator__TranslatorEngineClient_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int TextTranslator__TranslatorEngineClient_Receivers(const TextTranslator__TranslatorEngineClient* self, const char* signal) {
    auto* vtexttranslatortranslatorengineclient = const_cast<VirtualTextTranslatorTranslatorEngineClient*>(dynamic_cast<const VirtualTextTranslatorTranslatorEngineClient*>(self));
    if (vtexttranslatortranslatorengineclient && vtexttranslatortranslatorengineclient->isVirtualTextTranslatorTranslatorEngineClient) {
        return vtexttranslatortranslatorengineclient->receivers(signal);
    } else {
        return ((VirtualTextTranslatorTranslatorEngineClient*)self)->receivers(signal);
    }
}

// Base class handler implementation
int TextTranslator__TranslatorEngineClient_SuperReceivers(const TextTranslator__TranslatorEngineClient* self, const char* signal) {
    auto* vtexttranslatortranslatorengineclient = const_cast<VirtualTextTranslatorTranslatorEngineClient*>(dynamic_cast<const VirtualTextTranslatorTranslatorEngineClient*>(self));
    if (vtexttranslatortranslatorengineclient && vtexttranslatortranslatorengineclient->isVirtualTextTranslatorTranslatorEngineClient) {
        vtexttranslatortranslatorengineclient->setTextTranslator__TranslatorEngineClient_Receivers_IsBase(true);
        return vtexttranslatortranslatorengineclient->receivers(signal);
    } else {
        return ((VirtualTextTranslatorTranslatorEngineClient*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorEngineClient_OnReceivers(const TextTranslator__TranslatorEngineClient* self, intptr_t slot) {
    auto* vtexttranslatortranslatorengineclient = const_cast<VirtualTextTranslatorTranslatorEngineClient*>(dynamic_cast<const VirtualTextTranslatorTranslatorEngineClient*>(self));
    if (vtexttranslatortranslatorengineclient && vtexttranslatortranslatorengineclient->isVirtualTextTranslatorTranslatorEngineClient) {
        vtexttranslatortranslatorengineclient->setTextTranslator__TranslatorEngineClient_Receivers_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorEngineClient::TextTranslator__TranslatorEngineClient_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextTranslator__TranslatorEngineClient_IsSignalConnected(const TextTranslator__TranslatorEngineClient* self, const QMetaMethod* signal) {
    auto* vtexttranslatortranslatorengineclient = const_cast<VirtualTextTranslatorTranslatorEngineClient*>(dynamic_cast<const VirtualTextTranslatorTranslatorEngineClient*>(self));
    if (vtexttranslatortranslatorengineclient && vtexttranslatortranslatorengineclient->isVirtualTextTranslatorTranslatorEngineClient) {
        return vtexttranslatortranslatorengineclient->isSignalConnected(*signal);
    } else {
        return ((VirtualTextTranslatorTranslatorEngineClient*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool TextTranslator__TranslatorEngineClient_SuperIsSignalConnected(const TextTranslator__TranslatorEngineClient* self, const QMetaMethod* signal) {
    auto* vtexttranslatortranslatorengineclient = const_cast<VirtualTextTranslatorTranslatorEngineClient*>(dynamic_cast<const VirtualTextTranslatorTranslatorEngineClient*>(self));
    if (vtexttranslatortranslatorengineclient && vtexttranslatortranslatorengineclient->isVirtualTextTranslatorTranslatorEngineClient) {
        vtexttranslatortranslatorengineclient->setTextTranslator__TranslatorEngineClient_IsSignalConnected_IsBase(true);
        return vtexttranslatortranslatorengineclient->isSignalConnected(*signal);
    } else {
        return ((VirtualTextTranslatorTranslatorEngineClient*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorEngineClient_OnIsSignalConnected(const TextTranslator__TranslatorEngineClient* self, intptr_t slot) {
    auto* vtexttranslatortranslatorengineclient = const_cast<VirtualTextTranslatorTranslatorEngineClient*>(dynamic_cast<const VirtualTextTranslatorTranslatorEngineClient*>(self));
    if (vtexttranslatortranslatorengineclient && vtexttranslatortranslatorengineclient->isVirtualTextTranslatorTranslatorEngineClient) {
        vtexttranslatortranslatorengineclient->setTextTranslator__TranslatorEngineClient_IsSignalConnected_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorEngineClient::TextTranslator__TranslatorEngineClient_IsSignalConnected_Callback>(slot));
    }
}

void TextTranslator__TranslatorEngineClient_Delete(TextTranslator__TranslatorEngineClient* self) {
    delete self;
}
