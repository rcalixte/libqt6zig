#pragma once
#ifndef SRC_EXTRAS_KCONFIGC_LIBKCONFIG_H
#define SRC_EXTRAS_KCONFIGC_LIBKCONFIG_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KConfig KConfig;
typedef struct KConfigBase KConfigBase;
typedef struct KConfigGroup KConfigGroup;
#endif

KConfig* KConfig_new();
KConfig* KConfig_new2(const libqt_string file, const libqt_string backend);
KConfig* KConfig_new3(const libqt_string file);
KConfig* KConfig_new4(const libqt_string file, int mode);
KConfig* KConfig_new5(const libqt_string file, int mode, int typeVal);
KConfig* KConfig_new6(const libqt_string file, const libqt_string backend, int typeVal);
int KConfig_LocationType(const KConfig* self);
libqt_string KConfig_Name(const KConfig* self);
int KConfig_OpenFlags(const KConfig* self);
bool KConfig_Sync(KConfig* self);
void KConfig_OnSync(KConfig* self, intptr_t slot);
bool KConfig_QBaseSync(KConfig* self);
bool KConfig_IsDirty(const KConfig* self);
void KConfig_MarkAsClean(KConfig* self);
void KConfig_OnMarkAsClean(KConfig* self, intptr_t slot);
void KConfig_QBaseMarkAsClean(KConfig* self);
int KConfig_AccessMode(const KConfig* self);
void KConfig_OnAccessMode(const KConfig* self, intptr_t slot);
int KConfig_QBaseAccessMode(const KConfig* self);
bool KConfig_IsConfigWritable(KConfig* self, bool warnUser);
KConfig* KConfig_CopyTo(const KConfig* self, const libqt_string file);
void KConfig_CheckUpdate(KConfig* self, const libqt_string id, const libqt_string updateFile);
void KConfig_ReparseConfiguration(KConfig* self);
void KConfig_AddConfigSources(KConfig* self, const libqt_list /* of libqt_string */ sources);
libqt_list /* of libqt_string */ KConfig_AdditionalConfigSources(const KConfig* self);
libqt_string KConfig_Locale(const KConfig* self);
bool KConfig_SetLocale(KConfig* self, const libqt_string aLocale);
void KConfig_SetReadDefaults(KConfig* self, bool b);
bool KConfig_ReadDefaults(const KConfig* self);
bool KConfig_IsImmutable(const KConfig* self);
void KConfig_OnIsImmutable(const KConfig* self, intptr_t slot);
bool KConfig_QBaseIsImmutable(const KConfig* self);
libqt_list /* of libqt_string */ KConfig_GroupList(const KConfig* self);
void KConfig_OnGroupList(const KConfig* self, intptr_t slot);
libqt_list /* of libqt_string */ KConfig_QBaseGroupList(const KConfig* self);
libqt_map /* of libqt_string to libqt_string */ KConfig_EntryMap(const KConfig* self);
void KConfig_SetMainConfigName(const libqt_string str);
libqt_string KConfig_MainConfigName();
bool KConfig_HasGroupImpl(const KConfig* self, const libqt_string groupName);
void KConfig_OnHasGroupImpl(const KConfig* self, intptr_t slot);
bool KConfig_QBaseHasGroupImpl(const KConfig* self, const libqt_string groupName);
KConfigGroup* KConfig_GroupImpl(KConfig* self, const libqt_string groupName);
void KConfig_OnGroupImpl(KConfig* self, intptr_t slot);
KConfigGroup* KConfig_QBaseGroupImpl(KConfig* self, const libqt_string groupName);
KConfigGroup* KConfig_GroupImpl2(const KConfig* self, const libqt_string groupName);
void KConfig_OnGroupImpl2(const KConfig* self, intptr_t slot);
KConfigGroup* KConfig_QBaseGroupImpl2(const KConfig* self, const libqt_string groupName);
void KConfig_DeleteGroupImpl(KConfig* self, const libqt_string groupName, int flags);
void KConfig_OnDeleteGroupImpl(KConfig* self, intptr_t slot);
void KConfig_QBaseDeleteGroupImpl(KConfig* self, const libqt_string groupName, int flags);
bool KConfig_IsGroupImmutableImpl(const KConfig* self, const libqt_string groupName);
void KConfig_OnIsGroupImmutableImpl(const KConfig* self, intptr_t slot);
bool KConfig_QBaseIsGroupImmutableImpl(const KConfig* self, const libqt_string groupName);
void KConfig_VirtualHook(KConfig* self, int id, void* data);
void KConfig_OnVirtualHook(KConfig* self, intptr_t slot);
void KConfig_QBaseVirtualHook(KConfig* self, int id, void* data);
KConfig* KConfig_CopyTo2(const KConfig* self, const libqt_string file, KConfig* config);
libqt_map /* of libqt_string to libqt_string */ KConfig_EntryMap1(const KConfig* self, const libqt_string aGroup);
void KConfig_Delete(KConfig* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
