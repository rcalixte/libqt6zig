#pragma once
#ifndef SRC_EXTRAS_KCOMPLETIONC_LIBKCOMPLETION_H
#define SRC_EXTRAS_KCOMPLETIONC_LIBKCOMPLETION_H

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
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
#endif

KCompletion* KCompletion_new();
QMetaObject* KCompletion_MetaObject(const KCompletion* self);
void* KCompletion_Metacast(KCompletion* self, const char* param1);
int KCompletion_Metacall(KCompletion* self, int param1, int param2, void** param3);
libqt_string KCompletion_Tr(const char* s);
libqt_list /* of libqt_string */ KCompletion_SubstringCompletion(const KCompletion* self, const libqt_string stringVal);
libqt_string KCompletion_LastMatch(const KCompletion* self);
libqt_list /* of libqt_string */ KCompletion_Items(const KCompletion* self);
bool KCompletion_IsEmpty(const KCompletion* self);
void KCompletion_SetCompletionMode(KCompletion* self, int mode);
int KCompletion_CompletionMode(const KCompletion* self);
void KCompletion_SetOrder(KCompletion* self, int order);
int KCompletion_Order(const KCompletion* self);
void KCompletion_SetIgnoreCase(KCompletion* self, bool ignoreCase);
bool KCompletion_IgnoreCase(const KCompletion* self);
bool KCompletion_ShouldAutoSuggest(const KCompletion* self);
libqt_list /* of libqt_string */ KCompletion_AllMatches(KCompletion* self);
libqt_list /* of libqt_string */ KCompletion_AllMatches2(KCompletion* self, const libqt_string stringVal);
void KCompletion_SetSoundsEnabled(KCompletion* self, bool enable);
bool KCompletion_SoundsEnabled(const KCompletion* self);
bool KCompletion_HasMultipleMatches(const KCompletion* self);
libqt_string KCompletion_MakeCompletion(KCompletion* self, const libqt_string stringVal);
libqt_string KCompletion_PreviousMatch(KCompletion* self);
libqt_string KCompletion_NextMatch(KCompletion* self);
void KCompletion_InsertItems(KCompletion* self, const libqt_list /* of libqt_string */ items);
void KCompletion_SetItems(KCompletion* self, const libqt_list /* of libqt_string */ itemList);
void KCompletion_AddItem(KCompletion* self, const libqt_string item);
void KCompletion_AddItem2(KCompletion* self, const libqt_string item, unsigned int weight);
void KCompletion_RemoveItem(KCompletion* self, const libqt_string item);
void KCompletion_Clear(KCompletion* self);
void KCompletion_Match(KCompletion* self, const libqt_string item);
void KCompletion_Connect_Match(KCompletion* self, intptr_t slot);
void KCompletion_Matches(KCompletion* self, const libqt_list /* of libqt_string */ matchlist);
void KCompletion_Connect_Matches(KCompletion* self, intptr_t slot);
void KCompletion_MultipleMatches(KCompletion* self);
void KCompletion_Connect_MultipleMatches(KCompletion* self, intptr_t slot);
void KCompletion_PostProcessMatches(const KCompletion* self, libqt_list /* of libqt_string */ matchList);
libqt_string KCompletion_Tr2(const char* s, const char* c);
libqt_string KCompletion_Tr3(const char* s, const char* c, int n);
void KCompletion_OnMetacall(KCompletion* self, intptr_t slot);
int KCompletion_QBaseMetacall(KCompletion* self, int param1, int param2, void** param3);
void KCompletion_OnLastMatch(const KCompletion* self, intptr_t slot);
libqt_string KCompletion_QBaseLastMatch(const KCompletion* self);
void KCompletion_OnSetCompletionMode(KCompletion* self, intptr_t slot);
void KCompletion_QBaseSetCompletionMode(KCompletion* self, int mode);
void KCompletion_OnSetOrder(KCompletion* self, intptr_t slot);
void KCompletion_QBaseSetOrder(KCompletion* self, int order);
void KCompletion_OnSetIgnoreCase(KCompletion* self, intptr_t slot);
void KCompletion_QBaseSetIgnoreCase(KCompletion* self, bool ignoreCase);
void KCompletion_OnSetSoundsEnabled(KCompletion* self, intptr_t slot);
void KCompletion_QBaseSetSoundsEnabled(KCompletion* self, bool enable);
void KCompletion_OnMakeCompletion(KCompletion* self, intptr_t slot);
libqt_string KCompletion_QBaseMakeCompletion(KCompletion* self, const libqt_string stringVal);
void KCompletion_OnSetItems(KCompletion* self, intptr_t slot);
void KCompletion_QBaseSetItems(KCompletion* self, const libqt_list /* of libqt_string */ itemList);
void KCompletion_OnClear(KCompletion* self, intptr_t slot);
void KCompletion_QBaseClear(KCompletion* self);
void KCompletion_OnPostProcessMatches(const KCompletion* self, intptr_t slot);
void KCompletion_QBasePostProcessMatches(const KCompletion* self, libqt_list /* of libqt_string */ matchList);
bool KCompletion_Event(KCompletion* self, QEvent* event);
void KCompletion_OnEvent(KCompletion* self, intptr_t slot);
bool KCompletion_QBaseEvent(KCompletion* self, QEvent* event);
bool KCompletion_EventFilter(KCompletion* self, QObject* watched, QEvent* event);
void KCompletion_OnEventFilter(KCompletion* self, intptr_t slot);
bool KCompletion_QBaseEventFilter(KCompletion* self, QObject* watched, QEvent* event);
void KCompletion_TimerEvent(KCompletion* self, QTimerEvent* event);
void KCompletion_OnTimerEvent(KCompletion* self, intptr_t slot);
void KCompletion_QBaseTimerEvent(KCompletion* self, QTimerEvent* event);
void KCompletion_ChildEvent(KCompletion* self, QChildEvent* event);
void KCompletion_OnChildEvent(KCompletion* self, intptr_t slot);
void KCompletion_QBaseChildEvent(KCompletion* self, QChildEvent* event);
void KCompletion_CustomEvent(KCompletion* self, QEvent* event);
void KCompletion_OnCustomEvent(KCompletion* self, intptr_t slot);
void KCompletion_QBaseCustomEvent(KCompletion* self, QEvent* event);
void KCompletion_ConnectNotify(KCompletion* self, const QMetaMethod* signal);
void KCompletion_OnConnectNotify(KCompletion* self, intptr_t slot);
void KCompletion_QBaseConnectNotify(KCompletion* self, const QMetaMethod* signal);
void KCompletion_DisconnectNotify(KCompletion* self, const QMetaMethod* signal);
void KCompletion_OnDisconnectNotify(KCompletion* self, intptr_t slot);
void KCompletion_QBaseDisconnectNotify(KCompletion* self, const QMetaMethod* signal);
void KCompletion_SetShouldAutoSuggest(KCompletion* self, bool shouldAutosuggest);
void KCompletion_OnSetShouldAutoSuggest(KCompletion* self, intptr_t slot);
void KCompletion_QBaseSetShouldAutoSuggest(KCompletion* self, bool shouldAutosuggest);
QObject* KCompletion_Sender(const KCompletion* self);
void KCompletion_OnSender(const KCompletion* self, intptr_t slot);
QObject* KCompletion_QBaseSender(const KCompletion* self);
int KCompletion_SenderSignalIndex(const KCompletion* self);
void KCompletion_OnSenderSignalIndex(const KCompletion* self, intptr_t slot);
int KCompletion_QBaseSenderSignalIndex(const KCompletion* self);
int KCompletion_Receivers(const KCompletion* self, const char* signal);
void KCompletion_OnReceivers(const KCompletion* self, intptr_t slot);
int KCompletion_QBaseReceivers(const KCompletion* self, const char* signal);
bool KCompletion_IsSignalConnected(const KCompletion* self, const QMetaMethod* signal);
void KCompletion_OnIsSignalConnected(const KCompletion* self, intptr_t slot);
bool KCompletion_QBaseIsSignalConnected(const KCompletion* self, const QMetaMethod* signal);
void KCompletion_Delete(KCompletion* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
