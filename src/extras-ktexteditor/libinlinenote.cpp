#include <KTextEditor/Cursor>
#define WORKAROUND_INNER_CLASS_DEFINITION_KTextEditor__InlineNote
#define WORKAROUND_INNER_CLASS_DEFINITION_KTextEditor__InlineNoteProvider
#define WORKAROUND_INNER_CLASS_DEFINITION_KTextEditor__View
#include <QFont>
#include <inlinenote.h>
#include "libinlinenote.h"
#include "libinlinenote.hxx"

KTextEditor__InlineNote* KTextEditor__InlineNote_new(const KTextEditor__InlineNote* other) {
    return new KTextEditor::InlineNote(*other);
}

KTextEditor__InlineNote* KTextEditor__InlineNote_new2(KTextEditor__InlineNote* other) {
    return new KTextEditor::InlineNote(std::move(*other));
}

double KTextEditor__InlineNote_Width(const KTextEditor__InlineNote* self) {
    return static_cast<double>(self->width());
}

KTextEditor__InlineNoteProvider* KTextEditor__InlineNote_Provider(const KTextEditor__InlineNote* self) {
    return self->provider();
}

KTextEditor__View* KTextEditor__InlineNote_View(const KTextEditor__InlineNote* self) {
    return (KTextEditor__View*)self->view();
}

KTextEditor__Cursor* KTextEditor__InlineNote_Position(const KTextEditor__InlineNote* self) {
    return new KTextEditor::Cursor(self->position());
}

int KTextEditor__InlineNote_Index(const KTextEditor__InlineNote* self) {
    return self->index();
}

bool KTextEditor__InlineNote_UnderMouse(const KTextEditor__InlineNote* self) {
    return self->underMouse();
}

QFont* KTextEditor__InlineNote_Font(const KTextEditor__InlineNote* self) {
    return new QFont(self->font());
}

int KTextEditor__InlineNote_LineHeight(const KTextEditor__InlineNote* self) {
    return self->lineHeight();
}

void KTextEditor__InlineNote_Delete(KTextEditor__InlineNote* self) {
    delete self;
}
