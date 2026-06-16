#include <QString>
#include <QTextCursor>
#define WORKAROUND_INNER_CLASS_DEFINITION_TextUtils__ConvertText
#include <converttext.h>
#include "libconverttext.h"
#include "libconverttext.hxx"

libqt_string TextUtils__ConvertText_Normalize(libqt_string str) {
    QString str_QString = QString::fromUtf8(str.data, str.len);
    auto _ret = TextUtils::ConvertText::normalize(str_QString);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void TextUtils__ConvertText_UpperCase(QTextCursor* cursor) {
    TextUtils::ConvertText::upperCase(*cursor);
}

void TextUtils__ConvertText_LowerCase(QTextCursor* cursor) {
    TextUtils::ConvertText::lowerCase(*cursor);
}

void TextUtils__ConvertText_SentenceCase(QTextCursor* cursor) {
    TextUtils::ConvertText::sentenceCase(*cursor);
}

void TextUtils__ConvertText_ReverseCase(QTextCursor* cursor) {
    TextUtils::ConvertText::reverseCase(*cursor);
}
