#pragma once
#ifndef SRC_EXTRAS_KCONFIGC_LIBKDESKTOPFILE_H
#define SRC_EXTRAS_KCONFIGC_LIBKDESKTOPFILE_H

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
typedef struct KDesktopFile KDesktopFile;
typedef struct KDesktopFileAction KDesktopFileAction;
#endif

KDesktopFile* KDesktopFile_new(int resourceType, const libqt_string fileName);
KDesktopFile* KDesktopFile_new2(const libqt_string fileName);
bool KDesktopFile_IsDesktopFile(const libqt_string path);
bool KDesktopFile_IsAuthorizedDesktopFile(const libqt_string path);
libqt_string KDesktopFile_LocateLocal(const libqt_string path);
KConfigGroup* KDesktopFile_DesktopGroup(const KDesktopFile* self);
libqt_string KDesktopFile_ReadType(const KDesktopFile* self);
libqt_string KDesktopFile_ReadIcon(const KDesktopFile* self);
libqt_string KDesktopFile_ReadName(const KDesktopFile* self);
libqt_string KDesktopFile_ReadComment(const KDesktopFile* self);
libqt_string KDesktopFile_ReadGenericName(const KDesktopFile* self);
libqt_string KDesktopFile_ReadPath(const KDesktopFile* self);
libqt_string KDesktopFile_ReadUrl(const KDesktopFile* self);
libqt_list /* of libqt_string */ KDesktopFile_ReadActions(const KDesktopFile* self);
libqt_list /* of libqt_string */ KDesktopFile_ReadMimeTypes(const KDesktopFile* self);
KConfigGroup* KDesktopFile_ActionGroup(KDesktopFile* self, const libqt_string group);
KConfigGroup* KDesktopFile_ActionGroup2(const KDesktopFile* self, const libqt_string group);
bool KDesktopFile_HasActionGroup(const KDesktopFile* self, const libqt_string group);
bool KDesktopFile_HasLinkType(const KDesktopFile* self);
bool KDesktopFile_HasApplicationType(const KDesktopFile* self);
bool KDesktopFile_HasDeviceType(const KDesktopFile* self);
bool KDesktopFile_TryExec(const KDesktopFile* self);
libqt_string KDesktopFile_ReadDocPath(const KDesktopFile* self);
bool KDesktopFile_NoDisplay(const KDesktopFile* self);
KDesktopFile* KDesktopFile_CopyTo(const KDesktopFile* self, const libqt_string file);
libqt_string KDesktopFile_FileName(const KDesktopFile* self);
libqt_list /* of KDesktopFileAction* */ KDesktopFile_Actions(const KDesktopFile* self);
bool KDesktopFile_Sync(KDesktopFile* self);
void KDesktopFile_OnSync(KDesktopFile* self, intptr_t slot);
bool KDesktopFile_QBaseSync(KDesktopFile* self);
void KDesktopFile_MarkAsClean(KDesktopFile* self);
void KDesktopFile_OnMarkAsClean(KDesktopFile* self, intptr_t slot);
void KDesktopFile_QBaseMarkAsClean(KDesktopFile* self);
int KDesktopFile_AccessMode(const KDesktopFile* self);
void KDesktopFile_OnAccessMode(const KDesktopFile* self, intptr_t slot);
int KDesktopFile_QBaseAccessMode(const KDesktopFile* self);
bool KDesktopFile_IsImmutable(const KDesktopFile* self);
void KDesktopFile_OnIsImmutable(const KDesktopFile* self, intptr_t slot);
bool KDesktopFile_QBaseIsImmutable(const KDesktopFile* self);
libqt_list /* of libqt_string */ KDesktopFile_GroupList(const KDesktopFile* self);
void KDesktopFile_OnGroupList(const KDesktopFile* self, intptr_t slot);
libqt_list /* of libqt_string */ KDesktopFile_QBaseGroupList(const KDesktopFile* self);
bool KDesktopFile_HasGroupImpl(const KDesktopFile* self, const libqt_string groupName);
void KDesktopFile_OnHasGroupImpl(const KDesktopFile* self, intptr_t slot);
bool KDesktopFile_QBaseHasGroupImpl(const KDesktopFile* self, const libqt_string groupName);
KConfigGroup* KDesktopFile_GroupImpl(KDesktopFile* self, const libqt_string groupName);
void KDesktopFile_OnGroupImpl(KDesktopFile* self, intptr_t slot);
KConfigGroup* KDesktopFile_QBaseGroupImpl(KDesktopFile* self, const libqt_string groupName);
void KDesktopFile_DeleteGroupImpl(KDesktopFile* self, const libqt_string groupName, int flags);
void KDesktopFile_OnDeleteGroupImpl(KDesktopFile* self, intptr_t slot);
void KDesktopFile_QBaseDeleteGroupImpl(KDesktopFile* self, const libqt_string groupName, int flags);
bool KDesktopFile_IsGroupImmutableImpl(const KDesktopFile* self, const libqt_string groupName);
void KDesktopFile_OnIsGroupImmutableImpl(const KDesktopFile* self, intptr_t slot);
bool KDesktopFile_QBaseIsGroupImmutableImpl(const KDesktopFile* self, const libqt_string groupName);
void KDesktopFile_VirtualHook(KDesktopFile* self, int id, void* data);
void KDesktopFile_OnVirtualHook(KDesktopFile* self, intptr_t slot);
void KDesktopFile_QBaseVirtualHook(KDesktopFile* self, int id, void* data);
void KDesktopFile_Delete(KDesktopFile* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
