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
QAction* KActionCategory_AddAction(KActionCategory* self, const libqt_string name, QAction* action);
QAction* KActionCategory_AddAction2(KActionCategory* self, int actionType);
QAction* KActionCategory_AddAction3(KActionCategory* self, int actionType, const libqt_string name);
QAction* KActionCategory_AddAction4(KActionCategory* self, const libqt_string name);
QAction* KActionCategory_AddAction5(KActionCategory* self, int actionType);
libqt_list /* of QAction* */ KActionCategory_Actions(const KActionCategory* self);
KActionCollection* KActionCategory_Collection(const KActionCategory* self);
libqt_string KActionCategory_Text(const KActionCategory* self);
void KActionCategory_SetText(KActionCategory* self, const libqt_string text);
QAction* KActionCategory_AddAction22(KActionCategory* self, int actionType, const QObject* receiver);
QAction* KActionCategory_AddAction32(KActionCategory* self, int actionType, const QObject* receiver, const char* member);
QAction* KActionCategory_AddAction33(KActionCategory* self, int actionType, const libqt_string name, const QObject* receiver);
QAction* KActionCategory_AddAction42(KActionCategory* self, int actionType, const libqt_string name, const QObject* receiver, const char* member);
QAction* KActionCategory_AddAction23(KActionCategory* self, const libqt_string name, const QObject* receiver);
QAction* KActionCategory_AddAction34(KActionCategory* self, const libqt_string name, const QObject* receiver, const char* member);
void KActionCategory_OnMetaObject(const KActionCategory* self, intptr_t slot);
QMetaObject* KActionCategory_SuperMetaObject(const KActionCategory* self);
void KActionCategory_OnMetacast(KActionCategory* self, intptr_t slot);
void* KActionCategory_SuperMetacast(KActionCategory* self, const char* param1);
void KActionCategory_OnMetacall(KActionCategory* self, intptr_t slot);
int KActionCategory_SuperMetacall(KActionCategory* self, int param1, int param2, void** param3);
bool KActionCategory_Event(KActionCategory* self, QEvent* event);
void KActionCategory_OnEvent(KActionCategory* self, intptr_t slot);
bool KActionCategory_SuperEvent(KActionCategory* self, QEvent* event);
bool KActionCategory_EventFilter(KActionCategory* self, QObject* watched, QEvent* event);
void KActionCategory_OnEventFilter(KActionCategory* self, intptr_t slot);
bool KActionCategory_SuperEventFilter(KActionCategory* self, QObject* watched, QEvent* event);
void KActionCategory_TimerEvent(KActionCategory* self, QTimerEvent* event);
void KActionCategory_OnTimerEvent(KActionCategory* self, intptr_t slot);
void KActionCategory_SuperTimerEvent(KActionCategory* self, QTimerEvent* event);
void KActionCategory_ChildEvent(KActionCategory* self, QChildEvent* event);
void KActionCategory_OnChildEvent(KActionCategory* self, intptr_t slot);
void KActionCategory_SuperChildEvent(KActionCategory* self, QChildEvent* event);
void KActionCategory_CustomEvent(KActionCategory* self, QEvent* event);
void KActionCategory_OnCustomEvent(KActionCategory* self, intptr_t slot);
void KActionCategory_SuperCustomEvent(KActionCategory* self, QEvent* event);
void KActionCategory_ConnectNotify(KActionCategory* self, const QMetaMethod* signal);
void KActionCategory_OnConnectNotify(KActionCategory* self, intptr_t slot);
void KActionCategory_SuperConnectNotify(KActionCategory* self, const QMetaMethod* signal);
void KActionCategory_DisconnectNotify(KActionCategory* self, const QMetaMethod* signal);
void KActionCategory_OnDisconnectNotify(KActionCategory* self, intptr_t slot);
void KActionCategory_SuperDisconnectNotify(KActionCategory* self, const QMetaMethod* signal);
QObject* KActionCategory_Sender(const KActionCategory* self);
void KActionCategory_OnSender(const KActionCategory* self, intptr_t slot);
QObject* KActionCategory_SuperSender(const KActionCategory* self);
int KActionCategory_SenderSignalIndex(const KActionCategory* self);
void KActionCategory_OnSenderSignalIndex(const KActionCategory* self, intptr_t slot);
int KActionCategory_SuperSenderSignalIndex(const KActionCategory* self);
int KActionCategory_Receivers(const KActionCategory* self, const char* signal);
void KActionCategory_OnReceivers(const KActionCategory* self, intptr_t slot);
int KActionCategory_SuperReceivers(const KActionCategory* self, const char* signal);
bool KActionCategory_IsSignalConnected(const KActionCategory* self, const QMetaMethod* signal);
void KActionCategory_OnIsSignalConnected(const KActionCategory* self, intptr_t slot);
bool KActionCategory_SuperIsSignalConnected(const KActionCategory* self, const QMetaMethod* signal);
void KActionCategory_Delete(KActionCategory* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
