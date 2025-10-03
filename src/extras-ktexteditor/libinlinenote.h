#pragma once
#ifndef SRC_EXTRAS_KTEXTEDITORC_LIBINLINENOTE_H
#define SRC_EXTRAS_KTEXTEDITORC_LIBINLINENOTE_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
typedef KTextEditor::Cursor KTextEditor__Cursor;
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KTextEditor__InlineNote)
typedef KTextEditor::InlineNote KTextEditor__InlineNote;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KTextEditor__InlineNoteProvider)
typedef KTextEditor::InlineNoteProvider KTextEditor__InlineNoteProvider;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KTextEditor__View)
typedef KTextEditor::View KTextEditor__View;
#endif
#else
typedef struct KTextEditor__Cursor KTextEditor__Cursor;
typedef struct KTextEditor__InlineNote KTextEditor__InlineNote;
typedef struct KTextEditor__InlineNoteProvider KTextEditor__InlineNoteProvider;
typedef struct KTextEditor__View KTextEditor__View;
typedef struct QFont QFont;
#endif

KTextEditor__InlineNote* KTextEditor__InlineNote_new(const KTextEditor__InlineNote* other);
KTextEditor__InlineNote* KTextEditor__InlineNote_new2(KTextEditor__InlineNote* other);
double KTextEditor__InlineNote_Width(const KTextEditor__InlineNote* self);
KTextEditor__InlineNoteProvider* KTextEditor__InlineNote_Provider(const KTextEditor__InlineNote* self);
KTextEditor__View* KTextEditor__InlineNote_View(const KTextEditor__InlineNote* self);
KTextEditor__Cursor* KTextEditor__InlineNote_Position(const KTextEditor__InlineNote* self);
int KTextEditor__InlineNote_Index(const KTextEditor__InlineNote* self);
bool KTextEditor__InlineNote_UnderMouse(const KTextEditor__InlineNote* self);
QFont* KTextEditor__InlineNote_Font(const KTextEditor__InlineNote* self);
int KTextEditor__InlineNote_LineHeight(const KTextEditor__InlineNote* self);
void KTextEditor__InlineNote_Delete(KTextEditor__InlineNote* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
