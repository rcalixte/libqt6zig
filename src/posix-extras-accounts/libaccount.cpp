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
#include <QByteArray>
#include <cstring>
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
    auto* vaccounts__watch = dynamic_cast<VirtualAccountsWatch*>(self);
    if (vaccounts__watch && vaccounts__watch->isVirtualAccountsWatch) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualAccountsWatch*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

void Accounts__Watch_Notify(Accounts__Watch* self, const char* key) {
    self->notify(key);
}

void Accounts__Watch_Connect_Notify(Accounts__Watch* self, intptr_t slot) {
    void (*slotFunc)(Accounts__Watch*, const char*) = reinterpret_cast<void (*)(Accounts__Watch*, const char*)>(slot);
    Accounts::Watch::connect(self, &Accounts::Watch::notify, [self, slotFunc](const char* key) {
        const char* sigval1 = (const char*)key;
        slotFunc(self, sigval1);
    });
}

// Base class handler implementation
int Accounts__Watch_QBaseMetacall(Accounts__Watch* self, int param1, int param2, void** param3) {
    auto* vaccountswatch = dynamic_cast<VirtualAccountsWatch*>(self);
    if (vaccountswatch && vaccountswatch->isVirtualAccountsWatch) {
        vaccountswatch->setAccounts__Watch_Metacall_IsBase(true);
        return vaccountswatch->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->Accounts::Watch::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void Accounts__Watch_OnMetacall(Accounts__Watch* self, intptr_t slot) {
    auto* vaccountswatch = dynamic_cast<VirtualAccountsWatch*>(self);
    if (vaccountswatch && vaccountswatch->isVirtualAccountsWatch) {
        vaccountswatch->setAccounts__Watch_Metacall_Callback(reinterpret_cast<VirtualAccountsWatch::Accounts__Watch_Metacall_Callback>(slot));
    }
}

// Derived class handler implementation
bool Accounts__Watch_Event(Accounts__Watch* self, QEvent* event) {
    auto* vaccountswatch = dynamic_cast<VirtualAccountsWatch*>(self);
    if (vaccountswatch && vaccountswatch->isVirtualAccountsWatch) {
        return vaccountswatch->event(event);
    } else {
        return self->Accounts::Watch::event(event);
    }
}

// Base class handler implementation
bool Accounts__Watch_QBaseEvent(Accounts__Watch* self, QEvent* event) {
    auto* vaccountswatch = dynamic_cast<VirtualAccountsWatch*>(self);
    if (vaccountswatch && vaccountswatch->isVirtualAccountsWatch) {
        vaccountswatch->setAccounts__Watch_Event_IsBase(true);
        return vaccountswatch->event(event);
    } else {
        return self->Accounts::Watch::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void Accounts__Watch_OnEvent(Accounts__Watch* self, intptr_t slot) {
    auto* vaccountswatch = dynamic_cast<VirtualAccountsWatch*>(self);
    if (vaccountswatch && vaccountswatch->isVirtualAccountsWatch) {
        vaccountswatch->setAccounts__Watch_Event_Callback(reinterpret_cast<VirtualAccountsWatch::Accounts__Watch_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool Accounts__Watch_EventFilter(Accounts__Watch* self, QObject* watched, QEvent* event) {
    auto* vaccountswatch = dynamic_cast<VirtualAccountsWatch*>(self);
    if (vaccountswatch && vaccountswatch->isVirtualAccountsWatch) {
        return vaccountswatch->eventFilter(watched, event);
    } else {
        return self->Accounts::Watch::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool Accounts__Watch_QBaseEventFilter(Accounts__Watch* self, QObject* watched, QEvent* event) {
    auto* vaccountswatch = dynamic_cast<VirtualAccountsWatch*>(self);
    if (vaccountswatch && vaccountswatch->isVirtualAccountsWatch) {
        vaccountswatch->setAccounts__Watch_EventFilter_IsBase(true);
        return vaccountswatch->eventFilter(watched, event);
    } else {
        return self->Accounts::Watch::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void Accounts__Watch_OnEventFilter(Accounts__Watch* self, intptr_t slot) {
    auto* vaccountswatch = dynamic_cast<VirtualAccountsWatch*>(self);
    if (vaccountswatch && vaccountswatch->isVirtualAccountsWatch) {
        vaccountswatch->setAccounts__Watch_EventFilter_Callback(reinterpret_cast<VirtualAccountsWatch::Accounts__Watch_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void Accounts__Watch_TimerEvent(Accounts__Watch* self, QTimerEvent* event) {
    auto* vaccountswatch = dynamic_cast<VirtualAccountsWatch*>(self);
    if (vaccountswatch && vaccountswatch->isVirtualAccountsWatch) {
        vaccountswatch->timerEvent(event);
    } else {
        ((VirtualAccountsWatch*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void Accounts__Watch_QBaseTimerEvent(Accounts__Watch* self, QTimerEvent* event) {
    auto* vaccountswatch = dynamic_cast<VirtualAccountsWatch*>(self);
    if (vaccountswatch && vaccountswatch->isVirtualAccountsWatch) {
        vaccountswatch->setAccounts__Watch_TimerEvent_IsBase(true);
        vaccountswatch->timerEvent(event);
    } else {
        ((VirtualAccountsWatch*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void Accounts__Watch_OnTimerEvent(Accounts__Watch* self, intptr_t slot) {
    auto* vaccountswatch = dynamic_cast<VirtualAccountsWatch*>(self);
    if (vaccountswatch && vaccountswatch->isVirtualAccountsWatch) {
        vaccountswatch->setAccounts__Watch_TimerEvent_Callback(reinterpret_cast<VirtualAccountsWatch::Accounts__Watch_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void Accounts__Watch_ChildEvent(Accounts__Watch* self, QChildEvent* event) {
    auto* vaccountswatch = dynamic_cast<VirtualAccountsWatch*>(self);
    if (vaccountswatch && vaccountswatch->isVirtualAccountsWatch) {
        vaccountswatch->childEvent(event);
    } else {
        ((VirtualAccountsWatch*)self)->childEvent(event);
    }
}

// Base class handler implementation
void Accounts__Watch_QBaseChildEvent(Accounts__Watch* self, QChildEvent* event) {
    auto* vaccountswatch = dynamic_cast<VirtualAccountsWatch*>(self);
    if (vaccountswatch && vaccountswatch->isVirtualAccountsWatch) {
        vaccountswatch->setAccounts__Watch_ChildEvent_IsBase(true);
        vaccountswatch->childEvent(event);
    } else {
        ((VirtualAccountsWatch*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void Accounts__Watch_OnChildEvent(Accounts__Watch* self, intptr_t slot) {
    auto* vaccountswatch = dynamic_cast<VirtualAccountsWatch*>(self);
    if (vaccountswatch && vaccountswatch->isVirtualAccountsWatch) {
        vaccountswatch->setAccounts__Watch_ChildEvent_Callback(reinterpret_cast<VirtualAccountsWatch::Accounts__Watch_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void Accounts__Watch_CustomEvent(Accounts__Watch* self, QEvent* event) {
    auto* vaccountswatch = dynamic_cast<VirtualAccountsWatch*>(self);
    if (vaccountswatch && vaccountswatch->isVirtualAccountsWatch) {
        vaccountswatch->customEvent(event);
    } else {
        ((VirtualAccountsWatch*)self)->customEvent(event);
    }
}

// Base class handler implementation
void Accounts__Watch_QBaseCustomEvent(Accounts__Watch* self, QEvent* event) {
    auto* vaccountswatch = dynamic_cast<VirtualAccountsWatch*>(self);
    if (vaccountswatch && vaccountswatch->isVirtualAccountsWatch) {
        vaccountswatch->setAccounts__Watch_CustomEvent_IsBase(true);
        vaccountswatch->customEvent(event);
    } else {
        ((VirtualAccountsWatch*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void Accounts__Watch_OnCustomEvent(Accounts__Watch* self, intptr_t slot) {
    auto* vaccountswatch = dynamic_cast<VirtualAccountsWatch*>(self);
    if (vaccountswatch && vaccountswatch->isVirtualAccountsWatch) {
        vaccountswatch->setAccounts__Watch_CustomEvent_Callback(reinterpret_cast<VirtualAccountsWatch::Accounts__Watch_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void Accounts__Watch_ConnectNotify(Accounts__Watch* self, const QMetaMethod* signal) {
    auto* vaccountswatch = dynamic_cast<VirtualAccountsWatch*>(self);
    if (vaccountswatch && vaccountswatch->isVirtualAccountsWatch) {
        vaccountswatch->connectNotify(*signal);
    } else {
        ((VirtualAccountsWatch*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void Accounts__Watch_QBaseConnectNotify(Accounts__Watch* self, const QMetaMethod* signal) {
    auto* vaccountswatch = dynamic_cast<VirtualAccountsWatch*>(self);
    if (vaccountswatch && vaccountswatch->isVirtualAccountsWatch) {
        vaccountswatch->setAccounts__Watch_ConnectNotify_IsBase(true);
        vaccountswatch->connectNotify(*signal);
    } else {
        ((VirtualAccountsWatch*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void Accounts__Watch_OnConnectNotify(Accounts__Watch* self, intptr_t slot) {
    auto* vaccountswatch = dynamic_cast<VirtualAccountsWatch*>(self);
    if (vaccountswatch && vaccountswatch->isVirtualAccountsWatch) {
        vaccountswatch->setAccounts__Watch_ConnectNotify_Callback(reinterpret_cast<VirtualAccountsWatch::Accounts__Watch_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void Accounts__Watch_DisconnectNotify(Accounts__Watch* self, const QMetaMethod* signal) {
    auto* vaccountswatch = dynamic_cast<VirtualAccountsWatch*>(self);
    if (vaccountswatch && vaccountswatch->isVirtualAccountsWatch) {
        vaccountswatch->disconnectNotify(*signal);
    } else {
        ((VirtualAccountsWatch*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void Accounts__Watch_QBaseDisconnectNotify(Accounts__Watch* self, const QMetaMethod* signal) {
    auto* vaccountswatch = dynamic_cast<VirtualAccountsWatch*>(self);
    if (vaccountswatch && vaccountswatch->isVirtualAccountsWatch) {
        vaccountswatch->setAccounts__Watch_DisconnectNotify_IsBase(true);
        vaccountswatch->disconnectNotify(*signal);
    } else {
        ((VirtualAccountsWatch*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void Accounts__Watch_OnDisconnectNotify(Accounts__Watch* self, intptr_t slot) {
    auto* vaccountswatch = dynamic_cast<VirtualAccountsWatch*>(self);
    if (vaccountswatch && vaccountswatch->isVirtualAccountsWatch) {
        vaccountswatch->setAccounts__Watch_DisconnectNotify_Callback(reinterpret_cast<VirtualAccountsWatch::Accounts__Watch_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* Accounts__Watch_Sender(const Accounts__Watch* self) {
    auto* vaccountswatch = const_cast<VirtualAccountsWatch*>(dynamic_cast<const VirtualAccountsWatch*>(self));
    if (vaccountswatch && vaccountswatch->isVirtualAccountsWatch) {
        return vaccountswatch->sender();
    } else {
        return ((VirtualAccountsWatch*)self)->sender();
    }
}

// Base class handler implementation
QObject* Accounts__Watch_QBaseSender(const Accounts__Watch* self) {
    auto* vaccountswatch = const_cast<VirtualAccountsWatch*>(dynamic_cast<const VirtualAccountsWatch*>(self));
    if (vaccountswatch && vaccountswatch->isVirtualAccountsWatch) {
        vaccountswatch->setAccounts__Watch_Sender_IsBase(true);
        return vaccountswatch->sender();
    } else {
        return ((VirtualAccountsWatch*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void Accounts__Watch_OnSender(const Accounts__Watch* self, intptr_t slot) {
    auto* vaccountswatch = const_cast<VirtualAccountsWatch*>(dynamic_cast<const VirtualAccountsWatch*>(self));
    if (vaccountswatch && vaccountswatch->isVirtualAccountsWatch) {
        vaccountswatch->setAccounts__Watch_Sender_Callback(reinterpret_cast<VirtualAccountsWatch::Accounts__Watch_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int Accounts__Watch_SenderSignalIndex(const Accounts__Watch* self) {
    auto* vaccountswatch = const_cast<VirtualAccountsWatch*>(dynamic_cast<const VirtualAccountsWatch*>(self));
    if (vaccountswatch && vaccountswatch->isVirtualAccountsWatch) {
        return vaccountswatch->senderSignalIndex();
    } else {
        return ((VirtualAccountsWatch*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int Accounts__Watch_QBaseSenderSignalIndex(const Accounts__Watch* self) {
    auto* vaccountswatch = const_cast<VirtualAccountsWatch*>(dynamic_cast<const VirtualAccountsWatch*>(self));
    if (vaccountswatch && vaccountswatch->isVirtualAccountsWatch) {
        vaccountswatch->setAccounts__Watch_SenderSignalIndex_IsBase(true);
        return vaccountswatch->senderSignalIndex();
    } else {
        return ((VirtualAccountsWatch*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void Accounts__Watch_OnSenderSignalIndex(const Accounts__Watch* self, intptr_t slot) {
    auto* vaccountswatch = const_cast<VirtualAccountsWatch*>(dynamic_cast<const VirtualAccountsWatch*>(self));
    if (vaccountswatch && vaccountswatch->isVirtualAccountsWatch) {
        vaccountswatch->setAccounts__Watch_SenderSignalIndex_Callback(reinterpret_cast<VirtualAccountsWatch::Accounts__Watch_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int Accounts__Watch_Receivers(const Accounts__Watch* self, const char* signal) {
    auto* vaccountswatch = const_cast<VirtualAccountsWatch*>(dynamic_cast<const VirtualAccountsWatch*>(self));
    if (vaccountswatch && vaccountswatch->isVirtualAccountsWatch) {
        return vaccountswatch->receivers(signal);
    } else {
        return ((VirtualAccountsWatch*)self)->receivers(signal);
    }
}

// Base class handler implementation
int Accounts__Watch_QBaseReceivers(const Accounts__Watch* self, const char* signal) {
    auto* vaccountswatch = const_cast<VirtualAccountsWatch*>(dynamic_cast<const VirtualAccountsWatch*>(self));
    if (vaccountswatch && vaccountswatch->isVirtualAccountsWatch) {
        vaccountswatch->setAccounts__Watch_Receivers_IsBase(true);
        return vaccountswatch->receivers(signal);
    } else {
        return ((VirtualAccountsWatch*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void Accounts__Watch_OnReceivers(const Accounts__Watch* self, intptr_t slot) {
    auto* vaccountswatch = const_cast<VirtualAccountsWatch*>(dynamic_cast<const VirtualAccountsWatch*>(self));
    if (vaccountswatch && vaccountswatch->isVirtualAccountsWatch) {
        vaccountswatch->setAccounts__Watch_Receivers_Callback(reinterpret_cast<VirtualAccountsWatch::Accounts__Watch_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool Accounts__Watch_IsSignalConnected(const Accounts__Watch* self, const QMetaMethod* signal) {
    auto* vaccountswatch = const_cast<VirtualAccountsWatch*>(dynamic_cast<const VirtualAccountsWatch*>(self));
    if (vaccountswatch && vaccountswatch->isVirtualAccountsWatch) {
        return vaccountswatch->isSignalConnected(*signal);
    } else {
        return ((VirtualAccountsWatch*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool Accounts__Watch_QBaseIsSignalConnected(const Accounts__Watch* self, const QMetaMethod* signal) {
    auto* vaccountswatch = const_cast<VirtualAccountsWatch*>(dynamic_cast<const VirtualAccountsWatch*>(self));
    if (vaccountswatch && vaccountswatch->isVirtualAccountsWatch) {
        vaccountswatch->setAccounts__Watch_IsSignalConnected_IsBase(true);
        return vaccountswatch->isSignalConnected(*signal);
    } else {
        return ((VirtualAccountsWatch*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void Accounts__Watch_OnIsSignalConnected(const Accounts__Watch* self, intptr_t slot) {
    auto* vaccountswatch = const_cast<VirtualAccountsWatch*>(dynamic_cast<const VirtualAccountsWatch*>(self));
    if (vaccountswatch && vaccountswatch->isVirtualAccountsWatch) {
        vaccountswatch->setAccounts__Watch_IsSignalConnected_Callback(reinterpret_cast<VirtualAccountsWatch::Accounts__Watch_IsSignalConnected_Callback>(slot));
    }
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
    auto* vaccounts__account = dynamic_cast<VirtualAccountsAccount*>(self);
    if (vaccounts__account && vaccounts__account->isVirtualAccountsAccount) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualAccountsAccount*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
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
    QString _ret = self->displayName();
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
    QString _ret = self->providerName();
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

void Accounts__Account_BeginGroup(Accounts__Account* self, const libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    self->beginGroup(prefix_QString);
}

libqt_list /* of libqt_string */ Accounts__Account_ChildGroups(const Accounts__Account* self) {
    QList<QString> _ret = self->childGroups();
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size())));
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

libqt_list /* of libqt_string */ Accounts__Account_ChildKeys(const Accounts__Account* self) {
    QList<QString> _ret = self->childKeys();
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size())));
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
    QString _ret = self->group();
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
    QString _ret = self->valueAsString(key_QString);
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
    Accounts::Account::connect(self, &Accounts::Account::displayNameChanged, [self, slotFunc](const QString& displayName) {
        const QString displayName_ret = displayName;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray displayName_b = displayName_ret.toUtf8();
        const char* displayName_str = static_cast<const char*>(malloc(displayName_b.length() + 1));
        memcpy((void*)displayName_str, displayName_b.data(), displayName_b.length());
        ((char*)displayName_str)[displayName_b.length()] = '\0';
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
    Accounts::Account::connect(self, &Accounts::Account::enabledChanged, [self, slotFunc](const QString& serviceName, bool enabled) {
        const QString serviceName_ret = serviceName;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray serviceName_b = serviceName_ret.toUtf8();
        const char* serviceName_str = static_cast<const char*>(malloc(serviceName_b.length() + 1));
        memcpy((void*)serviceName_str, serviceName_b.data(), serviceName_b.length());
        ((char*)serviceName_str)[serviceName_b.length()] = '\0';
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
    Accounts::Account::connect(self, &Accounts::Account::error, [self, slotFunc](Accounts::Error errorVal) {
        Accounts__Error* sigval1 = new Accounts::Error(errorVal);
        slotFunc(self, sigval1);
    });
}

void Accounts__Account_Synced(Accounts__Account* self) {
    self->synced();
}

void Accounts__Account_Connect_Synced(Accounts__Account* self, intptr_t slot) {
    void (*slotFunc)(Accounts__Account*) = reinterpret_cast<void (*)(Accounts__Account*)>(slot);
    Accounts::Account::connect(self, &Accounts::Account::synced, [self, slotFunc]() {
        slotFunc(self);
    });
}

void Accounts__Account_Removed(Accounts__Account* self) {
    self->removed();
}

void Accounts__Account_Connect_Removed(Accounts__Account* self, intptr_t slot) {
    void (*slotFunc)(Accounts__Account*) = reinterpret_cast<void (*)(Accounts__Account*)>(slot);
    Accounts::Account::connect(self, &Accounts::Account::removed, [self, slotFunc]() {
        slotFunc(self);
    });
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
    QString _ret = self->valueAsString(key_QString, default_value_QString);
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
    QString _ret = self->valueAsString(key_QString, default_value_QString, reinterpret_cast<Accounts::SettingSource*>(source));
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
int Accounts__Account_QBaseMetacall(Accounts__Account* self, int param1, int param2, void** param3) {
    auto* vaccountsaccount = dynamic_cast<VirtualAccountsAccount*>(self);
    if (vaccountsaccount && vaccountsaccount->isVirtualAccountsAccount) {
        vaccountsaccount->setAccounts__Account_Metacall_IsBase(true);
        return vaccountsaccount->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->Accounts::Account::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void Accounts__Account_OnMetacall(Accounts__Account* self, intptr_t slot) {
    auto* vaccountsaccount = dynamic_cast<VirtualAccountsAccount*>(self);
    if (vaccountsaccount && vaccountsaccount->isVirtualAccountsAccount) {
        vaccountsaccount->setAccounts__Account_Metacall_Callback(reinterpret_cast<VirtualAccountsAccount::Accounts__Account_Metacall_Callback>(slot));
    }
}

// Derived class handler implementation
bool Accounts__Account_Event(Accounts__Account* self, QEvent* event) {
    auto* vaccountsaccount = dynamic_cast<VirtualAccountsAccount*>(self);
    if (vaccountsaccount && vaccountsaccount->isVirtualAccountsAccount) {
        return vaccountsaccount->event(event);
    } else {
        return self->Accounts::Account::event(event);
    }
}

// Base class handler implementation
bool Accounts__Account_QBaseEvent(Accounts__Account* self, QEvent* event) {
    auto* vaccountsaccount = dynamic_cast<VirtualAccountsAccount*>(self);
    if (vaccountsaccount && vaccountsaccount->isVirtualAccountsAccount) {
        vaccountsaccount->setAccounts__Account_Event_IsBase(true);
        return vaccountsaccount->event(event);
    } else {
        return self->Accounts::Account::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void Accounts__Account_OnEvent(Accounts__Account* self, intptr_t slot) {
    auto* vaccountsaccount = dynamic_cast<VirtualAccountsAccount*>(self);
    if (vaccountsaccount && vaccountsaccount->isVirtualAccountsAccount) {
        vaccountsaccount->setAccounts__Account_Event_Callback(reinterpret_cast<VirtualAccountsAccount::Accounts__Account_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool Accounts__Account_EventFilter(Accounts__Account* self, QObject* watched, QEvent* event) {
    auto* vaccountsaccount = dynamic_cast<VirtualAccountsAccount*>(self);
    if (vaccountsaccount && vaccountsaccount->isVirtualAccountsAccount) {
        return vaccountsaccount->eventFilter(watched, event);
    } else {
        return self->Accounts::Account::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool Accounts__Account_QBaseEventFilter(Accounts__Account* self, QObject* watched, QEvent* event) {
    auto* vaccountsaccount = dynamic_cast<VirtualAccountsAccount*>(self);
    if (vaccountsaccount && vaccountsaccount->isVirtualAccountsAccount) {
        vaccountsaccount->setAccounts__Account_EventFilter_IsBase(true);
        return vaccountsaccount->eventFilter(watched, event);
    } else {
        return self->Accounts::Account::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void Accounts__Account_OnEventFilter(Accounts__Account* self, intptr_t slot) {
    auto* vaccountsaccount = dynamic_cast<VirtualAccountsAccount*>(self);
    if (vaccountsaccount && vaccountsaccount->isVirtualAccountsAccount) {
        vaccountsaccount->setAccounts__Account_EventFilter_Callback(reinterpret_cast<VirtualAccountsAccount::Accounts__Account_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void Accounts__Account_TimerEvent(Accounts__Account* self, QTimerEvent* event) {
    auto* vaccountsaccount = dynamic_cast<VirtualAccountsAccount*>(self);
    if (vaccountsaccount && vaccountsaccount->isVirtualAccountsAccount) {
        vaccountsaccount->timerEvent(event);
    } else {
        ((VirtualAccountsAccount*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void Accounts__Account_QBaseTimerEvent(Accounts__Account* self, QTimerEvent* event) {
    auto* vaccountsaccount = dynamic_cast<VirtualAccountsAccount*>(self);
    if (vaccountsaccount && vaccountsaccount->isVirtualAccountsAccount) {
        vaccountsaccount->setAccounts__Account_TimerEvent_IsBase(true);
        vaccountsaccount->timerEvent(event);
    } else {
        ((VirtualAccountsAccount*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void Accounts__Account_OnTimerEvent(Accounts__Account* self, intptr_t slot) {
    auto* vaccountsaccount = dynamic_cast<VirtualAccountsAccount*>(self);
    if (vaccountsaccount && vaccountsaccount->isVirtualAccountsAccount) {
        vaccountsaccount->setAccounts__Account_TimerEvent_Callback(reinterpret_cast<VirtualAccountsAccount::Accounts__Account_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void Accounts__Account_ChildEvent(Accounts__Account* self, QChildEvent* event) {
    auto* vaccountsaccount = dynamic_cast<VirtualAccountsAccount*>(self);
    if (vaccountsaccount && vaccountsaccount->isVirtualAccountsAccount) {
        vaccountsaccount->childEvent(event);
    } else {
        ((VirtualAccountsAccount*)self)->childEvent(event);
    }
}

// Base class handler implementation
void Accounts__Account_QBaseChildEvent(Accounts__Account* self, QChildEvent* event) {
    auto* vaccountsaccount = dynamic_cast<VirtualAccountsAccount*>(self);
    if (vaccountsaccount && vaccountsaccount->isVirtualAccountsAccount) {
        vaccountsaccount->setAccounts__Account_ChildEvent_IsBase(true);
        vaccountsaccount->childEvent(event);
    } else {
        ((VirtualAccountsAccount*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void Accounts__Account_OnChildEvent(Accounts__Account* self, intptr_t slot) {
    auto* vaccountsaccount = dynamic_cast<VirtualAccountsAccount*>(self);
    if (vaccountsaccount && vaccountsaccount->isVirtualAccountsAccount) {
        vaccountsaccount->setAccounts__Account_ChildEvent_Callback(reinterpret_cast<VirtualAccountsAccount::Accounts__Account_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void Accounts__Account_CustomEvent(Accounts__Account* self, QEvent* event) {
    auto* vaccountsaccount = dynamic_cast<VirtualAccountsAccount*>(self);
    if (vaccountsaccount && vaccountsaccount->isVirtualAccountsAccount) {
        vaccountsaccount->customEvent(event);
    } else {
        ((VirtualAccountsAccount*)self)->customEvent(event);
    }
}

// Base class handler implementation
void Accounts__Account_QBaseCustomEvent(Accounts__Account* self, QEvent* event) {
    auto* vaccountsaccount = dynamic_cast<VirtualAccountsAccount*>(self);
    if (vaccountsaccount && vaccountsaccount->isVirtualAccountsAccount) {
        vaccountsaccount->setAccounts__Account_CustomEvent_IsBase(true);
        vaccountsaccount->customEvent(event);
    } else {
        ((VirtualAccountsAccount*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void Accounts__Account_OnCustomEvent(Accounts__Account* self, intptr_t slot) {
    auto* vaccountsaccount = dynamic_cast<VirtualAccountsAccount*>(self);
    if (vaccountsaccount && vaccountsaccount->isVirtualAccountsAccount) {
        vaccountsaccount->setAccounts__Account_CustomEvent_Callback(reinterpret_cast<VirtualAccountsAccount::Accounts__Account_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void Accounts__Account_ConnectNotify(Accounts__Account* self, const QMetaMethod* signal) {
    auto* vaccountsaccount = dynamic_cast<VirtualAccountsAccount*>(self);
    if (vaccountsaccount && vaccountsaccount->isVirtualAccountsAccount) {
        vaccountsaccount->connectNotify(*signal);
    } else {
        ((VirtualAccountsAccount*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void Accounts__Account_QBaseConnectNotify(Accounts__Account* self, const QMetaMethod* signal) {
    auto* vaccountsaccount = dynamic_cast<VirtualAccountsAccount*>(self);
    if (vaccountsaccount && vaccountsaccount->isVirtualAccountsAccount) {
        vaccountsaccount->setAccounts__Account_ConnectNotify_IsBase(true);
        vaccountsaccount->connectNotify(*signal);
    } else {
        ((VirtualAccountsAccount*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void Accounts__Account_OnConnectNotify(Accounts__Account* self, intptr_t slot) {
    auto* vaccountsaccount = dynamic_cast<VirtualAccountsAccount*>(self);
    if (vaccountsaccount && vaccountsaccount->isVirtualAccountsAccount) {
        vaccountsaccount->setAccounts__Account_ConnectNotify_Callback(reinterpret_cast<VirtualAccountsAccount::Accounts__Account_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void Accounts__Account_DisconnectNotify(Accounts__Account* self, const QMetaMethod* signal) {
    auto* vaccountsaccount = dynamic_cast<VirtualAccountsAccount*>(self);
    if (vaccountsaccount && vaccountsaccount->isVirtualAccountsAccount) {
        vaccountsaccount->disconnectNotify(*signal);
    } else {
        ((VirtualAccountsAccount*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void Accounts__Account_QBaseDisconnectNotify(Accounts__Account* self, const QMetaMethod* signal) {
    auto* vaccountsaccount = dynamic_cast<VirtualAccountsAccount*>(self);
    if (vaccountsaccount && vaccountsaccount->isVirtualAccountsAccount) {
        vaccountsaccount->setAccounts__Account_DisconnectNotify_IsBase(true);
        vaccountsaccount->disconnectNotify(*signal);
    } else {
        ((VirtualAccountsAccount*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void Accounts__Account_OnDisconnectNotify(Accounts__Account* self, intptr_t slot) {
    auto* vaccountsaccount = dynamic_cast<VirtualAccountsAccount*>(self);
    if (vaccountsaccount && vaccountsaccount->isVirtualAccountsAccount) {
        vaccountsaccount->setAccounts__Account_DisconnectNotify_Callback(reinterpret_cast<VirtualAccountsAccount::Accounts__Account_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* Accounts__Account_Sender(const Accounts__Account* self) {
    auto* vaccountsaccount = const_cast<VirtualAccountsAccount*>(dynamic_cast<const VirtualAccountsAccount*>(self));
    if (vaccountsaccount && vaccountsaccount->isVirtualAccountsAccount) {
        return vaccountsaccount->sender();
    } else {
        return ((VirtualAccountsAccount*)self)->sender();
    }
}

// Base class handler implementation
QObject* Accounts__Account_QBaseSender(const Accounts__Account* self) {
    auto* vaccountsaccount = const_cast<VirtualAccountsAccount*>(dynamic_cast<const VirtualAccountsAccount*>(self));
    if (vaccountsaccount && vaccountsaccount->isVirtualAccountsAccount) {
        vaccountsaccount->setAccounts__Account_Sender_IsBase(true);
        return vaccountsaccount->sender();
    } else {
        return ((VirtualAccountsAccount*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void Accounts__Account_OnSender(const Accounts__Account* self, intptr_t slot) {
    auto* vaccountsaccount = const_cast<VirtualAccountsAccount*>(dynamic_cast<const VirtualAccountsAccount*>(self));
    if (vaccountsaccount && vaccountsaccount->isVirtualAccountsAccount) {
        vaccountsaccount->setAccounts__Account_Sender_Callback(reinterpret_cast<VirtualAccountsAccount::Accounts__Account_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int Accounts__Account_SenderSignalIndex(const Accounts__Account* self) {
    auto* vaccountsaccount = const_cast<VirtualAccountsAccount*>(dynamic_cast<const VirtualAccountsAccount*>(self));
    if (vaccountsaccount && vaccountsaccount->isVirtualAccountsAccount) {
        return vaccountsaccount->senderSignalIndex();
    } else {
        return ((VirtualAccountsAccount*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int Accounts__Account_QBaseSenderSignalIndex(const Accounts__Account* self) {
    auto* vaccountsaccount = const_cast<VirtualAccountsAccount*>(dynamic_cast<const VirtualAccountsAccount*>(self));
    if (vaccountsaccount && vaccountsaccount->isVirtualAccountsAccount) {
        vaccountsaccount->setAccounts__Account_SenderSignalIndex_IsBase(true);
        return vaccountsaccount->senderSignalIndex();
    } else {
        return ((VirtualAccountsAccount*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void Accounts__Account_OnSenderSignalIndex(const Accounts__Account* self, intptr_t slot) {
    auto* vaccountsaccount = const_cast<VirtualAccountsAccount*>(dynamic_cast<const VirtualAccountsAccount*>(self));
    if (vaccountsaccount && vaccountsaccount->isVirtualAccountsAccount) {
        vaccountsaccount->setAccounts__Account_SenderSignalIndex_Callback(reinterpret_cast<VirtualAccountsAccount::Accounts__Account_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int Accounts__Account_Receivers(const Accounts__Account* self, const char* signal) {
    auto* vaccountsaccount = const_cast<VirtualAccountsAccount*>(dynamic_cast<const VirtualAccountsAccount*>(self));
    if (vaccountsaccount && vaccountsaccount->isVirtualAccountsAccount) {
        return vaccountsaccount->receivers(signal);
    } else {
        return ((VirtualAccountsAccount*)self)->receivers(signal);
    }
}

// Base class handler implementation
int Accounts__Account_QBaseReceivers(const Accounts__Account* self, const char* signal) {
    auto* vaccountsaccount = const_cast<VirtualAccountsAccount*>(dynamic_cast<const VirtualAccountsAccount*>(self));
    if (vaccountsaccount && vaccountsaccount->isVirtualAccountsAccount) {
        vaccountsaccount->setAccounts__Account_Receivers_IsBase(true);
        return vaccountsaccount->receivers(signal);
    } else {
        return ((VirtualAccountsAccount*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void Accounts__Account_OnReceivers(const Accounts__Account* self, intptr_t slot) {
    auto* vaccountsaccount = const_cast<VirtualAccountsAccount*>(dynamic_cast<const VirtualAccountsAccount*>(self));
    if (vaccountsaccount && vaccountsaccount->isVirtualAccountsAccount) {
        vaccountsaccount->setAccounts__Account_Receivers_Callback(reinterpret_cast<VirtualAccountsAccount::Accounts__Account_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool Accounts__Account_IsSignalConnected(const Accounts__Account* self, const QMetaMethod* signal) {
    auto* vaccountsaccount = const_cast<VirtualAccountsAccount*>(dynamic_cast<const VirtualAccountsAccount*>(self));
    if (vaccountsaccount && vaccountsaccount->isVirtualAccountsAccount) {
        return vaccountsaccount->isSignalConnected(*signal);
    } else {
        return ((VirtualAccountsAccount*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool Accounts__Account_QBaseIsSignalConnected(const Accounts__Account* self, const QMetaMethod* signal) {
    auto* vaccountsaccount = const_cast<VirtualAccountsAccount*>(dynamic_cast<const VirtualAccountsAccount*>(self));
    if (vaccountsaccount && vaccountsaccount->isVirtualAccountsAccount) {
        vaccountsaccount->setAccounts__Account_IsSignalConnected_IsBase(true);
        return vaccountsaccount->isSignalConnected(*signal);
    } else {
        return ((VirtualAccountsAccount*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void Accounts__Account_OnIsSignalConnected(const Accounts__Account* self, intptr_t slot) {
    auto* vaccountsaccount = const_cast<VirtualAccountsAccount*>(dynamic_cast<const VirtualAccountsAccount*>(self));
    if (vaccountsaccount && vaccountsaccount->isVirtualAccountsAccount) {
        vaccountsaccount->setAccounts__Account_IsSignalConnected_Callback(reinterpret_cast<VirtualAccountsAccount::Accounts__Account_IsSignalConnected_Callback>(slot));
    }
}

void Accounts__Account_Delete(Accounts__Account* self) {
    delete self;
}
