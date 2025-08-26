#include <KTextToHTML>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <ktexttohtml.h>
#include "libktexttohtml.h"
#include "libktexttohtml.hxx"

libqt_string KTextToHTML_ConvertToHtml(const libqt_string param1, const int* param2, int param3, int param4) {
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    QString _ret = KTextToHTML::convertToHtml(param1_QString, (const KTextToHTML::Options&)(*param2), static_cast<int>(param3), static_cast<int>(param4));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}
