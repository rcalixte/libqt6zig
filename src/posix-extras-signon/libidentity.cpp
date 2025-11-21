#include <QList>
#include <QMap>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVariant>
#define WORKAROUND_INNER_CLASS_DEFINITION_SignOn__Error
#define WORKAROUND_INNER_CLASS_DEFINITION_SignOn__Identity
#define WORKAROUND_INNER_CLASS_DEFINITION_SignOn__IdentityInfo
#include <identity.h>
#include "libidentity.h"
#include "libidentity.hxx"

QMetaObject* SignOn__Identity_MetaObject(const SignOn__Identity* self) {
    return (QMetaObject*)self->metaObject();
}

void* SignOn__Identity_Metacast(SignOn__Identity* self, const char* param1) {
    return self->qt_metacast(param1);
}

int SignOn__Identity_Metacall(SignOn__Identity* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

SignOn__Identity* SignOn__Identity_NewIdentity() {
    return SignOn::Identity::newIdentity();
}

SignOn__Identity* SignOn__Identity_ExistingIdentity(const unsigned int id) {
    return SignOn::Identity::existingIdentity(static_cast<const quint32>(id));
}

unsigned int SignOn__Identity_Id(const SignOn__Identity* self) {
    return static_cast<unsigned int>(self->id());
}

void SignOn__Identity_QueryAvailableMethods(SignOn__Identity* self) {
    self->queryAvailableMethods();
}

void SignOn__Identity_RequestCredentialsUpdate(SignOn__Identity* self) {
    self->requestCredentialsUpdate();
}

void SignOn__Identity_StoreCredentials(SignOn__Identity* self) {
    self->storeCredentials();
}

void SignOn__Identity_Remove(SignOn__Identity* self) {
    self->remove();
}

void SignOn__Identity_AddReference(SignOn__Identity* self) {
    self->addReference();
}

void SignOn__Identity_RemoveReference(SignOn__Identity* self) {
    self->removeReference();
}

void SignOn__Identity_QueryInfo(SignOn__Identity* self) {
    self->queryInfo();
}

void SignOn__Identity_VerifyUser(SignOn__Identity* self) {
    self->verifyUser();
}

void SignOn__Identity_VerifyUser2(SignOn__Identity* self, const libqt_map /* of libqt_string to QVariant* */ params) {
    QMap<QString, QVariant> params_QMap;
    libqt_string* params_karr = static_cast<libqt_string*>(params.keys);
    QVariant** params_varr = static_cast<QVariant**>(params.values);
    for (size_t i = 0; i < params.len; ++i) {
        QString params_karr_i_QString = QString::fromUtf8(params_karr[i].data, params_karr[i].len);
        params_QMap[params_karr_i_QString] = *(params_varr[i]);
    }
    self->verifyUser(params_QMap);
}

void SignOn__Identity_VerifySecret(SignOn__Identity* self, const libqt_string secret) {
    QString secret_QString = QString::fromUtf8(secret.data, secret.len);
    self->verifySecret(secret_QString);
}

void SignOn__Identity_SignOut(SignOn__Identity* self) {
    self->signOut();
}

void SignOn__Identity_Error(SignOn__Identity* self, const SignOn__Error* err) {
    self->error(*err);
}

void SignOn__Identity_Connect_Error(SignOn__Identity* self, intptr_t slot) {
    void (*slotFunc)(SignOn__Identity*, SignOn__Error*) = reinterpret_cast<void (*)(SignOn__Identity*, SignOn__Error*)>(slot);
    SignOn::Identity::connect(self, &SignOn::Identity::error, [self, slotFunc](const SignOn::Error& err) {
        const SignOn::Error& err_ret = err;
        // Cast returned reference into pointer
        SignOn__Error* sigval1 = const_cast<SignOn::Error*>(&err_ret);
        slotFunc(self, sigval1);
    });
}

void SignOn__Identity_MethodsAvailable(SignOn__Identity* self, const libqt_list /* of libqt_string */ methods) {
    QList<QString> methods_QList;
    methods_QList.reserve(methods.len);
    libqt_string* methods_arr = static_cast<libqt_string*>(methods.data);
    for (size_t i = 0; i < methods.len; ++i) {
        QString methods_arr_i_QString = QString::fromUtf8(methods_arr[i].data, methods_arr[i].len);
        methods_QList.push_back(methods_arr_i_QString);
    }
    self->methodsAvailable(methods_QList);
}

void SignOn__Identity_Connect_MethodsAvailable(SignOn__Identity* self, intptr_t slot) {
    void (*slotFunc)(SignOn__Identity*, const char**) = reinterpret_cast<void (*)(SignOn__Identity*, const char**)>(slot);
    SignOn::Identity::connect(self, &SignOn::Identity::methodsAvailable, [self, slotFunc](const QList<QString>& methods) {
        const QList<QString>& methods_ret = methods;
        // Convert QString from UTF-16 in C++ RAII memory to null-terminated UTF-8 chars in manually-managed C memory
        const char** methods_arr = static_cast<const char**>(malloc(sizeof(const char*) * (methods_ret.size() + 1)));
        for (qsizetype i = 0; i < methods_ret.size(); ++i) {
            QByteArray methods_b = methods_ret[i].toUtf8();
            char* methods_str = static_cast<char*>(malloc(methods_b.length() + 1));
            memcpy(methods_str, methods_b.data(), methods_b.length());
            methods_str[methods_b.length()] = '\0';
            methods_arr[i] = methods_str;
        }
        // Append sentinel null terminator to the list
        methods_arr[methods_ret.size()] = nullptr;
        const char** sigval1 = methods_arr;
        slotFunc(self, sigval1);
        free(methods_arr);
    });
}

void SignOn__Identity_CredentialsStored(SignOn__Identity* self, const unsigned int id) {
    self->credentialsStored(static_cast<const quint32>(id));
}

void SignOn__Identity_Connect_CredentialsStored(SignOn__Identity* self, intptr_t slot) {
    void (*slotFunc)(SignOn__Identity*, const unsigned int) = reinterpret_cast<void (*)(SignOn__Identity*, const unsigned int)>(slot);
    SignOn::Identity::connect(self, &SignOn::Identity::credentialsStored, [self, slotFunc](const quint32 id) {
        const unsigned int sigval1 = static_cast<const unsigned int>(id);
        slotFunc(self, sigval1);
    });
}

void SignOn__Identity_ReferenceAdded(SignOn__Identity* self) {
    self->referenceAdded();
}

void SignOn__Identity_Connect_ReferenceAdded(SignOn__Identity* self, intptr_t slot) {
    void (*slotFunc)(SignOn__Identity*) = reinterpret_cast<void (*)(SignOn__Identity*)>(slot);
    SignOn::Identity::connect(self, &SignOn::Identity::referenceAdded, [self, slotFunc]() {
        slotFunc(self);
    });
}

void SignOn__Identity_ReferenceRemoved(SignOn__Identity* self) {
    self->referenceRemoved();
}

void SignOn__Identity_Connect_ReferenceRemoved(SignOn__Identity* self, intptr_t slot) {
    void (*slotFunc)(SignOn__Identity*) = reinterpret_cast<void (*)(SignOn__Identity*)>(slot);
    SignOn::Identity::connect(self, &SignOn::Identity::referenceRemoved, [self, slotFunc]() {
        slotFunc(self);
    });
}

void SignOn__Identity_Info(SignOn__Identity* self, const SignOn__IdentityInfo* info) {
    self->info(*info);
}

void SignOn__Identity_Connect_Info(SignOn__Identity* self, intptr_t slot) {
    void (*slotFunc)(SignOn__Identity*, SignOn__IdentityInfo*) = reinterpret_cast<void (*)(SignOn__Identity*, SignOn__IdentityInfo*)>(slot);
    SignOn::Identity::connect(self, &SignOn::Identity::info, [self, slotFunc](const SignOn::IdentityInfo& info) {
        const SignOn::IdentityInfo& info_ret = info;
        // Cast returned reference into pointer
        SignOn__IdentityInfo* sigval1 = const_cast<SignOn::IdentityInfo*>(&info_ret);
        slotFunc(self, sigval1);
    });
}

void SignOn__Identity_UserVerified(SignOn__Identity* self, const bool valid) {
    self->userVerified(valid);
}

void SignOn__Identity_Connect_UserVerified(SignOn__Identity* self, intptr_t slot) {
    void (*slotFunc)(SignOn__Identity*, const bool) = reinterpret_cast<void (*)(SignOn__Identity*, const bool)>(slot);
    SignOn::Identity::connect(self, &SignOn::Identity::userVerified, [self, slotFunc](const bool valid) {
        const bool sigval1 = (const bool)valid;
        slotFunc(self, sigval1);
    });
}

void SignOn__Identity_SecretVerified(SignOn__Identity* self, const bool valid) {
    self->secretVerified(valid);
}

void SignOn__Identity_Connect_SecretVerified(SignOn__Identity* self, intptr_t slot) {
    void (*slotFunc)(SignOn__Identity*, const bool) = reinterpret_cast<void (*)(SignOn__Identity*, const bool)>(slot);
    SignOn::Identity::connect(self, &SignOn::Identity::secretVerified, [self, slotFunc](const bool valid) {
        const bool sigval1 = (const bool)valid;
        slotFunc(self, sigval1);
    });
}

void SignOn__Identity_SignedOut(SignOn__Identity* self) {
    self->signedOut();
}

void SignOn__Identity_Connect_SignedOut(SignOn__Identity* self, intptr_t slot) {
    void (*slotFunc)(SignOn__Identity*) = reinterpret_cast<void (*)(SignOn__Identity*)>(slot);
    SignOn::Identity::connect(self, &SignOn::Identity::signedOut, [self, slotFunc]() {
        slotFunc(self);
    });
}

void SignOn__Identity_Removed(SignOn__Identity* self) {
    self->removed();
}

void SignOn__Identity_Connect_Removed(SignOn__Identity* self, intptr_t slot) {
    void (*slotFunc)(SignOn__Identity*) = reinterpret_cast<void (*)(SignOn__Identity*)>(slot);
    SignOn::Identity::connect(self, &SignOn::Identity::removed, [self, slotFunc]() {
        slotFunc(self);
    });
}

SignOn__Identity* SignOn__Identity_NewIdentity1(const SignOn__IdentityInfo* info) {
    return SignOn::Identity::newIdentity(*info);
}

SignOn__Identity* SignOn__Identity_NewIdentity2(const SignOn__IdentityInfo* info, QObject* parent) {
    return SignOn::Identity::newIdentity(*info, parent);
}

SignOn__Identity* SignOn__Identity_ExistingIdentity2(const unsigned int id, QObject* parent) {
    return SignOn::Identity::existingIdentity(static_cast<const quint32>(id), parent);
}

void SignOn__Identity_RequestCredentialsUpdate1(SignOn__Identity* self, const libqt_string message) {
    QString message_QString = QString::fromUtf8(message.data, message.len);
    self->requestCredentialsUpdate(message_QString);
}

void SignOn__Identity_StoreCredentials1(SignOn__Identity* self, const SignOn__IdentityInfo* info) {
    self->storeCredentials(*info);
}

void SignOn__Identity_AddReference1(SignOn__Identity* self, const libqt_string reference) {
    QString reference_QString = QString::fromUtf8(reference.data, reference.len);
    self->addReference(reference_QString);
}

void SignOn__Identity_RemoveReference1(SignOn__Identity* self, const libqt_string reference) {
    QString reference_QString = QString::fromUtf8(reference.data, reference.len);
    self->removeReference(reference_QString);
}

void SignOn__Identity_VerifyUser1(SignOn__Identity* self, const libqt_string message) {
    QString message_QString = QString::fromUtf8(message.data, message.len);
    self->verifyUser(message_QString);
}

void SignOn__Identity_Delete(SignOn__Identity* self) {
    delete self;
}
