#pragma once
#ifndef SRC_EXTRAS_KXMLGUIC_LIBKACTIONCATEGORY_H
#define SRC_EXTRAS_KXMLGUIC_LIBKACTIONCATEGORY_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KActionCategory KActionCategory;
typedef struct KActionCollection KActionCollection;
typedef struct QAction QAction;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
#endif

KActionCategory* KActionCategory_new(const libqt_string text);
KActionCategory* KActionCategory_new2(const libqt_string text, KActionCollection* parent);
QMetaObject* KActionCategory_MetaObject(const KActionCategory* self);
void* KActionCategory_Metacast(KActionCategory* self, const char* param1);
int KActionCategory_Metacall(KActionCategory* self, int param1, int param2, void** param3);
libqt_string KActionCategory_Tr(const char* s);
QAction* KActionCategory_AddAction(KActionCategory* self, const libqt_string name, QAction* action);
QAction* KActionCategory_AddAction2(KActionCategory* self, int actionType);
libqt_list /* of QAction* */ KActionCategory_Actions(const KActionCategory* self);
KActionCollection* KActionCategory_Collection(const KActionCategory* self);
libqt_string KActionCategory_Text(const KActionCategory* self);
void KActionCategory_SetText(KActionCategory* self, const libqt_string text);
libqt_string KActionCategory_Tr2(const char* s, const char* c);
libqt_string KActionCategory_Tr3(const char* s, const char* c, int n);
void KActionCategory_OnMetacall(KActionCategory* self, intptr_t slot);
int KActionCategory_QBaseMetacall(KActionCategory* self, int param1, int param2, void** param3);
bool KActionCategory_Event(KActionCategory* self, QEvent* event);
void KActionCategory_OnEvent(KActionCategory* self, intptr_t slot);
bool KActionCategory_QBaseEvent(KActionCategory* self, QEvent* event);
bool KActionCategory_EventFilter(KActionCategory* self, QObject* watched, QEvent* event);
void KActionCategory_OnEventFilter(KActionCategory* self, intptr_t slot);
bool KActionCategory_QBaseEventFilter(KActionCategory* self, QObject* watched, QEvent* event);
void KActionCategory_TimerEvent(KActionCategory* self, QTimerEvent* event);
void KActionCategory_OnTimerEvent(KActionCategory* self, intptr_t slot);
void KActionCategory_QBaseTimerEvent(KActionCategory* self, QTimerEvent* event);
void KActionCategory_ChildEvent(KActionCategory* self, QChildEvent* event);
void KActionCategory_OnChildEvent(KActionCategory* self, intptr_t slot);
void KActionCategory_QBaseChildEvent(KActionCategory* self, QChildEvent* event);
void KActionCategory_CustomEvent(KActionCategory* self, QEvent* event);
void KActionCategory_OnCustomEvent(KActionCategory* self, intptr_t slot);
void KActionCategory_QBaseCustomEvent(KActionCategory* self, QEvent* event);
void KActionCategory_ConnectNotify(KActionCategory* self, const QMetaMethod* signal);
void KActionCategory_OnConnectNotify(KActionCategory* self, intptr_t slot);
void KActionCategory_QBaseConnectNotify(KActionCategory* self, const QMetaMethod* signal);
void KActionCategory_DisconnectNotify(KActionCategory* self, const QMetaMethod* signal);
void KActionCategory_OnDisconnectNotify(KActionCategory* self, intptr_t slot);
void KActionCategory_QBaseDisconnectNotify(KActionCategory* self, const QMetaMethod* signal);
QObject* KActionCategory_Sender(const KActionCategory* self);
void KActionCategory_OnSender(const KActionCategory* self, intptr_t slot);
QObject* KActionCategory_QBaseSender(const KActionCategory* self);
int KActionCategory_SenderSignalIndex(const KActionCategory* self);
void KActionCategory_OnSenderSignalIndex(const KActionCategory* self, intptr_t slot);
int KActionCategory_QBaseSenderSignalIndex(const KActionCategory* self);
int KActionCategory_Receivers(const KActionCategory* self, const char* signal);
void KActionCategory_OnReceivers(const KActionCategory* self, intptr_t slot);
int KActionCategory_QBaseReceivers(const KActionCategory* self, const char* signal);
bool KActionCategory_IsSignalConnected(const KActionCategory* self, const QMetaMethod* signal);
void KActionCategory_OnIsSignalConnected(const KActionCategory* self, intptr_t slot);
bool KActionCategory_QBaseIsSignalConnected(const KActionCategory* self, const QMetaMethod* signal);
void KActionCategory_Delete(KActionCategory* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
