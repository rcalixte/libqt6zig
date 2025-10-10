#pragma once
#ifndef SRC_EXTRAS_KIOC_LIBKSHELLCOMPLETION_H
#define SRC_EXTRAS_KIOC_LIBKSHELLCOMPLETION_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KCompletion KCompletion;
typedef struct KCompletionMatches KCompletionMatches;
typedef struct KShellCompletion KShellCompletion;
typedef struct KUrlCompletion KUrlCompletion;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
typedef struct QUrl QUrl;
#endif

KShellCompletion* KShellCompletion_new();
QMetaObject* KShellCompletion_MetaObject(const KShellCompletion* self);
void* KShellCompletion_Metacast(KShellCompletion* self, const char* param1);
int KShellCompletion_Metacall(KShellCompletion* self, int param1, int param2, void** param3);
libqt_string KShellCompletion_Tr(const char* s);
libqt_string KShellCompletion_MakeCompletion(KShellCompletion* self, const libqt_string text);
void KShellCompletion_PostProcessMatches(const KShellCompletion* self, libqt_list /* of libqt_string */ matches);
void KShellCompletion_PostProcessMatches2(const KShellCompletion* self, KCompletionMatches* matches);
libqt_string KShellCompletion_Tr2(const char* s, const char* c);
libqt_string KShellCompletion_Tr3(const char* s, const char* c, int n);
void KShellCompletion_OnMetacall(KShellCompletion* self, intptr_t slot);
int KShellCompletion_QBaseMetacall(KShellCompletion* self, int param1, int param2, void** param3);
void KShellCompletion_OnMakeCompletion(KShellCompletion* self, intptr_t slot);
libqt_string KShellCompletion_QBaseMakeCompletion(KShellCompletion* self, const libqt_string text);
void KShellCompletion_OnPostProcessMatches(const KShellCompletion* self, intptr_t slot);
void KShellCompletion_QBasePostProcessMatches(const KShellCompletion* self, libqt_list /* of libqt_string */ matches);
void KShellCompletion_OnPostProcessMatches2(const KShellCompletion* self, intptr_t slot);
void KShellCompletion_QBasePostProcessMatches2(const KShellCompletion* self, KCompletionMatches* matches);
void KShellCompletion_SetDir(KShellCompletion* self, const QUrl* dir);
void KShellCompletion_OnSetDir(KShellCompletion* self, intptr_t slot);
void KShellCompletion_QBaseSetDir(KShellCompletion* self, const QUrl* dir);
QUrl* KShellCompletion_Dir(const KShellCompletion* self);
void KShellCompletion_OnDir(const KShellCompletion* self, intptr_t slot);
QUrl* KShellCompletion_QBaseDir(const KShellCompletion* self);
bool KShellCompletion_IsRunning(const KShellCompletion* self);
void KShellCompletion_OnIsRunning(const KShellCompletion* self, intptr_t slot);
bool KShellCompletion_QBaseIsRunning(const KShellCompletion* self);
void KShellCompletion_Stop(KShellCompletion* self);
void KShellCompletion_OnStop(KShellCompletion* self, intptr_t slot);
void KShellCompletion_QBaseStop(KShellCompletion* self);
int KShellCompletion_Mode(const KShellCompletion* self);
void KShellCompletion_OnMode(const KShellCompletion* self, intptr_t slot);
int KShellCompletion_QBaseMode(const KShellCompletion* self);
void KShellCompletion_SetMode(KShellCompletion* self, int mode);
void KShellCompletion_OnSetMode(KShellCompletion* self, intptr_t slot);
void KShellCompletion_QBaseSetMode(KShellCompletion* self, int mode);
bool KShellCompletion_ReplaceEnv(const KShellCompletion* self);
void KShellCompletion_OnReplaceEnv(const KShellCompletion* self, intptr_t slot);
bool KShellCompletion_QBaseReplaceEnv(const KShellCompletion* self);
void KShellCompletion_SetReplaceEnv(KShellCompletion* self, bool replace);
void KShellCompletion_OnSetReplaceEnv(KShellCompletion* self, intptr_t slot);
void KShellCompletion_QBaseSetReplaceEnv(KShellCompletion* self, bool replace);
bool KShellCompletion_ReplaceHome(const KShellCompletion* self);
void KShellCompletion_OnReplaceHome(const KShellCompletion* self, intptr_t slot);
bool KShellCompletion_QBaseReplaceHome(const KShellCompletion* self);
void KShellCompletion_SetReplaceHome(KShellCompletion* self, bool replace);
void KShellCompletion_OnSetReplaceHome(KShellCompletion* self, intptr_t slot);
void KShellCompletion_QBaseSetReplaceHome(KShellCompletion* self, bool replace);
libqt_string KShellCompletion_LastMatch(const KShellCompletion* self);
void KShellCompletion_OnLastMatch(const KShellCompletion* self, intptr_t slot);
libqt_string KShellCompletion_QBaseLastMatch(const KShellCompletion* self);
void KShellCompletion_SetCompletionMode(KShellCompletion* self, int mode);
void KShellCompletion_OnSetCompletionMode(KShellCompletion* self, intptr_t slot);
void KShellCompletion_QBaseSetCompletionMode(KShellCompletion* self, int mode);
void KShellCompletion_SetOrder(KShellCompletion* self, int order);
void KShellCompletion_OnSetOrder(KShellCompletion* self, intptr_t slot);
void KShellCompletion_QBaseSetOrder(KShellCompletion* self, int order);
void KShellCompletion_SetIgnoreCase(KShellCompletion* self, bool ignoreCase);
void KShellCompletion_OnSetIgnoreCase(KShellCompletion* self, intptr_t slot);
void KShellCompletion_QBaseSetIgnoreCase(KShellCompletion* self, bool ignoreCase);
void KShellCompletion_SetSoundsEnabled(KShellCompletion* self, bool enable);
void KShellCompletion_OnSetSoundsEnabled(KShellCompletion* self, intptr_t slot);
void KShellCompletion_QBaseSetSoundsEnabled(KShellCompletion* self, bool enable);
void KShellCompletion_SetItems(KShellCompletion* self, const libqt_list /* of libqt_string */ itemList);
void KShellCompletion_OnSetItems(KShellCompletion* self, intptr_t slot);
void KShellCompletion_QBaseSetItems(KShellCompletion* self, const libqt_list /* of libqt_string */ itemList);
void KShellCompletion_Clear(KShellCompletion* self);
void KShellCompletion_OnClear(KShellCompletion* self, intptr_t slot);
void KShellCompletion_QBaseClear(KShellCompletion* self);
bool KShellCompletion_Event(KShellCompletion* self, QEvent* event);
void KShellCompletion_OnEvent(KShellCompletion* self, intptr_t slot);
bool KShellCompletion_QBaseEvent(KShellCompletion* self, QEvent* event);
bool KShellCompletion_EventFilter(KShellCompletion* self, QObject* watched, QEvent* event);
void KShellCompletion_OnEventFilter(KShellCompletion* self, intptr_t slot);
bool KShellCompletion_QBaseEventFilter(KShellCompletion* self, QObject* watched, QEvent* event);
void KShellCompletion_TimerEvent(KShellCompletion* self, QTimerEvent* event);
void KShellCompletion_OnTimerEvent(KShellCompletion* self, intptr_t slot);
void KShellCompletion_QBaseTimerEvent(KShellCompletion* self, QTimerEvent* event);
void KShellCompletion_ChildEvent(KShellCompletion* self, QChildEvent* event);
void KShellCompletion_OnChildEvent(KShellCompletion* self, intptr_t slot);
void KShellCompletion_QBaseChildEvent(KShellCompletion* self, QChildEvent* event);
void KShellCompletion_CustomEvent(KShellCompletion* self, QEvent* event);
void KShellCompletion_OnCustomEvent(KShellCompletion* self, intptr_t slot);
void KShellCompletion_QBaseCustomEvent(KShellCompletion* self, QEvent* event);
void KShellCompletion_ConnectNotify(KShellCompletion* self, const QMetaMethod* signal);
void KShellCompletion_OnConnectNotify(KShellCompletion* self, intptr_t slot);
void KShellCompletion_QBaseConnectNotify(KShellCompletion* self, const QMetaMethod* signal);
void KShellCompletion_DisconnectNotify(KShellCompletion* self, const QMetaMethod* signal);
void KShellCompletion_OnDisconnectNotify(KShellCompletion* self, intptr_t slot);
void KShellCompletion_QBaseDisconnectNotify(KShellCompletion* self, const QMetaMethod* signal);
void KShellCompletion_SetShouldAutoSuggest(KShellCompletion* self, bool shouldAutosuggest);
void KShellCompletion_OnSetShouldAutoSuggest(KShellCompletion* self, intptr_t slot);
void KShellCompletion_QBaseSetShouldAutoSuggest(KShellCompletion* self, bool shouldAutosuggest);
QObject* KShellCompletion_Sender(const KShellCompletion* self);
void KShellCompletion_OnSender(const KShellCompletion* self, intptr_t slot);
QObject* KShellCompletion_QBaseSender(const KShellCompletion* self);
int KShellCompletion_SenderSignalIndex(const KShellCompletion* self);
void KShellCompletion_OnSenderSignalIndex(const KShellCompletion* self, intptr_t slot);
int KShellCompletion_QBaseSenderSignalIndex(const KShellCompletion* self);
int KShellCompletion_Receivers(const KShellCompletion* self, const char* signal);
void KShellCompletion_OnReceivers(const KShellCompletion* self, intptr_t slot);
int KShellCompletion_QBaseReceivers(const KShellCompletion* self, const char* signal);
bool KShellCompletion_IsSignalConnected(const KShellCompletion* self, const QMetaMethod* signal);
void KShellCompletion_OnIsSignalConnected(const KShellCompletion* self, intptr_t slot);
bool KShellCompletion_QBaseIsSignalConnected(const KShellCompletion* self, const QMetaMethod* signal);
void KShellCompletion_Delete(KShellCompletion* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
