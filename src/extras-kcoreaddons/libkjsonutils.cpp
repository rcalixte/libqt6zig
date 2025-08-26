#include <KJsonUtils>
#include <QJsonObject>
#include <QJsonValue>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <kjsonutils.h>
#include "libkjsonutils.h"
#include "libkjsonutils.hxx"

QJsonValue* KJsonUtils_ReadTranslatedValue(const QJsonObject* param1, const libqt_string param2, const QJsonValue* param3) {
    QString param2_QString = QString::fromUtf8(param2.data, param2.len);
    return new QJsonValue(KJsonUtils::readTranslatedValue(*param1, param2_QString, *param3));
}

libqt_string KJsonUtils_ReadTranslatedString(const QJsonObject* param1, const libqt_string param2, const libqt_string param3) {
    QString param2_QString = QString::fromUtf8(param2.data, param2.len);
    QString param3_QString = QString::fromUtf8(param3.data, param3.len);
    QString _ret = KJsonUtils::readTranslatedString(*param1, param2_QString, param3_QString);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}
