#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBQSCISTYLE_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBQSCISTYLE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QColor QColor;
typedef struct QFont QFont;
typedef struct QsciScintillaBase QsciScintillaBase;
typedef struct QsciStyle QsciStyle;
#endif

QsciStyle* QsciStyle_new();
QsciStyle* QsciStyle_new2(int style, const libqt_string description, const QColor* color, const QColor* paper, const QFont* font);
QsciStyle* QsciStyle_new3(const QsciStyle* param1);
QsciStyle* QsciStyle_new4(int style);
QsciStyle* QsciStyle_new5(int style, const libqt_string description, const QColor* color, const QColor* paper, const QFont* font, bool eolFill);
void QsciStyle_Apply(const QsciStyle* self, QsciScintillaBase* sci);
void QsciStyle_SetStyle(QsciStyle* self, int style);
int QsciStyle_Style(const QsciStyle* self);
void QsciStyle_SetDescription(QsciStyle* self, const libqt_string description);
libqt_string QsciStyle_Description(const QsciStyle* self);
void QsciStyle_SetColor(QsciStyle* self, const QColor* color);
QColor* QsciStyle_Color(const QsciStyle* self);
void QsciStyle_SetPaper(QsciStyle* self, const QColor* paper);
QColor* QsciStyle_Paper(const QsciStyle* self);
void QsciStyle_SetFont(QsciStyle* self, const QFont* font);
QFont* QsciStyle_Font(const QsciStyle* self);
void QsciStyle_SetEolFill(QsciStyle* self, bool fill);
bool QsciStyle_EolFill(const QsciStyle* self);
void QsciStyle_SetTextCase(QsciStyle* self, int text_case);
int QsciStyle_TextCase(const QsciStyle* self);
void QsciStyle_SetVisible(QsciStyle* self, bool visible);
bool QsciStyle_Visible(const QsciStyle* self);
void QsciStyle_SetChangeable(QsciStyle* self, bool changeable);
bool QsciStyle_Changeable(const QsciStyle* self);
void QsciStyle_SetHotspot(QsciStyle* self, bool hotspot);
bool QsciStyle_Hotspot(const QsciStyle* self);
void QsciStyle_Refresh(QsciStyle* self);
void QsciStyle_Delete(QsciStyle* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
