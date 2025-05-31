#pragma once
#ifndef SRCC_LIBQSTATICTEXT_H
#define SRCC_LIBQSTATICTEXT_H

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
typedef struct QSizeF QSizeF;
typedef struct QStaticText QStaticText;
typedef struct QTextOption QTextOption;
typedef struct QTransform QTransform;
#endif

#ifdef __cplusplus
typedef QStaticText::PerformanceHint PerformanceHint; // C++ enum
#else
typedef int PerformanceHint; // C ABI enum
#endif

QStaticText* QStaticText_new();
QStaticText* QStaticText_new2(const libqt_string text);
QStaticText* QStaticText_new3(const QStaticText* other);
void QStaticText_OperatorAssign(QStaticText* self, const QStaticText* param1);
void QStaticText_Swap(QStaticText* self, QStaticText* other);
void QStaticText_SetText(QStaticText* self, const libqt_string text);
libqt_string QStaticText_Text(const QStaticText* self);
void QStaticText_SetTextFormat(QStaticText* self, int textFormat);
int QStaticText_TextFormat(const QStaticText* self);
void QStaticText_SetTextWidth(QStaticText* self, double textWidth);
double QStaticText_TextWidth(const QStaticText* self);
void QStaticText_SetTextOption(QStaticText* self, const QTextOption* textOption);
QTextOption* QStaticText_TextOption(const QStaticText* self);
QSizeF* QStaticText_Size(const QStaticText* self);
void QStaticText_Prepare(QStaticText* self);
void QStaticText_SetPerformanceHint(QStaticText* self, int performanceHint);
int QStaticText_PerformanceHint(const QStaticText* self);
bool QStaticText_OperatorEqual(const QStaticText* self, const QStaticText* param1);
bool QStaticText_OperatorNotEqual(const QStaticText* self, const QStaticText* param1);
void QStaticText_Prepare1(QStaticText* self, const QTransform* matrix);
void QStaticText_Prepare2(QStaticText* self, const QTransform* matrix, const QFont* font);
void QStaticText_Delete(QStaticText* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
