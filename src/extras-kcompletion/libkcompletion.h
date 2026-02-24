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
typedef struct KCompletionMatches KCompletionMatches;
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
KCompletionMatches* KCompletion_AllWeightedMatches(KCompletion* self);
KCompletionMatches* KCompletion_AllWeightedMatches2(KCompletion* self, const libqt_string stringVal);
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
void KCompletion_PostProcessMatches2(const KCompletion* self, KCompletionMatches* matches);
void KCompletion_OnMetaObject(const KCompletion* self, intptr_t slot);
QMetaObject* KCompletion_SuperMetaObject(const KCompletion* self);
void KCompletion_OnMetacast(KCompletion* self, intptr_t slot);
void* KCompletion_SuperMetacast(KCompletion* self, const char* param1);
void KCompletion_OnMetacall(KCompletion* self, intptr_t slot);
int KCompletion_SuperMetacall(KCompletion* self, int param1, int param2, void** param3);
void KCompletion_OnLastMatch(const KCompletion* self, intptr_t slot);
libqt_string KCompletion_SuperLastMatch(const KCompletion* self);
void KCompletion_OnSetCompletionMode(KCompletion* self, intptr_t slot);
void KCompletion_SuperSetCompletionMode(KCompletion* self, int mode);
void KCompletion_OnSetOrder(KCompletion* self, intptr_t slot);
void KCompletion_SuperSetOrder(KCompletion* self, int order);
void KCompletion_OnSetIgnoreCase(KCompletion* self, intptr_t slot);
void KCompletion_SuperSetIgnoreCase(KCompletion* self, bool ignoreCase);
void KCompletion_OnSetSoundsEnabled(KCompletion* self, intptr_t slot);
void KCompletion_SuperSetSoundsEnabled(KCompletion* self, bool enable);
void KCompletion_OnMakeCompletion(KCompletion* self, intptr_t slot);
libqt_string KCompletion_SuperMakeCompletion(KCompletion* self, const libqt_string stringVal);
void KCompletion_OnSetItems(KCompletion* self, intptr_t slot);
void KCompletion_SuperSetItems(KCompletion* self, const libqt_list /* of libqt_string */ itemList);
void KCompletion_OnClear(KCompletion* self, intptr_t slot);
void KCompletion_SuperClear(KCompletion* self);
void KCompletion_OnPostProcessMatches(const KCompletion* self, intptr_t slot);
void KCompletion_SuperPostProcessMatches(const KCompletion* self, libqt_list /* of libqt_string */ matchList);
void KCompletion_OnPostProcessMatches2(const KCompletion* self, intptr_t slot);
void KCompletion_SuperPostProcessMatches2(const KCompletion* self, KCompletionMatches* matches);
bool KCompletion_Event(KCompletion* self, QEvent* event);
void KCompletion_OnEvent(KCompletion* self, intptr_t slot);
bool KCompletion_SuperEvent(KCompletion* self, QEvent* event);
bool KCompletion_EventFilter(KCompletion* self, QObject* watched, QEvent* event);
void KCompletion_OnEventFilter(KCompletion* self, intptr_t slot);
bool KCompletion_SuperEventFilter(KCompletion* self, QObject* watched, QEvent* event);
void KCompletion_TimerEvent(KCompletion* self, QTimerEvent* event);
void KCompletion_OnTimerEvent(KCompletion* self, intptr_t slot);
void KCompletion_SuperTimerEvent(KCompletion* self, QTimerEvent* event);
void KCompletion_ChildEvent(KCompletion* self, QChildEvent* event);
void KCompletion_OnChildEvent(KCompletion* self, intptr_t slot);
void KCompletion_SuperChildEvent(KCompletion* self, QChildEvent* event);
void KCompletion_CustomEvent(KCompletion* self, QEvent* event);
void KCompletion_OnCustomEvent(KCompletion* self, intptr_t slot);
void KCompletion_SuperCustomEvent(KCompletion* self, QEvent* event);
void KCompletion_ConnectNotify(KCompletion* self, const QMetaMethod* signal);
void KCompletion_OnConnectNotify(KCompletion* self, intptr_t slot);
void KCompletion_SuperConnectNotify(KCompletion* self, const QMetaMethod* signal);
void KCompletion_DisconnectNotify(KCompletion* self, const QMetaMethod* signal);
void KCompletion_OnDisconnectNotify(KCompletion* self, intptr_t slot);
void KCompletion_SuperDisconnectNotify(KCompletion* self, const QMetaMethod* signal);
void KCompletion_SetShouldAutoSuggest(KCompletion* self, bool shouldAutosuggest);
void KCompletion_OnSetShouldAutoSuggest(KCompletion* self, intptr_t slot);
void KCompletion_SuperSetShouldAutoSuggest(KCompletion* self, bool shouldAutosuggest);
QObject* KCompletion_Sender(const KCompletion* self);
void KCompletion_OnSender(const KCompletion* self, intptr_t slot);
QObject* KCompletion_SuperSender(const KCompletion* self);
int KCompletion_SenderSignalIndex(const KCompletion* self);
void KCompletion_OnSenderSignalIndex(const KCompletion* self, intptr_t slot);
int KCompletion_SuperSenderSignalIndex(const KCompletion* self);
int KCompletion_Receivers(const KCompletion* self, const char* signal);
void KCompletion_OnReceivers(const KCompletion* self, intptr_t slot);
int KCompletion_SuperReceivers(const KCompletion* self, const char* signal);
bool KCompletion_IsSignalConnected(const KCompletion* self, const QMetaMethod* signal);
void KCompletion_OnIsSignalConnected(const KCompletion* self, intptr_t slot);
bool KCompletion_SuperIsSignalConnected(const KCompletion* self, const QMetaMethod* signal);
void KCompletion_Delete(KCompletion* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
