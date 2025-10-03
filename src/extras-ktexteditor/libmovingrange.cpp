#include <KTextEditor/Cursor>
#include <KTextEditor/Document>
#define WORKAROUND_INNER_CLASS_DEFINITION_KTextEditor__LineRange
#include <KTextEditor/MovingCursor>
#include <KTextEditor/MovingRange>
#define WORKAROUND_INNER_CLASS_DEFINITION_KTextEditor__MovingRangeFeedback
#define WORKAROUND_INNER_CLASS_DEFINITION_KTextEditor__Range
#define WORKAROUND_INNER_CLASS_DEFINITION_KTextEditor__View
#include <movingrange.h>
#include "libmovingrange.h"
#include "libmovingrange.hxx"

void KTextEditor__MovingRange_SetInsertBehaviors(KTextEditor__MovingRange* self, int insertBehaviors) {
    self->setInsertBehaviors(static_cast<KTextEditor::MovingRange::InsertBehaviors>(insertBehaviors));
}

int KTextEditor__MovingRange_InsertBehaviors(const KTextEditor__MovingRange* self) {
    return static_cast<int>(self->insertBehaviors());
}

void KTextEditor__MovingRange_SetEmptyBehavior(KTextEditor__MovingRange* self, int emptyBehavior) {
    self->setEmptyBehavior(static_cast<KTextEditor::MovingRange::EmptyBehavior>(emptyBehavior));
}

int KTextEditor__MovingRange_EmptyBehavior(const KTextEditor__MovingRange* self) {
    return static_cast<int>(self->emptyBehavior());
}

KTextEditor__Document* KTextEditor__MovingRange_Document(const KTextEditor__MovingRange* self) {
    return self->document();
}

void KTextEditor__MovingRange_SetRange(KTextEditor__MovingRange* self, KTextEditor__Range* range) {
    self->setRange(*range);
}

KTextEditor__MovingCursor* KTextEditor__MovingRange_Start(const KTextEditor__MovingRange* self) {
    const KTextEditor::MovingCursor& _ret = self->start();
    // Cast returned reference into pointer
    return const_cast<KTextEditor::MovingCursor*>(&_ret);
}

KTextEditor__MovingCursor* KTextEditor__MovingRange_End(const KTextEditor__MovingRange* self) {
    const KTextEditor::MovingCursor& _ret = self->end();
    // Cast returned reference into pointer
    return const_cast<KTextEditor::MovingCursor*>(&_ret);
}

KTextEditor__View* KTextEditor__MovingRange_View(const KTextEditor__MovingRange* self) {
    return self->view();
}

void KTextEditor__MovingRange_SetView(KTextEditor__MovingRange* self, KTextEditor__View* view) {
    self->setView(view);
}

bool KTextEditor__MovingRange_AttributeOnlyForViews(const KTextEditor__MovingRange* self) {
    return self->attributeOnlyForViews();
}

void KTextEditor__MovingRange_SetAttributeOnlyForViews(KTextEditor__MovingRange* self, bool onlyForViews) {
    self->setAttributeOnlyForViews(onlyForViews);
}

KTextEditor__MovingRangeFeedback* KTextEditor__MovingRange_Feedback(const KTextEditor__MovingRange* self) {
    return self->feedback();
}

void KTextEditor__MovingRange_SetFeedback(KTextEditor__MovingRange* self, KTextEditor__MovingRangeFeedback* feedback) {
    self->setFeedback(feedback);
}

double KTextEditor__MovingRange_ZDepth(const KTextEditor__MovingRange* self) {
    return static_cast<double>(self->zDepth());
}

void KTextEditor__MovingRange_SetZDepth(KTextEditor__MovingRange* self, double zDepth) {
    self->setZDepth(static_cast<qreal>(zDepth));
}

void KTextEditor__MovingRange_SetRange4(KTextEditor__MovingRange* self, KTextEditor__Cursor* start, KTextEditor__Cursor* end) {
    self->setRange(*start, *end);
}

KTextEditor__Range* KTextEditor__MovingRange_ToRange(const KTextEditor__MovingRange* self) {
    return new KTextEditor::Range(self->toRange());
}

KTextEditor__LineRange* KTextEditor__MovingRange_ToLineRange(const KTextEditor__MovingRange* self) {
    return new KTextEditor::LineRange(self->toLineRange());
}

bool KTextEditor__MovingRange_IsEmpty(const KTextEditor__MovingRange* self) {
    return self->isEmpty();
}

bool KTextEditor__MovingRange_Contains(const KTextEditor__MovingRange* self, const KTextEditor__Range* range) {
    return self->contains(*range);
}

bool KTextEditor__MovingRange_Contains2(const KTextEditor__MovingRange* self, KTextEditor__Cursor* cursor) {
    return self->contains(*cursor);
}

bool KTextEditor__MovingRange_ContainsLine(const KTextEditor__MovingRange* self, int line) {
    return self->containsLine(static_cast<int>(line));
}

bool KTextEditor__MovingRange_ContainsColumn(const KTextEditor__MovingRange* self, int column) {
    return self->containsColumn(static_cast<int>(column));
}

bool KTextEditor__MovingRange_Overlaps(const KTextEditor__MovingRange* self, const KTextEditor__Range* range) {
    return self->overlaps(*range);
}

bool KTextEditor__MovingRange_OverlapsLine(const KTextEditor__MovingRange* self, int line) {
    return self->overlapsLine(static_cast<int>(line));
}

bool KTextEditor__MovingRange_OverlapsColumn(const KTextEditor__MovingRange* self, int column) {
    return self->overlapsColumn(static_cast<int>(column));
}

bool KTextEditor__MovingRange_OnSingleLine(const KTextEditor__MovingRange* self) {
    return self->onSingleLine();
}

int KTextEditor__MovingRange_NumberOfLines(const KTextEditor__MovingRange* self) {
    return self->numberOfLines();
}

void KTextEditor__MovingRange_Delete(KTextEditor__MovingRange* self) {
    delete self;
}
