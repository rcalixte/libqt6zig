#pragma once
#ifndef SRC_EXTRAS_KIOC_LIBMETADATA_H
#define SRC_EXTRAS_KIOC_LIBMETADATA_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
typedef KIO::MetaData KIO__MetaData;
#else
typedef struct KIO__MetaData KIO__MetaData;
typedef struct QVariant QVariant;
#endif

KIO__MetaData* KIO__MetaData_new();
KIO__MetaData* KIO__MetaData_new2(const libqt_map /* of libqt_string to libqt_string */ metaData);
KIO__MetaData* KIO__MetaData_new3(const libqt_map /* of libqt_string to QVariant* */ param1);
KIO__MetaData* KIO__MetaData_new4(const KIO__MetaData* param1);
KIO__MetaData* KIO__MetaData_OperatorPlusAssign(KIO__MetaData* self, const libqt_map /* of libqt_string to libqt_string */ metaData);
KIO__MetaData* KIO__MetaData_OperatorPlusAssign2(KIO__MetaData* self, const libqt_map /* of libqt_string to QVariant* */ metaData);
void KIO__MetaData_OperatorAssign(KIO__MetaData* self, const libqt_map /* of libqt_string to QVariant* */ metaData);
QVariant* KIO__MetaData_ToVariant(const KIO__MetaData* self);
void KIO__MetaData_OperatorAssign2(KIO__MetaData* self, const KIO__MetaData* param1);
void KIO__MetaData_Delete(KIO__MetaData* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
