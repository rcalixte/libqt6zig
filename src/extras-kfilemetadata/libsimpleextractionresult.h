#pragma once
#ifndef SRC_EXTRAS_KFILEMETADATAC_LIBSIMPLEEXTRACTIONRESULT_H
#define SRC_EXTRAS_KFILEMETADATAC_LIBSIMPLEEXTRACTIONRESULT_H

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
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KFileMetaData__SimpleExtractionResult)
typedef KFileMetaData::SimpleExtractionResult KFileMetaData__SimpleExtractionResult;
#endif
#else
typedef struct KFileMetaData__ExtractionResult KFileMetaData__ExtractionResult;
typedef struct KFileMetaData__SimpleExtractionResult KFileMetaData__SimpleExtractionResult;
typedef struct QVariant QVariant;
#endif

KFileMetaData__SimpleExtractionResult* KFileMetaData__SimpleExtractionResult_new(const libqt_string url);
KFileMetaData__SimpleExtractionResult* KFileMetaData__SimpleExtractionResult_new2(const KFileMetaData__SimpleExtractionResult* rhs);
KFileMetaData__SimpleExtractionResult* KFileMetaData__SimpleExtractionResult_new3(const libqt_string url, const libqt_string mimetype);
KFileMetaData__SimpleExtractionResult* KFileMetaData__SimpleExtractionResult_new4(const libqt_string url, const libqt_string mimetype, const int* flags);
void KFileMetaData__SimpleExtractionResult_OperatorAssign(KFileMetaData__SimpleExtractionResult* self, const KFileMetaData__SimpleExtractionResult* rhs);
bool KFileMetaData__SimpleExtractionResult_OperatorEqual(const KFileMetaData__SimpleExtractionResult* self, const KFileMetaData__SimpleExtractionResult* rhs);
void KFileMetaData__SimpleExtractionResult_Add(KFileMetaData__SimpleExtractionResult* self, int property, const QVariant* value);
void KFileMetaData__SimpleExtractionResult_AddType(KFileMetaData__SimpleExtractionResult* self, int typeVal);
void KFileMetaData__SimpleExtractionResult_Append(KFileMetaData__SimpleExtractionResult* self, const libqt_string text);
libqt_map /* of int to libqt_list of QVariant* */ KFileMetaData__SimpleExtractionResult_Properties(const KFileMetaData__SimpleExtractionResult* self);
libqt_string KFileMetaData__SimpleExtractionResult_Text(const KFileMetaData__SimpleExtractionResult* self);
libqt_list /* of int */ KFileMetaData__SimpleExtractionResult_Types(const KFileMetaData__SimpleExtractionResult* self);
void KFileMetaData__SimpleExtractionResult_OnAdd(KFileMetaData__SimpleExtractionResult* self, intptr_t slot);
void KFileMetaData__SimpleExtractionResult_SuperAdd(KFileMetaData__SimpleExtractionResult* self, int property, const QVariant* value);
void KFileMetaData__SimpleExtractionResult_OnAddType(KFileMetaData__SimpleExtractionResult* self, intptr_t slot);
void KFileMetaData__SimpleExtractionResult_SuperAddType(KFileMetaData__SimpleExtractionResult* self, int typeVal);
void KFileMetaData__SimpleExtractionResult_OnAppend(KFileMetaData__SimpleExtractionResult* self, intptr_t slot);
void KFileMetaData__SimpleExtractionResult_SuperAppend(KFileMetaData__SimpleExtractionResult* self, const libqt_string text);
void KFileMetaData__SimpleExtractionResult_Delete(KFileMetaData__SimpleExtractionResult* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
