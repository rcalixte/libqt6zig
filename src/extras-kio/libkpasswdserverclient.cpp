#define WORKAROUND_INNER_CLASS_DEFINITION_KIO__AuthInfo
#include <KPasswdServerClient>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <kpasswdserverclient.h>
#include "libkpasswdserverclient.h"
#include "libkpasswdserverclient.hxx"

KPasswdServerClient* KPasswdServerClient_new() {
    return new KPasswdServerClient();
}

bool KPasswdServerClient_CheckAuthInfo(KPasswdServerClient* self, KIO__AuthInfo* info, long long windowId, long long usertime) {
    return self->checkAuthInfo(info, static_cast<qlonglong>(windowId), static_cast<qlonglong>(usertime));
}

int KPasswdServerClient_QueryAuthInfo(KPasswdServerClient* self, KIO__AuthInfo* info, const libqt_string errorMsg, long long windowId, long long usertime) {
    QString errorMsg_QString = QString::fromUtf8(errorMsg.data, errorMsg.len);
    return self->queryAuthInfo(info, errorMsg_QString, static_cast<qlonglong>(windowId), static_cast<qlonglong>(usertime));
}

void KPasswdServerClient_AddAuthInfo(KPasswdServerClient* self, const KIO__AuthInfo* info, long long windowId) {
    self->addAuthInfo(*info, static_cast<qlonglong>(windowId));
}

void KPasswdServerClient_RemoveAuthInfo(KPasswdServerClient* self, const libqt_string host, const libqt_string protocol, const libqt_string user) {
    QString host_QString = QString::fromUtf8(host.data, host.len);
    QString protocol_QString = QString::fromUtf8(protocol.data, protocol.len);
    QString user_QString = QString::fromUtf8(user.data, user.len);
    self->removeAuthInfo(host_QString, protocol_QString, user_QString);
}

void KPasswdServerClient_Delete(KPasswdServerClient* self) {
    delete self;
}
