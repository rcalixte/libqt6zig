#include <QCborError>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qcborcommon.h>
#include "libqcborcommon.h"
#include "libqcborcommon.hxx"

int QCborError_ToQCborError__Code(const QCborError* self) {
    return static_cast<int>(self->operator QCborError::Code());
}

libqt_string QCborError_ToString(const QCborError* self) {
    QString _ret = self->toString();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QCborError_Delete(QCborError* self) {
    delete self;
}
