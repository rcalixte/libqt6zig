#include <QString>
#define WORKAROUND_INNER_CLASS_DEFINITION_TextEmoticonsCore__EmoticonUnicodeUtils
#include <emoticonunicodeutils.h>
#include "libemoticonunicodeutils.h"
#include "libemoticonunicodeutils.hxx"

libqt_string TextEmoticonsCore__EmoticonUnicodeUtils_EmojiFontName() {
    QString _ret = TextEmoticonsCore::EmoticonUnicodeUtils::emojiFontName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string TextEmoticonsCore__EmoticonUnicodeUtils_RecentIdentifier() {
    QString _ret = TextEmoticonsCore::EmoticonUnicodeUtils::recentIdentifier();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string TextEmoticonsCore__EmoticonUnicodeUtils_CustomIdentifier() {
    QString _ret = TextEmoticonsCore::EmoticonUnicodeUtils::customIdentifier();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}
