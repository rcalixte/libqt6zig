#pragma once
#ifndef SRC_EXTRAS_KNEWSTUFFC_LIBQUESTIONLISTENER_H
#define SRC_EXTRAS_KNEWSTUFFC_LIBQUESTIONLISTENER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KNSCore__Question)
typedef KNSCore::Question KNSCore__Question;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KNSCore__QuestionListener)
typedef KNSCore::QuestionListener KNSCore__QuestionListener;
#endif
#else
typedef struct KNSCore__Question KNSCore__Question;
typedef struct KNSCore__QuestionListener KNSCore__QuestionListener;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
#endif

KNSCore__QuestionListener* KNSCore__QuestionListener_new();
KNSCore__QuestionListener* KNSCore__QuestionListener_new2(QObject* parent);
QMetaObject* KNSCore__QuestionListener_MetaObject(const KNSCore__QuestionListener* self);
void* KNSCore__QuestionListener_Metacast(KNSCore__QuestionListener* self, const char* param1);
int KNSCore__QuestionListener_Metacall(KNSCore__QuestionListener* self, int param1, int param2, void** param3);
libqt_string KNSCore__QuestionListener_Tr(const char* s);
void KNSCore__QuestionListener_AskQuestion(KNSCore__QuestionListener* self, KNSCore__Question* question);
libqt_string KNSCore__QuestionListener_Tr2(const char* s, const char* c);
libqt_string KNSCore__QuestionListener_Tr3(const char* s, const char* c, int n);
void KNSCore__QuestionListener_OnMetacall(KNSCore__QuestionListener* self, intptr_t slot);
int KNSCore__QuestionListener_QBaseMetacall(KNSCore__QuestionListener* self, int param1, int param2, void** param3);
void KNSCore__QuestionListener_OnAskQuestion(KNSCore__QuestionListener* self, intptr_t slot);
void KNSCore__QuestionListener_QBaseAskQuestion(KNSCore__QuestionListener* self, KNSCore__Question* question);
bool KNSCore__QuestionListener_Event(KNSCore__QuestionListener* self, QEvent* event);
void KNSCore__QuestionListener_OnEvent(KNSCore__QuestionListener* self, intptr_t slot);
bool KNSCore__QuestionListener_QBaseEvent(KNSCore__QuestionListener* self, QEvent* event);
bool KNSCore__QuestionListener_EventFilter(KNSCore__QuestionListener* self, QObject* watched, QEvent* event);
void KNSCore__QuestionListener_OnEventFilter(KNSCore__QuestionListener* self, intptr_t slot);
bool KNSCore__QuestionListener_QBaseEventFilter(KNSCore__QuestionListener* self, QObject* watched, QEvent* event);
void KNSCore__QuestionListener_TimerEvent(KNSCore__QuestionListener* self, QTimerEvent* event);
void KNSCore__QuestionListener_OnTimerEvent(KNSCore__QuestionListener* self, intptr_t slot);
void KNSCore__QuestionListener_QBaseTimerEvent(KNSCore__QuestionListener* self, QTimerEvent* event);
void KNSCore__QuestionListener_ChildEvent(KNSCore__QuestionListener* self, QChildEvent* event);
void KNSCore__QuestionListener_OnChildEvent(KNSCore__QuestionListener* self, intptr_t slot);
void KNSCore__QuestionListener_QBaseChildEvent(KNSCore__QuestionListener* self, QChildEvent* event);
void KNSCore__QuestionListener_CustomEvent(KNSCore__QuestionListener* self, QEvent* event);
void KNSCore__QuestionListener_OnCustomEvent(KNSCore__QuestionListener* self, intptr_t slot);
void KNSCore__QuestionListener_QBaseCustomEvent(KNSCore__QuestionListener* self, QEvent* event);
void KNSCore__QuestionListener_ConnectNotify(KNSCore__QuestionListener* self, const QMetaMethod* signal);
void KNSCore__QuestionListener_OnConnectNotify(KNSCore__QuestionListener* self, intptr_t slot);
void KNSCore__QuestionListener_QBaseConnectNotify(KNSCore__QuestionListener* self, const QMetaMethod* signal);
void KNSCore__QuestionListener_DisconnectNotify(KNSCore__QuestionListener* self, const QMetaMethod* signal);
void KNSCore__QuestionListener_OnDisconnectNotify(KNSCore__QuestionListener* self, intptr_t slot);
void KNSCore__QuestionListener_QBaseDisconnectNotify(KNSCore__QuestionListener* self, const QMetaMethod* signal);
QObject* KNSCore__QuestionListener_Sender(const KNSCore__QuestionListener* self);
void KNSCore__QuestionListener_OnSender(const KNSCore__QuestionListener* self, intptr_t slot);
QObject* KNSCore__QuestionListener_QBaseSender(const KNSCore__QuestionListener* self);
int KNSCore__QuestionListener_SenderSignalIndex(const KNSCore__QuestionListener* self);
void KNSCore__QuestionListener_OnSenderSignalIndex(const KNSCore__QuestionListener* self, intptr_t slot);
int KNSCore__QuestionListener_QBaseSenderSignalIndex(const KNSCore__QuestionListener* self);
int KNSCore__QuestionListener_Receivers(const KNSCore__QuestionListener* self, const char* signal);
void KNSCore__QuestionListener_OnReceivers(const KNSCore__QuestionListener* self, intptr_t slot);
int KNSCore__QuestionListener_QBaseReceivers(const KNSCore__QuestionListener* self, const char* signal);
bool KNSCore__QuestionListener_IsSignalConnected(const KNSCore__QuestionListener* self, const QMetaMethod* signal);
void KNSCore__QuestionListener_OnIsSignalConnected(const KNSCore__QuestionListener* self, intptr_t slot);
bool KNSCore__QuestionListener_QBaseIsSignalConnected(const KNSCore__QuestionListener* self, const QMetaMethod* signal);
void KNSCore__QuestionListener_Delete(KNSCore__QuestionListener* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
