#pragma once
#ifndef SRC_EXTRAS_KIOC_LIBWORKERBASE_H
#define SRC_EXTRAS_KIOC_LIBWORKERBASE_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KIO__AuthInfo)
typedef KIO::AuthInfo KIO__AuthInfo;
#endif
typedef KIO::MetaData KIO__MetaData;
typedef KIO::UDSEntry KIO__UDSEntry;
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KIO__WorkerBase)
typedef KIO::WorkerBase KIO__WorkerBase;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KIO__WorkerResult)
typedef KIO::WorkerResult KIO__WorkerResult;
#endif
#else
typedef struct KConfigGroup KConfigGroup;
typedef struct KIO KIO;
typedef struct KIO__AuthInfo KIO__AuthInfo;
typedef struct KIO__MetaData KIO__MetaData;
typedef struct KIO__UDSEntry KIO__UDSEntry;
typedef struct KIO__WorkerBase KIO__WorkerBase;
typedef struct KIO__WorkerResult KIO__WorkerResult;
typedef struct KRemoteEncoding KRemoteEncoding;
typedef struct QDateTime QDateTime;
typedef struct QHostInfo QHostInfo;
typedef struct QUrl QUrl;
typedef struct QVariant QVariant;
#endif

KIO__WorkerResult* KIO__WorkerResult_new(const KIO__WorkerResult* param1);
void KIO__WorkerResult_OperatorAssign(KIO__WorkerResult* self, const KIO__WorkerResult* param1);
bool KIO__WorkerResult_Success(const KIO__WorkerResult* self);
int KIO__WorkerResult_Error(const KIO__WorkerResult* self);
libqt_string KIO__WorkerResult_ErrorString(const KIO__WorkerResult* self);
KIO__WorkerResult* KIO__WorkerResult_Fail();
KIO__WorkerResult* KIO__WorkerResult_Pass();
KIO__WorkerResult* KIO__WorkerResult_Fail1(int _error);
KIO__WorkerResult* KIO__WorkerResult_Fail2(int _error, const libqt_string _errorString);
void KIO__WorkerResult_Delete(KIO__WorkerResult* self);

