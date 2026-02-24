#pragma once
#ifndef SRC_EXTRAS_SONNETC_LIBBACKGROUNDCHECKER_H
#define SRC_EXTRAS_SONNETC_LIBBACKGROUNDCHECKER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
typedef Sonnet::BackgroundChecker Sonnet__BackgroundChecker;
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Sonnet__Speller)
typedef Sonnet::Speller Sonnet__Speller;
#endif
#else
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
typedef struct Sonnet__BackgroundChecker Sonnet__BackgroundChecker;
typedef struct Sonnet__Speller Sonnet__Speller;
#endif

Sonnet__BackgroundChecker* Sonnet__BackgroundChecker_new();
Sonnet__BackgroundChecker* Sonnet__BackgroundChecker_new2(const Sonnet__Speller* speller);
Sonnet__BackgroundChecker* Sonnet__BackgroundChecker_new3(QObject* parent);
Sonnet__BackgroundChecker* Sonnet__BackgroundChecker_new4(const Sonnet__Speller* speller, QObject* parent);
QMetaObject* Sonnet__BackgroundChecker_MetaObject(const Sonnet__BackgroundChecker* self);
void* Sonnet__BackgroundChecker_Metacast(Sonnet__BackgroundChecker* self, const char* param1);
int Sonnet__BackgroundChecker_Metacall(Sonnet__BackgroundChecker* self, int param1, int param2, void** param3);
void Sonnet__BackgroundChecker_SetText(Sonnet__BackgroundChecker* self, const libqt_string text);
libqt_string Sonnet__BackgroundChecker_Text(const Sonnet__BackgroundChecker* self);
libqt_string Sonnet__BackgroundChecker_CurrentContext(const Sonnet__BackgroundChecker* self);
Sonnet__Speller* Sonnet__BackgroundChecker_Speller(const Sonnet__BackgroundChecker* self);
void Sonnet__BackgroundChecker_SetSpeller(Sonnet__BackgroundChecker* self, const Sonnet__Speller* speller);
bool Sonnet__BackgroundChecker_CheckWord(Sonnet__BackgroundChecker* self, const libqt_string word);
libqt_list /* of libqt_string */ Sonnet__BackgroundChecker_Suggest(const Sonnet__BackgroundChecker* self, const libqt_string word);
bool Sonnet__BackgroundChecker_AddWordToPersonal(Sonnet__BackgroundChecker* self, const libqt_string word);
bool Sonnet__BackgroundChecker_AddWordToSession(Sonnet__BackgroundChecker* self, const libqt_string word);
bool Sonnet__BackgroundChecker_AutoDetectLanguageDisabled(const Sonnet__BackgroundChecker* self);
void Sonnet__BackgroundChecker_SetAutoDetectLanguageDisabled(Sonnet__BackgroundChecker* self, bool autoDetectDisabled);
void Sonnet__BackgroundChecker_Start(Sonnet__BackgroundChecker* self);
void Sonnet__BackgroundChecker_Stop(Sonnet__BackgroundChecker* self);
void Sonnet__BackgroundChecker_Replace(Sonnet__BackgroundChecker* self, int start, const libqt_string oldText, const libqt_string newText);
void Sonnet__BackgroundChecker_ChangeLanguage(Sonnet__BackgroundChecker* self, const libqt_string lang);
void Sonnet__BackgroundChecker_ContinueChecking(Sonnet__BackgroundChecker* self);
void Sonnet__BackgroundChecker_Misspelling(Sonnet__BackgroundChecker* self, const libqt_string word, int start);
void Sonnet__BackgroundChecker_Connect_Misspelling(Sonnet__BackgroundChecker* self, intptr_t slot);
void Sonnet__BackgroundChecker_Done(Sonnet__BackgroundChecker* self);
void Sonnet__BackgroundChecker_Connect_Done(Sonnet__BackgroundChecker* self, intptr_t slot);
libqt_string Sonnet__BackgroundChecker_FetchMoreText(Sonnet__BackgroundChecker* self);
void Sonnet__BackgroundChecker_FinishedCurrentFeed(Sonnet__BackgroundChecker* self);
void Sonnet__BackgroundChecker_OnMetaObject(const Sonnet__BackgroundChecker* self, intptr_t slot);
QMetaObject* Sonnet__BackgroundChecker_SuperMetaObject(const Sonnet__BackgroundChecker* self);
void Sonnet__BackgroundChecker_OnMetacast(Sonnet__BackgroundChecker* self, intptr_t slot);
void* Sonnet__BackgroundChecker_SuperMetacast(Sonnet__BackgroundChecker* self, const char* param1);
void Sonnet__BackgroundChecker_OnMetacall(Sonnet__BackgroundChecker* self, intptr_t slot);
int Sonnet__BackgroundChecker_SuperMetacall(Sonnet__BackgroundChecker* self, int param1, int param2, void** param3);
void Sonnet__BackgroundChecker_OnStart(Sonnet__BackgroundChecker* self, intptr_t slot);
void Sonnet__BackgroundChecker_SuperStart(Sonnet__BackgroundChecker* self);
void Sonnet__BackgroundChecker_OnStop(Sonnet__BackgroundChecker* self, intptr_t slot);
void Sonnet__BackgroundChecker_SuperStop(Sonnet__BackgroundChecker* self);
void Sonnet__BackgroundChecker_OnContinueChecking(Sonnet__BackgroundChecker* self, intptr_t slot);
void Sonnet__BackgroundChecker_SuperContinueChecking(Sonnet__BackgroundChecker* self);
void Sonnet__BackgroundChecker_OnFetchMoreText(Sonnet__BackgroundChecker* self, intptr_t slot);
libqt_string Sonnet__BackgroundChecker_SuperFetchMoreText(Sonnet__BackgroundChecker* self);
void Sonnet__BackgroundChecker_OnFinishedCurrentFeed(Sonnet__BackgroundChecker* self, intptr_t slot);
void Sonnet__BackgroundChecker_SuperFinishedCurrentFeed(Sonnet__BackgroundChecker* self);
bool Sonnet__BackgroundChecker_Event(Sonnet__BackgroundChecker* self, QEvent* event);
void Sonnet__BackgroundChecker_OnEvent(Sonnet__BackgroundChecker* self, intptr_t slot);
bool Sonnet__BackgroundChecker_SuperEvent(Sonnet__BackgroundChecker* self, QEvent* event);
bool Sonnet__BackgroundChecker_EventFilter(Sonnet__BackgroundChecker* self, QObject* watched, QEvent* event);
void Sonnet__BackgroundChecker_OnEventFilter(Sonnet__BackgroundChecker* self, intptr_t slot);
bool Sonnet__BackgroundChecker_SuperEventFilter(Sonnet__BackgroundChecker* self, QObject* watched, QEvent* event);
void Sonnet__BackgroundChecker_TimerEvent(Sonnet__BackgroundChecker* self, QTimerEvent* event);
void Sonnet__BackgroundChecker_OnTimerEvent(Sonnet__BackgroundChecker* self, intptr_t slot);
void Sonnet__BackgroundChecker_SuperTimerEvent(Sonnet__BackgroundChecker* self, QTimerEvent* event);
void Sonnet__BackgroundChecker_ChildEvent(Sonnet__BackgroundChecker* self, QChildEvent* event);
void Sonnet__BackgroundChecker_OnChildEvent(Sonnet__BackgroundChecker* self, intptr_t slot);
void Sonnet__BackgroundChecker_SuperChildEvent(Sonnet__BackgroundChecker* self, QChildEvent* event);
void Sonnet__BackgroundChecker_CustomEvent(Sonnet__BackgroundChecker* self, QEvent* event);
void Sonnet__BackgroundChecker_OnCustomEvent(Sonnet__BackgroundChecker* self, intptr_t slot);
void Sonnet__BackgroundChecker_SuperCustomEvent(Sonnet__BackgroundChecker* self, QEvent* event);
void Sonnet__BackgroundChecker_ConnectNotify(Sonnet__BackgroundChecker* self, const QMetaMethod* signal);
void Sonnet__BackgroundChecker_OnConnectNotify(Sonnet__BackgroundChecker* self, intptr_t slot);
void Sonnet__BackgroundChecker_SuperConnectNotify(Sonnet__BackgroundChecker* self, const QMetaMethod* signal);
void Sonnet__BackgroundChecker_DisconnectNotify(Sonnet__BackgroundChecker* self, const QMetaMethod* signal);
void Sonnet__BackgroundChecker_OnDisconnectNotify(Sonnet__BackgroundChecker* self, intptr_t slot);
void Sonnet__BackgroundChecker_SuperDisconnectNotify(Sonnet__BackgroundChecker* self, const QMetaMethod* signal);
void Sonnet__BackgroundChecker_SlotEngineDone(Sonnet__BackgroundChecker* self);
void Sonnet__BackgroundChecker_OnSlotEngineDone(Sonnet__BackgroundChecker* self, intptr_t slot);
void Sonnet__BackgroundChecker_SuperSlotEngineDone(Sonnet__BackgroundChecker* self);
QObject* Sonnet__BackgroundChecker_Sender(const Sonnet__BackgroundChecker* self);
void Sonnet__BackgroundChecker_OnSender(const Sonnet__BackgroundChecker* self, intptr_t slot);
QObject* Sonnet__BackgroundChecker_SuperSender(const Sonnet__BackgroundChecker* self);
int Sonnet__BackgroundChecker_SenderSignalIndex(const Sonnet__BackgroundChecker* self);
void Sonnet__BackgroundChecker_OnSenderSignalIndex(const Sonnet__BackgroundChecker* self, intptr_t slot);
int Sonnet__BackgroundChecker_SuperSenderSignalIndex(const Sonnet__BackgroundChecker* self);
int Sonnet__BackgroundChecker_Receivers(const Sonnet__BackgroundChecker* self, const char* signal);
void Sonnet__BackgroundChecker_OnReceivers(const Sonnet__BackgroundChecker* self, intptr_t slot);
int Sonnet__BackgroundChecker_SuperReceivers(const Sonnet__BackgroundChecker* self, const char* signal);
bool Sonnet__BackgroundChecker_IsSignalConnected(const Sonnet__BackgroundChecker* self, const QMetaMethod* signal);
void Sonnet__BackgroundChecker_OnIsSignalConnected(const Sonnet__BackgroundChecker* self, intptr_t slot);
bool Sonnet__BackgroundChecker_SuperIsSignalConnected(const Sonnet__BackgroundChecker* self, const QMetaMethod* signal);
void Sonnet__BackgroundChecker_Delete(Sonnet__BackgroundChecker* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
