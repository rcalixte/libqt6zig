#include <QAbstractListModel>
#include <QChildEvent>
#include <QEvent>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QTimerEvent>
#define WORKAROUND_INNER_CLASS_DEFINITION_Sonnet__Settings
#include <settings.h>
#include "libsettings.h"
#include "libsettings.hxx"

Sonnet__Settings* Sonnet__Settings_new() {
    return new VirtualSonnetSettings();
}

Sonnet__Settings* Sonnet__Settings_new2(QObject* parent) {
    return new VirtualSonnetSettings(parent);
}

QMetaObject* Sonnet__Settings_MetaObject(const Sonnet__Settings* self) {
    return (QMetaObject*)self->metaObject();
}

void* Sonnet__Settings_Metacast(Sonnet__Settings* self, const char* param1) {
    return self->qt_metacast(param1);
}

int Sonnet__Settings_Metacall(Sonnet__Settings* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string Sonnet__Settings_Tr(const char* s) {
    auto _ret = Sonnet::Settings::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void Sonnet__Settings_SetDefaultLanguage(Sonnet__Settings* self, const libqt_string lang) {
    QString lang_QString = QString::fromUtf8(lang.data, lang.len);
    self->setDefaultLanguage(lang_QString);
}

libqt_string Sonnet__Settings_DefaultLanguage(const Sonnet__Settings* self) {
    auto _ret = self->defaultLanguage();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void Sonnet__Settings_SetPreferredLanguages(Sonnet__Settings* self, const libqt_list /* of libqt_string */ lang) {
    QList<QString> lang_QList;
    lang_QList.reserve(lang.len);
    libqt_string* lang_arr = static_cast<libqt_string*>(lang.data);
    for (size_t i = 0; i < lang.len; ++i) {
        QString lang_arr_i_QString = QString::fromUtf8(lang_arr[i].data, lang_arr[i].len);
        lang_QList.push_back(lang_arr_i_QString);
    }
    self->setPreferredLanguages(lang_QList);
}

libqt_list /* of libqt_string */ Sonnet__Settings_PreferredLanguages(const Sonnet__Settings* self) {
    QList<QString> _ret = self->preferredLanguages();
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        auto _lv_ret = _ret[i];
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

void Sonnet__Settings_SetDefaultClient(Sonnet__Settings* self, const libqt_string client) {
    QString client_QString = QString::fromUtf8(client.data, client.len);
    self->setDefaultClient(client_QString);
}

libqt_string Sonnet__Settings_DefaultClient(const Sonnet__Settings* self) {
    auto _ret = self->defaultClient();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void Sonnet__Settings_SetSkipUppercase(Sonnet__Settings* self, bool skipUppercase) {
    self->setSkipUppercase(skipUppercase);
}

bool Sonnet__Settings_SkipUppercase(const Sonnet__Settings* self) {
    return self->skipUppercase();
}

void Sonnet__Settings_SetAutodetectLanguage(Sonnet__Settings* self, bool autodetectLanguage) {
    self->setAutodetectLanguage(autodetectLanguage);
}

bool Sonnet__Settings_AutodetectLanguage(const Sonnet__Settings* self) {
    return self->autodetectLanguage();
}

void Sonnet__Settings_SetSkipRunTogether(Sonnet__Settings* self, bool skipRunTogether) {
    self->setSkipRunTogether(skipRunTogether);
}

bool Sonnet__Settings_SkipRunTogether(const Sonnet__Settings* self) {
    return self->skipRunTogether();
}

void Sonnet__Settings_SetBackgroundCheckerEnabled(Sonnet__Settings* self, bool backgroundCheckerEnabled) {
    self->setBackgroundCheckerEnabled(backgroundCheckerEnabled);
}

bool Sonnet__Settings_BackgroundCheckerEnabled(const Sonnet__Settings* self) {
    return self->backgroundCheckerEnabled();
}

void Sonnet__Settings_SetCheckerEnabledByDefault(Sonnet__Settings* self, bool checkerEnabledByDefault) {
    self->setCheckerEnabledByDefault(checkerEnabledByDefault);
}

bool Sonnet__Settings_CheckerEnabledByDefault(const Sonnet__Settings* self) {
    return self->checkerEnabledByDefault();
}

void Sonnet__Settings_SetCurrentIgnoreList(Sonnet__Settings* self, const libqt_list /* of libqt_string */ ignores) {
    QList<QString> ignores_QList;
    ignores_QList.reserve(ignores.len);
    libqt_string* ignores_arr = static_cast<libqt_string*>(ignores.data);
    for (size_t i = 0; i < ignores.len; ++i) {
        QString ignores_arr_i_QString = QString::fromUtf8(ignores_arr[i].data, ignores_arr[i].len);
        ignores_QList.push_back(ignores_arr_i_QString);
    }
    self->setCurrentIgnoreList(ignores_QList);
}

libqt_list /* of libqt_string */ Sonnet__Settings_CurrentIgnoreList(const Sonnet__Settings* self) {
    QList<QString> _ret = self->currentIgnoreList();
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        auto _lv_ret = _ret[i];
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

libqt_list /* of libqt_string */ Sonnet__Settings_Clients(const Sonnet__Settings* self) {
    QList<QString> _ret = self->clients();
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        auto _lv_ret = _ret[i];
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

bool Sonnet__Settings_Modified(const Sonnet__Settings* self) {
    return self->modified();
}

QAbstractListModel* Sonnet__Settings_DictionaryModel(Sonnet__Settings* self) {
    return self->dictionaryModel();
}

void Sonnet__Settings_Save(Sonnet__Settings* self) {
    self->save();
}

libqt_list /* of libqt_string */ Sonnet__Settings_DefaultIgnoreList() {
    QList<QString> _ret = Sonnet::Settings::defaultIgnoreList();
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        auto _lv_ret = _ret[i];
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

bool Sonnet__Settings_DefaultSkipUppercase() {
    return Sonnet::Settings::defaultSkipUppercase();
}

bool Sonnet__Settings_DefaultAutodetectLanguage() {
    return Sonnet::Settings::defaultAutodetectLanguage();
}

bool Sonnet__Settings_DefaultBackgroundCheckerEnabled() {
    return Sonnet::Settings::defaultBackgroundCheckerEnabled();
}

bool Sonnet__Settings_DefaultCheckerEnabledByDefault() {
    return Sonnet::Settings::defaultCheckerEnabledByDefault();
}

bool Sonnet__Settings_DefauktSkipRunTogether() {
    return Sonnet::Settings::defauktSkipRunTogether();
}

libqt_string Sonnet__Settings_DefaultDefaultLanguage() {
    auto _ret = Sonnet::Settings::defaultDefaultLanguage();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_list /* of libqt_string */ Sonnet__Settings_DefaultPreferredLanguages() {
    QList<QString> _ret = Sonnet::Settings::defaultPreferredLanguages();
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        auto _lv_ret = _ret[i];
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

void Sonnet__Settings_SkipUppercaseChanged(Sonnet__Settings* self) {
    self->skipUppercaseChanged();
}

void Sonnet__Settings_Connect_SkipUppercaseChanged(Sonnet__Settings* self, intptr_t slot) {
    void (*slotFunc)(Sonnet__Settings*) = reinterpret_cast<void (*)(Sonnet__Settings*)>(slot);
    Sonnet::Settings::connect(self,
                              static_cast<void (Sonnet::Settings::*)()>(&Sonnet::Settings::skipUppercaseChanged),
                              [self, slotFunc]() {
                                  slotFunc(self);
                              });
}

void Sonnet__Settings_AutodetectLanguageChanged(Sonnet__Settings* self) {
    self->autodetectLanguageChanged();
}

void Sonnet__Settings_Connect_AutodetectLanguageChanged(Sonnet__Settings* self, intptr_t slot) {
    void (*slotFunc)(Sonnet__Settings*) = reinterpret_cast<void (*)(Sonnet__Settings*)>(slot);
    Sonnet::Settings::connect(self,
                              static_cast<void (Sonnet::Settings::*)()>(&Sonnet::Settings::autodetectLanguageChanged),
                              [self, slotFunc]() {
                                  slotFunc(self);
                              });
}

void Sonnet__Settings_BackgroundCheckerEnabledChanged(Sonnet__Settings* self) {
    self->backgroundCheckerEnabledChanged();
}

void Sonnet__Settings_Connect_BackgroundCheckerEnabledChanged(Sonnet__Settings* self, intptr_t slot) {
    void (*slotFunc)(Sonnet__Settings*) = reinterpret_cast<void (*)(Sonnet__Settings*)>(slot);
    Sonnet::Settings::connect(self,
                              static_cast<void (Sonnet::Settings::*)()>(&Sonnet::Settings::backgroundCheckerEnabledChanged),
                              [self, slotFunc]() {
                                  slotFunc(self);
                              });
}

void Sonnet__Settings_DefaultClientChanged(Sonnet__Settings* self) {
    self->defaultClientChanged();
}

void Sonnet__Settings_Connect_DefaultClientChanged(Sonnet__Settings* self, intptr_t slot) {
    void (*slotFunc)(Sonnet__Settings*) = reinterpret_cast<void (*)(Sonnet__Settings*)>(slot);
    Sonnet::Settings::connect(self,
                              static_cast<void (Sonnet::Settings::*)()>(&Sonnet::Settings::defaultClientChanged),
                              [self, slotFunc]() {
                                  slotFunc(self);
                              });
}

void Sonnet__Settings_DefaultLanguageChanged(Sonnet__Settings* self) {
    self->defaultLanguageChanged();
}

void Sonnet__Settings_Connect_DefaultLanguageChanged(Sonnet__Settings* self, intptr_t slot) {
    void (*slotFunc)(Sonnet__Settings*) = reinterpret_cast<void (*)(Sonnet__Settings*)>(slot);
    Sonnet::Settings::connect(self,
                              static_cast<void (Sonnet::Settings::*)()>(&Sonnet::Settings::defaultLanguageChanged),
                              [self, slotFunc]() {
                                  slotFunc(self);
                              });
}

void Sonnet__Settings_PreferredLanguagesChanged(Sonnet__Settings* self) {
    self->preferredLanguagesChanged();
}

void Sonnet__Settings_Connect_PreferredLanguagesChanged(Sonnet__Settings* self, intptr_t slot) {
    void (*slotFunc)(Sonnet__Settings*) = reinterpret_cast<void (*)(Sonnet__Settings*)>(slot);
    Sonnet::Settings::connect(self,
                              static_cast<void (Sonnet::Settings::*)()>(&Sonnet::Settings::preferredLanguagesChanged),
                              [self, slotFunc]() {
                                  slotFunc(self);
                              });
}

void Sonnet__Settings_SkipRunTogetherChanged(Sonnet__Settings* self) {
    self->skipRunTogetherChanged();
}

void Sonnet__Settings_Connect_SkipRunTogetherChanged(Sonnet__Settings* self, intptr_t slot) {
    void (*slotFunc)(Sonnet__Settings*) = reinterpret_cast<void (*)(Sonnet__Settings*)>(slot);
    Sonnet::Settings::connect(self,
                              static_cast<void (Sonnet::Settings::*)()>(&Sonnet::Settings::skipRunTogetherChanged),
                              [self, slotFunc]() {
                                  slotFunc(self);
                              });
}

void Sonnet__Settings_CheckerEnabledByDefaultChanged(Sonnet__Settings* self) {
    self->checkerEnabledByDefaultChanged();
}

void Sonnet__Settings_Connect_CheckerEnabledByDefaultChanged(Sonnet__Settings* self, intptr_t slot) {
    void (*slotFunc)(Sonnet__Settings*) = reinterpret_cast<void (*)(Sonnet__Settings*)>(slot);
    Sonnet::Settings::connect(self,
                              static_cast<void (Sonnet::Settings::*)()>(&Sonnet::Settings::checkerEnabledByDefaultChanged),
                              [self, slotFunc]() {
                                  slotFunc(self);
                              });
}

void Sonnet__Settings_CurrentIgnoreListChanged(Sonnet__Settings* self) {
    self->currentIgnoreListChanged();
}

void Sonnet__Settings_Connect_CurrentIgnoreListChanged(Sonnet__Settings* self, intptr_t slot) {
    void (*slotFunc)(Sonnet__Settings*) = reinterpret_cast<void (*)(Sonnet__Settings*)>(slot);
    Sonnet::Settings::connect(self,
                              static_cast<void (Sonnet::Settings::*)()>(&Sonnet::Settings::currentIgnoreListChanged),
                              [self, slotFunc]() {
                                  slotFunc(self);
                              });
}

void Sonnet__Settings_ModifiedChanged(Sonnet__Settings* self) {
    self->modifiedChanged();
}

void Sonnet__Settings_Connect_ModifiedChanged(Sonnet__Settings* self, intptr_t slot) {
    void (*slotFunc)(Sonnet__Settings*) = reinterpret_cast<void (*)(Sonnet__Settings*)>(slot);
    Sonnet::Settings::connect(self,
                              static_cast<void (Sonnet::Settings::*)()>(&Sonnet::Settings::modifiedChanged),
                              [self, slotFunc]() {
                                  slotFunc(self);
                              });
}

libqt_string Sonnet__Settings_Tr2(const char* s, const char* c) {
    auto _ret = Sonnet::Settings::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string Sonnet__Settings_Tr3(const char* s, const char* c, int n) {
    auto _ret = Sonnet::Settings::tr(s, c, static_cast<int>(n));
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
QMetaObject* Sonnet__Settings_SuperMetaObject(const Sonnet__Settings* self) {
    return (QMetaObject*)self->Sonnet::Settings::metaObject();
}

// Auxiliary method to allow providing re-implementation
void Sonnet__Settings_OnMetaObject(Sonnet__Settings* self, intptr_t slot) {
    if (auto* vsonnetsettings = const_cast<VirtualSonnetSettings*>(dynamic_cast<const VirtualSonnetSettings*>(self)))
        vsonnetsettings->sonnet__settings_metaobject_callback = reinterpret_cast<VirtualSonnetSettings::Sonnet__Settings_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* Sonnet__Settings_SuperMetacast(Sonnet__Settings* self, const char* param1) {
    return self->Sonnet::Settings::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void Sonnet__Settings_OnMetacast(Sonnet__Settings* self, intptr_t slot) {
    if (auto* vsonnetsettings = dynamic_cast<VirtualSonnetSettings*>(self))
        vsonnetsettings->sonnet__settings_metacast_callback = reinterpret_cast<VirtualSonnetSettings::Sonnet__Settings_Metacast_Callback>(slot);
}

// Base class handler implementation
int Sonnet__Settings_SuperMetacall(Sonnet__Settings* self, int param1, int param2, void** param3) {
    return self->Sonnet::Settings::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void Sonnet__Settings_OnMetacall(Sonnet__Settings* self, intptr_t slot) {
    if (auto* vsonnetsettings = dynamic_cast<VirtualSonnetSettings*>(self))
        vsonnetsettings->sonnet__settings_metacall_callback = reinterpret_cast<VirtualSonnetSettings::Sonnet__Settings_Metacall_Callback>(slot);
}

// Derived class handler implementation
bool Sonnet__Settings_Event(Sonnet__Settings* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool Sonnet__Settings_SuperEvent(Sonnet__Settings* self, QEvent* event) {
    return self->Sonnet::Settings::event(event);
}

// Auxiliary method to allow providing re-implementation
void Sonnet__Settings_OnEvent(Sonnet__Settings* self, intptr_t slot) {
    if (auto* vsonnetsettings = dynamic_cast<VirtualSonnetSettings*>(self))
        vsonnetsettings->sonnet__settings_event_callback = reinterpret_cast<VirtualSonnetSettings::Sonnet__Settings_Event_Callback>(slot);
}

// Derived class handler implementation
bool Sonnet__Settings_EventFilter(Sonnet__Settings* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool Sonnet__Settings_SuperEventFilter(Sonnet__Settings* self, QObject* watched, QEvent* event) {
    return self->Sonnet::Settings::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void Sonnet__Settings_OnEventFilter(Sonnet__Settings* self, intptr_t slot) {
    if (auto* vsonnetsettings = dynamic_cast<VirtualSonnetSettings*>(self))
        vsonnetsettings->sonnet__settings_eventfilter_callback = reinterpret_cast<VirtualSonnetSettings::Sonnet__Settings_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void Sonnet__Settings_TimerEvent(Sonnet__Settings* self, QTimerEvent* event) {
    auto* vsonnetsettings = dynamic_cast<VirtualSonnetSettings*>(self);
    if (vsonnetsettings) {
        vsonnetsettings->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method Sonnet::Settings::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Sonnet__Settings_SuperTimerEvent(Sonnet__Settings* self, QTimerEvent* event) {
    if (auto* vsonnetsettings = dynamic_cast<VirtualSonnetSettings*>(self)) {
        vsonnetsettings->Sonnet::Settings::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method Sonnet::Settings::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__Settings_OnTimerEvent(Sonnet__Settings* self, intptr_t slot) {
    if (auto* vsonnetsettings = dynamic_cast<VirtualSonnetSettings*>(self))
        vsonnetsettings->sonnet__settings_timerevent_callback = reinterpret_cast<VirtualSonnetSettings::Sonnet__Settings_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void Sonnet__Settings_ChildEvent(Sonnet__Settings* self, QChildEvent* event) {
    auto* vsonnetsettings = dynamic_cast<VirtualSonnetSettings*>(self);
    if (vsonnetsettings) {
        vsonnetsettings->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method Sonnet::Settings::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Sonnet__Settings_SuperChildEvent(Sonnet__Settings* self, QChildEvent* event) {
    if (auto* vsonnetsettings = dynamic_cast<VirtualSonnetSettings*>(self)) {
        vsonnetsettings->Sonnet::Settings::childEvent(event);
    } else
        qFatal("Error: Protected virtual method Sonnet::Settings::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__Settings_OnChildEvent(Sonnet__Settings* self, intptr_t slot) {
    if (auto* vsonnetsettings = dynamic_cast<VirtualSonnetSettings*>(self))
        vsonnetsettings->sonnet__settings_childevent_callback = reinterpret_cast<VirtualSonnetSettings::Sonnet__Settings_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void Sonnet__Settings_CustomEvent(Sonnet__Settings* self, QEvent* event) {
    auto* vsonnetsettings = dynamic_cast<VirtualSonnetSettings*>(self);
    if (vsonnetsettings) {
        vsonnetsettings->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method Sonnet::Settings::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Sonnet__Settings_SuperCustomEvent(Sonnet__Settings* self, QEvent* event) {
    if (auto* vsonnetsettings = dynamic_cast<VirtualSonnetSettings*>(self)) {
        vsonnetsettings->Sonnet::Settings::customEvent(event);
    } else
        qFatal("Error: Protected virtual method Sonnet::Settings::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__Settings_OnCustomEvent(Sonnet__Settings* self, intptr_t slot) {
    if (auto* vsonnetsettings = dynamic_cast<VirtualSonnetSettings*>(self))
        vsonnetsettings->sonnet__settings_customevent_callback = reinterpret_cast<VirtualSonnetSettings::Sonnet__Settings_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void Sonnet__Settings_ConnectNotify(Sonnet__Settings* self, const QMetaMethod* signal) {
    auto* vsonnetsettings = dynamic_cast<VirtualSonnetSettings*>(self);
    if (vsonnetsettings) {
        vsonnetsettings->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method Sonnet::Settings::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void Sonnet__Settings_SuperConnectNotify(Sonnet__Settings* self, const QMetaMethod* signal) {
    if (auto* vsonnetsettings = dynamic_cast<VirtualSonnetSettings*>(self)) {
        vsonnetsettings->Sonnet::Settings::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method Sonnet::Settings::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__Settings_OnConnectNotify(Sonnet__Settings* self, intptr_t slot) {
    if (auto* vsonnetsettings = dynamic_cast<VirtualSonnetSettings*>(self))
        vsonnetsettings->sonnet__settings_connectnotify_callback = reinterpret_cast<VirtualSonnetSettings::Sonnet__Settings_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void Sonnet__Settings_DisconnectNotify(Sonnet__Settings* self, const QMetaMethod* signal) {
    auto* vsonnetsettings = dynamic_cast<VirtualSonnetSettings*>(self);
    if (vsonnetsettings) {
        vsonnetsettings->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method Sonnet::Settings::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void Sonnet__Settings_SuperDisconnectNotify(Sonnet__Settings* self, const QMetaMethod* signal) {
    if (auto* vsonnetsettings = dynamic_cast<VirtualSonnetSettings*>(self)) {
        vsonnetsettings->Sonnet::Settings::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method Sonnet::Settings::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__Settings_OnDisconnectNotify(Sonnet__Settings* self, intptr_t slot) {
    if (auto* vsonnetsettings = dynamic_cast<VirtualSonnetSettings*>(self))
        vsonnetsettings->sonnet__settings_disconnectnotify_callback = reinterpret_cast<VirtualSonnetSettings::Sonnet__Settings_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* Sonnet__Settings_Sender(const Sonnet__Settings* self) {
    if (auto* vsonnetsettings = const_cast<VirtualSonnetSettings*>(dynamic_cast<const VirtualSonnetSettings*>(self))) {
        return vsonnetsettings->VirtualSonnetSettings::sender();
    } else
        qFatal("Error: Protected method Sonnet::Settings::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int Sonnet__Settings_SenderSignalIndex(const Sonnet__Settings* self) {
    if (auto* vsonnetsettings = const_cast<VirtualSonnetSettings*>(dynamic_cast<const VirtualSonnetSettings*>(self))) {
        return vsonnetsettings->VirtualSonnetSettings::senderSignalIndex();
    } else
        qFatal("Error: Protected method Sonnet::Settings::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int Sonnet__Settings_Receivers(const Sonnet__Settings* self, const char* signal) {
    if (auto* vsonnetsettings = const_cast<VirtualSonnetSettings*>(dynamic_cast<const VirtualSonnetSettings*>(self))) {
        return vsonnetsettings->VirtualSonnetSettings::receivers(signal);
    } else
        qFatal("Error: Protected method Sonnet::Settings::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool Sonnet__Settings_IsSignalConnected(const Sonnet__Settings* self, const QMetaMethod* signal) {
    if (auto* vsonnetsettings = const_cast<VirtualSonnetSettings*>(dynamic_cast<const VirtualSonnetSettings*>(self))) {
        return vsonnetsettings->VirtualSonnetSettings::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method Sonnet::Settings::isSignalConnected called without a directly constructed type");
}

void Sonnet__Settings_Delete(Sonnet__Settings* self) {
    delete self;
}
