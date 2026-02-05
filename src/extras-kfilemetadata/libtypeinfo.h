#pragma once
#ifndef SRC_EXTRAS_KFILEMETADATAC_LIBTYPEINFO_H
#define SRC_EXTRAS_KFILEMETADATAC_LIBTYPEINFO_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KFileMetaData__TypeInfo)
typedef KFileMetaData::TypeInfo KFileMetaData__TypeInfo;
#endif
#else
typedef struct KFileMetaData__TypeInfo KFileMetaData__TypeInfo;
#endif

KFileMetaData__TypeInfo* KFileMetaData__TypeInfo_new();
KFileMetaData__TypeInfo* KFileMetaData__TypeInfo_new2(int typeVal);
KFileMetaData__TypeInfo* KFileMetaData__TypeInfo_new3(const KFileMetaData__TypeInfo* ti);
void KFileMetaData__TypeInfo_OperatorAssign(KFileMetaData__TypeInfo* self, const KFileMetaData__TypeInfo* rhs);
bool KFileMetaData__TypeInfo_OperatorEqual(const KFileMetaData__TypeInfo* self, const KFileMetaData__TypeInfo* rhs);
int KFileMetaData__TypeInfo_Type(const KFileMetaData__TypeInfo* self);
libqt_string KFileMetaData__TypeInfo_Name(const KFileMetaData__TypeInfo* self);
libqt_string KFileMetaData__TypeInfo_DisplayName(const KFileMetaData__TypeInfo* self);
KFileMetaData__TypeInfo* KFileMetaData__TypeInfo_FromName(const libqt_string name);
libqt_list /* of libqt_string */ KFileMetaData__TypeInfo_AllNames();
void KFileMetaData__TypeInfo_Delete(KFileMetaData__TypeInfo* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
