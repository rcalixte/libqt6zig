#pragma once
#ifndef SRC_EXTRAS_KSYNTAXHIGHLIGHTINGC_LIBREPOSITORY_H
#define SRC_EXTRAS_KSYNTAXHIGHLIGHTINGC_LIBREPOSITORY_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
typedef KSyntaxHighlighting::Definition KSyntaxHighlighting__Definition;
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KSyntaxHighlighting__Repository)
typedef KSyntaxHighlighting::Repository KSyntaxHighlighting__Repository;
#endif
typedef KSyntaxHighlighting::Theme KSyntaxHighlighting__Theme;
#else
typedef struct KSyntaxHighlighting__Definition KSyntaxHighlighting__Definition;
typedef struct KSyntaxHighlighting__Repository KSyntaxHighlighting__Repository;
typedef struct KSyntaxHighlighting__Theme KSyntaxHighlighting__Theme;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QPalette QPalette;
typedef struct QTimerEvent QTimerEvent;
#endif

KSyntaxHighlighting__Repository* KSyntaxHighlighting__Repository_new();
QMetaObject* KSyntaxHighlighting__Repository_MetaObject(const KSyntaxHighlighting__Repository* self);
void* KSyntaxHighlighting__Repository_Metacast(KSyntaxHighlighting__Repository* self, const char* param1);
int KSyntaxHighlighting__Repository_Metacall(KSyntaxHighlighting__Repository* self, int param1, int param2, void** param3);
libqt_string KSyntaxHighlighting__Repository_Tr(const char* s);
KSyntaxHighlighting__Definition* KSyntaxHighlighting__Repository_DefinitionForName(const KSyntaxHighlighting__Repository* self, const libqt_string defName);
KSyntaxHighlighting__Definition* KSyntaxHighlighting__Repository_DefinitionForFileName(const KSyntaxHighlighting__Repository* self, const libqt_string fileName);
libqt_list /* of KSyntaxHighlighting__Definition* */ KSyntaxHighlighting__Repository_DefinitionsForFileName(const KSyntaxHighlighting__Repository* self, const libqt_string fileName);
KSyntaxHighlighting__Definition* KSyntaxHighlighting__Repository_DefinitionForMimeType(const KSyntaxHighlighting__Repository* self, const libqt_string mimeType);
libqt_list /* of KSyntaxHighlighting__Definition* */ KSyntaxHighlighting__Repository_DefinitionsForMimeType(const KSyntaxHighlighting__Repository* self, const libqt_string mimeType);
libqt_list /* of KSyntaxHighlighting__Definition* */ KSyntaxHighlighting__Repository_Definitions(const KSyntaxHighlighting__Repository* self);
libqt_list /* of KSyntaxHighlighting__Theme* */ KSyntaxHighlighting__Repository_Themes(const KSyntaxHighlighting__Repository* self);
KSyntaxHighlighting__Theme* KSyntaxHighlighting__Repository_Theme(const KSyntaxHighlighting__Repository* self, const libqt_string themeName);
KSyntaxHighlighting__Theme* KSyntaxHighlighting__Repository_DefaultTheme(const KSyntaxHighlighting__Repository* self);
KSyntaxHighlighting__Theme* KSyntaxHighlighting__Repository_ThemeForPalette(const KSyntaxHighlighting__Repository* self, const QPalette* palette);
void KSyntaxHighlighting__Repository_Reload(KSyntaxHighlighting__Repository* self);
void KSyntaxHighlighting__Repository_AddCustomSearchPath(KSyntaxHighlighting__Repository* self, const libqt_string path);
libqt_list /* of libqt_string */ KSyntaxHighlighting__Repository_CustomSearchPaths(const KSyntaxHighlighting__Repository* self);
void KSyntaxHighlighting__Repository_AboutToReload(KSyntaxHighlighting__Repository* self);
void KSyntaxHighlighting__Repository_Connect_AboutToReload(KSyntaxHighlighting__Repository* self, intptr_t slot);
void KSyntaxHighlighting__Repository_Reloaded(KSyntaxHighlighting__Repository* self);
void KSyntaxHighlighting__Repository_Connect_Reloaded(KSyntaxHighlighting__Repository* self, intptr_t slot);
libqt_string KSyntaxHighlighting__Repository_Tr2(const char* s, const char* c);
libqt_string KSyntaxHighlighting__Repository_Tr3(const char* s, const char* c, int n);
KSyntaxHighlighting__Theme* KSyntaxHighlighting__Repository_DefaultTheme1(const KSyntaxHighlighting__Repository* self, int t);
void KSyntaxHighlighting__Repository_OnMetacall(KSyntaxHighlighting__Repository* self, intptr_t slot);
int KSyntaxHighlighting__Repository_QBaseMetacall(KSyntaxHighlighting__Repository* self, int param1, int param2, void** param3);
bool KSyntaxHighlighting__Repository_Event(KSyntaxHighlighting__Repository* self, QEvent* event);
void KSyntaxHighlighting__Repository_OnEvent(KSyntaxHighlighting__Repository* self, intptr_t slot);
bool KSyntaxHighlighting__Repository_QBaseEvent(KSyntaxHighlighting__Repository* self, QEvent* event);
bool KSyntaxHighlighting__Repository_EventFilter(KSyntaxHighlighting__Repository* self, QObject* watched, QEvent* event);
void KSyntaxHighlighting__Repository_OnEventFilter(KSyntaxHighlighting__Repository* self, intptr_t slot);
bool KSyntaxHighlighting__Repository_QBaseEventFilter(KSyntaxHighlighting__Repository* self, QObject* watched, QEvent* event);
void KSyntaxHighlighting__Repository_TimerEvent(KSyntaxHighlighting__Repository* self, QTimerEvent* event);
void KSyntaxHighlighting__Repository_OnTimerEvent(KSyntaxHighlighting__Repository* self, intptr_t slot);
void KSyntaxHighlighting__Repository_QBaseTimerEvent(KSyntaxHighlighting__Repository* self, QTimerEvent* event);
void KSyntaxHighlighting__Repository_ChildEvent(KSyntaxHighlighting__Repository* self, QChildEvent* event);
void KSyntaxHighlighting__Repository_OnChildEvent(KSyntaxHighlighting__Repository* self, intptr_t slot);
void KSyntaxHighlighting__Repository_QBaseChildEvent(KSyntaxHighlighting__Repository* self, QChildEvent* event);
void KSyntaxHighlighting__Repository_CustomEvent(KSyntaxHighlighting__Repository* self, QEvent* event);
void KSyntaxHighlighting__Repository_OnCustomEvent(KSyntaxHighlighting__Repository* self, intptr_t slot);
void KSyntaxHighlighting__Repository_QBaseCustomEvent(KSyntaxHighlighting__Repository* self, QEvent* event);
void KSyntaxHighlighting__Repository_ConnectNotify(KSyntaxHighlighting__Repository* self, const QMetaMethod* signal);
void KSyntaxHighlighting__Repository_OnConnectNotify(KSyntaxHighlighting__Repository* self, intptr_t slot);
void KSyntaxHighlighting__Repository_QBaseConnectNotify(KSyntaxHighlighting__Repository* self, const QMetaMethod* signal);
void KSyntaxHighlighting__Repository_DisconnectNotify(KSyntaxHighlighting__Repository* self, const QMetaMethod* signal);
void KSyntaxHighlighting__Repository_OnDisconnectNotify(KSyntaxHighlighting__Repository* self, intptr_t slot);
void KSyntaxHighlighting__Repository_QBaseDisconnectNotify(KSyntaxHighlighting__Repository* self, const QMetaMethod* signal);
QObject* KSyntaxHighlighting__Repository_Sender(const KSyntaxHighlighting__Repository* self);
void KSyntaxHighlighting__Repository_OnSender(const KSyntaxHighlighting__Repository* self, intptr_t slot);
QObject* KSyntaxHighlighting__Repository_QBaseSender(const KSyntaxHighlighting__Repository* self);
int KSyntaxHighlighting__Repository_SenderSignalIndex(const KSyntaxHighlighting__Repository* self);
void KSyntaxHighlighting__Repository_OnSenderSignalIndex(const KSyntaxHighlighting__Repository* self, intptr_t slot);
int KSyntaxHighlighting__Repository_QBaseSenderSignalIndex(const KSyntaxHighlighting__Repository* self);
int KSyntaxHighlighting__Repository_Receivers(const KSyntaxHighlighting__Repository* self, const char* signal);
void KSyntaxHighlighting__Repository_OnReceivers(const KSyntaxHighlighting__Repository* self, intptr_t slot);
int KSyntaxHighlighting__Repository_QBaseReceivers(const KSyntaxHighlighting__Repository* self, const char* signal);
bool KSyntaxHighlighting__Repository_IsSignalConnected(const KSyntaxHighlighting__Repository* self, const QMetaMethod* signal);
void KSyntaxHighlighting__Repository_OnIsSignalConnected(const KSyntaxHighlighting__Repository* self, intptr_t slot);
bool KSyntaxHighlighting__Repository_QBaseIsSignalConnected(const KSyntaxHighlighting__Repository* self, const QMetaMethod* signal);
void KSyntaxHighlighting__Repository_Delete(KSyntaxHighlighting__Repository* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
