#pragma once
#ifndef SRC_EXTRAS_KICONTHEMESC_LIBKICONCOLORS_H
#define SRC_EXTRAS_KICONTHEMESC_LIBKICONCOLORS_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KIconColors KIconColors;
typedef struct QColor QColor;
typedef struct QPalette QPalette;
#endif

KIconColors* KIconColors_new();
KIconColors* KIconColors_new2(const QColor* color);
KIconColors* KIconColors_new3(const QPalette* palette);
KIconColors* KIconColors_new4(const KIconColors* other);
void KIconColors_OperatorAssign(KIconColors* self, const KIconColors* other);
QColor* KIconColors_Text(const KIconColors* self);
QColor* KIconColors_Highlight(const KIconColors* self);
QColor* KIconColors_HighlightedText(const KIconColors* self);
QColor* KIconColors_Accent(const KIconColors* self);
QColor* KIconColors_Background(const KIconColors* self);
QColor* KIconColors_NeutralText(const KIconColors* self);
QColor* KIconColors_PositiveText(const KIconColors* self);
QColor* KIconColors_NegativeText(const KIconColors* self);
QColor* KIconColors_ActiveText(const KIconColors* self);
void KIconColors_SetText(KIconColors* self, const QColor* color);
void KIconColors_SetHighlight(KIconColors* self, const QColor* color);
void KIconColors_SetHighlightedText(KIconColors* self, const QColor* color);
void KIconColors_SetAccent(KIconColors* self, const QColor* color);
void KIconColors_SetBackground(KIconColors* self, const QColor* color);
void KIconColors_SetNeutralText(KIconColors* self, const QColor* color);
void KIconColors_SetPositiveText(KIconColors* self, const QColor* color);
void KIconColors_SetNegativeText(KIconColors* self, const QColor* color);
void KIconColors_SetActiveText(KIconColors* self, const QColor* color);
void KIconColors_Delete(KIconColors* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
