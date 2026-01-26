#pragma once
#ifndef SRC_FOSS_EXTRAS_PACKAGEKITQTC_LIBTRANSACTION_H
#define SRC_FOSS_EXTRAS_PACKAGEKITQTC_LIBTRANSACTION_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
typedef PackageKit::Details PackageKit__Details;
typedef PackageKit::Transaction PackageKit__Transaction;
#else
typedef struct PackageKit__Details PackageKit__Details;
typedef struct PackageKit__Transaction PackageKit__Transaction;
typedef struct QChildEvent QChildEvent;
typedef struct QDBusObjectPath QDBusObjectPath;
typedef struct QDateTime QDateTime;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
#endif

PackageKit__Transaction* PackageKit__Transaction_new(const QDBusObjectPath* tid);
QMetaObject* PackageKit__Transaction_MetaObject(const PackageKit__Transaction* self);
void* PackageKit__Transaction_Metacast(PackageKit__Transaction* self, const char* param1);
int PackageKit__Transaction_Metacall(PackageKit__Transaction* self, int param1, int param2, void** param3);
QDBusObjectPath* PackageKit__Transaction_Tid(const PackageKit__Transaction* self);
bool PackageKit__Transaction_AllowCancel(const PackageKit__Transaction* self);
bool PackageKit__Transaction_IsCallerActive(const PackageKit__Transaction* self);
libqt_string PackageKit__Transaction_LastPackage(const PackageKit__Transaction* self);
unsigned int PackageKit__Transaction_Percentage(const PackageKit__Transaction* self);
unsigned int PackageKit__Transaction_ElapsedTime(const PackageKit__Transaction* self);
unsigned int PackageKit__Transaction_RemainingTime(const PackageKit__Transaction* self);
unsigned int PackageKit__Transaction_Speed(const PackageKit__Transaction* self);
unsigned long long PackageKit__Transaction_DownloadSizeRemaining(const PackageKit__Transaction* self);
int PackageKit__Transaction_Role(const PackageKit__Transaction* self);
int PackageKit__Transaction_Status(const PackageKit__Transaction* self);
int PackageKit__Transaction_TransactionFlags(const PackageKit__Transaction* self);
QDateTime* PackageKit__Transaction_Timespec(const PackageKit__Transaction* self);
bool PackageKit__Transaction_Succeeded(const PackageKit__Transaction* self);
unsigned int PackageKit__Transaction_Duration(const PackageKit__Transaction* self);
libqt_string PackageKit__Transaction_Data(const PackageKit__Transaction* self);
unsigned int PackageKit__Transaction_Uid(const PackageKit__Transaction* self);
libqt_string PackageKit__Transaction_SenderName(const PackageKit__Transaction* self);
libqt_string PackageKit__Transaction_Cmdline(const PackageKit__Transaction* self);
libqt_string PackageKit__Transaction_PackageName(const libqt_string packageID);
libqt_string PackageKit__Transaction_PackageVersion(const libqt_string packageID);
libqt_string PackageKit__Transaction_PackageArch(const libqt_string packageID);
libqt_string PackageKit__Transaction_PackageData(const libqt_string packageID);
void PackageKit__Transaction_AllowCancelChanged(PackageKit__Transaction* self);
void PackageKit__Transaction_Connect_AllowCancelChanged(PackageKit__Transaction* self, intptr_t slot);
void PackageKit__Transaction_IsCallerActiveChanged(PackageKit__Transaction* self);
void PackageKit__Transaction_Connect_IsCallerActiveChanged(PackageKit__Transaction* self, intptr_t slot);
void PackageKit__Transaction_DownloadSizeRemainingChanged(PackageKit__Transaction* self);
void PackageKit__Transaction_Connect_DownloadSizeRemainingChanged(PackageKit__Transaction* self, intptr_t slot);
void PackageKit__Transaction_ElapsedTimeChanged(PackageKit__Transaction* self);
void PackageKit__Transaction_Connect_ElapsedTimeChanged(PackageKit__Transaction* self, intptr_t slot);
void PackageKit__Transaction_LastPackageChanged(PackageKit__Transaction* self);
void PackageKit__Transaction_Connect_LastPackageChanged(PackageKit__Transaction* self, intptr_t slot);
void PackageKit__Transaction_PercentageChanged(PackageKit__Transaction* self);
void PackageKit__Transaction_Connect_PercentageChanged(PackageKit__Transaction* self, intptr_t slot);
void PackageKit__Transaction_RemainingTimeChanged(PackageKit__Transaction* self);
void PackageKit__Transaction_Connect_RemainingTimeChanged(PackageKit__Transaction* self, intptr_t slot);
void PackageKit__Transaction_RoleChanged(PackageKit__Transaction* self);
void PackageKit__Transaction_Connect_RoleChanged(PackageKit__Transaction* self, intptr_t slot);
void PackageKit__Transaction_SpeedChanged(PackageKit__Transaction* self);
void PackageKit__Transaction_Connect_SpeedChanged(PackageKit__Transaction* self, intptr_t slot);
void PackageKit__Transaction_StatusChanged(PackageKit__Transaction* self);
void PackageKit__Transaction_Connect_StatusChanged(PackageKit__Transaction* self, intptr_t slot);
void PackageKit__Transaction_TransactionFlagsChanged(PackageKit__Transaction* self);
void PackageKit__Transaction_Connect_TransactionFlagsChanged(PackageKit__Transaction* self, intptr_t slot);
void PackageKit__Transaction_UidChanged(PackageKit__Transaction* self);
void PackageKit__Transaction_Connect_UidChanged(PackageKit__Transaction* self, intptr_t slot);
void PackageKit__Transaction_SenderNameChanged(PackageKit__Transaction* self);
void PackageKit__Transaction_Connect_SenderNameChanged(PackageKit__Transaction* self, intptr_t slot);
void PackageKit__Transaction_Category(PackageKit__Transaction* self, const libqt_string parentId, const libqt_string categoryId, const libqt_string name, const libqt_string summary, const libqt_string icon);
void PackageKit__Transaction_Connect_Category(PackageKit__Transaction* self, intptr_t slot);
void PackageKit__Transaction_DistroUpgrade(PackageKit__Transaction* self, int typeVal, const libqt_string name, const libqt_string description);
void PackageKit__Transaction_Connect_DistroUpgrade(PackageKit__Transaction* self, intptr_t slot);
void PackageKit__Transaction_ErrorCode(PackageKit__Transaction* self, int errorVal, const libqt_string details);
void PackageKit__Transaction_Connect_ErrorCode(PackageKit__Transaction* self, intptr_t slot);
void PackageKit__Transaction_EulaRequired(PackageKit__Transaction* self, const libqt_string eulaID, const libqt_string packageID, const libqt_string vendor, const libqt_string licenseAgreement);
void PackageKit__Transaction_Connect_EulaRequired(PackageKit__Transaction* self, intptr_t slot);
void PackageKit__Transaction_MediaChangeRequired(PackageKit__Transaction* self, int typeVal, const libqt_string id, const libqt_string text);
void PackageKit__Transaction_Connect_MediaChangeRequired(PackageKit__Transaction* self, intptr_t slot);
void PackageKit__Transaction_ItemProgress(PackageKit__Transaction* self, const libqt_string itemID, int status, unsigned int percentage);
void PackageKit__Transaction_Connect_ItemProgress(PackageKit__Transaction* self, intptr_t slot);
void PackageKit__Transaction_Files(PackageKit__Transaction* self, const libqt_string packageID, const libqt_list /* of libqt_string */ filenames);
void PackageKit__Transaction_Connect_Files(PackageKit__Transaction* self, intptr_t slot);
void PackageKit__Transaction_Finished(PackageKit__Transaction* self, int status, unsigned int runtime);
void PackageKit__Transaction_Connect_Finished(PackageKit__Transaction* self, intptr_t slot);
void PackageKit__Transaction_Package(PackageKit__Transaction* self, int info, const libqt_string packageID, const libqt_string summary);
void PackageKit__Transaction_Connect_Package(PackageKit__Transaction* self, intptr_t slot);
void PackageKit__Transaction_Details(PackageKit__Transaction* self, const PackageKit__Details* values);
void PackageKit__Transaction_Connect_Details(PackageKit__Transaction* self, intptr_t slot);
void PackageKit__Transaction_UpdateDetail(PackageKit__Transaction* self, const libqt_string packageID, const libqt_list /* of libqt_string */ updates, const libqt_list /* of libqt_string */ obsoletes, const libqt_list /* of libqt_string */ vendorUrls, const libqt_list /* of libqt_string */ bugzillaUrls, const libqt_list /* of libqt_string */ cveUrls, int restart, const libqt_string updateText, const libqt_string changelog, int state, const QDateTime* issued, const QDateTime* updated);
void PackageKit__Transaction_Connect_UpdateDetail(PackageKit__Transaction* self, intptr_t slot);
void PackageKit__Transaction_RepoDetail(PackageKit__Transaction* self, const libqt_string repoId, const libqt_string description, bool enabled);
void PackageKit__Transaction_Connect_RepoDetail(PackageKit__Transaction* self, intptr_t slot);
void PackageKit__Transaction_RepoSignatureRequired(PackageKit__Transaction* self, const libqt_string packageID, const libqt_string repoName, const libqt_string keyUrl, const libqt_string keyUserid, const libqt_string keyId, const libqt_string keyFingerprint, const libqt_string keyTimestamp, int typeVal);
void PackageKit__Transaction_Connect_RepoSignatureRequired(PackageKit__Transaction* self, intptr_t slot);
void PackageKit__Transaction_RequireRestart(PackageKit__Transaction* self, int typeVal, const libqt_string packageID);
void PackageKit__Transaction_Connect_RequireRestart(PackageKit__Transaction* self, intptr_t slot);
void PackageKit__Transaction_Transaction(PackageKit__Transaction* self, PackageKit__Transaction* transaction);
void PackageKit__Transaction_Connect_Transaction(PackageKit__Transaction* self, intptr_t slot);
void PackageKit__Transaction_ConnectNotify(PackageKit__Transaction* self, const QMetaMethod* signal);
void PackageKit__Transaction_DisconnectNotify(PackageKit__Transaction* self, const QMetaMethod* signal);
void PackageKit__Transaction_OnMetaObject(const PackageKit__Transaction* self, intptr_t slot);
QMetaObject* PackageKit__Transaction_QBaseMetaObject(const PackageKit__Transaction* self);
void PackageKit__Transaction_OnMetacast(PackageKit__Transaction* self, intptr_t slot);
void* PackageKit__Transaction_QBaseMetacast(PackageKit__Transaction* self, const char* param1);
void PackageKit__Transaction_OnMetacall(PackageKit__Transaction* self, intptr_t slot);
int PackageKit__Transaction_QBaseMetacall(PackageKit__Transaction* self, int param1, int param2, void** param3);
void PackageKit__Transaction_OnConnectNotify(PackageKit__Transaction* self, intptr_t slot);
void PackageKit__Transaction_QBaseConnectNotify(PackageKit__Transaction* self, const QMetaMethod* signal);
void PackageKit__Transaction_OnDisconnectNotify(PackageKit__Transaction* self, intptr_t slot);
void PackageKit__Transaction_QBaseDisconnectNotify(PackageKit__Transaction* self, const QMetaMethod* signal);
bool PackageKit__Transaction_Event(PackageKit__Transaction* self, QEvent* event);
void PackageKit__Transaction_OnEvent(PackageKit__Transaction* self, intptr_t slot);
bool PackageKit__Transaction_QBaseEvent(PackageKit__Transaction* self, QEvent* event);
bool PackageKit__Transaction_EventFilter(PackageKit__Transaction* self, QObject* watched, QEvent* event);
void PackageKit__Transaction_OnEventFilter(PackageKit__Transaction* self, intptr_t slot);
bool PackageKit__Transaction_QBaseEventFilter(PackageKit__Transaction* self, QObject* watched, QEvent* event);
void PackageKit__Transaction_TimerEvent(PackageKit__Transaction* self, QTimerEvent* event);
void PackageKit__Transaction_OnTimerEvent(PackageKit__Transaction* self, intptr_t slot);
void PackageKit__Transaction_QBaseTimerEvent(PackageKit__Transaction* self, QTimerEvent* event);
void PackageKit__Transaction_ChildEvent(PackageKit__Transaction* self, QChildEvent* event);
void PackageKit__Transaction_OnChildEvent(PackageKit__Transaction* self, intptr_t slot);
void PackageKit__Transaction_QBaseChildEvent(PackageKit__Transaction* self, QChildEvent* event);
void PackageKit__Transaction_CustomEvent(PackageKit__Transaction* self, QEvent* event);
void PackageKit__Transaction_OnCustomEvent(PackageKit__Transaction* self, intptr_t slot);
void PackageKit__Transaction_QBaseCustomEvent(PackageKit__Transaction* self, QEvent* event);
int PackageKit__Transaction_ParseError(PackageKit__Transaction* self, const libqt_string errorName);
void PackageKit__Transaction_OnParseError(PackageKit__Transaction* self, intptr_t slot);
int PackageKit__Transaction_QBaseParseError(PackageKit__Transaction* self, const libqt_string errorName);
QObject* PackageKit__Transaction_Sender(const PackageKit__Transaction* self);
void PackageKit__Transaction_OnSender(const PackageKit__Transaction* self, intptr_t slot);
QObject* PackageKit__Transaction_QBaseSender(const PackageKit__Transaction* self);
int PackageKit__Transaction_SenderSignalIndex(const PackageKit__Transaction* self);
void PackageKit__Transaction_OnSenderSignalIndex(const PackageKit__Transaction* self, intptr_t slot);
int PackageKit__Transaction_QBaseSenderSignalIndex(const PackageKit__Transaction* self);
int PackageKit__Transaction_Receivers(const PackageKit__Transaction* self, const char* signal);
void PackageKit__Transaction_OnReceivers(const PackageKit__Transaction* self, intptr_t slot);
int PackageKit__Transaction_QBaseReceivers(const PackageKit__Transaction* self, const char* signal);
bool PackageKit__Transaction_IsSignalConnected(const PackageKit__Transaction* self, const QMetaMethod* signal);
void PackageKit__Transaction_OnIsSignalConnected(const PackageKit__Transaction* self, intptr_t slot);
bool PackageKit__Transaction_QBaseIsSignalConnected(const PackageKit__Transaction* self, const QMetaMethod* signal);
void PackageKit__Transaction_Delete(PackageKit__Transaction* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
