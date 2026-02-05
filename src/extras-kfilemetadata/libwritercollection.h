#pragma once
#ifndef SRC_EXTRAS_KFILEMETADATAC_LIBWRITERCOLLECTION_H
#define SRC_EXTRAS_KFILEMETADATAC_LIBWRITERCOLLECTION_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KFileMetaData__Writer)
typedef KFileMetaData::Writer KFileMetaData__Writer;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KFileMetaData__WriterCollection)
typedef KFileMetaData::WriterCollection KFileMetaData__WriterCollection;
#endif
#else
typedef struct KFileMetaData__Writer KFileMetaData__Writer;
typedef struct KFileMetaData__WriterCollection KFileMetaData__WriterCollection;
#endif

KFileMetaData__WriterCollection* KFileMetaData__WriterCollection_new();
libqt_list /* of KFileMetaData__Writer* */ KFileMetaData__WriterCollection_FetchWriters(const KFileMetaData__WriterCollection* self, const libqt_string mimetype);
void KFileMetaData__WriterCollection_Delete(KFileMetaData__WriterCollection* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
