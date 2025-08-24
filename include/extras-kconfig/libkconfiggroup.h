#pragma once
#ifndef SRC_EXTRAS_KCONFIGC_LIBKCONFIGGROUP_H
#define SRC_EXTRAS_KCONFIGC_LIBKCONFIGGROUP_H

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
typedef struct QVariant QVariant;
#endif

KConfigGroup* KConfigGroup_new();
KConfigGroup* KConfigGroup_new2(KConfigBase* master, const libqt_string group);
KConfigGroup* KConfigGroup_new3(const KConfigBase* master, const libqt_string group);
KConfigGroup* KConfigGroup_new4(const KConfigGroup* param1);
void KConfigGroup_OperatorAssign(KConfigGroup* self, const KConfigGroup* param1);
bool KConfigGroup_IsValid(const KConfigGroup* self);
libqt_string KConfigGroup_Name(const KConfigGroup* self);
bool KConfigGroup_Exists(const KConfigGroup* self);
bool KConfigGroup_Sync(KConfigGroup* self);
void KConfigGroup_OnSync(KConfigGroup* self, intptr_t slot);
bool KConfigGroup_QBaseSync(KConfigGroup* self);
void KConfigGroup_MarkAsClean(KConfigGroup* self);
void KConfigGroup_OnMarkAsClean(KConfigGroup* self, intptr_t slot);
void KConfigGroup_QBaseMarkAsClean(KConfigGroup* self);
int KConfigGroup_AccessMode(const KConfigGroup* self);
void KConfigGroup_OnAccessMode(const KConfigGroup* self, intptr_t slot);
int KConfigGroup_QBaseAccessMode(const KConfigGroup* self);
KConfig* KConfigGroup_Config(KConfigGroup* self);
KConfig* KConfigGroup_Config2(const KConfigGroup* self);
void KConfigGroup_CopyTo(const KConfigGroup* self, KConfigBase* other);
void KConfigGroup_Reparent(KConfigGroup* self, KConfigBase* parent);
void KConfigGroup_MoveValuesTo(KConfigGroup* self, const libqt_list /* of const char* */ keys, KConfigGroup* other);
void KConfigGroup_MoveValuesTo2(KConfigGroup* self, KConfigGroup* other);
KConfigGroup* KConfigGroup_Parent(const KConfigGroup* self);
libqt_list /* of libqt_string */ KConfigGroup_GroupList(const KConfigGroup* self);
void KConfigGroup_OnGroupList(const KConfigGroup* self, intptr_t slot);
libqt_list /* of libqt_string */ KConfigGroup_QBaseGroupList(const KConfigGroup* self);
libqt_list /* of libqt_string */ KConfigGroup_KeyList(const KConfigGroup* self);
void KConfigGroup_DeleteGroup(KConfigGroup* self);
QVariant* KConfigGroup_ReadEntry(const KConfigGroup* self, const libqt_string key, const QVariant* aDefault);
QVariant* KConfigGroup_ReadEntry2(const KConfigGroup* self, const char* key, const QVariant* aDefault);
libqt_string KConfigGroup_ReadEntry3(const KConfigGroup* self, const libqt_string key, const libqt_string aDefault);
libqt_string KConfigGroup_ReadEntry4(const KConfigGroup* self, const char* key, const libqt_string aDefault);
libqt_string KConfigGroup_ReadEntry5(const KConfigGroup* self, const libqt_string key);
libqt_string KConfigGroup_ReadEntry6(const KConfigGroup* self, const char* key);
libqt_list /* of QVariant* */ KConfigGroup_ReadEntry7(const KConfigGroup* self, const libqt_string key, const libqt_list /* of QVariant* */ aDefault);
libqt_list /* of QVariant* */ KConfigGroup_ReadEntry8(const KConfigGroup* self, const char* key, const libqt_list /* of QVariant* */ aDefault);
libqt_list /* of libqt_string */ KConfigGroup_ReadEntry9(const KConfigGroup* self, const libqt_string key, const libqt_list /* of libqt_string */ aDefault);
libqt_list /* of libqt_string */ KConfigGroup_ReadEntry10(const KConfigGroup* self, const char* key, const libqt_list /* of libqt_string */ aDefault);
libqt_list /* of libqt_string */ KConfigGroup_ReadXdgListEntry(const KConfigGroup* self, const libqt_string pKey);
libqt_list /* of libqt_string */ KConfigGroup_ReadXdgListEntry2(const KConfigGroup* self, const char* key);
libqt_string KConfigGroup_ReadPathEntry(const KConfigGroup* self, const libqt_string pKey, const libqt_string aDefault);
libqt_string KConfigGroup_ReadPathEntry2(const KConfigGroup* self, const char* key, const libqt_string aDefault);
libqt_list /* of libqt_string */ KConfigGroup_ReadPathEntry3(const KConfigGroup* self, const libqt_string pKey, const libqt_list /* of libqt_string */ aDefault);
libqt_list /* of libqt_string */ KConfigGroup_ReadPathEntry4(const KConfigGroup* self, const char* key, const libqt_list /* of libqt_string */ aDefault);
libqt_string KConfigGroup_ReadEntryUntranslated(const KConfigGroup* self, const libqt_string pKey);
libqt_string KConfigGroup_ReadEntryUntranslated2(const KConfigGroup* self, const char* key);
void KConfigGroup_WriteEntry(KConfigGroup* self, const libqt_string key, const QVariant* value);
void KConfigGroup_WriteEntry2(KConfigGroup* self, const char* key, const QVariant* value);
void KConfigGroup_WriteEntry3(KConfigGroup* self, const libqt_string key, const libqt_string value);
void KConfigGroup_WriteEntry4(KConfigGroup* self, const char* key, const libqt_string value);
void KConfigGroup_WriteEntry5(KConfigGroup* self, const libqt_string key, const libqt_string value);
void KConfigGroup_WriteEntry6(KConfigGroup* self, const char* key, const libqt_string value);
void KConfigGroup_WriteEntry7(KConfigGroup* self, const libqt_string key, const char* value);
void KConfigGroup_WriteEntry8(KConfigGroup* self, const char* key, const char* value);
void KConfigGroup_WriteEntry9(KConfigGroup* self, const libqt_string key, const libqt_list /* of libqt_string */ value);
void KConfigGroup_WriteEntry10(KConfigGroup* self, const char* key, const libqt_list /* of libqt_string */ value);
void KConfigGroup_WriteEntry11(KConfigGroup* self, const libqt_string key, const libqt_list /* of QVariant* */ value);
void KConfigGroup_WriteEntry12(KConfigGroup* self, const char* key, const libqt_list /* of QVariant* */ value);
void KConfigGroup_WriteXdgListEntry(KConfigGroup* self, const libqt_string pKey, const libqt_list /* of libqt_string */ value);
void KConfigGroup_WriteXdgListEntry2(KConfigGroup* self, const char* key, const libqt_list /* of libqt_string */ value);
void KConfigGroup_WritePathEntry(KConfigGroup* self, const libqt_string pKey, const libqt_string path);
void KConfigGroup_WritePathEntry2(KConfigGroup* self, const char* Key, const libqt_string path);
void KConfigGroup_WritePathEntry3(KConfigGroup* self, const libqt_string pKey, const libqt_list /* of libqt_string */ value);
void KConfigGroup_WritePathEntry4(KConfigGroup* self, const char* key, const libqt_list /* of libqt_string */ value);
void KConfigGroup_DeleteEntry(KConfigGroup* self, const libqt_string pKey);
void KConfigGroup_DeleteEntry2(KConfigGroup* self, const char* key);
bool KConfigGroup_HasKey(const KConfigGroup* self, const libqt_string key);
bool KConfigGroup_HasKey2(const KConfigGroup* self, const char* key);
bool KConfigGroup_IsImmutable(const KConfigGroup* self);
void KConfigGroup_OnIsImmutable(const KConfigGroup* self, intptr_t slot);
bool KConfigGroup_QBaseIsImmutable(const KConfigGroup* self);
bool KConfigGroup_IsEntryImmutable(const KConfigGroup* self, const libqt_string key);
bool KConfigGroup_IsEntryImmutable2(const KConfigGroup* self, const char* key);
void KConfigGroup_RevertToDefault(KConfigGroup* self, const libqt_string key);
void KConfigGroup_RevertToDefault2(KConfigGroup* self, const char* key);
bool KConfigGroup_HasDefault(const KConfigGroup* self, const libqt_string key);
bool KConfigGroup_HasDefault2(const KConfigGroup* self, const char* key);
libqt_map /* of libqt_string to libqt_string */ KConfigGroup_EntryMap(const KConfigGroup* self);
bool KConfigGroup_HasGroupImpl(const KConfigGroup* self, const libqt_string groupName);
void KConfigGroup_OnHasGroupImpl(const KConfigGroup* self, intptr_t slot);
bool KConfigGroup_QBaseHasGroupImpl(const KConfigGroup* self, const libqt_string groupName);
KConfigGroup* KConfigGroup_GroupImpl(KConfigGroup* self, const libqt_string groupName);
void KConfigGroup_OnGroupImpl(KConfigGroup* self, intptr_t slot);
KConfigGroup* KConfigGroup_QBaseGroupImpl(KConfigGroup* self, const libqt_string groupName);
KConfigGroup* KConfigGroup_GroupImpl2(const KConfigGroup* self, const libqt_string groupName);
void KConfigGroup_OnGroupImpl2(const KConfigGroup* self, intptr_t slot);
KConfigGroup* KConfigGroup_QBaseGroupImpl2(const KConfigGroup* self, const libqt_string groupName);
void KConfigGroup_DeleteGroupImpl(KConfigGroup* self, const libqt_string groupName, int flags);
void KConfigGroup_OnDeleteGroupImpl(KConfigGroup* self, intptr_t slot);
void KConfigGroup_QBaseDeleteGroupImpl(KConfigGroup* self, const libqt_string groupName, int flags);
bool KConfigGroup_IsGroupImmutableImpl(const KConfigGroup* self, const libqt_string groupName);
void KConfigGroup_OnIsGroupImmutableImpl(const KConfigGroup* self, intptr_t slot);
bool KConfigGroup_QBaseIsGroupImmutableImpl(const KConfigGroup* self, const libqt_string groupName);
void KConfigGroup_CopyTo2(const KConfigGroup* self, KConfigBase* other, int pFlags);
void KConfigGroup_Reparent2(KConfigGroup* self, KConfigBase* parent, int pFlags);
void KConfigGroup_MoveValuesTo3(KConfigGroup* self, const libqt_list /* of const char* */ keys, KConfigGroup* other, int pFlags);
void KConfigGroup_MoveValuesTo22(KConfigGroup* self, KConfigGroup* other, int pFlags);
void KConfigGroup_DeleteGroup1(KConfigGroup* self, int pFlags);
libqt_string KConfigGroup_ReadEntry22(const KConfigGroup* self, const libqt_string key, const char* aDefault);
libqt_string KConfigGroup_ReadEntry23(const KConfigGroup* self, const char* key, const char* aDefault);
libqt_list /* of libqt_string */ KConfigGroup_ReadXdgListEntry22(const KConfigGroup* self, const libqt_string pKey, const libqt_list /* of libqt_string */ aDefault);
libqt_list /* of libqt_string */ KConfigGroup_ReadXdgListEntry23(const KConfigGroup* self, const char* key, const libqt_list /* of libqt_string */ aDefault);
libqt_string KConfigGroup_ReadEntryUntranslated22(const KConfigGroup* self, const libqt_string pKey, const libqt_string aDefault);
libqt_string KConfigGroup_ReadEntryUntranslated23(const KConfigGroup* self, const char* key, const libqt_string aDefault);
void KConfigGroup_WriteEntry32(KConfigGroup* self, const libqt_string key, const QVariant* value, int pFlags);
void KConfigGroup_WriteEntry33(KConfigGroup* self, const char* key, const QVariant* value, int pFlags);
void KConfigGroup_WriteEntry34(KConfigGroup* self, const libqt_string key, const libqt_string value, int pFlags);
void KConfigGroup_WriteEntry35(KConfigGroup* self, const char* key, const libqt_string value, int pFlags);
void KConfigGroup_WriteEntry36(KConfigGroup* self, const libqt_string key, const libqt_string value, int pFlags);
void KConfigGroup_WriteEntry37(KConfigGroup* self, const char* key, const libqt_string value, int pFlags);
void KConfigGroup_WriteEntry38(KConfigGroup* self, const libqt_string key, const char* value, int pFlags);
void KConfigGroup_WriteEntry39(KConfigGroup* self, const char* key, const char* value, int pFlags);
void KConfigGroup_WriteEntry310(KConfigGroup* self, const libqt_string key, const libqt_list /* of libqt_string */ value, int pFlags);
void KConfigGroup_WriteEntry311(KConfigGroup* self, const char* key, const libqt_list /* of libqt_string */ value, int pFlags);
void KConfigGroup_WriteEntry312(KConfigGroup* self, const libqt_string key, const libqt_list /* of QVariant* */ value, int pFlags);
void KConfigGroup_WriteEntry313(KConfigGroup* self, const char* key, const libqt_list /* of QVariant* */ value, int pFlags);
void KConfigGroup_WriteXdgListEntry3(KConfigGroup* self, const libqt_string pKey, const libqt_list /* of libqt_string */ value, int pFlags);
void KConfigGroup_WriteXdgListEntry32(KConfigGroup* self, const char* key, const libqt_list /* of libqt_string */ value, int pFlags);
void KConfigGroup_WritePathEntry32(KConfigGroup* self, const libqt_string pKey, const libqt_string path, int pFlags);
void KConfigGroup_WritePathEntry33(KConfigGroup* self, const char* Key, const libqt_string path, int pFlags);
void KConfigGroup_WritePathEntry34(KConfigGroup* self, const libqt_string pKey, const libqt_list /* of libqt_string */ value, int pFlags);
void KConfigGroup_WritePathEntry35(KConfigGroup* self, const char* key, const libqt_list /* of libqt_string */ value, int pFlags);
void KConfigGroup_DeleteEntry22(KConfigGroup* self, const libqt_string pKey, int pFlags);
void KConfigGroup_DeleteEntry23(KConfigGroup* self, const char* key, int pFlags);
void KConfigGroup_RevertToDefault22(KConfigGroup* self, const libqt_string key, int pFlag);
void KConfigGroup_RevertToDefault23(KConfigGroup* self, const char* key, int pFlag);
void KConfigGroup_VirtualHook(KConfigGroup* self, int id, void* data);
void KConfigGroup_OnVirtualHook(KConfigGroup* self, intptr_t slot);
void KConfigGroup_QBaseVirtualHook(KConfigGroup* self, int id, void* data);
void KConfigGroup_Delete(KConfigGroup* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
