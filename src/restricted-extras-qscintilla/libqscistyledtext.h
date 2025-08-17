#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBQSCISTYLEDTEXT_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBQSCISTYLEDTEXT_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QsciScintillaBase QsciScintillaBase;
typedef struct QsciStyle QsciStyle;
typedef struct QsciStyledText QsciStyledText;
#endif

QsciStyledText* QsciStyledText_new(const libqt_string text, int style);
QsciStyledText* QsciStyledText_new2(const libqt_string text, const QsciStyle* style);
QsciStyledText* QsciStyledText_new3(const QsciStyledText* param1);
void QsciStyledText_Apply(const QsciStyledText* self, QsciScintillaBase* sci);
libqt_string QsciStyledText_Text(const QsciStyledText* self);
int QsciStyledText_Style(const QsciStyledText* self);
void QsciStyledText_Delete(QsciStyledText* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
