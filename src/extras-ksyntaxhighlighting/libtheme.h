#pragma once
#ifndef SRC_EXTRAS_KSYNTAXHIGHLIGHTINGC_LIBTHEME_H
#define SRC_EXTRAS_KSYNTAXHIGHLIGHTINGC_LIBTHEME_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
typedef KSyntaxHighlighting::Theme KSyntaxHighlighting__Theme;
#else
typedef struct KSyntaxHighlighting__Theme KSyntaxHighlighting__Theme;
#endif

KSyntaxHighlighting__Theme* KSyntaxHighlighting__Theme_new();
KSyntaxHighlighting__Theme* KSyntaxHighlighting__Theme_new2(const KSyntaxHighlighting__Theme* copyVal);
void KSyntaxHighlighting__Theme_OperatorAssign(KSyntaxHighlighting__Theme* self, const KSyntaxHighlighting__Theme* other);
bool KSyntaxHighlighting__Theme_IsValid(const KSyntaxHighlighting__Theme* self);
libqt_string KSyntaxHighlighting__Theme_Name(const KSyntaxHighlighting__Theme* self);
libqt_string KSyntaxHighlighting__Theme_TranslatedName(const KSyntaxHighlighting__Theme* self);
bool KSyntaxHighlighting__Theme_IsReadOnly(const KSyntaxHighlighting__Theme* self);
libqt_string KSyntaxHighlighting__Theme_FilePath(const KSyntaxHighlighting__Theme* self);
unsigned int KSyntaxHighlighting__Theme_TextColor(const KSyntaxHighlighting__Theme* self, int style);
unsigned int KSyntaxHighlighting__Theme_SelectedTextColor(const KSyntaxHighlighting__Theme* self, int style);
unsigned int KSyntaxHighlighting__Theme_BackgroundColor(const KSyntaxHighlighting__Theme* self, int style);
unsigned int KSyntaxHighlighting__Theme_SelectedBackgroundColor(const KSyntaxHighlighting__Theme* self, int style);
bool KSyntaxHighlighting__Theme_IsBold(const KSyntaxHighlighting__Theme* self, int style);
bool KSyntaxHighlighting__Theme_IsItalic(const KSyntaxHighlighting__Theme* self, int style);
bool KSyntaxHighlighting__Theme_IsUnderline(const KSyntaxHighlighting__Theme* self, int style);
bool KSyntaxHighlighting__Theme_IsStrikeThrough(const KSyntaxHighlighting__Theme* self, int style);
unsigned int KSyntaxHighlighting__Theme_EditorColor(const KSyntaxHighlighting__Theme* self, int role);
void KSyntaxHighlighting__Theme_Delete(KSyntaxHighlighting__Theme* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
