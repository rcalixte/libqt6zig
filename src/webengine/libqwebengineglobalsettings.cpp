#include <QWebEngineGlobalSettings>
#define WORKAROUND_INNER_CLASS_DEFINITION_QWebEngineGlobalSettings__DnsMode
#include <qwebengineglobalsettings.h>
#include "libqwebengineglobalsettings.h"
#include "libqwebengineglobalsettings.hxx"

bool QWebEngineGlobalSettings_SetDnsMode(QWebEngineGlobalSettings__DnsMode* param1) {
    return QWebEngineGlobalSettings::setDnsMode(*param1);
}
