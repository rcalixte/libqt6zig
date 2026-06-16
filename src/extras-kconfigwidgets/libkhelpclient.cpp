#include <KHelpClient>
#include <QString>
#include <khelpclient.h>
#include "libkhelpclient.h"
#include "libkhelpclient.hxx"

void KHelpClient_InvokeHelp(const libqt_string anchor, const libqt_string appname) {
    QString anchor_QString = QString::fromUtf8(anchor.data, anchor.len);
    QString appname_QString = QString::fromUtf8(appname.data, appname.len);
    KHelpClient::invokeHelp(anchor_QString, appname_QString);
}
