#pragma once
#ifndef SRC_FOSS_EXTRAS_KWINDOWSYSTEMC_LIBKSTARTUPINFO_H
#define SRC_FOSS_EXTRAS_KWINDOWSYSTEMC_LIBKSTARTUPINFO_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KStartupInfo__Data)
typedef KStartupInfo::Data KStartupInfo__Data;
#endif
#else
typedef struct KStartupInfo KStartupInfo;
typedef struct KStartupInfoData KStartupInfoData;
typedef struct KStartupInfoId KStartupInfoId;
typedef struct KStartupInfo__Data KStartupInfo__Data;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
typedef struct QWindow QWindow;
#endif

KStartupInfo* KStartupInfo_new(int flags);
KStartupInfo* KStartupInfo_new2(int flags, QObject* parent);
QMetaObject* KStartupInfo_MetaObject(const KStartupInfo* self);
void* KStartupInfo_Metacast(KStartupInfo* self, const char* param1);
int KStartupInfo_Metacall(KStartupInfo* self, int param1, int param2, void** param3);
libqt_string KStartupInfo_Tr(const char* s);
void KStartupInfo_AppStarted();
void KStartupInfo_AppStarted2(const libqt_string startup_id);
void KStartupInfo_SetStartupId(const libqt_string startup_id);
void KStartupInfo_SetNewStartupId(QWindow* window, const libqt_string startup_id);
libqt_string KStartupInfo_CreateNewStartupId();
libqt_string KStartupInfo_CreateNewStartupIdForTimestamp(unsigned int timestamp);
bool KStartupInfo_SendStartup(const KStartupInfoId* id, const KStartupInfoData* data);
bool KStartupInfo_SendChange(const KStartupInfoId* id, const KStartupInfoData* data);
bool KStartupInfo_SendFinish(const KStartupInfoId* id);
bool KStartupInfo_SendFinish2(const KStartupInfoId* id, const KStartupInfoData* data);
void KStartupInfo_ResetStartupEnv();
int KStartupInfo_CheckStartup(KStartupInfo* self, uintptr_t w);
int KStartupInfo_CheckStartup2(KStartupInfo* self, uintptr_t w, KStartupInfoId* id);
int KStartupInfo_CheckStartup3(KStartupInfo* self, uintptr_t w, KStartupInfoData* data);
int KStartupInfo_CheckStartup4(KStartupInfo* self, uintptr_t w, KStartupInfoId* id, KStartupInfoData* data);
void KStartupInfo_SetTimeout(KStartupInfo* self, unsigned int secs);
libqt_string KStartupInfo_WindowStartupId(uintptr_t w);
void KStartupInfo_GotNewStartup(KStartupInfo* self, const KStartupInfoId* id, const KStartupInfoData* data);
void KStartupInfo_Connect_GotNewStartup(KStartupInfo* self, intptr_t slot);
void KStartupInfo_GotStartupChange(KStartupInfo* self, const KStartupInfoId* id, const KStartupInfoData* data);
void KStartupInfo_Connect_GotStartupChange(KStartupInfo* self, intptr_t slot);
void KStartupInfo_GotRemoveStartup(KStartupInfo* self, const KStartupInfoId* id, const KStartupInfoData* data);
void KStartupInfo_Connect_GotRemoveStartup(KStartupInfo* self, intptr_t slot);
void KStartupInfo_CustomEvent(KStartupInfo* self, QEvent* e_P);
libqt_string KStartupInfo_Tr2(const char* s, const char* c);
libqt_string KStartupInfo_Tr3(const char* s, const char* c, int n);
void KStartupInfo_OnMetacall(KStartupInfo* self, intptr_t slot);
int KStartupInfo_QBaseMetacall(KStartupInfo* self, int param1, int param2, void** param3);
void KStartupInfo_OnCustomEvent(KStartupInfo* self, intptr_t slot);
void KStartupInfo_QBaseCustomEvent(KStartupInfo* self, QEvent* e_P);
bool KStartupInfo_Event(KStartupInfo* self, QEvent* event);
void KStartupInfo_OnEvent(KStartupInfo* self, intptr_t slot);
bool KStartupInfo_QBaseEvent(KStartupInfo* self, QEvent* event);
bool KStartupInfo_EventFilter(KStartupInfo* self, QObject* watched, QEvent* event);
void KStartupInfo_OnEventFilter(KStartupInfo* self, intptr_t slot);
bool KStartupInfo_QBaseEventFilter(KStartupInfo* self, QObject* watched, QEvent* event);
void KStartupInfo_TimerEvent(KStartupInfo* self, QTimerEvent* event);
void KStartupInfo_OnTimerEvent(KStartupInfo* self, intptr_t slot);
void KStartupInfo_QBaseTimerEvent(KStartupInfo* self, QTimerEvent* event);
void KStartupInfo_ChildEvent(KStartupInfo* self, QChildEvent* event);
void KStartupInfo_OnChildEvent(KStartupInfo* self, intptr_t slot);
void KStartupInfo_QBaseChildEvent(KStartupInfo* self, QChildEvent* event);
void KStartupInfo_ConnectNotify(KStartupInfo* self, const QMetaMethod* signal);
void KStartupInfo_OnConnectNotify(KStartupInfo* self, intptr_t slot);
void KStartupInfo_QBaseConnectNotify(KStartupInfo* self, const QMetaMethod* signal);
void KStartupInfo_DisconnectNotify(KStartupInfo* self, const QMetaMethod* signal);
void KStartupInfo_OnDisconnectNotify(KStartupInfo* self, intptr_t slot);
void KStartupInfo_QBaseDisconnectNotify(KStartupInfo* self, const QMetaMethod* signal);
QObject* KStartupInfo_Sender(const KStartupInfo* self);
void KStartupInfo_OnSender(const KStartupInfo* self, intptr_t slot);
QObject* KStartupInfo_QBaseSender(const KStartupInfo* self);
int KStartupInfo_SenderSignalIndex(const KStartupInfo* self);
void KStartupInfo_OnSenderSignalIndex(const KStartupInfo* self, intptr_t slot);
int KStartupInfo_QBaseSenderSignalIndex(const KStartupInfo* self);
int KStartupInfo_Receivers(const KStartupInfo* self, const char* signal);
void KStartupInfo_OnReceivers(const KStartupInfo* self, intptr_t slot);
int KStartupInfo_QBaseReceivers(const KStartupInfo* self, const char* signal);
bool KStartupInfo_IsSignalConnected(const KStartupInfo* self, const QMetaMethod* signal);
void KStartupInfo_OnIsSignalConnected(const KStartupInfo* self, intptr_t slot);
bool KStartupInfo_QBaseIsSignalConnected(const KStartupInfo* self, const QMetaMethod* signal);
void KStartupInfo_Delete(KStartupInfo* self);

