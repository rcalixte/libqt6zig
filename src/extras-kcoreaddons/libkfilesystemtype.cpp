#include <KFileSystemType>
#include <QString>
#include <kfilesystemtype.h>
#include "libkfilesystemtype.h"
#include "libkfilesystemtype.hxx"

int KFileSystemType_FileSystemType(const libqt_string path) {
    QString path_QString = QString::fromUtf8(path.data, path.len);
    return static_cast<int>(KFileSystemType::fileSystemType(path_QString));
}

libqt_string KFileSystemType_FileSystemName(int type) {
    auto _ret = KFileSystemType::fileSystemName(static_cast<KFileSystemType::Type>(type));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}
