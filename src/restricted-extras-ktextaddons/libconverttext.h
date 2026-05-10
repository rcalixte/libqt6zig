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

void TextUtils__ConvertText_UpperCase(QTextCursor* param1);
void TextUtils__ConvertText_LowerCase(QTextCursor* param1);
void TextUtils__ConvertText_SentenceCase(QTextCursor* param1);
void TextUtils__ConvertText_ReverseCase(QTextCursor* param1);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
