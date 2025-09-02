#pragma once
#ifndef SRC_EXTRAS_KTEXTWIDGETSC_LIBKREPLACE_H
#define SRC_EXTRAS_KTEXTWIDGETSC_LIBKREPLACE_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KFind KFind;
typedef struct KReplace KReplace;
typedef struct QChildEvent QChildEvent;
typedef struct QDialog QDialog;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
typedef struct QWidget QWidget;
#endif

KReplace* KReplace_new(const libqt_string pattern, const libqt_string replacement, long options);
KReplace* KReplace_new2(const libqt_string pattern, const libqt_string replacement, long options, QWidget* parent, QWidget* replaceDialog);
KReplace* KReplace_new3(const libqt_string pattern, const libqt_string replacement, long options, QWidget* parent);
QMetaObject* KReplace_MetaObject(const KReplace* self);
void* KReplace_Metacast(KReplace* self, const char* param1);
int KReplace_Metacall(KReplace* self, int param1, int param2, void** param3);
libqt_string KReplace_Tr(const char* s);
int KReplace_NumReplacements(const KReplace* self);
void KReplace_ResetCounts(KReplace* self);
int KReplace_Replace(KReplace* self);
QDialog* KReplace_ReplaceNextDialog(KReplace* self);
void KReplace_CloseReplaceNextDialog(KReplace* self);
int KReplace_Replace2(libqt_string text, const libqt_string pattern, const libqt_string replacement, int index, long options, int* replacedLength);
bool KReplace_ShouldRestart(const KReplace* self, bool forceAsking, bool showNumMatches);
void KReplace_DisplayFinalDialog(const KReplace* self);
void KReplace_TextReplaced(KReplace* self, const libqt_string text, int replacementIndex, int replacedLength, int matchedLength);
void KReplace_Connect_TextReplaced(KReplace* self, intptr_t slot);
libqt_string KReplace_Tr2(const char* s, const char* c);
libqt_string KReplace_Tr3(const char* s, const char* c, int n);
QDialog* KReplace_ReplaceNextDialog1(KReplace* self, bool create);
void KReplace_OnMetacall(KReplace* self, intptr_t slot);
int KReplace_QBaseMetacall(KReplace* self, int param1, int param2, void** param3);
void KReplace_OnResetCounts(KReplace* self, intptr_t slot);
void KReplace_QBaseResetCounts(KReplace* self);
void KReplace_OnShouldRestart(const KReplace* self, intptr_t slot);
bool KReplace_QBaseShouldRestart(const KReplace* self, bool forceAsking, bool showNumMatches);
void KReplace_OnDisplayFinalDialog(const KReplace* self, intptr_t slot);
void KReplace_QBaseDisplayFinalDialog(const KReplace* self);
void KReplace_SetOptions(KReplace* self, long options);
void KReplace_OnSetOptions(KReplace* self, intptr_t slot);
void KReplace_QBaseSetOptions(KReplace* self, long options);
bool KReplace_ValidateMatch(KReplace* self, const libqt_string text, int index, int matchedlength);
void KReplace_OnValidateMatch(KReplace* self, intptr_t slot);
bool KReplace_QBaseValidateMatch(KReplace* self, const libqt_string text, int index, int matchedlength);
bool KReplace_Event(KReplace* self, QEvent* event);
void KReplace_OnEvent(KReplace* self, intptr_t slot);
bool KReplace_QBaseEvent(KReplace* self, QEvent* event);
bool KReplace_EventFilter(KReplace* self, QObject* watched, QEvent* event);
void KReplace_OnEventFilter(KReplace* self, intptr_t slot);
bool KReplace_QBaseEventFilter(KReplace* self, QObject* watched, QEvent* event);
void KReplace_TimerEvent(KReplace* self, QTimerEvent* event);
void KReplace_OnTimerEvent(KReplace* self, intptr_t slot);
void KReplace_QBaseTimerEvent(KReplace* self, QTimerEvent* event);
void KReplace_ChildEvent(KReplace* self, QChildEvent* event);
void KReplace_OnChildEvent(KReplace* self, intptr_t slot);
void KReplace_QBaseChildEvent(KReplace* self, QChildEvent* event);
void KReplace_CustomEvent(KReplace* self, QEvent* event);
void KReplace_OnCustomEvent(KReplace* self, intptr_t slot);
void KReplace_QBaseCustomEvent(KReplace* self, QEvent* event);
void KReplace_ConnectNotify(KReplace* self, const QMetaMethod* signal);
void KReplace_OnConnectNotify(KReplace* self, intptr_t slot);
void KReplace_QBaseConnectNotify(KReplace* self, const QMetaMethod* signal);
void KReplace_DisconnectNotify(KReplace* self, const QMetaMethod* signal);
void KReplace_OnDisconnectNotify(KReplace* self, intptr_t slot);
void KReplace_QBaseDisconnectNotify(KReplace* self, const QMetaMethod* signal);
QWidget* KReplace_ParentWidget(const KReplace* self);
void KReplace_OnParentWidget(const KReplace* self, intptr_t slot);
QWidget* KReplace_QBaseParentWidget(const KReplace* self);
QWidget* KReplace_DialogsParent(const KReplace* self);
void KReplace_OnDialogsParent(const KReplace* self, intptr_t slot);
QWidget* KReplace_QBaseDialogsParent(const KReplace* self);
QObject* KReplace_Sender(const KReplace* self);
void KReplace_OnSender(const KReplace* self, intptr_t slot);
QObject* KReplace_QBaseSender(const KReplace* self);
int KReplace_SenderSignalIndex(const KReplace* self);
void KReplace_OnSenderSignalIndex(const KReplace* self, intptr_t slot);
int KReplace_QBaseSenderSignalIndex(const KReplace* self);
int KReplace_Receivers(const KReplace* self, const char* signal);
void KReplace_OnReceivers(const KReplace* self, intptr_t slot);
int KReplace_QBaseReceivers(const KReplace* self, const char* signal);
bool KReplace_IsSignalConnected(const KReplace* self, const QMetaMethod* signal);
void KReplace_OnIsSignalConnected(const KReplace* self, intptr_t slot);
bool KReplace_QBaseIsSignalConnected(const KReplace* self, const QMetaMethod* signal);
void KReplace_Delete(KReplace* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
