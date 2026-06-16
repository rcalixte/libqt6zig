#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_KTEXTADDONSC_LIBCONVERTTEXT_H
#define SRC_RESTRICTED_EXTRAS_KTEXTADDONSC_LIBCONVERTTEXT_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QTextCursor QTextCursor;
#endif

libqt_string TextUtils__ConvertText_Normalize(libqt_string str);
void TextUtils__ConvertText_UpperCase(QTextCursor* cursor);
void TextUtils__ConvertText_LowerCase(QTextCursor* cursor);
void TextUtils__ConvertText_SentenceCase(QTextCursor* cursor);
void TextUtils__ConvertText_ReverseCase(QTextCursor* cursor);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
