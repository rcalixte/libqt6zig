#include <KFileSystemType>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <kfilesystemtype.h>
#include "libkfilesystemtype.h"
#include "libkfilesystemtype.hxx"

int KFileSystemType_FileSystemType(const libqt_string param1) {
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    return static_cast<int>(KFileSystemType::fileSystemType(param1_QString));
}

libqt_string KFileSystemType_FileSystemName(int param1) {
    QString _ret = KFileSystemType::fileSystemName(static_cast<KFileSystemType::Type>(param1));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}
