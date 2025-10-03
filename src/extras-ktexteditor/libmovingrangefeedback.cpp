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
    auto* vktexteditor__movingrangefeedback = dynamic_cast<VirtualKTextEditorMovingRangeFeedback*>(self);
    if (vktexteditor__movingrangefeedback && vktexteditor__movingrangefeedback->isVirtualKTextEditorMovingRangeFeedback) {
        self->rangeEmpty(range);
    } else {
        ((VirtualKTextEditorMovingRangeFeedback*)self)->rangeEmpty(range);
    }
}

void KTextEditor__MovingRangeFeedback_RangeInvalid(KTextEditor__MovingRangeFeedback* self, KTextEditor__MovingRange* range) {
    auto* vktexteditor__movingrangefeedback = dynamic_cast<VirtualKTextEditorMovingRangeFeedback*>(self);
    if (vktexteditor__movingrangefeedback && vktexteditor__movingrangefeedback->isVirtualKTextEditorMovingRangeFeedback) {
        self->rangeInvalid(range);
    } else {
        ((VirtualKTextEditorMovingRangeFeedback*)self)->rangeInvalid(range);
    }
}

void KTextEditor__MovingRangeFeedback_MouseEnteredRange(KTextEditor__MovingRangeFeedback* self, KTextEditor__MovingRange* range, KTextEditor__View* view) {
    auto* vktexteditor__movingrangefeedback = dynamic_cast<VirtualKTextEditorMovingRangeFeedback*>(self);
    if (vktexteditor__movingrangefeedback && vktexteditor__movingrangefeedback->isVirtualKTextEditorMovingRangeFeedback) {
        self->mouseEnteredRange(range, view);
    } else {
        ((VirtualKTextEditorMovingRangeFeedback*)self)->mouseEnteredRange(range, view);
    }
}

void KTextEditor__MovingRangeFeedback_MouseExitedRange(KTextEditor__MovingRangeFeedback* self, KTextEditor__MovingRange* range, KTextEditor__View* view) {
    auto* vktexteditor__movingrangefeedback = dynamic_cast<VirtualKTextEditorMovingRangeFeedback*>(self);
    if (vktexteditor__movingrangefeedback && vktexteditor__movingrangefeedback->isVirtualKTextEditorMovingRangeFeedback) {
        self->mouseExitedRange(range, view);
    } else {
        ((VirtualKTextEditorMovingRangeFeedback*)self)->mouseExitedRange(range, view);
    }
}

void KTextEditor__MovingRangeFeedback_CaretEnteredRange(KTextEditor__MovingRangeFeedback* self, KTextEditor__MovingRange* range, KTextEditor__View* view) {
    auto* vktexteditor__movingrangefeedback = dynamic_cast<VirtualKTextEditorMovingRangeFeedback*>(self);
    if (vktexteditor__movingrangefeedback && vktexteditor__movingrangefeedback->isVirtualKTextEditorMovingRangeFeedback) {
        self->caretEnteredRange(range, view);
    } else {
        ((VirtualKTextEditorMovingRangeFeedback*)self)->caretEnteredRange(range, view);
    }
}

void KTextEditor__MovingRangeFeedback_CaretExitedRange(KTextEditor__MovingRangeFeedback* self, KTextEditor__MovingRange* range, KTextEditor__View* view) {
    auto* vktexteditor__movingrangefeedback = dynamic_cast<VirtualKTextEditorMovingRangeFeedback*>(self);
    if (vktexteditor__movingrangefeedback && vktexteditor__movingrangefeedback->isVirtualKTextEditorMovingRangeFeedback) {
        self->caretExitedRange(range, view);
    } else {
        ((VirtualKTextEditorMovingRangeFeedback*)self)->caretExitedRange(range, view);
    }
}

