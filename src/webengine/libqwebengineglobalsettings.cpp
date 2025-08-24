#include <QList>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QWebEngineGlobalSettings>
#define WORKAROUND_INNER_CLASS_DEFINITION_QWebEngineGlobalSettings__DnsMode
#include <qwebengineglobalsettings.h>
#include "libqwebengineglobalsettings.h"
#include "libqwebengineglobalsettings.hxx"

uint8_t QWebEngineGlobalSettings__DnsMode_SecureMode(const QWebEngineGlobalSettings__DnsMode* self) {
    return static_cast<uint8_t>(self->secureMode);
}

void QWebEngineGlobalSettings__DnsMode_SetSecureMode(QWebEngineGlobalSettings__DnsMode* self, uint8_t secureMode) {
    self->secureMode = static_cast<QWebEngineGlobalSettings::SecureDnsMode>(secureMode);
}

libqt_list /* of libqt_string */ QWebEngineGlobalSettings__DnsMode_ServerTemplates(const QWebEngineGlobalSettings__DnsMode* self) {
    QList<QString> serverTemplates_ret = self->serverTemplates;
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* serverTemplates_arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (serverTemplates_ret.size() + 1)));
    for (qsizetype i = 0; i < serverTemplates_ret.size(); ++i) {
        QString serverTemplates_lv_ret = serverTemplates_ret[i];
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray serverTemplates_lv_b = serverTemplates_lv_ret.toUtf8();
        libqt_string serverTemplates_lv_str;
        serverTemplates_lv_str.len = serverTemplates_lv_b.length();
        serverTemplates_lv_str.data = static_cast<const char*>(malloc(serverTemplates_lv_str.len + 1));
        memcpy((void*)serverTemplates_lv_str.data, serverTemplates_lv_b.data(), serverTemplates_lv_str.len);
        ((char*)serverTemplates_lv_str.data)[serverTemplates_lv_str.len] = '\0';
        serverTemplates_arr[i] = serverTemplates_lv_str;
    }
    libqt_list serverTemplates_out;
    serverTemplates_out.len = serverTemplates_ret.size();
    serverTemplates_out.data = static_cast<void*>(serverTemplates_arr);
    return serverTemplates_out;
}

void QWebEngineGlobalSettings__DnsMode_SetServerTemplates(QWebEngineGlobalSettings__DnsMode* self, libqt_list /* of libqt_string */ serverTemplates) {
    QList<QString> serverTemplates_QList;
    serverTemplates_QList.reserve(serverTemplates.len);
    libqt_string* serverTemplates_arr = static_cast<libqt_string*>(serverTemplates.data);
    for (size_t i = 0; i < serverTemplates.len; ++i) {
        QString serverTemplates_arr_i_QString = QString::fromUtf8(serverTemplates_arr[i].data, serverTemplates_arr[i].len);
        serverTemplates_QList.push_back(serverTemplates_arr_i_QString);
    }
    self->serverTemplates = serverTemplates_QList;
}

void QWebEngineGlobalSettings__DnsMode_Delete(QWebEngineGlobalSettings__DnsMode* self) {
    delete self;
}

bool QWebEngineGlobalSettings_SetDnsMode(QWebEngineGlobalSettings__DnsMode* param1) {
    return QWebEngineGlobalSettings::setDnsMode(*param1);
}
