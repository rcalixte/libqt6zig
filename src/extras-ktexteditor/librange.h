#pragma once
#ifndef SRC_EXTRAS_KTEXTEDITORC_LIBRANGE_H
#define SRC_EXTRAS_KTEXTEDITORC_LIBRANGE_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
typedef KTextEditor::Cursor KTextEditor__Cursor;
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KTextEditor__LineRange)
typedef KTextEditor::LineRange KTextEditor__LineRange;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KTextEditor__Range)
typedef KTextEditor::Range KTextEditor__Range;
#endif
#else
typedef struct KTextEditor KTextEditor;
typedef struct KTextEditor__Cursor KTextEditor__Cursor;
typedef struct KTextEditor__LineRange KTextEditor__LineRange;
typedef struct KTextEditor__Range KTextEditor__Range;
#endif

KTextEditor__Range* KTextEditor__Range_new(const KTextEditor__Range* other);
KTextEditor__Range* KTextEditor__Range_new2(KTextEditor__Range* other);
KTextEditor__Range* KTextEditor__Range_new3();
KTextEditor__Range* KTextEditor__Range_new4(KTextEditor__Cursor* start, KTextEditor__Cursor* end);
KTextEditor__Range* KTextEditor__Range_new5(KTextEditor__Cursor* start, int width);
KTextEditor__Range* KTextEditor__Range_new6(KTextEditor__Cursor* start, int endLine, int endColumn);
KTextEditor__Range* KTextEditor__Range_new7(int startLine, int startColumn, int endLine, int endColumn);
KTextEditor__Range* KTextEditor__Range_new8(const KTextEditor__Range* param1);
void KTextEditor__Range_CopyAssign(KTextEditor__Range* self, KTextEditor__Range* other);
void KTextEditor__Range_MoveAssign(KTextEditor__Range* self, KTextEditor__Range* other);
bool KTextEditor__Range_IsValid(const KTextEditor__Range* self);
KTextEditor__Range* KTextEditor__Range_Invalid();
libqt_string KTextEditor__Range_ToString(const KTextEditor__Range* self);
KTextEditor__Cursor* KTextEditor__Range_Start(const KTextEditor__Range* self);
KTextEditor__Cursor* KTextEditor__Range_End(const KTextEditor__Range* self);
KTextEditor__LineRange* KTextEditor__Range_ToLineRange(const KTextEditor__Range* self);
void KTextEditor__Range_SetBothLines(KTextEditor__Range* self, int line);
void KTextEditor__Range_SetBothColumns(KTextEditor__Range* self, int column);
void KTextEditor__Range_SetRange(KTextEditor__Range* self, KTextEditor__Range* range);
void KTextEditor__Range_SetRange2(KTextEditor__Range* self, KTextEditor__Cursor* start, KTextEditor__Cursor* end);
void KTextEditor__Range_SetStart(KTextEditor__Range* self, KTextEditor__Cursor* start);
void KTextEditor__Range_SetEnd(KTextEditor__Range* self, KTextEditor__Cursor* end);
bool KTextEditor__Range_ExpandToRange(KTextEditor__Range* self, KTextEditor__Range* range);
bool KTextEditor__Range_ConfineToRange(KTextEditor__Range* self, KTextEditor__Range* range);
bool KTextEditor__Range_OnSingleLine(const KTextEditor__Range* self);
int KTextEditor__Range_NumberOfLines(const KTextEditor__Range* self);
int KTextEditor__Range_ColumnWidth(const KTextEditor__Range* self);
bool KTextEditor__Range_IsEmpty(const KTextEditor__Range* self);
bool KTextEditor__Range_Contains(const KTextEditor__Range* self, KTextEditor__Range* range);
bool KTextEditor__Range_Contains2(const KTextEditor__Range* self, KTextEditor__Cursor* cursor);
bool KTextEditor__Range_ContainsLine(const KTextEditor__Range* self, int line);
bool KTextEditor__Range_ContainsColumn(const KTextEditor__Range* self, int column);
bool KTextEditor__Range_Overlaps(const KTextEditor__Range* self, KTextEditor__Range* range);
bool KTextEditor__Range_OverlapsLine(const KTextEditor__Range* self, int line);
bool KTextEditor__Range_OverlapsColumn(const KTextEditor__Range* self, int column);
bool KTextEditor__Range_BoundaryAtCursor(const KTextEditor__Range* self, KTextEditor__Cursor* cursor);
KTextEditor__Range* KTextEditor__Range_Intersect(const KTextEditor__Range* self, KTextEditor__Range* range);
KTextEditor__Range* KTextEditor__Range_Encompass(const KTextEditor__Range* self, KTextEditor__Range* range);
void KTextEditor__Range_Delete(KTextEditor__Range* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
