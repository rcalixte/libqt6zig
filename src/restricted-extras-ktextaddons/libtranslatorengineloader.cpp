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
#define WORKAROUND_INNER_CLASS_DEFINITION_TextTranslator__TranslatorEngineLoader
#include <translatorengineloader.h>
#include "libtranslatorengineloader.h"
#include "libtranslatorengineloader.hxx"

TextTranslator__TranslatorEngineLoader* TextTranslator__TranslatorEngineLoader_new() {
    return new VirtualTextTranslatorTranslatorEngineLoader();
}

TextTranslator__TranslatorEngineLoader* TextTranslator__TranslatorEngineLoader_new2(QObject* parent) {
    return new VirtualTextTranslatorTranslatorEngineLoader(parent);
}

QMetaObject* TextTranslator__TranslatorEngineLoader_MetaObject(const TextTranslator__TranslatorEngineLoader* self) {
    auto* vtexttranslator__translatorengineloader = dynamic_cast<const VirtualTextTranslatorTranslatorEngineLoader*>(self);
    if (vtexttranslator__translatorengineloader && vtexttranslator__translatorengineloader->isVirtualTextTranslatorTranslatorEngineLoader) {
        return (QMetaObject*)self->metaObject();
    } else {
        return (QMetaObject*)((VirtualTextTranslatorTranslatorEngineLoader*)self)->metaObject();
    }
}

void* TextTranslator__TranslatorEngineLoader_Metacast(TextTranslator__TranslatorEngineLoader* self, const char* param1) {
    auto* vtexttranslator__translatorengineloader = dynamic_cast<VirtualTextTranslatorTranslatorEngineLoader*>(self);
    if (vtexttranslator__translatorengineloader && vtexttranslator__translatorengineloader->isVirtualTextTranslatorTranslatorEngineLoader) {
        return self->qt_metacast(param1);
    } else {
        return ((VirtualTextTranslatorTranslatorEngineLoader*)self)->qt_metacast(param1);
    }
}

