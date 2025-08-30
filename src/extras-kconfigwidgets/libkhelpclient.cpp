#include <KHelpClient>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <khelpclient.h>
#include "libkhelpclient.h"
#include "libkhelpclient.hxx"

void KHelpClient_InvokeHelp(const libqt_string param1, const libqt_string param2) {
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    QString param2_QString = QString::fromUtf8(param2.data, param2.len);
    KHelpClient::invokeHelp(param1_QString, param2_QString);
}
