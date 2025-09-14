#include <KUrlAuthorized>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QUrl>
#include <kurlauthorized.h>
#include "libkurlauthorized.h"
#include "libkurlauthorized.hxx"

bool KUrlAuthorized_AuthorizeUrlAction(const libqt_string param1, const QUrl* param2, const QUrl* param3) {
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    return KUrlAuthorized::authorizeUrlAction(param1_QString, *param2, *param3);
}

void KUrlAuthorized_AllowUrlAction(const libqt_string param1, const QUrl* param2, const QUrl* param3) {
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    KUrlAuthorized::allowUrlAction(param1_QString, *param2, *param3);
}