// Base class handler implementation
void KTextEditor__MovingRangeFeedback_QBaseRangeEmpty(KTextEditor__MovingRangeFeedback* self, KTextEditor__MovingRange* range) {
    auto* vktexteditormovingrangefeedback = dynamic_cast<VirtualKTextEditorMovingRangeFeedback*>(self);
    if (vktexteditormovingrangefeedback && vktexteditormovingrangefeedback->isVirtualKTextEditorMovingRangeFeedback) {
        vktexteditormovingrangefeedback->setKTextEditor__MovingRangeFeedback_RangeEmpty_IsBase(true);
        vktexteditormovingrangefeedback->rangeEmpty(range);
    } else {
        self->KTextEditor::MovingRangeFeedback::rangeEmpty(range);
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__MovingRangeFeedback_OnRangeEmpty(KTextEditor__MovingRangeFeedback* self, intptr_t slot) {
    auto* vktexteditormovingrangefeedback = dynamic_cast<VirtualKTextEditorMovingRangeFeedback*>(self);
    if (vktexteditormovingrangefeedback && vktexteditormovingrangefeedback->isVirtualKTextEditorMovingRangeFeedback) {
        vktexteditormovingrangefeedback->setKTextEditor__MovingRangeFeedback_RangeEmpty_Callback(reinterpret_cast<VirtualKTextEditorMovingRangeFeedback::KTextEditor__MovingRangeFeedback_RangeEmpty_Callback>(slot));
    }
}

// Base class handler implementation
void KTextEditor__MovingRangeFeedback_QBaseRangeInvalid(KTextEditor__MovingRangeFeedback* self, KTextEditor__MovingRange* range) {
    auto* vktexteditormovingrangefeedback = dynamic_cast<VirtualKTextEditorMovingRangeFeedback*>(self);
    if (vktexteditormovingrangefeedback && vktexteditormovingrangefeedback->isVirtualKTextEditorMovingRangeFeedback) {
        vktexteditormovingrangefeedback->setKTextEditor__MovingRangeFeedback_RangeInvalid_IsBase(true);
        vktexteditormovingrangefeedback->rangeInvalid(range);
    } else {
        self->KTextEditor::MovingRangeFeedback::rangeInvalid(range);
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__MovingRangeFeedback_OnRangeInvalid(KTextEditor__MovingRangeFeedback* self, intptr_t slot) {
    auto* vktexteditormovingrangefeedback = dynamic_cast<VirtualKTextEditorMovingRangeFeedback*>(self);
    if (vktexteditormovingrangefeedback && vktexteditormovingrangefeedback->isVirtualKTextEditorMovingRangeFeedback) {
        vktexteditormovingrangefeedback->setKTextEditor__MovingRangeFeedback_RangeInvalid_Callback(reinterpret_cast<VirtualKTextEditorMovingRangeFeedback::KTextEditor__MovingRangeFeedback_RangeInvalid_Callback>(slot));
    }
}

// Base class handler implementation
void KTextEditor__MovingRangeFeedback_QBaseMouseEnteredRange(KTextEditor__MovingRangeFeedback* self, KTextEditor__MovingRange* range, KTextEditor__View* view) {
    auto* vktexteditormovingrangefeedback = dynamic_cast<VirtualKTextEditorMovingRangeFeedback*>(self);
    if (vktexteditormovingrangefeedback && vktexteditormovingrangefeedback->isVirtualKTextEditorMovingRangeFeedback) {
        vktexteditormovingrangefeedback->setKTextEditor__MovingRangeFeedback_MouseEnteredRange_IsBase(true);
        vktexteditormovingrangefeedback->mouseEnteredRange(range, view);
    } else {
        self->KTextEditor::MovingRangeFeedback::mouseEnteredRange(range, view);
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__MovingRangeFeedback_OnMouseEnteredRange(KTextEditor__MovingRangeFeedback* self, intptr_t slot) {
    auto* vktexteditormovingrangefeedback = dynamic_cast<VirtualKTextEditorMovingRangeFeedback*>(self);
    if (vktexteditormovingrangefeedback && vktexteditormovingrangefeedback->isVirtualKTextEditorMovingRangeFeedback) {
        vktexteditormovingrangefeedback->setKTextEditor__MovingRangeFeedback_MouseEnteredRange_Callback(reinterpret_cast<VirtualKTextEditorMovingRangeFeedback::KTextEditor__MovingRangeFeedback_MouseEnteredRange_Callback>(slot));
    }
}

// Base class handler implementation
void KTextEditor__MovingRangeFeedback_QBaseMouseExitedRange(KTextEditor__MovingRangeFeedback* self, KTextEditor__MovingRange* range, KTextEditor__View* view) {
    auto* vktexteditormovingrangefeedback = dynamic_cast<VirtualKTextEditorMovingRangeFeedback*>(self);
    if (vktexteditormovingrangefeedback && vktexteditormovingrangefeedback->isVirtualKTextEditorMovingRangeFeedback) {
        vktexteditormovingrangefeedback->setKTextEditor__MovingRangeFeedback_MouseExitedRange_IsBase(true);
        vktexteditormovingrangefeedback->mouseExitedRange(range, view);
    } else {
        self->KTextEditor::MovingRangeFeedback::mouseExitedRange(range, view);
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__MovingRangeFeedback_OnMouseExitedRange(KTextEditor__MovingRangeFeedback* self, intptr_t slot) {
    auto* vktexteditormovingrangefeedback = dynamic_cast<VirtualKTextEditorMovingRangeFeedback*>(self);
    if (vktexteditormovingrangefeedback && vktexteditormovingrangefeedback->isVirtualKTextEditorMovingRangeFeedback) {
        vktexteditormovingrangefeedback->setKTextEditor__MovingRangeFeedback_MouseExitedRange_Callback(reinterpret_cast<VirtualKTextEditorMovingRangeFeedback::KTextEditor__MovingRangeFeedback_MouseExitedRange_Callback>(slot));
    }
}

// Base class handler implementation
void KTextEditor__MovingRangeFeedback_QBaseCaretEnteredRange(KTextEditor__MovingRangeFeedback* self, KTextEditor__MovingRange* range, KTextEditor__View* view) {
    auto* vktexteditormovingrangefeedback = dynamic_cast<VirtualKTextEditorMovingRangeFeedback*>(self);
    if (vktexteditormovingrangefeedback && vktexteditormovingrangefeedback->isVirtualKTextEditorMovingRangeFeedback) {
        vktexteditormovingrangefeedback->setKTextEditor__MovingRangeFeedback_CaretEnteredRange_IsBase(true);
        vktexteditormovingrangefeedback->caretEnteredRange(range, view);
    } else {
        self->KTextEditor::MovingRangeFeedback::caretEnteredRange(range, view);
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__MovingRangeFeedback_OnCaretEnteredRange(KTextEditor__MovingRangeFeedback* self, intptr_t slot) {
    auto* vktexteditormovingrangefeedback = dynamic_cast<VirtualKTextEditorMovingRangeFeedback*>(self);
    if (vktexteditormovingrangefeedback && vktexteditormovingrangefeedback->isVirtualKTextEditorMovingRangeFeedback) {
        vktexteditormovingrangefeedback->setKTextEditor__MovingRangeFeedback_CaretEnteredRange_Callback(reinterpret_cast<VirtualKTextEditorMovingRangeFeedback::KTextEditor__MovingRangeFeedback_CaretEnteredRange_Callback>(slot));
    }
}

// Base class handler implementation
void KTextEditor__MovingRangeFeedback_QBaseCaretExitedRange(KTextEditor__MovingRangeFeedback* self, KTextEditor__MovingRange* range, KTextEditor__View* view) {
    auto* vktexteditormovingrangefeedback = dynamic_cast<VirtualKTextEditorMovingRangeFeedback*>(self);
    if (vktexteditormovingrangefeedback && vktexteditormovingrangefeedback->isVirtualKTextEditorMovingRangeFeedback) {
        vktexteditormovingrangefeedback->setKTextEditor__MovingRangeFeedback_CaretExitedRange_IsBase(true);
        vktexteditormovingrangefeedback->caretExitedRange(range, view);
    } else {
        self->KTextEditor::MovingRangeFeedback::caretExitedRange(range, view);
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__MovingRangeFeedback_OnCaretExitedRange(KTextEditor__MovingRangeFeedback* self, intptr_t slot) {
    auto* vktexteditormovingrangefeedback = dynamic_cast<VirtualKTextEditorMovingRangeFeedback*>(self);
    if (vktexteditormovingrangefeedback && vktexteditormovingrangefeedback->isVirtualKTextEditorMovingRangeFeedback) {
        vktexteditormovingrangefeedback->setKTextEditor__MovingRangeFeedback_CaretExitedRange_Callback(reinterpret_cast<VirtualKTextEditorMovingRangeFeedback::KTextEditor__MovingRangeFeedback_CaretExitedRange_Callback>(slot));
    }
}

void KTextEditor__MovingRangeFeedback_Delete(KTextEditor__MovingRangeFeedback* self) {
    delete self;
}
