#include <KUrlAuthorized>
#include <QString>
#include <QUrl>
#include <kurlauthorized.h>
#include "libkurlauthorized.h"
#include "libkurlauthorized.hxx"

bool KUrlAuthorized_AuthorizeUrlAction(const libqt_string action, const QUrl* baseUrl, const QUrl* destUrl) {
    QString action_QString = QString::fromUtf8(action.data, action.len);
    return KUrlAuthorized::authorizeUrlAction(action_QString, *baseUrl, *destUrl);
}

void KUrlAuthorized_AllowUrlAction(const libqt_string action, const QUrl* baseUrl, const QUrl* destUrl) {
    QString action_QString = QString::fromUtf8(action.data, action.len);
    KUrlAuthorized::allowUrlAction(action_QString, *baseUrl, *destUrl);
}
