#pragma once
#ifndef SRC_EXTRAS_KTEXTEDITORC_LIBLINERANGE_H
#define SRC_EXTRAS_KTEXTEDITORC_LIBLINERANGE_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KTextEditor__LineRange)
typedef KTextEditor::LineRange KTextEditor__LineRange;
#endif
#else
typedef struct KTextEditor KTextEditor;
typedef struct KTextEditor__LineRange KTextEditor__LineRange;
#endif

KTextEditor__LineRange* KTextEditor__LineRange_new(const KTextEditor__LineRange* other);
KTextEditor__LineRange* KTextEditor__LineRange_new2(KTextEditor__LineRange* other);
KTextEditor__LineRange* KTextEditor__LineRange_new3();
KTextEditor__LineRange* KTextEditor__LineRange_new4(int start, int end);
KTextEditor__LineRange* KTextEditor__LineRange_new5(const KTextEditor__LineRange* param1);
void KTextEditor__LineRange_CopyAssign(KTextEditor__LineRange* self, KTextEditor__LineRange* other);
void KTextEditor__LineRange_MoveAssign(KTextEditor__LineRange* self, KTextEditor__LineRange* other);
bool KTextEditor__LineRange_IsValid(const KTextEditor__LineRange* self);
KTextEditor__LineRange* KTextEditor__LineRange_Invalid();
libqt_string KTextEditor__LineRange_ToString(const KTextEditor__LineRange* self);
int KTextEditor__LineRange_Start(const KTextEditor__LineRange* self);
int KTextEditor__LineRange_End(const KTextEditor__LineRange* self);
void KTextEditor__LineRange_SetRange(KTextEditor__LineRange* self, KTextEditor__LineRange* range);
void KTextEditor__LineRange_SetRange2(KTextEditor__LineRange* self, int start, int end);
void KTextEditor__LineRange_SetBothLines(KTextEditor__LineRange* self, int line);
void KTextEditor__LineRange_SetStart(KTextEditor__LineRange* self, int start);
void KTextEditor__LineRange_SetEnd(KTextEditor__LineRange* self, int end);
bool KTextEditor__LineRange_ExpandToRange(KTextEditor__LineRange* self, KTextEditor__LineRange* range);
bool KTextEditor__LineRange_ConfineToRange(KTextEditor__LineRange* self, KTextEditor__LineRange* range);
bool KTextEditor__LineRange_OnSingleLine(const KTextEditor__LineRange* self);
int KTextEditor__LineRange_NumberOfLines(const KTextEditor__LineRange* self);
bool KTextEditor__LineRange_Contains(const KTextEditor__LineRange* self, KTextEditor__LineRange* range);
bool KTextEditor__LineRange_ContainsLine(const KTextEditor__LineRange* self, int line);
bool KTextEditor__LineRange_Overlaps(const KTextEditor__LineRange* self, KTextEditor__LineRange* range);
bool KTextEditor__LineRange_OverlapsLine(const KTextEditor__LineRange* self, int line);
KTextEditor__LineRange* KTextEditor__LineRange_Intersect(const KTextEditor__LineRange* self, KTextEditor__LineRange* range);
KTextEditor__LineRange* KTextEditor__LineRange_Encompass(const KTextEditor__LineRange* self, KTextEditor__LineRange* range);
void KTextEditor__LineRange_Delete(KTextEditor__LineRange* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
