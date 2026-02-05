#pragma once
#ifndef SRC_EXTRAS_KFILEMETADATAC_LIBPROPERTYINFO_H
#define SRC_EXTRAS_KFILEMETADATAC_LIBPROPERTYINFO_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KFileMetaData__PropertyInfo)
typedef KFileMetaData::PropertyInfo KFileMetaData__PropertyInfo;
#endif
#else
typedef struct KFileMetaData__PropertyInfo KFileMetaData__PropertyInfo;
typedef struct QVariant QVariant;
#endif

KFileMetaData__PropertyInfo* KFileMetaData__PropertyInfo_new();
KFileMetaData__PropertyInfo* KFileMetaData__PropertyInfo_new2(int property);
KFileMetaData__PropertyInfo* KFileMetaData__PropertyInfo_new3(const KFileMetaData__PropertyInfo* pi);
void KFileMetaData__PropertyInfo_OperatorAssign(KFileMetaData__PropertyInfo* self, const KFileMetaData__PropertyInfo* rhs);
bool KFileMetaData__PropertyInfo_OperatorEqual(const KFileMetaData__PropertyInfo* self, const KFileMetaData__PropertyInfo* rhs);
int KFileMetaData__PropertyInfo_Property(const KFileMetaData__PropertyInfo* self);
libqt_string KFileMetaData__PropertyInfo_Name(const KFileMetaData__PropertyInfo* self);
libqt_string KFileMetaData__PropertyInfo_DisplayName(const KFileMetaData__PropertyInfo* self);
int KFileMetaData__PropertyInfo_ValueType(const KFileMetaData__PropertyInfo* self);
bool KFileMetaData__PropertyInfo_ShouldBeIndexed(const KFileMetaData__PropertyInfo* self);
KFileMetaData__PropertyInfo* KFileMetaData__PropertyInfo_FromName(const libqt_string name);
libqt_list /* of libqt_string */ KFileMetaData__PropertyInfo_AllNames();
libqt_string KFileMetaData__PropertyInfo_FormatAsDisplayString(const KFileMetaData__PropertyInfo* self, const QVariant* value);
void KFileMetaData__PropertyInfo_Delete(KFileMetaData__PropertyInfo* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
