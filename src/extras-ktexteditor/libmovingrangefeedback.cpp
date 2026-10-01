#include <KTextEditor/MovingRange>
#define WORKAROUND_INNER_CLASS_DEFINITION_KTextEditor__MovingRangeFeedback
#define WORKAROUND_INNER_CLASS_DEFINITION_KTextEditor__View
#include <movingrangefeedback.h>
#include "libmovingrangefeedback.h"
#include "libmovingrangefeedback.hxx"

KTextEditor__MovingRangeFeedback* KTextEditor__MovingRangeFeedback_new() {
    return new VirtualKTextEditorMovingRangeFeedback();
}

void KTextEditor__MovingRangeFeedback_RangeEmpty(KTextEditor__MovingRangeFeedback* self, KTextEditor__MovingRange* range) {
    self->rangeEmpty(range);
}

void KTextEditor__MovingRangeFeedback_RangeInvalid(KTextEditor__MovingRangeFeedback* self, KTextEditor__MovingRange* range) {
    self->rangeInvalid(range);
}

void KTextEditor__MovingRangeFeedback_MouseEnteredRange(KTextEditor__MovingRangeFeedback* self, KTextEditor__MovingRange* range, KTextEditor__View* view) {
    self->mouseEnteredRange(range, view);
}

void KTextEditor__MovingRangeFeedback_MouseExitedRange(KTextEditor__MovingRangeFeedback* self, KTextEditor__MovingRange* range, KTextEditor__View* view) {
    self->mouseExitedRange(range, view);
}

void KTextEditor__MovingRangeFeedback_CaretEnteredRange(KTextEditor__MovingRangeFeedback* self, KTextEditor__MovingRange* range, KTextEditor__View* view) {
    self->caretEnteredRange(range, view);
}

void KTextEditor__MovingRangeFeedback_CaretExitedRange(KTextEditor__MovingRangeFeedback* self, KTextEditor__MovingRange* range, KTextEditor__View* view) {
    self->caretExitedRange(range, view);
}

// Base class handler implementation
void KTextEditor__MovingRangeFeedback_SuperRangeEmpty(KTextEditor__MovingRangeFeedback* self, KTextEditor__MovingRange* range) {
    self->KTextEditor::MovingRangeFeedback::rangeEmpty(range);
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__MovingRangeFeedback_OnRangeEmpty(KTextEditor__MovingRangeFeedback* self, intptr_t slot) {
    if (auto* vktexteditormovingrangefeedback = dynamic_cast<VirtualKTextEditorMovingRangeFeedback*>(self))
        vktexteditormovingrangefeedback->ktexteditor__movingrangefeedback_rangeempty_callback = reinterpret_cast<VirtualKTextEditorMovingRangeFeedback::KTextEditor__MovingRangeFeedback_RangeEmpty_Callback>(slot);
}

// Base class handler implementation
void KTextEditor__MovingRangeFeedback_SuperRangeInvalid(KTextEditor__MovingRangeFeedback* self, KTextEditor__MovingRange* range) {
    self->KTextEditor::MovingRangeFeedback::rangeInvalid(range);
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__MovingRangeFeedback_OnRangeInvalid(KTextEditor__MovingRangeFeedback* self, intptr_t slot) {
    if (auto* vktexteditormovingrangefeedback = dynamic_cast<VirtualKTextEditorMovingRangeFeedback*>(self))
        vktexteditormovingrangefeedback->ktexteditor__movingrangefeedback_rangeinvalid_callback = reinterpret_cast<VirtualKTextEditorMovingRangeFeedback::KTextEditor__MovingRangeFeedback_RangeInvalid_Callback>(slot);
}

// Base class handler implementation
void KTextEditor__MovingRangeFeedback_SuperMouseEnteredRange(KTextEditor__MovingRangeFeedback* self, KTextEditor__MovingRange* range, KTextEditor__View* view) {
    self->KTextEditor::MovingRangeFeedback::mouseEnteredRange(range, view);
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__MovingRangeFeedback_OnMouseEnteredRange(KTextEditor__MovingRangeFeedback* self, intptr_t slot) {
    if (auto* vktexteditormovingrangefeedback = dynamic_cast<VirtualKTextEditorMovingRangeFeedback*>(self))
        vktexteditormovingrangefeedback->ktexteditor__movingrangefeedback_mouseenteredrange_callback = reinterpret_cast<VirtualKTextEditorMovingRangeFeedback::KTextEditor__MovingRangeFeedback_MouseEnteredRange_Callback>(slot);
}

// Base class handler implementation
void KTextEditor__MovingRangeFeedback_SuperMouseExitedRange(KTextEditor__MovingRangeFeedback* self, KTextEditor__MovingRange* range, KTextEditor__View* view) {
    self->KTextEditor::MovingRangeFeedback::mouseExitedRange(range, view);
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__MovingRangeFeedback_OnMouseExitedRange(KTextEditor__MovingRangeFeedback* self, intptr_t slot) {
    if (auto* vktexteditormovingrangefeedback = dynamic_cast<VirtualKTextEditorMovingRangeFeedback*>(self))
        vktexteditormovingrangefeedback->ktexteditor__movingrangefeedback_mouseexitedrange_callback = reinterpret_cast<VirtualKTextEditorMovingRangeFeedback::KTextEditor__MovingRangeFeedback_MouseExitedRange_Callback>(slot);
}

// Base class handler implementation
void KTextEditor__MovingRangeFeedback_SuperCaretEnteredRange(KTextEditor__MovingRangeFeedback* self, KTextEditor__MovingRange* range, KTextEditor__View* view) {
    self->KTextEditor::MovingRangeFeedback::caretEnteredRange(range, view);
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__MovingRangeFeedback_OnCaretEnteredRange(KTextEditor__MovingRangeFeedback* self, intptr_t slot) {
    if (auto* vktexteditormovingrangefeedback = dynamic_cast<VirtualKTextEditorMovingRangeFeedback*>(self))
        vktexteditormovingrangefeedback->ktexteditor__movingrangefeedback_caretenteredrange_callback = reinterpret_cast<VirtualKTextEditorMovingRangeFeedback::KTextEditor__MovingRangeFeedback_CaretEnteredRange_Callback>(slot);
}

// Base class handler implementation
void KTextEditor__MovingRangeFeedback_SuperCaretExitedRange(KTextEditor__MovingRangeFeedback* self, KTextEditor__MovingRange* range, KTextEditor__View* view) {
    self->KTextEditor::MovingRangeFeedback::caretExitedRange(range, view);
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__MovingRangeFeedback_OnCaretExitedRange(KTextEditor__MovingRangeFeedback* self, intptr_t slot) {
    if (auto* vktexteditormovingrangefeedback = dynamic_cast<VirtualKTextEditorMovingRangeFeedback*>(self))
        vktexteditormovingrangefeedback->ktexteditor__movingrangefeedback_caretexitedrange_callback = reinterpret_cast<VirtualKTextEditorMovingRangeFeedback::KTextEditor__MovingRangeFeedback_CaretExitedRange_Callback>(slot);
}

void KTextEditor__MovingRangeFeedback_Delete(KTextEditor__MovingRangeFeedback* self) {
    delete self;
}
