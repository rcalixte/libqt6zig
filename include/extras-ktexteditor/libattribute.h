#pragma once
#ifndef SRC_EXTRAS_KTEXTEDITORC_LIBATTRIBUTE_H
#define SRC_EXTRAS_KTEXTEDITORC_LIBATTRIBUTE_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KTextEditor__Attribute)
typedef KTextEditor::Attribute KTextEditor__Attribute;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KTextEditor__AttributeBlock)
typedef KTextEditor::AttributeBlock KTextEditor__AttributeBlock;
#endif
#else
typedef struct KTextEditor__Attribute KTextEditor__Attribute;
typedef struct KTextEditor__AttributeBlock KTextEditor__AttributeBlock;
typedef struct QBrush QBrush;
typedef struct QSharedData QSharedData;
typedef struct QTextCharFormat QTextCharFormat;
typedef struct QTextFormat QTextFormat;
#endif

KTextEditor__Attribute* KTextEditor__Attribute_new();
KTextEditor__Attribute* KTextEditor__Attribute_new2(const libqt_string name, int style);
KTextEditor__Attribute* KTextEditor__Attribute_new3(const KTextEditor__Attribute* a);
libqt_string KTextEditor__Attribute_Name(const KTextEditor__Attribute* self);
void KTextEditor__Attribute_SetName(KTextEditor__Attribute* self, const libqt_string name);
int KTextEditor__Attribute_DefaultStyle(const KTextEditor__Attribute* self);
void KTextEditor__Attribute_SetDefaultStyle(KTextEditor__Attribute* self, int style);
bool KTextEditor__Attribute_SkipSpellChecking(const KTextEditor__Attribute* self);
void KTextEditor__Attribute_SetSkipSpellChecking(KTextEditor__Attribute* self, bool skipspellchecking);
bool KTextEditor__Attribute_FontBold(const KTextEditor__Attribute* self);
void KTextEditor__Attribute_SetFontBold(KTextEditor__Attribute* self);
QBrush* KTextEditor__Attribute_Outline(const KTextEditor__Attribute* self);
void KTextEditor__Attribute_SetOutline(KTextEditor__Attribute* self, const QBrush* brush);
QBrush* KTextEditor__Attribute_SelectedForeground(const KTextEditor__Attribute* self);
void KTextEditor__Attribute_SetSelectedForeground(KTextEditor__Attribute* self, const QBrush* foreground);
QBrush* KTextEditor__Attribute_SelectedBackground(const KTextEditor__Attribute* self);
void KTextEditor__Attribute_SetSelectedBackground(KTextEditor__Attribute* self, const QBrush* brush);
bool KTextEditor__Attribute_BackgroundFillWhitespace(const KTextEditor__Attribute* self);
void KTextEditor__Attribute_SetBackgroundFillWhitespace(KTextEditor__Attribute* self, bool fillWhitespace);
void KTextEditor__Attribute_Clear(KTextEditor__Attribute* self);
bool KTextEditor__Attribute_HasAnyProperty(const KTextEditor__Attribute* self);
void KTextEditor__Attribute_OperatorAssign(KTextEditor__Attribute* self, const KTextEditor__Attribute* a);
void KTextEditor__Attribute_SetFontBold1(KTextEditor__Attribute* self, bool bold);
void KTextEditor__Attribute_Delete(KTextEditor__Attribute* self);

KTextEditor__AttributeBlock* KTextEditor__AttributeBlock_new(const KTextEditor__AttributeBlock* param1);
int KTextEditor__AttributeBlock_Start(const KTextEditor__AttributeBlock* self);
void KTextEditor__AttributeBlock_SetStart(KTextEditor__AttributeBlock* self, int start);
int KTextEditor__AttributeBlock_Length(const KTextEditor__AttributeBlock* self);
void KTextEditor__AttributeBlock_SetLength(KTextEditor__AttributeBlock* self, int length);
void KTextEditor__AttributeBlock_OperatorAssign(KTextEditor__AttributeBlock* self, const KTextEditor__AttributeBlock* param1);
void KTextEditor__AttributeBlock_Delete(KTextEditor__AttributeBlock* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
