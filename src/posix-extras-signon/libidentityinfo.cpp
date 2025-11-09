#include <QList>
#include <QMap>
#include <QString>
#include <QByteArray>
#include <cstring>
#define WORKAROUND_INNER_CLASS_DEFINITION_SignOn__IdentityInfo
#define WORKAROUND_INNER_CLASS_DEFINITION_SignOn__SecurityContext
#include <identityinfo.h>
#include "libidentityinfo.h"
#include "libidentityinfo.hxx"

SignOn__IdentityInfo* SignOn__IdentityInfo_new() {
    return new SignOn::IdentityInfo();
}

SignOn__IdentityInfo* SignOn__IdentityInfo_new2(const SignOn__IdentityInfo* other) {
    return new SignOn::IdentityInfo(*other);
}

SignOn__IdentityInfo* SignOn__IdentityInfo_new3(const libqt_string caption, const libqt_string userName, const libqt_map /* of libqt_string to SignOn::MechanismsList */ methods) {
    QString caption_QString = QString::fromUtf8(caption.data, caption.len);
    QString userName_QString = QString::fromUtf8(userName.data, userName.len);
    QMap<SignOn::MethodName, SignOn::MechanismsList> methods_QMap;
    libqt_string* methods_karr = static_cast<libqt_string*>(methods.keys);
    SignOn::MechanismsList* methods_varr = static_cast<SignOn::MechanismsList*>(methods.values);
    for (size_t i = 0; i < methods.len; ++i) {
        QString methods_karr_i_QString = QString::fromUtf8(methods_karr[i].data, methods_karr[i].len);
        methods_QMap[methods_karr_i_QString] = methods_varr[i];
    }
    return new SignOn::IdentityInfo(caption_QString, userName_QString, methods_QMap);
}

void SignOn__IdentityInfo_OperatorAssign(SignOn__IdentityInfo* self, const SignOn__IdentityInfo* other) {
    self->operator=(*other);
}

void SignOn__IdentityInfo_SetId(SignOn__IdentityInfo* self, const unsigned int id) {
    self->setId(static_cast<const quint32>(id));
}

unsigned int SignOn__IdentityInfo_Id(const SignOn__IdentityInfo* self) {
    return static_cast<unsigned int>(self->id());
}

void SignOn__IdentityInfo_SetSecret(SignOn__IdentityInfo* self, const libqt_string secret) {
    QString secret_QString = QString::fromUtf8(secret.data, secret.len);
    self->setSecret(secret_QString);
}

