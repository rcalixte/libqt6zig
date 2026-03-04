#define WORKAROUND_INNER_CLASS_DEFINITION_Poppler__PageTransition
#include <poppler-page-transition.h>
#include "libpoppler_page_transition.h"
#include "libpoppler_page_transition.hxx"

Poppler__PageTransition* Poppler__PageTransition_new(const Poppler__PageTransition* pt) {
    return new Poppler::PageTransition(*pt);
}

void Poppler__PageTransition_OperatorAssign(Poppler__PageTransition* self, const Poppler__PageTransition* other) {
    self->operator=(*other);
}

int Poppler__PageTransition_Type(const Poppler__PageTransition* self) {
    return static_cast<int>(self->type());
}

double Poppler__PageTransition_DurationReal(const Poppler__PageTransition* self) {
    return self->durationReal();
}

int Poppler__PageTransition_Alignment(const Poppler__PageTransition* self) {
    return static_cast<int>(self->alignment());
}

int Poppler__PageTransition_Direction(const Poppler__PageTransition* self) {
    return static_cast<int>(self->direction());
}

int Poppler__PageTransition_Angle(const Poppler__PageTransition* self) {
    return self->angle();
}

double Poppler__PageTransition_Scale(const Poppler__PageTransition* self) {
    return self->scale();
}

bool Poppler__PageTransition_IsRectangular(const Poppler__PageTransition* self) {
    return self->isRectangular();
}

void Poppler__PageTransition_Delete(Poppler__PageTransition* self) {
    delete self;
}
