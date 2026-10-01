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
    return (QMetaObject*)self->metaObject();
}

void* TextTranslator__TranslatorEngineClient_Metacast(TextTranslator__TranslatorEngineClient* self, const char* param1) {
    return self->qt_metacast(param1);
}

int TextTranslator__TranslatorEngineClient_Metacall(TextTranslator__TranslatorEngineClient* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string TextTranslator__TranslatorEngineClient_Tr(const char* s) {
    auto _ret = TextTranslator::TranslatorEngineClient::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string TextTranslator__TranslatorEngineClient_Name(const TextTranslator__TranslatorEngineClient* self) {
    auto _ret = self->name();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string TextTranslator__TranslatorEngineClient_TranslatedName(const TextTranslator__TranslatorEngineClient* self) {
    auto _ret = self->translatedName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

TextTranslator__TranslatorEnginePlugin* TextTranslator__TranslatorEngineClient_CreateTranslator(TextTranslator__TranslatorEngineClient* self) {
    return self->createTranslator();
}

libqt_map /* of int to libqt_string */ TextTranslator__TranslatorEngineClient_SupportedFromLanguages(TextTranslator__TranslatorEngineClient* self) {
    QMap<TextTranslator::TranslatorUtil::Language, QString> _ret = self->supportedFromLanguages();
    // Convert QMap<> from C++ memory to manually-managed C memory
    int* _karr = static_cast<int*>(malloc(sizeof(int) * _ret.size()));
    libqt_string* _varr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.size()));
    int _ctr = 0;
    for (auto _itr = _ret.keyValueBegin(); _itr != _ret.keyValueEnd(); ++_itr) {
        _karr[_ctr] = static_cast<int>(_itr->first);
        auto _mapval_ret = _itr->second;
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

libqt_map /* of int to libqt_string */ TextTranslator__TranslatorEngineClient_SupportedToLanguages(TextTranslator__TranslatorEngineClient* self) {
    QMap<TextTranslator::TranslatorUtil::Language, QString> _ret = self->supportedToLanguages();
    // Convert QMap<> from C++ memory to manually-managed C memory
    int* _karr = static_cast<int*>(malloc(sizeof(int) * _ret.size()));
    libqt_string* _varr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.size()));
    int _ctr = 0;
    for (auto _itr = _ret.keyValueBegin(); _itr != _ret.keyValueEnd(); ++_itr) {
        _karr[_ctr] = static_cast<int>(_itr->first);
        auto _mapval_ret = _itr->second;
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

void TextTranslator__TranslatorEngineClient_UpdateListLanguages(TextTranslator__TranslatorEngineClient* self) {
    self->updateListLanguages();
}

bool TextTranslator__TranslatorEngineClient_HasConfigurationDialog(const TextTranslator__TranslatorEngineClient* self) {
    return self->hasConfigurationDialog();
}

bool TextTranslator__TranslatorEngineClient_ShowConfigureDialog(TextTranslator__TranslatorEngineClient* self, QWidget* parentWidget) {
    return self->showConfigureDialog(parentWidget);
}

void TextTranslator__TranslatorEngineClient_GenerateToListFromCurrentToLanguage(TextTranslator__TranslatorEngineClient* self, const libqt_string languageCode) {
    QString languageCode_QString = QString::fromUtf8(languageCode.data, languageCode.len);
    self->generateToListFromCurrentToLanguage(languageCode_QString);
}

bool TextTranslator__TranslatorEngineClient_HasInvertSupport(const TextTranslator__TranslatorEngineClient* self) {
    return self->hasInvertSupport();
}

int TextTranslator__TranslatorEngineClient_EngineType(const TextTranslator__TranslatorEngineClient* self) {
    return static_cast<int>(self->engineType());
}

void TextTranslator__TranslatorEngineClient_ConfigureChanged(TextTranslator__TranslatorEngineClient* self) {
    self->configureChanged();
}

void TextTranslator__TranslatorEngineClient_Connect_ConfigureChanged(TextTranslator__TranslatorEngineClient* self, intptr_t slot) {
    void (*slotFunc)(TextTranslator__TranslatorEngineClient*) = reinterpret_cast<void (*)(TextTranslator__TranslatorEngineClient*)>(slot);
    TextTranslator::TranslatorEngineClient::connect(self,
                                                    static_cast<void (TextTranslator::TranslatorEngineClient::*)()>(&TextTranslator::TranslatorEngineClient::configureChanged),
                                                    [self, slotFunc]() {
                                                        slotFunc(self);
                                                    });
}

bool TextTranslator__TranslatorEngineClient_IsSupported(const TextTranslator__TranslatorEngineClient* self, int lang) {
    auto* vtexttranslator__translatorengineclient = dynamic_cast<const VirtualTextTranslatorTranslatorEngineClient*>(self);
    if (vtexttranslator__translatorengineclient) {
        return vtexttranslator__translatorengineclient->isSupported(static_cast<TextTranslator::TranslatorUtil::Language>(lang));
    }
    qFatal("Error: Protected method TextTranslator::TranslatorEngineClient::isSupported called without a directly constructed type");
}

libqt_string TextTranslator__TranslatorEngineClient_Tr2(const char* s, const char* c) {
    auto _ret = TextTranslator::TranslatorEngineClient::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string TextTranslator__TranslatorEngineClient_Tr3(const char* s, const char* c, int n) {
    auto _ret = TextTranslator::TranslatorEngineClient::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

// Base class handler implementation
QMetaObject* TextTranslator__TranslatorEngineClient_SuperMetaObject(const TextTranslator__TranslatorEngineClient* self) {
    return (QMetaObject*)self->TextTranslator::TranslatorEngineClient::metaObject();
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorEngineClient_OnMetaObject(TextTranslator__TranslatorEngineClient* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorengineclient = const_cast<VirtualTextTranslatorTranslatorEngineClient*>(dynamic_cast<const VirtualTextTranslatorTranslatorEngineClient*>(self)))
        vtexttranslatortranslatorengineclient->texttranslator__translatorengineclient_metaobject_callback = reinterpret_cast<VirtualTextTranslatorTranslatorEngineClient::TextTranslator__TranslatorEngineClient_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* TextTranslator__TranslatorEngineClient_SuperMetacast(TextTranslator__TranslatorEngineClient* self, const char* param1) {
    return self->TextTranslator::TranslatorEngineClient::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorEngineClient_OnMetacast(TextTranslator__TranslatorEngineClient* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorengineclient = dynamic_cast<VirtualTextTranslatorTranslatorEngineClient*>(self))
        vtexttranslatortranslatorengineclient->texttranslator__translatorengineclient_metacast_callback = reinterpret_cast<VirtualTextTranslatorTranslatorEngineClient::TextTranslator__TranslatorEngineClient_Metacast_Callback>(slot);
}

// Base class handler implementation
int TextTranslator__TranslatorEngineClient_SuperMetacall(TextTranslator__TranslatorEngineClient* self, int param1, int param2, void** param3) {
    return self->TextTranslator::TranslatorEngineClient::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorEngineClient_OnMetacall(TextTranslator__TranslatorEngineClient* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorengineclient = dynamic_cast<VirtualTextTranslatorTranslatorEngineClient*>(self))
        vtexttranslatortranslatorengineclient->texttranslator__translatorengineclient_metacall_callback = reinterpret_cast<VirtualTextTranslatorTranslatorEngineClient::TextTranslator__TranslatorEngineClient_Metacall_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorEngineClient_OnName(TextTranslator__TranslatorEngineClient* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorengineclient = const_cast<VirtualTextTranslatorTranslatorEngineClient*>(dynamic_cast<const VirtualTextTranslatorTranslatorEngineClient*>(self)))
        vtexttranslatortranslatorengineclient->texttranslator__translatorengineclient_name_callback = reinterpret_cast<VirtualTextTranslatorTranslatorEngineClient::TextTranslator__TranslatorEngineClient_Name_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorEngineClient_OnTranslatedName(TextTranslator__TranslatorEngineClient* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorengineclient = const_cast<VirtualTextTranslatorTranslatorEngineClient*>(dynamic_cast<const VirtualTextTranslatorTranslatorEngineClient*>(self)))
        vtexttranslatortranslatorengineclient->texttranslator__translatorengineclient_translatedname_callback = reinterpret_cast<VirtualTextTranslatorTranslatorEngineClient::TextTranslator__TranslatorEngineClient_TranslatedName_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorEngineClient_OnCreateTranslator(TextTranslator__TranslatorEngineClient* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorengineclient = dynamic_cast<VirtualTextTranslatorTranslatorEngineClient*>(self))
        vtexttranslatortranslatorengineclient->texttranslator__translatorengineclient_createtranslator_callback = reinterpret_cast<VirtualTextTranslatorTranslatorEngineClient::TextTranslator__TranslatorEngineClient_CreateTranslator_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorEngineClient_OnSupportedFromLanguages(TextTranslator__TranslatorEngineClient* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorengineclient = dynamic_cast<VirtualTextTranslatorTranslatorEngineClient*>(self))
        vtexttranslatortranslatorengineclient->texttranslator__translatorengineclient_supportedfromlanguages_callback = reinterpret_cast<VirtualTextTranslatorTranslatorEngineClient::TextTranslator__TranslatorEngineClient_SupportedFromLanguages_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorEngineClient_OnSupportedToLanguages(TextTranslator__TranslatorEngineClient* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorengineclient = dynamic_cast<VirtualTextTranslatorTranslatorEngineClient*>(self))
        vtexttranslatortranslatorengineclient->texttranslator__translatorengineclient_supportedtolanguages_callback = reinterpret_cast<VirtualTextTranslatorTranslatorEngineClient::TextTranslator__TranslatorEngineClient_SupportedToLanguages_Callback>(slot);
}

// Base class handler implementation
void TextTranslator__TranslatorEngineClient_SuperUpdateListLanguages(TextTranslator__TranslatorEngineClient* self) {
    self->TextTranslator::TranslatorEngineClient::updateListLanguages();
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorEngineClient_OnUpdateListLanguages(TextTranslator__TranslatorEngineClient* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorengineclient = dynamic_cast<VirtualTextTranslatorTranslatorEngineClient*>(self))
        vtexttranslatortranslatorengineclient->texttranslator__translatorengineclient_updatelistlanguages_callback = reinterpret_cast<VirtualTextTranslatorTranslatorEngineClient::TextTranslator__TranslatorEngineClient_UpdateListLanguages_Callback>(slot);
}

// Base class handler implementation
bool TextTranslator__TranslatorEngineClient_SuperHasConfigurationDialog(const TextTranslator__TranslatorEngineClient* self) {
    return self->TextTranslator::TranslatorEngineClient::hasConfigurationDialog();
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorEngineClient_OnHasConfigurationDialog(TextTranslator__TranslatorEngineClient* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorengineclient = const_cast<VirtualTextTranslatorTranslatorEngineClient*>(dynamic_cast<const VirtualTextTranslatorTranslatorEngineClient*>(self)))
        vtexttranslatortranslatorengineclient->texttranslator__translatorengineclient_hasconfigurationdialog_callback = reinterpret_cast<VirtualTextTranslatorTranslatorEngineClient::TextTranslator__TranslatorEngineClient_HasConfigurationDialog_Callback>(slot);
}

// Base class handler implementation
bool TextTranslator__TranslatorEngineClient_SuperShowConfigureDialog(TextTranslator__TranslatorEngineClient* self, QWidget* parentWidget) {
    return self->TextTranslator::TranslatorEngineClient::showConfigureDialog(parentWidget);
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorEngineClient_OnShowConfigureDialog(TextTranslator__TranslatorEngineClient* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorengineclient = dynamic_cast<VirtualTextTranslatorTranslatorEngineClient*>(self))
        vtexttranslatortranslatorengineclient->texttranslator__translatorengineclient_showconfiguredialog_callback = reinterpret_cast<VirtualTextTranslatorTranslatorEngineClient::TextTranslator__TranslatorEngineClient_ShowConfigureDialog_Callback>(slot);
}

// Base class handler implementation
void TextTranslator__TranslatorEngineClient_SuperGenerateToListFromCurrentToLanguage(TextTranslator__TranslatorEngineClient* self, const libqt_string languageCode) {
    QString languageCode_QString = QString::fromUtf8(languageCode.data, languageCode.len);
    self->TextTranslator::TranslatorEngineClient::generateToListFromCurrentToLanguage(languageCode_QString);
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorEngineClient_OnGenerateToListFromCurrentToLanguage(TextTranslator__TranslatorEngineClient* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorengineclient = dynamic_cast<VirtualTextTranslatorTranslatorEngineClient*>(self))
        vtexttranslatortranslatorengineclient->texttranslator__translatorengineclient_generatetolistfromcurrenttolanguage_callback = reinterpret_cast<VirtualTextTranslatorTranslatorEngineClient::TextTranslator__TranslatorEngineClient_GenerateToListFromCurrentToLanguage_Callback>(slot);
}

// Base class handler implementation
bool TextTranslator__TranslatorEngineClient_SuperHasInvertSupport(const TextTranslator__TranslatorEngineClient* self) {
    return self->TextTranslator::TranslatorEngineClient::hasInvertSupport();
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorEngineClient_OnHasInvertSupport(TextTranslator__TranslatorEngineClient* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorengineclient = const_cast<VirtualTextTranslatorTranslatorEngineClient*>(dynamic_cast<const VirtualTextTranslatorTranslatorEngineClient*>(self)))
        vtexttranslatortranslatorengineclient->texttranslator__translatorengineclient_hasinvertsupport_callback = reinterpret_cast<VirtualTextTranslatorTranslatorEngineClient::TextTranslator__TranslatorEngineClient_HasInvertSupport_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorEngineClient_OnEngineType(TextTranslator__TranslatorEngineClient* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorengineclient = const_cast<VirtualTextTranslatorTranslatorEngineClient*>(dynamic_cast<const VirtualTextTranslatorTranslatorEngineClient*>(self)))
        vtexttranslatortranslatorengineclient->texttranslator__translatorengineclient_enginetype_callback = reinterpret_cast<VirtualTextTranslatorTranslatorEngineClient::TextTranslator__TranslatorEngineClient_EngineType_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorEngineClient_OnIsSupported(TextTranslator__TranslatorEngineClient* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorengineclient = const_cast<VirtualTextTranslatorTranslatorEngineClient*>(dynamic_cast<const VirtualTextTranslatorTranslatorEngineClient*>(self)))
        vtexttranslatortranslatorengineclient->texttranslator__translatorengineclient_issupported_callback = reinterpret_cast<VirtualTextTranslatorTranslatorEngineClient::TextTranslator__TranslatorEngineClient_IsSupported_Callback>(slot);
}

// Derived class handler implementation
bool TextTranslator__TranslatorEngineClient_Event(TextTranslator__TranslatorEngineClient* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool TextTranslator__TranslatorEngineClient_SuperEvent(TextTranslator__TranslatorEngineClient* self, QEvent* event) {
    return self->TextTranslator::TranslatorEngineClient::event(event);
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorEngineClient_OnEvent(TextTranslator__TranslatorEngineClient* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorengineclient = dynamic_cast<VirtualTextTranslatorTranslatorEngineClient*>(self))
        vtexttranslatortranslatorengineclient->texttranslator__translatorengineclient_event_callback = reinterpret_cast<VirtualTextTranslatorTranslatorEngineClient::TextTranslator__TranslatorEngineClient_Event_Callback>(slot);
}

// Derived class handler implementation
bool TextTranslator__TranslatorEngineClient_EventFilter(TextTranslator__TranslatorEngineClient* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool TextTranslator__TranslatorEngineClient_SuperEventFilter(TextTranslator__TranslatorEngineClient* self, QObject* watched, QEvent* event) {
    return self->TextTranslator::TranslatorEngineClient::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorEngineClient_OnEventFilter(TextTranslator__TranslatorEngineClient* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorengineclient = dynamic_cast<VirtualTextTranslatorTranslatorEngineClient*>(self))
        vtexttranslatortranslatorengineclient->texttranslator__translatorengineclient_eventfilter_callback = reinterpret_cast<VirtualTextTranslatorTranslatorEngineClient::TextTranslator__TranslatorEngineClient_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void TextTranslator__TranslatorEngineClient_TimerEvent(TextTranslator__TranslatorEngineClient* self, QTimerEvent* event) {
    auto* vtexttranslatortranslatorengineclient = dynamic_cast<VirtualTextTranslatorTranslatorEngineClient*>(self);
    if (vtexttranslatortranslatorengineclient) {
        vtexttranslatortranslatorengineclient->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorEngineClient::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextTranslator__TranslatorEngineClient_SuperTimerEvent(TextTranslator__TranslatorEngineClient* self, QTimerEvent* event) {
    if (auto* vtexttranslatortranslatorengineclient = dynamic_cast<VirtualTextTranslatorTranslatorEngineClient*>(self)) {
        vtexttranslatortranslatorengineclient->TextTranslator::TranslatorEngineClient::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorEngineClient::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorEngineClient_OnTimerEvent(TextTranslator__TranslatorEngineClient* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorengineclient = dynamic_cast<VirtualTextTranslatorTranslatorEngineClient*>(self))
        vtexttranslatortranslatorengineclient->texttranslator__translatorengineclient_timerevent_callback = reinterpret_cast<VirtualTextTranslatorTranslatorEngineClient::TextTranslator__TranslatorEngineClient_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void TextTranslator__TranslatorEngineClient_ChildEvent(TextTranslator__TranslatorEngineClient* self, QChildEvent* event) {
    auto* vtexttranslatortranslatorengineclient = dynamic_cast<VirtualTextTranslatorTranslatorEngineClient*>(self);
    if (vtexttranslatortranslatorengineclient) {
        vtexttranslatortranslatorengineclient->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorEngineClient::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextTranslator__TranslatorEngineClient_SuperChildEvent(TextTranslator__TranslatorEngineClient* self, QChildEvent* event) {
    if (auto* vtexttranslatortranslatorengineclient = dynamic_cast<VirtualTextTranslatorTranslatorEngineClient*>(self)) {
        vtexttranslatortranslatorengineclient->TextTranslator::TranslatorEngineClient::childEvent(event);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorEngineClient::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorEngineClient_OnChildEvent(TextTranslator__TranslatorEngineClient* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorengineclient = dynamic_cast<VirtualTextTranslatorTranslatorEngineClient*>(self))
        vtexttranslatortranslatorengineclient->texttranslator__translatorengineclient_childevent_callback = reinterpret_cast<VirtualTextTranslatorTranslatorEngineClient::TextTranslator__TranslatorEngineClient_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void TextTranslator__TranslatorEngineClient_CustomEvent(TextTranslator__TranslatorEngineClient* self, QEvent* event) {
    auto* vtexttranslatortranslatorengineclient = dynamic_cast<VirtualTextTranslatorTranslatorEngineClient*>(self);
    if (vtexttranslatortranslatorengineclient) {
        vtexttranslatortranslatorengineclient->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorEngineClient::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextTranslator__TranslatorEngineClient_SuperCustomEvent(TextTranslator__TranslatorEngineClient* self, QEvent* event) {
    if (auto* vtexttranslatortranslatorengineclient = dynamic_cast<VirtualTextTranslatorTranslatorEngineClient*>(self)) {
        vtexttranslatortranslatorengineclient->TextTranslator::TranslatorEngineClient::customEvent(event);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorEngineClient::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorEngineClient_OnCustomEvent(TextTranslator__TranslatorEngineClient* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorengineclient = dynamic_cast<VirtualTextTranslatorTranslatorEngineClient*>(self))
        vtexttranslatortranslatorengineclient->texttranslator__translatorengineclient_customevent_callback = reinterpret_cast<VirtualTextTranslatorTranslatorEngineClient::TextTranslator__TranslatorEngineClient_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void TextTranslator__TranslatorEngineClient_ConnectNotify(TextTranslator__TranslatorEngineClient* self, const QMetaMethod* signal) {
    auto* vtexttranslatortranslatorengineclient = dynamic_cast<VirtualTextTranslatorTranslatorEngineClient*>(self);
    if (vtexttranslatortranslatorengineclient) {
        vtexttranslatortranslatorengineclient->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorEngineClient::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void TextTranslator__TranslatorEngineClient_SuperConnectNotify(TextTranslator__TranslatorEngineClient* self, const QMetaMethod* signal) {
    if (auto* vtexttranslatortranslatorengineclient = dynamic_cast<VirtualTextTranslatorTranslatorEngineClient*>(self)) {
        vtexttranslatortranslatorengineclient->TextTranslator::TranslatorEngineClient::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorEngineClient::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorEngineClient_OnConnectNotify(TextTranslator__TranslatorEngineClient* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorengineclient = dynamic_cast<VirtualTextTranslatorTranslatorEngineClient*>(self))
        vtexttranslatortranslatorengineclient->texttranslator__translatorengineclient_connectnotify_callback = reinterpret_cast<VirtualTextTranslatorTranslatorEngineClient::TextTranslator__TranslatorEngineClient_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void TextTranslator__TranslatorEngineClient_DisconnectNotify(TextTranslator__TranslatorEngineClient* self, const QMetaMethod* signal) {
    auto* vtexttranslatortranslatorengineclient = dynamic_cast<VirtualTextTranslatorTranslatorEngineClient*>(self);
    if (vtexttranslatortranslatorengineclient) {
        vtexttranslatortranslatorengineclient->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorEngineClient::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void TextTranslator__TranslatorEngineClient_SuperDisconnectNotify(TextTranslator__TranslatorEngineClient* self, const QMetaMethod* signal) {
    if (auto* vtexttranslatortranslatorengineclient = dynamic_cast<VirtualTextTranslatorTranslatorEngineClient*>(self)) {
        vtexttranslatortranslatorengineclient->TextTranslator::TranslatorEngineClient::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorEngineClient::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorEngineClient_OnDisconnectNotify(TextTranslator__TranslatorEngineClient* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorengineclient = dynamic_cast<VirtualTextTranslatorTranslatorEngineClient*>(self))
        vtexttranslatortranslatorengineclient->texttranslator__translatorengineclient_disconnectnotify_callback = reinterpret_cast<VirtualTextTranslatorTranslatorEngineClient::TextTranslator__TranslatorEngineClient_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
libqt_map /* of int to libqt_string */ TextTranslator__TranslatorEngineClient_FillLanguages(TextTranslator__TranslatorEngineClient* self) {
    if (auto* vtexttranslatortranslatorengineclient = dynamic_cast<VirtualTextTranslatorTranslatorEngineClient*>(self)) {
        QMap<TextTranslator::TranslatorUtil::Language, QString> _ret = vtexttranslatortranslatorengineclient->VirtualTextTranslatorTranslatorEngineClient::fillLanguages();
        // Convert QMap<> from C++ memory to manually-managed C memory
        int* _karr = static_cast<int*>(malloc(sizeof(int) * _ret.size()));
        libqt_string* _varr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.size()));
        int _ctr = 0;
        for (auto _itr = _ret.keyValueBegin(); _itr != _ret.keyValueEnd(); ++_itr) {
            _karr[_ctr] = static_cast<int>(_itr->first);
            auto _mapval_ret = _itr->second;
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
    } else
        qFatal("Error: Protected method TextTranslator::TranslatorEngineClient::fillLanguages called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* TextTranslator__TranslatorEngineClient_Sender(const TextTranslator__TranslatorEngineClient* self) {
    if (auto* vtexttranslatortranslatorengineclient = const_cast<VirtualTextTranslatorTranslatorEngineClient*>(dynamic_cast<const VirtualTextTranslatorTranslatorEngineClient*>(self))) {
        return vtexttranslatortranslatorengineclient->VirtualTextTranslatorTranslatorEngineClient::sender();
    } else
        qFatal("Error: Protected method TextTranslator::TranslatorEngineClient::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int TextTranslator__TranslatorEngineClient_SenderSignalIndex(const TextTranslator__TranslatorEngineClient* self) {
    if (auto* vtexttranslatortranslatorengineclient = const_cast<VirtualTextTranslatorTranslatorEngineClient*>(dynamic_cast<const VirtualTextTranslatorTranslatorEngineClient*>(self))) {
        return vtexttranslatortranslatorengineclient->VirtualTextTranslatorTranslatorEngineClient::senderSignalIndex();
    } else
        qFatal("Error: Protected method TextTranslator::TranslatorEngineClient::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int TextTranslator__TranslatorEngineClient_Receivers(const TextTranslator__TranslatorEngineClient* self, const char* signal) {
    if (auto* vtexttranslatortranslatorengineclient = const_cast<VirtualTextTranslatorTranslatorEngineClient*>(dynamic_cast<const VirtualTextTranslatorTranslatorEngineClient*>(self))) {
        return vtexttranslatortranslatorengineclient->VirtualTextTranslatorTranslatorEngineClient::receivers(signal);
    } else
        qFatal("Error: Protected method TextTranslator::TranslatorEngineClient::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool TextTranslator__TranslatorEngineClient_IsSignalConnected(const TextTranslator__TranslatorEngineClient* self, const QMetaMethod* signal) {
    if (auto* vtexttranslatortranslatorengineclient = const_cast<VirtualTextTranslatorTranslatorEngineClient*>(dynamic_cast<const VirtualTextTranslatorTranslatorEngineClient*>(self))) {
        return vtexttranslatortranslatorengineclient->VirtualTextTranslatorTranslatorEngineClient::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method TextTranslator::TranslatorEngineClient::isSignalConnected called without a directly constructed type");
}

void TextTranslator__TranslatorEngineClient_Delete(TextTranslator__TranslatorEngineClient* self) {
    delete self;
}
