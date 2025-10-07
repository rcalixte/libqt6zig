#pragma once
#ifndef SRC_EXTRAS_KTEXTEDITORC_LIBPLUGIN_H
#define SRC_EXTRAS_KTEXTEDITORC_LIBPLUGIN_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KTextEditor__ConfigPage)
typedef KTextEditor::ConfigPage KTextEditor__ConfigPage;
#endif
typedef KTextEditor::MainWindow KTextEditor__MainWindow;
typedef KTextEditor::Plugin KTextEditor__Plugin;
#else
typedef struct KTextEditor__ConfigPage KTextEditor__ConfigPage;
typedef struct KTextEditor__MainWindow KTextEditor__MainWindow;
typedef struct KTextEditor__Plugin KTextEditor__Plugin;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
typedef struct QWidget QWidget;
#endif

KTextEditor__Plugin* KTextEditor__Plugin_new(QObject* parent);
QMetaObject* KTextEditor__Plugin_MetaObject(const KTextEditor__Plugin* self);
void* KTextEditor__Plugin_Metacast(KTextEditor__Plugin* self, const char* param1);
int KTextEditor__Plugin_Metacall(KTextEditor__Plugin* self, int param1, int param2, void** param3);
libqt_string KTextEditor__Plugin_Tr(const char* s);
QObject* KTextEditor__Plugin_CreateView(KTextEditor__Plugin* self, KTextEditor__MainWindow* mainWindow);
int KTextEditor__Plugin_ConfigPages(const KTextEditor__Plugin* self);
KTextEditor__ConfigPage* KTextEditor__Plugin_ConfigPage(KTextEditor__Plugin* self, int number, QWidget* parent);
libqt_string KTextEditor__Plugin_Tr2(const char* s, const char* c);
libqt_string KTextEditor__Plugin_Tr3(const char* s, const char* c, int n);
void KTextEditor__Plugin_OnMetacall(KTextEditor__Plugin* self, intptr_t slot);
int KTextEditor__Plugin_QBaseMetacall(KTextEditor__Plugin* self, int param1, int param2, void** param3);
void KTextEditor__Plugin_OnCreateView(KTextEditor__Plugin* self, intptr_t slot);
QObject* KTextEditor__Plugin_QBaseCreateView(KTextEditor__Plugin* self, KTextEditor__MainWindow* mainWindow);
void KTextEditor__Plugin_OnConfigPages(const KTextEditor__Plugin* self, intptr_t slot);
int KTextEditor__Plugin_QBaseConfigPages(const KTextEditor__Plugin* self);
void KTextEditor__Plugin_OnConfigPage(KTextEditor__Plugin* self, intptr_t slot);
KTextEditor__ConfigPage* KTextEditor__Plugin_QBaseConfigPage(KTextEditor__Plugin* self, int number, QWidget* parent);
bool KTextEditor__Plugin_Event(KTextEditor__Plugin* self, QEvent* event);
void KTextEditor__Plugin_OnEvent(KTextEditor__Plugin* self, intptr_t slot);
bool KTextEditor__Plugin_QBaseEvent(KTextEditor__Plugin* self, QEvent* event);
bool KTextEditor__Plugin_EventFilter(KTextEditor__Plugin* self, QObject* watched, QEvent* event);
void KTextEditor__Plugin_OnEventFilter(KTextEditor__Plugin* self, intptr_t slot);
bool KTextEditor__Plugin_QBaseEventFilter(KTextEditor__Plugin* self, QObject* watched, QEvent* event);
void KTextEditor__Plugin_TimerEvent(KTextEditor__Plugin* self, QTimerEvent* event);
void KTextEditor__Plugin_OnTimerEvent(KTextEditor__Plugin* self, intptr_t slot);
void KTextEditor__Plugin_QBaseTimerEvent(KTextEditor__Plugin* self, QTimerEvent* event);
void KTextEditor__Plugin_ChildEvent(KTextEditor__Plugin* self, QChildEvent* event);
void KTextEditor__Plugin_OnChildEvent(KTextEditor__Plugin* self, intptr_t slot);
void KTextEditor__Plugin_QBaseChildEvent(KTextEditor__Plugin* self, QChildEvent* event);
void KTextEditor__Plugin_CustomEvent(KTextEditor__Plugin* self, QEvent* event);
void KTextEditor__Plugin_OnCustomEvent(KTextEditor__Plugin* self, intptr_t slot);
void KTextEditor__Plugin_QBaseCustomEvent(KTextEditor__Plugin* self, QEvent* event);
void KTextEditor__Plugin_ConnectNotify(KTextEditor__Plugin* self, const QMetaMethod* signal);
void KTextEditor__Plugin_OnConnectNotify(KTextEditor__Plugin* self, intptr_t slot);
void KTextEditor__Plugin_QBaseConnectNotify(KTextEditor__Plugin* self, const QMetaMethod* signal);
void KTextEditor__Plugin_DisconnectNotify(KTextEditor__Plugin* self, const QMetaMethod* signal);
void KTextEditor__Plugin_OnDisconnectNotify(KTextEditor__Plugin* self, intptr_t slot);
void KTextEditor__Plugin_QBaseDisconnectNotify(KTextEditor__Plugin* self, const QMetaMethod* signal);
QObject* KTextEditor__Plugin_Sender(const KTextEditor__Plugin* self);
void KTextEditor__Plugin_OnSender(const KTextEditor__Plugin* self, intptr_t slot);
QObject* KTextEditor__Plugin_QBaseSender(const KTextEditor__Plugin* self);
int KTextEditor__Plugin_SenderSignalIndex(const KTextEditor__Plugin* self);
void KTextEditor__Plugin_OnSenderSignalIndex(const KTextEditor__Plugin* self, intptr_t slot);
int KTextEditor__Plugin_QBaseSenderSignalIndex(const KTextEditor__Plugin* self);
int KTextEditor__Plugin_Receivers(const KTextEditor__Plugin* self, const char* signal);
void KTextEditor__Plugin_OnReceivers(const KTextEditor__Plugin* self, intptr_t slot);
int KTextEditor__Plugin_QBaseReceivers(const KTextEditor__Plugin* self, const char* signal);
bool KTextEditor__Plugin_IsSignalConnected(const KTextEditor__Plugin* self, const QMetaMethod* signal);
void KTextEditor__Plugin_OnIsSignalConnected(const KTextEditor__Plugin* self, intptr_t slot);
bool KTextEditor__Plugin_QBaseIsSignalConnected(const KTextEditor__Plugin* self, const QMetaMethod* signal);
void KTextEditor__Plugin_Delete(KTextEditor__Plugin* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
