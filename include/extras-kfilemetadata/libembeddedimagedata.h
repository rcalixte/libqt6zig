#pragma once
#ifndef SRC_EXTRAS_KFILEMETADATAC_LIBEMBEDDEDIMAGEDATA_H
#define SRC_EXTRAS_KFILEMETADATAC_LIBEMBEDDEDIMAGEDATA_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KFileMetaData__EmbeddedImageData)
typedef KFileMetaData::EmbeddedImageData KFileMetaData__EmbeddedImageData;
#endif
#else
typedef struct KFileMetaData__EmbeddedImageData KFileMetaData__EmbeddedImageData;
#endif

KFileMetaData__EmbeddedImageData* KFileMetaData__EmbeddedImageData_new();
void KFileMetaData__EmbeddedImageData_Delete(KFileMetaData__EmbeddedImageData* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
