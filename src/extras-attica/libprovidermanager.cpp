#define WORKAROUND_INNER_CLASS_DEFINITION_Attica__Provider
#define WORKAROUND_INNER_CLASS_DEFINITION_Attica__ProviderManager
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
#include <QUrl>
#include <providermanager.h>
#include "libprovidermanager.h"
#include "libprovidermanager.hxx"

Attica__ProviderManager* Attica__ProviderManager_new() {
    return new VirtualAtticaProviderManager();
}

Attica__ProviderManager* Attica__ProviderManager_new2(const int* flags) {
    return new VirtualAtticaProviderManager((const Attica::ProviderManager::ProviderFlags&)(*flags));
}

QMetaObject* Attica__ProviderManager_MetaObject(const Attica__ProviderManager* self) {
    return (QMetaObject*)self->metaObject();
}

void* Attica__ProviderManager_Metacast(Attica__ProviderManager* self, const char* param1) {
    return self->qt_metacast(param1);
}

int Attica__ProviderManager_Metacall(Attica__ProviderManager* self, int param1, int param2, void** param3) {
    auto* vattica__providermanager = dynamic_cast<VirtualAtticaProviderManager*>(self);
    if (vattica__providermanager && vattica__providermanager->isVirtualAtticaProviderManager) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualAtticaProviderManager*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string Attica__ProviderManager_Tr(const char* s) {
    QString _ret = Attica::ProviderManager::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void Attica__ProviderManager_LoadDefaultProviders(Attica__ProviderManager* self) {
    self->loadDefaultProviders();
}

libqt_list /* of QUrl* */ Attica__ProviderManager_DefaultProviderFiles(Attica__ProviderManager* self) {
    QList<QUrl> _ret = self->defaultProviderFiles();
    // Convert QList<> from C++ memory to manually-managed C memory
    QUrl** _arr = static_cast<QUrl**>(malloc(sizeof(QUrl*) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QUrl(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void Attica__ProviderManager_AddProviderFileToDefaultProviders(Attica__ProviderManager* self, const QUrl* url) {
    self->addProviderFileToDefaultProviders(*url);
}

void Attica__ProviderManager_RemoveProviderFileFromDefaultProviders(Attica__ProviderManager* self, const QUrl* url) {
    self->removeProviderFileFromDefaultProviders(*url);
}

void Attica__ProviderManager_SetAuthenticationSuppressed(Attica__ProviderManager* self, bool suppressed) {
    self->setAuthenticationSuppressed(suppressed);
}

void Attica__ProviderManager_Clear(Attica__ProviderManager* self) {
    self->clear();
}

void Attica__ProviderManager_AddProviderFromXml(Attica__ProviderManager* self, const libqt_string providerXml) {
    QString providerXml_QString = QString::fromUtf8(providerXml.data, providerXml.len);
    self->addProviderFromXml(providerXml_QString);
}

void Attica__ProviderManager_AddProviderFile(Attica__ProviderManager* self, const QUrl* file) {
    self->addProviderFile(*file);
}

libqt_list /* of QUrl* */ Attica__ProviderManager_ProviderFiles(const Attica__ProviderManager* self) {
    QList<QUrl> _ret = self->providerFiles();
    // Convert QList<> from C++ memory to manually-managed C memory
    QUrl** _arr = static_cast<QUrl**>(malloc(sizeof(QUrl*) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QUrl(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_list /* of Attica__Provider* */ Attica__ProviderManager_Providers(const Attica__ProviderManager* self) {
    QList<Attica::Provider> _ret = self->providers();
    // Convert QList<> from C++ memory to manually-managed C memory
    Attica__Provider** _arr = static_cast<Attica__Provider**>(malloc(sizeof(Attica__Provider*) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new Attica::Provider(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

bool Attica__ProviderManager_Contains(const Attica__ProviderManager* self, const QUrl* provider) {
    return self->contains(*provider);
}

Attica__Provider* Attica__ProviderManager_ProviderByUrl(const Attica__ProviderManager* self, const QUrl* url) {
    return new Attica::Provider(self->providerByUrl(*url));
}

Attica__Provider* Attica__ProviderManager_ProviderFor(const Attica__ProviderManager* self, const QUrl* url) {
    return new Attica::Provider(self->providerFor(*url));
}

void Attica__ProviderManager_ProviderAdded(Attica__ProviderManager* self, const Attica__Provider* provider) {
    self->providerAdded(*provider);
}

void Attica__ProviderManager_Connect_ProviderAdded(Attica__ProviderManager* self, intptr_t slot) {
    void (*slotFunc)(Attica__ProviderManager*, Attica__Provider*) = reinterpret_cast<void (*)(Attica__ProviderManager*, Attica__Provider*)>(slot);
    Attica::ProviderManager::connect(self, &Attica::ProviderManager::providerAdded, [self, slotFunc](const Attica::Provider& provider) {
        const Attica::Provider& provider_ret = provider;
        // Cast returned reference into pointer
        Attica__Provider* sigval1 = const_cast<Attica::Provider*>(&provider_ret);
        slotFunc(self, sigval1);
    });
}

void Attica__ProviderManager_DefaultProvidersLoaded(Attica__ProviderManager* self) {
    self->defaultProvidersLoaded();
}

void Attica__ProviderManager_Connect_DefaultProvidersLoaded(Attica__ProviderManager* self, intptr_t slot) {
    void (*slotFunc)(Attica__ProviderManager*) = reinterpret_cast<void (*)(Attica__ProviderManager*)>(slot);
    Attica::ProviderManager::connect(self, &Attica::ProviderManager::defaultProvidersLoaded, [self, slotFunc]() {
        slotFunc(self);
    });
}

void Attica__ProviderManager_AuthenticationCredentialsMissing(Attica__ProviderManager* self, const Attica__Provider* provider) {
    self->authenticationCredentialsMissing(*provider);
}

void Attica__ProviderManager_Connect_AuthenticationCredentialsMissing(Attica__ProviderManager* self, intptr_t slot) {
    void (*slotFunc)(Attica__ProviderManager*, Attica__Provider*) = reinterpret_cast<void (*)(Attica__ProviderManager*, Attica__Provider*)>(slot);
    Attica::ProviderManager::connect(self, &Attica::ProviderManager::authenticationCredentialsMissing, [self, slotFunc](const Attica::Provider& provider) {
        const Attica::Provider& provider_ret = provider;
        // Cast returned reference into pointer
        Attica__Provider* sigval1 = const_cast<Attica::Provider*>(&provider_ret);
        slotFunc(self, sigval1);
    });
}

void Attica__ProviderManager_FailedToLoad(Attica__ProviderManager* self, const QUrl* provider, int errorVal) {
    self->failedToLoad(*provider, static_cast<QNetworkReply::NetworkError>(errorVal));
}

void Attica__ProviderManager_Connect_FailedToLoad(Attica__ProviderManager* self, intptr_t slot) {
    void (*slotFunc)(Attica__ProviderManager*, QUrl*, int) = reinterpret_cast<void (*)(Attica__ProviderManager*, QUrl*, int)>(slot);
    Attica::ProviderManager::connect(self, &Attica::ProviderManager::failedToLoad, [self, slotFunc](const QUrl& provider, QNetworkReply::NetworkError errorVal) {
        const QUrl& provider_ret = provider;
        // Cast returned reference into pointer
        QUrl* sigval1 = const_cast<QUrl*>(&provider_ret);
        int sigval2 = static_cast<int>(errorVal);
        slotFunc(self, sigval1, sigval2);
    });
}

libqt_string Attica__ProviderManager_Tr2(const char* s, const char* c) {
    QString _ret = Attica::ProviderManager::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string Attica__ProviderManager_Tr3(const char* s, const char* c, int n) {
    QString _ret = Attica::ProviderManager::tr(s, c, static_cast<int>(n));
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
int Attica__ProviderManager_QBaseMetacall(Attica__ProviderManager* self, int param1, int param2, void** param3) {
    auto* vatticaprovidermanager = dynamic_cast<VirtualAtticaProviderManager*>(self);
    if (vatticaprovidermanager && vatticaprovidermanager->isVirtualAtticaProviderManager) {
        vatticaprovidermanager->setAttica__ProviderManager_Metacall_IsBase(true);
        return vatticaprovidermanager->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->Attica::ProviderManager::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void Attica__ProviderManager_OnMetacall(Attica__ProviderManager* self, intptr_t slot) {
    auto* vatticaprovidermanager = dynamic_cast<VirtualAtticaProviderManager*>(self);
    if (vatticaprovidermanager && vatticaprovidermanager->isVirtualAtticaProviderManager) {
        vatticaprovidermanager->setAttica__ProviderManager_Metacall_Callback(reinterpret_cast<VirtualAtticaProviderManager::Attica__ProviderManager_Metacall_Callback>(slot));
    }
}

// Derived class handler implementation
bool Attica__ProviderManager_Event(Attica__ProviderManager* self, QEvent* event) {
    auto* vatticaprovidermanager = dynamic_cast<VirtualAtticaProviderManager*>(self);
    if (vatticaprovidermanager && vatticaprovidermanager->isVirtualAtticaProviderManager) {
        return vatticaprovidermanager->event(event);
    } else {
        return self->Attica::ProviderManager::event(event);
    }
}

// Base class handler implementation
bool Attica__ProviderManager_QBaseEvent(Attica__ProviderManager* self, QEvent* event) {
    auto* vatticaprovidermanager = dynamic_cast<VirtualAtticaProviderManager*>(self);
    if (vatticaprovidermanager && vatticaprovidermanager->isVirtualAtticaProviderManager) {
        vatticaprovidermanager->setAttica__ProviderManager_Event_IsBase(true);
        return vatticaprovidermanager->event(event);
    } else {
        return self->Attica::ProviderManager::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void Attica__ProviderManager_OnEvent(Attica__ProviderManager* self, intptr_t slot) {
    auto* vatticaprovidermanager = dynamic_cast<VirtualAtticaProviderManager*>(self);
    if (vatticaprovidermanager && vatticaprovidermanager->isVirtualAtticaProviderManager) {
        vatticaprovidermanager->setAttica__ProviderManager_Event_Callback(reinterpret_cast<VirtualAtticaProviderManager::Attica__ProviderManager_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool Attica__ProviderManager_EventFilter(Attica__ProviderManager* self, QObject* watched, QEvent* event) {
    auto* vatticaprovidermanager = dynamic_cast<VirtualAtticaProviderManager*>(self);
    if (vatticaprovidermanager && vatticaprovidermanager->isVirtualAtticaProviderManager) {
        return vatticaprovidermanager->eventFilter(watched, event);
    } else {
        return self->Attica::ProviderManager::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool Attica__ProviderManager_QBaseEventFilter(Attica__ProviderManager* self, QObject* watched, QEvent* event) {
    auto* vatticaprovidermanager = dynamic_cast<VirtualAtticaProviderManager*>(self);
    if (vatticaprovidermanager && vatticaprovidermanager->isVirtualAtticaProviderManager) {
        vatticaprovidermanager->setAttica__ProviderManager_EventFilter_IsBase(true);
        return vatticaprovidermanager->eventFilter(watched, event);
    } else {
        return self->Attica::ProviderManager::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void Attica__ProviderManager_OnEventFilter(Attica__ProviderManager* self, intptr_t slot) {
    auto* vatticaprovidermanager = dynamic_cast<VirtualAtticaProviderManager*>(self);
    if (vatticaprovidermanager && vatticaprovidermanager->isVirtualAtticaProviderManager) {
        vatticaprovidermanager->setAttica__ProviderManager_EventFilter_Callback(reinterpret_cast<VirtualAtticaProviderManager::Attica__ProviderManager_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void Attica__ProviderManager_TimerEvent(Attica__ProviderManager* self, QTimerEvent* event) {
    auto* vatticaprovidermanager = dynamic_cast<VirtualAtticaProviderManager*>(self);
    if (vatticaprovidermanager && vatticaprovidermanager->isVirtualAtticaProviderManager) {
        vatticaprovidermanager->timerEvent(event);
    } else {
        ((VirtualAtticaProviderManager*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void Attica__ProviderManager_QBaseTimerEvent(Attica__ProviderManager* self, QTimerEvent* event) {
    auto* vatticaprovidermanager = dynamic_cast<VirtualAtticaProviderManager*>(self);
    if (vatticaprovidermanager && vatticaprovidermanager->isVirtualAtticaProviderManager) {
        vatticaprovidermanager->setAttica__ProviderManager_TimerEvent_IsBase(true);
        vatticaprovidermanager->timerEvent(event);
    } else {
        ((VirtualAtticaProviderManager*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void Attica__ProviderManager_OnTimerEvent(Attica__ProviderManager* self, intptr_t slot) {
    auto* vatticaprovidermanager = dynamic_cast<VirtualAtticaProviderManager*>(self);
    if (vatticaprovidermanager && vatticaprovidermanager->isVirtualAtticaProviderManager) {
        vatticaprovidermanager->setAttica__ProviderManager_TimerEvent_Callback(reinterpret_cast<VirtualAtticaProviderManager::Attica__ProviderManager_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void Attica__ProviderManager_ChildEvent(Attica__ProviderManager* self, QChildEvent* event) {
    auto* vatticaprovidermanager = dynamic_cast<VirtualAtticaProviderManager*>(self);
    if (vatticaprovidermanager && vatticaprovidermanager->isVirtualAtticaProviderManager) {
        vatticaprovidermanager->childEvent(event);
    } else {
        ((VirtualAtticaProviderManager*)self)->childEvent(event);
    }
}

// Base class handler implementation
void Attica__ProviderManager_QBaseChildEvent(Attica__ProviderManager* self, QChildEvent* event) {
    auto* vatticaprovidermanager = dynamic_cast<VirtualAtticaProviderManager*>(self);
    if (vatticaprovidermanager && vatticaprovidermanager->isVirtualAtticaProviderManager) {
        vatticaprovidermanager->setAttica__ProviderManager_ChildEvent_IsBase(true);
        vatticaprovidermanager->childEvent(event);
    } else {
        ((VirtualAtticaProviderManager*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void Attica__ProviderManager_OnChildEvent(Attica__ProviderManager* self, intptr_t slot) {
    auto* vatticaprovidermanager = dynamic_cast<VirtualAtticaProviderManager*>(self);
    if (vatticaprovidermanager && vatticaprovidermanager->isVirtualAtticaProviderManager) {
        vatticaprovidermanager->setAttica__ProviderManager_ChildEvent_Callback(reinterpret_cast<VirtualAtticaProviderManager::Attica__ProviderManager_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void Attica__ProviderManager_CustomEvent(Attica__ProviderManager* self, QEvent* event) {
    auto* vatticaprovidermanager = dynamic_cast<VirtualAtticaProviderManager*>(self);
    if (vatticaprovidermanager && vatticaprovidermanager->isVirtualAtticaProviderManager) {
        vatticaprovidermanager->customEvent(event);
    } else {
        ((VirtualAtticaProviderManager*)self)->customEvent(event);
    }
}

// Base class handler implementation
void Attica__ProviderManager_QBaseCustomEvent(Attica__ProviderManager* self, QEvent* event) {
    auto* vatticaprovidermanager = dynamic_cast<VirtualAtticaProviderManager*>(self);
    if (vatticaprovidermanager && vatticaprovidermanager->isVirtualAtticaProviderManager) {
        vatticaprovidermanager->setAttica__ProviderManager_CustomEvent_IsBase(true);
        vatticaprovidermanager->customEvent(event);
    } else {
        ((VirtualAtticaProviderManager*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void Attica__ProviderManager_OnCustomEvent(Attica__ProviderManager* self, intptr_t slot) {
    auto* vatticaprovidermanager = dynamic_cast<VirtualAtticaProviderManager*>(self);
    if (vatticaprovidermanager && vatticaprovidermanager->isVirtualAtticaProviderManager) {
        vatticaprovidermanager->setAttica__ProviderManager_CustomEvent_Callback(reinterpret_cast<VirtualAtticaProviderManager::Attica__ProviderManager_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void Attica__ProviderManager_ConnectNotify(Attica__ProviderManager* self, const QMetaMethod* signal) {
    auto* vatticaprovidermanager = dynamic_cast<VirtualAtticaProviderManager*>(self);
    if (vatticaprovidermanager && vatticaprovidermanager->isVirtualAtticaProviderManager) {
        vatticaprovidermanager->connectNotify(*signal);
    } else {
        ((VirtualAtticaProviderManager*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void Attica__ProviderManager_QBaseConnectNotify(Attica__ProviderManager* self, const QMetaMethod* signal) {
    auto* vatticaprovidermanager = dynamic_cast<VirtualAtticaProviderManager*>(self);
    if (vatticaprovidermanager && vatticaprovidermanager->isVirtualAtticaProviderManager) {
        vatticaprovidermanager->setAttica__ProviderManager_ConnectNotify_IsBase(true);
        vatticaprovidermanager->connectNotify(*signal);
    } else {
        ((VirtualAtticaProviderManager*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void Attica__ProviderManager_OnConnectNotify(Attica__ProviderManager* self, intptr_t slot) {
    auto* vatticaprovidermanager = dynamic_cast<VirtualAtticaProviderManager*>(self);
    if (vatticaprovidermanager && vatticaprovidermanager->isVirtualAtticaProviderManager) {
        vatticaprovidermanager->setAttica__ProviderManager_ConnectNotify_Callback(reinterpret_cast<VirtualAtticaProviderManager::Attica__ProviderManager_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void Attica__ProviderManager_DisconnectNotify(Attica__ProviderManager* self, const QMetaMethod* signal) {
    auto* vatticaprovidermanager = dynamic_cast<VirtualAtticaProviderManager*>(self);
    if (vatticaprovidermanager && vatticaprovidermanager->isVirtualAtticaProviderManager) {
        vatticaprovidermanager->disconnectNotify(*signal);
    } else {
        ((VirtualAtticaProviderManager*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void Attica__ProviderManager_QBaseDisconnectNotify(Attica__ProviderManager* self, const QMetaMethod* signal) {
    auto* vatticaprovidermanager = dynamic_cast<VirtualAtticaProviderManager*>(self);
    if (vatticaprovidermanager && vatticaprovidermanager->isVirtualAtticaProviderManager) {
        vatticaprovidermanager->setAttica__ProviderManager_DisconnectNotify_IsBase(true);
        vatticaprovidermanager->disconnectNotify(*signal);
    } else {
        ((VirtualAtticaProviderManager*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void Attica__ProviderManager_OnDisconnectNotify(Attica__ProviderManager* self, intptr_t slot) {
    auto* vatticaprovidermanager = dynamic_cast<VirtualAtticaProviderManager*>(self);
    if (vatticaprovidermanager && vatticaprovidermanager->isVirtualAtticaProviderManager) {
        vatticaprovidermanager->setAttica__ProviderManager_DisconnectNotify_Callback(reinterpret_cast<VirtualAtticaProviderManager::Attica__ProviderManager_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* Attica__ProviderManager_Sender(const Attica__ProviderManager* self) {
    auto* vatticaprovidermanager = const_cast<VirtualAtticaProviderManager*>(dynamic_cast<const VirtualAtticaProviderManager*>(self));
    if (vatticaprovidermanager && vatticaprovidermanager->isVirtualAtticaProviderManager) {
        return vatticaprovidermanager->sender();
    } else {
        return ((VirtualAtticaProviderManager*)self)->sender();
    }
}

// Base class handler implementation
QObject* Attica__ProviderManager_QBaseSender(const Attica__ProviderManager* self) {
    auto* vatticaprovidermanager = const_cast<VirtualAtticaProviderManager*>(dynamic_cast<const VirtualAtticaProviderManager*>(self));
    if (vatticaprovidermanager && vatticaprovidermanager->isVirtualAtticaProviderManager) {
        vatticaprovidermanager->setAttica__ProviderManager_Sender_IsBase(true);
        return vatticaprovidermanager->sender();
    } else {
        return ((VirtualAtticaProviderManager*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void Attica__ProviderManager_OnSender(const Attica__ProviderManager* self, intptr_t slot) {
    auto* vatticaprovidermanager = const_cast<VirtualAtticaProviderManager*>(dynamic_cast<const VirtualAtticaProviderManager*>(self));
    if (vatticaprovidermanager && vatticaprovidermanager->isVirtualAtticaProviderManager) {
        vatticaprovidermanager->setAttica__ProviderManager_Sender_Callback(reinterpret_cast<VirtualAtticaProviderManager::Attica__ProviderManager_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int Attica__ProviderManager_SenderSignalIndex(const Attica__ProviderManager* self) {
    auto* vatticaprovidermanager = const_cast<VirtualAtticaProviderManager*>(dynamic_cast<const VirtualAtticaProviderManager*>(self));
    if (vatticaprovidermanager && vatticaprovidermanager->isVirtualAtticaProviderManager) {
        return vatticaprovidermanager->senderSignalIndex();
    } else {
        return ((VirtualAtticaProviderManager*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int Attica__ProviderManager_QBaseSenderSignalIndex(const Attica__ProviderManager* self) {
    auto* vatticaprovidermanager = const_cast<VirtualAtticaProviderManager*>(dynamic_cast<const VirtualAtticaProviderManager*>(self));
    if (vatticaprovidermanager && vatticaprovidermanager->isVirtualAtticaProviderManager) {
        vatticaprovidermanager->setAttica__ProviderManager_SenderSignalIndex_IsBase(true);
        return vatticaprovidermanager->senderSignalIndex();
    } else {
        return ((VirtualAtticaProviderManager*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void Attica__ProviderManager_OnSenderSignalIndex(const Attica__ProviderManager* self, intptr_t slot) {
    auto* vatticaprovidermanager = const_cast<VirtualAtticaProviderManager*>(dynamic_cast<const VirtualAtticaProviderManager*>(self));
    if (vatticaprovidermanager && vatticaprovidermanager->isVirtualAtticaProviderManager) {
        vatticaprovidermanager->setAttica__ProviderManager_SenderSignalIndex_Callback(reinterpret_cast<VirtualAtticaProviderManager::Attica__ProviderManager_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int Attica__ProviderManager_Receivers(const Attica__ProviderManager* self, const char* signal) {
    auto* vatticaprovidermanager = const_cast<VirtualAtticaProviderManager*>(dynamic_cast<const VirtualAtticaProviderManager*>(self));
    if (vatticaprovidermanager && vatticaprovidermanager->isVirtualAtticaProviderManager) {
        return vatticaprovidermanager->receivers(signal);
    } else {
        return ((VirtualAtticaProviderManager*)self)->receivers(signal);
    }
}

// Base class handler implementation
int Attica__ProviderManager_QBaseReceivers(const Attica__ProviderManager* self, const char* signal) {
    auto* vatticaprovidermanager = const_cast<VirtualAtticaProviderManager*>(dynamic_cast<const VirtualAtticaProviderManager*>(self));
    if (vatticaprovidermanager && vatticaprovidermanager->isVirtualAtticaProviderManager) {
        vatticaprovidermanager->setAttica__ProviderManager_Receivers_IsBase(true);
        return vatticaprovidermanager->receivers(signal);
    } else {
        return ((VirtualAtticaProviderManager*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void Attica__ProviderManager_OnReceivers(const Attica__ProviderManager* self, intptr_t slot) {
    auto* vatticaprovidermanager = const_cast<VirtualAtticaProviderManager*>(dynamic_cast<const VirtualAtticaProviderManager*>(self));
    if (vatticaprovidermanager && vatticaprovidermanager->isVirtualAtticaProviderManager) {
        vatticaprovidermanager->setAttica__ProviderManager_Receivers_Callback(reinterpret_cast<VirtualAtticaProviderManager::Attica__ProviderManager_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool Attica__ProviderManager_IsSignalConnected(const Attica__ProviderManager* self, const QMetaMethod* signal) {
    auto* vatticaprovidermanager = const_cast<VirtualAtticaProviderManager*>(dynamic_cast<const VirtualAtticaProviderManager*>(self));
    if (vatticaprovidermanager && vatticaprovidermanager->isVirtualAtticaProviderManager) {
        return vatticaprovidermanager->isSignalConnected(*signal);
    } else {
        return ((VirtualAtticaProviderManager*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool Attica__ProviderManager_QBaseIsSignalConnected(const Attica__ProviderManager* self, const QMetaMethod* signal) {
    auto* vatticaprovidermanager = const_cast<VirtualAtticaProviderManager*>(dynamic_cast<const VirtualAtticaProviderManager*>(self));
    if (vatticaprovidermanager && vatticaprovidermanager->isVirtualAtticaProviderManager) {
        vatticaprovidermanager->setAttica__ProviderManager_IsSignalConnected_IsBase(true);
        return vatticaprovidermanager->isSignalConnected(*signal);
    } else {
        return ((VirtualAtticaProviderManager*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void Attica__ProviderManager_OnIsSignalConnected(const Attica__ProviderManager* self, intptr_t slot) {
    auto* vatticaprovidermanager = const_cast<VirtualAtticaProviderManager*>(dynamic_cast<const VirtualAtticaProviderManager*>(self));
    if (vatticaprovidermanager && vatticaprovidermanager->isVirtualAtticaProviderManager) {
        vatticaprovidermanager->setAttica__ProviderManager_IsSignalConnected_Callback(reinterpret_cast<VirtualAtticaProviderManager::Attica__ProviderManager_IsSignalConnected_Callback>(slot));
    }
}

void Attica__ProviderManager_Delete(Attica__ProviderManager* self) {
    delete self;
}
