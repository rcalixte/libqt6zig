#include <QByteArray>
#include <QString>
#include <qtenvironmentvariables.h>
#include "libqtenvironmentvariables.h"
#include "libqtenvironmentvariables.hxx"

libqt_string qtenvironmentvariables_Qgetenv(const char* varName) {
    QByteArray _qb = qgetenv(varName);
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<char*>(malloc(_str.len));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    return _str;
}

libqt_string qtenvironmentvariables_QEnvironmentVariable(const char* varName) {
    auto _ret = qEnvironmentVariable(varName);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string qtenvironmentvariables_QEnvironmentVariable2(const char* varName, const libqt_string defaultValue) {
    QString defaultValue_QString = QString::fromUtf8(defaultValue.data, defaultValue.len);
    auto _ret = qEnvironmentVariable(varName, defaultValue_QString);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool qtenvironmentvariables_Qputenv(const char* varName, libqt_string value) {
    QByteArrayView value_QByteArrayView(value.data, value.len);
    return qputenv(varName, value_QByteArrayView);
}

bool qtenvironmentvariables_Qunsetenv(const char* varName) {
    return qunsetenv(varName);
}

bool qtenvironmentvariables_QEnvironmentVariableIsEmpty(const char* varName) {
    return qEnvironmentVariableIsEmpty(varName);
}

bool qtenvironmentvariables_QEnvironmentVariableIsSet(const char* varName) {
    return qEnvironmentVariableIsSet(varName);
}

int qtenvironmentvariables_QEnvironmentVariableIntValue(const char* varName, bool* ok) {
    return qEnvironmentVariableIntValue(varName, ok);
}
