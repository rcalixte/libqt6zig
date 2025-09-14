#pragma once
#ifndef SRC_EXTRAS_KIOC_LIBKURLCOMPLETION_H
#define SRC_EXTRAS_KIOC_LIBKURLCOMPLETION_H

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
typedef struct KUrlCompletion KUrlCompletion;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
typedef struct QUrl QUrl;
#endif

KUrlCompletion* KUrlCompletion_new();
KUrlCompletion* KUrlCompletion_new2(int param1);
QMetaObject* KUrlCompletion_MetaObject(const KUrlCompletion* self);
void* KUrlCompletion_Metacast(KUrlCompletion* self, const char* param1);
int KUrlCompletion_Metacall(KUrlCompletion* self, int param1, int param2, void** param3);
libqt_string KUrlCompletion_Tr(const char* s);
libqt_string KUrlCompletion_MakeCompletion(KUrlCompletion* self, const libqt_string text);
void KUrlCompletion_SetDir(KUrlCompletion* self, const QUrl* dir);
QUrl* KUrlCompletion_Dir(const KUrlCompletion* self);
bool KUrlCompletion_IsRunning(const KUrlCompletion* self);
void KUrlCompletion_Stop(KUrlCompletion* self);
int KUrlCompletion_Mode(const KUrlCompletion* self);
void KUrlCompletion_SetMode(KUrlCompletion* self, int mode);
bool KUrlCompletion_ReplaceEnv(const KUrlCompletion* self);
void KUrlCompletion_SetReplaceEnv(KUrlCompletion* self, bool replace);
bool KUrlCompletion_ReplaceHome(const KUrlCompletion* self);
void KUrlCompletion_SetReplaceHome(KUrlCompletion* self, bool replace);
libqt_string KUrlCompletion_ReplacedPath(const KUrlCompletion* self, const libqt_string text);
libqt_string KUrlCompletion_ReplacedPath2(const libqt_string text, bool replaceHome);
void KUrlCompletion_SetMimeTypeFilters(KUrlCompletion* self, const libqt_list /* of libqt_string */ mimeTypes);
libqt_list /* of libqt_string */ KUrlCompletion_MimeTypeFilters(const KUrlCompletion* self);
void KUrlCompletion_PostProcessMatches(const KUrlCompletion* self, libqt_list /* of libqt_string */ matches);
libqt_string KUrlCompletion_Tr2(const char* s, const char* c);
libqt_string KUrlCompletion_Tr3(const char* s, const char* c, int n);
libqt_string KUrlCompletion_ReplacedPath3(const libqt_string text, bool replaceHome, bool replaceEnv);
void KUrlCompletion_OnMetacall(KUrlCompletion* self, intptr_t slot);
int KUrlCompletion_QBaseMetacall(KUrlCompletion* self, int param1, int param2, void** param3);
void KUrlCompletion_OnMakeCompletion(KUrlCompletion* self, intptr_t slot);
libqt_string KUrlCompletion_QBaseMakeCompletion(KUrlCompletion* self, const libqt_string text);
void KUrlCompletion_OnSetDir(KUrlCompletion* self, intptr_t slot);
void KUrlCompletion_QBaseSetDir(KUrlCompletion* self, const QUrl* dir);
void KUrlCompletion_OnDir(const KUrlCompletion* self, intptr_t slot);
QUrl* KUrlCompletion_QBaseDir(const KUrlCompletion* self);
void KUrlCompletion_OnIsRunning(const KUrlCompletion* self, intptr_t slot);
bool KUrlCompletion_QBaseIsRunning(const KUrlCompletion* self);
void KUrlCompletion_OnStop(KUrlCompletion* self, intptr_t slot);
void KUrlCompletion_QBaseStop(KUrlCompletion* self);
void KUrlCompletion_OnMode(const KUrlCompletion* self, intptr_t slot);
int KUrlCompletion_QBaseMode(const KUrlCompletion* self);
void KUrlCompletion_OnSetMode(KUrlCompletion* self, intptr_t slot);
void KUrlCompletion_QBaseSetMode(KUrlCompletion* self, int mode);
void KUrlCompletion_OnReplaceEnv(const KUrlCompletion* self, intptr_t slot);
bool KUrlCompletion_QBaseReplaceEnv(const KUrlCompletion* self);
void KUrlCompletion_OnSetReplaceEnv(KUrlCompletion* self, intptr_t slot);
void KUrlCompletion_QBaseSetReplaceEnv(KUrlCompletion* self, bool replace);
void KUrlCompletion_OnReplaceHome(const KUrlCompletion* self, intptr_t slot);
bool KUrlCompletion_QBaseReplaceHome(const KUrlCompletion* self);
void KUrlCompletion_OnSetReplaceHome(KUrlCompletion* self, intptr_t slot);
void KUrlCompletion_QBaseSetReplaceHome(KUrlCompletion* self, bool replace);
void KUrlCompletion_OnPostProcessMatches(const KUrlCompletion* self, intptr_t slot);
void KUrlCompletion_QBasePostProcessMatches(const KUrlCompletion* self, libqt_list /* of libqt_string */ matches);
libqt_string KUrlCompletion_LastMatch(const KUrlCompletion* self);
void KUrlCompletion_OnLastMatch(const KUrlCompletion* self, intptr_t slot);
libqt_string KUrlCompletion_QBaseLastMatch(const KUrlCompletion* self);
void KUrlCompletion_SetCompletionMode(KUrlCompletion* self, int mode);
void KUrlCompletion_OnSetCompletionMode(KUrlCompletion* self, intptr_t slot);
void KUrlCompletion_QBaseSetCompletionMode(KUrlCompletion* self, int mode);
void KUrlCompletion_SetOrder(KUrlCompletion* self, int order);
void KUrlCompletion_OnSetOrder(KUrlCompletion* self, intptr_t slot);
void KUrlCompletion_QBaseSetOrder(KUrlCompletion* self, int order);
void KUrlCompletion_SetIgnoreCase(KUrlCompletion* self, bool ignoreCase);
void KUrlCompletion_OnSetIgnoreCase(KUrlCompletion* self, intptr_t slot);
void KUrlCompletion_QBaseSetIgnoreCase(KUrlCompletion* self, bool ignoreCase);
void KUrlCompletion_SetSoundsEnabled(KUrlCompletion* self, bool enable);
void KUrlCompletion_OnSetSoundsEnabled(KUrlCompletion* self, intptr_t slot);
void KUrlCompletion_QBaseSetSoundsEnabled(KUrlCompletion* self, bool enable);
void KUrlCompletion_SetItems(KUrlCompletion* self, const libqt_list /* of libqt_string */ itemList);
void KUrlCompletion_OnSetItems(KUrlCompletion* self, intptr_t slot);
void KUrlCompletion_QBaseSetItems(KUrlCompletion* self, const libqt_list /* of libqt_string */ itemList);
void KUrlCompletion_Clear(KUrlCompletion* self);
void KUrlCompletion_OnClear(KUrlCompletion* self, intptr_t slot);
void KUrlCompletion_QBaseClear(KUrlCompletion* self);
bool KUrlCompletion_Event(KUrlCompletion* self, QEvent* event);
void KUrlCompletion_OnEvent(KUrlCompletion* self, intptr_t slot);
bool KUrlCompletion_QBaseEvent(KUrlCompletion* self, QEvent* event);
bool KUrlCompletion_EventFilter(KUrlCompletion* self, QObject* watched, QEvent* event);
void KUrlCompletion_OnEventFilter(KUrlCompletion* self, intptr_t slot);
bool KUrlCompletion_QBaseEventFilter(KUrlCompletion* self, QObject* watched, QEvent* event);
void KUrlCompletion_TimerEvent(KUrlCompletion* self, QTimerEvent* event);
void KUrlCompletion_OnTimerEvent(KUrlCompletion* self, intptr_t slot);
void KUrlCompletion_QBaseTimerEvent(KUrlCompletion* self, QTimerEvent* event);
void KUrlCompletion_ChildEvent(KUrlCompletion* self, QChildEvent* event);
void KUrlCompletion_OnChildEvent(KUrlCompletion* self, intptr_t slot);
void KUrlCompletion_QBaseChildEvent(KUrlCompletion* self, QChildEvent* event);
void KUrlCompletion_CustomEvent(KUrlCompletion* self, QEvent* event);
void KUrlCompletion_OnCustomEvent(KUrlCompletion* self, intptr_t slot);
void KUrlCompletion_QBaseCustomEvent(KUrlCompletion* self, QEvent* event);
void KUrlCompletion_ConnectNotify(KUrlCompletion* self, const QMetaMethod* signal);
void KUrlCompletion_OnConnectNotify(KUrlCompletion* self, intptr_t slot);
void KUrlCompletion_QBaseConnectNotify(KUrlCompletion* self, const QMetaMethod* signal);
void KUrlCompletion_DisconnectNotify(KUrlCompletion* self, const QMetaMethod* signal);
void KUrlCompletion_OnDisconnectNotify(KUrlCompletion* self, intptr_t slot);
void KUrlCompletion_QBaseDisconnectNotify(KUrlCompletion* self, const QMetaMethod* signal);
void KUrlCompletion_SetShouldAutoSuggest(KUrlCompletion* self, bool shouldAutosuggest);
void KUrlCompletion_OnSetShouldAutoSuggest(KUrlCompletion* self, intptr_t slot);
void KUrlCompletion_QBaseSetShouldAutoSuggest(KUrlCompletion* self, bool shouldAutosuggest);
QObject* KUrlCompletion_Sender(const KUrlCompletion* self);
void KUrlCompletion_OnSender(const KUrlCompletion* self, intptr_t slot);
QObject* KUrlCompletion_QBaseSender(const KUrlCompletion* self);
int KUrlCompletion_SenderSignalIndex(const KUrlCompletion* self);
void KUrlCompletion_OnSenderSignalIndex(const KUrlCompletion* self, intptr_t slot);
int KUrlCompletion_QBaseSenderSignalIndex(const KUrlCompletion* self);
int KUrlCompletion_Receivers(const KUrlCompletion* self, const char* signal);
void KUrlCompletion_OnReceivers(const KUrlCompletion* self, intptr_t slot);
int KUrlCompletion_QBaseReceivers(const KUrlCompletion* self, const char* signal);
bool KUrlCompletion_IsSignalConnected(const KUrlCompletion* self, const QMetaMethod* signal);
void KUrlCompletion_OnIsSignalConnected(const KUrlCompletion* self, intptr_t slot);
bool KUrlCompletion_QBaseIsSignalConnected(const KUrlCompletion* self, const QMetaMethod* signal);
void KUrlCompletion_Delete(KUrlCompletion* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
