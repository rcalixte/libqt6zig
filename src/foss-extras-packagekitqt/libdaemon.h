#pragma once
#ifndef SRC_FOSS_EXTRAS_PACKAGEKITQTC_LIBDAEMON_H
#define SRC_FOSS_EXTRAS_PACKAGEKITQTC_LIBDAEMON_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_PackageKit__Bitfield)
typedef PackageKit::Bitfield PackageKit__Bitfield;
#endif
typedef PackageKit::Daemon PackageKit__Daemon;
typedef PackageKit::Offline PackageKit__Offline;
typedef PackageKit::Transaction PackageKit__Transaction;
#else
typedef struct PackageKit__Bitfield PackageKit__Bitfield;
typedef struct PackageKit__Daemon PackageKit__Daemon;
typedef struct PackageKit__Offline PackageKit__Offline;
typedef struct PackageKit__Transaction PackageKit__Transaction;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
#endif

QMetaObject* PackageKit__Daemon_MetaObject(const PackageKit__Daemon* self);
void* PackageKit__Daemon_Metacast(PackageKit__Daemon* self, const char* param1);
int PackageKit__Daemon_Metacall(PackageKit__Daemon* self, int param1, int param2, void** param3);
PackageKit__Daemon* PackageKit__Daemon_Global();
bool PackageKit__Daemon_IsRunning();
PackageKit__Bitfield* PackageKit__Daemon_Roles();
libqt_string PackageKit__Daemon_BackendName();
libqt_string PackageKit__Daemon_BackendDescription();
libqt_string PackageKit__Daemon_BackendAuthor();
int PackageKit__Daemon_Filters();
PackageKit__Bitfield* PackageKit__Daemon_Groups();
bool PackageKit__Daemon_Locked();
libqt_list /* of libqt_string */ PackageKit__Daemon_MimeTypes();
int PackageKit__Daemon_NetworkState();
libqt_string PackageKit__Daemon_DistroID();
unsigned int PackageKit__Daemon_VersionMajor();
unsigned int PackageKit__Daemon_VersionMinor();
unsigned int PackageKit__Daemon_VersionMicro();
void PackageKit__Daemon_SetHints(const libqt_list /* of libqt_string */ hints);
void PackageKit__Daemon_SetHints2(const libqt_string hints);
libqt_list /* of libqt_string */ PackageKit__Daemon_Hints();
PackageKit__Offline* PackageKit__Daemon_Offline(const PackageKit__Daemon* self);
libqt_string PackageKit__Daemon_PackageName(const libqt_string packageID);
libqt_string PackageKit__Daemon_PackageVersion(const libqt_string packageID);
libqt_string PackageKit__Daemon_PackageArch(const libqt_string packageID);
libqt_string PackageKit__Daemon_PackageData(const libqt_string packageID);
libqt_string PackageKit__Daemon_EnumToString(const QMetaObject* metaObject, int value, const char* enumName);
int PackageKit__Daemon_EnumFromString(const QMetaObject* metaObject, const libqt_string str, const char* enumName);
PackageKit__Transaction* PackageKit__Daemon_AcceptEula(const libqt_string eulaID);
PackageKit__Transaction* PackageKit__Daemon_DownloadPackages(const libqt_list /* of libqt_string */ packageIDs);
PackageKit__Transaction* PackageKit__Daemon_DownloadPackage(const libqt_string packageID);
PackageKit__Transaction* PackageKit__Daemon_GetCategories();
PackageKit__Transaction* PackageKit__Daemon_DependsOn(const libqt_list /* of libqt_string */ packageIDs);
PackageKit__Transaction* PackageKit__Daemon_DependsOn2(const libqt_string packageID);
PackageKit__Transaction* PackageKit__Daemon_GetDetails(const libqt_list /* of libqt_string */ packageIDs);
PackageKit__Transaction* PackageKit__Daemon_GetDetails2(const libqt_string packageID);
PackageKit__Transaction* PackageKit__Daemon_GetDetailsLocal(const libqt_list /* of libqt_string */ files);
PackageKit__Transaction* PackageKit__Daemon_GetDetailsLocal2(const libqt_string file);
PackageKit__Transaction* PackageKit__Daemon_GetFiles(const libqt_list /* of libqt_string */ packageIDs);
PackageKit__Transaction* PackageKit__Daemon_GetFiles2(const libqt_string packageIDs);
PackageKit__Transaction* PackageKit__Daemon_GetFilesLocal(const libqt_list /* of libqt_string */ files);
PackageKit__Transaction* PackageKit__Daemon_GetFilesLocal2(const libqt_string file);
PackageKit__Transaction* PackageKit__Daemon_GetOldTransactions(unsigned int number);
PackageKit__Transaction* PackageKit__Daemon_GetPackages();
PackageKit__Transaction* PackageKit__Daemon_GetRepoList();
PackageKit__Transaction* PackageKit__Daemon_RequiredBy(const libqt_list /* of libqt_string */ packageIDs);
PackageKit__Transaction* PackageKit__Daemon_RequiredBy2(const libqt_string packageID);
PackageKit__Transaction* PackageKit__Daemon_GetUpdatesDetails(const libqt_list /* of libqt_string */ packageIDs);
PackageKit__Transaction* PackageKit__Daemon_GetUpdateDetail(const libqt_string packageID);
PackageKit__Transaction* PackageKit__Daemon_GetUpdates();
PackageKit__Transaction* PackageKit__Daemon_GetDistroUpgrades();
PackageKit__Transaction* PackageKit__Daemon_UpgradeSystem(const libqt_string distroId, int kind);
PackageKit__Transaction* PackageKit__Daemon_InstallFiles(const libqt_list /* of libqt_string */ files);
PackageKit__Transaction* PackageKit__Daemon_InstallFile(const libqt_string file);
PackageKit__Transaction* PackageKit__Daemon_InstallPackages(const libqt_list /* of libqt_string */ packageIDs);
PackageKit__Transaction* PackageKit__Daemon_InstallPackage(const libqt_string packageID);
PackageKit__Transaction* PackageKit__Daemon_InstallSignature(int typeVal, const libqt_string keyID, const libqt_string packageID);
PackageKit__Transaction* PackageKit__Daemon_RefreshCache(bool force);
PackageKit__Transaction* PackageKit__Daemon_RemovePackages(const libqt_list /* of libqt_string */ packageIDs);
PackageKit__Transaction* PackageKit__Daemon_RemovePackage(const libqt_string packageID);
PackageKit__Transaction* PackageKit__Daemon_RepairSystem();
PackageKit__Transaction* PackageKit__Daemon_RepoEnable(const libqt_string repoId);
PackageKit__Transaction* PackageKit__Daemon_RepoRemove(const libqt_string repoId, bool autoremove);
PackageKit__Transaction* PackageKit__Daemon_RepoSetData(const libqt_string repoId, const libqt_string parameter, const libqt_string value);
PackageKit__Transaction* PackageKit__Daemon_Resolve(const libqt_list /* of libqt_string */ packageNames);
PackageKit__Transaction* PackageKit__Daemon_Resolve2(const libqt_string packageName);
PackageKit__Transaction* PackageKit__Daemon_SearchFiles(const libqt_list /* of libqt_string */ search);
PackageKit__Transaction* PackageKit__Daemon_SearchFiles2(const libqt_string search);
PackageKit__Transaction* PackageKit__Daemon_SearchDetails(const libqt_list /* of libqt_string */ search);
PackageKit__Transaction* PackageKit__Daemon_SearchDetails2(const libqt_string search);
PackageKit__Transaction* PackageKit__Daemon_SearchGroups(const libqt_list /* of libqt_string */ groups);
PackageKit__Transaction* PackageKit__Daemon_SearchGroup(const libqt_string group);
PackageKit__Transaction* PackageKit__Daemon_SearchGroup2(int group);
PackageKit__Transaction* PackageKit__Daemon_SearchGroups2(PackageKit__Bitfield* group);
PackageKit__Transaction* PackageKit__Daemon_SearchNames(const libqt_list /* of libqt_string */ search);
PackageKit__Transaction* PackageKit__Daemon_SearchNames2(const libqt_string search);
PackageKit__Transaction* PackageKit__Daemon_UpdatePackages(const libqt_list /* of libqt_string */ packageIDs);
PackageKit__Transaction* PackageKit__Daemon_UpdatePackage(const libqt_string packageID);
PackageKit__Transaction* PackageKit__Daemon_WhatProvides(const libqt_list /* of libqt_string */ search);
PackageKit__Transaction* PackageKit__Daemon_WhatProvides2(const libqt_string search);
void PackageKit__Daemon_IsRunningChanged(PackageKit__Daemon* self);
void PackageKit__Daemon_Connect_IsRunningChanged(PackageKit__Daemon* self, intptr_t slot);
void PackageKit__Daemon_NetworkStateChanged(PackageKit__Daemon* self);
void PackageKit__Daemon_Connect_NetworkStateChanged(PackageKit__Daemon* self, intptr_t slot);
void PackageKit__Daemon_Changed(PackageKit__Daemon* self);
void PackageKit__Daemon_Connect_Changed(PackageKit__Daemon* self, intptr_t slot);
void PackageKit__Daemon_RepoListChanged(PackageKit__Daemon* self);
void PackageKit__Daemon_Connect_RepoListChanged(PackageKit__Daemon* self, intptr_t slot);
void PackageKit__Daemon_RestartScheduled(PackageKit__Daemon* self);
void PackageKit__Daemon_Connect_RestartScheduled(PackageKit__Daemon* self, intptr_t slot);
void PackageKit__Daemon_TransactionListChanged(PackageKit__Daemon* self, const libqt_list /* of libqt_string */ tids);
void PackageKit__Daemon_Connect_TransactionListChanged(PackageKit__Daemon* self, intptr_t slot);
void PackageKit__Daemon_UpdatesChanged(PackageKit__Daemon* self);
void PackageKit__Daemon_Connect_UpdatesChanged(PackageKit__Daemon* self, intptr_t slot);
void PackageKit__Daemon_DaemonQuit(PackageKit__Daemon* self);
void PackageKit__Daemon_Connect_DaemonQuit(PackageKit__Daemon* self, intptr_t slot);
PackageKit__Transaction* PackageKit__Daemon_DownloadPackages2(const libqt_list /* of libqt_string */ packageIDs, bool storeInCache);
PackageKit__Transaction* PackageKit__Daemon_DownloadPackage2(const libqt_string packageID, bool storeInCache);
PackageKit__Transaction* PackageKit__Daemon_DependsOn22(const libqt_list /* of libqt_string */ packageIDs, int filters);
PackageKit__Transaction* PackageKit__Daemon_DependsOn3(const libqt_list /* of libqt_string */ packageIDs, int filters, bool recursive);
PackageKit__Transaction* PackageKit__Daemon_DependsOn23(const libqt_string packageID, int filters);
PackageKit__Transaction* PackageKit__Daemon_DependsOn32(const libqt_string packageID, int filters, bool recursive);
PackageKit__Transaction* PackageKit__Daemon_GetPackages1(int filters);
PackageKit__Transaction* PackageKit__Daemon_GetRepoList1(int filters);
PackageKit__Transaction* PackageKit__Daemon_RequiredBy22(const libqt_list /* of libqt_string */ packageIDs, int filters);
PackageKit__Transaction* PackageKit__Daemon_RequiredBy3(const libqt_list /* of libqt_string */ packageIDs, int filters, bool recursive);
PackageKit__Transaction* PackageKit__Daemon_RequiredBy23(const libqt_string packageID, int filters);
PackageKit__Transaction* PackageKit__Daemon_RequiredBy32(const libqt_string packageID, int filters, bool recursive);
PackageKit__Transaction* PackageKit__Daemon_GetUpdates1(int filters);
PackageKit__Transaction* PackageKit__Daemon_UpgradeSystem3(const libqt_string distroId, int kind, int flags);
PackageKit__Transaction* PackageKit__Daemon_InstallFiles2(const libqt_list /* of libqt_string */ files, int flags);
PackageKit__Transaction* PackageKit__Daemon_InstallFile2(const libqt_string file, int flags);
PackageKit__Transaction* PackageKit__Daemon_InstallPackages2(const libqt_list /* of libqt_string */ packageIDs, int flags);
PackageKit__Transaction* PackageKit__Daemon_InstallPackage2(const libqt_string packageID, int flags);
PackageKit__Transaction* PackageKit__Daemon_RemovePackages2(const libqt_list /* of libqt_string */ packageIDs, bool allowDeps);
PackageKit__Transaction* PackageKit__Daemon_RemovePackages3(const libqt_list /* of libqt_string */ packageIDs, bool allowDeps, bool autoRemove);
PackageKit__Transaction* PackageKit__Daemon_RemovePackages4(const libqt_list /* of libqt_string */ packageIDs, bool allowDeps, bool autoRemove, int flags);
PackageKit__Transaction* PackageKit__Daemon_RemovePackage2(const libqt_string packageID, bool allowDeps);
PackageKit__Transaction* PackageKit__Daemon_RemovePackage3(const libqt_string packageID, bool allowDeps, bool autoRemove);
PackageKit__Transaction* PackageKit__Daemon_RemovePackage4(const libqt_string packageID, bool allowDeps, bool autoRemove, int flags);
PackageKit__Transaction* PackageKit__Daemon_RepairSystem1(int flags);
PackageKit__Transaction* PackageKit__Daemon_RepoEnable2(const libqt_string repoId, bool enable);
PackageKit__Transaction* PackageKit__Daemon_RepoRemove3(const libqt_string repoId, bool autoremove, int flags);
PackageKit__Transaction* PackageKit__Daemon_Resolve22(const libqt_list /* of libqt_string */ packageNames, int filters);
PackageKit__Transaction* PackageKit__Daemon_Resolve23(const libqt_string packageName, int filters);
PackageKit__Transaction* PackageKit__Daemon_SearchFiles22(const libqt_list /* of libqt_string */ search, int filters);
PackageKit__Transaction* PackageKit__Daemon_SearchFiles23(const libqt_string search, int filters);
PackageKit__Transaction* PackageKit__Daemon_SearchDetails22(const libqt_list /* of libqt_string */ search, int filters);
PackageKit__Transaction* PackageKit__Daemon_SearchDetails23(const libqt_string search, int filters);
PackageKit__Transaction* PackageKit__Daemon_SearchGroups22(const libqt_list /* of libqt_string */ groups, int filters);
PackageKit__Transaction* PackageKit__Daemon_SearchGroup22(const libqt_string group, int filters);
PackageKit__Transaction* PackageKit__Daemon_SearchGroup23(int group, int filters);
PackageKit__Transaction* PackageKit__Daemon_SearchGroups23(PackageKit__Bitfield* group, int filters);
PackageKit__Transaction* PackageKit__Daemon_SearchNames22(const libqt_list /* of libqt_string */ search, int filters);
PackageKit__Transaction* PackageKit__Daemon_SearchNames23(const libqt_string search, int filters);
PackageKit__Transaction* PackageKit__Daemon_UpdatePackages2(const libqt_list /* of libqt_string */ packageIDs, int flags);
PackageKit__Transaction* PackageKit__Daemon_UpdatePackage2(const libqt_string packageID, int flags);
PackageKit__Transaction* PackageKit__Daemon_WhatProvides22(const libqt_list /* of libqt_string */ search, int filters);
PackageKit__Transaction* PackageKit__Daemon_WhatProvides23(const libqt_string search, int filters);
void PackageKit__Daemon_Delete(PackageKit__Daemon* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
