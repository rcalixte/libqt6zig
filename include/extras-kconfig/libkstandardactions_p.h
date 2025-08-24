#pragma once
#ifndef SRC_EXTRAS_KCONFIGC_LIBKSTANDARDACTIONS_P_H
#define SRC_EXTRAS_KCONFIGC_LIBKSTANDARDACTIONS_P_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KStandardActions__KStandardActionsInfo)
typedef KStandardActions::KStandardActionsInfo KStandardActions__KStandardActionsInfo;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KStandardActions__RawStringData)
typedef KStandardActions::RawStringData KStandardActions__RawStringData;
#endif
#else
typedef struct KStandardActions KStandardActions;
typedef struct KStandardActions__KStandardActionsInfo KStandardActions__KStandardActionsInfo;
typedef struct KStandardActions__RawStringData KStandardActions__RawStringData;
#endif

KStandardActions__RawStringData* KStandardActions__RawStringData_new(const KStandardActions__RawStringData* other);
KStandardActions__RawStringData* KStandardActions__RawStringData_new2(KStandardActions__RawStringData* other);
KStandardActions__RawStringData* KStandardActions__RawStringData_new3();
KStandardActions__RawStringData* KStandardActions__RawStringData_new4(const KStandardActions__RawStringData* param1);
libqt_string KStandardActions__RawStringData_ToString(const KStandardActions__RawStringData* self);
void KStandardActions__RawStringData_Delete(KStandardActions__RawStringData* self);

KStandardActions__KStandardActionsInfo* KStandardActions__KStandardActionsInfo_new(const KStandardActions__KStandardActionsInfo* param1);
int KStandardActions__KStandardActionsInfo_Id(const KStandardActions__KStandardActionsInfo* self);
void KStandardActions__KStandardActionsInfo_SetId(KStandardActions__KStandardActionsInfo* self, int id);
int KStandardActions__KStandardActionsInfo_IdAccel(const KStandardActions__KStandardActionsInfo* self);
void KStandardActions__KStandardActionsInfo_SetIdAccel(KStandardActions__KStandardActionsInfo* self, int idAccel);
const char* KStandardActions__KStandardActionsInfo_PsLabel(const KStandardActions__KStandardActionsInfo* self);
void KStandardActions__KStandardActionsInfo_SetPsLabel(KStandardActions__KStandardActionsInfo* self, const char* psLabel);
const char* KStandardActions__KStandardActionsInfo_PsToolTip(const KStandardActions__KStandardActionsInfo* self);
void KStandardActions__KStandardActionsInfo_SetPsToolTip(KStandardActions__KStandardActionsInfo* self, const char* psToolTip);
void KStandardActions__KStandardActionsInfo_Delete(KStandardActions__KStandardActionsInfo* self);

KStandardActions__KStandardActionsInfo* KStandardActions_InfoPtr(int param1);
libqt_list /* of libqt_string */ KStandardActions_InternalStdNames();

#ifdef __cplusplus
} /* extern C */
#endif

#endif
