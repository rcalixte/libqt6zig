#pragma once
#ifndef SRC_EXTRAS_KFILEMETADATAC_LIBEXTRACTOR_H
#define SRC_EXTRAS_KFILEMETADATAC_LIBEXTRACTOR_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KFileMetaData__ExtractionResult)
typedef KFileMetaData::ExtractionResult KFileMetaData__ExtractionResult;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KFileMetaData__Extractor)
typedef KFileMetaData::Extractor KFileMetaData__Extractor;
#endif
#else
typedef struct KFileMetaData__ExtractionResult KFileMetaData__ExtractionResult;
typedef struct KFileMetaData__Extractor KFileMetaData__Extractor;
typedef struct QVariant QVariant;
#endif

void KFileMetaData__Extractor_Extract(KFileMetaData__Extractor* self, KFileMetaData__ExtractionResult* result);
libqt_list /* of libqt_string */ KFileMetaData__Extractor_Mimetypes(const KFileMetaData__Extractor* self);
libqt_map /* of libqt_string to QVariant* */ KFileMetaData__Extractor_ExtractorProperties(const KFileMetaData__Extractor* self);
void KFileMetaData__Extractor_Delete(KFileMetaData__Extractor* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
