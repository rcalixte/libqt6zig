#pragma once
#ifndef SRC_EXTRAS_KTEXTEDITORC_LIBMOVINGCURSOR_H
#define SRC_EXTRAS_KTEXTEDITORC_LIBMOVINGCURSOR_H

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
typedef KTextEditor::MovingCursor KTextEditor__MovingCursor;
typedef KTextEditor::MovingRange KTextEditor__MovingRange;
#else
typedef struct KTextEditor__Cursor KTextEditor__Cursor;
typedef struct KTextEditor__Document KTextEditor__Document;
typedef struct KTextEditor__MovingCursor KTextEditor__MovingCursor;
typedef struct KTextEditor__MovingRange KTextEditor__MovingRange;
#endif

void KTextEditor__MovingCursor_SetInsertBehavior(KTextEditor__MovingCursor* self, int insertBehavior);
int KTextEditor__MovingCursor_InsertBehavior(const KTextEditor__MovingCursor* self);
KTextEditor__Document* KTextEditor__MovingCursor_Document(const KTextEditor__MovingCursor* self);
KTextEditor__MovingRange* KTextEditor__MovingCursor_Range(const KTextEditor__MovingCursor* self);
void KTextEditor__MovingCursor_SetPosition(KTextEditor__MovingCursor* self, KTextEditor__Cursor* position);
int KTextEditor__MovingCursor_Line(const KTextEditor__MovingCursor* self);
int KTextEditor__MovingCursor_Column(const KTextEditor__MovingCursor* self);
bool KTextEditor__MovingCursor_IsValid(const KTextEditor__MovingCursor* self);
bool KTextEditor__MovingCursor_IsValidTextPosition(const KTextEditor__MovingCursor* self);
void KTextEditor__MovingCursor_SetPosition2(KTextEditor__MovingCursor* self, int line, int column);
void KTextEditor__MovingCursor_SetLine(KTextEditor__MovingCursor* self, int line);
void KTextEditor__MovingCursor_SetColumn(KTextEditor__MovingCursor* self, int column);
bool KTextEditor__MovingCursor_AtStartOfLine(const KTextEditor__MovingCursor* self);
bool KTextEditor__MovingCursor_AtEndOfLine(const KTextEditor__MovingCursor* self);
bool KTextEditor__MovingCursor_AtStartOfDocument(const KTextEditor__MovingCursor* self);
bool KTextEditor__MovingCursor_AtEndOfDocument(const KTextEditor__MovingCursor* self);
bool KTextEditor__MovingCursor_GotoNextLine(KTextEditor__MovingCursor* self);
bool KTextEditor__MovingCursor_GotoPreviousLine(KTextEditor__MovingCursor* self);
bool KTextEditor__MovingCursor_Move(KTextEditor__MovingCursor* self, int chars);
KTextEditor__Cursor* KTextEditor__MovingCursor_ToCursor(const KTextEditor__MovingCursor* self);
bool KTextEditor__MovingCursor_Move2(KTextEditor__MovingCursor* self, int chars, int wrapBehavior);
void KTextEditor__MovingCursor_Delete(KTextEditor__MovingCursor* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
