#pragma once
#ifndef SRC_EXTRAS_KFILEMETADATAC_LIBEXTRACTORCOLLECTION_H
#define SRC_EXTRAS_KFILEMETADATAC_LIBEXTRACTORCOLLECTION_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KFileMetaData__Extractor)
typedef KFileMetaData::Extractor KFileMetaData__Extractor;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KFileMetaData__ExtractorCollection)
typedef KFileMetaData::ExtractorCollection KFileMetaData__ExtractorCollection;
#endif
#else
typedef struct KFileMetaData__Extractor KFileMetaData__Extractor;
typedef struct KFileMetaData__ExtractorCollection KFileMetaData__ExtractorCollection;
#endif

KFileMetaData__ExtractorCollection* KFileMetaData__ExtractorCollection_new();
libqt_list /* of KFileMetaData__Extractor* */ KFileMetaData__ExtractorCollection_FetchExtractors(const KFileMetaData__ExtractorCollection* self, const libqt_string mimetype);
void KFileMetaData__ExtractorCollection_Delete(KFileMetaData__ExtractorCollection* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
