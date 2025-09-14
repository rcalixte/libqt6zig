#include <KNotifyConfig>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <knotifyconfig.h>
#include "libknotifyconfig.h"
#include "libknotifyconfig.hxx"

KNotifyConfig* KNotifyConfig_new(const libqt_string applicationName, const libqt_string eventId) {
    QString applicationName_QString = QString::fromUtf8(applicationName.data, applicationName.len);
    QString eventId_QString = QString::fromUtf8(eventId.data, eventId.len);
    return new KNotifyConfig(applicationName_QString, eventId_QString);
}

KNotifyConfig* KNotifyConfig_new2(const KNotifyConfig* other) {
    return new KNotifyConfig(*other);
}

void KNotifyConfig_OperatorAssign(KNotifyConfig* self, const KNotifyConfig* other) {
    self->operator=(*other);
}

libqt_string KNotifyConfig_ApplicationName(const KNotifyConfig* self) {
    QString _ret = self->applicationName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KNotifyConfig_EventId(const KNotifyConfig* self) {
    QString _ret = self->eventId();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool KNotifyConfig_IsValid(const KNotifyConfig* self) {
    return self->isValid();
}

libqt_string KNotifyConfig_ReadGlobalEntry(const KNotifyConfig* self, const libqt_string key) {
    QString key_QString = QString::fromUtf8(key.data, key.len);
    QString _ret = self->readGlobalEntry(key_QString);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KNotifyConfig_ReadEntry(const KNotifyConfig* self, const libqt_string key) {
    QString key_QString = QString::fromUtf8(key.data, key.len);
    QString _ret = self->readEntry(key_QString);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KNotifyConfig_ReadPathEntry(const KNotifyConfig* self, const libqt_string key) {
    QString key_QString = QString::fromUtf8(key.data, key.len);
    QString _ret = self->readPathEntry(key_QString);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KNotifyConfig_ReparseConfiguration() {
    KNotifyConfig::reparseConfiguration();
}

void KNotifyConfig_ReparseSingleConfiguration(const libqt_string app) {
    QString app_QString = QString::fromUtf8(app.data, app.len);
    KNotifyConfig::reparseSingleConfiguration(app_QString);
}

void KNotifyConfig_Delete(KNotifyConfig* self) {
    delete self;
}
