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
#define WORKAROUND_INNER_CLASS_DEFINITION_SignOn__AuthService
#define WORKAROUND_INNER_CLASS_DEFINITION_SignOn__AuthService__IdentityRegExp
#define WORKAROUND_INNER_CLASS_DEFINITION_SignOn__Error
#define WORKAROUND_INNER_CLASS_DEFINITION_SignOn__IdentityInfo
#include <authservice.h>
#include "libauthservice.h"
#include "libauthservice.hxx"

SignOn__AuthService* SignOn__AuthService_new() {
    return new VirtualSignOnAuthService();
}

SignOn__AuthService* SignOn__AuthService_new2(QObject* parent) {
    return new VirtualSignOnAuthService(parent);
}

QMetaObject* SignOn__AuthService_MetaObject(const SignOn__AuthService* self) {
    auto* vsignon__authservice = dynamic_cast<const VirtualSignOnAuthService*>(self);
    if (vsignon__authservice && vsignon__authservice->isVirtualSignOnAuthService) {
        return (QMetaObject*)self->metaObject();
    } else {
        return (QMetaObject*)((VirtualSignOnAuthService*)self)->metaObject();
    }
}

void* SignOn__AuthService_Metacast(SignOn__AuthService* self, const char* param1) {
    auto* vsignon__authservice = dynamic_cast<VirtualSignOnAuthService*>(self);
    if (vsignon__authservice && vsignon__authservice->isVirtualSignOnAuthService) {
        return self->qt_metacast(param1);
    } else {
        return ((VirtualSignOnAuthService*)self)->qt_metacast(param1);
    }
}

