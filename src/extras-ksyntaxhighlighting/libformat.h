#pragma once
#ifndef SRC_EXTRAS_KSYNTAXHIGHLIGHTINGC_LIBFORMAT_H
#define SRC_EXTRAS_KSYNTAXHIGHLIGHTINGC_LIBFORMAT_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
typedef KSyntaxHighlighting::Format KSyntaxHighlighting__Format;
typedef KSyntaxHighlighting::Theme KSyntaxHighlighting__Theme;
#else
typedef struct KSyntaxHighlighting__Format KSyntaxHighlighting__Format;
typedef struct KSyntaxHighlighting__Theme KSyntaxHighlighting__Theme;
typedef struct QColor QColor;
#endif

KSyntaxHighlighting__Format* KSyntaxHighlighting__Format_new();
KSyntaxHighlighting__Format* KSyntaxHighlighting__Format_new2(const KSyntaxHighlighting__Format* other);
void KSyntaxHighlighting__Format_OperatorAssign(KSyntaxHighlighting__Format* self, const KSyntaxHighlighting__Format* other);
bool KSyntaxHighlighting__Format_IsValid(const KSyntaxHighlighting__Format* self);
libqt_string KSyntaxHighlighting__Format_Name(const KSyntaxHighlighting__Format* self);
int KSyntaxHighlighting__Format_Id(const KSyntaxHighlighting__Format* self);
int KSyntaxHighlighting__Format_TextStyle(const KSyntaxHighlighting__Format* self);
bool KSyntaxHighlighting__Format_IsDefaultTextStyle(const KSyntaxHighlighting__Format* self, const KSyntaxHighlighting__Theme* theme);
bool KSyntaxHighlighting__Format_HasTextColor(const KSyntaxHighlighting__Format* self, const KSyntaxHighlighting__Theme* theme);
QColor* KSyntaxHighlighting__Format_TextColor(const KSyntaxHighlighting__Format* self, const KSyntaxHighlighting__Theme* theme);
QColor* KSyntaxHighlighting__Format_SelectedTextColor(const KSyntaxHighlighting__Format* self, const KSyntaxHighlighting__Theme* theme);
bool KSyntaxHighlighting__Format_HasBackgroundColor(const KSyntaxHighlighting__Format* self, const KSyntaxHighlighting__Theme* theme);
QColor* KSyntaxHighlighting__Format_BackgroundColor(const KSyntaxHighlighting__Format* self, const KSyntaxHighlighting__Theme* theme);
QColor* KSyntaxHighlighting__Format_SelectedBackgroundColor(const KSyntaxHighlighting__Format* self, const KSyntaxHighlighting__Theme* theme);
bool KSyntaxHighlighting__Format_IsBold(const KSyntaxHighlighting__Format* self, const KSyntaxHighlighting__Theme* theme);
bool KSyntaxHighlighting__Format_IsItalic(const KSyntaxHighlighting__Format* self, const KSyntaxHighlighting__Theme* theme);
bool KSyntaxHighlighting__Format_IsUnderline(const KSyntaxHighlighting__Format* self, const KSyntaxHighlighting__Theme* theme);
bool KSyntaxHighlighting__Format_IsStrikeThrough(const KSyntaxHighlighting__Format* self, const KSyntaxHighlighting__Theme* theme);
bool KSyntaxHighlighting__Format_SpellCheck(const KSyntaxHighlighting__Format* self);
bool KSyntaxHighlighting__Format_HasBoldOverride(const KSyntaxHighlighting__Format* self);
bool KSyntaxHighlighting__Format_HasItalicOverride(const KSyntaxHighlighting__Format* self);
bool KSyntaxHighlighting__Format_HasUnderlineOverride(const KSyntaxHighlighting__Format* self);
bool KSyntaxHighlighting__Format_HasStrikeThroughOverride(const KSyntaxHighlighting__Format* self);
bool KSyntaxHighlighting__Format_HasTextColorOverride(const KSyntaxHighlighting__Format* self);
bool KSyntaxHighlighting__Format_HasBackgroundColorOverride(const KSyntaxHighlighting__Format* self);
bool KSyntaxHighlighting__Format_HasSelectedTextColorOverride(const KSyntaxHighlighting__Format* self);
bool KSyntaxHighlighting__Format_HasSelectedBackgroundColorOverride(const KSyntaxHighlighting__Format* self);
void KSyntaxHighlighting__Format_Delete(KSyntaxHighlighting__Format* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
