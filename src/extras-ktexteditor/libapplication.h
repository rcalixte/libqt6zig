#pragma once
#ifndef SRC_EXTRAS_KTEXTEDITORC_LIBAPPLICATION_H
#define SRC_EXTRAS_KTEXTEDITORC_LIBAPPLICATION_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KTextEditor__Application)
typedef KTextEditor::Application KTextEditor__Application;
#endif
typedef KTextEditor::Document KTextEditor__Document;
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KTextEditor__MainWindow)
typedef KTextEditor::MainWindow KTextEditor__MainWindow;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KTextEditor__Plugin)
typedef KTextEditor::Plugin KTextEditor__Plugin;
#endif
#else
typedef struct KTextEditor__Application KTextEditor__Application;
typedef struct KTextEditor__Document KTextEditor__Document;
typedef struct KTextEditor__MainWindow KTextEditor__MainWindow;
typedef struct KTextEditor__Plugin KTextEditor__Plugin;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
typedef struct QUrl QUrl;
#endif

KTextEditor__Application* KTextEditor__Application_new(QObject* parent);
QMetaObject* KTextEditor__Application_MetaObject(const KTextEditor__Application* self);
void* KTextEditor__Application_Metacast(KTextEditor__Application* self, const char* param1);
int KTextEditor__Application_Metacall(KTextEditor__Application* self, int param1, int param2, void** param3);
libqt_string KTextEditor__Application_Tr(const char* s);
bool KTextEditor__Application_Quit(KTextEditor__Application* self);
libqt_list /* of KTextEditor__MainWindow* */ KTextEditor__Application_MainWindows(KTextEditor__Application* self);
KTextEditor__MainWindow* KTextEditor__Application_ActiveMainWindow(KTextEditor__Application* self);
libqt_list /* of KTextEditor__Document* */ KTextEditor__Application_Documents(KTextEditor__Application* self);
KTextEditor__Document* KTextEditor__Application_FindUrl(KTextEditor__Application* self, const QUrl* url);
KTextEditor__Document* KTextEditor__Application_OpenUrl(KTextEditor__Application* self, const QUrl* url);
bool KTextEditor__Application_CloseDocument(KTextEditor__Application* self, KTextEditor__Document* document);
bool KTextEditor__Application_CloseDocuments(KTextEditor__Application* self, const libqt_list /* of KTextEditor__Document* */ documents);
void KTextEditor__Application_DocumentCreated(KTextEditor__Application* self, KTextEditor__Document* document);
void KTextEditor__Application_Connect_DocumentCreated(KTextEditor__Application* self, intptr_t slot);
void KTextEditor__Application_DocumentWillBeDeleted(KTextEditor__Application* self, KTextEditor__Document* document);
void KTextEditor__Application_Connect_DocumentWillBeDeleted(KTextEditor__Application* self, intptr_t slot);
void KTextEditor__Application_DocumentDeleted(KTextEditor__Application* self, KTextEditor__Document* document);
void KTextEditor__Application_Connect_DocumentDeleted(KTextEditor__Application* self, intptr_t slot);
KTextEditor__Plugin* KTextEditor__Application_Plugin(KTextEditor__Application* self, const libqt_string name);
void KTextEditor__Application_PluginCreated(KTextEditor__Application* self, const libqt_string name, KTextEditor__Plugin* plugin);
void KTextEditor__Application_Connect_PluginCreated(KTextEditor__Application* self, intptr_t slot);
void KTextEditor__Application_PluginDeleted(KTextEditor__Application* self, const libqt_string name, KTextEditor__Plugin* plugin);
void KTextEditor__Application_Connect_PluginDeleted(KTextEditor__Application* self, intptr_t slot);
libqt_string KTextEditor__Application_Tr2(const char* s, const char* c);
libqt_string KTextEditor__Application_Tr3(const char* s, const char* c, int n);
KTextEditor__Document* KTextEditor__Application_OpenUrl2(KTextEditor__Application* self, const QUrl* url, const libqt_string encoding);
void KTextEditor__Application_OnMetacall(KTextEditor__Application* self, intptr_t slot);
int KTextEditor__Application_QBaseMetacall(KTextEditor__Application* self, int param1, int param2, void** param3);
bool KTextEditor__Application_Event(KTextEditor__Application* self, QEvent* event);
void KTextEditor__Application_OnEvent(KTextEditor__Application* self, intptr_t slot);
bool KTextEditor__Application_QBaseEvent(KTextEditor__Application* self, QEvent* event);
bool KTextEditor__Application_EventFilter(KTextEditor__Application* self, QObject* watched, QEvent* event);
void KTextEditor__Application_OnEventFilter(KTextEditor__Application* self, intptr_t slot);
bool KTextEditor__Application_QBaseEventFilter(KTextEditor__Application* self, QObject* watched, QEvent* event);
void KTextEditor__Application_TimerEvent(KTextEditor__Application* self, QTimerEvent* event);
void KTextEditor__Application_OnTimerEvent(KTextEditor__Application* self, intptr_t slot);
void KTextEditor__Application_QBaseTimerEvent(KTextEditor__Application* self, QTimerEvent* event);
void KTextEditor__Application_ChildEvent(KTextEditor__Application* self, QChildEvent* event);
void KTextEditor__Application_OnChildEvent(KTextEditor__Application* self, intptr_t slot);
void KTextEditor__Application_QBaseChildEvent(KTextEditor__Application* self, QChildEvent* event);
void KTextEditor__Application_CustomEvent(KTextEditor__Application* self, QEvent* event);
void KTextEditor__Application_OnCustomEvent(KTextEditor__Application* self, intptr_t slot);
void KTextEditor__Application_QBaseCustomEvent(KTextEditor__Application* self, QEvent* event);
void KTextEditor__Application_ConnectNotify(KTextEditor__Application* self, const QMetaMethod* signal);
void KTextEditor__Application_OnConnectNotify(KTextEditor__Application* self, intptr_t slot);
void KTextEditor__Application_QBaseConnectNotify(KTextEditor__Application* self, const QMetaMethod* signal);
void KTextEditor__Application_DisconnectNotify(KTextEditor__Application* self, const QMetaMethod* signal);
void KTextEditor__Application_OnDisconnectNotify(KTextEditor__Application* self, intptr_t slot);
void KTextEditor__Application_QBaseDisconnectNotify(KTextEditor__Application* self, const QMetaMethod* signal);
QObject* KTextEditor__Application_Sender(const KTextEditor__Application* self);
void KTextEditor__Application_OnSender(const KTextEditor__Application* self, intptr_t slot);
QObject* KTextEditor__Application_QBaseSender(const KTextEditor__Application* self);
int KTextEditor__Application_SenderSignalIndex(const KTextEditor__Application* self);
void KTextEditor__Application_OnSenderSignalIndex(const KTextEditor__Application* self, intptr_t slot);
int KTextEditor__Application_QBaseSenderSignalIndex(const KTextEditor__Application* self);
int KTextEditor__Application_Receivers(const KTextEditor__Application* self, const char* signal);
void KTextEditor__Application_OnReceivers(const KTextEditor__Application* self, intptr_t slot);
int KTextEditor__Application_QBaseReceivers(const KTextEditor__Application* self, const char* signal);
bool KTextEditor__Application_IsSignalConnected(const KTextEditor__Application* self, const QMetaMethod* signal);
void KTextEditor__Application_OnIsSignalConnected(const KTextEditor__Application* self, intptr_t slot);
bool KTextEditor__Application_QBaseIsSignalConnected(const KTextEditor__Application* self, const QMetaMethod* signal);
void KTextEditor__Application_Delete(KTextEditor__Application* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
