#include <QString>
#include <qttranslation.h>
#include "libqttranslation.h"
#include "libqttranslation.hxx"

libqt_string qttranslation_h_QtTrId(const char* id, int n) {
    auto _ret = qtTrId(id, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}
