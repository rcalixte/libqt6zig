#include <QTextCursor>
#define WORKAROUND_INNER_CLASS_DEFINITION_TextUtils__ConvertText
#include <converttext.h>
#include "libconverttext.h"
#include "libconverttext.hxx"

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
