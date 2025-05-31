#pragma once
#ifndef SRCC_LIBQFONTINFO_H
#define SRCC_LIBQFONTINFO_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QFont QFont;
typedef struct QFontInfo QFontInfo;
#endif

QFontInfo* QFontInfo_new(const QFont* param1);
QFontInfo* QFontInfo_new2(const QFontInfo* param1);
void QFontInfo_OperatorAssign(QFontInfo* self, const QFontInfo* param1);
void QFontInfo_Swap(QFontInfo* self, QFontInfo* other);
libqt_string QFontInfo_Family(const QFontInfo* self);
libqt_string QFontInfo_StyleName(const QFontInfo* self);
int QFontInfo_PixelSize(const QFontInfo* self);
int QFontInfo_PointSize(const QFontInfo* self);
double QFontInfo_PointSizeF(const QFontInfo* self);
bool QFontInfo_Italic(const QFontInfo* self);
int QFontInfo_Style(const QFontInfo* self);
int QFontInfo_Weight(const QFontInfo* self);
bool QFontInfo_Bold(const QFontInfo* self);
bool QFontInfo_Underline(const QFontInfo* self);
bool QFontInfo_Overline(const QFontInfo* self);
bool QFontInfo_StrikeOut(const QFontInfo* self);
bool QFontInfo_FixedPitch(const QFontInfo* self);
int QFontInfo_StyleHint(const QFontInfo* self);
int QFontInfo_LegacyWeight(const QFontInfo* self);
bool QFontInfo_ExactMatch(const QFontInfo* self);
void QFontInfo_Delete(QFontInfo* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
