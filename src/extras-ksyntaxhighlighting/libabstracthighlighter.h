#pragma once
#ifndef SRC_EXTRAS_KSYNTAXHIGHLIGHTINGC_LIBABSTRACTHIGHLIGHTER_H
#define SRC_EXTRAS_KSYNTAXHIGHLIGHTINGC_LIBABSTRACTHIGHLIGHTER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KSyntaxHighlighting__AbstractHighlighter)
typedef KSyntaxHighlighting::AbstractHighlighter KSyntaxHighlighting__AbstractHighlighter;
#endif
typedef KSyntaxHighlighting::Definition KSyntaxHighlighting__Definition;
typedef KSyntaxHighlighting::FoldingRegion KSyntaxHighlighting__FoldingRegion;
typedef KSyntaxHighlighting::Format KSyntaxHighlighting__Format;
typedef KSyntaxHighlighting::Theme KSyntaxHighlighting__Theme;
#else
typedef struct KSyntaxHighlighting__AbstractHighlighter KSyntaxHighlighting__AbstractHighlighter;
typedef struct KSyntaxHighlighting__Definition KSyntaxHighlighting__Definition;
typedef struct KSyntaxHighlighting__FoldingRegion KSyntaxHighlighting__FoldingRegion;
typedef struct KSyntaxHighlighting__Format KSyntaxHighlighting__Format;
typedef struct KSyntaxHighlighting__Theme KSyntaxHighlighting__Theme;
#endif

KSyntaxHighlighting__Definition* KSyntaxHighlighting__AbstractHighlighter_Definition(const KSyntaxHighlighting__AbstractHighlighter* self);
void KSyntaxHighlighting__AbstractHighlighter_SetDefinition(KSyntaxHighlighting__AbstractHighlighter* self, const KSyntaxHighlighting__Definition* def);
KSyntaxHighlighting__Theme* KSyntaxHighlighting__AbstractHighlighter_Theme(const KSyntaxHighlighting__AbstractHighlighter* self);
void KSyntaxHighlighting__AbstractHighlighter_SetTheme(KSyntaxHighlighting__AbstractHighlighter* self, const KSyntaxHighlighting__Theme* theme);
void KSyntaxHighlighting__AbstractHighlighter_Delete(KSyntaxHighlighting__AbstractHighlighter* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
