#pragma once
#ifndef SRC_EXTRAS_KI18NC_LIBKLOCALIZEDTRANSLATOR_H
#define SRC_EXTRAS_KI18NC_LIBKLOCALIZEDTRANSLATOR_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KLocalizedTranslator KLocalizedTranslator;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
typedef struct QTranslator QTranslator;
#endif

KLocalizedTranslator* KLocalizedTranslator_new();
KLocalizedTranslator* KLocalizedTranslator_new2(QObject* parent);
QMetaObject* KLocalizedTranslator_MetaObject(const KLocalizedTranslator* self);
void* KLocalizedTranslator_Metacast(KLocalizedTranslator* self, const char* param1);
int KLocalizedTranslator_Metacall(KLocalizedTranslator* self, int param1, int param2, void** param3);
void KLocalizedTranslator_OnMetacall(KLocalizedTranslator* self, intptr_t slot);
int KLocalizedTranslator_QBaseMetacall(KLocalizedTranslator* self, int param1, int param2, void** param3);
libqt_string KLocalizedTranslator_Tr(const char* s);
libqt_string KLocalizedTranslator_Translate(const KLocalizedTranslator* self, const char* context, const char* sourceText, const char* disambiguation, int n);
void KLocalizedTranslator_OnTranslate(const KLocalizedTranslator* self, intptr_t slot);
libqt_string KLocalizedTranslator_QBaseTranslate(const KLocalizedTranslator* self, const char* context, const char* sourceText, const char* disambiguation, int n);
void KLocalizedTranslator_SetTranslationDomain(KLocalizedTranslator* self, const libqt_string translationDomain);
void KLocalizedTranslator_AddContextToMonitor(KLocalizedTranslator* self, const libqt_string context);
void KLocalizedTranslator_RemoveContextToMonitor(KLocalizedTranslator* self, const libqt_string context);
libqt_string KLocalizedTranslator_Tr2(const char* s, const char* c);
libqt_string KLocalizedTranslator_Tr3(const char* s, const char* c, int n);
bool KLocalizedTranslator_IsEmpty(const KLocalizedTranslator* self);
void KLocalizedTranslator_OnIsEmpty(const KLocalizedTranslator* self, intptr_t slot);
bool KLocalizedTranslator_QBaseIsEmpty(const KLocalizedTranslator* self);
bool KLocalizedTranslator_Event(KLocalizedTranslator* self, QEvent* event);
void KLocalizedTranslator_OnEvent(KLocalizedTranslator* self, intptr_t slot);
bool KLocalizedTranslator_QBaseEvent(KLocalizedTranslator* self, QEvent* event);
bool KLocalizedTranslator_EventFilter(KLocalizedTranslator* self, QObject* watched, QEvent* event);
void KLocalizedTranslator_OnEventFilter(KLocalizedTranslator* self, intptr_t slot);
bool KLocalizedTranslator_QBaseEventFilter(KLocalizedTranslator* self, QObject* watched, QEvent* event);
void KLocalizedTranslator_TimerEvent(KLocalizedTranslator* self, QTimerEvent* event);
void KLocalizedTranslator_OnTimerEvent(KLocalizedTranslator* self, intptr_t slot);
void KLocalizedTranslator_QBaseTimerEvent(KLocalizedTranslator* self, QTimerEvent* event);
void KLocalizedTranslator_ChildEvent(KLocalizedTranslator* self, QChildEvent* event);
void KLocalizedTranslator_OnChildEvent(KLocalizedTranslator* self, intptr_t slot);
void KLocalizedTranslator_QBaseChildEvent(KLocalizedTranslator* self, QChildEvent* event);
void KLocalizedTranslator_CustomEvent(KLocalizedTranslator* self, QEvent* event);
void KLocalizedTranslator_OnCustomEvent(KLocalizedTranslator* self, intptr_t slot);
void KLocalizedTranslator_QBaseCustomEvent(KLocalizedTranslator* self, QEvent* event);
void KLocalizedTranslator_ConnectNotify(KLocalizedTranslator* self, const QMetaMethod* signal);
void KLocalizedTranslator_OnConnectNotify(KLocalizedTranslator* self, intptr_t slot);
void KLocalizedTranslator_QBaseConnectNotify(KLocalizedTranslator* self, const QMetaMethod* signal);
void KLocalizedTranslator_DisconnectNotify(KLocalizedTranslator* self, const QMetaMethod* signal);
void KLocalizedTranslator_OnDisconnectNotify(KLocalizedTranslator* self, intptr_t slot);
void KLocalizedTranslator_QBaseDisconnectNotify(KLocalizedTranslator* self, const QMetaMethod* signal);
QObject* KLocalizedTranslator_Sender(const KLocalizedTranslator* self);
void KLocalizedTranslator_OnSender(const KLocalizedTranslator* self, intptr_t slot);
QObject* KLocalizedTranslator_QBaseSender(const KLocalizedTranslator* self);
int KLocalizedTranslator_SenderSignalIndex(const KLocalizedTranslator* self);
void KLocalizedTranslator_OnSenderSignalIndex(const KLocalizedTranslator* self, intptr_t slot);
int KLocalizedTranslator_QBaseSenderSignalIndex(const KLocalizedTranslator* self);
int KLocalizedTranslator_Receivers(const KLocalizedTranslator* self, const char* signal);
void KLocalizedTranslator_OnReceivers(const KLocalizedTranslator* self, intptr_t slot);
int KLocalizedTranslator_QBaseReceivers(const KLocalizedTranslator* self, const char* signal);
bool KLocalizedTranslator_IsSignalConnected(const KLocalizedTranslator* self, const QMetaMethod* signal);
void KLocalizedTranslator_OnIsSignalConnected(const KLocalizedTranslator* self, intptr_t slot);
bool KLocalizedTranslator_QBaseIsSignalConnected(const KLocalizedTranslator* self, const QMetaMethod* signal);
void KLocalizedTranslator_Delete(KLocalizedTranslator* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
