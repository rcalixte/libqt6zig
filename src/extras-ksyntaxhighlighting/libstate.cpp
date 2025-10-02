#define WORKAROUND_INNER_CLASS_DEFINITION_KSyntaxHighlighting__State
#include <state.h>
#include "libstate.h"
#include "libstate.hxx"

KSyntaxHighlighting__State* KSyntaxHighlighting__State_new() {
    return new KSyntaxHighlighting::State();
}

KSyntaxHighlighting__State* KSyntaxHighlighting__State_new2(const KSyntaxHighlighting__State* other) {
    return new KSyntaxHighlighting::State(*other);
}

void KSyntaxHighlighting__State_OperatorAssign(KSyntaxHighlighting__State* self, const KSyntaxHighlighting__State* rhs) {
    self->operator=(*rhs);
}

bool KSyntaxHighlighting__State_OperatorEqual(const KSyntaxHighlighting__State* self, const KSyntaxHighlighting__State* other) {
    return (*self == *other);
}

bool KSyntaxHighlighting__State_OperatorNotEqual(const KSyntaxHighlighting__State* self, const KSyntaxHighlighting__State* other) {
    return (*self != *other);
}

bool KSyntaxHighlighting__State_IndentationBasedFoldingEnabled(const KSyntaxHighlighting__State* self) {
    return self->indentationBasedFoldingEnabled();
}

void KSyntaxHighlighting__State_Delete(KSyntaxHighlighting__State* self) {
    delete self;
}
