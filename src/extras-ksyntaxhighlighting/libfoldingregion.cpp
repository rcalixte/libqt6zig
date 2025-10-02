#include <KSyntaxHighlighting/FoldingRegion>
#include <foldingregion.h>
#include "libfoldingregion.h"
#include "libfoldingregion.hxx"

KSyntaxHighlighting__FoldingRegion* KSyntaxHighlighting__FoldingRegion_new(const KSyntaxHighlighting__FoldingRegion* other) {
    return new KSyntaxHighlighting::FoldingRegion(*other);
}

KSyntaxHighlighting__FoldingRegion* KSyntaxHighlighting__FoldingRegion_new2(KSyntaxHighlighting__FoldingRegion* other) {
    return new KSyntaxHighlighting::FoldingRegion(std::move(*other));
}

KSyntaxHighlighting__FoldingRegion* KSyntaxHighlighting__FoldingRegion_new3() {
    return new KSyntaxHighlighting::FoldingRegion();
}

KSyntaxHighlighting__FoldingRegion* KSyntaxHighlighting__FoldingRegion_new4(const KSyntaxHighlighting__FoldingRegion* param1) {
    return new KSyntaxHighlighting::FoldingRegion(*param1);
}

void KSyntaxHighlighting__FoldingRegion_CopyAssign(KSyntaxHighlighting__FoldingRegion* self, KSyntaxHighlighting__FoldingRegion* other) {
    *self = *other;
}

void KSyntaxHighlighting__FoldingRegion_MoveAssign(KSyntaxHighlighting__FoldingRegion* self, KSyntaxHighlighting__FoldingRegion* other) {
    *self = std::move(*other);
}

bool KSyntaxHighlighting__FoldingRegion_OperatorEqual(const KSyntaxHighlighting__FoldingRegion* self, const KSyntaxHighlighting__FoldingRegion* other) {
    return (*self == *other);
}

bool KSyntaxHighlighting__FoldingRegion_IsValid(const KSyntaxHighlighting__FoldingRegion* self) {
    return self->isValid();
}

int KSyntaxHighlighting__FoldingRegion_Id(const KSyntaxHighlighting__FoldingRegion* self) {
    return self->id();
}

int KSyntaxHighlighting__FoldingRegion_Type(const KSyntaxHighlighting__FoldingRegion* self) {
    return static_cast<int>(self->type());
}

KSyntaxHighlighting__FoldingRegion* KSyntaxHighlighting__FoldingRegion_Sibling(const KSyntaxHighlighting__FoldingRegion* self) {
    return new KSyntaxHighlighting::FoldingRegion(self->sibling());
}

void KSyntaxHighlighting__FoldingRegion_Delete(KSyntaxHighlighting__FoldingRegion* self) {
    delete self;
}
