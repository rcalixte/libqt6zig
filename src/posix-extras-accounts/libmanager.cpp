#define WORKAROUND_INNER_CLASS_DEFINITION_Accounts__Account
#include <Accounts/Application>
#define WORKAROUND_INNER_CLASS_DEFINITION_Accounts__Error
#define WORKAROUND_INNER_CLASS_DEFINITION_Accounts__Manager
#include <Accounts/Provider>
#define WORKAROUND_INNER_CLASS_DEFINITION_Accounts__Service
#define WORKAROUND_INNER_CLASS_DEFINITION_Accounts__ServiceType
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
#include <manager.h>
#include "libmanager.h"
#include "libmanager.hxx"

Accounts__Manager* Accounts__Manager_new() {
    return new VirtualAccountsManager();
}

Accounts__Manager* Accounts__Manager_new2(const libqt_string serviceType) {
    QString serviceType_QString = QString::fromUtf8(serviceType.data, serviceType.len);
    return new VirtualAccountsManager(serviceType_QString);
}

Accounts__Manager* Accounts__Manager_new3(int options) {
    return new VirtualAccountsManager(static_cast<Accounts::Manager::Options>(options));
}

Accounts__Manager* Accounts__Manager_new4(QObject* parent) {
    return new VirtualAccountsManager(parent);
}

Accounts__Manager* Accounts__Manager_new5(const libqt_string serviceType, QObject* parent) {
    QString serviceType_QString = QString::fromUtf8(serviceType.data, serviceType.len);
    return new VirtualAccountsManager(serviceType_QString, parent);
}

Accounts__Manager* Accounts__Manager_new6(int options, QObject* parent) {
    return new VirtualAccountsManager(static_cast<Accounts::Manager::Options>(options), parent);
}

QMetaObject* Accounts__Manager_MetaObject(const Accounts__Manager* self) {
    return (QMetaObject*)self->metaObject();
}

void* Accounts__Manager_Metacast(Accounts__Manager* self, const char* param1) {
    return self->qt_metacast(param1);
}

