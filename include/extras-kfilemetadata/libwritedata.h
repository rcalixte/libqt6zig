#pragma once
#ifndef SRC_EXTRAS_KFILEMETADATAC_LIBWRITEDATA_H
#define SRC_EXTRAS_KFILEMETADATAC_LIBWRITEDATA_H

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
#else
typedef struct KFileMetaData__WriteData KFileMetaData__WriteData;
typedef struct QVariant QVariant;
#endif

KFileMetaData__WriteData* KFileMetaData__WriteData_new(const libqt_string url, const libqt_string mimetype);
KFileMetaData__WriteData* KFileMetaData__WriteData_new2(const KFileMetaData__WriteData* rhs);
void KFileMetaData__WriteData_OperatorAssign(KFileMetaData__WriteData* self, const KFileMetaData__WriteData* rhs);
bool KFileMetaData__WriteData_OperatorEqual(const KFileMetaData__WriteData* self, const KFileMetaData__WriteData* rhs);
libqt_string KFileMetaData__WriteData_InputUrl(const KFileMetaData__WriteData* self);
libqt_string KFileMetaData__WriteData_InputMimetype(const KFileMetaData__WriteData* self);
void KFileMetaData__WriteData_Add(KFileMetaData__WriteData* self, int property, const QVariant* value);
void KFileMetaData__WriteData_AddImageData(KFileMetaData__WriteData* self, const libqt_map /* of int to libqt_string */ images);
libqt_map /* of int to libqt_list of QVariant* */ KFileMetaData__WriteData_Properties(const KFileMetaData__WriteData* self);
libqt_map /* of int to libqt_string */ KFileMetaData__WriteData_ImageData(const KFileMetaData__WriteData* self);
void KFileMetaData__WriteData_Delete(KFileMetaData__WriteData* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