KIO__WorkerBase* KIO__WorkerBase_new(const libqt_string protocol, const libqt_string poolSocket, const libqt_string appSocket);
void KIO__WorkerBase_Exit(KIO__WorkerBase* self);
void KIO__WorkerBase_DispatchLoop(KIO__WorkerBase* self);
void KIO__WorkerBase_Data(KIO__WorkerBase* self, const libqt_string data);
void KIO__WorkerBase_DataReq(KIO__WorkerBase* self);
void KIO__WorkerBase_WorkerStatus(KIO__WorkerBase* self, const libqt_string host, bool connected);
void KIO__WorkerBase_StatEntry(KIO__WorkerBase* self, const KIO__UDSEntry* _entry);
void KIO__WorkerBase_ListEntries(KIO__WorkerBase* self, const libqt_list /* of KIO__UDSEntry* */ _entry);
bool KIO__WorkerBase_CanResume(KIO__WorkerBase* self, unsigned long long offset);
void KIO__WorkerBase_CanResume2(KIO__WorkerBase* self);
void KIO__WorkerBase_TotalSize(KIO__WorkerBase* self, unsigned long long _bytes);
void KIO__WorkerBase_ProcessedSize(KIO__WorkerBase* self, unsigned long long _bytes);
void KIO__WorkerBase_Position(KIO__WorkerBase* self, unsigned long long _pos);
void KIO__WorkerBase_Written(KIO__WorkerBase* self, unsigned long long _bytes);
void KIO__WorkerBase_Truncated(KIO__WorkerBase* self, unsigned long long _length);
void KIO__WorkerBase_Speed(KIO__WorkerBase* self, unsigned long _bytes_per_second);
void KIO__WorkerBase_Redirection(KIO__WorkerBase* self, const QUrl* _url);
void KIO__WorkerBase_ErrorPage(KIO__WorkerBase* self);
void KIO__WorkerBase_MimeType(KIO__WorkerBase* self, const libqt_string _type);
void KIO__WorkerBase_Warning(KIO__WorkerBase* self, const libqt_string msg);
void KIO__WorkerBase_InfoMessage(KIO__WorkerBase* self, const libqt_string msg);
int KIO__WorkerBase_MessageBox(KIO__WorkerBase* self, int typeVal, const libqt_string text);
int KIO__WorkerBase_MessageBox2(KIO__WorkerBase* self, const libqt_string text, int typeVal);
int KIO__WorkerBase_SslError(KIO__WorkerBase* self, const libqt_map /* of libqt_string to QVariant* */ sslData);
void KIO__WorkerBase_SetMetaData(KIO__WorkerBase* self, const libqt_string key, const libqt_string value);
bool KIO__WorkerBase_HasMetaData(const KIO__WorkerBase* self, const libqt_string key);
libqt_string KIO__WorkerBase_MetaData(const KIO__WorkerBase* self, const libqt_string key);
KIO__MetaData* KIO__WorkerBase_AllMetaData(const KIO__WorkerBase* self);
libqt_map /* of libqt_string to QVariant* */ KIO__WorkerBase_MapConfig(const KIO__WorkerBase* self);
bool KIO__WorkerBase_ConfigValue(const KIO__WorkerBase* self, const libqt_string key, bool defaultValue);
int KIO__WorkerBase_ConfigValue2(const KIO__WorkerBase* self, const libqt_string key, int defaultValue);
libqt_string KIO__WorkerBase_ConfigValue3(const KIO__WorkerBase* self, const libqt_string key);
KConfigGroup* KIO__WorkerBase_Config(KIO__WorkerBase* self);
KRemoteEncoding* KIO__WorkerBase_RemoteEncoding(KIO__WorkerBase* self);
void KIO__WorkerBase_AppConnectionMade(KIO__WorkerBase* self);
void KIO__WorkerBase_SetHost(KIO__WorkerBase* self, const libqt_string host, uint16_t port, const libqt_string user, const libqt_string pass);
KIO__WorkerResult* KIO__WorkerBase_OpenConnection(KIO__WorkerBase* self);
void KIO__WorkerBase_CloseConnection(KIO__WorkerBase* self);
KIO__WorkerResult* KIO__WorkerBase_Get(KIO__WorkerBase* self, const QUrl* url);
KIO__WorkerResult* KIO__WorkerBase_Open(KIO__WorkerBase* self, const QUrl* url, int mode);
KIO__WorkerResult* KIO__WorkerBase_Read(KIO__WorkerBase* self, unsigned long long size);
KIO__WorkerResult* KIO__WorkerBase_Write(KIO__WorkerBase* self, const libqt_string data);
KIO__WorkerResult* KIO__WorkerBase_Seek(KIO__WorkerBase* self, unsigned long long offset);
KIO__WorkerResult* KIO__WorkerBase_Truncate(KIO__WorkerBase* self, unsigned long long size);
KIO__WorkerResult* KIO__WorkerBase_Close(KIO__WorkerBase* self);
KIO__WorkerResult* KIO__WorkerBase_Put(KIO__WorkerBase* self, const QUrl* url, int permissions, int flags);
KIO__WorkerResult* KIO__WorkerBase_Stat(KIO__WorkerBase* self, const QUrl* url);
KIO__WorkerResult* KIO__WorkerBase_Mimetype(KIO__WorkerBase* self, const QUrl* url);
KIO__WorkerResult* KIO__WorkerBase_ListDir(KIO__WorkerBase* self, const QUrl* url);
KIO__WorkerResult* KIO__WorkerBase_Mkdir(KIO__WorkerBase* self, const QUrl* url, int permissions);
KIO__WorkerResult* KIO__WorkerBase_Rename(KIO__WorkerBase* self, const QUrl* src, const QUrl* dest, int flags);
KIO__WorkerResult* KIO__WorkerBase_Symlink(KIO__WorkerBase* self, const libqt_string target, const QUrl* dest, int flags);
KIO__WorkerResult* KIO__WorkerBase_Chmod(KIO__WorkerBase* self, const QUrl* url, int permissions);
KIO__WorkerResult* KIO__WorkerBase_Chown(KIO__WorkerBase* self, const QUrl* url, const libqt_string owner, const libqt_string group);
KIO__WorkerResult* KIO__WorkerBase_SetModificationTime(KIO__WorkerBase* self, const QUrl* url, const QDateTime* mtime);
KIO__WorkerResult* KIO__WorkerBase_Copy(KIO__WorkerBase* self, const QUrl* src, const QUrl* dest, int permissions, int flags);
KIO__WorkerResult* KIO__WorkerBase_Del(KIO__WorkerBase* self, const QUrl* url, bool isfile);
KIO__WorkerResult* KIO__WorkerBase_Special(KIO__WorkerBase* self, const libqt_string data);
KIO__WorkerResult* KIO__WorkerBase_FileSystemFreeSpace(KIO__WorkerBase* self, const QUrl* url);
void KIO__WorkerBase_WorkerStatus2(KIO__WorkerBase* self);
void KIO__WorkerBase_ReparseConfiguration(KIO__WorkerBase* self);
int KIO__WorkerBase_ConnectTimeout(KIO__WorkerBase* self);
int KIO__WorkerBase_ProxyConnectTimeout(KIO__WorkerBase* self);
int KIO__WorkerBase_ResponseTimeout(KIO__WorkerBase* self);
int KIO__WorkerBase_ReadTimeout(KIO__WorkerBase* self);
void KIO__WorkerBase_SetTimeoutSpecialCommand(KIO__WorkerBase* self, int timeout);
int KIO__WorkerBase_ReadData(KIO__WorkerBase* self, libqt_string buffer);
void KIO__WorkerBase_ListEntry(KIO__WorkerBase* self, const KIO__UDSEntry* entry);
void KIO__WorkerBase_ConnectWorker(KIO__WorkerBase* self, const libqt_string path);
void KIO__WorkerBase_DisconnectWorker(KIO__WorkerBase* self);
int KIO__WorkerBase_OpenPasswordDialog(KIO__WorkerBase* self, KIO__AuthInfo* info);
bool KIO__WorkerBase_CheckCachedAuthentication(KIO__WorkerBase* self, KIO__AuthInfo* info);
bool KIO__WorkerBase_CacheAuthentication(KIO__WorkerBase* self, const KIO__AuthInfo* info);
int KIO__WorkerBase_WaitForAnswer(KIO__WorkerBase* self, int expected1, int expected2, libqt_string data);
void KIO__WorkerBase_SendMetaData(KIO__WorkerBase* self);
void KIO__WorkerBase_SendAndKeepMetaData(KIO__WorkerBase* self);
bool KIO__WorkerBase_WasKilled(const KIO__WorkerBase* self);
void KIO__WorkerBase_LookupHost(KIO__WorkerBase* self, const libqt_string host);
int KIO__WorkerBase_WaitForHostInfo(KIO__WorkerBase* self, QHostInfo* info);
int KIO__WorkerBase_RequestPrivilegeOperation(KIO__WorkerBase* self, const libqt_string operationDetails);
void KIO__WorkerBase_AddTemporaryAuthorization(KIO__WorkerBase* self, const libqt_string action);
void KIO__WorkerBase_SetIncomingMetaData(KIO__WorkerBase* self, const KIO__MetaData* metaData);
int KIO__WorkerBase_MessageBox3(KIO__WorkerBase* self, int typeVal, const libqt_string text, const libqt_string title);
int KIO__WorkerBase_MessageBox4(KIO__WorkerBase* self, int typeVal, const libqt_string text, const libqt_string title, const libqt_string primaryActionText);
int KIO__WorkerBase_MessageBox5(KIO__WorkerBase* self, int typeVal, const libqt_string text, const libqt_string title, const libqt_string primaryActionText, const libqt_string secondaryActionText);
int KIO__WorkerBase_MessageBox32(KIO__WorkerBase* self, const libqt_string text, int typeVal, const libqt_string title);
int KIO__WorkerBase_MessageBox42(KIO__WorkerBase* self, const libqt_string text, int typeVal, const libqt_string title, const libqt_string primaryActionText);
int KIO__WorkerBase_MessageBox52(KIO__WorkerBase* self, const libqt_string text, int typeVal, const libqt_string title, const libqt_string primaryActionText, const libqt_string secondaryActionText);
int KIO__WorkerBase_MessageBox6(KIO__WorkerBase* self, const libqt_string text, int typeVal, const libqt_string title, const libqt_string primaryActionText, const libqt_string secondaryActionText, const libqt_string dontAskAgainName);
libqt_string KIO__WorkerBase_ConfigValue22(const KIO__WorkerBase* self, const libqt_string key, const libqt_string defaultValue);
void KIO__WorkerBase_SetTimeoutSpecialCommand2(KIO__WorkerBase* self, int timeout, const libqt_string data);
int KIO__WorkerBase_OpenPasswordDialog2(KIO__WorkerBase* self, KIO__AuthInfo* info, const libqt_string errorMsg);
int KIO__WorkerBase_WaitForAnswer4(KIO__WorkerBase* self, int expected1, int expected2, libqt_string data, int* pCmd);
void KIO__WorkerBase_OnAppConnectionMade(KIO__WorkerBase* self, intptr_t slot);
void KIO__WorkerBase_QBaseAppConnectionMade(KIO__WorkerBase* self);
void KIO__WorkerBase_OnSetHost(KIO__WorkerBase* self, intptr_t slot);
void KIO__WorkerBase_QBaseSetHost(KIO__WorkerBase* self, const libqt_string host, uint16_t port, const libqt_string user, const libqt_string pass);
void KIO__WorkerBase_OnOpenConnection(KIO__WorkerBase* self, intptr_t slot);
KIO__WorkerResult* KIO__WorkerBase_QBaseOpenConnection(KIO__WorkerBase* self);
void KIO__WorkerBase_OnCloseConnection(KIO__WorkerBase* self, intptr_t slot);
void KIO__WorkerBase_QBaseCloseConnection(KIO__WorkerBase* self);
void KIO__WorkerBase_OnGet(KIO__WorkerBase* self, intptr_t slot);
KIO__WorkerResult* KIO__WorkerBase_QBaseGet(KIO__WorkerBase* self, const QUrl* url);
void KIO__WorkerBase_OnOpen(KIO__WorkerBase* self, intptr_t slot);
KIO__WorkerResult* KIO__WorkerBase_QBaseOpen(KIO__WorkerBase* self, const QUrl* url, int mode);
void KIO__WorkerBase_OnRead(KIO__WorkerBase* self, intptr_t slot);
KIO__WorkerResult* KIO__WorkerBase_QBaseRead(KIO__WorkerBase* self, unsigned long long size);
void KIO__WorkerBase_OnWrite(KIO__WorkerBase* self, intptr_t slot);
KIO__WorkerResult* KIO__WorkerBase_QBaseWrite(KIO__WorkerBase* self, const libqt_string data);
void KIO__WorkerBase_OnSeek(KIO__WorkerBase* self, intptr_t slot);
KIO__WorkerResult* KIO__WorkerBase_QBaseSeek(KIO__WorkerBase* self, unsigned long long offset);
void KIO__WorkerBase_OnTruncate(KIO__WorkerBase* self, intptr_t slot);
KIO__WorkerResult* KIO__WorkerBase_QBaseTruncate(KIO__WorkerBase* self, unsigned long long size);
void KIO__WorkerBase_OnClose(KIO__WorkerBase* self, intptr_t slot);
KIO__WorkerResult* KIO__WorkerBase_QBaseClose(KIO__WorkerBase* self);
void KIO__WorkerBase_OnPut(KIO__WorkerBase* self, intptr_t slot);
KIO__WorkerResult* KIO__WorkerBase_QBasePut(KIO__WorkerBase* self, const QUrl* url, int permissions, int flags);
void KIO__WorkerBase_OnStat(KIO__WorkerBase* self, intptr_t slot);
KIO__WorkerResult* KIO__WorkerBase_QBaseStat(KIO__WorkerBase* self, const QUrl* url);
void KIO__WorkerBase_OnMimetype(KIO__WorkerBase* self, intptr_t slot);
KIO__WorkerResult* KIO__WorkerBase_QBaseMimetype(KIO__WorkerBase* self, const QUrl* url);
void KIO__WorkerBase_OnListDir(KIO__WorkerBase* self, intptr_t slot);
KIO__WorkerResult* KIO__WorkerBase_QBaseListDir(KIO__WorkerBase* self, const QUrl* url);
void KIO__WorkerBase_OnMkdir(KIO__WorkerBase* self, intptr_t slot);
KIO__WorkerResult* KIO__WorkerBase_QBaseMkdir(KIO__WorkerBase* self, const QUrl* url, int permissions);
void KIO__WorkerBase_OnRename(KIO__WorkerBase* self, intptr_t slot);
KIO__WorkerResult* KIO__WorkerBase_QBaseRename(KIO__WorkerBase* self, const QUrl* src, const QUrl* dest, int flags);
void KIO__WorkerBase_OnSymlink(KIO__WorkerBase* self, intptr_t slot);
KIO__WorkerResult* KIO__WorkerBase_QBaseSymlink(KIO__WorkerBase* self, const libqt_string target, const QUrl* dest, int flags);
void KIO__WorkerBase_OnChmod(KIO__WorkerBase* self, intptr_t slot);
KIO__WorkerResult* KIO__WorkerBase_QBaseChmod(KIO__WorkerBase* self, const QUrl* url, int permissions);
void KIO__WorkerBase_OnChown(KIO__WorkerBase* self, intptr_t slot);
KIO__WorkerResult* KIO__WorkerBase_QBaseChown(KIO__WorkerBase* self, const QUrl* url, const libqt_string owner, const libqt_string group);
void KIO__WorkerBase_OnSetModificationTime(KIO__WorkerBase* self, intptr_t slot);
KIO__WorkerResult* KIO__WorkerBase_QBaseSetModificationTime(KIO__WorkerBase* self, const QUrl* url, const QDateTime* mtime);
void KIO__WorkerBase_OnCopy(KIO__WorkerBase* self, intptr_t slot);
KIO__WorkerResult* KIO__WorkerBase_QBaseCopy(KIO__WorkerBase* self, const QUrl* src, const QUrl* dest, int permissions, int flags);
void KIO__WorkerBase_OnDel(KIO__WorkerBase* self, intptr_t slot);
KIO__WorkerResult* KIO__WorkerBase_QBaseDel(KIO__WorkerBase* self, const QUrl* url, bool isfile);
void KIO__WorkerBase_OnSpecial(KIO__WorkerBase* self, intptr_t slot);
KIO__WorkerResult* KIO__WorkerBase_QBaseSpecial(KIO__WorkerBase* self, const libqt_string data);
void KIO__WorkerBase_OnFileSystemFreeSpace(KIO__WorkerBase* self, intptr_t slot);
KIO__WorkerResult* KIO__WorkerBase_QBaseFileSystemFreeSpace(KIO__WorkerBase* self, const QUrl* url);
void KIO__WorkerBase_OnWorkerStatus2(KIO__WorkerBase* self, intptr_t slot);
void KIO__WorkerBase_QBaseWorkerStatus2(KIO__WorkerBase* self);
void KIO__WorkerBase_OnReparseConfiguration(KIO__WorkerBase* self, intptr_t slot);
void KIO__WorkerBase_QBaseReparseConfiguration(KIO__WorkerBase* self);
void KIO__WorkerBase_Delete(KIO__WorkerBase* self);

libqt_string KIO_UnsupportedActionErrorString(const libqt_string param1, int param2);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
