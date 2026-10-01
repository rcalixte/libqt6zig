#define WORKAROUND_INNER_CLASS_DEFINITION_Accounts__Account
#define WORKAROUND_INNER_CLASS_DEFINITION_Accounts__Error
#define WORKAROUND_INNER_CLASS_DEFINITION_Accounts__Manager
#include <Accounts/Provider>
#define WORKAROUND_INNER_CLASS_DEFINITION_Accounts__Service
#define WORKAROUND_INNER_CLASS_DEFINITION_Accounts__Watch
#include <QChildEvent>
#include <QEvent>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QTimerEvent>
#include <QVariant>
#include <account.h>
#include "libaccount.h"
#include "libaccount.hxx"

Accounts__Watch* Accounts__Watch_new() {
    return new VirtualAccountsWatch();
}

Accounts__Watch* Accounts__Watch_new2(QObject* parent) {
    return new VirtualAccountsWatch(parent);
}

QMetaObject* Accounts__Watch_MetaObject(const Accounts__Watch* self) {
    return (QMetaObject*)self->metaObject();
}

void* Accounts__Watch_Metacast(Accounts__Watch* self, const char* param1) {
    return self->qt_metacast(param1);
}

int Accounts__Watch_Metacall(Accounts__Watch* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string Accounts__Watch_Tr(const char* s) {
    auto _ret = Accounts::Watch::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void Accounts__Watch_Notify(Accounts__Watch* self, const char* key) {
    self->notify(key);
}

void Accounts__Watch_Connect_Notify(Accounts__Watch* self, intptr_t slot) {
    void (*slotFunc)(Accounts__Watch*, const char*) = reinterpret_cast<void (*)(Accounts__Watch*, const char*)>(slot);
    Accounts::Watch::connect(self,
                             static_cast<void (Accounts::Watch::*)(const char*)>(&Accounts::Watch::notify),
                             [self, slotFunc](const char* key) {
                                 const char* sigval1 = (const char*)key;
                                 slotFunc(self, sigval1);
                             });
}

libqt_string Accounts__Watch_Tr2(const char* s, const char* c) {
    auto _ret = Accounts::Watch::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string Accounts__Watch_Tr3(const char* s, const char* c, int n) {
    auto _ret = Accounts::Watch::tr(s, c, static_cast<int>(n));
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
QMetaObject* Accounts__Watch_SuperMetaObject(const Accounts__Watch* self) {
    return (QMetaObject*)self->Accounts::Watch::metaObject();
}

// Auxiliary method to allow providing re-implementation
void Accounts__Watch_OnMetaObject(Accounts__Watch* self, intptr_t slot) {
    if (auto* vaccountswatch = const_cast<VirtualAccountsWatch*>(dynamic_cast<const VirtualAccountsWatch*>(self)))
        vaccountswatch->accounts__watch_metaobject_callback = reinterpret_cast<VirtualAccountsWatch::Accounts__Watch_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* Accounts__Watch_SuperMetacast(Accounts__Watch* self, const char* param1) {
    return self->Accounts::Watch::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void Accounts__Watch_OnMetacast(Accounts__Watch* self, intptr_t slot) {
    if (auto* vaccountswatch = dynamic_cast<VirtualAccountsWatch*>(self))
        vaccountswatch->accounts__watch_metacast_callback = reinterpret_cast<VirtualAccountsWatch::Accounts__Watch_Metacast_Callback>(slot);
}

// Base class handler implementation
int Accounts__Watch_SuperMetacall(Accounts__Watch* self, int param1, int param2, void** param3) {
    return self->Accounts::Watch::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void Accounts__Watch_OnMetacall(Accounts__Watch* self, intptr_t slot) {
    if (auto* vaccountswatch = dynamic_cast<VirtualAccountsWatch*>(self))
        vaccountswatch->accounts__watch_metacall_callback = reinterpret_cast<VirtualAccountsWatch::Accounts__Watch_Metacall_Callback>(slot);
}

// Derived class handler implementation
bool Accounts__Watch_Event(Accounts__Watch* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool Accounts__Watch_SuperEvent(Accounts__Watch* self, QEvent* event) {
    return self->Accounts::Watch::event(event);
}

// Auxiliary method to allow providing re-implementation
void Accounts__Watch_OnEvent(Accounts__Watch* self, intptr_t slot) {
    if (auto* vaccountswatch = dynamic_cast<VirtualAccountsWatch*>(self))
        vaccountswatch->accounts__watch_event_callback = reinterpret_cast<VirtualAccountsWatch::Accounts__Watch_Event_Callback>(slot);
}

// Derived class handler implementation
bool Accounts__Watch_EventFilter(Accounts__Watch* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool Accounts__Watch_SuperEventFilter(Accounts__Watch* self, QObject* watched, QEvent* event) {
    return self->Accounts::Watch::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void Accounts__Watch_OnEventFilter(Accounts__Watch* self, intptr_t slot) {
    if (auto* vaccountswatch = dynamic_cast<VirtualAccountsWatch*>(self))
        vaccountswatch->accounts__watch_eventfilter_callback = reinterpret_cast<VirtualAccountsWatch::Accounts__Watch_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void Accounts__Watch_TimerEvent(Accounts__Watch* self, QTimerEvent* event) {
    auto* vaccountswatch = dynamic_cast<VirtualAccountsWatch*>(self);
    if (vaccountswatch) {
        vaccountswatch->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method Accounts::Watch::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Accounts__Watch_SuperTimerEvent(Accounts__Watch* self, QTimerEvent* event) {
    if (auto* vaccountswatch = dynamic_cast<VirtualAccountsWatch*>(self)) {
        vaccountswatch->Accounts::Watch::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method Accounts::Watch::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Accounts__Watch_OnTimerEvent(Accounts__Watch* self, intptr_t slot) {
    if (auto* vaccountswatch = dynamic_cast<VirtualAccountsWatch*>(self))
        vaccountswatch->accounts__watch_timerevent_callback = reinterpret_cast<VirtualAccountsWatch::Accounts__Watch_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void Accounts__Watch_ChildEvent(Accounts__Watch* self, QChildEvent* event) {
    auto* vaccountswatch = dynamic_cast<VirtualAccountsWatch*>(self);
    if (vaccountswatch) {
        vaccountswatch->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method Accounts::Watch::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Accounts__Watch_SuperChildEvent(Accounts__Watch* self, QChildEvent* event) {
    if (auto* vaccountswatch = dynamic_cast<VirtualAccountsWatch*>(self)) {
        vaccountswatch->Accounts::Watch::childEvent(event);
    } else
        qFatal("Error: Protected virtual method Accounts::Watch::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Accounts__Watch_OnChildEvent(Accounts__Watch* self, intptr_t slot) {
    if (auto* vaccountswatch = dynamic_cast<VirtualAccountsWatch*>(self))
        vaccountswatch->accounts__watch_childevent_callback = reinterpret_cast<VirtualAccountsWatch::Accounts__Watch_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void Accounts__Watch_CustomEvent(Accounts__Watch* self, QEvent* event) {
    auto* vaccountswatch = dynamic_cast<VirtualAccountsWatch*>(self);
    if (vaccountswatch) {
        vaccountswatch->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method Accounts::Watch::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Accounts__Watch_SuperCustomEvent(Accounts__Watch* self, QEvent* event) {
    if (auto* vaccountswatch = dynamic_cast<VirtualAccountsWatch*>(self)) {
        vaccountswatch->Accounts::Watch::customEvent(event);
    } else
        qFatal("Error: Protected virtual method Accounts::Watch::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Accounts__Watch_OnCustomEvent(Accounts__Watch* self, intptr_t slot) {
    if (auto* vaccountswatch = dynamic_cast<VirtualAccountsWatch*>(self))
        vaccountswatch->accounts__watch_customevent_callback = reinterpret_cast<VirtualAccountsWatch::Accounts__Watch_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void Accounts__Watch_ConnectNotify(Accounts__Watch* self, const QMetaMethod* signal) {
    auto* vaccountswatch = dynamic_cast<VirtualAccountsWatch*>(self);
    if (vaccountswatch) {
        vaccountswatch->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method Accounts::Watch::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void Accounts__Watch_SuperConnectNotify(Accounts__Watch* self, const QMetaMethod* signal) {
    if (auto* vaccountswatch = dynamic_cast<VirtualAccountsWatch*>(self)) {
        vaccountswatch->Accounts::Watch::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method Accounts::Watch::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Accounts__Watch_OnConnectNotify(Accounts__Watch* self, intptr_t slot) {
    if (auto* vaccountswatch = dynamic_cast<VirtualAccountsWatch*>(self))
        vaccountswatch->accounts__watch_connectnotify_callback = reinterpret_cast<VirtualAccountsWatch::Accounts__Watch_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void Accounts__Watch_DisconnectNotify(Accounts__Watch* self, const QMetaMethod* signal) {
    auto* vaccountswatch = dynamic_cast<VirtualAccountsWatch*>(self);
    if (vaccountswatch) {
        vaccountswatch->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method Accounts::Watch::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void Accounts__Watch_SuperDisconnectNotify(Accounts__Watch* self, const QMetaMethod* signal) {
    if (auto* vaccountswatch = dynamic_cast<VirtualAccountsWatch*>(self)) {
        vaccountswatch->Accounts::Watch::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method Accounts::Watch::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Accounts__Watch_OnDisconnectNotify(Accounts__Watch* self, intptr_t slot) {
    if (auto* vaccountswatch = dynamic_cast<VirtualAccountsWatch*>(self))
        vaccountswatch->accounts__watch_disconnectnotify_callback = reinterpret_cast<VirtualAccountsWatch::Accounts__Watch_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* Accounts__Watch_Sender(const Accounts__Watch* self) {
    if (auto* vaccountswatch = const_cast<VirtualAccountsWatch*>(dynamic_cast<const VirtualAccountsWatch*>(self))) {
        return vaccountswatch->VirtualAccountsWatch::sender();
    } else
        qFatal("Error: Protected method Accounts::Watch::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int Accounts__Watch_SenderSignalIndex(const Accounts__Watch* self) {
    if (auto* vaccountswatch = const_cast<VirtualAccountsWatch*>(dynamic_cast<const VirtualAccountsWatch*>(self))) {
        return vaccountswatch->VirtualAccountsWatch::senderSignalIndex();
    } else
        qFatal("Error: Protected method Accounts::Watch::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int Accounts__Watch_Receivers(const Accounts__Watch* self, const char* signal) {
    if (auto* vaccountswatch = const_cast<VirtualAccountsWatch*>(dynamic_cast<const VirtualAccountsWatch*>(self))) {
        return vaccountswatch->VirtualAccountsWatch::receivers(signal);
    } else
        qFatal("Error: Protected method Accounts::Watch::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool Accounts__Watch_IsSignalConnected(const Accounts__Watch* self, const QMetaMethod* signal) {
    if (auto* vaccountswatch = const_cast<VirtualAccountsWatch*>(dynamic_cast<const VirtualAccountsWatch*>(self))) {
        return vaccountswatch->VirtualAccountsWatch::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method Accounts::Watch::isSignalConnected called without a directly constructed type");
}

void Accounts__Watch_Delete(Accounts__Watch* self) {
    delete self;
}

Accounts__Account* Accounts__Account_new(Accounts__Manager* manager, const libqt_string provider) {
    QString provider_QString = QString::fromUtf8(provider.data, provider.len);
    return new VirtualAccountsAccount(manager, provider_QString);
}

Accounts__Account* Accounts__Account_new2(Accounts__Manager* manager, const libqt_string provider, QObject* parent) {
    QString provider_QString = QString::fromUtf8(provider.data, provider.len);
    return new VirtualAccountsAccount(manager, provider_QString, parent);
}

QMetaObject* Accounts__Account_MetaObject(const Accounts__Account* self) {
    return (QMetaObject*)self->metaObject();
}

void* Accounts__Account_Metacast(Accounts__Account* self, const char* param1) {
    return self->qt_metacast(param1);
}

int Accounts__Account_Metacall(Accounts__Account* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string Accounts__Account_Tr(const char* s) {
    auto _ret = Accounts::Account::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

Accounts__Account* Accounts__Account_FromId(Accounts__Manager* manager, unsigned int id) {
    return Accounts::Account::fromId(manager, static_cast<Accounts::AccountId>(id));
}

unsigned int Accounts__Account_Id(const Accounts__Account* self) {
    return static_cast<unsigned int>(self->id());
}

Accounts__Manager* Accounts__Account_Manager(const Accounts__Account* self) {
    return self->manager();
}

bool Accounts__Account_SupportsService(const Accounts__Account* self, const libqt_string serviceType) {
    QString serviceType_QString = QString::fromUtf8(serviceType.data, serviceType.len);
    return self->supportsService(serviceType_QString);
}

libqt_list /* of Accounts__Service* */ Accounts__Account_Services(const Accounts__Account* self) {
    QList<Accounts::Service> _ret = self->services();
    // Convert QList<> from C++ memory to manually-managed C memory
    Accounts__Service** _arr = static_cast<Accounts__Service**>(malloc(sizeof(Accounts__Service*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new Accounts::Service(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_list /* of Accounts__Service* */ Accounts__Account_EnabledServices(const Accounts__Account* self) {
    QList<Accounts::Service> _ret = self->enabledServices();
    // Convert QList<> from C++ memory to manually-managed C memory
    Accounts__Service** _arr = static_cast<Accounts__Service**>(malloc(sizeof(Accounts__Service*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new Accounts::Service(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

bool Accounts__Account_Enabled(const Accounts__Account* self) {
    return self->enabled();
}

bool Accounts__Account_IsEnabled(const Accounts__Account* self) {
    return self->isEnabled();
}

void Accounts__Account_SetEnabled(Accounts__Account* self, bool enabled) {
    self->setEnabled(enabled);
}

unsigned int Accounts__Account_CredentialsId(Accounts__Account* self) {
    return static_cast<unsigned int>(self->credentialsId());
}

void Accounts__Account_SetCredentialsId(Accounts__Account* self, const unsigned int id) {
    self->setCredentialsId(static_cast<const uint>(id));
}

libqt_string Accounts__Account_DisplayName(const Accounts__Account* self) {
    auto _ret = self->displayName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void Accounts__Account_SetDisplayName(Accounts__Account* self, const libqt_string displayName) {
    QString displayName_QString = QString::fromUtf8(displayName.data, displayName.len);
    self->setDisplayName(displayName_QString);
}

libqt_string Accounts__Account_ProviderName(const Accounts__Account* self) {
    auto _ret = self->providerName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

Accounts__Provider* Accounts__Account_Provider(const Accounts__Account* self) {
    return new Accounts::Provider(self->provider());
}

void Accounts__Account_SelectService(Accounts__Account* self) {
    self->selectService();
}

Accounts__Service* Accounts__Account_SelectedService(const Accounts__Account* self) {
    return new Accounts::Service(self->selectedService());
}

libqt_list /* of libqt_string */ Accounts__Account_AllKeys(const Accounts__Account* self) {
    QList<QString> _ret = self->allKeys();
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

void Accounts__Account_BeginGroup(Accounts__Account* self, const libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    self->beginGroup(prefix_QString);
}

libqt_list /* of libqt_string */ Accounts__Account_ChildGroups(const Accounts__Account* self) {
    QList<QString> _ret = self->childGroups();
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

libqt_list /* of libqt_string */ Accounts__Account_ChildKeys(const Accounts__Account* self) {
    QList<QString> _ret = self->childKeys();
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

void Accounts__Account_Clear(Accounts__Account* self) {
    self->clear();
}

bool Accounts__Account_Contains(const Accounts__Account* self, const libqt_string key) {
    QString key_QString = QString::fromUtf8(key.data, key.len);
    return self->contains(key_QString);
}

void Accounts__Account_EndGroup(Accounts__Account* self) {
    self->endGroup();
}

libqt_string Accounts__Account_Group(const Accounts__Account* self) {
    auto _ret = self->group();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool Accounts__Account_IsWritable(const Accounts__Account* self) {
    return self->isWritable();
}

void Accounts__Account_Remove(Accounts__Account* self, const libqt_string key) {
    QString key_QString = QString::fromUtf8(key.data, key.len);
    self->remove(key_QString);
}

void Accounts__Account_SetValue(Accounts__Account* self, const libqt_string key, const QVariant* value) {
    QString key_QString = QString::fromUtf8(key.data, key.len);
    self->setValue(key_QString, *value);
}

QVariant* Accounts__Account_Value(const Accounts__Account* self, const libqt_string key) {
    QString key_QString = QString::fromUtf8(key.data, key.len);
    return new QVariant(self->value(key_QString));
}

int Accounts__Account_Value2(const Accounts__Account* self, const libqt_string key, QVariant* value) {
    QString key_QString = QString::fromUtf8(key.data, key.len);
    return static_cast<int>(self->value(key_QString, *value));
}

libqt_string Accounts__Account_ValueAsString(const Accounts__Account* self, const libqt_string key) {
    QString key_QString = QString::fromUtf8(key.data, key.len);
    auto _ret = self->valueAsString(key_QString);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int Accounts__Account_ValueAsInt(const Accounts__Account* self, const libqt_string key) {
    QString key_QString = QString::fromUtf8(key.data, key.len);
    return self->valueAsInt(key_QString);
}

unsigned long long Accounts__Account_ValueAsUInt64(const Accounts__Account* self, const libqt_string key) {
    QString key_QString = QString::fromUtf8(key.data, key.len);
    return static_cast<unsigned long long>(self->valueAsUInt64(key_QString));
}

bool Accounts__Account_ValueAsBool(const Accounts__Account* self, const libqt_string key) {
    QString key_QString = QString::fromUtf8(key.data, key.len);
    return self->valueAsBool(key_QString);
}

Accounts__Watch* Accounts__Account_WatchKey(Accounts__Account* self) {
    return self->watchKey();
}

void Accounts__Account_Sync(Accounts__Account* self) {
    self->sync();
}

bool Accounts__Account_SyncAndBlock(Accounts__Account* self) {
    return self->syncAndBlock();
}

void Accounts__Account_Remove2(Accounts__Account* self) {
    self->remove();
}

void Accounts__Account_Sign(Accounts__Account* self, const libqt_string key, const char* token) {
    QString key_QString = QString::fromUtf8(key.data, key.len);
    self->sign(key_QString, token);
}

bool Accounts__Account_Verify(Accounts__Account* self, const libqt_string key, const char** token) {
    QString key_QString = QString::fromUtf8(key.data, key.len);
    return self->verify(key_QString, token);
}

bool Accounts__Account_VerifyWithTokens(Accounts__Account* self, const libqt_string key, libqt_list /* of const char* */ tokens) {
    QString key_QString = QString::fromUtf8(key.data, key.len);
    QList<const char*> tokens_QList;
    tokens_QList.reserve(tokens.len);
    const char** tokens_arr = static_cast<const char**>(tokens.data);
    for (size_t i = 0; i < tokens.len; ++i) {
        tokens_QList.push_back(tokens_arr[i]);
    }
    return self->verifyWithTokens(key_QString, tokens_QList);
}

void Accounts__Account_DisplayNameChanged(Accounts__Account* self, const libqt_string displayName) {
    QString displayName_QString = QString::fromUtf8(displayName.data, displayName.len);
    self->displayNameChanged(displayName_QString);
}

void Accounts__Account_Connect_DisplayNameChanged(Accounts__Account* self, intptr_t slot) {
    void (*slotFunc)(Accounts__Account*, const char*) = reinterpret_cast<void (*)(Accounts__Account*, const char*)>(slot);
    Accounts::Account::connect(self,
                               static_cast<void (Accounts::Account::*)(const QString&)>(&Accounts::Account::displayNameChanged),
                               [self, slotFunc](const QString& displayName) {
                                   const auto displayName_ret = displayName;
                                   // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
                                   QByteArray displayName_b = displayName_ret.toUtf8();
                                   auto displayName_str_len = displayName_b.length();
                                   const char* displayName_str = static_cast<const char*>(malloc(displayName_str_len + 1));
                                   memcpy((void*)displayName_str, displayName_b.data(), displayName_str_len);
                                   ((char*)displayName_str)[displayName_str_len] = '\0';
                                   const char* sigval1 = displayName_str;
                                   slotFunc(self, sigval1);
                                   libqt_free(displayName_str);
                               });
}

void Accounts__Account_EnabledChanged(Accounts__Account* self, const libqt_string serviceName, bool enabled) {
    QString serviceName_QString = QString::fromUtf8(serviceName.data, serviceName.len);
    self->enabledChanged(serviceName_QString, enabled);
}

void Accounts__Account_Connect_EnabledChanged(Accounts__Account* self, intptr_t slot) {
    void (*slotFunc)(Accounts__Account*, const char*, bool) = reinterpret_cast<void (*)(Accounts__Account*, const char*, bool)>(slot);
    Accounts::Account::connect(self,
                               static_cast<void (Accounts::Account::*)(const QString&, bool)>(&Accounts::Account::enabledChanged),
                               [self, slotFunc](const QString& serviceName, bool enabled) {
                                   const auto serviceName_ret = serviceName;
                                   // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
                                   QByteArray serviceName_b = serviceName_ret.toUtf8();
                                   auto serviceName_str_len = serviceName_b.length();
                                   const char* serviceName_str = static_cast<const char*>(malloc(serviceName_str_len + 1));
                                   memcpy((void*)serviceName_str, serviceName_b.data(), serviceName_str_len);
                                   ((char*)serviceName_str)[serviceName_str_len] = '\0';
                                   const char* sigval1 = serviceName_str;
                                   bool sigval2 = enabled;
                                   slotFunc(self, sigval1, sigval2);
                                   libqt_free(serviceName_str);
                               });
}

void Accounts__Account_Error(Accounts__Account* self, Accounts__Error* errorVal) {
    self->error(*errorVal);
}

void Accounts__Account_Connect_Error(Accounts__Account* self, intptr_t slot) {
    void (*slotFunc)(Accounts__Account*, Accounts__Error*) = reinterpret_cast<void (*)(Accounts__Account*, Accounts__Error*)>(slot);
    Accounts::Account::connect(self,
                               static_cast<void (Accounts::Account::*)(Accounts::Error)>(&Accounts::Account::error),
                               [self, slotFunc](Accounts::Error errorVal) {
                                   Accounts__Error* sigval1 = new Accounts::Error(errorVal);
                                   slotFunc(self, sigval1);
                               });
}

void Accounts__Account_Synced(Accounts__Account* self) {
    self->synced();
}

void Accounts__Account_Connect_Synced(Accounts__Account* self, intptr_t slot) {
    void (*slotFunc)(Accounts__Account*) = reinterpret_cast<void (*)(Accounts__Account*)>(slot);
    Accounts::Account::connect(self,
                               static_cast<void (Accounts::Account::*)()>(&Accounts::Account::synced),
                               [self, slotFunc]() {
                                   slotFunc(self);
                               });
}

void Accounts__Account_Removed(Accounts__Account* self) {
    self->removed();
}

void Accounts__Account_Connect_Removed(Accounts__Account* self, intptr_t slot) {
    void (*slotFunc)(Accounts__Account*) = reinterpret_cast<void (*)(Accounts__Account*)>(slot);
    Accounts::Account::connect(self,
                               static_cast<void (Accounts::Account::*)()>(&Accounts::Account::removed),
                               [self, slotFunc]() {
                                   slotFunc(self);
                               });
}

libqt_string Accounts__Account_Tr2(const char* s, const char* c) {
    auto _ret = Accounts::Account::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string Accounts__Account_Tr3(const char* s, const char* c, int n) {
    auto _ret = Accounts::Account::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

Accounts__Account* Accounts__Account_FromId3(Accounts__Manager* manager, unsigned int id, QObject* parent) {
    return Accounts::Account::fromId(manager, static_cast<Accounts::AccountId>(id), parent);
}

libqt_list /* of Accounts__Service* */ Accounts__Account_Services1(const Accounts__Account* self, const libqt_string serviceType) {
    QString serviceType_QString = QString::fromUtf8(serviceType.data, serviceType.len);
    QList<Accounts::Service> _ret = self->services(serviceType_QString);
    // Convert QList<> from C++ memory to manually-managed C memory
    Accounts__Service** _arr = static_cast<Accounts__Service**>(malloc(sizeof(Accounts__Service*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new Accounts::Service(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void Accounts__Account_SelectService1(Accounts__Account* self, const Accounts__Service* service) {
    self->selectService(*service);
}

QVariant* Accounts__Account_Value22(const Accounts__Account* self, const libqt_string key, const QVariant* defaultValue) {
    QString key_QString = QString::fromUtf8(key.data, key.len);
    return new QVariant(self->value(key_QString, *defaultValue));
}

QVariant* Accounts__Account_Value3(const Accounts__Account* self, const libqt_string key, const QVariant* defaultValue, int* source) {
    QString key_QString = QString::fromUtf8(key.data, key.len);
    return new QVariant(self->value(key_QString, *defaultValue, reinterpret_cast<Accounts::SettingSource*>(source)));
}

libqt_string Accounts__Account_ValueAsString2(const Accounts__Account* self, const libqt_string key, libqt_string default_value) {
    QString key_QString = QString::fromUtf8(key.data, key.len);
    QString default_value_QString = QString::fromUtf8(default_value.data, default_value.len);
    auto _ret = self->valueAsString(key_QString, default_value_QString);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string Accounts__Account_ValueAsString3(const Accounts__Account* self, const libqt_string key, libqt_string default_value, int* source) {
    QString key_QString = QString::fromUtf8(key.data, key.len);
    QString default_value_QString = QString::fromUtf8(default_value.data, default_value.len);
    auto _ret = self->valueAsString(key_QString, default_value_QString, reinterpret_cast<Accounts::SettingSource*>(source));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int Accounts__Account_ValueAsInt2(const Accounts__Account* self, const libqt_string key, int default_value) {
    QString key_QString = QString::fromUtf8(key.data, key.len);
    return self->valueAsInt(key_QString, static_cast<int>(default_value));
}

int Accounts__Account_ValueAsInt3(const Accounts__Account* self, const libqt_string key, int default_value, int* source) {
    QString key_QString = QString::fromUtf8(key.data, key.len);
    return self->valueAsInt(key_QString, static_cast<int>(default_value), reinterpret_cast<Accounts::SettingSource*>(source));
}

unsigned long long Accounts__Account_ValueAsUInt642(const Accounts__Account* self, const libqt_string key, unsigned long long default_value) {
    QString key_QString = QString::fromUtf8(key.data, key.len);
    return static_cast<unsigned long long>(self->valueAsUInt64(key_QString, static_cast<quint64>(default_value)));
}

unsigned long long Accounts__Account_ValueAsUInt643(const Accounts__Account* self, const libqt_string key, unsigned long long default_value, int* source) {
    QString key_QString = QString::fromUtf8(key.data, key.len);
    return static_cast<unsigned long long>(self->valueAsUInt64(key_QString, static_cast<quint64>(default_value), reinterpret_cast<Accounts::SettingSource*>(source)));
}

bool Accounts__Account_ValueAsBool2(const Accounts__Account* self, const libqt_string key, bool default_value) {
    QString key_QString = QString::fromUtf8(key.data, key.len);
    return self->valueAsBool(key_QString, default_value);
}

bool Accounts__Account_ValueAsBool3(const Accounts__Account* self, const libqt_string key, bool default_value, int* source) {
    QString key_QString = QString::fromUtf8(key.data, key.len);
    return self->valueAsBool(key_QString, default_value, reinterpret_cast<Accounts::SettingSource*>(source));
}

Accounts__Watch* Accounts__Account_WatchKey1(Accounts__Account* self, const libqt_string key) {
    QString key_QString = QString::fromUtf8(key.data, key.len);
    return self->watchKey(key_QString);
}

// Base class handler implementation
QMetaObject* Accounts__Account_SuperMetaObject(const Accounts__Account* self) {
    return (QMetaObject*)self->Accounts::Account::metaObject();
}

// Auxiliary method to allow providing re-implementation
void Accounts__Account_OnMetaObject(Accounts__Account* self, intptr_t slot) {
    if (auto* vaccountsaccount = const_cast<VirtualAccountsAccount*>(dynamic_cast<const VirtualAccountsAccount*>(self)))
        vaccountsaccount->accounts__account_metaobject_callback = reinterpret_cast<VirtualAccountsAccount::Accounts__Account_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* Accounts__Account_SuperMetacast(Accounts__Account* self, const char* param1) {
    return self->Accounts::Account::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void Accounts__Account_OnMetacast(Accounts__Account* self, intptr_t slot) {
    if (auto* vaccountsaccount = dynamic_cast<VirtualAccountsAccount*>(self))
        vaccountsaccount->accounts__account_metacast_callback = reinterpret_cast<VirtualAccountsAccount::Accounts__Account_Metacast_Callback>(slot);
}

// Base class handler implementation
int Accounts__Account_SuperMetacall(Accounts__Account* self, int param1, int param2, void** param3) {
    return self->Accounts::Account::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void Accounts__Account_OnMetacall(Accounts__Account* self, intptr_t slot) {
    if (auto* vaccountsaccount = dynamic_cast<VirtualAccountsAccount*>(self))
        vaccountsaccount->accounts__account_metacall_callback = reinterpret_cast<VirtualAccountsAccount::Accounts__Account_Metacall_Callback>(slot);
}

// Derived class handler implementation
bool Accounts__Account_Event(Accounts__Account* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool Accounts__Account_SuperEvent(Accounts__Account* self, QEvent* event) {
    return self->Accounts::Account::event(event);
}

// Auxiliary method to allow providing re-implementation
void Accounts__Account_OnEvent(Accounts__Account* self, intptr_t slot) {
    if (auto* vaccountsaccount = dynamic_cast<VirtualAccountsAccount*>(self))
        vaccountsaccount->accounts__account_event_callback = reinterpret_cast<VirtualAccountsAccount::Accounts__Account_Event_Callback>(slot);
}

// Derived class handler implementation
bool Accounts__Account_EventFilter(Accounts__Account* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool Accounts__Account_SuperEventFilter(Accounts__Account* self, QObject* watched, QEvent* event) {
    return self->Accounts::Account::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void Accounts__Account_OnEventFilter(Accounts__Account* self, intptr_t slot) {
    if (auto* vaccountsaccount = dynamic_cast<VirtualAccountsAccount*>(self))
        vaccountsaccount->accounts__account_eventfilter_callback = reinterpret_cast<VirtualAccountsAccount::Accounts__Account_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void Accounts__Account_TimerEvent(Accounts__Account* self, QTimerEvent* event) {
    auto* vaccountsaccount = dynamic_cast<VirtualAccountsAccount*>(self);
    if (vaccountsaccount) {
        vaccountsaccount->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method Accounts::Account::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Accounts__Account_SuperTimerEvent(Accounts__Account* self, QTimerEvent* event) {
    if (auto* vaccountsaccount = dynamic_cast<VirtualAccountsAccount*>(self)) {
        vaccountsaccount->Accounts::Account::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method Accounts::Account::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Accounts__Account_OnTimerEvent(Accounts__Account* self, intptr_t slot) {
    if (auto* vaccountsaccount = dynamic_cast<VirtualAccountsAccount*>(self))
        vaccountsaccount->accounts__account_timerevent_callback = reinterpret_cast<VirtualAccountsAccount::Accounts__Account_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void Accounts__Account_ChildEvent(Accounts__Account* self, QChildEvent* event) {
    auto* vaccountsaccount = dynamic_cast<VirtualAccountsAccount*>(self);
    if (vaccountsaccount) {
        vaccountsaccount->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method Accounts::Account::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Accounts__Account_SuperChildEvent(Accounts__Account* self, QChildEvent* event) {
    if (auto* vaccountsaccount = dynamic_cast<VirtualAccountsAccount*>(self)) {
        vaccountsaccount->Accounts::Account::childEvent(event);
    } else
        qFatal("Error: Protected virtual method Accounts::Account::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Accounts__Account_OnChildEvent(Accounts__Account* self, intptr_t slot) {
    if (auto* vaccountsaccount = dynamic_cast<VirtualAccountsAccount*>(self))
        vaccountsaccount->accounts__account_childevent_callback = reinterpret_cast<VirtualAccountsAccount::Accounts__Account_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void Accounts__Account_CustomEvent(Accounts__Account* self, QEvent* event) {
    auto* vaccountsaccount = dynamic_cast<VirtualAccountsAccount*>(self);
    if (vaccountsaccount) {
        vaccountsaccount->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method Accounts::Account::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Accounts__Account_SuperCustomEvent(Accounts__Account* self, QEvent* event) {
    if (auto* vaccountsaccount = dynamic_cast<VirtualAccountsAccount*>(self)) {
        vaccountsaccount->Accounts::Account::customEvent(event);
    } else
        qFatal("Error: Protected virtual method Accounts::Account::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Accounts__Account_OnCustomEvent(Accounts__Account* self, intptr_t slot) {
    if (auto* vaccountsaccount = dynamic_cast<VirtualAccountsAccount*>(self))
        vaccountsaccount->accounts__account_customevent_callback = reinterpret_cast<VirtualAccountsAccount::Accounts__Account_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void Accounts__Account_ConnectNotify(Accounts__Account* self, const QMetaMethod* signal) {
    auto* vaccountsaccount = dynamic_cast<VirtualAccountsAccount*>(self);
    if (vaccountsaccount) {
        vaccountsaccount->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method Accounts::Account::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void Accounts__Account_SuperConnectNotify(Accounts__Account* self, const QMetaMethod* signal) {
    if (auto* vaccountsaccount = dynamic_cast<VirtualAccountsAccount*>(self)) {
        vaccountsaccount->Accounts::Account::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method Accounts::Account::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Accounts__Account_OnConnectNotify(Accounts__Account* self, intptr_t slot) {
    if (auto* vaccountsaccount = dynamic_cast<VirtualAccountsAccount*>(self))
        vaccountsaccount->accounts__account_connectnotify_callback = reinterpret_cast<VirtualAccountsAccount::Accounts__Account_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void Accounts__Account_DisconnectNotify(Accounts__Account* self, const QMetaMethod* signal) {
    auto* vaccountsaccount = dynamic_cast<VirtualAccountsAccount*>(self);
    if (vaccountsaccount) {
        vaccountsaccount->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method Accounts::Account::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void Accounts__Account_SuperDisconnectNotify(Accounts__Account* self, const QMetaMethod* signal) {
    if (auto* vaccountsaccount = dynamic_cast<VirtualAccountsAccount*>(self)) {
        vaccountsaccount->Accounts::Account::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method Accounts::Account::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Accounts__Account_OnDisconnectNotify(Accounts__Account* self, intptr_t slot) {
    if (auto* vaccountsaccount = dynamic_cast<VirtualAccountsAccount*>(self))
        vaccountsaccount->accounts__account_disconnectnotify_callback = reinterpret_cast<VirtualAccountsAccount::Accounts__Account_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* Accounts__Account_Sender(const Accounts__Account* self) {
    if (auto* vaccountsaccount = const_cast<VirtualAccountsAccount*>(dynamic_cast<const VirtualAccountsAccount*>(self))) {
        return vaccountsaccount->VirtualAccountsAccount::sender();
    } else
        qFatal("Error: Protected method Accounts::Account::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int Accounts__Account_SenderSignalIndex(const Accounts__Account* self) {
    if (auto* vaccountsaccount = const_cast<VirtualAccountsAccount*>(dynamic_cast<const VirtualAccountsAccount*>(self))) {
        return vaccountsaccount->VirtualAccountsAccount::senderSignalIndex();
    } else
        qFatal("Error: Protected method Accounts::Account::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int Accounts__Account_Receivers(const Accounts__Account* self, const char* signal) {
    if (auto* vaccountsaccount = const_cast<VirtualAccountsAccount*>(dynamic_cast<const VirtualAccountsAccount*>(self))) {
        return vaccountsaccount->VirtualAccountsAccount::receivers(signal);
    } else
        qFatal("Error: Protected method Accounts::Account::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool Accounts__Account_IsSignalConnected(const Accounts__Account* self, const QMetaMethod* signal) {
    if (auto* vaccountsaccount = const_cast<VirtualAccountsAccount*>(dynamic_cast<const VirtualAccountsAccount*>(self))) {
        return vaccountsaccount->VirtualAccountsAccount::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method Accounts::Account::isSignalConnected called without a directly constructed type");
}

void Accounts__Account_Delete(Accounts__Account* self) {
    delete self;
}
