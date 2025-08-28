#pragma once
#ifndef SRC_EXTRAS_SONNETC_LIBSETTINGS_H
#define SRC_EXTRAS_SONNETC_LIBSETTINGS_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Sonnet__Settings)
typedef Sonnet::Settings Sonnet__Settings;
#endif
#else
typedef struct QAbstractListModel QAbstractListModel;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
typedef struct Sonnet__Settings Sonnet__Settings;
#endif

Sonnet__Settings* Sonnet__Settings_new();
Sonnet__Settings* Sonnet__Settings_new2(QObject* parent);
QMetaObject* Sonnet__Settings_MetaObject(const Sonnet__Settings* self);
void* Sonnet__Settings_Metacast(Sonnet__Settings* self, const char* param1);
int Sonnet__Settings_Metacall(Sonnet__Settings* self, int param1, int param2, void** param3);
libqt_string Sonnet__Settings_Tr(const char* s);
void Sonnet__Settings_SetDefaultLanguage(Sonnet__Settings* self, const libqt_string lang);
libqt_string Sonnet__Settings_DefaultLanguage(const Sonnet__Settings* self);
void Sonnet__Settings_SetPreferredLanguages(Sonnet__Settings* self, const libqt_list /* of libqt_string */ lang);
libqt_list /* of libqt_string */ Sonnet__Settings_PreferredLanguages(const Sonnet__Settings* self);
void Sonnet__Settings_SetDefaultClient(Sonnet__Settings* self, const libqt_string client);
libqt_string Sonnet__Settings_DefaultClient(const Sonnet__Settings* self);
void Sonnet__Settings_SetSkipUppercase(Sonnet__Settings* self, bool skipUppercase);
bool Sonnet__Settings_SkipUppercase(const Sonnet__Settings* self);
void Sonnet__Settings_SetAutodetectLanguage(Sonnet__Settings* self, bool autodetectLanguage);
bool Sonnet__Settings_AutodetectLanguage(const Sonnet__Settings* self);
void Sonnet__Settings_SetSkipRunTogether(Sonnet__Settings* self, bool skipRunTogether);
bool Sonnet__Settings_SkipRunTogether(const Sonnet__Settings* self);
void Sonnet__Settings_SetBackgroundCheckerEnabled(Sonnet__Settings* self, bool backgroundCheckerEnabled);
bool Sonnet__Settings_BackgroundCheckerEnabled(const Sonnet__Settings* self);
void Sonnet__Settings_SetCheckerEnabledByDefault(Sonnet__Settings* self, bool checkerEnabledByDefault);
bool Sonnet__Settings_CheckerEnabledByDefault(const Sonnet__Settings* self);
void Sonnet__Settings_SetCurrentIgnoreList(Sonnet__Settings* self, const libqt_list /* of libqt_string */ ignores);
libqt_list /* of libqt_string */ Sonnet__Settings_CurrentIgnoreList(const Sonnet__Settings* self);
libqt_list /* of libqt_string */ Sonnet__Settings_Clients(const Sonnet__Settings* self);
bool Sonnet__Settings_Modified(const Sonnet__Settings* self);
QAbstractListModel* Sonnet__Settings_DictionaryModel(Sonnet__Settings* self);
void Sonnet__Settings_Save(Sonnet__Settings* self);
libqt_list /* of libqt_string */ Sonnet__Settings_DefaultIgnoreList();
bool Sonnet__Settings_DefaultSkipUppercase();
bool Sonnet__Settings_DefaultAutodetectLanguage();
bool Sonnet__Settings_DefaultBackgroundCheckerEnabled();
bool Sonnet__Settings_DefaultCheckerEnabledByDefault();
bool Sonnet__Settings_DefauktSkipRunTogether();
libqt_string Sonnet__Settings_DefaultDefaultLanguage();
libqt_list /* of libqt_string */ Sonnet__Settings_DefaultPreferredLanguages();
void Sonnet__Settings_SkipUppercaseChanged(Sonnet__Settings* self);
void Sonnet__Settings_Connect_SkipUppercaseChanged(Sonnet__Settings* self, intptr_t slot);
void Sonnet__Settings_AutodetectLanguageChanged(Sonnet__Settings* self);
void Sonnet__Settings_Connect_AutodetectLanguageChanged(Sonnet__Settings* self, intptr_t slot);
void Sonnet__Settings_BackgroundCheckerEnabledChanged(Sonnet__Settings* self);
void Sonnet__Settings_Connect_BackgroundCheckerEnabledChanged(Sonnet__Settings* self, intptr_t slot);
void Sonnet__Settings_DefaultClientChanged(Sonnet__Settings* self);
void Sonnet__Settings_Connect_DefaultClientChanged(Sonnet__Settings* self, intptr_t slot);
void Sonnet__Settings_DefaultLanguageChanged(Sonnet__Settings* self);
void Sonnet__Settings_Connect_DefaultLanguageChanged(Sonnet__Settings* self, intptr_t slot);
void Sonnet__Settings_PreferredLanguagesChanged(Sonnet__Settings* self);
void Sonnet__Settings_Connect_PreferredLanguagesChanged(Sonnet__Settings* self, intptr_t slot);
void Sonnet__Settings_SkipRunTogetherChanged(Sonnet__Settings* self);
void Sonnet__Settings_Connect_SkipRunTogetherChanged(Sonnet__Settings* self, intptr_t slot);
void Sonnet__Settings_CheckerEnabledByDefaultChanged(Sonnet__Settings* self);
void Sonnet__Settings_Connect_CheckerEnabledByDefaultChanged(Sonnet__Settings* self, intptr_t slot);
void Sonnet__Settings_CurrentIgnoreListChanged(Sonnet__Settings* self);
void Sonnet__Settings_Connect_CurrentIgnoreListChanged(Sonnet__Settings* self, intptr_t slot);
void Sonnet__Settings_ModifiedChanged(Sonnet__Settings* self);
void Sonnet__Settings_Connect_ModifiedChanged(Sonnet__Settings* self, intptr_t slot);
libqt_string Sonnet__Settings_Tr2(const char* s, const char* c);
libqt_string Sonnet__Settings_Tr3(const char* s, const char* c, int n);
void Sonnet__Settings_OnMetacall(Sonnet__Settings* self, intptr_t slot);
int Sonnet__Settings_QBaseMetacall(Sonnet__Settings* self, int param1, int param2, void** param3);
bool Sonnet__Settings_Event(Sonnet__Settings* self, QEvent* event);
void Sonnet__Settings_OnEvent(Sonnet__Settings* self, intptr_t slot);
bool Sonnet__Settings_QBaseEvent(Sonnet__Settings* self, QEvent* event);
bool Sonnet__Settings_EventFilter(Sonnet__Settings* self, QObject* watched, QEvent* event);
void Sonnet__Settings_OnEventFilter(Sonnet__Settings* self, intptr_t slot);
bool Sonnet__Settings_QBaseEventFilter(Sonnet__Settings* self, QObject* watched, QEvent* event);
void Sonnet__Settings_TimerEvent(Sonnet__Settings* self, QTimerEvent* event);
void Sonnet__Settings_OnTimerEvent(Sonnet__Settings* self, intptr_t slot);
void Sonnet__Settings_QBaseTimerEvent(Sonnet__Settings* self, QTimerEvent* event);
void Sonnet__Settings_ChildEvent(Sonnet__Settings* self, QChildEvent* event);
void Sonnet__Settings_OnChildEvent(Sonnet__Settings* self, intptr_t slot);
void Sonnet__Settings_QBaseChildEvent(Sonnet__Settings* self, QChildEvent* event);
void Sonnet__Settings_CustomEvent(Sonnet__Settings* self, QEvent* event);
void Sonnet__Settings_OnCustomEvent(Sonnet__Settings* self, intptr_t slot);
void Sonnet__Settings_QBaseCustomEvent(Sonnet__Settings* self, QEvent* event);
void Sonnet__Settings_ConnectNotify(Sonnet__Settings* self, const QMetaMethod* signal);
void Sonnet__Settings_OnConnectNotify(Sonnet__Settings* self, intptr_t slot);
void Sonnet__Settings_QBaseConnectNotify(Sonnet__Settings* self, const QMetaMethod* signal);
void Sonnet__Settings_DisconnectNotify(Sonnet__Settings* self, const QMetaMethod* signal);
void Sonnet__Settings_OnDisconnectNotify(Sonnet__Settings* self, intptr_t slot);
void Sonnet__Settings_QBaseDisconnectNotify(Sonnet__Settings* self, const QMetaMethod* signal);
QObject* Sonnet__Settings_Sender(const Sonnet__Settings* self);
void Sonnet__Settings_OnSender(const Sonnet__Settings* self, intptr_t slot);
QObject* Sonnet__Settings_QBaseSender(const Sonnet__Settings* self);
int Sonnet__Settings_SenderSignalIndex(const Sonnet__Settings* self);
void Sonnet__Settings_OnSenderSignalIndex(const Sonnet__Settings* self, intptr_t slot);
int Sonnet__Settings_QBaseSenderSignalIndex(const Sonnet__Settings* self);
int Sonnet__Settings_Receivers(const Sonnet__Settings* self, const char* signal);
void Sonnet__Settings_OnReceivers(const Sonnet__Settings* self, intptr_t slot);
int Sonnet__Settings_QBaseReceivers(const Sonnet__Settings* self, const char* signal);
bool Sonnet__Settings_IsSignalConnected(const Sonnet__Settings* self, const QMetaMethod* signal);
void Sonnet__Settings_OnIsSignalConnected(const Sonnet__Settings* self, intptr_t slot);
bool Sonnet__Settings_QBaseIsSignalConnected(const Sonnet__Settings* self, const QMetaMethod* signal);
void Sonnet__Settings_Delete(Sonnet__Settings* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
