#define WORKAROUND_INNER_CLASS_DEFINITION_Poppler__Version
#include <QString>
#include <QByteArray>
#include <cstring>
#include <poppler-version.h>
#include "libpoppler_version.h"
#include "libpoppler_version.hxx"

libqt_string Poppler__Version_String() {
    QString _ret = Poppler::Version::string();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

unsigned int Poppler__Version_Major() {
    return Poppler::Version::major();
}

unsigned int Poppler__Version_Minor() {
    return Poppler::Version::minor();
}

unsigned int Poppler__Version_Micro() {
    return Poppler::Version::micro();
}
