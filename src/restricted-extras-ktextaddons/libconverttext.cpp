#include <QString>
#include <QTextCursor>
#define WORKAROUND_INNER_CLASS_DEFINITION_TextUtils__ConvertText
#include <converttext.h>
#include "libconverttext.h"
#include "libconverttext.hxx"

libqt_string TextUtils__ConvertText_Normalize(libqt_string param1) {
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    auto _ret = TextUtils::ConvertText::normalize(param1_QString);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void TextUtils__ConvertText_UpperCase(QTextCursor* param1) {
    TextUtils::ConvertText::upperCase(*param1);
}

void TextUtils__ConvertText_LowerCase(QTextCursor* param1) {
    TextUtils::ConvertText::lowerCase(*param1);
}

void TextUtils__ConvertText_SentenceCase(QTextCursor* param1) {
    TextUtils::ConvertText::sentenceCase(*param1);
}

void TextUtils__ConvertText_ReverseCase(QTextCursor* param1) {
    TextUtils::ConvertText::reverseCase(*param1);
}
