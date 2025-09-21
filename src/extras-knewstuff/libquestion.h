#pragma once
#ifndef SRC_EXTRAS_KNEWSTUFFC_LIBQUESTION_H
#define SRC_EXTRAS_KNEWSTUFFC_LIBQUESTION_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
typedef KNSCore::Entry KNSCore__Entry;
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KNSCore__Question)
typedef KNSCore::Question KNSCore__Question;
#endif
#else
typedef struct KNSCore__Entry KNSCore__Entry;
typedef struct KNSCore__Question KNSCore__Question;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
#endif

KNSCore__Question* KNSCore__Question_new();
KNSCore__Question* KNSCore__Question_new2(int param1);
KNSCore__Question* KNSCore__Question_new3(int param1, QObject* parent);
QMetaObject* KNSCore__Question_MetaObject(const KNSCore__Question* self);
void* KNSCore__Question_Metacast(KNSCore__Question* self, const char* param1);
int KNSCore__Question_Metacall(KNSCore__Question* self, int param1, int param2, void** param3);
libqt_string KNSCore__Question_Tr(const char* s);
int KNSCore__Question_Ask(KNSCore__Question* self);
void KNSCore__Question_SetQuestionType(KNSCore__Question* self);
int KNSCore__Question_QuestionType(const KNSCore__Question* self);
void KNSCore__Question_SetQuestion(KNSCore__Question* self, const libqt_string newQuestion);
libqt_string KNSCore__Question_Question(const KNSCore__Question* self);
void KNSCore__Question_SetTitle(KNSCore__Question* self, const libqt_string newTitle);
libqt_string KNSCore__Question_Title(const KNSCore__Question* self);
void KNSCore__Question_SetList(KNSCore__Question* self, const libqt_list /* of libqt_string */ newList);
libqt_list /* of libqt_string */ KNSCore__Question_List(const KNSCore__Question* self);
void KNSCore__Question_SetEntry(KNSCore__Question* self, const KNSCore__Entry* entry);
KNSCore__Entry* KNSCore__Question_Entry(const KNSCore__Question* self);
void KNSCore__Question_SetResponse(KNSCore__Question* self, int response);
void KNSCore__Question_SetResponse2(KNSCore__Question* self, const libqt_string response);
libqt_string KNSCore__Question_Response(const KNSCore__Question* self);
libqt_string KNSCore__Question_Tr2(const char* s, const char* c);
libqt_string KNSCore__Question_Tr3(const char* s, const char* c, int n);
void KNSCore__Question_SetQuestionType1(KNSCore__Question* self, int newType);
void KNSCore__Question_OnMetacall(KNSCore__Question* self, intptr_t slot);
int KNSCore__Question_QBaseMetacall(KNSCore__Question* self, int param1, int param2, void** param3);
bool KNSCore__Question_Event(KNSCore__Question* self, QEvent* event);
void KNSCore__Question_OnEvent(KNSCore__Question* self, intptr_t slot);
bool KNSCore__Question_QBaseEvent(KNSCore__Question* self, QEvent* event);
bool KNSCore__Question_EventFilter(KNSCore__Question* self, QObject* watched, QEvent* event);
void KNSCore__Question_OnEventFilter(KNSCore__Question* self, intptr_t slot);
bool KNSCore__Question_QBaseEventFilter(KNSCore__Question* self, QObject* watched, QEvent* event);
void KNSCore__Question_TimerEvent(KNSCore__Question* self, QTimerEvent* event);
void KNSCore__Question_OnTimerEvent(KNSCore__Question* self, intptr_t slot);
void KNSCore__Question_QBaseTimerEvent(KNSCore__Question* self, QTimerEvent* event);
void KNSCore__Question_ChildEvent(KNSCore__Question* self, QChildEvent* event);
void KNSCore__Question_OnChildEvent(KNSCore__Question* self, intptr_t slot);
void KNSCore__Question_QBaseChildEvent(KNSCore__Question* self, QChildEvent* event);
void KNSCore__Question_CustomEvent(KNSCore__Question* self, QEvent* event);
void KNSCore__Question_OnCustomEvent(KNSCore__Question* self, intptr_t slot);
void KNSCore__Question_QBaseCustomEvent(KNSCore__Question* self, QEvent* event);
void KNSCore__Question_ConnectNotify(KNSCore__Question* self, const QMetaMethod* signal);
void KNSCore__Question_OnConnectNotify(KNSCore__Question* self, intptr_t slot);
void KNSCore__Question_QBaseConnectNotify(KNSCore__Question* self, const QMetaMethod* signal);
void KNSCore__Question_DisconnectNotify(KNSCore__Question* self, const QMetaMethod* signal);
void KNSCore__Question_OnDisconnectNotify(KNSCore__Question* self, intptr_t slot);
void KNSCore__Question_QBaseDisconnectNotify(KNSCore__Question* self, const QMetaMethod* signal);
QObject* KNSCore__Question_Sender(const KNSCore__Question* self);
void KNSCore__Question_OnSender(const KNSCore__Question* self, intptr_t slot);
QObject* KNSCore__Question_QBaseSender(const KNSCore__Question* self);
int KNSCore__Question_SenderSignalIndex(const KNSCore__Question* self);
void KNSCore__Question_OnSenderSignalIndex(const KNSCore__Question* self, intptr_t slot);
int KNSCore__Question_QBaseSenderSignalIndex(const KNSCore__Question* self);
int KNSCore__Question_Receivers(const KNSCore__Question* self, const char* signal);
void KNSCore__Question_OnReceivers(const KNSCore__Question* self, intptr_t slot);
int KNSCore__Question_QBaseReceivers(const KNSCore__Question* self, const char* signal);
bool KNSCore__Question_IsSignalConnected(const KNSCore__Question* self, const QMetaMethod* signal);
void KNSCore__Question_OnIsSignalConnected(const KNSCore__Question* self, intptr_t slot);
bool KNSCore__Question_QBaseIsSignalConnected(const KNSCore__Question* self, const QMetaMethod* signal);
void KNSCore__Question_Delete(KNSCore__Question* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
