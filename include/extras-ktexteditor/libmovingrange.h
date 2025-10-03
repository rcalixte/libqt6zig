#pragma once
#ifndef SRC_EXTRAS_KTEXTEDITORC_LIBMOVINGRANGE_H
#define SRC_EXTRAS_KTEXTEDITORC_LIBMOVINGRANGE_H

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
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KTextEditor__LineRange)
typedef KTextEditor::LineRange KTextEditor__LineRange;
#endif
typedef KTextEditor::MovingCursor KTextEditor__MovingCursor;
typedef KTextEditor::MovingRange KTextEditor__MovingRange;
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KTextEditor__MovingRangeFeedback)
typedef KTextEditor::MovingRangeFeedback KTextEditor__MovingRangeFeedback;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KTextEditor__Range)
typedef KTextEditor::Range KTextEditor__Range;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KTextEditor__View)
typedef KTextEditor::View KTextEditor__View;
#endif
#else
typedef struct KTextEditor__Cursor KTextEditor__Cursor;
typedef struct KTextEditor__Document KTextEditor__Document;
typedef struct KTextEditor__LineRange KTextEditor__LineRange;
typedef struct KTextEditor__MovingCursor KTextEditor__MovingCursor;
typedef struct KTextEditor__MovingRange KTextEditor__MovingRange;
typedef struct KTextEditor__MovingRangeFeedback KTextEditor__MovingRangeFeedback;
typedef struct KTextEditor__Range KTextEditor__Range;
typedef struct KTextEditor__View KTextEditor__View;
#endif

void KTextEditor__MovingRange_SetInsertBehaviors(KTextEditor__MovingRange* self, int insertBehaviors);
int KTextEditor__MovingRange_InsertBehaviors(const KTextEditor__MovingRange* self);
void KTextEditor__MovingRange_SetEmptyBehavior(KTextEditor__MovingRange* self, int emptyBehavior);
int KTextEditor__MovingRange_EmptyBehavior(const KTextEditor__MovingRange* self);
KTextEditor__Document* KTextEditor__MovingRange_Document(const KTextEditor__MovingRange* self);
void KTextEditor__MovingRange_SetRange(KTextEditor__MovingRange* self, KTextEditor__Range* range);
KTextEditor__MovingCursor* KTextEditor__MovingRange_Start(const KTextEditor__MovingRange* self);
KTextEditor__MovingCursor* KTextEditor__MovingRange_End(const KTextEditor__MovingRange* self);
KTextEditor__View* KTextEditor__MovingRange_View(const KTextEditor__MovingRange* self);
void KTextEditor__MovingRange_SetView(KTextEditor__MovingRange* self, KTextEditor__View* view);
bool KTextEditor__MovingRange_AttributeOnlyForViews(const KTextEditor__MovingRange* self);
void KTextEditor__MovingRange_SetAttributeOnlyForViews(KTextEditor__MovingRange* self, bool onlyForViews);
KTextEditor__MovingRangeFeedback* KTextEditor__MovingRange_Feedback(const KTextEditor__MovingRange* self);
void KTextEditor__MovingRange_SetFeedback(KTextEditor__MovingRange* self, KTextEditor__MovingRangeFeedback* feedback);
double KTextEditor__MovingRange_ZDepth(const KTextEditor__MovingRange* self);
void KTextEditor__MovingRange_SetZDepth(KTextEditor__MovingRange* self, double zDepth);
void KTextEditor__MovingRange_SetRange4(KTextEditor__MovingRange* self, KTextEditor__Cursor* start, KTextEditor__Cursor* end);
KTextEditor__Range* KTextEditor__MovingRange_ToRange(const KTextEditor__MovingRange* self);
KTextEditor__LineRange* KTextEditor__MovingRange_ToLineRange(const KTextEditor__MovingRange* self);
bool KTextEditor__MovingRange_IsEmpty(const KTextEditor__MovingRange* self);
bool KTextEditor__MovingRange_Contains(const KTextEditor__MovingRange* self, const KTextEditor__Range* range);
bool KTextEditor__MovingRange_Contains2(const KTextEditor__MovingRange* self, KTextEditor__Cursor* cursor);
bool KTextEditor__MovingRange_ContainsLine(const KTextEditor__MovingRange* self, int line);
bool KTextEditor__MovingRange_ContainsColumn(const KTextEditor__MovingRange* self, int column);
bool KTextEditor__MovingRange_Overlaps(const KTextEditor__MovingRange* self, const KTextEditor__Range* range);
bool KTextEditor__MovingRange_OverlapsLine(const KTextEditor__MovingRange* self, int line);
bool KTextEditor__MovingRange_OverlapsColumn(const KTextEditor__MovingRange* self, int column);
bool KTextEditor__MovingRange_OnSingleLine(const KTextEditor__MovingRange* self);
int KTextEditor__MovingRange_NumberOfLines(const KTextEditor__MovingRange* self);
void KTextEditor__MovingRange_Delete(KTextEditor__MovingRange* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
