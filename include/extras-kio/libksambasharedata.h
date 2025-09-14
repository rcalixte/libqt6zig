#pragma once
#ifndef SRC_EXTRAS_KIOC_LIBKSAMBASHAREDATA_H
#define SRC_EXTRAS_KIOC_LIBKSAMBASHAREDATA_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KSambaShareData KSambaShareData;
#endif

KSambaShareData* KSambaShareData_new();
KSambaShareData* KSambaShareData_new2(const KSambaShareData* other);
libqt_string KSambaShareData_Name(const KSambaShareData* self);
libqt_string KSambaShareData_Path(const KSambaShareData* self);
libqt_string KSambaShareData_Comment(const KSambaShareData* self);
libqt_string KSambaShareData_Acl(const KSambaShareData* self);
int KSambaShareData_GuestPermission(const KSambaShareData* self);
int KSambaShareData_SetName(KSambaShareData* self, const libqt_string name);
int KSambaShareData_SetPath(KSambaShareData* self, const libqt_string path);
int KSambaShareData_SetComment(KSambaShareData* self, const libqt_string comment);
int KSambaShareData_SetAcl(KSambaShareData* self, const libqt_string acl);
int KSambaShareData_SetGuestPermission(KSambaShareData* self);
int KSambaShareData_Save(KSambaShareData* self);
int KSambaShareData_Remove(KSambaShareData* self);
void KSambaShareData_OperatorAssign(KSambaShareData* self, const KSambaShareData* other);
bool KSambaShareData_OperatorEqual(const KSambaShareData* self, const KSambaShareData* other);
bool KSambaShareData_OperatorNotEqual(const KSambaShareData* self, const KSambaShareData* other);
int KSambaShareData_SetGuestPermission1(KSambaShareData* self, const int* permission);
void KSambaShareData_Delete(KSambaShareData* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