int SignOn__AuthService_Metacall(SignOn__AuthService* self, int param1, int param2, void** param3) {
    auto* vsignon__authservice = dynamic_cast<VirtualSignOnAuthService*>(self);
    if (vsignon__authservice && vsignon__authservice->isVirtualSignOnAuthService) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualSignOnAuthService*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

void SignOn__AuthService_QueryMethods(SignOn__AuthService* self) {
    self->queryMethods();
}

void SignOn__AuthService_QueryMechanisms(SignOn__AuthService* self, const libqt_string method) {
    QString method_QString = QString::fromUtf8(method.data, method.len);
    self->queryMechanisms(method_QString);
}

void SignOn__AuthService_QueryIdentities(SignOn__AuthService* self) {
    self->queryIdentities();
}

void SignOn__AuthService_Clear(SignOn__AuthService* self) {
    self->clear();
}

void SignOn__AuthService_Error(SignOn__AuthService* self, const SignOn__Error* err) {
    self->error(*err);
}

void SignOn__AuthService_Connect_Error(SignOn__AuthService* self, intptr_t slot) {
    void (*slotFunc)(SignOn__AuthService*, SignOn__Error*) = reinterpret_cast<void (*)(SignOn__AuthService*, SignOn__Error*)>(slot);
    SignOn::AuthService::connect(self, &SignOn::AuthService::error, [self, slotFunc](const SignOn::Error& err) {
        const SignOn::Error& err_ret = err;
        // Cast returned reference into pointer
        SignOn__Error* sigval1 = const_cast<SignOn::Error*>(&err_ret);
        slotFunc(self, sigval1);
    });
}

void SignOn__AuthService_MethodsAvailable(SignOn__AuthService* self, const libqt_list /* of libqt_string */ methods) {
    QList<QString> methods_QList;
    methods_QList.reserve(methods.len);
    libqt_string* methods_arr = static_cast<libqt_string*>(methods.data);
    for (size_t i = 0; i < methods.len; ++i) {
        QString methods_arr_i_QString = QString::fromUtf8(methods_arr[i].data, methods_arr[i].len);
        methods_QList.push_back(methods_arr_i_QString);
    }
    self->methodsAvailable(methods_QList);
}

void SignOn__AuthService_Connect_MethodsAvailable(SignOn__AuthService* self, intptr_t slot) {
    void (*slotFunc)(SignOn__AuthService*, const char**) = reinterpret_cast<void (*)(SignOn__AuthService*, const char**)>(slot);
    SignOn::AuthService::connect(self, &SignOn::AuthService::methodsAvailable, [self, slotFunc](const QList<QString>& methods) {
        const QList<QString>& methods_ret = methods;
        // Convert QString from UTF-16 in C++ RAII memory to null-terminated UTF-8 chars in manually-managed C memory
        const char** methods_arr = static_cast<const char**>(malloc(sizeof(const char*) * (methods_ret.size() + 1)));
        for (qsizetype i = 0; i < methods_ret.size(); ++i) {
            QByteArray methods_b = methods_ret[i].toUtf8();
            auto methods_str_len = methods_b.length();
            char* methods_str = static_cast<char*>(malloc(methods_str_len + 1));
            memcpy(methods_str, methods_b.data(), methods_str_len);
            methods_str[methods_str_len] = '\0';
            methods_arr[i] = methods_str;
        }
        // Append sentinel null terminator to the list
        methods_arr[methods_ret.size()] = nullptr;
        const char** sigval1 = methods_arr;
        slotFunc(self, sigval1);
        libqt_free(methods_arr);
    });
}

void SignOn__AuthService_MechanismsAvailable(SignOn__AuthService* self, const libqt_string method, const libqt_list /* of libqt_string */ mechanisms) {
    QString method_QString = QString::fromUtf8(method.data, method.len);
    QList<QString> mechanisms_QList;
    mechanisms_QList.reserve(mechanisms.len);
    libqt_string* mechanisms_arr = static_cast<libqt_string*>(mechanisms.data);
    for (size_t i = 0; i < mechanisms.len; ++i) {
        QString mechanisms_arr_i_QString = QString::fromUtf8(mechanisms_arr[i].data, mechanisms_arr[i].len);
        mechanisms_QList.push_back(mechanisms_arr_i_QString);
    }
    self->mechanismsAvailable(method_QString, mechanisms_QList);
}

void SignOn__AuthService_Connect_MechanismsAvailable(SignOn__AuthService* self, intptr_t slot) {
    void (*slotFunc)(SignOn__AuthService*, const char*, const char**) = reinterpret_cast<void (*)(SignOn__AuthService*, const char*, const char**)>(slot);
    SignOn::AuthService::connect(self, &SignOn::AuthService::mechanismsAvailable, [self, slotFunc](const QString& method, const QList<QString>& mechanisms) {
        const QString method_ret = method;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray method_b = method_ret.toUtf8();
        auto method_str_len = method_b.length();
        const char* method_str = static_cast<const char*>(malloc(method_str_len + 1));
        memcpy((void*)method_str, method_b.data(), method_str_len);
        ((char*)method_str)[method_str_len] = '\0';
        const char* sigval1 = method_str;
        const QList<QString>& mechanisms_ret = mechanisms;
        // Convert QString from UTF-16 in C++ RAII memory to null-terminated UTF-8 chars in manually-managed C memory
        const char** mechanisms_arr = static_cast<const char**>(malloc(sizeof(const char*) * (mechanisms_ret.size() + 1)));
        for (qsizetype i = 0; i < mechanisms_ret.size(); ++i) {
            QByteArray mechanisms_b = mechanisms_ret[i].toUtf8();
            auto mechanisms_str_len = mechanisms_b.length();
            char* mechanisms_str = static_cast<char*>(malloc(mechanisms_str_len + 1));
            memcpy(mechanisms_str, mechanisms_b.data(), mechanisms_str_len);
            mechanisms_str[mechanisms_str_len] = '\0';
            mechanisms_arr[i] = mechanisms_str;
        }
        // Append sentinel null terminator to the list
        mechanisms_arr[mechanisms_ret.size()] = nullptr;
        const char** sigval2 = mechanisms_arr;
        slotFunc(self, sigval1, sigval2);
        libqt_free(method_str);
        libqt_free(mechanisms_arr);
    });
}

void SignOn__AuthService_Identities(SignOn__AuthService* self, const libqt_list /* of SignOn__IdentityInfo* */ identityList) {
    QList<SignOn::IdentityInfo> identityList_QList;
    identityList_QList.reserve(identityList.len);
    SignOn__IdentityInfo** identityList_arr = static_cast<SignOn__IdentityInfo**>(identityList.data);
    for (size_t i = 0; i < identityList.len; ++i) {
        identityList_QList.push_back(*(identityList_arr[i]));
    }
    self->identities(identityList_QList);
}

void SignOn__AuthService_Connect_Identities(SignOn__AuthService* self, intptr_t slot) {
    void (*slotFunc)(SignOn__AuthService*, libqt_list /* of SignOn__IdentityInfo* */) = reinterpret_cast<void (*)(SignOn__AuthService*, libqt_list /* of SignOn__IdentityInfo* */)>(slot);
    SignOn::AuthService::connect(self, &SignOn::AuthService::identities, [self, slotFunc](const QList<SignOn::IdentityInfo>& identityList) {
        const QList<SignOn::IdentityInfo>& identityList_ret = identityList;
        // Convert QList<> from C++ memory to manually-managed C memory
        SignOn__IdentityInfo** identityList_arr = static_cast<SignOn__IdentityInfo**>(malloc(sizeof(SignOn__IdentityInfo*) * (identityList_ret.size())));
        for (qsizetype i = 0; i < identityList_ret.size(); ++i) {
            identityList_arr[i] = new SignOn::IdentityInfo(identityList_ret[i]);
        }
        libqt_list identityList_out;
        identityList_out.len = identityList_ret.size();
        identityList_out.data = static_cast<void*>(identityList_arr);
        libqt_list /* of SignOn__IdentityInfo* */ sigval1 = identityList_out;
        slotFunc(self, sigval1);
        free(identityList_arr);
    });
}

void SignOn__AuthService_Cleared(SignOn__AuthService* self) {
    self->cleared();
}

void SignOn__AuthService_Connect_Cleared(SignOn__AuthService* self, intptr_t slot) {
    void (*slotFunc)(SignOn__AuthService*) = reinterpret_cast<void (*)(SignOn__AuthService*)>(slot);
    SignOn::AuthService::connect(self, &SignOn::AuthService::cleared, [self, slotFunc]() {
        slotFunc(self);
    });
}

// Base class handler implementation
QMetaObject* SignOn__AuthService_SuperMetaObject(const SignOn__AuthService* self) {
    auto* vsignonauthservice = const_cast<VirtualSignOnAuthService*>(dynamic_cast<const VirtualSignOnAuthService*>(self));
    if (vsignonauthservice && vsignonauthservice->isVirtualSignOnAuthService) {
        vsignonauthservice->setSignOn__AuthService_MetaObject_IsBase(true);
        return (QMetaObject*)vsignonauthservice->metaObject();
    } else {
        return (QMetaObject*)self->SignOn::AuthService::metaObject();
    }
}

// Auxiliary method to allow providing re-implementation
void SignOn__AuthService_OnMetaObject(const SignOn__AuthService* self, intptr_t slot) {
    auto* vsignonauthservice = const_cast<VirtualSignOnAuthService*>(dynamic_cast<const VirtualSignOnAuthService*>(self));
    if (vsignonauthservice && vsignonauthservice->isVirtualSignOnAuthService) {
        vsignonauthservice->setSignOn__AuthService_MetaObject_Callback(reinterpret_cast<VirtualSignOnAuthService::SignOn__AuthService_MetaObject_Callback>(slot));
    }
}

// Base class handler implementation
void* SignOn__AuthService_SuperMetacast(SignOn__AuthService* self, const char* param1) {
    auto* vsignonauthservice = dynamic_cast<VirtualSignOnAuthService*>(self);
    if (vsignonauthservice && vsignonauthservice->isVirtualSignOnAuthService) {
        vsignonauthservice->setSignOn__AuthService_Metacast_IsBase(true);
        return vsignonauthservice->qt_metacast(param1);
    } else {
        return self->SignOn::AuthService::qt_metacast(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void SignOn__AuthService_OnMetacast(SignOn__AuthService* self, intptr_t slot) {
    auto* vsignonauthservice = dynamic_cast<VirtualSignOnAuthService*>(self);
    if (vsignonauthservice && vsignonauthservice->isVirtualSignOnAuthService) {
        vsignonauthservice->setSignOn__AuthService_Metacast_Callback(reinterpret_cast<VirtualSignOnAuthService::SignOn__AuthService_Metacast_Callback>(slot));
    }
}

// Base class handler implementation
int SignOn__AuthService_SuperMetacall(SignOn__AuthService* self, int param1, int param2, void** param3) {
    auto* vsignonauthservice = dynamic_cast<VirtualSignOnAuthService*>(self);
    if (vsignonauthservice && vsignonauthservice->isVirtualSignOnAuthService) {
        vsignonauthservice->setSignOn__AuthService_Metacall_IsBase(true);
        return vsignonauthservice->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->SignOn::AuthService::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void SignOn__AuthService_OnMetacall(SignOn__AuthService* self, intptr_t slot) {
    auto* vsignonauthservice = dynamic_cast<VirtualSignOnAuthService*>(self);
    if (vsignonauthservice && vsignonauthservice->isVirtualSignOnAuthService) {
        vsignonauthservice->setSignOn__AuthService_Metacall_Callback(reinterpret_cast<VirtualSignOnAuthService::SignOn__AuthService_Metacall_Callback>(slot));
    }
}

// Derived class handler implementation
bool SignOn__AuthService_Event(SignOn__AuthService* self, QEvent* event) {
    auto* vsignonauthservice = dynamic_cast<VirtualSignOnAuthService*>(self);
    if (vsignonauthservice && vsignonauthservice->isVirtualSignOnAuthService) {
        return vsignonauthservice->event(event);
    } else {
        return self->SignOn::AuthService::event(event);
    }
}

// Base class handler implementation
bool SignOn__AuthService_SuperEvent(SignOn__AuthService* self, QEvent* event) {
    auto* vsignonauthservice = dynamic_cast<VirtualSignOnAuthService*>(self);
    if (vsignonauthservice && vsignonauthservice->isVirtualSignOnAuthService) {
        vsignonauthservice->setSignOn__AuthService_Event_IsBase(true);
        return vsignonauthservice->event(event);
    } else {
        return self->SignOn::AuthService::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void SignOn__AuthService_OnEvent(SignOn__AuthService* self, intptr_t slot) {
    auto* vsignonauthservice = dynamic_cast<VirtualSignOnAuthService*>(self);
    if (vsignonauthservice && vsignonauthservice->isVirtualSignOnAuthService) {
        vsignonauthservice->setSignOn__AuthService_Event_Callback(reinterpret_cast<VirtualSignOnAuthService::SignOn__AuthService_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool SignOn__AuthService_EventFilter(SignOn__AuthService* self, QObject* watched, QEvent* event) {
    auto* vsignonauthservice = dynamic_cast<VirtualSignOnAuthService*>(self);
    if (vsignonauthservice && vsignonauthservice->isVirtualSignOnAuthService) {
        return vsignonauthservice->eventFilter(watched, event);
    } else {
        return self->SignOn::AuthService::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool SignOn__AuthService_SuperEventFilter(SignOn__AuthService* self, QObject* watched, QEvent* event) {
    auto* vsignonauthservice = dynamic_cast<VirtualSignOnAuthService*>(self);
    if (vsignonauthservice && vsignonauthservice->isVirtualSignOnAuthService) {
        vsignonauthservice->setSignOn__AuthService_EventFilter_IsBase(true);
        return vsignonauthservice->eventFilter(watched, event);
    } else {
        return self->SignOn::AuthService::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void SignOn__AuthService_OnEventFilter(SignOn__AuthService* self, intptr_t slot) {
    auto* vsignonauthservice = dynamic_cast<VirtualSignOnAuthService*>(self);
    if (vsignonauthservice && vsignonauthservice->isVirtualSignOnAuthService) {
        vsignonauthservice->setSignOn__AuthService_EventFilter_Callback(reinterpret_cast<VirtualSignOnAuthService::SignOn__AuthService_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void SignOn__AuthService_TimerEvent(SignOn__AuthService* self, QTimerEvent* event) {
    auto* vsignonauthservice = dynamic_cast<VirtualSignOnAuthService*>(self);
    if (vsignonauthservice && vsignonauthservice->isVirtualSignOnAuthService) {
        vsignonauthservice->timerEvent(event);
    } else {
        ((VirtualSignOnAuthService*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void SignOn__AuthService_SuperTimerEvent(SignOn__AuthService* self, QTimerEvent* event) {
    auto* vsignonauthservice = dynamic_cast<VirtualSignOnAuthService*>(self);
    if (vsignonauthservice && vsignonauthservice->isVirtualSignOnAuthService) {
        vsignonauthservice->setSignOn__AuthService_TimerEvent_IsBase(true);
        vsignonauthservice->timerEvent(event);
    } else {
        ((VirtualSignOnAuthService*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void SignOn__AuthService_OnTimerEvent(SignOn__AuthService* self, intptr_t slot) {
    auto* vsignonauthservice = dynamic_cast<VirtualSignOnAuthService*>(self);
    if (vsignonauthservice && vsignonauthservice->isVirtualSignOnAuthService) {
        vsignonauthservice->setSignOn__AuthService_TimerEvent_Callback(reinterpret_cast<VirtualSignOnAuthService::SignOn__AuthService_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void SignOn__AuthService_ChildEvent(SignOn__AuthService* self, QChildEvent* event) {
    auto* vsignonauthservice = dynamic_cast<VirtualSignOnAuthService*>(self);
    if (vsignonauthservice && vsignonauthservice->isVirtualSignOnAuthService) {
        vsignonauthservice->childEvent(event);
    } else {
        ((VirtualSignOnAuthService*)self)->childEvent(event);
    }
}

// Base class handler implementation
void SignOn__AuthService_SuperChildEvent(SignOn__AuthService* self, QChildEvent* event) {
    auto* vsignonauthservice = dynamic_cast<VirtualSignOnAuthService*>(self);
    if (vsignonauthservice && vsignonauthservice->isVirtualSignOnAuthService) {
        vsignonauthservice->setSignOn__AuthService_ChildEvent_IsBase(true);
        vsignonauthservice->childEvent(event);
    } else {
        ((VirtualSignOnAuthService*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void SignOn__AuthService_OnChildEvent(SignOn__AuthService* self, intptr_t slot) {
    auto* vsignonauthservice = dynamic_cast<VirtualSignOnAuthService*>(self);
    if (vsignonauthservice && vsignonauthservice->isVirtualSignOnAuthService) {
        vsignonauthservice->setSignOn__AuthService_ChildEvent_Callback(reinterpret_cast<VirtualSignOnAuthService::SignOn__AuthService_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void SignOn__AuthService_CustomEvent(SignOn__AuthService* self, QEvent* event) {
    auto* vsignonauthservice = dynamic_cast<VirtualSignOnAuthService*>(self);
    if (vsignonauthservice && vsignonauthservice->isVirtualSignOnAuthService) {
        vsignonauthservice->customEvent(event);
    } else {
        ((VirtualSignOnAuthService*)self)->customEvent(event);
    }
}

// Base class handler implementation
void SignOn__AuthService_SuperCustomEvent(SignOn__AuthService* self, QEvent* event) {
    auto* vsignonauthservice = dynamic_cast<VirtualSignOnAuthService*>(self);
    if (vsignonauthservice && vsignonauthservice->isVirtualSignOnAuthService) {
        vsignonauthservice->setSignOn__AuthService_CustomEvent_IsBase(true);
        vsignonauthservice->customEvent(event);
    } else {
        ((VirtualSignOnAuthService*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void SignOn__AuthService_OnCustomEvent(SignOn__AuthService* self, intptr_t slot) {
    auto* vsignonauthservice = dynamic_cast<VirtualSignOnAuthService*>(self);
    if (vsignonauthservice && vsignonauthservice->isVirtualSignOnAuthService) {
        vsignonauthservice->setSignOn__AuthService_CustomEvent_Callback(reinterpret_cast<VirtualSignOnAuthService::SignOn__AuthService_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void SignOn__AuthService_ConnectNotify(SignOn__AuthService* self, const QMetaMethod* signal) {
    auto* vsignonauthservice = dynamic_cast<VirtualSignOnAuthService*>(self);
    if (vsignonauthservice && vsignonauthservice->isVirtualSignOnAuthService) {
        vsignonauthservice->connectNotify(*signal);
    } else {
        ((VirtualSignOnAuthService*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void SignOn__AuthService_SuperConnectNotify(SignOn__AuthService* self, const QMetaMethod* signal) {
    auto* vsignonauthservice = dynamic_cast<VirtualSignOnAuthService*>(self);
    if (vsignonauthservice && vsignonauthservice->isVirtualSignOnAuthService) {
        vsignonauthservice->setSignOn__AuthService_ConnectNotify_IsBase(true);
        vsignonauthservice->connectNotify(*signal);
    } else {
        ((VirtualSignOnAuthService*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void SignOn__AuthService_OnConnectNotify(SignOn__AuthService* self, intptr_t slot) {
    auto* vsignonauthservice = dynamic_cast<VirtualSignOnAuthService*>(self);
    if (vsignonauthservice && vsignonauthservice->isVirtualSignOnAuthService) {
        vsignonauthservice->setSignOn__AuthService_ConnectNotify_Callback(reinterpret_cast<VirtualSignOnAuthService::SignOn__AuthService_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void SignOn__AuthService_DisconnectNotify(SignOn__AuthService* self, const QMetaMethod* signal) {
    auto* vsignonauthservice = dynamic_cast<VirtualSignOnAuthService*>(self);
    if (vsignonauthservice && vsignonauthservice->isVirtualSignOnAuthService) {
        vsignonauthservice->disconnectNotify(*signal);
    } else {
        ((VirtualSignOnAuthService*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void SignOn__AuthService_SuperDisconnectNotify(SignOn__AuthService* self, const QMetaMethod* signal) {
    auto* vsignonauthservice = dynamic_cast<VirtualSignOnAuthService*>(self);
    if (vsignonauthservice && vsignonauthservice->isVirtualSignOnAuthService) {
        vsignonauthservice->setSignOn__AuthService_DisconnectNotify_IsBase(true);
        vsignonauthservice->disconnectNotify(*signal);
    } else {
        ((VirtualSignOnAuthService*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void SignOn__AuthService_OnDisconnectNotify(SignOn__AuthService* self, intptr_t slot) {
    auto* vsignonauthservice = dynamic_cast<VirtualSignOnAuthService*>(self);
    if (vsignonauthservice && vsignonauthservice->isVirtualSignOnAuthService) {
        vsignonauthservice->setSignOn__AuthService_DisconnectNotify_Callback(reinterpret_cast<VirtualSignOnAuthService::SignOn__AuthService_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* SignOn__AuthService_Sender(const SignOn__AuthService* self) {
    auto* vsignonauthservice = const_cast<VirtualSignOnAuthService*>(dynamic_cast<const VirtualSignOnAuthService*>(self));
    if (vsignonauthservice && vsignonauthservice->isVirtualSignOnAuthService) {
        return vsignonauthservice->sender();
    } else {
        return ((VirtualSignOnAuthService*)self)->sender();
    }
}

// Base class handler implementation
QObject* SignOn__AuthService_SuperSender(const SignOn__AuthService* self) {
    auto* vsignonauthservice = const_cast<VirtualSignOnAuthService*>(dynamic_cast<const VirtualSignOnAuthService*>(self));
    if (vsignonauthservice && vsignonauthservice->isVirtualSignOnAuthService) {
        vsignonauthservice->setSignOn__AuthService_Sender_IsBase(true);
        return vsignonauthservice->sender();
    } else {
        return ((VirtualSignOnAuthService*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void SignOn__AuthService_OnSender(const SignOn__AuthService* self, intptr_t slot) {
    auto* vsignonauthservice = const_cast<VirtualSignOnAuthService*>(dynamic_cast<const VirtualSignOnAuthService*>(self));
    if (vsignonauthservice && vsignonauthservice->isVirtualSignOnAuthService) {
        vsignonauthservice->setSignOn__AuthService_Sender_Callback(reinterpret_cast<VirtualSignOnAuthService::SignOn__AuthService_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int SignOn__AuthService_SenderSignalIndex(const SignOn__AuthService* self) {
    auto* vsignonauthservice = const_cast<VirtualSignOnAuthService*>(dynamic_cast<const VirtualSignOnAuthService*>(self));
    if (vsignonauthservice && vsignonauthservice->isVirtualSignOnAuthService) {
        return vsignonauthservice->senderSignalIndex();
    } else {
        return ((VirtualSignOnAuthService*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int SignOn__AuthService_SuperSenderSignalIndex(const SignOn__AuthService* self) {
    auto* vsignonauthservice = const_cast<VirtualSignOnAuthService*>(dynamic_cast<const VirtualSignOnAuthService*>(self));
    if (vsignonauthservice && vsignonauthservice->isVirtualSignOnAuthService) {
        vsignonauthservice->setSignOn__AuthService_SenderSignalIndex_IsBase(true);
        return vsignonauthservice->senderSignalIndex();
    } else {
        return ((VirtualSignOnAuthService*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void SignOn__AuthService_OnSenderSignalIndex(const SignOn__AuthService* self, intptr_t slot) {
    auto* vsignonauthservice = const_cast<VirtualSignOnAuthService*>(dynamic_cast<const VirtualSignOnAuthService*>(self));
    if (vsignonauthservice && vsignonauthservice->isVirtualSignOnAuthService) {
        vsignonauthservice->setSignOn__AuthService_SenderSignalIndex_Callback(reinterpret_cast<VirtualSignOnAuthService::SignOn__AuthService_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int SignOn__AuthService_Receivers(const SignOn__AuthService* self, const char* signal) {
    auto* vsignonauthservice = const_cast<VirtualSignOnAuthService*>(dynamic_cast<const VirtualSignOnAuthService*>(self));
    if (vsignonauthservice && vsignonauthservice->isVirtualSignOnAuthService) {
        return vsignonauthservice->receivers(signal);
    } else {
        return ((VirtualSignOnAuthService*)self)->receivers(signal);
    }
}

// Base class handler implementation
int SignOn__AuthService_SuperReceivers(const SignOn__AuthService* self, const char* signal) {
    auto* vsignonauthservice = const_cast<VirtualSignOnAuthService*>(dynamic_cast<const VirtualSignOnAuthService*>(self));
    if (vsignonauthservice && vsignonauthservice->isVirtualSignOnAuthService) {
        vsignonauthservice->setSignOn__AuthService_Receivers_IsBase(true);
        return vsignonauthservice->receivers(signal);
    } else {
        return ((VirtualSignOnAuthService*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void SignOn__AuthService_OnReceivers(const SignOn__AuthService* self, intptr_t slot) {
    auto* vsignonauthservice = const_cast<VirtualSignOnAuthService*>(dynamic_cast<const VirtualSignOnAuthService*>(self));
    if (vsignonauthservice && vsignonauthservice->isVirtualSignOnAuthService) {
        vsignonauthservice->setSignOn__AuthService_Receivers_Callback(reinterpret_cast<VirtualSignOnAuthService::SignOn__AuthService_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool SignOn__AuthService_IsSignalConnected(const SignOn__AuthService* self, const QMetaMethod* signal) {
    auto* vsignonauthservice = const_cast<VirtualSignOnAuthService*>(dynamic_cast<const VirtualSignOnAuthService*>(self));
    if (vsignonauthservice && vsignonauthservice->isVirtualSignOnAuthService) {
        return vsignonauthservice->isSignalConnected(*signal);
    } else {
        return ((VirtualSignOnAuthService*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool SignOn__AuthService_SuperIsSignalConnected(const SignOn__AuthService* self, const QMetaMethod* signal) {
    auto* vsignonauthservice = const_cast<VirtualSignOnAuthService*>(dynamic_cast<const VirtualSignOnAuthService*>(self));
    if (vsignonauthservice && vsignonauthservice->isVirtualSignOnAuthService) {
        vsignonauthservice->setSignOn__AuthService_IsSignalConnected_IsBase(true);
        return vsignonauthservice->isSignalConnected(*signal);
    } else {
        return ((VirtualSignOnAuthService*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void SignOn__AuthService_OnIsSignalConnected(const SignOn__AuthService* self, intptr_t slot) {
    auto* vsignonauthservice = const_cast<VirtualSignOnAuthService*>(dynamic_cast<const VirtualSignOnAuthService*>(self));
    if (vsignonauthservice && vsignonauthservice->isVirtualSignOnAuthService) {
        vsignonauthservice->setSignOn__AuthService_IsSignalConnected_Callback(reinterpret_cast<VirtualSignOnAuthService::SignOn__AuthService_IsSignalConnected_Callback>(slot));
    }
}

void SignOn__AuthService_Delete(SignOn__AuthService* self) {
    delete self;
}

SignOn__AuthService__IdentityRegExp* SignOn__AuthService__IdentityRegExp_new(const libqt_string pattern) {
    QString pattern_QString = QString::fromUtf8(pattern.data, pattern.len);
    return new SignOn::AuthService::IdentityRegExp(pattern_QString);
}

SignOn__AuthService__IdentityRegExp* SignOn__AuthService__IdentityRegExp_new2(const SignOn__AuthService__IdentityRegExp* src) {
    return new SignOn::AuthService::IdentityRegExp(*src);
}

bool SignOn__AuthService__IdentityRegExp_IsValid(const SignOn__AuthService__IdentityRegExp* self) {
    return self->isValid();
}

libqt_string SignOn__AuthService__IdentityRegExp_Pattern(const SignOn__AuthService__IdentityRegExp* self) {
    QString _ret = self->pattern();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void SignOn__AuthService__IdentityRegExp_Delete(SignOn__AuthService__IdentityRegExp* self) {
    delete self;
}
