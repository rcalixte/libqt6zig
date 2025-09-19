#define WORKAROUND_INNER_CLASS_DEFINITION_Attica__PlatformDependent
#include <QByteArray>
#include <QIODevice>
#include <QList>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QNetworkRequest>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QUrl>
#include <platformdependent.h>
#include "libplatformdependent.h"
#include "libplatformdependent.hxx"

libqt_list /* of QUrl* */ Attica__PlatformDependent_GetDefaultProviderFiles(const Attica__PlatformDependent* self) {
    QList<QUrl> _ret = self->getDefaultProviderFiles();
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

void Attica__PlatformDependent_AddDefaultProviderFile(Attica__PlatformDependent* self, const QUrl* url) {
    self->addDefaultProviderFile(*url);
}

void Attica__PlatformDependent_RemoveDefaultProviderFile(Attica__PlatformDependent* self, const QUrl* url) {
    self->removeDefaultProviderFile(*url);
}

void Attica__PlatformDependent_EnableProvider(const Attica__PlatformDependent* self, const QUrl* baseUrl, bool enabled) {
    self->enableProvider(*baseUrl, enabled);
}

bool Attica__PlatformDependent_IsEnabled(const Attica__PlatformDependent* self, const QUrl* baseUrl) {
    return self->isEnabled(*baseUrl);
}

bool Attica__PlatformDependent_HasCredentials(const Attica__PlatformDependent* self, const QUrl* baseUrl) {
    return self->hasCredentials(*baseUrl);
}

bool Attica__PlatformDependent_LoadCredentials(Attica__PlatformDependent* self, const QUrl* baseUrl, libqt_string user, libqt_string password) {
    QString user_QString = QString::fromUtf8(user.data, user.len);
    QString password_QString = QString::fromUtf8(password.data, password.len);
    return self->loadCredentials(*baseUrl, user_QString, password_QString);
}

bool Attica__PlatformDependent_AskForCredentials(Attica__PlatformDependent* self, const QUrl* baseUrl, libqt_string user, libqt_string password) {
    QString user_QString = QString::fromUtf8(user.data, user.len);
    QString password_QString = QString::fromUtf8(password.data, password.len);
    return self->askForCredentials(*baseUrl, user_QString, password_QString);
}

bool Attica__PlatformDependent_SaveCredentials(Attica__PlatformDependent* self, const QUrl* baseUrl, const libqt_string user, const libqt_string password) {
    QString user_QString = QString::fromUtf8(user.data, user.len);
    QString password_QString = QString::fromUtf8(password.data, password.len);
    return self->saveCredentials(*baseUrl, user_QString, password_QString);
}

QNetworkReply* Attica__PlatformDependent_Get(Attica__PlatformDependent* self, const QNetworkRequest* request) {
    return self->get(*request);
}

QNetworkReply* Attica__PlatformDependent_Post(Attica__PlatformDependent* self, const QNetworkRequest* request, QIODevice* data) {
    return self->post(*request, data);
}

QNetworkReply* Attica__PlatformDependent_Post2(Attica__PlatformDependent* self, const QNetworkRequest* request, const libqt_string data) {
    QByteArray data_QByteArray(data.data, data.len);
    return self->post(*request, data_QByteArray);
}

void Attica__PlatformDependent_SetNam(Attica__PlatformDependent* self, QNetworkAccessManager* nam) {
    self->setNam(nam);
}

QNetworkAccessManager* Attica__PlatformDependent_Nam(Attica__PlatformDependent* self) {
    return self->nam();
}

void Attica__PlatformDependent_OperatorAssign(Attica__PlatformDependent* self, const Attica__PlatformDependent* param1) {
    self->operator=(*param1);
}

void Attica__PlatformDependent_Delete(Attica__PlatformDependent* self) {
    delete self;
}
