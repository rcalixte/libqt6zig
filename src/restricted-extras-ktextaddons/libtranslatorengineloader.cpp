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
    return (QMetaObject*)self->metaObject();
}

void* TextTranslator__TranslatorEngineLoader_Metacast(TextTranslator__TranslatorEngineLoader* self, const char* param1) {
    return self->qt_metacast(param1);
}

int TextTranslator__TranslatorEngineLoader_Metacall(TextTranslator__TranslatorEngineLoader* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string TextTranslator__TranslatorEngineLoader_Tr(const char* s) {
    auto _ret = TextTranslator::TranslatorEngineLoader::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
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
        auto _mapkey_ret = _itr->first;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _mapkey_b = _mapkey_ret.toUtf8();
        libqt_string _mapkey_str;
        _mapkey_str.len = _mapkey_b.length();
        _mapkey_str.data = static_cast<const char*>(malloc(_mapkey_str.len + 1));
        memcpy((void*)_mapkey_str.data, _mapkey_b.data(), _mapkey_str.len);
        ((char*)_mapkey_str.data)[_mapkey_str.len] = '\0';
        _karr[_ctr] = _mapkey_str;
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

libqt_string TextTranslator__TranslatorEngineLoader_CurrentPluginName(const TextTranslator__TranslatorEngineLoader* self, const libqt_string key) {
    QString key_QString = QString::fromUtf8(key.data, key.len);
    auto _ret = self->currentPluginName(key_QString);
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

libqt_map /* of int to libqt_string */ TextTranslator__TranslatorEngineLoader_SupportedToLanguages(const TextTranslator__TranslatorEngineLoader* self, const libqt_string clientName) {
    QString clientName_QString = QString::fromUtf8(clientName.data, clientName.len);
    QMap<TextTranslator::TranslatorUtil::Language, QString> _ret = self->supportedToLanguages(clientName_QString);
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

bool TextTranslator__TranslatorEngineLoader_HasConfigurationDialog(const TextTranslator__TranslatorEngineLoader* self, const libqt_string clientName) {
    QString clientName_QString = QString::fromUtf8(clientName.data, clientName.len);
    return self->hasConfigurationDialog(clientName_QString);
}

libqt_string TextTranslator__TranslatorEngineLoader_FallbackFirstEngine(const TextTranslator__TranslatorEngineLoader* self) {
    auto _ret = self->fallbackFirstEngine();
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
    TextTranslator::TranslatorEngineLoader::connect(self,
                                                    static_cast<void (TextTranslator::TranslatorEngineLoader::*)()>(&TextTranslator::TranslatorEngineLoader::loadingTranslatorFailed),
                                                    [self, slotFunc]() {
                                                        slotFunc(self);
                                                    });
}

libqt_string TextTranslator__TranslatorEngineLoader_Tr2(const char* s, const char* c) {
    auto _ret = TextTranslator::TranslatorEngineLoader::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string TextTranslator__TranslatorEngineLoader_Tr3(const char* s, const char* c, int n) {
    auto _ret = TextTranslator::TranslatorEngineLoader::tr(s, c, static_cast<int>(n));
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
QMetaObject* TextTranslator__TranslatorEngineLoader_SuperMetaObject(const TextTranslator__TranslatorEngineLoader* self) {
    return (QMetaObject*)self->TextTranslator::TranslatorEngineLoader::metaObject();
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorEngineLoader_OnMetaObject(TextTranslator__TranslatorEngineLoader* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorengineloader = const_cast<VirtualTextTranslatorTranslatorEngineLoader*>(dynamic_cast<const VirtualTextTranslatorTranslatorEngineLoader*>(self)))
        vtexttranslatortranslatorengineloader->texttranslator__translatorengineloader_metaobject_callback = reinterpret_cast<VirtualTextTranslatorTranslatorEngineLoader::TextTranslator__TranslatorEngineLoader_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* TextTranslator__TranslatorEngineLoader_SuperMetacast(TextTranslator__TranslatorEngineLoader* self, const char* param1) {
    return self->TextTranslator::TranslatorEngineLoader::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorEngineLoader_OnMetacast(TextTranslator__TranslatorEngineLoader* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorengineloader = dynamic_cast<VirtualTextTranslatorTranslatorEngineLoader*>(self))
        vtexttranslatortranslatorengineloader->texttranslator__translatorengineloader_metacast_callback = reinterpret_cast<VirtualTextTranslatorTranslatorEngineLoader::TextTranslator__TranslatorEngineLoader_Metacast_Callback>(slot);
}

// Base class handler implementation
int TextTranslator__TranslatorEngineLoader_SuperMetacall(TextTranslator__TranslatorEngineLoader* self, int param1, int param2, void** param3) {
    return self->TextTranslator::TranslatorEngineLoader::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorEngineLoader_OnMetacall(TextTranslator__TranslatorEngineLoader* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorengineloader = dynamic_cast<VirtualTextTranslatorTranslatorEngineLoader*>(self))
        vtexttranslatortranslatorengineloader->texttranslator__translatorengineloader_metacall_callback = reinterpret_cast<VirtualTextTranslatorTranslatorEngineLoader::TextTranslator__TranslatorEngineLoader_Metacall_Callback>(slot);
}

// Derived class handler implementation
bool TextTranslator__TranslatorEngineLoader_Event(TextTranslator__TranslatorEngineLoader* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool TextTranslator__TranslatorEngineLoader_SuperEvent(TextTranslator__TranslatorEngineLoader* self, QEvent* event) {
    return self->TextTranslator::TranslatorEngineLoader::event(event);
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorEngineLoader_OnEvent(TextTranslator__TranslatorEngineLoader* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorengineloader = dynamic_cast<VirtualTextTranslatorTranslatorEngineLoader*>(self))
        vtexttranslatortranslatorengineloader->texttranslator__translatorengineloader_event_callback = reinterpret_cast<VirtualTextTranslatorTranslatorEngineLoader::TextTranslator__TranslatorEngineLoader_Event_Callback>(slot);
}

// Derived class handler implementation
bool TextTranslator__TranslatorEngineLoader_EventFilter(TextTranslator__TranslatorEngineLoader* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool TextTranslator__TranslatorEngineLoader_SuperEventFilter(TextTranslator__TranslatorEngineLoader* self, QObject* watched, QEvent* event) {
    return self->TextTranslator::TranslatorEngineLoader::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorEngineLoader_OnEventFilter(TextTranslator__TranslatorEngineLoader* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorengineloader = dynamic_cast<VirtualTextTranslatorTranslatorEngineLoader*>(self))
        vtexttranslatortranslatorengineloader->texttranslator__translatorengineloader_eventfilter_callback = reinterpret_cast<VirtualTextTranslatorTranslatorEngineLoader::TextTranslator__TranslatorEngineLoader_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void TextTranslator__TranslatorEngineLoader_TimerEvent(TextTranslator__TranslatorEngineLoader* self, QTimerEvent* event) {
    auto* vtexttranslatortranslatorengineloader = dynamic_cast<VirtualTextTranslatorTranslatorEngineLoader*>(self);
    if (vtexttranslatortranslatorengineloader) {
        vtexttranslatortranslatorengineloader->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorEngineLoader::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextTranslator__TranslatorEngineLoader_SuperTimerEvent(TextTranslator__TranslatorEngineLoader* self, QTimerEvent* event) {
    if (auto* vtexttranslatortranslatorengineloader = dynamic_cast<VirtualTextTranslatorTranslatorEngineLoader*>(self)) {
        vtexttranslatortranslatorengineloader->TextTranslator::TranslatorEngineLoader::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorEngineLoader::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorEngineLoader_OnTimerEvent(TextTranslator__TranslatorEngineLoader* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorengineloader = dynamic_cast<VirtualTextTranslatorTranslatorEngineLoader*>(self))
        vtexttranslatortranslatorengineloader->texttranslator__translatorengineloader_timerevent_callback = reinterpret_cast<VirtualTextTranslatorTranslatorEngineLoader::TextTranslator__TranslatorEngineLoader_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void TextTranslator__TranslatorEngineLoader_ChildEvent(TextTranslator__TranslatorEngineLoader* self, QChildEvent* event) {
    auto* vtexttranslatortranslatorengineloader = dynamic_cast<VirtualTextTranslatorTranslatorEngineLoader*>(self);
    if (vtexttranslatortranslatorengineloader) {
        vtexttranslatortranslatorengineloader->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorEngineLoader::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextTranslator__TranslatorEngineLoader_SuperChildEvent(TextTranslator__TranslatorEngineLoader* self, QChildEvent* event) {
    if (auto* vtexttranslatortranslatorengineloader = dynamic_cast<VirtualTextTranslatorTranslatorEngineLoader*>(self)) {
        vtexttranslatortranslatorengineloader->TextTranslator::TranslatorEngineLoader::childEvent(event);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorEngineLoader::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorEngineLoader_OnChildEvent(TextTranslator__TranslatorEngineLoader* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorengineloader = dynamic_cast<VirtualTextTranslatorTranslatorEngineLoader*>(self))
        vtexttranslatortranslatorengineloader->texttranslator__translatorengineloader_childevent_callback = reinterpret_cast<VirtualTextTranslatorTranslatorEngineLoader::TextTranslator__TranslatorEngineLoader_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void TextTranslator__TranslatorEngineLoader_CustomEvent(TextTranslator__TranslatorEngineLoader* self, QEvent* event) {
    auto* vtexttranslatortranslatorengineloader = dynamic_cast<VirtualTextTranslatorTranslatorEngineLoader*>(self);
    if (vtexttranslatortranslatorengineloader) {
        vtexttranslatortranslatorengineloader->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorEngineLoader::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextTranslator__TranslatorEngineLoader_SuperCustomEvent(TextTranslator__TranslatorEngineLoader* self, QEvent* event) {
    if (auto* vtexttranslatortranslatorengineloader = dynamic_cast<VirtualTextTranslatorTranslatorEngineLoader*>(self)) {
        vtexttranslatortranslatorengineloader->TextTranslator::TranslatorEngineLoader::customEvent(event);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorEngineLoader::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorEngineLoader_OnCustomEvent(TextTranslator__TranslatorEngineLoader* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorengineloader = dynamic_cast<VirtualTextTranslatorTranslatorEngineLoader*>(self))
        vtexttranslatortranslatorengineloader->texttranslator__translatorengineloader_customevent_callback = reinterpret_cast<VirtualTextTranslatorTranslatorEngineLoader::TextTranslator__TranslatorEngineLoader_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void TextTranslator__TranslatorEngineLoader_ConnectNotify(TextTranslator__TranslatorEngineLoader* self, const QMetaMethod* signal) {
    auto* vtexttranslatortranslatorengineloader = dynamic_cast<VirtualTextTranslatorTranslatorEngineLoader*>(self);
    if (vtexttranslatortranslatorengineloader) {
        vtexttranslatortranslatorengineloader->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorEngineLoader::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void TextTranslator__TranslatorEngineLoader_SuperConnectNotify(TextTranslator__TranslatorEngineLoader* self, const QMetaMethod* signal) {
    if (auto* vtexttranslatortranslatorengineloader = dynamic_cast<VirtualTextTranslatorTranslatorEngineLoader*>(self)) {
        vtexttranslatortranslatorengineloader->TextTranslator::TranslatorEngineLoader::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorEngineLoader::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorEngineLoader_OnConnectNotify(TextTranslator__TranslatorEngineLoader* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorengineloader = dynamic_cast<VirtualTextTranslatorTranslatorEngineLoader*>(self))
        vtexttranslatortranslatorengineloader->texttranslator__translatorengineloader_connectnotify_callback = reinterpret_cast<VirtualTextTranslatorTranslatorEngineLoader::TextTranslator__TranslatorEngineLoader_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void TextTranslator__TranslatorEngineLoader_DisconnectNotify(TextTranslator__TranslatorEngineLoader* self, const QMetaMethod* signal) {
    auto* vtexttranslatortranslatorengineloader = dynamic_cast<VirtualTextTranslatorTranslatorEngineLoader*>(self);
    if (vtexttranslatortranslatorengineloader) {
        vtexttranslatortranslatorengineloader->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorEngineLoader::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void TextTranslator__TranslatorEngineLoader_SuperDisconnectNotify(TextTranslator__TranslatorEngineLoader* self, const QMetaMethod* signal) {
    if (auto* vtexttranslatortranslatorengineloader = dynamic_cast<VirtualTextTranslatorTranslatorEngineLoader*>(self)) {
        vtexttranslatortranslatorengineloader->TextTranslator::TranslatorEngineLoader::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorEngineLoader::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorEngineLoader_OnDisconnectNotify(TextTranslator__TranslatorEngineLoader* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorengineloader = dynamic_cast<VirtualTextTranslatorTranslatorEngineLoader*>(self))
        vtexttranslatortranslatorengineloader->texttranslator__translatorengineloader_disconnectnotify_callback = reinterpret_cast<VirtualTextTranslatorTranslatorEngineLoader::TextTranslator__TranslatorEngineLoader_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* TextTranslator__TranslatorEngineLoader_Sender(const TextTranslator__TranslatorEngineLoader* self) {
    if (auto* vtexttranslatortranslatorengineloader = const_cast<VirtualTextTranslatorTranslatorEngineLoader*>(dynamic_cast<const VirtualTextTranslatorTranslatorEngineLoader*>(self))) {
        return vtexttranslatortranslatorengineloader->VirtualTextTranslatorTranslatorEngineLoader::sender();
    } else
        qFatal("Error: Protected method TextTranslator::TranslatorEngineLoader::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int TextTranslator__TranslatorEngineLoader_SenderSignalIndex(const TextTranslator__TranslatorEngineLoader* self) {
    if (auto* vtexttranslatortranslatorengineloader = const_cast<VirtualTextTranslatorTranslatorEngineLoader*>(dynamic_cast<const VirtualTextTranslatorTranslatorEngineLoader*>(self))) {
        return vtexttranslatortranslatorengineloader->VirtualTextTranslatorTranslatorEngineLoader::senderSignalIndex();
    } else
        qFatal("Error: Protected method TextTranslator::TranslatorEngineLoader::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int TextTranslator__TranslatorEngineLoader_Receivers(const TextTranslator__TranslatorEngineLoader* self, const char* signal) {
    if (auto* vtexttranslatortranslatorengineloader = const_cast<VirtualTextTranslatorTranslatorEngineLoader*>(dynamic_cast<const VirtualTextTranslatorTranslatorEngineLoader*>(self))) {
        return vtexttranslatortranslatorengineloader->VirtualTextTranslatorTranslatorEngineLoader::receivers(signal);
    } else
        qFatal("Error: Protected method TextTranslator::TranslatorEngineLoader::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool TextTranslator__TranslatorEngineLoader_IsSignalConnected(const TextTranslator__TranslatorEngineLoader* self, const QMetaMethod* signal) {
    if (auto* vtexttranslatortranslatorengineloader = const_cast<VirtualTextTranslatorTranslatorEngineLoader*>(dynamic_cast<const VirtualTextTranslatorTranslatorEngineLoader*>(self))) {
        return vtexttranslatortranslatorengineloader->VirtualTextTranslatorTranslatorEngineLoader::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method TextTranslator::TranslatorEngineLoader::isSignalConnected called without a directly constructed type");
}

void TextTranslator__TranslatorEngineLoader_Delete(TextTranslator__TranslatorEngineLoader* self) {
    delete self;
}
