#include <KRandom>
#include <QString>
#include <krandom.h>
#include "libkrandom.h"
#include "libkrandom.hxx"

libqt_string KRandom_RandomString(int length) {
    auto _ret = KRandom::randomString(static_cast<int>(length));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}
