#pragma once
#ifndef SRC_EXTRAS_KFILEMETADATAC_LIBEXTRACTIONRESULT_H
#define SRC_EXTRAS_KFILEMETADATAC_LIBEXTRACTIONRESULT_H

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
#else
typedef struct KFileMetaData__ExtractionResult KFileMetaData__ExtractionResult;
typedef struct QVariant QVariant;
#endif

KFileMetaData__ExtractionResult* KFileMetaData__ExtractionResult_new(const libqt_string url);
KFileMetaData__ExtractionResult* KFileMetaData__ExtractionResult_new2(const KFileMetaData__ExtractionResult* rhs);
KFileMetaData__ExtractionResult* KFileMetaData__ExtractionResult_new3(const libqt_string url, const libqt_string mimetype);
KFileMetaData__ExtractionResult* KFileMetaData__ExtractionResult_new4(const libqt_string url, const libqt_string mimetype, const int* flags);
libqt_string KFileMetaData__ExtractionResult_InputUrl(const KFileMetaData__ExtractionResult* self);
libqt_string KFileMetaData__ExtractionResult_InputMimetype(const KFileMetaData__ExtractionResult* self);
int KFileMetaData__ExtractionResult_InputFlags(const KFileMetaData__ExtractionResult* self);
void KFileMetaData__ExtractionResult_Append(KFileMetaData__ExtractionResult* self, const libqt_string text);
void KFileMetaData__ExtractionResult_Add(KFileMetaData__ExtractionResult* self, int property, const QVariant* value);
void KFileMetaData__ExtractionResult_AddType(KFileMetaData__ExtractionResult* self, int typeVal);
libqt_map /* of int to libqt_string */ KFileMetaData__ExtractionResult_ImageData(const KFileMetaData__ExtractionResult* self);
void KFileMetaData__ExtractionResult_OnAppend(KFileMetaData__ExtractionResult* self, intptr_t slot);
void KFileMetaData__ExtractionResult_SuperAppend(KFileMetaData__ExtractionResult* self, const libqt_string text);
void KFileMetaData__ExtractionResult_OnAdd(KFileMetaData__ExtractionResult* self, intptr_t slot);
void KFileMetaData__ExtractionResult_SuperAdd(KFileMetaData__ExtractionResult* self, int property, const QVariant* value);
void KFileMetaData__ExtractionResult_OnAddType(KFileMetaData__ExtractionResult* self, intptr_t slot);
void KFileMetaData__ExtractionResult_SuperAddType(KFileMetaData__ExtractionResult* self, int typeVal);
void KFileMetaData__ExtractionResult_Delete(KFileMetaData__ExtractionResult* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