KStartupInfoId* KStartupInfoId_new();
KStartupInfoId* KStartupInfoId_new2(const KStartupInfoId* data);
bool KStartupInfoId_OperatorEqual(const KStartupInfoId* self, const KStartupInfoId* id);
bool KStartupInfoId_OperatorNotEqual(const KStartupInfoId* self, const KStartupInfoId* id);
bool KStartupInfoId_IsNull(const KStartupInfoId* self);
void KStartupInfoId_InitId(KStartupInfoId* self);
libqt_string KStartupInfoId_Id(const KStartupInfoId* self);
unsigned long KStartupInfoId_Timestamp(const KStartupInfoId* self);
bool KStartupInfoId_SetupStartupEnv(const KStartupInfoId* self);
void KStartupInfoId_OperatorAssign(KStartupInfoId* self, const KStartupInfoId* data);
bool KStartupInfoId_OperatorLesser(const KStartupInfoId* self, const KStartupInfoId* id);
void KStartupInfoId_InitId1(KStartupInfoId* self, const libqt_string id);
void KStartupInfoId_Delete(KStartupInfoId* self);

KStartupInfoData* KStartupInfoData_new();
KStartupInfoData* KStartupInfoData_new2(const KStartupInfoData* data);
void KStartupInfoData_SetBin(KStartupInfoData* self, const libqt_string bin);
libqt_string KStartupInfoData_Bin(const KStartupInfoData* self);
void KStartupInfoData_SetName(KStartupInfoData* self, const libqt_string name);
libqt_string KStartupInfoData_FindName(const KStartupInfoData* self);
libqt_string KStartupInfoData_Name(const KStartupInfoData* self);
void KStartupInfoData_SetDescription(KStartupInfoData* self, const libqt_string descr);
libqt_string KStartupInfoData_FindDescription(const KStartupInfoData* self);
libqt_string KStartupInfoData_Description(const KStartupInfoData* self);
void KStartupInfoData_SetIcon(KStartupInfoData* self, const libqt_string icon);
libqt_string KStartupInfoData_FindIcon(const KStartupInfoData* self);
libqt_string KStartupInfoData_Icon(const KStartupInfoData* self);
void KStartupInfoData_SetDesktop(KStartupInfoData* self, int desktop);
int KStartupInfoData_Desktop(const KStartupInfoData* self);
void KStartupInfoData_SetWMClass(KStartupInfoData* self, const libqt_string wmclass);
libqt_string KStartupInfoData_FindWMClass(const KStartupInfoData* self);
libqt_string KStartupInfoData_WMClass(const KStartupInfoData* self);
void KStartupInfoData_AddPid(KStartupInfoData* self, pid_t pid);
libqt_list /* of pid_t */ KStartupInfoData_Pids(const KStartupInfoData* self);
bool KStartupInfoData_IsPid(const KStartupInfoData* self, pid_t pid);
void KStartupInfoData_SetHostname(KStartupInfoData* self);
libqt_string KStartupInfoData_Hostname(const KStartupInfoData* self);
void KStartupInfoData_SetSilent(KStartupInfoData* self, int state);
int KStartupInfoData_Silent(const KStartupInfoData* self);
int KStartupInfoData_Screen(const KStartupInfoData* self);
void KStartupInfoData_SetScreen(KStartupInfoData* self, int screen);
int KStartupInfoData_Xinerama(const KStartupInfoData* self);
void KStartupInfoData_SetXinerama(KStartupInfoData* self, int xinerama);
libqt_string KStartupInfoData_ApplicationId(const KStartupInfoData* self);
void KStartupInfoData_SetApplicationId(KStartupInfoData* self, const libqt_string desktop);
void KStartupInfoData_Update(KStartupInfoData* self, const KStartupInfoData* data);
void KStartupInfoData_OperatorAssign(KStartupInfoData* self, const KStartupInfoData* data);
void KStartupInfoData_SetHostname1(KStartupInfoData* self, const libqt_string hostname);
void KStartupInfoData_Delete(KStartupInfoData* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
