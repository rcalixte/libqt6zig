#pragma once
#ifndef SRC_EXTRAS_KFILEMETADATAC_LIBWRITER_H
#define SRC_EXTRAS_KFILEMETADATAC_LIBWRITER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KFileMetaData__WriteData)
typedef KFileMetaData::WriteData KFileMetaData__WriteData;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KFileMetaData__Writer)
typedef KFileMetaData::Writer KFileMetaData__Writer;
#endif
#else
typedef struct KFileMetaData__WriteData KFileMetaData__WriteData;
typedef struct KFileMetaData__Writer KFileMetaData__Writer;
#endif

void KFileMetaData__Writer_Write(KFileMetaData__Writer* self, const KFileMetaData__WriteData* data);
libqt_list /* of libqt_string */ KFileMetaData__Writer_Mimetypes(const KFileMetaData__Writer* self);
void KFileMetaData__Writer_Delete(KFileMetaData__Writer* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