libqt_string SignOn__IdentityInfo_Secret(const SignOn__IdentityInfo* self) {
    QString _ret = self->secret();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool SignOn__IdentityInfo_IsStoringSecret(const SignOn__IdentityInfo* self) {
    return self->isStoringSecret();
}

void SignOn__IdentityInfo_SetStoreSecret(SignOn__IdentityInfo* self, const bool storeSecret) {
    self->setStoreSecret(storeSecret);
}

void SignOn__IdentityInfo_SetUserName(SignOn__IdentityInfo* self, const libqt_string userName) {
    QString userName_QString = QString::fromUtf8(userName.data, userName.len);
    self->setUserName(userName_QString);
}

libqt_string SignOn__IdentityInfo_UserName(const SignOn__IdentityInfo* self) {
    const QString _ret = self->userName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void SignOn__IdentityInfo_SetCaption(SignOn__IdentityInfo* self, const libqt_string caption) {
    QString caption_QString = QString::fromUtf8(caption.data, caption.len);
    self->setCaption(caption_QString);
}

libqt_string SignOn__IdentityInfo_Caption(const SignOn__IdentityInfo* self) {
    const QString _ret = self->caption();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void SignOn__IdentityInfo_SetRealms(SignOn__IdentityInfo* self, const libqt_list /* of libqt_string */ realms) {
    QList<QString> realms_QList;
    realms_QList.reserve(realms.len);
    libqt_string* realms_arr = static_cast<libqt_string*>(realms.data);
    for (size_t i = 0; i < realms.len; ++i) {
        QString realms_arr_i_QString = QString::fromUtf8(realms_arr[i].data, realms_arr[i].len);
        realms_QList.push_back(realms_arr_i_QString);
    }
    self->setRealms(realms_QList);
}

libqt_list /* of libqt_string */ SignOn__IdentityInfo_Realms(const SignOn__IdentityInfo* self) {
    QList<QString> _ret = self->realms();
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

void SignOn__IdentityInfo_SetOwner(SignOn__IdentityInfo* self, const libqt_string ownerToken) {
    QString ownerToken_QString = QString::fromUtf8(ownerToken.data, ownerToken.len);
    self->setOwner(ownerToken_QString);
}

libqt_string SignOn__IdentityInfo_Owner(const SignOn__IdentityInfo* self) {
    QString _ret = self->owner();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void SignOn__IdentityInfo_SetAccessControlList(SignOn__IdentityInfo* self, const libqt_list /* of libqt_string */ accessControlList) {
    QList<QString> accessControlList_QList;
    accessControlList_QList.reserve(accessControlList.len);
    libqt_string* accessControlList_arr = static_cast<libqt_string*>(accessControlList.data);
    for (size_t i = 0; i < accessControlList.len; ++i) {
        QString accessControlList_arr_i_QString = QString::fromUtf8(accessControlList_arr[i].data, accessControlList_arr[i].len);
        accessControlList_QList.push_back(accessControlList_arr_i_QString);
    }
    self->setAccessControlList(accessControlList_QList);
}

void SignOn__IdentityInfo_SetAccessControlList2(SignOn__IdentityInfo* self, const libqt_list /* of SignOn__SecurityContext* */ accessControlList) {
    QList<SignOn::SecurityContext> accessControlList_QList;
    accessControlList_QList.reserve(accessControlList.len);
    SignOn__SecurityContext** accessControlList_arr = static_cast<SignOn__SecurityContext**>(accessControlList.data);
    for (size_t i = 0; i < accessControlList.len; ++i) {
        accessControlList_QList.push_back(*(accessControlList_arr[i]));
    }
    self->setAccessControlList(accessControlList_QList);
}

libqt_list /* of libqt_string */ SignOn__IdentityInfo_AccessControlList(const SignOn__IdentityInfo* self) {
    QList<QString> _ret = self->accessControlList();
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

libqt_list /* of SignOn__SecurityContext* */ SignOn__IdentityInfo_AccessControlListFull(const SignOn__IdentityInfo* self) {
    QList<SignOn::SecurityContext> _ret = self->accessControlListFull();
    // Convert QList<> from C++ memory to manually-managed C memory
    SignOn__SecurityContext** _arr = static_cast<SignOn__SecurityContext**>(malloc(sizeof(SignOn__SecurityContext*) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new SignOn::SecurityContext(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void SignOn__IdentityInfo_SetMethod(SignOn__IdentityInfo* self, const libqt_string method, const libqt_list /* of libqt_string */ mechanismsList) {
    QString method_QString = QString::fromUtf8(method.data, method.len);
    QList<QString> mechanismsList_QList;
    mechanismsList_QList.reserve(mechanismsList.len);
    libqt_string* mechanismsList_arr = static_cast<libqt_string*>(mechanismsList.data);
    for (size_t i = 0; i < mechanismsList.len; ++i) {
        QString mechanismsList_arr_i_QString = QString::fromUtf8(mechanismsList_arr[i].data, mechanismsList_arr[i].len);
        mechanismsList_QList.push_back(mechanismsList_arr_i_QString);
    }
    self->setMethod(method_QString, mechanismsList_QList);
}

void SignOn__IdentityInfo_RemoveMethod(SignOn__IdentityInfo* self, const libqt_string method) {
    QString method_QString = QString::fromUtf8(method.data, method.len);
    self->removeMethod(method_QString);
}

void SignOn__IdentityInfo_SetType(SignOn__IdentityInfo* self, int typeVal) {
    self->setType(static_cast<SignOn::IdentityInfo::CredentialsType>(typeVal));
}

int SignOn__IdentityInfo_Type(const SignOn__IdentityInfo* self) {
    return static_cast<int>(self->type());
}

libqt_list /* of libqt_string */ SignOn__IdentityInfo_Methods(const SignOn__IdentityInfo* self) {
    QList<QString> _ret = self->methods();
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

libqt_list /* of libqt_string */ SignOn__IdentityInfo_Mechanisms(const SignOn__IdentityInfo* self, const libqt_string method) {
    QString method_QString = QString::fromUtf8(method.data, method.len);
    QList<QString> _ret = self->mechanisms(method_QString);
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

void SignOn__IdentityInfo_SetRefCount(SignOn__IdentityInfo* self, int refCount) {
    self->setRefCount(static_cast<qint32>(refCount));
}

int SignOn__IdentityInfo_RefCount(const SignOn__IdentityInfo* self) {
    return static_cast<int>(self->refCount());
}

void SignOn__IdentityInfo_SetSecret2(SignOn__IdentityInfo* self, const libqt_string secret, const bool storeSecret) {
    QString secret_QString = QString::fromUtf8(secret.data, secret.len);
    self->setSecret(secret_QString, storeSecret);
}

void SignOn__IdentityInfo_Delete(SignOn__IdentityInfo* self) {
    delete self;
}
