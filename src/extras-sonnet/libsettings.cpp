#include <QAbstractListModel>
#include <QChildEvent>
#include <QEvent>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
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
    auto* vsonnet__settings = dynamic_cast<VirtualSonnetSettings*>(self);
    if (vsonnet__settings && vsonnet__settings->isVirtualSonnetSettings) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualSonnetSettings*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string Sonnet__Settings_Tr(const char* s) {
    QString _ret = Sonnet::Settings::tr(s);
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

void Sonnet__Settings_SetDefaultClient(Sonnet__Settings* self, const libqt_string client) {
    QString client_QString = QString::fromUtf8(client.data, client.len);
    self->setDefaultClient(client_QString);
}

libqt_string Sonnet__Settings_DefaultClient(const Sonnet__Settings* self) {
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

libqt_list /* of libqt_string */ Sonnet__Settings_Clients(const Sonnet__Settings* self) {
    QList<QString> _ret = self->clients();
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
    QString _ret = Sonnet::Settings::defaultDefaultLanguage();
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

void Sonnet__Settings_SkipUppercaseChanged(Sonnet__Settings* self) {
    self->skipUppercaseChanged();
}

void Sonnet__Settings_Connect_SkipUppercaseChanged(Sonnet__Settings* self, intptr_t slot) {
    void (*slotFunc)(Sonnet__Settings*) = reinterpret_cast<void (*)(Sonnet__Settings*)>(slot);
    Sonnet::Settings::connect(self, &Sonnet::Settings::skipUppercaseChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void Sonnet__Settings_AutodetectLanguageChanged(Sonnet__Settings* self) {
    self->autodetectLanguageChanged();
}

void Sonnet__Settings_Connect_AutodetectLanguageChanged(Sonnet__Settings* self, intptr_t slot) {
    void (*slotFunc)(Sonnet__Settings*) = reinterpret_cast<void (*)(Sonnet__Settings*)>(slot);
    Sonnet::Settings::connect(self, &Sonnet::Settings::autodetectLanguageChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void Sonnet__Settings_BackgroundCheckerEnabledChanged(Sonnet__Settings* self) {
    self->backgroundCheckerEnabledChanged();
}

void Sonnet__Settings_Connect_BackgroundCheckerEnabledChanged(Sonnet__Settings* self, intptr_t slot) {
    void (*slotFunc)(Sonnet__Settings*) = reinterpret_cast<void (*)(Sonnet__Settings*)>(slot);
    Sonnet::Settings::connect(self, &Sonnet::Settings::backgroundCheckerEnabledChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void Sonnet__Settings_DefaultClientChanged(Sonnet__Settings* self) {
    self->defaultClientChanged();
}

void Sonnet__Settings_Connect_DefaultClientChanged(Sonnet__Settings* self, intptr_t slot) {
    void (*slotFunc)(Sonnet__Settings*) = reinterpret_cast<void (*)(Sonnet__Settings*)>(slot);
    Sonnet::Settings::connect(self, &Sonnet::Settings::defaultClientChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void Sonnet__Settings_DefaultLanguageChanged(Sonnet__Settings* self) {
    self->defaultLanguageChanged();
}

void Sonnet__Settings_Connect_DefaultLanguageChanged(Sonnet__Settings* self, intptr_t slot) {
    void (*slotFunc)(Sonnet__Settings*) = reinterpret_cast<void (*)(Sonnet__Settings*)>(slot);
    Sonnet::Settings::connect(self, &Sonnet::Settings::defaultLanguageChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void Sonnet__Settings_PreferredLanguagesChanged(Sonnet__Settings* self) {
    self->preferredLanguagesChanged();
}

void Sonnet__Settings_Connect_PreferredLanguagesChanged(Sonnet__Settings* self, intptr_t slot) {
    void (*slotFunc)(Sonnet__Settings*) = reinterpret_cast<void (*)(Sonnet__Settings*)>(slot);
    Sonnet::Settings::connect(self, &Sonnet::Settings::preferredLanguagesChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void Sonnet__Settings_SkipRunTogetherChanged(Sonnet__Settings* self) {
    self->skipRunTogetherChanged();
}

void Sonnet__Settings_Connect_SkipRunTogetherChanged(Sonnet__Settings* self, intptr_t slot) {
    void (*slotFunc)(Sonnet__Settings*) = reinterpret_cast<void (*)(Sonnet__Settings*)>(slot);
    Sonnet::Settings::connect(self, &Sonnet::Settings::skipRunTogetherChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void Sonnet__Settings_CheckerEnabledByDefaultChanged(Sonnet__Settings* self) {
    self->checkerEnabledByDefaultChanged();
}

void Sonnet__Settings_Connect_CheckerEnabledByDefaultChanged(Sonnet__Settings* self, intptr_t slot) {
    void (*slotFunc)(Sonnet__Settings*) = reinterpret_cast<void (*)(Sonnet__Settings*)>(slot);
    Sonnet::Settings::connect(self, &Sonnet::Settings::checkerEnabledByDefaultChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void Sonnet__Settings_CurrentIgnoreListChanged(Sonnet__Settings* self) {
    self->currentIgnoreListChanged();
}

void Sonnet__Settings_Connect_CurrentIgnoreListChanged(Sonnet__Settings* self, intptr_t slot) {
    void (*slotFunc)(Sonnet__Settings*) = reinterpret_cast<void (*)(Sonnet__Settings*)>(slot);
    Sonnet::Settings::connect(self, &Sonnet::Settings::currentIgnoreListChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void Sonnet__Settings_ModifiedChanged(Sonnet__Settings* self) {
    self->modifiedChanged();
}

void Sonnet__Settings_Connect_ModifiedChanged(Sonnet__Settings* self, intptr_t slot) {
    void (*slotFunc)(Sonnet__Settings*) = reinterpret_cast<void (*)(Sonnet__Settings*)>(slot);
    Sonnet::Settings::connect(self, &Sonnet::Settings::modifiedChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

libqt_string Sonnet__Settings_Tr2(const char* s, const char* c) {
    QString _ret = Sonnet::Settings::tr(s, c);
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
    QString _ret = Sonnet::Settings::tr(s, c, static_cast<int>(n));
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
int Sonnet__Settings_QBaseMetacall(Sonnet__Settings* self, int param1, int param2, void** param3) {
    auto* vsonnetsettings = dynamic_cast<VirtualSonnetSettings*>(self);
    if (vsonnetsettings && vsonnetsettings->isVirtualSonnetSettings) {
        vsonnetsettings->setSonnet__Settings_Metacall_IsBase(true);
        return vsonnetsettings->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->Sonnet::Settings::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__Settings_OnMetacall(Sonnet__Settings* self, intptr_t slot) {
    auto* vsonnetsettings = dynamic_cast<VirtualSonnetSettings*>(self);
    if (vsonnetsettings && vsonnetsettings->isVirtualSonnetSettings) {
        vsonnetsettings->setSonnet__Settings_Metacall_Callback(reinterpret_cast<VirtualSonnetSettings::Sonnet__Settings_Metacall_Callback>(slot));
    }
}

// Derived class handler implementation
bool Sonnet__Settings_Event(Sonnet__Settings* self, QEvent* event) {
    auto* vsonnetsettings = dynamic_cast<VirtualSonnetSettings*>(self);
    if (vsonnetsettings && vsonnetsettings->isVirtualSonnetSettings) {
        return vsonnetsettings->event(event);
    } else {
        return self->Sonnet::Settings::event(event);
    }
}

// Base class handler implementation
bool Sonnet__Settings_QBaseEvent(Sonnet__Settings* self, QEvent* event) {
    auto* vsonnetsettings = dynamic_cast<VirtualSonnetSettings*>(self);
    if (vsonnetsettings && vsonnetsettings->isVirtualSonnetSettings) {
        vsonnetsettings->setSonnet__Settings_Event_IsBase(true);
        return vsonnetsettings->event(event);
    } else {
        return self->Sonnet::Settings::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__Settings_OnEvent(Sonnet__Settings* self, intptr_t slot) {
    auto* vsonnetsettings = dynamic_cast<VirtualSonnetSettings*>(self);
    if (vsonnetsettings && vsonnetsettings->isVirtualSonnetSettings) {
        vsonnetsettings->setSonnet__Settings_Event_Callback(reinterpret_cast<VirtualSonnetSettings::Sonnet__Settings_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool Sonnet__Settings_EventFilter(Sonnet__Settings* self, QObject* watched, QEvent* event) {
    auto* vsonnetsettings = dynamic_cast<VirtualSonnetSettings*>(self);
    if (vsonnetsettings && vsonnetsettings->isVirtualSonnetSettings) {
        return vsonnetsettings->eventFilter(watched, event);
    } else {
        return self->Sonnet::Settings::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool Sonnet__Settings_QBaseEventFilter(Sonnet__Settings* self, QObject* watched, QEvent* event) {
    auto* vsonnetsettings = dynamic_cast<VirtualSonnetSettings*>(self);
    if (vsonnetsettings && vsonnetsettings->isVirtualSonnetSettings) {
        vsonnetsettings->setSonnet__Settings_EventFilter_IsBase(true);
        return vsonnetsettings->eventFilter(watched, event);
    } else {
        return self->Sonnet::Settings::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__Settings_OnEventFilter(Sonnet__Settings* self, intptr_t slot) {
    auto* vsonnetsettings = dynamic_cast<VirtualSonnetSettings*>(self);
    if (vsonnetsettings && vsonnetsettings->isVirtualSonnetSettings) {
        vsonnetsettings->setSonnet__Settings_EventFilter_Callback(reinterpret_cast<VirtualSonnetSettings::Sonnet__Settings_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__Settings_TimerEvent(Sonnet__Settings* self, QTimerEvent* event) {
    auto* vsonnetsettings = dynamic_cast<VirtualSonnetSettings*>(self);
    if (vsonnetsettings && vsonnetsettings->isVirtualSonnetSettings) {
        vsonnetsettings->timerEvent(event);
    } else {
        ((VirtualSonnetSettings*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void Sonnet__Settings_QBaseTimerEvent(Sonnet__Settings* self, QTimerEvent* event) {
    auto* vsonnetsettings = dynamic_cast<VirtualSonnetSettings*>(self);
    if (vsonnetsettings && vsonnetsettings->isVirtualSonnetSettings) {
        vsonnetsettings->setSonnet__Settings_TimerEvent_IsBase(true);
        vsonnetsettings->timerEvent(event);
    } else {
        ((VirtualSonnetSettings*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__Settings_OnTimerEvent(Sonnet__Settings* self, intptr_t slot) {
    auto* vsonnetsettings = dynamic_cast<VirtualSonnetSettings*>(self);
    if (vsonnetsettings && vsonnetsettings->isVirtualSonnetSettings) {
        vsonnetsettings->setSonnet__Settings_TimerEvent_Callback(reinterpret_cast<VirtualSonnetSettings::Sonnet__Settings_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__Settings_ChildEvent(Sonnet__Settings* self, QChildEvent* event) {
    auto* vsonnetsettings = dynamic_cast<VirtualSonnetSettings*>(self);
    if (vsonnetsettings && vsonnetsettings->isVirtualSonnetSettings) {
        vsonnetsettings->childEvent(event);
    } else {
        ((VirtualSonnetSettings*)self)->childEvent(event);
    }
}

// Base class handler implementation
void Sonnet__Settings_QBaseChildEvent(Sonnet__Settings* self, QChildEvent* event) {
    auto* vsonnetsettings = dynamic_cast<VirtualSonnetSettings*>(self);
    if (vsonnetsettings && vsonnetsettings->isVirtualSonnetSettings) {
        vsonnetsettings->setSonnet__Settings_ChildEvent_IsBase(true);
        vsonnetsettings->childEvent(event);
    } else {
        ((VirtualSonnetSettings*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__Settings_OnChildEvent(Sonnet__Settings* self, intptr_t slot) {
    auto* vsonnetsettings = dynamic_cast<VirtualSonnetSettings*>(self);
    if (vsonnetsettings && vsonnetsettings->isVirtualSonnetSettings) {
        vsonnetsettings->setSonnet__Settings_ChildEvent_Callback(reinterpret_cast<VirtualSonnetSettings::Sonnet__Settings_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__Settings_CustomEvent(Sonnet__Settings* self, QEvent* event) {
    auto* vsonnetsettings = dynamic_cast<VirtualSonnetSettings*>(self);
    if (vsonnetsettings && vsonnetsettings->isVirtualSonnetSettings) {
        vsonnetsettings->customEvent(event);
    } else {
        ((VirtualSonnetSettings*)self)->customEvent(event);
    }
}

// Base class handler implementation
void Sonnet__Settings_QBaseCustomEvent(Sonnet__Settings* self, QEvent* event) {
    auto* vsonnetsettings = dynamic_cast<VirtualSonnetSettings*>(self);
    if (vsonnetsettings && vsonnetsettings->isVirtualSonnetSettings) {
        vsonnetsettings->setSonnet__Settings_CustomEvent_IsBase(true);
        vsonnetsettings->customEvent(event);
    } else {
        ((VirtualSonnetSettings*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__Settings_OnCustomEvent(Sonnet__Settings* self, intptr_t slot) {
    auto* vsonnetsettings = dynamic_cast<VirtualSonnetSettings*>(self);
    if (vsonnetsettings && vsonnetsettings->isVirtualSonnetSettings) {
        vsonnetsettings->setSonnet__Settings_CustomEvent_Callback(reinterpret_cast<VirtualSonnetSettings::Sonnet__Settings_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__Settings_ConnectNotify(Sonnet__Settings* self, const QMetaMethod* signal) {
    auto* vsonnetsettings = dynamic_cast<VirtualSonnetSettings*>(self);
    if (vsonnetsettings && vsonnetsettings->isVirtualSonnetSettings) {
        vsonnetsettings->connectNotify(*signal);
    } else {
        ((VirtualSonnetSettings*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void Sonnet__Settings_QBaseConnectNotify(Sonnet__Settings* self, const QMetaMethod* signal) {
    auto* vsonnetsettings = dynamic_cast<VirtualSonnetSettings*>(self);
    if (vsonnetsettings && vsonnetsettings->isVirtualSonnetSettings) {
        vsonnetsettings->setSonnet__Settings_ConnectNotify_IsBase(true);
        vsonnetsettings->connectNotify(*signal);
    } else {
        ((VirtualSonnetSettings*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__Settings_OnConnectNotify(Sonnet__Settings* self, intptr_t slot) {
    auto* vsonnetsettings = dynamic_cast<VirtualSonnetSettings*>(self);
    if (vsonnetsettings && vsonnetsettings->isVirtualSonnetSettings) {
        vsonnetsettings->setSonnet__Settings_ConnectNotify_Callback(reinterpret_cast<VirtualSonnetSettings::Sonnet__Settings_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__Settings_DisconnectNotify(Sonnet__Settings* self, const QMetaMethod* signal) {
    auto* vsonnetsettings = dynamic_cast<VirtualSonnetSettings*>(self);
    if (vsonnetsettings && vsonnetsettings->isVirtualSonnetSettings) {
        vsonnetsettings->disconnectNotify(*signal);
    } else {
        ((VirtualSonnetSettings*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void Sonnet__Settings_QBaseDisconnectNotify(Sonnet__Settings* self, const QMetaMethod* signal) {
    auto* vsonnetsettings = dynamic_cast<VirtualSonnetSettings*>(self);
    if (vsonnetsettings && vsonnetsettings->isVirtualSonnetSettings) {
        vsonnetsettings->setSonnet__Settings_DisconnectNotify_IsBase(true);
        vsonnetsettings->disconnectNotify(*signal);
    } else {
        ((VirtualSonnetSettings*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__Settings_OnDisconnectNotify(Sonnet__Settings* self, intptr_t slot) {
    auto* vsonnetsettings = dynamic_cast<VirtualSonnetSettings*>(self);
    if (vsonnetsettings && vsonnetsettings->isVirtualSonnetSettings) {
        vsonnetsettings->setSonnet__Settings_DisconnectNotify_Callback(reinterpret_cast<VirtualSonnetSettings::Sonnet__Settings_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* Sonnet__Settings_Sender(const Sonnet__Settings* self) {
    auto* vsonnetsettings = const_cast<VirtualSonnetSettings*>(dynamic_cast<const VirtualSonnetSettings*>(self));
    if (vsonnetsettings && vsonnetsettings->isVirtualSonnetSettings) {
        return vsonnetsettings->sender();
    } else {
        return ((VirtualSonnetSettings*)self)->sender();
    }
}

// Base class handler implementation
QObject* Sonnet__Settings_QBaseSender(const Sonnet__Settings* self) {
    auto* vsonnetsettings = const_cast<VirtualSonnetSettings*>(dynamic_cast<const VirtualSonnetSettings*>(self));
    if (vsonnetsettings && vsonnetsettings->isVirtualSonnetSettings) {
        vsonnetsettings->setSonnet__Settings_Sender_IsBase(true);
        return vsonnetsettings->sender();
    } else {
        return ((VirtualSonnetSettings*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__Settings_OnSender(const Sonnet__Settings* self, intptr_t slot) {
    auto* vsonnetsettings = const_cast<VirtualSonnetSettings*>(dynamic_cast<const VirtualSonnetSettings*>(self));
    if (vsonnetsettings && vsonnetsettings->isVirtualSonnetSettings) {
        vsonnetsettings->setSonnet__Settings_Sender_Callback(reinterpret_cast<VirtualSonnetSettings::Sonnet__Settings_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int Sonnet__Settings_SenderSignalIndex(const Sonnet__Settings* self) {
    auto* vsonnetsettings = const_cast<VirtualSonnetSettings*>(dynamic_cast<const VirtualSonnetSettings*>(self));
    if (vsonnetsettings && vsonnetsettings->isVirtualSonnetSettings) {
        return vsonnetsettings->senderSignalIndex();
    } else {
        return ((VirtualSonnetSettings*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int Sonnet__Settings_QBaseSenderSignalIndex(const Sonnet__Settings* self) {
    auto* vsonnetsettings = const_cast<VirtualSonnetSettings*>(dynamic_cast<const VirtualSonnetSettings*>(self));
    if (vsonnetsettings && vsonnetsettings->isVirtualSonnetSettings) {
        vsonnetsettings->setSonnet__Settings_SenderSignalIndex_IsBase(true);
        return vsonnetsettings->senderSignalIndex();
    } else {
        return ((VirtualSonnetSettings*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__Settings_OnSenderSignalIndex(const Sonnet__Settings* self, intptr_t slot) {
    auto* vsonnetsettings = const_cast<VirtualSonnetSettings*>(dynamic_cast<const VirtualSonnetSettings*>(self));
    if (vsonnetsettings && vsonnetsettings->isVirtualSonnetSettings) {
        vsonnetsettings->setSonnet__Settings_SenderSignalIndex_Callback(reinterpret_cast<VirtualSonnetSettings::Sonnet__Settings_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int Sonnet__Settings_Receivers(const Sonnet__Settings* self, const char* signal) {
    auto* vsonnetsettings = const_cast<VirtualSonnetSettings*>(dynamic_cast<const VirtualSonnetSettings*>(self));
    if (vsonnetsettings && vsonnetsettings->isVirtualSonnetSettings) {
        return vsonnetsettings->receivers(signal);
    } else {
        return ((VirtualSonnetSettings*)self)->receivers(signal);
    }
}

// Base class handler implementation
int Sonnet__Settings_QBaseReceivers(const Sonnet__Settings* self, const char* signal) {
    auto* vsonnetsettings = const_cast<VirtualSonnetSettings*>(dynamic_cast<const VirtualSonnetSettings*>(self));
    if (vsonnetsettings && vsonnetsettings->isVirtualSonnetSettings) {
        vsonnetsettings->setSonnet__Settings_Receivers_IsBase(true);
        return vsonnetsettings->receivers(signal);
    } else {
        return ((VirtualSonnetSettings*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__Settings_OnReceivers(const Sonnet__Settings* self, intptr_t slot) {
    auto* vsonnetsettings = const_cast<VirtualSonnetSettings*>(dynamic_cast<const VirtualSonnetSettings*>(self));
    if (vsonnetsettings && vsonnetsettings->isVirtualSonnetSettings) {
        vsonnetsettings->setSonnet__Settings_Receivers_Callback(reinterpret_cast<VirtualSonnetSettings::Sonnet__Settings_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool Sonnet__Settings_IsSignalConnected(const Sonnet__Settings* self, const QMetaMethod* signal) {
    auto* vsonnetsettings = const_cast<VirtualSonnetSettings*>(dynamic_cast<const VirtualSonnetSettings*>(self));
    if (vsonnetsettings && vsonnetsettings->isVirtualSonnetSettings) {
        return vsonnetsettings->isSignalConnected(*signal);
    } else {
        return ((VirtualSonnetSettings*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool Sonnet__Settings_QBaseIsSignalConnected(const Sonnet__Settings* self, const QMetaMethod* signal) {
    auto* vsonnetsettings = const_cast<VirtualSonnetSettings*>(dynamic_cast<const VirtualSonnetSettings*>(self));
    if (vsonnetsettings && vsonnetsettings->isVirtualSonnetSettings) {
        vsonnetsettings->setSonnet__Settings_IsSignalConnected_IsBase(true);
        return vsonnetsettings->isSignalConnected(*signal);
    } else {
        return ((VirtualSonnetSettings*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__Settings_OnIsSignalConnected(const Sonnet__Settings* self, intptr_t slot) {
    auto* vsonnetsettings = const_cast<VirtualSonnetSettings*>(dynamic_cast<const VirtualSonnetSettings*>(self));
    if (vsonnetsettings && vsonnetsettings->isVirtualSonnetSettings) {
        vsonnetsettings->setSonnet__Settings_IsSignalConnected_Callback(reinterpret_cast<VirtualSonnetSettings::Sonnet__Settings_IsSignalConnected_Callback>(slot));
    }
}

void Sonnet__Settings_Delete(Sonnet__Settings* self) {
    delete self;
}
