#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_POPPLERC_LIBPOPPLER_MEDIA_H
#define SRC_RESTRICTED_EXTRAS_POPPLERC_LIBPOPPLER_MEDIA_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Poppler__MediaRendition)
typedef Poppler::MediaRendition Poppler__MediaRendition;
#endif
#else
typedef struct Poppler__MediaRendition Poppler__MediaRendition;
typedef struct QSize QSize;
#endif

bool Poppler__MediaRendition_IsValid(const Poppler__MediaRendition* self);
libqt_string Poppler__MediaRendition_ContentType(const Poppler__MediaRendition* self);
libqt_string Poppler__MediaRendition_FileName(const Poppler__MediaRendition* self);
bool Poppler__MediaRendition_IsEmbedded(const Poppler__MediaRendition* self);
libqt_string Poppler__MediaRendition_Data(const Poppler__MediaRendition* self);
bool Poppler__MediaRendition_AutoPlay(const Poppler__MediaRendition* self);
bool Poppler__MediaRendition_ShowControls(const Poppler__MediaRendition* self);
float Poppler__MediaRendition_RepeatCount(const Poppler__MediaRendition* self);
QSize* Poppler__MediaRendition_Size(const Poppler__MediaRendition* self);
void Poppler__MediaRendition_Delete(Poppler__MediaRendition* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
