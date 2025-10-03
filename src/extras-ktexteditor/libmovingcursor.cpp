#include <KTextEditor/Cursor>
#include <KTextEditor/Document>
#include <KTextEditor/MovingCursor>
#include <KTextEditor/MovingRange>
#include <movingcursor.h>
#include "libmovingcursor.h"
#include "libmovingcursor.hxx"

void KTextEditor__MovingCursor_SetInsertBehavior(KTextEditor__MovingCursor* self, int insertBehavior) {
    self->setInsertBehavior(static_cast<KTextEditor::MovingCursor::InsertBehavior>(insertBehavior));
}

int KTextEditor__MovingCursor_InsertBehavior(const KTextEditor__MovingCursor* self) {
    return static_cast<int>(self->insertBehavior());
}

KTextEditor__Document* KTextEditor__MovingCursor_Document(const KTextEditor__MovingCursor* self) {
    return self->document();
}

KTextEditor__MovingRange* KTextEditor__MovingCursor_Range(const KTextEditor__MovingCursor* self) {
    return self->range();
}

void KTextEditor__MovingCursor_SetPosition(KTextEditor__MovingCursor* self, KTextEditor__Cursor* position) {
    self->setPosition(*position);
}

int KTextEditor__MovingCursor_Line(const KTextEditor__MovingCursor* self) {
    return self->line();
}

int KTextEditor__MovingCursor_Column(const KTextEditor__MovingCursor* self) {
    return self->column();
}

bool KTextEditor__MovingCursor_IsValid(const KTextEditor__MovingCursor* self) {
    return self->isValid();
}

bool KTextEditor__MovingCursor_IsValidTextPosition(const KTextEditor__MovingCursor* self) {
    return self->isValidTextPosition();
}

void KTextEditor__MovingCursor_SetPosition2(KTextEditor__MovingCursor* self, int line, int column) {
    self->setPosition(static_cast<int>(line), static_cast<int>(column));
}

void KTextEditor__MovingCursor_SetLine(KTextEditor__MovingCursor* self, int line) {
    self->setLine(static_cast<int>(line));
}

void KTextEditor__MovingCursor_SetColumn(KTextEditor__MovingCursor* self, int column) {
    self->setColumn(static_cast<int>(column));
}

bool KTextEditor__MovingCursor_AtStartOfLine(const KTextEditor__MovingCursor* self) {
    return self->atStartOfLine();
}

bool KTextEditor__MovingCursor_AtEndOfLine(const KTextEditor__MovingCursor* self) {
    return self->atEndOfLine();
}

bool KTextEditor__MovingCursor_AtStartOfDocument(const KTextEditor__MovingCursor* self) {
    return self->atStartOfDocument();
}

bool KTextEditor__MovingCursor_AtEndOfDocument(const KTextEditor__MovingCursor* self) {
    return self->atEndOfDocument();
}

bool KTextEditor__MovingCursor_GotoNextLine(KTextEditor__MovingCursor* self) {
    return self->gotoNextLine();
}

bool KTextEditor__MovingCursor_GotoPreviousLine(KTextEditor__MovingCursor* self) {
    return self->gotoPreviousLine();
}

bool KTextEditor__MovingCursor_Move(KTextEditor__MovingCursor* self, int chars) {
    return self->move(static_cast<int>(chars));
}

KTextEditor__Cursor* KTextEditor__MovingCursor_ToCursor(const KTextEditor__MovingCursor* self) {
    return new KTextEditor::Cursor(self->toCursor());
}

bool KTextEditor__MovingCursor_Move2(KTextEditor__MovingCursor* self, int chars, int wrapBehavior) {
    return self->move(static_cast<int>(chars), static_cast<KTextEditor::MovingCursor::WrapBehavior>(wrapBehavior));
}

void KTextEditor__MovingCursor_Delete(KTextEditor__MovingCursor* self) {
    delete self;
}