int Accounts__Manager_Metacall(Accounts__Manager* self, int param1, int param2, void** param3) {
    auto* vaccounts__manager = dynamic_cast<VirtualAccountsManager*>(self);
    if (vaccounts__manager && vaccounts__manager->isVirtualAccountsManager) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualAccountsManager*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string Accounts__Manager_Tr(const char* s) {
    QString _ret = Accounts::Manager::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

Accounts__Account* Accounts__Manager_Account(const Accounts__Manager* self, const unsigned int* id) {
    return self->account(static_cast<const Accounts::AccountId&>(*id));
}

libqt_list /* of unsigned int */ Accounts__Manager_AccountList(const Accounts__Manager* self) {
    QList<unsigned int> _ret = self->accountList();
    // Convert QList<> from C++ memory to manually-managed C memory
    unsigned int* _arr = static_cast<unsigned int*>(malloc(sizeof(unsigned int) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_list /* of unsigned int */ Accounts__Manager_AccountListEnabled(const Accounts__Manager* self) {
    QList<unsigned int> _ret = self->accountListEnabled();
    // Convert QList<> from C++ memory to manually-managed C memory
    unsigned int* _arr = static_cast<unsigned int*>(malloc(sizeof(unsigned int) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

Accounts__Account* Accounts__Manager_CreateAccount(Accounts__Manager* self, const libqt_string providerName) {
    QString providerName_QString = QString::fromUtf8(providerName.data, providerName.len);
    return self->createAccount(providerName_QString);
}

Accounts__Service* Accounts__Manager_Service(const Accounts__Manager* self, const libqt_string serviceName) {
    QString serviceName_QString = QString::fromUtf8(serviceName.data, serviceName.len);
    return new Accounts::Service(self->service(serviceName_QString));
}

libqt_list /* of Accounts__Service* */ Accounts__Manager_ServiceList(const Accounts__Manager* self) {
    QList<Accounts::Service> _ret = self->serviceList();
    // Convert QList<> from C++ memory to manually-managed C memory
    Accounts__Service** _arr = static_cast<Accounts__Service**>(malloc(sizeof(Accounts__Service*) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new Accounts::Service(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_list /* of Accounts__Service* */ Accounts__Manager_ServiceList2(const Accounts__Manager* self, const Accounts__Application* application) {
    QList<Accounts::Service> _ret = self->serviceList(*application);
    // Convert QList<> from C++ memory to manually-managed C memory
    Accounts__Service** _arr = static_cast<Accounts__Service**>(malloc(sizeof(Accounts__Service*) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new Accounts::Service(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

Accounts__Provider* Accounts__Manager_Provider(const Accounts__Manager* self, const libqt_string providerName) {
    QString providerName_QString = QString::fromUtf8(providerName.data, providerName.len);
    return new Accounts::Provider(self->provider(providerName_QString));
}

libqt_list /* of Accounts__Provider* */ Accounts__Manager_ProviderList(const Accounts__Manager* self) {
    QList<Accounts::Provider> _ret = self->providerList();
    // Convert QList<> from C++ memory to manually-managed C memory
    Accounts__Provider** _arr = static_cast<Accounts__Provider**>(malloc(sizeof(Accounts__Provider*) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new Accounts::Provider(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

Accounts__ServiceType* Accounts__Manager_ServiceType(const Accounts__Manager* self, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return new Accounts::ServiceType(self->serviceType(name_QString));
}

Accounts__Application* Accounts__Manager_Application(const Accounts__Manager* self, const libqt_string applicationName) {
    QString applicationName_QString = QString::fromUtf8(applicationName.data, applicationName.len);
    return new Accounts::Application(self->application(applicationName_QString));
}

libqt_list /* of Accounts__Application* */ Accounts__Manager_ApplicationList(const Accounts__Manager* self, const Accounts__Service* service) {
    QList<Accounts::Application> _ret = self->applicationList(*service);
    // Convert QList<> from C++ memory to manually-managed C memory
    Accounts__Application** _arr = static_cast<Accounts__Application**>(malloc(sizeof(Accounts__Application*) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new Accounts::Application(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_string Accounts__Manager_ServiceType2(const Accounts__Manager* self) {
    QString _ret = self->serviceType();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void Accounts__Manager_SetTimeout(Accounts__Manager* self, unsigned int timeout) {
    self->setTimeout(static_cast<quint32>(timeout));
}

unsigned int Accounts__Manager_Timeout(Accounts__Manager* self) {
    return static_cast<unsigned int>(self->timeout());
}

void Accounts__Manager_SetAbortOnTimeout(Accounts__Manager* self, bool abort) {
    self->setAbortOnTimeout(abort);
}

bool Accounts__Manager_AbortOnTimeout(const Accounts__Manager* self) {
    return self->abortOnTimeout();
}

int Accounts__Manager_Options(const Accounts__Manager* self) {
    return static_cast<int>(self->options());
}

Accounts__Error* Accounts__Manager_LastError(const Accounts__Manager* self) {
    return new Accounts::Error(self->lastError());
}

void Accounts__Manager_AccountCreated(Accounts__Manager* self, unsigned int id) {
    self->accountCreated(static_cast<Accounts::AccountId>(id));
}

void Accounts__Manager_Connect_AccountCreated(Accounts__Manager* self, intptr_t slot) {
    void (*slotFunc)(Accounts__Manager*, unsigned int) = reinterpret_cast<void (*)(Accounts__Manager*, unsigned int)>(slot);
    Accounts::Manager::connect(self, &Accounts::Manager::accountCreated, [self, slotFunc](Accounts::AccountId id) {
        unsigned int sigval1 = static_cast<unsigned int>(id);
        slotFunc(self, sigval1);
    });
}

void Accounts__Manager_AccountRemoved(Accounts__Manager* self, unsigned int id) {
    self->accountRemoved(static_cast<Accounts::AccountId>(id));
}

void Accounts__Manager_Connect_AccountRemoved(Accounts__Manager* self, intptr_t slot) {
    void (*slotFunc)(Accounts__Manager*, unsigned int) = reinterpret_cast<void (*)(Accounts__Manager*, unsigned int)>(slot);
    Accounts::Manager::connect(self, &Accounts::Manager::accountRemoved, [self, slotFunc](Accounts::AccountId id) {
        unsigned int sigval1 = static_cast<unsigned int>(id);
        slotFunc(self, sigval1);
    });
}

void Accounts__Manager_AccountUpdated(Accounts__Manager* self, unsigned int id) {
    self->accountUpdated(static_cast<Accounts::AccountId>(id));
}

void Accounts__Manager_Connect_AccountUpdated(Accounts__Manager* self, intptr_t slot) {
    void (*slotFunc)(Accounts__Manager*, unsigned int) = reinterpret_cast<void (*)(Accounts__Manager*, unsigned int)>(slot);
    Accounts::Manager::connect(self, &Accounts::Manager::accountUpdated, [self, slotFunc](Accounts::AccountId id) {
        unsigned int sigval1 = static_cast<unsigned int>(id);
        slotFunc(self, sigval1);
    });
}

void Accounts__Manager_EnabledEvent(Accounts__Manager* self, unsigned int id) {
    self->enabledEvent(static_cast<Accounts::AccountId>(id));
}

void Accounts__Manager_Connect_EnabledEvent(Accounts__Manager* self, intptr_t slot) {
    void (*slotFunc)(Accounts__Manager*, unsigned int) = reinterpret_cast<void (*)(Accounts__Manager*, unsigned int)>(slot);
    Accounts::Manager::connect(self, &Accounts::Manager::enabledEvent, [self, slotFunc](Accounts::AccountId id) {
        unsigned int sigval1 = static_cast<unsigned int>(id);
        slotFunc(self, sigval1);
    });
}

libqt_string Accounts__Manager_Tr2(const char* s, const char* c) {
    QString _ret = Accounts::Manager::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string Accounts__Manager_Tr3(const char* s, const char* c, int n) {
    QString _ret = Accounts::Manager::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_list /* of unsigned int */ Accounts__Manager_AccountList1(const Accounts__Manager* self, const libqt_string serviceType) {
    QString serviceType_QString = QString::fromUtf8(serviceType.data, serviceType.len);
    QList<unsigned int> _ret = self->accountList(serviceType_QString);
    // Convert QList<> from C++ memory to manually-managed C memory
    unsigned int* _arr = static_cast<unsigned int*>(malloc(sizeof(unsigned int) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_list /* of unsigned int */ Accounts__Manager_AccountListEnabled1(const Accounts__Manager* self, const libqt_string serviceType) {
    QString serviceType_QString = QString::fromUtf8(serviceType.data, serviceType.len);
    QList<unsigned int> _ret = self->accountListEnabled(serviceType_QString);
    // Convert QList<> from C++ memory to manually-managed C memory
    unsigned int* _arr = static_cast<unsigned int*>(malloc(sizeof(unsigned int) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_list /* of Accounts__Service* */ Accounts__Manager_ServiceList1(const Accounts__Manager* self, const libqt_string serviceType) {
    QString serviceType_QString = QString::fromUtf8(serviceType.data, serviceType.len);
    QList<Accounts::Service> _ret = self->serviceList(serviceType_QString);
    // Convert QList<> from C++ memory to manually-managed C memory
    Accounts__Service** _arr = static_cast<Accounts__Service**>(malloc(sizeof(Accounts__Service*) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new Accounts::Service(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

// Base class handler implementation
int Accounts__Manager_QBaseMetacall(Accounts__Manager* self, int param1, int param2, void** param3) {
    auto* vaccountsmanager = dynamic_cast<VirtualAccountsManager*>(self);
    if (vaccountsmanager && vaccountsmanager->isVirtualAccountsManager) {
        vaccountsmanager->setAccounts__Manager_Metacall_IsBase(true);
        return vaccountsmanager->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->Accounts::Manager::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void Accounts__Manager_OnMetacall(Accounts__Manager* self, intptr_t slot) {
    auto* vaccountsmanager = dynamic_cast<VirtualAccountsManager*>(self);
    if (vaccountsmanager && vaccountsmanager->isVirtualAccountsManager) {
        vaccountsmanager->setAccounts__Manager_Metacall_Callback(reinterpret_cast<VirtualAccountsManager::Accounts__Manager_Metacall_Callback>(slot));
    }
}

// Derived class handler implementation
bool Accounts__Manager_Event(Accounts__Manager* self, QEvent* event) {
    auto* vaccountsmanager = dynamic_cast<VirtualAccountsManager*>(self);
    if (vaccountsmanager && vaccountsmanager->isVirtualAccountsManager) {
        return vaccountsmanager->event(event);
    } else {
        return self->Accounts::Manager::event(event);
    }
}

// Base class handler implementation
bool Accounts__Manager_QBaseEvent(Accounts__Manager* self, QEvent* event) {
    auto* vaccountsmanager = dynamic_cast<VirtualAccountsManager*>(self);
    if (vaccountsmanager && vaccountsmanager->isVirtualAccountsManager) {
        vaccountsmanager->setAccounts__Manager_Event_IsBase(true);
        return vaccountsmanager->event(event);
    } else {
        return self->Accounts::Manager::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void Accounts__Manager_OnEvent(Accounts__Manager* self, intptr_t slot) {
    auto* vaccountsmanager = dynamic_cast<VirtualAccountsManager*>(self);
    if (vaccountsmanager && vaccountsmanager->isVirtualAccountsManager) {
        vaccountsmanager->setAccounts__Manager_Event_Callback(reinterpret_cast<VirtualAccountsManager::Accounts__Manager_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool Accounts__Manager_EventFilter(Accounts__Manager* self, QObject* watched, QEvent* event) {
    auto* vaccountsmanager = dynamic_cast<VirtualAccountsManager*>(self);
    if (vaccountsmanager && vaccountsmanager->isVirtualAccountsManager) {
        return vaccountsmanager->eventFilter(watched, event);
    } else {
        return self->Accounts::Manager::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool Accounts__Manager_QBaseEventFilter(Accounts__Manager* self, QObject* watched, QEvent* event) {
    auto* vaccountsmanager = dynamic_cast<VirtualAccountsManager*>(self);
    if (vaccountsmanager && vaccountsmanager->isVirtualAccountsManager) {
        vaccountsmanager->setAccounts__Manager_EventFilter_IsBase(true);
        return vaccountsmanager->eventFilter(watched, event);
    } else {
        return self->Accounts::Manager::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void Accounts__Manager_OnEventFilter(Accounts__Manager* self, intptr_t slot) {
    auto* vaccountsmanager = dynamic_cast<VirtualAccountsManager*>(self);
    if (vaccountsmanager && vaccountsmanager->isVirtualAccountsManager) {
        vaccountsmanager->setAccounts__Manager_EventFilter_Callback(reinterpret_cast<VirtualAccountsManager::Accounts__Manager_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void Accounts__Manager_TimerEvent(Accounts__Manager* self, QTimerEvent* event) {
    auto* vaccountsmanager = dynamic_cast<VirtualAccountsManager*>(self);
    if (vaccountsmanager && vaccountsmanager->isVirtualAccountsManager) {
        vaccountsmanager->timerEvent(event);
    } else {
        ((VirtualAccountsManager*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void Accounts__Manager_QBaseTimerEvent(Accounts__Manager* self, QTimerEvent* event) {
    auto* vaccountsmanager = dynamic_cast<VirtualAccountsManager*>(self);
    if (vaccountsmanager && vaccountsmanager->isVirtualAccountsManager) {
        vaccountsmanager->setAccounts__Manager_TimerEvent_IsBase(true);
        vaccountsmanager->timerEvent(event);
    } else {
        ((VirtualAccountsManager*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void Accounts__Manager_OnTimerEvent(Accounts__Manager* self, intptr_t slot) {
    auto* vaccountsmanager = dynamic_cast<VirtualAccountsManager*>(self);
    if (vaccountsmanager && vaccountsmanager->isVirtualAccountsManager) {
        vaccountsmanager->setAccounts__Manager_TimerEvent_Callback(reinterpret_cast<VirtualAccountsManager::Accounts__Manager_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void Accounts__Manager_ChildEvent(Accounts__Manager* self, QChildEvent* event) {
    auto* vaccountsmanager = dynamic_cast<VirtualAccountsManager*>(self);
    if (vaccountsmanager && vaccountsmanager->isVirtualAccountsManager) {
        vaccountsmanager->childEvent(event);
    } else {
        ((VirtualAccountsManager*)self)->childEvent(event);
    }
}

// Base class handler implementation
void Accounts__Manager_QBaseChildEvent(Accounts__Manager* self, QChildEvent* event) {
    auto* vaccountsmanager = dynamic_cast<VirtualAccountsManager*>(self);
    if (vaccountsmanager && vaccountsmanager->isVirtualAccountsManager) {
        vaccountsmanager->setAccounts__Manager_ChildEvent_IsBase(true);
        vaccountsmanager->childEvent(event);
    } else {
        ((VirtualAccountsManager*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void Accounts__Manager_OnChildEvent(Accounts__Manager* self, intptr_t slot) {
    auto* vaccountsmanager = dynamic_cast<VirtualAccountsManager*>(self);
    if (vaccountsmanager && vaccountsmanager->isVirtualAccountsManager) {
        vaccountsmanager->setAccounts__Manager_ChildEvent_Callback(reinterpret_cast<VirtualAccountsManager::Accounts__Manager_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void Accounts__Manager_CustomEvent(Accounts__Manager* self, QEvent* event) {
    auto* vaccountsmanager = dynamic_cast<VirtualAccountsManager*>(self);
    if (vaccountsmanager && vaccountsmanager->isVirtualAccountsManager) {
        vaccountsmanager->customEvent(event);
    } else {
        ((VirtualAccountsManager*)self)->customEvent(event);
    }
}

// Base class handler implementation
void Accounts__Manager_QBaseCustomEvent(Accounts__Manager* self, QEvent* event) {
    auto* vaccountsmanager = dynamic_cast<VirtualAccountsManager*>(self);
    if (vaccountsmanager && vaccountsmanager->isVirtualAccountsManager) {
        vaccountsmanager->setAccounts__Manager_CustomEvent_IsBase(true);
        vaccountsmanager->customEvent(event);
    } else {
        ((VirtualAccountsManager*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void Accounts__Manager_OnCustomEvent(Accounts__Manager* self, intptr_t slot) {
    auto* vaccountsmanager = dynamic_cast<VirtualAccountsManager*>(self);
    if (vaccountsmanager && vaccountsmanager->isVirtualAccountsManager) {
        vaccountsmanager->setAccounts__Manager_CustomEvent_Callback(reinterpret_cast<VirtualAccountsManager::Accounts__Manager_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void Accounts__Manager_ConnectNotify(Accounts__Manager* self, const QMetaMethod* signal) {
    auto* vaccountsmanager = dynamic_cast<VirtualAccountsManager*>(self);
    if (vaccountsmanager && vaccountsmanager->isVirtualAccountsManager) {
        vaccountsmanager->connectNotify(*signal);
    } else {
        ((VirtualAccountsManager*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void Accounts__Manager_QBaseConnectNotify(Accounts__Manager* self, const QMetaMethod* signal) {
    auto* vaccountsmanager = dynamic_cast<VirtualAccountsManager*>(self);
    if (vaccountsmanager && vaccountsmanager->isVirtualAccountsManager) {
        vaccountsmanager->setAccounts__Manager_ConnectNotify_IsBase(true);
        vaccountsmanager->connectNotify(*signal);
    } else {
        ((VirtualAccountsManager*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void Accounts__Manager_OnConnectNotify(Accounts__Manager* self, intptr_t slot) {
    auto* vaccountsmanager = dynamic_cast<VirtualAccountsManager*>(self);
    if (vaccountsmanager && vaccountsmanager->isVirtualAccountsManager) {
        vaccountsmanager->setAccounts__Manager_ConnectNotify_Callback(reinterpret_cast<VirtualAccountsManager::Accounts__Manager_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void Accounts__Manager_DisconnectNotify(Accounts__Manager* self, const QMetaMethod* signal) {
    auto* vaccountsmanager = dynamic_cast<VirtualAccountsManager*>(self);
    if (vaccountsmanager && vaccountsmanager->isVirtualAccountsManager) {
        vaccountsmanager->disconnectNotify(*signal);
    } else {
        ((VirtualAccountsManager*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void Accounts__Manager_QBaseDisconnectNotify(Accounts__Manager* self, const QMetaMethod* signal) {
    auto* vaccountsmanager = dynamic_cast<VirtualAccountsManager*>(self);
    if (vaccountsmanager && vaccountsmanager->isVirtualAccountsManager) {
        vaccountsmanager->setAccounts__Manager_DisconnectNotify_IsBase(true);
        vaccountsmanager->disconnectNotify(*signal);
    } else {
        ((VirtualAccountsManager*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void Accounts__Manager_OnDisconnectNotify(Accounts__Manager* self, intptr_t slot) {
    auto* vaccountsmanager = dynamic_cast<VirtualAccountsManager*>(self);
    if (vaccountsmanager && vaccountsmanager->isVirtualAccountsManager) {
        vaccountsmanager->setAccounts__Manager_DisconnectNotify_Callback(reinterpret_cast<VirtualAccountsManager::Accounts__Manager_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* Accounts__Manager_Sender(const Accounts__Manager* self) {
    auto* vaccountsmanager = const_cast<VirtualAccountsManager*>(dynamic_cast<const VirtualAccountsManager*>(self));
    if (vaccountsmanager && vaccountsmanager->isVirtualAccountsManager) {
        return vaccountsmanager->sender();
    } else {
        return ((VirtualAccountsManager*)self)->sender();
    }
}

// Base class handler implementation
QObject* Accounts__Manager_QBaseSender(const Accounts__Manager* self) {
    auto* vaccountsmanager = const_cast<VirtualAccountsManager*>(dynamic_cast<const VirtualAccountsManager*>(self));
    if (vaccountsmanager && vaccountsmanager->isVirtualAccountsManager) {
        vaccountsmanager->setAccounts__Manager_Sender_IsBase(true);
        return vaccountsmanager->sender();
    } else {
        return ((VirtualAccountsManager*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void Accounts__Manager_OnSender(const Accounts__Manager* self, intptr_t slot) {
    auto* vaccountsmanager = const_cast<VirtualAccountsManager*>(dynamic_cast<const VirtualAccountsManager*>(self));
    if (vaccountsmanager && vaccountsmanager->isVirtualAccountsManager) {
        vaccountsmanager->setAccounts__Manager_Sender_Callback(reinterpret_cast<VirtualAccountsManager::Accounts__Manager_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int Accounts__Manager_SenderSignalIndex(const Accounts__Manager* self) {
    auto* vaccountsmanager = const_cast<VirtualAccountsManager*>(dynamic_cast<const VirtualAccountsManager*>(self));
    if (vaccountsmanager && vaccountsmanager->isVirtualAccountsManager) {
        return vaccountsmanager->senderSignalIndex();
    } else {
        return ((VirtualAccountsManager*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int Accounts__Manager_QBaseSenderSignalIndex(const Accounts__Manager* self) {
    auto* vaccountsmanager = const_cast<VirtualAccountsManager*>(dynamic_cast<const VirtualAccountsManager*>(self));
    if (vaccountsmanager && vaccountsmanager->isVirtualAccountsManager) {
        vaccountsmanager->setAccounts__Manager_SenderSignalIndex_IsBase(true);
        return vaccountsmanager->senderSignalIndex();
    } else {
        return ((VirtualAccountsManager*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void Accounts__Manager_OnSenderSignalIndex(const Accounts__Manager* self, intptr_t slot) {
    auto* vaccountsmanager = const_cast<VirtualAccountsManager*>(dynamic_cast<const VirtualAccountsManager*>(self));
    if (vaccountsmanager && vaccountsmanager->isVirtualAccountsManager) {
        vaccountsmanager->setAccounts__Manager_SenderSignalIndex_Callback(reinterpret_cast<VirtualAccountsManager::Accounts__Manager_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int Accounts__Manager_Receivers(const Accounts__Manager* self, const char* signal) {
    auto* vaccountsmanager = const_cast<VirtualAccountsManager*>(dynamic_cast<const VirtualAccountsManager*>(self));
    if (vaccountsmanager && vaccountsmanager->isVirtualAccountsManager) {
        return vaccountsmanager->receivers(signal);
    } else {
        return ((VirtualAccountsManager*)self)->receivers(signal);
    }
}

// Base class handler implementation
int Accounts__Manager_QBaseReceivers(const Accounts__Manager* self, const char* signal) {
    auto* vaccountsmanager = const_cast<VirtualAccountsManager*>(dynamic_cast<const VirtualAccountsManager*>(self));
    if (vaccountsmanager && vaccountsmanager->isVirtualAccountsManager) {
        vaccountsmanager->setAccounts__Manager_Receivers_IsBase(true);
        return vaccountsmanager->receivers(signal);
    } else {
        return ((VirtualAccountsManager*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void Accounts__Manager_OnReceivers(const Accounts__Manager* self, intptr_t slot) {
    auto* vaccountsmanager = const_cast<VirtualAccountsManager*>(dynamic_cast<const VirtualAccountsManager*>(self));
    if (vaccountsmanager && vaccountsmanager->isVirtualAccountsManager) {
        vaccountsmanager->setAccounts__Manager_Receivers_Callback(reinterpret_cast<VirtualAccountsManager::Accounts__Manager_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool Accounts__Manager_IsSignalConnected(const Accounts__Manager* self, const QMetaMethod* signal) {
    auto* vaccountsmanager = const_cast<VirtualAccountsManager*>(dynamic_cast<const VirtualAccountsManager*>(self));
    if (vaccountsmanager && vaccountsmanager->isVirtualAccountsManager) {
        return vaccountsmanager->isSignalConnected(*signal);
    } else {
        return ((VirtualAccountsManager*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool Accounts__Manager_QBaseIsSignalConnected(const Accounts__Manager* self, const QMetaMethod* signal) {
    auto* vaccountsmanager = const_cast<VirtualAccountsManager*>(dynamic_cast<const VirtualAccountsManager*>(self));
    if (vaccountsmanager && vaccountsmanager->isVirtualAccountsManager) {
        vaccountsmanager->setAccounts__Manager_IsSignalConnected_IsBase(true);
        return vaccountsmanager->isSignalConnected(*signal);
    } else {
        return ((VirtualAccountsManager*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void Accounts__Manager_OnIsSignalConnected(const Accounts__Manager* self, intptr_t slot) {
    auto* vaccountsmanager = const_cast<VirtualAccountsManager*>(dynamic_cast<const VirtualAccountsManager*>(self));
    if (vaccountsmanager && vaccountsmanager->isVirtualAccountsManager) {
        vaccountsmanager->setAccounts__Manager_IsSignalConnected_Callback(reinterpret_cast<VirtualAccountsManager::Accounts__Manager_IsSignalConnected_Callback>(slot));
    }
}

void Accounts__Manager_Delete(Accounts__Manager* self) {
    delete self;
}
