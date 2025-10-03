#pragma once
#ifndef SRC_EXTRAS_KTEXTEDITORC_LIBDOCUMENTCURSOR_H
#define SRC_EXTRAS_KTEXTEDITORC_LIBDOCUMENTCURSOR_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
typedef KTextEditor::Cursor KTextEditor__Cursor;
typedef KTextEditor::Document KTextEditor__Document;
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KTextEditor__DocumentCursor)
typedef KTextEditor::DocumentCursor KTextEditor__DocumentCursor;
#endif
#else
typedef struct KTextEditor__Cursor KTextEditor__Cursor;
typedef struct KTextEditor__Document KTextEditor__Document;
typedef struct KTextEditor__DocumentCursor KTextEditor__DocumentCursor;
#endif

KTextEditor__DocumentCursor* KTextEditor__DocumentCursor_new(KTextEditor__Document* document);
KTextEditor__DocumentCursor* KTextEditor__DocumentCursor_new2(KTextEditor__Document* document, KTextEditor__Cursor* position);
KTextEditor__DocumentCursor* KTextEditor__DocumentCursor_new3(KTextEditor__Document* document, int line, int column);
KTextEditor__DocumentCursor* KTextEditor__DocumentCursor_new4(const KTextEditor__DocumentCursor* other);
KTextEditor__Document* KTextEditor__DocumentCursor_Document(const KTextEditor__DocumentCursor* self);
void KTextEditor__DocumentCursor_SetPosition(KTextEditor__DocumentCursor* self, KTextEditor__Cursor* position);
int KTextEditor__DocumentCursor_Line(const KTextEditor__DocumentCursor* self);
int KTextEditor__DocumentCursor_Column(const KTextEditor__DocumentCursor* self);
bool KTextEditor__DocumentCursor_IsValid(const KTextEditor__DocumentCursor* self);
bool KTextEditor__DocumentCursor_IsValidTextPosition(const KTextEditor__DocumentCursor* self);
void KTextEditor__DocumentCursor_MakeValid(KTextEditor__DocumentCursor* self);
void KTextEditor__DocumentCursor_SetPosition2(KTextEditor__DocumentCursor* self, int line, int column);
void KTextEditor__DocumentCursor_SetLine(KTextEditor__DocumentCursor* self, int line);
void KTextEditor__DocumentCursor_SetColumn(KTextEditor__DocumentCursor* self, int column);
bool KTextEditor__DocumentCursor_AtStartOfLine(const KTextEditor__DocumentCursor* self);
bool KTextEditor__DocumentCursor_AtEndOfLine(const KTextEditor__DocumentCursor* self);
bool KTextEditor__DocumentCursor_AtStartOfDocument(const KTextEditor__DocumentCursor* self);
bool KTextEditor__DocumentCursor_AtEndOfDocument(const KTextEditor__DocumentCursor* self);
bool KTextEditor__DocumentCursor_GotoNextLine(KTextEditor__DocumentCursor* self);
bool KTextEditor__DocumentCursor_GotoPreviousLine(KTextEditor__DocumentCursor* self);
bool KTextEditor__DocumentCursor_Move(KTextEditor__DocumentCursor* self, int chars);
KTextEditor__Cursor* KTextEditor__DocumentCursor_ToCursor(const KTextEditor__DocumentCursor* self);
void KTextEditor__DocumentCursor_OperatorAssign(KTextEditor__DocumentCursor* self, const KTextEditor__DocumentCursor* other);
bool KTextEditor__DocumentCursor_Move2(KTextEditor__DocumentCursor* self, int chars, int wrapBehavior);
void KTextEditor__DocumentCursor_Delete(KTextEditor__DocumentCursor* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
