#include <KTextEditor/Cursor>
#include <KTextEditor/Document>
#define WORKAROUND_INNER_CLASS_DEFINITION_KTextEditor__DocumentCursor
#include <documentcursor.h>
#include "libdocumentcursor.h"
#include "libdocumentcursor.hxx"

KTextEditor__DocumentCursor* KTextEditor__DocumentCursor_new(KTextEditor__Document* document) {
    return new KTextEditor::DocumentCursor(document);
}

KTextEditor__DocumentCursor* KTextEditor__DocumentCursor_new2(KTextEditor__Document* document, KTextEditor__Cursor* position) {
    return new KTextEditor::DocumentCursor(document, *position);
}

KTextEditor__DocumentCursor* KTextEditor__DocumentCursor_new3(KTextEditor__Document* document, int line, int column) {
    return new KTextEditor::DocumentCursor(document, static_cast<int>(line), static_cast<int>(column));
}

KTextEditor__DocumentCursor* KTextEditor__DocumentCursor_new4(const KTextEditor__DocumentCursor* other) {
    return new KTextEditor::DocumentCursor(*other);
}

KTextEditor__Document* KTextEditor__DocumentCursor_Document(const KTextEditor__DocumentCursor* self) {
    return self->document();
}

void KTextEditor__DocumentCursor_SetPosition(KTextEditor__DocumentCursor* self, KTextEditor__Cursor* position) {
    self->setPosition(*position);
}

int KTextEditor__DocumentCursor_Line(const KTextEditor__DocumentCursor* self) {
    return self->line();
}

int KTextEditor__DocumentCursor_Column(const KTextEditor__DocumentCursor* self) {
    return self->column();
}

bool KTextEditor__DocumentCursor_IsValid(const KTextEditor__DocumentCursor* self) {
    return self->isValid();
}

bool KTextEditor__DocumentCursor_IsValidTextPosition(const KTextEditor__DocumentCursor* self) {
    return self->isValidTextPosition();
}

void KTextEditor__DocumentCursor_MakeValid(KTextEditor__DocumentCursor* self) {
    self->makeValid();
}

void KTextEditor__DocumentCursor_SetPosition2(KTextEditor__DocumentCursor* self, int line, int column) {
    self->setPosition(static_cast<int>(line), static_cast<int>(column));
}

void KTextEditor__DocumentCursor_SetLine(KTextEditor__DocumentCursor* self, int line) {
    self->setLine(static_cast<int>(line));
}

void KTextEditor__DocumentCursor_SetColumn(KTextEditor__DocumentCursor* self, int column) {
    self->setColumn(static_cast<int>(column));
}

bool KTextEditor__DocumentCursor_AtStartOfLine(const KTextEditor__DocumentCursor* self) {
    return self->atStartOfLine();
}

bool KTextEditor__DocumentCursor_AtEndOfLine(const KTextEditor__DocumentCursor* self) {
    return self->atEndOfLine();
}

bool KTextEditor__DocumentCursor_AtStartOfDocument(const KTextEditor__DocumentCursor* self) {
    return self->atStartOfDocument();
}

bool KTextEditor__DocumentCursor_AtEndOfDocument(const KTextEditor__DocumentCursor* self) {
    return self->atEndOfDocument();
}

bool KTextEditor__DocumentCursor_GotoNextLine(KTextEditor__DocumentCursor* self) {
    return self->gotoNextLine();
}

bool KTextEditor__DocumentCursor_GotoPreviousLine(KTextEditor__DocumentCursor* self) {
    return self->gotoPreviousLine();
}

bool KTextEditor__DocumentCursor_Move(KTextEditor__DocumentCursor* self, int chars) {
    return self->move(static_cast<int>(chars));
}

KTextEditor__Cursor* KTextEditor__DocumentCursor_ToCursor(const KTextEditor__DocumentCursor* self) {
    return new KTextEditor::Cursor(self->toCursor());
}

void KTextEditor__DocumentCursor_OperatorAssign(KTextEditor__DocumentCursor* self, const KTextEditor__DocumentCursor* other) {
    self->operator=(*other);
}

bool KTextEditor__DocumentCursor_Move2(KTextEditor__DocumentCursor* self, int chars, int wrapBehavior) {
    return self->move(static_cast<int>(chars), static_cast<KTextEditor::DocumentCursor::WrapBehavior>(wrapBehavior));
}

void KTextEditor__DocumentCursor_Delete(KTextEditor__DocumentCursor* self) {
    delete self;
}
