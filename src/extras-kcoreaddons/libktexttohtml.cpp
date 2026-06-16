#include <KTextToHTML>
#include <QString>
#include <ktexttohtml.h>
#include "libktexttohtml.h"
#include "libktexttohtml.hxx"

libqt_string KTextToHTML_ConvertToHtml(const libqt_string plainText, const int* options, int maxUrlLen, int maxAddressLen) {
    QString plainText_QString = QString::fromUtf8(plainText.data, plainText.len);
    auto _ret = KTextToHTML::convertToHtml(plainText_QString, (const KTextToHTML::Options&)(*options), static_cast<int>(maxUrlLen), static_cast<int>(maxAddressLen));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}
