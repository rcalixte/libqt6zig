#pragma once
#ifndef SRC_EXTRAS_KTEXTEDITORC_LIBCURSOR_H
#define SRC_EXTRAS_KTEXTEDITORC_LIBCURSOR_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
typedef KTextEditor::Cursor KTextEditor__Cursor;
#else
typedef struct KTextEditor KTextEditor;
typedef struct KTextEditor__Cursor KTextEditor__Cursor;
#endif

KTextEditor__Cursor* KTextEditor__Cursor_new(const KTextEditor__Cursor* other);
KTextEditor__Cursor* KTextEditor__Cursor_new2(KTextEditor__Cursor* other);
KTextEditor__Cursor* KTextEditor__Cursor_new3();
KTextEditor__Cursor* KTextEditor__Cursor_new4(int line, int column);
KTextEditor__Cursor* KTextEditor__Cursor_new5(const KTextEditor__Cursor* param1);
void KTextEditor__Cursor_CopyAssign(KTextEditor__Cursor* self, KTextEditor__Cursor* other);
void KTextEditor__Cursor_MoveAssign(KTextEditor__Cursor* self, KTextEditor__Cursor* other);
bool KTextEditor__Cursor_IsValid(const KTextEditor__Cursor* self);
KTextEditor__Cursor* KTextEditor__Cursor_Invalid();
KTextEditor__Cursor* KTextEditor__Cursor_Start();
libqt_string KTextEditor__Cursor_ToString(const KTextEditor__Cursor* self);
void KTextEditor__Cursor_SetPosition(KTextEditor__Cursor* self, KTextEditor__Cursor* position);
void KTextEditor__Cursor_SetPosition2(KTextEditor__Cursor* self, int line, int column);
int KTextEditor__Cursor_Line(const KTextEditor__Cursor* self);
void KTextEditor__Cursor_SetLine(KTextEditor__Cursor* self, int line);
int KTextEditor__Cursor_Column(const KTextEditor__Cursor* self);
void KTextEditor__Cursor_SetColumn(KTextEditor__Cursor* self, int column);
bool KTextEditor__Cursor_AtStartOfLine(const KTextEditor__Cursor* self);
bool KTextEditor__Cursor_AtStartOfDocument(const KTextEditor__Cursor* self);
void KTextEditor__Cursor_Position(const KTextEditor__Cursor* self, int* line, int* column);
void KTextEditor__Cursor_Delete(KTextEditor__Cursor* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
