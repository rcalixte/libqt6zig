#define WORKAROUND_INNER_CLASS_DEFINITION_Accounts__Account
#define WORKAROUND_INNER_CLASS_DEFINITION_Accounts__AccountService
#define WORKAROUND_INNER_CLASS_DEFINITION_Accounts__AuthData
#define WORKAROUND_INNER_CLASS_DEFINITION_Accounts__Service
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
#include <account-service.h>
#include "libaccount_service.h"
#include "libaccount_service.hxx"

Accounts__AccountService* Accounts__AccountService_new(Accounts__Account* account, const Accounts__Service* service) {
    return new VirtualAccountsAccountService(account, *service);
}

Accounts__AccountService* Accounts__AccountService_new2(Accounts__Account* account, const Accounts__Service* service, QObject* parent) {
    return new VirtualAccountsAccountService(account, *service, parent);
}

QMetaObject* Accounts__AccountService_MetaObject(const Accounts__AccountService* self) {
    return (QMetaObject*)self->metaObject();
}

void* Accounts__AccountService_Metacast(Accounts__AccountService* self, const char* param1) {
    return self->qt_metacast(param1);
}

int Accounts__AccountService_Metacall(Accounts__AccountService* self, int param1, int param2, void** param3) {
    auto* vaccounts__accountservice = dynamic_cast<VirtualAccountsAccountService*>(self);
    if (vaccounts__accountservice && vaccounts__accountservice->isVirtualAccountsAccountService) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualAccountsAccountService*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

Accounts__Account* Accounts__AccountService_Account(const Accounts__AccountService* self) {
    return self->account();
}

Accounts__Service* Accounts__AccountService_Service(const Accounts__AccountService* self) {
    return new Accounts::Service(self->service());
}

bool Accounts__AccountService_Enabled(const Accounts__AccountService* self) {
    return self->enabled();
}

bool Accounts__AccountService_IsEnabled(const Accounts__AccountService* self) {
    return self->isEnabled();
}

libqt_list /* of libqt_string */ Accounts__AccountService_AllKeys(const Accounts__AccountService* self) {
    QList<QString> _ret = self->allKeys();
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

void Accounts__AccountService_BeginGroup(Accounts__AccountService* self, const libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    self->beginGroup(prefix_QString);
}

libqt_list /* of libqt_string */ Accounts__AccountService_ChildGroups(const Accounts__AccountService* self) {
    QList<QString> _ret = self->childGroups();
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

libqt_list /* of libqt_string */ Accounts__AccountService_ChildKeys(const Accounts__AccountService* self) {
    QList<QString> _ret = self->childKeys();
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

void Accounts__AccountService_Clear(Accounts__AccountService* self) {
    self->clear();
}

bool Accounts__AccountService_Contains(const Accounts__AccountService* self, const libqt_string key) {
    QString key_QString = QString::fromUtf8(key.data, key.len);
    return self->contains(key_QString);
}

void Accounts__AccountService_EndGroup(Accounts__AccountService* self) {
    self->endGroup();
}

libqt_string Accounts__AccountService_Group(const Accounts__AccountService* self) {
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

void Accounts__AccountService_Remove(Accounts__AccountService* self, const libqt_string key) {
    QString key_QString = QString::fromUtf8(key.data, key.len);
    self->remove(key_QString);
}

void Accounts__AccountService_SetValue(Accounts__AccountService* self, const char* key, const QVariant* value) {
    self->setValue(key, *value);
}

void Accounts__AccountService_SetValue2(Accounts__AccountService* self, const libqt_string key, const QVariant* value) {
    QString key_QString = QString::fromUtf8(key.data, key.len);
    self->setValue(key_QString, *value);
}

QVariant* Accounts__AccountService_Value(const Accounts__AccountService* self, const libqt_string key, const QVariant* defaultValue) {
    QString key_QString = QString::fromUtf8(key.data, key.len);
    return new QVariant(self->value(key_QString, *defaultValue));
}

QVariant* Accounts__AccountService_Value2(const Accounts__AccountService* self, const libqt_string key) {
    QString key_QString = QString::fromUtf8(key.data, key.len);
    return new QVariant(self->value(key_QString));
}

QVariant* Accounts__AccountService_Value3(const Accounts__AccountService* self, const char* key) {
    return new QVariant(self->value(key));
}

libqt_list /* of libqt_string */ Accounts__AccountService_ChangedFields(const Accounts__AccountService* self) {
    QList<QString> _ret = self->changedFields();
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

Accounts__AuthData* Accounts__AccountService_AuthData(const Accounts__AccountService* self) {
    return new Accounts::AuthData(self->authData());
}

void Accounts__AccountService_Enabled2(Accounts__AccountService* self, bool isEnabled) {
    self->enabled(isEnabled);
}

void Accounts__AccountService_Changed(Accounts__AccountService* self) {
    self->changed();
}

QVariant* Accounts__AccountService_Value32(const Accounts__AccountService* self, const libqt_string key, const QVariant* defaultValue, int* source) {
    QString key_QString = QString::fromUtf8(key.data, key.len);
    return new QVariant(self->value(key_QString, *defaultValue, reinterpret_cast<Accounts::SettingSource*>(source)));
}

QVariant* Accounts__AccountService_Value22(const Accounts__AccountService* self, const libqt_string key, int* source) {
    QString key_QString = QString::fromUtf8(key.data, key.len);
    return new QVariant(self->value(key_QString, reinterpret_cast<Accounts::SettingSource*>(source)));
}

QVariant* Accounts__AccountService_Value23(const Accounts__AccountService* self, const char* key, int* source) {
    return new QVariant(self->value(key, reinterpret_cast<Accounts::SettingSource*>(source)));
}

// Base class handler implementation
int Accounts__AccountService_QBaseMetacall(Accounts__AccountService* self, int param1, int param2, void** param3) {
    auto* vaccountsaccountservice = dynamic_cast<VirtualAccountsAccountService*>(self);
    if (vaccountsaccountservice && vaccountsaccountservice->isVirtualAccountsAccountService) {
        vaccountsaccountservice->setAccounts__AccountService_Metacall_IsBase(true);
        return vaccountsaccountservice->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->Accounts::AccountService::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void Accounts__AccountService_OnMetacall(Accounts__AccountService* self, intptr_t slot) {
    auto* vaccountsaccountservice = dynamic_cast<VirtualAccountsAccountService*>(self);
    if (vaccountsaccountservice && vaccountsaccountservice->isVirtualAccountsAccountService) {
        vaccountsaccountservice->setAccounts__AccountService_Metacall_Callback(reinterpret_cast<VirtualAccountsAccountService::Accounts__AccountService_Metacall_Callback>(slot));
    }
}

// Derived class handler implementation
bool Accounts__AccountService_Event(Accounts__AccountService* self, QEvent* event) {
    auto* vaccountsaccountservice = dynamic_cast<VirtualAccountsAccountService*>(self);
    if (vaccountsaccountservice && vaccountsaccountservice->isVirtualAccountsAccountService) {
        return vaccountsaccountservice->event(event);
    } else {
        return self->Accounts::AccountService::event(event);
    }
}

// Base class handler implementation
bool Accounts__AccountService_QBaseEvent(Accounts__AccountService* self, QEvent* event) {
    auto* vaccountsaccountservice = dynamic_cast<VirtualAccountsAccountService*>(self);
    if (vaccountsaccountservice && vaccountsaccountservice->isVirtualAccountsAccountService) {
        vaccountsaccountservice->setAccounts__AccountService_Event_IsBase(true);
        return vaccountsaccountservice->event(event);
    } else {
        return self->Accounts::AccountService::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void Accounts__AccountService_OnEvent(Accounts__AccountService* self, intptr_t slot) {
    auto* vaccountsaccountservice = dynamic_cast<VirtualAccountsAccountService*>(self);
    if (vaccountsaccountservice && vaccountsaccountservice->isVirtualAccountsAccountService) {
        vaccountsaccountservice->setAccounts__AccountService_Event_Callback(reinterpret_cast<VirtualAccountsAccountService::Accounts__AccountService_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool Accounts__AccountService_EventFilter(Accounts__AccountService* self, QObject* watched, QEvent* event) {
    auto* vaccountsaccountservice = dynamic_cast<VirtualAccountsAccountService*>(self);
    if (vaccountsaccountservice && vaccountsaccountservice->isVirtualAccountsAccountService) {
        return vaccountsaccountservice->eventFilter(watched, event);
    } else {
        return self->Accounts::AccountService::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool Accounts__AccountService_QBaseEventFilter(Accounts__AccountService* self, QObject* watched, QEvent* event) {
    auto* vaccountsaccountservice = dynamic_cast<VirtualAccountsAccountService*>(self);
    if (vaccountsaccountservice && vaccountsaccountservice->isVirtualAccountsAccountService) {
        vaccountsaccountservice->setAccounts__AccountService_EventFilter_IsBase(true);
        return vaccountsaccountservice->eventFilter(watched, event);
    } else {
        return self->Accounts::AccountService::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void Accounts__AccountService_OnEventFilter(Accounts__AccountService* self, intptr_t slot) {
    auto* vaccountsaccountservice = dynamic_cast<VirtualAccountsAccountService*>(self);
    if (vaccountsaccountservice && vaccountsaccountservice->isVirtualAccountsAccountService) {
        vaccountsaccountservice->setAccounts__AccountService_EventFilter_Callback(reinterpret_cast<VirtualAccountsAccountService::Accounts__AccountService_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void Accounts__AccountService_TimerEvent(Accounts__AccountService* self, QTimerEvent* event) {
    auto* vaccountsaccountservice = dynamic_cast<VirtualAccountsAccountService*>(self);
    if (vaccountsaccountservice && vaccountsaccountservice->isVirtualAccountsAccountService) {
        vaccountsaccountservice->timerEvent(event);
    } else {
        ((VirtualAccountsAccountService*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void Accounts__AccountService_QBaseTimerEvent(Accounts__AccountService* self, QTimerEvent* event) {
    auto* vaccountsaccountservice = dynamic_cast<VirtualAccountsAccountService*>(self);
    if (vaccountsaccountservice && vaccountsaccountservice->isVirtualAccountsAccountService) {
        vaccountsaccountservice->setAccounts__AccountService_TimerEvent_IsBase(true);
        vaccountsaccountservice->timerEvent(event);
    } else {
        ((VirtualAccountsAccountService*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void Accounts__AccountService_OnTimerEvent(Accounts__AccountService* self, intptr_t slot) {
    auto* vaccountsaccountservice = dynamic_cast<VirtualAccountsAccountService*>(self);
    if (vaccountsaccountservice && vaccountsaccountservice->isVirtualAccountsAccountService) {
        vaccountsaccountservice->setAccounts__AccountService_TimerEvent_Callback(reinterpret_cast<VirtualAccountsAccountService::Accounts__AccountService_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void Accounts__AccountService_ChildEvent(Accounts__AccountService* self, QChildEvent* event) {
    auto* vaccountsaccountservice = dynamic_cast<VirtualAccountsAccountService*>(self);
    if (vaccountsaccountservice && vaccountsaccountservice->isVirtualAccountsAccountService) {
        vaccountsaccountservice->childEvent(event);
    } else {
        ((VirtualAccountsAccountService*)self)->childEvent(event);
    }
}

// Base class handler implementation
void Accounts__AccountService_QBaseChildEvent(Accounts__AccountService* self, QChildEvent* event) {
    auto* vaccountsaccountservice = dynamic_cast<VirtualAccountsAccountService*>(self);
    if (vaccountsaccountservice && vaccountsaccountservice->isVirtualAccountsAccountService) {
        vaccountsaccountservice->setAccounts__AccountService_ChildEvent_IsBase(true);
        vaccountsaccountservice->childEvent(event);
    } else {
        ((VirtualAccountsAccountService*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void Accounts__AccountService_OnChildEvent(Accounts__AccountService* self, intptr_t slot) {
    auto* vaccountsaccountservice = dynamic_cast<VirtualAccountsAccountService*>(self);
    if (vaccountsaccountservice && vaccountsaccountservice->isVirtualAccountsAccountService) {
        vaccountsaccountservice->setAccounts__AccountService_ChildEvent_Callback(reinterpret_cast<VirtualAccountsAccountService::Accounts__AccountService_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void Accounts__AccountService_CustomEvent(Accounts__AccountService* self, QEvent* event) {
    auto* vaccountsaccountservice = dynamic_cast<VirtualAccountsAccountService*>(self);
    if (vaccountsaccountservice && vaccountsaccountservice->isVirtualAccountsAccountService) {
        vaccountsaccountservice->customEvent(event);
    } else {
        ((VirtualAccountsAccountService*)self)->customEvent(event);
    }
}

// Base class handler implementation
void Accounts__AccountService_QBaseCustomEvent(Accounts__AccountService* self, QEvent* event) {
    auto* vaccountsaccountservice = dynamic_cast<VirtualAccountsAccountService*>(self);
    if (vaccountsaccountservice && vaccountsaccountservice->isVirtualAccountsAccountService) {
        vaccountsaccountservice->setAccounts__AccountService_CustomEvent_IsBase(true);
        vaccountsaccountservice->customEvent(event);
    } else {
        ((VirtualAccountsAccountService*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void Accounts__AccountService_OnCustomEvent(Accounts__AccountService* self, intptr_t slot) {
    auto* vaccountsaccountservice = dynamic_cast<VirtualAccountsAccountService*>(self);
    if (vaccountsaccountservice && vaccountsaccountservice->isVirtualAccountsAccountService) {
        vaccountsaccountservice->setAccounts__AccountService_CustomEvent_Callback(reinterpret_cast<VirtualAccountsAccountService::Accounts__AccountService_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void Accounts__AccountService_ConnectNotify(Accounts__AccountService* self, const QMetaMethod* signal) {
    auto* vaccountsaccountservice = dynamic_cast<VirtualAccountsAccountService*>(self);
    if (vaccountsaccountservice && vaccountsaccountservice->isVirtualAccountsAccountService) {
        vaccountsaccountservice->connectNotify(*signal);
    } else {
        ((VirtualAccountsAccountService*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void Accounts__AccountService_QBaseConnectNotify(Accounts__AccountService* self, const QMetaMethod* signal) {
    auto* vaccountsaccountservice = dynamic_cast<VirtualAccountsAccountService*>(self);
    if (vaccountsaccountservice && vaccountsaccountservice->isVirtualAccountsAccountService) {
        vaccountsaccountservice->setAccounts__AccountService_ConnectNotify_IsBase(true);
        vaccountsaccountservice->connectNotify(*signal);
    } else {
        ((VirtualAccountsAccountService*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void Accounts__AccountService_OnConnectNotify(Accounts__AccountService* self, intptr_t slot) {
    auto* vaccountsaccountservice = dynamic_cast<VirtualAccountsAccountService*>(self);
    if (vaccountsaccountservice && vaccountsaccountservice->isVirtualAccountsAccountService) {
        vaccountsaccountservice->setAccounts__AccountService_ConnectNotify_Callback(reinterpret_cast<VirtualAccountsAccountService::Accounts__AccountService_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void Accounts__AccountService_DisconnectNotify(Accounts__AccountService* self, const QMetaMethod* signal) {
    auto* vaccountsaccountservice = dynamic_cast<VirtualAccountsAccountService*>(self);
    if (vaccountsaccountservice && vaccountsaccountservice->isVirtualAccountsAccountService) {
        vaccountsaccountservice->disconnectNotify(*signal);
    } else {
        ((VirtualAccountsAccountService*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void Accounts__AccountService_QBaseDisconnectNotify(Accounts__AccountService* self, const QMetaMethod* signal) {
    auto* vaccountsaccountservice = dynamic_cast<VirtualAccountsAccountService*>(self);
    if (vaccountsaccountservice && vaccountsaccountservice->isVirtualAccountsAccountService) {
        vaccountsaccountservice->setAccounts__AccountService_DisconnectNotify_IsBase(true);
        vaccountsaccountservice->disconnectNotify(*signal);
    } else {
        ((VirtualAccountsAccountService*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void Accounts__AccountService_OnDisconnectNotify(Accounts__AccountService* self, intptr_t slot) {
    auto* vaccountsaccountservice = dynamic_cast<VirtualAccountsAccountService*>(self);
    if (vaccountsaccountservice && vaccountsaccountservice->isVirtualAccountsAccountService) {
        vaccountsaccountservice->setAccounts__AccountService_DisconnectNotify_Callback(reinterpret_cast<VirtualAccountsAccountService::Accounts__AccountService_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* Accounts__AccountService_Sender(const Accounts__AccountService* self) {
    auto* vaccountsaccountservice = const_cast<VirtualAccountsAccountService*>(dynamic_cast<const VirtualAccountsAccountService*>(self));
    if (vaccountsaccountservice && vaccountsaccountservice->isVirtualAccountsAccountService) {
        return vaccountsaccountservice->sender();
    } else {
        return ((VirtualAccountsAccountService*)self)->sender();
    }
}

// Base class handler implementation
QObject* Accounts__AccountService_QBaseSender(const Accounts__AccountService* self) {
    auto* vaccountsaccountservice = const_cast<VirtualAccountsAccountService*>(dynamic_cast<const VirtualAccountsAccountService*>(self));
    if (vaccountsaccountservice && vaccountsaccountservice->isVirtualAccountsAccountService) {
        vaccountsaccountservice->setAccounts__AccountService_Sender_IsBase(true);
        return vaccountsaccountservice->sender();
    } else {
        return ((VirtualAccountsAccountService*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void Accounts__AccountService_OnSender(const Accounts__AccountService* self, intptr_t slot) {
    auto* vaccountsaccountservice = const_cast<VirtualAccountsAccountService*>(dynamic_cast<const VirtualAccountsAccountService*>(self));
    if (vaccountsaccountservice && vaccountsaccountservice->isVirtualAccountsAccountService) {
        vaccountsaccountservice->setAccounts__AccountService_Sender_Callback(reinterpret_cast<VirtualAccountsAccountService::Accounts__AccountService_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int Accounts__AccountService_SenderSignalIndex(const Accounts__AccountService* self) {
    auto* vaccountsaccountservice = const_cast<VirtualAccountsAccountService*>(dynamic_cast<const VirtualAccountsAccountService*>(self));
    if (vaccountsaccountservice && vaccountsaccountservice->isVirtualAccountsAccountService) {
        return vaccountsaccountservice->senderSignalIndex();
    } else {
        return ((VirtualAccountsAccountService*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int Accounts__AccountService_QBaseSenderSignalIndex(const Accounts__AccountService* self) {
    auto* vaccountsaccountservice = const_cast<VirtualAccountsAccountService*>(dynamic_cast<const VirtualAccountsAccountService*>(self));
    if (vaccountsaccountservice && vaccountsaccountservice->isVirtualAccountsAccountService) {
        vaccountsaccountservice->setAccounts__AccountService_SenderSignalIndex_IsBase(true);
        return vaccountsaccountservice->senderSignalIndex();
    } else {
        return ((VirtualAccountsAccountService*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void Accounts__AccountService_OnSenderSignalIndex(const Accounts__AccountService* self, intptr_t slot) {
    auto* vaccountsaccountservice = const_cast<VirtualAccountsAccountService*>(dynamic_cast<const VirtualAccountsAccountService*>(self));
    if (vaccountsaccountservice && vaccountsaccountservice->isVirtualAccountsAccountService) {
        vaccountsaccountservice->setAccounts__AccountService_SenderSignalIndex_Callback(reinterpret_cast<VirtualAccountsAccountService::Accounts__AccountService_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int Accounts__AccountService_Receivers(const Accounts__AccountService* self, const char* signal) {
    auto* vaccountsaccountservice = const_cast<VirtualAccountsAccountService*>(dynamic_cast<const VirtualAccountsAccountService*>(self));
    if (vaccountsaccountservice && vaccountsaccountservice->isVirtualAccountsAccountService) {
        return vaccountsaccountservice->receivers(signal);
    } else {
        return ((VirtualAccountsAccountService*)self)->receivers(signal);
    }
}

// Base class handler implementation
int Accounts__AccountService_QBaseReceivers(const Accounts__AccountService* self, const char* signal) {
    auto* vaccountsaccountservice = const_cast<VirtualAccountsAccountService*>(dynamic_cast<const VirtualAccountsAccountService*>(self));
    if (vaccountsaccountservice && vaccountsaccountservice->isVirtualAccountsAccountService) {
        vaccountsaccountservice->setAccounts__AccountService_Receivers_IsBase(true);
        return vaccountsaccountservice->receivers(signal);
    } else {
        return ((VirtualAccountsAccountService*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void Accounts__AccountService_OnReceivers(const Accounts__AccountService* self, intptr_t slot) {
    auto* vaccountsaccountservice = const_cast<VirtualAccountsAccountService*>(dynamic_cast<const VirtualAccountsAccountService*>(self));
    if (vaccountsaccountservice && vaccountsaccountservice->isVirtualAccountsAccountService) {
        vaccountsaccountservice->setAccounts__AccountService_Receivers_Callback(reinterpret_cast<VirtualAccountsAccountService::Accounts__AccountService_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool Accounts__AccountService_IsSignalConnected(const Accounts__AccountService* self, const QMetaMethod* signal) {
    auto* vaccountsaccountservice = const_cast<VirtualAccountsAccountService*>(dynamic_cast<const VirtualAccountsAccountService*>(self));
    if (vaccountsaccountservice && vaccountsaccountservice->isVirtualAccountsAccountService) {
        return vaccountsaccountservice->isSignalConnected(*signal);
    } else {
        return ((VirtualAccountsAccountService*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool Accounts__AccountService_QBaseIsSignalConnected(const Accounts__AccountService* self, const QMetaMethod* signal) {
    auto* vaccountsaccountservice = const_cast<VirtualAccountsAccountService*>(dynamic_cast<const VirtualAccountsAccountService*>(self));
    if (vaccountsaccountservice && vaccountsaccountservice->isVirtualAccountsAccountService) {
        vaccountsaccountservice->setAccounts__AccountService_IsSignalConnected_IsBase(true);
        return vaccountsaccountservice->isSignalConnected(*signal);
    } else {
        return ((VirtualAccountsAccountService*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void Accounts__AccountService_OnIsSignalConnected(const Accounts__AccountService* self, intptr_t slot) {
    auto* vaccountsaccountservice = const_cast<VirtualAccountsAccountService*>(dynamic_cast<const VirtualAccountsAccountService*>(self));
    if (vaccountsaccountservice && vaccountsaccountservice->isVirtualAccountsAccountService) {
        vaccountsaccountservice->setAccounts__AccountService_IsSignalConnected_Callback(reinterpret_cast<VirtualAccountsAccountService::Accounts__AccountService_IsSignalConnected_Callback>(slot));
    }
}

void Accounts__AccountService_Delete(Accounts__AccountService* self) {
    delete self;
}
