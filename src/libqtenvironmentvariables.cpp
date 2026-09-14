#include <QByteArray>
#include <qtenvironmentvariables.h>
#include "libqtenvironmentvariables.h"
#include "libqtenvironmentvariables.hxx"

libqt_string qtenvironmentvariables_h_Qgetenv(const char* varName) {
    QByteArray _qb = qgetenv(varName);
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<char*>(malloc(_str.len));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    return _str;
}

bool qtenvironmentvariables_h_Qputenv(const char* varName, libqt_string value) {
    QByteArrayView value_QByteArrayView(value.data, value.len);
    return qputenv(varName, value_QByteArrayView);
}

bool qtenvironmentvariables_h_Qunsetenv(const char* varName) {
    return qunsetenv(varName);
}
