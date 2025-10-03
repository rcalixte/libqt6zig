#pragma once
#ifndef SRC_EXTRAS_KTEXTEDITORC_LIBCOMMAND_H
#define SRC_EXTRAS_KTEXTEDITORC_LIBCOMMAND_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KTextEditor__Command)
typedef KTextEditor::Command KTextEditor__Command;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KTextEditor__Range)
typedef KTextEditor::Range KTextEditor__Range;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KTextEditor__View)
typedef KTextEditor::View KTextEditor__View;
#endif
#else
typedef struct KCompletion KCompletion;
typedef struct KTextEditor__Command KTextEditor__Command;
typedef struct KTextEditor__Range KTextEditor__Range;
typedef struct KTextEditor__View KTextEditor__View;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
#endif

KTextEditor__Command* KTextEditor__Command_new(const libqt_list /* of libqt_string */ cmds);
KTextEditor__Command* KTextEditor__Command_new2(const libqt_list /* of libqt_string */ cmds, QObject* parent);
QMetaObject* KTextEditor__Command_MetaObject(const KTextEditor__Command* self);
void* KTextEditor__Command_Metacast(KTextEditor__Command* self, const char* param1);
int KTextEditor__Command_Metacall(KTextEditor__Command* self, int param1, int param2, void** param3);
libqt_string KTextEditor__Command_Tr(const char* s);
libqt_list /* of libqt_string */ KTextEditor__Command_Cmds(const KTextEditor__Command* self);
bool KTextEditor__Command_SupportsRange(KTextEditor__Command* self, const libqt_string cmd);
bool KTextEditor__Command_Exec(KTextEditor__Command* self, KTextEditor__View* view, const libqt_string cmd, libqt_string msg, const KTextEditor__Range* range);
bool KTextEditor__Command_Help(KTextEditor__Command* self, KTextEditor__View* view, const libqt_string cmd, libqt_string msg);
KCompletion* KTextEditor__Command_CompletionObject(KTextEditor__Command* self, KTextEditor__View* view, const libqt_string cmdname);
bool KTextEditor__Command_WantsToProcessText(KTextEditor__Command* self, const libqt_string cmdname);
void KTextEditor__Command_ProcessText(KTextEditor__Command* self, KTextEditor__View* view, const libqt_string text);
libqt_string KTextEditor__Command_Tr2(const char* s, const char* c);
libqt_string KTextEditor__Command_Tr3(const char* s, const char* c, int n);
void KTextEditor__Command_OnMetacall(KTextEditor__Command* self, intptr_t slot);
int KTextEditor__Command_QBaseMetacall(KTextEditor__Command* self, int param1, int param2, void** param3);
void KTextEditor__Command_OnSupportsRange(KTextEditor__Command* self, intptr_t slot);
bool KTextEditor__Command_QBaseSupportsRange(KTextEditor__Command* self, const libqt_string cmd);
void KTextEditor__Command_OnExec(KTextEditor__Command* self, intptr_t slot);
bool KTextEditor__Command_QBaseExec(KTextEditor__Command* self, KTextEditor__View* view, const libqt_string cmd, libqt_string msg, const KTextEditor__Range* range);
void KTextEditor__Command_OnHelp(KTextEditor__Command* self, intptr_t slot);
bool KTextEditor__Command_QBaseHelp(KTextEditor__Command* self, KTextEditor__View* view, const libqt_string cmd, libqt_string msg);
void KTextEditor__Command_OnCompletionObject(KTextEditor__Command* self, intptr_t slot);
KCompletion* KTextEditor__Command_QBaseCompletionObject(KTextEditor__Command* self, KTextEditor__View* view, const libqt_string cmdname);
void KTextEditor__Command_OnWantsToProcessText(KTextEditor__Command* self, intptr_t slot);
bool KTextEditor__Command_QBaseWantsToProcessText(KTextEditor__Command* self, const libqt_string cmdname);
void KTextEditor__Command_OnProcessText(KTextEditor__Command* self, intptr_t slot);
void KTextEditor__Command_QBaseProcessText(KTextEditor__Command* self, KTextEditor__View* view, const libqt_string text);
bool KTextEditor__Command_Event(KTextEditor__Command* self, QEvent* event);
void KTextEditor__Command_OnEvent(KTextEditor__Command* self, intptr_t slot);
bool KTextEditor__Command_QBaseEvent(KTextEditor__Command* self, QEvent* event);
bool KTextEditor__Command_EventFilter(KTextEditor__Command* self, QObject* watched, QEvent* event);
void KTextEditor__Command_OnEventFilter(KTextEditor__Command* self, intptr_t slot);
bool KTextEditor__Command_QBaseEventFilter(KTextEditor__Command* self, QObject* watched, QEvent* event);
void KTextEditor__Command_TimerEvent(KTextEditor__Command* self, QTimerEvent* event);
void KTextEditor__Command_OnTimerEvent(KTextEditor__Command* self, intptr_t slot);
void KTextEditor__Command_QBaseTimerEvent(KTextEditor__Command* self, QTimerEvent* event);
void KTextEditor__Command_ChildEvent(KTextEditor__Command* self, QChildEvent* event);
void KTextEditor__Command_OnChildEvent(KTextEditor__Command* self, intptr_t slot);
void KTextEditor__Command_QBaseChildEvent(KTextEditor__Command* self, QChildEvent* event);
void KTextEditor__Command_CustomEvent(KTextEditor__Command* self, QEvent* event);
void KTextEditor__Command_OnCustomEvent(KTextEditor__Command* self, intptr_t slot);
void KTextEditor__Command_QBaseCustomEvent(KTextEditor__Command* self, QEvent* event);
void KTextEditor__Command_ConnectNotify(KTextEditor__Command* self, const QMetaMethod* signal);
void KTextEditor__Command_OnConnectNotify(KTextEditor__Command* self, intptr_t slot);
void KTextEditor__Command_QBaseConnectNotify(KTextEditor__Command* self, const QMetaMethod* signal);
void KTextEditor__Command_DisconnectNotify(KTextEditor__Command* self, const QMetaMethod* signal);
void KTextEditor__Command_OnDisconnectNotify(KTextEditor__Command* self, intptr_t slot);
void KTextEditor__Command_QBaseDisconnectNotify(KTextEditor__Command* self, const QMetaMethod* signal);
QObject* KTextEditor__Command_Sender(const KTextEditor__Command* self);
void KTextEditor__Command_OnSender(const KTextEditor__Command* self, intptr_t slot);
QObject* KTextEditor__Command_QBaseSender(const KTextEditor__Command* self);
int KTextEditor__Command_SenderSignalIndex(const KTextEditor__Command* self);
void KTextEditor__Command_OnSenderSignalIndex(const KTextEditor__Command* self, intptr_t slot);
int KTextEditor__Command_QBaseSenderSignalIndex(const KTextEditor__Command* self);
int KTextEditor__Command_Receivers(const KTextEditor__Command* self, const char* signal);
void KTextEditor__Command_OnReceivers(const KTextEditor__Command* self, intptr_t slot);
int KTextEditor__Command_QBaseReceivers(const KTextEditor__Command* self, const char* signal);
bool KTextEditor__Command_IsSignalConnected(const KTextEditor__Command* self, const QMetaMethod* signal);
void KTextEditor__Command_OnIsSignalConnected(const KTextEditor__Command* self, intptr_t slot);
bool KTextEditor__Command_QBaseIsSignalConnected(const KTextEditor__Command* self, const QMetaMethod* signal);
void KTextEditor__Command_Delete(KTextEditor__Command* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
