#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#define WORKAROUND_INNER_CLASS_DEFINITION_SignOn__AuthSession
#define WORKAROUND_INNER_CLASS_DEFINITION_SignOn__Error
#define WORKAROUND_INNER_CLASS_DEFINITION_SignOn__SessionData
#include <authsession.h>
#include "libauthsession.h"
#include "libauthsession.hxx"

QMetaObject* SignOn__AuthSession_MetaObject(const SignOn__AuthSession* self) {
    return (QMetaObject*)self->metaObject();
}

void* SignOn__AuthSession_Metacast(SignOn__AuthSession* self, const char* param1) {
    return self->qt_metacast(param1);
}

int SignOn__AuthSession_Metacall(SignOn__AuthSession* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string SignOn__AuthSession_Name(const SignOn__AuthSession* self) {
    const QString _ret = self->name();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void SignOn__AuthSession_QueryAvailableMechanisms(SignOn__AuthSession* self) {
    self->queryAvailableMechanisms();
}

void SignOn__AuthSession_Process(SignOn__AuthSession* self, const SignOn__SessionData* sessionData) {
    self->process(*sessionData);
}

void SignOn__AuthSession_Challenge(SignOn__AuthSession* self, const SignOn__SessionData* sessionData) {
    self->challenge(*sessionData);
}

void SignOn__AuthSession_Request(SignOn__AuthSession* self, const SignOn__SessionData* sessionData) {
    self->request(*sessionData);
}

void SignOn__AuthSession_Cancel(SignOn__AuthSession* self) {
    self->cancel();
}

void SignOn__AuthSession_SignMessage(SignOn__AuthSession* self, const SignOn__SessionData* params) {
    self->signMessage(*params);
}

void SignOn__AuthSession_Error(SignOn__AuthSession* self, const SignOn__Error* err) {
    self->error(*err);
}

void SignOn__AuthSession_Connect_Error(SignOn__AuthSession* self, intptr_t slot) {
    void (*slotFunc)(SignOn__AuthSession*, SignOn__Error*) = reinterpret_cast<void (*)(SignOn__AuthSession*, SignOn__Error*)>(slot);
    SignOn::AuthSession::connect(self, &SignOn::AuthSession::error, [self, slotFunc](const SignOn::Error& err) {
        const SignOn::Error& err_ret = err;
        // Cast returned reference into pointer
        SignOn__Error* sigval1 = const_cast<SignOn::Error*>(&err_ret);
        slotFunc(self, sigval1);
    });
}

void SignOn__AuthSession_MechanismsAvailable(SignOn__AuthSession* self, const libqt_list /* of libqt_string */ mechanisms) {
    QList<QString> mechanisms_QList;
    mechanisms_QList.reserve(mechanisms.len);
    libqt_string* mechanisms_arr = static_cast<libqt_string*>(mechanisms.data);
    for (size_t i = 0; i < mechanisms.len; ++i) {
        QString mechanisms_arr_i_QString = QString::fromUtf8(mechanisms_arr[i].data, mechanisms_arr[i].len);
        mechanisms_QList.push_back(mechanisms_arr_i_QString);
    }
    self->mechanismsAvailable(mechanisms_QList);
}

void SignOn__AuthSession_Connect_MechanismsAvailable(SignOn__AuthSession* self, intptr_t slot) {
    void (*slotFunc)(SignOn__AuthSession*, const char**) = reinterpret_cast<void (*)(SignOn__AuthSession*, const char**)>(slot);
    SignOn::AuthSession::connect(self, &SignOn::AuthSession::mechanismsAvailable, [self, slotFunc](const QList<QString>& mechanisms) {
        const QList<QString>& mechanisms_ret = mechanisms;
        // Convert QString from UTF-16 in C++ RAII memory to null-terminated UTF-8 chars in manually-managed C memory
        const char** mechanisms_arr = static_cast<const char**>(malloc(sizeof(const char*) * (mechanisms_ret.size() + 1)));
        for (qsizetype i = 0; i < mechanisms_ret.size(); ++i) {
            QByteArray mechanisms_b = mechanisms_ret[i].toUtf8();
            char* mechanisms_str = static_cast<char*>(malloc(mechanisms_b.length() + 1));
            memcpy(mechanisms_str, mechanisms_b.data(), mechanisms_b.length());
            mechanisms_str[mechanisms_b.length()] = '\0';
            mechanisms_arr[i] = mechanisms_str;
        }
        // Append sentinel null terminator to the list
        mechanisms_arr[mechanisms_ret.size()] = nullptr;
        const char** sigval1 = mechanisms_arr;
        slotFunc(self, sigval1);
        free(mechanisms_arr);
    });
}

void SignOn__AuthSession_Response(SignOn__AuthSession* self, const SignOn__SessionData* sessionData) {
    self->response(*sessionData);
}

void SignOn__AuthSession_Connect_Response(SignOn__AuthSession* self, intptr_t slot) {
    void (*slotFunc)(SignOn__AuthSession*, SignOn__SessionData*) = reinterpret_cast<void (*)(SignOn__AuthSession*, SignOn__SessionData*)>(slot);
    SignOn::AuthSession::connect(self, &SignOn::AuthSession::response, [self, slotFunc](const SignOn::SessionData& sessionData) {
        const SignOn::SessionData& sessionData_ret = sessionData;
        // Cast returned reference into pointer
        SignOn__SessionData* sigval1 = const_cast<SignOn::SessionData*>(&sessionData_ret);
        slotFunc(self, sigval1);
    });
}

void SignOn__AuthSession_StateChanged(SignOn__AuthSession* self, int state, const libqt_string message) {
    QString message_QString = QString::fromUtf8(message.data, message.len);
    self->stateChanged(static_cast<SignOn::AuthSession::AuthSessionState>(state), message_QString);
}

void SignOn__AuthSession_Connect_StateChanged(SignOn__AuthSession* self, intptr_t slot) {
    void (*slotFunc)(SignOn__AuthSession*, int, const char*) = reinterpret_cast<void (*)(SignOn__AuthSession*, int, const char*)>(slot);
    SignOn::AuthSession::connect(self, &SignOn::AuthSession::stateChanged, [self, slotFunc](SignOn::AuthSession::AuthSessionState state, const QString& message) {
        int sigval1 = static_cast<int>(state);
        const QString message_ret = message;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray message_b = message_ret.toUtf8();
        const char* message_str = static_cast<const char*>(malloc(message_b.length() + 1));
        memcpy((void*)message_str, message_b.data(), message_b.length());
        ((char*)message_str)[message_b.length()] = '\0';
        const char* sigval2 = message_str;
        slotFunc(self, sigval1, sigval2);
        libqt_free(message_str);
    });
}

void SignOn__AuthSession_QueryAvailableMechanisms1(SignOn__AuthSession* self, const libqt_list /* of libqt_string */ wantedMechanisms) {
    QList<QString> wantedMechanisms_QList;
    wantedMechanisms_QList.reserve(wantedMechanisms.len);
    libqt_string* wantedMechanisms_arr = static_cast<libqt_string*>(wantedMechanisms.data);
    for (size_t i = 0; i < wantedMechanisms.len; ++i) {
        QString wantedMechanisms_arr_i_QString = QString::fromUtf8(wantedMechanisms_arr[i].data, wantedMechanisms_arr[i].len);
        wantedMechanisms_QList.push_back(wantedMechanisms_arr_i_QString);
    }
    self->queryAvailableMechanisms(wantedMechanisms_QList);
}

void SignOn__AuthSession_Process2(SignOn__AuthSession* self, const SignOn__SessionData* sessionData, const libqt_string mechanism) {
    QString mechanism_QString = QString::fromUtf8(mechanism.data, mechanism.len);
    self->process(*sessionData, mechanism_QString);
}

void SignOn__AuthSession_Challenge2(SignOn__AuthSession* self, const SignOn__SessionData* sessionData, const libqt_string mechanism) {
    QString mechanism_QString = QString::fromUtf8(mechanism.data, mechanism.len);
    self->challenge(*sessionData, mechanism_QString);
}

void SignOn__AuthSession_Request2(SignOn__AuthSession* self, const SignOn__SessionData* sessionData, const libqt_string mechanism) {
    QString mechanism_QString = QString::fromUtf8(mechanism.data, mechanism.len);
    self->request(*sessionData, mechanism_QString);
}

void SignOn__AuthSession_SignMessage2(SignOn__AuthSession* self, const SignOn__SessionData* params, const libqt_string mechanism) {
    QString mechanism_QString = QString::fromUtf8(mechanism.data, mechanism.len);
    self->signMessage(*params, mechanism_QString);
}
