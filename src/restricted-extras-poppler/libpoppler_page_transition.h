#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_POPPLERC_LIBPOPPLER_PAGE_TRANSITION_H
#define SRC_RESTRICTED_EXTRAS_POPPLERC_LIBPOPPLER_PAGE_TRANSITION_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Poppler__PageTransition)
typedef Poppler::PageTransition Poppler__PageTransition;
#endif
#else
typedef struct Poppler__PageTransition Poppler__PageTransition;
#endif

Poppler__PageTransition* Poppler__PageTransition_new(const Poppler__PageTransition* pt);
void Poppler__PageTransition_OperatorAssign(Poppler__PageTransition* self, const Poppler__PageTransition* other);
int Poppler__PageTransition_Type(const Poppler__PageTransition* self);
double Poppler__PageTransition_DurationReal(const Poppler__PageTransition* self);
int Poppler__PageTransition_Alignment(const Poppler__PageTransition* self);
int Poppler__PageTransition_Direction(const Poppler__PageTransition* self);
int Poppler__PageTransition_Angle(const Poppler__PageTransition* self);
double Poppler__PageTransition_Scale(const Poppler__PageTransition* self);
bool Poppler__PageTransition_IsRectangular(const Poppler__PageTransition* self);
void Poppler__PageTransition_Delete(Poppler__PageTransition* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
