#pragma once
#ifndef SRC_EXTRAS_KTEXTEDITORC_LIBMOVINGRANGEFEEDBACK_H
#define SRC_EXTRAS_KTEXTEDITORC_LIBMOVINGRANGEFEEDBACK_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
typedef KTextEditor::MovingRange KTextEditor__MovingRange;
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KTextEditor__MovingRangeFeedback)
typedef KTextEditor::MovingRangeFeedback KTextEditor__MovingRangeFeedback;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KTextEditor__View)
typedef KTextEditor::View KTextEditor__View;
#endif
#else
typedef struct KTextEditor__MovingRange KTextEditor__MovingRange;
typedef struct KTextEditor__MovingRangeFeedback KTextEditor__MovingRangeFeedback;
typedef struct KTextEditor__View KTextEditor__View;
#endif

KTextEditor__MovingRangeFeedback* KTextEditor__MovingRangeFeedback_new();
void KTextEditor__MovingRangeFeedback_RangeEmpty(KTextEditor__MovingRangeFeedback* self, KTextEditor__MovingRange* range);
void KTextEditor__MovingRangeFeedback_RangeInvalid(KTextEditor__MovingRangeFeedback* self, KTextEditor__MovingRange* range);
void KTextEditor__MovingRangeFeedback_MouseEnteredRange(KTextEditor__MovingRangeFeedback* self, KTextEditor__MovingRange* range, KTextEditor__View* view);
void KTextEditor__MovingRangeFeedback_MouseExitedRange(KTextEditor__MovingRangeFeedback* self, KTextEditor__MovingRange* range, KTextEditor__View* view);
void KTextEditor__MovingRangeFeedback_CaretEnteredRange(KTextEditor__MovingRangeFeedback* self, KTextEditor__MovingRange* range, KTextEditor__View* view);
void KTextEditor__MovingRangeFeedback_CaretExitedRange(KTextEditor__MovingRangeFeedback* self, KTextEditor__MovingRange* range, KTextEditor__View* view);
void KTextEditor__MovingRangeFeedback_OnRangeEmpty(KTextEditor__MovingRangeFeedback* self, intptr_t slot);
void KTextEditor__MovingRangeFeedback_QBaseRangeEmpty(KTextEditor__MovingRangeFeedback* self, KTextEditor__MovingRange* range);
void KTextEditor__MovingRangeFeedback_OnRangeInvalid(KTextEditor__MovingRangeFeedback* self, intptr_t slot);
void KTextEditor__MovingRangeFeedback_QBaseRangeInvalid(KTextEditor__MovingRangeFeedback* self, KTextEditor__MovingRange* range);
void KTextEditor__MovingRangeFeedback_OnMouseEnteredRange(KTextEditor__MovingRangeFeedback* self, intptr_t slot);
void KTextEditor__MovingRangeFeedback_QBaseMouseEnteredRange(KTextEditor__MovingRangeFeedback* self, KTextEditor__MovingRange* range, KTextEditor__View* view);
void KTextEditor__MovingRangeFeedback_OnMouseExitedRange(KTextEditor__MovingRangeFeedback* self, intptr_t slot);
void KTextEditor__MovingRangeFeedback_QBaseMouseExitedRange(KTextEditor__MovingRangeFeedback* self, KTextEditor__MovingRange* range, KTextEditor__View* view);
void KTextEditor__MovingRangeFeedback_OnCaretEnteredRange(KTextEditor__MovingRangeFeedback* self, intptr_t slot);
void KTextEditor__MovingRangeFeedback_QBaseCaretEnteredRange(KTextEditor__MovingRangeFeedback* self, KTextEditor__MovingRange* range, KTextEditor__View* view);
void KTextEditor__MovingRangeFeedback_OnCaretExitedRange(KTextEditor__MovingRangeFeedback* self, intptr_t slot);
void KTextEditor__MovingRangeFeedback_QBaseCaretExitedRange(KTextEditor__MovingRangeFeedback* self, KTextEditor__MovingRange* range, KTextEditor__View* view);
void KTextEditor__MovingRangeFeedback_Delete(KTextEditor__MovingRangeFeedback* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
