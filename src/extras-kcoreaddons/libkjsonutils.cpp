#include <KJsonUtils>
#include <QJsonObject>
#include <QJsonValue>
#include <QString>
#include <kjsonutils.h>
#include "libkjsonutils.h"
#include "libkjsonutils.hxx"

QJsonValue* KJsonUtils_ReadTranslatedValue(const QJsonObject* jo, const libqt_string key, const QJsonValue* defaultValue) {
    QString key_QString = QString::fromUtf8(key.data, key.len);
    return new QJsonValue(KJsonUtils::readTranslatedValue(*jo, key_QString, *defaultValue));
}

libqt_string KJsonUtils_ReadTranslatedString(const QJsonObject* jo, const libqt_string key, const libqt_string defaultValue) {
    QString key_QString = QString::fromUtf8(key.data, key.len);
    QString defaultValue_QString = QString::fromUtf8(defaultValue.data, defaultValue.len);
    auto _ret = KJsonUtils::readTranslatedString(*jo, key_QString, defaultValue_QString);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}