int TextTranslator__TranslatorEngineLoader_Metacall(TextTranslator__TranslatorEngineLoader* self, int param1, int param2, void** param3) {
    auto* vtexttranslator__translatorengineloader = dynamic_cast<VirtualTextTranslatorTranslatorEngineLoader*>(self);
    if (vtexttranslator__translatorengineloader && vtexttranslator__translatorengineloader->isVirtualTextTranslatorTranslatorEngineLoader) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualTextTranslatorTranslatorEngineLoader*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

TextTranslator__TranslatorEngineLoader* TextTranslator__TranslatorEngineLoader_Self() {
    return TextTranslator::TranslatorEngineLoader::self();
}

TextTranslator__TranslatorEngineClient* TextTranslator__TranslatorEngineLoader_CreateTranslatorClient(TextTranslator__TranslatorEngineLoader* self, const libqt_string clientName) {
    QString clientName_QString = QString::fromUtf8(clientName.data, clientName.len);
    return self->createTranslatorClient(clientName_QString);
}

libqt_map /* of libqt_string to libqt_string */ TextTranslator__TranslatorEngineLoader_TranslatorEngineInfos(const TextTranslator__TranslatorEngineLoader* self) {
    QMap<QString, QString> _ret = self->translatorEngineInfos();
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

libqt_string TextTranslator__TranslatorEngineLoader_CurrentPluginName(const TextTranslator__TranslatorEngineLoader* self, const libqt_string key) {
    QString key_QString = QString::fromUtf8(key.data, key.len);
    QString _ret = self->currentPluginName(key_QString);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_map /* of int to libqt_string */ TextTranslator__TranslatorEngineLoader_SupportedFromLanguages(const TextTranslator__TranslatorEngineLoader* self, const libqt_string clientName) {
    QString clientName_QString = QString::fromUtf8(clientName.data, clientName.len);
    QMap<TextTranslator::TranslatorUtil::Language, QString> _ret = self->supportedFromLanguages(clientName_QString);
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

libqt_map /* of int to libqt_string */ TextTranslator__TranslatorEngineLoader_SupportedToLanguages(const TextTranslator__TranslatorEngineLoader* self, const libqt_string clientName) {
    QString clientName_QString = QString::fromUtf8(clientName.data, clientName.len);
    QMap<TextTranslator::TranslatorUtil::Language, QString> _ret = self->supportedToLanguages(clientName_QString);
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

bool TextTranslator__TranslatorEngineLoader_HasConfigurationDialog(const TextTranslator__TranslatorEngineLoader* self, const libqt_string clientName) {
    QString clientName_QString = QString::fromUtf8(clientName.data, clientName.len);
    return self->hasConfigurationDialog(clientName_QString);
}

libqt_string TextTranslator__TranslatorEngineLoader_FallbackFirstEngine(const TextTranslator__TranslatorEngineLoader* self) {
    QString _ret = self->fallbackFirstEngine();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool TextTranslator__TranslatorEngineLoader_ShowConfigureDialog(TextTranslator__TranslatorEngineLoader* self, const libqt_string clientName, QWidget* parentWidget) {
    QString clientName_QString = QString::fromUtf8(clientName.data, clientName.len);
    return self->showConfigureDialog(clientName_QString, parentWidget);
}

void TextTranslator__TranslatorEngineLoader_LoadingTranslatorFailed(TextTranslator__TranslatorEngineLoader* self) {
    self->loadingTranslatorFailed();
}

void TextTranslator__TranslatorEngineLoader_Connect_LoadingTranslatorFailed(TextTranslator__TranslatorEngineLoader* self, intptr_t slot) {
    void (*slotFunc)(TextTranslator__TranslatorEngineLoader*) = reinterpret_cast<void (*)(TextTranslator__TranslatorEngineLoader*)>(slot);
    TextTranslator::TranslatorEngineLoader::connect(self, &TextTranslator::TranslatorEngineLoader::loadingTranslatorFailed, [self, slotFunc]() {
        slotFunc(self);
    });
}

// Base class handler implementation
QMetaObject* TextTranslator__TranslatorEngineLoader_SuperMetaObject(const TextTranslator__TranslatorEngineLoader* self) {
    auto* vtexttranslatortranslatorengineloader = const_cast<VirtualTextTranslatorTranslatorEngineLoader*>(dynamic_cast<const VirtualTextTranslatorTranslatorEngineLoader*>(self));
    if (vtexttranslatortranslatorengineloader && vtexttranslatortranslatorengineloader->isVirtualTextTranslatorTranslatorEngineLoader) {
        vtexttranslatortranslatorengineloader->setTextTranslator__TranslatorEngineLoader_MetaObject_IsBase(true);
        return (QMetaObject*)vtexttranslatortranslatorengineloader->metaObject();
    } else {
        return (QMetaObject*)self->TextTranslator::TranslatorEngineLoader::metaObject();
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorEngineLoader_OnMetaObject(const TextTranslator__TranslatorEngineLoader* self, intptr_t slot) {
    auto* vtexttranslatortranslatorengineloader = const_cast<VirtualTextTranslatorTranslatorEngineLoader*>(dynamic_cast<const VirtualTextTranslatorTranslatorEngineLoader*>(self));
    if (vtexttranslatortranslatorengineloader && vtexttranslatortranslatorengineloader->isVirtualTextTranslatorTranslatorEngineLoader) {
        vtexttranslatortranslatorengineloader->setTextTranslator__TranslatorEngineLoader_MetaObject_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorEngineLoader::TextTranslator__TranslatorEngineLoader_MetaObject_Callback>(slot));
    }
}

// Base class handler implementation
void* TextTranslator__TranslatorEngineLoader_SuperMetacast(TextTranslator__TranslatorEngineLoader* self, const char* param1) {
    auto* vtexttranslatortranslatorengineloader = dynamic_cast<VirtualTextTranslatorTranslatorEngineLoader*>(self);
    if (vtexttranslatortranslatorengineloader && vtexttranslatortranslatorengineloader->isVirtualTextTranslatorTranslatorEngineLoader) {
        vtexttranslatortranslatorengineloader->setTextTranslator__TranslatorEngineLoader_Metacast_IsBase(true);
        return vtexttranslatortranslatorengineloader->qt_metacast(param1);
    } else {
        return self->TextTranslator::TranslatorEngineLoader::qt_metacast(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorEngineLoader_OnMetacast(TextTranslator__TranslatorEngineLoader* self, intptr_t slot) {
    auto* vtexttranslatortranslatorengineloader = dynamic_cast<VirtualTextTranslatorTranslatorEngineLoader*>(self);
    if (vtexttranslatortranslatorengineloader && vtexttranslatortranslatorengineloader->isVirtualTextTranslatorTranslatorEngineLoader) {
        vtexttranslatortranslatorengineloader->setTextTranslator__TranslatorEngineLoader_Metacast_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorEngineLoader::TextTranslator__TranslatorEngineLoader_Metacast_Callback>(slot));
    }
}

// Base class handler implementation
int TextTranslator__TranslatorEngineLoader_SuperMetacall(TextTranslator__TranslatorEngineLoader* self, int param1, int param2, void** param3) {
    auto* vtexttranslatortranslatorengineloader = dynamic_cast<VirtualTextTranslatorTranslatorEngineLoader*>(self);
    if (vtexttranslatortranslatorengineloader && vtexttranslatortranslatorengineloader->isVirtualTextTranslatorTranslatorEngineLoader) {
        vtexttranslatortranslatorengineloader->setTextTranslator__TranslatorEngineLoader_Metacall_IsBase(true);
        return vtexttranslatortranslatorengineloader->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->TextTranslator::TranslatorEngineLoader::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorEngineLoader_OnMetacall(TextTranslator__TranslatorEngineLoader* self, intptr_t slot) {
    auto* vtexttranslatortranslatorengineloader = dynamic_cast<VirtualTextTranslatorTranslatorEngineLoader*>(self);
    if (vtexttranslatortranslatorengineloader && vtexttranslatortranslatorengineloader->isVirtualTextTranslatorTranslatorEngineLoader) {
        vtexttranslatortranslatorengineloader->setTextTranslator__TranslatorEngineLoader_Metacall_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorEngineLoader::TextTranslator__TranslatorEngineLoader_Metacall_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextTranslator__TranslatorEngineLoader_Event(TextTranslator__TranslatorEngineLoader* self, QEvent* event) {
    auto* vtexttranslatortranslatorengineloader = dynamic_cast<VirtualTextTranslatorTranslatorEngineLoader*>(self);
    if (vtexttranslatortranslatorengineloader && vtexttranslatortranslatorengineloader->isVirtualTextTranslatorTranslatorEngineLoader) {
        return vtexttranslatortranslatorengineloader->event(event);
    } else {
        return self->TextTranslator::TranslatorEngineLoader::event(event);
    }
}

// Base class handler implementation
bool TextTranslator__TranslatorEngineLoader_SuperEvent(TextTranslator__TranslatorEngineLoader* self, QEvent* event) {
    auto* vtexttranslatortranslatorengineloader = dynamic_cast<VirtualTextTranslatorTranslatorEngineLoader*>(self);
    if (vtexttranslatortranslatorengineloader && vtexttranslatortranslatorengineloader->isVirtualTextTranslatorTranslatorEngineLoader) {
        vtexttranslatortranslatorengineloader->setTextTranslator__TranslatorEngineLoader_Event_IsBase(true);
        return vtexttranslatortranslatorengineloader->event(event);
    } else {
        return self->TextTranslator::TranslatorEngineLoader::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorEngineLoader_OnEvent(TextTranslator__TranslatorEngineLoader* self, intptr_t slot) {
    auto* vtexttranslatortranslatorengineloader = dynamic_cast<VirtualTextTranslatorTranslatorEngineLoader*>(self);
    if (vtexttranslatortranslatorengineloader && vtexttranslatortranslatorengineloader->isVirtualTextTranslatorTranslatorEngineLoader) {
        vtexttranslatortranslatorengineloader->setTextTranslator__TranslatorEngineLoader_Event_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorEngineLoader::TextTranslator__TranslatorEngineLoader_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextTranslator__TranslatorEngineLoader_EventFilter(TextTranslator__TranslatorEngineLoader* self, QObject* watched, QEvent* event) {
    auto* vtexttranslatortranslatorengineloader = dynamic_cast<VirtualTextTranslatorTranslatorEngineLoader*>(self);
    if (vtexttranslatortranslatorengineloader && vtexttranslatortranslatorengineloader->isVirtualTextTranslatorTranslatorEngineLoader) {
        return vtexttranslatortranslatorengineloader->eventFilter(watched, event);
    } else {
        return self->TextTranslator::TranslatorEngineLoader::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool TextTranslator__TranslatorEngineLoader_SuperEventFilter(TextTranslator__TranslatorEngineLoader* self, QObject* watched, QEvent* event) {
    auto* vtexttranslatortranslatorengineloader = dynamic_cast<VirtualTextTranslatorTranslatorEngineLoader*>(self);
    if (vtexttranslatortranslatorengineloader && vtexttranslatortranslatorengineloader->isVirtualTextTranslatorTranslatorEngineLoader) {
        vtexttranslatortranslatorengineloader->setTextTranslator__TranslatorEngineLoader_EventFilter_IsBase(true);
        return vtexttranslatortranslatorengineloader->eventFilter(watched, event);
    } else {
        return self->TextTranslator::TranslatorEngineLoader::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorEngineLoader_OnEventFilter(TextTranslator__TranslatorEngineLoader* self, intptr_t slot) {
    auto* vtexttranslatortranslatorengineloader = dynamic_cast<VirtualTextTranslatorTranslatorEngineLoader*>(self);
    if (vtexttranslatortranslatorengineloader && vtexttranslatortranslatorengineloader->isVirtualTextTranslatorTranslatorEngineLoader) {
        vtexttranslatortranslatorengineloader->setTextTranslator__TranslatorEngineLoader_EventFilter_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorEngineLoader::TextTranslator__TranslatorEngineLoader_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorEngineLoader_TimerEvent(TextTranslator__TranslatorEngineLoader* self, QTimerEvent* event) {
    auto* vtexttranslatortranslatorengineloader = dynamic_cast<VirtualTextTranslatorTranslatorEngineLoader*>(self);
    if (vtexttranslatortranslatorengineloader && vtexttranslatortranslatorengineloader->isVirtualTextTranslatorTranslatorEngineLoader) {
        vtexttranslatortranslatorengineloader->timerEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorEngineLoader*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void TextTranslator__TranslatorEngineLoader_SuperTimerEvent(TextTranslator__TranslatorEngineLoader* self, QTimerEvent* event) {
    auto* vtexttranslatortranslatorengineloader = dynamic_cast<VirtualTextTranslatorTranslatorEngineLoader*>(self);
    if (vtexttranslatortranslatorengineloader && vtexttranslatortranslatorengineloader->isVirtualTextTranslatorTranslatorEngineLoader) {
        vtexttranslatortranslatorengineloader->setTextTranslator__TranslatorEngineLoader_TimerEvent_IsBase(true);
        vtexttranslatortranslatorengineloader->timerEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorEngineLoader*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorEngineLoader_OnTimerEvent(TextTranslator__TranslatorEngineLoader* self, intptr_t slot) {
    auto* vtexttranslatortranslatorengineloader = dynamic_cast<VirtualTextTranslatorTranslatorEngineLoader*>(self);
    if (vtexttranslatortranslatorengineloader && vtexttranslatortranslatorengineloader->isVirtualTextTranslatorTranslatorEngineLoader) {
        vtexttranslatortranslatorengineloader->setTextTranslator__TranslatorEngineLoader_TimerEvent_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorEngineLoader::TextTranslator__TranslatorEngineLoader_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorEngineLoader_ChildEvent(TextTranslator__TranslatorEngineLoader* self, QChildEvent* event) {
    auto* vtexttranslatortranslatorengineloader = dynamic_cast<VirtualTextTranslatorTranslatorEngineLoader*>(self);
    if (vtexttranslatortranslatorengineloader && vtexttranslatortranslatorengineloader->isVirtualTextTranslatorTranslatorEngineLoader) {
        vtexttranslatortranslatorengineloader->childEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorEngineLoader*)self)->childEvent(event);
    }
}

// Base class handler implementation
void TextTranslator__TranslatorEngineLoader_SuperChildEvent(TextTranslator__TranslatorEngineLoader* self, QChildEvent* event) {
    auto* vtexttranslatortranslatorengineloader = dynamic_cast<VirtualTextTranslatorTranslatorEngineLoader*>(self);
    if (vtexttranslatortranslatorengineloader && vtexttranslatortranslatorengineloader->isVirtualTextTranslatorTranslatorEngineLoader) {
        vtexttranslatortranslatorengineloader->setTextTranslator__TranslatorEngineLoader_ChildEvent_IsBase(true);
        vtexttranslatortranslatorengineloader->childEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorEngineLoader*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorEngineLoader_OnChildEvent(TextTranslator__TranslatorEngineLoader* self, intptr_t slot) {
    auto* vtexttranslatortranslatorengineloader = dynamic_cast<VirtualTextTranslatorTranslatorEngineLoader*>(self);
    if (vtexttranslatortranslatorengineloader && vtexttranslatortranslatorengineloader->isVirtualTextTranslatorTranslatorEngineLoader) {
        vtexttranslatortranslatorengineloader->setTextTranslator__TranslatorEngineLoader_ChildEvent_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorEngineLoader::TextTranslator__TranslatorEngineLoader_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorEngineLoader_CustomEvent(TextTranslator__TranslatorEngineLoader* self, QEvent* event) {
    auto* vtexttranslatortranslatorengineloader = dynamic_cast<VirtualTextTranslatorTranslatorEngineLoader*>(self);
    if (vtexttranslatortranslatorengineloader && vtexttranslatortranslatorengineloader->isVirtualTextTranslatorTranslatorEngineLoader) {
        vtexttranslatortranslatorengineloader->customEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorEngineLoader*)self)->customEvent(event);
    }
}

// Base class handler implementation
void TextTranslator__TranslatorEngineLoader_SuperCustomEvent(TextTranslator__TranslatorEngineLoader* self, QEvent* event) {
    auto* vtexttranslatortranslatorengineloader = dynamic_cast<VirtualTextTranslatorTranslatorEngineLoader*>(self);
    if (vtexttranslatortranslatorengineloader && vtexttranslatortranslatorengineloader->isVirtualTextTranslatorTranslatorEngineLoader) {
        vtexttranslatortranslatorengineloader->setTextTranslator__TranslatorEngineLoader_CustomEvent_IsBase(true);
        vtexttranslatortranslatorengineloader->customEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorEngineLoader*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorEngineLoader_OnCustomEvent(TextTranslator__TranslatorEngineLoader* self, intptr_t slot) {
    auto* vtexttranslatortranslatorengineloader = dynamic_cast<VirtualTextTranslatorTranslatorEngineLoader*>(self);
    if (vtexttranslatortranslatorengineloader && vtexttranslatortranslatorengineloader->isVirtualTextTranslatorTranslatorEngineLoader) {
        vtexttranslatortranslatorengineloader->setTextTranslator__TranslatorEngineLoader_CustomEvent_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorEngineLoader::TextTranslator__TranslatorEngineLoader_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorEngineLoader_ConnectNotify(TextTranslator__TranslatorEngineLoader* self, const QMetaMethod* signal) {
    auto* vtexttranslatortranslatorengineloader = dynamic_cast<VirtualTextTranslatorTranslatorEngineLoader*>(self);
    if (vtexttranslatortranslatorengineloader && vtexttranslatortranslatorengineloader->isVirtualTextTranslatorTranslatorEngineLoader) {
        vtexttranslatortranslatorengineloader->connectNotify(*signal);
    } else {
        ((VirtualTextTranslatorTranslatorEngineLoader*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void TextTranslator__TranslatorEngineLoader_SuperConnectNotify(TextTranslator__TranslatorEngineLoader* self, const QMetaMethod* signal) {
    auto* vtexttranslatortranslatorengineloader = dynamic_cast<VirtualTextTranslatorTranslatorEngineLoader*>(self);
    if (vtexttranslatortranslatorengineloader && vtexttranslatortranslatorengineloader->isVirtualTextTranslatorTranslatorEngineLoader) {
        vtexttranslatortranslatorengineloader->setTextTranslator__TranslatorEngineLoader_ConnectNotify_IsBase(true);
        vtexttranslatortranslatorengineloader->connectNotify(*signal);
    } else {
        ((VirtualTextTranslatorTranslatorEngineLoader*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorEngineLoader_OnConnectNotify(TextTranslator__TranslatorEngineLoader* self, intptr_t slot) {
    auto* vtexttranslatortranslatorengineloader = dynamic_cast<VirtualTextTranslatorTranslatorEngineLoader*>(self);
    if (vtexttranslatortranslatorengineloader && vtexttranslatortranslatorengineloader->isVirtualTextTranslatorTranslatorEngineLoader) {
        vtexttranslatortranslatorengineloader->setTextTranslator__TranslatorEngineLoader_ConnectNotify_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorEngineLoader::TextTranslator__TranslatorEngineLoader_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorEngineLoader_DisconnectNotify(TextTranslator__TranslatorEngineLoader* self, const QMetaMethod* signal) {
    auto* vtexttranslatortranslatorengineloader = dynamic_cast<VirtualTextTranslatorTranslatorEngineLoader*>(self);
    if (vtexttranslatortranslatorengineloader && vtexttranslatortranslatorengineloader->isVirtualTextTranslatorTranslatorEngineLoader) {
        vtexttranslatortranslatorengineloader->disconnectNotify(*signal);
    } else {
        ((VirtualTextTranslatorTranslatorEngineLoader*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void TextTranslator__TranslatorEngineLoader_SuperDisconnectNotify(TextTranslator__TranslatorEngineLoader* self, const QMetaMethod* signal) {
    auto* vtexttranslatortranslatorengineloader = dynamic_cast<VirtualTextTranslatorTranslatorEngineLoader*>(self);
    if (vtexttranslatortranslatorengineloader && vtexttranslatortranslatorengineloader->isVirtualTextTranslatorTranslatorEngineLoader) {
        vtexttranslatortranslatorengineloader->setTextTranslator__TranslatorEngineLoader_DisconnectNotify_IsBase(true);
        vtexttranslatortranslatorengineloader->disconnectNotify(*signal);
    } else {
        ((VirtualTextTranslatorTranslatorEngineLoader*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorEngineLoader_OnDisconnectNotify(TextTranslator__TranslatorEngineLoader* self, intptr_t slot) {
    auto* vtexttranslatortranslatorengineloader = dynamic_cast<VirtualTextTranslatorTranslatorEngineLoader*>(self);
    if (vtexttranslatortranslatorengineloader && vtexttranslatortranslatorengineloader->isVirtualTextTranslatorTranslatorEngineLoader) {
        vtexttranslatortranslatorengineloader->setTextTranslator__TranslatorEngineLoader_DisconnectNotify_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorEngineLoader::TextTranslator__TranslatorEngineLoader_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* TextTranslator__TranslatorEngineLoader_Sender(const TextTranslator__TranslatorEngineLoader* self) {
    auto* vtexttranslatortranslatorengineloader = const_cast<VirtualTextTranslatorTranslatorEngineLoader*>(dynamic_cast<const VirtualTextTranslatorTranslatorEngineLoader*>(self));
    if (vtexttranslatortranslatorengineloader && vtexttranslatortranslatorengineloader->isVirtualTextTranslatorTranslatorEngineLoader) {
        return vtexttranslatortranslatorengineloader->sender();
    } else {
        return ((VirtualTextTranslatorTranslatorEngineLoader*)self)->sender();
    }
}

// Base class handler implementation
QObject* TextTranslator__TranslatorEngineLoader_SuperSender(const TextTranslator__TranslatorEngineLoader* self) {
    auto* vtexttranslatortranslatorengineloader = const_cast<VirtualTextTranslatorTranslatorEngineLoader*>(dynamic_cast<const VirtualTextTranslatorTranslatorEngineLoader*>(self));
    if (vtexttranslatortranslatorengineloader && vtexttranslatortranslatorengineloader->isVirtualTextTranslatorTranslatorEngineLoader) {
        vtexttranslatortranslatorengineloader->setTextTranslator__TranslatorEngineLoader_Sender_IsBase(true);
        return vtexttranslatortranslatorengineloader->sender();
    } else {
        return ((VirtualTextTranslatorTranslatorEngineLoader*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorEngineLoader_OnSender(const TextTranslator__TranslatorEngineLoader* self, intptr_t slot) {
    auto* vtexttranslatortranslatorengineloader = const_cast<VirtualTextTranslatorTranslatorEngineLoader*>(dynamic_cast<const VirtualTextTranslatorTranslatorEngineLoader*>(self));
    if (vtexttranslatortranslatorengineloader && vtexttranslatortranslatorengineloader->isVirtualTextTranslatorTranslatorEngineLoader) {
        vtexttranslatortranslatorengineloader->setTextTranslator__TranslatorEngineLoader_Sender_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorEngineLoader::TextTranslator__TranslatorEngineLoader_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int TextTranslator__TranslatorEngineLoader_SenderSignalIndex(const TextTranslator__TranslatorEngineLoader* self) {
    auto* vtexttranslatortranslatorengineloader = const_cast<VirtualTextTranslatorTranslatorEngineLoader*>(dynamic_cast<const VirtualTextTranslatorTranslatorEngineLoader*>(self));
    if (vtexttranslatortranslatorengineloader && vtexttranslatortranslatorengineloader->isVirtualTextTranslatorTranslatorEngineLoader) {
        return vtexttranslatortranslatorengineloader->senderSignalIndex();
    } else {
        return ((VirtualTextTranslatorTranslatorEngineLoader*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int TextTranslator__TranslatorEngineLoader_SuperSenderSignalIndex(const TextTranslator__TranslatorEngineLoader* self) {
    auto* vtexttranslatortranslatorengineloader = const_cast<VirtualTextTranslatorTranslatorEngineLoader*>(dynamic_cast<const VirtualTextTranslatorTranslatorEngineLoader*>(self));
    if (vtexttranslatortranslatorengineloader && vtexttranslatortranslatorengineloader->isVirtualTextTranslatorTranslatorEngineLoader) {
        vtexttranslatortranslatorengineloader->setTextTranslator__TranslatorEngineLoader_SenderSignalIndex_IsBase(true);
        return vtexttranslatortranslatorengineloader->senderSignalIndex();
    } else {
        return ((VirtualTextTranslatorTranslatorEngineLoader*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorEngineLoader_OnSenderSignalIndex(const TextTranslator__TranslatorEngineLoader* self, intptr_t slot) {
    auto* vtexttranslatortranslatorengineloader = const_cast<VirtualTextTranslatorTranslatorEngineLoader*>(dynamic_cast<const VirtualTextTranslatorTranslatorEngineLoader*>(self));
    if (vtexttranslatortranslatorengineloader && vtexttranslatortranslatorengineloader->isVirtualTextTranslatorTranslatorEngineLoader) {
        vtexttranslatortranslatorengineloader->setTextTranslator__TranslatorEngineLoader_SenderSignalIndex_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorEngineLoader::TextTranslator__TranslatorEngineLoader_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int TextTranslator__TranslatorEngineLoader_Receivers(const TextTranslator__TranslatorEngineLoader* self, const char* signal) {
    auto* vtexttranslatortranslatorengineloader = const_cast<VirtualTextTranslatorTranslatorEngineLoader*>(dynamic_cast<const VirtualTextTranslatorTranslatorEngineLoader*>(self));
    if (vtexttranslatortranslatorengineloader && vtexttranslatortranslatorengineloader->isVirtualTextTranslatorTranslatorEngineLoader) {
        return vtexttranslatortranslatorengineloader->receivers(signal);
    } else {
        return ((VirtualTextTranslatorTranslatorEngineLoader*)self)->receivers(signal);
    }
}

// Base class handler implementation
int TextTranslator__TranslatorEngineLoader_SuperReceivers(const TextTranslator__TranslatorEngineLoader* self, const char* signal) {
    auto* vtexttranslatortranslatorengineloader = const_cast<VirtualTextTranslatorTranslatorEngineLoader*>(dynamic_cast<const VirtualTextTranslatorTranslatorEngineLoader*>(self));
    if (vtexttranslatortranslatorengineloader && vtexttranslatortranslatorengineloader->isVirtualTextTranslatorTranslatorEngineLoader) {
        vtexttranslatortranslatorengineloader->setTextTranslator__TranslatorEngineLoader_Receivers_IsBase(true);
        return vtexttranslatortranslatorengineloader->receivers(signal);
    } else {
        return ((VirtualTextTranslatorTranslatorEngineLoader*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorEngineLoader_OnReceivers(const TextTranslator__TranslatorEngineLoader* self, intptr_t slot) {
    auto* vtexttranslatortranslatorengineloader = const_cast<VirtualTextTranslatorTranslatorEngineLoader*>(dynamic_cast<const VirtualTextTranslatorTranslatorEngineLoader*>(self));
    if (vtexttranslatortranslatorengineloader && vtexttranslatortranslatorengineloader->isVirtualTextTranslatorTranslatorEngineLoader) {
        vtexttranslatortranslatorengineloader->setTextTranslator__TranslatorEngineLoader_Receivers_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorEngineLoader::TextTranslator__TranslatorEngineLoader_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextTranslator__TranslatorEngineLoader_IsSignalConnected(const TextTranslator__TranslatorEngineLoader* self, const QMetaMethod* signal) {
    auto* vtexttranslatortranslatorengineloader = const_cast<VirtualTextTranslatorTranslatorEngineLoader*>(dynamic_cast<const VirtualTextTranslatorTranslatorEngineLoader*>(self));
    if (vtexttranslatortranslatorengineloader && vtexttranslatortranslatorengineloader->isVirtualTextTranslatorTranslatorEngineLoader) {
        return vtexttranslatortranslatorengineloader->isSignalConnected(*signal);
    } else {
        return ((VirtualTextTranslatorTranslatorEngineLoader*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool TextTranslator__TranslatorEngineLoader_SuperIsSignalConnected(const TextTranslator__TranslatorEngineLoader* self, const QMetaMethod* signal) {
    auto* vtexttranslatortranslatorengineloader = const_cast<VirtualTextTranslatorTranslatorEngineLoader*>(dynamic_cast<const VirtualTextTranslatorTranslatorEngineLoader*>(self));
    if (vtexttranslatortranslatorengineloader && vtexttranslatortranslatorengineloader->isVirtualTextTranslatorTranslatorEngineLoader) {
        vtexttranslatortranslatorengineloader->setTextTranslator__TranslatorEngineLoader_IsSignalConnected_IsBase(true);
        return vtexttranslatortranslatorengineloader->isSignalConnected(*signal);
    } else {
        return ((VirtualTextTranslatorTranslatorEngineLoader*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorEngineLoader_OnIsSignalConnected(const TextTranslator__TranslatorEngineLoader* self, intptr_t slot) {
    auto* vtexttranslatortranslatorengineloader = const_cast<VirtualTextTranslatorTranslatorEngineLoader*>(dynamic_cast<const VirtualTextTranslatorTranslatorEngineLoader*>(self));
    if (vtexttranslatortranslatorengineloader && vtexttranslatortranslatorengineloader->isVirtualTextTranslatorTranslatorEngineLoader) {
        vtexttranslatortranslatorengineloader->setTextTranslator__TranslatorEngineLoader_IsSignalConnected_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorEngineLoader::TextTranslator__TranslatorEngineLoader_IsSignalConnected_Callback>(slot));
    }
}

void TextTranslator__TranslatorEngineLoader_Delete(TextTranslator__TranslatorEngineLoader* self) {
    delete self;
}
